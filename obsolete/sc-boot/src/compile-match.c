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
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm o_87 (ATerm));
ATerm Rec_2 (ATerm, ATerm s_63 (ATerm), ATerm t_63 (ATerm));
ATerm Let_2 (ATerm, ATerm u_63 (ATerm), ATerm v_63 (ATerm));
ATerm sboundin_3 (ATerm, ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm r_87 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm r_63 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm k_87 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm h_62 (ATerm));
ATerm Scope_2 (ATerm, ATerm w_64 (ATerm), ATerm x_64 (ATerm));
ATerm tboundin_3 (ATerm, ATerm l_87 (ATerm), ATerm m_87 (ATerm), ATerm n_87 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm p_71 (ATerm), ATerm q_71 (ATerm));
ATerm for_3 (ATerm, ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm u_71 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm DistBinding_2 (ATerm, ATerm t_74 (ATerm), ATerm u_74 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm RnBinding_2 (ATerm, ATerm z_74 (ATerm), ATerm a_75 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm n_74 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm v_73 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm a_74 (ATerm));
ATerm rename_4 (ATerm, ATerm b_75 (ATerm, ATerm (ATerm)), ATerm c_75 (ATerm), ATerm d_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_75 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm Seqs_1 (ATerm, ATerm p_60 (ATerm));
ATerm Call_2 (ATerm, ATerm g_64 (ATerm), ATerm h_64 (ATerm));
ATerm Prim_2 (ATerm, ATerm z_64 (ATerm), ATerm a_65 (ATerm));
ATerm Str_1 (ATerm, ATerm o_0 (ATerm));
ATerm Real_1 (ATerm, ATerm n_0 (ATerm));
ATerm Int_1 (ATerm, ATerm m_0 (ATerm));
ATerm Var_1 (ATerm, ATerm d_63 (ATerm));
ATerm Op_2 (ATerm, ATerm h_63 (ATerm), ATerm i_63 (ATerm));
ATerm Build_1 (ATerm, ATerm t_64 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm simple_strategy_0 (ATerm);
ATerm RowLet_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm e_81 (ATerm));
ATerm MatrixScope_0 (ATerm);
ATerm assert_1 (ATerm, ATerm t_68 (ATerm));
ATerm WildPat_0 (ATerm);
ATerm default_state_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm MatchCons_2 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm ConsTransition_1 (ATerm, ATerm h_65 (ATerm));
ATerm Transition_0 (ATerm);
ATerm RZip2_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm rzip_1 (ATerm, ATerm i_81 (ATerm));
ATerm transitions_0 (ATerm);
ATerm Uniq_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm e_80 (ATerm));
ATerm uniq_0 (ATerm);
ATerm offsets_0 (ATerm);
ATerm length_0 (ATerm);
ATerm ConsArgs_0 (ATerm);
ATerm filter_1 (ATerm, ATerm g_75 (ATerm));
ATerm outedges_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Mixture_0 (ATerm);
ATerm ShiftColumnRow_0 (ATerm);
ATerm ShiftColumn_0 (ATerm);
ATerm Wld_0 (ATerm);
ATerm As_2 (ATerm, ATerm t_61 (ATerm), ATerm u_61 (ATerm));
ATerm Row_3 (ATerm, ATerm i_60 (ATerm), ATerm j_60 (ATerm), ATerm k_60 (ATerm));
ATerm SkipWild_0 (ATerm);
ATerm MatrixRowsEmpty_0 (ATerm);
ATerm reduce_matrix_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm q_68 (ATerm));
ATerm restore_always_2 (ATerm, ATerm m_83 (ATerm), ATerm n_83 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm p_68 (ATerm));
ATerm scope_2 (ATerm, ATerm r_68 (ATerm), ATerm s_68 (ATerm));
ATerm matrix_to_dfa_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
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
ATerm conc_0 (ATerm);
ATerm MatrixMerge_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm));
ATerm crush_3 (ATerm, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm));
ATerm collect_om_1 (ATerm, ATerm a_78 (ATerm));
ATerm collect_1 (ATerm, ATerm c_78 (ATerm));
ATerm collect_offsets_0 (ATerm);
ATerm CollectSubst_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm IgnoreVar_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm e_77 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm a_76 (ATerm), ATerm b_76 (ATerm));
ATerm unions_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm list_1 (ATerm, ATerm e_79 (ATerm));
ATerm CollectSplit_2 (ATerm, ATerm r_78 (ATerm), ATerm s_78 (ATerm));
ATerm is_int_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm collect_split_1 (ATerm, ATerm n_78 (ATerm));
ATerm collect_split_2 (ATerm, ATerm p_78 (ATerm), ATerm q_78 (ATerm));
ATerm collect_substitutions_0 (ATerm);
ATerm Annotate_1 (ATerm, ATerm m_88 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm add_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm w_80 (ATerm), ATerm x_80 (ATerm));
ATerm NZip00_0 (ATerm);
ATerm nzip0_1 (ATerm, ATerm f_81 (ATerm));
ATerm Propagate_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm o_83 (ATerm));
ATerm term_to_matrix_0 (ATerm);
ATerm MatchToMatrix_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm y_70 (ATerm), ATerm z_70 (ATerm));
ATerm repeat_1 (ATerm, ATerm b_71 (ATerm));
ATerm downup_1 (ATerm, ATerm s_83 (ATerm));
ATerm match_to_matrix_0 (ATerm);
ATerm match_to_dfa_0 (ATerm);
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
ATerm compile_match_comp_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm r_3 = NULL,s_3 = NULL,t_3 = NULL;
  r_3 = t;
  q_3 :
  if(((ATgetType(r_3) == AT_LIST) && ((ATermList) r_3 != ATempty)))
    {
      s_3 = ATgetFirst((ATermList) r_3);
      t_3 = (ATerm) ATgetNext((ATermList) r_3);
      t = not_null(s_3);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm o_87 (ATerm))
{
  ATerm m_8 = t;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, o_87);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
            d_4 = t;
            y_3 :
            if(match_cons(d_4, sym__2))
              {
                e_4 = ATgetArgument(d_4, 0);
                i_4 = ATgetArgument(d_4, 1);
                z_3 :
                if(match_cons(e_4, sym_SDef_3))
                  {
                    f_4 = ATgetArgument(e_4, 0);
                    g_4 = ATgetArgument(e_4, 1);
                    h_4 = ATgetArgument(e_4, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(i_4), not_null(g_4), not_null(h_4));
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
      t = m_8;
      {
        ATerm n_8 = t;
        if((PushChoice() == 0))
          {
            ATerm p_0 (ATerm t)
            {
              t = split_2(t, _id, o_87);
              {
                ATerm q_0 (ATerm t)
                {
                  ATerm m_4 = NULL,n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL;
                  m_4 = t;
                  b_4 :
                  if(match_cons(m_4, sym__2))
                    {
                      n_4 = ATgetArgument(m_4, 0);
                      q_4 = ATgetArgument(m_4, 1);
                      c_4 :
                      if(match_cons(n_4, sym_VarDec_2))
                        {
                          o_4 = ATgetArgument(n_4, 0);
                          p_4 = ATgetArgument(n_4, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(q_4), not_null(p_4));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, q_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, p_0, _id);
            PopChoice();
          }
        else
          {
            t = n_8;
            {
              ATerm r_0 (ATerm t)
              {
                t = o_87(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, r_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm s_63 (ATerm), ATerm t_63 (ATerm))
{
  ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  z_4 :
  if(match_cons(a_5, sym_Rec_2))
    {
      b_5 = ATgetArgument(a_5, 0);
      c_5 = ATgetArgument(a_5, 1);
      {
        ATerm f_5 = NULL;
        t = not_null(b_5);
        {
          ATerm h_5 = NULL;
          t = s_63(t);
          {
            f_5 = t;
            {
              t = not_null(c_5);
              {
                t = t_63(t);
                {
                  h_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(f_5), not_null(h_5));
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
ATerm Let_2 (ATerm t, ATerm u_63 (ATerm), ATerm v_63 (ATerm))
{
  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL;
  q_5 = t;
  p_5 :
  if(match_cons(q_5, sym_Let_2))
    {
      r_5 = ATgetArgument(q_5, 0);
      s_5 = ATgetArgument(q_5, 1);
      {
        ATerm v_5 = NULL;
        t = not_null(r_5);
        {
          ATerm x_5 = NULL;
          t = u_63(t);
          {
            v_5 = t;
            {
              t = not_null(s_5);
              {
                t = v_63(t);
                {
                  x_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_5), not_null(x_5));
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
ATerm sboundin_3 (ATerm t, ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm r_87 (ATerm))
{
  ATerm o_8 = t;
  if((PushChoice() == 0))
    {
      t = Let_2(t, p_87, p_87);
      PopChoice();
    }
  else
    {
      t = o_8;
      {
        ATerm p_8 = t;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, r_87, r_87, p_87);
            PopChoice();
          }
        else
          {
            t = p_8;
            t = Rec_2(t, r_87, p_87);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym_Rec_2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      t = (ATerm) ATinsert(ATempty, not_null(f_6));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
  o_6 = t;
  n_6 :
  if(match_cons(o_6, sym_SDef_3))
    {
      p_6 = ATgetArgument(o_6, 0);
      q_6 = ATgetArgument(o_6, 1);
      r_6 = ATgetArgument(o_6, 2);
      {
        t = not_null(q_6);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
            v_6 = t;
            m_6 :
            if(match_cons(v_6, sym_VarDec_2))
              {
                w_6 = ATgetArgument(v_6, 0);
                x_6 = ATgetArgument(v_6, 1);
                t = not_null(w_6);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, s_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm f_7 = NULL,g_7 = NULL,h_7 = NULL;
  f_7 = t;
  e_7 :
  if(match_cons(f_7, sym_Let_2))
    {
      g_7 = ATgetArgument(f_7, 0);
      h_7 = ATgetArgument(f_7, 1);
      {
        t = not_null(g_7);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
            k_7 = t;
            d_7 :
            if(match_cons(k_7, sym_SDef_3))
              {
                l_7 = ATgetArgument(k_7, 0);
                m_7 = ATgetArgument(k_7, 1);
                n_7 = ATgetArgument(k_7, 2);
                t = not_null(l_7);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, t_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm r_63 (ATerm))
{
  ATerm w_7 = NULL,x_7 = NULL;
  w_7 = t;
  v_7 :
  if(match_cons(w_7, sym_SVar_1))
    {
      x_7 = ATgetArgument(w_7, 0);
      {
        ATerm z_7 = NULL;
        t = not_null(x_7);
        {
          t = r_63(t);
          {
            z_7 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(z_7));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    ATerm u_8 = t;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        PopChoice();
      }
    else
      {
        t = u_8;
        {
          ATerm v_8 = t;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              PopChoice();
            }
          else
            {
              t = v_8;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, u_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm k_87 (ATerm))
{
  t = Scope_2(t, k_87, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm h_62 (ATerm))
{
  ATerm g_8 = NULL,h_8 = NULL;
  g_8 = t;
  f_8 :
  if(match_cons(g_8, sym_DynamicRules_1))
    {
      h_8 = ATgetArgument(g_8, 0);
      {
        ATerm j_8 = NULL;
        t = not_null(h_8);
        {
          t = h_62(t);
          {
            j_8 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(j_8));
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
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
  r_8 = t;
  q_8 :
  if(match_cons(r_8, sym_Scope_2))
    {
      s_8 = ATgetArgument(r_8, 0);
      t_8 = ATgetArgument(r_8, 1);
      {
        ATerm w_8 = NULL;
        t = not_null(s_8);
        {
          ATerm y_8 = NULL;
          t = w_64(t);
          {
            w_8 = t;
            {
              t = not_null(t_8);
              {
                t = x_64(t);
                {
                  y_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_8), not_null(y_8));
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
  ATerm x_8 = t;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, n_87, l_87);
      PopChoice();
    }
  else
    {
      t = x_8;
      t = DynamicRules_1(t, l_87);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  f_9 = t;
  e_9 :
  if(match_cons(f_9, sym_DynamicRules_1))
    {
      g_9 = ATgetArgument(f_9, 0);
      {
        t = not_null(g_9);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm l_9 = NULL,m_9 = NULL;
  l_9 = t;
  k_9 :
  if(match_cons(l_9, sym_Var_1))
    {
      m_9 = ATgetArgument(l_9, 0);
      t = (ATerm) ATinsert(ATempty, not_null(m_9));
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
  s_9 = t;
  q_9 :
  if(match_cons(s_9, sym__2))
    {
      t_9 = ATgetArgument(s_9, 0);
      u_9 = ATgetArgument(s_9, 1);
      r_9 :
      if(((ATgetType(u_9) == AT_LIST) && ((ATermList) u_9 != ATempty)))
        {
          v_9 = ATgetFirst((ATermList) u_9);
          w_9 = (ATerm) ATgetNext((ATermList) u_9);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_9)), not_null(v_9)), not_null(w_9));
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
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL;
  l_10 = t;
  j_10 :
  if(((ATgetType(l_10) == AT_LIST) && ((ATermList) l_10 != ATempty)))
    {
      m_10 = ATgetFirst((ATermList) l_10);
      p_10 = (ATerm) ATgetNext((ATermList) l_10);
      k_10 :
      if(match_cons(m_10, sym__2))
        {
          n_10 = ATgetArgument(m_10, 0);
          o_10 = ATgetArgument(m_10, 1);
          {
            ATerm t_10 = NULL,u_10 = NULL,a_11 = NULL,g_11 = NULL;
            ATerm z_8;
            z_8 = t;
            {
              ATerm v_10 = NULL;
              ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
              t = not_null(o_10);
              {
                v_10 = t;
                {
                  t = SSL_explode_term(not_null(v_10));
                  {
                    x_10 = t;
                    e_10 :
                    if(match_cons(x_10, sym__2))
                      {
                        y_10 = ATgetArgument(x_10, 0);
                        z_10 = ATgetArgument(x_10, 1);
                        {
                          if(((t_10 != NULL) && (t_10 != y_10)))
                            _fail(y_10);
                          else
                            t_10 = y_10;
                          if(((u_10 != NULL) && (u_10 != z_10)))
                            _fail(z_10);
                          else
                            u_10 = z_10;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = z_8;
            {
              ATerm a_9;
              a_9 = t;
              {
                ATerm b_11 = NULL;
                ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
                t = not_null(n_10);
                {
                  b_11 = t;
                  {
                    t = SSL_explode_term(not_null(b_11));
                    {
                      d_11 = t;
                      h_10 :
                      if(match_cons(d_11, sym__2))
                        {
                          e_11 = ATgetArgument(d_11, 0);
                          f_11 = ATgetArgument(d_11, 1);
                          {
                            if(((t_10 != NULL) && (t_10 != e_11)))
                              _fail(e_11);
                            else
                              t_10 = e_11;
                            if(((a_11 != NULL) && (a_11 != f_11)))
                              _fail(f_11);
                            else
                              a_11 = f_11;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = a_9;
              {
                ATerm h_11 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_11), not_null(u_10));
                {
                  t = zip_1(t, _id);
                  {
                    h_11 = t;
                    if(((g_11 != NULL) && (g_11 != h_11)))
                      _fail(h_11);
                    else
                      g_11 = h_11;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_11), not_null(p_10));
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
  ATerm r_12 = NULL,s_12 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
  r_12 = t;
  p_11 :
  if(((ATgetType(r_12) == AT_LIST) && ((ATermList) r_12 != ATempty)))
    {
      s_12 = ATgetFirst((ATermList) r_12);
      y_13 = (ATerm) ATgetNext((ATermList) r_12);
      q_11 :
      if(match_cons(s_12, sym__2))
        {
          w_13 = ATgetArgument(s_12, 0);
          x_13 = ATgetArgument(s_12, 1);
          {
            ATerm a_14 = NULL;
            if(((w_13 != NULL) && (w_13 != x_13)))
              _fail(x_13);
            else
              w_13 = x_13;
            {
              if(((a_14 != NULL) && (a_14 != y_13)))
                _fail(y_13);
              else
                a_14 = y_13;
              t = not_null(a_14);
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
  ATerm c_14 (ATerm t)
  {
    ATerm b_9 = t;
    if((PushChoice() == 0))
      {
        t = p_71(t);
        PopChoice();
      }
    else
      {
        t = b_9;
        {
          t = q_71(t);
          t = c_14(t);
        }
      }
    return(t);
  }
  t = c_14(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm s_71 (ATerm), ATerm t_71 (ATerm), ATerm u_71 (ATerm))
{
  t = s_71(t);
  t = while_not_2(t, t_71, u_71);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm c_9 = t;
  if((PushChoice() == 0))
    {
      ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL;
      g_14 = t;
      e_14 :
      if(match_cons(g_14, sym__2))
        {
          h_14 = ATgetArgument(g_14, 0);
          i_14 = ATgetArgument(g_14, 1);
          {
            t = not_null(h_14);
            {
              ATerm o_14 (ATerm t)
              {
                ATerm d_9 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = d_9;
                    {
                      ATerm h_9 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm v_0 (ATerm t)
                          {
                            t = not_null(i_14);
                            return(t);
                          }
                          t = HdMember_1(t, v_0);
                          t = o_14(t);
                          PopChoice();
                        }
                      else
                        {
                          t = h_9;
                          t = Cons_2(t, _id, o_14);
                        }
                    }
                  }
                return(t);
              }
              t = o_14(t);
            }
          }
        }
      else
        _fail(t);
      PopChoice();
    }
  else
    {
      t = c_9;
      {
        ATerm w_0 (ATerm t)
        {
          ATerm l_14 = NULL;
          l_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(l_14));
          return(t);
        }
        ATerm x_0 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm y_0 (ATerm t)
        {
          ATerm i_9 = t;
          if((PushChoice() == 0))
            {
              ATerm z_0 (ATerm t)
              {
                ATerm j_9 = t;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    PopChoice();
                  }
                else
                  {
                    t = j_9;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, z_0);
              PopChoice();
            }
          else
            {
              t = i_9;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, w_0, x_0, y_0);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm c_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm t_14 (ATerm t)
  {
    ATerm n_9 = t;
    if((PushChoice() == 0))
      {
        t = a_73(t);
        PopChoice();
      }
    else
      {
        t = n_9;
        {
          ATerm o_9 = t;
          if((PushChoice() == 0))
            {
              ATerm r_14 = NULL;
              ATerm p_9;
              p_9 = t;
              {
                ATerm s_14 = NULL;
                t = b_73(t);
                {
                  s_14 = t;
                  if(((r_14 != NULL) && (r_14 != s_14)))
                    _fail(s_14);
                  else
                    r_14 = s_14;
                }
              }
              t = p_9;
              {
                ATerm a_1 (ATerm t)
                {
                  ATerm c_1 (ATerm t)
                  {
                    t = not_null(r_14);
                    return(t);
                  }
                  t = split_2(t, t_14, c_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm b_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = c_73(t, a_1, t_14, b_1);
                {
                  ATerm d_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, d_1, union_0, _id);
                }
              }
              PopChoice();
            }
          else
            {
              t = o_9;
              {
                ATerm e_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, e_1, union_0, t_14);
              }
            }
        }
      }
    return(t);
  }
  t = t_14(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm x_9 = t;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        PopChoice();
      }
    else
      {
        t = x_9;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, f_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,v_15 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL;
  f_16 = t;
  x_14 :
  if(match_cons(f_16, sym_LRule_1))
    {
      g_16 = ATgetArgument(f_16, 0);
      y_14 :
      if(match_cons(g_16, sym_Rule_3))
        {
          p_15 = ATgetArgument(g_16, 0);
          q_15 = ATgetArgument(g_16, 1);
          v_15 = ATgetArgument(g_16, 2);
          {
            t = not_null(p_15);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(f_16, sym_Scope_2))
        {
          g_16 = ATgetArgument(f_16, 0);
          h_16 = ATgetArgument(f_16, 1);
          t = not_null(g_16);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm t_74 (ATerm), ATerm u_74 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL;
  t_16 = t;
  s_16 :
  if(match_cons(t_16, sym__3))
    {
      u_16 = ATgetArgument(t_16, 0);
      v_16 = ATgetArgument(t_16, 1);
      w_16 = ATgetArgument(t_16, 2);
      {
        t = not_null(u_16);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm a_17 = NULL;
            a_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_17), not_null(w_16));
              t = t_74(t);
            }
            return(t);
          }
          ATerm h_1 (ATerm t)
          {
            ATerm c_17 = NULL;
            c_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(v_16));
              t = t_74(t);
            }
            return(t);
          }
          t = u_74(t, g_1, h_1, _id);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm z_74 (ATerm), ATerm a_75 (ATerm, ATerm (ATerm)))
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  n_17 :
  if(match_cons(o_17, sym__2))
    {
      p_17 = ATgetArgument(o_17, 0);
      q_17 = ATgetArgument(o_17, 1);
      {
        ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL,b_18 = NULL;
        ATerm y_9;
        y_9 = t;
        {
          ATerm w_17 = NULL;
          t = not_null(p_17);
          {
            ATerm x_17 = NULL;
            t = z_74(t);
            {
              w_17 = t;
              {
                if(((t_17 != NULL) && (t_17 != w_17)))
                  _fail(w_17);
                else
                  t_17 = w_17;
                {
                  ATerm y_17 = NULL,a_18 = NULL;
                  t = map_1(t, new_0);
                  {
                    x_17 = t;
                    {
                      if(((u_17 != NULL) && (u_17 != x_17)))
                        _fail(x_17);
                      else
                        u_17 = x_17;
                      {
                        ATerm z_17 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), not_null(u_17));
                        {
                          t = zip_1(t, _id);
                          {
                            z_17 = t;
                            if(((y_17 != NULL) && (y_17 != z_17)))
                              _fail(z_17);
                            else
                              y_17 = z_17;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), not_null(q_17));
                          {
                            t = conc_0(t);
                            {
                              a_18 = t;
                              if(((v_17 != NULL) && (v_17 != a_18)))
                                _fail(a_18);
                              else
                                v_17 = a_18;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = y_9;
        {
          ATerm c_18 = NULL;
          t = not_null(p_17);
          {
            ATerm i_1 (ATerm t)
            {
              t = not_null(u_17);
              return(t);
            }
            t = a_75(t, i_1);
            {
              c_18 = t;
              if(((b_18 != NULL) && (b_18 != c_18)))
                _fail(c_18);
              else
                b_18 = c_18;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(b_18), not_null(q_17), not_null(v_17));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  m_18 = t;
  k_18 :
  if(match_cons(m_18, sym__2))
    {
      n_18 = ATgetArgument(m_18, 0);
      o_18 = ATgetArgument(m_18, 1);
      l_18 :
      if(((ATgetType(o_18) == AT_LIST) && ((ATermList) o_18 != ATempty)))
        {
          p_18 = ATgetFirst((ATermList) o_18);
          q_18 = (ATerm) ATgetNext((ATermList) o_18);
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), not_null(q_18));
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
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
  y_18 = t;
  v_18 :
  if(match_cons(y_18, sym__2))
    {
      z_18 = ATgetArgument(y_18, 0);
      a_19 = ATgetArgument(y_18, 1);
      w_18 :
      if(((ATgetType(a_19) == AT_LIST) && ((ATermList) a_19 != ATempty)))
        {
          b_19 = ATgetFirst((ATermList) a_19);
          e_19 = (ATerm) ATgetNext((ATermList) a_19);
          x_18 :
          if(match_cons(b_19, sym__2))
            {
              c_19 = ATgetArgument(b_19, 0);
              d_19 = ATgetArgument(b_19, 1);
              {
                ATerm g_19 = NULL;
                if(((z_18 != NULL) && (z_18 != c_19)))
                  _fail(c_19);
                else
                  z_18 = c_19;
                {
                  if(((g_19 != NULL) && (g_19 != d_19)))
                    _fail(d_19);
                  else
                    g_19 = d_19;
                  t = not_null(g_19);
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
  ATerm z_9 = t;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      PopChoice();
    }
  else
    {
      t = z_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm n_74 (ATerm, ATerm (ATerm)))
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
  m_19 = t;
  k_19 :
  if(match_cons(m_19, sym__2))
    {
      n_19 = ATgetArgument(m_19, 0);
      o_19 = ATgetArgument(m_19, 1);
      {
        t = not_null(n_19);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm k_1 (ATerm t)
            {
              t = not_null(o_19);
              return(t);
            }
            t = split_2(t, _id, k_1);
            t = lookup_0(t);
            return(t);
          }
          t = n_74(t, j_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm v_73 (ATerm))
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
  v_19 = t;
  u_19 :
  if(match_cons(v_19, sym__2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      {
        t = not_null(w_19);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm a_20 = NULL;
            a_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_20), not_null(x_19));
              t = v_73(t);
            }
            return(t);
          }
          t = _all(t, l_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm a_74 (ATerm))
{
  ATerm e_20 (ATerm t)
  {
    ATerm a_10 = t;
    if((PushChoice() == 0))
      {
        t = a_74(t);
        PopChoice();
      }
    else
      {
        t = a_10;
        t = all_dist_1(t, e_20);
      }
    return(t);
  }
  t = e_20(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm b_75 (ATerm, ATerm (ATerm)), ATerm c_75 (ATerm), ATerm d_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm e_75 (ATerm, ATerm (ATerm)))
{
  ATerm p_20 = NULL;
  p_20 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_20), (ATerm) ATempty);
    {
      ATerm k_21 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          ATerm b_10 = t;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, b_75);
              PopChoice();
            }
          else
            {
              t = b_10;
              {
                t = RnBinding_2(t, c_75, e_75);
                t = DistBinding_2(t, k_21, d_75);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, m_1);
        return(t);
      }
      t = k_21(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm l_21 (ATerm t, ATerm m_21 (ATerm))
  {
    t = Scope_2(t, m_21, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, l_21);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm Seqs_1 (ATerm t, ATerm p_60 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym_Seqs_1))
    {
      r_21 = ATgetArgument(q_21, 0);
      {
        ATerm t_21 = NULL;
        t = not_null(r_21);
        {
          t = p_60(t);
          {
            t_21 = t;
            t = (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm g_64 (ATerm), ATerm h_64 (ATerm))
{
  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
  b_22 = t;
  a_22 :
  if(match_cons(b_22, sym_Call_2))
    {
      c_22 = ATgetArgument(b_22, 0);
      d_22 = ATgetArgument(b_22, 1);
      {
        ATerm n_22 = NULL;
        t = not_null(c_22);
        {
          ATerm p_22 = NULL;
          t = g_64(t);
          {
            n_22 = t;
            {
              t = not_null(d_22);
              {
                t = h_64(t);
                {
                  p_22 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(n_22), not_null(p_22));
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
ATerm Prim_2 (ATerm t, ATerm z_64 (ATerm), ATerm a_65 (ATerm))
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL;
  d_23 = t;
  c_23 :
  if(match_cons(d_23, sym_Prim_2))
    {
      e_23 = ATgetArgument(d_23, 0);
      f_23 = ATgetArgument(d_23, 1);
      {
        ATerm i_23 = NULL;
        t = not_null(e_23);
        {
          ATerm k_23 = NULL;
          t = z_64(t);
          {
            i_23 = t;
            {
              t = not_null(f_23);
              {
                t = a_65(t);
                {
                  k_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(i_23), not_null(k_23));
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
ATerm Str_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm v_23 = NULL,w_23 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym_Str_1))
    {
      w_23 = ATgetArgument(v_23, 0);
      {
        ATerm c_10 = t;
        if((PushChoice() == 0))
          {
            ATerm y_23 = NULL;
            t = not_null(w_23);
            {
              t = o_0(t);
              {
                y_23 = t;
                t = (ATerm) ATmakeAppl(sym_Str_1, not_null(y_23));
              }
            }
            PopChoice();
          }
        else
          {
            t = c_10;
            {
              ATerm b_24 = NULL;
              t = not_null(w_23);
              {
                t = o_0(t);
                {
                  b_24 = t;
                  t = (ATerm) ATmakeAppl(sym_Str_1, not_null(b_24));
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
ATerm Real_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm y_24 = NULL,z_24 = NULL;
  y_24 = t;
  u_24 :
  if(match_cons(y_24, sym_Real_1))
    {
      z_24 = ATgetArgument(y_24, 0);
      {
        ATerm d_10 = t;
        if((PushChoice() == 0))
          {
            ATerm t_25 = NULL;
            t = not_null(z_24);
            {
              t = n_0(t);
              {
                t_25 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, not_null(t_25));
              }
            }
            PopChoice();
          }
        else
          {
            t = d_10;
            {
              ATerm w_25 = NULL;
              t = not_null(z_24);
              {
                t = n_0(t);
                {
                  w_25 = t;
                  t = (ATerm) ATmakeAppl(sym_Real_1, not_null(w_25));
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
ATerm Int_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm h_26 = NULL,i_26 = NULL;
  h_26 = t;
  g_26 :
  if(match_cons(h_26, sym_Int_1))
    {
      i_26 = ATgetArgument(h_26, 0);
      {
        ATerm f_10 = t;
        if((PushChoice() == 0))
          {
            ATerm k_26 = NULL;
            t = not_null(i_26);
            {
              t = m_0(t);
              {
                k_26 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, not_null(k_26));
              }
            }
            PopChoice();
          }
        else
          {
            t = f_10;
            {
              ATerm p_26 = NULL;
              t = not_null(i_26);
              {
                t = m_0(t);
                {
                  p_26 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, not_null(p_26));
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
ATerm Var_1 (ATerm t, ATerm d_63 (ATerm))
{
  ATerm d_27 = NULL,e_27 = NULL;
  d_27 = t;
  c_27 :
  if(match_cons(d_27, sym_Var_1))
    {
      e_27 = ATgetArgument(d_27, 0);
      {
        ATerm j_27 = NULL;
        t = not_null(e_27);
        {
          t = d_63(t);
          {
            j_27 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_27));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm h_63 (ATerm), ATerm i_63 (ATerm))
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  q_27 :
  if(match_cons(r_27, sym_Op_2))
    {
      s_27 = ATgetArgument(r_27, 0);
      t_27 = ATgetArgument(r_27, 1);
      {
        ATerm w_27 = NULL;
        t = not_null(s_27);
        {
          ATerm y_27 = NULL;
          t = h_63(t);
          {
            w_27 = t;
            {
              t = not_null(t_27);
              {
                t = i_63(t);
                {
                  y_27 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(w_27), not_null(y_27));
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
ATerm Build_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm g_28 = NULL,h_28 = NULL;
  g_28 = t;
  f_28 :
  if(match_cons(g_28, sym_Build_1))
    {
      h_28 = ATgetArgument(g_28, 0);
      {
        ATerm j_28 = NULL;
        t = not_null(h_28);
        {
          t = t_64(t);
          {
            j_28 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(j_28));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm o_28 = NULL;
  o_28 = t;
  n_28 :
  if(!(match_cons(o_28, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  p_28 :
  if(!(match_cons(q_28, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm simple_strategy_0 (ATerm t)
{
  ATerm g_10 = t;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      PopChoice();
    }
  else
    {
      t = g_10;
      {
        ATerm i_10 = t;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            PopChoice();
          }
        else
          {
            t = i_10;
            {
              ATerm q_10 = t;
              if((PushChoice() == 0))
                {
                  t = Seqs_1(t, Nil_0);
                  PopChoice();
                }
              else
                {
                  t = q_10;
                  {
                    ATerm r_10 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm n_1 (ATerm t)
                        {
                          ATerm s_10 = t;
                          if((PushChoice() == 0))
                            {
                              t = Var_1(t, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = s_10;
                              {
                                ATerm w_10 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_1 (ATerm t)
                                    {
                                      ATerm p_1 (ATerm t)
                                      {
                                        t = Var_1(t, _id);
                                        return(t);
                                      }
                                      t = list_1(t, p_1);
                                      return(t);
                                    }
                                    t = Op_2(t, _id, o_1);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = w_10;
                                    {
                                      ATerm c_11 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = Int_1(t, _id);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = c_11;
                                          {
                                            ATerm i_11 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = Real_1(t, _id);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = i_11;
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
                        t = Build_1(t, n_1);
                        PopChoice();
                      }
                    else
                      {
                        t = r_10;
                        {
                          ATerm j_11 = t;
                          if((PushChoice() == 0))
                            {
                              t = Prim_2(t, _id, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = j_11;
                              {
                                ATerm k_11 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = Call_2(t, _id, _id);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_11;
                                    {
                                      ATerm q_1 (ATerm t)
                                      {
                                        t = Cons_2(t, simple_strategy_0, Nil_0);
                                        return(t);
                                      }
                                      t = Seqs_1(t, q_1);
                                    }
                                  }
                              }
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
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  v_28 :
  if(match_cons(w_28, sym_Row_2))
    {
      x_28 = ATgetArgument(w_28, 0);
      y_28 = ATgetArgument(w_28, 1);
      {
        ATerm l_11 = t;
        if((PushChoice() == 0))
          {
            ATerm b_29 = NULL;
            ATerm c_29 = NULL;
            t = not_null(y_28);
            {
              ATerm m_11 = t;
              if((PushChoice() == 0))
                {
                  t = simple_strategy_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                t = m_11;
              {
                t = new_0(t);
                {
                  c_29 = t;
                  if(((b_29 != NULL) && (b_29 != c_29)))
                    _fail(c_29);
                  else
                    b_29 = c_29;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDef_3, not_null(b_29), (ATerm)ATempty, not_null(y_28))), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(x_28), (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(b_29)), (ATerm) ATempty)));
            PopChoice();
          }
        else
          {
            t = l_11;
            {
              t = not_null(y_28);
              t = simple_strategy_0(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, not_null(x_28), not_null(y_28)));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm e_81 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, e_81);
  return(t);
}
ATerm MatrixScope_0 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL;
  m_29 = t;
  l_29 :
  if(match_cons(m_29, sym_Matrix_2))
    {
      n_29 = ATgetArgument(m_29, 0);
      o_29 = ATgetArgument(m_29, 1);
      {
        ATerm r_29 = NULL,s_29 = NULL;
        ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
        t = not_null(o_29);
        {
          t = unzip_1(t, RowLet_0);
          {
            t = _2(t, concat_0, _id);
            {
              t_29 = t;
              k_29 :
              if(match_cons(t_29, sym__2))
                {
                  u_29 = ATgetArgument(t_29, 0);
                  v_29 = ATgetArgument(t_29, 1);
                  {
                    if(((r_29 != NULL) && (r_29 != u_29)))
                      _fail(u_29);
                    else
                      r_29 = u_29;
                    if(((s_29 != NULL) && (s_29 != v_29)))
                      _fail(v_29);
                    else
                      s_29 = v_29;
                  }
                }
              else
                _fail(t);
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(n_29), (ATerm) ATmakeAppl(sym_Let_2, not_null(r_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(0)))), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(s_29)))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm assert_1 (ATerm t, ATerm t_68 (ATerm))
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL;
  d_30 = t;
  c_30 :
  if(match_cons(d_30, sym__2))
    {
      e_30 = ATgetArgument(d_30, 0);
      f_30 = ATgetArgument(d_30, 1);
      {
        ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
        ATerm n_11;
        n_11 = t;
        {
          ATerm l_30 = NULL;
          ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
          t = t_68(t);
          {
            l_30 = t;
            {
              if(((i_30 != NULL) && (i_30 != l_30)))
                _fail(l_30);
              else
                i_30 = l_30;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_30), not_null(e_30), not_null(f_30));
                {
                  t = table_push_0(t);
                  {
                    ATerm o_11 = t;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_30), (ATerm) ATmakeAppl(sym_Scopes_0));
                        t = table_get_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = o_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      m_30 = t;
                      b_30 :
                      if(((ATgetType(m_30) == AT_LIST) && ((ATermList) m_30 != ATempty)))
                        {
                          n_30 = ATgetFirst((ATermList) m_30);
                          o_30 = (ATerm) ATgetNext((ATermList) m_30);
                          {
                            if(((j_30 != NULL) && (j_30 != n_30)))
                              _fail(n_30);
                            else
                              j_30 = n_30;
                            {
                              if(((k_30 != NULL) && (k_30 != o_30)))
                                _fail(o_30);
                              else
                                k_30 = o_30;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(i_30), (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(not_null(k_30)), (ATerm) ATinsert(CheckATermList(not_null(j_30)), not_null(e_30))));
                                t = table_put_0(t);
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
        t = n_11;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm WildPat_0 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  x_30 = t;
  t_30 :
  if(match_cons(x_30, sym_Row_3))
    {
      y_30 = ATgetArgument(x_30, 0);
      d_31 = ATgetArgument(x_30, 1);
      e_31 = ATgetArgument(x_30, 2);
      u_30 :
      if(((ATgetType(y_30) == AT_LIST) && ((ATermList) y_30 != ATempty)))
        {
          z_30 = ATgetFirst((ATermList) y_30);
          c_31 = (ATerm) ATgetNext((ATermList) y_30);
          v_30 :
          if(match_cons(z_30, sym_As_2))
            {
              a_31 = ATgetArgument(z_30, 0);
              b_31 = ATgetArgument(z_30, 1);
              w_30 :
              if(match_cons(b_31, sym_Wld_0))
                t = (ATerm) ATmakeAppl(sym_Row_3, not_null(c_31), not_null(d_31), not_null(e_31));
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
  ATerm k_31 = NULL;
  t = filter_1(t, WildPat_0);
  {
    k_31 = t;
    t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(k_31));
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,r_31 = NULL;
  p_31 = t;
  o_31 :
  if(match_cons(p_31, sym__2))
    {
      q_31 = ATgetArgument(p_31, 0);
      r_31 = ATgetArgument(p_31, 1);
      if(((q_31 != NULL) && (q_31 != r_31)))
        _fail(r_31);
      else
        q_31 = r_31;
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchCons_2 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
  v_32 = t;
  u_32 :
  if(match_cons(v_32, sym_Wld_0))
    {
      ATerm y_32 = NULL;
      ATerm c_33 = NULL;
      t = l_0(t);
      {
        ATerm r_1 (ATerm t)
        {
          ATerm z_32 = NULL,a_33 = NULL;
          z_32 = t;
          a_32 :
          if(match_cons(z_32, sym_Var_1))
            {
              a_33 = ATgetArgument(z_32, 0);
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(a_33)), (ATerm) ATmakeAppl(sym_Wld_0));
            }
          else
            _fail(t);
          return(t);
        }
        t = map_1(t, r_1);
        {
          c_33 = t;
          if(((y_32 != NULL) && (y_32 != c_33)))
            _fail(c_33);
          else
            y_32 = c_33;
        }
      }
      t = not_null(y_32);
    }
  else
    {
      if(match_cons(v_32, sym_Int_1))
        {
          w_32 = ATgetArgument(v_32, 0);
          {
            ATerm e_33 = NULL,f_33 = NULL;
            t = k_0(t);
            {
              e_33 = t;
              h_32 :
              if(match_cons(e_33, sym_Int_1))
                {
                  f_33 = ATgetArgument(e_33, 0);
                  {
                    ATerm g_33 = NULL;
                    if(((w_32 != NULL) && (w_32 != f_33)))
                      _fail(f_33);
                    else
                      w_32 = f_33;
                    {
                      t = l_0(t);
                      {
                        g_33 = t;
                        d_32 :
                        if(((ATermList) g_33 == ATempty))
                          {
                            {
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
            t = (ATerm) ATempty;
          }
        }
      else
        {
          if(match_cons(v_32, sym_Real_1))
            {
              w_32 = ATgetArgument(v_32, 0);
              {
                ATerm i_33 = NULL,j_33 = NULL;
                t = k_0(t);
                {
                  i_33 = t;
                  k_32 :
                  if(match_cons(i_33, sym_Real_1))
                    {
                      j_33 = ATgetArgument(i_33, 0);
                      {
                        ATerm k_33 = NULL;
                        if(((w_32 != NULL) && (w_32 != j_33)))
                          _fail(j_33);
                        else
                          w_32 = j_33;
                        {
                          t = l_0(t);
                          {
                            k_33 = t;
                            j_32 :
                            if(((ATermList) k_33 == ATempty))
                              {
                                {
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
                t = (ATerm) ATempty;
              }
            }
          else
            {
              if(match_cons(v_32, sym_Str_1))
                {
                  w_32 = ATgetArgument(v_32, 0);
                  {
                    ATerm m_33 = NULL,n_33 = NULL;
                    t = k_0(t);
                    {
                      m_33 = t;
                      n_32 :
                      if(match_cons(m_33, sym_Str_1))
                        {
                          n_33 = ATgetArgument(m_33, 0);
                          {
                            ATerm o_33 = NULL;
                            if(((w_32 != NULL) && (w_32 != n_33)))
                              _fail(n_33);
                            else
                              w_32 = n_33;
                            {
                              t = l_0(t);
                              {
                                o_33 = t;
                                m_32 :
                                if(((ATermList) o_33 == ATempty))
                                  {
                                    {
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
                    t = (ATerm) ATempty;
                  }
                }
              else
                {
                  if(match_cons(v_32, sym_Op_2))
                    {
                      w_32 = ATgetArgument(v_32, 0);
                      x_32 = ATgetArgument(v_32, 1);
                      {
                        ATerm r_33 = NULL;
                        ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
                        t = k_0(t);
                        {
                          s_33 = t;
                          t_32 :
                          if(match_cons(s_33, sym_Fun_2))
                            {
                              t_33 = ATgetArgument(s_33, 0);
                              u_33 = ATgetArgument(s_33, 1);
                              {
                                ATerm v_33 = NULL;
                                if(((w_32 != NULL) && (w_32 != t_33)))
                                  _fail(t_33);
                                else
                                  w_32 = t_33;
                                {
                                  if(((r_33 != NULL) && (r_33 != u_33)))
                                    _fail(u_33);
                                  else
                                    r_33 = u_33;
                                  {
                                    ATerm w_33 = NULL;
                                    t = not_null(x_32);
                                    {
                                      t = length_0(t);
                                      {
                                        w_33 = t;
                                        if(((v_33 != NULL) && (v_33 != w_33)))
                                          _fail(w_33);
                                        else
                                          v_33 = w_33;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(v_33), not_null(r_33));
                                      t = eq_0(t);
                                    }
                                  }
                                }
                              }
                            }
                          else
                            _fail(t);
                        }
                        t = not_null(x_32);
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
ATerm ConsTransition_1 (ATerm t, ATerm h_65 (ATerm))
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL;
  p_34 = t;
  m_34 :
  if(match_cons(p_34, sym_Row_3))
    {
      q_34 = ATgetArgument(p_34, 0);
      v_34 = ATgetArgument(p_34, 1);
      w_34 = ATgetArgument(p_34, 2);
      n_34 :
      if(((ATgetType(q_34) == AT_LIST) && ((ATermList) q_34 != ATempty)))
        {
          r_34 = ATgetFirst((ATermList) q_34);
          u_34 = (ATerm) ATgetNext((ATermList) q_34);
          o_34 :
          if(match_cons(r_34, sym_As_2))
            {
              s_34 = ATgetArgument(r_34, 0);
              t_34 = ATgetArgument(r_34, 1);
              {
                ATerm b_35 = NULL,d_35 = NULL;
                ATerm r_11;
                r_11 = t;
                {
                  ATerm c_35 = NULL;
                  t = not_null(t_34);
                  {
                    t = h_65(t);
                    {
                      c_35 = t;
                      if(((b_35 != NULL) && (b_35 != c_35)))
                        _fail(c_35);
                      else
                        b_35 = c_35;
                    }
                  }
                }
                t = r_11;
                {
                  ATerm e_35 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_35), not_null(v_34));
                  {
                    t = conc_0(t);
                    {
                      e_35 = t;
                      if(((d_35 != NULL) && (d_35 != e_35)))
                        _fail(e_35);
                      else
                        d_35 = e_35;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Row_3, not_null(u_34), not_null(d_35), not_null(w_34));
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
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
  m_35 = t;
  k_35 :
  if(match_cons(m_35, sym__2))
    {
      n_35 = ATgetArgument(m_35, 0);
      o_35 = ATgetArgument(m_35, 1);
      l_35 :
      if(match_cons(o_35, sym__2))
        {
          p_35 = ATgetArgument(o_35, 0);
          q_35 = ATgetArgument(o_35, 1);
          {
            ATerm u_35 = NULL;
            ATerm v_35 = NULL;
            t = not_null(n_35);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = not_null(p_35);
                    return(t);
                  }
                  ATerm v_1 (ATerm t)
                  {
                    t = not_null(q_35);
                    return(t);
                  }
                  t = MatchCons_2(t, u_1, v_1);
                  return(t);
                }
                t = ConsTransition_1(t, t_1);
                return(t);
              }
              t = filter_1(t, s_1);
              {
                v_35 = t;
                if(((u_35 != NULL) && (u_35 != v_35)))
                  _fail(v_35);
                else
                  u_35 = v_35;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Alt_3, not_null(p_35), not_null(q_35), (ATerm) ATmakeAppl(sym_Matrix_1, not_null(u_35)));
          }
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
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,f_36 = NULL,g_36 = NULL;
  b_36 = t;
  z_35 :
  if(match_cons(b_36, sym__2))
    {
      c_36 = ATgetArgument(b_36, 0);
      d_36 = ATgetArgument(b_36, 1);
      a_36 :
      if(((ATgetType(d_36) == AT_LIST) && ((ATermList) d_36 != ATempty)))
        {
          f_36 = ATgetFirst((ATermList) d_36);
          g_36 = (ATerm) ATgetNext((ATermList) d_36);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(c_36), not_null(f_36)), (ATerm) ATmakeAppl(sym__2, not_null(c_36), not_null(g_36)));
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
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  r_36 = t;
  p_36 :
  if(match_cons(r_36, sym__2))
    {
      s_36 = ATgetArgument(r_36, 0);
      t_36 = ATgetArgument(r_36, 1);
      q_36 :
      if(((ATermList) t_36 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm rzip_1 (ATerm t, ATerm i_81 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, RZip2_0, Zip3_0, i_81);
  return(t);
}
ATerm transitions_0 (ATerm t)
{
  t = rzip_1(t, Transition_0);
  return(t);
}
ATerm Uniq_0 (ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
  b_37 = t;
  a_37 :
  if(((ATgetType(b_37) == AT_LIST) && ((ATermList) b_37 != ATempty)))
    {
      c_37 = ATgetFirst((ATermList) b_37);
      d_37 = (ATerm) ATgetNext((ATermList) b_37);
      {
        ATerm g_37 = NULL;
        ATerm n_37 = NULL;
        t = not_null(d_37);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm s_11 = t;
            if((PushChoice() == 0))
              {
                ATerm h_37 = NULL;
                h_37 = t;
                if(((c_37 != NULL) && (c_37 != h_37)))
                  _fail(h_37);
                else
                  c_37 = h_37;
                PopChoice();
                _fail(t);
              }
            else
              t = s_11;
            return(t);
          }
          t = filter_1(t, w_1);
          {
            n_37 = t;
            if(((g_37 != NULL) && (g_37 != n_37)))
              _fail(n_37);
            else
              g_37 = n_37;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(g_37)), not_null(c_37));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm e_80 (ATerm))
{
  ATerm x_37 (ATerm t)
  {
    t = e_80(t);
    {
      ATerm t_11 = t;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          PopChoice();
        }
      else
        {
          t = t_11;
          t = Cons_2(t, _id, x_37);
        }
    }
    return(t);
  }
  t = x_37(t);
  return(t);
}
ATerm uniq_0 (ATerm t)
{
  ATerm x_1 (ATerm t)
  {
    t = try_1(t, Uniq_0);
    return(t);
  }
  t = listtd_1(t, x_1);
  return(t);
}
ATerm offsets_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm b_38 = NULL,c_38 = NULL,d_38 = NULL,e_38 = NULL;
    b_38 = t;
    z_37 :
    if(match_cons(b_38, sym_As_2))
      {
        c_38 = ATgetArgument(b_38, 0);
        e_38 = ATgetArgument(b_38, 1);
        a_38 :
        if(match_cons(c_38, sym_Off_1))
          {
            d_38 = ATgetArgument(c_38, 0);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_38));
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, y_1);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(0);
    return(t);
  }
  ATerm a_2 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = foldr_3(t, z_1, add_0, a_2);
  return(t);
}
ATerm ConsArgs_0 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,f_39 = NULL;
  w_38 = t;
  s_38 :
  if(match_cons(w_38, sym_Row_3))
    {
      x_38 = ATgetArgument(w_38, 0);
      e_39 = ATgetArgument(w_38, 1);
      f_39 = ATgetArgument(w_38, 2);
      t_38 :
      if(((ATgetType(x_38) == AT_LIST) && ((ATermList) x_38 != ATempty)))
        {
          y_38 = ATgetFirst((ATermList) x_38);
          d_39 = (ATerm) ATgetNext((ATermList) x_38);
          u_38 :
          if(match_cons(y_38, sym_As_2))
            {
              z_38 = ATgetArgument(y_38, 0);
              a_39 = ATgetArgument(y_38, 1);
              v_38 :
              if(match_cons(a_39, sym_Str_1))
                {
                  b_39 = ATgetArgument(a_39, 0);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, not_null(b_39)), (ATerm) ATempty);
                }
              else
                {
                  if(match_cons(a_39, sym_Real_1))
                    {
                      b_39 = ATgetArgument(a_39, 0);
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, not_null(b_39)), (ATerm) ATempty);
                    }
                  else
                    {
                      if(match_cons(a_39, sym_Int_1))
                        {
                          b_39 = ATgetArgument(a_39, 0);
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, not_null(b_39)), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(a_39, sym_Op_2))
                            {
                              b_39 = ATgetArgument(a_39, 0);
                              c_39 = ATgetArgument(a_39, 1);
                              {
                                ATerm p_39 = NULL,r_39 = NULL;
                                ATerm u_11;
                                u_11 = t;
                                {
                                  ATerm q_39 = NULL;
                                  t = not_null(c_39);
                                  {
                                    t = length_0(t);
                                    {
                                      q_39 = t;
                                      if(((p_39 != NULL) && (p_39 != q_39)))
                                        _fail(q_39);
                                      else
                                        p_39 = q_39;
                                    }
                                  }
                                }
                                t = u_11;
                                {
                                  ATerm s_39 = NULL;
                                  t = not_null(c_39);
                                  {
                                    t = offsets_0(t);
                                    {
                                      s_39 = t;
                                      if(((r_39 != NULL) && (r_39 != s_39)))
                                        _fail(s_39);
                                      else
                                        r_39 = s_39;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, not_null(b_39), not_null(p_39)), not_null(r_39));
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
ATerm filter_1 (ATerm t, ATerm g_75 (ATerm))
{
  ATerm v_11 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = v_11;
      {
        ATerm w_11 = t;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              t = filter_1(t, g_75);
              return(t);
            }
            t = Cons_2(t, g_75, b_2);
            PopChoice();
          }
        else
          {
            t = w_11;
            {
              ATerm h_40 = NULL,i_40 = NULL,q_40 = NULL;
              h_40 = t;
              g_40 :
              if(((ATgetType(h_40) == AT_LIST) && ((ATermList) h_40 != ATempty)))
                {
                  i_40 = ATgetFirst((ATermList) h_40);
                  q_40 = (ATerm) ATgetNext((ATermList) h_40);
                  {
                    t = not_null(q_40);
                    t = filter_1(t, g_75);
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
ATerm outedges_0 (ATerm t)
{
  t = filter_1(t, ConsArgs_0);
  t = uniq_0(t);
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  ATerm x_11 = t;
  if((PushChoice() == 0))
    {
      t = explode_string_0(t);
      {
        ATerm y_11 = t;
        if((PushChoice() == 0))
          {
            ATerm n_42 (ATerm t)
            {
              ATerm z_11 = t;
              if((PushChoice() == 0))
                {
                  t = Cons_2(t, _id, n_42);
                  PopChoice();
                }
              else
                {
                  t = z_11;
                  {
                    ATerm c_2 (ATerm t)
                    {
                      ATerm e_41 = NULL;
                      e_41 = t;
                      x_40 :
                      if(!(match_int(e_41, 47)))
                        _fail(t);
                      return(t);
                    }
                    ATerm d_2 (ATerm t)
                    {
                      t = (ATerm) ATempty;
                      return(t);
                    }
                    t = Cons_2(t, c_2, d_2);
                  }
                }
              return(t);
            }
            t = n_42(t);
            PopChoice();
          }
        else
          {
            t = y_11;
            t = (ATerm) ATempty;
          }
        t = implode_string_0(t);
      }
      PopChoice();
    }
  else
    {
      t = x_11;
      {
        ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,y_41 = NULL,z_41 = NULL;
        h_41 = t;
        z_40 :
        if(((ATgetType(h_41) == AT_LIST) && ((ATermList) h_41 != ATempty)))
          {
            i_41 = ATgetFirst((ATermList) h_41);
            z_41 = (ATerm) ATgetNext((ATermList) h_41);
            a_41 :
            if(match_cons(i_41, sym_Row_3))
              {
                j_41 = ATgetArgument(i_41, 0);
                t_41 = ATgetArgument(i_41, 1);
                y_41 = ATgetArgument(i_41, 2);
                b_41 :
                if(((ATgetType(j_41) == AT_LIST) && ((ATermList) j_41 != ATempty)))
                  {
                    k_41 = ATgetFirst((ATermList) j_41);
                    s_41 = (ATerm) ATgetNext((ATermList) j_41);
                    c_41 :
                    if(match_cons(k_41, sym_As_2))
                      {
                        l_41 = ATgetArgument(k_41, 0);
                        r_41 = ATgetArgument(k_41, 1);
                        d_41 :
                        if(match_cons(l_41, sym_Off_1))
                          {
                            q_41 = ATgetArgument(l_41, 0);
                            t = not_null(q_41);
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
  ATerm c_43 = NULL,d_43 = NULL;
  c_43 = t;
  b_43 :
  if(match_cons(c_43, sym_Matrix_1))
    {
      d_43 = ATgetArgument(c_43, 0);
      {
        ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL;
        ATerm k_43 = NULL;
        t = not_null(d_43);
        {
          ATerm l_43 = NULL;
          t = get_path_0(t);
          {
            k_43 = t;
            {
              if(((f_43 != NULL) && (f_43 != k_43)))
                _fail(k_43);
              else
                f_43 = k_43;
              {
                t = not_null(d_43);
                {
                  ATerm m_43 = NULL;
                  t = outedges_0(t);
                  {
                    l_43 = t;
                    {
                      if(((g_43 != NULL) && (g_43 != l_43)))
                        _fail(l_43);
                      else
                        g_43 = l_43;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(d_43), not_null(g_43));
                        {
                          ATerm n_43 = NULL;
                          t = transitions_0(t);
                          {
                            m_43 = t;
                            {
                              if(((h_43 != NULL) && (h_43 != m_43)))
                                _fail(m_43);
                              else
                                h_43 = m_43;
                              {
                                t = not_null(d_43);
                                {
                                  ATerm o_43 = NULL;
                                  t = default_state_0(t);
                                  {
                                    n_43 = t;
                                    {
                                      if(((i_43 != NULL) && (i_43 != n_43)))
                                        _fail(n_43);
                                      else
                                        i_43 = n_43;
                                      {
                                        t = new_0(t);
                                        {
                                          o_43 = t;
                                          {
                                            if(((j_43 != NULL) && (j_43 != o_43)))
                                              _fail(o_43);
                                            else
                                              j_43 = o_43;
                                            {
                                              ATerm a_12;
                                              a_12 = t;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(d_43)), (ATerm) ATmakeAppl(sym_Defined_2, (ATerm)ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue)), not_null(j_43)));
                                                {
                                                  ATerm e_2 (ATerm t)
                                                  {
                                                    t = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
                                                    return(t);
                                                  }
                                                  t = assert_1(t, e_2);
                                                }
                                              }
                                              t = a_12;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Case_4, not_null(j_43), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_43)), not_null(h_43), not_null(i_43));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ShiftColumnRow_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL;
  y_43 = t;
  w_43 :
  if(match_cons(y_43, sym_Row_3))
    {
      z_43 = ATgetArgument(y_43, 0);
      a_44 = ATgetArgument(y_43, 1);
      d_44 = ATgetArgument(y_43, 2);
      x_43 :
      if(((ATgetType(a_44) == AT_LIST) && ((ATermList) a_44 != ATempty)))
        {
          b_44 = ATgetFirst((ATermList) a_44);
          c_44 = (ATerm) ATgetNext((ATermList) a_44);
          t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(not_null(z_43)), not_null(b_44)), not_null(c_44), not_null(d_44));
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
  ATerm m_44 = NULL,n_44 = NULL;
  m_44 = t;
  l_44 :
  if(match_cons(m_44, sym_Matrix_1))
    {
      n_44 = ATgetArgument(m_44, 0);
      {
        ATerm p_44 = NULL;
        ATerm q_44 = NULL;
        t = not_null(n_44);
        {
          ATerm b_12 = t;
          if((PushChoice() == 0))
            {
              ATerm f_2 (ATerm t)
              {
                ATerm g_2 (ATerm t)
                {
                  ATerm h_2 (ATerm t)
                  {
                    ATerm i_2 (ATerm t)
                    {
                      ATerm c_12 = t;
                      if((PushChoice() == 0))
                        {
                          t = Wld_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        t = c_12;
                      return(t);
                    }
                    t = As_2(t, _id, i_2);
                    return(t);
                  }
                  t = Cons_2(t, h_2, _id);
                  return(t);
                }
                t = Row_3(t, g_2, _id, _id);
                return(t);
              }
              t = map_1(t, f_2);
              PopChoice();
              _fail(t);
            }
          else
            t = b_12;
          {
            t = not_null(n_44);
            {
              t = map_1(t, ShiftColumnRow_0);
              {
                q_44 = t;
                if(((p_44 != NULL) && (p_44 != q_44)))
                  _fail(q_44);
                else
                  p_44 = q_44;
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(p_44));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm u_44 = NULL;
  u_44 = t;
  t_44 :
  if(!(match_cons(u_44, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm t_61 (ATerm), ATerm u_61 (ATerm))
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  y_44 :
  if(match_cons(z_44, sym_As_2))
    {
      a_45 = ATgetArgument(z_44, 0);
      b_45 = ATgetArgument(z_44, 1);
      {
        ATerm e_45 = NULL;
        t = not_null(a_45);
        {
          ATerm h_45 = NULL;
          t = t_61(t);
          {
            e_45 = t;
            {
              t = not_null(b_45);
              {
                t = u_61(t);
                {
                  h_45 = t;
                  t = (ATerm) ATmakeAppl(sym_As_2, not_null(e_45), not_null(h_45));
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
ATerm Row_3 (ATerm t, ATerm i_60 (ATerm), ATerm j_60 (ATerm), ATerm k_60 (ATerm))
{
  ATerm r_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL;
  r_45 = t;
  q_45 :
  if(match_cons(r_45, sym_Row_3))
    {
      t_45 = ATgetArgument(r_45, 0);
      u_45 = ATgetArgument(r_45, 1);
      v_45 = ATgetArgument(r_45, 2);
      {
        ATerm w_46 = NULL;
        t = not_null(t_45);
        {
          ATerm y_46 = NULL;
          t = i_60(t);
          {
            w_46 = t;
            {
              t = not_null(u_45);
              {
                ATerm i_47 = NULL;
                t = j_60(t);
                {
                  y_46 = t;
                  {
                    t = not_null(v_45);
                    {
                      t = k_60(t);
                      {
                        i_47 = t;
                        t = (ATerm) ATmakeAppl(sym_Row_3, not_null(w_46), not_null(y_46), not_null(i_47));
                      }
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
ATerm SkipWild_0 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL;
  d_48 = t;
  c_48 :
  if(match_cons(d_48, sym_Matrix_1))
    {
      e_48 = ATgetArgument(d_48, 0);
      {
        ATerm g_48 = NULL;
        ATerm h_48 = NULL;
        t = not_null(e_48);
        {
          ATerm j_2 (ATerm t)
          {
            ATerm k_2 (ATerm t)
            {
              ATerm l_2 (ATerm t)
              {
                t = As_2(t, _id, Wld_0);
                return(t);
              }
              t = Cons_2(t, l_2, _id);
              t = Tl_0(t);
              return(t);
            }
            t = Row_3(t, _id, k_2, _id);
            return(t);
          }
          t = map_1(t, j_2);
          {
            h_48 = t;
            if(((g_48 != NULL) && (g_48 != h_48)))
              _fail(h_48);
            else
              g_48 = h_48;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Matrix_1, not_null(g_48));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixRowsEmpty_0 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL;
  r_48 = t;
  q_48 :
  if(match_cons(r_48, sym_Matrix_1))
    {
      s_48 = ATgetArgument(r_48, 0);
      {
        ATerm u_48 = NULL;
        ATerm a_49 = NULL;
        t = not_null(s_48);
        {
          ATerm m_2 (ATerm t)
          {
            ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL;
            v_48 = t;
            m_48 :
            if(match_cons(v_48, sym_Row_3))
              {
                w_48 = ATgetArgument(v_48, 0);
                x_48 = ATgetArgument(v_48, 1);
                y_48 = ATgetArgument(v_48, 2);
                n_48 :
                if(((ATermList) w_48 == ATempty))
                  {
                    o_48 :
                    if(((ATermList) x_48 == ATempty))
                      {
                        t = not_null(y_48);
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
          t = map_1(t, m_2);
          {
            a_49 = t;
            if(((u_48 != NULL) && (u_48 != a_49)))
              _fail(a_49);
            else
              u_48 = a_49;
          }
        }
        t = (ATerm) ATmakeAppl(sym_LChoices_1, not_null(u_48));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm reduce_matrix_0 (ATerm t)
{
  ATerm d_12 = t;
  if((PushChoice() == 0))
    {
      t = MatrixRowsEmpty_0(t);
      PopChoice();
    }
  else
    {
      t = d_12;
      {
        ATerm e_12 = t;
        if((PushChoice() == 0))
          {
            t = SkipWild_0(t);
            PopChoice();
          }
        else
          {
            t = e_12;
            {
              ATerm f_12 = t;
              if((PushChoice() == 0))
                {
                  t = ShiftColumn_0(t);
                  PopChoice();
                }
              else
                {
                  t = f_12;
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
  ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
  g_49 = t;
  f_49 :
  if(((ATgetType(g_49) == AT_LIST) && ((ATermList) g_49 != ATempty)))
    {
      h_49 = ATgetFirst((ATermList) g_49);
      i_49 = (ATerm) ATgetNext((ATermList) g_49);
      t = not_null(i_49);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
  p_49 = t;
  o_49 :
  if(match_cons(p_49, sym__2))
    {
      q_49 = ATgetArgument(p_49, 0);
      r_49 = ATgetArgument(p_49, 1);
      {
        ATerm g_12;
        g_12 = t;
        {
          ATerm u_49 = NULL;
          ATerm v_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_49), not_null(r_49));
          {
            ATerm h_12 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                PopChoice();
              }
            else
              {
                t = h_12;
                t = (ATerm) ATempty;
              }
            {
              v_49 = t;
              if(((u_49 != NULL) && (u_49 != v_49)))
                _fail(v_49);
              else
                u_49 = v_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_49), not_null(r_49), not_null(u_49));
            t = table_put_0(t);
          }
        }
        t = g_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
  ATerm i_12;
  i_12 = t;
  {
    ATerm f_50 = NULL;
    ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL;
    t = q_68(t);
    {
      f_50 = t;
      {
        if(((d_50 != NULL) && (d_50 != f_50)))
          _fail(f_50);
        else
          d_50 = f_50;
        {
          ATerm j_12 = t;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_50), (ATerm) ATmakeAppl(sym_Scopes_0));
              t = table_get_0(t);
              PopChoice();
            }
          else
            {
              t = j_12;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            g_50 = t;
            b_50 :
            if(((ATgetType(g_50) == AT_LIST) && ((ATermList) g_50 != ATempty)))
              {
                h_50 = ATgetFirst((ATermList) g_50);
                i_50 = (ATerm) ATgetNext((ATermList) g_50);
                {
                  if(((e_50 != NULL) && (e_50 != h_50)))
                    _fail(h_50);
                  else
                    e_50 = h_50;
                  {
                    if(((c_50 != NULL) && (c_50 != i_50)))
                      _fail(i_50);
                    else
                      c_50 = i_50;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(d_50), (ATerm)ATmakeAppl(sym_Scopes_0), not_null(c_50));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(e_50);
                          {
                            ATerm n_2 (ATerm t)
                            {
                              ATerm j_50 = NULL;
                              j_50 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_50), not_null(j_50));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, n_2);
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
  t = i_12;
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm m_83 (ATerm), ATerm n_83 (ATerm))
{
  ATerm k_12 = t;
  if((PushChoice() == 0))
    {
      t = m_83(t);
      t = n_83(t);
      PopChoice();
    }
  else
    {
      t = k_12;
      {
        t = n_83(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm p_68 (ATerm))
{
  ATerm u_50 = NULL;
  ATerm l_12;
  l_12 = t;
  {
    ATerm v_50 = NULL;
    ATerm k_51 = NULL;
    t = p_68(t);
    {
      v_50 = t;
      {
        if(((u_50 != NULL) && (u_50 != v_50)))
          _fail(v_50);
        else
          u_50 = v_50;
        {
          ATerm l_51 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_50), (ATerm) ATmakeAppl(sym_Scopes_0));
          {
            ATerm m_12 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = m_12;
                t = (ATerm) ATempty;
              }
            {
              l_51 = t;
              if(((k_51 != NULL) && (k_51 != l_51)))
                _fail(l_51);
              else
                k_51 = l_51;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_50), (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(not_null(k_51)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = l_12;
  return(t);
}
ATerm scope_2 (ATerm t, ATerm r_68 (ATerm), ATerm s_68 (ATerm))
{
  t = begin_scope_1(t, r_68);
  {
    ATerm o_2 (ATerm t)
    {
      t = end_scope_1(t, r_68);
      return(t);
    }
    t = restore_always_2(t, s_68, o_2);
  }
  return(t);
}
ATerm matrix_to_dfa_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm r_2 (ATerm t)
    {
      ATerm n_12 = t;
      if((PushChoice() == 0))
        {
          t = reduce_matrix_0(t);
          PopChoice();
        }
      else
        {
          t = n_12;
          {
            ATerm o_12 = t;
            if((PushChoice() == 0))
              {
                t = MatrixScope_0(t);
                PopChoice();
              }
            else
              {
                t = o_12;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, r_2);
    t = _all(t, q_2);
    return(t);
  }
  t = scope_2(t, p_2, q_2);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
  n_53 = t;
  m_53 :
  if(match_cons(n_53, sym__2))
    {
      o_53 = ATgetArgument(n_53, 0);
      p_53 = ATgetArgument(n_53, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(p_53)), not_null(o_53));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL;
  z_53 = t;
  w_53 :
  if(match_cons(z_53, sym__2))
    {
      a_54 = ATgetArgument(z_53, 0);
      d_54 = ATgetArgument(z_53, 1);
      x_53 :
      if(((ATgetType(a_54) == AT_LIST) && ((ATermList) a_54 != ATempty)))
        {
          b_54 = ATgetFirst((ATermList) a_54);
          c_54 = (ATerm) ATgetNext((ATermList) a_54);
          y_53 :
          if(((ATgetType(d_54) == AT_LIST) && ((ATermList) d_54 != ATempty)))
            {
              e_54 = ATgetFirst((ATermList) d_54);
              f_54 = (ATerm) ATgetNext((ATermList) d_54);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(b_54), not_null(e_54)), (ATerm) ATmakeAppl(sym__2, not_null(c_54), not_null(f_54)));
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
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  p_54 = t;
  m_54 :
  if(match_cons(p_54, sym__2))
    {
      q_54 = ATgetArgument(p_54, 0);
      r_54 = ATgetArgument(p_54, 1);
      n_54 :
      if(((ATermList) q_54 == ATempty))
        {
          o_54 :
          if(((ATermList) r_54 == ATempty))
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
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL;
  j_55 = t;
  i_55 :
  if(match_cons(j_55, sym_Cong_2))
    {
      k_55 = ATgetArgument(j_55, 0);
      l_55 = ATgetArgument(j_55, 1);
      {
        ATerm o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,m_56 = NULL;
        ATerm p_12;
        p_12 = t;
        {
          ATerm t_55 = NULL;
          t = not_null(l_55);
          {
            ATerm w_55 = NULL;
            t = map_1(t, new_0);
            {
              t_55 = t;
              {
                if(((q_55 != NULL) && (q_55 != t_55)))
                  _fail(t_55);
                else
                  q_55 = t_55;
                {
                  t = not_null(q_55);
                  {
                    ATerm x_55 = NULL;
                    ATerm s_2 (ATerm t)
                    {
                      ATerm u_55 = NULL;
                      ATerm v_55 = NULL;
                      v_55 = t;
                      if(((u_55 != NULL) && (u_55 != v_55)))
                        _fail(v_55);
                      else
                        u_55 = v_55;
                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_55));
                      return(t);
                    }
                    t = map_1(t, s_2);
                    {
                      w_55 = t;
                      {
                        if(((o_55 != NULL) && (o_55 != w_55)))
                          _fail(w_55);
                        else
                          o_55 = w_55;
                        {
                          t = not_null(l_55);
                          {
                            ATerm a_56 = NULL;
                            t = map_1(t, new_0);
                            {
                              x_55 = t;
                              {
                                if(((r_55 != NULL) && (r_55 != x_55)))
                                  _fail(x_55);
                                else
                                  r_55 = x_55;
                                {
                                  t = not_null(r_55);
                                  {
                                    ATerm b_56 = NULL,l_56 = NULL;
                                    ATerm t_2 (ATerm t)
                                    {
                                      ATerm y_55 = NULL;
                                      ATerm z_55 = NULL;
                                      z_55 = t;
                                      if(((y_55 != NULL) && (y_55 != z_55)))
                                        _fail(z_55);
                                      else
                                        y_55 = z_55;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_55));
                                      return(t);
                                    }
                                    t = map_1(t, t_2);
                                    {
                                      a_56 = t;
                                      {
                                        if(((p_55 != NULL) && (p_55 != a_56)))
                                          _fail(a_56);
                                        else
                                          p_55 = a_56;
                                        {
                                          ATerm c_56 = NULL;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_55), not_null(r_55));
                                          {
                                            t = zip_1(t, _id);
                                            {
                                              c_56 = t;
                                              if(((b_56 != NULL) && (b_56 != c_56)))
                                                _fail(c_56);
                                              else
                                                b_56 = c_56;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(b_56), not_null(l_55));
                                            {
                                              ATerm u_2 (ATerm t)
                                              {
                                                ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
                                                d_56 = t;
                                                e_55 :
                                                if(match_cons(d_56, sym__2))
                                                  {
                                                    e_56 = ATgetArgument(d_56, 0);
                                                    h_56 = ATgetArgument(d_56, 1);
                                                    f_55 :
                                                    if(match_cons(e_56, sym__2))
                                                      {
                                                        f_56 = ATgetArgument(e_56, 0);
                                                        g_56 = ATgetArgument(e_56, 1);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_56))), (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_56), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(g_56)))));
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = zip_1(t, u_2);
                                              {
                                                l_56 = t;
                                                if(((s_55 != NULL) && (s_55 != l_56)))
                                                  _fail(l_56);
                                                else
                                                  s_55 = l_56;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        t = p_12;
        {
          ATerm n_56 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_55), not_null(r_55));
          {
            t = conc_0(t);
            {
              n_56 = t;
              if(((m_56 != NULL) && (m_56 != n_56)))
                _fail(n_56);
              else
                m_56 = n_56;
            }
          }
          t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(m_56), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(k_55), not_null(o_55))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(s_55)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(k_55), not_null(p_55))))));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatchingCongruence_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL;
  f_57 = t;
  e_57 :
  if(match_cons(f_57, sym_Cong_2))
    {
      g_57 = ATgetArgument(f_57, 0);
      h_57 = ATgetArgument(f_57, 1);
      {
        ATerm k_57 = NULL;
        ATerm o_57 = NULL;
        t = not_null(h_57);
        {
          ATerm v_2 (ATerm t)
          {
            ATerm l_57 = NULL,m_57 = NULL;
            m_57 = t;
            c_57 :
            if(match_cons(m_57, sym_Match_1))
              {
                l_57 = ATgetArgument(m_57, 0);
                t = not_null(l_57);
              }
            else
              {
                if(match_cons(m_57, sym_Id_0))
                  t = (ATerm) ATmakeAppl(sym_Wld_0);
                else
                  _fail(t);
              }
            return(t);
          }
          t = map_1(t, v_2);
          {
            o_57 = t;
            if(((k_57 != NULL) && (k_57 != o_57)))
              _fail(o_57);
            else
              k_57 = o_57;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Op_2, not_null(g_57), not_null(k_57)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm EmptyScope_0 (ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL;
  w_57 = t;
  u_57 :
  if(match_cons(w_57, sym_Scope_2))
    {
      x_57 = ATgetArgument(w_57, 0);
      y_57 = ATgetArgument(w_57, 1);
      v_57 :
      if(((ATermList) x_57 == ATempty))
        {
          t = not_null(y_57);
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
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  h_58 :
  if(match_cons(u_58, sym_Where_1))
    {
      v_58 = ATgetArgument(u_58, 0);
      i_58 :
      if(match_cons(v_58, sym_Seq_2))
        {
          t_58 = ATgetArgument(v_58, 0);
          p_58 = ATgetArgument(v_58, 1);
          j_58 :
          if(match_cons(t_58, sym_Where_1))
            {
              o_58 = ATgetArgument(t_58, 0);
              k_58 :
              if(match_cons(p_58, sym_Seq_2))
                {
                  q_58 = ATgetArgument(p_58, 0);
                  s_58 = ATgetArgument(p_58, 1);
                  l_58 :
                  if(match_cons(q_58, sym_Build_1))
                    {
                      r_58 = ATgetArgument(q_58, 0);
                      t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_58), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_58)), not_null(s_58))));
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
          if(match_cons(v_58, sym_Where_1))
            {
              t_58 = ATgetArgument(v_58, 0);
              t = (ATerm) ATmakeAppl(sym_Where_1, not_null(t_58));
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(u_58, sym_Test_1))
        {
          v_58 = ATgetArgument(u_58, 0);
          m_58 :
          if(match_cons(v_58, sym_Test_1))
            {
              t_58 = ATgetArgument(v_58, 0);
              t = (ATerm) ATmakeAppl(sym_Test_1, not_null(t_58));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(u_58, sym_Not_1))
            {
              v_58 = ATgetArgument(u_58, 0);
              n_58 :
              if(match_cons(v_58, sym_Not_1))
                {
                  t_58 = ATgetArgument(v_58, 0);
                  t = (ATerm) ATmakeAppl(sym_Test_1, not_null(t_58));
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(u_58, sym_LChoice_2))
                {
                  v_58 = ATgetArgument(u_58, 0);
                  w_58 = ATgetArgument(u_58, 1);
                  {
                    if(((v_58 != NULL) && (v_58 != w_58)))
                      _fail(w_58);
                    else
                      v_58 = w_58;
                    t = not_null(v_58);
                  }
                }
              else
                {
                  if(match_cons(u_58, sym_Choice_2))
                    {
                      v_58 = ATgetArgument(u_58, 0);
                      w_58 = ATgetArgument(u_58, 1);
                      {
                        if(((v_58 != NULL) && (v_58 != w_58)))
                          _fail(w_58);
                        else
                          v_58 = w_58;
                        t = not_null(v_58);
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
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL;
  s_59 = t;
  o_59 :
  if(match_cons(s_59, sym_LChoice_2))
    {
      t_59 = ATgetArgument(s_59, 0);
      w_59 = ATgetArgument(s_59, 1);
      p_59 :
      if(match_cons(t_59, sym_LChoice_2))
        {
          u_59 = ATgetArgument(t_59, 0);
          v_59 = ATgetArgument(t_59, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(u_59), (ATerm) ATmakeAppl(sym_LChoice_2, not_null(v_59), not_null(w_59)));
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(s_59, sym_Seq_2))
        {
          t_59 = ATgetArgument(s_59, 0);
          w_59 = ATgetArgument(s_59, 1);
          q_59 :
          if(match_cons(t_59, sym_Seq_2))
            {
              u_59 = ATgetArgument(t_59, 0);
              v_59 = ATgetArgument(t_59, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_59), (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_59), not_null(w_59)));
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(s_59, sym_Choice_2))
            {
              t_59 = ATgetArgument(s_59, 0);
              w_59 = ATgetArgument(s_59, 1);
              r_59 :
              if(match_cons(t_59, sym_Choice_2))
                {
                  u_59 = ATgetArgument(t_59, 0);
                  v_59 = ATgetArgument(t_59, 1);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(u_59), (ATerm) ATmakeAppl(sym_Choice_2, not_null(v_59), not_null(w_59)));
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
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,i_61 = NULL;
  h_61 = t;
  z_60 :
  if(match_cons(h_61, sym_InfixApp_3))
    {
      i_61 = ATgetArgument(h_61, 0);
      e_61 = ATgetArgument(h_61, 1);
      d_61 = ATgetArgument(h_61, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(e_61), (ATerm) ATmakeAppl(sym_Op_2, (ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_61)), not_null(i_61))));
    }
  else
    {
      if(match_cons(h_61, sym_BAM_3))
        {
          i_61 = ATgetArgument(h_61, 0);
          e_61 = ATgetArgument(h_61, 1);
          d_61 = ATgetArgument(h_61, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(d_61))), not_null(i_61)), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_61))));
        }
      else
        {
          if(match_cons(h_61, sym_AM_2))
            {
              i_61 = ATgetArgument(h_61, 0);
              e_61 = ATgetArgument(h_61, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_61), (ATerm) ATmakeAppl(sym_Match_1, not_null(e_61)));
            }
          else
            {
              if(match_cons(h_61, sym_MA_2))
                {
                  i_61 = ATgetArgument(h_61, 0);
                  e_61 = ATgetArgument(h_61, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(i_61)), not_null(e_61));
                }
              else
                {
                  if(match_cons(h_61, sym_BA_2))
                    {
                      i_61 = ATgetArgument(h_61, 0);
                      e_61 = ATgetArgument(h_61, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(e_61)), not_null(i_61));
                    }
                  else
                    {
                      if(match_cons(h_61, sym_Lets_2))
                        {
                          i_61 = ATgetArgument(h_61, 0);
                          e_61 = ATgetArgument(h_61, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(i_61), not_null(e_61));
                        }
                      else
                        {
                          if(match_cons(h_61, sym_LChoices_1))
                            {
                              i_61 = ATgetArgument(h_61, 0);
                              a_61 :
                              if(((ATgetType(i_61) == AT_LIST) && ((ATermList) i_61 != ATempty)))
                                {
                                  f_61 = ATgetFirst((ATermList) i_61);
                                  g_61 = (ATerm) ATgetNext((ATermList) i_61);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(f_61), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(g_61)));
                                }
                              else
                                {
                                  if(((ATermList) i_61 == ATempty))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_Fail_0);
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(h_61, sym_Choices_1))
                                {
                                  i_61 = ATgetArgument(h_61, 0);
                                  b_61 :
                                  if(((ATgetType(i_61) == AT_LIST) && ((ATermList) i_61 != ATempty)))
                                    {
                                      f_61 = ATgetFirst((ATermList) i_61);
                                      g_61 = (ATerm) ATgetNext((ATermList) i_61);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_61), (ATerm) ATmakeAppl(sym_Choices_1, not_null(g_61)));
                                    }
                                  else
                                    {
                                      if(((ATermList) i_61 == ATempty))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_Fail_0);
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(h_61, sym_Seqs_1))
                                    {
                                      i_61 = ATgetArgument(h_61, 0);
                                      c_61 :
                                      if(((ATgetType(i_61) == AT_LIST) && ((ATermList) i_61 != ATempty)))
                                        {
                                          f_61 = ATgetFirst((ATermList) i_61);
                                          g_61 = (ATerm) ATgetNext((ATermList) i_61);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_61), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(g_61)));
                                        }
                                      else
                                        {
                                          if(((ATermList) i_61 == ATempty))
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
  ATerm x_62 = NULL,y_62 = NULL;
  x_62 = t;
  v_62 :
  if(match_cons(x_62, sym_Where_1))
    {
      y_62 = ATgetArgument(x_62, 0);
      w_62 :
      if(match_cons(y_62, sym_Fail_0))
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
  ATerm e_63 = NULL,f_63 = NULL,g_63 = NULL;
  e_63 = t;
  b_63 :
  if(match_cons(e_63, sym_LChoice_2))
    {
      f_63 = ATgetArgument(e_63, 0);
      g_63 = ATgetArgument(e_63, 1);
      c_63 :
      if(match_cons(g_63, sym_Fail_0))
        t = not_null(f_63);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F13_0 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL;
  o_63 = t;
  m_63 :
  if(match_cons(o_63, sym_LChoice_2))
    {
      p_63 = ATgetArgument(o_63, 0);
      q_63 = ATgetArgument(o_63, 1);
      n_63 :
      if(match_cons(p_63, sym_Fail_0))
        t = not_null(q_63);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F12_0 (ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,i_64 = NULL;
  e_64 = t;
  c_64 :
  if(match_cons(e_64, sym_Choice_2))
    {
      f_64 = ATgetArgument(e_64, 0);
      i_64 = ATgetArgument(e_64, 1);
      d_64 :
      if(match_cons(i_64, sym_Fail_0))
        t = not_null(f_64);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F11_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
  o_64 = t;
  m_64 :
  if(match_cons(o_64, sym_Choice_2))
    {
      p_64 = ATgetArgument(o_64, 0);
      q_64 = ATgetArgument(o_64, 1);
      n_64 :
      if(match_cons(p_64, sym_Fail_0))
        t = not_null(q_64);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm F10_0 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,i_65 = NULL;
  d_65 = t;
  y_64 :
  if(match_cons(d_65, sym_Cong_2))
    {
      e_65 = ATgetArgument(d_65, 0);
      i_65 = ATgetArgument(d_65, 1);
      {
        t = not_null(i_65);
        {
          ATerm w_2 (ATerm t)
          {
            ATerm l_65 = NULL;
            l_65 = t;
            v_64 :
            if(!(match_cons(l_65, sym_Fail_0)))
              _fail(t);
            return(t);
          }
          t = fetch_1(t, w_2);
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
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL;
  q_65 = t;
  o_65 :
  if(match_cons(q_65, sym_Path_2))
    {
      r_65 = ATgetArgument(q_65, 0);
      s_65 = ATgetArgument(q_65, 1);
      p_65 :
      if(match_cons(s_65, sym_Fail_0))
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
  ATerm y_65 = NULL,z_65 = NULL;
  y_65 = t;
  w_65 :
  if(match_cons(y_65, sym_One_1))
    {
      z_65 = ATgetArgument(y_65, 0);
      x_65 :
      if(match_cons(z_65, sym_Fail_0))
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
  ATerm e_66 = NULL,f_66 = NULL;
  e_66 = t;
  c_66 :
  if(match_cons(e_66, sym_Some_1))
    {
      f_66 = ATgetArgument(e_66, 0);
      d_66 :
      if(match_cons(f_66, sym_Fail_0))
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
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL;
  k_66 = t;
  i_66 :
  if(match_cons(k_66, sym_Rec_2))
    {
      l_66 = ATgetArgument(k_66, 0);
      m_66 = ATgetArgument(k_66, 1);
      j_66 :
      if(match_cons(m_66, sym_Fail_0))
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
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL;
  y_66 = t;
  q_66 :
  if(match_cons(y_66, sym_Scope_2))
    {
      z_66 = ATgetArgument(y_66, 0);
      a_67 = ATgetArgument(y_66, 1);
      x_66 :
      if(match_cons(a_67, sym_Fail_0))
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
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL;
  g_67 = t;
  e_67 :
  if(match_cons(g_67, sym_Seq_2))
    {
      h_67 = ATgetArgument(g_67, 0);
      i_67 = ATgetArgument(g_67, 1);
      f_67 :
      if(match_cons(h_67, sym_Fail_0))
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
  ATerm o_67 = NULL,p_67 = NULL;
  o_67 = t;
  m_67 :
  if(match_cons(o_67, sym_Not_1))
    {
      p_67 = ATgetArgument(o_67, 0);
      n_67 :
      if(match_cons(p_67, sym_Fail_0))
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
  ATerm y_67 = NULL,z_67 = NULL;
  y_67 = t;
  u_67 :
  if(match_cons(y_67, sym_Test_1))
    {
      z_67 = ATgetArgument(y_67, 0);
      x_67 :
      if(match_cons(z_67, sym_Fail_0))
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
  ATerm q_12 = t;
  if((PushChoice() == 0))
    {
      t = F1_0(t);
      PopChoice();
    }
  else
    {
      t = q_12;
      {
        ATerm t_12 = t;
        if((PushChoice() == 0))
          {
            t = F2_0(t);
            PopChoice();
          }
        else
          {
            t = t_12;
            {
              ATerm u_12 = t;
              if((PushChoice() == 0))
                {
                  t = F3_0(t);
                  PopChoice();
                }
              else
                {
                  t = u_12;
                  {
                    ATerm v_12 = t;
                    if((PushChoice() == 0))
                      {
                        t = F5_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = v_12;
                        {
                          ATerm w_12 = t;
                          if((PushChoice() == 0))
                            {
                              t = F6_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = w_12;
                              {
                                ATerm x_12 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = F7_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = x_12;
                                    {
                                      ATerm y_12 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = F8_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = y_12;
                                          {
                                            ATerm z_12 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = F9_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = z_12;
                                                {
                                                  ATerm a_13 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = F10_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = a_13;
                                                      {
                                                        ATerm b_13 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = F11_0(t);
                                                            PopChoice();
                                                          }
                                                        else
                                                          {
                                                            t = b_13;
                                                            {
                                                              ATerm c_13 = t;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = F12_0(t);
                                                                  PopChoice();
                                                                }
                                                              else
                                                                {
                                                                  t = c_13;
                                                                  {
                                                                    ATerm d_13 = t;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = F13_0(t);
                                                                        PopChoice();
                                                                      }
                                                                    else
                                                                      {
                                                                        t = d_13;
                                                                        {
                                                                          ATerm e_13 = t;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = F14_0(t);
                                                                              PopChoice();
                                                                            }
                                                                          else
                                                                            {
                                                                              t = e_13;
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
  ATerm h_68 = NULL,i_68 = NULL;
  h_68 = t;
  f_68 :
  if(match_cons(h_68, sym_Match_1))
    {
      i_68 = ATgetArgument(h_68, 0);
      g_68 :
      if(match_cons(i_68, sym_Wld_0))
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
  ATerm u_68 = NULL,v_68 = NULL;
  u_68 = t;
  n_68 :
  if(match_cons(u_68, sym_Where_1))
    {
      v_68 = ATgetArgument(u_68, 0);
      o_68 :
      if(match_cons(v_68, sym_Id_0))
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
  ATerm a_69 = NULL,b_69 = NULL;
  a_69 = t;
  y_68 :
  if(match_cons(a_69, sym_All_1))
    {
      b_69 = ATgetArgument(a_69, 0);
      z_68 :
      if(match_cons(b_69, sym_Id_0))
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
  ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL;
  g_69 = t;
  e_69 :
  if(match_cons(g_69, sym_Rec_2))
    {
      h_69 = ATgetArgument(g_69, 0);
      i_69 = ATgetArgument(g_69, 1);
      f_69 :
      if(match_cons(i_69, sym_Id_0))
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
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
  o_69 = t;
  m_69 :
  if(match_cons(o_69, sym_Scope_2))
    {
      p_69 = ATgetArgument(o_69, 0);
      q_69 = ATgetArgument(o_69, 1);
      n_69 :
      if(match_cons(q_69, sym_Id_0))
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
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL;
  w_69 = t;
  u_69 :
  if(match_cons(w_69, sym_LChoice_2))
    {
      x_69 = ATgetArgument(w_69, 0);
      y_69 = ATgetArgument(w_69, 1);
      v_69 :
      if(match_cons(x_69, sym_Id_0))
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
  ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL;
  e_70 = t;
  c_70 :
  if(match_cons(e_70, sym_Seq_2))
    {
      f_70 = ATgetArgument(e_70, 0);
      g_70 = ATgetArgument(e_70, 1);
      d_70 :
      if(match_cons(g_70, sym_Id_0))
        t = not_null(f_70);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I3_0 (ATerm t)
{
  ATerm m_70 = NULL,n_70 = NULL,o_70 = NULL;
  m_70 = t;
  k_70 :
  if(match_cons(m_70, sym_Seq_2))
    {
      n_70 = ATgetArgument(m_70, 0);
      o_70 = ATgetArgument(m_70, 1);
      l_70 :
      if(match_cons(n_70, sym_Id_0))
        t = not_null(o_70);
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm I2_0 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL;
  u_70 = t;
  s_70 :
  if(match_cons(u_70, sym_Not_1))
    {
      v_70 = ATgetArgument(u_70, 0);
      t_70 :
      if(match_cons(v_70, sym_Id_0))
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
  ATerm e_71 = NULL,f_71 = NULL;
  e_71 = t;
  c_71 :
  if(match_cons(e_71, sym_Test_1))
    {
      f_71 = ATgetArgument(e_71, 0);
      d_71 :
      if(match_cons(f_71, sym_Id_0))
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
  ATerm f_13 = t;
  if((PushChoice() == 0))
    {
      t = I1_0(t);
      PopChoice();
    }
  else
    {
      t = f_13;
      {
        ATerm g_13 = t;
        if((PushChoice() == 0))
          {
            t = I2_0(t);
            PopChoice();
          }
        else
          {
            t = g_13;
            {
              ATerm h_13 = t;
              if((PushChoice() == 0))
                {
                  t = I3_0(t);
                  PopChoice();
                }
              else
                {
                  t = h_13;
                  {
                    ATerm i_13 = t;
                    if((PushChoice() == 0))
                      {
                        t = I4_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = i_13;
                        {
                          ATerm j_13 = t;
                          if((PushChoice() == 0))
                            {
                              t = I7_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = j_13;
                              {
                                ATerm k_13 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = I8_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_13;
                                    {
                                      ATerm l_13 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = I9_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_13;
                                          {
                                            ATerm m_13 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = I10_0(t);
                                                PopChoice();
                                              }
                                            else
                                              {
                                                t = m_13;
                                                {
                                                  ATerm n_13 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = I12_0(t);
                                                      PopChoice();
                                                    }
                                                  else
                                                    {
                                                      t = n_13;
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
  ATerm o_13 = t;
  if((PushChoice() == 0))
    {
      t = ElimId_0(t);
      PopChoice();
    }
  else
    {
      t = o_13;
      {
        ATerm p_13 = t;
        if((PushChoice() == 0))
          {
            t = ElimFail_0(t);
            PopChoice();
          }
        else
          {
            t = p_13;
            {
              ATerm q_13 = t;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  PopChoice();
                }
              else
                {
                  t = q_13;
                  {
                    ATerm r_13 = t;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0(t);
                        PopChoice();
                      }
                    else
                      {
                        t = r_13;
                        {
                          ATerm s_13 = t;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0(t);
                              PopChoice();
                            }
                          else
                            {
                              t = s_13;
                              {
                                ATerm t_13 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = EmptyScope_0(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_13;
                                    {
                                      ATerm u_13 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = MatchingCongruence_0(t);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = u_13;
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
  ATerm j_71 = NULL,k_71 = NULL,l_71 = NULL;
  j_71 = t;
  i_71 :
  if(match_cons(j_71, sym__2))
    {
      k_71 = ATgetArgument(j_71, 0);
      l_71 = ATgetArgument(j_71, 1);
      {
        t = not_null(k_71);
        {
          ATerm x_2 (ATerm t)
          {
            t = not_null(l_71);
            return(t);
          }
          t = at_end_1(t, x_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixMerge_0 (ATerm t)
{
  ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL,u_73 = NULL,w_73 = NULL,x_73 = NULL,y_73 = NULL;
  p_73 = t;
  t_72 :
  if(match_cons(p_73, sym_LChoice_2))
    {
      q_73 = ATgetArgument(p_73, 0);
      y_73 = ATgetArgument(p_73, 1);
      u_72 :
      if(match_cons(q_73, sym_Matrix_2))
        {
          r_73 = ATgetArgument(q_73, 0);
          s_73 = ATgetArgument(q_73, 1);
          v_72 :
          if(match_cons(y_73, sym_Choice_2))
            {
              n_73 = ATgetArgument(y_73, 0);
              o_73 = ATgetArgument(y_73, 1);
              w_72 :
              if(match_cons(n_73, sym_Matrix_2))
                {
                  l_73 = ATgetArgument(n_73, 0);
                  m_73 = ATgetArgument(n_73, 1);
                  {
                    ATerm g_74 = NULL,i_74 = NULL;
                    ATerm v_13;
                    v_13 = t;
                    {
                      ATerm h_74 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_73), not_null(l_73));
                      {
                        t = union_0(t);
                        {
                          h_74 = t;
                          if(((g_74 != NULL) && (g_74 != h_74)))
                            _fail(h_74);
                          else
                            g_74 = h_74;
                        }
                      }
                    }
                    t = v_13;
                    {
                      ATerm j_74 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_73), not_null(m_73));
                      {
                        t = conc_0(t);
                        {
                          j_74 = t;
                          if(((i_74 != NULL) && (i_74 != j_74)))
                            _fail(j_74);
                          else
                            i_74 = j_74;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(g_74), not_null(i_74)), not_null(o_73));
                    }
                  }
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(y_73, sym_LChoice_2))
                {
                  n_73 = ATgetArgument(y_73, 0);
                  o_73 = ATgetArgument(y_73, 1);
                  x_72 :
                  if(match_cons(n_73, sym_Matrix_2))
                    {
                      l_73 = ATgetArgument(n_73, 0);
                      m_73 = ATgetArgument(n_73, 1);
                      {
                        ATerm q_74 = NULL,s_74 = NULL;
                        ATerm z_13;
                        z_13 = t;
                        {
                          ATerm r_74 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_73), not_null(l_73));
                          {
                            t = union_0(t);
                            {
                              r_74 = t;
                              if(((q_74 != NULL) && (q_74 != r_74)))
                                _fail(r_74);
                              else
                                q_74 = r_74;
                            }
                          }
                        }
                        t = z_13;
                        {
                          ATerm v_74 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_73), not_null(m_73));
                          {
                            t = conc_0(t);
                            {
                              v_74 = t;
                              if(((s_74 != NULL) && (s_74 != v_74)))
                                _fail(v_74);
                              else
                                s_74 = v_74;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(q_74), not_null(s_74)), not_null(o_73));
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(y_73, sym_Matrix_2))
                    {
                      n_73 = ATgetArgument(y_73, 0);
                      o_73 = ATgetArgument(y_73, 1);
                      {
                        ATerm i_75 = NULL,k_75 = NULL;
                        ATerm b_14;
                        b_14 = t;
                        {
                          ATerm j_75 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_73), not_null(n_73));
                          {
                            t = union_0(t);
                            {
                              j_75 = t;
                              if(((i_75 != NULL) && (i_75 != j_75)))
                                _fail(j_75);
                              else
                                i_75 = j_75;
                            }
                          }
                        }
                        t = b_14;
                        {
                          ATerm l_75 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_73), not_null(o_73));
                          {
                            t = conc_0(t);
                            {
                              l_75 = t;
                              if(((k_75 != NULL) && (k_75 != l_75)))
                                _fail(l_75);
                              else
                                k_75 = l_75;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(i_75), not_null(k_75));
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
      if(match_cons(p_73, sym_Choice_2))
        {
          q_73 = ATgetArgument(p_73, 0);
          y_73 = ATgetArgument(p_73, 1);
          y_72 :
          if(match_cons(q_73, sym_Matrix_2))
            {
              r_73 = ATgetArgument(q_73, 0);
              s_73 = ATgetArgument(q_73, 1);
              z_72 :
              if(match_cons(y_73, sym_LChoice_2))
                {
                  n_73 = ATgetArgument(y_73, 0);
                  o_73 = ATgetArgument(y_73, 1);
                  e_73 :
                  if(match_cons(n_73, sym_Matrix_2))
                    {
                      l_73 = ATgetArgument(n_73, 0);
                      m_73 = ATgetArgument(n_73, 1);
                      {
                        ATerm r_75 = NULL,t_75 = NULL;
                        ATerm d_14;
                        d_14 = t;
                        {
                          ATerm s_75 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_73), not_null(l_73));
                          {
                            t = union_0(t);
                            {
                              s_75 = t;
                              if(((r_75 != NULL) && (r_75 != s_75)))
                                _fail(s_75);
                              else
                                r_75 = s_75;
                            }
                          }
                        }
                        t = d_14;
                        {
                          ATerm u_75 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_73), not_null(m_73));
                          {
                            t = conc_0(t);
                            {
                              u_75 = t;
                              if(((t_75 != NULL) && (t_75 != u_75)))
                                _fail(u_75);
                              else
                                t_75 = u_75;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(r_75), not_null(t_75)), not_null(o_73));
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              else
                {
                  if(match_cons(y_73, sym_Choice_2))
                    {
                      n_73 = ATgetArgument(y_73, 0);
                      o_73 = ATgetArgument(y_73, 1);
                      f_73 :
                      if(match_cons(n_73, sym_Matrix_2))
                        {
                          l_73 = ATgetArgument(n_73, 0);
                          m_73 = ATgetArgument(n_73, 1);
                          {
                            ATerm f_76 = NULL,h_76 = NULL;
                            ATerm f_14;
                            f_14 = t;
                            {
                              ATerm g_76 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(r_73), not_null(l_73));
                              {
                                t = union_0(t);
                                {
                                  g_76 = t;
                                  if(((f_76 != NULL) && (f_76 != g_76)))
                                    _fail(g_76);
                                  else
                                    f_76 = g_76;
                                }
                              }
                            }
                            t = f_14;
                            {
                              ATerm i_76 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_73), not_null(m_73));
                              {
                                t = conc_0(t);
                                {
                                  i_76 = t;
                                  if(((h_76 != NULL) && (h_76 != i_76)))
                                    _fail(i_76);
                                  else
                                    h_76 = i_76;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, not_null(f_76), not_null(h_76)), not_null(o_73));
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    {
                      if(match_cons(y_73, sym_Matrix_2))
                        {
                          n_73 = ATgetArgument(y_73, 0);
                          o_73 = ATgetArgument(y_73, 1);
                          {
                            ATerm n_76 = NULL,p_76 = NULL;
                            ATerm j_14;
                            j_14 = t;
                            {
                              ATerm o_76 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(r_73), not_null(n_73));
                              {
                                t = union_0(t);
                                {
                                  o_76 = t;
                                  if(((n_76 != NULL) && (n_76 != o_76)))
                                    _fail(o_76);
                                  else
                                    n_76 = o_76;
                                }
                              }
                            }
                            t = j_14;
                            {
                              ATerm q_76 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_73), not_null(o_73));
                              {
                                t = conc_0(t);
                                {
                                  q_76 = t;
                                  if(((p_76 != NULL) && (p_76 != q_76)))
                                    _fail(q_76);
                                  else
                                    p_76 = q_76;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(n_76), not_null(p_76));
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
          if(match_cons(p_73, sym_Scope_2))
            {
              q_73 = ATgetArgument(p_73, 0);
              y_73 = ATgetArgument(p_73, 1);
              g_73 :
              if(match_cons(y_73, sym_Matrix_2))
                {
                  n_73 = ATgetArgument(y_73, 0);
                  o_73 = ATgetArgument(y_73, 1);
                  {
                    ATerm u_76 = NULL;
                    ATerm b_77 = NULL;
                    t = not_null(o_73);
                    {
                      ATerm y_2 (ATerm t)
                      {
                        ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
                        v_76 = t;
                        r_72 :
                        if(match_cons(v_76, sym_Row_2))
                          {
                            w_76 = ATgetArgument(v_76, 0);
                            x_76 = ATgetArgument(v_76, 1);
                            t = (ATerm) ATmakeAppl(sym_Row_2, not_null(w_76), (ATerm) ATmakeAppl(sym_Scope_2, not_null(q_73), not_null(x_76)));
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = map_1(t, y_2);
                      {
                        b_77 = t;
                        if(((u_76 != NULL) && (u_76 != b_77)))
                          _fail(b_77);
                        else
                          u_76 = b_77;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(n_73), not_null(u_76));
                  }
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(p_73, sym_Seq_2))
                {
                  q_73 = ATgetArgument(p_73, 0);
                  y_73 = ATgetArgument(p_73, 1);
                  h_73 :
                  if(match_cons(q_73, sym_Matrix_2))
                    {
                      r_73 = ATgetArgument(q_73, 0);
                      s_73 = ATgetArgument(q_73, 1);
                      i_73 :
                      if(((ATgetType(s_73) == AT_LIST) && ((ATermList) s_73 != ATempty)))
                        {
                          t_73 = ATgetFirst((ATermList) s_73);
                          x_73 = (ATerm) ATgetNext((ATermList) s_73);
                          j_73 :
                          if(match_cons(t_73, sym_Row_2))
                            {
                              u_73 = ATgetArgument(t_73, 0);
                              w_73 = ATgetArgument(t_73, 1);
                              k_73 :
                              if(((ATermList) x_73 == ATempty))
                                {
                                  t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(r_73), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(u_73), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_73), not_null(y_73)))));
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
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm), ATerm e_76 (ATerm))
{
  ATerm k_14 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_76(t);
      PopChoice();
    }
  else
    {
      t = k_14;
      {
        ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL;
        v_78 = t;
        u_78 :
        if(((ATgetType(v_78) == AT_LIST) && ((ATermList) v_78 != ATempty)))
          {
            w_78 = ATgetFirst((ATermList) v_78);
            x_78 = (ATerm) ATgetNext((ATermList) v_78);
            {
              ATerm a_79 = NULL,g_79 = NULL;
              ATerm m_14;
              m_14 = t;
              {
                ATerm b_79 = NULL;
                t = not_null(w_78);
                {
                  t = e_76(t);
                  {
                    b_79 = t;
                    if(((a_79 != NULL) && (a_79 != b_79)))
                      _fail(b_79);
                    else
                      a_79 = b_79;
                  }
                }
              }
              t = m_14;
              {
                ATerm h_79 = NULL;
                t = not_null(x_78);
                {
                  t = foldr_3(t, c_76, d_76, e_76);
                  {
                    h_79 = t;
                    if(((g_79 != NULL) && (g_79 != h_79)))
                      _fail(h_79);
                    else
                      g_79 = h_79;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(a_79), not_null(g_79));
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
  ATerm t_79 = NULL;
  ATerm v_79 = NULL;
  t_79 = t;
  {
    ATerm w_79 = NULL;
    ATerm y_79 = NULL,z_79 = NULL,a_80 = NULL;
    t = not_null(t_79);
    {
      w_79 = t;
      {
        t = SSL_explode_term(not_null(w_79));
        {
          y_79 = t;
          s_79 :
          if(match_cons(y_79, sym__2))
            {
              z_79 = ATgetArgument(y_79, 0);
              a_80 = ATgetArgument(y_79, 1);
              if(((v_79 != NULL) && (v_79 != a_80)))
                _fail(a_80);
              else
                v_79 = a_80;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(v_79);
      t = foldr_3(t, p_77, q_77, r_77);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm a_78 (ATerm))
{
  ATerm j_80 (ATerm t)
  {
    ATerm n_14 = t;
    if((PushChoice() == 0))
      {
        ATerm h_80 = NULL;
        ATerm i_80 = NULL;
        t = a_78(t);
        {
          i_80 = t;
          if(((h_80 != NULL) && (h_80 != i_80)))
            _fail(i_80);
          else
            h_80 = i_80;
        }
        t = (ATerm) ATinsert(ATempty, not_null(h_80));
        PopChoice();
      }
    else
      {
        t = n_14;
        {
          ATerm z_2 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, z_2, union_0, j_80);
        }
      }
    return(t);
  }
  t = j_80(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm c_78 (ATerm))
{
  t = collect_om_1(t, c_78);
  return(t);
}
ATerm collect_offsets_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm n_80 = NULL,p_80 = NULL;
    n_80 = t;
    m_80 :
    if(match_cons(n_80, sym_Off_1))
      {
        p_80 = ATgetArgument(n_80, 0);
        t = not_null(p_80);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_1(t, a_3);
  return(t);
}
ATerm CollectSubst_0 (ATerm t)
{
  ATerm h_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL;
  k_81 = t;
  a_81 :
  if(match_cons(k_81, sym_As_2))
    {
      l_81 = ATgetArgument(k_81, 0);
      n_81 = ATgetArgument(k_81, 1);
      b_81 :
      if(match_cons(l_81, sym_Var_1))
        {
          m_81 = ATgetArgument(l_81, 0);
          c_81 :
          if(match_cons(n_81, sym_As_2))
            {
              o_81 = ATgetArgument(n_81, 0);
              j_81 = ATgetArgument(n_81, 1);
              d_81 :
              if(match_cons(o_81, sym_Off_1))
                {
                  h_81 = ATgetArgument(o_81, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_81)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_81))));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(l_81, sym_Off_1))
            {
              m_81 = ATgetArgument(l_81, 0);
              g_81 :
              if(match_cons(n_81, sym_Var_1))
                {
                  o_81 = ATgetArgument(n_81, 0);
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(o_81)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_81))));
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
  ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL;
  x_81 = t;
  w_81 :
  if(((ATermList) x_81 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(x_81) == AT_LIST) && ((ATermList) x_81 != ATempty)))
        {
          y_81 = ATgetFirst((ATermList) x_81);
          z_81 = (ATerm) ATgetNext((ATermList) x_81);
          {
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm IgnoreVar_0 (ATerm t)
{
  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL;
  l_82 = t;
  c_82 :
  if(match_cons(l_82, sym_As_2))
    {
      m_82 = ATgetArgument(l_82, 0);
      o_82 = ATgetArgument(l_82, 1);
      d_82 :
      if(match_cons(m_82, sym_Var_1))
        {
          n_82 = ATgetArgument(m_82, 0);
          e_82 :
          if(match_cons(o_82, sym_As_2))
            {
              p_82 = ATgetArgument(o_82, 0);
              k_82 = ATgetArgument(o_82, 1);
              f_82 :
              if(match_cons(p_82, sym_Off_1))
                {
                  j_82 = ATgetArgument(p_82, 0);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(j_82)), not_null(k_82));
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(m_82, sym_Off_1))
            {
              n_82 = ATgetArgument(m_82, 0);
              g_82 :
              if(match_cons(o_82, sym_Var_1))
                {
                  p_82 = ATgetArgument(o_82, 0);
                  {
                    t = not_null(n_82);
                    t = is_list_0(t);
                    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(n_82)), (ATerm) ATmakeAppl(sym_Wld_0));
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
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm e_77 (ATerm))
{
  ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL;
  b_83 = t;
  a_83 :
  if(((ATgetType(b_83) == AT_LIST) && ((ATermList) b_83 != ATempty)))
    {
      c_83 = ATgetFirst((ATermList) b_83);
      d_83 = (ATerm) ATgetNext((ATermList) b_83);
      {
        t = e_77(t);
        {
          ATerm b_3 (ATerm t)
          {
            ATerm g_83 = NULL;
            g_83 = t;
            if(((c_83 != NULL) && (c_83 != g_83)))
              _fail(g_83);
            else
              c_83 = g_83;
            return(t);
          }
          t = fetch_1(t, b_3);
        }
        t = not_null(d_83);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm l_83 = NULL,q_83 = NULL,r_83 = NULL;
  l_83 = t;
  k_83 :
  if(match_cons(l_83, sym__2))
    {
      q_83 = ATgetArgument(l_83, 0);
      r_83 = ATgetArgument(l_83, 1);
      {
        t = not_null(q_83);
        {
          ATerm x_83 (ATerm t)
          {
            ATerm p_14 = t;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(r_83);
                PopChoice();
              }
            else
              {
                t = p_14;
                {
                  ATerm q_14 = t;
                  if((PushChoice() == 0))
                    {
                      ATerm c_3 (ATerm t)
                      {
                        t = not_null(r_83);
                        return(t);
                      }
                      t = HdMember_1(t, c_3);
                      t = x_83(t);
                      PopChoice();
                    }
                  else
                    {
                      t = q_14;
                      t = Cons_2(t, _id, x_83);
                    }
                }
              }
            return(t);
          }
          t = x_83(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_76 (ATerm), ATerm b_76 (ATerm))
{
  ATerm u_14 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_76(t);
      PopChoice();
    }
  else
    {
      t = u_14;
      {
        ATerm b_84 = NULL,c_84 = NULL,d_84 = NULL;
        b_84 = t;
        a_84 :
        if(((ATgetType(b_84) == AT_LIST) && ((ATermList) b_84 != ATempty)))
          {
            c_84 = ATgetFirst((ATermList) b_84);
            d_84 = (ATerm) ATgetNext((ATermList) b_84);
            {
              ATerm g_84 = NULL;
              ATerm h_84 = NULL;
              t = not_null(d_84);
              {
                t = foldr_2(t, a_76, b_76);
                {
                  h_84 = t;
                  if(((g_84 != NULL) && (g_84 != h_84)))
                    _fail(h_84);
                  else
                    g_84 = h_84;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(c_84), not_null(g_84));
                t = b_76(t);
              }
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
  ATerm d_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = foldr_2(t, d_3, union_0);
  return(t);
}
ATerm UnZip2_0 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL;
  o_84 = t;
  l_84 :
  if(match_cons(o_84, sym__2))
    {
      p_84 = ATgetArgument(o_84, 0);
      s_84 = ATgetArgument(o_84, 1);
      m_84 :
      if(match_cons(p_84, sym__2))
        {
          q_84 = ATgetArgument(p_84, 0);
          r_84 = ATgetArgument(p_84, 1);
          n_84 :
          if(match_cons(s_84, sym__2))
            {
              t_84 = ATgetArgument(s_84, 0);
              u_84 = ATgetArgument(s_84, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_84)), not_null(q_84)), (ATerm) ATinsert(CheckATermList(not_null(u_84)), not_null(r_84)));
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
  ATerm c_85 = NULL,d_85 = NULL,e_85 = NULL;
  c_85 = t;
  b_85 :
  if(((ATgetType(c_85) == AT_LIST) && ((ATermList) c_85 != ATempty)))
    {
      d_85 = ATgetFirst((ATermList) c_85);
      e_85 = (ATerm) ATgetNext((ATermList) c_85);
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_85), not_null(e_85));
    }
  else
    _fail(t);
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm k_85 = NULL;
  k_85 = t;
  j_85 :
  if(((ATermList) k_85 == ATempty))
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
    }
  else
    _fail(t);
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, _id);
  return(t);
}
ATerm list_1 (ATerm t, ATerm e_79 (ATerm))
{
  ATerm m_85 (ATerm t)
  {
    ATerm v_14 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = v_14;
        t = Cons_2(t, e_79, m_85);
      }
    return(t);
  }
  t = m_85(t);
  return(t);
}
ATerm CollectSplit_2 (ATerm t, ATerm r_78 (ATerm), ATerm s_78 (ATerm))
{
  ATerm y_85 = NULL;
  ATerm a_86 = NULL,b_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL,t_86 = NULL;
  y_85 = t;
  {
    ATerm w_14;
    w_14 = t;
    {
      ATerm c_86 = NULL;
      ATerm e_86 = NULL,f_86 = NULL,g_86 = NULL;
      t = not_null(y_85);
      {
        c_86 = t;
        {
          t = SSL_explode_term(not_null(c_86));
          {
            e_86 = t;
            q_85 :
            if(match_cons(e_86, sym__2))
              {
                f_86 = ATgetArgument(e_86, 0);
                g_86 = ATgetArgument(e_86, 1);
                {
                  if(((a_86 != NULL) && (a_86 != f_86)))
                    _fail(f_86);
                  else
                    a_86 = f_86;
                  if(((b_86 != NULL) && (b_86 != g_86)))
                    _fail(g_86);
                  else
                    b_86 = g_86;
                }
              }
            else
              _fail(t);
          }
        }
      }
    }
    t = w_14;
    {
      ATerm z_14;
      z_14 = t;
      {
        ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL;
        t = not_null(b_86);
        {
          t = list_1(t, r_78);
          {
            t = unzip_0(t);
            {
              l_86 = t;
              v_85 :
              if(match_cons(l_86, sym__2))
                {
                  m_86 = ATgetArgument(l_86, 0);
                  n_86 = ATgetArgument(l_86, 1);
                  {
                    ATerm o_86 = NULL;
                    if(((i_86 != NULL) && (i_86 != m_86)))
                      _fail(m_86);
                    else
                      i_86 = m_86;
                    {
                      if(((h_86 != NULL) && (h_86 != n_86)))
                        _fail(n_86);
                      else
                        h_86 = n_86;
                      {
                        ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL;
                        t = SSL_mkterm(not_null(a_86), not_null(i_86));
                        {
                          o_86 = t;
                          {
                            t = s_78(t);
                            {
                              q_86 = t;
                              u_85 :
                              if(match_cons(q_86, sym__2))
                                {
                                  r_86 = ATgetArgument(q_86, 0);
                                  s_86 = ATgetArgument(q_86, 1);
                                  {
                                    if(((j_86 != NULL) && (j_86 != r_86)))
                                      _fail(r_86);
                                    else
                                      j_86 = r_86;
                                    if(((k_86 != NULL) && (k_86 != s_86)))
                                      _fail(s_86);
                                    else
                                      k_86 = s_86;
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
              else
                _fail(t);
            }
          }
        }
      }
      t = z_14;
      {
        ATerm u_86 = NULL,w_86 = NULL;
        ATerm v_86 = NULL;
        t = not_null(h_86);
        {
          t = unions_0(t);
          {
            v_86 = t;
            if(((u_86 != NULL) && (u_86 != v_86)))
              _fail(v_86);
            else
              u_86 = v_86;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_86), not_null(u_86));
          {
            t = union_0(t);
            {
              w_86 = t;
              if(((t_86 != NULL) && (t_86 != w_86)))
                _fail(w_86);
              else
                t_86 = w_86;
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_86), not_null(t_86));
      }
    }
  }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm g_87 = NULL;
  g_87 = t;
  t = SSL_is_int(not_null(g_87));
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm s_87 = NULL;
  s_87 = t;
  t = SSL_is_string(not_null(s_87));
  return(t);
}
ATerm collect_split_1 (ATerm t, ATerm n_78 (ATerm))
{
  ATerm v_87 (ATerm t)
  {
    ATerm a_15 = t;
    if((PushChoice() == 0))
      {
        ATerm b_15 = t;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            PopChoice();
          }
        else
          {
            t = b_15;
            t = is_int_0(t);
          }
        t = n_78(t);
        PopChoice();
      }
    else
      {
        t = a_15;
        t = CollectSplit_2(t, v_87, n_78);
      }
    return(t);
  }
  t = v_87(t);
  return(t);
}
ATerm collect_split_2 (ATerm t, ATerm p_78 (ATerm), ATerm q_78 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    ATerm f_3 (ATerm t)
    {
      t = try_1(t, p_78);
      return(t);
    }
    ATerm g_3 (ATerm t)
    {
      ATerm c_15 = t;
      if((PushChoice() == 0))
        {
          t = q_78(t);
          PopChoice();
        }
      else
        {
          t = c_15;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    t = split_2(t, f_3, g_3);
    return(t);
  }
  t = collect_split_1(t, e_3);
  return(t);
}
ATerm collect_substitutions_0 (ATerm t)
{
  t = collect_split_2(t, IgnoreVar_0, CollectSubst_0);
  return(t);
}
ATerm Annotate_1 (ATerm t, ATerm m_88 (ATerm))
{
  ATerm z_87 = NULL,a_88 = NULL,b_88 = NULL;
  z_87 = t;
  y_87 :
  if(match_cons(z_87, sym__2))
    {
      a_88 = ATgetArgument(z_87, 0);
      b_88 = ATgetArgument(z_87, 1);
      {
        ATerm e_88 = NULL;
        ATerm f_88 = NULL;
        t = m_88(t);
        {
          f_88 = t;
          if(((e_88 != NULL) && (e_88 != f_88)))
            _fail(f_88);
          else
            e_88 = f_88;
        }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(not_null(e_88)), not_null(a_88))), not_null(b_88));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip3_0 (ATerm t)
{
  ATerm k_88 = NULL,l_88 = NULL,o_88 = NULL;
  k_88 = t;
  j_88 :
  if(match_cons(k_88, sym__2))
    {
      l_88 = ATgetArgument(k_88, 0);
      o_88 = ATgetArgument(k_88, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_88)), not_null(l_88));
    }
  else
    _fail(t);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_88 = NULL,v_88 = NULL,w_88 = NULL;
  u_88 = t;
  t_88 :
  if(match_cons(u_88, sym__2))
    {
      v_88 = ATgetArgument(u_88, 0);
      w_88 = ATgetArgument(u_88, 1);
      {
        ATerm d_15 = t;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_88), not_null(w_88));
            PopChoice();
          }
        else
          {
            t = d_15;
            t = SSL_addr(not_null(v_88), not_null(w_88));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm e_89 = NULL,f_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL;
  e_89 = t;
  c_89 :
  if(match_cons(e_89, sym__2))
    {
      f_89 = ATgetArgument(e_89, 0);
      g_89 = ATgetArgument(e_89, 1);
      d_89 :
      if(((ATgetType(g_89) == AT_LIST) && ((ATermList) g_89 != ATempty)))
        {
          h_89 = ATgetFirst((ATermList) g_89);
          i_89 = (ATerm) ATgetNext((ATermList) g_89);
          {
            ATerm m_89 = NULL;
            ATerm n_89 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_89), (ATerm) ATmakeInt(1));
            {
              t = add_0(t);
              {
                n_89 = t;
                if(((m_89 != NULL) && (m_89 != n_89)))
                  _fail(n_89);
                else
                  m_89 = n_89;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(f_89), not_null(h_89)), (ATerm) ATmakeAppl(sym__2, not_null(m_89), not_null(i_89)));
          }
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
  ATerm t_89 = NULL,u_89 = NULL,v_89 = NULL;
  t_89 = t;
  r_89 :
  if(match_cons(t_89, sym__2))
    {
      u_89 = ATgetArgument(t_89, 0);
      v_89 = ATgetArgument(t_89, 1);
      s_89 :
      if(((ATermList) v_89 == ATempty))
        {
          t = (ATerm) ATempty;
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
  ATerm y_89 (ATerm t)
  {
    ATerm e_15 = t;
    if((PushChoice() == 0))
      {
        t = u_80(t);
        PopChoice();
      }
    else
      {
        t = e_15;
        {
          t = v_80(t);
          {
            t = _2(t, x_80, y_89);
            t = w_80(t);
          }
        }
      }
    return(t);
  }
  t = y_89(t);
  return(t);
}
ATerm NZip00_0 (ATerm t)
{
  ATerm a_90 = NULL;
  a_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeInt(0), not_null(a_90));
  return(t);
}
ATerm nzip0_1 (ATerm t, ATerm f_81 (ATerm))
{
  t = NZip00_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, f_81);
  return(t);
}
ATerm Propagate_0 (ATerm t)
{
  ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL;
  ATerm f_91 (ATerm t)
  {
    ATerm v_90 = NULL;
    ATerm w_90 = NULL;
    t = not_null(q_90);
    {
      ATerm h_3 (ATerm t)
      {
        ATerm i_3 (ATerm t)
        {
          t = not_null(p_90);
          return(t);
        }
        t = Annotate_1(t, i_3);
        return(t);
      }
      t = nzip0_1(t, h_3);
      {
        w_90 = t;
        if(((v_90 != NULL) && (v_90 != w_90)))
          _fail(w_90);
        else
          v_90 = w_90;
      }
    }
    t = not_null(v_90);
    return(t);
  }
  ATerm g_91 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(p_90)), (ATerm) ATmakeAppl(sym_Wld_0));
    return(t);
  }
  ATerm h_91 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(m_90)), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(p_90)), not_null(s_90)));
    return(t);
  }
  ATerm i_91 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(p_90)), (ATerm) ATmakeAppl(sym_Op_2, not_null(r_90), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, not_null(p_90)), not_null(s_90))));
    return(t);
  }
  n_90 = t;
  i_90 :
  if(match_cons(n_90, sym_As_2))
    {
      o_90 = ATgetArgument(n_90, 0);
      q_90 = ATgetArgument(n_90, 1);
      j_90 :
      if(match_cons(o_90, sym_Off_1))
        {
          p_90 = ATgetArgument(o_90, 0);
          k_90 :
          if(match_cons(q_90, sym_BuildDefault_1))
            {
              r_90 = ATgetArgument(q_90, 0);
              {
                ATerm f_15 = t;
                if((PushChoice() == 0))
                  {
                    t = f_91(t);
                    PopChoice();
                  }
                else
                  {
                    t = f_15;
                    t = g_91(t);
                  }
              }
            }
          else
            {
              if(match_cons(q_90, sym_As_2))
                {
                  r_90 = ATgetArgument(q_90, 0);
                  s_90 = ATgetArgument(q_90, 1);
                  l_90 :
                  if(match_cons(r_90, sym_Var_1))
                    {
                      m_90 = ATgetArgument(r_90, 0);
                      {
                        ATerm g_15 = t;
                        if((PushChoice() == 0))
                          {
                            t = f_91(t);
                            PopChoice();
                          }
                        else
                          {
                            t = g_15;
                            t = h_91(t);
                          }
                      }
                    }
                  else
                    t = f_91(t);
                }
              else
                {
                  if(match_cons(q_90, sym_Op_2))
                    {
                      r_90 = ATgetArgument(q_90, 0);
                      s_90 = ATgetArgument(q_90, 1);
                      {
                        ATerm h_15 = t;
                        if((PushChoice() == 0))
                          {
                            t = f_91(t);
                            PopChoice();
                          }
                        else
                          {
                            t = h_15;
                            t = i_91(t);
                          }
                      }
                    }
                  else
                    t = f_91(t);
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
ATerm topdown_1 (ATerm t, ATerm o_83 (ATerm))
{
  ATerm k_91 (ATerm t)
  {
    t = o_83(t);
    t = _all(t, k_91);
    return(t);
  }
  t = k_91(t);
  return(t);
}
ATerm term_to_matrix_0 (ATerm t)
{
  ATerm p_91 = NULL;
  ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL;
  p_91 = t;
  {
    t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATempty), (ATerm) ATinsert(ATempty, not_null(p_91)));
    {
      ATerm j_3 (ATerm t)
      {
        t = try_1(t, Propagate_0);
        return(t);
      }
      t = topdown_1(t, j_3);
      {
        t = collect_substitutions_0(t);
        {
          r_91 = t;
          o_91 :
          if(match_cons(r_91, sym__2))
            {
              s_91 = ATgetArgument(r_91, 0);
              t_91 = ATgetArgument(r_91, 1);
              {
                ATerm w_91 = NULL;
                ATerm x_91 = NULL;
                t = not_null(s_91);
                {
                  t = collect_offsets_0(t);
                  {
                    x_91 = t;
                    if(((w_91 != NULL) && (w_91 != x_91)))
                      _fail(x_91);
                    else
                      w_91 = x_91;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Matrix_2, not_null(w_91), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, not_null(s_91), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_91)))));
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
ATerm MatchToMatrix_0 (ATerm t)
{
  ATerm d_92 = NULL,e_92 = NULL;
  d_92 = t;
  c_92 :
  if(match_cons(d_92, sym_Match_1))
    {
      e_92 = ATgetArgument(d_92, 0);
      {
        t = not_null(e_92);
        t = term_to_matrix_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm y_70 (ATerm), ATerm z_70 (ATerm))
{
  ATerm h_92 (ATerm t)
  {
    ATerm i_15 = t;
    if((PushChoice() == 0))
      {
        t = y_70(t);
        t = h_92(t);
        PopChoice();
      }
    else
      {
        t = i_15;
        t = z_70(t);
      }
    return(t);
  }
  t = h_92(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm b_71 (ATerm))
{
  t = repeat_2(t, b_71, _id);
  return(t);
}
ATerm downup_1 (ATerm t, ATerm s_83 (ATerm))
{
  ATerm i_92 (ATerm t)
  {
    t = s_83(t);
    {
      t = _all(t, i_92);
      t = s_83(t);
    }
    return(t);
  }
  t = i_92(t);
  return(t);
}
ATerm match_to_matrix_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      ATerm j_15 = t;
      if((PushChoice() == 0))
        {
          t = MatchToMatrix_0(t);
          PopChoice();
        }
      else
        {
          t = j_15;
          {
            ATerm k_15 = t;
            if((PushChoice() == 0))
              {
                t = MatrixMerge_0(t);
                PopChoice();
              }
            else
              {
                t = k_15;
                t = Simplify_0(t);
              }
          }
        }
      return(t);
    }
    t = repeat_1(t, l_3);
    return(t);
  }
  t = downup_1(t, k_3);
  return(t);
}
ATerm match_to_dfa_0 (ATerm t)
{
  t = match_to_matrix_0(t);
  {
    t = matrix_to_dfa_0(t);
    t = strename_0(t);
  }
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm w_63 (ATerm), ATerm x_63 (ATerm), ATerm y_63 (ATerm))
{
  ATerm o_92 = NULL,p_92 = NULL,q_92 = NULL,r_92 = NULL;
  o_92 = t;
  n_92 :
  if(match_cons(o_92, sym_SDef_3))
    {
      p_92 = ATgetArgument(o_92, 0);
      q_92 = ATgetArgument(o_92, 1);
      r_92 = ATgetArgument(o_92, 2);
      {
        ATerm v_92 = NULL;
        t = not_null(p_92);
        {
          ATerm x_92 = NULL;
          t = w_63(t);
          {
            v_92 = t;
            {
              t = not_null(q_92);
              {
                ATerm z_92 = NULL;
                t = x_63(t);
                {
                  x_92 = t;
                  {
                    t = not_null(r_92);
                    {
                      t = y_63(t);
                      {
                        z_92 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(v_92), not_null(x_92), not_null(z_92));
                      }
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
  ATerm i_93 = NULL,j_93 = NULL;
  i_93 = t;
  h_93 :
  if(match_cons(i_93, sym_Strategies_1))
    {
      j_93 = ATgetArgument(i_93, 0);
      {
        ATerm l_93 = NULL;
        t = not_null(j_93);
        {
          t = r_62(t);
          {
            l_93 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(l_93));
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
  ATerm s_93 = NULL,t_93 = NULL;
  s_93 = t;
  r_93 :
  if(match_cons(s_93, sym_Specification_1))
    {
      t_93 = ATgetArgument(s_93, 0);
      {
        ATerm v_93 = NULL;
        t = not_null(t_93);
        {
          t = t_62(t);
          {
            v_93 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(v_93));
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
  ATerm m_3 (ATerm t)
  {
    ATerm n_3 (ATerm t)
    {
      ATerm o_3 (ATerm t)
      {
        ATerm p_3 (ATerm t)
        {
          ATerm u_3 (ATerm t)
          {
            t = SDef_3(t, _id, _id, n_88);
            return(t);
          }
          t = map_1(t, u_3);
          return(t);
        }
        t = Strategies_1(t, p_3);
        return(t);
      }
      t = Cons_2(t, o_3, Nil_0);
      return(t);
    }
    t = Cons_2(t, _id, n_3);
    return(t);
  }
  t = Specification_1(t, m_3);
  return(t);
}
ATerm _2 (ATerm t, ATerm q_53 (ATerm), ATerm r_53 (ATerm))
{
  ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL;
  d_94 = t;
  c_94 :
  if(match_cons(d_94, sym__2))
    {
      e_94 = ATgetArgument(d_94, 0);
      f_94 = ATgetArgument(d_94, 1);
      {
        ATerm i_94 = NULL;
        t = not_null(e_94);
        {
          ATerm k_94 = NULL;
          t = q_53(t);
          {
            i_94 = t;
            {
              t = not_null(f_94);
              {
                t = r_53(t);
                {
                  k_94 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_94), not_null(k_94));
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
  ATerm r_94 = NULL;
  ATerm l_15;
  l_15 = t;
  {
    ATerm v_3 (ATerm t)
    {
      ATerm s_94 = NULL,t_94 = NULL;
      s_94 = t;
      q_94 :
      if(match_cons(s_94, sym_Program_1))
        {
          t_94 = ATgetArgument(s_94, 0);
          if(((r_94 != NULL) && (r_94 != t_94)))
            _fail(t_94);
          else
            r_94 = t_94;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, v_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(r_94)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = l_15;
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
  ATerm a_95 = NULL,b_95 = NULL;
  ATerm w_3 (ATerm t)
  {
    ATerm x_3 (ATerm t)
    {
      ATerm m_15 = t;
      if((PushChoice() == 0))
        {
          ATerm a_4 (ATerm t)
          {
            ATerm c_95 = NULL;
            c_95 = t;
            v_94 :
            if(!(match_cons(c_95, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, a_4);
          PopChoice();
          _fail(t);
        }
      else
        t = m_15;
      return(t);
    }
    t = _2(t, x_3, _id);
    {
      ATerm j_4 (ATerm t)
      {
        ATerm k_4 (ATerm t)
        {
          ATerm d_95 = NULL,e_95 = NULL;
          d_95 = t;
          x_94 :
          if(match_cons(d_95, sym_Runtime_1))
            {
              e_95 = ATgetArgument(d_95, 0);
              if(((b_95 != NULL) && (b_95 != e_95)))
                _fail(e_95);
              else
                b_95 = e_95;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, k_4);
        return(t);
      }
      t = _2(t, j_4, _id);
      {
        ATerm l_4 (ATerm t)
        {
          ATerm r_4 (ATerm t)
          {
            ATerm f_95 = NULL,g_95 = NULL;
            f_95 = t;
            z_94 :
            if(match_cons(f_95, sym_Program_1))
              {
                g_95 = ATgetArgument(f_95, 0);
                if(((a_95 != NULL) && (a_95 != g_95)))
                  _fail(g_95);
                else
                  a_95 = g_95;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, r_4);
          return(t);
        }
        t = _2(t, l_4, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(b_95)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(a_95)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, w_3);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_95 = NULL,n_95 = NULL,o_95 = NULL;
  m_95 = t;
  l_95 :
  if(match_cons(m_95, sym__2))
    {
      n_95 = ATgetArgument(m_95, 0);
      o_95 = ATgetArgument(m_95, 1);
      t = SSL_WriteToTextFile(not_null(n_95), not_null(o_95));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL;
  v_95 = t;
  u_95 :
  if(match_cons(v_95, sym__2))
    {
      w_95 = ATgetArgument(v_95, 0);
      x_95 = ATgetArgument(v_95, 1);
      t = SSL_WriteToBinaryFile(not_null(w_95), not_null(x_95));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm f_96 = NULL;
  ATerm n_15;
  n_15 = t;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm o_15 = t;
      if((PushChoice() == 0))
        {
          ATerm t_4 (ATerm t)
          {
            ATerm g_96 = NULL,h_96 = NULL;
            g_96 = t;
            c_96 :
            if(match_cons(g_96, sym_Output_1))
              {
                h_96 = ATgetArgument(g_96, 0);
                if(((f_96 != NULL) && (f_96 != h_96)))
                  _fail(h_96);
                else
                  f_96 = h_96;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, t_4);
          PopChoice();
        }
      else
        {
          t = o_15;
          {
            ATerm i_96 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              i_96 = t;
              if(((f_96 != NULL) && (f_96 != i_96)))
                _fail(i_96);
              else
                f_96 = i_96;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_4, _id);
  }
  t = n_15;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm v_4 (ATerm t)
      {
        t = not_null(f_96);
        return(t);
      }
      t = split_2(t, v_4, _id);
      return(t);
    }
    t = _2(t, _id, u_4);
    {
      ATerm r_15 = t;
      if((PushChoice() == 0))
        {
          ATerm w_4 (ATerm t)
          {
            ATerm x_4 (ATerm t)
            {
              ATerm j_96 = NULL;
              j_96 = t;
              e_96 :
              if(!(match_cons(j_96, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, x_4);
            return(t);
          }
          t = _2(t, w_4, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = r_15;
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
  ATerm p_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL;
  ATerm s_15;
  s_15 = t;
  t = dtime_0(t);
  t = s_15;
  {
    t = m_68(t);
    {
      ATerm t_15;
      t_15 = t;
      {
        ATerm q_96 = NULL;
        t = dtime_0(t);
        {
          q_96 = t;
          if(((p_96 != NULL) && (p_96 != q_96)))
            _fail(q_96);
          else
            p_96 = q_96;
        }
      }
      t = t_15;
      {
        r_96 = t;
        o_96 :
        if(match_cons(r_96, sym__2))
          {
            s_96 = ATgetArgument(r_96, 0);
            t_96 = ATgetArgument(r_96, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_96)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(p_96))), not_null(t_96));
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
  ATerm z_96 = NULL;
  z_96 = t;
  t = SSL_ReadFromFile(not_null(z_96));
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_82 (ATerm), ATerm i_82 (ATerm))
{
  ATerm e_97 = NULL,g_97 = NULL;
  ATerm u_15;
  u_15 = t;
  {
    ATerm f_97 = NULL;
    t = h_82(t);
    {
      f_97 = t;
      if(((e_97 != NULL) && (e_97 != f_97)))
        _fail(f_97);
      else
        e_97 = f_97;
    }
  }
  t = u_15;
  {
    ATerm h_97 = NULL;
    t = i_82(t);
    {
      h_97 = t;
      if(((g_97 != NULL) && (g_97 != h_97)))
        _fail(h_97);
      else
        g_97 = h_97;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_97), not_null(g_97));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm n_97 = NULL;
  ATerm w_15;
  w_15 = t;
  {
    ATerm x_15 = t;
    if((PushChoice() == 0))
      {
        ATerm y_4 (ATerm t)
        {
          ATerm o_97 = NULL,p_97 = NULL;
          o_97 = t;
          l_97 :
          if(match_cons(o_97, sym_Input_1))
            {
              p_97 = ATgetArgument(o_97, 0);
              if(((n_97 != NULL) && (n_97 != p_97)))
                _fail(p_97);
              else
                n_97 = p_97;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, y_4);
        PopChoice();
      }
    else
      {
        t = x_15;
        {
          ATerm q_97 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            q_97 = t;
            if(((n_97 != NULL) && (n_97 != q_97)))
              _fail(q_97);
            else
              n_97 = q_97;
          }
        }
      }
  }
  t = w_15;
  {
    ATerm d_5 (ATerm t)
    {
      t = not_null(n_97);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, d_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm u_97 = NULL;
  u_97 = t;
  t_97 :
  if(!(match_cons(u_97, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm e_5 (ATerm t)
  {
    ATerm y_15 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = y_15;
        {
          ATerm z_15 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = z_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, e_5);
  t = l_68(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm w_97 = NULL;
  w_97 = t;
  t = SSL_table_create(not_null(w_97));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm b_98 = NULL;
  b_98 = t;
  {
    ATerm a_16;
    a_16 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(b_98));
          t = table_put_0(t);
        }
      }
    }
    t = a_16;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL,m_98 = NULL,n_98 = NULL;
  j_98 = t;
  h_98 :
  if(match_string(j_98, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(j_98) == AT_LIST) && ((ATermList) j_98 != ATempty)))
        {
          k_98 = ATgetFirst((ATermList) j_98);
          l_98 = (ATerm) ATgetNext((ATermList) j_98);
          i_98 :
          if(((ATgetType(l_98) == AT_LIST) && ((ATermList) l_98 != ATempty)))
            {
              m_98 = ATgetFirst((ATermList) l_98);
              n_98 = (ATerm) ATgetNext((ATermList) l_98);
              {
                ATerm s_98 = NULL;
                ATerm b_16;
                b_16 = t;
                {
                  t = not_null(k_98);
                  t = h_0(t);
                }
                t = b_16;
                {
                  ATerm t_98 = NULL;
                  t = not_null(m_98);
                  {
                    t = i_0(t);
                    {
                      t_98 = t;
                      if(((s_98 != NULL) && (s_98 != t_98)))
                        _fail(t_98);
                      else
                        s_98 = t_98;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_98)), not_null(s_98));
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
  ATerm c_16 = t;
  if((PushChoice() == 0))
    {
      ATerm g_5 (ATerm t)
      {
        ATerm i_99 = NULL;
        i_99 = t;
        x_98 :
        if(!(match_string(i_99, "-S")))
          {
            if(!(match_string(i_99, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm i_5 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm j_5 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, g_5, i_5, j_5);
      PopChoice();
    }
  else
    {
      t = c_16;
      {
        ATerm d_16 = t;
        if((PushChoice() == 0))
          {
            ATerm k_5 (ATerm t)
            {
              ATerm j_99 = NULL;
              j_99 = t;
              y_98 :
              if(!(match_string(j_99, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm l_5 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm m_5 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, k_5, l_5, m_5);
            PopChoice();
          }
        else
          {
            t = d_16;
            {
              ATerm e_16 = t;
              if((PushChoice() == 0))
                {
                  ATerm n_5 (ATerm t)
                  {
                    ATerm k_99 = NULL;
                    k_99 = t;
                    z_98 :
                    if(!(match_string(k_99, "-v")))
                      {
                        if(!(match_string(k_99, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm o_5 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm t_5 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, n_5, o_5, t_5);
                  PopChoice();
                }
              else
                {
                  t = e_16;
                  {
                    ATerm i_16 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm u_5 (ATerm t)
                        {
                          ATerm l_99 = NULL;
                          l_99 = t;
                          a_99 :
                          if(!(match_string(l_99, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm w_5 (ATerm t)
                        {
                          ATerm m_99 = NULL;
                          ATerm n_99 = NULL;
                          n_99 = t;
                          if(((m_99 != NULL) && (m_99 != n_99)))
                            _fail(n_99);
                          else
                            m_99 = n_99;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(m_99));
                          return(t);
                        }
                        ATerm y_5 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, u_5, w_5, y_5);
                        PopChoice();
                      }
                    else
                      {
                        t = i_16;
                        {
                          ATerm j_16 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm z_5 (ATerm t)
                              {
                                ATerm o_99 = NULL;
                                o_99 = t;
                                c_99 :
                                if(!(match_string(o_99, "-i")))
                                  {
                                    if(!(match_string(o_99, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm a_6 (ATerm t)
                              {
                                ATerm p_99 = NULL;
                                ATerm q_99 = NULL;
                                q_99 = t;
                                if(((p_99 != NULL) && (p_99 != q_99)))
                                  _fail(q_99);
                                else
                                  p_99 = q_99;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_99));
                                return(t);
                              }
                              ATerm b_6 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, z_5, a_6, b_6);
                              PopChoice();
                            }
                          else
                            {
                              t = j_16;
                              {
                                ATerm k_16 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm c_6 (ATerm t)
                                    {
                                      ATerm r_99 = NULL;
                                      r_99 = t;
                                      e_99 :
                                      if(!(match_string(r_99, "-o")))
                                        {
                                          if(!(match_string(r_99, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm h_6 (ATerm t)
                                    {
                                      ATerm s_99 = NULL;
                                      ATerm t_99 = NULL;
                                      t_99 = t;
                                      if(((s_99 != NULL) && (s_99 != t_99)))
                                        _fail(t_99);
                                      else
                                        s_99 = t_99;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_99));
                                      return(t);
                                    }
                                    ATerm i_6 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, c_6, h_6, i_6);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = k_16;
                                    {
                                      ATerm l_16 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_6 (ATerm t)
                                          {
                                            ATerm u_99 = NULL;
                                            u_99 = t;
                                            g_99 :
                                            if(!(match_string(u_99, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm k_6 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm l_6 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, j_6, k_6, l_6);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = l_16;
                                          {
                                            ATerm s_6 (ATerm t)
                                            {
                                              ATerm v_99 = NULL;
                                              v_99 = t;
                                              h_99 :
                                              if(!(match_string(v_99, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm t_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm u_6 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, s_6, t_6, u_6);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm a_100 = NULL;
  a_100 = t;
  t = SSL_table_destroy(not_null(a_100));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_100 = NULL;
  e_100 = t;
  t = SSL_exit(not_null(e_100));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm i_100 = NULL;
  i_100 = t;
  t = SSL_implode_string(not_null(i_100));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm l_100 (ATerm t)
  {
    ATerm m_16 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_100);
        PopChoice();
      }
    else
      {
        t = m_16;
        {
          t = Nil_0(t);
          t = q_79(t);
        }
      }
    return(t);
  }
  t = l_100(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm n_16 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = n_16;
      {
        ATerm o_100 = NULL,p_100 = NULL,q_100 = NULL;
        o_100 = t;
        n_100 :
        if(((ATgetType(o_100) == AT_LIST) && ((ATermList) o_100 != ATempty)))
          {
            p_100 = ATgetFirst((ATermList) o_100);
            q_100 = (ATerm) ATgetNext((ATermList) o_100);
            {
              t = not_null(p_100);
              {
                ATerm y_6 (ATerm t)
                {
                  t = not_null(q_100);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_6);
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
  ATerm w_100 = NULL;
  w_100 = t;
  t = SSL_explode_string(not_null(w_100));
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
  ATerm z_100 (ATerm t)
  {
    ATerm o_16 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = o_16;
        t = Cons_2(t, c_79, z_100);
      }
    return(t);
  }
  t = z_100(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL;
  g_101 = t;
  d_101 :
  if(((ATgetType(g_101) == AT_LIST) && ((ATermList) g_101 != ATempty)))
    {
      e_101 = ATgetFirst((ATermList) g_101);
      f_101 = (ATerm) ATgetNext((ATermList) g_101);
      {
        t = not_null(f_101);
        {
          ATerm z_6 (ATerm t)
          {
            ATerm j_101 = NULL;
            ATerm k_101 = NULL;
            t = g_0(t);
            {
              k_101 = t;
              if(((j_101 != NULL) && (j_101 != k_101)))
                _fail(k_101);
              else
                j_101 = k_101;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(j_101)), not_null(e_101));
            return(t);
          }
          t = reverse_1(t, z_6);
        }
      }
    }
  else
    {
      if(((ATermList) g_101 == ATempty))
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
  ATerm a_7 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, a_7);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm r_66 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm z_54 (ATerm))
{
  ATerm r_101 = NULL,s_101 = NULL;
  r_101 = t;
  q_101 :
  if(match_cons(r_101, sym_Program_1))
    {
      s_101 = ATgetArgument(r_101, 0);
      {
        ATerm u_101 = NULL;
        t = not_null(s_101);
        {
          t = z_54(t);
          {
            u_101 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_101));
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
  ATerm c_102 = NULL;
  ATerm b_7 (ATerm t)
  {
    ATerm c_7 (ATerm t)
    {
      ATerm d_102 = NULL;
      d_102 = t;
      if(((c_102 != NULL) && (c_102 != d_102)))
        _fail(d_102);
      else
        c_102 = d_102;
      return(t);
    }
    t = Program_1(t, c_7);
    return(t);
  }
  t = option_defined_1(t, b_7);
  {
    ATerm i_7 (ATerm t)
    {
      ATerm e_102 = NULL;
      ATerm f_102 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm j_7 (ATerm t)
        {
          t = not_null(c_102);
          return(t);
        }
        t = short_description_1(t, j_7);
        {
          t = concat_strings_0(t);
          {
            f_102 = t;
            if(((e_102 != NULL) && (e_102 != f_102)))
              _fail(f_102);
            else
              e_102 = f_102;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(e_102)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, i_7);
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
                ATerm o_7 (ATerm t)
                {
                  ATerm g_102 = NULL;
                  g_102 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_102)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_7);
                {
                  ATerm p_7 (ATerm t)
                  {
                    ATerm i_102 = NULL;
                    ATerm j_102 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm q_7 (ATerm t)
                      {
                        t = not_null(c_102);
                        return(t);
                      }
                      t = long_description_1(t, q_7);
                      {
                        t = concat_strings_0(t);
                        {
                          j_102 = t;
                          if(((i_102 != NULL) && (i_102 != j_102)))
                            _fail(j_102);
                          else
                            i_102 = j_102;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(i_102)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_7);
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
  ATerm q_102 = NULL,r_102 = NULL,s_102 = NULL;
  q_102 = t;
  p_102 :
  if(match_cons(q_102, sym__2))
    {
      r_102 = ATgetArgument(q_102, 0);
      s_102 = ATgetArgument(q_102, 1);
      {
        ATerm p_16;
        p_16 = t;
        t = SSL_printnl(not_null(r_102), not_null(s_102));
        t = p_16;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm a_55 (ATerm))
{
  ATerm z_102 = NULL,a_103 = NULL;
  z_102 = t;
  y_102 :
  if(match_cons(z_102, sym_Undefined_1))
    {
      a_103 = ATgetArgument(z_102, 0);
      {
        ATerm c_103 = NULL;
        t = not_null(a_103);
        {
          t = a_55(t);
          {
            c_103 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_103));
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
  ATerm g_103 (ATerm t)
  {
    ATerm q_16 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_79, _id);
        PopChoice();
      }
    else
      {
        t = q_16;
        t = Cons_2(t, _id, g_103);
      }
    return(t);
  }
  t = g_103(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm q_67 (ATerm))
{
  t = fetch_1(t, q_67);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_103 = NULL;
  i_103 = t;
  h_103 :
  if(!(match_cons(i_103, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_82 (ATerm))
{
  ATerm r_16 = t;
  if((PushChoice() == 0))
    {
      t = z_82(t);
      PopChoice();
    }
  else
    {
      t = r_16;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL;
  l_103 = t;
  k_103 :
  if(match_cons(l_103, sym__2))
    {
      m_103 = ATgetArgument(l_103, 0);
      n_103 = ATgetArgument(l_103, 1);
      t = SSL_table_get(not_null(m_103), not_null(n_103));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm u_103 = NULL,v_103 = NULL,w_103 = NULL,x_103 = NULL;
  u_103 = t;
  t_103 :
  if(match_cons(u_103, sym__3))
    {
      v_103 = ATgetArgument(u_103, 0);
      w_103 = ATgetArgument(u_103, 1);
      x_103 = ATgetArgument(u_103, 2);
      {
        ATerm x_16;
        x_16 = t;
        {
          ATerm b_104 = NULL;
          ATerm c_104 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_103), not_null(w_103));
          {
            ATerm y_16 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = y_16;
                t = (ATerm) ATempty;
              }
            {
              c_104 = t;
              if(((b_104 != NULL) && (b_104 != c_104)))
                _fail(c_104);
              else
                b_104 = c_104;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_103), not_null(w_103), (ATerm) ATinsert(CheckATermList(not_null(b_104)), not_null(x_103)));
            t = table_put_0(t);
          }
        }
        t = x_16;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm g_104 = NULL;
  ATerm h_104 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = w_66(t);
    {
      h_104 = t;
      if(((g_104 != NULL) && (g_104 != h_104)))
        _fail(h_104);
      else
        g_104 = h_104;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(g_104));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
  n_104 = t;
  m_104 :
  if(match_string(n_104, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(n_104) == AT_LIST) && ((ATermList) n_104 != ATempty)))
        {
          o_104 = ATgetFirst((ATermList) n_104);
          p_104 = (ATerm) ATgetNext((ATermList) n_104);
          {
            ATerm s_104 = NULL;
            ATerm z_16;
            z_16 = t;
            {
              t = not_null(o_104);
              t = d_0(t);
            }
            t = z_16;
            {
              ATerm t_104 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = e_0(t);
                {
                  t_104 = t;
                  if(((s_104 != NULL) && (s_104 != t_104)))
                    _fail(t_104);
                  else
                    s_104 = t_104;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_104)), not_null(s_104));
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
  ATerm r_7 (ATerm t)
  {
    ATerm y_104 = NULL;
    y_104 = t;
    x_104 :
    if(!(match_string(y_104, "--help")))
      {
        if(!(match_string(y_104, "-h")))
          {
            if(!(match_string(y_104, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, r_7, s_7, t_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_105 = NULL,c_105 = NULL,d_105 = NULL;
  b_105 = t;
  a_105 :
  if(((ATgetType(b_105) == AT_LIST) && ((ATermList) b_105 != ATempty)))
    {
      c_105 = ATgetFirst((ATermList) b_105);
      d_105 = (ATerm) ATgetNext((ATermList) b_105);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_105)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_105)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm b_65 (ATerm), ATerm c_65 (ATerm))
{
  ATerm l_105 = NULL,m_105 = NULL,n_105 = NULL;
  l_105 = t;
  k_105 :
  if(((ATgetType(l_105) == AT_LIST) && ((ATermList) l_105 != ATempty)))
    {
      m_105 = ATgetFirst((ATermList) l_105);
      n_105 = (ATerm) ATgetNext((ATermList) l_105);
      {
        ATerm q_105 = NULL;
        t = not_null(m_105);
        {
          ATerm s_105 = NULL;
          t = b_65(t);
          {
            q_105 = t;
            {
              t = not_null(n_105);
              {
                t = c_65(t);
                {
                  s_105 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_105)), not_null(q_105));
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
  ATerm y_105 = NULL;
  y_105 = t;
  x_105 :
  if(((ATermList) y_105 == ATempty))
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
  ATerm b_17;
  b_17 = t;
  {
    ATerm u_7 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = u_66(t);
      return(t);
    }
    t = try_1(t, u_7);
  }
  t = b_17;
  {
    ATerm y_7 (ATerm t)
    {
      ATerm a_106 = NULL;
      a_106 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(a_106));
      return(t);
    }
    ATerm a_8 (ATerm t)
    {
      ATerm d_17 = t;
      if((PushChoice() == 0))
        {
          ATerm e_17 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = e_17;
              {
                t = u_66(t);
                t = Cons_2(t, _id, a_8);
              }
            }
          PopChoice();
        }
      else
        {
          t = d_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, y_7, a_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm g_106 = NULL,h_106 = NULL,i_106 = NULL;
  ATerm f_17;
  f_17 = t;
  {
    ATerm j_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL;
    j_106 = t;
    f_106 :
    if(match_cons(j_106, sym__3))
      {
        k_106 = ATgetArgument(j_106, 0);
        l_106 = ATgetArgument(j_106, 1);
        m_106 = ATgetArgument(j_106, 2);
        {
          if(((g_106 != NULL) && (g_106 != k_106)))
            _fail(k_106);
          else
            g_106 = k_106;
          {
            if(((h_106 != NULL) && (h_106 != l_106)))
              _fail(l_106);
            else
              h_106 = l_106;
            {
              if(((i_106 != NULL) && (i_106 != m_106)))
                _fail(m_106);
              else
                i_106 = m_106;
              t = SSL_table_put(not_null(g_106), not_null(h_106), not_null(i_106));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = f_17;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm t_66 (ATerm))
{
  ATerm p_106 = NULL;
  ATerm g_17;
  g_17 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = g_17;
  {
    ATerm b_8 (ATerm t)
    {
      ATerm h_17 = t;
      if((PushChoice() == 0))
        {
          t = t_66(t);
          PopChoice();
        }
      else
        {
          t = h_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_8);
    {
      ATerm c_8 (ATerm t)
      {
        ATerm i_17 = t;
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
            t = i_17;
            {
              ATerm d_8 (ATerm t)
              {
                ATerm e_8 (ATerm t)
                {
                  ATerm q_106 = NULL;
                  q_106 = t;
                  if(((p_106 != NULL) && (p_106 != q_106)))
                    _fail(q_106);
                  else
                    p_106 = q_106;
                  return(t);
                }
                t = Undefined_1(t, e_8);
                return(t);
              }
              t = option_defined_1(t, d_8);
              {
                ATerm j_17;
                j_17 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(p_106)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = j_17;
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
      t = try_1(t, c_8);
      {
        ATerm k_17;
        k_17 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = k_17;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm a_68 (ATerm), ATerm b_68 (ATerm), ATerm c_68 (ATerm))
{
  ATerm i_8 (ATerm t)
  {
    ATerm l_17 = t;
    if((PushChoice() == 0))
      {
        t = b_68(t);
        PopChoice();
      }
    else
      {
        t = l_17;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, i_8);
  {
    t = store_options_0(t);
    {
      ATerm m_17 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, c_68);
          PopChoice();
        }
      else
        {
          t = m_17;
          {
            ATerm r_17 = t;
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
                t = r_17;
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
  ATerm k_8 (ATerm t)
  {
    t = _2(t, _id, s_67);
    return(t);
  }
  t = iowrap_2(t, k_8, _fail);
  return(t);
}
ATerm compile_match_comp_0 (ATerm t)
{
  ATerm l_8 (ATerm t)
  {
    t = apply_to_bodies_1(t, match_to_dfa_0);
    return(t);
  }
  t = iowrap_1(t, l_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = compile_match_comp_0(t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Some_1;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_BuildDefault_1;
Symbol sym_As_2;
Symbol sym_App_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_AM_2;
Symbol sym_Choice_2;
Symbol sym_LRule_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Prim_2;
Symbol sym_Test_1;
Symbol sym_Where_1;
Symbol sym_Not_1;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_BA_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_ConstType_1;
Symbol sym_Sort_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_Row_2;
Symbol sym_Row_3;
Symbol sym_Matrix_2;
Symbol sym_Matrix_1;
Symbol sym_Off_1;
Symbol sym_Case_4;
Symbol sym_Case_3;
Symbol sym_Case_2;
Symbol sym_Alt_3;
Symbol sym_Assign_2;
Symbol sym_Assign_1;
Symbol sym_Fun_2;
Symbol sym_Str_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
Symbol sym_Some_1;
Symbol sym_RDecT_3;
Symbol sym_DynRuleId_1;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_Strategies_1;
Symbol sym_Specification_1;
Symbol sym_BuildDefault_1;
Symbol sym_As_2;
Symbol sym_App_2;
Symbol sym_Op_2;
Symbol sym_Wld_0;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_SVar_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_GenDynRules_1;
Symbol sym_AM_2;
Symbol sym_Choice_2;
Symbol sym_LRule_1;
Symbol sym_All_1;
Symbol sym_One_1;
Symbol sym_Some_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Prim_2;
Symbol sym_Test_1;
Symbol sym_Where_1;
Symbol sym_Not_1;
Symbol sym_Rec_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_LChoice_2;
Symbol sym_Seq_2;
Symbol sym_BA_2;
Symbol sym_Scope_2;
Symbol sym_Build_1;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Let_2;
Symbol sym_Id_0;
Symbol sym_Fail_0;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_ConstType_1;
Symbol sym_Sort_2;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_DynamicRules_1;
Symbol sym_Some_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
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
Symbol sym_Scopes_0;
Symbol sym_Hashtable_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Cong_2;
static void init_module_constructors (void)
{
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
  sym_Case_4 = ATmakeSymbol("Case", 4, ATfalse);
  ATprotectSymbol(sym_Case_4);
  sym_Case_3 = ATmakeSymbol("Case", 3, ATfalse);
  ATprotectSymbol(sym_Case_3);
  sym_Case_2 = ATmakeSymbol("Case", 2, ATfalse);
  ATprotectSymbol(sym_Case_2);
  sym_Alt_3 = ATmakeSymbol("Alt", 3, ATfalse);
  ATprotectSymbol(sym_Alt_3);
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
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_BuildDefault_1 = ATmakeSymbol("BuildDefault", 1, ATfalse);
  ATprotectSymbol(sym_BuildDefault_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
  sym_BAM_3 = ATmakeSymbol("BAM", 3, ATfalse);
  ATprotectSymbol(sym_BAM_3);
  sym_Seqs_1 = ATmakeSymbol("Seqs", 1, ATfalse);
  ATprotectSymbol(sym_Seqs_1);
  sym_Choices_1 = ATmakeSymbol("Choices", 1, ATfalse);
  ATprotectSymbol(sym_Choices_1);
  sym_LChoices_1 = ATmakeSymbol("LChoices", 1, ATfalse);
  ATprotectSymbol(sym_LChoices_1);
  sym_Lets_2 = ATmakeSymbol("Lets", 2, ATfalse);
  ATprotectSymbol(sym_Lets_2);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym__0 = ATmakeSymbol("", 0, ATfalse);
  ATprotectSymbol(sym__0);
  sym__1 = ATmakeSymbol("", 1, ATfalse);
  ATprotectSymbol(sym__1);
  sym__2 = ATmakeSymbol("", 2, ATfalse);
  ATprotectSymbol(sym__2);
  sym__3 = ATmakeSymbol("", 3, ATfalse);
  ATprotectSymbol(sym__3);
  sym__4 = ATmakeSymbol("", 4, ATfalse);
  ATprotectSymbol(sym__4);
  sym__5 = ATmakeSymbol("", 5, ATfalse);
  ATprotectSymbol(sym__5);
  sym__6 = ATmakeSymbol("", 6, ATfalse);
  ATprotectSymbol(sym__6);
  sym__7 = ATmakeSymbol("", 7, ATfalse);
  ATprotectSymbol(sym__7);
  sym__8 = ATmakeSymbol("", 8, ATfalse);
  ATprotectSymbol(sym__8);
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Verbose_1 = ATmakeSymbol("Verbose", 1, ATfalse);
  ATprotectSymbol(sym_Verbose_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
}
ATerm term_l_54;
ATerm term_f_53;
ATerm term_b_53;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_r_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_e_52;
ATerm term_d_52;
ATerm term_q_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_e_51;
ATerm term_m_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_g_50;
ATerm term_f_50;
ATerm term_e_50;
ATerm term_d_50;
ATerm term_a_50;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_j_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_f_49;
ATerm term_a_49;
ATerm term_z_48;
ATerm term_u_48;
ATerm term_t_48;
ATerm term_s_48;
ATerm term_p_48;
ATerm term_o_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_f_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_q_47;
ATerm term_p_47;
ATerm term_b_47;
ATerm term_w_46;
ATerm term_t_46;
ATerm term_x_45;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_p_41;
ATerm term_o_41;
ATerm term_i_41;
ATerm term_f_41;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_u_40;
ATerm term_r_40;
ATerm term_n_32;
ATerm term_l_32;
ATerm term_b_32;
ATerm term_m_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_m_19;
ATerm term_l_19;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_s_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_c_20);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_32));
  term_b_32 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(sym_Sort_2, term_u_40, (ATerm) ATempty);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(sym_ConstType_1, term_v_40);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_y_47);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(sym__2, term_y_47, term_f_41);
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_41);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_48));
  term_p_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(sym__2, term_p_48, term_l_19);
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_49));
  term_f_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(sym__2, term_e_50, term_l_19);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(sym__2, term_i_50, term_l_19);
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(sym__2, term_l_51, term_l_19);
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym__3, term_b_20, term_c_20, (ATerm) ATempty);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_l_51);
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_e_50);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym__2, term_w_52, term_l_19);
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm y_169 (ATerm), ATerm z_169 (ATerm), ATerm t);
static ATerm u_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm spaste_1_0 (ATerm m_134 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm r_134 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm n_8 (ATerm j_35, ATerm i_35, ATerm t);
ATerm SVar_1_0 (ATerm l_112 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm t_134 (ATerm), ATerm u_134 (ATerm), ATerm v_134 (ATerm), ATerm w_134 (ATerm), ATerm x_134 (ATerm), ATerm y_134 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm tpaste_1_0 (ATerm i_134 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm h_112 (ATerm), ATerm t);
static ATerm o_8 (ATerm k_160 (ATerm), ATerm l_160 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_76, ATerm m_76, ATerm l_76, ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm p_8 (ATerm e_160 (ATerm), ATerm f_160 (ATerm (ATerm), ATerm), ATerm f_76, ATerm i_76, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm s_160 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm z_159 (ATerm (ATerm), ATerm), ATerm a_160 (ATerm), ATerm b_160 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_160 (ATerm (ATerm), ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm s_9 (ATerm x_104, ATerm w_104, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm x_136 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm simple_strategy_0_0 (ATerm t);
static ATerm u_8 (ATerm y_154 (ATerm), ATerm a_73, ATerm z_72, ATerm t);
ATerm tvars_matrix_boundin_3_0 (ATerm i_173 (ATerm), ATerm j_173 (ATerm), ATerm k_173 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm j_134 (ATerm), ATerm k_134 (ATerm), ATerm l_134 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm s_134 (ATerm), ATerm t);
static ATerm w_8 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm w_9 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm y_8 (ATerm a_155 (ATerm), ATerm c_73, ATerm b_73, ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm a_9 (ATerm r_894, ATerm w_894, ATerm s_90, ATerm t);
ATerm while_not_2_0 (ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm t);
ATerm for_3_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm p_142 (ATerm), ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm e_122 (ATerm y_120, ATerm z_120, ATerm a_121, ATerm t);
static ATerm g_10 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm p_10 (ATerm t);
ATerm free_vars_3_0 (ATerm c_162 (ATerm), ATerm d_162 (ATerm), ATerm e_162 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm a_11 (ATerm t);
ATerm RowLet_1_0 (ATerm s_0 (ATerm), ATerm t);
static ATerm b_11 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm c_9 (ATerm t_108, ATerm s_108, ATerm t);
static ATerm d_9 (ATerm v_147 (ATerm), ATerm h_52, ATerm f_52, ATerm t);
static ATerm h_11 (ATerm t);
ATerm default_state_0_0 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm l_12 (ATerm t);
ATerm MatchCons_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm f_9 (ATerm t_172 (ATerm), ATerm g_107, ATerm d_107, ATerm e_107, ATerm f_107, ATerm t);
static ATerm g_9 (ATerm z_106, ATerm a_107, ATerm b_107, ATerm t);
ATerm filter_1_0 (ATerm m_159 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm v_153 (ATerm), ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm x_12 (ATerm t);
static ATerm y_12 (ATerm t);
ATerm ConsArgs_0_0 (ATerm t);
static ATerm z_12 (ATerm t);
ATerm outedges_0_0 (ATerm t);
static ATerm h_131 (ATerm b_130, ATerm t);
ATerm get_path_0_0 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
static ATerm k_9 (ATerm m_108, ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm m_9 (ATerm c_108, ATerm t);
static ATerm u_13 (ATerm t);
static ATerm o_9 (ATerm a_108, ATerm t);
ATerm repeat_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t);
static ATerm q_9 (ATerm q_53, ATerm r_53, ATerm t);
ATerm end_scope_1_0 (ATerm s_147 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm e_139 (ATerm), ATerm f_139 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm r_147 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm t_147 (ATerm), ATerm u_147 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm c_153 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm j_136 (ATerm b_136, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm g_14 (ATerm t);
ATerm MatrixMerge_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm u_135 (ATerm), ATerm t);
static ATerm x_10 (ATerm i_155 (ATerm), ATerm j_155 (ATerm), ATerm i_73, ATerm h_73, ATerm t);
static ATerm y_10 (ATerm f_155 (ATerm), ATerm e_73, ATerm d_73, ATerm t);
ATerm foldr_3_0 (ATerm k_158 (ATerm), ATerm l_158 (ATerm), ATerm m_158 (ATerm), ATerm t);
static ATerm l_14 (ATerm t);
ATerm collect_om_2_0 (ATerm c_157 (ATerm), ATerm d_157 (ATerm), ATerm t);
ATerm CollectSubst_0_0 (ATerm t);
ATerm IgnoreVar_0_0 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
ATerm CollectSplit_2_0 (ATerm t_156 (ATerm), ATerm u_156 (ATerm), ATerm t);
ATerm collect_split_2_0 (ATerm o_156 (ATerm), ATerm p_156 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm k_140 (ATerm), ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm t);
static ATerm c_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm i_15 (ATerm t);
ATerm nzip0_1_0 (ATerm v_140 (ATerm), ATerm t);
ATerm Propagate_0_0 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
ATerm term_to_matrix_0_0 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
ATerm match_to_matrix_0_0 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
ATerm match_to_dfa_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm t_135 (ATerm), ATerm t);
ATerm map_1_0 (ATerm l_152 (ATerm), ATerm t);
static ATerm j_11 (ATerm v_43, ATerm w_43, ATerm t);
static ATerm k_11 (ATerm b_42, ATerm c_42, ATerm t);
static ATerm m_11 (ATerm i_143 (ATerm), ATerm e_309, ATerm h_42, ATerm t);
static ATerm l_11 (ATerm x_41, ATerm y_41, ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm n_166 (ATerm), ATerm t);
static ATerm t_153 (ATerm n_153, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_11 (ATerm d_42, ATerm t);
static ATerm o_11 (ATerm l_82, ATerm m_82, ATerm t);
static ATerm p_11 (ATerm x_43, ATerm y_43, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm o_155 (ATerm f_154, ATerm t);
static ATerm u_155 (ATerm j_154, ATerm k_154, ATerm l_154, ATerm t);
static ATerm v_155 (ATerm t_154, ATerm u_154, ATerm v_154, ATerm t);
static ATerm q_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_152 (ATerm), ATerm t);
static ATerm v_11 (ATerm e_55, ATerm f_55, ATerm t);
ATerm if_verbose2_1_0 (ATerm a_145 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm y_11 (ATerm r_47, ATerm s_47, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm o_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm w_11 (ATerm l_53, ATerm m_53, ATerm k_53, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_11 (ATerm t_50, ATerm u_50, ATerm t);
ATerm foldr_2_0 (ATerm i_158 (ATerm), ATerm j_158 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_144 (ATerm), ATerm t);
static ATerm x_17 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm z_11 (ATerm w_57, ATerm x_57, ATerm y_57, ATerm t);
static ATerm a_12 (ATerm z_57, ATerm a_58, ATerm t);
ATerm lookup_table_0_1 (ATerm x_54, ATerm t);
ATerm new_hashtable_0_2 (ATerm e_58, ATerm f_58, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm t_11 (ATerm b_58, ATerm c_58, ATerm t);
static ATerm u_11 (ATerm g_58, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm i_18 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_169 (ATerm), ATerm t);
static ATerm l_18 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm o_18 (ATerm t);
ATerm parse_options_3_0 (ATerm q_169 (ATerm), ATerm r_169 (ATerm), ATerm s_169 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm t_167 (ATerm), ATerm u_167 (ATerm), ATerm v_167 (ATerm), ATerm w_167 (ATerm), ATerm x_167 (ATerm), ATerm t);
static ATerm u_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm z_18 (ATerm t);
ATerm iowrap_3_0 (ATerm w_166 (ATerm), ATerm x_166 (ATerm), ATerm y_166 (ATerm), ATerm t);
static ATerm d_19 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm k_19 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm c_0 = NULL,e_0 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_0 = ATgetFirst((ATermList) t);
      e_0 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_0 = NULL,t_0 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_0)), not_null(t_0));
          return(t);
        }
        t = e_0;
        t = o_0(t);
        if(((n_0 != NULL) && (n_0 != t)))
          _fail(t);
        else
          n_0 = t;
        t = c_0;
        t = m_0(t);
        if(((t_0 != NULL) && (t_0 != t)))
          _fail(t);
        else
          t_0 = t;
        t = e_0;
        t = reverse_acc_2_0(m_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_19;
      t = o_0(t);
    }
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm f_1 = NULL,g_1 = NULL,h_1 = NULL,f_3 = NULL;
  h_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_1);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_1);
  f_3 = t;
  t = SSLsetAnnotations(f_3, f_1);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm l_1 = NULL;
  l_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_1), term_m_19);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm y_169 (ATerm), ATerm z_169 (ATerm), ATerm t)
{
  ATerm b_1 = NULL,c_1 = NULL;
  ATerm o_19 = t;
  int q_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_1 = NULL,e_1 = NULL;
      t = term_r_19;
      d_1 = t;
      t = term_s_19;
      e_1 = t;
      t = term_u_19;
      t = v_11(d_1, e_1, t);
      LocalPopChoice(q_19);
    }
  else
    {
      t = o_19;
      t = fetch_1_0(f_0, t);
    }
  {
    ATerm x_19 = t;
    int z_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_169(t);
        t = echo_0_0(t);
        LocalPopChoice(z_19);
      }
    else
      {
        t = x_19;
      }
  }
  t = term_a_20;
  t = echo_0_0(t);
  t = term_b_20;
  b_1 = t;
  t = term_c_20;
  c_1 = t;
  t = term_d_20;
  t = v_11(b_1, c_1, t);
  t = reverse_acc_2_0(_id, i_0, t);
  t = map_1_0(k_0, t);
  {
    ATerm h_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_1 = NULL;
        t = z_169(t);
        n_1 = t;
        t = (ATerm) ATinsert(CheckATermList(n_1), term_m_20);
        t = echo_0_0(t);
        LocalPopChoice(j_20);
      }
    else
      {
        t = h_20;
      }
  }
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,z_1 = NULL,h_3 = NULL;
  z_1 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_1);
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_1);
  h_3 = t;
  t = SSLsetAnnotations(h_3, w_1);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_1 = NULL;
  s_1 = t;
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL,v_1 = NULL;
        t = term_r_19;
        u_1 = t;
        t = term_s_19;
        v_1 = t;
        t = term_u_19;
        t = v_11(u_1, v_1, t);
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = fetch_1_0(u_0, t);
      }
  }
  t = s_1;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_20 = ATgetArgument(t, 0);
      if(((ATgetType(p_20) != AT_LIST) || !(ATisEmpty(p_20))))
        _fail(t);
      {
        ATerm q_20 = ATgetArgument(t, 1);
        if(((ATgetType(q_20) != AT_LIST) || !(ATisEmpty(q_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm q_1 = NULL,r_1 = NULL,t_1 = NULL,y_1 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_20 = ATgetArgument(t, 0);
      if(((ATgetType(r_20) == AT_LIST) && !(ATisEmpty(r_20))))
        {
          q_1 = ATgetFirst((ATermList) r_20);
          r_1 = (ATerm) ATgetNext((ATermList) r_20);
        }
      else
        _fail(t);
      {
        ATerm s_20 = ATgetArgument(t, 1);
        if(((ATgetType(s_20) == AT_LIST) && !(ATisEmpty(s_20))))
          {
            t_1 = ATgetFirst((ATermList) s_20);
            y_1 = (ATerm) ATgetNext((ATermList) s_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_1, t_1), (ATerm) ATmakeAppl(sym__2, r_1, y_1));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL;
  if(match_cons(t, sym__2))
    {
      a_2 = ATgetArgument(t, 0);
      b_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_2), a_2);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm d_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
  if(match_cons(t, sym__2))
    {
      d_2 = ATgetArgument(t, 0);
      i_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_2;
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm v_20 = ATgetArgument(t, 0);
            f_2 = ATgetArgument(t, 1);
            g_2 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(u_20);
        t = (ATerm) ATmakeAppl(sym_SDef_3, i_2, f_2, g_2);
      }
    else
      {
        t = t_20;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm x_20 = ATgetArgument(t, 0);
            f_2 = ATgetArgument(t, 1);
            g_2 = ATgetArgument(t, 2);
            h_2 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_2, f_2, g_2, h_2);
      }
  }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_21 = ATgetArgument(t, 0);
      if(((ATgetType(c_21) != AT_LIST) || !(ATisEmpty(c_21))))
        _fail(t);
      {
        ATerm d_21 = ATgetArgument(t, 1);
        if(((ATgetType(d_21) != AT_LIST) || !(ATisEmpty(d_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm e_3 = NULL,g_4 = NULL,n_4 = NULL,q_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_21 = ATgetArgument(t, 0);
      if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
        {
          e_3 = ATgetFirst((ATermList) e_21);
          g_4 = (ATerm) ATgetNext((ATermList) e_21);
        }
      else
        _fail(t);
      {
        ATerm f_21 = ATgetArgument(t, 1);
        if(((ATgetType(f_21) == AT_LIST) && !(ATisEmpty(f_21))))
          {
            n_4 = ATgetFirst((ATermList) f_21);
            q_4 = (ATerm) ATgetNext((ATermList) f_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_3, n_4), (ATerm) ATmakeAppl(sym__2, g_4, q_4));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm s_4 = NULL,u_4 = NULL;
  if(match_cons(t, sym__2))
    {
      s_4 = ATgetArgument(t, 0);
      u_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_4), s_4);
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm c_5 = NULL,h_5 = NULL,i_5 = NULL;
  if(match_cons(t, sym__2))
    {
      c_5 = ATgetArgument(t, 0);
      i_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5;
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm k_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_5);
      }
    else
      {
        t = i_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_21 = ATgetArgument(t, 0);
            h_5 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_5, h_5);
      }
  }
  return(t);
}
static ATerm p_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_21 = ATgetArgument(t, 0);
      if(((ATgetType(n_21) != AT_LIST) || !(ATisEmpty(n_21))))
        _fail(t);
      {
        ATerm o_21 = ATgetArgument(t, 1);
        if(((ATgetType(o_21) != AT_LIST) || !(ATisEmpty(o_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm q_6 = NULL,u_6 = NULL,a_7 = NULL,b_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_21 = ATgetArgument(t, 0);
      if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
        {
          q_6 = ATgetFirst((ATermList) r_21);
          u_6 = (ATerm) ATgetNext((ATermList) r_21);
        }
      else
        _fail(t);
      {
        ATerm s_21 = ATgetArgument(t, 1);
        if(((ATgetType(s_21) == AT_LIST) && !(ATisEmpty(s_21))))
          {
            a_7 = ATgetFirst((ATermList) s_21);
            b_7 = (ATerm) ATgetNext((ATermList) s_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_6, a_7), (ATerm) ATmakeAppl(sym__2, u_6, b_7));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm c_7 = NULL,d_7 = NULL;
  if(match_cons(t, sym__2))
    {
      c_7 = ATgetArgument(t, 0);
      d_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_7), c_7);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm g_7 = NULL,i_7 = NULL,m_7 = NULL;
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      m_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7;
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_7);
      }
    else
      {
        t = v_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_21 = ATgetArgument(t, 0);
            i_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_7, i_7);
      }
  }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_21 = ATgetArgument(t, 0);
      if(((ATgetType(z_21) != AT_LIST) || !(ATisEmpty(z_21))))
        _fail(t);
      {
        ATerm a_22 = ATgetArgument(t, 1);
        if(((ATgetType(a_22) != AT_LIST) || !(ATisEmpty(a_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm z_8 = NULL,h_9 = NULL,j_9 = NULL,l_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_22 = ATgetArgument(t, 0);
      if(((ATgetType(c_22) == AT_LIST) && !(ATisEmpty(c_22))))
        {
          z_8 = ATgetFirst((ATermList) c_22);
          h_9 = (ATerm) ATgetNext((ATermList) c_22);
        }
      else
        _fail(t);
      {
        ATerm d_22 = ATgetArgument(t, 1);
        if(((ATgetType(d_22) == AT_LIST) && !(ATisEmpty(d_22))))
          {
            j_9 = ATgetFirst((ATermList) d_22);
            l_9 = (ATerm) ATgetNext((ATermList) d_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_8, j_9), (ATerm) ATmakeAppl(sym__2, h_9, l_9));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm n_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym__2))
    {
      n_9 = ATgetArgument(t, 0);
      p_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_9), n_9);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm v_9 = NULL,y_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym__2))
    {
      v_9 = ATgetArgument(t, 0);
      z_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_9;
  {
    ATerm e_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_22);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_9);
      }
    else
      {
        t = e_22;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_22 = ATgetArgument(t, 0);
            y_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, z_9, y_9);
      }
  }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_22 = ATgetArgument(t, 0);
      if(((ATgetType(l_22) != AT_LIST) || !(ATisEmpty(l_22))))
        _fail(t);
      {
        ATerm m_22 = ATgetArgument(t, 1);
        if(((ATgetType(m_22) != AT_LIST) || !(ATisEmpty(m_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_22 = ATgetArgument(t, 0);
      if(((ATgetType(n_22) == AT_LIST) && !(ATisEmpty(n_22))))
        {
          c_12 = ATgetFirst((ATermList) n_22);
          d_12 = (ATerm) ATgetNext((ATermList) n_22);
        }
      else
        _fail(t);
      {
        ATerm o_22 = ATgetArgument(t, 1);
        if(((ATgetType(o_22) == AT_LIST) && !(ATisEmpty(o_22))))
          {
            e_12 = ATgetFirst((ATermList) o_22);
            f_12 = (ATerm) ATgetNext((ATermList) o_22);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_12, e_12), (ATerm) ATmakeAppl(sym__2, d_12, f_12));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm g_12 = NULL,h_12 = NULL;
  if(match_cons(t, sym__2))
    {
      g_12 = ATgetArgument(t, 0);
      h_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_12), g_12);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm k_12 = NULL,n_12 = NULL,q_12 = NULL;
  if(match_cons(t, sym__2))
    {
      k_12 = ATgetArgument(t, 0);
      q_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12;
  {
    ATerm p_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_22);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_12);
      }
    else
      {
        t = p_22;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_22 = ATgetArgument(t, 0);
            n_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_12, n_12);
      }
  }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_22 = ATgetArgument(t, 0);
      if(((ATgetType(x_22) != AT_LIST) || !(ATisEmpty(x_22))))
        _fail(t);
      {
        ATerm y_22 = ATgetArgument(t, 1);
        if(((ATgetType(y_22) != AT_LIST) || !(ATisEmpty(y_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,o_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_22 = ATgetArgument(t, 0);
      if(((ATgetType(z_22) == AT_LIST) && !(ATisEmpty(z_22))))
        {
          f_15 = ATgetFirst((ATermList) z_22);
          g_15 = (ATerm) ATgetNext((ATermList) z_22);
        }
      else
        _fail(t);
      {
        ATerm a_23 = ATgetArgument(t, 1);
        if(((ATgetType(a_23) == AT_LIST) && !(ATisEmpty(a_23))))
          {
            o_15 = ATgetFirst((ATermList) a_23);
            p_15 = (ATerm) ATgetNext((ATermList) a_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_15, o_15), (ATerm) ATmakeAppl(sym__2, g_15, p_15));
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_15), q_15);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm t_15 = NULL,v_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_15;
  {
    ATerm c_23 = t;
    int f_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_23);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_15);
      }
    else
      {
        t = c_23;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_23 = ATgetArgument(t, 0);
            v_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_15, v_15);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm m_134 (ATerm), ATerm t)
{
  ATerm l_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
      q_14 = t;
      if(match_cons(t, sym_Let_2))
        {
          r_14 = ATgetArgument(t, 0);
          s_14 = ATgetArgument(t, 1);
          {
            ATerm w_0 = NULL,z_0 = NULL,a_1 = NULL,j_3 = NULL;
            t = SSLgetAnnotations(q_14);
            w_0 = t;
            t = r_14;
            t = m_134(t);
            a_1 = t;
            t = (ATerm) ATmakeAppl(sym__2, r_14, a_1);
            t = genzip_4_0(v_0, x_0, y_0, i_1, t);
            z_0 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, z_0, s_14);
            j_3 = t;
            t = SSLsetAnnotations(j_3, w_0);
          }
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              r_14 = ATgetArgument(t, 0);
              s_14 = ATgetArgument(t, 1);
              t_14 = ATgetArgument(t, 2);
              {
                ATerm x_2 = NULL,b_3 = NULL,c_3 = NULL,k_3 = NULL;
                t = SSLgetAnnotations(q_14);
                x_2 = t;
                t = s_14;
                t = m_134(t);
                c_3 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_14, c_3);
                t = genzip_4_0(j_1, k_1, m_1, o_1, t);
                b_3 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, r_14, b_3, t_14);
                k_3 = t;
                t = SSLsetAnnotations(k_3, x_2);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  r_14 = ATgetArgument(t, 0);
                  s_14 = ATgetArgument(t, 1);
                  t_14 = ATgetArgument(t, 2);
                  n_14 = ATgetArgument(t, 3);
                  {
                    ATerm w_5 = NULL,d_6 = NULL,g_6 = NULL,l_3 = NULL;
                    t = SSLgetAnnotations(q_14);
                    w_5 = t;
                    t = s_14;
                    t = m_134(t);
                    g_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_14, g_6);
                    t = genzip_4_0(p_1, c_2, e_2, j_2, t);
                    d_6 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, r_14, d_6, t_14, n_14);
                    l_3 = t;
                    t = SSLsetAnnotations(l_3, w_5);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_14 = ATgetArgument(t, 0);
                      s_14 = ATgetArgument(t, 1);
                      t_14 = ATgetArgument(t, 2);
                      n_14 = ATgetArgument(t, 3);
                      {
                        ATerm h_8 = NULL,t_8 = NULL,v_8 = NULL,m_3 = NULL;
                        t = SSLgetAnnotations(q_14);
                        h_8 = t;
                        t = s_14;
                        t = m_134(t);
                        v_8 = t;
                        t = (ATerm) ATmakeAppl(sym__2, s_14, v_8);
                        t = genzip_4_0(k_2, l_2, m_2, n_2, t);
                        t_8 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, r_14, t_8, t_14, n_14);
                        m_3 = t;
                        t = SSLsetAnnotations(m_3, h_8);
                      }
                    }
                  else
                    {
                      ATerm e_11 = NULL,s_11 = NULL,x_11 = NULL,n_3 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          r_14 = ATgetArgument(t, 0);
                          s_14 = ATgetArgument(t, 1);
                          t_14 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(q_14);
                      e_11 = t;
                      t = s_14;
                      t = m_134(t);
                      x_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_14, x_11);
                      t = genzip_4_0(o_2, p_2, q_2, r_2, t);
                      s_11 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, r_14, s_11, t_14);
                      n_3 = t;
                      t = SSLsetAnnotations(n_3, e_11);
                    }
                }
            }
        }
      LocalPopChoice(o_23);
    }
  else
    {
      t = l_23;
      {
        ATerm p_23 = t;
        int q_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_2 (ATerm t);
            static ATerm s_2 (ATerm t)
            {
              ATerm w_14 = NULL,d_15 = NULL;
              d_15 = t;
              t = m_134(t);
              w_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_15, w_14);
              t = genzip_4_0(t_2, u_2, v_2, w_2, t);
              return(t);
            }
            t = dynrule_cong_6_0(_id, s_2, _id, _id, _id, _id, t);
            LocalPopChoice(q_23);
          }
        else
          {
            t = p_23;
            {
              ATerm c_17 = NULL,d_17 = NULL,g_17 = NULL,b_13 = NULL,m_13 = NULL,o_3 = NULL;
              c_17 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  d_17 = ATgetArgument(t, 0);
                  g_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_17);
              b_13 = t;
              t = d_17;
              t = m_134(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_13 = ATgetFirst((ATermList) t);
                  {
                    ATerm r_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, m_13, g_17);
              o_3 = t;
              t = SSLsetAnnotations(o_3, b_13);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm n_134 (ATerm), ATerm o_134 (ATerm), ATerm p_134 (ATerm), ATerm t)
{
  ATerm u_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL;
  y_28 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_28 = ATgetArgument(t, 0);
      a_29 = ATgetArgument(t, 1);
      {
        ATerm c_14 = NULL,f_14 = NULL,o_14 = NULL,v_3 = NULL;
        t = SSLgetAnnotations(y_28);
        c_14 = t;
        t = z_28;
        t = n_134(t);
        f_14 = t;
        t = a_29;
        t = n_134(t);
        o_14 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, f_14, o_14);
        v_3 = t;
        t = SSLsetAnnotations(v_3, c_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_28 = ATgetArgument(t, 0);
          a_29 = ATgetArgument(t, 1);
          x_28 = ATgetArgument(t, 2);
          {
            ATerm e_15 = NULL,k_15 = NULL,l_15 = NULL,m_15 = NULL,w_3 = NULL;
            t = SSLgetAnnotations(y_28);
            e_15 = t;
            t = z_28;
            t = p_134(t);
            k_15 = t;
            t = a_29;
            t = p_134(t);
            l_15 = t;
            t = x_28;
            t = n_134(t);
            m_15 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, k_15, l_15, m_15);
            w_3 = t;
            t = SSLsetAnnotations(w_3, e_15);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              z_28 = ATgetArgument(t, 0);
              a_29 = ATgetArgument(t, 1);
              x_28 = ATgetArgument(t, 2);
              u_28 = ATgetArgument(t, 3);
              {
                ATerm p_16 = NULL,u_16 = NULL,v_16 = NULL,e_17 = NULL,f_17 = NULL,x_3 = NULL;
                t = SSLgetAnnotations(y_28);
                p_16 = t;
                t = z_28;
                t = p_134(t);
                u_16 = t;
                t = a_29;
                t = p_134(t);
                v_16 = t;
                t = x_28;
                t = p_134(t);
                e_17 = t;
                t = u_28;
                t = n_134(t);
                f_17 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, u_16, v_16, e_17, f_17);
                x_3 = t;
                t = SSLsetAnnotations(x_3, p_16);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  z_28 = ATgetArgument(t, 0);
                  a_29 = ATgetArgument(t, 1);
                  x_28 = ATgetArgument(t, 2);
                  u_28 = ATgetArgument(t, 3);
                  {
                    ATerm y_17 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,y_3 = NULL;
                    t = SSLgetAnnotations(y_28);
                    y_17 = t;
                    t = z_28;
                    t = p_134(t);
                    d_18 = t;
                    t = a_29;
                    t = p_134(t);
                    e_18 = t;
                    t = x_28;
                    t = p_134(t);
                    f_18 = t;
                    t = u_28;
                    t = n_134(t);
                    g_18 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, d_18, e_18, f_18, g_18);
                    y_3 = t;
                    t = SSLsetAnnotations(y_3, y_17);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      z_28 = ATgetArgument(t, 0);
                      a_29 = ATgetArgument(t, 1);
                      x_28 = ATgetArgument(t, 2);
                      {
                        ATerm a_19 = NULL,f_19 = NULL,g_19 = NULL,i_19 = NULL,z_3 = NULL;
                        t = SSLgetAnnotations(y_28);
                        a_19 = t;
                        t = z_28;
                        t = p_134(t);
                        f_19 = t;
                        t = a_29;
                        t = p_134(t);
                        g_19 = t;
                        t = x_28;
                        t = p_134(t);
                        i_19 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, f_19, g_19, i_19);
                        z_3 = t;
                        t = SSLsetAnnotations(z_3, a_19);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          z_28 = ATgetArgument(t, 0);
                          a_29 = ATgetArgument(t, 1);
                          {
                            ATerm g_20 = NULL,k_20 = NULL,l_20 = NULL,a_4 = NULL;
                            t = SSLgetAnnotations(y_28);
                            g_20 = t;
                            t = z_28;
                            t = p_134(t);
                            k_20 = t;
                            t = a_29;
                            t = n_134(t);
                            l_20 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, k_20, l_20);
                            a_4 = t;
                            t = SSLsetAnnotations(a_4, g_20);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              z_28 = ATgetArgument(t, 0);
                              a_29 = ATgetArgument(t, 1);
                              {
                                ATerm m_21 = NULL,p_21 = NULL,q_21 = NULL,b_4 = NULL;
                                t = SSLgetAnnotations(y_28);
                                m_21 = t;
                                t = z_28;
                                t = p_134(t);
                                p_21 = t;
                                t = a_29;
                                t = n_134(t);
                                q_21 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, p_21, q_21);
                                b_4 = t;
                                t = SSLsetAnnotations(b_4, m_21);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  z_28 = ATgetArgument(t, 0);
                                  a_29 = ATgetArgument(t, 1);
                                  {
                                    ATerm b_22 = NULL,f_22 = NULL,g_22 = NULL,c_4 = NULL;
                                    t = SSLgetAnnotations(y_28);
                                    b_22 = t;
                                    t = z_28;
                                    t = p_134(t);
                                    f_22 = t;
                                    t = a_29;
                                    t = n_134(t);
                                    g_22 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, f_22, g_22);
                                    c_4 = t;
                                    t = SSLsetAnnotations(c_4, b_22);
                                  }
                                }
                              else
                                {
                                  ATerm s_22 = NULL,v_22 = NULL,w_22 = NULL,d_4 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      z_28 = ATgetArgument(t, 0);
                                      a_29 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(y_28);
                                  s_22 = t;
                                  t = z_28;
                                  t = p_134(t);
                                  v_22 = t;
                                  t = a_29;
                                  t = n_134(t);
                                  w_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, v_22, w_22);
                                  d_4 = t;
                                  t = SSLsetAnnotations(d_4, s_22);
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
ATerm dynrule_sargs_1_0 (ATerm r_134 (ATerm), ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,l_30 = NULL;
  ATerm s_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          h_30 = ATgetArgument(t, 0);
          {
            ATerm w_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_23);
      t = h_30;
      if(match_cons(t, sym_DynRuleId_1))
        {
          i_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_30;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm x_23 = ATgetArgument(t, 0);
          l_30 = ATgetArgument(t, 1);
          {
            ATerm y_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = l_30;
    }
  else
    {
      t = s_23;
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                h_30 = ATgetArgument(t, 0);
                {
                  ATerm d_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_24);
            t = h_30;
            if(match_cons(t, sym_DynRuleId_1))
              {
                i_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_30;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm f_24 = ATgetArgument(t, 0);
                l_30 = ATgetArgument(t, 1);
                {
                  ATerm g_24 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = l_30;
          }
        else
          {
            t = z_23;
            if(match_cons(t, sym_AddDynRule_2))
              {
                h_30 = ATgetArgument(t, 0);
                {
                  ATerm h_24 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = h_30;
            if(match_cons(t, sym_DynRuleId_1))
              {
                i_30 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = i_30;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm o_24 = ATgetArgument(t, 0);
                l_30 = ATgetArgument(t, 1);
                {
                  ATerm q_24 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = l_30;
          }
      }
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm r_31 = NULL;
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_31 = ATgetArgument(t, 0);
          {
            ATerm t_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_24);
      t = r_31;
    }
  else
    {
      t = r_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_31;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm h_32 = NULL;
  ATerm u_24 = t;
  int v_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_32 = ATgetArgument(t, 0);
          {
            ATerm w_24 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_24);
      t = h_32;
    }
  else
    {
      t = u_24;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_32;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm j_31 = NULL;
  ATerm x_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm a_25 = ATgetArgument(t, 0);
          j_31 = ATgetArgument(t, 1);
          {
            ATerm p_25 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_24);
      t = j_31;
      t = map_1_0(y_2, t);
    }
  else
    {
      t = x_24;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm v_25 = ATgetArgument(t, 0);
          j_31 = ATgetArgument(t, 1);
          {
            ATerm w_25 = ATgetArgument(t, 2);
          }
          {
            ATerm x_25 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = j_31;
      t = map_1_0(z_2, t);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm m_32 = NULL;
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          m_32 = ATgetArgument(t, 0);
          {
            ATerm a_26 = ATgetArgument(t, 1);
          }
          {
            ATerm b_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_25);
      t = m_32;
    }
  else
    {
      t = y_25;
      if(match_cons(t, sym_SDefT_4))
        {
          m_32 = ATgetArgument(t, 0);
          {
            ATerm d_26 = ATgetArgument(t, 1);
          }
          {
            ATerm e_26 = ATgetArgument(t, 2);
          }
          {
            ATerm o_26 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = m_32;
    }
  return(t);
}
static ATerm n_8 (ATerm j_35, ATerm i_35, ATerm t)
{
  t = j_35;
  t = map_1_0(a_3, t);
  return(t);
}
ATerm SVar_1_0 (ATerm l_112 (ATerm), ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,x_32 = NULL,r_33 = NULL,p_4 = NULL;
  r_33 = t;
  if(match_cons(t, sym_SVar_1))
    {
      v_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_33);
  u_32 = t;
  t = v_32;
  t = l_112(t);
  x_32 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, x_32);
  p_4 = t;
  t = SSLsetAnnotations(p_4, u_32);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm s_26 = t;
  int x_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,b_34 = NULL,c_34 = NULL;
      w_33 = t;
      if(match_cons(t, sym_Let_2))
        {
          x_33 = ATgetArgument(t, 0);
          y_33 = ATgetArgument(t, 1);
          t = w_33;
          t = n_8(x_33, y_33, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              x_33 = ATgetArgument(t, 0);
              y_33 = ATgetArgument(t, 1);
              b_34 = ATgetArgument(t, 2);
              t = y_33;
              t = map_1_0(g_3, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  x_33 = ATgetArgument(t, 0);
                  y_33 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, x_33);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_33 = ATgetArgument(t, 0);
                      y_33 = ATgetArgument(t, 1);
                      b_34 = ATgetArgument(t, 2);
                      c_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_33;
                  t = map_1_0(i_3, t);
                }
            }
        }
      LocalPopChoice(x_26);
    }
  else
    {
      t = s_26;
      {
        ATerm z_26 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(b_27);
          }
        else
          {
            t = z_26;
            t = dynrule_sargs_1_0(p_3, t);
          }
      }
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm s_34 = NULL;
  ATerm c_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_34 = ATgetArgument(t, 0);
          {
            ATerm f_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_27);
      t = s_34;
    }
  else
    {
      t = c_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_34;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm d_35 = NULL;
  ATerm g_27 = t;
  int h_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_35 = ATgetArgument(t, 0);
          {
            ATerm i_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_27);
      t = d_35;
    }
  else
    {
      t = g_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_35;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = map_1_0(q_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm m_35 = NULL;
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_35 = ATgetArgument(t, 0);
          {
            ATerm l_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_27);
      t = m_35;
    }
  else
    {
      t = j_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_35;
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  t = rename_4_0(SVar_1_0, d_3, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm t_134 (ATerm), ATerm u_134 (ATerm), ATerm v_134 (ATerm), ATerm w_134 (ATerm), ATerm x_134 (ATerm), ATerm y_134 (ATerm), ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      z_40 = ATgetArgument(t, 0);
      a_41 = ATgetArgument(t, 1);
      {
        ATerm m_23 = NULL,t_23 = NULL,u_23 = NULL,b_24 = NULL,c_24 = NULL,e_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,p_24 = NULL,w_4 = NULL,v_4 = NULL,t_4 = NULL;
        t = SSLgetAnnotations(y_40);
        m_23 = t;
        t = z_40;
        if(match_cons(t, sym_DynRuleId_1))
          {
            b_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_40);
        u_23 = t;
        t = b_24;
        if(match_cons(t, sym_RDecT_3))
          {
            i_24 = ATgetArgument(t, 0);
            j_24 = ATgetArgument(t, 1);
            k_24 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_24);
        e_24 = t;
        t = i_24;
        t = t_134(t);
        l_24 = t;
        t = j_24;
        t = u_134(t);
        m_24 = t;
        t = k_24;
        t = v_134(t);
        n_24 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, l_24, m_24, n_24);
        t_4 = t;
        t = SSLsetAnnotations(t_4, e_24);
        p_24 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, p_24);
        v_4 = t;
        t = SSLsetAnnotations(v_4, u_23);
        c_24 = t;
        t = a_41;
        t = w_134(t);
        t_23 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, c_24, t_23);
        w_4 = t;
        t = SSLsetAnnotations(w_4, m_23);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          z_40 = ATgetArgument(t, 0);
          a_41 = ATgetArgument(t, 1);
          {
            ATerm y_24 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,a_5 = NULL,z_4 = NULL,y_4 = NULL,x_4 = NULL;
            t = SSLgetAnnotations(y_40);
            y_24 = t;
            t = z_40;
            if(match_cons(t, sym_DynRuleId_1))
              {
                k_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_40);
            j_25 = t;
            t = k_25;
            if(match_cons(t, sym_RDecT_3))
              {
                n_25 = ATgetArgument(t, 0);
                o_25 = ATgetArgument(t, 1);
                q_25 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_25);
            m_25 = t;
            t = n_25;
            t = t_134(t);
            r_25 = t;
            t = o_25;
            t = u_134(t);
            s_25 = t;
            t = q_25;
            t = v_134(t);
            t_25 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, r_25, s_25, t_25);
            x_4 = t;
            t = SSLsetAnnotations(x_4, m_25);
            u_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, u_25);
            y_4 = t;
            t = SSLsetAnnotations(y_4, j_25);
            l_25 = t;
            t = a_41;
            if(match_cons(t, sym_Rule_3))
              {
                c_25 = ATgetArgument(t, 0);
                d_25 = ATgetArgument(t, 1);
                e_25 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_41);
            b_25 = t;
            t = c_25;
            t = w_134(t);
            f_25 = t;
            t = d_25;
            t = x_134(t);
            g_25 = t;
            t = e_25;
            t = y_134(t);
            h_25 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, f_25, g_25, h_25);
            z_4 = t;
            t = SSLsetAnnotations(z_4, b_25);
            i_25 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, l_25, i_25);
            a_5 = t;
            t = SSLsetAnnotations(a_5, y_24);
          }
        }
      else
        {
          ATerm c_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,y_26 = NULL,a_27 = NULL,d_27 = NULL,m_5 = NULL,g_5 = NULL,f_5 = NULL,e_5 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              z_40 = ATgetArgument(t, 0);
              a_41 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_40);
          c_26 = t;
          t = z_40;
          if(match_cons(t, sym_DynRuleId_1))
            {
              p_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_40);
          n_26 = t;
          t = p_26;
          if(match_cons(t, sym_RDecT_3))
            {
              t_26 = ATgetArgument(t, 0);
              u_26 = ATgetArgument(t, 1);
              v_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_26);
          r_26 = t;
          t = t_26;
          t = t_134(t);
          w_26 = t;
          t = u_26;
          t = u_134(t);
          y_26 = t;
          t = v_26;
          t = v_134(t);
          a_27 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, w_26, y_26, a_27);
          e_5 = t;
          t = SSLsetAnnotations(e_5, r_26);
          d_27 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, d_27);
          f_5 = t;
          t = SSLsetAnnotations(f_5, n_26);
          q_26 = t;
          t = a_41;
          if(match_cons(t, sym_Rule_3))
            {
              g_26 = ATgetArgument(t, 0);
              h_26 = ATgetArgument(t, 1);
              i_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_41);
          f_26 = t;
          t = g_26;
          t = w_134(t);
          j_26 = t;
          t = h_26;
          t = x_134(t);
          k_26 = t;
          t = i_26;
          t = y_134(t);
          l_26 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, j_26, k_26, l_26);
          g_5 = t;
          t = SSLsetAnnotations(g_5, f_26);
          m_26 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, q_26, m_26);
          m_5 = t;
          t = SSLsetAnnotations(m_5, c_26);
        }
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_27 = ATgetArgument(t, 0);
      if(((ATgetType(m_27) != AT_LIST) || !(ATisEmpty(m_27))))
        _fail(t);
      {
        ATerm o_27 = ATgetArgument(t, 1);
        if(((ATgetType(o_27) != AT_LIST) || !(ATisEmpty(o_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm i_29 = NULL,j_29 = NULL,l_29 = NULL,o_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_27 = ATgetArgument(t, 0);
      if(((ATgetType(p_27) == AT_LIST) && !(ATisEmpty(p_27))))
        {
          i_29 = ATgetFirst((ATermList) p_27);
          j_29 = (ATerm) ATgetNext((ATermList) p_27);
        }
      else
        _fail(t);
      {
        ATerm q_27 = ATgetArgument(t, 1);
        if(((ATgetType(q_27) == AT_LIST) && !(ATisEmpty(q_27))))
          {
            l_29 = ATgetFirst((ATermList) q_27);
            o_29 = (ATerm) ATgetNext((ATermList) q_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_29, l_29), (ATerm) ATmakeAppl(sym__2, j_29, o_29));
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL;
  if(match_cons(t, sym__2))
    {
      p_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_29), p_29);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm s_29 = NULL,u_29 = NULL,x_29 = NULL;
  if(match_cons(t, sym__2))
    {
      s_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_29;
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm u_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_27);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_29);
      }
    else
      {
        t = s_27;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm v_27 = ATgetArgument(t, 0);
            u_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_29, u_29);
      }
  }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_27 = ATgetArgument(t, 0);
      if(((ATgetType(w_27) != AT_LIST) || !(ATisEmpty(w_27))))
        _fail(t);
      {
        ATerm x_27 = ATgetArgument(t, 1);
        if(((ATgetType(x_27) != AT_LIST) || !(ATisEmpty(x_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,e_31 = NULL,f_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_27 = ATgetArgument(t, 0);
      if(((ATgetType(y_27) == AT_LIST) && !(ATisEmpty(y_27))))
        {
          b_31 = ATgetFirst((ATermList) y_27);
          c_31 = (ATerm) ATgetNext((ATermList) y_27);
        }
      else
        _fail(t);
      {
        ATerm z_27 = ATgetArgument(t, 1);
        if(((ATgetType(z_27) == AT_LIST) && !(ATisEmpty(z_27))))
          {
            e_31 = ATgetFirst((ATermList) z_27);
            f_31 = (ATerm) ATgetNext((ATermList) z_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_31, e_31), (ATerm) ATmakeAppl(sym__2, c_31, f_31));
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm g_31 = NULL,l_31 = NULL;
  if(match_cons(t, sym__2))
    {
      g_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_31), g_31);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm s_31 = NULL,v_31 = NULL,x_31 = NULL;
  if(match_cons(t, sym__2))
    {
      s_31 = ATgetArgument(t, 0);
      x_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_31;
  {
    ATerm a_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_28);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_31);
      }
    else
      {
        t = a_28;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_28 = ATgetArgument(t, 0);
            v_31 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_31, v_31);
      }
  }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_28 = ATgetArgument(t, 0);
      if(((ATgetType(f_28) != AT_LIST) || !(ATisEmpty(f_28))))
        _fail(t);
      {
        ATerm g_28 = ATgetArgument(t, 1);
        if(((ATgetType(g_28) != AT_LIST) || !(ATisEmpty(g_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_28 = ATgetArgument(t, 0);
      if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
        {
          j_33 = ATgetFirst((ATermList) h_28);
          k_33 = (ATerm) ATgetNext((ATermList) h_28);
        }
      else
        _fail(t);
      {
        ATerm i_28 = ATgetArgument(t, 1);
        if(((ATgetType(i_28) == AT_LIST) && !(ATisEmpty(i_28))))
          {
            l_33 = ATgetFirst((ATermList) i_28);
            m_33 = (ATerm) ATgetNext((ATermList) i_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_33, l_33), (ATerm) ATmakeAppl(sym__2, k_33, m_33));
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL;
  if(match_cons(t, sym__2))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_33), n_33);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm q_33 = NULL,t_33 = NULL,u_33 = NULL;
  if(match_cons(t, sym__2))
    {
      q_33 = ATgetArgument(t, 0);
      u_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_33;
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm m_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_28);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_33);
      }
    else
      {
        t = j_28;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm n_28 = ATgetArgument(t, 0);
            t_33 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_33, t_33);
      }
  }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_28 = ATgetArgument(t, 0);
      if(((ATgetType(o_28) != AT_LIST) || !(ATisEmpty(o_28))))
        _fail(t);
      {
        ATerm p_28 = ATgetArgument(t, 1);
        if(((ATgetType(p_28) != AT_LIST) || !(ATisEmpty(p_28))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_28 = ATgetArgument(t, 0);
      if(((ATgetType(q_28) == AT_LIST) && !(ATisEmpty(q_28))))
        {
          w_50 = ATgetFirst((ATermList) q_28);
          x_50 = (ATerm) ATgetNext((ATermList) q_28);
        }
      else
        _fail(t);
      {
        ATerm r_28 = ATgetArgument(t, 1);
        if(((ATgetType(r_28) == AT_LIST) && !(ATisEmpty(r_28))))
          {
            y_50 = ATgetFirst((ATermList) r_28);
            z_50 = (ATerm) ATgetNext((ATermList) r_28);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_50, y_50), (ATerm) ATmakeAppl(sym__2, x_50, z_50));
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm a_51 = NULL,b_51 = NULL;
  if(match_cons(t, sym__2))
    {
      a_51 = ATgetArgument(t, 0);
      b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_51), a_51);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm d_51 = NULL,f_51 = NULL,g_51 = NULL;
  if(match_cons(t, sym__2))
    {
      d_51 = ATgetArgument(t, 0);
      g_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_51;
  {
    ATerm s_28 = t;
    int t_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_28);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_51);
      }
    else
      {
        t = s_28;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_28 = ATgetArgument(t, 0);
            f_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_51, f_51);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm i_134 (ATerm), ATerm t)
{
  ATerm b_29 = t;
  int d_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_50 = NULL,h_50 = NULL,l_50 = NULL,o_50 = NULL,p_50 = NULL;
      c_50 = t;
      if(match_cons(t, sym_Scope_2))
        {
          h_50 = ATgetArgument(t, 0);
          l_50 = ATgetArgument(t, 1);
          {
            ATerm n_27 = NULL,r_27 = NULL,p_6 = NULL;
            t = SSLgetAnnotations(c_50);
            n_27 = t;
            t = h_50;
            t = i_134(t);
            r_27 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, r_27, l_50);
            p_6 = t;
            t = SSLsetAnnotations(p_6, n_27);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              h_50 = ATgetArgument(t, 0);
              {
                ATerm b_28 = NULL,r_6 = NULL;
                t = SSLgetAnnotations(c_50);
                b_28 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, h_50);
                r_6 = t;
                t = SSLsetAnnotations(r_6, b_28);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  h_50 = ATgetArgument(t, 0);
                  l_50 = ATgetArgument(t, 1);
                  o_50 = ATgetArgument(t, 2);
                  {
                    ATerm l_28 = NULL,c_29 = NULL,e_29 = NULL,s_6 = NULL;
                    t = SSLgetAnnotations(c_50);
                    l_28 = t;
                    t = o_50;
                    t = i_134(t);
                    e_29 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_50, e_29);
                    t = genzip_4_0(r_3, s_3, t_3, u_3, t);
                    c_29 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, h_50, l_50, c_29);
                    s_6 = t;
                    t = SSLsetAnnotations(s_6, l_28);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_50 = ATgetArgument(t, 0);
                      l_50 = ATgetArgument(t, 1);
                      o_50 = ATgetArgument(t, 2);
                      p_50 = ATgetArgument(t, 3);
                      {
                        ATerm p_30 = NULL,y_30 = NULL,z_30 = NULL,t_6 = NULL;
                        t = SSLgetAnnotations(c_50);
                        p_30 = t;
                        t = o_50;
                        t = i_134(t);
                        z_30 = t;
                        t = (ATerm) ATmakeAppl(sym__2, o_50, z_30);
                        t = genzip_4_0(e_4, f_4, h_4, i_4, t);
                        y_30 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, h_50, l_50, y_30, p_50);
                        t_6 = t;
                        t = SSLsetAnnotations(t_6, p_30);
                      }
                    }
                  else
                    {
                      ATerm b_33 = NULL,g_33 = NULL,h_33 = NULL,v_6 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          h_50 = ATgetArgument(t, 0);
                          l_50 = ATgetArgument(t, 1);
                          o_50 = ATgetArgument(t, 2);
                          p_50 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(c_50);
                      b_33 = t;
                      t = o_50;
                      t = i_134(t);
                      h_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, o_50, h_33);
                      t = genzip_4_0(j_4, k_4, l_4, m_4, t);
                      g_33 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, h_50, l_50, g_33, p_50);
                      v_6 = t;
                      t = SSLsetAnnotations(v_6, b_33);
                    }
                }
            }
        }
      LocalPopChoice(d_29);
    }
  else
    {
      t = b_29;
      {
        static ATerm o_4 (ATerm t);
        static ATerm o_4 (ATerm t)
        {
          ATerm s_50 = NULL,v_50 = NULL;
          v_50 = t;
          t = i_134(t);
          s_50 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_50, s_50);
          t = genzip_4_0(r_4, b_5, d_5, j_5, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, o_4, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm Var_1_0 (ATerm h_112 (ATerm), ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,k_52 = NULL,l_52 = NULL,j_7 = NULL;
  l_52 = t;
  if(match_cons(t, sym_Var_1))
    {
      y_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_52);
  x_51 = t;
  t = y_51;
  t = h_112(t);
  k_52 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_52);
  j_7 = t;
  t = SSLsetAnnotations(j_7, x_51);
  return(t);
}
static ATerm o_8 (ATerm k_160 (ATerm), ATerm l_160 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_76, ATerm m_76, ATerm l_76, ATerm t)
{
  static ATerm k_5 (ATerm t);
  static ATerm l_5 (ATerm t);
  static ATerm k_5 (ATerm t)
  {
    ATerm p_52 = NULL;
    p_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_52, l_76);
    t = k_160(t);
    return(t);
  }
  static ATerm l_5 (ATerm t)
  {
    ATerm q_52 = NULL;
    q_52 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_52, m_76);
    t = k_160(t);
    return(t);
  }
  t = n_76;
  t = l_160(k_5, l_5, _id, t);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      if(((ATgetType(f_29) != AT_LIST) || !(ATisEmpty(f_29))))
        _fail(t);
      {
        ATerm g_29 = ATgetArgument(t, 1);
        if(((ATgetType(g_29) != AT_LIST) || !(ATisEmpty(g_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL,i_53 = NULL,t_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_29 = ATgetArgument(t, 0);
      if(((ATgetType(h_29) == AT_LIST) && !(ATisEmpty(h_29))))
        {
          d_53 = ATgetFirst((ATermList) h_29);
          e_53 = (ATerm) ATgetNext((ATermList) h_29);
        }
      else
        _fail(t);
      {
        ATerm k_29 = ATgetArgument(t, 1);
        if(((ATgetType(k_29) == AT_LIST) && !(ATisEmpty(k_29))))
          {
            i_53 = ATgetFirst((ATermList) k_29);
            t_53 = (ATerm) ATgetNext((ATermList) k_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_53, i_53), (ATerm) ATmakeAppl(sym__2, e_53, t_53));
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm u_53 = NULL,v_53 = NULL;
  if(match_cons(t, sym__2))
    {
      u_53 = ATgetArgument(t, 0);
      v_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_53), u_53);
  return(t);
}
static ATerm p_8 (ATerm e_160 (ATerm), ATerm f_160 (ATerm (ATerm), ATerm), ATerm f_76, ATerm i_76, ATerm t)
{
  ATerm v_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,c_53 = NULL;
  t = f_76;
  t = e_160(t);
  v_52 = t;
  t = map_1_0(new_0_0, t);
  y_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_52, y_52);
  t = genzip_4_0(n_5, o_5, p_5, _id, t);
  c_53 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_53, i_76);
  t = conc_0_0(t);
  z_52 = t;
  t = f_76;
  {
    static ATerm q_5 (ATerm t);
    static ATerm q_5 (ATerm t)
    {
      t = y_52;
      return(t);
    }
    t = f_160(q_5, t);
  }
  a_53 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_53, i_76, z_52);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm a_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,i_54 = NULL,j_54 = NULL;
  e_54 = t;
  if(match_cons(t, sym__2))
    {
      f_54 = ATgetArgument(t, 0);
      g_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_54 = ATgetFirst((ATermList) t);
      j_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_54;
  if(match_cons(t, sym__2))
    {
      a_54 = ATgetArgument(t, 0);
      d_54 = ATgetArgument(t, 1);
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_54;
            if((f_54 != t))
              {
                _fail(t);
              }
            t = d_54;
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            t = (ATerm) ATmakeAppl(sym__2, f_54, j_54);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, f_54, j_54);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm s_160 (ATerm), ATerm t)
{
  static ATerm j_57 (ATerm t);
  static ATerm j_57 (ATerm t)
  {
    ATerm r_29 = t;
    int t_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_160(t);
        LocalPopChoice(t_29);
      }
    else
      {
        t = r_29;
        {
          ATerm u_56 = NULL,y_56 = NULL,a_57 = NULL;
          static ATerm r_5 (ATerm t);
          static ATerm r_5 (ATerm t)
          {
            ATerm p_35 = NULL;
            p_35 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_35, not_null(a_57));
            t = j_57(t);
            return(t);
          }
          u_56 = t;
          if(match_cons(t, sym__2))
            {
              y_56 = ATgetArgument(t, 0);
              if(((a_57 != NULL) && (a_57 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                a_57 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_56;
          t = SRTS_all(r_5, t);
        }
      }
    return(t);
  }
  t = j_57(t);
  return(t);
}
ATerm rename_4_0 (ATerm z_159 (ATerm (ATerm), ATerm), ATerm a_160 (ATerm), ATerm b_160 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_160 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm u_57 = NULL;
  static ATerm c_59 (ATerm t);
  static ATerm c_59 (ATerm t)
  {
    static ATerm s_5 (ATerm t);
    static ATerm s_5 (ATerm t)
    {
      ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL;
      r_58 = t;
      if(match_cons(t, sym__2))
        {
          s_58 = ATgetArgument(t, 0);
          t_58 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm v_29 = t;
        int w_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_5 (ATerm t);
            static ATerm t_5 (ATerm t)
            {
              ATerm z_58 = NULL;
              z_58 = t;
              t = (ATerm) ATmakeAppl(sym__2, z_58, t_58);
              t = lookup_0_0(t);
              return(t);
            }
            t = s_58;
            t = z_159(t_5, t);
            LocalPopChoice(w_29);
          }
        else
          {
            t = v_29;
            {
              ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
              t = r_58;
              t = p_8(a_160, c_160, s_58, t_58, t);
              if(match_cons(t, sym__3))
                {
                  w_35 = ATgetArgument(t, 0);
                  x_35 = ATgetArgument(t, 1);
                  y_35 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = o_8(c_59, b_160, w_35, x_35, y_35, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(s_5, t);
    return(t);
  }
  u_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_57, (ATerm) ATempty);
  t = c_59(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm y_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_29);
    }
  else
    {
      t = y_29;
      {
        ATerm a_30 = t;
        int b_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                l_59 = ATgetArgument(t, 0);
                q_59 = ATgetArgument(t, 1);
                r_59 = ATgetArgument(t, 2);
                s_59 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = r_59;
            t = map_1_0(v_5, t);
            LocalPopChoice(b_30);
          }
        else
          {
            t = a_30;
            {
              ATerm c_30 = t;
              int d_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Bind8_0_0(t);
                  LocalPopChoice(d_30);
                }
              else
                {
                  t = c_30;
                  t = dynrule_targs_1_0(x_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm c_60 = NULL;
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_60 = ATgetArgument(t, 0);
          {
            ATerm g_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_30);
      t = c_60;
    }
  else
    {
      t = e_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_60;
    }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = map_1_0(y_5, t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm l_60 = NULL;
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_60 = ATgetArgument(t, 0);
          {
            ATerm m_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_30);
      t = l_60;
    }
  else
    {
      t = j_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_60;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, u_5, tboundin_3_0, tpaste_1_0, t);
  t = srename_0_0(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm n_30 = t;
  int o_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm q_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(o_30);
      {
        ATerm p_60 = NULL,q_60 = NULL;
        p_60 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm r_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        q_60 = t;
        t = SSLgetAnnotations(p_60);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_30 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) s_30) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_30 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(t_30) != AT_LIST) || !(ATisEmpty(t_30))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_60;
      }
    }
  else
    {
      t = n_30;
      {
        ATerm u_30 = t;
        int v_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm w_30 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) w_30) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm x_30 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(v_30);
            _fail(t);
          }
        else
          {
            t = u_30;
          }
      }
    }
  return(t);
}
static ATerm s_9 (ATerm x_104, ATerm w_104, ATerm t)
{
  t = x_104;
  t = topdown_1_0(z_5, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, x_104);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm g_61 = NULL,i_61 = NULL,r_61 = NULL,s_61 = NULL,u_61 = NULL,v_61 = NULL,y_61 = NULL,j_62 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      r_61 = ATgetArgument(t, 0);
      v_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_61;
  if(match_cons(t, sym_Match_1))
    {
      s_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_61;
  if(match_cons(t, sym_Var_1))
    {
      u_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_61;
  if(match_cons(t, sym_Seq_2))
    {
      y_61 = ATgetArgument(t, 0);
      i_61 = ATgetArgument(t, 1);
      t = y_61;
      if(match_cons(t, sym_Build_1))
        {
          j_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_62;
      if(match_cons(t, sym_Var_1))
        {
          g_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_61;
      if((u_61 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_61)), i_61);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          y_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_61;
      if(match_cons(t, sym_Var_1))
        {
          j_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_62;
      if((u_61 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_61));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm d_64 = NULL,e_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      g_64 = ATgetArgument(t, 0);
      i_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_64;
  if(match_cons(t, sym_Build_1))
    {
      h_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_64;
  if(match_cons(t, sym_Seq_2))
    {
      j_64 = ATgetArgument(t, 0);
      e_64 = ATgetArgument(t, 1);
      t = j_64;
      if(match_cons(t, sym_Match_1))
        {
          d_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_64;
      if((h_64 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_64), e_64);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          j_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_64;
      if((h_64 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, h_64);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_65 = ATgetArgument(t, 0);
      d_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_65;
  if(match_cons(t, sym_Match_1))
    {
      c_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_65;
  if(match_cons(t, sym_Seq_2))
    {
      e_65 = ATgetArgument(t, 0);
      y_64 = ATgetArgument(t, 1);
      t = e_65;
      if(match_cons(t, sym_Match_1))
        {
          x_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_64;
      if((c_65 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_65), y_64);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          e_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_65;
      if((c_65 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, c_65);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL,b_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_66 = ATgetArgument(t, 0);
      d_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_66;
  if(match_cons(t, sym_Build_1))
    {
      ATerm a_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_66;
  if(match_cons(t, sym_Seq_2))
    {
      e_66 = ATgetArgument(t, 0);
      f_66 = ATgetArgument(t, 1);
      t = e_66;
      if(match_cons(t, sym_PrimT_3))
        {
          s_65 = ATgetArgument(t, 0);
          t_65 = ATgetArgument(t, 1);
          u_65 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, s_65, t_65, u_65), f_66);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          e_66 = ATgetArgument(t, 0);
          f_66 = ATgetArgument(t, 1);
          g_66 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, e_66, f_66, g_66);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm z_66 = NULL,a_67 = NULL,c_67 = NULL,g_67 = NULL,h_67 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_67 = ATgetArgument(t, 0);
      g_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_67;
  if(match_cons(t, sym_Build_1))
    {
      ATerm d_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_67;
  if(match_cons(t, sym_Seq_2))
    {
      h_67 = ATgetArgument(t, 0);
      a_67 = ATgetArgument(t, 1);
      t = h_67;
      if(match_cons(t, sym_Build_1))
        {
          z_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_66), a_67);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          h_67 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, h_67);
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_31 = ATgetArgument(t, 0);
      if(((ATgetType(h_31) != AT_LIST) || !(ATisEmpty(h_31))))
        _fail(t);
      {
        ATerm i_31 = ATgetArgument(t, 1);
        if(((ATgetType(i_31) != AT_LIST) || !(ATisEmpty(i_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm x_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      if(((ATgetType(k_31) == AT_LIST) && !(ATisEmpty(k_31))))
        {
          x_68 = ATgetFirst((ATermList) k_31);
          z_68 = (ATerm) ATgetNext((ATermList) k_31);
        }
      else
        _fail(t);
      {
        ATerm m_31 = ATgetArgument(t, 1);
        if(((ATgetType(m_31) == AT_LIST) && !(ATisEmpty(m_31))))
          {
            a_69 = ATgetFirst((ATermList) m_31);
            b_69 = (ATerm) ATgetNext((ATermList) m_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_68, a_69), (ATerm) ATmakeAppl(sym__2, z_68, b_69));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm c_69 = NULL,e_69 = NULL;
  if(match_cons(t, sym__2))
    {
      c_69 = ATgetArgument(t, 0);
      e_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_69), c_69);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL;
  if(match_cons(t, sym__2))
    {
      h_69 = ATgetArgument(t, 0);
      i_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_69), (ATerm) ATmakeAppl(sym_Match_1, i_69));
  return(t);
}
static ATerm f_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_31 = ATgetArgument(t, 0);
      if(((ATgetType(n_31) != AT_LIST) || !(ATisEmpty(n_31))))
        _fail(t);
      {
        ATerm o_31 = ATgetArgument(t, 1);
        if(((ATgetType(o_31) != AT_LIST) || !(ATisEmpty(o_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,u_69 = NULL,v_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_31 = ATgetArgument(t, 0);
      if(((ATgetType(p_31) == AT_LIST) && !(ATisEmpty(p_31))))
        {
          o_69 = ATgetFirst((ATermList) p_31);
          p_69 = (ATerm) ATgetNext((ATermList) p_31);
        }
      else
        _fail(t);
      {
        ATerm q_31 = ATgetArgument(t, 1);
        if(((ATgetType(q_31) == AT_LIST) && !(ATisEmpty(q_31))))
          {
            u_69 = ATgetFirst((ATermList) q_31);
            v_69 = (ATerm) ATgetNext((ATermList) q_31);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_69, u_69), (ATerm) ATmakeAppl(sym__2, p_69, v_69));
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm a_70 = NULL,c_70 = NULL;
  if(match_cons(t, sym__2))
    {
      a_70 = ATgetArgument(t, 0);
      c_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_70), a_70);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL;
  if(match_cons(t, sym__2))
    {
      d_70 = ATgetArgument(t, 0);
      e_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_70), (ATerm) ATmakeAppl(sym_Match_1, e_70));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      g_68 = ATgetArgument(t, 0);
      k_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_68;
  if(match_cons(t, sym_Build_1))
    {
      h_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_68;
  if(match_cons(t, sym_Op_2))
    {
      i_68 = ATgetArgument(t, 0);
      j_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_68;
  if(match_cons(t, sym_Seq_2))
    {
      l_68 = ATgetArgument(t, 0);
      e_68 = ATgetArgument(t, 1);
      {
        ATerm u_68 = NULL;
        t = l_68;
        if(match_cons(t, sym_Match_1))
          {
            m_68 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_68;
        if(match_cons(t, sym_Op_2))
          {
            c_68 = ATgetArgument(t, 0);
            d_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_68;
        if((i_68 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, j_68, d_68);
        t = genzip_4_0(a_6, b_6, c_6, e_6, t);
        u_68 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_68), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_68, j_68)), e_68));
      }
    }
  else
    {
      ATerm n_69 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          l_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_68;
      if(match_cons(t, sym_Op_2))
        {
          m_68 = ATgetArgument(t, 0);
          n_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_68;
      if((i_68 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, j_68, n_68);
      t = genzip_4_0(f_6, h_6, i_6, j_6, t);
      n_69 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_69), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, i_68, j_68)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm k_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL,u_72 = NULL,w_72 = NULL,x_72 = NULL,q_73 = NULL;
  p_72 = t;
  if(match_cons(t, sym_Seq_2))
    {
      q_72 = ATgetArgument(t, 0);
      w_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_72;
  if(match_cons(t, sym_Build_1))
    {
      r_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_72;
  if(match_cons(t, sym_Op_2))
    {
      u_72 = ATgetArgument(t, 0);
      {
        ATerm t_31 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = w_72;
  {
    ATerm u_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            x_72 = ATgetArgument(t, 0);
            {
              ATerm y_31 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_31);
        t = x_72;
        if(match_cons(t, sym_Match_1))
          {
            q_73 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_73;
        if(match_cons(t, sym_Op_2))
          {
            k_72 = ATgetArgument(t, 0);
            {
              ATerm z_31 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_72, k_72);
        {
          ATerm a_32 = t;
          if((PushChoice() == 0))
            {
              ATerm w_36 = NULL;
              if(match_cons(t, sym__2))
                {
                  w_36 = ATgetArgument(t, 0);
                  if((w_36 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_32;
            }
        }
        t = term_b_32;
      }
    else
      {
        t = u_31;
        if(match_cons(t, sym_Match_1))
          {
            x_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_72;
        if(match_cons(t, sym_Op_2))
          {
            q_73 = ATgetArgument(t, 0);
            {
              ATerm c_32 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_72, q_73);
        {
          ATerm d_32 = t;
          if((PushChoice() == 0))
            {
              ATerm n_37 = NULL;
              if(match_cons(t, sym__2))
                {
                  n_37 = ATgetArgument(t, 0);
                  if((n_37 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_32;
            }
        }
        t = term_b_32;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm x_136 (ATerm), ATerm t)
{
  static ATerm u_73 (ATerm t);
  static ATerm u_73 (ATerm t)
  {
    ATerm e_32 = t;
    int f_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_136(t);
        LocalPopChoice(f_32);
      }
    else
      {
        t = e_32;
        t = SRTS_one(u_73, t);
      }
    return(t);
  }
  t = u_73(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,z_75 = NULL,b_76 = NULL,c_76 = NULL,k_76 = NULL,q_76 = NULL;
  k_75 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_75 = ATgetArgument(t, 0);
      z_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_75;
  if(match_cons(t, sym_Let_2))
    {
      b_76 = ATgetArgument(t, 0);
      k_76 = ATgetArgument(t, 1);
      {
        ATerm v_76 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, l_75, b_76);
        t = conc_0_0(t);
        v_76 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, v_76, k_76);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          b_76 = ATgetArgument(t, 0);
          k_76 = ATgetArgument(t, 1);
          q_76 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_75;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_75 = ATgetFirst((ATermList) t);
          u_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_75;
      if(match_cons(t, sym_SDefT_4))
        {
          n_75 = ATgetArgument(t, 0);
          o_75 = ATgetArgument(t, 1);
          s_75 = ATgetArgument(t, 2);
          t_75 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = o_75;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_75;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_75;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_76;
      if(match_cons(t, sym_SVar_1))
        {
          c_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_76;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_76;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_76;
      if((n_75 != t))
        {
          _fail(t);
        }
      t = t_75;
      {
        ATerm g_32 = t;
        if((PushChoice() == 0))
          {
            static ATerm k_6 (ATerm t);
            static ATerm k_6 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm i_32 = ATgetArgument(t, 0);
                  if(match_cons(i_32, sym_SVar_1))
                    {
                      if((n_75 != ATgetArgument(i_32, 0)))
                        {
                          _fail(ATgetArgument(i_32, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm j_32 = ATgetArgument(t, 1);
                    if(((ATgetType(j_32) != AT_LIST) || !(ATisEmpty(j_32))))
                      _fail(t);
                  }
                  {
                    ATerm k_32 = ATgetArgument(t, 2);
                    if(((ATgetType(k_32) != AT_LIST) || !(ATisEmpty(k_32))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(k_6, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = g_32;
          }
      }
      t = t_75;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,n_77 = NULL,o_77 = NULL,q_77 = NULL,r_77 = NULL,v_77 = NULL,y_77 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      v_77 = ATgetArgument(t, 0);
      t = v_77;
      if(match_cons(t, sym_Seq_2))
        {
          r_77 = ATgetArgument(t, 0);
          l_77 = ATgetArgument(t, 1);
          t = r_77;
          if(match_cons(t, sym_Where_1))
            {
              k_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_77;
          if(match_cons(t, sym_Seq_2))
            {
              n_77 = ATgetArgument(t, 0);
              q_77 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_77;
          if(match_cons(t, sym_Build_1))
            {
              o_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, k_77, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_77), q_77)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              r_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, r_77);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          v_77 = ATgetArgument(t, 0);
          t = v_77;
          if(match_cons(t, sym_Test_1))
            {
              r_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, r_77);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              v_77 = ATgetArgument(t, 0);
              t = v_77;
              if(match_cons(t, sym_Not_1))
                {
                  r_77 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, r_77);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  v_77 = ATgetArgument(t, 0);
                  y_77 = ATgetArgument(t, 1);
                  t = y_77;
                  if((v_77 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      v_77 = ATgetArgument(t, 0);
                      y_77 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_77;
                  if((v_77 != t))
                    {
                      _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm r_78 = NULL,t_78 = NULL,u_78 = NULL,w_78 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      r_78 = ATgetArgument(t, 0);
      w_78 = ATgetArgument(t, 1);
      t = r_78;
      if(match_cons(t, sym_LChoice_2))
        {
          t_78 = ATgetArgument(t, 0);
          u_78 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, t_78, (ATerm) ATmakeAppl(sym_LChoice_2, u_78, w_78));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          r_78 = ATgetArgument(t, 0);
          w_78 = ATgetArgument(t, 1);
          t = r_78;
          if(match_cons(t, sym_Seq_2))
            {
              t_78 = ATgetArgument(t, 0);
              u_78 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, t_78, (ATerm) ATmakeAppl(sym_Seq_2, u_78, w_78));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              r_78 = ATgetArgument(t, 0);
              w_78 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_78;
          if(match_cons(t, sym_Choice_2))
            {
              t_78 = ATgetArgument(t, 0);
              u_78 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, t_78, (ATerm) ATmakeAppl(sym_Choice_2, u_78, w_78));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm q_79 = NULL,s_79 = NULL,t_79 = NULL,x_79 = NULL,a_80 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      x_79 = ATgetArgument(t, 0);
      a_80 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, x_79, a_80);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          x_79 = ATgetArgument(t, 0);
          t = x_79;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_79 = ATgetFirst((ATermList) t);
              s_79 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, q_79, (ATerm) ATmakeAppl(sym_LChoices_1, s_79));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_b_32;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              x_79 = ATgetArgument(t, 0);
              t = x_79;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_79 = ATgetFirst((ATermList) t);
                  s_79 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, q_79, (ATerm) ATmakeAppl(sym_Choices_1, s_79));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_b_32;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  x_79 = ATgetArgument(t, 0);
                  t = x_79;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_79 = ATgetFirst((ATermList) t);
                      s_79 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_79, (ATerm) ATmakeAppl(sym_Seqs_1, s_79));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_l_32;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      x_79 = ATgetArgument(t, 0);
                      a_80 = ATgetArgument(t, 1);
                      t_79 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, a_80, (ATerm) ATmakeAppl(sym_Op_2, term_n_32, (ATerm) ATinsert(ATinsert(ATempty, t_79), x_79)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          x_79 = ATgetArgument(t, 0);
                          a_80 = ATgetArgument(t, 1);
                          t_79 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, t_79)), x_79), (ATerm) ATmakeAppl(sym_Build_1, a_80)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              x_79 = ATgetArgument(t, 0);
                              a_80 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_79, (ATerm) ATmakeAppl(sym_Match_1, a_80));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  x_79 = ATgetArgument(t, 0);
                                  a_80 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_79), a_80);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      x_79 = ATgetArgument(t, 0);
                                      a_80 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_80), x_79);
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
static ATerm l_6 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm o_83 = NULL,p_83 = NULL,q_83 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      o_83 = ATgetArgument(t, 0);
      t = o_83;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_b_32;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          o_83 = ATgetArgument(t, 0);
          t = o_83;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_l_32;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              o_83 = ATgetArgument(t, 0);
              p_83 = ATgetArgument(t, 1);
              t = o_83;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_b_32;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  o_83 = ATgetArgument(t, 0);
                  p_83 = ATgetArgument(t, 1);
                  t = p_83;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_b_32;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      o_83 = ATgetArgument(t, 0);
                      p_83 = ATgetArgument(t, 1);
                      t = p_83;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_b_32;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          o_83 = ATgetArgument(t, 0);
                          t = o_83;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_b_32;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              o_83 = ATgetArgument(t, 0);
                              t = o_83;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_b_32;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  o_83 = ATgetArgument(t, 0);
                                  p_83 = ATgetArgument(t, 1);
                                  t = p_83;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_b_32;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      o_83 = ATgetArgument(t, 0);
                                      p_83 = ATgetArgument(t, 1);
                                      t = p_83;
                                      t = fetch_1_0(l_6, t);
                                      t = term_b_32;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          o_83 = ATgetArgument(t, 0);
                                          p_83 = ATgetArgument(t, 1);
                                          t = p_83;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = o_83;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = p_83;
                                                }
                                              else
                                                {
                                                  t = o_83;
                                                }
                                            }
                                          else
                                            {
                                              t = o_83;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = p_83;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              o_83 = ATgetArgument(t, 0);
                                              p_83 = ATgetArgument(t, 1);
                                              t = p_83;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = o_83;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = p_83;
                                                    }
                                                  else
                                                    {
                                                      t = o_83;
                                                    }
                                                }
                                              else
                                                {
                                                  t = o_83;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = p_83;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  o_83 = ATgetArgument(t, 0);
                                                  t = o_83;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_b_32;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      o_83 = ATgetArgument(t, 0);
                                                      p_83 = ATgetArgument(t, 1);
                                                      q_83 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = q_83;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_83, p_83);
                                                }
                                            }
                                        }
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
ATerm ElimId_0_0 (ATerm t)
{
  ATerm o_85 = NULL,t_85 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      t_85 = ATgetArgument(t, 0);
      t = t_85;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_l_32;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          t_85 = ATgetArgument(t, 0);
          t = t_85;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_b_32;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              t_85 = ATgetArgument(t, 0);
              o_85 = ATgetArgument(t, 1);
              t = o_85;
              if(match_cons(t, sym_Id_0))
                {
                  t = t_85;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = o_85;
                    }
                  else
                    {
                      t = t_85;
                    }
                }
              else
                {
                  t = t_85;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = o_85;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  t_85 = ATgetArgument(t, 0);
                  o_85 = ATgetArgument(t, 1);
                  t = t_85;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_l_32;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      t_85 = ATgetArgument(t, 0);
                      o_85 = ATgetArgument(t, 1);
                      t = o_85;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_l_32;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          t_85 = ATgetArgument(t, 0);
                          o_85 = ATgetArgument(t, 1);
                          t = o_85;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_l_32;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              t_85 = ATgetArgument(t, 0);
                              t = t_85;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_l_32;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  t_85 = ATgetArgument(t, 0);
                                  t = t_85;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_l_32;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      t_85 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = t_85;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_l_32;
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(p_32);
    }
  else
    {
      t = o_32;
      {
        ATerm q_32 = t;
        int r_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(r_32);
          }
        else
          {
            t = q_32;
            {
              ATerm s_32 = t;
              int t_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(t_32);
                }
              else
                {
                  t = s_32;
                  {
                    ATerm w_32 = t;
                    int y_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(y_32);
                      }
                    else
                      {
                        t = w_32;
                        {
                          ATerm z_32 = t;
                          int a_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(a_33);
                            }
                          else
                            {
                              t = z_32;
                              {
                                ATerm c_33 = t;
                                int d_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm x_86 = NULL,e_87 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        x_86 = ATgetArgument(t, 0);
                                        e_87 = ATgetArgument(t, 1);
                                        t = x_86;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = e_87;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            x_86 = ATgetArgument(t, 0);
                                            e_87 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = x_86;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = e_87;
                                      }
                                    LocalPopChoice(d_33);
                                  }
                                else
                                  {
                                    t = c_33;
                                    {
                                      ATerm e_33 = t;
                                      int f_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(f_33);
                                        }
                                      else
                                        {
                                          t = e_33;
                                          {
                                            ATerm i_33 = t;
                                            int p_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(p_33);
                                              }
                                            else
                                              {
                                                t = i_33;
                                                {
                                                  ATerm s_33 = t;
                                                  int v_33 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(v_33);
                                                    }
                                                  else
                                                    {
                                                      t = s_33;
                                                      {
                                                        ATerm z_33 = t;
                                                        int a_34 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(a_34);
                                                          }
                                                        else
                                                          {
                                                            t = z_33;
                                                            {
                                                              ATerm d_34 = t;
                                                              int e_34 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(e_34);
                                                                }
                                                              else
                                                                {
                                                                  t = d_34;
                                                                  {
                                                                    ATerm f_34 = t;
                                                                    int g_34 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(g_34);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = f_34;
                                                                        {
                                                                          ATerm h_34 = t;
                                                                          int i_34 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(i_34);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = h_34;
                                                                              {
                                                                                ATerm j_34 = t;
                                                                                int k_34 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(k_34);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_34;
                                                                                    {
                                                                                      ATerm j_87 = NULL,k_87 = NULL,l_87 = NULL,q_87 = NULL;
                                                                                      k_87 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          l_87 = ATgetArgument(t, 0);
                                                                                          q_87 = ATgetArgument(t, 1);
                                                                                          t = l_87;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              j_87 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = k_87;
                                                                                          t = s_9(j_87, q_87, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              l_87 = ATgetArgument(t, 0);
                                                                                              q_87 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = l_87;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = q_87;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm simple_strategy_0_0 (ATerm t)
{
  ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL;
  u_97 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = u_97;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = u_97;
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              v_97 = ATgetArgument(t, 0);
              {
                ATerm u_41 = NULL,w_41 = NULL,w_7 = NULL;
                t = SSLgetAnnotations(u_97);
                u_41 = t;
                t = v_97;
                {
                  static ATerm s_43 (ATerm t);
                  static ATerm s_43 (ATerm t)
                  {
                    ATerm n_43 = NULL,p_43 = NULL,q_43 = NULL;
                    n_43 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        p_43 = ATgetArgument(t, 0);
                        {
                          ATerm m_44 = NULL,l_7 = NULL;
                          t = SSLgetAnnotations(n_43);
                          m_44 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, p_43);
                          l_7 = t;
                          t = SSLsetAnnotations(l_7, m_44);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Int_1))
                          {
                            p_43 = ATgetArgument(t, 0);
                            {
                              ATerm a_45 = NULL,n_7 = NULL;
                              t = SSLgetAnnotations(n_43);
                              a_45 = t;
                              t = (ATerm) ATmakeAppl(sym_Int_1, p_43);
                              n_7 = t;
                              t = SSLsetAnnotations(n_7, a_45);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Real_1))
                              {
                                p_43 = ATgetArgument(t, 0);
                                {
                                  ATerm k_45 = NULL,o_7 = NULL;
                                  t = SSLgetAnnotations(n_43);
                                  k_45 = t;
                                  t = (ATerm) ATmakeAppl(sym_Real_1, p_43);
                                  o_7 = t;
                                  t = SSLsetAnnotations(o_7, k_45);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Str_1))
                                  {
                                    p_43 = ATgetArgument(t, 0);
                                    {
                                      ATerm d_46 = NULL,p_7 = NULL;
                                      t = SSLgetAnnotations(n_43);
                                      d_46 = t;
                                      t = (ATerm) ATmakeAppl(sym_Str_1, p_43);
                                      p_7 = t;
                                      t = SSLsetAnnotations(p_7, d_46);
                                    }
                                  }
                                else
                                  {
                                    ATerm x_46 = NULL,a_47 = NULL,s_7 = NULL;
                                    if(match_cons(t, sym_Op_2))
                                      {
                                        p_43 = ATgetArgument(t, 0);
                                        q_43 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(n_43);
                                    x_46 = t;
                                    t = q_43;
                                    t = map_1_0(s_43, t);
                                    a_47 = t;
                                    t = (ATerm) ATmakeAppl(sym_Op_2, p_43, a_47);
                                    s_7 = t;
                                    t = SSLsetAnnotations(s_7, x_46);
                                  }
                              }
                          }
                      }
                    return(t);
                  }
                  t = s_43(t);
                }
                w_41 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, w_41);
                w_7 = t;
                t = SSLsetAnnotations(w_7, u_41);
              }
            }
          else
            {
              if(match_cons(t, sym_Assign_2))
                {
                  v_97 = ATgetArgument(t, 0);
                  w_97 = ATgetArgument(t, 1);
                  {
                    ATerm x_47 = NULL,g_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,q_48 = NULL,r_48 = NULL,i_8 = NULL,z_7 = NULL,y_7 = NULL;
                    t = SSLgetAnnotations(u_97);
                    x_47 = t;
                    t = v_97;
                    if(match_cons(t, sym_Var_1))
                      {
                        q_48 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(v_97);
                    n_48 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, q_48);
                    y_7 = t;
                    t = SSLsetAnnotations(y_7, n_48);
                    r_48 = t;
                    t = w_97;
                    if(match_cons(t, sym_Var_1))
                      {
                        l_48 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(w_97);
                    g_48 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, l_48);
                    z_7 = t;
                    t = SSLsetAnnotations(z_7, g_48);
                    m_48 = t;
                    t = (ATerm) ATmakeAppl(sym_Assign_2, r_48, m_48);
                    i_8 = t;
                    t = SSLsetAnnotations(i_8, x_47);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      v_97 = ATgetArgument(t, 0);
                      {
                        ATerm i_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,l_8 = NULL,k_8 = NULL;
                        t = SSLgetAnnotations(u_97);
                        i_49 = t;
                        t = v_97;
                        if(match_cons(t, sym_Var_1))
                          {
                            p_49 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(v_97);
                        o_49 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, p_49);
                        k_8 = t;
                        t = SSLsetAnnotations(k_8, o_49);
                        q_49 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, q_49);
                        l_8 = t;
                        t = SSLsetAnnotations(l_8, i_49);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Prim_2))
                        {
                          v_97 = ATgetArgument(t, 0);
                          w_97 = ATgetArgument(t, 1);
                          {
                            ATerm b_50 = NULL,q_8 = NULL;
                            t = SSLgetAnnotations(u_97);
                            b_50 = t;
                            t = (ATerm) ATmakeAppl(sym_Prim_2, v_97, w_97);
                            q_8 = t;
                            t = SSLsetAnnotations(q_8, b_50);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_CallT_3))
                            {
                              v_97 = ATgetArgument(t, 0);
                              w_97 = ATgetArgument(t, 1);
                              t_97 = ATgetArgument(t, 2);
                              {
                                ATerm p_51 = NULL,x_8 = NULL;
                                t = SSLgetAnnotations(u_97);
                                p_51 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, v_97, w_97, t_97);
                                x_8 = t;
                                t = SSLsetAnnotations(x_8, p_51);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  v_97 = ATgetArgument(t, 0);
                                  w_97 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_52 = NULL,o_52 = NULL,s_52 = NULL,b_9 = NULL;
                                    t = SSLgetAnnotations(u_97);
                                    j_52 = t;
                                    t = v_97;
                                    t = simple_strategy_0_0(t);
                                    o_52 = t;
                                    t = w_97;
                                    t = simple_strategy_0_0(t);
                                    s_52 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, o_52, s_52);
                                    b_9 = t;
                                    t = SSLsetAnnotations(b_9, j_52);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seqs_1))
                                    {
                                      v_97 = ATgetArgument(t, 0);
                                      {
                                        ATerm h_53 = NULL,n_53 = NULL,e_9 = NULL;
                                        t = SSLgetAnnotations(u_97);
                                        h_53 = t;
                                        t = v_97;
                                        t = map_1_0(simple_strategy_0_0, t);
                                        n_53 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, n_53);
                                        e_9 = t;
                                        t = SSLsetAnnotations(e_9, h_53);
                                      }
                                    }
                                  else
                                    {
                                      ATerm b_54 = NULL,m_54 = NULL,i_9 = NULL;
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          v_97 = ATgetArgument(t, 0);
                                          w_97 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(u_97);
                                      b_54 = t;
                                      t = w_97;
                                      t = simple_strategy_0_0(t);
                                      m_54 = t;
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, v_97, m_54);
                                      i_9 = t;
                                      t = SSLsetAnnotations(i_9, b_54);
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
static ATerm u_8 (ATerm y_154 (ATerm), ATerm a_73, ATerm z_72, ATerm t)
{
  static ATerm o_100 (ATerm t);
  static ATerm o_100 (ATerm t)
  {
    static ATerm p_100 (ATerm w_99, ATerm t);
    static ATerm p_100 (ATerm w_99, ATerm t)
    {
      ATerm y_99 = NULL,z_99 = NULL,a_100 = NULL,d_100 = NULL,g_100 = NULL,h_100 = NULL,o_10 = NULL;
      t = w_99;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_99 = ATgetFirst((ATermList) t);
          z_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm m_6 (ATerm t);
        static ATerm m_6 (ATerm t)
        {
          t = z_72;
          return(t);
        }
        t = x_10(y_154, m_6, y_99, z_99, t);
      }
      t = w_99;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_100 = ATgetFirst((ATermList) t);
          g_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(w_99);
      a_100 = t;
      t = g_100;
      t = o_100(t);
      h_100 = t;
      t = (ATerm) ATinsert(CheckATermList(h_100), d_100);
      o_10 = t;
      t = SSLsetAnnotations(o_10, a_100);
      return(t);
    }
    ATerm i_100 = NULL,m_100 = NULL;
    i_100 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_100;
      }
    else
      {
        ATerm l_34 = t;
        int m_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_34 = ATgetFirst((ATermList) t);
                m_100 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(m_34);
            {
              ATerm o_34 = t;
              int p_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_100(i_100, t);
                  LocalPopChoice(p_34);
                }
              else
                {
                  t = o_34;
                  t = m_100;
                  t = o_100(t);
                }
            }
          }
        else
          {
            t = l_34;
            t = p_100(i_100, t);
          }
      }
    return(t);
  }
  t = a_73;
  t = o_100(t);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm i_173 (ATerm), ATerm j_173 (ATerm), ATerm k_173 (ATerm), ATerm t)
{
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(i_173, j_173, k_173, t);
      LocalPopChoice(r_34);
    }
  else
    {
      t = q_34;
      {
        ATerm h_101 = NULL,m_101 = NULL,p_101 = NULL,z_54 = NULL,c_55 = NULL,d_55 = NULL,w_10 = NULL;
        h_101 = t;
        if(match_cons(t, sym_Matrix_2))
          {
            m_101 = ATgetArgument(t, 0);
            p_101 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_101);
        z_54 = t;
        t = m_101;
        t = k_173(t);
        c_55 = t;
        t = p_101;
        t = i_173(t);
        d_55 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, c_55, d_55);
        w_10 = t;
        t = SSLsetAnnotations(w_10, z_54);
      }
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm o_102 = NULL;
  ATerm t_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_102 = ATgetArgument(t, 0);
          {
            ATerm v_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_34);
      t = o_102;
    }
  else
    {
      t = t_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_102;
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm b_103 = NULL;
  ATerm w_34 = t;
  int x_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_103 = ATgetArgument(t, 0);
          {
            ATerm y_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_34);
      t = b_103;
    }
  else
    {
      t = w_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_103;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm f_102 = NULL;
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm b_35 = ATgetArgument(t, 0);
          ATerm c_35 = ATgetArgument(t, 1);
          f_102 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(a_35);
      t = f_102;
      t = map_1_0(n_6, t);
    }
  else
    {
      t = z_34;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm e_35 = ATgetArgument(t, 0);
          ATerm f_35 = ATgetArgument(t, 1);
          f_102 = ATgetArgument(t, 2);
          {
            ATerm g_35 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = f_102;
      t = map_1_0(o_6, t);
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm z_103 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_103);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm h_35 = t;
  int k_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_35);
    }
  else
    {
      t = h_35;
      {
        ATerm l_35 = t;
        int n_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_35);
          }
        else
          {
            t = l_35;
            {
              ATerm o_35 = t;
              int q_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_104 = NULL,c_104 = NULL,d_104 = NULL,e_104 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_104 = ATgetArgument(t, 0);
                      c_104 = ATgetArgument(t, 1);
                      d_104 = ATgetArgument(t, 2);
                      e_104 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_104;
                  t = map_1_0(y_6, t);
                  LocalPopChoice(q_35);
                }
              else
                {
                  t = o_35;
                  {
                    ATerm r_35 = t;
                    int s_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_35);
                      }
                    else
                      {
                        t = r_35;
                        t = dynrule_targs_1_0(z_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm l_104 = NULL;
  ATerm t_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_104 = ATgetArgument(t, 0);
          {
            ATerm v_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_35);
      t = l_104;
    }
  else
    {
      t = t_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_104;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = map_1_0(e_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm q_104 = NULL;
  ATerm z_35 = t;
  int a_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_104 = ATgetArgument(t, 0);
          {
            ATerm b_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_36);
      t = q_104;
    }
  else
    {
      t = z_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_104;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm u_104 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_104);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_36);
    }
  else
    {
      t = c_36;
      {
        ATerm e_36 = t;
        int f_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_36);
          }
        else
          {
            t = e_36;
            {
              ATerm g_36 = t;
              int h_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL,f_105 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_105 = ATgetArgument(t, 0);
                      b_105 = ATgetArgument(t, 1);
                      c_105 = ATgetArgument(t, 2);
                      f_105 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_105;
                  t = map_1_0(k_7, t);
                  LocalPopChoice(h_36);
                }
              else
                {
                  t = g_36;
                  {
                    ATerm i_36 = t;
                    int j_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(j_36);
                      }
                    else
                      {
                        t = i_36;
                        t = dynrule_targs_1_0(q_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm x_105 = NULL;
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_105 = ATgetArgument(t, 0);
          {
            ATerm m_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_36);
      t = x_105;
    }
  else
    {
      t = k_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_105 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_105;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = map_1_0(r_7, t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm v_106 = NULL;
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_106 = ATgetArgument(t, 0);
          {
            ATerm p_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_36);
      t = v_106;
    }
  else
    {
      t = n_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_106;
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm v_107 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_107);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_36);
    }
  else
    {
      t = q_36;
      {
        ATerm s_36 = t;
        int t_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_36);
          }
        else
          {
            t = s_36;
            {
              ATerm u_36 = t;
              int v_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_107 = NULL,y_107 = NULL,z_107 = NULL,e_108 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_107 = ATgetArgument(t, 0);
                      y_107 = ATgetArgument(t, 1);
                      z_107 = ATgetArgument(t, 2);
                      e_108 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_107;
                  t = map_1_0(v_7, t);
                  LocalPopChoice(v_36);
                }
              else
                {
                  t = u_36;
                  {
                    ATerm x_36 = t;
                    int y_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_36);
                      }
                    else
                      {
                        t = x_36;
                        t = dynrule_targs_1_0(x_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm e_109 = NULL;
  ATerm z_36 = t;
  int a_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_109 = ATgetArgument(t, 0);
          {
            ATerm b_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_37);
      t = e_109;
    }
  else
    {
      t = z_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_109;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = map_1_0(a_8, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm l_109 = NULL;
  ATerm c_37 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_109 = ATgetArgument(t, 0);
          {
            ATerm e_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_37);
      t = l_109;
    }
  else
    {
      t = c_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_109;
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm s_109 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_109);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            {
              ATerm j_37 = t;
              int k_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_109 = NULL,w_109 = NULL,x_109 = NULL,y_109 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_109 = ATgetArgument(t, 0);
                      w_109 = ATgetArgument(t, 1);
                      x_109 = ATgetArgument(t, 2);
                      y_109 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_109;
                  t = map_1_0(d_8, t);
                  LocalPopChoice(k_37);
                }
              else
                {
                  t = j_37;
                  {
                    ATerm l_37 = t;
                    int m_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_37);
                      }
                    else
                      {
                        t = l_37;
                        t = dynrule_targs_1_0(e_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm f_110 = NULL;
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_110 = ATgetArgument(t, 0);
          {
            ATerm q_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_37);
      t = f_110;
    }
  else
    {
      t = o_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_110;
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = map_1_0(f_8, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_110 = NULL;
  ATerm r_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_110 = ATgetArgument(t, 0);
          {
            ATerm t_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_37);
      t = k_110;
    }
  else
    {
      t = r_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_110;
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm o_110 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_110);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_37);
    }
  else
    {
      t = u_37;
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            {
              ATerm y_37 = t;
              int z_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_110 = ATgetArgument(t, 0);
                      r_110 = ATgetArgument(t, 1);
                      s_110 = ATgetArgument(t, 2);
                      t_110 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_110;
                  t = map_1_0(m_8, t);
                  LocalPopChoice(z_37);
                }
              else
                {
                  t = y_37;
                  {
                    ATerm a_38 = t;
                    int b_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_38);
                      }
                    else
                      {
                        t = a_38;
                        t = dynrule_targs_1_0(r_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm b_111 = NULL;
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_111 = ATgetArgument(t, 0);
          {
            ATerm e_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_38);
      t = b_111;
    }
  else
    {
      t = c_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_111;
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = map_1_0(s_8, t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm g_111 = NULL;
  ATerm f_38 = t;
  int g_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_111 = ATgetArgument(t, 0);
          {
            ATerm h_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_38);
      t = g_111;
    }
  else
    {
      t = f_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_111;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm x_103 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      x_103 = ATgetArgument(t, 0);
      t = x_103;
      t = free_vars_3_0(w_6, x_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          x_103 = ATgetArgument(t, 0);
          t = x_103;
          t = free_vars_3_0(f_7, h_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              x_103 = ATgetArgument(t, 0);
              t = x_103;
              t = free_vars_3_0(t_7, u_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  x_103 = ATgetArgument(t, 0);
                  t = x_103;
                  t = free_vars_3_0(b_8, c_8, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      x_103 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_103;
                  t = free_vars_3_0(g_8, j_8, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm j_134 (ATerm), ATerm k_134 (ATerm), ATerm l_134 (ATerm), ATerm t)
{
  ATerm q_116 = NULL,r_116 = NULL,s_116 = NULL,t_116 = NULL,u_116 = NULL;
  t_116 = t;
  if(match_cons(t, sym_Scope_2))
    {
      u_116 = ATgetArgument(t, 0);
      s_116 = ATgetArgument(t, 1);
      {
        ATerm t_55 = NULL,z_55 = NULL,a_56 = NULL,i_12 = NULL;
        t = SSLgetAnnotations(t_116);
        t_55 = t;
        t = u_116;
        t = l_134(t);
        z_55 = t;
        t = s_116;
        t = j_134(t);
        a_56 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, z_55, a_56);
        i_12 = t;
        t = SSLsetAnnotations(i_12, t_55);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          u_116 = ATgetArgument(t, 0);
          {
            ATerm h_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL,o_12 = NULL,m_12 = NULL;
            t = SSLgetAnnotations(t_116);
            h_56 = t;
            t = u_116;
            if(match_cons(t, sym_Rule_3))
              {
                k_56 = ATgetArgument(t, 0);
                l_56 = ATgetArgument(t, 1);
                n_56 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(u_116);
            j_56 = t;
            t = k_56;
            t = j_134(t);
            o_56 = t;
            t = l_56;
            t = j_134(t);
            p_56 = t;
            t = n_56;
            t = j_134(t);
            q_56 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, o_56, p_56, q_56);
            m_12 = t;
            t = SSLsetAnnotations(m_12, j_56);
            r_56 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, r_56);
            o_12 = t;
            t = SSLsetAnnotations(o_12, h_56);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              u_116 = ATgetArgument(t, 0);
              s_116 = ATgetArgument(t, 1);
              q_116 = ATgetArgument(t, 2);
              {
                ATerm c_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,p_12 = NULL;
                t = SSLgetAnnotations(t_116);
                c_57 = t;
                t = u_116;
                t = l_134(t);
                g_57 = t;
                t = s_116;
                t = l_134(t);
                h_57 = t;
                t = q_116;
                t = l_134(t);
                i_57 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, g_57, h_57, i_57);
                p_12 = t;
                t = SSLsetAnnotations(p_12, c_57);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  u_116 = ATgetArgument(t, 0);
                  s_116 = ATgetArgument(t, 1);
                  q_116 = ATgetArgument(t, 2);
                  r_116 = ATgetArgument(t, 3);
                  {
                    ATerm k_58 = NULL,x_58 = NULL,a_59 = NULL,b_59 = NULL,e_59 = NULL,e_13 = NULL;
                    t = SSLgetAnnotations(t_116);
                    k_58 = t;
                    t = u_116;
                    t = l_134(t);
                    x_58 = t;
                    t = s_116;
                    t = l_134(t);
                    a_59 = t;
                    t = q_116;
                    t = l_134(t);
                    b_59 = t;
                    t = r_116;
                    t = j_134(t);
                    e_59 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, x_58, a_59, b_59, e_59);
                    e_13 = t;
                    t = SSLsetAnnotations(e_13, k_58);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_116 = ATgetArgument(t, 0);
                      s_116 = ATgetArgument(t, 1);
                      q_116 = ATgetArgument(t, 2);
                      r_116 = ATgetArgument(t, 3);
                      {
                        ATerm a_60 = NULL,o_60 = NULL,r_60 = NULL,s_60 = NULL,u_60 = NULL,f_13 = NULL;
                        t = SSLgetAnnotations(t_116);
                        a_60 = t;
                        t = u_116;
                        t = l_134(t);
                        o_60 = t;
                        t = s_116;
                        t = l_134(t);
                        r_60 = t;
                        t = q_116;
                        t = l_134(t);
                        s_60 = t;
                        t = r_116;
                        t = j_134(t);
                        u_60 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, o_60, r_60, s_60, u_60);
                        f_13 = t;
                        t = SSLsetAnnotations(f_13, a_60);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          u_116 = ATgetArgument(t, 0);
                          s_116 = ATgetArgument(t, 1);
                          {
                            ATerm e_61 = NULL,j_61 = NULL,k_61 = NULL,g_13 = NULL;
                            t = SSLgetAnnotations(t_116);
                            e_61 = t;
                            t = u_116;
                            t = l_134(t);
                            j_61 = t;
                            t = s_116;
                            t = j_134(t);
                            k_61 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, j_61, k_61);
                            g_13 = t;
                            t = SSLsetAnnotations(g_13, e_61);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              u_116 = ATgetArgument(t, 0);
                              s_116 = ATgetArgument(t, 1);
                              {
                                ATerm x_61 = NULL,b_62 = NULL,c_62 = NULL,h_13 = NULL;
                                t = SSLgetAnnotations(t_116);
                                x_61 = t;
                                t = u_116;
                                t = l_134(t);
                                b_62 = t;
                                t = s_116;
                                t = j_134(t);
                                c_62 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, b_62, c_62);
                                h_13 = t;
                                t = SSLsetAnnotations(h_13, x_61);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  u_116 = ATgetArgument(t, 0);
                                  s_116 = ATgetArgument(t, 1);
                                  {
                                    ATerm l_62 = NULL,o_62 = NULL,p_62 = NULL,i_13 = NULL;
                                    t = SSLgetAnnotations(t_116);
                                    l_62 = t;
                                    t = u_116;
                                    t = l_134(t);
                                    o_62 = t;
                                    t = s_116;
                                    t = j_134(t);
                                    p_62 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, o_62, p_62);
                                    i_13 = t;
                                    t = SSLsetAnnotations(i_13, l_62);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      u_116 = ATgetArgument(t, 0);
                                      {
                                        ATerm y_62 = NULL,a_63 = NULL,j_13 = NULL;
                                        t = SSLgetAnnotations(t_116);
                                        y_62 = t;
                                        t = u_116;
                                        t = j_134(t);
                                        a_63 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, a_63);
                                        j_13 = t;
                                        t = SSLsetAnnotations(j_13, y_62);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          u_116 = ATgetArgument(t, 0);
                                          {
                                            ATerm h_63 = NULL,j_63 = NULL,k_13 = NULL;
                                            t = SSLgetAnnotations(t_116);
                                            h_63 = t;
                                            t = u_116;
                                            t = j_134(t);
                                            j_63 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, j_63);
                                            k_13 = t;
                                            t = SSLsetAnnotations(k_13, h_63);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              u_116 = ATgetArgument(t, 0);
                                              {
                                                ATerm p_63 = NULL,r_63 = NULL,l_13 = NULL;
                                                t = SSLgetAnnotations(t_116);
                                                p_63 = t;
                                                t = u_116;
                                                t = j_134(t);
                                                r_63 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, r_63);
                                                l_13 = t;
                                                t = SSLsetAnnotations(l_13, p_63);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  u_116 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm x_63 = NULL,z_63 = NULL,o_13 = NULL;
                                                    t = SSLgetAnnotations(t_116);
                                                    x_63 = t;
                                                    t = u_116;
                                                    t = j_134(t);
                                                    z_63 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, z_63);
                                                    o_13 = t;
                                                    t = SSLsetAnnotations(o_13, x_63);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm n_64 = NULL,r_64 = NULL,p_13 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      u_116 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(t_116);
                                                  n_64 = t;
                                                  t = u_116;
                                                  t = j_134(t);
                                                  r_64 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, r_64);
                                                  p_13 = t;
                                                  t = SSLsetAnnotations(p_13, n_64);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm s_134 (ATerm), ATerm t)
{
  ATerm q_117 = NULL,r_117 = NULL,u_117 = NULL;
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          q_117 = ATgetArgument(t, 0);
          {
            ATerm k_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_38);
      t = q_117;
      if(match_cons(t, sym_DynRuleId_1))
        {
          r_117 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_117;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm l_38 = ATgetArgument(t, 0);
          ATerm m_38 = ATgetArgument(t, 1);
          u_117 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_117;
    }
  else
    {
      t = i_38;
      {
        ATerm n_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                q_117 = ATgetArgument(t, 0);
                {
                  ATerm p_38 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(o_38);
            t = q_117;
            if(match_cons(t, sym_DynRuleId_1))
              {
                r_117 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_117;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm q_38 = ATgetArgument(t, 0);
                ATerm r_38 = ATgetArgument(t, 1);
                u_117 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = u_117;
          }
        else
          {
            t = n_38;
            if(match_cons(t, sym_AddDynRule_2))
              {
                q_117 = ATgetArgument(t, 0);
                {
                  ATerm s_38 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = q_117;
            if(match_cons(t, sym_DynRuleId_1))
              {
                r_117 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = r_117;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm t_38 = ATgetArgument(t, 0);
                ATerm u_38 = ATgetArgument(t, 1);
                u_117 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = u_117;
          }
      }
    }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm l_118 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_118);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm v_38 = t;
  int w_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_38);
    }
  else
    {
      t = v_38;
      {
        ATerm x_38 = t;
        int y_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_38);
          }
        else
          {
            t = x_38;
            {
              ATerm z_38 = t;
              int a_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_118 = NULL,o_118 = NULL,p_118 = NULL,q_118 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_118 = ATgetArgument(t, 0);
                      o_118 = ATgetArgument(t, 1);
                      p_118 = ATgetArgument(t, 2);
                      q_118 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_118;
                  t = map_1_0(t_9, t);
                  LocalPopChoice(a_39);
                }
              else
                {
                  t = z_38;
                  {
                    ATerm b_39 = t;
                    int c_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(c_39);
                      }
                    else
                      {
                        t = b_39;
                        t = dynrule_targs_1_0(u_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm x_118 = NULL;
  ATerm d_39 = t;
  int e_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_118 = ATgetArgument(t, 0);
          {
            ATerm f_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_39);
      t = x_118;
    }
  else
    {
      t = d_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_118 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_118;
    }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = map_1_0(w_9, t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm c_119 = NULL;
  ATerm g_39 = t;
  int h_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_119 = ATgetArgument(t, 0);
          {
            ATerm i_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_39);
      t = c_119;
    }
  else
    {
      t = g_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_119 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_119;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm e_118 = NULL,i_118 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      i_118 = ATgetArgument(t, 0);
      t = i_118;
      if(match_cons(t, sym_Rule_3))
        {
          e_118 = ATgetArgument(t, 0);
          {
            ATerm j_39 = ATgetArgument(t, 1);
          }
          {
            ATerm k_39 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_118;
      t = free_vars_3_0(w_8, r_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          i_118 = ATgetArgument(t, 0);
          {
            ATerm l_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = i_118;
    }
  return(t);
}
static ATerm y_8 (ATerm a_155 (ATerm), ATerm c_73, ATerm b_73, ATerm t)
{
  static ATerm v_119 (ATerm t);
  static ATerm v_119 (ATerm t)
  {
    ATerm q_119 = NULL,r_119 = NULL,s_119 = NULL;
    q_119 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_119;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_119 = ATgetFirst((ATermList) t);
            s_119 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_39 = t;
          int n_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_119;
              {
                static ATerm x_9 (ATerm t);
                static ATerm x_9 (ATerm t)
                {
                  t = b_73;
                  return(t);
                }
                t = x_10(a_155, x_9, r_119, s_119, t);
              }
              t = v_119(t);
              LocalPopChoice(n_39);
            }
          else
            {
              t = m_39;
              {
                ATerm f_65 = NULL,j_65 = NULL,o_16 = NULL;
                t = SSLgetAnnotations(q_119);
                f_65 = t;
                t = s_119;
                t = v_119(t);
                j_65 = t;
                t = (ATerm) ATinsert(CheckATermList(j_65), r_119);
                o_16 = t;
                t = SSLsetAnnotations(o_16, f_65);
              }
            }
        }
      }
    return(t);
  }
  t = c_73;
  t = v_119(t);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_39 = ATgetArgument(t, 0);
      if(((ATgetType(o_39) != AT_LIST) || !(ATisEmpty(o_39))))
        _fail(t);
      {
        ATerm p_39 = ATgetArgument(t, 1);
        if(((ATgetType(p_39) != AT_LIST) || !(ATisEmpty(p_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_39 = ATgetArgument(t, 0);
      if(((ATgetType(q_39) == AT_LIST) && !(ATisEmpty(q_39))))
        {
          d_120 = ATgetFirst((ATermList) q_39);
          e_120 = (ATerm) ATgetNext((ATermList) q_39);
        }
      else
        _fail(t);
      {
        ATerm r_39 = ATgetArgument(t, 1);
        if(((ATgetType(r_39) == AT_LIST) && !(ATisEmpty(r_39))))
          {
            f_120 = ATgetFirst((ATermList) r_39);
            g_120 = (ATerm) ATgetNext((ATermList) r_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_120, f_120), (ATerm) ATmakeAppl(sym__2, e_120, g_120));
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm h_120 = NULL,k_120 = NULL;
  if(match_cons(t, sym__2))
    {
      h_120 = ATgetArgument(t, 0);
      k_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_120), h_120);
  return(t);
}
static ATerm a_9 (ATerm r_894, ATerm w_894, ATerm s_90, ATerm t)
{
  ATerm y_119 = NULL,z_119 = NULL,a_120 = NULL,b_120 = NULL;
  t = SSL_explode_term(w_894);
  if(match_cons(t, sym__2))
    {
      y_119 = ATgetArgument(t, 0);
      a_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_894);
  if(match_cons(t, sym__2))
    {
      if((y_119 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      z_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_119, a_120);
  t = genzip_4_0(a_10, b_10, c_10, _id, t);
  b_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_120, s_90);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm k_142 (ATerm), ATerm l_142 (ATerm), ATerm t)
{
  static ATerm m_120 (ATerm t);
  static ATerm m_120 (ATerm t)
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_142(t);
        LocalPopChoice(t_39);
      }
    else
      {
        t = s_39;
        t = l_142(t);
        t = m_120(t);
      }
    return(t);
  }
  t = m_120(t);
  return(t);
}
ATerm for_3_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm p_142 (ATerm), ATerm t)
{
  t = n_142(t);
  t = while_not_2_0(o_142, p_142, t);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm t_120 = NULL;
  t_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_120);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm u_120 = NULL,v_120 = NULL,w_120 = NULL,x_120 = NULL,x_16 = NULL;
  x_120 = t;
  if(match_cons(t, sym__2))
    {
      v_120 = ATgetArgument(t, 0);
      w_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_120);
  u_120 = t;
  t = w_120;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_120, w_120);
  x_16 = t;
  t = SSLsetAnnotations(x_16, u_120);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm q_121 = NULL,r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL;
  q_121 = t;
  if(match_cons(t, sym__2))
    {
      r_121 = ATgetArgument(t, 0);
      s_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_121;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_121 = ATgetFirst((ATermList) t);
      u_121 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_39 = t;
        int v_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_122(r_121, s_121, q_121, t);
            LocalPopChoice(v_39);
          }
        else
          {
            t = u_39;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_121), t_121), u_121);
          }
      }
    }
  else
    {
      t = e_122(r_121, s_121, q_121, t);
    }
  return(t);
}
static ATerm e_122 (ATerm y_120, ATerm z_120, ATerm a_121, ATerm t)
{
  ATerm b_121 = NULL,e_121 = NULL,y_16 = NULL,h_121 = NULL,i_121 = NULL,j_121 = NULL,k_121 = NULL;
  t = SSLgetAnnotations(a_121);
  b_121 = t;
  t = z_120;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_121 = ATgetFirst((ATermList) t);
      k_121 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_121;
  if(match_cons(t, sym__2))
    {
      i_121 = ATgetArgument(t, 0);
      j_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_121;
        if((i_121 != t))
          {
            _fail(t);
          }
        t = k_121;
        LocalPopChoice(x_39);
      }
    else
      {
        t = w_39;
        t = z_120;
        t = a_9(i_121, j_121, k_121, t);
      }
  }
  e_121 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_120, e_121);
  y_16 = t;
  t = SSLsetAnnotations(y_16, b_121);
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm d_122 = NULL;
  if(match_cons(t, sym__2))
    {
      d_122 = ATgetArgument(t, 0);
      if((d_122 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(d_10, e_10, f_10, t);
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      {
        ATerm y_121 = NULL,z_121 = NULL,a_122 = NULL;
        y_121 = t;
        if(match_cons(t, sym__2))
          {
            z_121 = ATgetArgument(t, 0);
            a_122 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_121;
        t = y_8(g_10, z_121, a_122, t);
      }
    }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm z_65 = NULL,a_66 = NULL;
  if(match_cons(t, sym__2))
    {
      z_65 = ATgetArgument(t, 0);
      a_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(l_10, z_65, a_66, t);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm o_66 = NULL;
  if(match_cons(t, sym__2))
    {
      o_66 = ATgetArgument(t, 0);
      if((o_66 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL;
  if(match_cons(t, sym__2))
    {
      v_66 = ATgetArgument(t, 0);
      w_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(p_10, v_66, w_66, t);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm x_66 = NULL;
  if(match_cons(t, sym__2))
    {
      x_66 = ATgetArgument(t, 0);
      if((x_66 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm c_162 (ATerm), ATerm d_162 (ATerm), ATerm e_162 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm s_122 (ATerm t);
  static ATerm s_122 (ATerm t)
  {
    ATerm a_40 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_162(t);
        LocalPopChoice(b_40);
      }
    else
      {
        t = a_40;
        {
          ATerm c_40 = t;
          int d_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_122 = NULL,h_122 = NULL,q_65 = NULL,r_65 = NULL;
              g_122 = t;
              t = d_162(t);
              h_122 = t;
              t = g_122;
              {
                static ATerm h_10 (ATerm t);
                static ATerm h_10 (ATerm t)
                {
                  ATerm j_122 = NULL;
                  t = s_122(t);
                  j_122 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_122, h_122);
                  t = diff_0_0(t);
                  return(t);
                }
                t = e_162(h_10, s_122, i_10, t);
              }
              r_65 = t;
              t = SSL_explode_term(r_65);
              if(match_cons(t, sym__2))
                {
                  ATerm e_40 = ATgetArgument(t, 0);
                  q_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_65;
              t = foldr_3_0(j_10, k_10, _id, t);
              LocalPopChoice(d_40);
            }
          else
            {
              t = c_40;
              {
                ATerm q_66 = NULL,r_66 = NULL;
                r_66 = t;
                t = SSL_explode_term(r_66);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_40 = ATgetArgument(t, 0);
                    q_66 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_66;
                t = foldr_3_0(m_10, n_10, s_122, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_122(t);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm s_67 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_67);
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm g_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_40);
    }
  else
    {
      t = g_40;
      {
        ATerm i_40 = t;
        int j_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_40);
          }
        else
          {
            t = i_40;
            {
              ATerm k_40 = t;
              int l_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_67 = ATgetArgument(t, 0);
                      v_67 = ATgetArgument(t, 1);
                      w_67 = ATgetArgument(t, 2);
                      x_67 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_67;
                  t = map_1_0(s_10, t);
                  LocalPopChoice(l_40);
                }
              else
                {
                  t = k_40;
                  {
                    ATerm m_40 = t;
                    int n_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_40);
                      }
                    else
                      {
                        t = m_40;
                        {
                          ATerm f_69 = NULL,g_69 = NULL;
                          if(match_cons(t, sym_Matrix_2))
                            {
                              f_69 = ATgetArgument(t, 0);
                              g_69 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = f_69;
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
static ATerm s_10 (ATerm t)
{
  ATerm v_68 = NULL;
  ATerm o_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_68 = ATgetArgument(t, 0);
          {
            ATerm q_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_40);
      t = v_68;
    }
  else
    {
      t = o_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_68;
    }
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm r_69 = NULL;
  if(match_cons(t, sym__2))
    {
      r_69 = ATgetArgument(t, 0);
      if((r_69 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_40;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_69 = ATgetFirst((ATermList) t);
      t_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_69, t_69);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_40 = ATgetArgument(t, 0);
      if(match_cons(s_40, sym__2))
        {
          w_69 = ATgetArgument(s_40, 0);
          x_69 = ATgetArgument(s_40, 1);
        }
      else
        _fail(t);
      {
        ATerm t_40 = ATgetArgument(t, 1);
        if(match_cons(t_40, sym__2))
          {
            y_69 = ATgetArgument(t_40, 0);
            z_69 = ATgetArgument(t_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_69), w_69), (ATerm) ATinsert(CheckATermList(z_69), x_69));
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm b_70 = NULL;
  b_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, b_70, term_w_40), (ATerm) ATmakeAppl(sym_Var_1, b_70));
  return(t);
}
ATerm RowLet_1_0 (ATerm s_0 (ATerm), ATerm t)
{
  ATerm k_124 = NULL,l_124 = NULL,m_124 = NULL;
  k_124 = t;
  if(match_cons(t, sym_Row_2))
    {
      l_124 = ATgetArgument(t, 0);
      m_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_40 = t;
    int b_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL;
        t = m_124;
        {
          ATerm c_41 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_41;
            }
        }
        t = new_0_0(t);
        m_67 = t;
        t = m_124;
        t = free_vars_3_0(q_10, r_10, tvars_matrix_boundin_3_0, t);
        r_67 = t;
        t = s_0(t);
        q_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_67, q_67);
        t = u_8(t_10, r_67, q_67, t);
        t = genzip_4_0(u_10, v_10, z_10, a_11, t);
        if(match_cons(t, sym__2))
          {
            o_67 = ATgetArgument(t, 0);
            p_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, m_67, (ATerm)ATempty, o_67, m_124)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, l_124, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_67), (ATerm)ATempty, p_67)));
        LocalPopChoice(b_41);
      }
    else
      {
        t = x_40;
        t = m_124;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, l_124, m_124));
      }
  }
  return(t);
}
static ATerm b_11 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_40;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm x_124 = NULL,y_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_124 = ATgetFirst((ATermList) t);
      y_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_124, y_124);
  return(t);
}
static ATerm d_11 (ATerm t)
{
  ATerm z_124 = NULL,a_125 = NULL,b_125 = NULL,c_125 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_41 = ATgetArgument(t, 0);
      if(match_cons(d_41, sym__2))
        {
          z_124 = ATgetArgument(d_41, 0);
          a_125 = ATgetArgument(d_41, 1);
        }
      else
        _fail(t);
      {
        ATerm e_41 = ATgetArgument(t, 1);
        if(match_cons(e_41, sym__2))
          {
            b_125 = ATgetArgument(e_41, 0);
            c_125 = ATgetArgument(e_41, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_125), z_124), (ATerm) ATinsert(CheckATermList(c_125), a_125));
  return(t);
}
static ATerm c_9 (ATerm t_108, ATerm s_108, ATerm t)
{
  ATerm q_124 = NULL,r_124 = NULL,s_124 = NULL,t_124 = NULL,u_124 = NULL,v_124 = NULL,w_124 = NULL,b_17 = NULL;
  t = s_108;
  {
    static ATerm f_11 (ATerm t);
    static ATerm f_11 (ATerm t)
    {
      static ATerm g_11 (ATerm t);
      static ATerm g_11 (ATerm t)
      {
        t = t_108;
        return(t);
      }
      t = RowLet_1_0(g_11, t);
      return(t);
    }
    t = genzip_4_0(b_11, c_11, d_11, f_11, t);
  }
  w_124 = t;
  if(match_cons(t, sym__2))
    {
      t_124 = ATgetArgument(t, 0);
      u_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_124);
  s_124 = t;
  t = t_124;
  t = concat_0_0(t);
  v_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_124, u_124);
  b_17 = t;
  t = SSLsetAnnotations(b_17, s_124);
  if(match_cons(t, sym__2))
    {
      q_124 = ATgetArgument(t, 0);
      r_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Let_2, q_124, (ATerm) ATmakeAppl(sym_Scope_2, t_108, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_f_41))), (ATerm) ATmakeAppl(sym_Matrix_1, r_124))));
  return(t);
}
static ATerm d_9 (ATerm v_147 (ATerm), ATerm h_52, ATerm f_52, ATerm t)
{
  ATerm d_125 = NULL,e_125 = NULL,f_125 = NULL,g_125 = NULL,h_125 = NULL,i_125 = NULL,j_125 = NULL,k_125 = NULL;
  g_125 = t;
  t = v_147(t);
  d_125 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_125, h_52, f_52);
  t = w_11(d_125, h_52, f_52, t);
  {
    ATerm g_41 = t;
    int h_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_125 = NULL;
        t = term_i_41;
        l_125 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_125, term_i_41);
        t = v_11(d_125, l_125, t);
        {
          ATerm j_41 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = j_41;
            }
        }
        LocalPopChoice(h_41);
      }
    else
      {
        t = g_41;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_125 = ATgetFirst((ATermList) t);
      f_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, d_125, term_i_41, (ATerm) ATinsert(CheckATermList(f_125), (ATerm) ATinsert(CheckATermList(e_125), h_52)));
  t = lookup_table_0_1(d_125, t);
  k_125 = t;
  t = term_i_41;
  h_125 = t;
  t = (ATerm) ATinsert(CheckATermList(f_125), (ATerm) ATinsert(CheckATermList(e_125), h_52));
  i_125 = t;
  t = k_125;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(h_125, i_125, j_125, t);
  t = g_125;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm n_125 = NULL,o_125 = NULL,p_125 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm k_41 = ATgetArgument(t, 0);
      if(((ATgetType(k_41) == AT_LIST) && !(ATisEmpty(k_41))))
        {
          ATerm l_41 = ATgetFirst((ATermList) k_41);
          if(match_cons(l_41, sym_As_2))
            {
              ATerm m_41 = ATgetArgument(l_41, 0);
              ATerm n_41 = ATgetArgument(l_41, 1);
              if(!(match_cons(n_41, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          n_125 = (ATerm) ATgetNext((ATermList) k_41);
        }
      else
        _fail(t);
      o_125 = ATgetArgument(t, 1);
      p_125 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, n_125, o_125, p_125);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm m_125 = NULL;
  t = filter_1_0(h_11, t);
  m_125 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, m_125);
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm r_126 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, r_126), term_o_41);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_f_41;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL;
  if(match_cons(t, sym__2))
    {
      e_71 = ATgetArgument(t, 0);
      f_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(e_71, f_71, t);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  t = term_p_41;
  return(t);
}
ATerm MatchCons_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm o_126 = NULL,p_126 = NULL,q_126 = NULL;
  o_126 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = o_126;
      t = r_0(t);
      t = map_1_0(i_11, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          p_126 = ATgetArgument(t, 0);
          t = o_126;
          t = p_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((p_126 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
            }
          else
            _fail(t);
          t = r_0(t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              p_126 = ATgetArgument(t, 0);
              t = o_126;
              t = p_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((p_126 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                }
              else
                _fail(t);
              t = r_0(t);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  p_126 = ATgetArgument(t, 0);
                  t = o_126;
                  t = p_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((p_126 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                    }
                  else
                    _fail(t);
                  t = r_0(t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  ATerm c_71 = NULL,d_71 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      p_126 = ATgetArgument(t, 0);
                      q_126 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = o_126;
                  t = p_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((p_126 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      c_71 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_126;
                  t = foldr_3_0(b_12, j_12, l_12, t);
                  d_71 = t;
                  t = c_71;
                  if((d_71 != t))
                    {
                      _fail(t);
                    }
                  t = q_126;
                }
            }
        }
    }
  return(t);
}
static ATerm f_9 (ATerm t_172 (ATerm), ATerm g_107, ATerm d_107, ATerm e_107, ATerm f_107, ATerm t)
{
  ATerm w_126 = NULL,x_126 = NULL;
  t = g_107;
  t = t_172(t);
  w_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_126, e_107);
  t = conc_0_0(t);
  x_126 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, d_107, x_126, f_107);
  return(t);
}
static ATerm g_9 (ATerm z_106, ATerm a_107, ATerm b_107, ATerm t)
{
  ATerm z_126 = NULL;
  t = z_106;
  {
    static ATerm r_12 (ATerm t);
    static ATerm r_12 (ATerm t)
    {
      ATerm a_127 = NULL,b_127 = NULL,c_127 = NULL,d_127 = NULL;
      static ATerm s_12 (ATerm t);
      static ATerm s_12 (ATerm t)
      {
        static ATerm t_12 (ATerm t);
        static ATerm u_12 (ATerm t);
        static ATerm t_12 (ATerm t)
        {
          t = a_107;
          return(t);
        }
        static ATerm u_12 (ATerm t)
        {
          t = b_107;
          return(t);
        }
        t = MatchCons_2_0(t_12, u_12, t);
        return(t);
      }
      if(match_cons(t, sym_Row_3))
        {
          ATerm q_41 = ATgetArgument(t, 0);
          if(((ATgetType(q_41) == AT_LIST) && !(ATisEmpty(q_41))))
            {
              ATerm r_41 = ATgetFirst((ATermList) q_41);
              if(match_cons(r_41, sym_As_2))
                {
                  ATerm s_41 = ATgetArgument(r_41, 0);
                  a_127 = ATgetArgument(r_41, 1);
                }
              else
                _fail(t);
              b_127 = (ATerm) ATgetNext((ATermList) q_41);
            }
          else
            _fail(t);
          c_127 = ATgetArgument(t, 1);
          d_127 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_9(s_12, a_127, b_127, c_127, d_127, t);
      return(t);
    }
    t = filter_1_0(r_12, t);
  }
  z_126 = t;
  t = (ATerm) ATmakeAppl(sym_Alt_3, a_107, b_107, (ATerm) ATmakeAppl(sym_Matrix_1, z_126));
  return(t);
}
ATerm filter_1_0 (ATerm m_159 (ATerm), ATerm t)
{
  ATerm p_127 = NULL,q_127 = NULL,r_127 = NULL;
  p_127 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_127;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_127 = ATgetFirst((ATermList) t);
          r_127 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_41 = t;
        int v_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_71 = NULL,x_71 = NULL,y_71 = NULL,i_17 = NULL;
            t = SSLgetAnnotations(p_127);
            o_71 = t;
            t = q_127;
            t = m_159(t);
            x_71 = t;
            t = r_127;
            t = filter_1_0(m_159, t);
            y_71 = t;
            t = (ATerm) ATinsert(CheckATermList(y_71), x_71);
            i_17 = t;
            t = SSLsetAnnotations(i_17, o_71);
            LocalPopChoice(v_41);
          }
        else
          {
            t = t_41;
            t = r_127;
            t = filter_1_0(m_159, t);
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm v_153 (ATerm), ATerm t)
{
  static ATerm h_128 (ATerm t);
  static ATerm h_128 (ATerm t)
  {
    ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL;
    t = v_153(t);
    e_128 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_128;
      }
    else
      {
        ATerm l_72 = NULL,t_72 = NULL,k_17 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_128 = ATgetFirst((ATermList) t);
            g_128 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_128);
        l_72 = t;
        t = g_128;
        t = h_128(t);
        t_72 = t;
        t = (ATerm) ATinsert(CheckATermList(t_72), f_128);
        k_17 = t;
        t = SSLsetAnnotations(k_17, l_72);
      }
    return(t);
  }
  t = h_128(t);
  return(t);
}
static ATerm v_12 (ATerm t)
{
  t = term_f_41;
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm f_129 = NULL,g_129 = NULL;
  if(match_cons(t, sym__2))
    {
      f_129 = ATgetArgument(t, 0);
      g_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(f_129, g_129, t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = term_p_41;
  return(t);
}
static ATerm y_12 (ATerm t)
{
  ATerm h_129 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm z_41 = ATgetArgument(t, 0);
      if(match_cons(z_41, sym_Off_1))
        {
          h_129 = ATgetArgument(z_41, 0);
        }
      else
        _fail(t);
      {
        ATerm a_42 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, h_129);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm n_128 = NULL,o_128 = NULL,p_128 = NULL,r_128 = NULL,s_128 = NULL,t_128 = NULL;
  n_128 = t;
  if(match_cons(t, sym_Row_3))
    {
      o_128 = ATgetArgument(t, 0);
      {
        ATerm e_42 = ATgetArgument(t, 1);
      }
      {
        ATerm f_42 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = o_128;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_128 = ATgetFirst((ATermList) t);
      {
        ATerm g_42 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = p_128;
  if(match_cons(t, sym_As_2))
    {
      ATerm i_42 = ATgetArgument(t, 0);
      r_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_128;
  if(match_cons(t, sym_Str_1))
    {
      s_128 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, s_128), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          s_128 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, s_128), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              s_128 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, s_128), (ATerm) ATempty);
            }
          else
            {
              ATerm c_129 = NULL,d_129 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  s_128 = ATgetArgument(t, 0);
                  t_128 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_128;
              t = foldr_3_0(v_12, w_12, x_12, t);
              c_129 = t;
              t = t_128;
              t = map_1_0(y_12, t);
              d_129 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, s_128, c_129), d_129);
            }
        }
    }
  return(t);
}
static ATerm z_12 (ATerm t)
{
  ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL;
  m_129 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_129 = ATgetFirst((ATermList) t);
      l_129 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_42 = t;
        int k_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_129 = NULL;
            t = l_129;
            {
              static ATerm a_13 (ATerm t);
              static ATerm a_13 (ATerm t)
              {
                ATerm l_42 = t;
                if((PushChoice() == 0))
                  {
                    if((k_129 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_42;
                  }
                return(t);
              }
              t = filter_1_0(a_13, t);
            }
            p_129 = t;
            t = (ATerm) ATinsert(CheckATermList(p_129), k_129);
            LocalPopChoice(k_42);
          }
        else
          {
            t = j_42;
            t = m_129;
          }
      }
    }
  else
    {
      t = m_129;
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(z_12, t);
  return(t);
}
static ATerm h_131 (ATerm b_130, ATerm t)
{
  ATerm c_130 = NULL;
  t = SSL_explode_string(b_130);
  {
    ATerm m_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm i_131 (ATerm t);
        static ATerm i_131 (ATerm t)
        {
          ATerm s_130 = NULL,t_130 = NULL,u_130 = NULL;
          s_130 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_130 = ATgetFirst((ATermList) t);
              u_130 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm o_42 = t;
            int p_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_73 = NULL,v_73 = NULL,p_17 = NULL;
                t = SSLgetAnnotations(s_130);
                n_73 = t;
                t = u_130;
                t = i_131(t);
                v_73 = t;
                t = (ATerm) ATinsert(CheckATermList(v_73), t_130);
                p_17 = t;
                t = SSLsetAnnotations(p_17, n_73);
                LocalPopChoice(p_42);
              }
            else
              {
                t = o_42;
                {
                  ATerm c_74 = NULL,k_18 = NULL;
                  t = SSLgetAnnotations(s_130);
                  c_74 = t;
                  t = t_130;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, t_130);
                  k_18 = t;
                  t = SSLsetAnnotations(k_18, c_74);
                }
              }
          }
          return(t);
        }
        t = i_131(t);
        LocalPopChoice(n_42);
      }
    else
      {
        t = m_42;
        t = (ATerm) ATempty;
      }
  }
  c_130 = t;
  t = SSL_implode_string(c_130);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm v_130 = NULL,w_130 = NULL,x_130 = NULL,y_130 = NULL,z_130 = NULL,f_131 = NULL;
  f_131 = t;
  {
    ATerm q_42 = t;
    int r_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_130 = ATgetFirst((ATermList) t);
            {
              ATerm s_42 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(r_42);
        t = v_130;
        {
          ATerm t_42 = t;
          int u_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  w_130 = ATgetArgument(t, 0);
                  {
                    ATerm v_42 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm w_42 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(u_42);
              t = w_130;
              {
                ATerm x_42 = t;
                int y_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        x_130 = ATgetFirst((ATermList) t);
                        {
                          ATerm z_42 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(y_42);
                    t = x_130;
                    {
                      ATerm a_43 = t;
                      int b_43 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              y_130 = ATgetArgument(t, 0);
                              {
                                ATerm c_43 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_43);
                          t = y_130;
                          if(match_cons(t, sym_Off_1))
                            {
                              z_130 = ATgetArgument(t, 0);
                              t = z_130;
                            }
                          else
                            {
                              t = h_131(f_131, t);
                            }
                        }
                      else
                        {
                          t = a_43;
                          t = h_131(f_131, t);
                        }
                    }
                  }
                else
                  {
                    t = x_42;
                    t = h_131(f_131, t);
                  }
              }
            }
          else
            {
              t = t_42;
              t = h_131(f_131, t);
            }
        }
      }
    else
      {
        t = q_42;
        t = h_131(f_131, t);
      }
  }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_43 = ATgetArgument(t, 0);
      ATerm e_43 = ATgetArgument(t, 1);
      if(((ATgetType(e_43) != AT_LIST) || !(ATisEmpty(e_43))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm s_131 = NULL,t_131 = NULL,u_131 = NULL;
  if(match_cons(t, sym__2))
    {
      s_131 = ATgetArgument(t, 0);
      {
        ATerm f_43 = ATgetArgument(t, 1);
        if(((ATgetType(f_43) == AT_LIST) && !(ATisEmpty(f_43))))
          {
            t_131 = ATgetFirst((ATermList) f_43);
            u_131 = (ATerm) ATgetNext((ATermList) f_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_131, t_131), (ATerm) ATmakeAppl(sym__2, s_131, u_131));
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm v_131 = NULL,w_131 = NULL;
  if(match_cons(t, sym__2))
    {
      v_131 = ATgetArgument(t, 0);
      w_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_131), v_131);
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm x_131 = NULL,y_131 = NULL,z_131 = NULL;
  if(match_cons(t, sym__2))
    {
      x_131 = ATgetArgument(t, 0);
      {
        ATerm g_43 = ATgetArgument(t, 1);
        if(match_cons(g_43, sym__2))
          {
            y_131 = ATgetArgument(g_43, 0);
            z_131 = ATgetArgument(g_43, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_9(x_131, y_131, z_131, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_h_43;
  return(t);
}
static ATerm k_9 (ATerm m_108, ATerm t)
{
  ATerm l_131 = NULL,m_131 = NULL,n_131 = NULL,o_131 = NULL,p_131 = NULL,q_131 = NULL,r_131 = NULL;
  t = m_108;
  t = get_path_0_0(t);
  l_131 = t;
  t = m_108;
  t = outedges_0_0(t);
  m_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_108, m_131);
  t = genzip_4_0(c_13, d_13, n_13, q_13, t);
  n_131 = t;
  t = m_108;
  t = default_state_0_0(t);
  o_131 = t;
  t = new_0_0(t);
  p_131 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, m_108);
  q_131 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_43, p_131);
  r_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, m_108), (ATerm) ATmakeAppl(sym_Defined_2, term_i_43, p_131));
  t = d_9(r_13, q_131, r_131, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, p_131, (ATerm)ATmakeAppl(sym_Var_1, l_131), n_131, o_131);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm b_132 = NULL,c_132 = NULL,d_132 = NULL,e_132 = NULL,f_132 = NULL,g_132 = NULL,h_132 = NULL,i_132 = NULL,j_132 = NULL,k_132 = NULL,l_132 = NULL,m_132 = NULL,n_132 = NULL,o_132 = NULL,r_18 = NULL,q_18 = NULL,p_18 = NULL;
  o_132 = t;
  if(match_cons(t, sym_Row_3))
    {
      c_132 = ATgetArgument(t, 0);
      d_132 = ATgetArgument(t, 1);
      e_132 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_132);
  b_132 = t;
  t = c_132;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_132 = ATgetFirst((ATermList) t);
      h_132 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_132);
  f_132 = t;
  t = g_132;
  if(match_cons(t, sym_As_2))
    {
      k_132 = ATgetArgument(t, 0);
      l_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_132);
  j_132 = t;
  t = l_132;
  {
    ATerm j_43 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Wld_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_43;
      }
  }
  m_132 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, k_132, m_132);
  p_18 = t;
  t = SSLsetAnnotations(p_18, j_132);
  n_132 = t;
  t = (ATerm) ATinsert(CheckATermList(h_132), n_132);
  q_18 = t;
  t = SSLsetAnnotations(q_18, f_132);
  i_132 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, i_132, d_132, e_132);
  r_18 = t;
  t = SSLsetAnnotations(r_18, b_132);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm p_132 = NULL,q_132 = NULL,r_132 = NULL,s_132 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      p_132 = ATgetArgument(t, 0);
      {
        ATerm k_43 = ATgetArgument(t, 1);
        if(((ATgetType(k_43) == AT_LIST) && !(ATisEmpty(k_43))))
          {
            q_132 = ATgetFirst((ATermList) k_43);
            r_132 = (ATerm) ATgetNext((ATermList) k_43);
          }
        else
          _fail(t);
      }
      s_132 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(p_132), q_132), r_132, s_132);
  return(t);
}
static ATerm m_9 (ATerm c_108, ATerm t)
{
  ATerm a_132 = NULL;
  t = c_108;
  {
    ATerm l_43 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(s_13, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_43;
      }
  }
  t = c_108;
  t = map_1_0(t_13, t);
  a_132 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, a_132);
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm u_132 = NULL,v_132 = NULL,w_132 = NULL,x_132 = NULL,y_132 = NULL,z_132 = NULL,a_133 = NULL,b_133 = NULL,c_133 = NULL,d_133 = NULL,e_133 = NULL,f_133 = NULL,g_133 = NULL,j_19 = NULL,h_19 = NULL,b_19 = NULL;
  g_133 = t;
  if(match_cons(t, sym_Row_3))
    {
      v_132 = ATgetArgument(t, 0);
      w_132 = ATgetArgument(t, 1);
      x_132 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_133);
  u_132 = t;
  t = w_132;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_133 = ATgetFirst((ATermList) t);
      b_133 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_132);
  z_132 = t;
  t = a_133;
  if(match_cons(t, sym_As_2))
    {
      d_133 = ATgetArgument(t, 0);
      e_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_133);
  c_133 = t;
  t = e_133;
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, d_133, e_133);
  b_19 = t;
  t = SSLsetAnnotations(b_19, c_133);
  f_133 = t;
  t = (ATerm) ATinsert(CheckATermList(b_133), f_133);
  h_19 = t;
  t = SSLsetAnnotations(h_19, z_132);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_43 = ATgetFirst((ATermList) t);
      y_132 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, v_132, y_132, x_132);
  j_19 = t;
  t = SSLsetAnnotations(j_19, u_132);
  return(t);
}
static ATerm o_9 (ATerm a_108, ATerm t)
{
  ATerm t_132 = NULL;
  t = a_108;
  t = map_1_0(u_13, t);
  t_132 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, t_132);
  return(t);
}
ATerm repeat_2_0 (ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t)
{
  static ATerm h_133 (ATerm t);
  static ATerm h_133 (ATerm t)
  {
    ATerm o_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_141(t);
        t = h_133(t);
        LocalPopChoice(r_43);
      }
    else
      {
        t = o_43;
        t = u_141(t);
      }
    return(t);
  }
  t = h_133(t);
  return(t);
}
static ATerm q_9 (ATerm q_53, ATerm r_53, ATerm t)
{
  ATerm i_133 = NULL,j_133 = NULL;
  j_133 = t;
  {
    ATerm t_43 = t;
    int u_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_53, r_53);
        t = v_11(q_53, r_53, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_43 = ATgetFirst((ATermList) t);
            i_133 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_43);
        {
          ATerm m_133 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, q_53, r_53, i_133);
          t = lookup_table_0_1(q_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              m_133 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_11(r_53, i_133, m_133, t);
          t = (ATerm) ATmakeAppl(sym__3, q_53, r_53, i_133);
        }
      }
    else
      {
        t = t_43;
        {
          ATerm o_133 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, q_53, r_53);
          t = lookup_table_0_1(q_53, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_133 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_11(r_53, o_133, t);
          t = (ATerm) ATmakeAppl(sym__2, q_53, r_53);
        }
      }
  }
  t = j_133;
  return(t);
}
ATerm end_scope_1_0 (ATerm s_147 (ATerm), ATerm t)
{
  ATerm q_133 = NULL,r_133 = NULL,s_133 = NULL,t_133 = NULL,u_133 = NULL,v_133 = NULL,w_133 = NULL;
  t_133 = t;
  t = s_147(t);
  s_133 = t;
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_133 = NULL;
        t = term_i_41;
        x_133 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_133, term_i_41);
        t = v_11(s_133, x_133, t);
        {
          ATerm c_44 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_44;
            }
        }
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_133 = ATgetFirst((ATermList) t);
      q_133 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_133, term_i_41, q_133);
  t = lookup_table_0_1(s_133, t);
  w_133 = t;
  t = term_i_41;
  u_133 = t;
  t = w_133;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(u_133, q_133, v_133, t);
  t = r_133;
  {
    static ATerm v_13 (ATerm t);
    static ATerm v_13 (ATerm t)
    {
      ATerm y_133 = NULL;
      y_133 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_133, y_133);
      t = q_9(s_133, y_133, t);
      return(t);
    }
    t = map_1_0(v_13, t);
  }
  t = t_133;
  return(t);
}
ATerm restore_always_2_0 (ATerm e_139 (ATerm), ATerm f_139 (ATerm), ATerm t)
{
  ATerm d_44 = t;
  int e_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_139(t);
      t = f_139(t);
      LocalPopChoice(e_44);
    }
  else
    {
      t = d_44;
      t = f_139(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_147 (ATerm), ATerm t)
{
  ATerm a_134 = NULL,b_134 = NULL,c_134 = NULL,d_134 = NULL,e_134 = NULL,f_134 = NULL,g_134 = NULL;
  b_134 = t;
  t = r_147(t);
  a_134 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_134, term_i_41);
  {
    ATerm f_44 = t;
    int g_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_135 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm h_44 = ATgetArgument(t, 0);
            ATerm i_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_i_41;
        a_135 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_134, term_i_41);
        t = v_11(a_134, a_135, t);
        LocalPopChoice(g_44);
      }
    else
      {
        t = f_44;
        t = (ATerm) ATempty;
      }
  }
  c_134 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_134, term_i_41, (ATerm) ATinsert(CheckATermList(c_134), (ATerm) ATempty));
  t = lookup_table_0_1(a_134, t);
  g_134 = t;
  t = term_i_41;
  d_134 = t;
  t = (ATerm) ATinsert(CheckATermList(c_134), (ATerm) ATempty);
  e_134 = t;
  t = g_134;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(d_134, e_134, f_134, t);
  t = b_134;
  return(t);
}
ATerm scope_2_0 (ATerm t_147 (ATerm), ATerm u_147 (ATerm), ATerm t)
{
  static ATerm w_13 (ATerm t);
  static ATerm w_13 (ATerm t)
  {
    t = end_scope_1_0(t_147, t);
    return(t);
  }
  t = begin_scope_1_0(t_147, t);
  t = restore_always_2_0(u_147, w_13, t);
  return(t);
}
ATerm at_end_1_0 (ATerm c_153 (ATerm), ATerm t)
{
  static ATerm x_135 (ATerm t);
  static ATerm x_135 (ATerm t)
  {
    ATerm s_135 = NULL,v_135 = NULL,w_135 = NULL;
    w_135 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_135 = ATgetFirst((ATermList) t);
        v_135 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm l_74 = NULL,o_74 = NULL,n_19 = NULL;
          t = SSLgetAnnotations(w_135);
          l_74 = t;
          t = v_135;
          t = x_135(t);
          o_74 = t;
          t = (ATerm) ATinsert(CheckATermList(o_74), s_135);
          n_19 = t;
          t = SSLsetAnnotations(n_19, l_74);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_135;
        t = c_153(t);
      }
    return(t);
  }
  t = x_135(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_135 = NULL,d_135 = NULL,e_135 = NULL;
  c_135 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_135;
    }
  else
    {
      static ATerm x_13 (ATerm t);
      static ATerm x_13 (ATerm t)
      {
        t = not_null(e_135);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_135 = ATgetFirst((ATermList) t);
          if(((e_135 != NULL) && (e_135 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_135 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_135;
      t = at_end_1_0(x_13, t);
    }
  return(t);
}
static ATerm j_136 (ATerm b_136, ATerm t)
{
  ATerm c_136 = NULL;
  t = SSL_explode_term(b_136);
  if(match_cons(t, sym__2))
    {
      ATerm j_44 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_44) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      c_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_136;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm e_136 = NULL,f_136 = NULL,g_136 = NULL;
  g_136 = t;
  if(match_cons(t, sym__2))
    {
      e_136 = ATgetArgument(t, 0);
      f_136 = ATgetArgument(t, 1);
      {
        ATerm k_44 = t;
        int l_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm y_13 (ATerm t);
            static ATerm y_13 (ATerm t)
            {
              t = f_136;
              return(t);
            }
            t = e_136;
            t = at_end_1_0(y_13, t);
            LocalPopChoice(l_44);
          }
        else
          {
            t = k_44;
            t = j_136(g_136, t);
          }
      }
    }
  else
    {
      t = j_136(g_136, t);
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm u_137 = NULL;
  if(match_cons(t, sym__2))
    {
      u_137 = ATgetArgument(t, 0);
      if((u_137 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm c_138 = NULL;
  if(match_cons(t, sym__2))
    {
      c_138 = ATgetArgument(t, 0);
      if((c_138 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm j_138 = NULL;
  if(match_cons(t, sym__2))
    {
      j_138 = ATgetArgument(t, 0);
      if((j_138 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm r_138 = NULL;
  if(match_cons(t, sym__2))
    {
      r_138 = ATgetArgument(t, 0);
      if((r_138 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm z_138 = NULL;
  if(match_cons(t, sym__2))
    {
      z_138 = ATgetArgument(t, 0);
      if((z_138 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm i_139 = NULL;
  if(match_cons(t, sym__2))
    {
      i_139 = ATgetArgument(t, 0);
      if((i_139 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm MatrixMerge_0_0 (ATerm t)
{
  ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL,d_137 = NULL,f_137 = NULL,g_137 = NULL,h_137 = NULL,i_137 = NULL,j_137 = NULL,k_137 = NULL,l_137 = NULL,m_137 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      f_137 = ATgetArgument(t, 0);
      m_137 = ATgetArgument(t, 1);
      t = f_137;
      if(match_cons(t, sym_Matrix_2))
        {
          g_137 = ATgetArgument(t, 0);
          h_137 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_137;
      if(match_cons(t, sym_Choice_2))
        {
          c_137 = ATgetArgument(t, 0);
          d_137 = ATgetArgument(t, 1);
          {
            ATerm s_137 = NULL,t_137 = NULL;
            t = c_137;
            if(match_cons(t, sym_Matrix_2))
              {
                a_137 = ATgetArgument(t, 0);
                b_137 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, g_137, a_137);
            t = y_10(z_13, g_137, a_137, t);
            s_137 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_137, b_137);
            t = conc_0_0(t);
            t_137 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, s_137, t_137), d_137);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              c_137 = ATgetArgument(t, 0);
              d_137 = ATgetArgument(t, 1);
              {
                ATerm a_138 = NULL,b_138 = NULL;
                t = c_137;
                if(match_cons(t, sym_Matrix_2))
                  {
                    a_137 = ATgetArgument(t, 0);
                    b_137 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, g_137, a_137);
                t = y_10(a_14, g_137, a_137, t);
                a_138 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_137, b_137);
                t = conc_0_0(t);
                b_138 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, a_138, b_138), d_137);
              }
            }
          else
            {
              ATerm h_138 = NULL,i_138 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  c_137 = ATgetArgument(t, 0);
                  d_137 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, g_137, c_137);
              t = y_10(b_14, g_137, c_137, t);
              h_138 = t;
              t = (ATerm) ATmakeAppl(sym__2, h_137, d_137);
              t = conc_0_0(t);
              i_138 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, h_138, i_138);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          f_137 = ATgetArgument(t, 0);
          m_137 = ATgetArgument(t, 1);
          t = f_137;
          if(match_cons(t, sym_Matrix_2))
            {
              g_137 = ATgetArgument(t, 0);
              h_137 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_137;
          if(match_cons(t, sym_LChoice_2))
            {
              c_137 = ATgetArgument(t, 0);
              d_137 = ATgetArgument(t, 1);
              {
                ATerm p_138 = NULL,q_138 = NULL;
                t = c_137;
                if(match_cons(t, sym_Matrix_2))
                  {
                    a_137 = ATgetArgument(t, 0);
                    b_137 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, g_137, a_137);
                t = y_10(d_14, g_137, a_137, t);
                p_138 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_137, b_137);
                t = conc_0_0(t);
                q_138 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, p_138, q_138), d_137);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  c_137 = ATgetArgument(t, 0);
                  d_137 = ATgetArgument(t, 1);
                  {
                    ATerm x_138 = NULL,y_138 = NULL;
                    t = c_137;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        a_137 = ATgetArgument(t, 0);
                        b_137 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, g_137, a_137);
                    t = y_10(e_14, g_137, a_137, t);
                    x_138 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_137, b_137);
                    t = conc_0_0(t);
                    y_138 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, x_138, y_138), d_137);
                  }
                }
              else
                {
                  ATerm g_139 = NULL,h_139 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      c_137 = ATgetArgument(t, 0);
                      d_137 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, g_137, c_137);
                  t = y_10(g_14, g_137, c_137, t);
                  g_139 = t;
                  t = (ATerm) ATmakeAppl(sym__2, h_137, d_137);
                  t = conc_0_0(t);
                  h_139 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, g_139, h_139);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              f_137 = ATgetArgument(t, 0);
              m_137 = ATgetArgument(t, 1);
              {
                ATerm m_139 = NULL;
                t = m_137;
                if(match_cons(t, sym_Matrix_2))
                  {
                    c_137 = ATgetArgument(t, 0);
                    d_137 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_137;
                {
                  static ATerm h_14 (ATerm t);
                  static ATerm h_14 (ATerm t)
                  {
                    ATerm n_139 = NULL,o_139 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        n_139 = ATgetArgument(t, 0);
                        o_139 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, n_139, (ATerm) ATmakeAppl(sym_Scope_2, f_137, o_139));
                    return(t);
                  }
                  t = map_1_0(h_14, t);
                }
                m_139 = t;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, c_137, m_139);
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  f_137 = ATgetArgument(t, 0);
                  m_137 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_137;
              if(match_cons(t, sym_Matrix_2))
                {
                  g_137 = ATgetArgument(t, 0);
                  h_137 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_137;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_137 = ATgetFirst((ATermList) t);
                  l_137 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = i_137;
              if(match_cons(t, sym_Row_2))
                {
                  j_137 = ATgetArgument(t, 0);
                  k_137 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = l_137;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, g_137, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, j_137, (ATerm) ATmakeAppl(sym_Seq_2, k_137, m_137))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm u_135 (ATerm), ATerm t)
{
  static ATerm i_14 (ATerm t);
  static ATerm i_14 (ATerm t)
  {
    t = bottomup_1_0(u_135, t);
    return(t);
  }
  t = SRTS_all(i_14, t);
  t = u_135(t);
  return(t);
}
static ATerm x_10 (ATerm i_155 (ATerm), ATerm j_155 (ATerm), ATerm i_73, ATerm h_73, ATerm t)
{
  t = j_155(t);
  {
    static ATerm j_14 (ATerm t);
    static ATerm j_14 (ATerm t)
    {
      ATerm t_139 = NULL;
      t_139 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_73, t_139);
      t = i_155(t);
      return(t);
    }
    t = fetch_1_0(j_14, t);
  }
  t = h_73;
  return(t);
}
static ATerm y_10 (ATerm f_155 (ATerm), ATerm e_73, ATerm d_73, ATerm t)
{
  static ATerm j_140 (ATerm t);
  static ATerm j_140 (ATerm t)
  {
    ATerm e_140 = NULL,f_140 = NULL,g_140 = NULL;
    e_140 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_73;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_140 = ATgetFirst((ATermList) t);
            g_140 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_44 = t;
          int o_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_140;
              {
                static ATerm k_14 (ATerm t);
                static ATerm k_14 (ATerm t)
                {
                  t = d_73;
                  return(t);
                }
                t = x_10(f_155, k_14, f_140, g_140, t);
              }
              t = j_140(t);
              LocalPopChoice(o_44);
            }
          else
            {
              t = n_44;
              {
                ATerm w_74 = NULL,z_74 = NULL,p_19 = NULL;
                t = SSLgetAnnotations(e_140);
                w_74 = t;
                t = g_140;
                t = j_140(t);
                z_74 = t;
                t = (ATerm) ATinsert(CheckATermList(z_74), f_140);
                p_19 = t;
                t = SSLsetAnnotations(p_19, w_74);
              }
            }
        }
      }
    return(t);
  }
  t = e_73;
  t = j_140(t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_158 (ATerm), ATerm l_158 (ATerm), ATerm m_158 (ATerm), ATerm t)
{
  ATerm r_140 = NULL,s_140 = NULL,t_140 = NULL;
  r_140 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_140;
      t = k_158(t);
    }
  else
    {
      ATerm x_140 = NULL,y_140 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_140 = ATgetFirst((ATermList) t);
          t_140 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_140;
      t = m_158(t);
      x_140 = t;
      t = t_140;
      t = foldr_3_0(k_158, l_158, m_158, t);
      y_140 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_140, y_140);
      t = l_158(t);
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm c_157 (ATerm), ATerm d_157 (ATerm), ATerm t)
{
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_141 = NULL;
      t = c_157(t);
      b_141 = t;
      t = (ATerm) ATinsert(ATempty, b_141);
      LocalPopChoice(q_44);
    }
  else
    {
      t = p_44;
      {
        ATerm p_75 = NULL,q_75 = NULL;
        static ATerm m_14 (ATerm t);
        static ATerm m_14 (ATerm t)
        {
          t = collect_om_2_0(c_157, d_157, t);
          return(t);
        }
        q_75 = t;
        t = SSL_explode_term(q_75);
        if(match_cons(t, sym__2))
          {
            ATerm r_44 = ATgetArgument(t, 0);
            p_75 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_75;
        t = foldr_3_0(l_14, d_157, m_14, t);
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm h_141 = NULL,k_141 = NULL,l_141 = NULL,m_141 = NULL,n_141 = NULL;
  if(match_cons(t, sym_As_2))
    {
      k_141 = ATgetArgument(t, 0);
      m_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_141;
  if(match_cons(t, sym_Var_1))
    {
      l_141 = ATgetArgument(t, 0);
      t = m_141;
      if(match_cons(t, sym_As_2))
        {
          n_141 = ATgetArgument(t, 0);
          {
            ATerm s_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_141;
      if(match_cons(t, sym_Off_1))
        {
          h_141 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, l_141), (ATerm) ATmakeAppl(sym_Var_1, h_141)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          l_141 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_141;
      if(match_cons(t, sym_Var_1))
        {
          n_141 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, n_141), (ATerm) ATmakeAppl(sym_Var_1, l_141)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm i_142 = NULL,j_142 = NULL,q_142 = NULL,r_142 = NULL,s_142 = NULL,t_142 = NULL,u_142 = NULL;
  q_142 = t;
  if(match_cons(t, sym_As_2))
    {
      r_142 = ATgetArgument(t, 0);
      t_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_142;
  {
    ATerm t_44 = t;
    int u_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm v_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_44);
        t = t_142;
        if(match_cons(t, sym_As_2))
          {
            u_142 = ATgetArgument(t, 0);
            j_142 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_142;
        if(match_cons(t, sym_Off_1))
          {
            i_142 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, i_142), j_142);
      }
    else
      {
        t = t_44;
        if(match_cons(t, sym_Off_1))
          {
            s_142 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_142;
        if(match_cons(t, sym_Var_1))
          {
            ATerm w_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_142;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_142;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_44 = ATgetFirst((ATermList) t);
                ATerm y_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_142;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, s_142), term_o_41);
      }
  }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_40;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm m_143 = NULL,n_143 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_143 = ATgetFirst((ATermList) t);
      n_143 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_143, n_143);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm o_143 = NULL,p_143 = NULL,q_143 = NULL,r_143 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_44 = ATgetArgument(t, 0);
      if(match_cons(z_44, sym__2))
        {
          o_143 = ATgetArgument(z_44, 0);
          p_143 = ATgetArgument(z_44, 1);
        }
      else
        _fail(t);
      {
        ATerm b_45 = ATgetArgument(t, 1);
        if(match_cons(b_45, sym__2))
          {
            q_143 = ATgetArgument(b_45, 0);
            r_143 = ATgetArgument(b_45, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_143), o_143), (ATerm) ATinsert(CheckATermList(r_143), p_143));
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm s_143 = NULL,t_143 = NULL;
  if(match_cons(t, sym__2))
    {
      s_143 = ATgetArgument(t, 0);
      t_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(z_14, s_143, t_143, t);
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm u_143 = NULL;
  if(match_cons(t, sym__2))
    {
      u_143 = ATgetArgument(t, 0);
      if((u_143 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm w_143 = NULL;
  if(match_cons(t, sym__2))
    {
      w_143 = ATgetArgument(t, 0);
      if((w_143 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm t_156 (ATerm), ATerm u_156 (ATerm), ATerm t)
{
  ATerm y_142 = NULL,z_142 = NULL,a_143 = NULL,b_143 = NULL,c_143 = NULL,d_143 = NULL,e_143 = NULL,f_143 = NULL,g_143 = NULL,h_143 = NULL,j_143 = NULL,k_143 = NULL;
  j_143 = t;
  k_143 = t;
  t = SSL_explode_term(k_143);
  if(match_cons(t, sym__2))
    {
      a_143 = ATgetArgument(t, 0);
      y_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_143);
  c_143 = t;
  t = y_142;
  t = genzip_4_0(p_14, u_14, v_14, t_156, t);
  if(match_cons(t, sym__2))
    {
      b_143 = ATgetArgument(t, 0);
      z_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(a_143, b_143);
  h_143 = t;
  t = SSLsetAnnotations(h_143, c_143);
  t = u_156(t);
  if(match_cons(t, sym__2))
    {
      d_143 = ATgetArgument(t, 0);
      e_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_142;
  t = foldr_2_0(x_14, y_14, t);
  g_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_143, g_143);
  t = y_10(a_15, e_143, g_143, t);
  f_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_143, f_143);
  return(t);
}
ATerm collect_split_2_0 (ATerm o_156 (ATerm), ATerm p_156 (ATerm), ATerm t)
{
  static ATerm d_144 (ATerm t);
  static ATerm d_144 (ATerm t)
  {
    static ATerm b_15 (ATerm t);
    static ATerm b_15 (ATerm t)
    {
      ATerm y_143 = NULL,z_143 = NULL,a_144 = NULL;
      a_144 = t;
      {
        ATerm c_45 = t;
        int d_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_156(t);
            LocalPopChoice(d_45);
          }
        else
          {
            t = c_45;
          }
      }
      y_143 = t;
      t = a_144;
      {
        ATerm e_45 = t;
        int f_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_156(t);
            LocalPopChoice(f_45);
          }
        else
          {
            t = e_45;
            t = (ATerm) ATempty;
          }
      }
      z_143 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_143, z_143);
      return(t);
    }
    t = CollectSplit_2_0(d_144, b_15, t);
    return(t);
  }
  t = d_144(t);
  return(t);
}
ATerm genzip_4_0 (ATerm k_140 (ATerm), ATerm l_140 (ATerm), ATerm m_140 (ATerm), ATerm n_140 (ATerm), ATerm t)
{
  static ATerm k_144 (ATerm t);
  static ATerm k_144 (ATerm t)
  {
    ATerm g_45 = t;
    int h_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_140(t);
        LocalPopChoice(h_45);
      }
    else
      {
        t = g_45;
        {
          ATerm e_144 = NULL,f_144 = NULL,g_144 = NULL,h_144 = NULL,i_144 = NULL,j_144 = NULL,t_19 = NULL;
          t = l_140(t);
          j_144 = t;
          if(match_cons(t, sym__2))
            {
              f_144 = ATgetArgument(t, 0);
              g_144 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_144);
          e_144 = t;
          t = f_144;
          t = n_140(t);
          h_144 = t;
          t = g_144;
          t = k_144(t);
          i_144 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_144, i_144);
          t_19 = t;
          t = SSLsetAnnotations(t_19, e_144);
          t = m_140(t);
        }
      }
    return(t);
  }
  t = k_144(t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_45 = ATgetArgument(t, 0);
      ATerm j_45 = ATgetArgument(t, 1);
      if(((ATgetType(j_45) != AT_LIST) || !(ATisEmpty(j_45))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm n_144 = NULL,o_144 = NULL,p_144 = NULL,q_144 = NULL,r_144 = NULL;
  if(match_cons(t, sym__2))
    {
      n_144 = ATgetArgument(t, 0);
      {
        ATerm l_45 = ATgetArgument(t, 1);
        if(((ATgetType(l_45) == AT_LIST) && !(ATisEmpty(l_45))))
          {
            o_144 = ATgetFirst((ATermList) l_45);
            p_144 = (ATerm) ATgetNext((ATermList) l_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_p_41;
  r_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_144, term_p_41);
  t = r_11(n_144, r_144, t);
  q_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_144, o_144), (ATerm) ATmakeAppl(sym__2, q_144, p_144));
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm s_144 = NULL,t_144 = NULL;
  if(match_cons(t, sym__2))
    {
      s_144 = ATgetArgument(t, 0);
      t_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_144), s_144);
  return(t);
}
ATerm nzip0_1_0 (ATerm v_140 (ATerm), ATerm t)
{
  ATerm l_144 = NULL;
  l_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_41, l_144);
  t = genzip_4_0(c_15, h_15, i_15, v_140, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm y_144 = NULL,c_145 = NULL,d_145 = NULL,e_145 = NULL,f_145 = NULL,g_145 = NULL;
  if(match_cons(t, sym_As_2))
    {
      c_145 = ATgetArgument(t, 0);
      e_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_145;
  if(match_cons(t, sym_Off_1))
    {
      d_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_145;
  {
    ATerm m_45 = t;
    int n_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm o_45 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_45);
        {
          ATerm p_45 = t;
          int q_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm j_15 (ATerm t);
              static ATerm j_15 (ATerm t)
              {
                ATerm j_145 = NULL,k_145 = NULL;
                if(match_cons(t, sym__2))
                  {
                    j_145 = ATgetArgument(t, 0);
                    k_145 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(d_145), j_145)), k_145);
                return(t);
              }
              t = e_145;
              t = nzip0_1_0(j_15, t);
              LocalPopChoice(q_45);
            }
          else
            {
              t = p_45;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, d_145), term_o_41);
            }
        }
      }
    else
      {
        t = m_45;
        if(match_cons(t, sym_As_2))
          {
            f_145 = ATgetArgument(t, 0);
            g_145 = ATgetArgument(t, 1);
            t = f_145;
            if(match_cons(t, sym_Var_1))
              {
                y_144 = ATgetArgument(t, 0);
                {
                  ATerm r_45 = t;
                  int s_45 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm n_15 (ATerm t);
                      static ATerm n_15 (ATerm t)
                      {
                        ATerm o_145 = NULL,p_145 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            o_145 = ATgetArgument(t, 0);
                            p_145 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(d_145), o_145)), p_145);
                        return(t);
                      }
                      t = e_145;
                      t = nzip0_1_0(n_15, t);
                      LocalPopChoice(s_45);
                    }
                  else
                    {
                      t = r_45;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, y_144), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, d_145), g_145));
                    }
                }
              }
            else
              {
                static ATerm s_15 (ATerm t);
                static ATerm s_15 (ATerm t)
                {
                  ATerm v_145 = NULL,w_145 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      v_145 = ATgetArgument(t, 0);
                      w_145 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(d_145), v_145)), w_145);
                  return(t);
                }
                t = e_145;
                t = nzip0_1_0(s_15, t);
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                f_145 = ATgetArgument(t, 0);
                g_145 = ATgetArgument(t, 1);
                {
                  ATerm t_45 = t;
                  int u_45 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm u_15 (ATerm t);
                      static ATerm u_15 (ATerm t)
                      {
                        ATerm z_145 = NULL,a_146 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            z_145 = ATgetArgument(t, 0);
                            a_146 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(d_145), z_145)), a_146);
                        return(t);
                      }
                      t = e_145;
                      t = nzip0_1_0(u_15, t);
                      LocalPopChoice(u_45);
                    }
                  else
                    {
                      t = t_45;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, d_145), (ATerm) ATmakeAppl(sym_Op_2, f_145, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, d_145), g_145)));
                    }
                }
              }
            else
              {
                static ATerm w_15 (ATerm t);
                static ATerm w_15 (ATerm t)
                {
                  ATerm g_146 = NULL,h_146 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      g_146 = ATgetArgument(t, 0);
                      h_146 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(d_145), g_146)), h_146);
                  return(t);
                }
                t = e_145;
                t = nzip0_1_0(w_15, t);
              }
          }
      }
  }
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm q_146 = NULL,r_146 = NULL,s_146 = NULL;
  s_146 = t;
  if(match_cons(t, sym_As_2))
    {
      q_146 = ATgetArgument(t, 0);
      r_146 = ATgetArgument(t, 1);
      t = q_146;
      if(match_cons(t, sym_Wld_0))
        {
          t = r_146;
        }
      else
        {
          t = s_146;
        }
    }
  else
    {
      t = s_146;
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm z_146 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      z_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_146;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm a_147 = NULL,b_147 = NULL;
  if(match_cons(t, sym__2))
    {
      a_147 = ATgetArgument(t, 0);
      b_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_10(c_16, a_147, b_147, t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm c_147 = NULL;
  if(match_cons(t, sym__2))
    {
      c_147 = ATgetArgument(t, 0);
      if((c_147 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm term_to_matrix_0_0 (ATerm t)
{
  ATerm m_146 = NULL,n_146 = NULL,o_146 = NULL,p_146 = NULL;
  p_146 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_x_45, (ATerm) ATinsert(ATempty, p_146));
  t = topdown_1_0(x_15, t);
  t = topdown_1_0(z_15, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      m_146 = ATgetArgument(t, 0);
      n_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_146;
  t = collect_om_2_0(a_16, b_16, t);
  o_146 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, o_146, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, m_146, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_146), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_f_41)))))));
  return(t);
}
static ATerm d_16 (ATerm t)
{
  t = repeat_2_0(e_16, _id, t);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      LocalPopChoice(z_45);
    }
  else
    {
      t = y_45;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm a_46 = t;
  int b_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm o_149 (ATerm t);
      static ATerm o_149 (ATerm t)
      {
        ATerm c_46 = t;
        int e_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_148 = NULL,q_148 = NULL,r_148 = NULL;
            p_148 = t;
            if(match_cons(t, sym_Choice_2))
              {
                q_148 = ATgetArgument(t, 0);
                r_148 = ATgetArgument(t, 1);
                {
                  ATerm w_76 = NULL,a_77 = NULL,b_77 = NULL,y_19 = NULL;
                  t = SSLgetAnnotations(p_148);
                  w_76 = t;
                  t = q_148;
                  t = o_149(t);
                  a_77 = t;
                  t = r_148;
                  t = o_149(t);
                  b_77 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, a_77, b_77);
                  y_19 = t;
                  t = SSLsetAnnotations(y_19, w_76);
                }
              }
            else
              {
                ATerm j_77 = NULL,s_77 = NULL,t_77 = NULL,e_20 = NULL;
                if(match_cons(t, sym_LChoice_2))
                  {
                    q_148 = ATgetArgument(t, 0);
                    r_148 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_148);
                j_77 = t;
                t = q_148;
                t = o_149(t);
                s_77 = t;
                t = r_148;
                t = o_149(t);
                t_77 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, s_77, t_77);
                e_20 = t;
                t = SSLsetAnnotations(e_20, j_77);
              }
            LocalPopChoice(e_46);
          }
        else
          {
            t = c_46;
            {
              static ATerm r_149 (ATerm t);
              static ATerm r_149 (ATerm t)
              {
                ATerm f_46 = t;
                int g_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm j_149 = NULL,k_149 = NULL,l_149 = NULL;
                    k_149 = t;
                    if(match_cons(t, sym_Seq_2))
                      {
                        l_149 = ATgetArgument(t, 0);
                        j_149 = ATgetArgument(t, 1);
                        {
                          ATerm m_78 = NULL,p_78 = NULL,s_78 = NULL,f_20 = NULL;
                          t = SSLgetAnnotations(k_149);
                          m_78 = t;
                          t = l_149;
                          t = r_149(t);
                          p_78 = t;
                          t = j_149;
                          t = match_to_matrix_0_0(t);
                          s_78 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_78, s_78);
                          f_20 = t;
                          t = SSLsetAnnotations(f_20, m_78);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            l_149 = ATgetArgument(t, 0);
                            j_149 = ATgetArgument(t, 1);
                            {
                              ATerm m_79 = NULL,p_79 = NULL,i_20 = NULL;
                              t = SSLgetAnnotations(k_149);
                              m_79 = t;
                              t = j_149;
                              t = r_149(t);
                              p_79 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, l_149, p_79);
                              i_20 = t;
                              t = SSLsetAnnotations(i_20, m_79);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                l_149 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = l_149;
                            t = term_to_matrix_0_0(t);
                          }
                      }
                    LocalPopChoice(g_46);
                  }
                else
                  {
                    t = f_46;
                    t = SRTS_all(match_to_matrix_0_0, t);
                  }
                return(t);
              }
              t = r_149(t);
            }
          }
        return(t);
      }
      ATerm h_46 = t;
      int i_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_147 = NULL,l_147 = NULL,m_147 = NULL,n_147 = NULL,v_19 = NULL;
          n_147 = t;
          if(match_cons(t, sym_Choice_2))
            {
              l_147 = ATgetArgument(t, 0);
              m_147 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_147);
          k_147 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, l_147, m_147);
          v_19 = t;
          t = SSLsetAnnotations(v_19, k_147);
          LocalPopChoice(i_46);
        }
      else
        {
          t = h_46;
          {
            ATerm o_147 = NULL,p_147 = NULL,q_147 = NULL,w_147 = NULL,w_19 = NULL;
            w_147 = t;
            if(match_cons(t, sym_LChoice_2))
              {
                p_147 = ATgetArgument(t, 0);
                q_147 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_147);
            o_147 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, p_147, q_147);
            w_19 = t;
            t = SSLsetAnnotations(w_19, o_147);
          }
        }
      t = o_149(t);
      LocalPopChoice(b_46);
    }
  else
    {
      t = a_46;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  t = bottomup_1_0(d_16, t);
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = term_h_43;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_149 = NULL,x_149 = NULL,y_149 = NULL;
      w_149 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          x_149 = ATgetArgument(t, 0);
          {
            ATerm l_46 = t;
            int m_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_150 = NULL;
                t = x_149;
                t = map_1_0(i_16, t);
                a_150 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, a_150);
                LocalPopChoice(m_46);
              }
            else
              {
                t = l_46;
                {
                  ATerm n_46 = t;
                  int o_46 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_149;
                      t = o_9(x_149, t);
                      LocalPopChoice(o_46);
                    }
                  else
                    {
                      t = n_46;
                      {
                        ATerm p_46 = t;
                        int q_46 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = w_149;
                            t = m_9(x_149, t);
                            LocalPopChoice(q_46);
                          }
                        else
                          {
                            t = p_46;
                            t = w_149;
                            t = k_9(x_149, t);
                          }
                      }
                    }
                }
              }
          }
        }
      else
        {
          if(match_cons(t, sym_Matrix_2))
            {
              x_149 = ATgetArgument(t, 0);
              y_149 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_149;
          t = c_9(x_149, y_149, t);
        }
      LocalPopChoice(k_46);
    }
  else
    {
      t = j_46;
      t = Simplify_0_0(t);
    }
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm b_150 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm r_46 = ATgetArgument(t, 0);
      if(((ATgetType(r_46) != AT_LIST) || !(ATisEmpty(r_46))))
        _fail(t);
      {
        ATerm s_46 = ATgetArgument(t, 1);
        if(((ATgetType(s_46) != AT_LIST) || !(ATisEmpty(s_46))))
          _fail(t);
      }
      b_150 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_150;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    static ATerm g_16 (ATerm t);
    static ATerm g_16 (ATerm t)
    {
      t = repeat_2_0(h_16, _id, t);
      t = SRTS_all(g_16, t);
      return(t);
    }
    t = scope_2_0(f_16, g_16, t);
  }
  t = strename_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm t_135 (ATerm), ATerm t)
{
  static ATerm j_16 (ATerm t);
  static ATerm j_16 (ATerm t)
  {
    t = topdown_1_0(t_135, t);
    return(t);
  }
  t = t_135(t);
  t = SRTS_all(j_16, t);
  return(t);
}
ATerm map_1_0 (ATerm l_152 (ATerm), ATerm t)
{
  static ATerm x_150 (ATerm t);
  static ATerm x_150 (ATerm t)
  {
    ATerm u_150 = NULL,v_150 = NULL,w_150 = NULL;
    u_150 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_150;
      }
    else
      {
        ATerm h_80 = NULL,m_80 = NULL,q_80 = NULL,w_20 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_150 = ATgetFirst((ATermList) t);
            w_150 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_150);
        h_80 = t;
        t = v_150;
        t = l_152(t);
        m_80 = t;
        t = w_150;
        t = x_150(t);
        q_80 = t;
        t = (ATerm) ATinsert(CheckATermList(q_80), m_80);
        w_20 = t;
        t = SSLsetAnnotations(w_20, h_80);
      }
    return(t);
  }
  t = x_150(t);
  return(t);
}
static ATerm j_11 (ATerm v_43, ATerm w_43, ATerm t)
{
  ATerm z_150 = NULL;
  t = SSL_fputc(v_43, w_43);
  z_150 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_150);
  return(t);
}
static ATerm k_11 (ATerm b_42, ATerm c_42, ATerm t)
{
  ATerm a_151 = NULL;
  t = SSL_write_term_to_stream_text(b_42, c_42);
  a_151 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_151);
  return(t);
}
static ATerm m_11 (ATerm i_143 (ATerm), ATerm e_309, ATerm h_42, ATerm t)
{
  ATerm b_151 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_309, term_t_46);
  t = q_11(t);
  b_151 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_151, h_42);
  t = i_143(t);
  t = fclose_0_0(t);
  t = h_42;
  return(t);
}
static ATerm l_11 (ATerm x_41, ATerm y_41, ATerm t)
{
  ATerm c_151 = NULL;
  t = SSL_write_term_to_stream_baf(x_41, y_41);
  c_151 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_151);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm o_81 = NULL,p_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_46 = ATgetArgument(t, 0);
      if(match_cons(u_46, sym_Stream_1))
        {
          o_81 = ATgetArgument(u_46, 0);
        }
      else
        _fail(t);
      p_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(o_81, p_81, t);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_46 = ATgetArgument(t, 0);
      if(match_cons(v_46, sym_Stream_1))
        {
          e_82 = ATgetArgument(v_46, 0);
        }
      else
        _fail(t);
      f_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(e_82, f_82, t);
  b_82 = t;
  t = term_w_46;
  c_82 = t;
  t = b_82;
  if(match_cons(t, sym_Stream_1))
    {
      d_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_46, b_82);
  t = j_11(c_82, d_82, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm g_151 = NULL,h_151 = NULL,i_151 = NULL,j_151 = NULL,k_151 = NULL,m_151 = NULL,n_151 = NULL,o_151 = NULL,p_151 = NULL,q_151 = NULL,t_152 = NULL,u_152 = NULL,z_20 = NULL,y_20 = NULL;
  h_151 = t;
  if(match_cons(t, sym__2))
    {
      o_151 = ATgetArgument(t, 0);
      p_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_151);
  n_151 = t;
  t = o_151;
  {
    ATerm y_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm k_16 (ATerm t);
        static ATerm k_16 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((g_151 != NULL) && (g_151 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_151 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_16, t);
        LocalPopChoice(z_46);
      }
    else
      {
        t = y_46;
        t = term_b_47;
        g_151 = t;
      }
  }
  q_151 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_151, p_151);
  y_20 = t;
  t = SSLsetAnnotations(y_20, n_151);
  t = h_151;
  if(match_cons(t, sym__2))
    {
      j_151 = ATgetArgument(t, 0);
      k_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_151);
  i_151 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_151, (ATerm) ATmakeAppl(sym__2, not_null(g_151), k_151));
  z_20 = t;
  t = SSLsetAnnotations(z_20, i_151);
  m_151 = t;
  if(match_cons(t, sym__2))
    {
      t_152 = ATgetArgument(t, 0);
      u_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_47 = t;
    int d_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,n_81 = NULL,a_21 = NULL;
        t = SSLgetAnnotations(m_151);
        b_81 = t;
        t = t_152;
        t = fetch_1_0(l_16, t);
        e_81 = t;
        t = u_152;
        if(match_cons(t, sym__2))
          {
            g_81 = ATgetArgument(t, 0);
            n_81 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_11(m_16, g_81, n_81, t);
        f_81 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_81, f_81);
        a_21 = t;
        t = SSLsetAnnotations(a_21, b_81);
        LocalPopChoice(d_47);
      }
    else
      {
        t = c_47;
        {
          ATerm v_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_21 = NULL;
          t = SSLgetAnnotations(m_151);
          v_81 = t;
          t = u_152;
          if(match_cons(t, sym__2))
            {
              z_81 = ATgetArgument(t, 0);
              a_82 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_11(n_16, z_81, a_82, t);
          y_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_152, y_81);
          b_21 = t;
          t = SSLsetAnnotations(b_21, v_81);
        }
      }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm n_166 (ATerm), ATerm t)
{
  ATerm z_152 = NULL,a_153 = NULL,b_153 = NULL,e_153 = NULL,f_153 = NULL;
  f_153 = t;
  t = dtime_0_0(t);
  t = f_153;
  t = n_166(t);
  e_153 = t;
  t = dtime_0_0(t);
  z_152 = t;
  t = e_153;
  if(match_cons(t, sym__2))
    {
      a_153 = ATgetArgument(t, 0);
      b_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_153), (ATerm) ATmakeAppl(sym_Runtime_1, z_152)), b_153);
  return(t);
}
static ATerm t_153 (ATerm n_153, ATerm t)
{
  t = SSL_fclose(n_153);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_153 = NULL,r_153 = NULL;
  r_153 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_153 = ATgetArgument(t, 0);
      {
        ATerm e_47 = t;
        int f_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_153);
            LocalPopChoice(f_47);
          }
        else
          {
            t = e_47;
            t = t_153(r_153, t);
          }
      }
    }
  else
    {
      t = t_153(r_153, t);
    }
  return(t);
}
static ATerm n_11 (ATerm d_42, ATerm t)
{
  t = SSL_read_term_from_stream(d_42);
  return(t);
}
static ATerm o_11 (ATerm l_82, ATerm m_82, ATerm t)
{
  t = SSL_strcat(l_82, m_82);
  return(t);
}
static ATerm p_11 (ATerm x_43, ATerm y_43, ATerm t)
{
  ATerm u_153 = NULL;
  t = SSL_fopen(x_43, y_43);
  u_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_153);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_153 = NULL;
  t = SSL_stdin_stream();
  x_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_153);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_153 = NULL;
  t = SSL_stdout_stream();
  y_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_153);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_153 = NULL;
  t = SSL_stderr_stream();
  z_153 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_153);
  return(t);
}
static ATerm o_155 (ATerm f_154, ATerm t)
{
  ATerm g_154 = NULL;
  t = SSL_explode_term(f_154);
  if(match_cons(t, sym__2))
    {
      ATerm g_47 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_47) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_47 = ATgetArgument(t, 1);
        if(((ATgetType(h_47) == AT_LIST) && !(ATisEmpty(h_47))))
          {
            g_154 = ATgetFirst((ATermList) h_47);
            {
              ATerm i_47 = (ATerm) ATgetNext((ATermList) h_47);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_154;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_154;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_154;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_154;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm u_155 (ATerm j_154, ATerm k_154, ATerm l_154, ATerm t)
{
  ATerm m_154 = NULL,n_154 = NULL,o_154 = NULL,r_154 = NULL,g_21 = NULL;
  t = SSLgetAnnotations(l_154);
  o_154 = t;
  t = j_154;
  if(match_cons(t, sym_Path_1))
    {
      r_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_154, k_154);
  g_21 = t;
  t = SSLsetAnnotations(g_21, o_154);
  if(match_cons(t, sym__2))
    {
      m_154 = ATgetArgument(t, 0);
      n_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(m_154, n_154, t);
  return(t);
}
static ATerm v_155 (ATerm t_154, ATerm u_154, ATerm v_154, ATerm t)
{
  ATerm w_154 = NULL,x_154 = NULL,c_155 = NULL,h_155 = NULL,h_21 = NULL;
  t = SSLgetAnnotations(v_154);
  c_155 = t;
  t = SSL_is_string(t_154);
  h_155 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_155, u_154);
  h_21 = t;
  t = SSLsetAnnotations(h_21, c_155);
  if(match_cons(t, sym__2))
    {
      w_154 = ATgetArgument(t, 0);
      x_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_11(w_154, x_154, t);
  return(t);
}
static ATerm q_11 (ATerm t)
{
  ATerm l_155 = NULL,m_155 = NULL,n_155 = NULL;
  l_155 = t;
  if(match_cons(t, sym__2))
    {
      m_155 = ATgetArgument(t, 0);
      n_155 = ATgetArgument(t, 1);
      {
        ATerm j_47 = t;
        int k_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_155(l_155, t);
            LocalPopChoice(k_47);
          }
        else
          {
            t = j_47;
            {
              ATerm l_47 = t;
              int m_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_155(m_155, n_155, l_155, t);
                  LocalPopChoice(m_47);
                }
              else
                {
                  t = l_47;
                  t = v_155(m_155, n_155, l_155, t);
                }
            }
          }
      }
    }
  else
    {
      t = o_155(l_155, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_155 = NULL,y_155 = NULL,z_155 = NULL,e_156 = NULL;
  e_156 = t;
  {
    ATerm n_47 = t;
    int o_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_156, term_p_47);
        t = q_11(t);
        LocalPopChoice(o_47);
      }
    else
      {
        t = n_47;
        {
          ATerm s_82 = NULL,t_82 = NULL;
          t = term_q_47;
          t_82 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_47, e_156);
          t = o_11(t_82, e_156, t);
          s_82 = t;
          t = SSL_perror(s_82);
          _fail(t);
        }
      }
  }
  y_155 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(z_155, t);
  x_155 = t;
  t = y_155;
  t = fclose_0_0(t);
  t = x_155;
  return(t);
}
ATerm fetch_1_0 (ATerm v_152 (ATerm), ATerm t)
{
  static ATerm k_157 (ATerm t);
  static ATerm k_157 (ATerm t)
  {
    ATerm h_157 = NULL,i_157 = NULL,j_157 = NULL;
    h_157 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_157 = ATgetFirst((ATermList) t);
        j_157 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_47 = t;
      int u_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_82 = NULL,b_83 = NULL,t_21 = NULL;
          t = SSLgetAnnotations(h_157);
          y_82 = t;
          t = i_157;
          t = v_152(t);
          b_83 = t;
          t = (ATerm) ATinsert(CheckATermList(j_157), b_83);
          t_21 = t;
          t = SSLsetAnnotations(t_21, y_82);
          LocalPopChoice(u_47);
        }
      else
        {
          t = t_47;
          {
            ATerm j_83 = NULL,m_83 = NULL,u_21 = NULL;
            t = SSLgetAnnotations(h_157);
            j_83 = t;
            t = j_157;
            t = k_157(t);
            m_83 = t;
            t = (ATerm) ATinsert(CheckATermList(m_83), i_157);
            u_21 = t;
            t = SSLsetAnnotations(u_21, j_83);
          }
        }
    }
    return(t);
  }
  t = k_157(t);
  return(t);
}
static ATerm v_11 (ATerm e_55, ATerm f_55, ATerm t)
{
  ATerm n_157 = NULL;
  t = lookup_table_0_1(e_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_12(f_55, n_157, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_145 (ATerm), ATerm t)
{
  ATerm q_157 = NULL;
  q_157 = t;
  {
    ATerm v_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_157 = NULL,u_157 = NULL,v_157 = NULL;
        t = term_r_19;
        u_157 = t;
        t = term_y_47;
        v_157 = t;
        t = term_z_47;
        t = v_11(u_157, v_157, t);
        t_157 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_157, term_a_48);
        t = geq_0_0(t);
        t = q_157;
        t = a_145(t);
        LocalPopChoice(w_47);
      }
    else
      {
        t = v_47;
        t = q_157;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_157 = NULL,z_157 = NULL,a_158 = NULL;
  y_157 = t;
  {
    ATerm b_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_157;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_48 = ATgetFirst((ATermList) t);
                ATerm e_48 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_157;
          }
        LocalPopChoice(c_48);
      }
    else
      {
        t = b_48;
        t = (ATerm) ATinsert(ATempty, y_157);
      }
  }
  z_157 = t;
  t = term_b_47;
  a_158 = t;
  t = SSL_printnl(a_158, z_157);
  t = y_157;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_158 = NULL,f_158 = NULL;
  t = term_r_19;
  e_158 = t;
  t = term_s_19;
  f_158 = t;
  t = term_u_19;
  t = v_11(e_158, f_158, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm h_158 = NULL;
  h_158 = t;
  if(match_string(t, "-k"))
    {
      t = h_158;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = h_158;
    }
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm n_158 = NULL,o_158 = NULL,p_158 = NULL;
  n_158 = t;
  t = SSL_string_to_int(n_158);
  o_158 = t;
  t = term_f_48;
  p_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_48, o_158);
  t = y_11(p_158, o_158, t);
  t = n_158;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_h_48;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_16, r_16, s_16, t);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm r_158 = NULL;
  r_158 = t;
  if(match_string(t, "-S"))
    {
      t = r_158;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_158;
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm s_158 = NULL,t_158 = NULL;
  t = term_y_47;
  s_158 = t;
  t = term_f_41;
  t_158 = t;
  t = term_i_48;
  t = y_11(s_158, t_158, t);
  t = term_j_48;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_k_48;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm u_158 = NULL,v_158 = NULL,w_158 = NULL;
  u_158 = t;
  t = SSL_string_to_int(u_158);
  v_158 = t;
  t = term_y_47;
  w_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_47, v_158);
  t = y_11(w_158, v_158, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_158);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = term_o_48;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm x_158 = NULL,y_158 = NULL;
  t = term_p_48;
  x_158 = t;
  t = term_l_19;
  y_158 = t;
  t = term_s_48;
  t = y_11(x_158, y_158, t);
  t = term_t_48;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = term_u_48;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_48 = t;
  int w_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_16, w_16, z_16, t);
      LocalPopChoice(w_48);
    }
  else
    {
      t = v_48;
      {
        ATerm x_48 = t;
        int y_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_17, h_17, j_17, t);
            LocalPopChoice(y_48);
          }
        else
          {
            t = x_48;
            t = Option_3_0(l_17, m_17, n_17, t);
          }
      }
    }
  return(t);
}
static ATerm y_11 (ATerm r_47, ATerm s_47, ATerm t)
{
  ATerm z_158 = NULL,a_159 = NULL;
  t = term_r_19;
  z_158 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_19, r_47, s_47);
  t = lookup_table_0_1(z_158, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(r_47, s_47, a_159, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_19, r_47, s_47);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_159 = NULL,f_159 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_159 = NULL,h_159 = NULL,i_159 = NULL;
      t = term_l_19;
      t = g_0(t);
      g_159 = t;
      t = term_b_20;
      h_159 = t;
      t = term_c_20;
      i_159 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_20, term_c_20, g_159);
      t = w_11(h_159, i_159, g_159, t);
      _fail(t);
    }
  else
    {
      ATerm l_159 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_159 = ATgetFirst((ATermList) t);
          f_159 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_159;
      t = b_0(t);
      t = term_l_19;
      t = d_0(t);
      l_159 = t;
      t = (ATerm) ATinsert(CheckATermList(f_159), l_159);
    }
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm o_159 = NULL;
  o_159 = t;
  if(match_string(t, "-o"))
    {
      t = o_159;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_159;
    }
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm p_159 = NULL,q_159 = NULL;
  p_159 = t;
  t = term_z_48;
  q_159 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_48, p_159);
  t = y_11(q_159, p_159, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_159);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_a_49;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_17, q_17, r_17, t);
  return(t);
}
static ATerm w_11 (ATerm l_53, ATerm m_53, ATerm k_53, ATerm t)
{
  ATerm s_159 = NULL,t_159 = NULL,u_159 = NULL,v_159 = NULL,w_159 = NULL;
  s_159 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_53, m_53);
  {
    ATerm b_49 = t;
    int c_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_49 = ATgetArgument(t, 0);
            ATerm e_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_53, m_53);
        t = v_11(l_53, m_53, t);
        LocalPopChoice(c_49);
      }
    else
      {
        t = b_49;
        t = (ATerm) ATempty;
      }
  }
  t_159 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_53, m_53, (ATerm) ATinsert(CheckATermList(t_159), k_53));
  t = lookup_table_0_1(l_53, t);
  w_159 = t;
  t = (ATerm) ATinsert(CheckATermList(t_159), k_53);
  u_159 = t;
  t = w_159;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(m_53, u_159, v_159, t);
  t = s_159;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm m_160 = NULL,n_160 = NULL,o_160 = NULL,p_160 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_160 = NULL,r_160 = NULL,u_160 = NULL;
      t = term_l_19;
      t = l_0(t);
      q_160 = t;
      t = term_b_20;
      r_160 = t;
      t = term_c_20;
      u_160 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_20, term_c_20, q_160);
      t = w_11(r_160, u_160, q_160, t);
      _fail(t);
    }
  else
    {
      ATerm y_160 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_160 = ATgetFirst((ATermList) t);
          n_160 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_160;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_160 = ATgetFirst((ATermList) t);
          p_160 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_160;
      t = h_0(t);
      t = o_160;
      t = j_0(t);
      y_160 = t;
      t = (ATerm) ATinsert(CheckATermList(p_160), y_160);
    }
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm a_161 = NULL;
  a_161 = t;
  if(match_string(t, "-i"))
    {
      t = a_161;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = a_161;
    }
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm b_161 = NULL,c_161 = NULL;
  b_161 = t;
  t = term_f_49;
  c_161 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_49, b_161);
  t = y_11(c_161, b_161, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, b_161);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_g_49;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_17, t_17, u_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm d_161 = NULL,e_161 = NULL,f_161 = NULL,g_161 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_19;
  t = whoami_0_0(t);
  d_161 = t;
  t = term_h_49;
  f_161 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_49), d_161);
  g_161 = t;
  t = SSL_printnl(f_161, g_161);
  t = term_p_41;
  e_161 = t;
  t = SSL_exit(e_161);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm h_161 = NULL,i_161 = NULL;
  t = term_r_19;
  h_161 = t;
  t = term_s_19;
  i_161 = t;
  t = term_u_19;
  t = v_11(h_161, i_161, t);
  return(t);
}
static ATerm r_11 (ATerm t_50, ATerm u_50, ATerm t)
{
  ATerm k_49 = t;
  int l_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_50, u_50);
      LocalPopChoice(l_49);
    }
  else
    {
      t = k_49;
      t = SSL_addr(t_50, u_50);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_158 (ATerm), ATerm j_158 (ATerm), ATerm t)
{
  ATerm k_161 = NULL,l_161 = NULL,m_161 = NULL;
  k_161 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_161;
      t = i_158(t);
    }
  else
    {
      ATerm p_161 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_161 = ATgetFirst((ATermList) t);
          m_161 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_161;
      t = foldr_2_0(i_158, j_158, t);
      p_161 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_161, p_161);
      t = j_158(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_17 (ATerm t)
{
  t = term_f_41;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm e_84 = NULL,q_84 = NULL;
  if(match_cons(t, sym__2))
    {
      e_84 = ATgetArgument(t, 0);
      q_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(e_84, q_84, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_161 = NULL,z_83 = NULL,a_84 = NULL;
  t = times_0_0(t);
  a_84 = t;
  t = SSL_explode_term(a_84);
  if(match_cons(t, sym__2))
    {
      ATerm m_49 = ATgetArgument(t, 0);
      z_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_83;
  t = foldr_2_0(v_17, w_17, t);
  s_161 = t;
  t = SSL_TicksToSeconds(s_161);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_162 = NULL,i_162 = NULL,j_162 = NULL;
  h_162 = t;
  if(match_cons(t, sym__2))
    {
      i_162 = ATgetArgument(t, 0);
      j_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_49 = t;
    int r_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_162;
        if((i_162 != t))
          {
            _fail(t);
          }
        t = h_162;
        LocalPopChoice(r_49);
      }
    else
      {
        t = n_49;
        t = (ATerm) ATmakeAppl(sym__2, i_162, j_162);
        {
          ATerm s_49 = t;
          int t_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_162, j_162);
              LocalPopChoice(t_49);
            }
          else
            {
              t = s_49;
              t = SSL_gtr(i_162, j_162);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_162, j_162);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_144 (ATerm), ATerm t)
{
  ATerm n_162 = NULL;
  n_162 = t;
  {
    ATerm u_49 = t;
    int v_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_162 = NULL,q_162 = NULL,r_162 = NULL;
        t = term_r_19;
        q_162 = t;
        t = term_y_47;
        r_162 = t;
        t = term_z_47;
        t = v_11(q_162, r_162, t);
        p_162 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_162, term_p_41);
        t = geq_0_0(t);
        t = n_162;
        t = z_144(t);
        LocalPopChoice(v_49);
      }
    else
      {
        t = u_49;
        t = n_162;
      }
  }
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm t_162 = NULL,u_162 = NULL,w_162 = NULL,x_162 = NULL;
  t = run_time_0_0(t);
  t_162 = t;
  t = term_l_19;
  t = whoami_0_0(t);
  u_162 = t;
  t = term_h_49;
  w_162 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_49), t_162), term_w_49), u_162);
  x_162 = t;
  t = SSL_printnl(w_162, x_162);
  t = (ATerm) ATmakeAppl(sym__2, term_h_49, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_49), t_162), term_w_49), u_162));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_162 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_41;
  y_162 = t;
  t = SSL_exit(y_162);
  return(t);
}
static ATerm z_11 (ATerm w_57, ATerm x_57, ATerm y_57, ATerm t)
{
  ATerm z_162 = NULL;
  t = SSL_hashtable_put(y_57, w_57, x_57);
  z_162 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_162);
  return(t);
}
static ATerm a_12 (ATerm z_57, ATerm a_58, ATerm t)
{
  t = SSL_hashtable_get(a_58, z_57);
  return(t);
}
ATerm lookup_table_0_1 (ATerm x_54, ATerm t)
{
  ATerm i_163 = NULL;
  t = table_hashtable_0_0(t);
  i_163 = t;
  {
    ATerm y_49 = t;
    int z_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_85 = NULL;
        t = i_163;
        if(match_cons(t, sym_Hashtable_1))
          {
            b_85 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_12(x_54, b_85, t);
        LocalPopChoice(z_49);
      }
    else
      {
        t = y_49;
        {
          ATerm g_85 = NULL;
          t = x_54;
          t = table_create_0_0(t);
          t = i_163;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_85 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_12(x_54, g_85, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm e_58, ATerm f_58, ATerm t)
{
  ATerm l_163 = NULL;
  t = SSL_hashtable_create(e_58, f_58);
  l_163 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_163);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm m_163 = NULL,n_163 = NULL,o_163 = NULL,q_163 = NULL,r_163 = NULL;
  m_163 = t;
  t = term_a_50;
  q_163 = t;
  t = term_d_50;
  r_163 = t;
  t = m_163;
  t = new_hashtable_0_2(q_163, r_163, t);
  n_163 = t;
  t = m_163;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(m_163, n_163, o_163, t);
  t = m_163;
  return(t);
}
static ATerm t_11 (ATerm b_58, ATerm c_58, ATerm t)
{
  ATerm s_163 = NULL;
  t = SSL_hashtable_remove(c_58, b_58);
  s_163 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_163);
  return(t);
}
static ATerm u_11 (ATerm g_58, ATerm t)
{
  ATerm t_163 = NULL;
  t = SSL_hashtable_destroy(g_58);
  t_163 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_163);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm u_163 = NULL;
  t = SSL_table_hashtable();
  u_163 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_163);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm v_163 = NULL,w_163 = NULL,x_163 = NULL,y_163 = NULL;
  v_163 = t;
  t = table_hashtable_0_0(t);
  w_163 = t;
  t = lookup_table_0_1(v_163, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(y_163, t);
  t = w_163;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_11(v_163, x_163, t);
  t = v_163;
  return(t);
}
static ATerm z_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm z_163 = NULL,a_164 = NULL;
  t = term_e_50;
  z_163 = t;
  t = term_l_19;
  a_164 = t;
  t = term_f_50;
  t = y_11(z_163, a_164, t);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  t = term_g_50;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm b_164 = NULL,c_164 = NULL,d_164 = NULL,e_164 = NULL;
  t = term_e_50;
  d_164 = t;
  t = term_l_19;
  e_164 = t;
  t = term_f_50;
  t = y_11(d_164, e_164, t);
  t = term_i_50;
  b_164 = t;
  t = term_l_19;
  c_164 = t;
  t = term_j_50;
  t = y_11(b_164, c_164, t);
  t = term_k_50;
  return(t);
}
static ATerm i_18 (ATerm t)
{
  t = term_m_50;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm n_50 = t;
  int q_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_17, a_18, b_18, t);
      LocalPopChoice(q_50);
    }
  else
    {
      t = n_50;
      t = Option_3_0(c_18, h_18, i_18, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_120 (ATerm), ATerm j_120 (ATerm), ATerm t)
{
  ATerm f_164 = NULL,g_164 = NULL,h_164 = NULL,i_164 = NULL,j_164 = NULL,k_164 = NULL,i_22 = NULL;
  k_164 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_164 = ATgetFirst((ATermList) t);
      h_164 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_164);
  f_164 = t;
  t = g_164;
  t = i_120(t);
  i_164 = t;
  t = h_164;
  t = j_120(t);
  j_164 = t;
  t = (ATerm) ATinsert(CheckATermList(j_164), i_164);
  i_22 = t;
  t = SSLsetAnnotations(i_22, f_164);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_169 (ATerm), ATerm t)
{
  ATerm p_164 = NULL,q_164 = NULL,r_164 = NULL,s_164 = NULL,u_164 = NULL,v_164 = NULL,q_22 = NULL;
  p_164 = t;
  {
    ATerm r_50 = t;
    int c_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_51;
        t = t_169(t);
        LocalPopChoice(c_51);
      }
    else
      {
        t = r_50;
      }
  }
  t = p_164;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_164 = ATgetFirst((ATermList) t);
      s_164 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_164);
  q_164 = t;
  t = term_s_19;
  v_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_19, r_164);
  t = y_11(v_164, r_164, t);
  t = s_164;
  {
    static ATerm f_165 (ATerm t);
    static ATerm f_165 (ATerm t)
    {
      ATerm h_51 = t;
      int i_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_51 = t;
          int k_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_164 = NULL;
              y_164 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_164;
              LocalPopChoice(k_51);
            }
          else
            {
              t = j_51;
              t = t_169(t);
              t = Cons_2_0(_id, f_165, t);
            }
          LocalPopChoice(i_51);
        }
      else
        {
          t = h_51;
          {
            ATerm b_165 = NULL,c_165 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                b_165 = ATgetFirst((ATermList) t);
                c_165 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(c_165), (ATerm) ATmakeAppl(sym_Undefined_1, b_165));
          }
        }
      return(t);
    }
    t = f_165(t);
  }
  u_164 = t;
  t = (ATerm) ATinsert(CheckATermList(u_164), (ATerm) ATmakeAppl(sym_Program_1, r_164));
  q_22 = t;
  t = SSLsetAnnotations(q_22, q_164);
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm s_165 = NULL;
  s_165 = t;
  if(match_string(t, "--help"))
    {
      t = s_165;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_165;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_165;
        }
    }
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm t_165 = NULL,u_165 = NULL;
  t = term_l_51;
  t_165 = t;
  t = term_l_19;
  u_165 = t;
  t = term_m_51;
  t = y_11(t_165, u_165, t);
  t = term_n_51;
  return(t);
}
static ATerm n_18 (ATerm t)
{
  t = term_o_51;
  return(t);
}
static ATerm o_18 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm q_169 (ATerm), ATerm r_169 (ATerm), ATerm s_169 (ATerm), ATerm t)
{
  ATerm k_165 = NULL,l_165 = NULL,m_165 = NULL,n_165 = NULL,o_165 = NULL,p_165 = NULL,q_165 = NULL,r_165 = NULL;
  m_165 = t;
  t = term_b_20;
  n_165 = t;
  t = term_q_51;
  t = lookup_table_0_1(n_165, t);
  r_165 = t;
  t = term_c_20;
  o_165 = t;
  t = (ATerm) ATempty;
  p_165 = t;
  t = r_165;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(o_165, p_165, q_165, t);
  t = m_165;
  {
    static ATerm j_18 (ATerm t);
    static ATerm j_18 (ATerm t)
    {
      ATerm r_51 = t;
      int s_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_169(t);
          LocalPopChoice(s_51);
        }
      else
        {
          t = r_51;
          {
            ATerm t_51 = t;
            int u_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_18, m_18, n_18, t);
                LocalPopChoice(u_51);
              }
            else
              {
                t = t_51;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_18, t);
  }
  {
    ATerm v_51 = t;
    int w_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_166 = NULL;
        f_166 = t;
        {
          ATerm z_51 = t;
          int a_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_85 = NULL;
              t = f_166;
              {
                ATerm b_52 = t;
                int c_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_85 = NULL,m_85 = NULL;
                    t = term_r_19;
                    l_85 = t;
                    t = term_l_51;
                    m_85 = t;
                    t = term_d_52;
                    t = v_11(l_85, m_85, t);
                    LocalPopChoice(c_52);
                  }
                else
                  {
                    t = b_52;
                    t = fetch_1_0(o_18, t);
                  }
              }
              t = f_166;
              t = r_169(t);
              t = term_f_41;
              k_85 = t;
              t = SSL_exit(k_85);
              LocalPopChoice(a_52);
            }
          else
            {
              t = z_51;
              {
                ATerm s_85 = NULL,x_85 = NULL,y_85 = NULL;
                t = term_r_19;
                x_85 = t;
                t = term_e_50;
                y_85 = t;
                t = term_e_52;
                t = v_11(x_85, y_85, t);
                t = f_166;
                t = s_169(t);
                t = term_f_41;
                s_85 = t;
                t = SSL_exit(s_85);
              }
            }
        }
        LocalPopChoice(w_51);
      }
    else
      {
        t = v_51;
        {
          ATerm g_52 = t;
          int i_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_166 = NULL,h_166 = NULL,i_166 = NULL;
              static ATerm s_18 (ATerm t);
              static ATerm s_18 (ATerm t)
              {
                ATerm j_166 = NULL,k_166 = NULL,l_166 = NULL,b_23 = NULL;
                l_166 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_166 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_166);
                j_166 = t;
                t = k_166;
                if(((k_165 != NULL) && (k_165 != t)))
                  _fail(t);
                else
                  k_165 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_166);
                b_23 = t;
                t = SSLsetAnnotations(b_23, j_166);
                return(t);
              }
              t = fetch_1_0(s_18, t);
              t = term_h_49;
              h_166 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_165)), term_m_52);
              i_166 = t;
              t = SSL_printnl(h_166, i_166);
              t = (ATerm) ATmakeAppl(sym__2, term_h_49, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_165)), term_m_52));
              t = r_169(t);
              t = term_p_41;
              g_166 = t;
              t = SSL_exit(g_166);
              LocalPopChoice(i_52);
            }
          else
            {
              t = g_52;
            }
        }
      }
  }
  l_165 = t;
  t = term_b_20;
  t = table_destroy_0_0(t);
  t = l_165;
  return(t);
}
ATerm option_wrap_5_0 (ATerm t_167 (ATerm), ATerm u_167 (ATerm), ATerm v_167 (ATerm), ATerm w_167 (ATerm), ATerm x_167 (ATerm), ATerm t)
{
  ATerm r_166 = NULL,s_166 = NULL,t_166 = NULL,u_166 = NULL,v_166 = NULL;
  t = parse_options_3_0(t_167, u_167, v_167, t);
  r_166 = t;
  t = term_n_52;
  t = table_create_0_0(t);
  t = term_n_52;
  s_166 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_52, term_r_52, r_166);
  t = lookup_table_0_1(s_166, t);
  v_166 = t;
  t = term_r_52;
  t_166 = t;
  t = v_166;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_11(t_166, r_166, u_166, t);
  t = r_166;
  t = w_167(t);
  {
    ATerm t_52 = t;
    int u_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_167(t);
        t = report_success_0_0(t);
        LocalPopChoice(u_52);
      }
    else
      {
        t = t_52;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm u_18 (ATerm t)
{
  t = if_verbose2_1_0(z_18, t);
  return(t);
}
static ATerm w_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm z_166 = NULL,a_167 = NULL;
  t = term_w_52;
  z_166 = t;
  t = term_l_19;
  a_167 = t;
  t = term_x_52;
  t = y_11(z_166, a_167, t);
  t = term_b_53;
  return(t);
}
static ATerm y_18 (ATerm t)
{
  t = term_f_53;
  return(t);
}
static ATerm z_18 (ATerm t)
{
  ATerm b_167 = NULL,c_167 = NULL,d_167 = NULL,e_167 = NULL,f_167 = NULL,g_167 = NULL;
  b_167 = t;
  t = term_r_19;
  f_167 = t;
  t = term_s_19;
  g_167 = t;
  t = term_u_19;
  t = v_11(f_167, g_167, t);
  c_167 = t;
  t = term_h_49;
  d_167 = t;
  t = (ATerm) ATinsert(ATempty, c_167);
  e_167 = t;
  t = SSL_printnl(d_167, e_167);
  t = b_167;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_166 (ATerm), ATerm x_166 (ATerm), ATerm y_166 (ATerm), ATerm t)
{
  static ATerm t_18 (ATerm t);
  static ATerm v_18 (ATerm t);
  static ATerm t_18 (ATerm t)
  {
    ATerm g_53 = t;
    int j_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_166(t);
        LocalPopChoice(j_53);
      }
    else
      {
        t = g_53;
        {
          ATerm o_53 = t;
          int p_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(p_53);
            }
          else
            {
              t = o_53;
              {
                ATerm s_53 = t;
                int w_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(w_53);
                  }
                else
                  {
                    t = s_53;
                    {
                      ATerm x_53 = t;
                      int y_53 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(w_18, x_18, y_18, t);
                          LocalPopChoice(y_53);
                        }
                      else
                        {
                          t = x_53;
                          {
                            ATerm z_53 = t;
                            int c_54 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(c_54);
                              }
                            else
                              {
                                t = z_53;
                                t = keep_option_0_0(t);
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
  static ATerm v_18 (ATerm t)
  {
    ATerm h_167 = NULL,i_167 = NULL,j_167 = NULL;
    i_167 = t;
    {
      ATerm h_54 = t;
      int k_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm c_19 (ATerm t);
          static ATerm c_19 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_167 != NULL) && (h_167 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_167 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_19, t);
          LocalPopChoice(k_54);
        }
      else
        {
          t = h_54;
          t = term_l_54;
          h_167 = t;
        }
    }
    t = not_null(h_167);
    t = ReadFromFile_0_0(t);
    j_167 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_167, j_167);
    t = apply_strategy_1_0(w_166, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(t_18, y_166, default_system_about_0_0, u_18, v_18, t);
  return(t);
}
static ATerm d_19 (ATerm t)
{
  ATerm p_167 = NULL,q_167 = NULL,r_167 = NULL,s_167 = NULL,y_167 = NULL,z_167 = NULL,a_168 = NULL,b_168 = NULL,c_168 = NULL,d_168 = NULL,e_168 = NULL,f_168 = NULL,g_168 = NULL,h_168 = NULL,i_168 = NULL,j_168 = NULL,k_168 = NULL,l_168 = NULL,m_168 = NULL,n_23 = NULL,k_23 = NULL,i_23 = NULL,h_23 = NULL,e_23 = NULL;
  m_168 = t;
  if(match_cons(t, sym__2))
    {
      q_167 = ATgetArgument(t, 0);
      r_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_168);
  p_167 = t;
  t = r_167;
  if(match_cons(t, sym_Specification_1))
    {
      y_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_167);
  s_167 = t;
  t = y_167;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_168 = ATgetFirst((ATermList) t);
      c_168 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_167);
  a_168 = t;
  t = c_168;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_168 = ATgetFirst((ATermList) t);
      g_168 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_168);
  e_168 = t;
  t = f_168;
  if(match_cons(t, sym_Strategies_1))
    {
      j_168 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_168);
  i_168 = t;
  t = j_168;
  t = map_1_0(e_19, t);
  k_168 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, k_168);
  e_23 = t;
  t = SSLsetAnnotations(e_23, i_168);
  l_168 = t;
  t = g_168;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_168), l_168);
  h_23 = t;
  t = SSLsetAnnotations(h_23, e_168);
  h_168 = t;
  t = (ATerm) ATinsert(CheckATermList(h_168), b_168);
  i_23 = t;
  t = SSLsetAnnotations(i_23, a_168);
  d_168 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, d_168);
  k_23 = t;
  t = SSLsetAnnotations(k_23, s_167);
  z_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_167, z_167);
  n_23 = t;
  t = SSLsetAnnotations(n_23, p_167);
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm d_169 = NULL,e_169 = NULL,f_169 = NULL,g_169 = NULL,h_169 = NULL;
  h_169 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      d_169 = ATgetArgument(t, 0);
      e_169 = ATgetArgument(t, 1);
      f_169 = ATgetArgument(t, 2);
      g_169 = ATgetArgument(t, 3);
      {
        ATerm n_54 = t;
        int o_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_86 = NULL,o_86 = NULL,d_23 = NULL;
            t = SSLgetAnnotations(h_169);
            j_86 = t;
            t = g_169;
            t = topdown_1_0(k_19, t);
            t = match_to_dfa_0_0(t);
            o_86 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, d_169, e_169, f_169, o_86);
            d_23 = t;
            t = SSLsetAnnotations(d_23, j_86);
            LocalPopChoice(o_54);
          }
        else
          {
            t = n_54;
            t = h_169;
          }
      }
    }
  else
    {
      t = h_169;
    }
  return(t);
}
static ATerm k_19 (ATerm t)
{
  ATerm q_86 = NULL;
  q_86 = t;
  if(match_cons(t, sym_Id_0))
    {
      ATerm p_54 = t;
      int q_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_86 = NULL;
          t = q_86;
          t = new_0_0(t);
          r_86 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_86), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_86)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_86))));
          LocalPopChoice(q_54);
        }
      else
        {
          t = p_54;
          t = q_86;
        }
    }
  else
    {
      t = q_86;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(d_19, _fail, default_system_usage_0_0, t);
  return(t);
}

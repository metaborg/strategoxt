#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_RDecT_3;
static Symbol sym_DynRuleId_1;
static Symbol sym_AddDynRule_2;
static Symbol sym_SetDynRule_2;
static Symbol sym_UndefineDynRule_2;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_BuildDefault_1;
static Symbol sym_As_2;
static Symbol sym_App_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_SVar_1;
static Symbol sym_ExtendOverrideDynamicRules_1;
static Symbol sym_ExtendDynamicRules_1;
static Symbol sym_OverrideDynamicRules_1;
static Symbol sym_GenDynRules_1;
static Symbol sym_AM_2;
static Symbol sym_Choice_2;
static Symbol sym_LRule_1;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Prim_2;
static Symbol sym_Test_1;
static Symbol sym_Where_1;
static Symbol sym_Not_1;
static Symbol sym_Rec_2;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_BA_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_ConstType_1;
static Symbol sym_Sort_2;
static Symbol sym_Rule_3;
static Symbol sym_RDefT_4;
static Symbol sym_Row_2;
static Symbol sym_Row_3;
static Symbol sym_Matrix_2;
static Symbol sym_Matrix_1;
static Symbol sym_Off_1;
static Symbol sym_Case_4;
static Symbol sym_Case_3;
static Symbol sym_Case_2;
static Symbol sym_Alt_3;
static Symbol sym_Assign_2;
static Symbol sym_Assign_1;
static Symbol sym_Fun_2;
static Symbol sym_Str_1;
static Symbol sym_Int_1;
static Symbol sym_Real_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Some_1;
static Symbol sym_RDecT_3;
static Symbol sym_DynRuleId_1;
static Symbol sym_AddDynRule_2;
static Symbol sym_SetDynRule_2;
static Symbol sym_UndefineDynRule_2;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_BuildDefault_1;
static Symbol sym_As_2;
static Symbol sym_App_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_SVar_1;
static Symbol sym_ExtendOverrideDynamicRules_1;
static Symbol sym_ExtendDynamicRules_1;
static Symbol sym_OverrideDynamicRules_1;
static Symbol sym_GenDynRules_1;
static Symbol sym_AM_2;
static Symbol sym_Choice_2;
static Symbol sym_LRule_1;
static Symbol sym_All_1;
static Symbol sym_One_1;
static Symbol sym_Some_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Prim_2;
static Symbol sym_Test_1;
static Symbol sym_Where_1;
static Symbol sym_Not_1;
static Symbol sym_Rec_2;
static Symbol sym_GuardedLChoice_3;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_BA_2;
static Symbol sym_Scope_2;
static Symbol sym_Build_1;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_ConstType_1;
static Symbol sym_Sort_2;
static Symbol sym_Rule_3;
static Symbol sym_RDefT_4;
static Symbol sym_InfixApp_3;
static Symbol sym_MA_2;
static Symbol sym_BAM_3;
static Symbol sym_Seqs_1;
static Symbol sym_Choices_1;
static Symbol sym_LChoices_1;
static Symbol sym_Lets_2;
static Symbol sym_DynamicRules_1;
static Symbol sym_Some_1;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Defined_0;
static Symbol sym_Defined_1;
static Symbol sym_Defined_2;
static Symbol sym_Defined_3;
static Symbol sym_Defined_4;
static Symbol sym_Defined_5;
static Symbol sym_Defined_6;
static Symbol sym_Defined_7;
static Symbol sym_Defined_8;
static Symbol sym_Defined_9;
static Symbol sym_Defined_10;
static Symbol sym_Undefined_0;
static Symbol sym_Scopes_0;
static Symbol sym_Hashtable_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Cong_2;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
}
static ATerm term_h_53;
static ATerm term_g_53;
static ATerm term_f_53;
static ATerm term_n_52;
static ATerm term_m_52;
static ATerm term_l_52;
static ATerm term_i_52;
static ATerm term_h_52;
static ATerm term_w_51;
static ATerm term_v_51;
static ATerm term_p_51;
static ATerm term_l_51;
static ATerm term_k_51;
static ATerm term_d_51;
static ATerm term_r_50;
static ATerm term_l_50;
static ATerm term_i_50;
static ATerm term_d_50;
static ATerm term_c_50;
static ATerm term_b_50;
static ATerm term_a_50;
static ATerm term_x_49;
static ATerm term_w_49;
static ATerm term_t_49;
static ATerm term_s_49;
static ATerm term_r_49;
static ATerm term_b_49;
static ATerm term_z_48;
static ATerm term_y_48;
static ATerm term_a_48;
static ATerm term_s_47;
static ATerm term_r_47;
static ATerm term_q_47;
static ATerm term_p_47;
static ATerm term_o_47;
static ATerm term_n_47;
static ATerm term_m_47;
static ATerm term_k_47;
static ATerm term_j_47;
static ATerm term_i_47;
static ATerm term_h_47;
static ATerm term_z_46;
static ATerm term_y_46;
static ATerm term_x_46;
static ATerm term_w_46;
static ATerm term_v_46;
static ATerm term_q_46;
static ATerm term_p_46;
static ATerm term_j_46;
static ATerm term_i_46;
static ATerm term_h_46;
static ATerm term_g_46;
static ATerm term_f_46;
static ATerm term_c_46;
static ATerm term_b_46;
static ATerm term_k_45;
static ATerm term_j_45;
static ATerm term_g_45;
static ATerm term_f_45;
static ATerm term_d_45;
static ATerm term_c_45;
static ATerm term_z_44;
static ATerm term_w_44;
static ATerm term_v_43;
static ATerm term_i_41;
static ATerm term_h_41;
static ATerm term_v_39;
static ATerm term_u_39;
static ATerm term_o_39;
static ATerm term_l_39;
static ATerm term_f_39;
static ATerm term_e_39;
static ATerm term_d_39;
static ATerm term_x_38;
static ATerm term_g_30;
static ATerm term_f_30;
static ATerm term_u_29;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_38));
  term_x_38 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym_Sort_2, term_d_39, (ATerm) ATempty);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(sym_ConstType_1, term_e_39);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("MatrixSeenBefore", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(sym_Off_1, (ATerm) ATempty);
  ATprotect(&(term_w_44));
  term_w_44 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_d_45);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_j_45);
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_f_46);
  ATprotect(&(term_h_46));
  term_h_46 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_46));
  term_i_46 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_i_46);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_46));
  term_q_46 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym__2, term_w_46, term_x_46);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym__2, term_j_47, term_l_39);
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_39);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(sym__2, term_p_47, term_p_46);
  ATprotect(&(term_r_47));
  term_r_47 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_j_47);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(sym__2, term_a_50, term_p_46);
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(sym__2, term_d_50, term_p_46);
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym__2, term_k_51, term_p_46);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(sym__3, term_w_46, term_x_46, (ATerm) ATempty);
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_k_51);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_a_50);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym__2, term_j_45, term_p_46);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm a_0 (ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm spaste_1_0 (ATerm y_141 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm z_141 (ATerm), ATerm a_142 (ATerm), ATerm b_142 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm d_142 (ATerm), ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_8 (ATerm w_35, ATerm v_35, ATerm t);
ATerm SVar_1_0 (ATerm q_119 (ATerm), ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm f_142 (ATerm), ATerm g_142 (ATerm), ATerm h_142 (ATerm), ATerm i_142 (ATerm), ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm tpaste_1_0 (ATerm u_141 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm m_119 (ATerm), ATerm t);
static ATerm k_8 (ATerm q_168 (ATerm), ATerm r_168 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_81, ATerm m_81, ATerm l_81, ATerm t);
static ATerm j_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm l_8 (ATerm k_168 (ATerm), ATerm l_168 (ATerm (ATerm), ATerm), ATerm f_81, ATerm i_81, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm y_168 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm f_168 (ATerm (ATerm), ATerm), ATerm g_168 (ATerm), ATerm h_168 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_168 (ATerm (ATerm), ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm o_9 (ATerm w_111, ATerm v_111, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm j_144 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm simple_strategy_0_0 (ATerm t);
static ATerm q_8 (ATerm c_163 (ATerm), ATerm b_78, ATerm a_78, ATerm t);
ATerm tvars_matrix_boundin_3_0 (ATerm k_182 (ATerm), ATerm l_182 (ATerm), ATerm m_182 (ATerm), ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm v_141 (ATerm), ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm e_142 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm u_8 (ATerm e_163 (ATerm), ATerm d_78, ATerm c_78, ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm w_8 (ATerm c_958, ATerm h_958, ATerm n_97, ATerm t);
ATerm while_not_2_0 (ATerm w_149 (ATerm), ATerm x_149 (ATerm), ATerm t);
ATerm for_3_0 (ATerm z_149 (ATerm), ATerm a_150 (ATerm), ATerm b_150 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm n_119 (ATerm g_118, ATerm h_118, ATerm i_118, ATerm t);
static ATerm s_8 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm free_vars_3_0 (ATerm i_170 (ATerm), ATerm j_170 (ATerm), ATerm k_170 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
ATerm RowLet_1_0 (ATerm w_0 (ATerm), ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm y_8 (ATerm s_115, ATerm r_115, ATerm t);
static ATerm z_8 (ATerm i_155 (ATerm), ATerm a_53, ATerm y_52, ATerm t);
static ATerm s_10 (ATerm t);
ATerm default_state_0_0 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm MatchCons_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t);
static ATerm b_9 (ATerm v_181 (ATerm), ATerm f_114, ATerm c_114, ATerm d_114, ATerm e_114, ATerm t);
static ATerm c_9 (ATerm y_113, ATerm z_113, ATerm a_114, ATerm t);
ATerm filter_1_0 (ATerm q_167 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm z_161 (ATerm), ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm ConsArgs_0_0 (ATerm t);
static ATerm j_12 (ATerm t);
ATerm outedges_0_0 (ATerm t);
static ATerm r_128 (ATerm l_127, ATerm t);
ATerm get_path_0_0 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm g_9 (ATerm l_115, ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm i_9 (ATerm b_115, ATerm t);
static ATerm t_12 (ATerm t);
static ATerm k_9 (ATerm z_114, ATerm t);
ATerm repeat_2_0 (ATerm f_149 (ATerm), ATerm g_149 (ATerm), ATerm t);
static ATerm m_9 (ATerm j_54, ATerm k_54, ATerm t);
ATerm end_scope_1_0 (ATerm f_155 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm q_146 (ATerm), ATerm r_146 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_155 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm g_155 (ATerm), ATerm h_155 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm g_161 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm z_132 (ATerm r_132, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
ATerm MatrixMerge_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm g_143 (ATerm), ATerm t);
static ATerm t_10 (ATerm m_163 (ATerm), ATerm n_163 (ATerm), ATerm j_78, ATerm i_78, ATerm t);
static ATerm u_10 (ATerm j_163 (ATerm), ATerm f_78, ATerm e_78, ATerm t);
ATerm foldr_3_0 (ATerm o_166 (ATerm), ATerm p_166 (ATerm), ATerm q_166 (ATerm), ATerm t);
static ATerm b_14 (ATerm t);
ATerm collect_om_2_0 (ATerm g_165 (ATerm), ATerm h_165 (ATerm), ATerm t);
ATerm CollectSubst_0_0 (ATerm t);
ATerm IgnoreVar_0_0 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
ATerm CollectSplit_2_0 (ATerm x_164 (ATerm), ATerm y_164 (ATerm), ATerm t);
ATerm collect_split_2_0 (ATerm s_164 (ATerm), ATerm t_164 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm w_147 (ATerm), ATerm x_147 (ATerm), ATerm y_147 (ATerm), ATerm z_147 (ATerm), ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm r_14 (ATerm t);
ATerm nzip0_1_0 (ATerm h_148 (ATerm), ATerm t);
ATerm Propagate_0_0 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
ATerm term_to_matrix_0_0 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
ATerm match_to_matrix_0_0 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
ATerm match_to_dfa_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm f_143 (ATerm), ATerm t);
ATerm map_1_0 (ATerm r_160 (ATerm), ATerm t);
static ATerm e_11 (ATerm i_44, ATerm j_44, ATerm t);
static ATerm f_11 (ATerm o_42, ATerm p_42, ATerm t);
static ATerm h_11 (ATerm u_150 (ATerm), ATerm t_317, ATerm u_42, ATerm t);
static ATerm g_11 (ATerm k_42, ATerm l_42, ATerm t);
static ATerm v_15 (ATerm t);
static ATerm x_15 (ATerm t);
ATerm output_1_0 (ATerm x_176 (ATerm), ATerm t);
static ATerm v_148 (ATerm p_148, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_11 (ATerm q_42, ATerm t);
static ATerm j_11 (ATerm p_87, ATerm q_87, ATerm t);
static ATerm k_11 (ATerm k_44, ATerm l_44, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_150 (ATerm i_149, ATerm t);
static ATerm q_150 (ATerm m_149, ATerm n_149, ATerm o_149, ATerm t);
static ATerm r_150 (ATerm c_150, ATerm d_150, ATerm e_150, ATerm t);
static ATerm l_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm y_176 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
ATerm default_system_usage_2_0 (ATerm w_178 (ATerm), ATerm x_178 (ATerm), ATerm t);
static ATerm c_16 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_11 (ATerm k_48, ATerm l_48, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm u_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_11 (ATerm e_54, ATerm f_54, ATerm d_54, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_11 (ATerm m_51, ATerm n_51, ATerm t);
ATerm foldr_2_0 (ATerm m_166 (ATerm), ATerm n_166 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_152 (ATerm), ATerm t);
static ATerm i_17 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm v_11 (ATerm t_58, ATerm u_58, ATerm v_58, ATerm t);
ATerm lookup_table_0_1 (ATerm q_55, ATerm t);
ATerm new_hashtable_0_2 (ATerm b_59, ATerm c_59, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm o_11 (ATerm y_58, ATerm z_58, ATerm t);
static ATerm p_11 (ATerm d_59, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_160 (ATerm), ATerm t);
static ATerm w_11 (ATerm w_58, ATerm x_58, ATerm t);
static ATerm r_11 (ATerm x_55, ATerm y_55, ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm u_17 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm r_178 (ATerm), ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm a_18 (ATerm t);
ATerm parse_options_3_0 (ATerm o_178 (ATerm), ATerm p_178 (ATerm), ATerm q_178 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm r_176 (ATerm), ATerm s_176 (ATerm), ATerm t_176 (ATerm), ATerm u_176 (ATerm), ATerm v_176 (ATerm), ATerm t);
static ATerm i_18 (ATerm t);
static ATerm j_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_18 = ATgetArgument(t, 0);
      if(((ATgetType(r_18) != AT_LIST) || !(ATisEmpty(r_18))))
        _fail(t);
      {
        ATerm t_18 = ATgetArgument(t, 1);
        if(((ATgetType(t_18) != AT_LIST) || !(ATisEmpty(t_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm s_0 = NULL,v_0 = NULL,x_0 = NULL,y_0 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_18 = ATgetArgument(t, 0);
      if(((ATgetType(u_18) == AT_LIST) && !(ATisEmpty(u_18))))
        {
          s_0 = ATgetFirst((ATermList) u_18);
          v_0 = (ATerm) ATgetNext((ATermList) u_18);
        }
      else
        _fail(t);
      {
        ATerm y_18 = ATgetArgument(t, 1);
        if(((ATgetType(y_18) == AT_LIST) && !(ATisEmpty(y_18))))
          {
            x_0 = ATgetFirst((ATermList) y_18);
            y_0 = (ATerm) ATgetNext((ATermList) y_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_0, x_0), (ATerm) ATmakeAppl(sym__2, v_0, y_0));
  return(t);
}
static ATerm c_0 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym__2))
    {
      z_0 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_1), z_0);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  ATerm c_1 = NULL,e_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL;
  if(match_cons(t, sym__2))
    {
      c_1 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_1;
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm b_19 = ATgetArgument(t, 0);
            e_1 = ATgetArgument(t, 1);
            f_1 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(a_19);
        t = (ATerm) ATmakeAppl(sym_SDef_3, h_1, e_1, f_1);
      }
    else
      {
        t = z_18;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm d_19 = ATgetArgument(t, 0);
            e_1 = ATgetArgument(t, 1);
            f_1 = ATgetArgument(t, 2);
            g_1 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, h_1, e_1, f_1, g_1);
      }
  }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_19 = ATgetArgument(t, 0);
      if(((ATgetType(f_19) != AT_LIST) || !(ATisEmpty(f_19))))
        _fail(t);
      {
        ATerm h_19 = ATgetArgument(t, 1);
        if(((ATgetType(h_19) != AT_LIST) || !(ATisEmpty(h_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm t_2 = NULL,v_2 = NULL,x_2 = NULL,y_2 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_19 = ATgetArgument(t, 0);
      if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
        {
          t_2 = ATgetFirst((ATermList) k_19);
          v_2 = (ATerm) ATgetNext((ATermList) k_19);
        }
      else
        _fail(t);
      {
        ATerm l_19 = ATgetArgument(t, 1);
        if(((ATgetType(l_19) == AT_LIST) && !(ATisEmpty(l_19))))
          {
            x_2 = ATgetFirst((ATermList) l_19);
            y_2 = (ATerm) ATgetNext((ATermList) l_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_2, x_2), (ATerm) ATmakeAppl(sym__2, v_2, y_2));
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm i_4 = NULL,p_4 = NULL;
  if(match_cons(t, sym__2))
    {
      i_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_4), i_4);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm u_4 = NULL,x_4 = NULL,a_5 = NULL;
  if(match_cons(t, sym__2))
    {
      u_4 = ATgetArgument(t, 0);
      a_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4;
  {
    ATerm p_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_19);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_5);
      }
    else
      {
        t = p_19;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_19 = ATgetArgument(t, 0);
            x_4 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, a_5, x_4);
      }
  }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_19 = ATgetArgument(t, 0);
      if(((ATgetType(v_19) != AT_LIST) || !(ATisEmpty(v_19))))
        _fail(t);
      {
        ATerm w_19 = ATgetArgument(t, 1);
        if(((ATgetType(w_19) != AT_LIST) || !(ATisEmpty(w_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm l_6 = NULL,p_6 = NULL,y_6 = NULL,z_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_19 = ATgetArgument(t, 0);
      if(((ATgetType(z_19) == AT_LIST) && !(ATisEmpty(z_19))))
        {
          l_6 = ATgetFirst((ATermList) z_19);
          p_6 = (ATerm) ATgetNext((ATermList) z_19);
        }
      else
        _fail(t);
      {
        ATerm d_20 = ATgetArgument(t, 1);
        if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
          {
            y_6 = ATgetFirst((ATermList) d_20);
            z_6 = (ATerm) ATgetNext((ATermList) d_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_6, y_6), (ATerm) ATmakeAppl(sym__2, p_6, z_6));
  return(t);
}
static ATerm k_1 (ATerm t)
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
static ATerm l_1 (ATerm t)
{
  ATerm g_7 = NULL,k_7 = NULL,l_7 = NULL;
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      l_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_7;
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_7);
      }
    else
      {
        t = e_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_20 = ATgetArgument(t, 0);
            k_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_7, k_7);
      }
  }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_20 = ATgetArgument(t, 0);
      if(((ATgetType(i_20) != AT_LIST) || !(ATisEmpty(i_20))))
        _fail(t);
      {
        ATerm j_20 = ATgetArgument(t, 1);
        if(((ATgetType(j_20) != AT_LIST) || !(ATisEmpty(j_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_20 = ATgetArgument(t, 0);
      if(((ATgetType(k_20) == AT_LIST) && !(ATisEmpty(k_20))))
        {
          w_9 = ATgetFirst((ATermList) k_20);
          x_9 = (ATerm) ATgetNext((ATermList) k_20);
        }
      else
        _fail(t);
      {
        ATerm l_20 = ATgetArgument(t, 1);
        if(((ATgetType(l_20) == AT_LIST) && !(ATisEmpty(l_20))))
          {
            y_9 = ATgetFirst((ATermList) l_20);
            z_9 = (ATerm) ATgetNext((ATermList) l_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_9, y_9), (ATerm) ATmakeAppl(sym__2, x_9, z_9));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm a_10 = NULL,b_10 = NULL;
  if(match_cons(t, sym__2))
    {
      a_10 = ATgetArgument(t, 0);
      b_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_10), a_10);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm e_10 = NULL,g_10 = NULL,h_10 = NULL;
  if(match_cons(t, sym__2))
    {
      e_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_10;
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm o_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_10);
      }
    else
      {
        t = m_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm p_20 = ATgetArgument(t, 0);
            g_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_10, g_10);
      }
  }
  return(t);
}
static ATerm q_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_20 = ATgetArgument(t, 0);
      if(((ATgetType(q_20) != AT_LIST) || !(ATisEmpty(q_20))))
        _fail(t);
      {
        ATerm r_20 = ATgetArgument(t, 1);
        if(((ATgetType(r_20) != AT_LIST) || !(ATisEmpty(r_20))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm q_11 = NULL,t_11 = NULL,x_11 = NULL,y_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if(((ATgetType(t_20) == AT_LIST) && !(ATisEmpty(t_20))))
        {
          q_11 = ATgetFirst((ATermList) t_20);
          t_11 = (ATerm) ATgetNext((ATermList) t_20);
        }
      else
        _fail(t);
      {
        ATerm u_20 = ATgetArgument(t, 1);
        if(((ATgetType(u_20) == AT_LIST) && !(ATisEmpty(u_20))))
          {
            x_11 = ATgetFirst((ATermList) u_20);
            y_11 = (ATerm) ATgetNext((ATermList) u_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_11, x_11), (ATerm) ATmakeAppl(sym__2, t_11, y_11));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm a_12 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      a_12 = ATgetArgument(t, 0);
      b_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_12), a_12);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm d_12 = NULL,f_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      d_12 = ATgetArgument(t, 0);
      g_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12;
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_20);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_12);
      }
    else
      {
        t = v_20;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_21 = ATgetArgument(t, 0);
            f_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_12, f_12);
      }
  }
  return(t);
}
static ATerm v_1 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_21 = ATgetArgument(t, 0);
      if(((ATgetType(b_21) != AT_LIST) || !(ATisEmpty(b_21))))
        _fail(t);
      {
        ATerm c_21 = ATgetArgument(t, 1);
        if(((ATgetType(c_21) != AT_LIST) || !(ATisEmpty(c_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL,r_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_21 = ATgetArgument(t, 0);
      if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
        {
          m_13 = ATgetFirst((ATermList) d_21);
          n_13 = (ATerm) ATgetNext((ATermList) d_21);
        }
      else
        _fail(t);
      {
        ATerm e_21 = ATgetArgument(t, 1);
        if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
          {
            r_13 = ATgetFirst((ATermList) e_21);
            t_13 = (ATerm) ATgetNext((ATermList) e_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_13, r_13), (ATerm) ATmakeAppl(sym__2, n_13, t_13));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm u_13 = NULL,w_13 = NULL;
  if(match_cons(t, sym__2))
    {
      u_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_13), u_13);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm d_14 = NULL,f_14 = NULL,g_14 = NULL;
  if(match_cons(t, sym__2))
    {
      d_14 = ATgetArgument(t, 0);
      g_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_14;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_21 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_21);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_14);
      }
    else
      {
        t = f_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            f_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_14, f_14);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm y_141 (ATerm), ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL;
      d_13 = t;
      if(match_cons(t, sym_Let_2))
        {
          e_13 = ATgetArgument(t, 0);
          f_13 = ATgetArgument(t, 1);
          {
            ATerm e_0 = NULL,k_0 = NULL,m_0 = NULL,y_1 = NULL;
            t = SSLgetAnnotations(d_13);
            e_0 = t;
            t = e_13;
            t = y_141(t);
            m_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_13, m_0);
            t = genzip_4_0(a_0, b_0, c_0, h_0, t);
            k_0 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, k_0, f_13);
            y_1 = t;
            t = SSLsetAnnotations(y_1, e_0);
          }
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              e_13 = ATgetArgument(t, 0);
              f_13 = ATgetArgument(t, 1);
              g_13 = ATgetArgument(t, 2);
              {
                ATerm w_1 = NULL,k_2 = NULL,l_2 = NULL,z_1 = NULL;
                t = SSLgetAnnotations(d_13);
                w_1 = t;
                t = f_13;
                t = y_141(t);
                l_2 = t;
                t = (ATerm) ATmakeAppl(sym__2, f_13, l_2);
                t = genzip_4_0(i_0, q_0, b_1, d_1, t);
                k_2 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, e_13, k_2, g_13);
                z_1 = t;
                t = SSLsetAnnotations(z_1, w_1);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  e_13 = ATgetArgument(t, 0);
                  f_13 = ATgetArgument(t, 1);
                  g_13 = ATgetArgument(t, 2);
                  c_13 = ATgetArgument(t, 3);
                  {
                    ATerm v_5 = NULL,c_6 = NULL,f_6 = NULL,b_2 = NULL;
                    t = SSLgetAnnotations(d_13);
                    v_5 = t;
                    t = f_13;
                    t = y_141(t);
                    f_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_13, f_6);
                    t = genzip_4_0(i_1, j_1, k_1, l_1, t);
                    c_6 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, e_13, c_6, g_13, c_13);
                    b_2 = t;
                    t = SSLsetAnnotations(b_2, v_5);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_13 = ATgetArgument(t, 0);
                      f_13 = ATgetArgument(t, 1);
                      g_13 = ATgetArgument(t, 2);
                      c_13 = ATgetArgument(t, 3);
                      {
                        ATerm h_8 = NULL,t_8 = NULL,v_8 = NULL,c_2 = NULL;
                        t = SSLgetAnnotations(d_13);
                        h_8 = t;
                        t = f_13;
                        t = y_141(t);
                        v_8 = t;
                        t = (ATerm) ATmakeAppl(sym__2, f_13, v_8);
                        t = genzip_4_0(m_1, n_1, o_1, p_1, t);
                        t_8 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, e_13, t_8, g_13, c_13);
                        c_2 = t;
                        t = SSLsetAnnotations(c_2, h_8);
                      }
                    }
                  else
                    {
                      ATerm x_10 = NULL,c_11 = NULL,d_11 = NULL,d_2 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          e_13 = ATgetArgument(t, 0);
                          f_13 = ATgetArgument(t, 1);
                          g_13 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(d_13);
                      x_10 = t;
                      t = f_13;
                      t = y_141(t);
                      d_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, f_13, d_11);
                      t = genzip_4_0(q_1, r_1, s_1, t_1, t);
                      c_11 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, e_13, c_11, g_13);
                      d_2 = t;
                      t = SSLsetAnnotations(d_2, x_10);
                    }
                }
            }
        }
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm m_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_1 (ATerm t);
            static ATerm u_1 (ATerm t)
            {
              ATerm k_13 = NULL,l_13 = NULL;
              l_13 = t;
              t = y_141(t);
              k_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_13, k_13);
              t = genzip_4_0(v_1, x_1, a_2, f_2, t);
              return(t);
            }
            t = dynrule_cong_6_0(_id, u_1, _id, _id, _id, _id, t);
            LocalPopChoice(p_21);
          }
        else
          {
            t = m_21;
            {
              ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,v_12 = NULL,y_12 = NULL,e_2 = NULL;
              m_15 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  n_15 = ATgetArgument(t, 0);
                  o_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_15);
              v_12 = t;
              t = n_15;
              t = y_141(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_12 = ATgetFirst((ATermList) t);
                  {
                    ATerm q_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, y_12, o_15);
              e_2 = t;
              t = SSLsetAnnotations(e_2, v_12);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm z_141 (ATerm), ATerm a_142 (ATerm), ATerm b_142 (ATerm), ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,q_24 = NULL,z_24 = NULL,d_25 = NULL;
  q_24 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_24 = ATgetArgument(t, 0);
      d_25 = ATgetArgument(t, 1);
      {
        ATerm v_13 = NULL,z_13 = NULL,a_14 = NULL,o_2 = NULL;
        t = SSLgetAnnotations(q_24);
        v_13 = t;
        t = z_24;
        t = z_141(t);
        z_13 = t;
        t = d_25;
        t = z_141(t);
        a_14 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, z_13, a_14);
        o_2 = t;
        t = SSLsetAnnotations(o_2, v_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_24 = ATgetArgument(t, 0);
          d_25 = ATgetArgument(t, 1);
          o_24 = ATgetArgument(t, 2);
          {
            ATerm x_14 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,p_2 = NULL;
            t = SSLgetAnnotations(q_24);
            x_14 = t;
            t = z_24;
            t = b_142(t);
            f_15 = t;
            t = d_25;
            t = b_142(t);
            g_15 = t;
            t = o_24;
            t = z_141(t);
            h_15 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, f_15, g_15, h_15);
            p_2 = t;
            t = SSLsetAnnotations(p_2, x_14);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              z_24 = ATgetArgument(t, 0);
              d_25 = ATgetArgument(t, 1);
              o_24 = ATgetArgument(t, 2);
              n_24 = ATgetArgument(t, 3);
              {
                ATerm d_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,q_2 = NULL;
                t = SSLgetAnnotations(q_24);
                d_16 = t;
                t = z_24;
                t = b_142(t);
                i_16 = t;
                t = d_25;
                t = b_142(t);
                j_16 = t;
                t = o_24;
                t = b_142(t);
                k_16 = t;
                t = n_24;
                t = z_141(t);
                l_16 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, i_16, j_16, k_16, l_16);
                q_2 = t;
                t = SSLsetAnnotations(q_2, d_16);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  z_24 = ATgetArgument(t, 0);
                  d_25 = ATgetArgument(t, 1);
                  o_24 = ATgetArgument(t, 2);
                  n_24 = ATgetArgument(t, 3);
                  {
                    ATerm h_17 = NULL,n_17 = NULL,p_17 = NULL,s_17 = NULL,t_17 = NULL,r_2 = NULL;
                    t = SSLgetAnnotations(q_24);
                    h_17 = t;
                    t = z_24;
                    t = b_142(t);
                    n_17 = t;
                    t = d_25;
                    t = b_142(t);
                    p_17 = t;
                    t = o_24;
                    t = b_142(t);
                    s_17 = t;
                    t = n_24;
                    t = z_141(t);
                    t_17 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, n_17, p_17, s_17, t_17);
                    r_2 = t;
                    t = SSLsetAnnotations(r_2, h_17);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      z_24 = ATgetArgument(t, 0);
                      d_25 = ATgetArgument(t, 1);
                      o_24 = ATgetArgument(t, 2);
                      {
                        ATerm v_18 = NULL,c_19 = NULL,m_19 = NULL,n_19 = NULL,u_2 = NULL;
                        t = SSLgetAnnotations(q_24);
                        v_18 = t;
                        t = z_24;
                        t = b_142(t);
                        c_19 = t;
                        t = d_25;
                        t = b_142(t);
                        m_19 = t;
                        t = o_24;
                        t = b_142(t);
                        n_19 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, c_19, m_19, n_19);
                        u_2 = t;
                        t = SSLsetAnnotations(u_2, v_18);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          z_24 = ATgetArgument(t, 0);
                          d_25 = ATgetArgument(t, 1);
                          {
                            ATerm s_20 = NULL,y_20 = NULL,z_20 = NULL,w_2 = NULL;
                            t = SSLgetAnnotations(q_24);
                            s_20 = t;
                            t = z_24;
                            t = b_142(t);
                            y_20 = t;
                            t = d_25;
                            t = z_141(t);
                            z_20 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, y_20, z_20);
                            w_2 = t;
                            t = SSLsetAnnotations(w_2, s_20);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              z_24 = ATgetArgument(t, 0);
                              d_25 = ATgetArgument(t, 1);
                              {
                                ATerm i_21 = NULL,n_21 = NULL,o_21 = NULL,z_2 = NULL;
                                t = SSLgetAnnotations(q_24);
                                i_21 = t;
                                t = z_24;
                                t = b_142(t);
                                n_21 = t;
                                t = d_25;
                                t = z_141(t);
                                o_21 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, n_21, o_21);
                                z_2 = t;
                                t = SSLsetAnnotations(z_2, i_21);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  z_24 = ATgetArgument(t, 0);
                                  d_25 = ATgetArgument(t, 1);
                                  {
                                    ATerm y_21 = NULL,b_22 = NULL,c_22 = NULL,a_3 = NULL;
                                    t = SSLgetAnnotations(q_24);
                                    y_21 = t;
                                    t = z_24;
                                    t = b_142(t);
                                    b_22 = t;
                                    t = d_25;
                                    t = z_141(t);
                                    c_22 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, b_22, c_22);
                                    a_3 = t;
                                    t = SSLsetAnnotations(a_3, y_21);
                                  }
                                }
                              else
                                {
                                  ATerm n_22 = NULL,q_22 = NULL,r_22 = NULL,b_3 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      z_24 = ATgetArgument(t, 0);
                                      d_25 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(q_24);
                                  n_22 = t;
                                  t = z_24;
                                  t = b_142(t);
                                  q_22 = t;
                                  t = d_25;
                                  t = z_141(t);
                                  r_22 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, q_22, r_22);
                                  b_3 = t;
                                  t = SSLsetAnnotations(b_3, n_22);
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
ATerm dynrule_sargs_1_0 (ATerm d_142 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,q_28 = NULL,v_28 = NULL;
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          n_28 = ATgetArgument(t, 0);
          {
            ATerm t_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_21);
      t = n_28;
      if(match_cons(t, sym_DynRuleId_1))
        {
          q_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_28;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm u_21 = ATgetArgument(t, 0);
          v_28 = ATgetArgument(t, 1);
          {
            ATerm v_21 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_28;
    }
  else
    {
      t = r_21;
      {
        ATerm w_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                n_28 = ATgetArgument(t, 0);
                {
                  ATerm z_21 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(x_21);
            t = n_28;
            if(match_cons(t, sym_DynRuleId_1))
              {
                q_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_28;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm a_22 = ATgetArgument(t, 0);
                v_28 = ATgetArgument(t, 1);
                {
                  ATerm d_22 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = v_28;
          }
        else
          {
            t = w_21;
            if(match_cons(t, sym_AddDynRule_2))
              {
                n_28 = ATgetArgument(t, 0);
                {
                  ATerm e_22 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = n_28;
            if(match_cons(t, sym_DynRuleId_1))
              {
                q_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_28;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm f_22 = ATgetArgument(t, 0);
                v_28 = ATgetArgument(t, 1);
                {
                  ATerm g_22 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = v_28;
          }
      }
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm v_29 = NULL;
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_29 = ATgetArgument(t, 0);
          {
            ATerm j_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_22);
      t = v_29;
    }
  else
    {
      t = h_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_29;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm d_30 = NULL;
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_30 = ATgetArgument(t, 0);
          {
            ATerm m_22 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_22);
      t = d_30;
    }
  else
    {
      t = k_22;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_30 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_30;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm l_29 = NULL;
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm s_22 = ATgetArgument(t, 0);
          l_29 = ATgetArgument(t, 1);
          {
            ATerm t_22 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_22);
      t = l_29;
      t = map_1_0(g_2, t);
    }
  else
    {
      t = o_22;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm u_22 = ATgetArgument(t, 0);
          l_29 = ATgetArgument(t, 1);
          {
            ATerm v_22 = ATgetArgument(t, 2);
          }
          {
            ATerm w_22 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = l_29;
      t = map_1_0(h_2, t);
    }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm l_30 = NULL;
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_30 = ATgetArgument(t, 0);
          {
            ATerm z_22 = ATgetArgument(t, 1);
          }
          {
            ATerm a_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_22);
      t = l_30;
    }
  else
    {
      t = x_22;
      if(match_cons(t, sym_SDefT_4))
        {
          l_30 = ATgetArgument(t, 0);
          {
            ATerm b_23 = ATgetArgument(t, 1);
          }
          {
            ATerm c_23 = ATgetArgument(t, 2);
          }
          {
            ATerm d_23 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = l_30;
    }
  return(t);
}
static ATerm j_8 (ATerm w_35, ATerm v_35, ATerm t)
{
  t = w_35;
  t = map_1_0(i_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm q_119 (ATerm), ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,l_3 = NULL;
  v_30 = t;
  if(match_cons(t, sym_SVar_1))
    {
      t_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_30);
  s_30 = t;
  t = t_30;
  t = q_119(t);
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, u_30);
  l_3 = t;
  t = SSLsetAnnotations(l_3, s_30);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,k_31 = NULL;
      e_31 = t;
      if(match_cons(t, sym_Let_2))
        {
          f_31 = ATgetArgument(t, 0);
          g_31 = ATgetArgument(t, 1);
          t = e_31;
          t = j_8(f_31, g_31, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              f_31 = ATgetArgument(t, 0);
              g_31 = ATgetArgument(t, 1);
              h_31 = ATgetArgument(t, 2);
              t = g_31;
              t = map_1_0(m_2, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  f_31 = ATgetArgument(t, 0);
                  g_31 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, f_31);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_31 = ATgetArgument(t, 0);
                      g_31 = ATgetArgument(t, 1);
                      h_31 = ATgetArgument(t, 2);
                      k_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_31;
                  t = map_1_0(n_2, t);
                }
            }
        }
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
      {
        ATerm g_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(i_23);
          }
        else
          {
            t = g_23;
            t = dynrule_sargs_1_0(s_2, t);
          }
      }
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm x_31 = NULL;
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_31 = ATgetArgument(t, 0);
          {
            ATerm l_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_23);
      t = x_31;
    }
  else
    {
      t = j_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_31;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm o_32 = NULL;
  ATerm m_23 = t;
  int n_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_32 = ATgetArgument(t, 0);
          {
            ATerm r_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_23);
      t = o_32;
    }
  else
    {
      t = m_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_32;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = map_1_0(c_3, t);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm u_32 = NULL;
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_32 = ATgetArgument(t, 0);
          {
            ATerm u_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_23);
      t = u_32;
    }
  else
    {
      t = s_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_32;
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  t = rename_4_0(SVar_1_0, j_2, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm f_142 (ATerm), ATerm g_142 (ATerm), ATerm h_142 (ATerm), ATerm i_142 (ATerm), ATerm j_142 (ATerm), ATerm k_142 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
  a_39 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      b_39 = ATgetArgument(t, 0);
      c_39 = ATgetArgument(t, 1);
      {
        ATerm h_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,x_23 = NULL,y_23 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,j_24 = NULL,k_24 = NULL,p_3 = NULL,o_3 = NULL,n_3 = NULL;
        t = SSLgetAnnotations(a_39);
        h_23 = t;
        t = b_39;
        if(match_cons(t, sym_DynRuleId_1))
          {
            q_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_39);
        p_23 = t;
        t = q_23;
        if(match_cons(t, sym_RDecT_3))
          {
            d_24 = ATgetArgument(t, 0);
            e_24 = ATgetArgument(t, 1);
            f_24 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_23);
        y_23 = t;
        t = d_24;
        t = f_142(t);
        g_24 = t;
        t = e_24;
        t = g_142(t);
        h_24 = t;
        t = f_24;
        t = h_142(t);
        j_24 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, g_24, h_24, j_24);
        n_3 = t;
        t = SSLsetAnnotations(n_3, y_23);
        k_24 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, k_24);
        o_3 = t;
        t = SSLsetAnnotations(o_3, p_23);
        x_23 = t;
        t = c_39;
        t = i_142(t);
        o_23 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, x_23, o_23);
        p_3 = t;
        t = SSLsetAnnotations(p_3, h_23);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          b_39 = ATgetArgument(t, 0);
          c_39 = ATgetArgument(t, 1);
          {
            ATerm v_24 = NULL,y_24 = NULL,a_25 = NULL,b_25 = NULL,c_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,t_3 = NULL,s_3 = NULL,r_3 = NULL,q_3 = NULL;
            t = SSLgetAnnotations(a_39);
            v_24 = t;
            t = b_39;
            if(match_cons(t, sym_DynRuleId_1))
              {
                k_25 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_39);
            j_25 = t;
            t = k_25;
            if(match_cons(t, sym_RDecT_3))
              {
                n_25 = ATgetArgument(t, 0);
                o_25 = ATgetArgument(t, 1);
                p_25 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_25);
            m_25 = t;
            t = n_25;
            t = f_142(t);
            q_25 = t;
            t = o_25;
            t = g_142(t);
            r_25 = t;
            t = p_25;
            t = h_142(t);
            s_25 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, q_25, r_25, s_25);
            q_3 = t;
            t = SSLsetAnnotations(q_3, m_25);
            t_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, t_25);
            r_3 = t;
            t = SSLsetAnnotations(r_3, j_25);
            l_25 = t;
            t = c_39;
            if(match_cons(t, sym_Rule_3))
              {
                a_25 = ATgetArgument(t, 0);
                b_25 = ATgetArgument(t, 1);
                c_25 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_39);
            y_24 = t;
            t = a_25;
            t = i_142(t);
            f_25 = t;
            t = b_25;
            t = j_142(t);
            g_25 = t;
            t = c_25;
            t = k_142(t);
            h_25 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, f_25, g_25, h_25);
            s_3 = t;
            t = SSLsetAnnotations(s_3, y_24);
            i_25 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, l_25, i_25);
            t_3 = t;
            t = SSLsetAnnotations(t_3, v_24);
          }
        }
      else
        {
          ATerm b_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_3 = NULL,w_3 = NULL,v_3 = NULL,u_3 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              b_39 = ATgetArgument(t, 0);
              c_39 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_39);
          b_26 = t;
          t = b_39;
          if(match_cons(t, sym_DynRuleId_1))
            {
              n_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_39);
          m_26 = t;
          t = n_26;
          if(match_cons(t, sym_RDecT_3))
            {
              q_26 = ATgetArgument(t, 0);
              r_26 = ATgetArgument(t, 1);
              s_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_26);
          p_26 = t;
          t = q_26;
          t = f_142(t);
          t_26 = t;
          t = r_26;
          t = g_142(t);
          u_26 = t;
          t = s_26;
          t = h_142(t);
          v_26 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, t_26, u_26, v_26);
          u_3 = t;
          t = SSLsetAnnotations(u_3, p_26);
          w_26 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, w_26);
          v_3 = t;
          t = SSLsetAnnotations(v_3, m_26);
          o_26 = t;
          t = c_39;
          if(match_cons(t, sym_Rule_3))
            {
              f_26 = ATgetArgument(t, 0);
              g_26 = ATgetArgument(t, 1);
              h_26 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_39);
          e_26 = t;
          t = f_26;
          t = i_142(t);
          i_26 = t;
          t = g_26;
          t = j_142(t);
          j_26 = t;
          t = h_26;
          t = k_142(t);
          k_26 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, i_26, j_26, k_26);
          w_3 = t;
          t = SSLsetAnnotations(w_3, e_26);
          l_26 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, o_26, l_26);
          x_3 = t;
          t = SSLsetAnnotations(x_3, b_26);
        }
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_23 = ATgetArgument(t, 0);
      if(((ATgetType(v_23) != AT_LIST) || !(ATisEmpty(v_23))))
        _fail(t);
      {
        ATerm w_23 = ATgetArgument(t, 1);
        if(((ATgetType(w_23) != AT_LIST) || !(ATisEmpty(w_23))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,r_28 = NULL,s_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_23 = ATgetArgument(t, 0);
      if(((ATgetType(z_23) == AT_LIST) && !(ATisEmpty(z_23))))
        {
          o_28 = ATgetFirst((ATermList) z_23);
          p_28 = (ATerm) ATgetNext((ATermList) z_23);
        }
      else
        _fail(t);
      {
        ATerm a_24 = ATgetArgument(t, 1);
        if(((ATgetType(a_24) == AT_LIST) && !(ATisEmpty(a_24))))
          {
            r_28 = ATgetFirst((ATermList) a_24);
            s_28 = (ATerm) ATgetNext((ATermList) a_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_28, r_28), (ATerm) ATmakeAppl(sym__2, p_28, s_28));
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm t_28 = NULL,z_28 = NULL;
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      z_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_28), t_28);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm c_29 = NULL,f_29 = NULL,g_29 = NULL;
  if(match_cons(t, sym__2))
    {
      c_29 = ATgetArgument(t, 0);
      g_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_29;
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm i_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_24);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_29);
      }
    else
      {
        t = b_24;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_24 = ATgetArgument(t, 0);
            f_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_29, f_29);
      }
  }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_24 = ATgetArgument(t, 0);
      if(((ATgetType(m_24) != AT_LIST) || !(ATisEmpty(m_24))))
        _fail(t);
      {
        ATerm p_24 = ATgetArgument(t, 1);
        if(((ATgetType(p_24) != AT_LIST) || !(ATisEmpty(p_24))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm d_31 = NULL,i_31 = NULL,j_31 = NULL,p_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_24 = ATgetArgument(t, 0);
      if(((ATgetType(r_24) == AT_LIST) && !(ATisEmpty(r_24))))
        {
          d_31 = ATgetFirst((ATermList) r_24);
          i_31 = (ATerm) ATgetNext((ATermList) r_24);
        }
      else
        _fail(t);
      {
        ATerm s_24 = ATgetArgument(t, 1);
        if(((ATgetType(s_24) == AT_LIST) && !(ATisEmpty(s_24))))
          {
            j_31 = ATgetFirst((ATermList) s_24);
            p_31 = (ATerm) ATgetNext((ATermList) s_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_31, j_31), (ATerm) ATmakeAppl(sym__2, i_31, p_31));
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL;
  if(match_cons(t, sym__2))
    {
      r_31 = ATgetArgument(t, 0);
      s_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_31), r_31);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm w_31 = NULL,b_32 = NULL,c_32 = NULL;
  if(match_cons(t, sym__2))
    {
      w_31 = ATgetArgument(t, 0);
      c_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_31;
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_24);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_32);
      }
    else
      {
        t = t_24;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_24 = ATgetArgument(t, 0);
            b_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_32, b_32);
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_25 = ATgetArgument(t, 0);
      if(((ATgetType(e_25) != AT_LIST) || !(ATisEmpty(e_25))))
        _fail(t);
      {
        ATerm u_25 = ATgetArgument(t, 1);
        if(((ATgetType(u_25) != AT_LIST) || !(ATisEmpty(u_25))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_25 = ATgetArgument(t, 0);
      if(((ATgetType(v_25) == AT_LIST) && !(ATisEmpty(v_25))))
        {
          w_33 = ATgetFirst((ATermList) v_25);
          x_33 = (ATerm) ATgetNext((ATermList) v_25);
        }
      else
        _fail(t);
      {
        ATerm w_25 = ATgetArgument(t, 1);
        if(((ATgetType(w_25) == AT_LIST) && !(ATisEmpty(w_25))))
          {
            y_33 = ATgetFirst((ATermList) w_25);
            z_33 = (ATerm) ATgetNext((ATermList) w_25);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_33, y_33), (ATerm) ATmakeAppl(sym__2, x_33, z_33));
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL;
  if(match_cons(t, sym__2))
    {
      a_34 = ATgetArgument(t, 0);
      b_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_34), a_34);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm j_34 = NULL,l_34 = NULL,o_34 = NULL;
  if(match_cons(t, sym__2))
    {
      j_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_34;
  {
    ATerm x_25 = t;
    int y_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_25);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_34);
      }
    else
      {
        t = x_25;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_26 = ATgetArgument(t, 0);
            l_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_34, l_34);
      }
  }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_26 = ATgetArgument(t, 0);
      if(((ATgetType(c_26) != AT_LIST) || !(ATisEmpty(c_26))))
        _fail(t);
      {
        ATerm d_26 = ATgetArgument(t, 1);
        if(((ATgetType(d_26) != AT_LIST) || !(ATisEmpty(d_26))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_26 = ATgetArgument(t, 0);
      if(((ATgetType(x_26) == AT_LIST) && !(ATisEmpty(x_26))))
        {
          r_48 = ATgetFirst((ATermList) x_26);
          s_48 = (ATerm) ATgetNext((ATermList) x_26);
        }
      else
        _fail(t);
      {
        ATerm y_26 = ATgetArgument(t, 1);
        if(((ATgetType(y_26) == AT_LIST) && !(ATisEmpty(y_26))))
          {
            t_48 = ATgetFirst((ATermList) y_26);
            u_48 = (ATerm) ATgetNext((ATermList) y_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_48, t_48), (ATerm) ATmakeAppl(sym__2, s_48, u_48));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  if(match_cons(t, sym__2))
    {
      v_48 = ATgetArgument(t, 0);
      w_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_48), v_48);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm a_49 = NULL,c_49 = NULL,j_49 = NULL;
  if(match_cons(t, sym__2))
    {
      a_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_49;
  {
    ATerm z_26 = t;
    int a_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_27 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_27);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_49);
      }
    else
      {
        t = z_26;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm c_27 = ATgetArgument(t, 0);
            c_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_49, c_49);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm u_141 (ATerm), ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_47 = NULL,x_47 = NULL,y_47 = NULL,c_48 = NULL,d_48 = NULL;
      w_47 = t;
      if(match_cons(t, sym_Scope_2))
        {
          x_47 = ATgetArgument(t, 0);
          y_47 = ATgetArgument(t, 1);
          {
            ATerm j_27 = NULL,n_27 = NULL,k_4 = NULL;
            t = SSLgetAnnotations(w_47);
            j_27 = t;
            t = x_47;
            t = u_141(t);
            n_27 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, n_27, y_47);
            k_4 = t;
            t = SSLsetAnnotations(k_4, j_27);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              x_47 = ATgetArgument(t, 0);
              {
                ATerm w_27 = NULL,l_4 = NULL;
                t = SSLgetAnnotations(w_47);
                w_27 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, x_47);
                l_4 = t;
                t = SSLsetAnnotations(l_4, w_27);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  x_47 = ATgetArgument(t, 0);
                  y_47 = ATgetArgument(t, 1);
                  c_48 = ATgetArgument(t, 2);
                  {
                    ATerm f_28 = NULL,k_28 = NULL,l_28 = NULL,m_4 = NULL;
                    t = SSLgetAnnotations(w_47);
                    f_28 = t;
                    t = c_48;
                    t = u_141(t);
                    l_28 = t;
                    t = (ATerm) ATmakeAppl(sym__2, c_48, l_28);
                    t = genzip_4_0(d_3, e_3, f_3, g_3, t);
                    k_28 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, x_47, y_47, k_28);
                    m_4 = t;
                    t = SSLsetAnnotations(m_4, f_28);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_47 = ATgetArgument(t, 0);
                      y_47 = ATgetArgument(t, 1);
                      c_48 = ATgetArgument(t, 2);
                      d_48 = ATgetArgument(t, 3);
                      {
                        ATerm q_30 = NULL,a_31 = NULL,b_31 = NULL,n_4 = NULL;
                        t = SSLgetAnnotations(w_47);
                        q_30 = t;
                        t = c_48;
                        t = u_141(t);
                        b_31 = t;
                        t = (ATerm) ATmakeAppl(sym__2, c_48, b_31);
                        t = genzip_4_0(h_3, i_3, j_3, k_3, t);
                        a_31 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, x_47, y_47, a_31, d_48);
                        n_4 = t;
                        t = SSLsetAnnotations(n_4, q_30);
                      }
                    }
                  else
                    {
                      ATerm g_33 = NULL,t_33 = NULL,u_33 = NULL,o_4 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          x_47 = ATgetArgument(t, 0);
                          y_47 = ATgetArgument(t, 1);
                          c_48 = ATgetArgument(t, 2);
                          d_48 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(w_47);
                      g_33 = t;
                      t = c_48;
                      t = u_141(t);
                      u_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_48, u_33);
                      t = genzip_4_0(m_3, y_3, z_3, a_4, t);
                      t_33 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, x_47, y_47, t_33, d_48);
                      o_4 = t;
                      t = SSLsetAnnotations(o_4, g_33);
                    }
                }
            }
        }
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      {
        static ATerm b_4 (ATerm t);
        static ATerm b_4 (ATerm t)
        {
          ATerm j_48 = NULL,m_48 = NULL;
          m_48 = t;
          t = u_141(t);
          j_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_48, j_48);
          t = genzip_4_0(c_4, d_4, e_4, f_4, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, b_4, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm Var_1_0 (ATerm m_119 (ATerm), ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,z_4 = NULL;
  h_50 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_50);
  e_50 = t;
  t = f_50;
  t = m_119(t);
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_50);
  z_4 = t;
  t = SSLsetAnnotations(z_4, e_50);
  return(t);
}
static ATerm k_8 (ATerm q_168 (ATerm), ATerm r_168 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_81, ATerm m_81, ATerm l_81, ATerm t)
{
  static ATerm g_4 (ATerm t);
  static ATerm h_4 (ATerm t);
  static ATerm g_4 (ATerm t)
  {
    ATerm j_50 = NULL;
    j_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_50, l_81);
    t = q_168(t);
    return(t);
  }
  static ATerm h_4 (ATerm t)
  {
    ATerm k_50 = NULL;
    k_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_50, m_81);
    t = q_168(t);
    return(t);
  }
  t = n_81;
  t = r_168(g_4, h_4, _id, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if(((ATgetType(f_27) != AT_LIST) || !(ATisEmpty(f_27))))
        _fail(t);
      {
        ATerm g_27 = ATgetArgument(t, 1);
        if(((ATgetType(g_27) != AT_LIST) || !(ATisEmpty(g_27))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      if(((ATgetType(h_27) == AT_LIST) && !(ATisEmpty(h_27))))
        {
          t_50 = ATgetFirst((ATermList) h_27);
          u_50 = (ATerm) ATgetNext((ATermList) h_27);
        }
      else
        _fail(t);
      {
        ATerm i_27 = ATgetArgument(t, 1);
        if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
          {
            v_50 = ATgetFirst((ATermList) i_27);
            w_50 = (ATerm) ATgetNext((ATermList) i_27);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_50, v_50), (ATerm) ATmakeAppl(sym__2, u_50, w_50));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm x_50 = NULL,y_50 = NULL;
  if(match_cons(t, sym__2))
    {
      x_50 = ATgetArgument(t, 0);
      y_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_50), x_50);
  return(t);
}
static ATerm l_8 (ATerm k_168 (ATerm), ATerm l_168 (ATerm (ATerm), ATerm), ATerm f_81, ATerm i_81, ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,s_50 = NULL;
  t = f_81;
  t = k_168(t);
  n_50 = t;
  t = map_1_0(new_0_0, t);
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_50, o_50);
  t = genzip_4_0(j_4, q_4, r_4, _id, t);
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_50, i_81);
  t = conc_0_0(t);
  p_50 = t;
  t = f_81;
  {
    static ATerm s_4 (ATerm t);
    static ATerm s_4 (ATerm t)
    {
      t = o_50;
      return(t);
    }
    t = l_168(s_4, t);
  }
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_50, i_81, p_50);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL;
  q_51 = t;
  if(match_cons(t, sym__2))
    {
      r_51 = ATgetArgument(t, 0);
      s_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_51 = ATgetFirst((ATermList) t);
      u_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_51;
  if(match_cons(t, sym__2))
    {
      i_51 = ATgetArgument(t, 0);
      j_51 = ATgetArgument(t, 1);
      {
        ATerm k_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_51;
            if((r_51 != t))
              {
                _fail(t);
              }
            t = j_51;
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
            t = (ATerm) ATmakeAppl(sym__2, r_51, u_51);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, r_51, u_51);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm y_168 (ATerm), ATerm t)
{
  static ATerm v_53 (ATerm t);
  static ATerm v_53 (ATerm t)
  {
    ATerm m_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_168(t);
        LocalPopChoice(o_27);
      }
    else
      {
        t = m_27;
        {
          ATerm q_53 = NULL,r_53 = NULL,u_53 = NULL;
          static ATerm t_4 (ATerm t);
          static ATerm t_4 (ATerm t)
          {
            ATerm g_35 = NULL;
            g_35 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_35, not_null(u_53));
            t = v_53(t);
            return(t);
          }
          q_53 = t;
          if(match_cons(t, sym__2))
            {
              r_53 = ATgetArgument(t, 0);
              if(((u_53 != NULL) && (u_53 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                u_53 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_53;
          t = SRTS_all(t_4, t);
        }
      }
    return(t);
  }
  t = v_53(t);
  return(t);
}
ATerm rename_4_0 (ATerm f_168 (ATerm (ATerm), ATerm), ATerm g_168 (ATerm), ATerm h_168 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_168 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_54 = NULL;
  static ATerm q_56 (ATerm t);
  static ATerm q_56 (ATerm t)
  {
    static ATerm v_4 (ATerm t);
    static ATerm v_4 (ATerm t)
    {
      ATerm d_55 = NULL,j_55 = NULL,k_55 = NULL;
      d_55 = t;
      if(match_cons(t, sym__2))
        {
          j_55 = ATgetArgument(t, 0);
          k_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_4 (ATerm t);
            static ATerm w_4 (ATerm t)
            {
              ATerm h_56 = NULL;
              h_56 = t;
              t = (ATerm) ATmakeAppl(sym__2, h_56, k_55);
              t = lookup_0_0(t);
              return(t);
            }
            t = j_55;
            t = f_168(w_4, t);
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            {
              ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
              t = d_55;
              t = l_8(g_168, i_168, j_55, k_55, t);
              if(match_cons(t, sym__3))
                {
                  z_35 = ATgetArgument(t, 0);
                  a_36 = ATgetArgument(t, 1);
                  b_36 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = k_8(q_56, h_168, z_35, a_36, b_36, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(v_4, t);
    return(t);
  }
  o_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_54, (ATerm) ATempty);
  t = q_56(t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
        ATerm t_27 = t;
        int u_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                s_57 = ATgetArgument(t, 0);
                t_57 = ATgetArgument(t, 1);
                u_57 = ATgetArgument(t, 2);
                v_57 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = u_57;
            t = map_1_0(b_5, t);
            LocalPopChoice(u_27);
          }
        else
          {
            t = t_27;
            {
              ATerm v_27 = t;
              int x_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Bind8_0_0(t);
                  LocalPopChoice(x_27);
                }
              else
                {
                  t = v_27;
                  t = dynrule_targs_1_0(g_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm g_58 = NULL;
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_58 = ATgetArgument(t, 0);
          {
            ATerm a_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_27);
      t = g_58;
    }
  else
    {
      t = y_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_58;
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = map_1_0(h_5, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm p_58 = NULL;
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_58 = ATgetArgument(t, 0);
          {
            ATerm d_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_28);
      t = p_58;
    }
  else
    {
      t = b_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_58;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, y_4, tboundin_3_0, tpaste_1_0, t);
  t = srename_0_0(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm e_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm h_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(g_28);
      {
        ATerm g_59 = NULL,h_59 = NULL;
        g_59 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm i_28 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        h_59 = t;
        t = SSLgetAnnotations(g_59);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_28 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) j_28) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_28 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(m_28) != AT_LIST) || !(ATisEmpty(m_28))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_59;
      }
    }
  else
    {
      t = e_28;
      {
        ATerm u_28 = t;
        int w_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm x_28 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) x_28) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm y_28 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(w_28);
            _fail(t);
          }
        else
          {
            t = u_28;
          }
      }
    }
  return(t);
}
static ATerm o_9 (ATerm w_111, ATerm v_111, ATerm t)
{
  t = w_111;
  t = topdown_1_0(i_5, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, w_111);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm u_59 = NULL,y_59 = NULL,a_60 = NULL,b_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_60 = ATgetArgument(t, 0);
      h_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_60;
  if(match_cons(t, sym_Match_1))
    {
      b_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_60;
  if(match_cons(t, sym_Var_1))
    {
      g_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_60;
  if(match_cons(t, sym_Seq_2))
    {
      i_60 = ATgetArgument(t, 0);
      y_59 = ATgetArgument(t, 1);
      t = i_60;
      if(match_cons(t, sym_Build_1))
        {
          j_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_60;
      if(match_cons(t, sym_Var_1))
        {
          u_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_59;
      if((g_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_60)), y_59);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_60;
      if(match_cons(t, sym_Var_1))
        {
          j_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_60;
      if((g_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_60));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm t_60 = NULL,v_60 = NULL,x_60 = NULL,y_60 = NULL,d_61 = NULL,h_61 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_60 = ATgetArgument(t, 0);
      d_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_60;
  if(match_cons(t, sym_Build_1))
    {
      y_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_61;
  if(match_cons(t, sym_Seq_2))
    {
      h_61 = ATgetArgument(t, 0);
      v_60 = ATgetArgument(t, 1);
      t = h_61;
      if(match_cons(t, sym_Match_1))
        {
          t_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_60;
      if((y_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_60), v_60);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          h_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_61;
      if((y_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, y_60);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm l_62 = NULL,q_62 = NULL,a_63 = NULL,f_63 = NULL,k_63 = NULL,l_63 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_63 = ATgetArgument(t, 0);
      k_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_63;
  if(match_cons(t, sym_Match_1))
    {
      f_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_63;
  if(match_cons(t, sym_Seq_2))
    {
      l_63 = ATgetArgument(t, 0);
      q_62 = ATgetArgument(t, 1);
      t = l_63;
      if(match_cons(t, sym_Match_1))
        {
          l_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_62;
      if((f_63 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_63), q_62);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          l_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_63;
      if((f_63 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, f_63);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm t_63 = NULL,u_63 = NULL,v_63 = NULL,x_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_63 = ATgetArgument(t, 0);
      z_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_63;
  if(match_cons(t, sym_Build_1))
    {
      ATerm a_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_63;
  if(match_cons(t, sym_Seq_2))
    {
      a_64 = ATgetArgument(t, 0);
      b_64 = ATgetArgument(t, 1);
      t = a_64;
      if(match_cons(t, sym_PrimT_3))
        {
          t_63 = ATgetArgument(t, 0);
          u_63 = ATgetArgument(t, 1);
          v_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, t_63, u_63, v_63), b_64);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          a_64 = ATgetArgument(t, 0);
          b_64 = ATgetArgument(t, 1);
          c_64 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, a_64, b_64, c_64);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,y_64 = NULL,h_65 = NULL,i_65 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_64 = ATgetArgument(t, 0);
      h_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_64;
  if(match_cons(t, sym_Build_1))
    {
      ATerm b_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_65;
  if(match_cons(t, sym_Seq_2))
    {
      i_65 = ATgetArgument(t, 0);
      v_64 = ATgetArgument(t, 1);
      t = i_65;
      if(match_cons(t, sym_Build_1))
        {
          u_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_64), v_64);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, i_65);
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_29 = ATgetArgument(t, 0);
      if(((ATgetType(d_29) != AT_LIST) || !(ATisEmpty(d_29))))
        _fail(t);
      {
        ATerm e_29 = ATgetArgument(t, 1);
        if(((ATgetType(e_29) != AT_LIST) || !(ATisEmpty(e_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL,k_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_29 = ATgetArgument(t, 0);
      if(((ATgetType(h_29) == AT_LIST) && !(ATisEmpty(h_29))))
        {
          g_67 = ATgetFirst((ATermList) h_29);
          h_67 = (ATerm) ATgetNext((ATermList) h_29);
        }
      else
        _fail(t);
      {
        ATerm i_29 = ATgetArgument(t, 1);
        if(((ATgetType(i_29) == AT_LIST) && !(ATisEmpty(i_29))))
          {
            i_67 = ATgetFirst((ATermList) i_29);
            k_67 = (ATerm) ATgetNext((ATermList) i_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_67, i_67), (ATerm) ATmakeAppl(sym__2, h_67, k_67));
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm l_67 = NULL,m_67 = NULL;
  if(match_cons(t, sym__2))
    {
      l_67 = ATgetArgument(t, 0);
      m_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_67), l_67);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm n_67 = NULL,s_67 = NULL;
  if(match_cons(t, sym__2))
    {
      n_67 = ATgetArgument(t, 0);
      s_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_67), (ATerm) ATmakeAppl(sym_Match_1, s_67));
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_29 = ATgetArgument(t, 0);
      if(((ATgetType(j_29) != AT_LIST) || !(ATisEmpty(j_29))))
        _fail(t);
      {
        ATerm k_29 = ATgetArgument(t, 1);
        if(((ATgetType(k_29) != AT_LIST) || !(ATisEmpty(k_29))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_29 = ATgetArgument(t, 0);
      if(((ATgetType(m_29) == AT_LIST) && !(ATisEmpty(m_29))))
        {
          e_68 = ATgetFirst((ATermList) m_29);
          f_68 = (ATerm) ATgetNext((ATermList) m_29);
        }
      else
        _fail(t);
      {
        ATerm n_29 = ATgetArgument(t, 1);
        if(((ATgetType(n_29) == AT_LIST) && !(ATisEmpty(n_29))))
          {
            g_68 = ATgetFirst((ATermList) n_29);
            h_68 = (ATerm) ATgetNext((ATermList) n_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_68, g_68), (ATerm) ATmakeAppl(sym__2, f_68, h_68));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm i_68 = NULL,j_68 = NULL;
  if(match_cons(t, sym__2))
    {
      i_68 = ATgetArgument(t, 0);
      j_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_68), i_68);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm k_68 = NULL,n_68 = NULL;
  if(match_cons(t, sym__2))
    {
      k_68 = ATgetArgument(t, 0);
      n_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_68), (ATerm) ATmakeAppl(sym_Match_1, n_68));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL,g_66 = NULL,k_66 = NULL,l_66 = NULL,n_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      g_66 = ATgetArgument(t, 0);
      s_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_66;
  if(match_cons(t, sym_Build_1))
    {
      k_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_66;
  if(match_cons(t, sym_Op_2))
    {
      l_66 = ATgetArgument(t, 0);
      n_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_66;
  if(match_cons(t, sym_Seq_2))
    {
      t_66 = ATgetArgument(t, 0);
      e_66 = ATgetArgument(t, 1);
      {
        ATerm d_67 = NULL;
        t = t_66;
        if(match_cons(t, sym_Match_1))
          {
            u_66 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_66;
        if(match_cons(t, sym_Op_2))
          {
            c_66 = ATgetArgument(t, 0);
            d_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_66;
        if((l_66 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, n_66, d_66);
        t = genzip_4_0(j_5, k_5, l_5, m_5, t);
        d_67 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_67), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_66, n_66)), e_66));
      }
    }
  else
    {
      ATerm d_68 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          t_66 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_66;
      if(match_cons(t, sym_Op_2))
        {
          u_66 = ATgetArgument(t, 0);
          v_66 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_66;
      if((l_66 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, n_66, v_66);
      t = genzip_4_0(n_5, p_5, q_5, t_5, t);
      d_68 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_68), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_66, n_66)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm u_69 = NULL,c_70 = NULL,d_70 = NULL,h_70 = NULL,k_70 = NULL,o_70 = NULL,r_70 = NULL,s_70 = NULL;
  c_70 = t;
  if(match_cons(t, sym_Seq_2))
    {
      d_70 = ATgetArgument(t, 0);
      o_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_70;
  if(match_cons(t, sym_Build_1))
    {
      h_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_70;
  if(match_cons(t, sym_Op_2))
    {
      k_70 = ATgetArgument(t, 0);
      {
        ATerm o_29 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = o_70;
  {
    ATerm p_29 = t;
    int q_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            r_70 = ATgetArgument(t, 0);
            {
              ATerm r_29 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(q_29);
        t = r_70;
        if(match_cons(t, sym_Match_1))
          {
            s_70 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_70;
        if(match_cons(t, sym_Op_2))
          {
            u_69 = ATgetArgument(t, 0);
            {
              ATerm s_29 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_70, u_69);
        {
          ATerm t_29 = t;
          if((PushChoice() == 0))
            {
              ATerm s_36 = NULL;
              if(match_cons(t, sym__2))
                {
                  s_36 = ATgetArgument(t, 0);
                  if((s_36 != ATgetArgument(t, 1)))
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
              t = t_29;
            }
        }
        t = term_u_29;
      }
    else
      {
        t = p_29;
        if(match_cons(t, sym_Match_1))
          {
            r_70 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_70;
        if(match_cons(t, sym_Op_2))
          {
            s_70 = ATgetArgument(t, 0);
            {
              ATerm w_29 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_70, s_70);
        {
          ATerm x_29 = t;
          if((PushChoice() == 0))
            {
              ATerm m_37 = NULL;
              if(match_cons(t, sym__2))
                {
                  m_37 = ATgetArgument(t, 0);
                  if((m_37 != ATgetArgument(t, 1)))
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
              t = x_29;
            }
        }
        t = term_u_29;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm j_144 (ATerm), ATerm t)
{
  static ATerm z_70 (ATerm t);
  static ATerm z_70 (ATerm t)
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_144(t);
        LocalPopChoice(z_29);
      }
    else
      {
        t = y_29;
        t = SRTS_one(z_70, t);
      }
    return(t);
  }
  t = z_70(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,w_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,f_73 = NULL,g_73 = NULL;
  q_72 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_72 = ATgetArgument(t, 0);
      a_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_73;
  if(match_cons(t, sym_Let_2))
    {
      b_73 = ATgetArgument(t, 0);
      f_73 = ATgetArgument(t, 1);
      {
        ATerm l_73 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, r_72, b_73);
        t = conc_0_0(t);
        l_73 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, l_73, f_73);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          b_73 = ATgetArgument(t, 0);
          f_73 = ATgetArgument(t, 1);
          g_73 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_72;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_72 = ATgetFirst((ATermList) t);
          z_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_72;
      if(match_cons(t, sym_SDefT_4))
        {
          t_72 = ATgetArgument(t, 0);
          u_72 = ATgetArgument(t, 1);
          v_72 = ATgetArgument(t, 2);
          w_72 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_72;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_72;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_72;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_73;
      if(match_cons(t, sym_SVar_1))
        {
          c_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_73;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_73;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_73;
      if((t_72 != t))
        {
          _fail(t);
        }
      t = w_72;
      {
        ATerm a_30 = t;
        if((PushChoice() == 0))
          {
            static ATerm u_5 (ATerm t);
            static ATerm u_5 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm b_30 = ATgetArgument(t, 0);
                  if(match_cons(b_30, sym_SVar_1))
                    {
                      if((t_72 != ATgetArgument(b_30, 0)))
                        {
                          _fail(ATgetArgument(b_30, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm c_30 = ATgetArgument(t, 1);
                    if(((ATgetType(c_30) != AT_LIST) || !(ATisEmpty(c_30))))
                      _fail(t);
                  }
                  {
                    ATerm e_30 = ATgetArgument(t, 2);
                    if(((ATgetType(e_30) != AT_LIST) || !(ATisEmpty(e_30))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(u_5, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = a_30;
          }
      }
      t = w_72;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm x_73 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,l_74 = NULL,o_74 = NULL,p_74 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      o_74 = ATgetArgument(t, 0);
      t = o_74;
      if(match_cons(t, sym_Seq_2))
        {
          l_74 = ATgetArgument(t, 0);
          c_74 = ATgetArgument(t, 1);
          t = l_74;
          if(match_cons(t, sym_Where_1))
            {
              x_73 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_74;
          if(match_cons(t, sym_Seq_2))
            {
              d_74 = ATgetArgument(t, 0);
              f_74 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_74;
          if(match_cons(t, sym_Build_1))
            {
              e_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, x_73, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_74), f_74)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              l_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, l_74);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          o_74 = ATgetArgument(t, 0);
          t = o_74;
          if(match_cons(t, sym_Test_1))
            {
              l_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, l_74);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              o_74 = ATgetArgument(t, 0);
              t = o_74;
              if(match_cons(t, sym_Not_1))
                {
                  l_74 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, l_74);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  o_74 = ATgetArgument(t, 0);
                  p_74 = ATgetArgument(t, 1);
                  t = p_74;
                  if((o_74 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      o_74 = ATgetArgument(t, 0);
                      p_74 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = p_74;
                  if((o_74 != t))
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
  ATerm k_75 = NULL,l_75 = NULL,n_75 = NULL,o_75 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      k_75 = ATgetArgument(t, 0);
      o_75 = ATgetArgument(t, 1);
      t = k_75;
      if(match_cons(t, sym_LChoice_2))
        {
          l_75 = ATgetArgument(t, 0);
          n_75 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, l_75, (ATerm) ATmakeAppl(sym_LChoice_2, n_75, o_75));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          k_75 = ATgetArgument(t, 0);
          o_75 = ATgetArgument(t, 1);
          t = k_75;
          if(match_cons(t, sym_Seq_2))
            {
              l_75 = ATgetArgument(t, 0);
              n_75 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, l_75, (ATerm) ATmakeAppl(sym_Seq_2, n_75, o_75));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              k_75 = ATgetArgument(t, 0);
              o_75 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_75;
          if(match_cons(t, sym_Choice_2))
            {
              l_75 = ATgetArgument(t, 0);
              n_75 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, l_75, (ATerm) ATmakeAppl(sym_Choice_2, n_75, o_75));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm l_76 = NULL,m_76 = NULL,q_76 = NULL,t_76 = NULL,u_76 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      t_76 = ATgetArgument(t, 0);
      u_76 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, t_76, u_76);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          t_76 = ATgetArgument(t, 0);
          t = t_76;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_76 = ATgetFirst((ATermList) t);
              m_76 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, l_76, (ATerm) ATmakeAppl(sym_LChoices_1, m_76));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_u_29;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              t_76 = ATgetArgument(t, 0);
              t = t_76;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_76 = ATgetFirst((ATermList) t);
                  m_76 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, l_76, (ATerm) ATmakeAppl(sym_Choices_1, m_76));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_u_29;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  t_76 = ATgetArgument(t, 0);
                  t = t_76;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_76 = ATgetFirst((ATermList) t);
                      m_76 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_76, (ATerm) ATmakeAppl(sym_Seqs_1, m_76));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_f_30;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      t_76 = ATgetArgument(t, 0);
                      u_76 = ATgetArgument(t, 1);
                      q_76 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, u_76, (ATerm) ATmakeAppl(sym_Op_2, term_g_30, (ATerm) ATinsert(ATinsert(ATempty, q_76), t_76)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          t_76 = ATgetArgument(t, 0);
                          u_76 = ATgetArgument(t, 1);
                          q_76 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_76)), t_76), (ATerm) ATmakeAppl(sym_Build_1, u_76)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              t_76 = ATgetArgument(t, 0);
                              u_76 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_76, (ATerm) ATmakeAppl(sym_Match_1, u_76));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  t_76 = ATgetArgument(t, 0);
                                  u_76 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_76), u_76);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      t_76 = ATgetArgument(t, 0);
                                      u_76 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_76), t_76);
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
static ATerm w_5 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm l_80 = NULL,m_80 = NULL,o_80 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      l_80 = ATgetArgument(t, 0);
      t = l_80;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_u_29;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          l_80 = ATgetArgument(t, 0);
          t = l_80;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_f_30;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              l_80 = ATgetArgument(t, 0);
              m_80 = ATgetArgument(t, 1);
              t = l_80;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_u_29;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  l_80 = ATgetArgument(t, 0);
                  m_80 = ATgetArgument(t, 1);
                  t = m_80;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_u_29;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      l_80 = ATgetArgument(t, 0);
                      m_80 = ATgetArgument(t, 1);
                      t = m_80;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_u_29;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          l_80 = ATgetArgument(t, 0);
                          t = l_80;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_u_29;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              l_80 = ATgetArgument(t, 0);
                              t = l_80;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_u_29;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  l_80 = ATgetArgument(t, 0);
                                  m_80 = ATgetArgument(t, 1);
                                  t = m_80;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_u_29;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      l_80 = ATgetArgument(t, 0);
                                      m_80 = ATgetArgument(t, 1);
                                      t = m_80;
                                      t = fetch_1_0(w_5, t);
                                      t = term_u_29;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          l_80 = ATgetArgument(t, 0);
                                          m_80 = ATgetArgument(t, 1);
                                          t = m_80;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = l_80;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = m_80;
                                                }
                                              else
                                                {
                                                  t = l_80;
                                                }
                                            }
                                          else
                                            {
                                              t = l_80;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = m_80;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              l_80 = ATgetArgument(t, 0);
                                              m_80 = ATgetArgument(t, 1);
                                              t = m_80;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = l_80;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = m_80;
                                                    }
                                                  else
                                                    {
                                                      t = l_80;
                                                    }
                                                }
                                              else
                                                {
                                                  t = l_80;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = m_80;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  l_80 = ATgetArgument(t, 0);
                                                  t = l_80;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_u_29;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      l_80 = ATgetArgument(t, 0);
                                                      m_80 = ATgetArgument(t, 1);
                                                      o_80 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = o_80;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_80, m_80);
                                                }
                                            }
                                        }
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
  ATerm n_83 = NULL,q_83 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      q_83 = ATgetArgument(t, 0);
      t = q_83;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_f_30;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          q_83 = ATgetArgument(t, 0);
          t = q_83;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_u_29;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              q_83 = ATgetArgument(t, 0);
              n_83 = ATgetArgument(t, 1);
              t = n_83;
              if(match_cons(t, sym_Id_0))
                {
                  t = q_83;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = n_83;
                    }
                  else
                    {
                      t = q_83;
                    }
                }
              else
                {
                  t = q_83;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = n_83;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  q_83 = ATgetArgument(t, 0);
                  n_83 = ATgetArgument(t, 1);
                  t = q_83;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_f_30;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      q_83 = ATgetArgument(t, 0);
                      n_83 = ATgetArgument(t, 1);
                      t = n_83;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_f_30;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          q_83 = ATgetArgument(t, 0);
                          n_83 = ATgetArgument(t, 1);
                          t = n_83;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_f_30;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              q_83 = ATgetArgument(t, 0);
                              t = q_83;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_f_30;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  q_83 = ATgetArgument(t, 0);
                                  t = q_83;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_f_30;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      q_83 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = q_83;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_f_30;
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
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
            {
              ATerm m_30 = t;
              int n_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(n_30);
                }
              else
                {
                  t = m_30;
                  {
                    ATerm o_30 = t;
                    int p_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(p_30);
                      }
                    else
                      {
                        t = o_30;
                        {
                          ATerm r_30 = t;
                          int w_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(w_30);
                            }
                          else
                            {
                              t = r_30;
                              {
                                ATerm x_30 = t;
                                int y_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm v_84 = NULL,z_84 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        v_84 = ATgetArgument(t, 0);
                                        z_84 = ATgetArgument(t, 1);
                                        t = v_84;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_84;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            v_84 = ATgetArgument(t, 0);
                                            z_84 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = v_84;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_84;
                                      }
                                    LocalPopChoice(y_30);
                                  }
                                else
                                  {
                                    t = x_30;
                                    {
                                      ATerm z_30 = t;
                                      int c_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(c_31);
                                        }
                                      else
                                        {
                                          t = z_30;
                                          {
                                            ATerm l_31 = t;
                                            int m_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(m_31);
                                              }
                                            else
                                              {
                                                t = l_31;
                                                {
                                                  ATerm n_31 = t;
                                                  int o_31 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(o_31);
                                                    }
                                                  else
                                                    {
                                                      t = n_31;
                                                      {
                                                        ATerm q_31 = t;
                                                        int t_31 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(t_31);
                                                          }
                                                        else
                                                          {
                                                            t = q_31;
                                                            {
                                                              ATerm u_31 = t;
                                                              int v_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(v_31);
                                                                }
                                                              else
                                                                {
                                                                  t = u_31;
                                                                  {
                                                                    ATerm y_31 = t;
                                                                    int z_31 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(z_31);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = y_31;
                                                                        {
                                                                          ATerm a_32 = t;
                                                                          int d_32 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(d_32);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_32;
                                                                              {
                                                                                ATerm e_32 = t;
                                                                                int f_32 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(f_32);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = e_32;
                                                                                    {
                                                                                      ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL;
                                                                                      e_85 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          f_85 = ATgetArgument(t, 0);
                                                                                          g_85 = ATgetArgument(t, 1);
                                                                                          t = f_85;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              d_85 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = e_85;
                                                                                          t = o_9(d_85, g_85, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              f_85 = ATgetArgument(t, 0);
                                                                                              g_85 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = f_85;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = g_85;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm g_94 = NULL,j_94 = NULL,k_94 = NULL,n_94 = NULL;
  j_94 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = j_94;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = j_94;
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              k_94 = ATgetArgument(t, 0);
              {
                ATerm w_40 = NULL,d_41 = NULL,r_5 = NULL;
                t = SSLgetAnnotations(j_94);
                w_40 = t;
                t = k_94;
                {
                  static ATerm x_43 (ATerm t);
                  static ATerm x_43 (ATerm t)
                  {
                    ATerm p_43 = NULL,q_43 = NULL,s_43 = NULL;
                    p_43 = t;
                    if(match_cons(t, sym_Var_1))
                      {
                        q_43 = ATgetArgument(t, 0);
                        {
                          ATerm r_44 = NULL,c_5 = NULL;
                          t = SSLgetAnnotations(p_43);
                          r_44 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, q_43);
                          c_5 = t;
                          t = SSLsetAnnotations(c_5, r_44);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Int_1))
                          {
                            q_43 = ATgetArgument(t, 0);
                            {
                              ATerm e_45 = NULL,d_5 = NULL;
                              t = SSLgetAnnotations(p_43);
                              e_45 = t;
                              t = (ATerm) ATmakeAppl(sym_Int_1, q_43);
                              d_5 = t;
                              t = SSLsetAnnotations(d_5, e_45);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Real_1))
                              {
                                q_43 = ATgetArgument(t, 0);
                                {
                                  ATerm v_45 = NULL,e_5 = NULL;
                                  t = SSLgetAnnotations(p_43);
                                  v_45 = t;
                                  t = (ATerm) ATmakeAppl(sym_Real_1, q_43);
                                  e_5 = t;
                                  t = SSLsetAnnotations(e_5, v_45);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Str_1))
                                  {
                                    q_43 = ATgetArgument(t, 0);
                                    {
                                      ATerm k_46 = NULL,f_5 = NULL;
                                      t = SSLgetAnnotations(p_43);
                                      k_46 = t;
                                      t = (ATerm) ATmakeAppl(sym_Str_1, q_43);
                                      f_5 = t;
                                      t = SSLsetAnnotations(f_5, k_46);
                                    }
                                  }
                                else
                                  {
                                    ATerm e_47 = NULL,l_47 = NULL,o_5 = NULL;
                                    if(match_cons(t, sym_Op_2))
                                      {
                                        q_43 = ATgetArgument(t, 0);
                                        s_43 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = SSLgetAnnotations(p_43);
                                    e_47 = t;
                                    t = s_43;
                                    t = map_1_0(x_43, t);
                                    l_47 = t;
                                    t = (ATerm) ATmakeAppl(sym_Op_2, q_43, l_47);
                                    o_5 = t;
                                    t = SSLsetAnnotations(o_5, e_47);
                                  }
                              }
                          }
                      }
                    return(t);
                  }
                  t = x_43(t);
                }
                d_41 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, d_41);
                r_5 = t;
                t = SSLsetAnnotations(r_5, w_40);
              }
            }
          else
            {
              if(match_cons(t, sym_Assign_2))
                {
                  k_94 = ATgetArgument(t, 0);
                  n_94 = ATgetArgument(t, 1);
                  {
                    ATerm b_48 = NULL,i_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,x_48 = NULL,b_6 = NULL,x_5 = NULL,s_5 = NULL;
                    t = SSLgetAnnotations(j_94);
                    b_48 = t;
                    t = k_94;
                    if(match_cons(t, sym_Var_1))
                      {
                        q_48 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(k_94);
                    p_48 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, q_48);
                    s_5 = t;
                    t = SSLsetAnnotations(s_5, p_48);
                    x_48 = t;
                    t = n_94;
                    if(match_cons(t, sym_Var_1))
                      {
                        n_48 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(n_94);
                    i_48 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_48);
                    x_5 = t;
                    t = SSLsetAnnotations(x_5, i_48);
                    o_48 = t;
                    t = (ATerm) ATmakeAppl(sym_Assign_2, x_48, o_48);
                    b_6 = t;
                    t = SSLsetAnnotations(b_6, b_48);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      k_94 = ATgetArgument(t, 0);
                      {
                        ATerm i_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,e_6 = NULL,d_6 = NULL;
                        t = SSLgetAnnotations(j_94);
                        i_49 = t;
                        t = k_94;
                        if(match_cons(t, sym_Var_1))
                          {
                            m_49 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(k_94);
                        l_49 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, m_49);
                        d_6 = t;
                        t = SSLsetAnnotations(d_6, l_49);
                        n_49 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, n_49);
                        e_6 = t;
                        t = SSLsetAnnotations(e_6, i_49);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Prim_2))
                        {
                          k_94 = ATgetArgument(t, 0);
                          n_94 = ATgetArgument(t, 1);
                          {
                            ATerm m_50 = NULL,g_6 = NULL;
                            t = SSLgetAnnotations(j_94);
                            m_50 = t;
                            t = (ATerm) ATmakeAppl(sym_Prim_2, k_94, n_94);
                            g_6 = t;
                            t = SSLsetAnnotations(g_6, m_50);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_CallT_3))
                            {
                              k_94 = ATgetArgument(t, 0);
                              n_94 = ATgetArgument(t, 1);
                              g_94 = ATgetArgument(t, 2);
                              {
                                ATerm o_51 = NULL,h_6 = NULL;
                                t = SSLgetAnnotations(j_94);
                                o_51 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, k_94, n_94, g_94);
                                h_6 = t;
                                t = SSLsetAnnotations(h_6, o_51);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  k_94 = ATgetArgument(t, 0);
                                  n_94 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_52 = NULL,s_52 = NULL,t_52 = NULL,i_6 = NULL;
                                    t = SSLgetAnnotations(j_94);
                                    o_52 = t;
                                    t = k_94;
                                    t = simple_strategy_0_0(t);
                                    s_52 = t;
                                    t = n_94;
                                    t = simple_strategy_0_0(t);
                                    t_52 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, s_52, t_52);
                                    i_6 = t;
                                    t = SSLsetAnnotations(i_6, o_52);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seqs_1))
                                    {
                                      k_94 = ATgetArgument(t, 0);
                                      {
                                        ATerm c_53 = NULL,e_53 = NULL,k_6 = NULL;
                                        t = SSLgetAnnotations(j_94);
                                        c_53 = t;
                                        t = k_94;
                                        t = map_1_0(simple_strategy_0_0, t);
                                        e_53 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seqs_1, e_53);
                                        k_6 = t;
                                        t = SSLsetAnnotations(k_6, c_53);
                                      }
                                    }
                                  else
                                    {
                                      ATerm t_53 = NULL,z_53 = NULL,m_6 = NULL;
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          k_94 = ATgetArgument(t, 0);
                                          n_94 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(j_94);
                                      t_53 = t;
                                      t = n_94;
                                      t = simple_strategy_0_0(t);
                                      z_53 = t;
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, k_94, z_53);
                                      m_6 = t;
                                      t = SSLsetAnnotations(m_6, t_53);
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
static ATerm q_8 (ATerm c_163 (ATerm), ATerm b_78, ATerm a_78, ATerm t)
{
  static ATerm c_97 (ATerm t);
  static ATerm c_97 (ATerm t)
  {
    static ATerm d_97 (ATerm k_96, ATerm t);
    static ATerm d_97 (ATerm k_96, ATerm t)
    {
      ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,t_96 = NULL,u_96 = NULL,n_7 = NULL;
      t = k_96;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_96 = ATgetFirst((ATermList) t);
          n_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm y_5 (ATerm t);
        static ATerm y_5 (ATerm t)
        {
          t = a_78;
          return(t);
        }
        t = t_10(c_163, y_5, m_96, n_96, t);
      }
      t = k_96;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_96 = ATgetFirst((ATermList) t);
          t_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_96);
      o_96 = t;
      t = t_96;
      t = c_97(t);
      u_96 = t;
      t = (ATerm) ATinsert(CheckATermList(u_96), p_96);
      n_7 = t;
      t = SSLsetAnnotations(n_7, o_96);
      return(t);
    }
    ATerm v_96 = NULL,y_96 = NULL;
    v_96 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_96;
      }
    else
      {
        ATerm g_32 = t;
        int h_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_32 = ATgetFirst((ATermList) t);
                y_96 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(h_32);
            {
              ATerm j_32 = t;
              int k_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_97(v_96, t);
                  LocalPopChoice(k_32);
                }
              else
                {
                  t = j_32;
                  t = y_96;
                  t = c_97(t);
                }
            }
          }
        else
          {
            t = g_32;
            t = d_97(v_96, t);
          }
      }
    return(t);
  }
  t = b_78;
  t = c_97(t);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm k_182 (ATerm), ATerm l_182 (ATerm), ATerm m_182 (ATerm), ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(k_182, l_182, m_182, t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL,m_54 = NULL,t_54 = NULL,u_54 = NULL,v_7 = NULL;
        v_97 = t;
        if(match_cons(t, sym_Matrix_2))
          {
            w_97 = ATgetArgument(t, 0);
            x_97 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_97);
        m_54 = t;
        t = w_97;
        t = m_182(t);
        t_54 = t;
        t = x_97;
        t = k_182(t);
        u_54 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, t_54, u_54);
        v_7 = t;
        t = SSLsetAnnotations(v_7, m_54);
      }
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm q_98 = NULL;
  ATerm n_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_98 = ATgetArgument(t, 0);
          {
            ATerm q_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_32);
      t = q_98;
    }
  else
    {
      t = n_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_98;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm y_98 = NULL;
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_98 = ATgetArgument(t, 0);
          {
            ATerm t_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_32);
      t = y_98;
    }
  else
    {
      t = r_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_98;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm h_98 = NULL;
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm x_32 = ATgetArgument(t, 0);
          ATerm y_32 = ATgetArgument(t, 1);
          h_98 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(w_32);
      t = h_98;
      t = map_1_0(z_5, t);
    }
  else
    {
      t = v_32;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm z_32 = ATgetArgument(t, 0);
          ATerm a_33 = ATgetArgument(t, 1);
          h_98 = ATgetArgument(t, 2);
          {
            ATerm b_33 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = h_98;
      t = map_1_0(a_6, t);
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm o_100 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_100);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(f_33);
          }
        else
          {
            t = e_33;
            {
              ATerm h_33 = t;
              int i_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_100 = NULL,t_100 = NULL,u_100 = NULL,x_100 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_100 = ATgetArgument(t, 0);
                      t_100 = ATgetArgument(t, 1);
                      u_100 = ATgetArgument(t, 2);
                      x_100 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_100;
                  t = map_1_0(o_6, t);
                  LocalPopChoice(i_33);
                }
              else
                {
                  t = h_33;
                  {
                    ATerm j_33 = t;
                    int k_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_33);
                      }
                    else
                      {
                        t = j_33;
                        t = dynrule_targs_1_0(q_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm i_101 = NULL;
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_101 = ATgetArgument(t, 0);
          {
            ATerm n_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_33);
      t = i_101;
    }
  else
    {
      t = l_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_101;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = map_1_0(r_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm n_101 = NULL;
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_101 = ATgetArgument(t, 0);
          {
            ATerm q_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_33);
      t = n_101;
    }
  else
    {
      t = o_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_101;
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm r_101 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_101);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm r_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_33);
    }
  else
    {
      t = r_33;
      {
        ATerm v_33 = t;
        int c_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_34);
          }
        else
          {
            t = v_33;
            {
              ATerm d_34 = t;
              int e_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_101 = NULL,u_101 = NULL,v_101 = NULL,w_101 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_101 = ATgetArgument(t, 0);
                      u_101 = ATgetArgument(t, 1);
                      v_101 = ATgetArgument(t, 2);
                      w_101 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_101;
                  t = map_1_0(u_6, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(g_34);
                      }
                    else
                      {
                        t = f_34;
                        t = dynrule_targs_1_0(v_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm d_102 = NULL;
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_102 = ATgetArgument(t, 0);
          {
            ATerm k_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_34);
      t = d_102;
    }
  else
    {
      t = h_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_102;
    }
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = map_1_0(w_6, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm i_102 = NULL;
  ATerm m_34 = t;
  int n_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_102 = ATgetArgument(t, 0);
          {
            ATerm p_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_34);
      t = i_102;
    }
  else
    {
      t = m_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_102;
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm m_102 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_102);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm q_34 = t;
  int r_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_34);
    }
  else
    {
      t = q_34;
      {
        ATerm s_34 = t;
        int t_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_34);
          }
        else
          {
            t = s_34;
            {
              ATerm u_34 = t;
              int v_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_102 = NULL,p_102 = NULL,q_102 = NULL,r_102 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_102 = ATgetArgument(t, 0);
                      p_102 = ATgetArgument(t, 1);
                      q_102 = ATgetArgument(t, 2);
                      r_102 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_102;
                  t = map_1_0(b_7, t);
                  LocalPopChoice(v_34);
                }
              else
                {
                  t = u_34;
                  {
                    ATerm w_34 = t;
                    int x_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_34);
                      }
                    else
                      {
                        t = w_34;
                        t = dynrule_targs_1_0(e_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm y_102 = NULL;
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_102 = ATgetArgument(t, 0);
          {
            ATerm a_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_34);
      t = y_102;
    }
  else
    {
      t = y_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_102;
    }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = map_1_0(f_7, t);
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm f_103 = NULL;
  ATerm b_35 = t;
  int c_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_103 = ATgetArgument(t, 0);
          {
            ATerm d_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_35);
      t = f_103;
    }
  else
    {
      t = b_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_103;
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm k_103 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_103);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm e_35 = t;
  int f_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_35);
    }
  else
    {
      t = e_35;
      {
        ATerm h_35 = t;
        int i_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_35);
          }
        else
          {
            t = h_35;
            {
              ATerm j_35 = t;
              int k_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_103 = NULL,n_103 = NULL,o_103 = NULL,p_103 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_103 = ATgetArgument(t, 0);
                      n_103 = ATgetArgument(t, 1);
                      o_103 = ATgetArgument(t, 2);
                      p_103 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_103;
                  t = map_1_0(j_7, t);
                  LocalPopChoice(k_35);
                }
              else
                {
                  t = j_35;
                  {
                    ATerm l_35 = t;
                    int m_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_35);
                      }
                    else
                      {
                        t = l_35;
                        t = dynrule_targs_1_0(m_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm w_103 = NULL;
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_103 = ATgetArgument(t, 0);
          {
            ATerm p_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_35);
      t = w_103;
    }
  else
    {
      t = n_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_103;
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = map_1_0(o_7, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm b_104 = NULL;
  ATerm q_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_104 = ATgetArgument(t, 0);
          {
            ATerm s_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_35);
      t = b_104;
    }
  else
    {
      t = q_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_104;
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm f_104 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_104);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm t_35 = t;
  int u_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_35);
    }
  else
    {
      t = t_35;
      {
        ATerm x_35 = t;
        int y_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_35);
          }
        else
          {
            t = x_35;
            {
              ATerm c_36 = t;
              int d_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_104 = NULL,i_104 = NULL,j_104 = NULL,k_104 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_104 = ATgetArgument(t, 0);
                      i_104 = ATgetArgument(t, 1);
                      j_104 = ATgetArgument(t, 2);
                      k_104 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_104;
                  t = map_1_0(r_7, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_36);
                      }
                    else
                      {
                        t = e_36;
                        t = dynrule_targs_1_0(s_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm r_104 = NULL;
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_104 = ATgetArgument(t, 0);
          {
            ATerm i_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_36);
      t = r_104;
    }
  else
    {
      t = g_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_104;
    }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  t = map_1_0(t_7, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm w_104 = NULL;
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_104 = ATgetArgument(t, 0);
          {
            ATerm l_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_36);
      t = w_104;
    }
  else
    {
      t = j_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_104;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm m_100 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      m_100 = ATgetArgument(t, 0);
      t = m_100;
      t = free_vars_3_0(j_6, n_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          m_100 = ATgetArgument(t, 0);
          t = m_100;
          t = free_vars_3_0(s_6, t_6, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              m_100 = ATgetArgument(t, 0);
              t = m_100;
              t = free_vars_3_0(x_6, a_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  m_100 = ATgetArgument(t, 0);
                  t = m_100;
                  t = free_vars_3_0(h_7, i_7, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      m_100 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_100;
                  t = free_vars_3_0(p_7, q_7, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm v_141 (ATerm), ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm t)
{
  ATerm a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL;
  d_111 = t;
  if(match_cons(t, sym_Scope_2))
    {
      e_111 = ATgetArgument(t, 0);
      c_111 = ATgetArgument(t, 1);
      {
        ATerm i_55 = NULL,n_55 = NULL,o_55 = NULL,x_7 = NULL;
        t = SSLgetAnnotations(d_111);
        i_55 = t;
        t = e_111;
        t = x_141(t);
        n_55 = t;
        t = c_111;
        t = v_141(t);
        o_55 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_55, o_55);
        x_7 = t;
        t = SSLsetAnnotations(x_7, i_55);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          e_111 = ATgetArgument(t, 0);
          {
            ATerm z_55 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,d_8 = NULL,a_8 = NULL;
            t = SSLgetAnnotations(d_111);
            z_55 = t;
            t = e_111;
            if(match_cons(t, sym_Rule_3))
              {
                d_56 = ATgetArgument(t, 0);
                e_56 = ATgetArgument(t, 1);
                f_56 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_111);
            c_56 = t;
            t = d_56;
            t = v_141(t);
            g_56 = t;
            t = e_56;
            t = v_141(t);
            i_56 = t;
            t = f_56;
            t = v_141(t);
            j_56 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, g_56, i_56, j_56);
            a_8 = t;
            t = SSLsetAnnotations(a_8, c_56);
            k_56 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, k_56);
            d_8 = t;
            t = SSLsetAnnotations(d_8, z_55);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              e_111 = ATgetArgument(t, 0);
              c_111 = ATgetArgument(t, 1);
              a_111 = ATgetArgument(t, 2);
              {
                ATerm t_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,m_8 = NULL;
                t = SSLgetAnnotations(d_111);
                t_56 = t;
                t = e_111;
                t = x_141(t);
                x_56 = t;
                t = c_111;
                t = x_141(t);
                y_56 = t;
                t = a_111;
                t = x_141(t);
                z_56 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, x_56, y_56, z_56);
                m_8 = t;
                t = SSLsetAnnotations(m_8, t_56);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  e_111 = ATgetArgument(t, 0);
                  c_111 = ATgetArgument(t, 1);
                  a_111 = ATgetArgument(t, 2);
                  b_111 = ATgetArgument(t, 3);
                  {
                    ATerm l_57 = NULL,q_57 = NULL,w_57 = NULL,x_57 = NULL,c_58 = NULL,o_8 = NULL;
                    t = SSLgetAnnotations(d_111);
                    l_57 = t;
                    t = e_111;
                    t = x_141(t);
                    q_57 = t;
                    t = c_111;
                    t = x_141(t);
                    w_57 = t;
                    t = a_111;
                    t = x_141(t);
                    x_57 = t;
                    t = b_111;
                    t = v_141(t);
                    c_58 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, q_57, w_57, x_57, c_58);
                    o_8 = t;
                    t = SSLsetAnnotations(o_8, l_57);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      e_111 = ATgetArgument(t, 0);
                      c_111 = ATgetArgument(t, 1);
                      a_111 = ATgetArgument(t, 2);
                      b_111 = ATgetArgument(t, 3);
                      {
                        ATerm l_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,r_8 = NULL;
                        t = SSLgetAnnotations(d_111);
                        l_59 = t;
                        t = e_111;
                        t = x_141(t);
                        q_59 = t;
                        t = c_111;
                        t = x_141(t);
                        r_59 = t;
                        t = a_111;
                        t = x_141(t);
                        s_59 = t;
                        t = b_111;
                        t = v_141(t);
                        t_59 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_59, r_59, s_59, t_59);
                        r_8 = t;
                        t = SSLsetAnnotations(r_8, l_59);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          e_111 = ATgetArgument(t, 0);
                          c_111 = ATgetArgument(t, 1);
                          {
                            ATerm p_60 = NULL,s_60 = NULL,u_60 = NULL,x_8 = NULL;
                            t = SSLgetAnnotations(d_111);
                            p_60 = t;
                            t = e_111;
                            t = x_141(t);
                            s_60 = t;
                            t = c_111;
                            t = v_141(t);
                            u_60 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, s_60, u_60);
                            x_8 = t;
                            t = SSLsetAnnotations(x_8, p_60);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              e_111 = ATgetArgument(t, 0);
                              c_111 = ATgetArgument(t, 1);
                              {
                                ATerm i_61 = NULL,l_61 = NULL,m_61 = NULL,a_9 = NULL;
                                t = SSLgetAnnotations(d_111);
                                i_61 = t;
                                t = e_111;
                                t = x_141(t);
                                l_61 = t;
                                t = c_111;
                                t = v_141(t);
                                m_61 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, l_61, m_61);
                                a_9 = t;
                                t = SSLsetAnnotations(a_9, i_61);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  e_111 = ATgetArgument(t, 0);
                                  c_111 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_61 = NULL,a_62 = NULL,b_62 = NULL,e_9 = NULL;
                                    t = SSLgetAnnotations(d_111);
                                    x_61 = t;
                                    t = e_111;
                                    t = x_141(t);
                                    a_62 = t;
                                    t = c_111;
                                    t = v_141(t);
                                    b_62 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, a_62, b_62);
                                    e_9 = t;
                                    t = SSLsetAnnotations(e_9, x_61);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      e_111 = ATgetArgument(t, 0);
                                      {
                                        ATerm i_62 = NULL,k_62 = NULL,f_9 = NULL;
                                        t = SSLgetAnnotations(d_111);
                                        i_62 = t;
                                        t = e_111;
                                        t = v_141(t);
                                        k_62 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, k_62);
                                        f_9 = t;
                                        t = SSLsetAnnotations(f_9, i_62);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          e_111 = ATgetArgument(t, 0);
                                          {
                                            ATerm s_62 = NULL,u_62 = NULL,h_9 = NULL;
                                            t = SSLgetAnnotations(d_111);
                                            s_62 = t;
                                            t = e_111;
                                            t = v_141(t);
                                            u_62 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, u_62);
                                            h_9 = t;
                                            t = SSLsetAnnotations(h_9, s_62);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              e_111 = ATgetArgument(t, 0);
                                              {
                                                ATerm c_63 = NULL,e_63 = NULL,j_9 = NULL;
                                                t = SSLgetAnnotations(d_111);
                                                c_63 = t;
                                                t = e_111;
                                                t = v_141(t);
                                                e_63 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, e_63);
                                                j_9 = t;
                                                t = SSLsetAnnotations(j_9, c_63);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  e_111 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm q_63 = NULL,s_63 = NULL,l_9 = NULL;
                                                    t = SSLgetAnnotations(d_111);
                                                    q_63 = t;
                                                    t = e_111;
                                                    t = v_141(t);
                                                    s_63 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, s_63);
                                                    l_9 = t;
                                                    t = SSLsetAnnotations(l_9, q_63);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm p_64 = NULL,r_64 = NULL,n_9 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      e_111 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(d_111);
                                                  p_64 = t;
                                                  t = e_111;
                                                  t = v_141(t);
                                                  r_64 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, r_64);
                                                  n_9 = t;
                                                  t = SSLsetAnnotations(n_9, p_64);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm e_142 (ATerm), ATerm t)
{
  ATerm c_112 = NULL,d_112 = NULL,i_112 = NULL;
  ATerm m_36 = t;
  int n_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          c_112 = ATgetArgument(t, 0);
          {
            ATerm o_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_36);
      t = c_112;
      if(match_cons(t, sym_DynRuleId_1))
        {
          d_112 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_112;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_36 = ATgetArgument(t, 0);
          ATerm q_36 = ATgetArgument(t, 1);
          i_112 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_112;
    }
  else
    {
      t = m_36;
      {
        ATerm r_36 = t;
        int t_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                c_112 = ATgetArgument(t, 0);
                {
                  ATerm u_36 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_36);
            t = c_112;
            if(match_cons(t, sym_DynRuleId_1))
              {
                d_112 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_112;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm v_36 = ATgetArgument(t, 0);
                ATerm w_36 = ATgetArgument(t, 1);
                i_112 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = i_112;
          }
        else
          {
            t = r_36;
            if(match_cons(t, sym_AddDynRule_2))
              {
                c_112 = ATgetArgument(t, 0);
                {
                  ATerm x_36 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = c_112;
            if(match_cons(t, sym_DynRuleId_1))
              {
                d_112 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_112;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm y_36 = ATgetArgument(t, 0);
                ATerm z_36 = ATgetArgument(t, 1);
                i_112 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = i_112;
          }
      }
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm x_114 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_114);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm a_37 = t;
  int b_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_37);
    }
  else
    {
      t = a_37;
      {
        ATerm c_37 = t;
        int d_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_37);
          }
        else
          {
            t = c_37;
            {
              ATerm e_37 = t;
              int f_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_115 = NULL,e_115 = NULL,f_115 = NULL,g_115 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_115 = ATgetArgument(t, 0);
                      e_115 = ATgetArgument(t, 1);
                      f_115 = ATgetArgument(t, 2);
                      g_115 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_115;
                  t = map_1_0(y_7, t);
                  LocalPopChoice(f_37);
                }
              else
                {
                  t = e_37;
                  {
                    ATerm g_37 = t;
                    int h_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_37);
                      }
                    else
                      {
                        t = g_37;
                        t = dynrule_targs_1_0(z_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm h_116 = NULL;
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_116 = ATgetArgument(t, 0);
          {
            ATerm k_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_37);
      t = h_116;
    }
  else
    {
      t = i_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_116 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_116;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  t = map_1_0(b_8, t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm m_116 = NULL;
  ATerm l_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_116 = ATgetArgument(t, 0);
          {
            ATerm o_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_37);
      t = m_116;
    }
  else
    {
      t = l_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_116 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_116;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm u_113 = NULL,u_114 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_114 = ATgetArgument(t, 0);
      t = u_114;
      if(match_cons(t, sym_Rule_3))
        {
          u_113 = ATgetArgument(t, 0);
          {
            ATerm p_37 = ATgetArgument(t, 1);
          }
          {
            ATerm q_37 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = u_113;
      t = free_vars_3_0(u_7, w_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          u_114 = ATgetArgument(t, 0);
          {
            ATerm r_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_114;
    }
  return(t);
}
static ATerm u_8 (ATerm e_163 (ATerm), ATerm d_78, ATerm c_78, ATerm t)
{
  static ATerm f_117 (ATerm t);
  static ATerm f_117 (ATerm t)
  {
    ATerm a_117 = NULL,b_117 = NULL,c_117 = NULL;
    a_117 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_117;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_117 = ATgetFirst((ATermList) t);
            c_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_37 = t;
          int t_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_117;
              {
                static ATerm c_8 (ATerm t);
                static ATerm c_8 (ATerm t)
                {
                  t = c_78;
                  return(t);
                }
                t = t_10(e_163, c_8, b_117, c_117, t);
              }
              t = f_117(t);
              LocalPopChoice(t_37);
            }
          else
            {
              t = s_37;
              {
                ATerm d_65 = NULL,g_65 = NULL,m_12 = NULL;
                t = SSLgetAnnotations(a_117);
                d_65 = t;
                t = c_117;
                t = f_117(t);
                g_65 = t;
                t = (ATerm) ATinsert(CheckATermList(g_65), b_117);
                m_12 = t;
                t = SSLsetAnnotations(m_12, d_65);
              }
            }
        }
      }
    return(t);
  }
  t = d_78;
  t = f_117(t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_37 = ATgetArgument(t, 0);
      if(((ATgetType(u_37) != AT_LIST) || !(ATisEmpty(u_37))))
        _fail(t);
      {
        ATerm v_37 = ATgetArgument(t, 1);
        if(((ATgetType(v_37) != AT_LIST) || !(ATisEmpty(v_37))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm n_117 = NULL,o_117 = NULL,p_117 = NULL,q_117 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_37 = ATgetArgument(t, 0);
      if(((ATgetType(w_37) == AT_LIST) && !(ATisEmpty(w_37))))
        {
          n_117 = ATgetFirst((ATermList) w_37);
          o_117 = (ATerm) ATgetNext((ATermList) w_37);
        }
      else
        _fail(t);
      {
        ATerm x_37 = ATgetArgument(t, 1);
        if(((ATgetType(x_37) == AT_LIST) && !(ATisEmpty(x_37))))
          {
            p_117 = ATgetFirst((ATermList) x_37);
            q_117 = (ATerm) ATgetNext((ATermList) x_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_117, p_117), (ATerm) ATmakeAppl(sym__2, o_117, q_117));
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm r_117 = NULL,s_117 = NULL;
  if(match_cons(t, sym__2))
    {
      r_117 = ATgetArgument(t, 0);
      s_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_117), r_117);
  return(t);
}
static ATerm w_8 (ATerm c_958, ATerm h_958, ATerm n_97, ATerm t)
{
  ATerm i_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL;
  t = SSL_explode_term(h_958);
  if(match_cons(t, sym__2))
    {
      i_117 = ATgetArgument(t, 0);
      k_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_958);
  if(match_cons(t, sym__2))
    {
      if((i_117 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_117, k_117);
  t = genzip_4_0(e_8, f_8, g_8, _id, t);
  l_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_117, n_97);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm w_149 (ATerm), ATerm x_149 (ATerm), ATerm t)
{
  static ATerm u_117 (ATerm t);
  static ATerm u_117 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_149(t);
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        t = x_149(t);
        t = u_117(t);
      }
    return(t);
  }
  t = u_117(t);
  return(t);
}
ATerm for_3_0 (ATerm z_149 (ATerm), ATerm a_150 (ATerm), ATerm b_150 (ATerm), ATerm t)
{
  t = z_149(t);
  t = while_not_2_0(a_150, b_150, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm b_118 = NULL;
  b_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_118);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm c_118 = NULL,d_118 = NULL,e_118 = NULL,f_118 = NULL,b_13 = NULL;
  f_118 = t;
  if(match_cons(t, sym__2))
    {
      d_118 = ATgetArgument(t, 0);
      e_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_118);
  c_118 = t;
  t = e_118;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_118, e_118);
  b_13 = t;
  t = SSLsetAnnotations(b_13, c_118);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm y_118 = NULL,z_118 = NULL,a_119 = NULL,b_119 = NULL,c_119 = NULL;
  y_118 = t;
  if(match_cons(t, sym__2))
    {
      z_118 = ATgetArgument(t, 0);
      a_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_119;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_119 = ATgetFirst((ATermList) t);
      c_119 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_38 = t;
        int b_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_119(z_118, a_119, y_118, t);
            LocalPopChoice(b_38);
          }
        else
          {
            t = a_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_118), b_119), c_119);
          }
      }
    }
  else
    {
      t = n_119(z_118, a_119, y_118, t);
    }
  return(t);
}
static ATerm n_119 (ATerm g_118, ATerm h_118, ATerm i_118, ATerm t)
{
  ATerm j_118 = NULL,m_118 = NULL,q_14 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL;
  t = SSLgetAnnotations(i_118);
  j_118 = t;
  t = h_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_118 = ATgetFirst((ATermList) t);
      s_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_118;
  if(match_cons(t, sym__2))
    {
      q_118 = ATgetArgument(t, 0);
      r_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_118;
        if((q_118 != t))
          {
            _fail(t);
          }
        t = s_118;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        t = h_118;
        t = w_8(q_118, r_118, s_118, t);
      }
  }
  m_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_118, m_118);
  q_14 = t;
  t = SSLsetAnnotations(q_14, j_118);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm l_119 = NULL;
  if(match_cons(t, sym__2))
    {
      l_119 = ATgetArgument(t, 0);
      if((l_119 != ATgetArgument(t, 1)))
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
  ATerm e_38 = t;
  int f_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(i_8, n_8, p_8, t);
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
      {
        ATerm g_119 = NULL,h_119 = NULL,i_119 = NULL;
        g_119 = t;
        if(match_cons(t, sym__2))
          {
            h_119 = ATgetArgument(t, 0);
            i_119 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_119;
        t = u_8(s_8, h_119, i_119, t);
      }
    }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL;
  if(match_cons(t, sym__2))
    {
      v_65 = ATgetArgument(t, 0);
      w_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(s_9, v_65, w_65, t);
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm x_65 = NULL;
  if(match_cons(t, sym__2))
    {
      x_65 = ATgetArgument(t, 0);
      if((x_65 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm j_66 = NULL,m_66 = NULL;
  if(match_cons(t, sym__2))
    {
      j_66 = ATgetArgument(t, 0);
      m_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(v_9, j_66, m_66, t);
  return(t);
}
static ATerm v_9 (ATerm t)
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
ATerm free_vars_3_0 (ATerm i_170 (ATerm), ATerm j_170 (ATerm), ATerm k_170 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm c_120 (ATerm t);
  static ATerm c_120 (ATerm t)
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_170(t);
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        {
          ATerm i_38 = t;
          int j_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_119 = NULL,r_119 = NULL,q_65 = NULL,r_65 = NULL;
              p_119 = t;
              t = j_170(t);
              r_119 = t;
              t = p_119;
              {
                static ATerm d_9 (ATerm t);
                static ATerm d_9 (ATerm t)
                {
                  ATerm t_119 = NULL;
                  t = c_120(t);
                  t_119 = t;
                  t = (ATerm) ATmakeAppl(sym__2, t_119, r_119);
                  t = diff_0_0(t);
                  return(t);
                }
                t = k_170(d_9, c_120, p_9, t);
              }
              r_65 = t;
              t = SSL_explode_term(r_65);
              if(match_cons(t, sym__2))
                {
                  ATerm k_38 = ATgetArgument(t, 0);
                  q_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_65;
              t = foldr_3_0(q_9, r_9, _id, t);
              LocalPopChoice(j_38);
            }
          else
            {
              t = i_38;
              {
                ATerm z_65 = NULL,a_66 = NULL;
                a_66 = t;
                t = SSL_explode_term(a_66);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_38 = ATgetArgument(t, 0);
                    z_65 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_65;
                t = foldr_3_0(t_9, u_9, c_120, t);
              }
            }
        }
      }
    return(t);
  }
  t = c_120(t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm p_67 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_67);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm m_38 = t;
  int n_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_38);
    }
  else
    {
      t = m_38;
      {
        ATerm o_38 = t;
        int p_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_38);
          }
        else
          {
            t = o_38;
            {
              ATerm q_38 = t;
              int r_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_67 = NULL,t_67 = NULL,x_67 = NULL,y_67 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_67 = ATgetArgument(t, 0);
                      t_67 = ATgetArgument(t, 1);
                      x_67 = ATgetArgument(t, 2);
                      y_67 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_67;
                  t = map_1_0(f_10, t);
                  LocalPopChoice(r_38);
                }
              else
                {
                  t = q_38;
                  {
                    ATerm s_38 = t;
                    int t_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_38);
                      }
                    else
                      {
                        t = s_38;
                        {
                          ATerm s_68 = NULL,t_68 = NULL;
                          if(match_cons(t, sym_Matrix_2))
                            {
                              s_68 = ATgetArgument(t, 0);
                              t_68 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = s_68;
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
static ATerm f_10 (ATerm t)
{
  ATerm o_68 = NULL;
  ATerm u_38 = t;
  int v_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_68 = ATgetArgument(t, 0);
          {
            ATerm w_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_38);
      t = o_68;
    }
  else
    {
      t = u_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_68;
    }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm w_68 = NULL;
  if(match_cons(t, sym__2))
    {
      w_68 = ATgetArgument(t, 0);
      if((w_68 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_38;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm x_68 = NULL,y_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_68 = ATgetFirst((ATermList) t);
      y_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_68, y_68);
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm z_68 = NULL,a_69 = NULL,c_69 = NULL,d_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_38 = ATgetArgument(t, 0);
      if(match_cons(y_38, sym__2))
        {
          z_68 = ATgetArgument(y_38, 0);
          a_69 = ATgetArgument(y_38, 1);
        }
      else
        _fail(t);
      {
        ATerm z_38 = ATgetArgument(t, 1);
        if(match_cons(z_38, sym__2))
          {
            c_69 = ATgetArgument(z_38, 0);
            d_69 = ATgetArgument(z_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_69), z_68), (ATerm) ATinsert(CheckATermList(d_69), a_69));
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm i_69 = NULL;
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, i_69, term_f_39), (ATerm) ATmakeAppl(sym_Var_1, i_69));
  return(t);
}
ATerm RowLet_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm u_121 = NULL,v_121 = NULL,w_121 = NULL;
  u_121 = t;
  if(match_cons(t, sym_Row_2))
    {
      v_121 = ATgetArgument(t, 0);
      w_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_67 = NULL,e_67 = NULL,f_67 = NULL,j_67 = NULL,o_67 = NULL;
        t = w_121;
        {
          ATerm i_39 = t;
          if((PushChoice() == 0))
            {
              t = simple_strategy_0_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = i_39;
            }
        }
        t = new_0_0(t);
        b_67 = t;
        t = w_121;
        t = free_vars_3_0(c_10, d_10, tvars_matrix_boundin_3_0, t);
        o_67 = t;
        t = w_0(t);
        j_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_67, j_67);
        t = q_8(i_10, o_67, j_67, t);
        t = genzip_4_0(j_10, k_10, l_10, m_10, t);
        if(match_cons(t, sym__2))
          {
            e_67 = ATgetArgument(t, 0);
            f_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, b_67, (ATerm)ATempty, e_67, w_121)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, v_121, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_67), (ATerm)ATempty, f_67)));
        LocalPopChoice(h_39);
      }
    else
      {
        t = g_39;
        t = w_121;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, v_121, w_121));
      }
  }
  return(t);
}
static ATerm n_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_38;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm h_122 = NULL,i_122 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_122 = ATgetFirst((ATermList) t);
      i_122 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_122, i_122);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm j_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_39 = ATgetArgument(t, 0);
      if(match_cons(j_39, sym__2))
        {
          j_122 = ATgetArgument(j_39, 0);
          k_122 = ATgetArgument(j_39, 1);
        }
      else
        _fail(t);
      {
        ATerm k_39 = ATgetArgument(t, 1);
        if(match_cons(k_39, sym__2))
          {
            l_122 = ATgetArgument(k_39, 0);
            m_122 = ATgetArgument(k_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_122), j_122), (ATerm) ATinsert(CheckATermList(m_122), k_122));
  return(t);
}
static ATerm y_8 (ATerm s_115, ATerm r_115, ATerm t)
{
  ATerm a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL,g_122 = NULL,b_15 = NULL;
  t = r_115;
  {
    static ATerm q_10 (ATerm t);
    static ATerm q_10 (ATerm t)
    {
      static ATerm r_10 (ATerm t);
      static ATerm r_10 (ATerm t)
      {
        t = s_115;
        return(t);
      }
      t = RowLet_1_0(r_10, t);
      return(t);
    }
    t = genzip_4_0(n_10, o_10, p_10, q_10, t);
  }
  g_122 = t;
  if(match_cons(t, sym__2))
    {
      d_122 = ATgetArgument(t, 0);
      e_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_122);
  c_122 = t;
  t = d_122;
  t = concat_0_0(t);
  f_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_122, e_122);
  b_15 = t;
  t = SSLsetAnnotations(b_15, c_122);
  if(match_cons(t, sym__2))
    {
      a_122 = ATgetArgument(t, 0);
      b_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Let_2, a_122, (ATerm) ATmakeAppl(sym_Scope_2, s_115, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_l_39))), (ATerm) ATmakeAppl(sym_Matrix_1, b_122))));
  return(t);
}
static ATerm z_8 (ATerm i_155 (ATerm), ATerm a_53, ATerm y_52, ATerm t)
{
  ATerm n_122 = NULL,o_122 = NULL,p_122 = NULL,q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL,u_122 = NULL;
  q_122 = t;
  t = i_155(t);
  n_122 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_122, a_53, y_52);
  t = s_11(n_122, a_53, y_52, t);
  {
    ATerm m_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_122 = NULL;
        t = term_o_39;
        v_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_122, term_o_39);
        t = r_11(n_122, v_122, t);
        {
          ATerm p_39 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_39;
            }
        }
        LocalPopChoice(n_39);
      }
    else
      {
        t = m_39;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_122 = ATgetFirst((ATermList) t);
      p_122 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_122, term_o_39, (ATerm) ATinsert(CheckATermList(p_122), (ATerm) ATinsert(CheckATermList(o_122), a_53)));
  t = lookup_table_0_1(n_122, t);
  u_122 = t;
  t = term_o_39;
  r_122 = t;
  t = (ATerm) ATinsert(CheckATermList(p_122), (ATerm) ATinsert(CheckATermList(o_122), a_53));
  s_122 = t;
  t = u_122;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(r_122, s_122, t_122, t);
  t = q_122;
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm x_122 = NULL,y_122 = NULL,z_122 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm q_39 = ATgetArgument(t, 0);
      if(((ATgetType(q_39) == AT_LIST) && !(ATisEmpty(q_39))))
        {
          ATerm r_39 = ATgetFirst((ATermList) q_39);
          if(match_cons(r_39, sym_As_2))
            {
              ATerm s_39 = ATgetArgument(r_39, 0);
              ATerm t_39 = ATgetArgument(r_39, 1);
              if(!(match_cons(t_39, sym_Wld_0)))
                _fail(t);
            }
          else
            _fail(t);
          x_122 = (ATerm) ATgetNext((ATermList) q_39);
        }
      else
        _fail(t);
      y_122 = ATgetArgument(t, 1);
      z_122 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, x_122, y_122, z_122);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm w_122 = NULL;
  t = filter_1_0(s_10, t);
  w_122 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, w_122);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm b_124 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, b_124), term_u_39);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_l_39;
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL;
  if(match_cons(t, sym__2))
    {
      e_71 = ATgetArgument(t, 0);
      f_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(e_71, f_71, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_v_39;
  return(t);
}
ATerm MatchCons_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t)
{
  ATerm y_123 = NULL,z_123 = NULL,a_124 = NULL;
  y_123 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = y_123;
      t = u_0(t);
      t = map_1_0(v_10, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          z_123 = ATgetArgument(t, 0);
          t = y_123;
          t = t_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((z_123 != ATgetArgument(t, 0)))
                {
                  _fail(ATgetArgument(t, 0));
                }
            }
          else
            _fail(t);
          t = u_0(t);
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATempty;
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              z_123 = ATgetArgument(t, 0);
              t = y_123;
              t = t_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((z_123 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                }
              else
                _fail(t);
              t = u_0(t);
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(t, sym_Str_1))
                {
                  z_123 = ATgetArgument(t, 0);
                  t = y_123;
                  t = t_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((z_123 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                    }
                  else
                    _fail(t);
                  t = u_0(t);
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATempty;
                }
              else
                {
                  ATerm c_71 = NULL,d_71 = NULL;
                  if(match_cons(t, sym_Op_2))
                    {
                      z_123 = ATgetArgument(t, 0);
                      a_124 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_123;
                  t = t_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((z_123 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      c_71 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = a_124;
                  t = foldr_3_0(w_10, y_10, z_10, t);
                  d_71 = t;
                  t = c_71;
                  if((d_71 != t))
                    {
                      _fail(t);
                    }
                  t = a_124;
                }
            }
        }
    }
  return(t);
}
static ATerm b_9 (ATerm v_181 (ATerm), ATerm f_114, ATerm c_114, ATerm d_114, ATerm e_114, ATerm t)
{
  ATerm g_124 = NULL,h_124 = NULL;
  t = f_114;
  t = v_181(t);
  g_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_124, d_114);
  t = conc_0_0(t);
  h_124 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, c_114, h_124, e_114);
  return(t);
}
static ATerm c_9 (ATerm y_113, ATerm z_113, ATerm a_114, ATerm t)
{
  ATerm j_124 = NULL;
  t = y_113;
  {
    static ATerm a_11 (ATerm t);
    static ATerm a_11 (ATerm t)
    {
      ATerm k_124 = NULL,l_124 = NULL,m_124 = NULL,n_124 = NULL;
      static ATerm b_11 (ATerm t);
      static ATerm b_11 (ATerm t)
      {
        static ATerm n_11 (ATerm t);
        static ATerm z_11 (ATerm t);
        static ATerm n_11 (ATerm t)
        {
          t = z_113;
          return(t);
        }
        static ATerm z_11 (ATerm t)
        {
          t = a_114;
          return(t);
        }
        t = MatchCons_2_0(n_11, z_11, t);
        return(t);
      }
      if(match_cons(t, sym_Row_3))
        {
          ATerm w_39 = ATgetArgument(t, 0);
          if(((ATgetType(w_39) == AT_LIST) && !(ATisEmpty(w_39))))
            {
              ATerm x_39 = ATgetFirst((ATermList) w_39);
              if(match_cons(x_39, sym_As_2))
                {
                  ATerm y_39 = ATgetArgument(x_39, 0);
                  k_124 = ATgetArgument(x_39, 1);
                }
              else
                _fail(t);
              l_124 = (ATerm) ATgetNext((ATermList) w_39);
            }
          else
            _fail(t);
          m_124 = ATgetArgument(t, 1);
          n_124 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_9(b_11, k_124, l_124, m_124, n_124, t);
      return(t);
    }
    t = filter_1_0(a_11, t);
  }
  j_124 = t;
  t = (ATerm) ATmakeAppl(sym_Alt_3, z_113, a_114, (ATerm) ATmakeAppl(sym_Matrix_1, j_124));
  return(t);
}
ATerm filter_1_0 (ATerm q_167 (ATerm), ATerm t)
{
  ATerm z_124 = NULL,a_125 = NULL,b_125 = NULL;
  z_124 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_124;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_125 = ATgetFirst((ATermList) t);
          b_125 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_39 = t;
        int a_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_71 = NULL,p_71 = NULL,q_71 = NULL,e_15 = NULL;
            t = SSLgetAnnotations(z_124);
            m_71 = t;
            t = a_125;
            t = q_167(t);
            p_71 = t;
            t = b_125;
            t = filter_1_0(q_167, t);
            q_71 = t;
            t = (ATerm) ATinsert(CheckATermList(q_71), p_71);
            e_15 = t;
            t = SSLsetAnnotations(e_15, m_71);
            LocalPopChoice(a_40);
          }
        else
          {
            t = z_39;
            t = b_125;
            t = filter_1_0(q_167, t);
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm z_161 (ATerm), ATerm t)
{
  static ATerm r_125 (ATerm t);
  static ATerm r_125 (ATerm t)
  {
    ATerm o_125 = NULL,p_125 = NULL,q_125 = NULL;
    t = z_161(t);
    o_125 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_125;
      }
    else
      {
        ATerm y_71 = NULL,b_72 = NULL,l_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_125 = ATgetFirst((ATermList) t);
            q_125 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_125);
        y_71 = t;
        t = q_125;
        t = r_125(t);
        b_72 = t;
        t = (ATerm) ATinsert(CheckATermList(b_72), p_125);
        l_15 = t;
        t = SSLsetAnnotations(l_15, y_71);
      }
    return(t);
  }
  t = r_125(t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_l_39;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm p_126 = NULL,q_126 = NULL;
  if(match_cons(t, sym__2))
    {
      p_126 = ATgetArgument(t, 0);
      q_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(p_126, q_126, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_v_39;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm r_126 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm b_40 = ATgetArgument(t, 0);
      if(match_cons(b_40, sym_Off_1))
        {
          r_126 = ATgetArgument(b_40, 0);
        }
      else
        _fail(t);
      {
        ATerm c_40 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, r_126);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm x_125 = NULL,y_125 = NULL,z_125 = NULL,b_126 = NULL,c_126 = NULL,d_126 = NULL;
  x_125 = t;
  if(match_cons(t, sym_Row_3))
    {
      y_125 = ATgetArgument(t, 0);
      {
        ATerm d_40 = ATgetArgument(t, 1);
      }
      {
        ATerm e_40 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = y_125;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_125 = ATgetFirst((ATermList) t);
      {
        ATerm f_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_125;
  if(match_cons(t, sym_As_2))
    {
      ATerm g_40 = ATgetArgument(t, 0);
      b_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_126;
  if(match_cons(t, sym_Str_1))
    {
      c_126 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, c_126), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          c_126 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, c_126), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              c_126 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, c_126), (ATerm) ATempty);
            }
          else
            {
              ATerm m_126 = NULL,n_126 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  c_126 = ATgetArgument(t, 0);
                  d_126 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_126;
              t = foldr_3_0(c_12, e_12, h_12, t);
              m_126 = t;
              t = d_126;
              t = map_1_0(i_12, t);
              n_126 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, c_126, m_126), n_126);
            }
        }
    }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm u_126 = NULL,v_126 = NULL,w_126 = NULL;
  w_126 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_126 = ATgetFirst((ATermList) t);
      v_126 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_40 = t;
        int i_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_126 = NULL;
            t = v_126;
            {
              static ATerm k_12 (ATerm t);
              static ATerm k_12 (ATerm t)
              {
                ATerm j_40 = t;
                if((PushChoice() == 0))
                  {
                    if((u_126 != t))
                      {
                        _fail(t);
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_40;
                  }
                return(t);
              }
              t = filter_1_0(k_12, t);
            }
            z_126 = t;
            t = (ATerm) ATinsert(CheckATermList(z_126), u_126);
            LocalPopChoice(i_40);
          }
        else
          {
            t = h_40;
            t = w_126;
          }
      }
    }
  else
    {
      t = w_126;
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(j_12, t);
  return(t);
}
static ATerm r_128 (ATerm l_127, ATerm t)
{
  ATerm m_127 = NULL;
  t = SSL_explode_string(l_127);
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_128 (ATerm t);
        static ATerm s_128 (ATerm t)
        {
          ATerm c_128 = NULL,d_128 = NULL,e_128 = NULL;
          c_128 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_128 = ATgetFirst((ATermList) t);
              e_128 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm m_40 = t;
            int n_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_72 = NULL,d_73 = NULL,q_15 = NULL;
                t = SSLgetAnnotations(c_128);
                o_72 = t;
                t = e_128;
                t = s_128(t);
                d_73 = t;
                t = (ATerm) ATinsert(CheckATermList(d_73), d_128);
                q_15 = t;
                t = SSLsetAnnotations(q_15, o_72);
                LocalPopChoice(n_40);
              }
            else
              {
                t = m_40;
                {
                  ATerm r_73 = NULL,r_15 = NULL;
                  t = SSLgetAnnotations(c_128);
                  r_73 = t;
                  t = d_128;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, d_128);
                  r_15 = t;
                  t = SSLsetAnnotations(r_15, r_73);
                }
              }
          }
          return(t);
        }
        t = s_128(t);
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        t = (ATerm) ATempty;
      }
  }
  m_127 = t;
  t = SSL_implode_string(m_127);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm f_128 = NULL,g_128 = NULL,h_128 = NULL,i_128 = NULL,j_128 = NULL,p_128 = NULL;
  p_128 = t;
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_128 = ATgetFirst((ATermList) t);
            {
              ATerm q_40 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_40);
        t = f_128;
        {
          ATerm r_40 = t;
          int s_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  g_128 = ATgetArgument(t, 0);
                  {
                    ATerm t_40 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm u_40 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(s_40);
              t = g_128;
              {
                ATerm v_40 = t;
                int x_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        h_128 = ATgetFirst((ATermList) t);
                        {
                          ATerm y_40 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_40);
                    t = h_128;
                    {
                      ATerm z_40 = t;
                      int a_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              i_128 = ATgetArgument(t, 0);
                              {
                                ATerm b_41 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(a_41);
                          t = i_128;
                          if(match_cons(t, sym_Off_1))
                            {
                              j_128 = ATgetArgument(t, 0);
                              t = j_128;
                            }
                          else
                            {
                              t = r_128(p_128, t);
                            }
                        }
                      else
                        {
                          t = z_40;
                          t = r_128(p_128, t);
                        }
                    }
                  }
                else
                  {
                    t = v_40;
                    t = r_128(p_128, t);
                  }
              }
            }
          else
            {
              t = r_40;
              t = r_128(p_128, t);
            }
        }
      }
    else
      {
        t = o_40;
        t = r_128(p_128, t);
      }
  }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_41 = ATgetArgument(t, 0);
      ATerm e_41 = ATgetArgument(t, 1);
      if(((ATgetType(e_41) != AT_LIST) || !(ATisEmpty(e_41))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm c_129 = NULL,d_129 = NULL,e_129 = NULL;
  if(match_cons(t, sym__2))
    {
      c_129 = ATgetArgument(t, 0);
      {
        ATerm f_41 = ATgetArgument(t, 1);
        if(((ATgetType(f_41) == AT_LIST) && !(ATisEmpty(f_41))))
          {
            d_129 = ATgetFirst((ATermList) f_41);
            e_129 = (ATerm) ATgetNext((ATermList) f_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_129, d_129), (ATerm) ATmakeAppl(sym__2, c_129, e_129));
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm f_129 = NULL,g_129 = NULL;
  if(match_cons(t, sym__2))
    {
      f_129 = ATgetArgument(t, 0);
      g_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_129), f_129);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm h_129 = NULL,i_129 = NULL,j_129 = NULL;
  if(match_cons(t, sym__2))
    {
      h_129 = ATgetArgument(t, 0);
      {
        ATerm g_41 = ATgetArgument(t, 1);
        if(match_cons(g_41, sym__2))
          {
            i_129 = ATgetArgument(g_41, 0);
            j_129 = ATgetArgument(g_41, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_9(h_129, i_129, j_129, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_h_41;
  return(t);
}
static ATerm g_9 (ATerm l_115, ATerm t)
{
  ATerm v_128 = NULL,w_128 = NULL,x_128 = NULL,y_128 = NULL,z_128 = NULL,a_129 = NULL,b_129 = NULL;
  t = l_115;
  t = get_path_0_0(t);
  v_128 = t;
  t = l_115;
  t = outedges_0_0(t);
  w_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_115, w_128);
  t = genzip_4_0(l_12, n_12, o_12, p_12, t);
  x_128 = t;
  t = l_115;
  t = default_state_0_0(t);
  y_128 = t;
  t = new_0_0(t);
  z_128 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, l_115);
  a_129 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_41, z_128);
  b_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, l_115), (ATerm) ATmakeAppl(sym_Defined_2, term_i_41, z_128));
  t = z_8(q_12, a_129, b_129, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, z_128, (ATerm)ATmakeAppl(sym_Var_1, v_128), x_128, y_128);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm l_129 = NULL,m_129 = NULL,n_129 = NULL,o_129 = NULL,p_129 = NULL,q_129 = NULL,r_129 = NULL,s_129 = NULL,t_129 = NULL,u_129 = NULL,v_129 = NULL,w_129 = NULL,x_129 = NULL,y_129 = NULL,w_16 = NULL,v_16 = NULL,w_15 = NULL;
  y_129 = t;
  if(match_cons(t, sym_Row_3))
    {
      m_129 = ATgetArgument(t, 0);
      n_129 = ATgetArgument(t, 1);
      o_129 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_129);
  l_129 = t;
  t = m_129;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_129 = ATgetFirst((ATermList) t);
      r_129 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_129);
  p_129 = t;
  t = q_129;
  if(match_cons(t, sym_As_2))
    {
      u_129 = ATgetArgument(t, 0);
      v_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_129);
  t_129 = t;
  t = v_129;
  {
    ATerm j_41 = t;
    if((PushChoice() == 0))
      {
        if(!(match_cons(t, sym_Wld_0)))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_41;
      }
  }
  w_129 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, u_129, w_129);
  w_15 = t;
  t = SSLsetAnnotations(w_15, t_129);
  x_129 = t;
  t = (ATerm) ATinsert(CheckATermList(r_129), x_129);
  v_16 = t;
  t = SSLsetAnnotations(v_16, p_129);
  s_129 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, s_129, n_129, o_129);
  w_16 = t;
  t = SSLsetAnnotations(w_16, l_129);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm z_129 = NULL,a_130 = NULL,b_130 = NULL,c_130 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      z_129 = ATgetArgument(t, 0);
      {
        ATerm k_41 = ATgetArgument(t, 1);
        if(((ATgetType(k_41) == AT_LIST) && !(ATisEmpty(k_41))))
          {
            a_130 = ATgetFirst((ATermList) k_41);
            b_130 = (ATerm) ATgetNext((ATermList) k_41);
          }
        else
          _fail(t);
      }
      c_130 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(z_129), a_130), b_130, c_130);
  return(t);
}
static ATerm i_9 (ATerm b_115, ATerm t)
{
  ATerm k_129 = NULL;
  t = b_115;
  {
    ATerm l_41 = t;
    if((PushChoice() == 0))
      {
        t = map_1_0(r_12, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_41;
      }
  }
  t = b_115;
  t = map_1_0(s_12, t);
  k_129 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, k_129);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm e_130 = NULL,f_130 = NULL,g_130 = NULL,h_130 = NULL,i_130 = NULL,j_130 = NULL,k_130 = NULL,l_130 = NULL,m_130 = NULL,n_130 = NULL,o_130 = NULL,p_130 = NULL,q_130 = NULL,e_17 = NULL,d_17 = NULL,c_17 = NULL;
  q_130 = t;
  if(match_cons(t, sym_Row_3))
    {
      f_130 = ATgetArgument(t, 0);
      g_130 = ATgetArgument(t, 1);
      h_130 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_130);
  e_130 = t;
  t = g_130;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_130 = ATgetFirst((ATermList) t);
      l_130 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_130);
  j_130 = t;
  t = k_130;
  if(match_cons(t, sym_As_2))
    {
      n_130 = ATgetArgument(t, 0);
      o_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_130);
  m_130 = t;
  t = o_130;
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, n_130, o_130);
  c_17 = t;
  t = SSLsetAnnotations(c_17, m_130);
  p_130 = t;
  t = (ATerm) ATinsert(CheckATermList(l_130), p_130);
  d_17 = t;
  t = SSLsetAnnotations(d_17, j_130);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_41 = ATgetFirst((ATermList) t);
      i_130 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, f_130, i_130, h_130);
  e_17 = t;
  t = SSLsetAnnotations(e_17, e_130);
  return(t);
}
static ATerm k_9 (ATerm z_114, ATerm t)
{
  ATerm d_130 = NULL;
  t = z_114;
  t = map_1_0(t_12, t);
  d_130 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, d_130);
  return(t);
}
ATerm repeat_2_0 (ATerm f_149 (ATerm), ATerm g_149 (ATerm), ATerm t)
{
  static ATerm r_130 (ATerm t);
  static ATerm r_130 (ATerm t)
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_149(t);
        t = r_130(t);
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
        t = g_149(t);
      }
    return(t);
  }
  t = r_130(t);
  return(t);
}
static ATerm m_9 (ATerm j_54, ATerm k_54, ATerm t)
{
  ATerm s_130 = NULL,t_130 = NULL;
  t_130 = t;
  {
    ATerm p_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_54, k_54);
        t = r_11(j_54, k_54, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_41 = ATgetFirst((ATermList) t);
            s_130 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_41);
        {
          ATerm u_130 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_54, k_54, s_130);
          t = lookup_table_0_1(j_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              u_130 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_11(k_54, s_130, u_130, t);
          t = (ATerm) ATmakeAppl(sym__3, j_54, k_54, s_130);
        }
      }
    else
      {
        t = p_41;
        {
          ATerm w_130 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_54, k_54);
          t = lookup_table_0_1(j_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              w_130 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_11(k_54, w_130, t);
          t = (ATerm) ATmakeAppl(sym__2, j_54, k_54);
        }
      }
  }
  t = t_130;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_155 (ATerm), ATerm t)
{
  ATerm y_130 = NULL,z_130 = NULL,a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL,e_131 = NULL;
  b_131 = t;
  t = f_155(t);
  a_131 = t;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_131 = NULL;
        t = term_o_39;
        f_131 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_131, term_o_39);
        t = r_11(a_131, f_131, t);
        {
          ATerm u_41 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_41;
            }
        }
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_130 = ATgetFirst((ATermList) t);
      y_130 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_131, term_o_39, y_130);
  t = lookup_table_0_1(a_131, t);
  e_131 = t;
  t = term_o_39;
  c_131 = t;
  t = e_131;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(c_131, y_130, d_131, t);
  t = z_130;
  {
    static ATerm u_12 (ATerm t);
    static ATerm u_12 (ATerm t)
    {
      ATerm g_131 = NULL;
      g_131 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_131, g_131);
      t = m_9(a_131, g_131, t);
      return(t);
    }
    t = map_1_0(u_12, t);
  }
  t = b_131;
  return(t);
}
ATerm restore_always_2_0 (ATerm q_146 (ATerm), ATerm r_146 (ATerm), ATerm t)
{
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_146(t);
      t = r_146(t);
      LocalPopChoice(w_41);
    }
  else
    {
      t = v_41;
      t = r_146(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_155 (ATerm), ATerm t)
{
  ATerm i_131 = NULL,j_131 = NULL,k_131 = NULL,l_131 = NULL,m_131 = NULL,n_131 = NULL,o_131 = NULL;
  j_131 = t;
  t = e_155(t);
  i_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_131, term_o_39);
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_131 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_41 = ATgetArgument(t, 0);
            ATerm a_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_39;
        s_131 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_131, term_o_39);
        t = r_11(i_131, s_131, t);
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        t = (ATerm) ATempty;
      }
  }
  k_131 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_131, term_o_39, (ATerm) ATinsert(CheckATermList(k_131), (ATerm) ATempty));
  t = lookup_table_0_1(i_131, t);
  o_131 = t;
  t = term_o_39;
  l_131 = t;
  t = (ATerm) ATinsert(CheckATermList(k_131), (ATerm) ATempty);
  m_131 = t;
  t = o_131;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(l_131, m_131, n_131, t);
  t = j_131;
  return(t);
}
ATerm scope_2_0 (ATerm g_155 (ATerm), ATerm h_155 (ATerm), ATerm t)
{
  static ATerm w_12 (ATerm t);
  static ATerm w_12 (ATerm t)
  {
    t = end_scope_1_0(g_155, t);
    return(t);
  }
  t = begin_scope_1_0(g_155, t);
  t = restore_always_2_0(h_155, w_12, t);
  return(t);
}
ATerm at_end_1_0 (ATerm g_161 (ATerm), ATerm t)
{
  static ATerm n_132 (ATerm t);
  static ATerm n_132 (ATerm t)
  {
    ATerm k_132 = NULL,l_132 = NULL,m_132 = NULL;
    m_132 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_132 = ATgetFirst((ATermList) t);
        l_132 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_74 = NULL,i_74 = NULL,o_17 = NULL;
          t = SSLgetAnnotations(m_132);
          b_74 = t;
          t = l_132;
          t = n_132(t);
          i_74 = t;
          t = (ATerm) ATinsert(CheckATermList(i_74), k_132);
          o_17 = t;
          t = SSLsetAnnotations(o_17, b_74);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_132;
        t = g_161(t);
      }
    return(t);
  }
  t = n_132(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_131 = NULL,v_131 = NULL,w_131 = NULL;
  u_131 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_131;
    }
  else
    {
      static ATerm x_12 (ATerm t);
      static ATerm x_12 (ATerm t)
      {
        t = not_null(w_131);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_131 = ATgetFirst((ATermList) t);
          if(((w_131 != NULL) && (w_131 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_131 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_131;
      t = at_end_1_0(x_12, t);
    }
  return(t);
}
static ATerm z_132 (ATerm r_132, ATerm t)
{
  ATerm s_132 = NULL;
  t = SSL_explode_term(r_132);
  if(match_cons(t, sym__2))
    {
      ATerm b_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      s_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_132;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_132 = NULL,v_132 = NULL,w_132 = NULL;
  w_132 = t;
  if(match_cons(t, sym__2))
    {
      u_132 = ATgetArgument(t, 0);
      v_132 = ATgetArgument(t, 1);
      {
        ATerm c_42 = t;
        int d_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm z_12 (ATerm t);
            static ATerm z_12 (ATerm t)
            {
              t = v_132;
              return(t);
            }
            t = u_132;
            t = at_end_1_0(z_12, t);
            LocalPopChoice(d_42);
          }
        else
          {
            t = c_42;
            t = z_132(w_132, t);
          }
      }
    }
  else
    {
      t = z_132(w_132, t);
    }
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm i_134 = NULL;
  if(match_cons(t, sym__2))
    {
      i_134 = ATgetArgument(t, 0);
      if((i_134 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm q_134 = NULL;
  if(match_cons(t, sym__2))
    {
      q_134 = ATgetArgument(t, 0);
      if((q_134 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm i_13 (ATerm t)
{
  ATerm x_134 = NULL;
  if(match_cons(t, sym__2))
    {
      x_134 = ATgetArgument(t, 0);
      if((x_134 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm f_135 = NULL;
  if(match_cons(t, sym__2))
    {
      f_135 = ATgetArgument(t, 0);
      if((f_135 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm n_135 = NULL;
  if(match_cons(t, sym__2))
    {
      n_135 = ATgetArgument(t, 0);
      if((n_135 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  ATerm u_135 = NULL;
  if(match_cons(t, sym__2))
    {
      u_135 = ATgetArgument(t, 0);
      if((u_135 != ATgetArgument(t, 1)))
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
  ATerm o_133 = NULL,p_133 = NULL,q_133 = NULL,r_133 = NULL,t_133 = NULL,u_133 = NULL,v_133 = NULL,w_133 = NULL,x_133 = NULL,y_133 = NULL,z_133 = NULL,a_134 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      t_133 = ATgetArgument(t, 0);
      a_134 = ATgetArgument(t, 1);
      t = t_133;
      if(match_cons(t, sym_Matrix_2))
        {
          u_133 = ATgetArgument(t, 0);
          v_133 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_134;
      if(match_cons(t, sym_Choice_2))
        {
          q_133 = ATgetArgument(t, 0);
          r_133 = ATgetArgument(t, 1);
          {
            ATerm g_134 = NULL,h_134 = NULL;
            t = q_133;
            if(match_cons(t, sym_Matrix_2))
              {
                o_133 = ATgetArgument(t, 0);
                p_133 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, u_133, o_133);
            t = u_10(a_13, u_133, o_133, t);
            g_134 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_133, p_133);
            t = conc_0_0(t);
            h_134 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, g_134, h_134), r_133);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              q_133 = ATgetArgument(t, 0);
              r_133 = ATgetArgument(t, 1);
              {
                ATerm o_134 = NULL,p_134 = NULL;
                t = q_133;
                if(match_cons(t, sym_Matrix_2))
                  {
                    o_133 = ATgetArgument(t, 0);
                    p_133 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, u_133, o_133);
                t = u_10(h_13, u_133, o_133, t);
                o_134 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_133, p_133);
                t = conc_0_0(t);
                p_134 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, o_134, p_134), r_133);
              }
            }
          else
            {
              ATerm v_134 = NULL,w_134 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  q_133 = ATgetArgument(t, 0);
                  r_133 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, u_133, q_133);
              t = u_10(i_13, u_133, q_133, t);
              v_134 = t;
              t = (ATerm) ATmakeAppl(sym__2, v_133, r_133);
              t = conc_0_0(t);
              w_134 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, v_134, w_134);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          t_133 = ATgetArgument(t, 0);
          a_134 = ATgetArgument(t, 1);
          t = t_133;
          if(match_cons(t, sym_Matrix_2))
            {
              u_133 = ATgetArgument(t, 0);
              v_133 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_134;
          if(match_cons(t, sym_LChoice_2))
            {
              q_133 = ATgetArgument(t, 0);
              r_133 = ATgetArgument(t, 1);
              {
                ATerm d_135 = NULL,e_135 = NULL;
                t = q_133;
                if(match_cons(t, sym_Matrix_2))
                  {
                    o_133 = ATgetArgument(t, 0);
                    p_133 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, u_133, o_133);
                t = u_10(j_13, u_133, o_133, t);
                d_135 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_133, p_133);
                t = conc_0_0(t);
                e_135 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, d_135, e_135), r_133);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  q_133 = ATgetArgument(t, 0);
                  r_133 = ATgetArgument(t, 1);
                  {
                    ATerm l_135 = NULL,m_135 = NULL;
                    t = q_133;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        o_133 = ATgetArgument(t, 0);
                        p_133 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, u_133, o_133);
                    t = u_10(o_13, u_133, o_133, t);
                    l_135 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_133, p_133);
                    t = conc_0_0(t);
                    m_135 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, l_135, m_135), r_133);
                  }
                }
              else
                {
                  ATerm s_135 = NULL,t_135 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      q_133 = ATgetArgument(t, 0);
                      r_133 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, u_133, q_133);
                  t = u_10(p_13, u_133, q_133, t);
                  s_135 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_133, r_133);
                  t = conc_0_0(t);
                  t_135 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, s_135, t_135);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              t_133 = ATgetArgument(t, 0);
              a_134 = ATgetArgument(t, 1);
              {
                ATerm y_135 = NULL;
                t = a_134;
                if(match_cons(t, sym_Matrix_2))
                  {
                    q_133 = ATgetArgument(t, 0);
                    r_133 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_133;
                {
                  static ATerm q_13 (ATerm t);
                  static ATerm q_13 (ATerm t)
                  {
                    ATerm z_135 = NULL,a_136 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        z_135 = ATgetArgument(t, 0);
                        a_136 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, z_135, (ATerm) ATmakeAppl(sym_Scope_2, t_133, a_136));
                    return(t);
                  }
                  t = map_1_0(q_13, t);
                }
                y_135 = t;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, q_133, y_135);
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  t_133 = ATgetArgument(t, 0);
                  a_134 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_133;
              if(match_cons(t, sym_Matrix_2))
                {
                  u_133 = ATgetArgument(t, 0);
                  v_133 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_133;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_133 = ATgetFirst((ATermList) t);
                  z_133 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = w_133;
              if(match_cons(t, sym_Row_2))
                {
                  x_133 = ATgetArgument(t, 0);
                  y_133 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_133;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, u_133, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, x_133, (ATerm) ATmakeAppl(sym_Seq_2, y_133, a_134))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm g_143 (ATerm), ATerm t)
{
  static ATerm s_13 (ATerm t);
  static ATerm s_13 (ATerm t)
  {
    t = bottomup_1_0(g_143, t);
    return(t);
  }
  t = SRTS_all(s_13, t);
  t = g_143(t);
  return(t);
}
static ATerm t_10 (ATerm m_163 (ATerm), ATerm n_163 (ATerm), ATerm j_78, ATerm i_78, ATerm t)
{
  t = n_163(t);
  {
    static ATerm x_13 (ATerm t);
    static ATerm x_13 (ATerm t)
    {
      ATerm f_136 = NULL;
      f_136 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_78, f_136);
      t = m_163(t);
      return(t);
    }
    t = fetch_1_0(x_13, t);
  }
  t = i_78;
  return(t);
}
static ATerm u_10 (ATerm j_163 (ATerm), ATerm f_78, ATerm e_78, ATerm t)
{
  static ATerm v_136 (ATerm t);
  static ATerm v_136 (ATerm t)
  {
    ATerm q_136 = NULL,r_136 = NULL,s_136 = NULL;
    q_136 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_78;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_136 = ATgetFirst((ATermList) t);
            s_136 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_42 = t;
          int f_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_136;
              {
                static ATerm y_13 (ATerm t);
                static ATerm y_13 (ATerm t)
                {
                  t = e_78;
                  return(t);
                }
                t = t_10(j_163, y_13, r_136, s_136, t);
              }
              t = v_136(t);
              LocalPopChoice(f_42);
            }
          else
            {
              t = e_42;
              {
                ATerm c_75 = NULL,f_75 = NULL,r_17 = NULL;
                t = SSLgetAnnotations(q_136);
                c_75 = t;
                t = s_136;
                t = v_136(t);
                f_75 = t;
                t = (ATerm) ATinsert(CheckATermList(f_75), r_136);
                r_17 = t;
                t = SSLsetAnnotations(r_17, c_75);
              }
            }
        }
      }
    return(t);
  }
  t = f_78;
  t = v_136(t);
  return(t);
}
ATerm foldr_3_0 (ATerm o_166 (ATerm), ATerm p_166 (ATerm), ATerm q_166 (ATerm), ATerm t)
{
  ATerm y_136 = NULL,z_136 = NULL,a_137 = NULL;
  y_136 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_136;
      t = o_166(t);
    }
  else
    {
      ATerm d_137 = NULL,e_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_136 = ATgetFirst((ATermList) t);
          a_137 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_136;
      t = q_166(t);
      d_137 = t;
      t = a_137;
      t = foldr_3_0(o_166, p_166, q_166, t);
      e_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_137, e_137);
      t = p_166(t);
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm g_165 (ATerm), ATerm h_165 (ATerm), ATerm t)
{
  ATerm g_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_137 = NULL;
      t = g_165(t);
      h_137 = t;
      t = (ATerm) ATinsert(ATempty, h_137);
      LocalPopChoice(h_42);
    }
  else
    {
      t = g_42;
      {
        ATerm p_75 = NULL,q_75 = NULL;
        static ATerm c_14 (ATerm t);
        static ATerm c_14 (ATerm t)
        {
          t = collect_om_2_0(g_165, h_165, t);
          return(t);
        }
        q_75 = t;
        t = SSL_explode_term(q_75);
        if(match_cons(t, sym__2))
          {
            ATerm i_42 = ATgetArgument(t, 0);
            p_75 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_75;
        t = foldr_3_0(b_14, h_165, c_14, t);
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm n_137 = NULL,q_137 = NULL,r_137 = NULL,s_137 = NULL,t_137 = NULL;
  if(match_cons(t, sym_As_2))
    {
      q_137 = ATgetArgument(t, 0);
      s_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_137;
  if(match_cons(t, sym_Var_1))
    {
      r_137 = ATgetArgument(t, 0);
      t = s_137;
      if(match_cons(t, sym_As_2))
        {
          t_137 = ATgetArgument(t, 0);
          {
            ATerm j_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_137;
      if(match_cons(t, sym_Off_1))
        {
          n_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, r_137), (ATerm) ATmakeAppl(sym_Var_1, n_137)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          r_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_137;
      if(match_cons(t, sym_Var_1))
        {
          t_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, t_137), (ATerm) ATmakeAppl(sym_Var_1, r_137)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm l_138 = NULL,m_138 = NULL,n_138 = NULL,o_138 = NULL,p_138 = NULL,q_138 = NULL,r_138 = NULL;
  n_138 = t;
  if(match_cons(t, sym_As_2))
    {
      o_138 = ATgetArgument(t, 0);
      q_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_138;
  {
    ATerm m_42 = t;
    int n_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm r_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_42);
        t = q_138;
        if(match_cons(t, sym_As_2))
          {
            r_138 = ATgetArgument(t, 0);
            m_138 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_138;
        if(match_cons(t, sym_Off_1))
          {
            l_138 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, l_138), m_138);
      }
    else
      {
        t = m_42;
        if(match_cons(t, sym_Off_1))
          {
            p_138 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_138;
        if(match_cons(t, sym_Var_1))
          {
            ATerm s_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_138;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = p_138;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_42 = ATgetFirst((ATermList) t);
                ATerm v_42 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = p_138;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, p_138), term_u_39);
      }
  }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_38;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm i_139 = NULL,j_139 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_139 = ATgetFirst((ATermList) t);
      j_139 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_139, j_139);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm k_139 = NULL,l_139 = NULL,m_139 = NULL,n_139 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_42 = ATgetArgument(t, 0);
      if(match_cons(w_42, sym__2))
        {
          k_139 = ATgetArgument(w_42, 0);
          l_139 = ATgetArgument(w_42, 1);
        }
      else
        _fail(t);
      {
        ATerm x_42 = ATgetArgument(t, 1);
        if(match_cons(x_42, sym__2))
          {
            m_139 = ATgetArgument(x_42, 0);
            n_139 = ATgetArgument(x_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_139), k_139), (ATerm) ATinsert(CheckATermList(n_139), l_139));
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm o_139 = NULL,p_139 = NULL;
  if(match_cons(t, sym__2))
    {
      o_139 = ATgetArgument(t, 0);
      p_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(l_14, o_139, p_139, t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm q_139 = NULL;
  if(match_cons(t, sym__2))
    {
      q_139 = ATgetArgument(t, 0);
      if((q_139 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm r_139 = NULL;
  if(match_cons(t, sym__2))
    {
      r_139 = ATgetArgument(t, 0);
      if((r_139 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CollectSplit_2_0 (ATerm x_164 (ATerm), ATerm y_164 (ATerm), ATerm t)
{
  ATerm v_138 = NULL,w_138 = NULL,x_138 = NULL,y_138 = NULL,z_138 = NULL,a_139 = NULL,b_139 = NULL,c_139 = NULL,d_139 = NULL,e_139 = NULL,f_139 = NULL,g_139 = NULL;
  f_139 = t;
  g_139 = t;
  t = SSL_explode_term(g_139);
  if(match_cons(t, sym__2))
    {
      x_138 = ATgetArgument(t, 0);
      v_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_139);
  z_138 = t;
  t = v_138;
  t = genzip_4_0(e_14, h_14, i_14, x_164, t);
  if(match_cons(t, sym__2))
    {
      y_138 = ATgetArgument(t, 0);
      w_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(x_138, y_138);
  e_139 = t;
  t = SSLsetAnnotations(e_139, z_138);
  t = y_164(t);
  if(match_cons(t, sym__2))
    {
      a_139 = ATgetArgument(t, 0);
      b_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_138;
  t = foldr_2_0(j_14, k_14, t);
  d_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_139, d_139);
  t = u_10(m_14, b_139, d_139, t);
  c_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_139, c_139);
  return(t);
}
ATerm collect_split_2_0 (ATerm s_164 (ATerm), ATerm t_164 (ATerm), ATerm t)
{
  static ATerm y_139 (ATerm t);
  static ATerm y_139 (ATerm t)
  {
    static ATerm n_14 (ATerm t);
    static ATerm n_14 (ATerm t)
    {
      ATerm t_139 = NULL,u_139 = NULL,v_139 = NULL;
      v_139 = t;
      {
        ATerm y_42 = t;
        int z_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_164(t);
            LocalPopChoice(z_42);
          }
        else
          {
            t = y_42;
          }
      }
      t_139 = t;
      t = v_139;
      {
        ATerm a_43 = t;
        int b_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_164(t);
            LocalPopChoice(b_43);
          }
        else
          {
            t = a_43;
            t = (ATerm) ATempty;
          }
      }
      u_139 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_139, u_139);
      return(t);
    }
    t = CollectSplit_2_0(y_139, n_14, t);
    return(t);
  }
  t = y_139(t);
  return(t);
}
ATerm genzip_4_0 (ATerm w_147 (ATerm), ATerm x_147 (ATerm), ATerm y_147 (ATerm), ATerm z_147 (ATerm), ATerm t)
{
  static ATerm f_140 (ATerm t);
  static ATerm f_140 (ATerm t)
  {
    ATerm c_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_147(t);
        LocalPopChoice(d_43);
      }
    else
      {
        t = c_43;
        {
          ATerm z_139 = NULL,a_140 = NULL,b_140 = NULL,c_140 = NULL,d_140 = NULL,e_140 = NULL,z_17 = NULL;
          t = x_147(t);
          e_140 = t;
          if(match_cons(t, sym__2))
            {
              a_140 = ATgetArgument(t, 0);
              b_140 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_140);
          z_139 = t;
          t = a_140;
          t = z_147(t);
          c_140 = t;
          t = b_140;
          t = f_140(t);
          d_140 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_140, d_140);
          z_17 = t;
          t = SSLsetAnnotations(z_17, z_139);
          t = y_147(t);
        }
      }
    return(t);
  }
  t = f_140(t);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_43 = ATgetArgument(t, 0);
      ATerm f_43 = ATgetArgument(t, 1);
      if(((ATgetType(f_43) != AT_LIST) || !(ATisEmpty(f_43))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm i_140 = NULL,j_140 = NULL,k_140 = NULL,l_140 = NULL,m_140 = NULL;
  if(match_cons(t, sym__2))
    {
      i_140 = ATgetArgument(t, 0);
      {
        ATerm g_43 = ATgetArgument(t, 1);
        if(((ATgetType(g_43) == AT_LIST) && !(ATisEmpty(g_43))))
          {
            j_140 = ATgetFirst((ATermList) g_43);
            k_140 = (ATerm) ATgetNext((ATermList) g_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_v_39;
  m_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_140, term_v_39);
  t = m_11(i_140, m_140, t);
  l_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_140, j_140), (ATerm) ATmakeAppl(sym__2, l_140, k_140));
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm n_140 = NULL,o_140 = NULL;
  if(match_cons(t, sym__2))
    {
      n_140 = ATgetArgument(t, 0);
      o_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_140), n_140);
  return(t);
}
ATerm nzip0_1_0 (ATerm h_148 (ATerm), ATerm t)
{
  ATerm g_140 = NULL;
  g_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_39, g_140);
  t = genzip_4_0(o_14, p_14, r_14, h_148, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm t_140 = NULL,v_140 = NULL,y_140 = NULL,z_140 = NULL,a_141 = NULL,b_141 = NULL;
  if(match_cons(t, sym_As_2))
    {
      v_140 = ATgetArgument(t, 0);
      z_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_140;
  if(match_cons(t, sym_Off_1))
    {
      y_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_140;
  {
    ATerm h_43 = t;
    int i_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_BuildDefault_1))
          {
            ATerm j_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_43);
        {
          ATerm k_43 = t;
          int l_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              static ATerm s_14 (ATerm t);
              static ATerm s_14 (ATerm t)
              {
                ATerm e_141 = NULL,f_141 = NULL;
                if(match_cons(t, sym__2))
                  {
                    e_141 = ATgetArgument(t, 0);
                    f_141 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(y_140), e_141)), f_141);
                return(t);
              }
              t = z_140;
              t = nzip0_1_0(s_14, t);
              LocalPopChoice(l_43);
            }
          else
            {
              t = k_43;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, y_140), term_u_39);
            }
        }
      }
    else
      {
        t = h_43;
        if(match_cons(t, sym_As_2))
          {
            a_141 = ATgetArgument(t, 0);
            b_141 = ATgetArgument(t, 1);
            t = a_141;
            if(match_cons(t, sym_Var_1))
              {
                t_140 = ATgetArgument(t, 0);
                {
                  ATerm m_43 = t;
                  int n_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm t_14 (ATerm t);
                      static ATerm t_14 (ATerm t)
                      {
                        ATerm j_141 = NULL,k_141 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            j_141 = ATgetArgument(t, 0);
                            k_141 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(y_140), j_141)), k_141);
                        return(t);
                      }
                      t = z_140;
                      t = nzip0_1_0(t_14, t);
                      LocalPopChoice(n_43);
                    }
                  else
                    {
                      t = m_43;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_140), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, y_140), b_141));
                    }
                }
              }
            else
              {
                static ATerm u_14 (ATerm t);
                static ATerm u_14 (ATerm t)
                {
                  ATerm q_141 = NULL,r_141 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      q_141 = ATgetArgument(t, 0);
                      r_141 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(y_140), q_141)), r_141);
                  return(t);
                }
                t = z_140;
                t = nzip0_1_0(u_14, t);
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                a_141 = ATgetArgument(t, 0);
                b_141 = ATgetArgument(t, 1);
                {
                  ATerm o_43 = t;
                  int r_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm v_14 (ATerm t);
                      static ATerm v_14 (ATerm t)
                      {
                        ATerm c_142 = NULL,l_142 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            c_142 = ATgetArgument(t, 0);
                            l_142 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(y_140), c_142)), l_142);
                        return(t);
                      }
                      t = z_140;
                      t = nzip0_1_0(v_14, t);
                      LocalPopChoice(r_43);
                    }
                  else
                    {
                      t = o_43;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, y_140), (ATerm) ATmakeAppl(sym_Op_2, a_141, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, y_140), b_141)));
                    }
                }
              }
            else
              {
                static ATerm w_14 (ATerm t);
                static ATerm w_14 (ATerm t)
                {
                  ATerm r_142 = NULL,s_142 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      r_142 = ATgetArgument(t, 0);
                      s_142 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(y_140), r_142)), s_142);
                  return(t);
                }
                t = z_140;
                t = nzip0_1_0(w_14, t);
              }
          }
      }
  }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm b_143 = NULL,c_143 = NULL,d_143 = NULL;
  d_143 = t;
  if(match_cons(t, sym_As_2))
    {
      b_143 = ATgetArgument(t, 0);
      c_143 = ATgetArgument(t, 1);
      t = b_143;
      if(match_cons(t, sym_Wld_0))
        {
          t = c_143;
        }
      else
        {
          t = d_143;
        }
    }
  else
    {
      t = d_143;
    }
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm t_43 = t;
  int u_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Propagate_0_0(t);
      LocalPopChoice(u_43);
    }
  else
    {
      t = t_43;
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm m_143 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      m_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_143;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm n_143 = NULL,o_143 = NULL;
  if(match_cons(t, sym__2))
    {
      n_143 = ATgetArgument(t, 0);
      o_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_10(d_15, n_143, o_143, t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm p_143 = NULL;
  if(match_cons(t, sym__2))
    {
      p_143 = ATgetArgument(t, 0);
      if((p_143 != ATgetArgument(t, 1)))
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
  ATerm x_142 = NULL,y_142 = NULL,z_142 = NULL,a_143 = NULL;
  a_143 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_v_43, (ATerm) ATinsert(ATempty, a_143));
  t = topdown_1_0(y_14, t);
  t = topdown_1_0(z_14, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      x_142 = ATgetArgument(t, 0);
      y_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_142;
  t = collect_om_2_0(a_15, c_15, t);
  z_142 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, z_142, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, x_142, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_142), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_l_39)))))));
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = repeat_2_0(j_15, _id, t);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm w_43 = t;
  int y_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MatrixMerge_0_0(t);
      LocalPopChoice(y_43);
    }
  else
    {
      t = w_43;
      t = Simplify_0_0(t);
    }
  return(t);
}
ATerm match_to_matrix_0_0 (ATerm t)
{
  ATerm z_43 = t;
  int a_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      static ATerm y_145 (ATerm t);
      static ATerm y_145 (ATerm t)
      {
        ATerm b_44 = t;
        int c_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_144 = NULL,a_145 = NULL,b_145 = NULL;
            z_144 = t;
            if(match_cons(t, sym_Choice_2))
              {
                a_145 = ATgetArgument(t, 0);
                b_145 = ATgetArgument(t, 1);
                {
                  ATerm s_76 = NULL,b_77 = NULL,e_77 = NULL,d_18 = NULL;
                  t = SSLgetAnnotations(z_144);
                  s_76 = t;
                  t = a_145;
                  t = y_145(t);
                  b_77 = t;
                  t = b_145;
                  t = y_145(t);
                  e_77 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, b_77, e_77);
                  d_18 = t;
                  t = SSLsetAnnotations(d_18, s_76);
                }
              }
            else
              {
                ATerm t_77 = NULL,k_78 = NULL,m_78 = NULL,e_18 = NULL;
                if(match_cons(t, sym_LChoice_2))
                  {
                    a_145 = ATgetArgument(t, 0);
                    b_145 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_144);
                t_77 = t;
                t = a_145;
                t = y_145(t);
                k_78 = t;
                t = b_145;
                t = y_145(t);
                m_78 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, k_78, m_78);
                e_18 = t;
                t = SSLsetAnnotations(e_18, t_77);
              }
            LocalPopChoice(c_44);
          }
        else
          {
            t = b_44;
            {
              static ATerm b_146 (ATerm t);
              static ATerm b_146 (ATerm t)
              {
                ATerm d_44 = t;
                int e_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_145 = NULL,u_145 = NULL,v_145 = NULL;
                    u_145 = t;
                    if(match_cons(t, sym_Seq_2))
                      {
                        v_145 = ATgetArgument(t, 0);
                        t_145 = ATgetArgument(t, 1);
                        {
                          ATerm u_78 = NULL,x_78 = NULL,y_78 = NULL,f_18 = NULL;
                          t = SSLgetAnnotations(u_145);
                          u_78 = t;
                          t = v_145;
                          t = b_146(t);
                          x_78 = t;
                          t = t_145;
                          t = match_to_matrix_0_0(t);
                          y_78 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_78, y_78);
                          f_18 = t;
                          t = SSLsetAnnotations(f_18, u_78);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            v_145 = ATgetArgument(t, 0);
                            t_145 = ATgetArgument(t, 1);
                            {
                              ATerm g_79 = NULL,j_79 = NULL,g_18 = NULL;
                              t = SSLgetAnnotations(u_145);
                              g_79 = t;
                              t = t_145;
                              t = b_146(t);
                              j_79 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, v_145, j_79);
                              g_18 = t;
                              t = SSLsetAnnotations(g_18, g_79);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                v_145 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = v_145;
                            t = term_to_matrix_0_0(t);
                          }
                      }
                    LocalPopChoice(e_44);
                  }
                else
                  {
                    t = d_44;
                    t = SRTS_all(match_to_matrix_0_0, t);
                  }
                return(t);
              }
              t = b_146(t);
            }
          }
        return(t);
      }
      ATerm f_44 = t;
      int g_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_143 = NULL,y_143 = NULL,z_143 = NULL,a_144 = NULL,b_18 = NULL;
          a_144 = t;
          if(match_cons(t, sym_Choice_2))
            {
              y_143 = ATgetArgument(t, 0);
              z_143 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_144);
          x_143 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, y_143, z_143);
          b_18 = t;
          t = SSLsetAnnotations(b_18, x_143);
          LocalPopChoice(g_44);
        }
      else
        {
          t = f_44;
          {
            ATerm b_144 = NULL,c_144 = NULL,d_144 = NULL,e_144 = NULL,c_18 = NULL;
            e_144 = t;
            if(match_cons(t, sym_LChoice_2))
              {
                c_144 = ATgetArgument(t, 0);
                d_144 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_144);
            b_144 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, c_144, d_144);
            c_18 = t;
            t = SSLsetAnnotations(c_18, b_144);
          }
        }
      t = y_145(t);
      LocalPopChoice(a_44);
    }
  else
    {
      t = z_43;
      t = SRTS_all(match_to_matrix_0_0, t);
    }
  t = bottomup_1_0(i_15, t);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  t = term_h_41;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm h_44 = t;
  int m_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_146 = NULL,h_146 = NULL,i_146 = NULL;
      g_146 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          h_146 = ATgetArgument(t, 0);
          {
            ATerm n_44 = t;
            int o_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_146 = NULL;
                t = h_146;
                t = map_1_0(t_15, t);
                k_146 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, k_146);
                LocalPopChoice(o_44);
              }
            else
              {
                t = n_44;
                {
                  ATerm p_44 = t;
                  int q_44 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = g_146;
                      t = k_9(h_146, t);
                      LocalPopChoice(q_44);
                    }
                  else
                    {
                      t = p_44;
                      {
                        ATerm s_44 = t;
                        int t_44 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = g_146;
                            t = i_9(h_146, t);
                            LocalPopChoice(t_44);
                          }
                        else
                          {
                            t = s_44;
                            t = g_146;
                            t = g_9(h_146, t);
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
              h_146 = ATgetArgument(t, 0);
              i_146 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_146;
          t = y_8(h_146, i_146, t);
        }
      LocalPopChoice(m_44);
    }
  else
    {
      t = h_44;
      t = Simplify_0_0(t);
    }
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm l_146 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      ATerm u_44 = ATgetArgument(t, 0);
      if(((ATgetType(u_44) != AT_LIST) || !(ATisEmpty(u_44))))
        _fail(t);
      {
        ATerm v_44 = ATgetArgument(t, 1);
        if(((ATgetType(v_44) != AT_LIST) || !(ATisEmpty(v_44))))
          _fail(t);
      }
      l_146 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_146;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    static ATerm p_15 (ATerm t);
    static ATerm p_15 (ATerm t)
    {
      t = repeat_2_0(s_15, _id, t);
      t = SRTS_all(p_15, t);
      return(t);
    }
    t = scope_2_0(k_15, p_15, t);
  }
  t = strename_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm f_143 (ATerm), ATerm t)
{
  static ATerm u_15 (ATerm t);
  static ATerm u_15 (ATerm t)
  {
    t = topdown_1_0(f_143, t);
    return(t);
  }
  t = f_143(t);
  t = SRTS_all(u_15, t);
  return(t);
}
ATerm map_1_0 (ATerm r_160 (ATerm), ATerm t)
{
  static ATerm j_147 (ATerm t);
  static ATerm j_147 (ATerm t)
  {
    ATerm g_147 = NULL,h_147 = NULL,i_147 = NULL;
    g_147 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_147;
      }
    else
      {
        ATerm r_79 = NULL,u_79 = NULL,v_79 = NULL,s_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_147 = ATgetFirst((ATermList) t);
            i_147 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_147);
        r_79 = t;
        t = h_147;
        t = r_160(t);
        u_79 = t;
        t = i_147;
        t = j_147(t);
        v_79 = t;
        t = (ATerm) ATinsert(CheckATermList(v_79), u_79);
        s_18 = t;
        t = SSLsetAnnotations(s_18, r_79);
      }
    return(t);
  }
  t = j_147(t);
  return(t);
}
static ATerm e_11 (ATerm i_44, ATerm j_44, ATerm t)
{
  ATerm l_147 = NULL;
  t = SSL_fputc(i_44, j_44);
  l_147 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_147);
  return(t);
}
static ATerm f_11 (ATerm o_42, ATerm p_42, ATerm t)
{
  ATerm m_147 = NULL;
  t = SSL_write_term_to_stream_text(o_42, p_42);
  m_147 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_147);
  return(t);
}
static ATerm h_11 (ATerm u_150 (ATerm), ATerm t_317, ATerm u_42, ATerm t)
{
  ATerm n_147 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_317, term_w_44);
  t = l_11(t);
  n_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_147, u_42);
  t = u_150(t);
  t = fclose_0_0(t);
  t = u_42;
  return(t);
}
static ATerm g_11 (ATerm k_42, ATerm l_42, ATerm t)
{
  ATerm o_147 = NULL;
  t = SSL_write_term_to_stream_baf(k_42, l_42);
  o_147 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_147);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm v_147 = NULL,b_148 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_44 = ATgetArgument(t, 0);
      if(match_cons(x_44, sym_Stream_1))
        {
          v_147 = ATgetArgument(x_44, 0);
        }
      else
        _fail(t);
      b_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_11(v_147, b_148, t);
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm c_148 = NULL,d_148 = NULL,e_148 = NULL,f_148 = NULL,g_148 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_44 = ATgetArgument(t, 0);
      if(match_cons(y_44, sym_Stream_1))
        {
          f_148 = ATgetArgument(y_44, 0);
        }
      else
        _fail(t);
      g_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(f_148, g_148, t);
  c_148 = t;
  t = term_z_44;
  d_148 = t;
  t = c_148;
  if(match_cons(t, sym_Stream_1))
    {
      e_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_44, c_148);
  t = e_11(d_148, e_148, t);
  return(t);
}
ATerm output_1_0 (ATerm x_176 (ATerm), ATerm t)
{
  ATerm p_147 = NULL,q_147 = NULL;
  t = x_176(t);
  q_147 = t;
  {
    ATerm a_45 = t;
    int b_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_147 = NULL,s_147 = NULL;
        t = term_c_45;
        r_147 = t;
        t = term_d_45;
        s_147 = t;
        t = term_f_45;
        t = r_11(r_147, s_147, t);
        LocalPopChoice(b_45);
      }
    else
      {
        t = a_45;
        t = term_g_45;
      }
  }
  p_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_147, q_147);
  {
    ATerm h_45 = t;
    int i_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_147 = NULL,u_147 = NULL;
        t = term_c_45;
        t_147 = t;
        t = term_j_45;
        u_147 = t;
        t = term_k_45;
        t = r_11(t_147, u_147, t);
        t = (ATerm) ATmakeAppl(sym__2, p_147, q_147);
        LocalPopChoice(i_45);
        if(match_cons(t, sym__2))
          {
            ATerm l_45 = ATgetArgument(t, 0);
            ATerm m_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_11(v_15, p_147, q_147, t);
      }
    else
      {
        t = h_45;
        if(match_cons(t, sym__2))
          {
            ATerm n_45 = ATgetArgument(t, 0);
            ATerm o_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_11(x_15, p_147, q_147, t);
      }
  }
  return(t);
}
static ATerm v_148 (ATerm p_148, ATerm t)
{
  t = SSL_fclose(p_148);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_148 = NULL,t_148 = NULL;
  t_148 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_148 = ATgetArgument(t, 0);
      {
        ATerm p_45 = t;
        int q_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_148);
            LocalPopChoice(q_45);
          }
        else
          {
            t = p_45;
            t = v_148(t_148, t);
          }
      }
    }
  else
    {
      t = v_148(t_148, t);
    }
  return(t);
}
static ATerm i_11 (ATerm q_42, ATerm t)
{
  t = SSL_read_term_from_stream(q_42);
  return(t);
}
static ATerm j_11 (ATerm p_87, ATerm q_87, ATerm t)
{
  t = SSL_strcat(p_87, q_87);
  return(t);
}
static ATerm k_11 (ATerm k_44, ATerm l_44, ATerm t)
{
  ATerm w_148 = NULL;
  t = SSL_fopen(k_44, l_44);
  w_148 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_148);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_148 = NULL;
  t = SSL_stdin_stream();
  x_148 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_148);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_148 = NULL;
  t = SSL_stdout_stream();
  y_148 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_148);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_148 = NULL;
  t = SSL_stderr_stream();
  z_148 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_148);
  return(t);
}
static ATerm p_150 (ATerm i_149, ATerm t)
{
  ATerm j_149 = NULL;
  t = SSL_explode_term(i_149);
  if(match_cons(t, sym__2))
    {
      ATerm r_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_45 = ATgetArgument(t, 1);
        if(((ATgetType(s_45) == AT_LIST) && !(ATisEmpty(s_45))))
          {
            j_149 = ATgetFirst((ATermList) s_45);
            {
              ATerm t_45 = (ATerm) ATgetNext((ATermList) s_45);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_149;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_149;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_149;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_149;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_150 (ATerm m_149, ATerm n_149, ATerm o_149, ATerm t)
{
  ATerm p_149 = NULL,q_149 = NULL,r_149 = NULL,u_149 = NULL,w_18 = NULL;
  t = SSLgetAnnotations(o_149);
  r_149 = t;
  t = m_149;
  if(match_cons(t, sym_Path_1))
    {
      u_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_149, n_149);
  w_18 = t;
  t = SSLsetAnnotations(w_18, r_149);
  if(match_cons(t, sym__2))
    {
      p_149 = ATgetArgument(t, 0);
      q_149 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(p_149, q_149, t);
  return(t);
}
static ATerm r_150 (ATerm c_150, ATerm d_150, ATerm e_150, ATerm t)
{
  ATerm f_150 = NULL,g_150 = NULL,h_150 = NULL,k_150 = NULL,x_18 = NULL;
  t = SSLgetAnnotations(e_150);
  h_150 = t;
  t = SSL_is_string(c_150);
  k_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_150, d_150);
  x_18 = t;
  t = SSLsetAnnotations(x_18, h_150);
  if(match_cons(t, sym__2))
    {
      f_150 = ATgetArgument(t, 0);
      g_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_11(f_150, g_150, t);
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm m_150 = NULL,n_150 = NULL,o_150 = NULL;
  m_150 = t;
  if(match_cons(t, sym__2))
    {
      n_150 = ATgetArgument(t, 0);
      o_150 = ATgetArgument(t, 1);
      {
        ATerm u_45 = t;
        int w_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_150(m_150, t);
            LocalPopChoice(w_45);
          }
        else
          {
            t = u_45;
            {
              ATerm x_45 = t;
              int y_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_150(n_150, o_150, m_150, t);
                  LocalPopChoice(y_45);
                }
              else
                {
                  t = x_45;
                  t = r_150(n_150, o_150, m_150, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_150(m_150, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_150 = NULL,v_150 = NULL,w_150 = NULL,b_151 = NULL;
  b_151 = t;
  {
    ATerm z_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_151, term_b_46);
        t = l_11(t);
        LocalPopChoice(a_46);
      }
    else
      {
        t = z_45;
        {
          ATerm j_80 = NULL,k_80 = NULL;
          t = term_c_46;
          k_80 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_46, b_151);
          t = j_11(k_80, b_151, t);
          j_80 = t;
          t = SSL_perror(j_80);
          _fail(t);
        }
      }
  }
  v_150 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_11(w_150, t);
  t_150 = t;
  t = v_150;
  t = fclose_0_0(t);
  t = t_150;
  return(t);
}
ATerm input_1_0 (ATerm y_176 (ATerm), ATerm t)
{
  ATerm d_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_151 = NULL,f_151 = NULL;
      t = term_c_45;
      e_151 = t;
      t = term_f_46;
      f_151 = t;
      t = term_g_46;
      t = r_11(e_151, f_151, t);
      LocalPopChoice(e_46);
    }
  else
    {
      t = d_46;
      t = term_h_46;
    }
  t = ReadFromFile_0_0(t);
  t = y_176(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm g_151 = NULL,i_151 = NULL;
  t = term_c_45;
  g_151 = t;
  t = term_i_46;
  i_151 = t;
  t = term_j_46;
  t = r_11(g_151, i_151, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_151 = NULL,l_151 = NULL,m_151 = NULL;
  k_151 = t;
  {
    ATerm l_46 = t;
    int m_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_151;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm n_46 = ATgetFirst((ATermList) t);
                ATerm o_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_151;
          }
        LocalPopChoice(m_46);
      }
    else
      {
        t = l_46;
        t = (ATerm) ATinsert(ATempty, k_151);
      }
  }
  l_151 = t;
  t = term_g_45;
  m_151 = t;
  t = SSL_printnl(m_151, l_151);
  t = k_151;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_151 = NULL,s_151 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_151 = ATgetFirst((ATermList) t);
      s_151 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_151 = NULL,x_151 = NULL;
        static ATerm y_15 (ATerm t);
        static ATerm y_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_151)), not_null(x_151));
          return(t);
        }
        t = s_151;
        t = r_0(t);
        if(((w_151 != NULL) && (w_151 != t)))
          _fail(t);
        else
          w_151 = t;
        t = r_151;
        t = p_0(t);
        if(((x_151 != NULL) && (x_151 != t)))
          _fail(t);
        else
          x_151 = t;
        t = s_151;
        t = reverse_acc_2_0(p_0, y_15, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_46;
      t = r_0(t);
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm g_152 = NULL,h_152 = NULL,i_152 = NULL,e_19 = NULL;
  i_152 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_152);
  g_152 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_152);
  e_19 = t;
  t = SSLsetAnnotations(e_19, g_152);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm n_152 = NULL;
  n_152 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_152), term_q_46);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm w_178 (ATerm), ATerm x_178 (ATerm), ATerm t)
{
  ATerm c_152 = NULL,d_152 = NULL;
  ATerm r_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_152 = NULL,f_152 = NULL;
      t = term_c_45;
      e_152 = t;
      t = term_i_46;
      f_152 = t;
      t = term_j_46;
      t = r_11(e_152, f_152, t);
      LocalPopChoice(s_46);
    }
  else
    {
      t = r_46;
      t = fetch_1_0(z_15, t);
    }
  {
    ATerm t_46 = t;
    int u_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_178(t);
        t = echo_0_0(t);
        LocalPopChoice(u_46);
      }
    else
      {
        t = t_46;
      }
  }
  t = term_v_46;
  t = echo_0_0(t);
  t = term_w_46;
  c_152 = t;
  t = term_x_46;
  d_152 = t;
  t = term_y_46;
  t = r_11(c_152, d_152, t);
  t = reverse_acc_2_0(_id, a_16, t);
  t = map_1_0(b_16, t);
  t = term_z_46;
  t = echo_0_0(t);
  {
    ATerm a_47 = t;
    int b_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_178(t);
        {
          ATerm c_47 = t;
          int d_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_152 = NULL;
              o_152 = t;
              t = SSL_is_string(o_152);
              t = o_152;
              LocalPopChoice(d_47);
              {
                ATerm p_152 = NULL;
                p_152 = t;
                t = (ATerm) ATinsert(ATempty, p_152);
              }
            }
          else
            {
              t = c_47;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(b_47);
      }
    else
      {
        t = a_47;
      }
  }
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm w_152 = NULL,x_152 = NULL,y_152 = NULL,g_19 = NULL;
  y_152 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_152);
  w_152 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_152);
  g_19 = t;
  t = SSLsetAnnotations(g_19, w_152);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_152 = NULL;
  t_152 = t;
  {
    ATerm f_47 = t;
    int g_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_152 = NULL,v_152 = NULL;
        t = term_c_45;
        u_152 = t;
        t = term_i_46;
        v_152 = t;
        t = term_j_46;
        t = r_11(u_152, v_152, t);
        LocalPopChoice(g_47);
      }
    else
      {
        t = f_47;
        t = fetch_1_0(c_16, t);
      }
  }
  t = t_152;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm a_153 = NULL;
  a_153 = t;
  if(match_string(t, "-k"))
    {
      t = a_153;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = a_153;
    }
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm b_153 = NULL,c_153 = NULL,d_153 = NULL;
  b_153 = t;
  t = SSL_string_to_int(b_153);
  c_153 = t;
  t = term_h_47;
  d_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_47, c_153);
  t = u_11(d_153, c_153, t);
  t = b_153;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = term_i_47;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_16, f_16, g_16, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm f_153 = NULL;
  f_153 = t;
  if(match_string(t, "-S"))
    {
      t = f_153;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = f_153;
    }
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm g_153 = NULL,h_153 = NULL;
  t = term_j_47;
  g_153 = t;
  t = term_l_39;
  h_153 = t;
  t = term_k_47;
  t = u_11(g_153, h_153, t);
  t = term_m_47;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = term_n_47;
  return(t);
}
static ATerm o_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm i_153 = NULL,j_153 = NULL,k_153 = NULL;
  i_153 = t;
  t = SSL_string_to_int(i_153);
  j_153 = t;
  t = term_j_47;
  k_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_47, j_153);
  t = u_11(k_153, j_153, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, i_153);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_o_47;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm l_153 = NULL,m_153 = NULL;
  t = term_p_47;
  l_153 = t;
  t = term_p_46;
  m_153 = t;
  t = term_q_47;
  t = u_11(l_153, m_153, t);
  t = term_r_47;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_s_47;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_47 = t;
  int u_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_16, m_16, n_16, t);
      LocalPopChoice(u_47);
    }
  else
    {
      t = t_47;
      {
        ATerm v_47 = t;
        int z_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_16, p_16, q_16, t);
            LocalPopChoice(z_47);
          }
        else
          {
            t = v_47;
            t = Option_3_0(r_16, s_16, t_16, t);
          }
      }
    }
  return(t);
}
static ATerm u_11 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm n_153 = NULL,o_153 = NULL;
  t = term_c_45;
  n_153 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_45, k_48, l_48);
  t = lookup_table_0_1(n_153, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(k_48, l_48, o_153, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_45, k_48, l_48);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm s_153 = NULL,t_153 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_153 = NULL,v_153 = NULL,w_153 = NULL;
      t = term_p_46;
      t = g_0(t);
      u_153 = t;
      t = term_w_46;
      v_153 = t;
      t = term_x_46;
      w_153 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_46, term_x_46, u_153);
      t = s_11(v_153, w_153, u_153, t);
      _fail(t);
    }
  else
    {
      ATerm z_153 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_153 = ATgetFirst((ATermList) t);
          t_153 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_153;
      t = d_0(t);
      t = term_p_46;
      t = f_0(t);
      z_153 = t;
      t = (ATerm) ATinsert(CheckATermList(t_153), z_153);
    }
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm b_154 = NULL;
  b_154 = t;
  if(match_string(t, "-o"))
    {
      t = b_154;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = b_154;
    }
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm c_154 = NULL,d_154 = NULL;
  c_154 = t;
  t = term_d_45;
  d_154 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_45, c_154);
  t = u_11(d_154, c_154, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, c_154);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_a_48;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_16, x_16, y_16, t);
  return(t);
}
static ATerm s_11 (ATerm e_54, ATerm f_54, ATerm d_54, ATerm t)
{
  ATerm f_154 = NULL,g_154 = NULL,h_154 = NULL,i_154 = NULL,j_154 = NULL;
  f_154 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_54, f_54);
  {
    ATerm e_48 = t;
    int f_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_48 = ATgetArgument(t, 0);
            ATerm h_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_54, f_54);
        t = r_11(e_54, f_54, t);
        LocalPopChoice(f_48);
      }
    else
      {
        t = e_48;
        t = (ATerm) ATempty;
      }
  }
  g_154 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_54, f_54, (ATerm) ATinsert(CheckATermList(g_154), d_54));
  t = lookup_table_0_1(e_54, t);
  j_154 = t;
  t = (ATerm) ATinsert(CheckATermList(g_154), d_54);
  h_154 = t;
  t = j_154;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(f_54, h_154, i_154, t);
  t = f_154;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_154 = NULL,r_154 = NULL,s_154 = NULL,t_154 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_154 = NULL,v_154 = NULL,w_154 = NULL;
      t = term_p_46;
      t = n_0(t);
      u_154 = t;
      t = term_w_46;
      v_154 = t;
      t = term_x_46;
      w_154 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_46, term_x_46, u_154);
      t = s_11(v_154, w_154, u_154, t);
      _fail(t);
    }
  else
    {
      ATerm a_155 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_154 = ATgetFirst((ATermList) t);
          r_154 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_154;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_154 = ATgetFirst((ATermList) t);
          t_154 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_154;
      t = j_0(t);
      t = s_154;
      t = l_0(t);
      a_155 = t;
      t = (ATerm) ATinsert(CheckATermList(t_154), a_155);
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm c_155 = NULL;
  c_155 = t;
  if(match_string(t, "-i"))
    {
      t = c_155;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_155;
    }
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm d_155 = NULL,j_155 = NULL;
  d_155 = t;
  t = term_f_46;
  j_155 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_46, d_155);
  t = u_11(j_155, d_155, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_155);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = term_y_48;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_16, a_17, b_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_155 = NULL,l_155 = NULL,m_155 = NULL,n_155 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_46;
  t = whoami_0_0(t);
  k_155 = t;
  t = term_z_48;
  m_155 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_49), k_155);
  n_155 = t;
  t = SSL_printnl(m_155, n_155);
  t = term_v_39;
  l_155 = t;
  t = SSL_exit(l_155);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_155 = NULL,p_155 = NULL;
  t = term_c_45;
  o_155 = t;
  t = term_i_46;
  p_155 = t;
  t = term_j_46;
  t = r_11(o_155, p_155, t);
  return(t);
}
static ATerm m_11 (ATerm m_51, ATerm n_51, ATerm t)
{
  ATerm d_49 = t;
  int e_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(m_51, n_51);
      LocalPopChoice(e_49);
    }
  else
    {
      t = d_49;
      t = SSL_addr(m_51, n_51);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_166 (ATerm), ATerm n_166 (ATerm), ATerm t)
{
  ATerm r_155 = NULL,s_155 = NULL,t_155 = NULL;
  r_155 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_155;
      t = m_166(t);
    }
  else
    {
      ATerm w_155 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_155 = ATgetFirst((ATermList) t);
          t_155 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_155;
      t = foldr_2_0(m_166, n_166, t);
      w_155 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_155, w_155);
      t = n_166(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_l_39;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm z_80 = NULL,a_81 = NULL;
  if(match_cons(t, sym__2))
    {
      z_80 = ATgetArgument(t, 0);
      a_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(z_80, a_81, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_155 = NULL,s_80 = NULL,t_80 = NULL;
  t = times_0_0(t);
  t_80 = t;
  t = SSL_explode_term(t_80);
  if(match_cons(t, sym__2))
    {
      ATerm f_49 = ATgetArgument(t, 0);
      s_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_80;
  t = foldr_2_0(f_17, g_17, t);
  z_155 = t;
  t = SSL_TicksToSeconds(z_155);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_156 = NULL,l_156 = NULL,m_156 = NULL;
  k_156 = t;
  if(match_cons(t, sym__2))
    {
      l_156 = ATgetArgument(t, 0);
      m_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_49 = t;
    int h_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_156;
        if((l_156 != t))
          {
            _fail(t);
          }
        t = k_156;
        LocalPopChoice(h_49);
      }
    else
      {
        t = g_49;
        t = (ATerm) ATmakeAppl(sym__2, l_156, m_156);
        {
          ATerm k_49 = t;
          int o_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_156, m_156);
              LocalPopChoice(o_49);
            }
          else
            {
              t = k_49;
              t = SSL_gtr(l_156, m_156);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_156, m_156);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_152 (ATerm), ATerm t)
{
  ATerm q_156 = NULL;
  q_156 = t;
  {
    ATerm p_49 = t;
    int q_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_156 = NULL,t_156 = NULL,u_156 = NULL;
        t = term_c_45;
        t_156 = t;
        t = term_j_47;
        u_156 = t;
        t = term_r_49;
        t = r_11(t_156, u_156, t);
        s_156 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_156, term_v_39);
        t = geq_0_0(t);
        t = q_156;
        t = m_152(t);
        LocalPopChoice(q_49);
      }
    else
      {
        t = p_49;
        t = q_156;
      }
  }
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm w_156 = NULL,x_156 = NULL,z_156 = NULL,a_157 = NULL;
  t = run_time_0_0(t);
  w_156 = t;
  t = term_p_46;
  t = whoami_0_0(t);
  x_156 = t;
  t = term_z_48;
  z_156 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_49), w_156), term_s_49), x_156);
  a_157 = t;
  t = SSL_printnl(z_156, a_157);
  t = (ATerm) ATmakeAppl(sym__2, term_z_48, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_49), w_156), term_s_49), x_156));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_157 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_39;
  b_157 = t;
  t = SSL_exit(b_157);
  return(t);
}
static ATerm v_11 (ATerm t_58, ATerm u_58, ATerm v_58, ATerm t)
{
  ATerm c_157 = NULL;
  t = SSL_hashtable_put(v_58, t_58, u_58);
  c_157 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_157);
  return(t);
}
ATerm lookup_table_0_1 (ATerm q_55, ATerm t)
{
  ATerm l_157 = NULL;
  t = table_hashtable_0_0(t);
  l_157 = t;
  {
    ATerm u_49 = t;
    int v_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_81 = NULL;
        t = l_157;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_81 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_11(q_55, r_81, t);
        LocalPopChoice(v_49);
      }
    else
      {
        t = u_49;
        {
          ATerm w_81 = NULL;
          t = q_55;
          t = table_create_0_0(t);
          t = l_157;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_81 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_11(q_55, w_81, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm b_59, ATerm c_59, ATerm t)
{
  ATerm o_157 = NULL;
  t = SSL_hashtable_create(b_59, c_59);
  o_157 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_157);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm p_157 = NULL,q_157 = NULL,r_157 = NULL,t_157 = NULL,u_157 = NULL;
  p_157 = t;
  t = term_w_49;
  t_157 = t;
  t = term_x_49;
  u_157 = t;
  t = p_157;
  t = new_hashtable_0_2(t_157, u_157, t);
  q_157 = t;
  t = p_157;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(p_157, q_157, r_157, t);
  t = p_157;
  return(t);
}
static ATerm o_11 (ATerm y_58, ATerm z_58, ATerm t)
{
  ATerm v_157 = NULL;
  t = SSL_hashtable_remove(z_58, y_58);
  v_157 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_157);
  return(t);
}
static ATerm p_11 (ATerm d_59, ATerm t)
{
  ATerm w_157 = NULL;
  t = SSL_hashtable_destroy(d_59);
  w_157 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_157);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_157 = NULL;
  t = SSL_table_hashtable();
  x_157 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_157);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_157 = NULL,z_157 = NULL,a_158 = NULL,b_158 = NULL;
  y_157 = t;
  t = table_hashtable_0_0(t);
  z_157 = t;
  t = lookup_table_0_1(y_157, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_11(b_158, t);
  t = z_157;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_11(y_157, a_158, t);
  t = y_157;
  return(t);
}
ATerm fetch_1_0 (ATerm z_160 (ATerm), ATerm t)
{
  static ATerm y_158 (ATerm t);
  static ATerm y_158 (ATerm t)
  {
    ATerm v_158 = NULL,w_158 = NULL,x_158 = NULL;
    v_158 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_158 = ATgetFirst((ATermList) t);
        x_158 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_49 = t;
      int z_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_82 = NULL,g_82 = NULL,i_19 = NULL;
          t = SSLgetAnnotations(v_158);
          c_82 = t;
          t = w_158;
          t = z_160(t);
          g_82 = t;
          t = (ATerm) ATinsert(CheckATermList(x_158), g_82);
          i_19 = t;
          t = SSLsetAnnotations(i_19, c_82);
          LocalPopChoice(z_49);
        }
      else
        {
          t = y_49;
          {
            ATerm v_82 = NULL,y_82 = NULL,j_19 = NULL;
            t = SSLgetAnnotations(v_158);
            v_82 = t;
            t = x_158;
            t = y_158(t);
            y_82 = t;
            t = (ATerm) ATinsert(CheckATermList(y_82), w_158);
            j_19 = t;
            t = SSLsetAnnotations(j_19, v_82);
          }
        }
    }
    return(t);
  }
  t = y_158(t);
  return(t);
}
static ATerm w_11 (ATerm w_58, ATerm x_58, ATerm t)
{
  t = SSL_hashtable_get(x_58, w_58);
  return(t);
}
static ATerm r_11 (ATerm x_55, ATerm y_55, ATerm t)
{
  ATerm b_159 = NULL;
  t = lookup_table_0_1(x_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(y_55, b_159, t);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm d_159 = NULL,e_159 = NULL;
  t = term_a_50;
  d_159 = t;
  t = term_p_46;
  e_159 = t;
  t = term_b_50;
  t = u_11(d_159, e_159, t);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_c_50;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm f_159 = NULL,g_159 = NULL,h_159 = NULL,i_159 = NULL;
  t = term_a_50;
  h_159 = t;
  t = term_p_46;
  i_159 = t;
  t = term_b_50;
  t = u_11(h_159, i_159, t);
  t = term_d_50;
  f_159 = t;
  t = term_p_46;
  g_159 = t;
  t = term_i_50;
  t = u_11(f_159, g_159, t);
  t = term_l_50;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_r_50;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_17, k_17, l_17, t);
      LocalPopChoice(a_51);
    }
  else
    {
      t = z_50;
      t = Option_3_0(m_17, q_17, u_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_116 (ATerm), ATerm f_116 (ATerm), ATerm t)
{
  ATerm j_159 = NULL,k_159 = NULL,l_159 = NULL,m_159 = NULL,n_159 = NULL,o_159 = NULL,o_19 = NULL;
  o_159 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_159 = ATgetFirst((ATermList) t);
      l_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_159);
  j_159 = t;
  t = k_159;
  t = e_116(t);
  m_159 = t;
  t = l_159;
  t = f_116(t);
  n_159 = t;
  t = (ATerm) ATinsert(CheckATermList(n_159), m_159);
  o_19 = t;
  t = SSLsetAnnotations(o_19, j_159);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_178 (ATerm), ATerm t)
{
  ATerm t_159 = NULL,u_159 = NULL,v_159 = NULL,w_159 = NULL,y_159 = NULL,z_159 = NULL,q_19 = NULL;
  t_159 = t;
  {
    ATerm b_51 = t;
    int c_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_51;
        t = r_178(t);
        LocalPopChoice(c_51);
      }
    else
      {
        t = b_51;
      }
  }
  t = t_159;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_159 = ATgetFirst((ATermList) t);
      w_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_159);
  u_159 = t;
  t = term_i_46;
  z_159 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_46, v_159);
  t = u_11(z_159, v_159, t);
  t = w_159;
  {
    static ATerm j_160 (ATerm t);
    static ATerm j_160 (ATerm t)
    {
      ATerm e_51 = t;
      int f_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_51 = t;
          int h_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_160 = NULL;
              c_160 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_160;
              LocalPopChoice(h_51);
            }
          else
            {
              t = g_51;
              t = r_178(t);
              t = Cons_2_0(_id, j_160, t);
            }
          LocalPopChoice(f_51);
        }
      else
        {
          t = e_51;
          {
            ATerm f_160 = NULL,g_160 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_160 = ATgetFirst((ATermList) t);
                g_160 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_160), (ATerm) ATmakeAppl(sym_Undefined_1, f_160));
          }
        }
      return(t);
    }
    t = j_160(t);
  }
  y_159 = t;
  t = (ATerm) ATinsert(CheckATermList(y_159), (ATerm) ATmakeAppl(sym_Program_1, v_159));
  q_19 = t;
  t = SSLsetAnnotations(q_19, u_159);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm b_161 = NULL;
  b_161 = t;
  if(match_string(t, "--help"))
    {
      t = b_161;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_161;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_161;
        }
    }
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm c_161 = NULL,d_161 = NULL;
  t = term_k_51;
  c_161 = t;
  t = term_p_46;
  d_161 = t;
  t = term_l_51;
  t = u_11(c_161, d_161, t);
  t = term_p_51;
  return(t);
}
static ATerm y_17 (ATerm t)
{
  t = term_v_51;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm o_178 (ATerm), ATerm p_178 (ATerm), ATerm q_178 (ATerm), ATerm t)
{
  ATerm o_160 = NULL,q_160 = NULL,t_160 = NULL,u_160 = NULL,v_160 = NULL,w_160 = NULL,x_160 = NULL,y_160 = NULL;
  t_160 = t;
  t = term_w_46;
  u_160 = t;
  t = term_w_51;
  t = lookup_table_0_1(u_160, t);
  y_160 = t;
  t = term_x_46;
  v_160 = t;
  t = (ATerm) ATempty;
  w_160 = t;
  t = y_160;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(v_160, w_160, x_160, t);
  t = t_160;
  {
    static ATerm v_17 (ATerm t);
    static ATerm v_17 (ATerm t)
    {
      ATerm x_51 = t;
      int y_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_178(t);
          LocalPopChoice(y_51);
        }
      else
        {
          t = x_51;
          {
            ATerm z_51 = t;
            int a_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_17, x_17, y_17, t);
                LocalPopChoice(a_52);
              }
            else
              {
                t = z_51;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_17, t);
  }
  {
    ATerm b_52 = t;
    int c_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_161 = NULL;
        q_161 = t;
        {
          ATerm d_52 = t;
          int e_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_83 = NULL;
              t = q_161;
              {
                ATerm f_52 = t;
                int g_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_83 = NULL,h_83 = NULL;
                    t = term_c_45;
                    g_83 = t;
                    t = term_k_51;
                    h_83 = t;
                    t = term_h_52;
                    t = r_11(g_83, h_83, t);
                    LocalPopChoice(g_52);
                  }
                else
                  {
                    t = f_52;
                    t = fetch_1_0(a_18, t);
                  }
              }
              t = q_161;
              t = p_178(t);
              t = term_l_39;
              f_83 = t;
              t = SSL_exit(f_83);
              LocalPopChoice(e_52);
            }
          else
            {
              t = d_52;
              {
                ATerm l_83 = NULL,m_83 = NULL,p_83 = NULL;
                t = term_c_45;
                m_83 = t;
                t = term_a_50;
                p_83 = t;
                t = term_i_52;
                t = r_11(m_83, p_83, t);
                t = q_161;
                t = q_178(t);
                t = term_l_39;
                l_83 = t;
                t = SSL_exit(l_83);
              }
            }
        }
        LocalPopChoice(c_52);
      }
    else
      {
        t = b_52;
        {
          ATerm j_52 = t;
          int k_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_161 = NULL,s_161 = NULL,t_161 = NULL;
              static ATerm h_18 (ATerm t);
              static ATerm h_18 (ATerm t)
              {
                ATerm u_161 = NULL,v_161 = NULL,w_161 = NULL,s_19 = NULL;
                w_161 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_161 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_161);
                u_161 = t;
                t = v_161;
                if(((o_160 != NULL) && (o_160 != t)))
                  _fail(t);
                else
                  o_160 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_161);
                s_19 = t;
                t = SSLsetAnnotations(s_19, u_161);
                return(t);
              }
              t = fetch_1_0(h_18, t);
              t = term_z_48;
              s_161 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_160)), term_l_52);
              t_161 = t;
              t = SSL_printnl(s_161, t_161);
              t = (ATerm) ATmakeAppl(sym__2, term_z_48, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_160)), term_l_52));
              t = p_178(t);
              t = term_v_39;
              r_161 = t;
              t = SSL_exit(r_161);
              LocalPopChoice(k_52);
            }
          else
            {
              t = j_52;
            }
        }
      }
  }
  q_160 = t;
  t = term_w_46;
  t = table_destroy_0_0(t);
  t = q_160;
  return(t);
}
ATerm option_wrap_5_0 (ATerm r_176 (ATerm), ATerm s_176 (ATerm), ATerm t_176 (ATerm), ATerm u_176 (ATerm), ATerm v_176 (ATerm), ATerm t)
{
  ATerm d_162 = NULL,e_162 = NULL,f_162 = NULL,g_162 = NULL,h_162 = NULL;
  t = parse_options_3_0(r_176, s_176, t_176, t);
  d_162 = t;
  t = term_m_52;
  t = table_create_0_0(t);
  t = term_m_52;
  e_162 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_52, term_n_52, d_162);
  t = lookup_table_0_1(e_162, t);
  h_162 = t;
  t = term_n_52;
  f_162 = t;
  t = h_162;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(f_162, d_162, g_162, t);
  t = d_162;
  t = u_176(t);
  {
    ATerm p_52 = t;
    int q_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_176(t);
        t = report_success_0_0(t);
        LocalPopChoice(q_52);
      }
    else
      {
        t = p_52;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm i_18 (ATerm t)
{
  ATerm r_52 = t;
  int u_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(u_52);
    }
  else
    {
      t = r_52;
      {
        ATerm v_52 = t;
        int w_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(w_52);
          }
        else
          {
            t = v_52;
            {
              ATerm x_52 = t;
              int z_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(k_18, l_18, m_18, t);
                  LocalPopChoice(z_52);
                }
              else
                {
                  t = x_52;
                  {
                    ATerm b_53 = t;
                    int d_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(d_53);
                      }
                    else
                      {
                        t = b_53;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_18 (ATerm t)
{
  t = input_1_0(n_18, t);
  return(t);
}
static ATerm k_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm o_162 = NULL,p_162 = NULL;
  t = term_j_45;
  o_162 = t;
  t = term_p_46;
  p_162 = t;
  t = term_f_53;
  t = u_11(o_162, p_162, t);
  t = term_g_53;
  return(t);
}
static ATerm m_18 (ATerm t)
{
  t = term_h_53;
  return(t);
}
static ATerm n_18 (ATerm t)
{
  t = output_1_0(o_18, t);
  return(t);
}
static ATerm o_18 (ATerm t)
{
  ATerm r_162 = NULL,s_162 = NULL,t_162 = NULL,u_162 = NULL,v_162 = NULL,w_162 = NULL,x_162 = NULL,y_162 = NULL,z_162 = NULL,a_163 = NULL,b_163 = NULL,g_163 = NULL,h_163 = NULL,i_163 = NULL,l_163 = NULL,c_20 = NULL,b_20 = NULL,a_20 = NULL,y_19 = NULL;
  l_163 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_163);
  r_162 = t;
  t = s_162;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_162 = ATgetFirst((ATermList) t);
      v_162 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_162);
  t_162 = t;
  t = v_162;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_162 = ATgetFirst((ATermList) t);
      z_162 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_162);
  x_162 = t;
  t = y_162;
  if(match_cons(t, sym_Strategies_1))
    {
      g_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_162);
  b_163 = t;
  t = g_163;
  t = map_1_0(p_18, t);
  h_163 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, h_163);
  y_19 = t;
  t = SSLsetAnnotations(y_19, b_163);
  i_163 = t;
  t = z_162;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_162), i_163);
  a_20 = t;
  t = SSLsetAnnotations(a_20, x_162);
  a_163 = t;
  t = (ATerm) ATinsert(CheckATermList(a_163), u_162);
  b_20 = t;
  t = SSLsetAnnotations(b_20, t_162);
  w_162 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_162);
  c_20 = t;
  t = SSLsetAnnotations(c_20, r_162);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm j_164 = NULL,k_164 = NULL,l_164 = NULL,m_164 = NULL,n_164 = NULL;
  n_164 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_164 = ATgetArgument(t, 0);
      k_164 = ATgetArgument(t, 1);
      l_164 = ATgetArgument(t, 2);
      m_164 = ATgetArgument(t, 3);
      {
        ATerm i_53 = t;
        int j_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_84 = NULL,j_84 = NULL,x_19 = NULL;
            t = SSLgetAnnotations(n_164);
            e_84 = t;
            t = m_164;
            t = topdown_1_0(q_18, t);
            t = match_to_dfa_0_0(t);
            j_84 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, j_164, k_164, l_164, j_84);
            x_19 = t;
            t = SSLsetAnnotations(x_19, e_84);
            LocalPopChoice(j_53);
          }
        else
          {
            t = i_53;
            t = n_164;
          }
      }
    }
  else
    {
      t = n_164;
    }
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm l_84 = NULL;
  l_84 = t;
  if(match_cons(t, sym_Id_0))
    {
      ATerm k_53 = t;
      int l_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_84 = NULL;
          t = l_84;
          t = new_0_0(t);
          m_84 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_84), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_84)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_84))));
          LocalPopChoice(l_53);
        }
      else
        {
          t = k_53;
          t = l_84;
        }
    }
  else
    {
      t = l_84;
    }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(i_18, default_system_usage_0_0, default_system_about_0_0, _id, j_18, t);
  return(t);
}

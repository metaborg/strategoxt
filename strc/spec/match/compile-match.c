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
static ATerm term_f_53;
static ATerm term_d_53;
static ATerm term_b_53;
static ATerm term_l_52;
static ATerm term_k_52;
static ATerm term_j_52;
static ATerm term_g_52;
static ATerm term_f_52;
static ATerm term_u_51;
static ATerm term_n_51;
static ATerm term_m_51;
static ATerm term_l_51;
static ATerm term_i_51;
static ATerm term_b_51;
static ATerm term_i_50;
static ATerm term_d_50;
static ATerm term_c_50;
static ATerm term_b_50;
static ATerm term_a_50;
static ATerm term_z_49;
static ATerm term_y_49;
static ATerm term_v_49;
static ATerm term_u_49;
static ATerm term_r_49;
static ATerm term_q_49;
static ATerm term_p_49;
static ATerm term_y_48;
static ATerm term_j_48;
static ATerm term_i_48;
static ATerm term_w_47;
static ATerm term_q_47;
static ATerm term_p_47;
static ATerm term_o_47;
static ATerm term_n_47;
static ATerm term_m_47;
static ATerm term_k_47;
static ATerm term_j_47;
static ATerm term_i_47;
static ATerm term_h_47;
static ATerm term_g_47;
static ATerm term_f_47;
static ATerm term_b_47;
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
static ATerm term_e_45;
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
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_e_45);
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
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym__2, term_h_47, term_l_39);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_39);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym__2, term_n_47, term_p_46);
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_47));
  term_q_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_h_47);
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(sym__2, term_y_49, term_p_46);
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(sym__2, term_b_50, term_p_46);
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym__2, term_i_51, term_p_46);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(sym__3, term_w_46, term_x_46, (ATerm) ATempty);
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_i_51);
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_y_49);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(sym__2, term_j_45, term_p_46);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm spaste_1_0 (ATerm i_141 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm j_141 (ATerm), ATerm k_141 (ATerm), ATerm l_141 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm n_141 (ATerm), ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm i_8 (ATerm w_35, ATerm v_35, ATerm t);
ATerm SVar_1_0 (ATerm a_119 (ATerm), ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm s_141 (ATerm), ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t);
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
ATerm tpaste_1_0 (ATerm e_141 (ATerm), ATerm t);
ATerm Var_1_0 (ATerm w_118 (ATerm), ATerm t);
static ATerm j_8 (ATerm z_167 (ATerm), ATerm a_168 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_81, ATerm h_81, ATerm g_81, ATerm t);
static ATerm j_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm k_8 (ATerm t_167 (ATerm), ATerm u_167 (ATerm (ATerm), ATerm), ATerm a_81, ATerm d_81, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm h_168 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm o_167 (ATerm (ATerm), ATerm), ATerm p_167 (ATerm), ATerm q_167 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_167 (ATerm (ATerm), ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm n_9 (ATerm g_111, ATerm f_111, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm t_143 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm simple_strategy_0_0 (ATerm t);
static ATerm p_8 (ATerm l_162 (ATerm), ATerm v_77, ATerm u_77, ATerm t);
ATerm tvars_matrix_boundin_3_0 (ATerm p_181 (ATerm), ATerm q_181 (ATerm), ATerm r_181 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm h_141 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm o_141 (ATerm), ATerm t);
static ATerm u_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm a_8 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm t_8 (ATerm n_162 (ATerm), ATerm x_77, ATerm w_77, ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm v_8 (ATerm y_933, ATerm d_934, ATerm x_96, ATerm t);
ATerm while_not_2_0 (ATerm g_149 (ATerm), ATerm h_149 (ATerm), ATerm t);
ATerm for_3_0 (ATerm j_149 (ATerm), ATerm k_149 (ATerm), ATerm l_149 (ATerm), ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm n_119 (ATerm f_118, ATerm g_118, ATerm h_118, ATerm t);
static ATerm s_8 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
ATerm free_vars_3_0 (ATerm r_169 (ATerm), ATerm s_169 (ATerm), ATerm t_169 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
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
static ATerm x_8 (ATerm c_115, ATerm b_115, ATerm t);
static ATerm y_8 (ATerm r_154 (ATerm), ATerm u_52, ATerm s_52, ATerm t);
static ATerm u_10 (ATerm t);
ATerm default_state_0_0 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
ATerm MatchCons_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t);
static ATerm a_9 (ATerm a_181 (ATerm), ATerm p_113, ATerm m_113, ATerm n_113, ATerm o_113, ATerm t);
static ATerm b_9 (ATerm i_113, ATerm j_113, ATerm k_113, ATerm t);
ATerm filter_1_0 (ATerm z_166 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm i_161 (ATerm), ATerm t);
static ATerm c_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
ATerm ConsArgs_0_0 (ATerm t);
static ATerm j_12 (ATerm t);
ATerm outedges_0_0 (ATerm t);
static ATerm q_128 (ATerm k_127, ATerm t);
ATerm get_path_0_0 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm f_9 (ATerm v_114, ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm h_9 (ATerm l_114, ATerm t);
static ATerm t_12 (ATerm t);
static ATerm j_9 (ATerm j_114, ATerm t);
ATerm repeat_2_0 (ATerm p_148 (ATerm), ATerm q_148 (ATerm), ATerm t);
static ATerm l_9 (ATerm d_54, ATerm e_54, ATerm t);
ATerm end_scope_1_0 (ATerm o_154 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm a_146 (ATerm), ATerm b_146 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_154 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm p_154 (ATerm), ATerm q_154 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm p_160 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm y_132 (ATerm q_132, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
ATerm MatrixMerge_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm q_142 (ATerm), ATerm t);
static ATerm s_10 (ATerm v_162 (ATerm), ATerm w_162 (ATerm), ATerm d_78, ATerm c_78, ATerm t);
static ATerm t_10 (ATerm s_162 (ATerm), ATerm z_77, ATerm y_77, ATerm t);
ATerm foldr_3_0 (ATerm x_165 (ATerm), ATerm y_165 (ATerm), ATerm z_165 (ATerm), ATerm t);
static ATerm b_14 (ATerm t);
ATerm collect_om_2_0 (ATerm p_164 (ATerm), ATerm q_164 (ATerm), ATerm t);
ATerm CollectSubst_0_0 (ATerm t);
ATerm IgnoreVar_0_0 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
ATerm CollectSplit_2_0 (ATerm g_164 (ATerm), ATerm h_164 (ATerm), ATerm t);
ATerm collect_split_2_0 (ATerm b_164 (ATerm), ATerm c_164 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm i_147 (ATerm), ATerm j_147 (ATerm), ATerm t);
static ATerm o_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
ATerm nzip0_1_0 (ATerm r_147 (ATerm), ATerm t);
ATerm Propagate_0_0 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
ATerm term_to_matrix_0_0 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
ATerm match_to_matrix_0_0 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm t_15 (ATerm t);
ATerm match_to_dfa_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm p_142 (ATerm), ATerm t);
ATerm map_1_0 (ATerm a_160 (ATerm), ATerm t);
static ATerm d_11 (ATerm i_44, ATerm j_44, ATerm t);
static ATerm e_11 (ATerm o_42, ATerm p_42, ATerm t);
static ATerm g_11 (ATerm e_150 (ATerm), ATerm y_316, ATerm u_42, ATerm t);
static ATerm f_11 (ATerm k_42, ATerm l_42, ATerm t);
static ATerm w_15 (ATerm t);
static ATerm x_15 (ATerm t);
ATerm output_1_0 (ATerm g_176 (ATerm), ATerm t);
static ATerm x_148 (ATerm o_148, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_11 (ATerm q_42, ATerm t);
static ATerm i_11 (ATerm k_87, ATerm l_87, ATerm t);
static ATerm j_11 (ATerm k_44, ATerm l_44, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_150 (ATerm n_149, ATerm t);
static ATerm q_150 (ATerm r_149, ATerm s_149, ATerm t_149, ATerm t);
static ATerm s_150 (ATerm b_150, ATerm c_150, ATerm d_150, ATerm t);
static ATerm k_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm h_176 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
ATerm default_system_usage_2_0 (ATerm f_178 (ATerm), ATerm g_178 (ATerm), ATerm t);
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
static ATerm t_11 (ATerm e_48, ATerm f_48, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_11 (ATerm y_53, ATerm z_53, ATerm x_53, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm e_17 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm l_11 (ATerm g_51, ATerm h_51, ATerm t);
ATerm foldr_2_0 (ATerm v_165 (ATerm), ATerm w_165 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_151 (ATerm), ATerm t);
static ATerm h_17 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm u_11 (ATerm n_58, ATerm o_58, ATerm p_58, ATerm t);
ATerm lookup_table_0_1 (ATerm k_55, ATerm t);
ATerm new_hashtable_0_2 (ATerm v_58, ATerm w_58, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm n_11 (ATerm s_58, ATerm t_58, ATerm t);
static ATerm o_11 (ATerm x_58, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_160 (ATerm), ATerm t);
static ATerm v_11 (ATerm q_58, ATerm r_58, ATerm t);
static ATerm q_11 (ATerm r_55, ATerm s_55, ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm u_17 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm a_178 (ATerm), ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm a_18 (ATerm t);
ATerm parse_options_3_0 (ATerm x_177 (ATerm), ATerm y_177 (ATerm), ATerm z_177 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm a_176 (ATerm), ATerm b_176 (ATerm), ATerm c_176 (ATerm), ATerm d_176 (ATerm), ATerm e_176 (ATerm), ATerm t);
static ATerm h_18 (ATerm t);
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
        ATerm s_18 = ATgetArgument(t, 1);
        if(((ATgetType(s_18) != AT_LIST) || !(ATisEmpty(s_18))))
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
      ATerm v_18 = ATgetArgument(t, 0);
      if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
        {
          s_0 = ATgetFirst((ATermList) v_18);
          v_0 = (ATerm) ATgetNext((ATermList) v_18);
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
            ATerm c_19 = ATgetArgument(t, 0);
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
        ATerm n_19 = ATgetArgument(t, 1);
        if(((ATgetType(n_19) == AT_LIST) && !(ATisEmpty(n_19))))
          {
            x_2 = ATgetFirst((ATermList) n_19);
            y_2 = (ATerm) ATgetNext((ATermList) n_19);
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
            ATerm s_19 = ATgetArgument(t, 0);
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
  ATerm o_6 = NULL,v_6 = NULL,y_6 = NULL,a_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_19 = ATgetArgument(t, 0);
      if(((ATgetType(y_19) == AT_LIST) && !(ATisEmpty(y_19))))
        {
          o_6 = ATgetFirst((ATermList) y_19);
          v_6 = (ATerm) ATgetNext((ATermList) y_19);
        }
      else
        _fail(t);
      {
        ATerm d_20 = ATgetArgument(t, 1);
        if(((ATgetType(d_20) == AT_LIST) && !(ATisEmpty(d_20))))
          {
            y_6 = ATgetFirst((ATermList) d_20);
            a_7 = (ATerm) ATgetNext((ATermList) d_20);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_6, y_6), (ATerm) ATmakeAppl(sym__2, v_6, a_7));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL;
  if(match_cons(t, sym__2))
    {
      b_7 = ATgetArgument(t, 0);
      c_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_7), b_7);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm g_7 = NULL,k_7 = NULL,n_7 = NULL;
  if(match_cons(t, sym__2))
    {
      g_7 = ATgetArgument(t, 0);
      n_7 = ATgetArgument(t, 1);
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_7);
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
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_7, k_7);
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
  ATerm s_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      if(((ATgetType(t_20) == AT_LIST) && !(ATisEmpty(t_20))))
        {
          s_11 = ATgetFirst((ATermList) t_20);
          w_11 = (ATerm) ATgetNext((ATermList) t_20);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_11, x_11), (ATerm) ATmakeAppl(sym__2, w_11, y_11));
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
  ATerm l_13 = NULL,m_13 = NULL,q_13 = NULL,s_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_21 = ATgetArgument(t, 0);
      if(((ATgetType(d_21) == AT_LIST) && !(ATisEmpty(d_21))))
        {
          l_13 = ATgetFirst((ATermList) d_21);
          m_13 = (ATerm) ATgetNext((ATermList) d_21);
        }
      else
        _fail(t);
      {
        ATerm e_21 = ATgetArgument(t, 1);
        if(((ATgetType(e_21) == AT_LIST) && !(ATisEmpty(e_21))))
          {
            q_13 = ATgetFirst((ATermList) e_21);
            s_13 = (ATerm) ATgetNext((ATermList) e_21);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_13, q_13), (ATerm) ATmakeAppl(sym__2, m_13, s_13));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm t_13 = NULL,w_13 = NULL;
  if(match_cons(t, sym__2))
    {
      t_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_13), t_13);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm c_14 = NULL,e_14 = NULL,f_14 = NULL;
  if(match_cons(t, sym__2))
    {
      c_14 = ATgetArgument(t, 0);
      f_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_14;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_14);
      }
    else
      {
        t = f_21;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_21 = ATgetArgument(t, 0);
            e_14 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_14, e_14);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm i_141 (ATerm), ATerm t)
{
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL;
      c_13 = t;
      if(match_cons(t, sym_Let_2))
        {
          d_13 = ATgetArgument(t, 0);
          e_13 = ATgetArgument(t, 1);
          {
            ATerm e_0 = NULL,k_0 = NULL,m_0 = NULL,y_1 = NULL;
            t = SSLgetAnnotations(c_13);
            e_0 = t;
            t = d_13;
            t = i_141(t);
            m_0 = t;
            t = (ATerm) ATmakeAppl(sym__2, d_13, m_0);
            t = genzip_4_0(a_0, b_0, c_0, h_0, t);
            k_0 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, k_0, e_13);
            y_1 = t;
            t = SSLsetAnnotations(y_1, e_0);
          }
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              d_13 = ATgetArgument(t, 0);
              e_13 = ATgetArgument(t, 1);
              f_13 = ATgetArgument(t, 2);
              {
                ATerm w_1 = NULL,k_2 = NULL,l_2 = NULL,z_1 = NULL;
                t = SSLgetAnnotations(c_13);
                w_1 = t;
                t = e_13;
                t = i_141(t);
                l_2 = t;
                t = (ATerm) ATmakeAppl(sym__2, e_13, l_2);
                t = genzip_4_0(i_0, q_0, b_1, d_1, t);
                k_2 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, d_13, k_2, f_13);
                z_1 = t;
                t = SSLsetAnnotations(z_1, w_1);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  d_13 = ATgetArgument(t, 0);
                  e_13 = ATgetArgument(t, 1);
                  f_13 = ATgetArgument(t, 2);
                  b_13 = ATgetArgument(t, 3);
                  {
                    ATerm v_5 = NULL,b_6 = NULL,e_6 = NULL,b_2 = NULL;
                    t = SSLgetAnnotations(c_13);
                    v_5 = t;
                    t = e_13;
                    t = i_141(t);
                    e_6 = t;
                    t = (ATerm) ATmakeAppl(sym__2, e_13, e_6);
                    t = genzip_4_0(i_1, j_1, k_1, l_1, t);
                    b_6 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, d_13, b_6, f_13, b_13);
                    b_2 = t;
                    t = SSLsetAnnotations(b_2, v_5);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_13 = ATgetArgument(t, 0);
                      e_13 = ATgetArgument(t, 1);
                      f_13 = ATgetArgument(t, 2);
                      b_13 = ATgetArgument(t, 3);
                      {
                        ATerm h_8 = NULL,u_8 = NULL,w_8 = NULL,c_2 = NULL;
                        t = SSLgetAnnotations(c_13);
                        h_8 = t;
                        t = e_13;
                        t = i_141(t);
                        w_8 = t;
                        t = (ATerm) ATmakeAppl(sym__2, e_13, w_8);
                        t = genzip_4_0(m_1, n_1, o_1, p_1, t);
                        u_8 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, d_13, u_8, f_13, b_13);
                        c_2 = t;
                        t = SSLsetAnnotations(c_2, h_8);
                      }
                    }
                  else
                    {
                      ATerm x_10 = NULL,c_11 = NULL,m_11 = NULL,d_2 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          d_13 = ATgetArgument(t, 0);
                          e_13 = ATgetArgument(t, 1);
                          f_13 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(c_13);
                      x_10 = t;
                      t = e_13;
                      t = i_141(t);
                      m_11 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_13, m_11);
                      t = genzip_4_0(q_1, r_1, s_1, t_1, t);
                      c_11 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, d_13, c_11, f_13);
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
              ATerm j_13 = NULL,k_13 = NULL;
              k_13 = t;
              t = i_141(t);
              j_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, k_13, j_13);
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
              ATerm l_15 = NULL,m_15 = NULL,n_15 = NULL,v_12 = NULL,y_12 = NULL,e_2 = NULL;
              l_15 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  m_15 = ATgetArgument(t, 0);
                  n_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_15);
              v_12 = t;
              t = m_15;
              t = i_141(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_12 = ATgetFirst((ATermList) t);
                  {
                    ATerm q_21 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, y_12, n_15);
              e_2 = t;
              t = SSLsetAnnotations(e_2, v_12);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm j_141 (ATerm), ATerm k_141 (ATerm), ATerm l_141 (ATerm), ATerm t)
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
        t = j_141(t);
        z_13 = t;
        t = d_25;
        t = j_141(t);
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
            t = l_141(t);
            f_15 = t;
            t = d_25;
            t = l_141(t);
            g_15 = t;
            t = o_24;
            t = j_141(t);
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
                t = l_141(t);
                i_16 = t;
                t = d_25;
                t = l_141(t);
                j_16 = t;
                t = o_24;
                t = l_141(t);
                k_16 = t;
                t = n_24;
                t = j_141(t);
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
                    ATerm i_17 = NULL,o_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,r_2 = NULL;
                    t = SSLgetAnnotations(q_24);
                    i_17 = t;
                    t = z_24;
                    t = l_141(t);
                    o_17 = t;
                    t = d_25;
                    t = l_141(t);
                    r_17 = t;
                    t = o_24;
                    t = l_141(t);
                    s_17 = t;
                    t = n_24;
                    t = j_141(t);
                    t_17 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, o_17, r_17, s_17, t_17);
                    r_2 = t;
                    t = SSLsetAnnotations(r_2, i_17);
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
                        ATerm u_18 = NULL,b_19 = NULL,l_19 = NULL,m_19 = NULL,u_2 = NULL;
                        t = SSLgetAnnotations(q_24);
                        u_18 = t;
                        t = z_24;
                        t = l_141(t);
                        b_19 = t;
                        t = d_25;
                        t = l_141(t);
                        l_19 = t;
                        t = o_24;
                        t = l_141(t);
                        m_19 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, b_19, l_19, m_19);
                        u_2 = t;
                        t = SSLsetAnnotations(u_2, u_18);
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
                            t = l_141(t);
                            y_20 = t;
                            t = d_25;
                            t = j_141(t);
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
                                t = l_141(t);
                                n_21 = t;
                                t = d_25;
                                t = j_141(t);
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
                                    t = l_141(t);
                                    b_22 = t;
                                    t = d_25;
                                    t = j_141(t);
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
                                  t = l_141(t);
                                  q_22 = t;
                                  t = d_25;
                                  t = j_141(t);
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
ATerm dynrule_sargs_1_0 (ATerm n_141 (ATerm), ATerm t)
{
  ATerm n_28 = NULL,t_28 = NULL,v_28 = NULL;
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
          t_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_28;
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
                t_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_28;
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
                t_28 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_28;
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
static ATerm i_8 (ATerm w_35, ATerm v_35, ATerm t)
{
  t = w_35;
  t = map_1_0(i_2, t);
  return(t);
}
ATerm SVar_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,z_30 = NULL,l_3 = NULL;
  z_30 = t;
  if(match_cons(t, sym_SVar_1))
    {
      t_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_30);
  s_30 = t;
  t = t_30;
  t = a_119(t);
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
      ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,j_31 = NULL,k_31 = NULL;
      e_31 = t;
      if(match_cons(t, sym_Let_2))
        {
          f_31 = ATgetArgument(t, 0);
          g_31 = ATgetArgument(t, 1);
          t = e_31;
          t = i_8(f_31, g_31, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              f_31 = ATgetArgument(t, 0);
              g_31 = ATgetArgument(t, 1);
              j_31 = ATgetArgument(t, 2);
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
                      j_31 = ATgetArgument(t, 2);
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
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(h_23);
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
  ATerm i_23 = t;
  int j_23 = stack_ptr;
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
      LocalPopChoice(j_23);
      t = x_31;
    }
  else
    {
      t = i_23;
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
            ATerm q_23 = ATgetArgument(t, 1);
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
  ATerm w_32 = NULL;
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_32 = ATgetArgument(t, 0);
          {
            ATerm t_23 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_23);
      t = w_32;
    }
  else
    {
      t = r_23;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_32;
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  t = rename_4_0(SVar_1_0, j_2, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm s_141 (ATerm), ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
  a_39 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      b_39 = ATgetArgument(t, 0);
      c_39 = ATgetArgument(t, 1);
      {
        ATerm k_23 = NULL,o_23 = NULL,p_23 = NULL,w_23 = NULL,x_23 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,j_24 = NULL,k_24 = NULL,p_3 = NULL,o_3 = NULL,n_3 = NULL;
        t = SSLgetAnnotations(a_39);
        k_23 = t;
        t = b_39;
        if(match_cons(t, sym_DynRuleId_1))
          {
            w_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_39);
        p_23 = t;
        t = w_23;
        if(match_cons(t, sym_RDecT_3))
          {
            d_24 = ATgetArgument(t, 0);
            e_24 = ATgetArgument(t, 1);
            f_24 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_23);
        c_24 = t;
        t = d_24;
        t = p_141(t);
        g_24 = t;
        t = e_24;
        t = q_141(t);
        h_24 = t;
        t = f_24;
        t = r_141(t);
        j_24 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, g_24, h_24, j_24);
        n_3 = t;
        t = SSLsetAnnotations(n_3, c_24);
        k_24 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, k_24);
        o_3 = t;
        t = SSLsetAnnotations(o_3, p_23);
        x_23 = t;
        t = c_39;
        t = s_141(t);
        o_23 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, x_23, o_23);
        p_3 = t;
        t = SSLsetAnnotations(p_3, k_23);
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
            t = p_141(t);
            q_25 = t;
            t = o_25;
            t = q_141(t);
            r_25 = t;
            t = p_25;
            t = r_141(t);
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
            t = s_141(t);
            f_25 = t;
            t = b_25;
            t = t_141(t);
            g_25 = t;
            t = c_25;
            t = u_141(t);
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
          ATerm b_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,w_26 = NULL,x_26 = NULL,x_3 = NULL,w_3 = NULL,v_3 = NULL,u_3 = NULL;
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
          t = p_141(t);
          t_26 = t;
          t = r_26;
          t = q_141(t);
          u_26 = t;
          t = s_26;
          t = r_141(t);
          w_26 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, t_26, u_26, w_26);
          u_3 = t;
          t = SSLsetAnnotations(u_3, p_26);
          x_26 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, x_26);
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
          t = s_141(t);
          i_26 = t;
          t = g_26;
          t = t_141(t);
          j_26 = t;
          t = h_26;
          t = u_141(t);
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
      ATerm u_23 = ATgetArgument(t, 0);
      if(((ATgetType(u_23) != AT_LIST) || !(ATisEmpty(u_23))))
        _fail(t);
      {
        ATerm v_23 = ATgetArgument(t, 1);
        if(((ATgetType(v_23) != AT_LIST) || !(ATisEmpty(v_23))))
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
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_23 = ATgetArgument(t, 0);
      if(((ATgetType(y_23) == AT_LIST) && !(ATisEmpty(y_23))))
        {
          o_28 = ATgetFirst((ATermList) y_23);
          p_28 = (ATerm) ATgetNext((ATermList) y_23);
        }
      else
        _fail(t);
      {
        ATerm z_23 = ATgetArgument(t, 1);
        if(((ATgetType(z_23) == AT_LIST) && !(ATisEmpty(z_23))))
          {
            q_28 = ATgetFirst((ATermList) z_23);
            r_28 = (ATerm) ATgetNext((ATermList) z_23);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_28, q_28), (ATerm) ATmakeAppl(sym__2, p_28, r_28));
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm s_28 = NULL,y_28 = NULL;
  if(match_cons(t, sym__2))
    {
      s_28 = ATgetArgument(t, 0);
      y_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_28), s_28);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm b_29 = NULL,f_29 = NULL,g_29 = NULL;
  if(match_cons(t, sym__2))
    {
      b_29 = ATgetArgument(t, 0);
      g_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_29;
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm i_24 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_24);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_29);
      }
    else
      {
        t = a_24;
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
  ATerm d_31 = NULL,h_31 = NULL,i_31 = NULL,o_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_24 = ATgetArgument(t, 0);
      if(((ATgetType(r_24) == AT_LIST) && !(ATisEmpty(r_24))))
        {
          d_31 = ATgetFirst((ATermList) r_24);
          h_31 = (ATerm) ATgetNext((ATermList) r_24);
        }
      else
        _fail(t);
      {
        ATerm s_24 = ATgetArgument(t, 1);
        if(((ATgetType(s_24) == AT_LIST) && !(ATisEmpty(s_24))))
          {
            i_31 = ATgetFirst((ATermList) s_24);
            o_31 = (ATerm) ATgetNext((ATermList) s_24);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_31, i_31), (ATerm) ATmakeAppl(sym__2, h_31, o_31));
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL;
  if(match_cons(t, sym__2))
    {
      q_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_31), q_31);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm v_31 = NULL,a_32 = NULL,b_32 = NULL;
  if(match_cons(t, sym__2))
    {
      v_31 = ATgetArgument(t, 0);
      b_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_31;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_32);
      }
    else
      {
        t = t_24;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_24 = ATgetArgument(t, 0);
            a_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_32, a_32);
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
  ATerm j_34 = NULL,n_34 = NULL,p_34 = NULL;
  if(match_cons(t, sym__2))
    {
      j_34 = ATgetArgument(t, 0);
      p_34 = ATgetArgument(t, 1);
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_34);
      }
    else
      {
        t = x_25;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_26 = ATgetArgument(t, 0);
            n_34 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, p_34, n_34);
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
  ATerm q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      if(((ATgetType(v_26) == AT_LIST) && !(ATisEmpty(v_26))))
        {
          q_48 = ATgetFirst((ATermList) v_26);
          r_48 = (ATerm) ATgetNext((ATermList) v_26);
        }
      else
        _fail(t);
      {
        ATerm y_26 = ATgetArgument(t, 1);
        if(((ATgetType(y_26) == AT_LIST) && !(ATisEmpty(y_26))))
          {
            s_48 = ATgetFirst((ATermList) y_26);
            t_48 = (ATerm) ATgetNext((ATermList) y_26);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_48, s_48), (ATerm) ATmakeAppl(sym__2, r_48, t_48));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm u_48 = NULL,v_48 = NULL;
  if(match_cons(t, sym__2))
    {
      u_48 = ATgetArgument(t, 0);
      v_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_48), u_48);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm z_48 = NULL,b_49 = NULL,j_49 = NULL;
  if(match_cons(t, sym__2))
    {
      z_48 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_48;
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
            b_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_49, b_49);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm e_141 (ATerm), ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_47 = NULL,x_47 = NULL,y_47 = NULL,b_48 = NULL,c_48 = NULL;
      v_47 = t;
      if(match_cons(t, sym_Scope_2))
        {
          x_47 = ATgetArgument(t, 0);
          y_47 = ATgetArgument(t, 1);
          {
            ATerm j_27 = NULL,n_27 = NULL,k_4 = NULL;
            t = SSLgetAnnotations(v_47);
            j_27 = t;
            t = x_47;
            t = e_141(t);
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
                t = SSLgetAnnotations(v_47);
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
                  b_48 = ATgetArgument(t, 2);
                  {
                    ATerm f_28 = NULL,k_28 = NULL,l_28 = NULL,m_4 = NULL;
                    t = SSLgetAnnotations(v_47);
                    f_28 = t;
                    t = b_48;
                    t = e_141(t);
                    l_28 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_48, l_28);
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
                      b_48 = ATgetArgument(t, 2);
                      c_48 = ATgetArgument(t, 3);
                      {
                        ATerm p_30 = NULL,a_31 = NULL,b_31 = NULL,n_4 = NULL;
                        t = SSLgetAnnotations(v_47);
                        p_30 = t;
                        t = b_48;
                        t = e_141(t);
                        b_31 = t;
                        t = (ATerm) ATmakeAppl(sym__2, b_48, b_31);
                        t = genzip_4_0(h_3, i_3, j_3, k_3, t);
                        a_31 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, x_47, y_47, a_31, c_48);
                        n_4 = t;
                        t = SSLsetAnnotations(n_4, p_30);
                      }
                    }
                  else
                    {
                      ATerm g_33 = NULL,t_33 = NULL,u_33 = NULL,o_4 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          x_47 = ATgetArgument(t, 0);
                          y_47 = ATgetArgument(t, 1);
                          b_48 = ATgetArgument(t, 2);
                          c_48 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(v_47);
                      g_33 = t;
                      t = b_48;
                      t = e_141(t);
                      u_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_48, u_33);
                      t = genzip_4_0(m_3, y_3, z_3, a_4, t);
                      t_33 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, x_47, y_47, t_33, c_48);
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
          ATerm k_48 = NULL,l_48 = NULL;
          l_48 = t;
          t = e_141(t);
          k_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_48, k_48);
          t = genzip_4_0(c_4, d_4, e_4, f_4, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, b_4, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm Var_1_0 (ATerm w_118 (ATerm), ATerm t)
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
  t = w_118(t);
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_50);
  z_4 = t;
  t = SSLsetAnnotations(z_4, e_50);
  return(t);
}
static ATerm j_8 (ATerm z_167 (ATerm), ATerm a_168 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm i_81, ATerm h_81, ATerm g_81, ATerm t)
{
  static ATerm g_4 (ATerm t);
  static ATerm h_4 (ATerm t);
  static ATerm g_4 (ATerm t)
  {
    ATerm j_50 = NULL;
    j_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_50, g_81);
    t = z_167(t);
    return(t);
  }
  static ATerm h_4 (ATerm t)
  {
    ATerm k_50 = NULL;
    k_50 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_50, h_81);
    t = z_167(t);
    return(t);
  }
  t = i_81;
  t = a_168(g_4, h_4, _id, t);
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
static ATerm k_8 (ATerm t_167 (ATerm), ATerm u_167 (ATerm (ATerm), ATerm), ATerm a_81, ATerm d_81, ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,s_50 = NULL;
  t = a_81;
  t = t_167(t);
  n_50 = t;
  t = map_1_0(new_0_0, t);
  o_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_50, o_50);
  t = genzip_4_0(j_4, q_4, r_4, _id, t);
  s_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_50, d_81);
  t = conc_0_0(t);
  p_50 = t;
  t = a_81;
  {
    static ATerm s_4 (ATerm t);
    static ATerm s_4 (ATerm t)
    {
      t = o_50;
      return(t);
    }
    t = u_167(s_4, t);
  }
  q_50 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_50, d_81, p_50);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL;
  p_51 = t;
  if(match_cons(t, sym__2))
    {
      q_51 = ATgetArgument(t, 0);
      r_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_51;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_51 = ATgetFirst((ATermList) t);
      t_51 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_51;
  if(match_cons(t, sym__2))
    {
      j_51 = ATgetArgument(t, 0);
      k_51 = ATgetArgument(t, 1);
      {
        ATerm k_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_51;
            if((q_51 != t))
              {
                _fail(t);
              }
            t = k_51;
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
            t = (ATerm) ATmakeAppl(sym__2, q_51, t_51);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, q_51, t_51);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm h_168 (ATerm), ATerm t)
{
  static ATerm u_53 (ATerm t);
  static ATerm u_53 (ATerm t)
  {
    ATerm m_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_168(t);
        LocalPopChoice(o_27);
      }
    else
      {
        t = m_27;
        {
          ATerm p_53 = NULL,q_53 = NULL,t_53 = NULL;
          static ATerm t_4 (ATerm t);
          static ATerm t_4 (ATerm t)
          {
            ATerm g_35 = NULL;
            g_35 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_35, not_null(t_53));
            t = u_53(t);
            return(t);
          }
          p_53 = t;
          if(match_cons(t, sym__2))
            {
              q_53 = ATgetArgument(t, 0);
              if(((t_53 != NULL) && (t_53 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                t_53 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_53;
          t = SRTS_all(t_4, t);
        }
      }
    return(t);
  }
  t = u_53(t);
  return(t);
}
ATerm rename_4_0 (ATerm o_167 (ATerm (ATerm), ATerm), ATerm p_167 (ATerm), ATerm q_167 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm r_167 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm n_54 = NULL;
  static ATerm q_56 (ATerm t);
  static ATerm q_56 (ATerm t)
  {
    static ATerm v_4 (ATerm t);
    static ATerm v_4 (ATerm t)
    {
      ATerm c_55 = NULL,i_55 = NULL,j_55 = NULL;
      c_55 = t;
      if(match_cons(t, sym__2))
        {
          i_55 = ATgetArgument(t, 0);
          j_55 = ATgetArgument(t, 1);
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
              t = (ATerm) ATmakeAppl(sym__2, h_56, j_55);
              t = lookup_0_0(t);
              return(t);
            }
            t = i_55;
            t = o_167(w_4, t);
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            {
              ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
              t = c_55;
              t = k_8(p_167, r_167, i_55, j_55, t);
              if(match_cons(t, sym__3))
                {
                  z_35 = ATgetArgument(t, 0);
                  a_36 = ATgetArgument(t, 1);
                  b_36 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = j_8(q_56, q_167, z_35, a_36, b_36, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(v_4, t);
    return(t);
  }
  n_54 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_54, (ATerm) ATempty);
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
            ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                r_57 = ATgetArgument(t, 0);
                s_57 = ATgetArgument(t, 1);
                t_57 = ATgetArgument(t, 2);
                u_57 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = t_57;
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
  ATerm f_58 = NULL;
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_58 = ATgetArgument(t, 0);
          {
            ATerm a_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_27);
      t = f_58;
    }
  else
    {
      t = y_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_58;
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
  ATerm z_58 = NULL;
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_58 = ATgetArgument(t, 0);
          {
            ATerm d_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_28);
      t = z_58;
    }
  else
    {
      t = b_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_58;
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
                  ATerm z_28 = ATgetArgument(t, 1);
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
static ATerm n_9 (ATerm g_111, ATerm f_111, ATerm t)
{
  t = g_111;
  t = topdown_1_0(i_5, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, g_111);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm u_59 = NULL,x_59 = NULL,z_59 = NULL,a_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      z_59 = ATgetArgument(t, 0);
      g_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_59;
  if(match_cons(t, sym_Match_1))
    {
      a_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_60;
  if(match_cons(t, sym_Var_1))
    {
      f_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_60;
  if(match_cons(t, sym_Seq_2))
    {
      h_60 = ATgetArgument(t, 0);
      x_59 = ATgetArgument(t, 1);
      t = h_60;
      if(match_cons(t, sym_Build_1))
        {
          i_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_60;
      if(match_cons(t, sym_Var_1))
        {
          u_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_59;
      if((f_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_60)), x_59);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          h_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_60;
      if(match_cons(t, sym_Var_1))
        {
          i_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_60;
      if((f_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_60));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm s_60 = NULL,u_60 = NULL,w_60 = NULL,x_60 = NULL,c_61 = NULL,h_61 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_60 = ATgetArgument(t, 0);
      c_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_60;
  if(match_cons(t, sym_Build_1))
    {
      x_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_61;
  if(match_cons(t, sym_Seq_2))
    {
      h_61 = ATgetArgument(t, 0);
      u_60 = ATgetArgument(t, 1);
      t = h_61;
      if(match_cons(t, sym_Match_1))
        {
          s_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_60;
      if((x_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_60), u_60);
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
      if((x_60 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, x_60);
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
  ATerm u_64 = NULL,v_64 = NULL,y_64 = NULL,g_65 = NULL,h_65 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_64 = ATgetArgument(t, 0);
      g_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_64;
  if(match_cons(t, sym_Build_1))
    {
      ATerm c_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_65;
  if(match_cons(t, sym_Seq_2))
    {
      h_65 = ATgetArgument(t, 0);
      v_64 = ATgetArgument(t, 1);
      t = h_65;
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
          h_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, h_65);
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
  ATerm g_67 = NULL,h_67 = NULL,j_67 = NULL,k_67 = NULL;
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
            j_67 = ATgetFirst((ATermList) i_29);
            k_67 = (ATerm) ATgetNext((ATermList) i_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_67, j_67), (ATerm) ATmakeAppl(sym__2, h_67, k_67));
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
static ATerm o_5 (ATerm t)
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
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL,g_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_29 = ATgetArgument(t, 0);
      if(((ATgetType(m_29) == AT_LIST) && !(ATisEmpty(m_29))))
        {
          d_68 = ATgetFirst((ATermList) m_29);
          e_68 = (ATerm) ATgetNext((ATermList) m_29);
        }
      else
        _fail(t);
      {
        ATerm n_29 = ATgetArgument(t, 1);
        if(((ATgetType(n_29) == AT_LIST) && !(ATisEmpty(n_29))))
          {
            f_68 = ATgetFirst((ATermList) n_29);
            g_68 = (ATerm) ATgetNext((ATermList) n_29);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_68, f_68), (ATerm) ATmakeAppl(sym__2, e_68, g_68));
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm h_68 = NULL,i_68 = NULL;
  if(match_cons(t, sym__2))
    {
      h_68 = ATgetArgument(t, 0);
      i_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_68), h_68);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm j_68 = NULL,m_68 = NULL;
  if(match_cons(t, sym__2))
    {
      j_68 = ATgetArgument(t, 0);
      m_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_68), (ATerm) ATmakeAppl(sym_Match_1, m_68));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL,g_66 = NULL,k_66 = NULL,l_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL;
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
      r_66 = ATgetArgument(t, 1);
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
        t = (ATerm) ATmakeAppl(sym__2, r_66, d_66);
        t = genzip_4_0(j_5, k_5, l_5, m_5, t);
        d_67 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_67), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_66, r_66)), e_66));
      }
    }
  else
    {
      ATerm c_68 = NULL;
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
      t = (ATerm) ATmakeAppl(sym__2, r_66, v_66);
      t = genzip_4_0(o_5, p_5, s_5, t_5, t);
      c_68 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_68), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, l_66, r_66)));
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
ATerm oncetd_1_0 (ATerm t_143 (ATerm), ATerm t)
{
  static ATerm z_70 (ATerm t);
  static ATerm z_70 (ATerm t)
  {
    ATerm y_29 = t;
    int z_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_143(t);
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
  ATerm q_72 = NULL,r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL,v_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL,b_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL;
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
          y_72 = ATgetArgument(t, 3);
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
          e_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_73;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_73;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_73;
      if((t_72 != t))
        {
          _fail(t);
        }
      t = y_72;
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
      t = y_72;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm x_73 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,k_74 = NULL,n_74 = NULL,o_74 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      n_74 = ATgetArgument(t, 0);
      t = n_74;
      if(match_cons(t, sym_Seq_2))
        {
          k_74 = ATgetArgument(t, 0);
          c_74 = ATgetArgument(t, 1);
          t = k_74;
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
              k_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, k_74);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          n_74 = ATgetArgument(t, 0);
          t = n_74;
          if(match_cons(t, sym_Test_1))
            {
              k_74 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, k_74);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              n_74 = ATgetArgument(t, 0);
              t = n_74;
              if(match_cons(t, sym_Not_1))
                {
                  k_74 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, k_74);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  n_74 = ATgetArgument(t, 0);
                  o_74 = ATgetArgument(t, 1);
                  t = o_74;
                  if((n_74 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      n_74 = ATgetArgument(t, 0);
                      o_74 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = o_74;
                  if((n_74 != t))
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
  ATerm j_75 = NULL,k_75 = NULL,r_75 = NULL,s_75 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      j_75 = ATgetArgument(t, 0);
      s_75 = ATgetArgument(t, 1);
      t = j_75;
      if(match_cons(t, sym_LChoice_2))
        {
          k_75 = ATgetArgument(t, 0);
          r_75 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, k_75, (ATerm) ATmakeAppl(sym_LChoice_2, r_75, s_75));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          j_75 = ATgetArgument(t, 0);
          s_75 = ATgetArgument(t, 1);
          t = j_75;
          if(match_cons(t, sym_Seq_2))
            {
              k_75 = ATgetArgument(t, 0);
              r_75 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, k_75, (ATerm) ATmakeAppl(sym_Seq_2, r_75, s_75));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              j_75 = ATgetArgument(t, 0);
              s_75 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_75;
          if(match_cons(t, sym_Choice_2))
            {
              k_75 = ATgetArgument(t, 0);
              r_75 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, k_75, (ATerm) ATmakeAppl(sym_Choice_2, r_75, s_75));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL,p_76 = NULL,s_76 = NULL,t_76 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      s_76 = ATgetArgument(t, 0);
      t_76 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, s_76, t_76);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          s_76 = ATgetArgument(t, 0);
          t = s_76;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_76 = ATgetFirst((ATermList) t);
              n_76 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, m_76, (ATerm) ATmakeAppl(sym_LChoices_1, n_76));
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
              s_76 = ATgetArgument(t, 0);
              t = s_76;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_76 = ATgetFirst((ATermList) t);
                  n_76 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, m_76, (ATerm) ATmakeAppl(sym_Choices_1, n_76));
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
                  s_76 = ATgetArgument(t, 0);
                  t = s_76;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_76 = ATgetFirst((ATermList) t);
                      n_76 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_76, (ATerm) ATmakeAppl(sym_Seqs_1, n_76));
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
                      s_76 = ATgetArgument(t, 0);
                      t_76 = ATgetArgument(t, 1);
                      p_76 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, t_76, (ATerm) ATmakeAppl(sym_Op_2, term_g_30, (ATerm) ATinsert(ATinsert(ATempty, p_76), s_76)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          s_76 = ATgetArgument(t, 0);
                          t_76 = ATgetArgument(t, 1);
                          p_76 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, p_76)), s_76), (ATerm) ATmakeAppl(sym_Build_1, t_76)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              s_76 = ATgetArgument(t, 0);
                              t_76 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_76, (ATerm) ATmakeAppl(sym_Match_1, t_76));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  s_76 = ATgetArgument(t, 0);
                                  t_76 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_76), t_76);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      s_76 = ATgetArgument(t, 0);
                                      t_76 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_76), s_76);
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
                    int q_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(q_30);
                      }
                    else
                      {
                        t = o_30;
                        {
                          ATerm r_30 = t;
                          int v_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(v_30);
                            }
                          else
                            {
                              t = r_30;
                              {
                                ATerm w_30 = t;
                                int x_30 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm y_84 = NULL,z_84 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        y_84 = ATgetArgument(t, 0);
                                        z_84 = ATgetArgument(t, 1);
                                        t = y_84;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_84;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            y_84 = ATgetArgument(t, 0);
                                            z_84 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = y_84;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_84;
                                      }
                                    LocalPopChoice(x_30);
                                  }
                                else
                                  {
                                    t = w_30;
                                    {
                                      ATerm y_30 = t;
                                      int c_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(c_31);
                                        }
                                      else
                                        {
                                          t = y_30;
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
                                                  int p_31 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(p_31);
                                                    }
                                                  else
                                                    {
                                                      t = n_31;
                                                      {
                                                        ATerm s_31 = t;
                                                        int t_31 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(t_31);
                                                          }
                                                        else
                                                          {
                                                            t = s_31;
                                                            {
                                                              ATerm u_31 = t;
                                                              int w_31 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(w_31);
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
                                                                          ATerm c_32 = t;
                                                                          int d_32 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(d_32);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = c_32;
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
                                                                                          t = n_9(d_85, g_85, t);
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
  ATerm g_94 = NULL,h_94 = NULL,k_94 = NULL,l_94 = NULL;
  h_94 = t;
  if(match_cons(t, sym_Id_0))
    {
      t = h_94;
    }
  else
    {
      if(match_cons(t, sym_Fail_0))
        {
          t = h_94;
        }
      else
        {
          if(match_cons(t, sym_Build_1))
            {
              k_94 = ATgetArgument(t, 0);
              {
                ATerm x_40 = NULL,e_41 = NULL,q_5 = NULL;
                t = SSLgetAnnotations(h_94);
                x_40 = t;
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
                              ATerm d_45 = NULL,d_5 = NULL;
                              t = SSLgetAnnotations(p_43);
                              d_45 = t;
                              t = (ATerm) ATmakeAppl(sym_Int_1, q_43);
                              d_5 = t;
                              t = SSLsetAnnotations(d_5, d_45);
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
                                      ATerm o_46 = NULL,f_5 = NULL;
                                      t = SSLgetAnnotations(p_43);
                                      o_46 = t;
                                      t = (ATerm) ATmakeAppl(sym_Str_1, q_43);
                                      f_5 = t;
                                      t = SSLsetAnnotations(f_5, o_46);
                                    }
                                  }
                                else
                                  {
                                    ATerm e_47 = NULL,l_47 = NULL,n_5 = NULL;
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
                                    n_5 = t;
                                    t = SSLsetAnnotations(n_5, e_47);
                                  }
                              }
                          }
                      }
                    return(t);
                  }
                  t = x_43(t);
                }
                e_41 = t;
                t = (ATerm) ATmakeAppl(sym_Build_1, e_41);
                q_5 = t;
                t = SSLsetAnnotations(q_5, x_40);
              }
            }
          else
            {
              if(match_cons(t, sym_Assign_2))
                {
                  k_94 = ATgetArgument(t, 0);
                  l_94 = ATgetArgument(t, 1);
                  {
                    ATerm h_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,w_48 = NULL,x_48 = NULL,c_6 = NULL,a_6 = NULL,r_5 = NULL;
                    t = SSLgetAnnotations(h_94);
                    h_48 = t;
                    t = k_94;
                    if(match_cons(t, sym_Var_1))
                      {
                        w_48 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(k_94);
                    p_48 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_48);
                    r_5 = t;
                    t = SSLsetAnnotations(r_5, p_48);
                    x_48 = t;
                    t = l_94;
                    if(match_cons(t, sym_Var_1))
                      {
                        n_48 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = SSLgetAnnotations(l_94);
                    m_48 = t;
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_48);
                    a_6 = t;
                    t = SSLsetAnnotations(a_6, m_48);
                    o_48 = t;
                    t = (ATerm) ATmakeAppl(sym_Assign_2, x_48, o_48);
                    c_6 = t;
                    t = SSLsetAnnotations(c_6, h_48);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Match_1))
                    {
                      k_94 = ATgetArgument(t, 0);
                      {
                        ATerm i_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,f_6 = NULL,d_6 = NULL;
                        t = SSLgetAnnotations(h_94);
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
                        f_6 = t;
                        t = SSLsetAnnotations(f_6, i_49);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Prim_2))
                        {
                          k_94 = ATgetArgument(t, 0);
                          l_94 = ATgetArgument(t, 1);
                          {
                            ATerm m_50 = NULL,g_6 = NULL;
                            t = SSLgetAnnotations(h_94);
                            m_50 = t;
                            t = (ATerm) ATmakeAppl(sym_Prim_2, k_94, l_94);
                            g_6 = t;
                            t = SSLsetAnnotations(g_6, m_50);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_CallT_3))
                            {
                              k_94 = ATgetArgument(t, 0);
                              l_94 = ATgetArgument(t, 1);
                              g_94 = ATgetArgument(t, 2);
                              {
                                ATerm o_51 = NULL,h_6 = NULL;
                                t = SSLgetAnnotations(h_94);
                                o_51 = t;
                                t = (ATerm) ATmakeAppl(sym_CallT_3, k_94, l_94, g_94);
                                h_6 = t;
                                t = SSLsetAnnotations(h_6, o_51);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_Seq_2))
                                {
                                  k_94 = ATgetArgument(t, 0);
                                  l_94 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_52 = NULL,r_52 = NULL,t_52 = NULL,j_6 = NULL;
                                    t = SSLgetAnnotations(h_94);
                                    o_52 = t;
                                    t = k_94;
                                    t = simple_strategy_0_0(t);
                                    r_52 = t;
                                    t = l_94;
                                    t = simple_strategy_0_0(t);
                                    t_52 = t;
                                    t = (ATerm) ATmakeAppl(sym_Seq_2, r_52, t_52);
                                    j_6 = t;
                                    t = SSLsetAnnotations(j_6, o_52);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Seqs_1))
                                    {
                                      k_94 = ATgetArgument(t, 0);
                                      {
                                        ATerm c_53 = NULL,e_53 = NULL,k_6 = NULL;
                                        t = SSLgetAnnotations(h_94);
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
                                      ATerm w_53 = NULL,c_54 = NULL,l_6 = NULL;
                                      if(match_cons(t, sym_Scope_2))
                                        {
                                          k_94 = ATgetArgument(t, 0);
                                          l_94 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(h_94);
                                      w_53 = t;
                                      t = l_94;
                                      t = simple_strategy_0_0(t);
                                      c_54 = t;
                                      t = (ATerm) ATmakeAppl(sym_Scope_2, k_94, c_54);
                                      l_6 = t;
                                      t = SSLsetAnnotations(l_6, w_53);
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
static ATerm p_8 (ATerm l_162 (ATerm), ATerm v_77, ATerm u_77, ATerm t)
{
  static ATerm d_97 (ATerm t);
  static ATerm d_97 (ATerm t)
  {
    static ATerm f_97 (ATerm j_96, ATerm t);
    static ATerm f_97 (ATerm j_96, ATerm t)
    {
      ATerm l_96 = NULL,m_96 = NULL,o_96 = NULL,p_96 = NULL,q_96 = NULL,s_96 = NULL,m_7 = NULL;
      t = j_96;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_96 = ATgetFirst((ATermList) t);
          m_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        static ATerm x_5 (ATerm t);
        static ATerm x_5 (ATerm t)
        {
          t = u_77;
          return(t);
        }
        t = s_10(l_162, x_5, l_96, m_96, t);
      }
      t = j_96;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_96 = ATgetFirst((ATermList) t);
          q_96 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_96);
      o_96 = t;
      t = q_96;
      t = d_97(t);
      s_96 = t;
      t = (ATerm) ATinsert(CheckATermList(s_96), p_96);
      m_7 = t;
      t = SSLsetAnnotations(m_7, o_96);
      return(t);
    }
    ATerm t_96 = NULL,b_97 = NULL;
    t_96 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_96;
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
                b_97 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            LocalPopChoice(h_32);
            {
              ATerm j_32 = t;
              int k_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_97(t_96, t);
                  LocalPopChoice(k_32);
                }
              else
                {
                  t = j_32;
                  t = b_97;
                  t = d_97(t);
                }
            }
          }
        else
          {
            t = g_32;
            t = f_97(t_96, t);
          }
      }
    return(t);
  }
  t = v_77;
  t = d_97(t);
  return(t);
}
ATerm tvars_matrix_boundin_3_0 (ATerm p_181 (ATerm), ATerm q_181 (ATerm), ATerm r_181 (ATerm), ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = tboundin_3_0(p_181, q_181, r_181, t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm u_97 = NULL,v_97 = NULL,y_97 = NULL,m_54 = NULL,t_54 = NULL,u_54 = NULL,v_7 = NULL;
        u_97 = t;
        if(match_cons(t, sym_Matrix_2))
          {
            v_97 = ATgetArgument(t, 0);
            y_97 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_97);
        m_54 = t;
        t = v_97;
        t = r_181(t);
        t_54 = t;
        t = y_97;
        t = p_181(t);
        u_54 = t;
        t = (ATerm) ATmakeAppl(sym_Matrix_2, t_54, u_54);
        v_7 = t;
        t = SSLsetAnnotations(v_7, m_54);
      }
    }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm p_98 = NULL;
  ATerm n_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_98 = ATgetArgument(t, 0);
          {
            ATerm q_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_32);
      t = p_98;
    }
  else
    {
      t = n_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_98;
    }
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm z_98 = NULL;
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_98 = ATgetArgument(t, 0);
          {
            ATerm t_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_32);
      t = z_98;
    }
  else
    {
      t = r_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_98;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm g_98 = NULL;
  ATerm u_32 = t;
  int v_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm x_32 = ATgetArgument(t, 0);
          ATerm y_32 = ATgetArgument(t, 1);
          g_98 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(v_32);
      t = g_98;
      t = map_1_0(y_5, t);
    }
  else
    {
      t = u_32;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm z_32 = ATgetArgument(t, 0);
          ATerm a_33 = ATgetArgument(t, 1);
          g_98 = ATgetArgument(t, 2);
          {
            ATerm b_33 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = g_98;
      t = map_1_0(z_5, t);
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm p_100 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_100);
  return(t);
}
static ATerm m_6 (ATerm t)
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
                  ATerm r_100 = NULL,u_100 = NULL,w_100 = NULL,x_100 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_100 = ATgetArgument(t, 0);
                      u_100 = ATgetArgument(t, 1);
                      w_100 = ATgetArgument(t, 2);
                      x_100 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_100;
                  t = map_1_0(n_6, t);
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
                        t = dynrule_targs_1_0(p_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm h_101 = NULL;
  ATerm l_33 = t;
  int m_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_101 = ATgetArgument(t, 0);
          {
            ATerm n_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_33);
      t = h_101;
    }
  else
    {
      t = l_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_101;
    }
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = map_1_0(q_6, t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm m_101 = NULL;
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_101 = ATgetArgument(t, 0);
          {
            ATerm q_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_33);
      t = m_101;
    }
  else
    {
      t = o_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_101;
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm q_101 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_101);
  return(t);
}
static ATerm s_6 (ATerm t)
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
                  ATerm s_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_101 = ATgetArgument(t, 0);
                      t_101 = ATgetArgument(t, 1);
                      u_101 = ATgetArgument(t, 2);
                      v_101 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_101;
                  t = map_1_0(t_6, t);
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
                        t = dynrule_targs_1_0(u_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm c_102 = NULL;
  ATerm h_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_102 = ATgetArgument(t, 0);
          {
            ATerm k_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_34);
      t = c_102;
    }
  else
    {
      t = h_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_102;
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = map_1_0(w_6, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm h_102 = NULL;
  ATerm l_34 = t;
  int m_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_102 = ATgetArgument(t, 0);
          {
            ATerm o_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_34);
      t = h_102;
    }
  else
    {
      t = l_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_102;
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm l_102 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_102);
  return(t);
}
static ATerm z_6 (ATerm t)
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
                  ATerm n_102 = NULL,o_102 = NULL,p_102 = NULL,q_102 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_102 = ATgetArgument(t, 0);
                      o_102 = ATgetArgument(t, 1);
                      p_102 = ATgetArgument(t, 2);
                      q_102 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_102;
                  t = map_1_0(d_7, t);
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
static ATerm d_7 (ATerm t)
{
  ATerm x_102 = NULL;
  ATerm y_34 = t;
  int z_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_102 = ATgetArgument(t, 0);
          {
            ATerm a_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_34);
      t = x_102;
    }
  else
    {
      t = y_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_102;
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
  ATerm e_103 = NULL;
  ATerm b_35 = t;
  int c_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_103 = ATgetArgument(t, 0);
          {
            ATerm d_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_35);
      t = e_103;
    }
  else
    {
      t = b_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_103;
    }
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm j_103 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_103);
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
                  ATerm l_103 = NULL,m_103 = NULL,n_103 = NULL,o_103 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_103 = ATgetArgument(t, 0);
                      m_103 = ATgetArgument(t, 1);
                      n_103 = ATgetArgument(t, 2);
                      o_103 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_103;
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
                        t = dynrule_targs_1_0(l_7, t);
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
  ATerm v_103 = NULL;
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_103 = ATgetArgument(t, 0);
          {
            ATerm p_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_35);
      t = v_103;
    }
  else
    {
      t = n_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_103;
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = map_1_0(o_7, t);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm a_104 = NULL;
  ATerm q_35 = t;
  int r_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_104 = ATgetArgument(t, 0);
          {
            ATerm s_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_35);
      t = a_104;
    }
  else
    {
      t = q_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_104;
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm e_104 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_104);
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
                  ATerm g_104 = NULL,h_104 = NULL,i_104 = NULL,j_104 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_104 = ATgetArgument(t, 0);
                      h_104 = ATgetArgument(t, 1);
                      i_104 = ATgetArgument(t, 2);
                      j_104 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_104;
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
  ATerm h_105 = NULL;
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_105 = ATgetArgument(t, 0);
          {
            ATerm i_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_36);
      t = h_105;
    }
  else
    {
      t = g_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_105 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_105;
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
  ATerm m_105 = NULL;
  ATerm j_36 = t;
  int k_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_105 = ATgetArgument(t, 0);
          {
            ATerm l_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_36);
      t = m_105;
    }
  else
    {
      t = j_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_105 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_105;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm l_100 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      l_100 = ATgetArgument(t, 0);
      t = l_100;
      t = free_vars_3_0(i_6, m_6, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          l_100 = ATgetArgument(t, 0);
          t = l_100;
          t = free_vars_3_0(r_6, s_6, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              l_100 = ATgetArgument(t, 0);
              t = l_100;
              t = free_vars_3_0(x_6, z_6, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  l_100 = ATgetArgument(t, 0);
                  t = l_100;
                  t = free_vars_3_0(h_7, i_7, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      l_100 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_100;
                  t = free_vars_3_0(p_7, q_7, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm h_141 (ATerm), ATerm t)
{
  ATerm z_110 = NULL,a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL;
  c_111 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_111 = ATgetArgument(t, 0);
      b_111 = ATgetArgument(t, 1);
      {
        ATerm l_55 = NULL,o_55 = NULL,p_55 = NULL,z_7 = NULL;
        t = SSLgetAnnotations(c_111);
        l_55 = t;
        t = d_111;
        t = h_141(t);
        o_55 = t;
        t = b_111;
        t = f_141(t);
        p_55 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_55, p_55);
        z_7 = t;
        t = SSLsetAnnotations(z_7, l_55);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          d_111 = ATgetArgument(t, 0);
          {
            ATerm z_55 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,f_56 = NULL,g_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,e_8 = NULL,b_8 = NULL;
            t = SSLgetAnnotations(c_111);
            z_55 = t;
            t = d_111;
            if(match_cons(t, sym_Rule_3))
              {
                c_56 = ATgetArgument(t, 0);
                d_56 = ATgetArgument(t, 1);
                f_56 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_111);
            b_56 = t;
            t = c_56;
            t = f_141(t);
            g_56 = t;
            t = d_56;
            t = f_141(t);
            i_56 = t;
            t = f_56;
            t = f_141(t);
            j_56 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, g_56, i_56, j_56);
            b_8 = t;
            t = SSLsetAnnotations(b_8, b_56);
            k_56 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, k_56);
            e_8 = t;
            t = SSLsetAnnotations(e_8, z_55);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              d_111 = ATgetArgument(t, 0);
              b_111 = ATgetArgument(t, 1);
              z_110 = ATgetArgument(t, 2);
              {
                ATerm t_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,m_8 = NULL;
                t = SSLgetAnnotations(c_111);
                t_56 = t;
                t = d_111;
                t = h_141(t);
                x_56 = t;
                t = b_111;
                t = h_141(t);
                y_56 = t;
                t = z_110;
                t = h_141(t);
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
                  d_111 = ATgetArgument(t, 0);
                  b_111 = ATgetArgument(t, 1);
                  z_110 = ATgetArgument(t, 2);
                  a_111 = ATgetArgument(t, 3);
                  {
                    ATerm l_57 = NULL,v_57 = NULL,w_57 = NULL,b_58 = NULL,c_58 = NULL,o_8 = NULL;
                    t = SSLgetAnnotations(c_111);
                    l_57 = t;
                    t = d_111;
                    t = h_141(t);
                    v_57 = t;
                    t = b_111;
                    t = h_141(t);
                    w_57 = t;
                    t = z_110;
                    t = h_141(t);
                    b_58 = t;
                    t = a_111;
                    t = f_141(t);
                    c_58 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, v_57, w_57, b_58, c_58);
                    o_8 = t;
                    t = SSLsetAnnotations(o_8, l_57);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_111 = ATgetArgument(t, 0);
                      b_111 = ATgetArgument(t, 1);
                      z_110 = ATgetArgument(t, 2);
                      a_111 = ATgetArgument(t, 3);
                      {
                        ATerm k_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,r_8 = NULL;
                        t = SSLgetAnnotations(c_111);
                        k_59 = t;
                        t = d_111;
                        t = h_141(t);
                        q_59 = t;
                        t = b_111;
                        t = h_141(t);
                        r_59 = t;
                        t = z_110;
                        t = h_141(t);
                        s_59 = t;
                        t = a_111;
                        t = f_141(t);
                        t_59 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_59, r_59, s_59, t_59);
                        r_8 = t;
                        t = SSLsetAnnotations(r_8, k_59);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          d_111 = ATgetArgument(t, 0);
                          b_111 = ATgetArgument(t, 1);
                          {
                            ATerm p_60 = NULL,t_60 = NULL,y_60 = NULL,z_8 = NULL;
                            t = SSLgetAnnotations(c_111);
                            p_60 = t;
                            t = d_111;
                            t = h_141(t);
                            t_60 = t;
                            t = b_111;
                            t = f_141(t);
                            y_60 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, t_60, y_60);
                            z_8 = t;
                            t = SSLsetAnnotations(z_8, p_60);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              d_111 = ATgetArgument(t, 0);
                              b_111 = ATgetArgument(t, 1);
                              {
                                ATerm i_61 = NULL,l_61 = NULL,p_61 = NULL,c_9 = NULL;
                                t = SSLgetAnnotations(c_111);
                                i_61 = t;
                                t = d_111;
                                t = h_141(t);
                                l_61 = t;
                                t = b_111;
                                t = f_141(t);
                                p_61 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, l_61, p_61);
                                c_9 = t;
                                t = SSLsetAnnotations(c_9, i_61);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  d_111 = ATgetArgument(t, 0);
                                  b_111 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_61 = NULL,a_62 = NULL,b_62 = NULL,e_9 = NULL;
                                    t = SSLgetAnnotations(c_111);
                                    x_61 = t;
                                    t = d_111;
                                    t = h_141(t);
                                    a_62 = t;
                                    t = b_111;
                                    t = f_141(t);
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
                                      d_111 = ATgetArgument(t, 0);
                                      {
                                        ATerm i_62 = NULL,k_62 = NULL,g_9 = NULL;
                                        t = SSLgetAnnotations(c_111);
                                        i_62 = t;
                                        t = d_111;
                                        t = f_141(t);
                                        k_62 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, k_62);
                                        g_9 = t;
                                        t = SSLsetAnnotations(g_9, i_62);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          d_111 = ATgetArgument(t, 0);
                                          {
                                            ATerm s_62 = NULL,u_62 = NULL,i_9 = NULL;
                                            t = SSLgetAnnotations(c_111);
                                            s_62 = t;
                                            t = d_111;
                                            t = f_141(t);
                                            u_62 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, u_62);
                                            i_9 = t;
                                            t = SSLsetAnnotations(i_9, s_62);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              d_111 = ATgetArgument(t, 0);
                                              {
                                                ATerm c_63 = NULL,e_63 = NULL,k_9 = NULL;
                                                t = SSLgetAnnotations(c_111);
                                                c_63 = t;
                                                t = d_111;
                                                t = f_141(t);
                                                e_63 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, e_63);
                                                k_9 = t;
                                                t = SSLsetAnnotations(k_9, c_63);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  d_111 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm q_63 = NULL,s_63 = NULL,m_9 = NULL;
                                                    t = SSLgetAnnotations(c_111);
                                                    q_63 = t;
                                                    t = d_111;
                                                    t = f_141(t);
                                                    s_63 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, s_63);
                                                    m_9 = t;
                                                    t = SSLsetAnnotations(m_9, q_63);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm p_64 = NULL,r_64 = NULL,o_9 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      d_111 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(c_111);
                                                  p_64 = t;
                                                  t = d_111;
                                                  t = f_141(t);
                                                  r_64 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, r_64);
                                                  o_9 = t;
                                                  t = SSLsetAnnotations(o_9, p_64);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm o_141 (ATerm), ATerm t)
{
  ATerm f_113 = NULL,g_113 = NULL,f_114 = NULL;
  ATerm m_36 = t;
  int n_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          f_113 = ATgetArgument(t, 0);
          {
            ATerm o_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_36);
      t = f_113;
      if(match_cons(t, sym_DynRuleId_1))
        {
          g_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_113;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_36 = ATgetArgument(t, 0);
          ATerm q_36 = ATgetArgument(t, 1);
          f_114 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_114;
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
                f_113 = ATgetArgument(t, 0);
                {
                  ATerm u_36 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_36);
            t = f_113;
            if(match_cons(t, sym_DynRuleId_1))
              {
                g_113 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_113;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm v_36 = ATgetArgument(t, 0);
                ATerm w_36 = ATgetArgument(t, 1);
                f_114 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_114;
          }
        else
          {
            t = r_36;
            if(match_cons(t, sym_AddDynRule_2))
              {
                f_113 = ATgetArgument(t, 0);
                {
                  ATerm x_36 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = f_113;
            if(match_cons(t, sym_DynRuleId_1))
              {
                g_113 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_113;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm y_36 = ATgetArgument(t, 0);
                ATerm z_36 = ATgetArgument(t, 1);
                f_114 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_114;
          }
      }
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm u_115 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_115);
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
                  ATerm w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_115 = ATgetArgument(t, 0);
                      x_115 = ATgetArgument(t, 1);
                      y_115 = ATgetArgument(t, 2);
                      z_115 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_115;
                  t = map_1_0(x_7, t);
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
                        t = dynrule_targs_1_0(y_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm g_116 = NULL;
  ATerm i_37 = t;
  int j_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_116 = ATgetArgument(t, 0);
          {
            ATerm k_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_37);
      t = g_116;
    }
  else
    {
      t = i_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_116 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_116;
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = map_1_0(a_8, t);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm l_116 = NULL;
  ATerm l_37 = t;
  int n_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_116 = ATgetArgument(t, 0);
          {
            ATerm o_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_37);
      t = l_116;
    }
  else
    {
      t = l_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_116 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_116;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm z_114 = NULL,r_115 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      r_115 = ATgetArgument(t, 0);
      t = r_115;
      if(match_cons(t, sym_Rule_3))
        {
          z_114 = ATgetArgument(t, 0);
          {
            ATerm p_37 = ATgetArgument(t, 1);
          }
          {
            ATerm q_37 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_114;
      t = free_vars_3_0(u_7, w_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          r_115 = ATgetArgument(t, 0);
          {
            ATerm r_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_115;
    }
  return(t);
}
static ATerm t_8 (ATerm n_162 (ATerm), ATerm x_77, ATerm w_77, ATerm t)
{
  static ATerm e_117 (ATerm t);
  static ATerm e_117 (ATerm t)
  {
    ATerm z_116 = NULL,a_117 = NULL,b_117 = NULL;
    z_116 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_116;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_117 = ATgetFirst((ATermList) t);
            b_117 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_37 = t;
          int t_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_116;
              {
                static ATerm c_8 (ATerm t);
                static ATerm c_8 (ATerm t)
                {
                  t = w_77;
                  return(t);
                }
                t = s_10(n_162, c_8, a_117, b_117, t);
              }
              t = e_117(t);
              LocalPopChoice(t_37);
            }
          else
            {
              t = s_37;
              {
                ATerm d_65 = NULL,l_65 = NULL,m_12 = NULL;
                t = SSLgetAnnotations(z_116);
                d_65 = t;
                t = b_117;
                t = e_117(t);
                l_65 = t;
                t = (ATerm) ATinsert(CheckATermList(l_65), a_117);
                m_12 = t;
                t = SSLsetAnnotations(m_12, d_65);
              }
            }
        }
      }
    return(t);
  }
  t = x_77;
  t = e_117(t);
  return(t);
}
static ATerm d_8 (ATerm t)
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
  ATerm m_117 = NULL,n_117 = NULL,o_117 = NULL,p_117 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_37 = ATgetArgument(t, 0);
      if(((ATgetType(w_37) == AT_LIST) && !(ATisEmpty(w_37))))
        {
          m_117 = ATgetFirst((ATermList) w_37);
          n_117 = (ATerm) ATgetNext((ATermList) w_37);
        }
      else
        _fail(t);
      {
        ATerm x_37 = ATgetArgument(t, 1);
        if(((ATgetType(x_37) == AT_LIST) && !(ATisEmpty(x_37))))
          {
            o_117 = ATgetFirst((ATermList) x_37);
            p_117 = (ATerm) ATgetNext((ATermList) x_37);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_117, o_117), (ATerm) ATmakeAppl(sym__2, n_117, p_117));
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm q_117 = NULL,r_117 = NULL;
  if(match_cons(t, sym__2))
    {
      q_117 = ATgetArgument(t, 0);
      r_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_117), q_117);
  return(t);
}
static ATerm v_8 (ATerm y_933, ATerm d_934, ATerm x_96, ATerm t)
{
  ATerm h_117 = NULL,i_117 = NULL,j_117 = NULL,k_117 = NULL;
  t = SSL_explode_term(d_934);
  if(match_cons(t, sym__2))
    {
      h_117 = ATgetArgument(t, 0);
      j_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_933);
  if(match_cons(t, sym__2))
    {
      if((h_117 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_117, j_117);
  t = genzip_4_0(d_8, f_8, g_8, _id, t);
  k_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_117, x_96);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm g_149 (ATerm), ATerm h_149 (ATerm), ATerm t)
{
  static ATerm t_117 (ATerm t);
  static ATerm t_117 (ATerm t)
  {
    ATerm y_37 = t;
    int z_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_149(t);
        LocalPopChoice(z_37);
      }
    else
      {
        t = y_37;
        t = h_149(t);
        t = t_117(t);
      }
    return(t);
  }
  t = t_117(t);
  return(t);
}
ATerm for_3_0 (ATerm j_149 (ATerm), ATerm k_149 (ATerm), ATerm l_149 (ATerm), ATerm t)
{
  t = j_149(t);
  t = while_not_2_0(k_149, l_149, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm a_118 = NULL;
  a_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_118);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm b_118 = NULL,c_118 = NULL,d_118 = NULL,e_118 = NULL,a_13 = NULL;
  e_118 = t;
  if(match_cons(t, sym__2))
    {
      c_118 = ATgetArgument(t, 0);
      d_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_118);
  b_118 = t;
  t = d_118;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_118, d_118);
  a_13 = t;
  t = SSLsetAnnotations(a_13, b_118);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm y_118 = NULL,z_118 = NULL,b_119 = NULL,c_119 = NULL,d_119 = NULL;
  y_118 = t;
  if(match_cons(t, sym__2))
    {
      z_118 = ATgetArgument(t, 0);
      b_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_119;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_119 = ATgetFirst((ATermList) t);
      d_119 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_38 = t;
        int b_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_119(z_118, b_119, y_118, t);
            LocalPopChoice(b_38);
          }
        else
          {
            t = a_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_118), c_119), d_119);
          }
      }
    }
  else
    {
      t = n_119(z_118, b_119, y_118, t);
    }
  return(t);
}
static ATerm n_119 (ATerm f_118, ATerm g_118, ATerm h_118, ATerm t)
{
  ATerm i_118 = NULL,l_118 = NULL,p_14 = NULL,o_118 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL;
  t = SSLgetAnnotations(h_118);
  i_118 = t;
  t = g_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_118 = ATgetFirst((ATermList) t);
      r_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_118;
  if(match_cons(t, sym__2))
    {
      p_118 = ATgetArgument(t, 0);
      q_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_118;
        if((p_118 != t))
          {
            _fail(t);
          }
        t = r_118;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        t = g_118;
        t = v_8(p_118, q_118, r_118, t);
      }
  }
  l_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_118, l_118);
  p_14 = t;
  t = SSLsetAnnotations(p_14, i_118);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm m_119 = NULL;
  if(match_cons(t, sym__2))
    {
      m_119 = ATgetArgument(t, 0);
      if((m_119 != ATgetArgument(t, 1)))
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
      t = for_3_0(l_8, n_8, q_8, t);
      LocalPopChoice(f_38);
    }
  else
    {
      t = e_38;
      {
        ATerm h_119 = NULL,i_119 = NULL,j_119 = NULL;
        h_119 = t;
        if(match_cons(t, sym__2))
          {
            i_119 = ATgetArgument(t, 0);
            j_119 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_119;
        t = t_8(s_8, i_119, j_119, t);
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
  t = t_10(s_9, v_65, w_65, t);
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
  t = t_10(v_9, j_66, m_66, t);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm n_66 = NULL;
  if(match_cons(t, sym__2))
    {
      n_66 = ATgetArgument(t, 0);
      if((n_66 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm r_169 (ATerm), ATerm s_169 (ATerm), ATerm t_169 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm b_120 (ATerm t);
  static ATerm b_120 (ATerm t)
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_169(t);
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
              ATerm p_119 = NULL,q_119 = NULL,q_65 = NULL,r_65 = NULL;
              p_119 = t;
              t = s_169(t);
              q_119 = t;
              t = p_119;
              {
                static ATerm d_9 (ATerm t);
                static ATerm d_9 (ATerm t)
                {
                  ATerm s_119 = NULL;
                  t = b_120(t);
                  s_119 = t;
                  t = (ATerm) ATmakeAppl(sym__2, s_119, q_119);
                  t = diff_0_0(t);
                  return(t);
                }
                t = t_169(d_9, b_120, p_9, t);
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
                t = foldr_3_0(t_9, u_9, b_120, t);
              }
            }
        }
      }
    return(t);
  }
  t = b_120(t);
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
  ATerm z_68 = NULL,b_69 = NULL,c_69 = NULL,h_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_38 = ATgetArgument(t, 0);
      if(match_cons(y_38, sym__2))
        {
          z_68 = ATgetArgument(y_38, 0);
          b_69 = ATgetArgument(y_38, 1);
        }
      else
        _fail(t);
      {
        ATerm z_38 = ATgetArgument(t, 1);
        if(match_cons(z_38, sym__2))
          {
            c_69 = ATgetArgument(z_38, 0);
            h_69 = ATgetArgument(z_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_69), z_68), (ATerm) ATinsert(CheckATermList(h_69), b_69));
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm m_69 = NULL;
  m_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_VarDec_2, m_69, term_f_39), (ATerm) ATmakeAppl(sym_Var_1, m_69));
  return(t);
}
ATerm RowLet_1_0 (ATerm w_0 (ATerm), ATerm t)
{
  ATerm t_121 = NULL,u_121 = NULL,v_121 = NULL;
  t_121 = t;
  if(match_cons(t, sym_Row_2))
    {
      u_121 = ATgetArgument(t, 0);
      v_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_67 = NULL,e_67 = NULL,f_67 = NULL,i_67 = NULL,o_67 = NULL;
        t = v_121;
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
        t = v_121;
        t = free_vars_3_0(c_10, d_10, tvars_matrix_boundin_3_0, t);
        o_67 = t;
        t = w_0(t);
        i_67 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_67, i_67);
        t = p_8(i_10, o_67, i_67, t);
        t = genzip_4_0(j_10, k_10, l_10, m_10, t);
        if(match_cons(t, sym__2))
          {
            e_67 = ATgetArgument(t, 0);
            f_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, b_67, (ATerm)ATempty, e_67, v_121)), (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, u_121, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_67), (ATerm)ATempty, f_67)));
        LocalPopChoice(h_39);
      }
    else
      {
        t = g_39;
        t = v_121;
        t = simple_strategy_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATempty, u_121, v_121));
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
  ATerm g_122 = NULL,h_122 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_122 = ATgetFirst((ATermList) t);
      h_122 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_122, h_122);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm i_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_39 = ATgetArgument(t, 0);
      if(match_cons(j_39, sym__2))
        {
          i_122 = ATgetArgument(j_39, 0);
          j_122 = ATgetArgument(j_39, 1);
        }
      else
        _fail(t);
      {
        ATerm k_39 = ATgetArgument(t, 1);
        if(match_cons(k_39, sym__2))
          {
            k_122 = ATgetArgument(k_39, 0);
            l_122 = ATgetArgument(k_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_122), i_122), (ATerm) ATinsert(CheckATermList(l_122), j_122));
  return(t);
}
static ATerm x_8 (ATerm c_115, ATerm b_115, ATerm t)
{
  ATerm z_121 = NULL,a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL,a_15 = NULL;
  t = b_115;
  {
    static ATerm q_10 (ATerm t);
    static ATerm q_10 (ATerm t)
    {
      static ATerm r_10 (ATerm t);
      static ATerm r_10 (ATerm t)
      {
        t = c_115;
        return(t);
      }
      t = RowLet_1_0(r_10, t);
      return(t);
    }
    t = genzip_4_0(n_10, o_10, p_10, q_10, t);
  }
  f_122 = t;
  if(match_cons(t, sym__2))
    {
      c_122 = ATgetArgument(t, 0);
      d_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_122);
  b_122 = t;
  t = c_122;
  t = concat_0_0(t);
  e_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_122, d_122);
  a_15 = t;
  t = SSLsetAnnotations(a_15, b_122);
  if(match_cons(t, sym__2))
    {
      z_121 = ATgetArgument(t, 0);
      a_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Let_2, z_121, (ATerm) ATmakeAppl(sym_Scope_2, c_115, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Assign_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_l_39))), (ATerm) ATmakeAppl(sym_Matrix_1, a_122))));
  return(t);
}
static ATerm y_8 (ATerm r_154 (ATerm), ATerm u_52, ATerm s_52, ATerm t)
{
  ATerm m_122 = NULL,n_122 = NULL,o_122 = NULL,p_122 = NULL,q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL;
  p_122 = t;
  t = r_154(t);
  m_122 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_122, u_52, s_52);
  t = r_11(m_122, u_52, s_52, t);
  {
    ATerm m_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_122 = NULL;
        t = term_o_39;
        u_122 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_122, term_o_39);
        t = q_11(m_122, u_122, t);
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
      n_122 = ATgetFirst((ATermList) t);
      o_122 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_122, term_o_39, (ATerm) ATinsert(CheckATermList(o_122), (ATerm) ATinsert(CheckATermList(n_122), u_52)));
  t = lookup_table_0_1(m_122, t);
  t_122 = t;
  t = term_o_39;
  q_122 = t;
  t = (ATerm) ATinsert(CheckATermList(o_122), (ATerm) ATinsert(CheckATermList(n_122), u_52));
  r_122 = t;
  t = t_122;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(q_122, r_122, s_122, t);
  t = p_122;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm w_122 = NULL,x_122 = NULL,y_122 = NULL;
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
          w_122 = (ATerm) ATgetNext((ATermList) q_39);
        }
      else
        _fail(t);
      x_122 = ATgetArgument(t, 1);
      y_122 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, w_122, x_122, y_122);
  return(t);
}
ATerm default_state_0_0 (ATerm t)
{
  ATerm v_122 = NULL;
  t = filter_1_0(u_10, t);
  v_122 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, v_122);
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm a_124 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, a_124), term_u_39);
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
  t = l_11(e_71, f_71, t);
  return(t);
}
static ATerm z_10 (ATerm t)
{
  t = term_v_39;
  return(t);
}
ATerm MatchCons_2_0 (ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm t)
{
  ATerm x_123 = NULL,y_123 = NULL,z_123 = NULL;
  x_123 = t;
  if(match_cons(t, sym_Wld_0))
    {
      t = x_123;
      t = u_0(t);
      t = map_1_0(v_10, t);
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          y_123 = ATgetArgument(t, 0);
          t = x_123;
          t = t_0(t);
          if(match_cons(t, sym_Int_1))
            {
              if((y_123 != ATgetArgument(t, 0)))
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
              y_123 = ATgetArgument(t, 0);
              t = x_123;
              t = t_0(t);
              if(match_cons(t, sym_Real_1))
                {
                  if((y_123 != ATgetArgument(t, 0)))
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
                  y_123 = ATgetArgument(t, 0);
                  t = x_123;
                  t = t_0(t);
                  if(match_cons(t, sym_Str_1))
                    {
                      if((y_123 != ATgetArgument(t, 0)))
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
                      y_123 = ATgetArgument(t, 0);
                      z_123 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_123;
                  t = t_0(t);
                  if(match_cons(t, sym_Fun_2))
                    {
                      if((y_123 != ATgetArgument(t, 0)))
                        {
                          _fail(ATgetArgument(t, 0));
                        }
                      c_71 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = z_123;
                  t = foldr_3_0(w_10, y_10, z_10, t);
                  d_71 = t;
                  t = c_71;
                  if((d_71 != t))
                    {
                      _fail(t);
                    }
                  t = z_123;
                }
            }
        }
    }
  return(t);
}
static ATerm a_9 (ATerm a_181 (ATerm), ATerm p_113, ATerm m_113, ATerm n_113, ATerm o_113, ATerm t)
{
  ATerm f_124 = NULL,g_124 = NULL;
  t = p_113;
  t = a_181(t);
  f_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_124, n_113);
  t = conc_0_0(t);
  g_124 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, m_113, g_124, o_113);
  return(t);
}
static ATerm b_9 (ATerm i_113, ATerm j_113, ATerm k_113, ATerm t)
{
  ATerm i_124 = NULL;
  t = i_113;
  {
    static ATerm a_11 (ATerm t);
    static ATerm a_11 (ATerm t)
    {
      ATerm j_124 = NULL,k_124 = NULL,l_124 = NULL,m_124 = NULL;
      static ATerm b_11 (ATerm t);
      static ATerm b_11 (ATerm t)
      {
        static ATerm p_11 (ATerm t);
        static ATerm z_11 (ATerm t);
        static ATerm p_11 (ATerm t)
        {
          t = j_113;
          return(t);
        }
        static ATerm z_11 (ATerm t)
        {
          t = k_113;
          return(t);
        }
        t = MatchCons_2_0(p_11, z_11, t);
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
                  j_124 = ATgetArgument(x_39, 1);
                }
              else
                _fail(t);
              k_124 = (ATerm) ATgetNext((ATermList) w_39);
            }
          else
            _fail(t);
          l_124 = ATgetArgument(t, 1);
          m_124 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_9(b_11, j_124, k_124, l_124, m_124, t);
      return(t);
    }
    t = filter_1_0(a_11, t);
  }
  i_124 = t;
  t = (ATerm) ATmakeAppl(sym_Alt_3, j_113, k_113, (ATerm) ATmakeAppl(sym_Matrix_1, i_124));
  return(t);
}
ATerm filter_1_0 (ATerm z_166 (ATerm), ATerm t)
{
  ATerm y_124 = NULL,z_124 = NULL,a_125 = NULL;
  y_124 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_124;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_124 = ATgetFirst((ATermList) t);
          a_125 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_39 = t;
        int a_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_71 = NULL,p_71 = NULL,q_71 = NULL,e_15 = NULL;
            t = SSLgetAnnotations(y_124);
            m_71 = t;
            t = z_124;
            t = z_166(t);
            p_71 = t;
            t = a_125;
            t = filter_1_0(z_166, t);
            q_71 = t;
            t = (ATerm) ATinsert(CheckATermList(q_71), p_71);
            e_15 = t;
            t = SSLsetAnnotations(e_15, m_71);
            LocalPopChoice(a_40);
          }
        else
          {
            t = z_39;
            t = a_125;
            t = filter_1_0(z_166, t);
          }
      }
    }
  return(t);
}
ATerm listtd_1_0 (ATerm i_161 (ATerm), ATerm t)
{
  static ATerm q_125 (ATerm t);
  static ATerm q_125 (ATerm t)
  {
    ATerm n_125 = NULL,o_125 = NULL,p_125 = NULL;
    t = i_161(t);
    n_125 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_125;
      }
    else
      {
        ATerm y_71 = NULL,b_72 = NULL,k_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_125 = ATgetFirst((ATermList) t);
            p_125 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_125);
        y_71 = t;
        t = p_125;
        t = q_125(t);
        b_72 = t;
        t = (ATerm) ATinsert(CheckATermList(b_72), o_125);
        k_15 = t;
        t = SSLsetAnnotations(k_15, y_71);
      }
    return(t);
  }
  t = q_125(t);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_l_39;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm o_126 = NULL,p_126 = NULL;
  if(match_cons(t, sym__2))
    {
      o_126 = ATgetArgument(t, 0);
      p_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(o_126, p_126, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  t = term_v_39;
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm q_126 = NULL;
  if(match_cons(t, sym_As_2))
    {
      ATerm b_40 = ATgetArgument(t, 0);
      if(match_cons(b_40, sym_Off_1))
        {
          q_126 = ATgetArgument(b_40, 0);
        }
      else
        _fail(t);
      {
        ATerm c_40 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Var_1, q_126);
  return(t);
}
ATerm ConsArgs_0_0 (ATerm t)
{
  ATerm w_125 = NULL,x_125 = NULL,y_125 = NULL,a_126 = NULL,b_126 = NULL,c_126 = NULL;
  w_125 = t;
  if(match_cons(t, sym_Row_3))
    {
      x_125 = ATgetArgument(t, 0);
      {
        ATerm d_40 = ATgetArgument(t, 1);
      }
      {
        ATerm e_40 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = x_125;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_125 = ATgetFirst((ATermList) t);
      {
        ATerm f_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = y_125;
  if(match_cons(t, sym_As_2))
    {
      ATerm g_40 = ATgetArgument(t, 0);
      a_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_126;
  if(match_cons(t, sym_Str_1))
    {
      b_126 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Str_1, b_126), (ATerm) ATempty);
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          b_126 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Real_1, b_126), (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              b_126 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Int_1, b_126), (ATerm) ATempty);
            }
          else
            {
              ATerm l_126 = NULL,m_126 = NULL;
              if(match_cons(t, sym_Op_2))
                {
                  b_126 = ATgetArgument(t, 0);
                  c_126 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_126;
              t = foldr_3_0(c_12, e_12, h_12, t);
              l_126 = t;
              t = c_126;
              t = map_1_0(i_12, t);
              m_126 = t;
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Fun_2, b_126, l_126), m_126);
            }
        }
    }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm t_126 = NULL,u_126 = NULL,v_126 = NULL;
  v_126 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_126 = ATgetFirst((ATermList) t);
      u_126 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm h_40 = t;
        int i_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_126 = NULL;
            t = u_126;
            {
              static ATerm k_12 (ATerm t);
              static ATerm k_12 (ATerm t)
              {
                ATerm j_40 = t;
                if((PushChoice() == 0))
                  {
                    if((t_126 != t))
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
            y_126 = t;
            t = (ATerm) ATinsert(CheckATermList(y_126), t_126);
            LocalPopChoice(i_40);
          }
        else
          {
            t = h_40;
            t = v_126;
          }
      }
    }
  else
    {
      t = v_126;
    }
  return(t);
}
ATerm outedges_0_0 (ATerm t)
{
  t = filter_1_0(ConsArgs_0_0, t);
  t = listtd_1_0(j_12, t);
  return(t);
}
static ATerm q_128 (ATerm k_127, ATerm t)
{
  ATerm l_127 = NULL;
  t = SSL_explode_string(k_127);
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm r_128 (ATerm t);
        static ATerm r_128 (ATerm t)
        {
          ATerm b_128 = NULL,c_128 = NULL,d_128 = NULL;
          b_128 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_128 = ATgetFirst((ATermList) t);
              d_128 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          {
            ATerm m_40 = t;
            int n_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_72 = NULL,c_73 = NULL,p_15 = NULL;
                t = SSLgetAnnotations(b_128);
                n_72 = t;
                t = d_128;
                t = r_128(t);
                c_73 = t;
                t = (ATerm) ATinsert(CheckATermList(c_73), c_128);
                p_15 = t;
                t = SSLsetAnnotations(p_15, n_72);
                LocalPopChoice(n_40);
              }
            else
              {
                t = m_40;
                {
                  ATerm r_73 = NULL,q_15 = NULL;
                  t = SSLgetAnnotations(b_128);
                  r_73 = t;
                  t = c_128;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 47)))
                    _fail(t);
                  t = (ATerm) ATinsert(ATempty, c_128);
                  q_15 = t;
                  t = SSLsetAnnotations(q_15, r_73);
                }
              }
          }
          return(t);
        }
        t = r_128(t);
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        t = (ATerm) ATempty;
      }
  }
  l_127 = t;
  t = SSL_implode_string(l_127);
  return(t);
}
ATerm get_path_0_0 (ATerm t)
{
  ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL,h_128 = NULL,i_128 = NULL,o_128 = NULL;
  o_128 = t;
  {
    ATerm o_40 = t;
    int p_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_128 = ATgetFirst((ATermList) t);
            {
              ATerm q_40 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        LocalPopChoice(p_40);
        t = e_128;
        {
          ATerm r_40 = t;
          int s_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Row_3))
                {
                  f_128 = ATgetArgument(t, 0);
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
              t = f_128;
              {
                ATerm v_40 = t;
                int w_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        g_128 = ATgetFirst((ATermList) t);
                        {
                          ATerm y_40 = (ATerm) ATgetNext((ATermList) t);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_40);
                    t = g_128;
                    {
                      ATerm z_40 = t;
                      int a_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_As_2))
                            {
                              h_128 = ATgetArgument(t, 0);
                              {
                                ATerm b_41 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(a_41);
                          t = h_128;
                          if(match_cons(t, sym_Off_1))
                            {
                              i_128 = ATgetArgument(t, 0);
                              t = i_128;
                            }
                          else
                            {
                              t = q_128(o_128, t);
                            }
                        }
                      else
                        {
                          t = z_40;
                          t = q_128(o_128, t);
                        }
                    }
                  }
                else
                  {
                    t = v_40;
                    t = q_128(o_128, t);
                  }
              }
            }
          else
            {
              t = r_40;
              t = q_128(o_128, t);
            }
        }
      }
    else
      {
        t = o_40;
        t = q_128(o_128, t);
      }
  }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_41 = ATgetArgument(t, 0);
      ATerm d_41 = ATgetArgument(t, 1);
      if(((ATgetType(d_41) != AT_LIST) || !(ATisEmpty(d_41))))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm b_129 = NULL,c_129 = NULL,d_129 = NULL;
  if(match_cons(t, sym__2))
    {
      b_129 = ATgetArgument(t, 0);
      {
        ATerm f_41 = ATgetArgument(t, 1);
        if(((ATgetType(f_41) == AT_LIST) && !(ATisEmpty(f_41))))
          {
            c_129 = ATgetFirst((ATermList) f_41);
            d_129 = (ATerm) ATgetNext((ATermList) f_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_129, c_129), (ATerm) ATmakeAppl(sym__2, b_129, d_129));
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm e_129 = NULL,f_129 = NULL;
  if(match_cons(t, sym__2))
    {
      e_129 = ATgetArgument(t, 0);
      f_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_129), e_129);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm g_129 = NULL,h_129 = NULL,i_129 = NULL;
  if(match_cons(t, sym__2))
    {
      g_129 = ATgetArgument(t, 0);
      {
        ATerm g_41 = ATgetArgument(t, 1);
        if(match_cons(g_41, sym__2))
          {
            h_129 = ATgetArgument(g_41, 0);
            i_129 = ATgetArgument(g_41, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_9(g_129, h_129, i_129, t);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  t = term_h_41;
  return(t);
}
static ATerm f_9 (ATerm v_114, ATerm t)
{
  ATerm u_128 = NULL,v_128 = NULL,w_128 = NULL,x_128 = NULL,y_128 = NULL,z_128 = NULL,a_129 = NULL;
  t = v_114;
  t = get_path_0_0(t);
  u_128 = t;
  t = v_114;
  t = outedges_0_0(t);
  v_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_114, v_128);
  t = genzip_4_0(l_12, n_12, o_12, p_12, t);
  w_128 = t;
  t = v_114;
  t = default_state_0_0(t);
  x_128 = t;
  t = new_0_0(t);
  y_128 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, v_114);
  z_128 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_41, y_128);
  a_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Matrix_1, v_114), (ATerm) ATmakeAppl(sym_Defined_2, term_i_41, y_128));
  t = y_8(q_12, z_128, a_129, t);
  t = (ATerm) ATmakeAppl(sym_Case_4, y_128, (ATerm)ATmakeAppl(sym_Var_1, u_128), w_128, x_128);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL,n_129 = NULL,o_129 = NULL,p_129 = NULL,q_129 = NULL,r_129 = NULL,s_129 = NULL,t_129 = NULL,u_129 = NULL,v_129 = NULL,w_129 = NULL,x_129 = NULL,v_16 = NULL,u_16 = NULL,v_15 = NULL;
  x_129 = t;
  if(match_cons(t, sym_Row_3))
    {
      l_129 = ATgetArgument(t, 0);
      m_129 = ATgetArgument(t, 1);
      n_129 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_129);
  k_129 = t;
  t = l_129;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_129 = ATgetFirst((ATermList) t);
      q_129 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_129);
  o_129 = t;
  t = p_129;
  if(match_cons(t, sym_As_2))
    {
      t_129 = ATgetArgument(t, 0);
      u_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_129);
  s_129 = t;
  t = u_129;
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
  v_129 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, t_129, v_129);
  v_15 = t;
  t = SSLsetAnnotations(v_15, s_129);
  w_129 = t;
  t = (ATerm) ATinsert(CheckATermList(q_129), w_129);
  u_16 = t;
  t = SSLsetAnnotations(u_16, o_129);
  r_129 = t;
  t = (ATerm) ATmakeAppl(sym_Row_3, r_129, m_129, n_129);
  v_16 = t;
  t = SSLsetAnnotations(v_16, k_129);
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm y_129 = NULL,z_129 = NULL,a_130 = NULL,b_130 = NULL;
  if(match_cons(t, sym_Row_3))
    {
      y_129 = ATgetArgument(t, 0);
      {
        ATerm k_41 = ATgetArgument(t, 1);
        if(((ATgetType(k_41) == AT_LIST) && !(ATisEmpty(k_41))))
          {
            z_129 = ATgetFirst((ATermList) k_41);
            a_130 = (ATerm) ATgetNext((ATermList) k_41);
          }
        else
          _fail(t);
      }
      b_130 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, (ATerm)ATinsert(CheckATermList(y_129), z_129), a_130, b_130);
  return(t);
}
static ATerm h_9 (ATerm l_114, ATerm t)
{
  ATerm j_129 = NULL;
  t = l_114;
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
  t = l_114;
  t = map_1_0(s_12, t);
  j_129 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, j_129);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm d_130 = NULL,e_130 = NULL,f_130 = NULL,g_130 = NULL,h_130 = NULL,i_130 = NULL,j_130 = NULL,k_130 = NULL,l_130 = NULL,m_130 = NULL,n_130 = NULL,o_130 = NULL,p_130 = NULL,d_17 = NULL,c_17 = NULL,b_17 = NULL;
  p_130 = t;
  if(match_cons(t, sym_Row_3))
    {
      e_130 = ATgetArgument(t, 0);
      f_130 = ATgetArgument(t, 1);
      g_130 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_130);
  d_130 = t;
  t = f_130;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_130 = ATgetFirst((ATermList) t);
      k_130 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_130);
  i_130 = t;
  t = j_130;
  if(match_cons(t, sym_As_2))
    {
      m_130 = ATgetArgument(t, 0);
      n_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_130);
  l_130 = t;
  t = n_130;
  if(!(match_cons(t, sym_Wld_0)))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_As_2, m_130, n_130);
  b_17 = t;
  t = SSLsetAnnotations(b_17, l_130);
  o_130 = t;
  t = (ATerm) ATinsert(CheckATermList(k_130), o_130);
  c_17 = t;
  t = SSLsetAnnotations(c_17, i_130);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_41 = ATgetFirst((ATermList) t);
      h_130 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Row_3, e_130, h_130, g_130);
  d_17 = t;
  t = SSLsetAnnotations(d_17, d_130);
  return(t);
}
static ATerm j_9 (ATerm j_114, ATerm t)
{
  ATerm c_130 = NULL;
  t = j_114;
  t = map_1_0(t_12, t);
  c_130 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_1, c_130);
  return(t);
}
ATerm repeat_2_0 (ATerm p_148 (ATerm), ATerm q_148 (ATerm), ATerm t)
{
  static ATerm q_130 (ATerm t);
  static ATerm q_130 (ATerm t)
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_148(t);
        t = q_130(t);
        LocalPopChoice(o_41);
      }
    else
      {
        t = n_41;
        t = q_148(t);
      }
    return(t);
  }
  t = q_130(t);
  return(t);
}
static ATerm l_9 (ATerm d_54, ATerm e_54, ATerm t)
{
  ATerm r_130 = NULL,s_130 = NULL;
  s_130 = t;
  {
    ATerm p_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_54, e_54);
        t = q_11(d_54, e_54, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_41 = ATgetFirst((ATermList) t);
            r_130 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_41);
        {
          ATerm t_130 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, d_54, e_54, r_130);
          t = lookup_table_0_1(d_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_130 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_11(e_54, r_130, t_130, t);
          t = (ATerm) ATmakeAppl(sym__3, d_54, e_54, r_130);
        }
      }
    else
      {
        t = p_41;
        {
          ATerm v_130 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, d_54, e_54);
          t = lookup_table_0_1(d_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_130 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_11(e_54, v_130, t);
          t = (ATerm) ATmakeAppl(sym__2, d_54, e_54);
        }
      }
  }
  t = s_130;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_154 (ATerm), ATerm t)
{
  ATerm x_130 = NULL,y_130 = NULL,z_130 = NULL,a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL;
  a_131 = t;
  t = o_154(t);
  z_130 = t;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_131 = NULL;
        t = term_o_39;
        e_131 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_130, term_o_39);
        t = q_11(z_130, e_131, t);
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
      y_130 = ATgetFirst((ATermList) t);
      x_130 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_130, term_o_39, x_130);
  t = lookup_table_0_1(z_130, t);
  d_131 = t;
  t = term_o_39;
  b_131 = t;
  t = d_131;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(b_131, x_130, c_131, t);
  t = y_130;
  {
    static ATerm u_12 (ATerm t);
    static ATerm u_12 (ATerm t)
    {
      ATerm f_131 = NULL;
      f_131 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_130, f_131);
      t = l_9(z_130, f_131, t);
      return(t);
    }
    t = map_1_0(u_12, t);
  }
  t = a_131;
  return(t);
}
ATerm restore_always_2_0 (ATerm a_146 (ATerm), ATerm b_146 (ATerm), ATerm t)
{
  ATerm v_41 = t;
  int w_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_146(t);
      t = b_146(t);
      LocalPopChoice(w_41);
    }
  else
    {
      t = v_41;
      t = b_146(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_154 (ATerm), ATerm t)
{
  ATerm h_131 = NULL,i_131 = NULL,j_131 = NULL,k_131 = NULL,l_131 = NULL,m_131 = NULL,n_131 = NULL;
  i_131 = t;
  t = n_154(t);
  h_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_131, term_o_39);
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_131 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_41 = ATgetArgument(t, 0);
            ATerm a_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_39;
        r_131 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_131, term_o_39);
        t = q_11(h_131, r_131, t);
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        t = (ATerm) ATempty;
      }
  }
  j_131 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_131, term_o_39, (ATerm) ATinsert(CheckATermList(j_131), (ATerm) ATempty));
  t = lookup_table_0_1(h_131, t);
  n_131 = t;
  t = term_o_39;
  k_131 = t;
  t = (ATerm) ATinsert(CheckATermList(j_131), (ATerm) ATempty);
  l_131 = t;
  t = n_131;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(k_131, l_131, m_131, t);
  t = i_131;
  return(t);
}
ATerm scope_2_0 (ATerm p_154 (ATerm), ATerm q_154 (ATerm), ATerm t)
{
  static ATerm w_12 (ATerm t);
  static ATerm w_12 (ATerm t)
  {
    t = end_scope_1_0(p_154, t);
    return(t);
  }
  t = begin_scope_1_0(p_154, t);
  t = restore_always_2_0(q_154, w_12, t);
  return(t);
}
ATerm at_end_1_0 (ATerm p_160 (ATerm), ATerm t)
{
  static ATerm m_132 (ATerm t);
  static ATerm m_132 (ATerm t)
  {
    ATerm j_132 = NULL,k_132 = NULL,l_132 = NULL;
    l_132 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_132 = ATgetFirst((ATermList) t);
        k_132 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_74 = NULL,i_74 = NULL,n_17 = NULL;
          t = SSLgetAnnotations(l_132);
          b_74 = t;
          t = k_132;
          t = m_132(t);
          i_74 = t;
          t = (ATerm) ATinsert(CheckATermList(i_74), j_132);
          n_17 = t;
          t = SSLsetAnnotations(n_17, b_74);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_132;
        t = p_160(t);
      }
    return(t);
  }
  t = m_132(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm t_131 = NULL,u_131 = NULL,v_131 = NULL;
  t_131 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_131;
    }
  else
    {
      static ATerm x_12 (ATerm t);
      static ATerm x_12 (ATerm t)
      {
        t = not_null(v_131);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_131 = ATgetFirst((ATermList) t);
          if(((v_131 != NULL) && (v_131 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            v_131 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_131;
      t = at_end_1_0(x_12, t);
    }
  return(t);
}
static ATerm y_132 (ATerm q_132, ATerm t)
{
  ATerm r_132 = NULL;
  t = SSL_explode_term(q_132);
  if(match_cons(t, sym__2))
    {
      ATerm b_42 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_42) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      r_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_132;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm t_132 = NULL,u_132 = NULL,v_132 = NULL;
  v_132 = t;
  if(match_cons(t, sym__2))
    {
      t_132 = ATgetArgument(t, 0);
      u_132 = ATgetArgument(t, 1);
      {
        ATerm c_42 = t;
        int d_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm z_12 (ATerm t);
            static ATerm z_12 (ATerm t)
            {
              t = u_132;
              return(t);
            }
            t = t_132;
            t = at_end_1_0(z_12, t);
            LocalPopChoice(d_42);
          }
        else
          {
            t = c_42;
            t = y_132(v_132, t);
          }
      }
    }
  else
    {
      t = y_132(v_132, t);
    }
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm h_134 = NULL;
  if(match_cons(t, sym__2))
    {
      h_134 = ATgetArgument(t, 0);
      if((h_134 != ATgetArgument(t, 1)))
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
  ATerm p_134 = NULL;
  if(match_cons(t, sym__2))
    {
      p_134 = ATgetArgument(t, 0);
      if((p_134 != ATgetArgument(t, 1)))
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
  ATerm w_134 = NULL;
  if(match_cons(t, sym__2))
    {
      w_134 = ATgetArgument(t, 0);
      if((w_134 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm e_135 = NULL;
  if(match_cons(t, sym__2))
    {
      e_135 = ATgetArgument(t, 0);
      if((e_135 != ATgetArgument(t, 1)))
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
  ATerm m_135 = NULL;
  if(match_cons(t, sym__2))
    {
      m_135 = ATgetArgument(t, 0);
      if((m_135 != ATgetArgument(t, 1)))
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
  ATerm t_135 = NULL;
  if(match_cons(t, sym__2))
    {
      t_135 = ATgetArgument(t, 0);
      if((t_135 != ATgetArgument(t, 1)))
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
  ATerm n_133 = NULL,o_133 = NULL,p_133 = NULL,q_133 = NULL,s_133 = NULL,t_133 = NULL,u_133 = NULL,v_133 = NULL,w_133 = NULL,x_133 = NULL,y_133 = NULL,z_133 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      s_133 = ATgetArgument(t, 0);
      z_133 = ATgetArgument(t, 1);
      t = s_133;
      if(match_cons(t, sym_Matrix_2))
        {
          t_133 = ATgetArgument(t, 0);
          u_133 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_133;
      if(match_cons(t, sym_Choice_2))
        {
          p_133 = ATgetArgument(t, 0);
          q_133 = ATgetArgument(t, 1);
          {
            ATerm f_134 = NULL,g_134 = NULL;
            t = p_133;
            if(match_cons(t, sym_Matrix_2))
              {
                n_133 = ATgetArgument(t, 0);
                o_133 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, t_133, n_133);
            t = t_10(g_13, t_133, n_133, t);
            f_134 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_133, o_133);
            t = conc_0_0(t);
            g_134 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, f_134, g_134), q_133);
          }
        }
      else
        {
          if(match_cons(t, sym_LChoice_2))
            {
              p_133 = ATgetArgument(t, 0);
              q_133 = ATgetArgument(t, 1);
              {
                ATerm n_134 = NULL,o_134 = NULL;
                t = p_133;
                if(match_cons(t, sym_Matrix_2))
                  {
                    n_133 = ATgetArgument(t, 0);
                    o_133 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, t_133, n_133);
                t = t_10(h_13, t_133, n_133, t);
                n_134 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_133, o_133);
                t = conc_0_0(t);
                o_134 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, n_134, o_134), q_133);
              }
            }
          else
            {
              ATerm u_134 = NULL,v_134 = NULL;
              if(match_cons(t, sym_Matrix_2))
                {
                  p_133 = ATgetArgument(t, 0);
                  q_133 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, t_133, p_133);
              t = t_10(i_13, t_133, p_133, t);
              u_134 = t;
              t = (ATerm) ATmakeAppl(sym__2, u_133, q_133);
              t = conc_0_0(t);
              v_134 = t;
              t = (ATerm) ATmakeAppl(sym_Matrix_2, u_134, v_134);
            }
        }
    }
  else
    {
      if(match_cons(t, sym_Choice_2))
        {
          s_133 = ATgetArgument(t, 0);
          z_133 = ATgetArgument(t, 1);
          t = s_133;
          if(match_cons(t, sym_Matrix_2))
            {
              t_133 = ATgetArgument(t, 0);
              u_133 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_133;
          if(match_cons(t, sym_LChoice_2))
            {
              p_133 = ATgetArgument(t, 0);
              q_133 = ATgetArgument(t, 1);
              {
                ATerm c_135 = NULL,d_135 = NULL;
                t = p_133;
                if(match_cons(t, sym_Matrix_2))
                  {
                    n_133 = ATgetArgument(t, 0);
                    o_133 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, t_133, n_133);
                t = t_10(n_13, t_133, n_133, t);
                c_135 = t;
                t = (ATerm) ATmakeAppl(sym__2, u_133, o_133);
                t = conc_0_0(t);
                d_135 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Matrix_2, c_135, d_135), q_133);
              }
            }
          else
            {
              if(match_cons(t, sym_Choice_2))
                {
                  p_133 = ATgetArgument(t, 0);
                  q_133 = ATgetArgument(t, 1);
                  {
                    ATerm k_135 = NULL,l_135 = NULL;
                    t = p_133;
                    if(match_cons(t, sym_Matrix_2))
                      {
                        n_133 = ATgetArgument(t, 0);
                        o_133 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, t_133, n_133);
                    t = t_10(o_13, t_133, n_133, t);
                    k_135 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_133, o_133);
                    t = conc_0_0(t);
                    l_135 = t;
                    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Matrix_2, k_135, l_135), q_133);
                  }
                }
              else
                {
                  ATerm r_135 = NULL,s_135 = NULL;
                  if(match_cons(t, sym_Matrix_2))
                    {
                      p_133 = ATgetArgument(t, 0);
                      q_133 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, t_133, p_133);
                  t = t_10(p_13, t_133, p_133, t);
                  r_135 = t;
                  t = (ATerm) ATmakeAppl(sym__2, u_133, q_133);
                  t = conc_0_0(t);
                  s_135 = t;
                  t = (ATerm) ATmakeAppl(sym_Matrix_2, r_135, s_135);
                }
            }
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              s_133 = ATgetArgument(t, 0);
              z_133 = ATgetArgument(t, 1);
              {
                ATerm x_135 = NULL;
                t = z_133;
                if(match_cons(t, sym_Matrix_2))
                  {
                    p_133 = ATgetArgument(t, 0);
                    q_133 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_133;
                {
                  static ATerm r_13 (ATerm t);
                  static ATerm r_13 (ATerm t)
                  {
                    ATerm y_135 = NULL,z_135 = NULL;
                    if(match_cons(t, sym_Row_2))
                      {
                        y_135 = ATgetArgument(t, 0);
                        z_135 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Row_2, y_135, (ATerm) ATmakeAppl(sym_Scope_2, s_133, z_135));
                    return(t);
                  }
                  t = map_1_0(r_13, t);
                }
                x_135 = t;
                t = (ATerm) ATmakeAppl(sym_Matrix_2, p_133, x_135);
              }
            }
          else
            {
              if(match_cons(t, sym_Seq_2))
                {
                  s_133 = ATgetArgument(t, 0);
                  z_133 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_133;
              if(match_cons(t, sym_Matrix_2))
                {
                  t_133 = ATgetArgument(t, 0);
                  u_133 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_133;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_133 = ATgetFirst((ATermList) t);
                  y_133 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_133;
              if(match_cons(t, sym_Row_2))
                {
                  w_133 = ATgetArgument(t, 0);
                  x_133 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_133;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Matrix_2, t_133, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, w_133, (ATerm) ATmakeAppl(sym_Seq_2, x_133, z_133))));
            }
        }
    }
  return(t);
}
ATerm bottomup_1_0 (ATerm q_142 (ATerm), ATerm t)
{
  static ATerm u_13 (ATerm t);
  static ATerm u_13 (ATerm t)
  {
    t = bottomup_1_0(q_142, t);
    return(t);
  }
  t = SRTS_all(u_13, t);
  t = q_142(t);
  return(t);
}
static ATerm s_10 (ATerm v_162 (ATerm), ATerm w_162 (ATerm), ATerm d_78, ATerm c_78, ATerm t)
{
  t = w_162(t);
  {
    static ATerm x_13 (ATerm t);
    static ATerm x_13 (ATerm t)
    {
      ATerm e_136 = NULL;
      e_136 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_78, e_136);
      t = v_162(t);
      return(t);
    }
    t = fetch_1_0(x_13, t);
  }
  t = c_78;
  return(t);
}
static ATerm t_10 (ATerm s_162 (ATerm), ATerm z_77, ATerm y_77, ATerm t)
{
  static ATerm u_136 (ATerm t);
  static ATerm u_136 (ATerm t)
  {
    ATerm p_136 = NULL,q_136 = NULL,r_136 = NULL;
    p_136 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_77;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_136 = ATgetFirst((ATermList) t);
            r_136 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_42 = t;
          int f_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_136;
              {
                static ATerm y_13 (ATerm t);
                static ATerm y_13 (ATerm t)
                {
                  t = y_77;
                  return(t);
                }
                t = s_10(s_162, y_13, q_136, r_136, t);
              }
              t = u_136(t);
              LocalPopChoice(f_42);
            }
          else
            {
              t = e_42;
              {
                ATerm c_75 = NULL,f_75 = NULL,q_17 = NULL;
                t = SSLgetAnnotations(p_136);
                c_75 = t;
                t = r_136;
                t = u_136(t);
                f_75 = t;
                t = (ATerm) ATinsert(CheckATermList(f_75), q_136);
                q_17 = t;
                t = SSLsetAnnotations(q_17, c_75);
              }
            }
        }
      }
    return(t);
  }
  t = z_77;
  t = u_136(t);
  return(t);
}
ATerm foldr_3_0 (ATerm x_165 (ATerm), ATerm y_165 (ATerm), ATerm z_165 (ATerm), ATerm t)
{
  ATerm x_136 = NULL,y_136 = NULL,z_136 = NULL;
  x_136 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_136;
      t = x_165(t);
    }
  else
    {
      ATerm c_137 = NULL,d_137 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_136 = ATgetFirst((ATermList) t);
          z_136 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_136;
      t = z_165(t);
      c_137 = t;
      t = z_136;
      t = foldr_3_0(x_165, y_165, z_165, t);
      d_137 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_137, d_137);
      t = y_165(t);
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm p_164 (ATerm), ATerm q_164 (ATerm), ATerm t)
{
  ATerm g_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_137 = NULL;
      t = p_164(t);
      g_137 = t;
      t = (ATerm) ATinsert(ATempty, g_137);
      LocalPopChoice(h_42);
    }
  else
    {
      t = g_42;
      {
        ATerm n_75 = NULL,o_75 = NULL;
        static ATerm d_14 (ATerm t);
        static ATerm d_14 (ATerm t)
        {
          t = collect_om_2_0(p_164, q_164, t);
          return(t);
        }
        o_75 = t;
        t = SSL_explode_term(o_75);
        if(match_cons(t, sym__2))
          {
            ATerm i_42 = ATgetArgument(t, 0);
            n_75 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_75;
        t = foldr_3_0(b_14, q_164, d_14, t);
      }
    }
  return(t);
}
ATerm CollectSubst_0_0 (ATerm t)
{
  ATerm m_137 = NULL,p_137 = NULL,q_137 = NULL,r_137 = NULL,s_137 = NULL;
  if(match_cons(t, sym_As_2))
    {
      p_137 = ATgetArgument(t, 0);
      r_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_137;
  if(match_cons(t, sym_Var_1))
    {
      q_137 = ATgetArgument(t, 0);
      t = r_137;
      if(match_cons(t, sym_As_2))
        {
          s_137 = ATgetArgument(t, 0);
          {
            ATerm j_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = s_137;
      if(match_cons(t, sym_Off_1))
        {
          m_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, q_137), (ATerm) ATmakeAppl(sym_Var_1, m_137)));
    }
  else
    {
      if(match_cons(t, sym_Off_1))
        {
          q_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_137;
      if(match_cons(t, sym_Var_1))
        {
          s_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Assign_2, (ATerm)ATmakeAppl(sym_Var_1, s_137), (ATerm) ATmakeAppl(sym_Var_1, q_137)));
    }
  return(t);
}
ATerm IgnoreVar_0_0 (ATerm t)
{
  ATerm k_138 = NULL,l_138 = NULL,m_138 = NULL,n_138 = NULL,o_138 = NULL,p_138 = NULL,q_138 = NULL;
  m_138 = t;
  if(match_cons(t, sym_As_2))
    {
      n_138 = ATgetArgument(t, 0);
      p_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_138;
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
        t = p_138;
        if(match_cons(t, sym_As_2))
          {
            q_138 = ATgetArgument(t, 0);
            l_138 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_138;
        if(match_cons(t, sym_Off_1))
          {
            k_138 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, k_138), l_138);
      }
    else
      {
        t = m_42;
        if(match_cons(t, sym_Off_1))
          {
            o_138 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_138;
        if(match_cons(t, sym_Var_1))
          {
            ATerm s_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_138;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_138;
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
            t = o_138;
          }
        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, o_138), term_u_39);
      }
  }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_38;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm h_139 = NULL,i_139 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_139 = ATgetFirst((ATermList) t);
      i_139 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_139, i_139);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm j_139 = NULL,k_139 = NULL,l_139 = NULL,m_139 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_42 = ATgetArgument(t, 0);
      if(match_cons(w_42, sym__2))
        {
          j_139 = ATgetArgument(w_42, 0);
          k_139 = ATgetArgument(w_42, 1);
        }
      else
        _fail(t);
      {
        ATerm x_42 = ATgetArgument(t, 1);
        if(match_cons(x_42, sym__2))
          {
            l_139 = ATgetArgument(x_42, 0);
            m_139 = ATgetArgument(x_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_139), j_139), (ATerm) ATinsert(CheckATermList(m_139), k_139));
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm n_139 = NULL,o_139 = NULL;
  if(match_cons(t, sym__2))
    {
      n_139 = ATgetArgument(t, 0);
      o_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(l_14, n_139, o_139, t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm p_139 = NULL;
  if(match_cons(t, sym__2))
    {
      p_139 = ATgetArgument(t, 0);
      if((p_139 != ATgetArgument(t, 1)))
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
ATerm CollectSplit_2_0 (ATerm g_164 (ATerm), ATerm h_164 (ATerm), ATerm t)
{
  ATerm u_138 = NULL,v_138 = NULL,w_138 = NULL,x_138 = NULL,y_138 = NULL,z_138 = NULL,a_139 = NULL,b_139 = NULL,c_139 = NULL,d_139 = NULL,e_139 = NULL,f_139 = NULL;
  e_139 = t;
  f_139 = t;
  t = SSL_explode_term(f_139);
  if(match_cons(t, sym__2))
    {
      w_138 = ATgetArgument(t, 0);
      u_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_139);
  y_138 = t;
  t = u_138;
  t = genzip_4_0(g_14, h_14, i_14, g_164, t);
  if(match_cons(t, sym__2))
    {
      x_138 = ATgetArgument(t, 0);
      v_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_mkterm(w_138, x_138);
  d_139 = t;
  t = SSLsetAnnotations(d_139, y_138);
  t = h_164(t);
  if(match_cons(t, sym__2))
    {
      z_138 = ATgetArgument(t, 0);
      a_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_138;
  t = foldr_2_0(j_14, k_14, t);
  c_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_139, c_139);
  t = t_10(m_14, a_139, c_139, t);
  b_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_138, b_139);
  return(t);
}
ATerm collect_split_2_0 (ATerm b_164 (ATerm), ATerm c_164 (ATerm), ATerm t)
{
  static ATerm x_139 (ATerm t);
  static ATerm x_139 (ATerm t)
  {
    static ATerm n_14 (ATerm t);
    static ATerm n_14 (ATerm t)
    {
      ATerm s_139 = NULL,t_139 = NULL,u_139 = NULL;
      u_139 = t;
      {
        ATerm y_42 = t;
        int z_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_164(t);
            LocalPopChoice(z_42);
          }
        else
          {
            t = y_42;
          }
      }
      s_139 = t;
      t = u_139;
      {
        ATerm a_43 = t;
        int b_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_164(t);
            LocalPopChoice(b_43);
          }
        else
          {
            t = a_43;
            t = (ATerm) ATempty;
          }
      }
      t_139 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_139, t_139);
      return(t);
    }
    t = CollectSplit_2_0(x_139, n_14, t);
    return(t);
  }
  t = x_139(t);
  return(t);
}
ATerm genzip_4_0 (ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm i_147 (ATerm), ATerm j_147 (ATerm), ATerm t)
{
  static ATerm e_140 (ATerm t);
  static ATerm e_140 (ATerm t)
  {
    ATerm c_43 = t;
    int d_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_147(t);
        LocalPopChoice(d_43);
      }
    else
      {
        t = c_43;
        {
          ATerm y_139 = NULL,z_139 = NULL,a_140 = NULL,b_140 = NULL,c_140 = NULL,d_140 = NULL,z_17 = NULL;
          t = h_147(t);
          d_140 = t;
          if(match_cons(t, sym__2))
            {
              z_139 = ATgetArgument(t, 0);
              a_140 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_140);
          y_139 = t;
          t = z_139;
          t = j_147(t);
          b_140 = t;
          t = a_140;
          t = e_140(t);
          c_140 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_140, c_140);
          z_17 = t;
          t = SSLsetAnnotations(z_17, y_139);
          t = i_147(t);
        }
      }
    return(t);
  }
  t = e_140(t);
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
static ATerm q_14 (ATerm t)
{
  ATerm j_140 = NULL,k_140 = NULL,l_140 = NULL,m_140 = NULL,n_140 = NULL;
  if(match_cons(t, sym__2))
    {
      j_140 = ATgetArgument(t, 0);
      {
        ATerm g_43 = ATgetArgument(t, 1);
        if(((ATgetType(g_43) == AT_LIST) && !(ATisEmpty(g_43))))
          {
            k_140 = ATgetFirst((ATermList) g_43);
            l_140 = (ATerm) ATgetNext((ATermList) g_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_v_39;
  n_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_140, term_v_39);
  t = l_11(j_140, n_140, t);
  m_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_140, k_140), (ATerm) ATmakeAppl(sym__2, m_140, l_140));
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm o_140 = NULL,p_140 = NULL;
  if(match_cons(t, sym__2))
    {
      o_140 = ATgetArgument(t, 0);
      p_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_140), o_140);
  return(t);
}
ATerm nzip0_1_0 (ATerm r_147 (ATerm), ATerm t)
{
  ATerm f_140 = NULL;
  f_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_39, f_140);
  t = genzip_4_0(o_14, q_14, r_14, r_147, t);
  return(t);
}
ATerm Propagate_0_0 (ATerm t)
{
  ATerm u_140 = NULL,w_140 = NULL,x_140 = NULL,y_140 = NULL,z_140 = NULL,a_141 = NULL;
  if(match_cons(t, sym_As_2))
    {
      w_140 = ATgetArgument(t, 0);
      y_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_140;
  if(match_cons(t, sym_Off_1))
    {
      x_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_140;
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
                ATerm d_141 = NULL,m_141 = NULL;
                if(match_cons(t, sym__2))
                  {
                    d_141 = ATgetArgument(t, 0);
                    m_141 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(x_140), d_141)), m_141);
                return(t);
              }
              t = y_140;
              t = nzip0_1_0(s_14, t);
              LocalPopChoice(l_43);
            }
          else
            {
              t = k_43;
              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, x_140), term_u_39);
            }
        }
      }
    else
      {
        t = h_43;
        if(match_cons(t, sym_As_2))
          {
            z_140 = ATgetArgument(t, 0);
            a_141 = ATgetArgument(t, 1);
            t = z_140;
            if(match_cons(t, sym_Var_1))
              {
                u_140 = ATgetArgument(t, 0);
                {
                  ATerm m_43 = t;
                  int n_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm t_14 (ATerm t);
                      static ATerm t_14 (ATerm t)
                      {
                        ATerm y_141 = NULL,z_141 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            y_141 = ATgetArgument(t, 0);
                            z_141 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(x_140), y_141)), z_141);
                        return(t);
                      }
                      t = y_140;
                      t = nzip0_1_0(t_14, t);
                      LocalPopChoice(n_43);
                    }
                  else
                    {
                      t = m_43;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, u_140), (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, x_140), a_141));
                    }
                }
              }
            else
              {
                static ATerm u_14 (ATerm t);
                static ATerm u_14 (ATerm t)
                {
                  ATerm f_142 = NULL,g_142 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      f_142 = ATgetArgument(t, 0);
                      g_142 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(x_140), f_142)), g_142);
                  return(t);
                }
                t = y_140;
                t = nzip0_1_0(u_14, t);
              }
          }
        else
          {
            if(match_cons(t, sym_Op_2))
              {
                z_140 = ATgetArgument(t, 0);
                a_141 = ATgetArgument(t, 1);
                {
                  ATerm o_43 = t;
                  int r_43 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      static ATerm v_14 (ATerm t);
                      static ATerm v_14 (ATerm t)
                      {
                        ATerm j_142 = NULL,k_142 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            j_142 = ATgetArgument(t, 0);
                            k_142 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(x_140), j_142)), k_142);
                        return(t);
                      }
                      t = y_140;
                      t = nzip0_1_0(v_14, t);
                      LocalPopChoice(r_43);
                    }
                  else
                    {
                      t = o_43;
                      t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, x_140), (ATerm) ATmakeAppl(sym_Op_2, z_140, (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, x_140), a_141)));
                    }
                }
              }
            else
              {
                static ATerm w_14 (ATerm t);
                static ATerm w_14 (ATerm t)
                {
                  ATerm s_142 = NULL,t_142 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      s_142 = ATgetArgument(t, 0);
                      t_142 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Off_1, (ATerm) ATinsert(CheckATermList(x_140), s_142)), t_142);
                  return(t);
                }
                t = y_140;
                t = nzip0_1_0(w_14, t);
              }
          }
      }
  }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm c_143 = NULL,d_143 = NULL,e_143 = NULL;
  e_143 = t;
  if(match_cons(t, sym_As_2))
    {
      c_143 = ATgetArgument(t, 0);
      d_143 = ATgetArgument(t, 1);
      t = c_143;
      if(match_cons(t, sym_Wld_0))
        {
          t = d_143;
        }
      else
        {
          t = e_143;
        }
    }
  else
    {
      t = e_143;
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
static ATerm b_15 (ATerm t)
{
  ATerm l_143 = NULL;
  if(match_cons(t, sym_Off_1))
    {
      l_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_143;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm m_143 = NULL,n_143 = NULL;
  if(match_cons(t, sym__2))
    {
      m_143 = ATgetArgument(t, 0);
      n_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(d_15, m_143, n_143, t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm o_143 = NULL;
  if(match_cons(t, sym__2))
    {
      o_143 = ATgetArgument(t, 0);
      if((o_143 != ATgetArgument(t, 1)))
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
  ATerm y_142 = NULL,z_142 = NULL,a_143 = NULL,b_143 = NULL;
  b_143 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, term_v_43, (ATerm) ATinsert(ATempty, b_143));
  t = topdown_1_0(y_14, t);
  t = topdown_1_0(z_14, t);
  t = collect_split_2_0(IgnoreVar_0_0, CollectSubst_0_0, t);
  if(match_cons(t, sym__2))
    {
      y_142 = ATgetArgument(t, 0);
      z_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_142;
  t = collect_om_2_0(b_15, c_15, t);
  a_143 = t;
  t = (ATerm) ATmakeAppl(sym_Matrix_2, a_143, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Row_2, y_142, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_142), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATinsert(ATempty, term_l_39)))))));
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
      static ATerm x_145 (ATerm t);
      static ATerm x_145 (ATerm t)
      {
        ATerm b_44 = t;
        int c_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_144 = NULL,z_144 = NULL,a_145 = NULL;
            y_144 = t;
            if(match_cons(t, sym_Choice_2))
              {
                z_144 = ATgetArgument(t, 0);
                a_145 = ATgetArgument(t, 1);
                {
                  ATerm u_76 = NULL,d_77 = NULL,g_77 = NULL,d_18 = NULL;
                  t = SSLgetAnnotations(y_144);
                  u_76 = t;
                  t = z_144;
                  t = x_145(t);
                  d_77 = t;
                  t = a_145;
                  t = x_145(t);
                  g_77 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, d_77, g_77);
                  d_18 = t;
                  t = SSLsetAnnotations(d_18, u_76);
                }
              }
            else
              {
                ATerm b_78 = NULL,g_78 = NULL,h_78 = NULL,e_18 = NULL;
                if(match_cons(t, sym_LChoice_2))
                  {
                    z_144 = ATgetArgument(t, 0);
                    a_145 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_144);
                b_78 = t;
                t = z_144;
                t = x_145(t);
                g_78 = t;
                t = a_145;
                t = x_145(t);
                h_78 = t;
                t = (ATerm) ATmakeAppl(sym_LChoice_2, g_78, h_78);
                e_18 = t;
                t = SSLsetAnnotations(e_18, b_78);
              }
            LocalPopChoice(c_44);
          }
        else
          {
            t = b_44;
            {
              static ATerm c_146 (ATerm t);
              static ATerm c_146 (ATerm t)
              {
                ATerm d_44 = t;
                int e_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_145 = NULL,t_145 = NULL,u_145 = NULL;
                    t_145 = t;
                    if(match_cons(t, sym_Seq_2))
                      {
                        u_145 = ATgetArgument(t, 0);
                        s_145 = ATgetArgument(t, 1);
                        {
                          ATerm u_78 = NULL,x_78 = NULL,y_78 = NULL,f_18 = NULL;
                          t = SSLgetAnnotations(t_145);
                          u_78 = t;
                          t = u_145;
                          t = c_146(t);
                          x_78 = t;
                          t = s_145;
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
                            u_145 = ATgetArgument(t, 0);
                            s_145 = ATgetArgument(t, 1);
                            {
                              ATerm g_79 = NULL,j_79 = NULL,i_18 = NULL;
                              t = SSLgetAnnotations(t_145);
                              g_79 = t;
                              t = s_145;
                              t = c_146(t);
                              j_79 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_145, j_79);
                              i_18 = t;
                              t = SSLsetAnnotations(i_18, g_79);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Match_1))
                              {
                                u_145 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = u_145;
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
              t = c_146(t);
            }
          }
        return(t);
      }
      ATerm f_44 = t;
      int g_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_143 = NULL,z_143 = NULL,a_144 = NULL,b_144 = NULL,b_18 = NULL;
          b_144 = t;
          if(match_cons(t, sym_Choice_2))
            {
              z_143 = ATgetArgument(t, 0);
              a_144 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_144);
          y_143 = t;
          t = (ATerm) ATmakeAppl(sym_Choice_2, z_143, a_144);
          b_18 = t;
          t = SSLsetAnnotations(b_18, y_143);
          LocalPopChoice(g_44);
        }
      else
        {
          t = f_44;
          {
            ATerm c_144 = NULL,d_144 = NULL,e_144 = NULL,f_144 = NULL,c_18 = NULL;
            f_144 = t;
            if(match_cons(t, sym_LChoice_2))
              {
                d_144 = ATgetArgument(t, 0);
                e_144 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_144);
            c_144 = t;
            t = (ATerm) ATmakeAppl(sym_LChoice_2, d_144, e_144);
            c_18 = t;
            t = SSLsetAnnotations(c_18, c_144);
          }
        }
      t = x_145(t);
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
static ATerm o_15 (ATerm t)
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
      ATerm h_146 = NULL,i_146 = NULL,j_146 = NULL;
      h_146 = t;
      if(match_cons(t, sym_Matrix_1))
        {
          i_146 = ATgetArgument(t, 0);
          {
            ATerm n_44 = t;
            int o_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_146 = NULL;
                t = i_146;
                t = map_1_0(t_15, t);
                l_146 = t;
                t = (ATerm) ATmakeAppl(sym_LChoices_1, l_146);
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
                      t = h_146;
                      t = j_9(i_146, t);
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
                            t = h_146;
                            t = h_9(i_146, t);
                            LocalPopChoice(t_44);
                          }
                        else
                          {
                            t = s_44;
                            t = h_146;
                            t = f_9(i_146, t);
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
              i_146 = ATgetArgument(t, 0);
              j_146 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_146;
          t = x_8(i_146, j_146, t);
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
  ATerm m_146 = NULL;
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
      m_146 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_146;
  return(t);
}
ATerm match_to_dfa_0_0 (ATerm t)
{
  t = match_to_matrix_0_0(t);
  {
    static ATerm r_15 (ATerm t);
    static ATerm r_15 (ATerm t)
    {
      t = repeat_2_0(s_15, _id, t);
      t = SRTS_all(r_15, t);
      return(t);
    }
    t = scope_2_0(o_15, r_15, t);
  }
  t = strename_0_0(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm topdown_1_0 (ATerm p_142 (ATerm), ATerm t)
{
  static ATerm u_15 (ATerm t);
  static ATerm u_15 (ATerm t)
  {
    t = topdown_1_0(p_142, t);
    return(t);
  }
  t = p_142(t);
  t = SRTS_all(u_15, t);
  return(t);
}
ATerm map_1_0 (ATerm a_160 (ATerm), ATerm t)
{
  static ATerm n_147 (ATerm t);
  static ATerm n_147 (ATerm t)
  {
    ATerm f_147 = NULL,l_147 = NULL,m_147 = NULL;
    f_147 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_147;
      }
    else
      {
        ATerm r_79 = NULL,u_79 = NULL,v_79 = NULL,t_18 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_147 = ATgetFirst((ATermList) t);
            m_147 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_147);
        r_79 = t;
        t = l_147;
        t = a_160(t);
        u_79 = t;
        t = m_147;
        t = n_147(t);
        v_79 = t;
        t = (ATerm) ATinsert(CheckATermList(v_79), u_79);
        t_18 = t;
        t = SSLsetAnnotations(t_18, r_79);
      }
    return(t);
  }
  t = n_147(t);
  return(t);
}
static ATerm d_11 (ATerm i_44, ATerm j_44, ATerm t)
{
  ATerm p_147 = NULL;
  t = SSL_fputc(i_44, j_44);
  p_147 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_147);
  return(t);
}
static ATerm e_11 (ATerm o_42, ATerm p_42, ATerm t)
{
  ATerm q_147 = NULL;
  t = SSL_write_term_to_stream_text(o_42, p_42);
  q_147 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_147);
  return(t);
}
static ATerm g_11 (ATerm e_150 (ATerm), ATerm y_316, ATerm u_42, ATerm t)
{
  ATerm s_147 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_316, term_w_44);
  t = k_11(t);
  s_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_147, u_42);
  t = e_150(t);
  t = fclose_0_0(t);
  t = u_42;
  return(t);
}
static ATerm f_11 (ATerm k_42, ATerm l_42, ATerm t)
{
  ATerm t_147 = NULL;
  t = SSL_write_term_to_stream_baf(k_42, l_42);
  t_147 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_147);
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm a_148 = NULL,b_148 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_44 = ATgetArgument(t, 0);
      if(match_cons(x_44, sym_Stream_1))
        {
          a_148 = ATgetArgument(x_44, 0);
        }
      else
        _fail(t);
      b_148 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_11(a_148, b_148, t);
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
  t = e_11(f_148, g_148, t);
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
  t = d_11(d_148, e_148, t);
  return(t);
}
ATerm output_1_0 (ATerm g_176 (ATerm), ATerm t)
{
  ATerm u_147 = NULL,v_147 = NULL;
  t = g_176(t);
  v_147 = t;
  {
    ATerm a_45 = t;
    int b_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_147 = NULL,x_147 = NULL;
        t = term_c_45;
        w_147 = t;
        t = term_e_45;
        x_147 = t;
        t = term_f_45;
        t = q_11(w_147, x_147, t);
        LocalPopChoice(b_45);
      }
    else
      {
        t = a_45;
        t = term_g_45;
      }
  }
  u_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_147, v_147);
  {
    ATerm h_45 = t;
    int i_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_147 = NULL,z_147 = NULL;
        t = term_c_45;
        y_147 = t;
        t = term_j_45;
        z_147 = t;
        t = term_k_45;
        t = q_11(y_147, z_147, t);
        t = (ATerm) ATmakeAppl(sym__2, u_147, v_147);
        LocalPopChoice(i_45);
        if(match_cons(t, sym__2))
          {
            ATerm l_45 = ATgetArgument(t, 0);
            ATerm m_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_11(w_15, u_147, v_147, t);
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
        t = g_11(x_15, u_147, v_147, t);
      }
  }
  return(t);
}
static ATerm x_148 (ATerm o_148, ATerm t)
{
  t = SSL_fclose(o_148);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_148 = NULL,v_148 = NULL;
  v_148 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_148 = ATgetArgument(t, 0);
      {
        ATerm p_45 = t;
        int q_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_148);
            LocalPopChoice(q_45);
          }
        else
          {
            t = p_45;
            t = x_148(v_148, t);
          }
      }
    }
  else
    {
      t = x_148(v_148, t);
    }
  return(t);
}
static ATerm h_11 (ATerm q_42, ATerm t)
{
  t = SSL_read_term_from_stream(q_42);
  return(t);
}
static ATerm i_11 (ATerm k_87, ATerm l_87, ATerm t)
{
  t = SSL_strcat(k_87, l_87);
  return(t);
}
static ATerm j_11 (ATerm k_44, ATerm l_44, ATerm t)
{
  ATerm y_148 = NULL;
  t = SSL_fopen(k_44, l_44);
  y_148 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_148);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_148 = NULL;
  t = SSL_stdin_stream();
  z_148 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_148);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_149 = NULL;
  t = SSL_stdout_stream();
  a_149 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_149);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_149 = NULL;
  t = SSL_stderr_stream();
  b_149 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_149);
  return(t);
}
static ATerm p_150 (ATerm n_149, ATerm t)
{
  ATerm o_149 = NULL;
  t = SSL_explode_term(n_149);
  if(match_cons(t, sym__2))
    {
      ATerm r_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_45 = ATgetArgument(t, 1);
        if(((ATgetType(s_45) == AT_LIST) && !(ATisEmpty(s_45))))
          {
            o_149 = ATgetFirst((ATermList) s_45);
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
  t = o_149;
  if(match_cons(t, sym_stderr_0))
    {
      t = o_149;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = o_149;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = o_149;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_150 (ATerm r_149, ATerm s_149, ATerm t_149, ATerm t)
{
  ATerm u_149 = NULL,v_149 = NULL,w_149 = NULL,z_149 = NULL,w_18 = NULL;
  t = SSLgetAnnotations(t_149);
  w_149 = t;
  t = r_149;
  if(match_cons(t, sym_Path_1))
    {
      z_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_149, s_149);
  w_18 = t;
  t = SSLsetAnnotations(w_18, w_149);
  if(match_cons(t, sym__2))
    {
      u_149 = ATgetArgument(t, 0);
      v_149 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(u_149, v_149, t);
  return(t);
}
static ATerm s_150 (ATerm b_150, ATerm c_150, ATerm d_150, ATerm t)
{
  ATerm f_150 = NULL,g_150 = NULL,h_150 = NULL,k_150 = NULL,x_18 = NULL;
  t = SSLgetAnnotations(d_150);
  h_150 = t;
  t = SSL_is_string(b_150);
  k_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_150, c_150);
  x_18 = t;
  t = SSLsetAnnotations(x_18, h_150);
  if(match_cons(t, sym__2))
    {
      f_150 = ATgetArgument(t, 0);
      g_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(f_150, g_150, t);
  return(t);
}
static ATerm k_11 (ATerm t)
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
                  t = s_150(n_150, o_150, m_150, t);
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
  ATerm u_150 = NULL,v_150 = NULL,w_150 = NULL,b_151 = NULL;
  b_151 = t;
  {
    ATerm z_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_151, term_b_46);
        t = k_11(t);
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
          t = i_11(k_80, b_151, t);
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
  t = h_11(w_150, t);
  u_150 = t;
  t = v_150;
  t = fclose_0_0(t);
  t = u_150;
  return(t);
}
ATerm input_1_0 (ATerm h_176 (ATerm), ATerm t)
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
      t = q_11(e_151, f_151, t);
      LocalPopChoice(e_46);
    }
  else
    {
      t = d_46;
      t = term_h_46;
    }
  t = ReadFromFile_0_0(t);
  t = h_176(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm g_151 = NULL,h_151 = NULL;
  t = term_c_45;
  g_151 = t;
  t = term_i_46;
  h_151 = t;
  t = term_j_46;
  t = q_11(g_151, h_151, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_151 = NULL,k_151 = NULL,l_151 = NULL;
  j_151 = t;
  {
    ATerm k_46 = t;
    int l_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_151;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_46 = ATgetFirst((ATermList) t);
                ATerm n_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_151;
          }
        LocalPopChoice(l_46);
      }
    else
      {
        t = k_46;
        t = (ATerm) ATinsert(ATempty, j_151);
      }
  }
  k_151 = t;
  t = term_g_45;
  l_151 = t;
  t = SSL_printnl(l_151, k_151);
  t = j_151;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm q_151 = NULL,r_151 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_151 = ATgetFirst((ATermList) t);
      r_151 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_151 = NULL,x_151 = NULL;
        static ATerm y_15 (ATerm t);
        static ATerm y_15 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_151)), not_null(x_151));
          return(t);
        }
        t = r_151;
        t = r_0(t);
        if(((w_151 != NULL) && (w_151 != t)))
          _fail(t);
        else
          w_151 = t;
        t = q_151;
        t = p_0(t);
        if(((x_151 != NULL) && (x_151 != t)))
          _fail(t);
        else
          x_151 = t;
        t = r_151;
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
  ATerm f_152 = NULL,g_152 = NULL,h_152 = NULL,e_19 = NULL;
  h_152 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_152);
  f_152 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_152);
  e_19 = t;
  t = SSLsetAnnotations(e_19, f_152);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm l_152 = NULL;
  l_152 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_152), term_q_46);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm f_178 (ATerm), ATerm g_178 (ATerm), ATerm t)
{
  ATerm b_152 = NULL,c_152 = NULL;
  ATerm r_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_152 = NULL,e_152 = NULL;
      t = term_c_45;
      d_152 = t;
      t = term_i_46;
      e_152 = t;
      t = term_j_46;
      t = q_11(d_152, e_152, t);
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
        t = f_178(t);
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
  b_152 = t;
  t = term_x_46;
  c_152 = t;
  t = term_y_46;
  t = q_11(b_152, c_152, t);
  t = reverse_acc_2_0(_id, a_16, t);
  t = map_1_0(b_16, t);
  {
    ATerm z_46 = t;
    int a_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_152 = NULL;
        t = g_178(t);
        m_152 = t;
        t = (ATerm) ATinsert(CheckATermList(m_152), term_b_47);
        t = echo_0_0(t);
        LocalPopChoice(a_47);
      }
    else
      {
        t = z_46;
      }
  }
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm s_152 = NULL,t_152 = NULL,u_152 = NULL,g_19 = NULL;
  u_152 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_152);
  s_152 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_152);
  g_19 = t;
  t = SSLsetAnnotations(g_19, s_152);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_152 = NULL;
  p_152 = t;
  {
    ATerm c_47 = t;
    int d_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_152 = NULL,r_152 = NULL;
        t = term_c_45;
        q_152 = t;
        t = term_i_46;
        r_152 = t;
        t = term_j_46;
        t = q_11(q_152, r_152, t);
        LocalPopChoice(d_47);
      }
    else
      {
        t = c_47;
        t = fetch_1_0(c_16, t);
      }
  }
  t = p_152;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm w_152 = NULL;
  w_152 = t;
  if(match_string(t, "-k"))
    {
      t = w_152;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_152;
    }
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm x_152 = NULL,y_152 = NULL,z_152 = NULL;
  x_152 = t;
  t = SSL_string_to_int(x_152);
  y_152 = t;
  t = term_f_47;
  z_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_47, y_152);
  t = t_11(z_152, y_152, t);
  t = x_152;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = term_g_47;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_16, f_16, g_16, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm b_153 = NULL;
  b_153 = t;
  if(match_string(t, "-S"))
    {
      t = b_153;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_153;
    }
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm c_153 = NULL,d_153 = NULL;
  t = term_h_47;
  c_153 = t;
  t = term_l_39;
  d_153 = t;
  t = term_i_47;
  t = t_11(c_153, d_153, t);
  t = term_j_47;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = term_k_47;
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
  ATerm e_153 = NULL,f_153 = NULL,g_153 = NULL;
  e_153 = t;
  t = SSL_string_to_int(e_153);
  f_153 = t;
  t = term_h_47;
  g_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_47, f_153);
  t = t_11(g_153, f_153, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_153);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_m_47;
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
  ATerm h_153 = NULL,i_153 = NULL;
  t = term_n_47;
  h_153 = t;
  t = term_p_46;
  i_153 = t;
  t = term_o_47;
  t = t_11(h_153, i_153, t);
  t = term_p_47;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_q_47;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm r_47 = t;
  int s_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_16, m_16, n_16, t);
      LocalPopChoice(s_47);
    }
  else
    {
      t = r_47;
      {
        ATerm t_47 = t;
        int u_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_16, p_16, q_16, t);
            LocalPopChoice(u_47);
          }
        else
          {
            t = t_47;
            t = Option_3_0(r_16, s_16, t_16, t);
          }
      }
    }
  return(t);
}
static ATerm t_11 (ATerm e_48, ATerm f_48, ATerm t)
{
  ATerm j_153 = NULL,k_153 = NULL;
  t = term_c_45;
  j_153 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_45, e_48, f_48);
  t = lookup_table_0_1(j_153, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(e_48, f_48, k_153, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_45, e_48, f_48);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_153 = NULL,p_153 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_153 = NULL,r_153 = NULL,s_153 = NULL;
      t = term_p_46;
      t = g_0(t);
      q_153 = t;
      t = term_w_46;
      r_153 = t;
      t = term_x_46;
      s_153 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_46, term_x_46, q_153);
      t = r_11(r_153, s_153, q_153, t);
      _fail(t);
    }
  else
    {
      ATerm v_153 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_153 = ATgetFirst((ATermList) t);
          p_153 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_153;
      t = d_0(t);
      t = term_p_46;
      t = f_0(t);
      v_153 = t;
      t = (ATerm) ATinsert(CheckATermList(p_153), v_153);
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm x_153 = NULL;
  x_153 = t;
  if(match_string(t, "-o"))
    {
      t = x_153;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_153;
    }
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm y_153 = NULL,z_153 = NULL;
  y_153 = t;
  t = term_e_45;
  z_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_45, y_153);
  t = t_11(z_153, y_153, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_153);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = term_w_47;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_16, x_16, y_16, t);
  return(t);
}
static ATerm r_11 (ATerm y_53, ATerm z_53, ATerm x_53, ATerm t)
{
  ATerm b_154 = NULL,c_154 = NULL,d_154 = NULL,e_154 = NULL,f_154 = NULL;
  b_154 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_53, z_53);
  {
    ATerm z_47 = t;
    int a_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm d_48 = ATgetArgument(t, 0);
            ATerm g_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_53, z_53);
        t = q_11(y_53, z_53, t);
        LocalPopChoice(a_48);
      }
    else
      {
        t = z_47;
        t = (ATerm) ATempty;
      }
  }
  c_154 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_53, z_53, (ATerm) ATinsert(CheckATermList(c_154), x_53));
  t = lookup_table_0_1(y_53, t);
  f_154 = t;
  t = (ATerm) ATinsert(CheckATermList(c_154), x_53);
  d_154 = t;
  t = f_154;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(z_53, d_154, e_154, t);
  t = b_154;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm m_154 = NULL,s_154 = NULL,t_154 = NULL,u_154 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_154 = NULL,w_154 = NULL,x_154 = NULL;
      t = term_p_46;
      t = n_0(t);
      v_154 = t;
      t = term_w_46;
      w_154 = t;
      t = term_x_46;
      x_154 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_46, term_x_46, v_154);
      t = r_11(w_154, x_154, v_154, t);
      _fail(t);
    }
  else
    {
      ATerm b_155 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_154 = ATgetFirst((ATermList) t);
          s_154 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_154;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_154 = ATgetFirst((ATermList) t);
          u_154 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_154;
      t = j_0(t);
      t = t_154;
      t = l_0(t);
      b_155 = t;
      t = (ATerm) ATinsert(CheckATermList(u_154), b_155);
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm d_155 = NULL;
  d_155 = t;
  if(match_string(t, "-i"))
    {
      t = d_155;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_155;
    }
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm e_155 = NULL,f_155 = NULL;
  e_155 = t;
  t = term_f_46;
  f_155 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_46, e_155);
  t = t_11(f_155, e_155, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_155);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = term_i_48;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_16, a_17, e_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_155 = NULL,h_155 = NULL,i_155 = NULL,j_155 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_46;
  t = whoami_0_0(t);
  g_155 = t;
  t = term_j_48;
  i_155 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_48), g_155);
  j_155 = t;
  t = SSL_printnl(i_155, j_155);
  t = term_v_39;
  h_155 = t;
  t = SSL_exit(h_155);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm k_155 = NULL,l_155 = NULL;
  t = term_c_45;
  k_155 = t;
  t = term_i_46;
  l_155 = t;
  t = term_j_46;
  t = q_11(k_155, l_155, t);
  return(t);
}
static ATerm l_11 (ATerm g_51, ATerm h_51, ATerm t)
{
  ATerm a_49 = t;
  int c_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_51, h_51);
      LocalPopChoice(c_49);
    }
  else
    {
      t = a_49;
      t = SSL_addr(g_51, h_51);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm v_165 (ATerm), ATerm w_165 (ATerm), ATerm t)
{
  ATerm n_155 = NULL,o_155 = NULL,p_155 = NULL;
  n_155 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_155;
      t = v_165(t);
    }
  else
    {
      ATerm s_155 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_155 = ATgetFirst((ATermList) t);
          p_155 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_155;
      t = foldr_2_0(v_165, w_165, t);
      s_155 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_155, s_155);
      t = w_165(t);
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
  ATerm z_80 = NULL,b_81 = NULL;
  if(match_cons(t, sym__2))
    {
      z_80 = ATgetArgument(t, 0);
      b_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(z_80, b_81, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_155 = NULL,s_80 = NULL,t_80 = NULL;
  t = times_0_0(t);
  t_80 = t;
  t = SSL_explode_term(t_80);
  if(match_cons(t, sym__2))
    {
      ATerm d_49 = ATgetArgument(t, 0);
      s_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_80;
  t = foldr_2_0(f_17, g_17, t);
  v_155 = t;
  t = SSL_TicksToSeconds(v_155);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_156 = NULL,h_156 = NULL,i_156 = NULL;
  g_156 = t;
  if(match_cons(t, sym__2))
    {
      h_156 = ATgetArgument(t, 0);
      i_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_49 = t;
    int f_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_156;
        if((h_156 != t))
          {
            _fail(t);
          }
        t = g_156;
        LocalPopChoice(f_49);
      }
    else
      {
        t = e_49;
        t = (ATerm) ATmakeAppl(sym__2, h_156, i_156);
        {
          ATerm g_49 = t;
          int h_49 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_156, i_156);
              LocalPopChoice(h_49);
            }
          else
            {
              t = g_49;
              t = SSL_gtr(h_156, i_156);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_156, i_156);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_151 (ATerm), ATerm t)
{
  ATerm m_156 = NULL;
  m_156 = t;
  {
    ATerm k_49 = t;
    int o_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_156 = NULL,p_156 = NULL,q_156 = NULL;
        t = term_c_45;
        p_156 = t;
        t = term_h_47;
        q_156 = t;
        t = term_p_49;
        t = q_11(p_156, q_156, t);
        o_156 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_156, term_v_39);
        t = geq_0_0(t);
        t = m_156;
        t = v_151(t);
        LocalPopChoice(o_49);
      }
    else
      {
        t = k_49;
        t = m_156;
      }
  }
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm s_156 = NULL,t_156 = NULL,v_156 = NULL,w_156 = NULL;
  t = run_time_0_0(t);
  s_156 = t;
  t = term_p_46;
  t = whoami_0_0(t);
  t_156 = t;
  t = term_j_48;
  v_156 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_49), s_156), term_q_49), t_156);
  w_156 = t;
  t = SSL_printnl(v_156, w_156);
  t = (ATerm) ATmakeAppl(sym__2, term_j_48, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_49), s_156), term_q_49), t_156));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(h_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm x_156 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_39;
  x_156 = t;
  t = SSL_exit(x_156);
  return(t);
}
static ATerm u_11 (ATerm n_58, ATerm o_58, ATerm p_58, ATerm t)
{
  ATerm y_156 = NULL;
  t = SSL_hashtable_put(p_58, n_58, o_58);
  y_156 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_156);
  return(t);
}
ATerm lookup_table_0_1 (ATerm k_55, ATerm t)
{
  ATerm h_157 = NULL;
  t = table_hashtable_0_0(t);
  h_157 = t;
  {
    ATerm s_49 = t;
    int t_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_81 = NULL;
        t = h_157;
        if(match_cons(t, sym_Hashtable_1))
          {
            r_81 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = v_11(k_55, r_81, t);
        LocalPopChoice(t_49);
      }
    else
      {
        t = s_49;
        {
          ATerm w_81 = NULL;
          t = k_55;
          t = table_create_0_0(t);
          t = h_157;
          if(match_cons(t, sym_Hashtable_1))
            {
              w_81 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_11(k_55, w_81, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm v_58, ATerm w_58, ATerm t)
{
  ATerm k_157 = NULL;
  t = SSL_hashtable_create(v_58, w_58);
  k_157 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_157);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm l_157 = NULL,m_157 = NULL,n_157 = NULL,p_157 = NULL,q_157 = NULL;
  l_157 = t;
  t = term_u_49;
  p_157 = t;
  t = term_v_49;
  q_157 = t;
  t = l_157;
  t = new_hashtable_0_2(p_157, q_157, t);
  m_157 = t;
  t = l_157;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(l_157, m_157, n_157, t);
  t = l_157;
  return(t);
}
static ATerm n_11 (ATerm s_58, ATerm t_58, ATerm t)
{
  ATerm r_157 = NULL;
  t = SSL_hashtable_remove(t_58, s_58);
  r_157 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_157);
  return(t);
}
static ATerm o_11 (ATerm x_58, ATerm t)
{
  ATerm s_157 = NULL;
  t = SSL_hashtable_destroy(x_58);
  s_157 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_157);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm t_157 = NULL;
  t = SSL_table_hashtable();
  t_157 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_157);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm u_157 = NULL,v_157 = NULL,w_157 = NULL,x_157 = NULL;
  u_157 = t;
  t = table_hashtable_0_0(t);
  v_157 = t;
  t = lookup_table_0_1(u_157, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_11(x_157, t);
  t = v_157;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_11(u_157, w_157, t);
  t = u_157;
  return(t);
}
ATerm fetch_1_0 (ATerm i_160 (ATerm), ATerm t)
{
  static ATerm u_158 (ATerm t);
  static ATerm u_158 (ATerm t)
  {
    ATerm r_158 = NULL,s_158 = NULL,t_158 = NULL;
    r_158 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_158 = ATgetFirst((ATermList) t);
        t_158 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_49 = t;
      int x_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_82 = NULL,g_82 = NULL,i_19 = NULL;
          t = SSLgetAnnotations(r_158);
          c_82 = t;
          t = s_158;
          t = i_160(t);
          g_82 = t;
          t = (ATerm) ATinsert(CheckATermList(t_158), g_82);
          i_19 = t;
          t = SSLsetAnnotations(i_19, c_82);
          LocalPopChoice(x_49);
        }
      else
        {
          t = w_49;
          {
            ATerm v_82 = NULL,y_82 = NULL,j_19 = NULL;
            t = SSLgetAnnotations(r_158);
            v_82 = t;
            t = t_158;
            t = u_158(t);
            y_82 = t;
            t = (ATerm) ATinsert(CheckATermList(y_82), s_158);
            j_19 = t;
            t = SSLsetAnnotations(j_19, v_82);
          }
        }
    }
    return(t);
  }
  t = u_158(t);
  return(t);
}
static ATerm v_11 (ATerm q_58, ATerm r_58, ATerm t)
{
  t = SSL_hashtable_get(r_58, q_58);
  return(t);
}
static ATerm q_11 (ATerm r_55, ATerm s_55, ATerm t)
{
  ATerm x_158 = NULL;
  t = lookup_table_0_1(r_55, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(s_55, x_158, t);
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
  ATerm z_158 = NULL,a_159 = NULL;
  t = term_y_49;
  z_158 = t;
  t = term_p_46;
  a_159 = t;
  t = term_z_49;
  t = t_11(z_158, a_159, t);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_a_50;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm b_159 = NULL,c_159 = NULL,d_159 = NULL,e_159 = NULL;
  t = term_y_49;
  d_159 = t;
  t = term_p_46;
  e_159 = t;
  t = term_z_49;
  t = t_11(d_159, e_159, t);
  t = term_b_50;
  b_159 = t;
  t = term_p_46;
  c_159 = t;
  t = term_c_50;
  t = t_11(b_159, c_159, t);
  t = term_d_50;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_i_50;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_50 = t;
  int r_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_17, k_17, l_17, t);
      LocalPopChoice(r_50);
    }
  else
    {
      t = l_50;
      t = Option_3_0(m_17, p_17, u_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_115 (ATerm), ATerm p_115 (ATerm), ATerm t)
{
  ATerm f_159 = NULL,g_159 = NULL,h_159 = NULL,i_159 = NULL,j_159 = NULL,k_159 = NULL,o_19 = NULL;
  k_159 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_159 = ATgetFirst((ATermList) t);
      h_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_159);
  f_159 = t;
  t = g_159;
  t = o_115(t);
  i_159 = t;
  t = h_159;
  t = p_115(t);
  j_159 = t;
  t = (ATerm) ATinsert(CheckATermList(j_159), i_159);
  o_19 = t;
  t = SSLsetAnnotations(o_19, f_159);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_178 (ATerm), ATerm t)
{
  ATerm p_159 = NULL,q_159 = NULL,r_159 = NULL,s_159 = NULL,u_159 = NULL,v_159 = NULL,q_19 = NULL;
  p_159 = t;
  {
    ATerm z_50 = t;
    int a_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_51;
        t = a_178(t);
        LocalPopChoice(a_51);
      }
    else
      {
        t = z_50;
      }
  }
  t = p_159;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_159 = ATgetFirst((ATermList) t);
      s_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_159);
  q_159 = t;
  t = term_i_46;
  v_159 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_46, r_159);
  t = t_11(v_159, r_159, t);
  t = s_159;
  {
    static ATerm k_160 (ATerm t);
    static ATerm k_160 (ATerm t)
    {
      ATerm c_51 = t;
      int d_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_51 = t;
          int f_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_159 = NULL;
              z_159 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_159;
              LocalPopChoice(f_51);
            }
          else
            {
              t = e_51;
              t = a_178(t);
              t = Cons_2_0(_id, k_160, t);
            }
          LocalPopChoice(d_51);
        }
      else
        {
          t = c_51;
          {
            ATerm e_160 = NULL,f_160 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_160 = ATgetFirst((ATermList) t);
                f_160 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_160), (ATerm) ATmakeAppl(sym_Undefined_1, e_160));
          }
        }
      return(t);
    }
    t = k_160(t);
  }
  u_159 = t;
  t = (ATerm) ATinsert(CheckATermList(u_159), (ATerm) ATmakeAppl(sym_Program_1, r_159));
  q_19 = t;
  t = SSLsetAnnotations(q_19, q_159);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm z_160 = NULL;
  z_160 = t;
  if(match_string(t, "--help"))
    {
      t = z_160;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_160;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_160;
        }
    }
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm a_161 = NULL,b_161 = NULL;
  t = term_i_51;
  a_161 = t;
  t = term_p_46;
  b_161 = t;
  t = term_l_51;
  t = t_11(a_161, b_161, t);
  t = term_m_51;
  return(t);
}
static ATerm y_17 (ATerm t)
{
  t = term_n_51;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm x_177 (ATerm), ATerm y_177 (ATerm), ATerm z_177 (ATerm), ATerm t)
{
  ATerm r_160 = NULL,s_160 = NULL,t_160 = NULL,u_160 = NULL,v_160 = NULL,w_160 = NULL,x_160 = NULL,y_160 = NULL;
  t_160 = t;
  t = term_w_46;
  u_160 = t;
  t = term_u_51;
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
  t = u_11(v_160, w_160, x_160, t);
  t = t_160;
  {
    static ATerm v_17 (ATerm t);
    static ATerm v_17 (ATerm t)
    {
      ATerm v_51 = t;
      int w_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_177(t);
          LocalPopChoice(w_51);
        }
      else
        {
          t = v_51;
          {
            ATerm x_51 = t;
            int y_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_17, x_17, y_17, t);
                LocalPopChoice(y_51);
              }
            else
              {
                t = x_51;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_17, t);
  }
  {
    ATerm z_51 = t;
    int a_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_161 = NULL;
        o_161 = t;
        {
          ATerm b_52 = t;
          int c_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_83 = NULL;
              t = o_161;
              {
                ATerm d_52 = t;
                int e_52 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_83 = NULL,h_83 = NULL;
                    t = term_c_45;
                    g_83 = t;
                    t = term_i_51;
                    h_83 = t;
                    t = term_f_52;
                    t = q_11(g_83, h_83, t);
                    LocalPopChoice(e_52);
                  }
                else
                  {
                    t = d_52;
                    t = fetch_1_0(a_18, t);
                  }
              }
              t = o_161;
              t = y_177(t);
              t = term_l_39;
              f_83 = t;
              t = SSL_exit(f_83);
              LocalPopChoice(c_52);
            }
          else
            {
              t = b_52;
              {
                ATerm l_83 = NULL,m_83 = NULL,o_83 = NULL;
                t = term_c_45;
                m_83 = t;
                t = term_y_49;
                o_83 = t;
                t = term_g_52;
                t = q_11(m_83, o_83, t);
                t = o_161;
                t = z_177(t);
                t = term_l_39;
                l_83 = t;
                t = SSL_exit(l_83);
              }
            }
        }
        LocalPopChoice(a_52);
      }
    else
      {
        t = z_51;
        {
          ATerm h_52 = t;
          int i_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_161 = NULL,q_161 = NULL,r_161 = NULL;
              static ATerm g_18 (ATerm t);
              static ATerm g_18 (ATerm t)
              {
                ATerm s_161 = NULL,t_161 = NULL,u_161 = NULL,t_19 = NULL;
                u_161 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_161 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_161);
                s_161 = t;
                t = t_161;
                if(((r_160 != NULL) && (r_160 != t)))
                  _fail(t);
                else
                  r_160 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_161);
                t_19 = t;
                t = SSLsetAnnotations(t_19, s_161);
                return(t);
              }
              t = fetch_1_0(g_18, t);
              t = term_j_48;
              q_161 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_160)), term_j_52);
              r_161 = t;
              t = SSL_printnl(q_161, r_161);
              t = (ATerm) ATmakeAppl(sym__2, term_j_48, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_160)), term_j_52));
              t = y_177(t);
              t = term_v_39;
              p_161 = t;
              t = SSL_exit(p_161);
              LocalPopChoice(i_52);
            }
          else
            {
              t = h_52;
            }
        }
      }
  }
  s_160 = t;
  t = term_w_46;
  t = table_destroy_0_0(t);
  t = s_160;
  return(t);
}
ATerm option_wrap_5_0 (ATerm a_176 (ATerm), ATerm b_176 (ATerm), ATerm c_176 (ATerm), ATerm d_176 (ATerm), ATerm e_176 (ATerm), ATerm t)
{
  ATerm z_161 = NULL,a_162 = NULL,b_162 = NULL,c_162 = NULL,d_162 = NULL;
  t = parse_options_3_0(a_176, b_176, c_176, t);
  z_161 = t;
  t = term_k_52;
  t = table_create_0_0(t);
  t = term_k_52;
  a_162 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_k_52, term_l_52, z_161);
  t = lookup_table_0_1(a_162, t);
  d_162 = t;
  t = term_l_52;
  b_162 = t;
  t = d_162;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(b_162, z_161, c_162, t);
  t = z_161;
  t = d_176(t);
  {
    ATerm m_52 = t;
    int n_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_176(t);
        t = report_success_0_0(t);
        LocalPopChoice(n_52);
      }
    else
      {
        t = m_52;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm p_52 = t;
  int q_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(q_52);
    }
  else
    {
      t = p_52;
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
              int y_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(k_18, l_18, m_18, t);
                  LocalPopChoice(y_52);
                }
              else
                {
                  t = x_52;
                  {
                    ATerm z_52 = t;
                    int a_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(a_53);
                      }
                    else
                      {
                        t = z_52;
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
  ATerm k_162 = NULL,p_162 = NULL;
  t = term_j_45;
  k_162 = t;
  t = term_p_46;
  p_162 = t;
  t = term_b_53;
  t = t_11(k_162, p_162, t);
  t = term_d_53;
  return(t);
}
static ATerm m_18 (ATerm t)
{
  t = term_f_53;
  return(t);
}
static ATerm n_18 (ATerm t)
{
  t = output_1_0(o_18, t);
  return(t);
}
static ATerm o_18 (ATerm t)
{
  ATerm r_162 = NULL,u_162 = NULL,x_162 = NULL,y_162 = NULL,z_162 = NULL,a_163 = NULL,b_163 = NULL,h_163 = NULL,i_163 = NULL,j_163 = NULL,k_163 = NULL,l_163 = NULL,m_163 = NULL,n_163 = NULL,o_163 = NULL,c_20 = NULL,b_20 = NULL,a_20 = NULL,z_19 = NULL;
  o_163 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_163);
  r_162 = t;
  t = u_162;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_162 = ATgetFirst((ATermList) t);
      z_162 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_162);
  x_162 = t;
  t = z_162;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_163 = ATgetFirst((ATermList) t);
      i_163 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_162);
  b_163 = t;
  t = h_163;
  if(match_cons(t, sym_Strategies_1))
    {
      l_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_163);
  k_163 = t;
  t = l_163;
  t = map_1_0(p_18, t);
  m_163 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_163);
  z_19 = t;
  t = SSLsetAnnotations(z_19, k_163);
  n_163 = t;
  t = i_163;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_163), n_163);
  a_20 = t;
  t = SSLsetAnnotations(a_20, b_163);
  j_163 = t;
  t = (ATerm) ATinsert(CheckATermList(j_163), y_162);
  b_20 = t;
  t = SSLsetAnnotations(b_20, x_162);
  a_163 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_163);
  c_20 = t;
  t = SSLsetAnnotations(c_20, r_162);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm k_164 = NULL,l_164 = NULL,m_164 = NULL,n_164 = NULL,o_164 = NULL;
  o_164 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      k_164 = ATgetArgument(t, 0);
      l_164 = ATgetArgument(t, 1);
      m_164 = ATgetArgument(t, 2);
      n_164 = ATgetArgument(t, 3);
      {
        ATerm g_53 = t;
        int h_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_84 = NULL,j_84 = NULL,x_19 = NULL;
            t = SSLgetAnnotations(o_164);
            e_84 = t;
            t = n_164;
            t = topdown_1_0(q_18, t);
            t = match_to_dfa_0_0(t);
            j_84 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_164, l_164, m_164, j_84);
            x_19 = t;
            t = SSLsetAnnotations(x_19, e_84);
            LocalPopChoice(h_53);
          }
        else
          {
            t = g_53;
            t = o_164;
          }
      }
    }
  else
    {
      t = o_164;
    }
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm l_84 = NULL;
  l_84 = t;
  if(match_cons(t, sym_Id_0))
    {
      ATerm i_53 = t;
      int j_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_84 = NULL;
          t = l_84;
          t = new_0_0(t);
          m_84 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_84), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_84)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_84))));
          LocalPopChoice(j_53);
        }
      else
        {
          t = i_53;
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
  t = option_wrap_5_0(h_18, default_system_usage_0_0, default_system_about_0_0, _id, j_18, t);
  return(t);
}

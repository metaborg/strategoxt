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
static Symbol sym_As_2;
static Symbol sym_App_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
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
static Symbol sym_ExtSDefInl_4;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_FunType_2;
static Symbol sym_Rule_3;
static Symbol sym_RDefT_4;
static Symbol sym_DynamicRules_1;
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
static Symbol sym_As_2;
static Symbol sym_App_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
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
static Symbol sym_ExtSDefInl_4;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_FunType_2;
static Symbol sym_Rule_3;
static Symbol sym_RDefT_4;
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
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_InfixApp_3;
static Symbol sym_MA_2;
static Symbol sym_BAM_3;
static Symbol sym_Seqs_1;
static Symbol sym_Choices_1;
static Symbol sym_LChoices_1;
static Symbol sym_Lets_2;
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
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
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
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
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
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
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
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
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
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
}
static ATerm term_u_74;
static ATerm term_r_74;
static ATerm term_q_74;
static ATerm term_e_74;
static ATerm term_d_74;
static ATerm term_c_74;
static ATerm term_z_73;
static ATerm term_y_73;
static ATerm term_k_73;
static ATerm term_j_73;
static ATerm term_i_73;
static ATerm term_h_73;
static ATerm term_g_73;
static ATerm term_b_73;
static ATerm term_w_72;
static ATerm term_v_72;
static ATerm term_u_72;
static ATerm term_t_72;
static ATerm term_s_72;
static ATerm term_r_72;
static ATerm term_q_72;
static ATerm term_n_72;
static ATerm term_m_72;
static ATerm term_h_72;
static ATerm term_g_72;
static ATerm term_e_72;
static ATerm term_u_71;
static ATerm term_t_71;
static ATerm term_s_71;
static ATerm term_m_71;
static ATerm term_g_71;
static ATerm term_f_71;
static ATerm term_x_70;
static ATerm term_q_70;
static ATerm term_p_70;
static ATerm term_j_70;
static ATerm term_i_70;
static ATerm term_g_70;
static ATerm term_d_70;
static ATerm term_y_69;
static ATerm term_x_69;
static ATerm term_k_69;
static ATerm term_h_69;
static ATerm term_f_69;
static ATerm term_e_69;
static ATerm term_y_68;
static ATerm term_r_68;
static ATerm term_q_68;
static ATerm term_e_68;
static ATerm term_d_68;
static ATerm term_a_68;
static ATerm term_z_67;
static ATerm term_y_67;
static ATerm term_u_67;
static ATerm term_r_67;
static ATerm term_z_65;
static ATerm term_y_65;
static ATerm term_t_65;
static ATerm term_r_65;
static ATerm term_q_65;
static ATerm term_p_65;
static ATerm term_l_65;
static ATerm term_f_65;
static ATerm term_r_58;
static ATerm term_w_57;
static ATerm term_o_57;
static ATerm term_v_39;
static ATerm term_u_39;
static ATerm term_f_39;
static ATerm term_y_38;
static ATerm term_z_37;
static ATerm term_m_20;
static ATerm term_y_19;
static ATerm term_y_17;
static ATerm term_o_17;
static ATerm term_m_17;
static ATerm term_l_17;
static ATerm term_f_17;
static ATerm term_e_17;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineCall0", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeInt(50);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall2", 0, ATtrue));
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("SubsArgCall1", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_58));
  term_r_58 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_65));
  term_f_65 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_65));
  term_l_65 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_65));
  term_p_65 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_65));
  term_q_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_65));
  term_r_65 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_q_65);
  ATprotect(&(term_t_65));
  term_t_65 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_65));
  term_y_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_y_65);
  ATprotect(&(term_r_67));
  term_r_67 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_67));
  term_u_67 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_y_67);
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_68));
  term_d_68 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_d_68);
  ATprotect(&(term_q_68));
  term_q_68 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_68));
  term_r_68 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_68));
  term_y_68 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(sym__2, term_e_69, term_f_69);
  ATprotect(&(term_k_69));
  term_k_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(sym__2, term_d_70, term_w_57);
  ATprotect(&(term_i_70));
  term_i_70 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_57);
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_70));
  term_p_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(sym__2, term_q_70, term_q_68);
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_72));
  term_e_72 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_d_70);
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_72));
  term_m_72 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_72));
  term_r_72 = (ATerm) ATmakeAppl(sym__2, term_q_72, term_q_68);
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_72));
  term_t_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_72));
  term_u_72 = (ATerm) ATmakeAppl(sym__2, term_t_72, term_q_68);
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_73));
  term_b_73 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_73));
  term_g_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_73));
  term_h_73 = (ATerm) ATmakeAppl(sym__2, term_g_73, term_q_68);
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(sym__3, term_e_69, term_f_69, (ATerm) ATempty);
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_g_73);
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_q_72);
  ATprotect(&(term_c_74));
  term_c_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(sym__2, term_y_65, term_q_68);
  ATprotect(&(term_r_74));
  term_r_74 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_74));
  term_u_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm AddSDef_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm term_size_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm f_122 (ATerm), ATerm g_122 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
ATerm body_to_inline_0_0 (ATerm t);
ATerm inlineable_0_0 (ATerm t);
static ATerm i_7 (ATerm x_39, ATerm y_39, ATerm t);
ATerm bottomup_1_0 (ATerm z_141 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm simplify_0_0 (ATerm t);
ATerm SubsArgCall2_0_0 (ATerm t);
ATerm SubsArgCall1_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm substitute_arg_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm substitute_args_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm spaste_1_0 (ATerm r_140 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm s_140 (ATerm), ATerm t_140 (ATerm), ATerm u_140 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm w_140 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm c_13 (ATerm t_28, ATerm s_28, ATerm t);
ATerm SVar_1_0 (ATerm u_118 (ATerm), ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm y_140 (ATerm), ATerm z_140 (ATerm), ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm tpaste_1_0 (ATerm n_140 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm q_140 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm x_140 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm f_13 (ATerm a_158 (ATerm), ATerm h_64, ATerm g_64, ATerm t);
static ATerm h_13 (ATerm d_158 (ATerm), ATerm e_158 (ATerm), ATerm l_64, ATerm k_64, ATerm t);
static ATerm i_13 (ATerm v_157 (ATerm), ATerm f_64, ATerm e_64, ATerm t);
static ATerm s_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm k_13 (ATerm a_858, ATerm f_858, ATerm d_87, ATerm t);
ATerm while_not_2_0 (ATerm p_148 (ATerm), ATerm q_148 (ATerm), ATerm t);
ATerm for_3_0 (ATerm s_148 (ATerm), ATerm t_148 (ATerm), ATerm u_148 (ATerm), ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm l_138 (ATerm f_137, ATerm g_137, ATerm h_137, ATerm t);
static ATerm b_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
ATerm free_vars_3_0 (ATerm z_164 (ATerm), ATerm a_165 (ATerm), ATerm b_165 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm b_10 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm q_118 (ATerm), ATerm t);
static ATerm m_13 (ATerm h_163 (ATerm), ATerm i_163 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_67, ATerm p_67, ATerm o_67, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm n_13 (ATerm b_163 (ATerm), ATerm c_163 (ATerm (ATerm), ATerm), ATerm i_67, ATerm l_67, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm p_163 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm w_162 (ATerm (ATerm), ATerm), ATerm x_162 (ATerm), ATerm y_162 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_162 (ATerm (ATerm), ATerm), ATerm t);
static ATerm y_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
ATerm InlineCall_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm f_161 (ATerm), ATerm g_161 (ATerm), ATerm h_161 (ATerm), ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
ATerm occurrences_1_0 (ATerm h_158 (ATerm), ATerm t);
static ATerm s_13 (ATerm s_139 (ATerm), ATerm w_27, ATerm v_27, ATerm t);
static ATerm u_13 (ATerm z_149 (ATerm), ATerm i_38, ATerm g_38, ATerm t);
static ATerm w_13 (ATerm r_39, ATerm s_39, ATerm t);
ATerm end_scope_1_0 (ATerm w_149 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm j_145 (ATerm), ATerm k_145 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm v_149 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm x_149 (ATerm), ATerm y_149 (ATerm), ATerm t);
static ATerm v_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm inline_sdef_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm y_141 (ATerm), ATerm t);
static ATerm h_12 (ATerm t);
static ATerm y_13 (ATerm s_107, ATerm r_107, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm r_146 (ATerm), ATerm s_146 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm c_143 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm x_155 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm g_159 (ATerm y_158, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm u_12 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm y_147 (ATerm), ATerm z_147 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm a_142 (ATerm), ATerm t);
static ATerm x_12 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm inline_sdefs_0_0 (ATerm t);
static ATerm e_15 (ATerm m_75, ATerm n_75, ATerm t);
static ATerm f_15 (ATerm l_35, ATerm m_35, ATerm t);
static ATerm h_15 (ATerm n_149 (ATerm), ATerm d_279, ATerm r_35, ATerm t);
static ATerm g_15 (ATerm h_35, ATerm i_35, ATerm t);
static ATerm g_13 (ATerm t);
static ATerm j_13 (ATerm t);
ATerm output_1_0 (ATerm v_173 (ATerm), ATerm t);
static ATerm s_168 (ATerm m_168, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_15 (ATerm n_35, ATerm t);
static ATerm j_15 (ATerm s_73, ATerm t_73, ATerm t);
static ATerm k_15 (ATerm o_75, ATerm p_75, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm d_170 (ATerm c_169, ATerm t);
static ATerm e_170 (ATerm g_169, ATerm h_169, ATerm i_169, ATerm t);
static ATerm f_170 (ATerm q_169, ATerm r_169, ATerm s_169, ATerm t);
static ATerm l_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm w_173 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm i_155 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm o_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm r_13 (ATerm t);
ATerm default_system_usage_2_0 (ATerm u_175 (ATerm), ATerm v_175 (ATerm), ATerm t);
static ATerm v_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm b_14 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm s_14 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm v_15 (ATerm m_83, ATerm n_83, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm u_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm t_15 (ATerm m_39, ATerm n_39, ATerm l_39, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm a_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm y_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_15 (ATerm u_36, ATerm v_36, ATerm t);
ATerm foldr_2_0 (ATerm d_161 (ATerm), ATerm e_161 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm e_16 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_170 (ATerm), ATerm t);
static ATerm f_16 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_15 (ATerm j_44, ATerm k_44, ATerm m_44, ATerm t);
ATerm lookup_table_0_1 (ATerm y_40, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_44, ATerm v_44, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm p_15 (ATerm q_44, ATerm r_44, ATerm t);
static ATerm q_15 (ATerm x_44, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm q_155 (ATerm), ATerm t);
static ATerm x_15 (ATerm n_44, ATerm o_44, ATerm t);
static ATerm s_15 (ATerm f_41, ATerm g_41, ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_175 (ATerm), ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
ATerm parse_options_3_0 (ATerm m_175 (ATerm), ATerm n_175 (ATerm), ATerm o_175 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm p_173 (ATerm), ATerm q_173 (ATerm), ATerm r_173 (ATerm), ATerm s_173 (ATerm), ATerm t_173 (ATerm), ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm d_17 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_e_17;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_f_17;
  return(t);
}
ATerm AddSDef_0_0 (ATerm t)
{
  ATerm i_0 = NULL,p_0 = NULL,r_0 = NULL,s_0 = NULL,t_0 = NULL;
  i_0 = t;
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDefT_4))
          {
            p_0 = ATgetArgument(t, 0);
            {
              ATerm i_17 = ATgetArgument(t, 1);
            }
            {
              ATerm j_17 = ATgetArgument(t, 2);
            }
            {
              ATerm k_17 = ATgetArgument(t, 3);
            }
          }
        else
          _fail(t);
        LocalPopChoice(h_17);
        {
          ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL,a_1 = NULL;
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty);
          z_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_17, i_0);
          a_1 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_l_17, i_0));
          t = u_13(u_0, z_0, a_1, t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty);
          x_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_17, i_0);
          y_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_m_17, i_0));
          t = u_13(v_0, x_0, y_0, t);
          t = i_0;
        }
      }
    else
      {
        t = g_17;
        if(match_cons(t, sym_ExtSDefInl_4))
          {
            p_0 = ATgetArgument(t, 0);
            r_0 = ATgetArgument(t, 1);
            s_0 = ATgetArgument(t, 2);
            t_0 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, p_0, r_0, s_0, t_0);
        t = AddSDef_0_0(t);
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, p_0, r_0, s_0, t_0);
      }
  }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = term_o_17;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm e_1 = NULL,t_1 = NULL;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15(e_1, t_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_o_17;
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  if(match_cons(t, sym__2))
    {
      z_1 = ATgetArgument(t, 0);
      a_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15(z_1, a_2, t);
  return(t);
}
ATerm term_size_0_0 (ATerm t)
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 = NULL,c_0 = NULL;
      c_0 = t;
      t = SSL_explode_term(c_0);
      if(match_cons(t, sym__2))
        {
          ATerm r_17 = ATgetArgument(t, 0);
          a_0 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_0;
      t = foldr_3_0(w_0, b_1, term_size_0_0, t);
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        static ATerm m_1 (ATerm t);
        static ATerm m_1 (ATerm t)
        {
          ATerm u_1 = NULL,v_1 = NULL;
          v_1 = t;
          t = SSL_explode_term(v_1);
          if(match_cons(t, sym__2))
            {
              ATerm s_17 = ATgetArgument(t, 0);
              u_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_1;
          t = foldr_3_0(c_1, f_1, m_1, t);
          return(t);
        }
        t = m_1(t);
      }
    }
  return(t);
}
ATerm Seq_2_0 (ATerm f_122 (ATerm), ATerm g_122 (ATerm), ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,q_0 = NULL;
  s_1 = t;
  if(match_cons(t, sym_Seq_2))
    {
      o_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_1);
  n_1 = t;
  t = o_1;
  t = f_122(t);
  q_1 = t;
  t = p_1;
  t = g_122(t);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, q_1, r_1);
  q_0 = t;
  t = SSLsetAnnotations(q_0, n_1);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,n_2 = NULL;
  v_8 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_8);
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, u_8);
  n_2 = t;
  t = SSLsetAnnotations(n_2, t_8);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  static ATerm b_13 (ATerm t);
  static ATerm b_13 (ATerm t)
  {
    ATerm v_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
    y_12 = t;
    if(match_cons(t, sym_Id_0))
      {
        t = y_12;
      }
    else
      {
        if(match_cons(t, sym_Fail_0))
          {
            t = y_12;
          }
        else
          {
            if(match_cons(t, sym_CallT_3))
              {
                z_12 = ATgetArgument(t, 0);
                a_13 = ATgetArgument(t, 1);
                v_12 = ATgetArgument(t, 2);
                {
                  ATerm f_2 = NULL,j_2 = NULL,m_2 = NULL,o_2 = NULL,i_1 = NULL,d_1 = NULL;
                  t = SSLgetAnnotations(y_12);
                  f_2 = t;
                  t = z_12;
                  if(match_cons(t, sym_SVar_1))
                    {
                      m_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_12);
                  j_2 = t;
                  t = (ATerm) ATmakeAppl(sym_SVar_1, m_2);
                  d_1 = t;
                  t = SSLsetAnnotations(d_1, j_2);
                  o_2 = t;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, o_2, a_13, v_12);
                  i_1 = t;
                  t = SSLsetAnnotations(i_1, f_2);
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    z_12 = ATgetArgument(t, 0);
                    a_13 = ATgetArgument(t, 1);
                    v_12 = ATgetArgument(t, 2);
                    {
                      ATerm k_4 = NULL,q_4 = NULL,s_4 = NULL,t_4 = NULL,k_1 = NULL,j_1 = NULL;
                      t = SSLgetAnnotations(y_12);
                      k_4 = t;
                      t = z_12;
                      if(match_cons(t, sym_SVar_1))
                        {
                          s_4 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(z_12);
                      q_4 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, s_4);
                      j_1 = t;
                      t = SSLsetAnnotations(j_1, q_4);
                      t_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, t_4, a_13, v_12);
                      k_1 = t;
                      t = SSLsetAnnotations(k_1, k_4);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Build_1))
                      {
                        z_12 = ATgetArgument(t, 0);
                        {
                          ATerm f_5 = NULL,l_1 = NULL;
                          t = SSLgetAnnotations(y_12);
                          f_5 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, z_12);
                          l_1 = t;
                          t = SSLsetAnnotations(l_1, f_5);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            z_12 = ATgetArgument(t, 0);
                            {
                              ATerm h_6 = NULL,w_1 = NULL;
                              t = SSLgetAnnotations(y_12);
                              h_6 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, z_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, h_6);
                            }
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                z_12 = ATgetArgument(t, 0);
                                a_13 = ATgetArgument(t, 1);
                                {
                                  ATerm t_17 = t;
                                  int v_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm h_7 = NULL,r_7 = NULL,a_8 = NULL,c_8 = NULL,y_1 = NULL,x_1 = NULL;
                                      t = SSLgetAnnotations(y_12);
                                      h_7 = t;
                                      t = z_12;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          a_8 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(z_12);
                                      r_7 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, a_8);
                                      x_1 = t;
                                      t = SSLsetAnnotations(x_1, r_7);
                                      c_8 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, c_8, a_13);
                                      y_1 = t;
                                      t = SSLsetAnnotations(y_1, h_7);
                                      LocalPopChoice(v_17);
                                    }
                                  else
                                    {
                                      t = t_17;
                                      {
                                        ATerm k_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,q_2 = NULL,p_2 = NULL;
                                        t = SSLgetAnnotations(y_12);
                                        k_8 = t;
                                        t = z_12;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            o_8 = ATgetArgument(t, 0);
                                            p_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(z_12);
                                        n_8 = t;
                                        t = p_8;
                                        t = Seq_2_0(g_1, _id, t);
                                        q_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, o_8, q_8);
                                        p_2 = t;
                                        t = SSLsetAnnotations(p_2, n_8);
                                        r_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_8, a_13);
                                        q_2 = t;
                                        t = SSLsetAnnotations(q_2, k_8);
                                      }
                                    }
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    z_12 = ATgetArgument(t, 0);
                                    a_13 = ATgetArgument(t, 1);
                                    {
                                      ATerm w_17 = t;
                                      int x_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm d_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,t_2 = NULL,r_2 = NULL;
                                          t = SSLgetAnnotations(y_12);
                                          d_9 = t;
                                          t = a_13;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              h_9 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(a_13);
                                          g_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, h_9);
                                          r_2 = t;
                                          t = SSLsetAnnotations(r_2, g_9);
                                          i_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, i_9);
                                          t_2 = t;
                                          t = SSLsetAnnotations(t_2, d_9);
                                          LocalPopChoice(x_17);
                                        }
                                      else
                                        {
                                          t = w_17;
                                          {
                                            ATerm q_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,a_10 = NULL,x_2 = NULL,w_2 = NULL,u_2 = NULL;
                                            t = SSLgetAnnotations(y_12);
                                            q_9 = t;
                                            t = a_13;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                u_9 = ATgetArgument(t, 0);
                                                v_9 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(a_13);
                                            t_9 = t;
                                            t = u_9;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                y_9 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(u_9);
                                            x_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, y_9);
                                            u_2 = t;
                                            t = SSLsetAnnotations(u_2, x_9);
                                            a_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_10, v_9);
                                            w_2 = t;
                                            t = SSLsetAnnotations(w_2, t_9);
                                            w_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, w_9);
                                            x_2 = t;
                                            t = SSLsetAnnotations(x_2, q_9);
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Choice_2))
                                      {
                                        z_12 = ATgetArgument(t, 0);
                                        a_13 = ATgetArgument(t, 1);
                                        {
                                          ATerm p_10 = NULL,v_10 = NULL,w_10 = NULL,y_2 = NULL;
                                          t = SSLgetAnnotations(y_12);
                                          p_10 = t;
                                          t = z_12;
                                          t = b_13(t);
                                          v_10 = t;
                                          t = a_13;
                                          t = b_13(t);
                                          w_10 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, v_10, w_10);
                                          y_2 = t;
                                          t = SSLsetAnnotations(y_2, p_10);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            z_12 = ATgetArgument(t, 0);
                                            a_13 = ATgetArgument(t, 1);
                                            {
                                              ATerm k_11 = NULL,o_11 = NULL,p_11 = NULL,z_2 = NULL;
                                              t = SSLgetAnnotations(y_12);
                                              k_11 = t;
                                              t = z_12;
                                              t = b_13(t);
                                              o_11 = t;
                                              t = a_13;
                                              t = b_13(t);
                                              p_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, o_11, p_11);
                                              z_2 = t;
                                              t = SSLsetAnnotations(z_2, k_11);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                z_12 = ATgetArgument(t, 0);
                                                a_13 = ATgetArgument(t, 1);
                                                v_12 = ATgetArgument(t, 2);
                                                {
                                                  ATerm y_11 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,a_3 = NULL;
                                                  t = SSLgetAnnotations(y_12);
                                                  y_11 = t;
                                                  t = z_12;
                                                  t = b_13(t);
                                                  e_12 = t;
                                                  t = a_13;
                                                  t = b_13(t);
                                                  f_12 = t;
                                                  t = v_12;
                                                  t = b_13(t);
                                                  g_12 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, e_12, f_12, g_12);
                                                  a_3 = t;
                                                  t = SSLsetAnnotations(a_3, y_11);
                                                }
                                              }
                                            else
                                              {
                                                ATerm q_12 = NULL,b_3 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    z_12 = ATgetArgument(t, 0);
                                                    a_13 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(y_12);
                                                q_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, z_12, a_13);
                                                b_3 = t;
                                                t = SSLsetAnnotations(b_3, q_12);
                                              }
                                          }
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
  t = b_13(t);
  k_2 = t;
  t = term_size_0_0(t);
  l_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_2, term_y_17);
  t = leq_0_0(t);
  t = k_2;
  return(t);
}
ATerm inlineable_0_0 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,n_15 = NULL,o_15 = NULL,r_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      d_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
      o_15 = ATgetArgument(t, 2);
      r_15 = ATgetArgument(t, 3);
      {
        ATerm b_16 = NULL,c_16 = NULL,k_16 = NULL,c_4 = NULL;
        t = SSLgetAnnotations(c_15);
        c_16 = t;
        t = d_15;
        {
          ATerm z_17 = t;
          if((PushChoice() == 0))
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_17;
            }
        }
        b_16 = t;
        t = r_15;
        {
          ATerm a_18 = t;
          if((PushChoice() == 0))
            {
              static ATerm h_1 (ATerm t);
              static ATerm h_1 (ATerm t)
              {
                if(match_cons(t, sym_CallT_3))
                  {
                    ATerm b_18 = ATgetArgument(t, 0);
                    if(match_cons(b_18, sym_SVar_1))
                      {
                        if((b_16 != ATgetArgument(b_18, 0)))
                          {
                            _fail(ATgetArgument(b_18, 0));
                          }
                      }
                    else
                      _fail(t);
                    {
                      ATerm c_18 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm d_18 = ATgetArgument(t, 2);
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1_0(h_1, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_18;
            }
        }
        t = r_15;
        t = body_to_inline_0_0(t);
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, b_16, n_15, o_15, k_16);
        c_4 = t;
        t = SSLsetAnnotations(c_4, c_16);
      }
    }
  else
    {
      ATerm w_16 = NULL,x_16 = NULL,c_17 = NULL,d_4 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          d_15 = ATgetArgument(t, 0);
          n_15 = ATgetArgument(t, 1);
          o_15 = ATgetArgument(t, 2);
          r_15 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_15);
      x_16 = t;
      t = d_15;
      {
        ATerm e_18 = t;
        if((PushChoice() == 0))
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("main_0_0", 0, ATtrue)))
              _fail(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_18;
          }
      }
      w_16 = t;
      t = r_15;
      {
        ATerm f_18 = t;
        if((PushChoice() == 0))
          {
            static ATerm b_2 (ATerm t);
            static ATerm b_2 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm g_18 = ATgetArgument(t, 0);
                  if(match_cons(g_18, sym_SVar_1))
                    {
                      if((w_16 != ATgetArgument(g_18, 0)))
                        {
                          _fail(ATgetArgument(g_18, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm k_18 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm n_18 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(b_2, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_18;
          }
      }
      t = r_15;
      t = body_to_inline_0_0(t);
      c_17 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, w_16, n_15, o_15, c_17);
      d_4 = t;
      t = SSLsetAnnotations(d_4, x_16);
    }
  return(t);
}
static ATerm i_7 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm d_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_39, y_39);
  t = s_15(x_39, y_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_16 = ATgetFirst((ATermList) t);
      {
        ATerm o_18 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_16;
  return(t);
}
ATerm bottomup_1_0 (ATerm z_141 (ATerm), ATerm t)
{
  static ATerm c_2 (ATerm t);
  static ATerm c_2 (ATerm t)
  {
    t = bottomup_1_0(z_141, t);
    return(t);
  }
  t = SRTS_all(c_2, t);
  t = z_141(t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_18 = ATgetArgument(t, 0);
      if(((ATgetType(p_18) != AT_LIST) || !(ATisEmpty(p_18))))
        _fail(t);
      {
        ATerm r_18 = ATgetArgument(t, 1);
        if(((ATgetType(r_18) != AT_LIST) || !(ATisEmpty(r_18))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
        {
          y_30 = ATgetFirst((ATermList) s_18);
          z_30 = (ATerm) ATgetNext((ATermList) s_18);
        }
      else
        _fail(t);
      {
        ATerm v_18 = ATgetArgument(t, 1);
        if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
          {
            a_31 = ATgetFirst((ATermList) v_18);
            b_31 = (ATerm) ATgetNext((ATermList) v_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_30, a_31), (ATerm) ATmakeAppl(sym__2, z_30, b_31));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  if(match_cons(t, sym__2))
    {
      d_31 = ATgetArgument(t, 0);
      e_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_31), d_31);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm j_31 = NULL,l_31 = NULL;
  if(match_cons(t, sym__2))
    {
      j_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_31), (ATerm) ATmakeAppl(sym_Match_1, l_31));
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_19 = ATgetArgument(t, 0);
      if(((ATgetType(c_19) != AT_LIST) || !(ATisEmpty(c_19))))
        _fail(t);
      {
        ATerm e_19 = ATgetArgument(t, 1);
        if(((ATgetType(e_19) != AT_LIST) || !(ATisEmpty(e_19))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,c_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if(((ATgetType(j_19) == AT_LIST) && !(ATisEmpty(j_19))))
        {
          v_40 = ATgetFirst((ATermList) j_19);
          w_40 = (ATerm) ATgetNext((ATermList) j_19);
        }
      else
        _fail(t);
      {
        ATerm k_19 = ATgetArgument(t, 1);
        if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
          {
            x_40 = ATgetFirst((ATermList) k_19);
            c_41 = (ATerm) ATgetNext((ATermList) k_19);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_40, x_40), (ATerm) ATmakeAppl(sym__2, w_40, c_41));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm d_41 = NULL,j_41 = NULL;
  if(match_cons(t, sym__2))
    {
      d_41 = ATgetArgument(t, 0);
      j_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_41), d_41);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL;
  if(match_cons(t, sym__2))
    {
      o_41 = ATgetArgument(t, 0);
      p_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_41), (ATerm) ATmakeAppl(sym_Match_1, p_41));
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm n_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(m_19);
      {
        ATerm p_57 = NULL,v_57 = NULL;
        p_57 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm o_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        v_57 = t;
        t = SSLgetAnnotations(p_57);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_19 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) p_19) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm q_19 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(q_19) != AT_LIST) || !(ATisEmpty(q_19))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = v_57;
      }
    }
  else
    {
      t = l_19;
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm t_19 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_19) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm u_19 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_19);
            _fail(t);
          }
        else
          {
            t = r_19;
          }
      }
    }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm simplify_0_0 (ATerm t)
{
  static ATerm d_2 (ATerm t);
  static ATerm d_2 (ATerm t)
  {
    ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,v_22 = NULL,w_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
    b_23 = t;
    if(match_cons(t, sym_Test_1))
      {
        a_23 = ATgetArgument(t, 0);
        t = a_23;
        if(match_cons(t, sym_Id_0))
          {
            ATerm v_19 = t;
            int w_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_y_19;
                t = d_2(t);
                LocalPopChoice(w_19);
              }
            else
              {
                t = v_19;
                {
                  ATerm z_19 = t;
                  int a_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_23 = NULL,g_23 = NULL,i_23 = NULL,j_23 = NULL,q_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL;
                      t = b_23;
                      t = new_0_0(t);
                      f_23 = t;
                      t = bottomup_1_0(d_2, t);
                      g_24 = t;
                      t = (ATerm) ATempty;
                      t = d_2(t);
                      h_24 = t;
                      t = (ATerm) ATinsert(CheckATermList(h_24), g_24);
                      t = d_2(t);
                      g_23 = t;
                      t = f_23;
                      t = bottomup_1_0(d_2, t);
                      f_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, f_24);
                      t = d_2(t);
                      e_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, e_24);
                      t = d_2(t);
                      j_23 = t;
                      t = a_23;
                      t = bottomup_1_0(d_2, t);
                      a_24 = t;
                      t = f_23;
                      t = bottomup_1_0(d_2, t);
                      d_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, d_24);
                      t = d_2(t);
                      c_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, c_24);
                      t = d_2(t);
                      b_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, a_24, b_24);
                      t = d_2(t);
                      q_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_23, q_23);
                      t = d_2(t);
                      i_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, g_23, i_23);
                      t = d_2(t);
                      LocalPopChoice(a_20);
                    }
                  else
                    {
                      t = z_19;
                      t = b_23;
                    }
                }
              }
          }
        else
          {
            if(match_cons(t, sym_Fail_0))
              {
                ATerm d_20 = t;
                int k_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_20;
                    t = d_2(t);
                    LocalPopChoice(k_20);
                  }
                else
                  {
                    t = d_20;
                    {
                      ATerm p_20 = t;
                      int q_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,v_24 = NULL,w_24 = NULL,y_24 = NULL,z_24 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
                          t = b_23;
                          t = new_0_0(t);
                          n_24 = t;
                          t = bottomup_1_0(d_2, t);
                          f_25 = t;
                          t = (ATerm) ATempty;
                          t = d_2(t);
                          g_25 = t;
                          t = (ATerm) ATinsert(CheckATermList(g_25), f_25);
                          t = d_2(t);
                          o_24 = t;
                          t = n_24;
                          t = bottomup_1_0(d_2, t);
                          e_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, e_25);
                          t = d_2(t);
                          z_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, z_24);
                          t = d_2(t);
                          r_24 = t;
                          t = a_23;
                          t = bottomup_1_0(d_2, t);
                          t_24 = t;
                          t = n_24;
                          t = bottomup_1_0(d_2, t);
                          y_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, y_24);
                          t = d_2(t);
                          w_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, w_24);
                          t = d_2(t);
                          v_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_24, v_24);
                          t = d_2(t);
                          s_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_24, s_24);
                          t = d_2(t);
                          p_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, o_24, p_24);
                          t = d_2(t);
                          LocalPopChoice(q_20);
                        }
                      else
                        {
                          t = p_20;
                          t = b_23;
                        }
                    }
                  }
              }
            else
              {
                if(match_cons(t, sym_Test_1))
                  {
                    w_22 = ATgetArgument(t, 0);
                    {
                      ATerm r_20 = t;
                      int s_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATmakeAppl(sym_Test_1, w_22);
                          t = d_2(t);
                          LocalPopChoice(s_20);
                        }
                      else
                        {
                          t = r_20;
                          {
                            ATerm t_20 = t;
                            int u_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,g_26 = NULL;
                                t = b_23;
                                t = new_0_0(t);
                                k_25 = t;
                                t = bottomup_1_0(d_2, t);
                                y_25 = t;
                                t = (ATerm) ATempty;
                                t = d_2(t);
                                g_26 = t;
                                t = (ATerm) ATinsert(CheckATermList(g_26), y_25);
                                t = d_2(t);
                                l_25 = t;
                                t = k_25;
                                t = bottomup_1_0(d_2, t);
                                x_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, x_25);
                                t = d_2(t);
                                w_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, w_25);
                                t = d_2(t);
                                p_25 = t;
                                t = a_23;
                                t = bottomup_1_0(d_2, t);
                                r_25 = t;
                                t = k_25;
                                t = bottomup_1_0(d_2, t);
                                u_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, u_25);
                                t = d_2(t);
                                t_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, t_25);
                                t = d_2(t);
                                s_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_25, s_25);
                                t = d_2(t);
                                q_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, p_25, q_25);
                                t = d_2(t);
                                m_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, l_25, m_25);
                                t = d_2(t);
                                LocalPopChoice(u_20);
                              }
                            else
                              {
                                t = t_20;
                                t = b_23;
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    ATerm v_20 = t;
                    int x_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_26 = NULL,v_26 = NULL,x_26 = NULL,a_27 = NULL,c_27 = NULL,j_27 = NULL,o_27 = NULL,z_27 = NULL,a_28 = NULL,c_28 = NULL,d_28 = NULL,f_28 = NULL,g_28 = NULL;
                        t = b_23;
                        t = new_0_0(t);
                        t_26 = t;
                        t = bottomup_1_0(d_2, t);
                        f_28 = t;
                        t = (ATerm) ATempty;
                        t = d_2(t);
                        g_28 = t;
                        t = (ATerm) ATinsert(CheckATermList(g_28), f_28);
                        t = d_2(t);
                        v_26 = t;
                        t = t_26;
                        t = bottomup_1_0(d_2, t);
                        d_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, d_28);
                        t = d_2(t);
                        c_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, c_28);
                        t = d_2(t);
                        a_27 = t;
                        t = a_23;
                        t = bottomup_1_0(d_2, t);
                        j_27 = t;
                        t = t_26;
                        t = bottomup_1_0(d_2, t);
                        a_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, a_28);
                        t = d_2(t);
                        z_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, z_27);
                        t = d_2(t);
                        o_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_27, o_27);
                        t = d_2(t);
                        c_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_27, c_27);
                        t = d_2(t);
                        x_26 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, v_26, x_26);
                        t = d_2(t);
                        LocalPopChoice(x_20);
                      }
                    else
                      {
                        t = v_20;
                        t = b_23;
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_Not_1))
          {
            a_23 = ATgetArgument(t, 0);
            t = a_23;
            if(match_cons(t, sym_Id_0))
              {
                ATerm y_20 = t;
                int z_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_m_20;
                    t = d_2(t);
                    LocalPopChoice(z_20);
                  }
                else
                  {
                    t = y_20;
                    t = b_23;
                  }
              }
            else
              {
                if(match_cons(t, sym_Fail_0))
                  {
                    ATerm a_21 = t;
                    int b_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_y_19;
                        t = d_2(t);
                        LocalPopChoice(b_21);
                      }
                    else
                      {
                        t = a_21;
                        t = b_23;
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Not_1))
                      {
                        w_22 = ATgetArgument(t, 0);
                        {
                          ATerm c_21 = t;
                          int e_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, w_22);
                              t = d_2(t);
                              LocalPopChoice(e_21);
                            }
                          else
                            {
                              t = c_21;
                              t = b_23;
                            }
                        }
                      }
                    else
                      {
                        t = b_23;
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_Seq_2))
              {
                a_23 = ATgetArgument(t, 0);
                z_22 = ATgetArgument(t, 1);
                t = z_22;
                if(match_cons(t, sym_Id_0))
                  {
                    t = a_23;
                    if(match_cons(t, sym_Id_0))
                      {
                        t = z_22;
                      }
                    else
                      {
                        if(match_cons(t, sym_Fail_0))
                          {
                            t = a_23;
                          }
                        else
                          {
                            if(match_cons(t, sym_Seq_2))
                              {
                                w_22 = ATgetArgument(t, 0);
                                y_22 = ATgetArgument(t, 1);
                                t = a_23;
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    w_22 = ATgetArgument(t, 0);
                                    y_22 = ATgetArgument(t, 1);
                                    t = a_23;
                                  }
                                else
                                  {
                                    t = a_23;
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        s_22 = ATgetArgument(t, 0);
                        v_22 = ATgetArgument(t, 1);
                        t = s_22;
                        if(match_cons(t, sym_Match_1))
                          {
                            r_22 = ATgetArgument(t, 0);
                            t = r_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                p_22 = ATgetArgument(t, 0);
                                i_22 = ATgetArgument(t, 1);
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm f_21 = t;
                                        int g_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_20;
                                            t = d_2(t);
                                            LocalPopChoice(g_21);
                                          }
                                        else
                                          {
                                            t = f_21;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            y_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm h_21 = t;
                                              int i_21 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm p_30 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                  t = d_2(t);
                                                  p_30 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, p_30);
                                                  t = d_2(t);
                                                  LocalPopChoice(i_21);
                                                }
                                              else
                                                {
                                                  t = h_21;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                t = w_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    q_22 = ATgetArgument(t, 0);
                                                    j_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm j_21 = t;
                                                      int k_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_22, p_22);
                                                          {
                                                            ATerm l_21 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm n_17 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    n_17 = ATgetArgument(t, 0);
                                                                    if((n_17 != ATgetArgument(t, 1)))
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
                                                                t = l_21;
                                                              }
                                                          }
                                                          t = term_m_20;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(k_21);
                                                        }
                                                      else
                                                        {
                                                          t = j_21;
                                                          {
                                                            ATerm m_21 = t;
                                                            int n_21 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_30 = NULL;
                                                                t = p_22;
                                                                if((q_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, j_22, i_22);
                                                                t = genzip_4_0(e_2, g_2, h_2, i_2, t);
                                                                x_30 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_30), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_22, j_22)), v_22));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(n_21);
                                                              }
                                                            else
                                                              {
                                                                t = m_21;
                                                                {
                                                                  ATerm o_21 = t;
                                                                  int p_21 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      ATerm q_31 = NULL;
                                                                      t = r_22;
                                                                      if((w_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                                      t = d_2(t);
                                                                      q_31 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_31, v_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(p_21);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = o_21;
                                                                      t = b_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm q_21 = t;
                                                    int r_21 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm a_32 = NULL;
                                                        t = r_22;
                                                        if((w_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                        t = d_2(t);
                                                        a_32 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, a_32, v_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(r_21);
                                                      }
                                                    else
                                                      {
                                                        t = q_21;
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm s_21 = t;
                                                      int t_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_32 = NULL;
                                                          t = r_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                          t = d_2(t);
                                                          e_32 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_32, v_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(t_21);
                                                        }
                                                      else
                                                        {
                                                          t = s_21;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_21 = t;
                                                          int v_21 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              l_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, l_32);
                                                              t = d_2(t);
                                                              LocalPopChoice(v_21);
                                                            }
                                                          else
                                                            {
                                                              t = u_21;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm b_22 = t;
                                        int u_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_20;
                                            t = d_2(t);
                                            LocalPopChoice(u_22);
                                          }
                                        else
                                          {
                                            t = b_22;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            y_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm c_23 = t;
                                              int e_23 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm h_33 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                  t = d_2(t);
                                                  h_33 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, h_33);
                                                  t = d_2(t);
                                                  LocalPopChoice(e_23);
                                                }
                                              else
                                                {
                                                  t = c_23;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm k_23 = t;
                                                  int l_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_33 = NULL;
                                                      t = r_22;
                                                      if((w_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                      t = d_2(t);
                                                      l_33 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_33, v_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(l_23);
                                                    }
                                                  else
                                                    {
                                                      t = k_23;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm m_23 = t;
                                                      int n_23 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm r_33 = NULL;
                                                          t = r_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                          t = d_2(t);
                                                          r_33 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_33, v_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(n_23);
                                                        }
                                                      else
                                                        {
                                                          t = m_23;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_23 = t;
                                                          int p_23 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm x_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              x_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, x_33);
                                                              t = d_2(t);
                                                              LocalPopChoice(p_23);
                                                            }
                                                          else
                                                            {
                                                              t = o_23;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                r_22 = ATgetArgument(t, 0);
                                t = r_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    p_22 = ATgetArgument(t, 0);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm r_23 = t;
                                            int s_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(s_23);
                                              }
                                            else
                                              {
                                                t = r_23;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm t_23 = t;
                                                  int u_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm u_34 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      u_34 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, u_34);
                                                      t = d_2(t);
                                                      LocalPopChoice(u_23);
                                                    }
                                                  else
                                                    {
                                                      t = t_23;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm v_23 = t;
                                                int w_23 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm x_23 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(w_23);
                                                    {
                                                      ATerm z_23 = t;
                                                      int i_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm a_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_22);
                                                          t = d_2(t);
                                                          a_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_35, v_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(i_24);
                                                        }
                                                      else
                                                        {
                                                          t = z_23;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = v_23;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm j_24 = t;
                                                              int k_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm e_35 = NULL,g_35 = NULL;
                                                                  t = p_22;
                                                                  if((q_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_22);
                                                                  t = d_2(t);
                                                                  g_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, g_35);
                                                                  t = d_2(t);
                                                                  e_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_35, v_22);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(k_24);
                                                                }
                                                              else
                                                                {
                                                                  t = j_24;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            y_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm l_24 = t;
                                                              int m_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                  t = d_2(t);
                                                                  i_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, i_36);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(m_24);
                                                                }
                                                              else
                                                                {
                                                                  t = l_24;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm x_24 = t;
                                            int h_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(h_25);
                                              }
                                            else
                                              {
                                                t = x_24;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm i_25 = t;
                                                  int j_25 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm a_37 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      a_37 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, a_37);
                                                      t = d_2(t);
                                                      LocalPopChoice(j_25);
                                                    }
                                                  else
                                                    {
                                                      t = i_25;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm v_25 = t;
                                                int a_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm d_26 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(a_26);
                                                    {
                                                      ATerm e_26 = t;
                                                      int f_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm g_37 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_22);
                                                          t = d_2(t);
                                                          g_37 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, g_37, v_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(f_26);
                                                        }
                                                      else
                                                        {
                                                          t = e_26;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = v_25;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm h_26 = t;
                                                          int i_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              o_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, o_37);
                                                              t = d_2(t);
                                                              LocalPopChoice(i_26);
                                                            }
                                                          else
                                                            {
                                                              t = h_26;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    r_22 = ATgetArgument(t, 0);
                                    k_22 = ATgetArgument(t, 1);
                                    l_22 = ATgetArgument(t, 2);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm j_26 = t;
                                            int k_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(k_26);
                                              }
                                            else
                                              {
                                                t = j_26;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_26 = t;
                                                  int m_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_37 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      x_37 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, x_37);
                                                      t = d_2(t);
                                                      LocalPopChoice(m_26);
                                                    }
                                                  else
                                                    {
                                                      t = l_26;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm n_26 = t;
                                                int o_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm p_26 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_26);
                                                    {
                                                      ATerm q_26 = t;
                                                      int s_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_38 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, r_22, k_22, l_22);
                                                          t = d_2(t);
                                                          p_38 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_38, v_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_26);
                                                        }
                                                      else
                                                        {
                                                          t = q_26;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = n_26;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_26 = t;
                                                          int w_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              u_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, u_38);
                                                              t = d_2(t);
                                                              LocalPopChoice(w_26);
                                                            }
                                                          else
                                                            {
                                                              t = u_26;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm y_26 = t;
                                            int d_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(d_27);
                                              }
                                            else
                                              {
                                                t = y_26;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm l_27 = t;
                                                  int n_27 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm d_39 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      d_39 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, d_39);
                                                      t = d_2(t);
                                                      LocalPopChoice(n_27);
                                                    }
                                                  else
                                                    {
                                                      t = l_27;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Scope_2))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    y_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm r_27 = t;
                                                      int s_27 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_39 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                          t = d_2(t);
                                                          t_39 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, t_39);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_27);
                                                        }
                                                      else
                                                        {
                                                          t = r_27;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = b_23;
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            s_22 = ATgetArgument(t, 0);
                            t = s_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                r_22 = ATgetArgument(t, 0);
                                k_22 = ATgetArgument(t, 1);
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm t_27 = t;
                                        int u_27 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_20;
                                            t = d_2(t);
                                            LocalPopChoice(u_27);
                                          }
                                        else
                                          {
                                            t = t_27;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            y_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm x_27 = t;
                                              int y_27 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm n_40 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                  t = d_2(t);
                                                  n_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, n_40);
                                                  t = d_2(t);
                                                  LocalPopChoice(y_27);
                                                }
                                              else
                                                {
                                                  t = x_27;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Build_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                t = w_22;
                                                if(match_cons(t, sym_Op_2))
                                                  {
                                                    q_22 = ATgetArgument(t, 0);
                                                    j_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm b_28 = t;
                                                      int e_28 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, q_22, r_22);
                                                          {
                                                            ATerm h_28 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_17 = NULL;
                                                                if(match_cons(t, sym__2))
                                                                  {
                                                                    u_17 = ATgetArgument(t, 0);
                                                                    if((u_17 != ATgetArgument(t, 1)))
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
                                                                t = h_28;
                                                              }
                                                          }
                                                          t = term_m_20;
                                                          t = bottomup_1_0(d_2, t);
                                                          LocalPopChoice(e_28);
                                                        }
                                                      else
                                                        {
                                                          t = b_28;
                                                          {
                                                            ATerm i_28 = t;
                                                            int j_28 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_40 = NULL;
                                                                t = r_22;
                                                                if((q_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, j_22, k_22);
                                                                t = genzip_4_0(s_2, v_2, c_3, d_3, t);
                                                                s_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_40), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_22, j_22)));
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(j_28);
                                                              }
                                                            else
                                                              {
                                                                t = i_28;
                                                                {
                                                                  ATerm k_28 = t;
                                                                  int l_28 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = s_22;
                                                                      if((w_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                                      t = d_2(t);
                                                                      LocalPopChoice(l_28);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = k_28;
                                                                      t = b_23;
                                                                    }
                                                                }
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm m_28 = t;
                                                    int n_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = s_22;
                                                        if((w_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(n_28);
                                                      }
                                                    else
                                                      {
                                                        t = m_28;
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Match_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm p_28 = t;
                                                      int q_28 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(q_28);
                                                        }
                                                      else
                                                        {
                                                          t = p_28;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm r_28 = t;
                                                          int u_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_42 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              i_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, i_42);
                                                              t = d_2(t);
                                                              LocalPopChoice(u_28);
                                                            }
                                                          else
                                                            {
                                                              t = r_28;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    t = z_22;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Fail_0))
                                      {
                                        ATerm w_28 = t;
                                        int x_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_20;
                                            t = d_2(t);
                                            LocalPopChoice(x_28);
                                          }
                                        else
                                          {
                                            t = w_28;
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Seq_2))
                                          {
                                            w_22 = ATgetArgument(t, 0);
                                            y_22 = ATgetArgument(t, 1);
                                            {
                                              ATerm y_28 = t;
                                              int z_28 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm f_43 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                  t = d_2(t);
                                                  f_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, f_43);
                                                  t = d_2(t);
                                                  LocalPopChoice(z_28);
                                                }
                                              else
                                                {
                                                  t = y_28;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                {
                                                  ATerm a_29 = t;
                                                  int b_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = s_22;
                                                      if((w_22 != t))
                                                        {
                                                          _fail(t);
                                                        }
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                      t = d_2(t);
                                                      LocalPopChoice(b_29);
                                                    }
                                                  else
                                                    {
                                                      t = a_29;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Build_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm c_29 = t;
                                                      int d_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = s_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(d_29);
                                                        }
                                                      else
                                                        {
                                                          t = c_29;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm e_29 = t;
                                                          int f_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_43 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              q_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, q_43);
                                                              t = d_2(t);
                                                              LocalPopChoice(f_29);
                                                            }
                                                          else
                                                            {
                                                              t = e_29;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Build_1))
                              {
                                s_22 = ATgetArgument(t, 0);
                                t = s_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    r_22 = ATgetArgument(t, 0);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_29 = t;
                                            int i_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(i_29);
                                              }
                                            else
                                              {
                                                t = h_29;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm k_29 = t;
                                                  int l_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm f_44 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      f_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, f_44);
                                                      t = d_2(t);
                                                      LocalPopChoice(l_29);
                                                    }
                                                  else
                                                    {
                                                      t = k_29;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_29 = t;
                                                int n_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_29 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_29);
                                                    {
                                                      ATerm q_29 = t;
                                                      int r_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(r_29);
                                                        }
                                                      else
                                                        {
                                                          t = q_29;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_29;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            q_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm s_29 = t;
                                                              int t_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm a_45 = NULL;
                                                                  t = r_22;
                                                                  if((q_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, q_22);
                                                                  t = d_2(t);
                                                                  a_45 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, a_45);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(t_29);
                                                                }
                                                              else
                                                                {
                                                                  t = s_29;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            y_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm u_29 = t;
                                                              int v_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm g_45 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                  t = d_2(t);
                                                                  g_45 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, g_45);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(v_29);
                                                                }
                                                              else
                                                                {
                                                                  t = u_29;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm w_29 = t;
                                            int x_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(x_29);
                                              }
                                            else
                                              {
                                                t = w_29;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm y_29 = t;
                                                  int z_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm e_46 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      e_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, e_46);
                                                      t = d_2(t);
                                                      LocalPopChoice(z_29);
                                                    }
                                                  else
                                                    {
                                                      t = y_29;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm a_30 = t;
                                                int b_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm c_30 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(b_30);
                                                    {
                                                      ATerm d_30 = t;
                                                      int e_30 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(e_30);
                                                        }
                                                      else
                                                        {
                                                          t = d_30;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_30;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_30 = t;
                                                          int g_30 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm q_46 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              q_46 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, q_46);
                                                              t = d_2(t);
                                                              LocalPopChoice(g_30);
                                                            }
                                                          else
                                                            {
                                                              t = f_30;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_PrimT_3))
                                  {
                                    s_22 = ATgetArgument(t, 0);
                                    v_22 = ATgetArgument(t, 1);
                                    m_22 = ATgetArgument(t, 2);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm h_30 = t;
                                            int i_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(i_30);
                                              }
                                            else
                                              {
                                                t = h_30;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                {
                                                  ATerm j_30 = t;
                                                  int l_30 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm c_47 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      c_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, c_47);
                                                      t = d_2(t);
                                                      LocalPopChoice(l_30);
                                                    }
                                                  else
                                                    {
                                                      t = j_30;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_30 = t;
                                                int n_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_30 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_30);
                                                    {
                                                      ATerm q_30 = t;
                                                      int r_30 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_22, v_22, m_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(r_30);
                                                        }
                                                      else
                                                        {
                                                          t = q_30;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_30;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm s_30 = t;
                                                          int t_30 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_47 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              u_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, u_47);
                                                              t = d_2(t);
                                                              LocalPopChoice(t_30);
                                                            }
                                                          else
                                                            {
                                                              t = s_30;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Let_2))
                                      {
                                        s_22 = ATgetArgument(t, 0);
                                        v_22 = ATgetArgument(t, 1);
                                        t = a_23;
                                        if(match_cons(t, sym_Id_0))
                                          {
                                            t = z_22;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm u_30 = t;
                                                int v_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_m_20;
                                                    t = d_2(t);
                                                    LocalPopChoice(v_30);
                                                  }
                                                else
                                                  {
                                                    t = u_30;
                                                    {
                                                      ATerm w_30 = t;
                                                      int c_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_48 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                          t = d_2(t);
                                                          t_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, s_22, t_48);
                                                          t = d_2(t);
                                                          LocalPopChoice(c_31);
                                                        }
                                                      else
                                                        {
                                                          t = w_30;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    y_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm i_31 = t;
                                                      int k_31 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm i_49 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                          t = d_2(t);
                                                          i_49 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, i_49);
                                                          t = d_2(t);
                                                          LocalPopChoice(k_31);
                                                        }
                                                      else
                                                        {
                                                          t = i_31;
                                                          {
                                                            ATerm m_31 = t;
                                                            int n_31 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm q_49 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                                t = d_2(t);
                                                                q_49 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, s_22, q_49);
                                                                t = d_2(t);
                                                                LocalPopChoice(n_31);
                                                              }
                                                            else
                                                              {
                                                                t = m_31;
                                                                t = b_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm o_31 = t;
                                                          int p_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm a_50 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                              t = d_2(t);
                                                              a_50 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, s_22, a_50);
                                                              t = d_2(t);
                                                              LocalPopChoice(p_31);
                                                            }
                                                          else
                                                            {
                                                              t = o_31;
                                                              {
                                                                ATerm r_31 = t;
                                                                int s_31 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm e_50 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                    t = d_2(t);
                                                                    e_50 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, e_50);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(s_31);
                                                                  }
                                                                else
                                                                  {
                                                                    t = r_31;
                                                                    t = b_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        ATerm t_31 = t;
                                                        int u_31 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm q_50 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                            t = d_2(t);
                                                            q_50 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, s_22, q_50);
                                                            t = d_2(t);
                                                            LocalPopChoice(u_31);
                                                          }
                                                        else
                                                          {
                                                            t = t_31;
                                                            t = b_23;
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            s_22 = ATgetArgument(t, 0);
                                            v_22 = ATgetArgument(t, 1);
                                            t = a_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = z_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm v_31 = t;
                                                    int w_31 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_m_20;
                                                        t = d_2(t);
                                                        LocalPopChoice(w_31);
                                                      }
                                                    else
                                                      {
                                                        t = v_31;
                                                        {
                                                          ATerm x_31 = t;
                                                          int y_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm k_51 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                              t = d_2(t);
                                                              k_51 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, k_51);
                                                              t = d_2(t);
                                                              LocalPopChoice(y_31);
                                                            }
                                                          else
                                                            {
                                                              t = x_31;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm z_31 = t;
                                                          int b_32 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm t_51 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              t_51 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, t_51);
                                                              t = d_2(t);
                                                              LocalPopChoice(b_32);
                                                            }
                                                          else
                                                            {
                                                              t = z_31;
                                                              {
                                                                ATerm c_32 = t;
                                                                int d_32 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm a_52 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                                    t = d_2(t);
                                                                    a_52 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, a_52);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(d_32);
                                                                  }
                                                                else
                                                                  {
                                                                    t = c_32;
                                                                    t = b_23;
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            y_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm f_32 = t;
                                                              int h_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm i_52 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                                  t = d_2(t);
                                                                  i_52 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, i_52);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(h_32);
                                                                }
                                                              else
                                                                {
                                                                  t = f_32;
                                                                  {
                                                                    ATerm i_32 = t;
                                                                    int j_32 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm q_52 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                        t = d_2(t);
                                                                        q_52 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, q_52);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(j_32);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = i_32;
                                                                        t = b_23;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm k_32 = t;
                                                            int m_32 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_52 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                                t = d_2(t);
                                                                x_52 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_22, x_52);
                                                                t = d_2(t);
                                                                LocalPopChoice(m_32);
                                                              }
                                                            else
                                                              {
                                                                t = k_32;
                                                                t = b_23;
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t = a_23;
                                            if(match_cons(t, sym_Id_0))
                                              {
                                                t = z_22;
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm n_32 = t;
                                                    int o_32 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_m_20;
                                                        t = d_2(t);
                                                        LocalPopChoice(o_32);
                                                      }
                                                    else
                                                      {
                                                        t = n_32;
                                                        t = b_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Seq_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm p_32 = t;
                                                          int q_32 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm n_53 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              n_53 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, n_53);
                                                              t = d_2(t);
                                                              LocalPopChoice(q_32);
                                                            }
                                                          else
                                                            {
                                                              t = p_32;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_Scope_2))
                                                          {
                                                            w_22 = ATgetArgument(t, 0);
                                                            y_22 = ATgetArgument(t, 1);
                                                            {
                                                              ATerm s_32 = t;
                                                              int u_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm u_53 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                  t = d_2(t);
                                                                  u_53 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, u_53);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(u_32);
                                                                }
                                                              else
                                                                {
                                                                  t = s_32;
                                                                  t = b_23;
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            t = b_23;
                                                          }
                                                      }
                                                  }
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
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    a_23 = ATgetArgument(t, 0);
                    z_22 = ATgetArgument(t, 1);
                    t = z_22;
                    if(match_cons(t, sym_Fail_0))
                      {
                        t = a_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm w_32 = t;
                            int x_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_y_19;
                                t = d_2(t);
                                LocalPopChoice(x_32);
                              }
                            else
                              {
                                t = w_32;
                                t = a_23;
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    w_22 = ATgetArgument(t, 0);
                                    y_22 = ATgetArgument(t, 1);
                                    t = a_23;
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        w_22 = ATgetArgument(t, 0);
                                        t = a_23;
                                      }
                                    else
                                      {
                                        t = a_23;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        t = a_23;
                        if(match_cons(t, sym_Id_0))
                          {
                            ATerm z_32 = t;
                            int a_33 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_y_19;
                                t = d_2(t);
                                LocalPopChoice(a_33);
                              }
                            else
                              {
                                t = z_32;
                                {
                                  ATerm b_33 = t;
                                  int c_33 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = z_22;
                                      if((a_23 != t))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(c_33);
                                    }
                                  else
                                    {
                                      t = b_33;
                                      t = b_23;
                                    }
                                }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = z_22;
                              }
                            else
                              {
                                if(match_cons(t, sym_LChoice_2))
                                  {
                                    w_22 = ATgetArgument(t, 0);
                                    y_22 = ATgetArgument(t, 1);
                                    {
                                      ATerm d_33 = t;
                                      int e_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm k_57 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, y_22, z_22);
                                          t = d_2(t);
                                          k_57 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, w_22, k_57);
                                          t = d_2(t);
                                          LocalPopChoice(e_33);
                                        }
                                      else
                                        {
                                          t = d_33;
                                          {
                                            ATerm f_33 = t;
                                            int g_33 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = z_22;
                                                if((a_23 != t))
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(g_33);
                                              }
                                            else
                                              {
                                                t = f_33;
                                                t = b_23;
                                              }
                                          }
                                        }
                                    }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        w_22 = ATgetArgument(t, 0);
                                        {
                                          ATerm i_33 = t;
                                          int j_33 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = z_22;
                                              if((a_23 != t))
                                                {
                                                  _fail(t);
                                                }
                                              LocalPopChoice(j_33);
                                            }
                                          else
                                            {
                                              t = i_33;
                                              {
                                                ATerm k_33 = t;
                                                int m_33 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = w_22;
                                                    t = topdown_1_0(e_3, t);
                                                    t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                    t = bottomup_1_0(d_2, t);
                                                    LocalPopChoice(m_33);
                                                  }
                                                else
                                                  {
                                                    t = k_33;
                                                    t = b_23;
                                                  }
                                              }
                                            }
                                        }
                                      }
                                    else
                                      {
                                        ATerm n_33 = t;
                                        int o_33 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = z_22;
                                            if((a_23 != t))
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(o_33);
                                          }
                                        else
                                          {
                                            t = n_33;
                                            t = b_23;
                                          }
                                      }
                                  }
                              }
                          }
                      }
                  }
                else
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        a_23 = ATgetArgument(t, 0);
                        z_22 = ATgetArgument(t, 1);
                        t = z_22;
                        if(match_cons(t, sym_Id_0))
                          {
                            t = a_23;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                ATerm p_33 = t;
                                int q_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_y_19;
                                    t = d_2(t);
                                    LocalPopChoice(q_33);
                                  }
                                else
                                  {
                                    t = p_33;
                                    t = z_22;
                                  }
                              }
                            else
                              {
                                ATerm s_33 = t;
                                int t_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_y_19;
                                    t = d_2(t);
                                    LocalPopChoice(t_33);
                                  }
                                else
                                  {
                                    t = s_33;
                                    t = b_23;
                                  }
                              }
                          }
                        else
                          {
                            if(match_cons(t, sym_Fail_0))
                              {
                                t = a_23;
                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                  {
                                    ATerm u_33 = t;
                                    int v_33 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_20;
                                        t = d_2(t);
                                        LocalPopChoice(v_33);
                                      }
                                    else
                                      {
                                        t = u_33;
                                        t = z_22;
                                      }
                                  }
                                else
                                  {
                                    ATerm w_33 = t;
                                    int y_33 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_20;
                                        t = d_2(t);
                                        LocalPopChoice(y_33);
                                      }
                                    else
                                      {
                                        t = w_33;
                                        t = b_23;
                                      }
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Scope_2))
                                  {
                                    s_22 = ATgetArgument(t, 0);
                                    v_22 = ATgetArgument(t, 1);
                                    t = a_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        ATerm z_33 = t;
                                        int a_34 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm h_60 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, a_23, s_22);
                                            t = conc_0_0(t);
                                            h_60 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, h_60, v_22);
                                            t = bottomup_1_0(d_2, t);
                                            LocalPopChoice(a_34);
                                          }
                                        else
                                          {
                                            t = z_33;
                                            t = b_23;
                                          }
                                      }
                                  }
                                else
                                  {
                                    t = a_23;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        t = b_23;
                                      }
                                  }
                              }
                          }
                      }
                    else
                      {
                        ATerm c_34 = t;
                        int d_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_Rec_2))
                              {
                                ATerm e_34 = ATgetArgument(t, 0);
                                z_22 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            LocalPopChoice(d_34);
                            t = z_22;
                            if(match_cons(t, sym_Id_0))
                              {
                                ATerm f_34 = t;
                                int g_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = term_y_19;
                                    t = d_2(t);
                                    LocalPopChoice(g_34);
                                  }
                                else
                                  {
                                    t = f_34;
                                    t = b_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Fail_0))
                                  {
                                    ATerm h_34 = t;
                                    int j_34 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_20;
                                        t = d_2(t);
                                        LocalPopChoice(j_34);
                                      }
                                    else
                                      {
                                        t = h_34;
                                        t = b_23;
                                      }
                                  }
                                else
                                  {
                                    t = b_23;
                                  }
                              }
                          }
                        else
                          {
                            t = c_34;
                            if(match_cons(t, sym_All_1))
                              {
                                a_23 = ATgetArgument(t, 0);
                                t = a_23;
                                if(match_cons(t, sym_Id_0))
                                  {
                                    ATerm n_34 = t;
                                    int o_34 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_y_19;
                                        t = d_2(t);
                                        LocalPopChoice(o_34);
                                      }
                                    else
                                      {
                                        t = n_34;
                                        t = b_23;
                                      }
                                  }
                                else
                                  {
                                    t = b_23;
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Where_1))
                                  {
                                    a_23 = ATgetArgument(t, 0);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        ATerm p_34 = t;
                                        int q_34 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_y_19;
                                            t = d_2(t);
                                            LocalPopChoice(q_34);
                                          }
                                        else
                                          {
                                            t = p_34;
                                            {
                                              ATerm r_34 = t;
                                              int s_34 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm u_60 = NULL,b_61 = NULL,f_61 = NULL,g_61 = NULL,i_61 = NULL,l_61 = NULL,m_61 = NULL,o_61 = NULL,r_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL;
                                                  t = b_23;
                                                  t = new_0_0(t);
                                                  u_60 = t;
                                                  t = bottomup_1_0(d_2, t);
                                                  c_62 = t;
                                                  t = (ATerm) ATempty;
                                                  t = d_2(t);
                                                  d_62 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(d_62), c_62);
                                                  t = d_2(t);
                                                  b_61 = t;
                                                  t = u_60;
                                                  t = bottomup_1_0(d_2, t);
                                                  b_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_62);
                                                  t = d_2(t);
                                                  a_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, a_62);
                                                  t = d_2(t);
                                                  g_61 = t;
                                                  t = a_23;
                                                  t = bottomup_1_0(d_2, t);
                                                  l_61 = t;
                                                  t = u_60;
                                                  t = bottomup_1_0(d_2, t);
                                                  r_61 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_61);
                                                  t = d_2(t);
                                                  o_61 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, o_61);
                                                  t = d_2(t);
                                                  m_61 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_61, m_61);
                                                  t = d_2(t);
                                                  i_61 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, g_61, i_61);
                                                  t = d_2(t);
                                                  f_61 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, b_61, f_61);
                                                  t = d_2(t);
                                                  LocalPopChoice(s_34);
                                                }
                                              else
                                                {
                                                  t = r_34;
                                                  t = b_23;
                                                }
                                            }
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm t_34 = t;
                                            int v_34 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(v_34);
                                              }
                                            else
                                              {
                                                t = t_34;
                                                {
                                                  ATerm w_34 = t;
                                                  int x_34 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm g_62 = NULL,h_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,s_62 = NULL,t_62 = NULL,u_62 = NULL;
                                                      t = b_23;
                                                      t = new_0_0(t);
                                                      g_62 = t;
                                                      t = bottomup_1_0(d_2, t);
                                                      t_62 = t;
                                                      t = (ATerm) ATempty;
                                                      t = d_2(t);
                                                      u_62 = t;
                                                      t = (ATerm) ATinsert(CheckATermList(u_62), t_62);
                                                      t = d_2(t);
                                                      h_62 = t;
                                                      t = g_62;
                                                      t = bottomup_1_0(d_2, t);
                                                      s_62 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, s_62);
                                                      t = d_2(t);
                                                      p_62 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Match_1, p_62);
                                                      t = d_2(t);
                                                      j_62 = t;
                                                      t = a_23;
                                                      t = bottomup_1_0(d_2, t);
                                                      l_62 = t;
                                                      t = g_62;
                                                      t = bottomup_1_0(d_2, t);
                                                      o_62 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Var_1, o_62);
                                                      t = d_2(t);
                                                      n_62 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Build_1, n_62);
                                                      t = d_2(t);
                                                      m_62 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_62, m_62);
                                                      t = d_2(t);
                                                      k_62 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_62, k_62);
                                                      t = d_2(t);
                                                      i_62 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Scope_2, h_62, i_62);
                                                      t = d_2(t);
                                                      LocalPopChoice(x_34);
                                                    }
                                                  else
                                                    {
                                                      t = w_34;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                w_22 = ATgetArgument(t, 0);
                                                y_22 = ATgetArgument(t, 1);
                                                t = y_22;
                                                if(match_cons(t, sym_Seq_2))
                                                  {
                                                    z_21 = ATgetArgument(t, 0);
                                                    f_22 = ATgetArgument(t, 1);
                                                    t = z_21;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        a_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            q_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm y_34 = t;
                                                              int z_34 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, a_22);
                                                                  t = d_2(t);
                                                                  h_63 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_63, f_22);
                                                                  t = d_2(t);
                                                                  g_63 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_22, g_63);
                                                                  t = d_2(t);
                                                                  f_63 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, f_63);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(z_34);
                                                                }
                                                              else
                                                                {
                                                                  t = y_34;
                                                                  {
                                                                    ATerm b_35 = t;
                                                                    int c_35 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm j_63 = NULL,l_63 = NULL,m_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL;
                                                                        t = b_23;
                                                                        t = new_0_0(t);
                                                                        j_63 = t;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        a_64 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = d_2(t);
                                                                        b_64 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(b_64), a_64);
                                                                        t = d_2(t);
                                                                        l_63 = t;
                                                                        t = j_63;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        z_63 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, z_63);
                                                                        t = d_2(t);
                                                                        x_63 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, x_63);
                                                                        t = d_2(t);
                                                                        o_63 = t;
                                                                        t = a_23;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        q_63 = t;
                                                                        t = j_63;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        w_63 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, w_63);
                                                                        t = d_2(t);
                                                                        v_63 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, v_63);
                                                                        t = d_2(t);
                                                                        u_63 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, q_63, u_63);
                                                                        t = d_2(t);
                                                                        p_63 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, o_63, p_63);
                                                                        t = d_2(t);
                                                                        m_63 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, l_63, m_63);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(c_35);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = b_35;
                                                                        t = b_23;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm d_35 = t;
                                                            int f_35 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm x_64 = NULL,b_65 = NULL,c_65 = NULL,h_65 = NULL,k_65 = NULL,w_65 = NULL,a_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL;
                                                                t = b_23;
                                                                t = new_0_0(t);
                                                                x_64 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                j_66 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                k_66 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(k_66), j_66);
                                                                t = d_2(t);
                                                                b_65 = t;
                                                                t = x_64;
                                                                t = bottomup_1_0(d_2, t);
                                                                i_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, i_66);
                                                                t = d_2(t);
                                                                h_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, h_66);
                                                                t = d_2(t);
                                                                h_65 = t;
                                                                t = a_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                w_65 = t;
                                                                t = x_64;
                                                                t = bottomup_1_0(d_2, t);
                                                                g_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, g_66);
                                                                t = d_2(t);
                                                                f_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, f_66);
                                                                t = d_2(t);
                                                                a_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, w_65, a_66);
                                                                t = d_2(t);
                                                                k_65 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, h_65, k_65);
                                                                t = d_2(t);
                                                                c_65 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, b_65, c_65);
                                                                t = d_2(t);
                                                                LocalPopChoice(f_35);
                                                              }
                                                            else
                                                              {
                                                                t = d_35;
                                                                t = b_23;
                                                              }
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = w_22;
                                                        {
                                                          ATerm j_35 = t;
                                                          int k_35 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,u_66 = NULL,v_66 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,n_67 = NULL,t_67 = NULL,w_67 = NULL;
                                                              t = b_23;
                                                              t = new_0_0(t);
                                                              p_66 = t;
                                                              t = bottomup_1_0(d_2, t);
                                                              t_67 = t;
                                                              t = (ATerm) ATempty;
                                                              t = d_2(t);
                                                              w_67 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(w_67), t_67);
                                                              t = d_2(t);
                                                              q_66 = t;
                                                              t = p_66;
                                                              t = bottomup_1_0(d_2, t);
                                                              n_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, n_67);
                                                              t = d_2(t);
                                                              g_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, g_67);
                                                              t = d_2(t);
                                                              u_66 = t;
                                                              t = a_23;
                                                              t = bottomup_1_0(d_2, t);
                                                              c_67 = t;
                                                              t = p_66;
                                                              t = bottomup_1_0(d_2, t);
                                                              f_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, f_67);
                                                              t = d_2(t);
                                                              e_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, e_67);
                                                              t = d_2(t);
                                                              d_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_67, d_67);
                                                              t = d_2(t);
                                                              v_66 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_66, v_66);
                                                              t = d_2(t);
                                                              r_66 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, q_66, r_66);
                                                              t = d_2(t);
                                                              LocalPopChoice(k_35);
                                                            }
                                                          else
                                                            {
                                                              t = j_35;
                                                              t = b_23;
                                                            }
                                                        }
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = w_22;
                                                    {
                                                      ATerm o_35 = t;
                                                      int p_35 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_68 = NULL,c_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,s_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,d_69 = NULL,g_69 = NULL;
                                                          t = b_23;
                                                          t = new_0_0(t);
                                                          b_68 = t;
                                                          t = bottomup_1_0(d_2, t);
                                                          d_69 = t;
                                                          t = (ATerm) ATempty;
                                                          t = d_2(t);
                                                          g_69 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(g_69), d_69);
                                                          t = d_2(t);
                                                          c_68 = t;
                                                          t = b_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          b_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, b_69);
                                                          t = d_2(t);
                                                          a_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, a_69);
                                                          t = d_2(t);
                                                          m_68 = t;
                                                          t = a_23;
                                                          t = bottomup_1_0(d_2, t);
                                                          o_68 = t;
                                                          t = b_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          z_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, z_68);
                                                          t = d_2(t);
                                                          s_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_68);
                                                          t = d_2(t);
                                                          p_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, o_68, p_68);
                                                          t = d_2(t);
                                                          n_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_68, n_68);
                                                          t = d_2(t);
                                                          l_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, c_68, l_68);
                                                          t = d_2(t);
                                                          LocalPopChoice(p_35);
                                                        }
                                                      else
                                                        {
                                                          t = o_35;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Where_1))
                                                  {
                                                    w_22 = ATgetArgument(t, 0);
                                                    {
                                                      ATerm q_35 = t;
                                                      int s_35 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Where_1, w_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_35);
                                                        }
                                                      else
                                                        {
                                                          t = q_35;
                                                          {
                                                            ATerm u_35 = t;
                                                            int v_35 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,b_70 = NULL,h_70 = NULL,l_70 = NULL,m_70 = NULL,o_70 = NULL;
                                                                t = b_23;
                                                                t = new_0_0(t);
                                                                o_69 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                m_70 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                o_70 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(o_70), m_70);
                                                                t = d_2(t);
                                                                p_69 = t;
                                                                t = o_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                l_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, l_70);
                                                                t = d_2(t);
                                                                h_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, h_70);
                                                                t = d_2(t);
                                                                r_69 = t;
                                                                t = a_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                u_69 = t;
                                                                t = o_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                b_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, b_70);
                                                                t = d_2(t);
                                                                w_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, w_69);
                                                                t = d_2(t);
                                                                v_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, u_69, v_69);
                                                                t = d_2(t);
                                                                t_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_69, t_69);
                                                                t = d_2(t);
                                                                q_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, p_69, q_69);
                                                                t = d_2(t);
                                                                LocalPopChoice(v_35);
                                                              }
                                                            else
                                                              {
                                                                t = u_35;
                                                                t = b_23;
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm w_35 = t;
                                                    int x_35 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,h_71 = NULL;
                                                        t = b_23;
                                                        t = new_0_0(t);
                                                        r_70 = t;
                                                        t = bottomup_1_0(d_2, t);
                                                        e_71 = t;
                                                        t = (ATerm) ATempty;
                                                        t = d_2(t);
                                                        h_71 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(h_71), e_71);
                                                        t = d_2(t);
                                                        s_70 = t;
                                                        t = r_70;
                                                        t = bottomup_1_0(d_2, t);
                                                        d_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, d_71);
                                                        t = d_2(t);
                                                        c_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, c_71);
                                                        t = d_2(t);
                                                        u_70 = t;
                                                        t = a_23;
                                                        t = bottomup_1_0(d_2, t);
                                                        y_70 = t;
                                                        t = r_70;
                                                        t = bottomup_1_0(d_2, t);
                                                        b_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, b_71);
                                                        t = d_2(t);
                                                        a_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, a_71);
                                                        t = d_2(t);
                                                        z_70 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_70, z_70);
                                                        t = d_2(t);
                                                        v_70 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, u_70, v_70);
                                                        t = d_2(t);
                                                        t_70 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, s_70, t_70);
                                                        t = d_2(t);
                                                        LocalPopChoice(x_35);
                                                      }
                                                    else
                                                      {
                                                        t = w_35;
                                                        t = b_23;
                                                      }
                                                  }
                                              }
                                          }
                                      }
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Match_1))
                                      {
                                        a_23 = ATgetArgument(t, 0);
                                        t = a_23;
                                        if(match_cons(t, sym_Wld_0))
                                          {
                                            ATerm y_35 = t;
                                            int c_36 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_y_19;
                                                t = d_2(t);
                                                LocalPopChoice(c_36);
                                              }
                                            else
                                              {
                                                t = y_35;
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            t = b_23;
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Some_1))
                                          {
                                            a_23 = ATgetArgument(t, 0);
                                            t = a_23;
                                            if(match_cons(t, sym_Fail_0))
                                              {
                                                ATerm d_36 = t;
                                                int e_36 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = term_m_20;
                                                    t = d_2(t);
                                                    LocalPopChoice(e_36);
                                                  }
                                                else
                                                  {
                                                    t = d_36;
                                                    t = b_23;
                                                  }
                                              }
                                            else
                                              {
                                                t = b_23;
                                              }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_One_1))
                                              {
                                                a_23 = ATgetArgument(t, 0);
                                                t = a_23;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    ATerm f_36 = t;
                                                    int g_36 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = term_m_20;
                                                        t = d_2(t);
                                                        LocalPopChoice(g_36);
                                                      }
                                                    else
                                                      {
                                                        t = f_36;
                                                        t = b_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = b_23;
                                                  }
                                              }
                                            else
                                              {
                                                ATerm h_36 = t;
                                                int j_36 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm k_36 = ATgetArgument(t, 0);
                                                        z_22 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(j_36);
                                                    t = z_22;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm l_36 = t;
                                                        int m_36 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = term_m_20;
                                                            t = d_2(t);
                                                            LocalPopChoice(m_36);
                                                          }
                                                        else
                                                          {
                                                            t = l_36;
                                                            t = b_23;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = b_23;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = h_36;
                                                    {
                                                      ATerm n_36 = t;
                                                      int o_36 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(match_cons(t, sym_Cong_2))
                                                            {
                                                              ATerm p_36 = ATgetArgument(t, 0);
                                                              z_22 = ATgetArgument(t, 1);
                                                            }
                                                          else
                                                            _fail(t);
                                                          LocalPopChoice(o_36);
                                                          {
                                                            ATerm r_36 = t;
                                                            int s_36 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = z_22;
                                                                t = fetch_1_0(f_3, t);
                                                                t = term_m_20;
                                                                t = bottomup_1_0(d_2, t);
                                                                LocalPopChoice(s_36);
                                                              }
                                                            else
                                                              {
                                                                t = r_36;
                                                                t = b_23;
                                                              }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          t = n_36;
                                                          if(match_cons(t, sym_Choice_2))
                                                            {
                                                              a_23 = ATgetArgument(t, 0);
                                                              z_22 = ATgetArgument(t, 1);
                                                              t = z_22;
                                                              if(match_cons(t, sym_Fail_0))
                                                                {
                                                                  t = a_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = z_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          w_22 = ATgetArgument(t, 0);
                                                                          y_22 = ATgetArgument(t, 1);
                                                                          t = a_23;
                                                                        }
                                                                      else
                                                                        {
                                                                          t = a_23;
                                                                        }
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  t = a_23;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      t = z_22;
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_Choice_2))
                                                                        {
                                                                          w_22 = ATgetArgument(t, 0);
                                                                          y_22 = ATgetArgument(t, 1);
                                                                          {
                                                                            ATerm t_36 = t;
                                                                            int w_36 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm q_73 = NULL;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, y_22, z_22);
                                                                                t = d_2(t);
                                                                                q_73 = t;
                                                                                t = (ATerm) ATmakeAppl(sym_Choice_2, w_22, q_73);
                                                                                t = d_2(t);
                                                                                LocalPopChoice(w_36);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = t_36;
                                                                                {
                                                                                  ATerm y_36 = t;
                                                                                  int z_36 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = z_22;
                                                                                      if((a_23 != t))
                                                                                        {
                                                                                          _fail(t);
                                                                                        }
                                                                                      LocalPopChoice(z_36);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_36;
                                                                                      t = b_23;
                                                                                    }
                                                                                }
                                                                              }
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          ATerm b_37 = t;
                                                                          int c_37 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = z_22;
                                                                              if((a_23 != t))
                                                                                {
                                                                                  _fail(t);
                                                                                }
                                                                              LocalPopChoice(c_37);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_37;
                                                                              t = b_23;
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_GuardedLChoice_3))
                                                                {
                                                                  a_23 = ATgetArgument(t, 0);
                                                                  z_22 = ATgetArgument(t, 1);
                                                                  y_21 = ATgetArgument(t, 2);
                                                                  t = y_21;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm d_37 = t;
                                                                      int f_37 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, z_22);
                                                                          t = d_2(t);
                                                                          LocalPopChoice(f_37);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = d_37;
                                                                          t = b_23;
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      t = b_23;
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_Lets_2))
                                                                    {
                                                                      a_23 = ATgetArgument(t, 0);
                                                                      z_22 = ATgetArgument(t, 1);
                                                                      {
                                                                        ATerm h_37 = t;
                                                                        int i_37 = stack_ptr;
                                                                        if((PushChoice() == 0))
                                                                          {
                                                                            t = (ATerm) ATmakeAppl(sym_Let_2, a_23, z_22);
                                                                            t = d_2(t);
                                                                            LocalPopChoice(i_37);
                                                                          }
                                                                        else
                                                                          {
                                                                            t = h_37;
                                                                            t = b_23;
                                                                          }
                                                                      }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_LChoices_1))
                                                                        {
                                                                          a_23 = ATgetArgument(t, 0);
                                                                          t = a_23;
                                                                          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                            {
                                                                              w_22 = ATgetFirst((ATermList) t);
                                                                              y_22 = (ATerm) ATgetNext((ATermList) t);
                                                                              {
                                                                                ATerm j_37 = t;
                                                                                int k_37 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm g_74 = NULL;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoices_1, y_22);
                                                                                    t = d_2(t);
                                                                                    g_74 = t;
                                                                                    t = (ATerm) ATmakeAppl(sym_LChoice_2, w_22, g_74);
                                                                                    t = d_2(t);
                                                                                    LocalPopChoice(k_37);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_37;
                                                                                    t = b_23;
                                                                                  }
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                {
                                                                                  ATerm l_37 = t;
                                                                                  int m_37 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = term_m_20;
                                                                                      t = d_2(t);
                                                                                      LocalPopChoice(m_37);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = l_37;
                                                                                      t = b_23;
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = b_23;
                                                                                }
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Choices_1))
                                                                            {
                                                                              a_23 = ATgetArgument(t, 0);
                                                                              t = a_23;
                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                {
                                                                                  w_22 = ATgetFirst((ATermList) t);
                                                                                  y_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                  {
                                                                                    ATerm n_37 = t;
                                                                                    int p_37 = stack_ptr;
                                                                                    if((PushChoice() == 0))
                                                                                      {
                                                                                        ATerm w_74 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, y_22);
                                                                                        t = d_2(t);
                                                                                        w_74 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, w_22, w_74);
                                                                                        t = d_2(t);
                                                                                        LocalPopChoice(p_37);
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = n_37;
                                                                                        t = b_23;
                                                                                      }
                                                                                  }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                    {
                                                                                      ATerm q_37 = t;
                                                                                      int r_37 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = term_m_20;
                                                                                          t = d_2(t);
                                                                                          LocalPopChoice(r_37);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = q_37;
                                                                                          t = b_23;
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = b_23;
                                                                                    }
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_Seqs_1))
                                                                                {
                                                                                  a_23 = ATgetArgument(t, 0);
                                                                                  t = a_23;
                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                    {
                                                                                      w_22 = ATgetFirst((ATermList) t);
                                                                                      y_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                      {
                                                                                        ATerm s_37 = t;
                                                                                        int t_37 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm c_75 = NULL;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seqs_1, y_22);
                                                                                            t = d_2(t);
                                                                                            c_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, c_75);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(t_37);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = s_37;
                                                                                            t = b_23;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                        {
                                                                                          ATerm u_37 = t;
                                                                                          int v_37 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = term_y_19;
                                                                                              t = d_2(t);
                                                                                              LocalPopChoice(v_37);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = u_37;
                                                                                              t = b_23;
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = b_23;
                                                                                        }
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_InfixApp_3))
                                                                                    {
                                                                                      a_23 = ATgetArgument(t, 0);
                                                                                      z_22 = ATgetArgument(t, 1);
                                                                                      y_21 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm w_37 = t;
                                                                                        int y_37 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL;
                                                                                            t = term_z_37;
                                                                                            t = bottomup_1_0(d_2, t);
                                                                                            y_75 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = d_2(t);
                                                                                            b_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(b_76), y_21);
                                                                                            t = d_2(t);
                                                                                            a_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(a_76), a_23);
                                                                                            t = d_2(t);
                                                                                            z_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, y_75, z_75);
                                                                                            t = d_2(t);
                                                                                            x_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, z_22, x_75);
                                                                                            t = d_2(t);
                                                                                            LocalPopChoice(y_37);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = w_37;
                                                                                            t = b_23;
                                                                                          }
                                                                                      }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_BAM_3))
                                                                                        {
                                                                                          a_23 = ATgetArgument(t, 0);
                                                                                          z_22 = ATgetArgument(t, 1);
                                                                                          y_21 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm a_38 = t;
                                                                                            int b_38 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, z_22);
                                                                                                t = d_2(t);
                                                                                                j_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, y_21);
                                                                                                t = d_2(t);
                                                                                                p_76 = t;
                                                                                                t = (ATerm) ATempty;
                                                                                                t = d_2(t);
                                                                                                q_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(q_76), p_76);
                                                                                                t = d_2(t);
                                                                                                o_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(o_76), a_23);
                                                                                                t = d_2(t);
                                                                                                k_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(k_76), j_76);
                                                                                                t = d_2(t);
                                                                                                i_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, i_76);
                                                                                                t = d_2(t);
                                                                                                LocalPopChoice(b_38);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = a_38;
                                                                                                t = b_23;
                                                                                              }
                                                                                          }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_AM_2))
                                                                                            {
                                                                                              a_23 = ATgetArgument(t, 0);
                                                                                              z_22 = ATgetArgument(t, 1);
                                                                                              {
                                                                                                ATerm c_38 = t;
                                                                                                int e_38 = stack_ptr;
                                                                                                if((PushChoice() == 0))
                                                                                                  {
                                                                                                    ATerm w_76 = NULL;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, z_22);
                                                                                                    t = d_2(t);
                                                                                                    w_76 = t;
                                                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, w_76);
                                                                                                    t = d_2(t);
                                                                                                    LocalPopChoice(e_38);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = c_38;
                                                                                                    t = b_23;
                                                                                                  }
                                                                                              }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_MA_2))
                                                                                                {
                                                                                                  a_23 = ATgetArgument(t, 0);
                                                                                                  z_22 = ATgetArgument(t, 1);
                                                                                                  {
                                                                                                    ATerm f_38 = t;
                                                                                                    int k_38 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        ATerm h_77 = NULL;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, a_23);
                                                                                                        t = d_2(t);
                                                                                                        h_77 = t;
                                                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, h_77, z_22);
                                                                                                        t = d_2(t);
                                                                                                        LocalPopChoice(k_38);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = f_38;
                                                                                                        t = b_23;
                                                                                                      }
                                                                                                  }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_BA_2))
                                                                                                    {
                                                                                                      a_23 = ATgetArgument(t, 0);
                                                                                                      z_22 = ATgetArgument(t, 1);
                                                                                                      {
                                                                                                        ATerm l_38 = t;
                                                                                                        int m_38 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            ATerm s_77 = NULL;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Build_1, z_22);
                                                                                                            t = d_2(t);
                                                                                                            s_77 = t;
                                                                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, s_77, a_23);
                                                                                                            t = d_2(t);
                                                                                                            LocalPopChoice(m_38);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = l_38;
                                                                                                            t = b_23;
                                                                                                          }
                                                                                                      }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_Let_2))
                                                                                                        {
                                                                                                          a_23 = ATgetArgument(t, 0);
                                                                                                          z_22 = ATgetArgument(t, 1);
                                                                                                          t = z_22;
                                                                                                          if(match_cons(t, sym_Let_2))
                                                                                                            {
                                                                                                              s_22 = ATgetArgument(t, 0);
                                                                                                              v_22 = ATgetArgument(t, 1);
                                                                                                              t = a_23;
                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                {
                                                                                                                  t = z_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  ATerm n_38 = t;
                                                                                                                  int o_38 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      ATerm m_78 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, a_23, s_22);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      m_78 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, m_78, v_22);
                                                                                                                      t = bottomup_1_0(d_2, t);
                                                                                                                      LocalPopChoice(o_38);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = n_38;
                                                                                                                      t = b_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_cons(t, sym_CallT_3))
                                                                                                                {
                                                                                                                  s_22 = ATgetArgument(t, 0);
                                                                                                                  v_22 = ATgetArgument(t, 1);
                                                                                                                  m_22 = ATgetArgument(t, 2);
                                                                                                                  t = m_22;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = v_22;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = s_22;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              r_22 = ATgetArgument(t, 0);
                                                                                                                              t = a_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = z_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                    {
                                                                                                                                      w_22 = ATgetFirst((ATermList) t);
                                                                                                                                      y_22 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                      t = y_22;
                                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                        {
                                                                                                                                          t = w_22;
                                                                                                                                          if(match_cons(t, sym_SDefT_4))
                                                                                                                                            {
                                                                                                                                              q_22 = ATgetArgument(t, 0);
                                                                                                                                              j_22 = ATgetArgument(t, 1);
                                                                                                                                              g_22 = ATgetArgument(t, 2);
                                                                                                                                              h_22 = ATgetArgument(t, 3);
                                                                                                                                              t = g_22;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = j_22;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm q_38 = t;
                                                                                                                                                      int r_38 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = r_22;
                                                                                                                                                          if((q_22 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = h_22;
                                                                                                                                                          {
                                                                                                                                                            ATerm s_38 = t;
                                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                                              {
                                                                                                                                                                static ATerm g_3 (ATerm t);
                                                                                                                                                                static ATerm g_3 (ATerm t)
                                                                                                                                                                {
                                                                                                                                                                  if(match_cons(t, sym_CallT_3))
                                                                                                                                                                    {
                                                                                                                                                                      ATerm t_38 = ATgetArgument(t, 0);
                                                                                                                                                                      if(match_cons(t_38, sym_SVar_1))
                                                                                                                                                                        {
                                                                                                                                                                          if((q_22 != ATgetArgument(t_38, 0)))
                                                                                                                                                                            {
                                                                                                                                                                              _fail(ATgetArgument(t_38, 0));
                                                                                                                                                                            }
                                                                                                                                                                        }
                                                                                                                                                                      else
                                                                                                                                                                        _fail(t);
                                                                                                                                                                      {
                                                                                                                                                                        ATerm v_38 = ATgetArgument(t, 1);
                                                                                                                                                                        if(((ATgetType(v_38) != AT_LIST) || !(ATisEmpty(v_38))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                      {
                                                                                                                                                                        ATerm w_38 = ATgetArgument(t, 2);
                                                                                                                                                                        if(((ATgetType(w_38) != AT_LIST) || !(ATisEmpty(w_38))))
                                                                                                                                                                          _fail(t);
                                                                                                                                                                      }
                                                                                                                                                                    }
                                                                                                                                                                  else
                                                                                                                                                                    _fail(t);
                                                                                                                                                                  return(t);
                                                                                                                                                                }
                                                                                                                                                                t = oncetd_1_0(g_3, t);
                                                                                                                                                                PopChoice();
                                                                                                                                                                _fail(t);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                t = s_38;
                                                                                                                                                              }
                                                                                                                                                          }
                                                                                                                                                          t = h_22;
                                                                                                                                                          t = bottomup_1_0(d_2, t);
                                                                                                                                                          LocalPopChoice(r_38);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = q_38;
                                                                                                                                                          t = b_23;
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = b_23;
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = b_23;
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = b_23;
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = b_23;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = b_23;
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = a_23;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                {
                                                                                                                                  t = z_22;
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = b_23;
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = a_23;
                                                                                                                          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                            {
                                                                                                                              t = z_22;
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = b_23;
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = a_23;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = z_22;
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = b_23;
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = a_23;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = z_22;
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = b_23;
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_cons(t, sym_As_2))
                                                                                                            {
                                                                                                              a_23 = ATgetArgument(t, 0);
                                                                                                              z_22 = ATgetArgument(t, 1);
                                                                                                              t = a_23;
                                                                                                              if(match_cons(t, sym_Wld_0))
                                                                                                                {
                                                                                                                  t = z_22;
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = b_23;
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = b_23;
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                  }
                                              }
                                          }
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
  t = bottomup_1_0(d_2, t);
  return(t);
}
ATerm SubsArgCall2_0_0 (ATerm t)
{
  ATerm f_80 = NULL,h_80 = NULL,i_80 = NULL,k_80 = NULL,h_18 = NULL,i_18 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm x_38 = ATgetArgument(t, 0);
      if(match_cons(x_38, sym_SVar_1))
        {
          i_80 = ATgetArgument(x_38, 0);
        }
      else
        _fail(t);
      f_80 = ATgetArgument(t, 1);
      h_80 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_80), (ATerm)ATempty, (ATerm) ATempty);
  h_18 = t;
  t = term_y_38;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_38, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_80), (ATerm)ATempty, (ATerm) ATempty));
  t = i_7(i_18, h_18, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm z_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_38) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      k_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_80), f_80, h_80);
  return(t);
}
ATerm SubsArgCall1_0_0 (ATerm t)
{
  ATerm l_80 = NULL,m_80 = NULL,l_18 = NULL;
  l_80 = t;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm a_39 = ATgetArgument(t, 0);
      if(match_cons(a_39, sym_SVar_1))
        {
          ATerm e_39 = ATgetArgument(a_39, 0);
        }
      else
        _fail(t);
      {
        ATerm b_39 = ATgetArgument(t, 1);
        if(((ATgetType(b_39) != AT_LIST) || !(ATisEmpty(b_39))))
          _fail(t);
      }
      {
        ATerm c_39 = ATgetArgument(t, 2);
        if(((ATgetType(c_39) != AT_LIST) || !(ATisEmpty(c_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = term_f_39;
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_39, l_80);
  t = i_7(l_18, l_80, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm g_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_39) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
      m_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_80;
  t = strename_0_0(t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  t = term_y_38;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  t = term_f_39;
  return(t);
}
ATerm substitute_arg_0_0 (ATerm t)
{
  ATerm e_81 = NULL,f_81 = NULL,i_81 = NULL,j_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL,r_81 = NULL,a_82 = NULL,e_82 = NULL;
  l_81 = t;
  if(match_cons(t, sym__2))
    {
      m_81 = ATgetArgument(t, 0);
      e_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_81;
  if(match_cons(t, sym_VarDec_2))
    {
      n_81 = ATgetArgument(t, 0);
      o_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_81;
  if(match_cons(t, sym_FunType_2))
    {
      r_81 = ATgetArgument(t, 0);
      {
        ATerm h_39 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_81;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_39 = ATgetFirst((ATermList) t);
      a_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_82;
  {
    ATerm j_39 = t;
    int k_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_39 = ATgetFirst((ATermList) t);
            ATerm p_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(k_39);
        {
          ATerm u_82 = NULL,v_82 = NULL;
          t = e_82;
          if(match_cons(t, sym_CallT_3))
            {
              e_81 = ATgetArgument(t, 0);
              i_81 = ATgetArgument(t, 1);
              j_81 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = e_81;
          if(match_cons(t, sym_SVar_1))
            {
              f_81 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_81;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_81;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_81), (ATerm)ATempty, (ATerm) ATempty);
          u_82 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_39, f_81);
          v_82 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_81), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_u_39, f_81));
          t = u_13(h_3, u_82, v_82, t);
          t = l_81;
        }
      }
    else
      {
        t = j_39;
        {
          ATerm h_83 = NULL,i_83 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_81), (ATerm)ATempty, (ATerm) ATempty);
          h_83 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_39, e_82);
          i_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_81), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_v_39, e_82));
          t = u_13(i_3, h_83, i_83, t);
          t = l_81;
        }
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_f_39;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_y_38;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_39 = ATgetArgument(t, 0);
      if(((ATgetType(w_39) != AT_LIST) || !(ATisEmpty(w_39))))
        _fail(t);
      {
        ATerm z_39 = ATgetArgument(t, 1);
        if(((ATgetType(z_39) != AT_LIST) || !(ATisEmpty(z_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm w_83 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_40 = ATgetArgument(t, 0);
      if(((ATgetType(a_40) == AT_LIST) && !(ATisEmpty(a_40))))
        {
          w_83 = ATgetFirst((ATermList) a_40);
          d_84 = (ATerm) ATgetNext((ATermList) a_40);
        }
      else
        _fail(t);
      {
        ATerm d_40 = ATgetArgument(t, 1);
        if(((ATgetType(d_40) == AT_LIST) && !(ATisEmpty(d_40))))
          {
            e_84 = ATgetFirst((ATermList) d_40);
            f_84 = (ATerm) ATgetNext((ATermList) d_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_83, e_84), (ATerm) ATmakeAppl(sym__2, d_84, f_84));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm i_84 = NULL,j_84 = NULL;
  if(match_cons(t, sym__2))
    {
      i_84 = ATgetArgument(t, 0);
      j_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_84), i_84);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_40 = t;
      int h_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SubsArgCall1_0_0(t);
          LocalPopChoice(h_40);
        }
      else
        {
          t = g_40;
          t = SubsArgCall2_0_0(t);
        }
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
    }
  return(t);
}
ATerm substitute_args_0_0 (ATerm t)
{
  ATerm o_83 = NULL,t_83 = NULL,u_83 = NULL;
  static ATerm k_3 (ATerm t);
  static ATerm k_3 (ATerm t)
  {
    static ATerm m_3 (ATerm t);
    static ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym__3))
        {
          if(((o_83 != NULL) && (o_83 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_83 = ATgetArgument(t, 0);
          if(((t_83 != NULL) && (t_83 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_83 = ATgetArgument(t, 1);
          if(((u_83 != NULL) && (u_83 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            u_83 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, o_83, t_83);
      t = genzip_4_0(n_3, o_3, p_3, substitute_arg_0_0, t);
      t = u_83;
      t = topdown_1_0(q_3, t);
      return(t);
    }
    t = scope_2_0(l_3, m_3, t);
    return(t);
  }
  t = scope_2_0(j_3, k_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_40 = ATgetArgument(t, 0);
      if(((ATgetType(i_40) != AT_LIST) || !(ATisEmpty(i_40))))
        _fail(t);
      {
        ATerm j_40 = ATgetArgument(t, 1);
        if(((ATgetType(j_40) != AT_LIST) || !(ATisEmpty(j_40))))
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
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_40 = ATgetArgument(t, 0);
      if(((ATgetType(k_40) == AT_LIST) && !(ATisEmpty(k_40))))
        {
          w_18 = ATgetFirst((ATermList) k_40);
          x_18 = (ATerm) ATgetNext((ATermList) k_40);
        }
      else
        _fail(t);
      {
        ATerm l_40 = ATgetArgument(t, 1);
        if(((ATgetType(l_40) == AT_LIST) && !(ATisEmpty(l_40))))
          {
            y_18 = ATgetFirst((ATermList) l_40);
            z_18 = (ATerm) ATgetNext((ATermList) l_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_18, y_18), (ATerm) ATmakeAppl(sym__2, x_18, z_18));
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  if(match_cons(t, sym__2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_19), a_19);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm d_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__2))
    {
      d_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_19;
  {
    ATerm m_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm p_40 = ATgetArgument(t, 0);
            f_19 = ATgetArgument(t, 1);
            g_19 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(o_40);
        t = (ATerm) ATmakeAppl(sym_SDef_3, i_19, f_19, g_19);
      }
    else
      {
        t = m_40;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm q_40 = ATgetArgument(t, 0);
            f_19 = ATgetArgument(t, 1);
            g_19 = ATgetArgument(t, 2);
            h_19 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, i_19, f_19, g_19, h_19);
      }
  }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_40 = ATgetArgument(t, 0);
      if(((ATgetType(r_40) != AT_LIST) || !(ATisEmpty(r_40))))
        _fail(t);
      {
        ATerm t_40 = ATgetArgument(t, 1);
        if(((ATgetType(t_40) != AT_LIST) || !(ATisEmpty(t_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_40 = ATgetArgument(t, 0);
      if(((ATgetType(u_40) == AT_LIST) && !(ATisEmpty(u_40))))
        {
          e_20 = ATgetFirst((ATermList) u_40);
          f_20 = (ATerm) ATgetNext((ATermList) u_40);
        }
      else
        _fail(t);
      {
        ATerm a_41 = ATgetArgument(t, 1);
        if(((ATgetType(a_41) == AT_LIST) && !(ATisEmpty(a_41))))
          {
            g_20 = ATgetFirst((ATermList) a_41);
            h_20 = (ATerm) ATgetNext((ATermList) a_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_20, g_20), (ATerm) ATmakeAppl(sym__2, f_20, h_20));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_20), i_20);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm l_20 = NULL,n_20 = NULL,o_20 = NULL;
  if(match_cons(t, sym__2))
    {
      l_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_20;
  {
    ATerm b_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm k_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_41);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_20);
      }
    else
      {
        t = b_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_41 = ATgetArgument(t, 0);
            n_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_20, n_20);
      }
  }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_41 = ATgetArgument(t, 0);
      if(((ATgetType(m_41) != AT_LIST) || !(ATisEmpty(m_41))))
        _fail(t);
      {
        ATerm n_41 = ATgetArgument(t, 1);
        if(((ATgetType(n_41) != AT_LIST) || !(ATisEmpty(n_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,n_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_41 = ATgetArgument(t, 0);
      if(((ATgetType(q_41) == AT_LIST) && !(ATisEmpty(q_41))))
        {
          c_22 = ATgetFirst((ATermList) q_41);
          d_22 = (ATerm) ATgetNext((ATermList) q_41);
        }
      else
        _fail(t);
      {
        ATerm r_41 = ATgetArgument(t, 1);
        if(((ATgetType(r_41) == AT_LIST) && !(ATisEmpty(r_41))))
          {
            e_22 = ATgetFirst((ATermList) r_41);
            n_22 = (ATerm) ATgetNext((ATermList) r_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_22, e_22), (ATerm) ATmakeAppl(sym__2, d_22, n_22));
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm o_22 = NULL,t_22 = NULL;
  if(match_cons(t, sym__2))
    {
      o_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_22), o_22);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm x_22 = NULL,d_23 = NULL,h_23 = NULL;
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      h_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_22;
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm v_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_41);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_23);
      }
    else
      {
        t = s_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm w_41 = ATgetArgument(t, 0);
            d_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_23, d_23);
      }
  }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_41 = ATgetArgument(t, 0);
      if(((ATgetType(x_41) != AT_LIST) || !(ATisEmpty(x_41))))
        _fail(t);
      {
        ATerm a_42 = ATgetArgument(t, 1);
        if(((ATgetType(a_42) != AT_LIST) || !(ATisEmpty(a_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_42 = ATgetArgument(t, 0);
      if(((ATgetType(b_42) == AT_LIST) && !(ATisEmpty(b_42))))
        {
          a_25 = ATgetFirst((ATermList) b_42);
          b_25 = (ATerm) ATgetNext((ATermList) b_42);
        }
      else
        _fail(t);
      {
        ATerm c_42 = ATgetArgument(t, 1);
        if(((ATgetType(c_42) == AT_LIST) && !(ATisEmpty(c_42))))
          {
            c_25 = ATgetFirst((ATermList) c_42);
            d_25 = (ATerm) ATgetNext((ATermList) c_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_25, c_25), (ATerm) ATmakeAppl(sym__2, b_25, d_25));
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL;
  if(match_cons(t, sym__2))
    {
      n_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_25), n_25);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm z_25 = NULL,b_26 = NULL,c_26 = NULL;
  if(match_cons(t, sym__2))
    {
      z_25 = ATgetArgument(t, 0);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_25;
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_26);
      }
    else
      {
        t = f_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_42 = ATgetArgument(t, 0);
            b_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_26, b_26);
      }
  }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_42 = ATgetArgument(t, 0);
      if(((ATgetType(o_42) != AT_LIST) || !(ATisEmpty(o_42))))
        _fail(t);
      {
        ATerm q_42 = ATgetArgument(t, 1);
        if(((ATgetType(q_42) != AT_LIST) || !(ATisEmpty(q_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_42 = ATgetArgument(t, 0);
      if(((ATgetType(r_42) == AT_LIST) && !(ATisEmpty(r_42))))
        {
          e_27 = ATgetFirst((ATermList) r_42);
          f_27 = (ATerm) ATgetNext((ATermList) r_42);
        }
      else
        _fail(t);
      {
        ATerm s_42 = ATgetArgument(t, 1);
        if(((ATgetType(s_42) == AT_LIST) && !(ATisEmpty(s_42))))
          {
            g_27 = ATgetFirst((ATermList) s_42);
            h_27 = (ATerm) ATgetNext((ATermList) s_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_27, g_27), (ATerm) ATmakeAppl(sym__2, f_27, h_27));
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm i_27 = NULL,k_27 = NULL;
  if(match_cons(t, sym__2))
    {
      i_27 = ATgetArgument(t, 0);
      k_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_27), i_27);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm m_27 = NULL,p_27 = NULL,q_27 = NULL;
  if(match_cons(t, sym__2))
    {
      m_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_27;
  {
    ATerm v_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_27);
      }
    else
      {
        t = v_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_42 = ATgetArgument(t, 0);
            p_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_27, p_27);
      }
  }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_43 = ATgetArgument(t, 0);
      if(((ATgetType(a_43) != AT_LIST) || !(ATisEmpty(a_43))))
        _fail(t);
      {
        ATerm b_43 = ATgetArgument(t, 1);
        if(((ATgetType(b_43) != AT_LIST) || !(ATisEmpty(b_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm c_100 = NULL,d_100 = NULL,h_100 = NULL,i_100 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_43 = ATgetArgument(t, 0);
      if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
        {
          c_100 = ATgetFirst((ATermList) c_43);
          d_100 = (ATerm) ATgetNext((ATermList) c_43);
        }
      else
        _fail(t);
      {
        ATerm d_43 = ATgetArgument(t, 1);
        if(((ATgetType(d_43) == AT_LIST) && !(ATisEmpty(d_43))))
          {
            h_100 = ATgetFirst((ATermList) d_43);
            i_100 = (ATerm) ATgetNext((ATermList) d_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_100, h_100), (ATerm) ATmakeAppl(sym__2, d_100, i_100));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm k_100 = NULL,p_100 = NULL;
  if(match_cons(t, sym__2))
    {
      k_100 = ATgetArgument(t, 0);
      p_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_100), k_100);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm s_100 = NULL,u_100 = NULL,v_100 = NULL;
  if(match_cons(t, sym__2))
    {
      s_100 = ATgetArgument(t, 0);
      v_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_100;
  {
    ATerm e_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_43);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_100);
      }
    else
      {
        t = e_43;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_43 = ATgetArgument(t, 0);
            u_100 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_100, u_100);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm r_140 (ATerm), ATerm t)
{
  ATerm j_43 = t;
  int k_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_99 = NULL,j_99 = NULL,q_99 = NULL,r_99 = NULL,s_99 = NULL;
      j_99 = t;
      if(match_cons(t, sym_Let_2))
        {
          q_99 = ATgetArgument(t, 0);
          r_99 = ATgetArgument(t, 1);
          {
            ATerm q_18 = NULL,t_18 = NULL,u_18 = NULL,h_4 = NULL;
            t = SSLgetAnnotations(j_99);
            q_18 = t;
            t = q_99;
            t = r_140(t);
            u_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_99, u_18);
            t = genzip_4_0(r_3, s_3, t_3, u_3, t);
            t_18 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, t_18, r_99);
            h_4 = t;
            t = SSLsetAnnotations(h_4, q_18);
          }
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              q_99 = ATgetArgument(t, 0);
              r_99 = ATgetArgument(t, 1);
              s_99 = ATgetArgument(t, 2);
              {
                ATerm x_19 = NULL,b_20 = NULL,c_20 = NULL,i_4 = NULL;
                t = SSLgetAnnotations(j_99);
                x_19 = t;
                t = r_99;
                t = r_140(t);
                c_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, r_99, c_20);
                t = genzip_4_0(v_3, w_3, x_3, y_3, t);
                b_20 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, q_99, b_20, s_99);
                i_4 = t;
                t = SSLsetAnnotations(i_4, x_19);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  q_99 = ATgetArgument(t, 0);
                  r_99 = ATgetArgument(t, 1);
                  s_99 = ATgetArgument(t, 2);
                  i_99 = ATgetArgument(t, 3);
                  {
                    ATerm d_21 = NULL,w_21 = NULL,x_21 = NULL,j_4 = NULL;
                    t = SSLgetAnnotations(j_99);
                    d_21 = t;
                    t = r_99;
                    t = r_140(t);
                    x_21 = t;
                    t = (ATerm) ATmakeAppl(sym__2, r_99, x_21);
                    t = genzip_4_0(z_3, a_4, b_4, e_4, t);
                    w_21 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, q_99, w_21, s_99, i_99);
                    j_4 = t;
                    t = SSLsetAnnotations(j_4, d_21);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_99 = ATgetArgument(t, 0);
                      r_99 = ATgetArgument(t, 1);
                      s_99 = ATgetArgument(t, 2);
                      i_99 = ATgetArgument(t, 3);
                      {
                        ATerm y_23 = NULL,q_24 = NULL,u_24 = NULL,l_4 = NULL;
                        t = SSLgetAnnotations(j_99);
                        y_23 = t;
                        t = r_99;
                        t = r_140(t);
                        u_24 = t;
                        t = (ATerm) ATmakeAppl(sym__2, r_99, u_24);
                        t = genzip_4_0(f_4, g_4, m_4, n_4, t);
                        q_24 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_99, q_24, s_99, i_99);
                        l_4 = t;
                        t = SSLsetAnnotations(l_4, y_23);
                      }
                    }
                  else
                    {
                      ATerm r_26 = NULL,z_26 = NULL,b_27 = NULL,p_4 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          q_99 = ATgetArgument(t, 0);
                          r_99 = ATgetArgument(t, 1);
                          s_99 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(j_99);
                      r_26 = t;
                      t = r_99;
                      t = r_140(t);
                      b_27 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_99, b_27);
                      t = genzip_4_0(o_4, u_4, v_4, w_4, t);
                      z_26 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, q_99, z_26, s_99);
                      p_4 = t;
                      t = SSLsetAnnotations(p_4, r_26);
                    }
                }
            }
        }
      LocalPopChoice(k_43);
    }
  else
    {
      t = j_43;
      {
        ATerm l_43 = t;
        int m_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_4 (ATerm t);
            static ATerm x_4 (ATerm t)
            {
              ATerm y_99 = NULL,b_100 = NULL;
              b_100 = t;
              t = r_140(t);
              y_99 = t;
              t = (ATerm) ATmakeAppl(sym__2, b_100, y_99);
              t = genzip_4_0(y_4, z_4, a_5, b_5, t);
              return(t);
            }
            t = dynrule_cong_6_0(_id, x_4, _id, _id, _id, _id, t);
            LocalPopChoice(m_43);
          }
        else
          {
            t = l_43;
            {
              ATerm y_101 = NULL,z_101 = NULL,a_102 = NULL,o_28 = NULL,v_28 = NULL,r_4 = NULL;
              y_101 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  z_101 = ATgetArgument(t, 0);
                  a_102 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_101);
              o_28 = t;
              t = z_101;
              t = r_140(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_28 = ATgetFirst((ATermList) t);
                  {
                    ATerm o_43 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, v_28, a_102);
              r_4 = t;
              t = SSLsetAnnotations(r_4, o_28);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm s_140 (ATerm), ATerm t_140 (ATerm), ATerm u_140 (ATerm), ATerm t)
{
  ATerm v_109 = NULL,w_109 = NULL,x_109 = NULL,y_109 = NULL,z_109 = NULL;
  x_109 = t;
  if(match_cons(t, sym_Let_2))
    {
      y_109 = ATgetArgument(t, 0);
      z_109 = ATgetArgument(t, 1);
      {
        ATerm g_29 = NULL,j_29 = NULL,p_29 = NULL,j_5 = NULL;
        t = SSLgetAnnotations(x_109);
        g_29 = t;
        t = y_109;
        t = s_140(t);
        j_29 = t;
        t = z_109;
        t = s_140(t);
        p_29 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, j_29, p_29);
        j_5 = t;
        t = SSLsetAnnotations(j_5, g_29);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_109 = ATgetArgument(t, 0);
          z_109 = ATgetArgument(t, 1);
          w_109 = ATgetArgument(t, 2);
          {
            ATerm k_30 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,k_5 = NULL;
            t = SSLgetAnnotations(x_109);
            k_30 = t;
            t = y_109;
            t = u_140(t);
            f_31 = t;
            t = z_109;
            t = u_140(t);
            g_31 = t;
            t = w_109;
            t = s_140(t);
            h_31 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, f_31, g_31, h_31);
            k_5 = t;
            t = SSLsetAnnotations(k_5, k_30);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              y_109 = ATgetArgument(t, 0);
              z_109 = ATgetArgument(t, 1);
              w_109 = ATgetArgument(t, 2);
              v_109 = ATgetArgument(t, 3);
              {
                ATerm g_32 = NULL,r_32 = NULL,t_32 = NULL,v_32 = NULL,y_32 = NULL,l_5 = NULL;
                t = SSLgetAnnotations(x_109);
                g_32 = t;
                t = y_109;
                t = u_140(t);
                r_32 = t;
                t = z_109;
                t = u_140(t);
                t_32 = t;
                t = w_109;
                t = u_140(t);
                v_32 = t;
                t = v_109;
                t = s_140(t);
                y_32 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_32, t_32, v_32, y_32);
                l_5 = t;
                t = SSLsetAnnotations(l_5, g_32);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  y_109 = ATgetArgument(t, 0);
                  z_109 = ATgetArgument(t, 1);
                  w_109 = ATgetArgument(t, 2);
                  v_109 = ATgetArgument(t, 3);
                  {
                    ATerm b_34 = NULL,i_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_5 = NULL;
                    t = SSLgetAnnotations(x_109);
                    b_34 = t;
                    t = y_109;
                    t = u_140(t);
                    i_34 = t;
                    t = z_109;
                    t = u_140(t);
                    k_34 = t;
                    t = w_109;
                    t = u_140(t);
                    l_34 = t;
                    t = v_109;
                    t = s_140(t);
                    m_34 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, i_34, k_34, l_34, m_34);
                    n_5 = t;
                    t = SSLsetAnnotations(n_5, b_34);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      y_109 = ATgetArgument(t, 0);
                      z_109 = ATgetArgument(t, 1);
                      w_109 = ATgetArgument(t, 2);
                      {
                        ATerm t_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,o_5 = NULL;
                        t = SSLgetAnnotations(x_109);
                        t_35 = t;
                        t = y_109;
                        t = u_140(t);
                        z_35 = t;
                        t = z_109;
                        t = u_140(t);
                        a_36 = t;
                        t = w_109;
                        t = u_140(t);
                        b_36 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, z_35, a_36, b_36);
                        o_5 = t;
                        t = SSLsetAnnotations(o_5, t_35);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          y_109 = ATgetArgument(t, 0);
                          z_109 = ATgetArgument(t, 1);
                          {
                            ATerm q_36 = NULL,x_36 = NULL,e_37 = NULL,p_5 = NULL;
                            t = SSLgetAnnotations(x_109);
                            q_36 = t;
                            t = y_109;
                            t = u_140(t);
                            x_36 = t;
                            t = z_109;
                            t = s_140(t);
                            e_37 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, x_36, e_37);
                            p_5 = t;
                            t = SSLsetAnnotations(p_5, q_36);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              y_109 = ATgetArgument(t, 0);
                              z_109 = ATgetArgument(t, 1);
                              {
                                ATerm d_38 = NULL,h_38 = NULL,j_38 = NULL,q_5 = NULL;
                                t = SSLgetAnnotations(x_109);
                                d_38 = t;
                                t = y_109;
                                t = u_140(t);
                                h_38 = t;
                                t = z_109;
                                t = s_140(t);
                                j_38 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, h_38, j_38);
                                q_5 = t;
                                t = SSLsetAnnotations(q_5, d_38);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  y_109 = ATgetArgument(t, 0);
                                  z_109 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_39 = NULL,b_40 = NULL,c_40 = NULL,r_5 = NULL;
                                    t = SSLgetAnnotations(x_109);
                                    q_39 = t;
                                    t = y_109;
                                    t = u_140(t);
                                    b_40 = t;
                                    t = z_109;
                                    t = s_140(t);
                                    c_40 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, b_40, c_40);
                                    r_5 = t;
                                    t = SSLsetAnnotations(r_5, q_39);
                                  }
                                }
                              else
                                {
                                  ATerm z_40 = NULL,e_41 = NULL,h_41 = NULL,t_5 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      y_109 = ATgetArgument(t, 0);
                                      z_109 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(x_109);
                                  z_40 = t;
                                  t = y_109;
                                  t = u_140(t);
                                  e_41 = t;
                                  t = z_109;
                                  t = s_140(t);
                                  h_41 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, e_41, h_41);
                                  t_5 = t;
                                  t = SSLsetAnnotations(t_5, z_40);
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
ATerm dynrule_sargs_1_0 (ATerm w_140 (ATerm), ATerm t)
{
  ATerm r_110 = NULL,s_110 = NULL,u_110 = NULL;
  ATerm p_43 = t;
  int r_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          r_110 = ATgetArgument(t, 0);
          {
            ATerm s_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_43);
      t = r_110;
      if(match_cons(t, sym_DynRuleId_1))
        {
          s_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_110;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm t_43 = ATgetArgument(t, 0);
          u_110 = ATgetArgument(t, 1);
          {
            ATerm u_43 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = u_110;
    }
  else
    {
      t = p_43;
      {
        ATerm v_43 = t;
        int y_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                r_110 = ATgetArgument(t, 0);
                {
                  ATerm z_43 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_43);
            t = r_110;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_110 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_110;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm b_44 = ATgetArgument(t, 0);
                u_110 = ATgetArgument(t, 1);
                {
                  ATerm c_44 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = u_110;
          }
        else
          {
            t = v_43;
            if(match_cons(t, sym_AddDynRule_2))
              {
                r_110 = ATgetArgument(t, 0);
                {
                  ATerm d_44 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = r_110;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_110 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_110;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm g_44 = ATgetArgument(t, 0);
                u_110 = ATgetArgument(t, 1);
                {
                  ATerm i_44 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = u_110;
          }
      }
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm l_111 = NULL;
  ATerm y_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_111 = ATgetArgument(t, 0);
          {
            ATerm b_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_44);
      t = l_111;
    }
  else
    {
      t = y_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_111;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm t_111 = NULL;
  ATerm c_45 = t;
  int d_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_111 = ATgetArgument(t, 0);
          {
            ATerm e_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_45);
      t = t_111;
    }
  else
    {
      t = c_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_111;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm f_111 = NULL;
  ATerm f_45 = t;
  int l_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm m_45 = ATgetArgument(t, 0);
          f_111 = ATgetArgument(t, 1);
          {
            ATerm n_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_45);
      t = f_111;
      t = map_1_0(c_5, t);
    }
  else
    {
      t = f_45;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm o_45 = ATgetArgument(t, 0);
          f_111 = ATgetArgument(t, 1);
          {
            ATerm p_45 = ATgetArgument(t, 2);
          }
          {
            ATerm r_45 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = f_111;
      t = map_1_0(d_5, t);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm y_111 = NULL;
  ATerm w_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_111 = ATgetArgument(t, 0);
          {
            ATerm y_45 = ATgetArgument(t, 1);
          }
          {
            ATerm z_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_45);
      t = y_111;
    }
  else
    {
      t = w_45;
      if(match_cons(t, sym_SDefT_4))
        {
          y_111 = ATgetArgument(t, 0);
          {
            ATerm a_46 = ATgetArgument(t, 1);
          }
          {
            ATerm b_46 = ATgetArgument(t, 2);
          }
          {
            ATerm c_46 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_111;
    }
  return(t);
}
static ATerm c_13 (ATerm t_28, ATerm s_28, ATerm t)
{
  t = t_28;
  t = map_1_0(e_5, t);
  return(t);
}
ATerm SVar_1_0 (ATerm u_118 (ATerm), ATerm t)
{
  ATerm f_112 = NULL,g_112 = NULL,h_112 = NULL,i_112 = NULL,e_6 = NULL;
  i_112 = t;
  if(match_cons(t, sym_SVar_1))
    {
      g_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_112);
  f_112 = t;
  t = g_112;
  t = u_118(t);
  h_112 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, h_112);
  e_6 = t;
  t = SSLsetAnnotations(e_6, f_112);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm d_46 = t;
  int f_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_112 = NULL,o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL;
      n_112 = t;
      if(match_cons(t, sym_Let_2))
        {
          o_112 = ATgetArgument(t, 0);
          p_112 = ATgetArgument(t, 1);
          t = n_112;
          t = c_13(o_112, p_112, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              o_112 = ATgetArgument(t, 0);
              p_112 = ATgetArgument(t, 1);
              q_112 = ATgetArgument(t, 2);
              t = p_112;
              t = map_1_0(h_5, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  o_112 = ATgetArgument(t, 0);
                  p_112 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, o_112);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_112 = ATgetArgument(t, 0);
                      p_112 = ATgetArgument(t, 1);
                      q_112 = ATgetArgument(t, 2);
                      r_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_112;
                  t = map_1_0(i_5, t);
                }
            }
        }
      LocalPopChoice(f_46);
    }
  else
    {
      t = d_46;
      {
        ATerm g_46 = t;
        int h_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(h_46);
          }
        else
          {
            t = g_46;
            t = dynrule_sargs_1_0(m_5, t);
          }
      }
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm a_113 = NULL;
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_113 = ATgetArgument(t, 0);
          {
            ATerm m_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_46);
      t = a_113;
    }
  else
    {
      t = j_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_113;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm o_113 = NULL;
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_113 = ATgetArgument(t, 0);
          {
            ATerm p_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_46);
      t = o_113;
    }
  else
    {
      t = n_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_113;
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = map_1_0(s_5, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm t_113 = NULL;
  ATerm r_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_113 = ATgetArgument(t, 0);
          {
            ATerm t_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_46);
      t = t_113;
    }
  else
    {
      t = r_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_113;
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  t = rename_4_0(SVar_1_0, g_5, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm y_140 (ATerm), ATerm z_140 (ATerm), ATerm a_141 (ATerm), ATerm b_141 (ATerm), ATerm c_141 (ATerm), ATerm d_141 (ATerm), ATerm t)
{
  ATerm a_117 = NULL,b_117 = NULL,c_117 = NULL;
  a_117 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      b_117 = ATgetArgument(t, 0);
      c_117 = ATgetArgument(t, 1);
      {
        ATerm u_41 = NULL,y_41 = NULL,z_41 = NULL,d_42 = NULL,e_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,p_42 = NULL,t_42 = NULL,u_42 = NULL,x_42 = NULL,l_6 = NULL,k_6 = NULL,j_6 = NULL;
        t = SSLgetAnnotations(a_117);
        u_41 = t;
        t = b_117;
        if(match_cons(t, sym_DynRuleId_1))
          {
            d_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_117);
        z_41 = t;
        t = d_42;
        if(match_cons(t, sym_RDecT_3))
          {
            l_42 = ATgetArgument(t, 0);
            m_42 = ATgetArgument(t, 1);
            n_42 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_42);
        k_42 = t;
        t = l_42;
        t = y_140(t);
        p_42 = t;
        t = m_42;
        t = z_140(t);
        t_42 = t;
        t = n_42;
        t = a_141(t);
        u_42 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, p_42, t_42, u_42);
        j_6 = t;
        t = SSLsetAnnotations(j_6, k_42);
        x_42 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, x_42);
        k_6 = t;
        t = SSLsetAnnotations(k_6, z_41);
        e_42 = t;
        t = c_117;
        t = b_141(t);
        y_41 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, e_42, y_41);
        l_6 = t;
        t = SSLsetAnnotations(l_6, u_41);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          b_117 = ATgetArgument(t, 0);
          c_117 = ATgetArgument(t, 1);
          {
            ATerm n_43 = NULL,w_43 = NULL,x_43 = NULL,a_44 = NULL,e_44 = NULL,h_44 = NULL,l_44 = NULL,p_44 = NULL,s_44 = NULL,t_44 = NULL,w_44 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,q_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,q_6 = NULL,p_6 = NULL,o_6 = NULL,m_6 = NULL;
            t = SSLgetAnnotations(a_117);
            n_43 = t;
            t = b_117;
            if(match_cons(t, sym_DynRuleId_1))
              {
                w_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_117);
            t_44 = t;
            t = w_44;
            if(match_cons(t, sym_RDecT_3))
              {
                j_45 = ATgetArgument(t, 0);
                k_45 = ATgetArgument(t, 1);
                q_45 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_44);
            i_45 = t;
            t = j_45;
            t = y_140(t);
            s_45 = t;
            t = k_45;
            t = z_140(t);
            t_45 = t;
            t = q_45;
            t = a_141(t);
            u_45 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, s_45, t_45, u_45);
            m_6 = t;
            t = SSLsetAnnotations(m_6, i_45);
            v_45 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, v_45);
            o_6 = t;
            t = SSLsetAnnotations(o_6, t_44);
            h_45 = t;
            t = c_117;
            if(match_cons(t, sym_Rule_3))
              {
                x_43 = ATgetArgument(t, 0);
                a_44 = ATgetArgument(t, 1);
                e_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_117);
            w_43 = t;
            t = x_43;
            t = b_141(t);
            h_44 = t;
            t = a_44;
            t = c_141(t);
            l_44 = t;
            t = e_44;
            t = d_141(t);
            p_44 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, h_44, l_44, p_44);
            p_6 = t;
            t = SSLsetAnnotations(p_6, w_43);
            s_44 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, h_45, s_44);
            q_6 = t;
            t = SSLsetAnnotations(q_6, n_43);
          }
        }
      else
        {
          ATerm i_46 = NULL,l_46 = NULL,u_46 = NULL,v_46 = NULL,b_47 = NULL,d_47 = NULL,e_47 = NULL,g_47 = NULL,i_47 = NULL,k_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,y_47 = NULL,z_47 = NULL,f_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL,x_6 = NULL,u_6 = NULL,t_6 = NULL,s_6 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              b_117 = ATgetArgument(t, 0);
              c_117 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_117);
          i_46 = t;
          t = b_117;
          if(match_cons(t, sym_DynRuleId_1))
            {
              m_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_117);
          k_47 = t;
          t = m_47;
          if(match_cons(t, sym_RDecT_3))
            {
              p_47 = ATgetArgument(t, 0);
              y_47 = ATgetArgument(t, 1);
              z_47 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_47);
          o_47 = t;
          t = p_47;
          t = y_140(t);
          f_48 = t;
          t = y_47;
          t = z_140(t);
          i_48 = t;
          t = z_47;
          t = a_141(t);
          j_48 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, f_48, i_48, j_48);
          s_6 = t;
          t = SSLsetAnnotations(s_6, o_47);
          k_48 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, k_48);
          t_6 = t;
          t = SSLsetAnnotations(t_6, k_47);
          n_47 = t;
          t = c_117;
          if(match_cons(t, sym_Rule_3))
            {
              u_46 = ATgetArgument(t, 0);
              v_46 = ATgetArgument(t, 1);
              b_47 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_117);
          l_46 = t;
          t = u_46;
          t = b_141(t);
          d_47 = t;
          t = v_46;
          t = c_141(t);
          e_47 = t;
          t = b_47;
          t = d_141(t);
          g_47 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, d_47, e_47, g_47);
          u_6 = t;
          t = SSLsetAnnotations(u_6, l_46);
          i_47 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, n_47, i_47);
          x_6 = t;
          t = SSLsetAnnotations(x_6, i_46);
        }
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_46 = ATgetArgument(t, 0);
      if(((ATgetType(w_46) != AT_LIST) || !(ATisEmpty(w_46))))
        _fail(t);
      {
        ATerm x_46 = ATgetArgument(t, 1);
        if(((ATgetType(x_46) != AT_LIST) || !(ATisEmpty(x_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_46 = ATgetArgument(t, 0);
      if(((ATgetType(y_46) == AT_LIST) && !(ATisEmpty(y_46))))
        {
          r_50 = ATgetFirst((ATermList) y_46);
          s_50 = (ATerm) ATgetNext((ATermList) y_46);
        }
      else
        _fail(t);
      {
        ATerm z_46 = ATgetArgument(t, 1);
        if(((ATgetType(z_46) == AT_LIST) && !(ATisEmpty(z_46))))
          {
            t_50 = ATgetFirst((ATermList) z_46);
            u_50 = (ATerm) ATgetNext((ATermList) z_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_50, t_50), (ATerm) ATmakeAppl(sym__2, s_50, u_50));
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL;
  if(match_cons(t, sym__2))
    {
      b_51 = ATgetArgument(t, 0);
      c_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_51), b_51);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm i_51 = NULL,m_51 = NULL,n_51 = NULL;
  if(match_cons(t, sym__2))
    {
      i_51 = ATgetArgument(t, 0);
      n_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_51;
  {
    ATerm a_47 = t;
    int f_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_47);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_51);
      }
    else
      {
        t = a_47;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_47 = ATgetArgument(t, 0);
            m_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_51, m_51);
      }
  }
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_47 = ATgetArgument(t, 0);
      if(((ATgetType(l_47) != AT_LIST) || !(ATisEmpty(l_47))))
        _fail(t);
      {
        ATerm q_47 = ATgetArgument(t, 1);
        if(((ATgetType(q_47) != AT_LIST) || !(ATisEmpty(q_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,q_53 = NULL,r_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_47 = ATgetArgument(t, 0);
      if(((ATgetType(r_47) == AT_LIST) && !(ATisEmpty(r_47))))
        {
          i_53 = ATgetFirst((ATermList) r_47);
          j_53 = (ATerm) ATgetNext((ATermList) r_47);
        }
      else
        _fail(t);
      {
        ATerm s_47 = ATgetArgument(t, 1);
        if(((ATgetType(s_47) == AT_LIST) && !(ATisEmpty(s_47))))
          {
            q_53 = ATgetFirst((ATermList) s_47);
            r_53 = (ATerm) ATgetNext((ATermList) s_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_53, q_53), (ATerm) ATmakeAppl(sym__2, j_53, r_53));
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL;
  if(match_cons(t, sym__2))
    {
      w_53 = ATgetArgument(t, 0);
      x_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_53), w_53);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm b_54 = NULL,d_54 = NULL,e_54 = NULL;
  if(match_cons(t, sym__2))
    {
      b_54 = ATgetArgument(t, 0);
      e_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_54;
  {
    ATerm t_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_47);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_54);
      }
    else
      {
        t = t_47;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_47 = ATgetArgument(t, 0);
            d_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_54, d_54);
      }
  }
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_48 = ATgetArgument(t, 0);
      if(((ATgetType(a_48) != AT_LIST) || !(ATisEmpty(a_48))))
        _fail(t);
      {
        ATerm b_48 = ATgetArgument(t, 1);
        if(((ATgetType(b_48) != AT_LIST) || !(ATisEmpty(b_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_48 = ATgetArgument(t, 0);
      if(((ATgetType(c_48) == AT_LIST) && !(ATisEmpty(c_48))))
        {
          m_55 = ATgetFirst((ATermList) c_48);
          n_55 = (ATerm) ATgetNext((ATermList) c_48);
        }
      else
        _fail(t);
      {
        ATerm d_48 = ATgetArgument(t, 1);
        if(((ATgetType(d_48) == AT_LIST) && !(ATisEmpty(d_48))))
          {
            o_55 = ATgetFirst((ATermList) d_48);
            p_55 = (ATerm) ATgetNext((ATermList) d_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_55, o_55), (ATerm) ATmakeAppl(sym__2, n_55, p_55));
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm q_55 = NULL,s_55 = NULL;
  if(match_cons(t, sym__2))
    {
      q_55 = ATgetArgument(t, 0);
      s_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_55), q_55);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm v_55 = NULL,x_55 = NULL,y_55 = NULL;
  if(match_cons(t, sym__2))
    {
      v_55 = ATgetArgument(t, 0);
      y_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_55;
  {
    ATerm e_48 = t;
    int g_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_48);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_55);
      }
    else
      {
        t = e_48;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_48 = ATgetArgument(t, 0);
            x_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_55, x_55);
      }
  }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_48 = ATgetArgument(t, 0);
      if(((ATgetType(m_48) != AT_LIST) || !(ATisEmpty(m_48))))
        _fail(t);
      {
        ATerm n_48 = ATgetArgument(t, 1);
        if(((ATgetType(n_48) != AT_LIST) || !(ATisEmpty(n_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm y_121 = NULL,z_121 = NULL,a_122 = NULL,b_122 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_48 = ATgetArgument(t, 0);
      if(((ATgetType(o_48) == AT_LIST) && !(ATisEmpty(o_48))))
        {
          y_121 = ATgetFirst((ATermList) o_48);
          z_121 = (ATerm) ATgetNext((ATermList) o_48);
        }
      else
        _fail(t);
      {
        ATerm p_48 = ATgetArgument(t, 1);
        if(((ATgetType(p_48) == AT_LIST) && !(ATisEmpty(p_48))))
          {
            a_122 = ATgetFirst((ATermList) p_48);
            b_122 = (ATerm) ATgetNext((ATermList) p_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_121, a_122), (ATerm) ATmakeAppl(sym__2, z_121, b_122));
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm c_122 = NULL,d_122 = NULL;
  if(match_cons(t, sym__2))
    {
      c_122 = ATgetArgument(t, 0);
      d_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_122), c_122);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm h_122 = NULL,j_122 = NULL,k_122 = NULL;
  if(match_cons(t, sym__2))
    {
      h_122 = ATgetArgument(t, 0);
      k_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_122;
  {
    ATerm q_48 = t;
    int r_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm s_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_48);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_122);
      }
    else
      {
        t = q_48;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_48 = ATgetArgument(t, 0);
            j_122 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_122, j_122);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm n_140 (ATerm), ATerm t)
{
  ATerm w_48 = t;
  int x_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_121 = NULL,q_121 = NULL,r_121 = NULL,s_121 = NULL,t_121 = NULL;
      p_121 = t;
      if(match_cons(t, sym_Scope_2))
        {
          q_121 = ATgetArgument(t, 0);
          r_121 = ATgetArgument(t, 1);
          {
            ATerm v_48 = NULL,z_48 = NULL,o_7 = NULL;
            t = SSLgetAnnotations(p_121);
            v_48 = t;
            t = q_121;
            t = n_140(t);
            z_48 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, z_48, r_121);
            o_7 = t;
            t = SSLsetAnnotations(o_7, v_48);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              q_121 = ATgetArgument(t, 0);
              {
                ATerm j_49 = NULL,s_7 = NULL;
                t = SSLgetAnnotations(p_121);
                j_49 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, q_121);
                s_7 = t;
                t = SSLsetAnnotations(s_7, j_49);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  q_121 = ATgetArgument(t, 0);
                  r_121 = ATgetArgument(t, 1);
                  s_121 = ATgetArgument(t, 2);
                  {
                    ATerm h_50 = NULL,l_50 = NULL,m_50 = NULL,t_7 = NULL;
                    t = SSLgetAnnotations(p_121);
                    h_50 = t;
                    t = s_121;
                    t = n_140(t);
                    m_50 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_121, m_50);
                    t = genzip_4_0(u_5, v_5, w_5, x_5, t);
                    l_50 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, q_121, r_121, l_50);
                    t_7 = t;
                    t = SSLsetAnnotations(t_7, h_50);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_121 = ATgetArgument(t, 0);
                      r_121 = ATgetArgument(t, 1);
                      s_121 = ATgetArgument(t, 2);
                      t_121 = ATgetArgument(t, 3);
                      {
                        ATerm t_52 = NULL,f_53 = NULL,g_53 = NULL,u_7 = NULL;
                        t = SSLgetAnnotations(p_121);
                        t_52 = t;
                        t = s_121;
                        t = n_140(t);
                        g_53 = t;
                        t = (ATerm) ATmakeAppl(sym__2, s_121, g_53);
                        t = genzip_4_0(y_5, z_5, a_6, b_6, t);
                        f_53 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, q_121, r_121, f_53, t_121);
                        u_7 = t;
                        t = SSLsetAnnotations(u_7, t_52);
                      }
                    }
                  else
                    {
                      ATerm d_55 = NULL,j_55 = NULL,k_55 = NULL,v_7 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          q_121 = ATgetArgument(t, 0);
                          r_121 = ATgetArgument(t, 1);
                          s_121 = ATgetArgument(t, 2);
                          t_121 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(p_121);
                      d_55 = t;
                      t = s_121;
                      t = n_140(t);
                      k_55 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_121, k_55);
                      t = genzip_4_0(c_6, d_6, f_6, g_6, t);
                      j_55 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, q_121, r_121, j_55, t_121);
                      v_7 = t;
                      t = SSLsetAnnotations(v_7, d_55);
                    }
                }
            }
        }
      LocalPopChoice(x_48);
    }
  else
    {
      t = w_48;
      {
        static ATerm i_6 (ATerm t);
        static ATerm i_6 (ATerm t)
        {
          ATerm w_121 = NULL,x_121 = NULL;
          x_121 = t;
          t = n_140(t);
          w_121 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_121, w_121);
          t = genzip_4_0(n_6, r_6, v_6, w_6, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, i_6, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm o_140 (ATerm), ATerm p_140 (ATerm), ATerm q_140 (ATerm), ATerm t)
{
  ATerm b_128 = NULL,c_128 = NULL,d_128 = NULL,e_128 = NULL,f_128 = NULL;
  e_128 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_128 = ATgetArgument(t, 0);
      d_128 = ATgetArgument(t, 1);
      {
        ATerm w_56 = NULL,e_57 = NULL,f_57 = NULL,z_9 = NULL;
        t = SSLgetAnnotations(e_128);
        w_56 = t;
        t = f_128;
        t = q_140(t);
        e_57 = t;
        t = d_128;
        t = o_140(t);
        f_57 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, e_57, f_57);
        z_9 = t;
        t = SSLsetAnnotations(z_9, w_56);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          f_128 = ATgetArgument(t, 0);
          {
            ATerm s_57 = NULL,u_57 = NULL,x_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,d_10 = NULL,c_10 = NULL;
            t = SSLgetAnnotations(e_128);
            s_57 = t;
            t = f_128;
            if(match_cons(t, sym_Rule_3))
              {
                x_57 = ATgetArgument(t, 0);
                z_57 = ATgetArgument(t, 1);
                a_58 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_128);
            u_57 = t;
            t = x_57;
            t = o_140(t);
            b_58 = t;
            t = z_57;
            t = o_140(t);
            c_58 = t;
            t = a_58;
            t = o_140(t);
            d_58 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, b_58, c_58, d_58);
            c_10 = t;
            t = SSLsetAnnotations(c_10, u_57);
            e_58 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, e_58);
            d_10 = t;
            t = SSLsetAnnotations(d_10, s_57);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              f_128 = ATgetArgument(t, 0);
              d_128 = ATgetArgument(t, 1);
              b_128 = ATgetArgument(t, 2);
              {
                ATerm n_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,e_10 = NULL;
                t = SSLgetAnnotations(e_128);
                n_58 = t;
                t = f_128;
                t = q_140(t);
                s_58 = t;
                t = d_128;
                t = q_140(t);
                t_58 = t;
                t = b_128;
                t = q_140(t);
                u_58 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, s_58, t_58, u_58);
                e_10 = t;
                t = SSLsetAnnotations(e_10, n_58);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  f_128 = ATgetArgument(t, 0);
                  d_128 = ATgetArgument(t, 1);
                  b_128 = ATgetArgument(t, 2);
                  c_128 = ATgetArgument(t, 3);
                  {
                    ATerm i_59 = NULL,u_59 = NULL,v_59 = NULL,a_60 = NULL,b_60 = NULL,h_10 = NULL;
                    t = SSLgetAnnotations(e_128);
                    i_59 = t;
                    t = f_128;
                    t = q_140(t);
                    u_59 = t;
                    t = d_128;
                    t = q_140(t);
                    v_59 = t;
                    t = b_128;
                    t = q_140(t);
                    a_60 = t;
                    t = c_128;
                    t = o_140(t);
                    b_60 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, u_59, v_59, a_60, b_60);
                    h_10 = t;
                    t = SSLsetAnnotations(h_10, i_59);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_128 = ATgetArgument(t, 0);
                      d_128 = ATgetArgument(t, 1);
                      b_128 = ATgetArgument(t, 2);
                      c_128 = ATgetArgument(t, 3);
                      {
                        ATerm a_61 = NULL,j_61 = NULL,k_61 = NULL,n_61 = NULL,p_61 = NULL,i_10 = NULL;
                        t = SSLgetAnnotations(e_128);
                        a_61 = t;
                        t = f_128;
                        t = q_140(t);
                        j_61 = t;
                        t = d_128;
                        t = q_140(t);
                        k_61 = t;
                        t = b_128;
                        t = q_140(t);
                        n_61 = t;
                        t = c_128;
                        t = o_140(t);
                        p_61 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, j_61, k_61, n_61, p_61);
                        i_10 = t;
                        t = SSLsetAnnotations(i_10, a_61);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          f_128 = ATgetArgument(t, 0);
                          d_128 = ATgetArgument(t, 1);
                          {
                            ATerm q_62 = NULL,y_62 = NULL,z_62 = NULL,j_10 = NULL;
                            t = SSLgetAnnotations(e_128);
                            q_62 = t;
                            t = f_128;
                            t = q_140(t);
                            y_62 = t;
                            t = d_128;
                            t = o_140(t);
                            z_62 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, y_62, z_62);
                            j_10 = t;
                            t = SSLsetAnnotations(j_10, q_62);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              f_128 = ATgetArgument(t, 0);
                              d_128 = ATgetArgument(t, 1);
                              {
                                ATerm t_63 = NULL,j_64 = NULL,m_64 = NULL,m_10 = NULL;
                                t = SSLgetAnnotations(e_128);
                                t_63 = t;
                                t = f_128;
                                t = q_140(t);
                                j_64 = t;
                                t = d_128;
                                t = o_140(t);
                                m_64 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, j_64, m_64);
                                m_10 = t;
                                t = SSLsetAnnotations(m_10, t_63);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  f_128 = ATgetArgument(t, 0);
                                  d_128 = ATgetArgument(t, 1);
                                  {
                                    ATerm u_64 = NULL,y_64 = NULL,z_64 = NULL,s_10 = NULL;
                                    t = SSLgetAnnotations(e_128);
                                    u_64 = t;
                                    t = f_128;
                                    t = q_140(t);
                                    y_64 = t;
                                    t = d_128;
                                    t = o_140(t);
                                    z_64 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, y_64, z_64);
                                    s_10 = t;
                                    t = SSLsetAnnotations(s_10, u_64);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      f_128 = ATgetArgument(t, 0);
                                      {
                                        ATerm j_65 = NULL,m_65 = NULL,t_10 = NULL;
                                        t = SSLgetAnnotations(e_128);
                                        j_65 = t;
                                        t = f_128;
                                        t = o_140(t);
                                        m_65 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, m_65);
                                        t_10 = t;
                                        t = SSLsetAnnotations(t_10, j_65);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          f_128 = ATgetArgument(t, 0);
                                          {
                                            ATerm s_65 = NULL,u_65 = NULL,u_10 = NULL;
                                            t = SSLgetAnnotations(e_128);
                                            s_65 = t;
                                            t = f_128;
                                            t = o_140(t);
                                            u_65 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, u_65);
                                            u_10 = t;
                                            t = SSLsetAnnotations(u_10, s_65);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              f_128 = ATgetArgument(t, 0);
                                              {
                                                ATerm c_66 = NULL,e_66 = NULL,z_10 = NULL;
                                                t = SSLgetAnnotations(e_128);
                                                c_66 = t;
                                                t = f_128;
                                                t = o_140(t);
                                                e_66 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, e_66);
                                                z_10 = t;
                                                t = SSLsetAnnotations(z_10, c_66);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  f_128 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm x_66 = NULL,z_66 = NULL,a_11 = NULL;
                                                    t = SSLgetAnnotations(e_128);
                                                    x_66 = t;
                                                    t = f_128;
                                                    t = o_140(t);
                                                    z_66 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, z_66);
                                                    a_11 = t;
                                                    t = SSLsetAnnotations(a_11, x_66);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm m_67 = NULL,s_67 = NULL,b_11 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      f_128 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(e_128);
                                                  m_67 = t;
                                                  t = f_128;
                                                  t = o_140(t);
                                                  s_67 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, s_67);
                                                  b_11 = t;
                                                  t = SSLsetAnnotations(b_11, m_67);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm x_140 (ATerm), ATerm t)
{
  ATerm b_129 = NULL,c_129 = NULL,f_129 = NULL;
  ATerm y_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          b_129 = ATgetArgument(t, 0);
          {
            ATerm b_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_49);
      t = b_129;
      if(match_cons(t, sym_DynRuleId_1))
        {
          c_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_129;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm c_49 = ATgetArgument(t, 0);
          ATerm d_49 = ATgetArgument(t, 1);
          f_129 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_129;
    }
  else
    {
      t = y_48;
      {
        ATerm e_49 = t;
        int f_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                b_129 = ATgetArgument(t, 0);
                {
                  ATerm g_49 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_49);
            t = b_129;
            if(match_cons(t, sym_DynRuleId_1))
              {
                c_129 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = c_129;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm h_49 = ATgetArgument(t, 0);
                ATerm k_49 = ATgetArgument(t, 1);
                f_129 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_129;
          }
        else
          {
            t = e_49;
            if(match_cons(t, sym_AddDynRule_2))
              {
                b_129 = ATgetArgument(t, 0);
                {
                  ATerm l_49 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = b_129;
            if(match_cons(t, sym_DynRuleId_1))
              {
                c_129 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = c_129;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm m_49 = ATgetArgument(t, 0);
                ATerm n_49 = ATgetArgument(t, 1);
                f_129 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_129;
          }
      }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm v_129 = NULL;
  ATerm o_49 = t;
  int p_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_129 = ATgetArgument(t, 0);
          {
            ATerm r_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_49);
      t = v_129;
    }
  else
    {
      t = o_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_129;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm b_130 = NULL;
  ATerm s_49 = t;
  int t_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_130 = ATgetArgument(t, 0);
          {
            ATerm u_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_49);
      t = b_130;
    }
  else
    {
      t = s_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_130;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm q_129 = NULL;
  ATerm v_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm x_49 = ATgetArgument(t, 0);
          ATerm y_49 = ATgetArgument(t, 1);
          q_129 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(w_49);
      t = q_129;
      t = map_1_0(y_6, t);
    }
  else
    {
      t = v_49;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm z_49 = ATgetArgument(t, 0);
          ATerm b_50 = ATgetArgument(t, 1);
          q_129 = ATgetArgument(t, 2);
          {
            ATerm c_50 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = q_129;
      t = map_1_0(z_6, t);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm x_130 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_130);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm d_50 = t;
  int f_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_50);
    }
  else
    {
      t = d_50;
      {
        ATerm g_50 = t;
        int i_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_50);
          }
        else
          {
            t = g_50;
            {
              ATerm j_50 = t;
              int k_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL,c_131 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_130 = ATgetArgument(t, 0);
                      a_131 = ATgetArgument(t, 1);
                      b_131 = ATgetArgument(t, 2);
                      c_131 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_131;
                  t = map_1_0(c_7, t);
                  LocalPopChoice(k_50);
                }
              else
                {
                  t = j_50;
                  {
                    ATerm n_50 = t;
                    int o_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_50);
                      }
                    else
                      {
                        t = n_50;
                        t = dynrule_targs_1_0(d_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm j_131 = NULL;
  ATerm p_50 = t;
  int v_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_131 = ATgetArgument(t, 0);
          {
            ATerm w_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_50);
      t = j_131;
    }
  else
    {
      t = p_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_131;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = map_1_0(e_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm o_131 = NULL;
  ATerm x_50 = t;
  int y_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_131 = ATgetArgument(t, 0);
          {
            ATerm z_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_50);
      t = o_131;
    }
  else
    {
      t = x_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_131;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm s_131 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_131);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm a_51 = t;
  int d_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_51);
    }
  else
    {
      t = a_51;
      {
        ATerm e_51 = t;
        int f_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_51);
          }
        else
          {
            t = e_51;
            {
              ATerm g_51 = t;
              int h_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_131 = NULL,v_131 = NULL,w_131 = NULL,x_131 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_131 = ATgetArgument(t, 0);
                      v_131 = ATgetArgument(t, 1);
                      w_131 = ATgetArgument(t, 2);
                      x_131 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_131;
                  t = map_1_0(j_7, t);
                  LocalPopChoice(h_51);
                }
              else
                {
                  t = g_51;
                  {
                    ATerm j_51 = t;
                    int l_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_51);
                      }
                    else
                      {
                        t = j_51;
                        t = dynrule_targs_1_0(k_7, t);
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
  ATerm e_132 = NULL;
  ATerm o_51 = t;
  int p_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_132 = ATgetArgument(t, 0);
          {
            ATerm q_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_51);
      t = e_132;
    }
  else
    {
      t = o_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_132;
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = map_1_0(l_7, t);
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm j_132 = NULL;
  ATerm r_51 = t;
  int s_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_132 = ATgetArgument(t, 0);
          {
            ATerm u_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_51);
      t = j_132;
    }
  else
    {
      t = r_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_132;
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm n_132 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_132);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm v_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(y_51);
          }
        else
          {
            t = x_51;
            {
              ATerm z_51 = t;
              int b_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_132 = NULL,q_132 = NULL,r_132 = NULL,s_132 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_132 = ATgetArgument(t, 0);
                      q_132 = ATgetArgument(t, 1);
                      r_132 = ATgetArgument(t, 2);
                      s_132 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_132;
                  t = map_1_0(p_7, t);
                  LocalPopChoice(b_52);
                }
              else
                {
                  t = z_51;
                  {
                    ATerm c_52 = t;
                    int d_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_52);
                      }
                    else
                      {
                        t = c_52;
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
static ATerm p_7 (ATerm t)
{
  ATerm z_132 = NULL;
  ATerm e_52 = t;
  int f_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_132 = ATgetArgument(t, 0);
          {
            ATerm g_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_52);
      t = z_132;
    }
  else
    {
      t = e_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_132;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = map_1_0(w_7, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm e_133 = NULL;
  ATerm h_52 = t;
  int j_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_133 = ATgetArgument(t, 0);
          {
            ATerm k_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_52);
      t = e_133;
    }
  else
    {
      t = h_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_133;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm i_133 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_133);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm l_52 = t;
  int m_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_52);
    }
  else
    {
      t = l_52;
      {
        ATerm n_52 = t;
        int o_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_52);
          }
        else
          {
            t = n_52;
            {
              ATerm p_52 = t;
              int r_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_133 = NULL,l_133 = NULL,m_133 = NULL,n_133 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_133 = ATgetArgument(t, 0);
                      l_133 = ATgetArgument(t, 1);
                      m_133 = ATgetArgument(t, 2);
                      n_133 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_133;
                  t = map_1_0(z_7, t);
                  LocalPopChoice(r_52);
                }
              else
                {
                  t = p_52;
                  {
                    ATerm s_52 = t;
                    int u_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_52);
                      }
                    else
                      {
                        t = s_52;
                        t = dynrule_targs_1_0(b_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm u_133 = NULL;
  ATerm v_52 = t;
  int w_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_133 = ATgetArgument(t, 0);
          {
            ATerm y_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_52);
      t = u_133;
    }
  else
    {
      t = v_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_133;
    }
  return(t);
}
static ATerm b_8 (ATerm t)
{
  t = map_1_0(d_8, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm z_133 = NULL;
  ATerm z_52 = t;
  int a_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_133 = ATgetArgument(t, 0);
          {
            ATerm b_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_53);
      t = z_133;
    }
  else
    {
      t = z_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_133;
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm d_134 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_134);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm c_53 = t;
  int d_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_53);
    }
  else
    {
      t = c_53;
      {
        ATerm e_53 = t;
        int h_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_53);
          }
        else
          {
            t = e_53;
            {
              ATerm k_53 = t;
              int l_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_134 = NULL,g_134 = NULL,h_134 = NULL,i_134 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_134 = ATgetArgument(t, 0);
                      g_134 = ATgetArgument(t, 1);
                      h_134 = ATgetArgument(t, 2);
                      i_134 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_134;
                  t = map_1_0(g_8, t);
                  LocalPopChoice(l_53);
                }
              else
                {
                  t = k_53;
                  {
                    ATerm m_53 = t;
                    int o_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_53);
                      }
                    else
                      {
                        t = m_53;
                        t = dynrule_targs_1_0(h_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm p_134 = NULL;
  ATerm p_53 = t;
  int s_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_134 = ATgetArgument(t, 0);
          {
            ATerm t_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_53);
      t = p_134;
    }
  else
    {
      t = p_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_134;
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = map_1_0(i_8, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm u_134 = NULL;
  ATerm v_53 = t;
  int y_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_134 = ATgetArgument(t, 0);
          {
            ATerm z_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_53);
      t = u_134;
    }
  else
    {
      t = v_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_134;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm v_130 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      v_130 = ATgetArgument(t, 0);
      t = v_130;
      t = free_vars_3_0(a_7, b_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          v_130 = ATgetArgument(t, 0);
          t = v_130;
          t = free_vars_3_0(f_7, g_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              v_130 = ATgetArgument(t, 0);
              t = v_130;
              t = free_vars_3_0(m_7, n_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  v_130 = ATgetArgument(t, 0);
                  t = v_130;
                  t = free_vars_3_0(x_7, y_7, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      v_130 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = v_130;
                  t = free_vars_3_0(e_8, f_8, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm f_13 (ATerm a_158 (ATerm), ATerm h_64, ATerm g_64, ATerm t)
{
  static ATerm m_135 (ATerm t);
  static ATerm m_135 (ATerm t)
  {
    ATerm h_135 = NULL,i_135 = NULL,j_135 = NULL;
    h_135 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_64;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_135 = ATgetFirst((ATermList) t);
            j_135 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm a_54 = t;
          int c_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = h_135;
              {
                static ATerm j_8 (ATerm t);
                static ATerm j_8 (ATerm t)
                {
                  t = g_64;
                  return(t);
                }
                t = h_13(a_158, j_8, i_135, j_135, t);
              }
              t = m_135(t);
              LocalPopChoice(c_54);
            }
          else
            {
              t = a_54;
              {
                ATerm f_68 = NULL,i_68 = NULL,q_13 = NULL;
                t = SSLgetAnnotations(h_135);
                f_68 = t;
                t = j_135;
                t = m_135(t);
                i_68 = t;
                t = (ATerm) ATinsert(CheckATermList(i_68), i_135);
                q_13 = t;
                t = SSLsetAnnotations(q_13, f_68);
              }
            }
        }
      }
    return(t);
  }
  t = h_64;
  t = m_135(t);
  return(t);
}
static ATerm h_13 (ATerm d_158 (ATerm), ATerm e_158 (ATerm), ATerm l_64, ATerm k_64, ATerm t)
{
  t = e_158(t);
  {
    static ATerm l_8 (ATerm t);
    static ATerm l_8 (ATerm t)
    {
      ATerm o_135 = NULL;
      o_135 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_64, o_135);
      t = d_158(t);
      return(t);
    }
    t = fetch_1_0(l_8, t);
  }
  t = k_64;
  return(t);
}
static ATerm i_13 (ATerm v_157 (ATerm), ATerm f_64, ATerm e_64, ATerm t)
{
  static ATerm e_136 (ATerm t);
  static ATerm e_136 (ATerm t)
  {
    ATerm z_135 = NULL,a_136 = NULL,b_136 = NULL;
    z_135 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_135;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_136 = ATgetFirst((ATermList) t);
            b_136 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_54 = t;
          int g_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_135;
              {
                static ATerm m_8 (ATerm t);
                static ATerm m_8 (ATerm t)
                {
                  t = e_64;
                  return(t);
                }
                t = h_13(v_157, m_8, a_136, b_136, t);
              }
              t = e_136(t);
              LocalPopChoice(g_54);
            }
          else
            {
              t = f_54;
              {
                ATerm w_68 = NULL,c_69 = NULL,t_13 = NULL;
                t = SSLgetAnnotations(z_135);
                w_68 = t;
                t = b_136;
                t = e_136(t);
                c_69 = t;
                t = (ATerm) ATinsert(CheckATermList(c_69), a_136);
                t_13 = t;
                t = SSLsetAnnotations(t_13, w_68);
              }
            }
        }
      }
    return(t);
  }
  t = f_64;
  t = e_136(t);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_54 = ATgetArgument(t, 0);
      if(((ATgetType(h_54) != AT_LIST) || !(ATisEmpty(h_54))))
        _fail(t);
      {
        ATerm i_54 = ATgetArgument(t, 1);
        if(((ATgetType(i_54) != AT_LIST) || !(ATisEmpty(i_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm m_136 = NULL,n_136 = NULL,o_136 = NULL,p_136 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_54 = ATgetArgument(t, 0);
      if(((ATgetType(j_54) == AT_LIST) && !(ATisEmpty(j_54))))
        {
          m_136 = ATgetFirst((ATermList) j_54);
          n_136 = (ATerm) ATgetNext((ATermList) j_54);
        }
      else
        _fail(t);
      {
        ATerm k_54 = ATgetArgument(t, 1);
        if(((ATgetType(k_54) == AT_LIST) && !(ATisEmpty(k_54))))
          {
            o_136 = ATgetFirst((ATermList) k_54);
            p_136 = (ATerm) ATgetNext((ATermList) k_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_136, o_136), (ATerm) ATmakeAppl(sym__2, n_136, p_136));
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm q_136 = NULL,r_136 = NULL;
  if(match_cons(t, sym__2))
    {
      q_136 = ATgetArgument(t, 0);
      r_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_136), q_136);
  return(t);
}
static ATerm k_13 (ATerm a_858, ATerm f_858, ATerm d_87, ATerm t)
{
  ATerm h_136 = NULL,i_136 = NULL,j_136 = NULL,k_136 = NULL;
  t = SSL_explode_term(f_858);
  if(match_cons(t, sym__2))
    {
      h_136 = ATgetArgument(t, 0);
      j_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(a_858);
  if(match_cons(t, sym__2))
    {
      if((h_136 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_136, j_136);
  t = genzip_4_0(s_8, w_8, x_8, _id, t);
  k_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_136, d_87);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm p_148 (ATerm), ATerm q_148 (ATerm), ATerm t)
{
  static ATerm t_136 (ATerm t);
  static ATerm t_136 (ATerm t)
  {
    ATerm l_54 = t;
    int m_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_148(t);
        LocalPopChoice(m_54);
      }
    else
      {
        t = l_54;
        t = q_148(t);
        t = t_136(t);
      }
    return(t);
  }
  t = t_136(t);
  return(t);
}
ATerm for_3_0 (ATerm s_148 (ATerm), ATerm t_148 (ATerm), ATerm u_148 (ATerm), ATerm t)
{
  t = s_148(t);
  t = while_not_2_0(t_148, u_148, t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm a_137 = NULL;
  a_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_137);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm b_137 = NULL,c_137 = NULL,d_137 = NULL,e_137 = NULL,x_13 = NULL;
  e_137 = t;
  if(match_cons(t, sym__2))
    {
      c_137 = ATgetArgument(t, 0);
      d_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_137);
  b_137 = t;
  t = d_137;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_137, d_137);
  x_13 = t;
  t = SSLsetAnnotations(x_13, b_137);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm x_137 = NULL,y_137 = NULL,z_137 = NULL,a_138 = NULL,b_138 = NULL;
  x_137 = t;
  if(match_cons(t, sym__2))
    {
      y_137 = ATgetArgument(t, 0);
      z_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_137;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_138 = ATgetFirst((ATermList) t);
      b_138 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_54 = t;
        int o_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_138(y_137, z_137, x_137, t);
            LocalPopChoice(o_54);
          }
        else
          {
            t = n_54;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_137), a_138), b_138);
          }
      }
    }
  else
    {
      t = l_138(y_137, z_137, x_137, t);
    }
  return(t);
}
static ATerm l_138 (ATerm f_137, ATerm g_137, ATerm h_137, ATerm t)
{
  ATerm i_137 = NULL,l_137 = NULL,c_14 = NULL,o_137 = NULL,p_137 = NULL,q_137 = NULL,r_137 = NULL;
  t = SSLgetAnnotations(h_137);
  i_137 = t;
  t = g_137;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_137 = ATgetFirst((ATermList) t);
      r_137 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_137;
  if(match_cons(t, sym__2))
    {
      p_137 = ATgetArgument(t, 0);
      q_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_54 = t;
    int q_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_137;
        if((p_137 != t))
          {
            _fail(t);
          }
        t = r_137;
        LocalPopChoice(q_54);
      }
    else
      {
        t = p_54;
        t = g_137;
        t = k_13(p_137, q_137, r_137, t);
      }
  }
  l_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_137, l_137);
  c_14 = t;
  t = SSLsetAnnotations(c_14, i_137);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm k_138 = NULL;
  if(match_cons(t, sym__2))
    {
      k_138 = ATgetArgument(t, 0);
      if((k_138 != ATgetArgument(t, 1)))
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
  ATerm r_54 = t;
  int s_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(y_8, z_8, a_9, t);
      LocalPopChoice(s_54);
    }
  else
    {
      t = r_54;
      {
        ATerm f_138 = NULL,g_138 = NULL,h_138 = NULL;
        f_138 = t;
        if(match_cons(t, sym__2))
          {
            g_138 = ATgetArgument(t, 0);
            h_138 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_138;
        t = i_13(b_9, g_138, h_138, t);
      }
    }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL;
  if(match_cons(t, sym__2))
    {
      z_69 = ATgetArgument(t, 0);
      a_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_13(k_9, z_69, a_70, t);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm c_70 = NULL;
  if(match_cons(t, sym__2))
    {
      c_70 = ATgetArgument(t, 0);
      if((c_70 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm k_70 = NULL,n_70 = NULL;
  if(match_cons(t, sym__2))
    {
      k_70 = ATgetArgument(t, 0);
      n_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_13(n_9, k_70, n_70, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm w_70 = NULL;
  if(match_cons(t, sym__2))
    {
      w_70 = ATgetArgument(t, 0);
      if((w_70 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm z_164 (ATerm), ATerm a_165 (ATerm), ATerm b_165 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm z_138 (ATerm t);
  static ATerm z_138 (ATerm t)
  {
    ATerm t_54 = t;
    int u_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_164(t);
        LocalPopChoice(u_54);
      }
    else
      {
        t = t_54;
        {
          ATerm v_54 = t;
          int w_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_138 = NULL,o_138 = NULL,m_69 = NULL,n_69 = NULL;
              n_138 = t;
              t = a_165(t);
              o_138 = t;
              t = n_138;
              {
                static ATerm c_9 (ATerm t);
                static ATerm c_9 (ATerm t)
                {
                  ATerm q_138 = NULL;
                  t = z_138(t);
                  q_138 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_138, o_138);
                  t = diff_0_0(t);
                  return(t);
                }
                t = b_165(c_9, z_138, e_9, t);
              }
              n_69 = t;
              t = SSL_explode_term(n_69);
              if(match_cons(t, sym__2))
                {
                  ATerm x_54 = ATgetArgument(t, 0);
                  m_69 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_69;
              t = foldr_3_0(f_9, j_9, _id, t);
              LocalPopChoice(w_54);
            }
          else
            {
              t = v_54;
              {
                ATerm e_70 = NULL,f_70 = NULL;
                f_70 = t;
                t = SSL_explode_term(f_70);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_54 = ATgetArgument(t, 0);
                    e_70 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_70;
                t = foldr_3_0(l_9, m_9, z_138, t);
              }
            }
        }
      }
    return(t);
  }
  t = z_138(t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm m_139 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_139);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm z_54 = t;
  int a_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_55);
    }
  else
    {
      t = z_54;
      {
        ATerm b_55 = t;
        int c_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_55);
          }
        else
          {
            t = b_55;
            {
              ATerm e_55 = t;
              int f_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_139 = NULL,p_139 = NULL,q_139 = NULL,v_139 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_139 = ATgetArgument(t, 0);
                      p_139 = ATgetArgument(t, 1);
                      q_139 = ATgetArgument(t, 2);
                      v_139 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_139;
                  t = map_1_0(r_9, t);
                  LocalPopChoice(f_55);
                }
              else
                {
                  t = e_55;
                  {
                    ATerm g_55 = t;
                    int h_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_55);
                      }
                    else
                      {
                        t = g_55;
                        t = dynrule_targs_1_0(s_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm c_140 = NULL;
  ATerm i_55 = t;
  int l_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_140 = ATgetArgument(t, 0);
          {
            ATerm r_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_55);
      t = c_140;
    }
  else
    {
      t = i_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_140 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_140;
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  t = map_1_0(b_10, t);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm h_140 = NULL;
  ATerm t_55 = t;
  int u_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_140 = ATgetArgument(t, 0);
          {
            ATerm w_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_55);
      t = h_140;
    }
  else
    {
      t = t_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_140 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_140;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm f_139 = NULL,j_139 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_139 = ATgetArgument(t, 0);
      t = j_139;
      if(match_cons(t, sym_Rule_3))
        {
          f_139 = ATgetArgument(t, 0);
          {
            ATerm z_55 = ATgetArgument(t, 1);
          }
          {
            ATerm a_56 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_139;
      t = free_vars_3_0(o_9, p_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_139 = ATgetArgument(t, 0);
          {
            ATerm b_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_139;
    }
  return(t);
}
ATerm Var_1_0 (ATerm q_118 (ATerm), ATerm t)
{
  ATerm l_140 = NULL,m_140 = NULL,v_140 = NULL,e_141 = NULL,f_14 = NULL;
  e_141 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_141);
  l_140 = t;
  t = m_140;
  t = q_118(t);
  v_140 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_140);
  f_14 = t;
  t = SSLsetAnnotations(f_14, l_140);
  return(t);
}
static ATerm m_13 (ATerm h_163 (ATerm), ATerm i_163 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_67, ATerm p_67, ATerm o_67, ATerm t)
{
  static ATerm f_10 (ATerm t);
  static ATerm g_10 (ATerm t);
  static ATerm f_10 (ATerm t)
  {
    ATerm g_141 = NULL;
    g_141 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_141, o_67);
    t = h_163(t);
    return(t);
  }
  static ATerm g_10 (ATerm t)
  {
    ATerm h_141 = NULL;
    h_141 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_141, p_67);
    t = h_163(t);
    return(t);
  }
  t = q_67;
  t = i_163(f_10, g_10, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm k_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_56 = ATgetArgument(t, 0);
      if(((ATgetType(c_56) != AT_LIST) || !(ATisEmpty(c_56))))
        _fail(t);
      {
        ATerm d_56 = ATgetArgument(t, 1);
        if(((ATgetType(d_56) != AT_LIST) || !(ATisEmpty(d_56))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm q_141 = NULL,r_141 = NULL,s_141 = NULL,t_141 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_56 = ATgetArgument(t, 0);
      if(((ATgetType(e_56) == AT_LIST) && !(ATisEmpty(e_56))))
        {
          q_141 = ATgetFirst((ATermList) e_56);
          r_141 = (ATerm) ATgetNext((ATermList) e_56);
        }
      else
        _fail(t);
      {
        ATerm f_56 = ATgetArgument(t, 1);
        if(((ATgetType(f_56) == AT_LIST) && !(ATisEmpty(f_56))))
          {
            s_141 = ATgetFirst((ATermList) f_56);
            t_141 = (ATerm) ATgetNext((ATermList) f_56);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_141, s_141), (ATerm) ATmakeAppl(sym__2, r_141, t_141));
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm u_141 = NULL,v_141 = NULL;
  if(match_cons(t, sym__2))
    {
      u_141 = ATgetArgument(t, 0);
      v_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_141), u_141);
  return(t);
}
static ATerm n_13 (ATerm b_163 (ATerm), ATerm c_163 (ATerm (ATerm), ATerm), ATerm i_67, ATerm l_67, ATerm t)
{
  ATerm k_141 = NULL,l_141 = NULL,m_141 = NULL,n_141 = NULL,p_141 = NULL;
  t = i_67;
  t = b_163(t);
  k_141 = t;
  t = map_1_0(new_0_0, t);
  l_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_141, l_141);
  t = genzip_4_0(k_10, l_10, n_10, _id, t);
  p_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_141, l_67);
  t = conc_0_0(t);
  m_141 = t;
  t = i_67;
  {
    static ATerm o_10 (ATerm t);
    static ATerm o_10 (ATerm t)
    {
      t = l_141;
      return(t);
    }
    t = c_163(o_10, t);
  }
  n_141 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_141, l_67, m_141);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm d_142 = NULL,e_142 = NULL,f_142 = NULL,g_142 = NULL,h_142 = NULL,i_142 = NULL,j_142 = NULL;
  f_142 = t;
  if(match_cons(t, sym__2))
    {
      g_142 = ATgetArgument(t, 0);
      h_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_142;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_142 = ATgetFirst((ATermList) t);
      j_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_142;
  if(match_cons(t, sym__2))
    {
      d_142 = ATgetArgument(t, 0);
      e_142 = ATgetArgument(t, 1);
      {
        ATerm g_56 = t;
        int h_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_142;
            if((g_142 != t))
              {
                _fail(t);
              }
            t = e_142;
            LocalPopChoice(h_56);
          }
        else
          {
            t = g_56;
            t = (ATerm) ATmakeAppl(sym__2, g_142, j_142);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, g_142, j_142);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm p_163 (ATerm), ATerm t)
{
  static ATerm h_143 (ATerm t);
  static ATerm h_143 (ATerm t)
  {
    ATerm i_56 = t;
    int j_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_163(t);
        LocalPopChoice(j_56);
      }
    else
      {
        t = i_56;
        {
          ATerm e_143 = NULL,f_143 = NULL,g_143 = NULL;
          static ATerm q_10 (ATerm t);
          static ATerm q_10 (ATerm t)
          {
            ATerm p_71 = NULL;
            p_71 = t;
            t = (ATerm) ATmakeAppl(sym__2, p_71, not_null(g_143));
            t = h_143(t);
            return(t);
          }
          e_143 = t;
          if(match_cons(t, sym__2))
            {
              f_143 = ATgetArgument(t, 0);
              if(((g_143 != NULL) && (g_143 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                g_143 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_143;
          t = SRTS_all(q_10, t);
        }
      }
    return(t);
  }
  t = h_143(t);
  return(t);
}
ATerm rename_4_0 (ATerm w_162 (ATerm (ATerm), ATerm), ATerm x_162 (ATerm), ATerm y_162 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_162 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm l_143 = NULL;
  static ATerm a_144 (ATerm t);
  static ATerm a_144 (ATerm t)
  {
    static ATerm r_10 (ATerm t);
    static ATerm r_10 (ATerm t)
    {
      ATerm u_143 = NULL,v_143 = NULL,w_143 = NULL;
      u_143 = t;
      if(match_cons(t, sym__2))
        {
          v_143 = ATgetArgument(t, 0);
          w_143 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm k_56 = t;
        int l_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_10 (ATerm t);
            static ATerm x_10 (ATerm t)
            {
              ATerm z_143 = NULL;
              z_143 = t;
              t = (ATerm) ATmakeAppl(sym__2, z_143, w_143);
              t = lookup_0_0(t);
              return(t);
            }
            t = v_143;
            t = w_162(x_10, t);
            LocalPopChoice(l_56);
          }
        else
          {
            t = k_56;
            {
              ATerm f_72 = NULL,i_72 = NULL,j_72 = NULL;
              t = u_143;
              t = n_13(x_162, z_162, v_143, w_143, t);
              if(match_cons(t, sym__3))
                {
                  f_72 = ATgetArgument(t, 0);
                  i_72 = ATgetArgument(t, 1);
                  j_72 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = m_13(a_144, y_162, f_72, i_72, j_72, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(r_10, t);
    return(t);
  }
  l_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_143, (ATerm) ATempty);
  t = a_144(t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm m_56 = t;
  int n_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_56);
    }
  else
    {
      t = m_56;
      {
        ATerm o_56 = t;
        int p_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_144 = NULL,h_144 = NULL,i_144 = NULL,j_144 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                g_144 = ATgetArgument(t, 0);
                h_144 = ATgetArgument(t, 1);
                i_144 = ATgetArgument(t, 2);
                j_144 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = i_144;
            t = map_1_0(c_11, t);
            LocalPopChoice(p_56);
          }
        else
          {
            t = o_56;
            {
              ATerm q_56 = t;
              int r_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Bind8_0_0(t);
                  LocalPopChoice(r_56);
                }
              else
                {
                  t = q_56;
                  t = dynrule_targs_1_0(d_11, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm q_144 = NULL;
  ATerm s_56 = t;
  int t_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_144 = ATgetArgument(t, 0);
          {
            ATerm u_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_56);
      t = q_144;
    }
  else
    {
      t = s_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_144 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_144;
    }
  return(t);
}
static ATerm d_11 (ATerm t)
{
  t = map_1_0(e_11, t);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm v_144 = NULL;
  ATerm v_56 = t;
  int x_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_144 = ATgetArgument(t, 0);
          {
            ATerm y_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_56);
      t = v_144;
    }
  else
    {
      t = v_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_144 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_144;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, y_10, tboundin_3_0, tpaste_1_0, t);
  t = srename_0_0(t);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm j_77 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      j_77 = ATgetArgument(t, 0);
      {
        ATerm z_56 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = j_77;
  return(t);
}
static ATerm g_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_57 = ATgetArgument(t, 0);
      if(((ATgetType(a_57) != AT_LIST) || !(ATisEmpty(a_57))))
        _fail(t);
      {
        ATerm b_57 = ATgetArgument(t, 1);
        if(((ATgetType(b_57) != AT_LIST) || !(ATisEmpty(b_57))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm k_77 = NULL,l_77 = NULL,m_77 = NULL,p_77 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_57 = ATgetArgument(t, 0);
      if(((ATgetType(c_57) == AT_LIST) && !(ATisEmpty(c_57))))
        {
          k_77 = ATgetFirst((ATermList) c_57);
          l_77 = (ATerm) ATgetNext((ATermList) c_57);
        }
      else
        _fail(t);
      {
        ATerm d_57 = ATgetArgument(t, 1);
        if(((ATgetType(d_57) == AT_LIST) && !(ATisEmpty(d_57))))
          {
            m_77 = ATgetFirst((ATermList) d_57);
            p_77 = (ATerm) ATgetNext((ATermList) d_57);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_77, m_77), (ATerm) ATmakeAppl(sym__2, l_77, p_77));
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm r_77 = NULL,t_77 = NULL;
  if(match_cons(t, sym__2))
    {
      r_77 = ATgetArgument(t, 0);
      t_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_77), r_77);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL;
  if(match_cons(t, sym__2))
    {
      u_77 = ATgetArgument(t, 0);
      v_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_77), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_77))));
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm x_146 = NULL,y_146 = NULL,z_146 = NULL,a_147 = NULL,b_147 = NULL;
  x_146 = t;
  if(match_cons(t, sym_CallT_3))
    {
      y_146 = ATgetArgument(t, 0);
      a_147 = ATgetArgument(t, 1);
      b_147 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_146;
  if(match_cons(t, sym_SVar_1))
    {
      z_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_57 = t;
    int h_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_74 = NULL,t_74 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_146), (ATerm)ATempty, (ATerm) ATempty);
        s_74 = t;
        t = term_e_17;
        t_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_146), (ATerm)ATempty, (ATerm) ATempty));
        t = i_7(t_74, s_74, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = x_146;
        _fail(t);
        LocalPopChoice(h_57);
      }
    else
      {
        t = g_57;
        {
          ATerm i_57 = t;
          int j_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_75 = NULL,t_75 = NULL;
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_146), (ATerm)ATempty, (ATerm) ATempty);
              s_75 = t;
              t = term_e_17;
              t_75 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_146), (ATerm)ATempty, (ATerm) ATempty));
              t = i_7(t_75, s_75, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = x_146;
              _fail(t);
              LocalPopChoice(j_57);
            }
          else
            {
              t = i_57;
              {
                ATerm l_57 = t;
                int m_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_76 = NULL,m_76 = NULL,t_76 = NULL,v_76 = NULL,z_76 = NULL,a_77 = NULL,f_77 = NULL,g_77 = NULL,i_77 = NULL,i_78 = NULL,j_78 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_146), (ATerm)ATempty, (ATerm) ATempty);
                    i_78 = t;
                    t = term_e_17;
                    j_78 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_146), (ATerm)ATempty, (ATerm) ATempty));
                    t = i_7(j_78, i_78, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm n_57 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) n_57) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        l_76 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = l_76;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((z_146 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        m_76 = ATgetArgument(t, 1);
                        v_76 = ATgetArgument(t, 2);
                        t_76 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, m_76, a_147, t_76);
                    t = substitute_args_0_0(t);
                    a_77 = t;
                    t = v_76;
                    t = map_1_0(f_11, t);
                    z_76 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_147, z_76);
                    t = genzip_4_0(g_11, h_11, i_11, j_11, t);
                    f_77 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_146), (ATerm)ATempty, (ATerm) ATempty);
                    g_77 = t;
                    t = term_o_57;
                    i_77 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_146), (ATerm)ATempty, (ATerm) ATempty), term_o_57);
                    t = u_13(l_11, g_77, i_77, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, z_76, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_77), a_77));
                    t = simplify_0_0(t);
                    LocalPopChoice(m_57);
                  }
                else
                  {
                    t = l_57;
                    {
                      ATerm j_79 = NULL,k_79 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_146), (ATerm)ATempty, (ATerm) ATempty);
                      j_79 = t;
                      t = term_e_17;
                      k_79 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_146), (ATerm)ATempty, (ATerm) ATempty));
                      t = i_7(k_79, j_79, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      t = x_146;
                      _fail(t);
                    }
                  }
              }
            }
        }
      }
  }
  return(t);
}
ATerm leq_0_0 (ATerm t)
{
  ATerm q_57 = t;
  if((PushChoice() == 0))
    {
      ATerm g_147 = NULL,h_147 = NULL;
      if(match_cons(t, sym__2))
        {
          g_147 = ATgetArgument(t, 0);
          h_147 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, g_147, h_147);
      {
        ATerm r_57 = t;
        int t_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(g_147, h_147);
            LocalPopChoice(t_57);
          }
        else
          {
            t = r_57;
            t = SSL_gtr(g_147, h_147);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, g_147, h_147);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_57;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm f_161 (ATerm), ATerm g_161 (ATerm), ATerm h_161 (ATerm), ATerm t)
{
  ATerm j_147 = NULL,k_147 = NULL,l_147 = NULL;
  j_147 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_147;
      t = f_161(t);
    }
  else
    {
      ATerm o_147 = NULL,p_147 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_147 = ATgetFirst((ATermList) t);
          l_147 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_147;
      t = h_161(t);
      o_147 = t;
      t = l_147;
      t = foldr_3_0(f_161, g_161, h_161, t);
      p_147 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_147, p_147);
      t = g_161(t);
    }
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_w_57;
  return(t);
}
static ATerm n_11 (ATerm t)
{
  ATerm g_80 = NULL,j_80 = NULL;
  if(match_cons(t, sym__2))
    {
      g_80 = ATgetArgument(t, 0);
      j_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15(g_80, j_80, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm h_158 (ATerm), ATerm t)
{
  ATerm s_147 = NULL,t_147 = NULL,u_147 = NULL,p_79 = NULL;
  u_147 = t;
  {
    ATerm y_57 = t;
    int f_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_158(t);
        t = term_o_17;
        LocalPopChoice(f_58);
      }
    else
      {
        t = y_57;
        t = term_w_57;
      }
  }
  s_147 = t;
  t = SSL_explode_term(u_147);
  if(match_cons(t, sym__2))
    {
      ATerm g_58 = ATgetArgument(t, 0);
      p_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_79;
  {
    static ATerm q_11 (ATerm t);
    static ATerm q_11 (ATerm t)
    {
      t = occurrences_1_0(h_158, t);
      return(t);
    }
    t = foldr_3_0(m_11, n_11, q_11, t);
  }
  t_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_147, t_147);
  t = m_15(s_147, t_147, t);
  return(t);
}
static ATerm s_13 (ATerm s_139 (ATerm), ATerm w_27, ATerm v_27, ATerm t)
{
  ATerm x_147 = NULL,b_148 = NULL;
  x_147 = t;
  t = v_27;
  {
    ATerm h_58 = t;
    if((PushChoice() == 0))
      {
        static ATerm r_11 (ATerm t);
        static ATerm r_11 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm i_58 = ATgetArgument(t, 0);
              if(match_cons(i_58, sym_SVar_1))
                {
                  if((w_27 != ATgetArgument(i_58, 0)))
                    {
                      _fail(ATgetArgument(i_58, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm j_58 = ATgetArgument(t, 1);
              }
              {
                ATerm k_58 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(r_11, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_58;
      }
  }
  t = s_139(t);
  {
    static ATerm s_11 (ATerm t);
    static ATerm s_11 (ATerm t)
    {
      if(match_cons(t, sym_CallT_3))
        {
          ATerm l_58 = ATgetArgument(t, 0);
          if(match_cons(l_58, sym_SVar_1))
            {
              if((w_27 != ATgetArgument(l_58, 0)))
                {
                  _fail(ATgetArgument(l_58, 0));
                }
            }
          else
            _fail(t);
          {
            ATerm m_58 = ATgetArgument(t, 1);
          }
          {
            ATerm o_58 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = occurrences_1_0(s_11, t);
  }
  b_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_148, term_o_17);
  t = leq_0_0(t);
  t = x_147;
  return(t);
}
static ATerm u_13 (ATerm z_149 (ATerm), ATerm i_38, ATerm g_38, ATerm t)
{
  ATerm c_148 = NULL,d_148 = NULL,e_148 = NULL,f_148 = NULL,g_148 = NULL,h_148 = NULL,i_148 = NULL,j_148 = NULL;
  f_148 = t;
  t = z_149(t);
  c_148 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_148, i_38, g_38);
  t = t_15(c_148, i_38, g_38, t);
  {
    ATerm p_58 = t;
    int q_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_148 = NULL;
        t = term_r_58;
        k_148 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_148, term_r_58);
        t = s_15(c_148, k_148, t);
        {
          ATerm v_58 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = v_58;
            }
        }
        LocalPopChoice(q_58);
      }
    else
      {
        t = p_58;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_148 = ATgetFirst((ATermList) t);
      e_148 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_148, term_r_58, (ATerm) ATinsert(CheckATermList(e_148), (ATerm) ATinsert(CheckATermList(d_148), i_38)));
  t = lookup_table_0_1(c_148, t);
  j_148 = t;
  t = term_r_58;
  g_148 = t;
  t = (ATerm) ATinsert(CheckATermList(e_148), (ATerm) ATinsert(CheckATermList(d_148), i_38));
  h_148 = t;
  t = j_148;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(g_148, h_148, i_148, t);
  t = f_148;
  return(t);
}
static ATerm w_13 (ATerm r_39, ATerm s_39, ATerm t)
{
  ATerm l_148 = NULL,m_148 = NULL;
  m_148 = t;
  {
    ATerm w_58 = t;
    int x_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_39, s_39);
        t = s_15(r_39, s_39, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_58 = ATgetFirst((ATermList) t);
            l_148 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_58);
        {
          ATerm n_148 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, r_39, s_39, l_148);
          t = lookup_table_0_1(r_39, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_148 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_15(s_39, l_148, n_148, t);
          t = (ATerm) ATmakeAppl(sym__3, r_39, s_39, l_148);
        }
      }
    else
      {
        t = w_58;
        {
          ATerm v_148 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, r_39, s_39);
          t = lookup_table_0_1(r_39, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              v_148 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_15(s_39, v_148, t);
          t = (ATerm) ATmakeAppl(sym__2, r_39, s_39);
        }
      }
  }
  t = m_148;
  return(t);
}
ATerm end_scope_1_0 (ATerm w_149 (ATerm), ATerm t)
{
  ATerm x_148 = NULL,y_148 = NULL,z_148 = NULL,a_149 = NULL,b_149 = NULL,c_149 = NULL,d_149 = NULL;
  a_149 = t;
  t = w_149(t);
  z_148 = t;
  {
    ATerm z_58 = t;
    int a_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_149 = NULL;
        t = term_r_58;
        e_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_148, term_r_58);
        t = s_15(z_148, e_149, t);
        {
          ATerm b_59 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_59;
            }
        }
        LocalPopChoice(a_59);
      }
    else
      {
        t = z_58;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_148 = ATgetFirst((ATermList) t);
      x_148 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, z_148, term_r_58, x_148);
  t = lookup_table_0_1(z_148, t);
  d_149 = t;
  t = term_r_58;
  b_149 = t;
  t = d_149;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(b_149, x_148, c_149, t);
  t = y_148;
  {
    static ATerm t_11 (ATerm t);
    static ATerm t_11 (ATerm t)
    {
      ATerm f_149 = NULL;
      f_149 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_148, f_149);
      t = w_13(z_148, f_149, t);
      return(t);
    }
    t = map_1_0(t_11, t);
  }
  t = a_149;
  return(t);
}
ATerm restore_always_2_0 (ATerm j_145 (ATerm), ATerm k_145 (ATerm), ATerm t)
{
  ATerm c_59 = t;
  int d_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_145(t);
      t = k_145(t);
      LocalPopChoice(d_59);
    }
  else
    {
      t = c_59;
      t = k_145(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_149 (ATerm), ATerm t)
{
  ATerm h_149 = NULL,i_149 = NULL,j_149 = NULL,k_149 = NULL,l_149 = NULL,m_149 = NULL,o_149 = NULL;
  i_149 = t;
  t = v_149(t);
  h_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_149, term_r_58);
  {
    ATerm e_59 = t;
    int f_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_149 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm g_59 = ATgetArgument(t, 0);
            ATerm h_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_58;
        s_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_149, term_r_58);
        t = s_15(h_149, s_149, t);
        LocalPopChoice(f_59);
      }
    else
      {
        t = e_59;
        t = (ATerm) ATempty;
      }
  }
  j_149 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_149, term_r_58, (ATerm) ATinsert(CheckATermList(j_149), (ATerm) ATempty));
  t = lookup_table_0_1(h_149, t);
  o_149 = t;
  t = term_r_58;
  k_149 = t;
  t = (ATerm) ATinsert(CheckATermList(j_149), (ATerm) ATempty);
  l_149 = t;
  t = o_149;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(k_149, l_149, m_149, t);
  t = i_149;
  return(t);
}
ATerm scope_2_0 (ATerm x_149 (ATerm), ATerm y_149 (ATerm), ATerm t)
{
  static ATerm u_11 (ATerm t);
  static ATerm u_11 (ATerm t)
  {
    t = end_scope_1_0(x_149, t);
    return(t);
  }
  t = begin_scope_1_0(x_149, t);
  t = restore_always_2_0(y_149, u_11, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  t = term_e_17;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_f_17;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm inline_sdef_0_0 (ATerm t)
{
  static ATerm w_11 (ATerm t);
  static ATerm w_11 (ATerm t)
  {
    static ATerm z_11 (ATerm t);
    static ATerm z_11 (ATerm t)
    {
      ATerm j_59 = t;
      int k_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_150 = NULL,e_150 = NULL,f_150 = NULL;
          d_150 = t;
          {
            ATerm l_59 = t;
            int m_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    e_150 = ATgetArgument(t, 0);
                    {
                      ATerm n_59 = ATgetArgument(t, 1);
                    }
                    {
                      ATerm o_59 = ATgetArgument(t, 2);
                    }
                    {
                      ATerm p_59 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(m_59);
                {
                  ATerm i_150 = NULL,j_150 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_150), (ATerm)ATempty, (ATerm) ATempty);
                  i_150 = t;
                  t = term_o_57;
                  j_150 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_150), (ATerm)ATempty, (ATerm) ATempty), term_o_57);
                  t = u_13(a_12, i_150, j_150, t);
                  t = d_150;
                }
              }
            else
              {
                t = l_59;
                if(match_cons(t, sym_Let_2))
                  {
                    e_150 = ATgetArgument(t, 0);
                    f_150 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_150;
                {
                  static ATerm b_12 (ATerm t);
                  static ATerm b_12 (ATerm t)
                  {
                    ATerm m_150 = NULL,n_150 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        m_150 = ATgetArgument(t, 0);
                        {
                          ATerm q_59 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm r_59 = ATgetArgument(t, 2);
                        }
                        n_150 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      static ATerm c_12 (ATerm t);
                      static ATerm c_12 (ATerm t)
                      {
                        t = f_150;
                        return(t);
                      }
                      t = s_13(c_12, m_150, n_150, t);
                    }
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(b_12, t);
                }
                t = (ATerm) ATmakeAppl(sym_Let_2, e_150, f_150);
              }
          }
          LocalPopChoice(k_59);
        }
      else
        {
          t = j_59;
          t = repeat_2_0(InlineCall_0_0, _id, t);
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(x_11, z_11, t);
    return(t);
  }
  t = scope_2_0(v_11, w_11, t);
  return(t);
}
ATerm topdown_1_0 (ATerm y_141 (ATerm), ATerm t)
{
  static ATerm d_12 (ATerm t);
  static ATerm d_12 (ATerm t)
  {
    t = topdown_1_0(y_141, t);
    return(t);
  }
  t = y_141(t);
  t = SRTS_all(d_12, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm s_59 = t;
  int t_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm w_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(t_59);
      {
        ATerm r_150 = NULL,s_150 = NULL;
        r_150 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm x_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        s_150 = t;
        t = SSLgetAnnotations(r_150);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_59 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) y_59) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_59 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(z_59) != AT_LIST) || !(ATisEmpty(z_59))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_150;
      }
    }
  else
    {
      t = s_59;
      {
        ATerm c_60 = t;
        int d_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm e_60 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) e_60) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm f_60 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(d_60);
            _fail(t);
          }
        else
          {
            t = c_60;
          }
      }
    }
  return(t);
}
static ATerm y_13 (ATerm s_107, ATerm r_107, ATerm t)
{
  t = s_107;
  t = topdown_1_0(h_12, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, s_107);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm b_151 = NULL,c_151 = NULL,e_151 = NULL,f_151 = NULL,g_151 = NULL,h_151 = NULL,i_151 = NULL,j_151 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_151 = ATgetArgument(t, 0);
      h_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_151;
  if(match_cons(t, sym_Match_1))
    {
      f_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_151;
  if(match_cons(t, sym_Var_1))
    {
      g_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_151;
  if(match_cons(t, sym_Seq_2))
    {
      i_151 = ATgetArgument(t, 0);
      c_151 = ATgetArgument(t, 1);
      t = i_151;
      if(match_cons(t, sym_Build_1))
        {
          j_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_151;
      if(match_cons(t, sym_Var_1))
        {
          b_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_151;
      if((g_151 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_151)), c_151);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_151;
      if(match_cons(t, sym_Var_1))
        {
          j_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_151;
      if((g_151 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_151));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm r_151 = NULL,s_151 = NULL,u_151 = NULL,v_151 = NULL,w_151 = NULL,x_151 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_151 = ATgetArgument(t, 0);
      w_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_151;
  if(match_cons(t, sym_Build_1))
    {
      v_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_151;
  if(match_cons(t, sym_Seq_2))
    {
      x_151 = ATgetArgument(t, 0);
      s_151 = ATgetArgument(t, 1);
      t = x_151;
      if(match_cons(t, sym_Match_1))
        {
          r_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_151;
      if((v_151 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_151), s_151);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          x_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_151;
      if((v_151 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, v_151);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm f_152 = NULL,g_152 = NULL,i_152 = NULL,j_152 = NULL,k_152 = NULL,l_152 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_152 = ATgetArgument(t, 0);
      k_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_152;
  if(match_cons(t, sym_Match_1))
    {
      j_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_152;
  if(match_cons(t, sym_Seq_2))
    {
      l_152 = ATgetArgument(t, 0);
      g_152 = ATgetArgument(t, 1);
      t = l_152;
      if(match_cons(t, sym_Match_1))
        {
          f_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_152;
      if((j_152 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_152), g_152);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          l_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_152;
      if((j_152 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, j_152);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm t_152 = NULL,u_152 = NULL,v_152 = NULL,x_152 = NULL,z_152 = NULL,a_153 = NULL,b_153 = NULL,c_153 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_152 = ATgetArgument(t, 0);
      z_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_152;
  if(match_cons(t, sym_Build_1))
    {
      ATerm g_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_152;
  if(match_cons(t, sym_Seq_2))
    {
      a_153 = ATgetArgument(t, 0);
      b_153 = ATgetArgument(t, 1);
      t = a_153;
      if(match_cons(t, sym_PrimT_3))
        {
          t_152 = ATgetArgument(t, 0);
          u_152 = ATgetArgument(t, 1);
          v_152 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, t_152, u_152, v_152), b_153);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          a_153 = ATgetArgument(t, 0);
          b_153 = ATgetArgument(t, 1);
          c_153 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, a_153, b_153, c_153);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm o_153 = NULL,p_153 = NULL,r_153 = NULL,t_153 = NULL,u_153 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      r_153 = ATgetArgument(t, 0);
      t_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_153;
  if(match_cons(t, sym_Build_1))
    {
      ATerm i_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_153;
  if(match_cons(t, sym_Seq_2))
    {
      u_153 = ATgetArgument(t, 0);
      p_153 = ATgetArgument(t, 1);
      t = u_153;
      if(match_cons(t, sym_Build_1))
        {
          o_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_153), p_153);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          u_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, u_153);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm r_146 (ATerm), ATerm s_146 (ATerm), ATerm t)
{
  static ATerm e_154 (ATerm t);
  static ATerm e_154 (ATerm t)
  {
    ATerm j_60 = t;
    int k_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_146(t);
        LocalPopChoice(k_60);
      }
    else
      {
        t = j_60;
        {
          ATerm y_153 = NULL,z_153 = NULL,a_154 = NULL,b_154 = NULL,c_154 = NULL,d_154 = NULL,h_14 = NULL;
          t = q_146(t);
          d_154 = t;
          if(match_cons(t, sym__2))
            {
              z_153 = ATgetArgument(t, 0);
              a_154 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_154);
          y_153 = t;
          t = z_153;
          t = s_146(t);
          b_154 = t;
          t = a_154;
          t = e_154(t);
          c_154 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_154, c_154);
          h_14 = t;
          t = SSLsetAnnotations(h_14, y_153);
          t = r_146(t);
        }
      }
    return(t);
  }
  t = e_154(t);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_60 = ATgetArgument(t, 0);
      if(((ATgetType(l_60) != AT_LIST) || !(ATisEmpty(l_60))))
        _fail(t);
      {
        ATerm m_60 = ATgetArgument(t, 1);
        if(((ATgetType(m_60) != AT_LIST) || !(ATisEmpty(m_60))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm d_155 = NULL,e_155 = NULL,f_155 = NULL,h_155 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_60 = ATgetArgument(t, 0);
      if(((ATgetType(n_60) == AT_LIST) && !(ATisEmpty(n_60))))
        {
          d_155 = ATgetFirst((ATermList) n_60);
          e_155 = (ATerm) ATgetNext((ATermList) n_60);
        }
      else
        _fail(t);
      {
        ATerm o_60 = ATgetArgument(t, 1);
        if(((ATgetType(o_60) == AT_LIST) && !(ATisEmpty(o_60))))
          {
            f_155 = ATgetFirst((ATermList) o_60);
            h_155 = (ATerm) ATgetNext((ATermList) o_60);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_155, f_155), (ATerm) ATmakeAppl(sym__2, e_155, h_155));
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm k_155 = NULL,l_155 = NULL;
  if(match_cons(t, sym__2))
    {
      k_155 = ATgetArgument(t, 0);
      l_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_155), k_155);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm m_155 = NULL,n_155 = NULL;
  if(match_cons(t, sym__2))
    {
      m_155 = ATgetArgument(t, 0);
      n_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_155), (ATerm) ATmakeAppl(sym_Match_1, n_155));
  return(t);
}
static ATerm m_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_60 = ATgetArgument(t, 0);
      if(((ATgetType(p_60) != AT_LIST) || !(ATisEmpty(p_60))))
        _fail(t);
      {
        ATerm q_60 = ATgetArgument(t, 1);
        if(((ATgetType(q_60) != AT_LIST) || !(ATisEmpty(q_60))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm u_155 = NULL,v_155 = NULL,w_155 = NULL,z_155 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_60 = ATgetArgument(t, 0);
      if(((ATgetType(r_60) == AT_LIST) && !(ATisEmpty(r_60))))
        {
          u_155 = ATgetFirst((ATermList) r_60);
          v_155 = (ATerm) ATgetNext((ATermList) r_60);
        }
      else
        _fail(t);
      {
        ATerm s_60 = ATgetArgument(t, 1);
        if(((ATgetType(s_60) == AT_LIST) && !(ATisEmpty(s_60))))
          {
            w_155 = ATgetFirst((ATermList) s_60);
            z_155 = (ATerm) ATgetNext((ATermList) s_60);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_155, w_155), (ATerm) ATmakeAppl(sym__2, v_155, z_155));
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm a_156 = NULL,b_156 = NULL;
  if(match_cons(t, sym__2))
    {
      a_156 = ATgetArgument(t, 0);
      b_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_156), a_156);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm c_156 = NULL,d_156 = NULL;
  if(match_cons(t, sym__2))
    {
      c_156 = ATgetArgument(t, 0);
      d_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_156), (ATerm) ATmakeAppl(sym_Match_1, d_156));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm m_154 = NULL,n_154 = NULL,o_154 = NULL,q_154 = NULL,r_154 = NULL,s_154 = NULL,t_154 = NULL,u_154 = NULL,v_154 = NULL,w_154 = NULL,x_154 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_154 = ATgetArgument(t, 0);
      u_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_154;
  if(match_cons(t, sym_Build_1))
    {
      r_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_154;
  if(match_cons(t, sym_Op_2))
    {
      s_154 = ATgetArgument(t, 0);
      t_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_154;
  if(match_cons(t, sym_Seq_2))
    {
      v_154 = ATgetArgument(t, 0);
      o_154 = ATgetArgument(t, 1);
      {
        ATerm c_155 = NULL;
        t = v_154;
        if(match_cons(t, sym_Match_1))
          {
            w_154 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_154;
        if(match_cons(t, sym_Op_2))
          {
            m_154 = ATgetArgument(t, 0);
            n_154 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_154;
        if((s_154 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, t_154, n_154);
        t = genzip_4_0(i_12, j_12, k_12, l_12, t);
        c_155 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_155), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, s_154, t_154)), o_154));
      }
    }
  else
    {
      ATerm t_155 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          v_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_154;
      if(match_cons(t, sym_Op_2))
        {
          w_154 = ATgetArgument(t, 0);
          x_154 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_154;
      if((s_154 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, t_154, x_154);
      t = genzip_4_0(m_12, n_12, o_12, p_12, t);
      t_155 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_155), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, s_154, t_154)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm z_156 = NULL,c_157 = NULL,d_157 = NULL,e_157 = NULL,f_157 = NULL,h_157 = NULL,i_157 = NULL,j_157 = NULL;
  c_157 = t;
  if(match_cons(t, sym_Seq_2))
    {
      d_157 = ATgetArgument(t, 0);
      h_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_157;
  if(match_cons(t, sym_Build_1))
    {
      e_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_157;
  if(match_cons(t, sym_Op_2))
    {
      f_157 = ATgetArgument(t, 0);
      {
        ATerm t_60 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_157;
  {
    ATerm v_60 = t;
    int w_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            i_157 = ATgetArgument(t, 0);
            {
              ATerm x_60 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_60);
        t = i_157;
        if(match_cons(t, sym_Match_1))
          {
            j_157 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_157;
        if(match_cons(t, sym_Op_2))
          {
            z_156 = ATgetArgument(t, 0);
            {
              ATerm y_60 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_157, z_156);
        {
          ATerm z_60 = t;
          if((PushChoice() == 0))
            {
              ATerm t_80 = NULL;
              if(match_cons(t, sym__2))
                {
                  t_80 = ATgetArgument(t, 0);
                  if((t_80 != ATgetArgument(t, 1)))
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
              t = z_60;
            }
        }
        t = term_m_20;
      }
    else
      {
        t = v_60;
        if(match_cons(t, sym_Match_1))
          {
            i_157 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_157;
        if(match_cons(t, sym_Op_2))
          {
            j_157 = ATgetArgument(t, 0);
            {
              ATerm c_61 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_157, j_157);
        {
          ATerm d_61 = t;
          if((PushChoice() == 0))
            {
              ATerm g_81 = NULL;
              if(match_cons(t, sym__2))
                {
                  g_81 = ATgetArgument(t, 0);
                  if((g_81 != ATgetArgument(t, 1)))
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
              t = d_61;
            }
        }
        t = term_m_20;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm c_143 (ATerm), ATerm t)
{
  static ATerm n_157 (ATerm t);
  static ATerm n_157 (ATerm t)
  {
    ATerm e_61 = t;
    int h_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_143(t);
        LocalPopChoice(h_61);
      }
    else
      {
        t = e_61;
        t = SRTS_one(n_157, t);
      }
    return(t);
  }
  t = n_157(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_155 (ATerm), ATerm t)
{
  static ATerm u_158 (ATerm t);
  static ATerm u_158 (ATerm t)
  {
    ATerm r_158 = NULL,s_158 = NULL,t_158 = NULL;
    t_158 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_158 = ATgetFirst((ATermList) t);
        s_158 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_81 = NULL,y_81 = NULL,j_14 = NULL;
          t = SSLgetAnnotations(t_158);
          v_81 = t;
          t = s_158;
          t = u_158(t);
          y_81 = t;
          t = (ATerm) ATinsert(CheckATermList(y_81), r_158);
          j_14 = t;
          t = SSLsetAnnotations(j_14, v_81);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_158;
        t = x_155(t);
      }
    return(t);
  }
  t = u_158(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_157 = NULL,q_157 = NULL,r_157 = NULL;
  p_157 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_157;
    }
  else
    {
      static ATerm r_12 (ATerm t);
      static ATerm r_12 (ATerm t)
      {
        t = not_null(r_157);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_157 = ATgetFirst((ATermList) t);
          if(((r_157 != NULL) && (r_157 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_157 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_157;
      t = at_end_1_0(r_12, t);
    }
  return(t);
}
static ATerm g_159 (ATerm y_158, ATerm t)
{
  ATerm z_158 = NULL;
  t = SSL_explode_term(y_158);
  if(match_cons(t, sym__2))
    {
      ATerm q_61 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_61) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_158;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_159 = NULL,c_159 = NULL,d_159 = NULL;
  d_159 = t;
  if(match_cons(t, sym__2))
    {
      b_159 = ATgetArgument(t, 0);
      c_159 = ATgetArgument(t, 1);
      {
        ATerm s_61 = t;
        int t_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_12 (ATerm t);
            static ATerm s_12 (ATerm t)
            {
              t = c_159;
              return(t);
            }
            t = b_159;
            t = at_end_1_0(s_12, t);
            LocalPopChoice(t_61);
          }
        else
          {
            t = s_61;
            t = g_159(d_159, t);
          }
      }
    }
  else
    {
      t = g_159(d_159, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm z_159 = NULL,a_160 = NULL,b_160 = NULL,c_160 = NULL,d_160 = NULL,e_160 = NULL,f_160 = NULL,g_160 = NULL,h_160 = NULL,i_160 = NULL,j_160 = NULL,k_160 = NULL,l_160 = NULL;
  z_159 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_160 = ATgetArgument(t, 0);
      h_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_160;
  if(match_cons(t, sym_Let_2))
    {
      i_160 = ATgetArgument(t, 0);
      k_160 = ATgetArgument(t, 1);
      {
        ATerm q_160 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, a_160, i_160);
        t = conc_0_0(t);
        q_160 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, q_160, k_160);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          i_160 = ATgetArgument(t, 0);
          k_160 = ATgetArgument(t, 1);
          l_160 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_160;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_160 = ATgetFirst((ATermList) t);
          g_160 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_160;
      if(match_cons(t, sym_SDefT_4))
        {
          c_160 = ATgetArgument(t, 0);
          d_160 = ATgetArgument(t, 1);
          e_160 = ATgetArgument(t, 2);
          f_160 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = d_160;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_160;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_160;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_160;
      if(match_cons(t, sym_SVar_1))
        {
          j_160 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_160;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_160;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_160;
      if((c_160 != t))
        {
          _fail(t);
        }
      t = f_160;
      {
        ATerm u_61 = t;
        if((PushChoice() == 0))
          {
            static ATerm t_12 (ATerm t);
            static ATerm t_12 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm v_61 = ATgetArgument(t, 0);
                  if(match_cons(v_61, sym_SVar_1))
                    {
                      if((c_160 != ATgetArgument(v_61, 0)))
                        {
                          _fail(ATgetArgument(v_61, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm w_61 = ATgetArgument(t, 1);
                    if(((ATgetType(w_61) != AT_LIST) || !(ATisEmpty(w_61))))
                      _fail(t);
                  }
                  {
                    ATerm x_61 = ATgetArgument(t, 2);
                    if(((ATgetType(x_61) != AT_LIST) || !(ATisEmpty(x_61))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(t_12, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_61;
          }
      }
      t = f_160;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm z_160 = NULL,a_161 = NULL,b_161 = NULL,c_161 = NULL,i_161 = NULL,j_161 = NULL,l_161 = NULL,m_161 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      l_161 = ATgetArgument(t, 0);
      t = l_161;
      if(match_cons(t, sym_Seq_2))
        {
          j_161 = ATgetArgument(t, 0);
          a_161 = ATgetArgument(t, 1);
          t = j_161;
          if(match_cons(t, sym_Where_1))
            {
              z_160 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_161;
          if(match_cons(t, sym_Seq_2))
            {
              b_161 = ATgetArgument(t, 0);
              i_161 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_161;
          if(match_cons(t, sym_Build_1))
            {
              c_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, z_160, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_161), i_161)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              j_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, j_161);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          l_161 = ATgetArgument(t, 0);
          t = l_161;
          if(match_cons(t, sym_Test_1))
            {
              j_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, j_161);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              l_161 = ATgetArgument(t, 0);
              t = l_161;
              if(match_cons(t, sym_Not_1))
                {
                  j_161 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, j_161);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  l_161 = ATgetArgument(t, 0);
                  m_161 = ATgetArgument(t, 1);
                  t = m_161;
                  if((l_161 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      l_161 = ATgetArgument(t, 0);
                      m_161 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_161;
                  if((l_161 != t))
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
  ATerm a_162 = NULL,b_162 = NULL,c_162 = NULL,d_162 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      a_162 = ATgetArgument(t, 0);
      d_162 = ATgetArgument(t, 1);
      t = a_162;
      if(match_cons(t, sym_LChoice_2))
        {
          b_162 = ATgetArgument(t, 0);
          c_162 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, b_162, (ATerm) ATmakeAppl(sym_LChoice_2, c_162, d_162));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          a_162 = ATgetArgument(t, 0);
          d_162 = ATgetArgument(t, 1);
          t = a_162;
          if(match_cons(t, sym_Seq_2))
            {
              b_162 = ATgetArgument(t, 0);
              c_162 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, b_162, (ATerm) ATmakeAppl(sym_Seq_2, c_162, d_162));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              a_162 = ATgetArgument(t, 0);
              d_162 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_162;
          if(match_cons(t, sym_Choice_2))
            {
              b_162 = ATgetArgument(t, 0);
              c_162 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, b_162, (ATerm) ATmakeAppl(sym_Choice_2, c_162, d_162));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm r_162 = NULL,s_162 = NULL,t_162 = NULL,v_162 = NULL,d_163 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      v_162 = ATgetArgument(t, 0);
      d_163 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, v_162, d_163);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          v_162 = ATgetArgument(t, 0);
          t = v_162;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_162 = ATgetFirst((ATermList) t);
              s_162 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, r_162, (ATerm) ATmakeAppl(sym_LChoices_1, s_162));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_m_20;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              v_162 = ATgetArgument(t, 0);
              t = v_162;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_162 = ATgetFirst((ATermList) t);
                  s_162 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, r_162, (ATerm) ATmakeAppl(sym_Choices_1, s_162));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_m_20;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  v_162 = ATgetArgument(t, 0);
                  t = v_162;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_162 = ATgetFirst((ATermList) t);
                      s_162 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_162, (ATerm) ATmakeAppl(sym_Seqs_1, s_162));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_y_19;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      v_162 = ATgetArgument(t, 0);
                      d_163 = ATgetArgument(t, 1);
                      t_162 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, d_163, (ATerm) ATmakeAppl(sym_Op_2, term_z_37, (ATerm) ATinsert(ATinsert(ATempty, t_162), v_162)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          v_162 = ATgetArgument(t, 0);
                          d_163 = ATgetArgument(t, 1);
                          t_162 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, t_162)), v_162), (ATerm) ATmakeAppl(sym_Build_1, d_163)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              v_162 = ATgetArgument(t, 0);
                              d_163 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, v_162, (ATerm) ATmakeAppl(sym_Match_1, d_163));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  v_162 = ATgetArgument(t, 0);
                                  d_163 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_162), d_163);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      v_162 = ATgetArgument(t, 0);
                                      d_163 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_163), v_162);
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
static ATerm u_12 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm u_164 = NULL,v_164 = NULL,w_164 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      u_164 = ATgetArgument(t, 0);
      t = u_164;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_m_20;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_164 = ATgetArgument(t, 0);
          t = u_164;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_y_19;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              u_164 = ATgetArgument(t, 0);
              v_164 = ATgetArgument(t, 1);
              t = u_164;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_m_20;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  u_164 = ATgetArgument(t, 0);
                  v_164 = ATgetArgument(t, 1);
                  t = v_164;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_m_20;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      u_164 = ATgetArgument(t, 0);
                      v_164 = ATgetArgument(t, 1);
                      t = v_164;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_m_20;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          u_164 = ATgetArgument(t, 0);
                          t = u_164;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_m_20;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              u_164 = ATgetArgument(t, 0);
                              t = u_164;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_m_20;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  u_164 = ATgetArgument(t, 0);
                                  v_164 = ATgetArgument(t, 1);
                                  t = v_164;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_m_20;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      u_164 = ATgetArgument(t, 0);
                                      v_164 = ATgetArgument(t, 1);
                                      t = v_164;
                                      t = fetch_1_0(u_12, t);
                                      t = term_m_20;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          u_164 = ATgetArgument(t, 0);
                                          v_164 = ATgetArgument(t, 1);
                                          t = v_164;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = u_164;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = v_164;
                                                }
                                              else
                                                {
                                                  t = u_164;
                                                }
                                            }
                                          else
                                            {
                                              t = u_164;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = v_164;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              u_164 = ATgetArgument(t, 0);
                                              v_164 = ATgetArgument(t, 1);
                                              t = v_164;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = u_164;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = v_164;
                                                    }
                                                  else
                                                    {
                                                      t = u_164;
                                                    }
                                                }
                                              else
                                                {
                                                  t = u_164;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = v_164;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  u_164 = ATgetArgument(t, 0);
                                                  t = u_164;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_m_20;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      u_164 = ATgetArgument(t, 0);
                                                      v_164 = ATgetArgument(t, 1);
                                                      w_164 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = w_164;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_164, v_164);
                                                }
                                            }
                                        }
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
  ATerm d_166 = NULL,f_166 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      f_166 = ATgetArgument(t, 0);
      t = f_166;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_y_19;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          f_166 = ATgetArgument(t, 0);
          t = f_166;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_m_20;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              f_166 = ATgetArgument(t, 0);
              d_166 = ATgetArgument(t, 1);
              t = d_166;
              if(match_cons(t, sym_Id_0))
                {
                  t = f_166;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = d_166;
                    }
                  else
                    {
                      t = f_166;
                    }
                }
              else
                {
                  t = f_166;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = d_166;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  f_166 = ATgetArgument(t, 0);
                  d_166 = ATgetArgument(t, 1);
                  t = f_166;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_y_19;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      f_166 = ATgetArgument(t, 0);
                      d_166 = ATgetArgument(t, 1);
                      t = d_166;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_y_19;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          f_166 = ATgetArgument(t, 0);
                          d_166 = ATgetArgument(t, 1);
                          t = d_166;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_y_19;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              f_166 = ATgetArgument(t, 0);
                              t = f_166;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_y_19;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  f_166 = ATgetArgument(t, 0);
                                  t = f_166;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_y_19;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      f_166 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = f_166;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_y_19;
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
  ATerm y_61 = t;
  int z_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(z_61);
    }
  else
    {
      t = y_61;
      {
        ATerm e_62 = t;
        int f_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(f_62);
          }
        else
          {
            t = e_62;
            {
              ATerm r_62 = t;
              int v_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(v_62);
                }
              else
                {
                  t = r_62;
                  {
                    ATerm w_62 = t;
                    int x_62 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(x_62);
                      }
                    else
                      {
                        t = w_62;
                        {
                          ATerm a_63 = t;
                          int b_63 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(b_63);
                            }
                          else
                            {
                              t = a_63;
                              {
                                ATerm c_63 = t;
                                int d_63 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_166 = NULL,v_166 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        u_166 = ATgetArgument(t, 0);
                                        v_166 = ATgetArgument(t, 1);
                                        t = u_166;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_166;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            u_166 = ATgetArgument(t, 0);
                                            v_166 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = u_166;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_166;
                                      }
                                    LocalPopChoice(d_63);
                                  }
                                else
                                  {
                                    t = c_63;
                                    {
                                      ATerm e_63 = t;
                                      int i_63 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(i_63);
                                        }
                                      else
                                        {
                                          t = e_63;
                                          {
                                            ATerm k_63 = t;
                                            int n_63 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(n_63);
                                              }
                                            else
                                              {
                                                t = k_63;
                                                {
                                                  ATerm r_63 = t;
                                                  int s_63 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(s_63);
                                                    }
                                                  else
                                                    {
                                                      t = r_63;
                                                      {
                                                        ATerm y_63 = t;
                                                        int c_64 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(c_64);
                                                          }
                                                        else
                                                          {
                                                            t = y_63;
                                                            {
                                                              ATerm d_64 = t;
                                                              int i_64 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(i_64);
                                                                }
                                                              else
                                                                {
                                                                  t = d_64;
                                                                  {
                                                                    ATerm n_64 = t;
                                                                    int o_64 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(o_64);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_64;
                                                                        {
                                                                          ATerm p_64 = t;
                                                                          int q_64 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(q_64);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = p_64;
                                                                              {
                                                                                ATerm r_64 = t;
                                                                                int s_64 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(s_64);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = r_64;
                                                                                    {
                                                                                      ATerm y_166 = NULL,z_166 = NULL,a_167 = NULL,b_167 = NULL;
                                                                                      z_166 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          a_167 = ATgetArgument(t, 0);
                                                                                          b_167 = ATgetArgument(t, 1);
                                                                                          t = a_167;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              y_166 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = z_166;
                                                                                          t = y_13(y_166, b_167, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              a_167 = ATgetArgument(t, 0);
                                                                                              b_167 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = a_167;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = b_167;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2_0 (ATerm y_147 (ATerm), ATerm z_147 (ATerm), ATerm t)
{
  static ATerm f_167 (ATerm t);
  static ATerm f_167 (ATerm t)
  {
    ATerm t_64 = t;
    int v_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_147(t);
        t = f_167(t);
        LocalPopChoice(v_64);
      }
    else
      {
        t = t_64;
        t = z_147(t);
      }
    return(t);
  }
  t = f_167(t);
  return(t);
}
ATerm downup_1_0 (ATerm a_142 (ATerm), ATerm t)
{
  t = a_142(t);
  {
    static ATerm w_12 (ATerm t);
    static ATerm w_12 (ATerm t)
    {
      t = downup_1_0(a_142, t);
      return(t);
    }
    t = SRTS_all(w_12, t);
  }
  t = a_142(t);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  t = downup_1_0(d_13, t);
  {
    ATerm w_64 = t;
    int a_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(a_65);
      }
    else
      {
        t = w_64;
      }
  }
  return(t);
}
static ATerm d_13 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = inline_sdef_0_0(t);
  {
    ATerm d_65 = t;
    int e_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(e_65);
      }
    else
      {
        t = d_65;
      }
  }
  return(t);
}
ATerm inline_sdefs_0_0 (ATerm t)
{
  t = map_1_0(x_12, t);
  t = map_1_0(e_13, t);
  return(t);
}
static ATerm e_15 (ATerm m_75, ATerm n_75, ATerm t)
{
  ATerm o_167 = NULL;
  t = SSL_fputc(m_75, n_75);
  o_167 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_167);
  return(t);
}
static ATerm f_15 (ATerm l_35, ATerm m_35, ATerm t)
{
  ATerm p_167 = NULL;
  t = SSL_write_term_to_stream_text(l_35, m_35);
  p_167 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_167);
  return(t);
}
static ATerm h_15 (ATerm n_149 (ATerm), ATerm d_279, ATerm r_35, ATerm t)
{
  ATerm q_167 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_279, term_f_65);
  t = l_15(t);
  q_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_167, r_35);
  t = n_149(t);
  t = fclose_0_0(t);
  t = r_35;
  return(t);
}
static ATerm g_15 (ATerm h_35, ATerm i_35, ATerm t)
{
  ATerm r_167 = NULL;
  t = SSL_write_term_to_stream_baf(h_35, i_35);
  r_167 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_167);
  return(t);
}
static ATerm g_13 (ATerm t)
{
  ATerm y_167 = NULL,z_167 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_65 = ATgetArgument(t, 0);
      if(match_cons(g_65, sym_Stream_1))
        {
          y_167 = ATgetArgument(g_65, 0);
        }
      else
        _fail(t);
      z_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(y_167, z_167, t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm a_168 = NULL,b_168 = NULL,c_168 = NULL,d_168 = NULL,e_168 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_65 = ATgetArgument(t, 0);
      if(match_cons(i_65, sym_Stream_1))
        {
          d_168 = ATgetArgument(i_65, 0);
        }
      else
        _fail(t);
      e_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_15(d_168, e_168, t);
  a_168 = t;
  t = term_l_65;
  b_168 = t;
  t = a_168;
  if(match_cons(t, sym_Stream_1))
    {
      c_168 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_65, a_168);
  t = e_15(b_168, c_168, t);
  return(t);
}
ATerm output_1_0 (ATerm v_173 (ATerm), ATerm t)
{
  ATerm s_167 = NULL,t_167 = NULL;
  t = v_173(t);
  t_167 = t;
  {
    ATerm n_65 = t;
    int o_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_167 = NULL,v_167 = NULL;
        t = term_p_65;
        u_167 = t;
        t = term_q_65;
        v_167 = t;
        t = term_r_65;
        t = s_15(u_167, v_167, t);
        LocalPopChoice(o_65);
      }
    else
      {
        t = n_65;
        t = term_t_65;
      }
  }
  s_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_167, t_167);
  {
    ATerm v_65 = t;
    int x_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_167 = NULL,x_167 = NULL;
        t = term_p_65;
        w_167 = t;
        t = term_y_65;
        x_167 = t;
        t = term_z_65;
        t = s_15(w_167, x_167, t);
        t = (ATerm) ATmakeAppl(sym__2, s_167, t_167);
        LocalPopChoice(x_65);
        if(match_cons(t, sym__2))
          {
            ATerm b_66 = ATgetArgument(t, 0);
            ATerm d_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_15(g_13, s_167, t_167, t);
      }
    else
      {
        t = v_65;
        if(match_cons(t, sym__2))
          {
            ATerm l_66 = ATgetArgument(t, 0);
            ATerm m_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_15(j_13, s_167, t_167, t);
      }
  }
  return(t);
}
static ATerm s_168 (ATerm m_168, ATerm t)
{
  t = SSL_fclose(m_168);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_168 = NULL,q_168 = NULL;
  q_168 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_168 = ATgetArgument(t, 0);
      {
        ATerm n_66 = t;
        int o_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_168);
            LocalPopChoice(o_66);
          }
        else
          {
            t = n_66;
            t = s_168(q_168, t);
          }
      }
    }
  else
    {
      t = s_168(q_168, t);
    }
  return(t);
}
static ATerm i_15 (ATerm n_35, ATerm t)
{
  t = SSL_read_term_from_stream(n_35);
  return(t);
}
static ATerm j_15 (ATerm s_73, ATerm t_73, ATerm t)
{
  t = SSL_strcat(s_73, t_73);
  return(t);
}
static ATerm k_15 (ATerm o_75, ATerm p_75, ATerm t)
{
  ATerm t_168 = NULL;
  t = SSL_fopen(o_75, p_75);
  t_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_168);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_168 = NULL;
  t = SSL_stdin_stream();
  u_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_168);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_168 = NULL;
  t = SSL_stdout_stream();
  v_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_168);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_168 = NULL;
  t = SSL_stderr_stream();
  w_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_168);
  return(t);
}
static ATerm d_170 (ATerm c_169, ATerm t)
{
  ATerm d_169 = NULL;
  t = SSL_explode_term(c_169);
  if(match_cons(t, sym__2))
    {
      ATerm s_66 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_66) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_66 = ATgetArgument(t, 1);
        if(((ATgetType(t_66) == AT_LIST) && !(ATisEmpty(t_66))))
          {
            d_169 = ATgetFirst((ATermList) t_66);
            {
              ATerm w_66 = (ATerm) ATgetNext((ATermList) t_66);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_169;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_169;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_169;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_169;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm e_170 (ATerm g_169, ATerm h_169, ATerm i_169, ATerm t)
{
  ATerm j_169 = NULL,k_169 = NULL,l_169 = NULL,o_169 = NULL,l_14 = NULL;
  t = SSLgetAnnotations(i_169);
  l_169 = t;
  t = g_169;
  if(match_cons(t, sym_Path_1))
    {
      o_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_169, h_169);
  l_14 = t;
  t = SSLsetAnnotations(l_14, l_169);
  if(match_cons(t, sym__2))
    {
      j_169 = ATgetArgument(t, 0);
      k_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_15(j_169, k_169, t);
  return(t);
}
static ATerm f_170 (ATerm q_169, ATerm r_169, ATerm s_169, ATerm t)
{
  ATerm t_169 = NULL,u_169 = NULL,v_169 = NULL,y_169 = NULL,m_14 = NULL;
  t = SSLgetAnnotations(s_169);
  v_169 = t;
  t = SSL_is_string(q_169);
  y_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_169, r_169);
  m_14 = t;
  t = SSLsetAnnotations(m_14, v_169);
  if(match_cons(t, sym__2))
    {
      t_169 = ATgetArgument(t, 0);
      u_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_15(t_169, u_169, t);
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm a_170 = NULL,b_170 = NULL,c_170 = NULL;
  a_170 = t;
  if(match_cons(t, sym__2))
    {
      b_170 = ATgetArgument(t, 0);
      c_170 = ATgetArgument(t, 1);
      {
        ATerm y_66 = t;
        int a_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_170(a_170, t);
            LocalPopChoice(a_67);
          }
        else
          {
            t = y_66;
            {
              ATerm b_67 = t;
              int h_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_170(b_170, c_170, a_170, t);
                  LocalPopChoice(h_67);
                }
              else
                {
                  t = b_67;
                  t = f_170(b_170, c_170, a_170, t);
                }
            }
          }
      }
    }
  else
    {
      t = d_170(a_170, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_170 = NULL,i_170 = NULL,j_170 = NULL,o_170 = NULL;
  o_170 = t;
  {
    ATerm j_67 = t;
    int k_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, o_170, term_r_67);
        t = l_15(t);
        LocalPopChoice(k_67);
      }
    else
      {
        t = j_67;
        {
          ATerm g_83 = NULL,j_83 = NULL;
          t = term_u_67;
          j_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_67, o_170);
          t = j_15(j_83, o_170, t);
          g_83 = t;
          t = SSL_perror(g_83);
          _fail(t);
        }
      }
  }
  i_170 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_15(j_170, t);
  h_170 = t;
  t = i_170;
  t = fclose_0_0(t);
  t = h_170;
  return(t);
}
ATerm input_1_0 (ATerm w_173 (ATerm), ATerm t)
{
  ATerm v_67 = t;
  int x_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_170 = NULL,s_170 = NULL;
      t = term_p_65;
      r_170 = t;
      t = term_y_67;
      s_170 = t;
      t = term_z_67;
      t = s_15(r_170, s_170, t);
      LocalPopChoice(x_67);
    }
  else
    {
      t = v_67;
      t = term_a_68;
    }
  t = ReadFromFile_0_0(t);
  t = w_173(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm t_170 = NULL,u_170 = NULL;
  t = term_p_65;
  t_170 = t;
  t = term_d_68;
  u_170 = t;
  t = term_e_68;
  t = s_15(t_170, u_170, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_170 = NULL,y_170 = NULL,z_170 = NULL;
  x_170 = t;
  {
    ATerm g_68 = t;
    int h_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_170;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_68 = ATgetFirst((ATermList) t);
                ATerm k_68 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_170;
          }
        LocalPopChoice(h_68);
      }
    else
      {
        t = g_68;
        t = (ATerm) ATinsert(ATempty, x_170);
      }
  }
  y_170 = t;
  t = term_t_65;
  z_170 = t;
  t = SSL_printnl(z_170, y_170);
  t = x_170;
  return(t);
}
ATerm map_1_0 (ATerm i_155 (ATerm), ATerm t)
{
  static ATerm r_171 (ATerm t);
  static ATerm r_171 (ATerm t)
  {
    ATerm o_171 = NULL,p_171 = NULL,q_171 = NULL;
    o_171 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_171;
      }
    else
      {
        ATerm r_83 = NULL,x_83 = NULL,y_83 = NULL,p_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_171 = ATgetFirst((ATermList) t);
            q_171 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_171);
        r_83 = t;
        t = p_171;
        t = i_155(t);
        x_83 = t;
        t = q_171;
        t = r_171(t);
        y_83 = t;
        t = (ATerm) ATinsert(CheckATermList(y_83), x_83);
        p_14 = t;
        t = SSLsetAnnotations(p_14, r_83);
      }
    return(t);
  }
  t = r_171(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm u_171 = NULL,v_171 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_171 = ATgetFirst((ATermList) t);
      v_171 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_171 = NULL,a_172 = NULL;
        static ATerm l_13 (ATerm t);
        static ATerm l_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_171)), not_null(a_172));
          return(t);
        }
        t = v_171;
        t = o_0(t);
        if(((z_171 != NULL) && (z_171 != t)))
          _fail(t);
        else
          z_171 = t;
        t = u_171;
        t = m_0(t);
        if(((a_172 != NULL) && (a_172 != t)))
          _fail(t);
        else
          a_172 = t;
        t = v_171;
        t = reverse_acc_2_0(m_0, l_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_68;
      t = o_0(t);
    }
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm i_172 = NULL,j_172 = NULL,k_172 = NULL,r_14 = NULL;
  k_172 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_172 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_172);
  i_172 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_172);
  r_14 = t;
  t = SSLsetAnnotations(r_14, i_172);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm o_172 = NULL;
  o_172 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_172), term_r_68);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm u_175 (ATerm), ATerm v_175 (ATerm), ATerm t)
{
  ATerm e_172 = NULL,f_172 = NULL;
  ATerm t_68 = t;
  int u_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_172 = NULL,h_172 = NULL;
      t = term_p_65;
      g_172 = t;
      t = term_d_68;
      h_172 = t;
      t = term_e_68;
      t = s_15(g_172, h_172, t);
      LocalPopChoice(u_68);
    }
  else
    {
      t = t_68;
      t = fetch_1_0(o_13, t);
    }
  {
    ATerm v_68 = t;
    int x_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_175(t);
        t = echo_0_0(t);
        LocalPopChoice(x_68);
      }
    else
      {
        t = v_68;
      }
  }
  t = term_y_68;
  t = echo_0_0(t);
  t = term_e_69;
  e_172 = t;
  t = term_f_69;
  f_172 = t;
  t = term_h_69;
  t = s_15(e_172, f_172, t);
  t = reverse_acc_2_0(_id, p_13, t);
  t = map_1_0(r_13, t);
  {
    ATerm i_69 = t;
    int j_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_172 = NULL;
        t = v_175(t);
        p_172 = t;
        t = (ATerm) ATinsert(CheckATermList(p_172), term_k_69);
        t = echo_0_0(t);
        LocalPopChoice(j_69);
      }
    else
      {
        t = i_69;
      }
  }
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm v_172 = NULL,w_172 = NULL,x_172 = NULL,t_14 = NULL;
  x_172 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_172 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_172);
  v_172 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_172);
  t_14 = t;
  t = SSLsetAnnotations(t_14, v_172);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_172 = NULL;
  s_172 = t;
  {
    ATerm l_69 = t;
    int s_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_172 = NULL,u_172 = NULL;
        t = term_p_65;
        t_172 = t;
        t = term_d_68;
        u_172 = t;
        t = term_e_68;
        t = s_15(t_172, u_172, t);
        LocalPopChoice(s_69);
      }
    else
      {
        t = l_69;
        t = fetch_1_0(v_13, t);
      }
  }
  t = s_172;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm z_172 = NULL;
  z_172 = t;
  if(match_string(t, "-k"))
    {
      t = z_172;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_172;
    }
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm a_173 = NULL,b_173 = NULL,c_173 = NULL;
  a_173 = t;
  t = SSL_string_to_int(a_173);
  b_173 = t;
  t = term_x_69;
  c_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_69, b_173);
  t = v_15(c_173, b_173, t);
  t = a_173;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_y_69;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_13, a_14, b_14, t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm e_173 = NULL;
  e_173 = t;
  if(match_string(t, "-S"))
    {
      t = e_173;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_173;
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm f_173 = NULL,g_173 = NULL;
  t = term_d_70;
  f_173 = t;
  t = term_w_57;
  g_173 = t;
  t = term_g_70;
  t = v_15(f_173, g_173, t);
  t = term_i_70;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_j_70;
  return(t);
}
static ATerm i_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm h_173 = NULL,i_173 = NULL,j_173 = NULL;
  h_173 = t;
  t = SSL_string_to_int(h_173);
  i_173 = t;
  t = term_d_70;
  j_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_70, i_173);
  t = v_15(j_173, i_173, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_173);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_p_70;
  return(t);
}
static ATerm o_14 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm k_173 = NULL,l_173 = NULL;
  t = term_q_70;
  k_173 = t;
  t = term_q_68;
  l_173 = t;
  t = term_x_70;
  t = v_15(k_173, l_173, t);
  t = term_f_71;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_g_71;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_71 = t;
  int j_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_14, e_14, g_14, t);
      LocalPopChoice(j_71);
    }
  else
    {
      t = i_71;
      {
        ATerm k_71 = t;
        int l_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_14, k_14, n_14, t);
            LocalPopChoice(l_71);
          }
        else
          {
            t = k_71;
            t = Option_3_0(o_14, q_14, s_14, t);
          }
      }
    }
  return(t);
}
static ATerm v_15 (ATerm m_83, ATerm n_83, ATerm t)
{
  ATerm m_173 = NULL,n_173 = NULL;
  t = term_p_65;
  m_173 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_65, m_83, n_83);
  t = lookup_table_0_1(m_173, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(m_83, n_83, n_173, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_65, m_83, n_83);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm y_173 = NULL,z_173 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_174 = NULL,b_174 = NULL,c_174 = NULL;
      t = term_q_68;
      t = f_0(t);
      a_174 = t;
      t = term_e_69;
      b_174 = t;
      t = term_f_69;
      c_174 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_69, term_f_69, a_174);
      t = t_15(b_174, c_174, a_174, t);
      _fail(t);
    }
  else
    {
      ATerm f_174 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_173 = ATgetFirst((ATermList) t);
          z_173 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_173;
      t = b_0(t);
      t = term_q_68;
      t = e_0(t);
      f_174 = t;
      t = (ATerm) ATinsert(CheckATermList(z_173), f_174);
    }
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm h_174 = NULL;
  h_174 = t;
  if(match_string(t, "-o"))
    {
      t = h_174;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = h_174;
    }
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm i_174 = NULL,j_174 = NULL;
  i_174 = t;
  t = term_q_65;
  j_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_65, i_174);
  t = v_15(j_174, i_174, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, i_174);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = term_m_71;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_14, x_14, y_14, t);
  return(t);
}
static ATerm t_15 (ATerm m_39, ATerm n_39, ATerm l_39, ATerm t)
{
  ATerm l_174 = NULL,m_174 = NULL,n_174 = NULL,o_174 = NULL,p_174 = NULL;
  l_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_39, n_39);
  {
    ATerm n_71 = t;
    int o_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_71 = ATgetArgument(t, 0);
            ATerm r_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_39, n_39);
        t = s_15(m_39, n_39, t);
        LocalPopChoice(o_71);
      }
    else
      {
        t = n_71;
        t = (ATerm) ATempty;
      }
  }
  m_174 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_39, n_39, (ATerm) ATinsert(CheckATermList(m_174), l_39));
  t = lookup_table_0_1(m_39, t);
  p_174 = t;
  t = (ATerm) ATinsert(CheckATermList(m_174), l_39);
  n_174 = t;
  t = p_174;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(n_39, n_174, o_174, t);
  t = l_174;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm w_174 = NULL,x_174 = NULL,y_174 = NULL,z_174 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_175 = NULL,b_175 = NULL,c_175 = NULL;
      t = term_q_68;
      t = k_0(t);
      a_175 = t;
      t = term_e_69;
      b_175 = t;
      t = term_f_69;
      c_175 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_69, term_f_69, a_175);
      t = t_15(b_175, c_175, a_175, t);
      _fail(t);
    }
  else
    {
      ATerm g_175 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_174 = ATgetFirst((ATermList) t);
          x_174 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_174;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_174 = ATgetFirst((ATermList) t);
          z_174 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_174;
      t = h_0(t);
      t = y_174;
      t = j_0(t);
      g_175 = t;
      t = (ATerm) ATinsert(CheckATermList(z_174), g_175);
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm i_175 = NULL;
  i_175 = t;
  if(match_string(t, "-i"))
    {
      t = i_175;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_175;
    }
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm j_175 = NULL,k_175 = NULL;
  j_175 = t;
  t = term_y_67;
  k_175 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_67, j_175);
  t = v_15(k_175, j_175, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_175);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  t = term_s_71;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_15, u_15, y_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_175 = NULL,q_175 = NULL,r_175 = NULL,s_175 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_68;
  t = whoami_0_0(t);
  l_175 = t;
  t = term_t_71;
  r_175 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_71), l_175);
  s_175 = t;
  t = SSL_printnl(r_175, s_175);
  t = term_o_17;
  q_175 = t;
  t = SSL_exit(q_175);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_175 = NULL,w_175 = NULL;
  t = term_p_65;
  t_175 = t;
  t = term_d_68;
  w_175 = t;
  t = term_e_68;
  t = s_15(t_175, w_175, t);
  return(t);
}
static ATerm m_15 (ATerm u_36, ATerm v_36, ATerm t)
{
  ATerm v_71 = t;
  int w_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_36, v_36);
      LocalPopChoice(w_71);
    }
  else
    {
      t = v_71;
      t = SSL_addr(u_36, v_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm d_161 (ATerm), ATerm e_161 (ATerm), ATerm t)
{
  ATerm y_175 = NULL,z_175 = NULL,a_176 = NULL;
  y_175 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_175;
      t = d_161(t);
    }
  else
    {
      ATerm d_176 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_175 = ATgetFirst((ATermList) t);
          a_176 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_176;
      t = foldr_2_0(d_161, e_161, t);
      d_176 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_175, d_176);
      t = e_161(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm z_15 (ATerm t)
{
  t = term_w_57;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm m_84 = NULL,n_84 = NULL;
  if(match_cons(t, sym__2))
    {
      m_84 = ATgetArgument(t, 0);
      n_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_15(m_84, n_84, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_176 = NULL,g_84 = NULL,h_84 = NULL;
  t = times_0_0(t);
  h_84 = t;
  t = SSL_explode_term(h_84);
  if(match_cons(t, sym__2))
    {
      ATerm x_71 = ATgetArgument(t, 0);
      g_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_84;
  t = foldr_2_0(z_15, e_16, t);
  g_176 = t;
  t = SSL_TicksToSeconds(g_176);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_176 = NULL,s_176 = NULL,t_176 = NULL;
  r_176 = t;
  if(match_cons(t, sym__2))
    {
      s_176 = ATgetArgument(t, 0);
      t_176 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_71 = t;
    int z_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_176;
        if((s_176 != t))
          {
            _fail(t);
          }
        t = r_176;
        LocalPopChoice(z_71);
      }
    else
      {
        t = y_71;
        t = (ATerm) ATmakeAppl(sym__2, s_176, t_176);
        {
          ATerm a_72 = t;
          int b_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_176, t_176);
              LocalPopChoice(b_72);
            }
          else
            {
              t = a_72;
              t = SSL_gtr(s_176, t_176);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_176, t_176);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_170 (ATerm), ATerm t)
{
  ATerm x_176 = NULL;
  x_176 = t;
  {
    ATerm c_72 = t;
    int d_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_176 = NULL,a_177 = NULL,b_177 = NULL;
        t = term_p_65;
        a_177 = t;
        t = term_d_70;
        b_177 = t;
        t = term_e_72;
        t = s_15(a_177, b_177, t);
        z_176 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_176, term_o_17);
        t = geq_0_0(t);
        t = x_176;
        t = w_170(t);
        LocalPopChoice(d_72);
      }
    else
      {
        t = c_72;
        t = x_176;
      }
  }
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm d_177 = NULL,e_177 = NULL,g_177 = NULL,h_177 = NULL;
  t = run_time_0_0(t);
  d_177 = t;
  t = term_q_68;
  t = whoami_0_0(t);
  e_177 = t;
  t = term_t_71;
  g_177 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_72), d_177), term_g_72), e_177);
  h_177 = t;
  t = SSL_printnl(g_177, h_177);
  t = (ATerm) ATmakeAppl(sym__2, term_t_71, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_72), d_177), term_g_72), e_177));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_16, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_177 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_57;
  i_177 = t;
  t = SSL_exit(i_177);
  return(t);
}
static ATerm w_15 (ATerm j_44, ATerm k_44, ATerm m_44, ATerm t)
{
  ATerm j_177 = NULL;
  t = SSL_hashtable_put(m_44, j_44, k_44);
  j_177 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_177);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_40, ATerm t)
{
  ATerm s_177 = NULL;
  t = table_hashtable_0_0(t);
  s_177 = t;
  {
    ATerm k_72 = t;
    int l_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_85 = NULL;
        t = s_177;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_85 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_15(y_40, a_85, t);
        LocalPopChoice(l_72);
      }
    else
      {
        t = k_72;
        {
          ATerm f_85 = NULL;
          t = y_40;
          t = table_create_0_0(t);
          t = s_177;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_85 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_15(y_40, f_85, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_44, ATerm v_44, ATerm t)
{
  ATerm v_177 = NULL;
  t = SSL_hashtable_create(u_44, v_44);
  v_177 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_177);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm w_177 = NULL,x_177 = NULL,y_177 = NULL,a_178 = NULL,b_178 = NULL;
  w_177 = t;
  t = term_m_72;
  a_178 = t;
  t = term_n_72;
  b_178 = t;
  t = w_177;
  t = new_hashtable_0_2(a_178, b_178, t);
  x_177 = t;
  t = w_177;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_177 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(w_177, x_177, y_177, t);
  t = w_177;
  return(t);
}
static ATerm p_15 (ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm c_178 = NULL;
  t = SSL_hashtable_remove(r_44, q_44);
  c_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_178);
  return(t);
}
static ATerm q_15 (ATerm x_44, ATerm t)
{
  ATerm d_178 = NULL;
  t = SSL_hashtable_destroy(x_44);
  d_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_178);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_178 = NULL;
  t = SSL_table_hashtable();
  e_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_178);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_178 = NULL,g_178 = NULL,h_178 = NULL,i_178 = NULL;
  f_178 = t;
  t = table_hashtable_0_0(t);
  g_178 = t;
  t = lookup_table_0_1(f_178, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(i_178, t);
  t = g_178;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_15(f_178, h_178, t);
  t = f_178;
  return(t);
}
ATerm fetch_1_0 (ATerm q_155 (ATerm), ATerm t)
{
  static ATerm f_179 (ATerm t);
  static ATerm f_179 (ATerm t)
  {
    ATerm c_179 = NULL,d_179 = NULL,e_179 = NULL;
    c_179 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_179 = ATgetFirst((ATermList) t);
        e_179 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_72 = t;
      int p_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_85 = NULL,n_85 = NULL,v_14 = NULL;
          t = SSLgetAnnotations(c_179);
          k_85 = t;
          t = d_179;
          t = q_155(t);
          n_85 = t;
          t = (ATerm) ATinsert(CheckATermList(e_179), n_85);
          v_14 = t;
          t = SSLsetAnnotations(v_14, k_85);
          LocalPopChoice(p_72);
        }
      else
        {
          t = o_72;
          {
            ATerm v_85 = NULL,y_85 = NULL,w_14 = NULL;
            t = SSLgetAnnotations(c_179);
            v_85 = t;
            t = e_179;
            t = f_179(t);
            y_85 = t;
            t = (ATerm) ATinsert(CheckATermList(y_85), d_179);
            w_14 = t;
            t = SSLsetAnnotations(w_14, v_85);
          }
        }
    }
    return(t);
  }
  t = f_179(t);
  return(t);
}
static ATerm x_15 (ATerm n_44, ATerm o_44, ATerm t)
{
  t = SSL_hashtable_get(o_44, n_44);
  return(t);
}
static ATerm s_15 (ATerm f_41, ATerm g_41, ATerm t)
{
  ATerm i_179 = NULL;
  t = lookup_table_0_1(f_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(g_41, i_179, t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm k_179 = NULL,l_179 = NULL;
  t = term_q_72;
  k_179 = t;
  t = term_q_68;
  l_179 = t;
  t = term_r_72;
  t = v_15(k_179, l_179, t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_s_72;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm m_179 = NULL,n_179 = NULL,o_179 = NULL,p_179 = NULL;
  t = term_q_72;
  o_179 = t;
  t = term_q_68;
  p_179 = t;
  t = term_r_72;
  t = v_15(o_179, p_179, t);
  t = term_t_72;
  m_179 = t;
  t = term_q_68;
  n_179 = t;
  t = term_u_72;
  t = v_15(m_179, n_179, t);
  t = term_v_72;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = term_w_72;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_72 = t;
  int y_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_16, h_16, i_16, t);
      LocalPopChoice(y_72);
    }
  else
    {
      t = x_72;
      t = Option_3_0(l_16, m_16, n_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm i_115 (ATerm), ATerm j_115 (ATerm), ATerm t)
{
  ATerm q_179 = NULL,r_179 = NULL,s_179 = NULL,t_179 = NULL,u_179 = NULL,v_179 = NULL,z_14 = NULL;
  v_179 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_179 = ATgetFirst((ATermList) t);
      s_179 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_179);
  q_179 = t;
  t = r_179;
  t = i_115(t);
  t_179 = t;
  t = s_179;
  t = j_115(t);
  u_179 = t;
  t = (ATerm) ATinsert(CheckATermList(u_179), t_179);
  z_14 = t;
  t = SSLsetAnnotations(z_14, q_179);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_175 (ATerm), ATerm t)
{
  ATerm a_180 = NULL,b_180 = NULL,c_180 = NULL,d_180 = NULL,f_180 = NULL,g_180 = NULL,b_15 = NULL;
  a_180 = t;
  {
    ATerm z_72 = t;
    int a_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_73;
        t = p_175(t);
        LocalPopChoice(a_73);
      }
    else
      {
        t = z_72;
      }
  }
  t = a_180;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_180 = ATgetFirst((ATermList) t);
      d_180 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_180);
  b_180 = t;
  t = term_d_68;
  g_180 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_68, c_180);
  t = v_15(g_180, c_180, t);
  t = d_180;
  {
    static ATerm q_180 (ATerm t);
    static ATerm q_180 (ATerm t)
    {
      ATerm c_73 = t;
      int d_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_73 = t;
          int f_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_180 = NULL;
              j_180 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_180;
              LocalPopChoice(f_73);
            }
          else
            {
              t = e_73;
              t = p_175(t);
              t = Cons_2_0(_id, q_180, t);
            }
          LocalPopChoice(d_73);
        }
      else
        {
          t = c_73;
          {
            ATerm m_180 = NULL,n_180 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                m_180 = ATgetFirst((ATermList) t);
                n_180 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(n_180), (ATerm) ATmakeAppl(sym_Undefined_1, m_180));
          }
        }
      return(t);
    }
    t = q_180(t);
  }
  f_180 = t;
  t = (ATerm) ATinsert(CheckATermList(f_180), (ATerm) ATmakeAppl(sym_Program_1, c_180));
  b_15 = t;
  t = SSLsetAnnotations(b_15, b_180);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm d_181 = NULL;
  d_181 = t;
  if(match_string(t, "--help"))
    {
      t = d_181;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_181;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_181;
        }
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm e_181 = NULL,f_181 = NULL;
  t = term_g_73;
  e_181 = t;
  t = term_q_68;
  f_181 = t;
  t = term_h_73;
  t = v_15(e_181, f_181, t);
  t = term_i_73;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = term_j_73;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm m_175 (ATerm), ATerm n_175 (ATerm), ATerm o_175 (ATerm), ATerm t)
{
  ATerm v_180 = NULL,w_180 = NULL,x_180 = NULL,y_180 = NULL,z_180 = NULL,a_181 = NULL,b_181 = NULL,c_181 = NULL;
  x_180 = t;
  t = term_e_69;
  y_180 = t;
  t = term_k_73;
  t = lookup_table_0_1(y_180, t);
  c_181 = t;
  t = term_f_69;
  z_180 = t;
  t = (ATerm) ATempty;
  a_181 = t;
  t = c_181;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(z_180, a_181, b_181, t);
  t = x_180;
  {
    static ATerm o_16 (ATerm t);
    static ATerm o_16 (ATerm t)
    {
      ATerm l_73 = t;
      int m_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_175(t);
          LocalPopChoice(m_73);
        }
      else
        {
          t = l_73;
          {
            ATerm n_73 = t;
            int o_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_16, q_16, r_16, t);
                LocalPopChoice(o_73);
              }
            else
              {
                t = n_73;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_16, t);
  }
  {
    ATerm p_73 = t;
    int r_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_181 = NULL;
        q_181 = t;
        {
          ATerm u_73 = t;
          int v_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_86 = NULL;
              t = q_181;
              {
                ATerm w_73 = t;
                int x_73 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_86 = NULL,h_86 = NULL;
                    t = term_p_65;
                    g_86 = t;
                    t = term_g_73;
                    h_86 = t;
                    t = term_y_73;
                    t = s_15(g_86, h_86, t);
                    LocalPopChoice(x_73);
                  }
                else
                  {
                    t = w_73;
                    t = fetch_1_0(s_16, t);
                  }
              }
              t = q_181;
              t = n_175(t);
              t = term_w_57;
              f_86 = t;
              t = SSL_exit(f_86);
              LocalPopChoice(v_73);
            }
          else
            {
              t = u_73;
              {
                ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL;
                t = term_p_65;
                m_86 = t;
                t = term_q_72;
                n_86 = t;
                t = term_z_73;
                t = s_15(m_86, n_86, t);
                t = q_181;
                t = o_175(t);
                t = term_w_57;
                l_86 = t;
                t = SSL_exit(l_86);
              }
            }
        }
        LocalPopChoice(r_73);
      }
    else
      {
        t = p_73;
        {
          ATerm a_74 = t;
          int b_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_181 = NULL,s_181 = NULL,t_181 = NULL;
              static ATerm t_16 (ATerm t);
              static ATerm t_16 (ATerm t)
              {
                ATerm u_181 = NULL,v_181 = NULL,w_181 = NULL,a_16 = NULL;
                w_181 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_181 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_181);
                u_181 = t;
                t = v_181;
                if(((v_180 != NULL) && (v_180 != t)))
                  _fail(t);
                else
                  v_180 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_181);
                a_16 = t;
                t = SSLsetAnnotations(a_16, u_181);
                return(t);
              }
              t = fetch_1_0(t_16, t);
              t = term_t_71;
              s_181 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_180)), term_c_74);
              t_181 = t;
              t = SSL_printnl(s_181, t_181);
              t = (ATerm) ATmakeAppl(sym__2, term_t_71, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_180)), term_c_74));
              t = n_175(t);
              t = term_o_17;
              r_181 = t;
              t = SSL_exit(r_181);
              LocalPopChoice(b_74);
            }
          else
            {
              t = a_74;
            }
        }
      }
  }
  w_180 = t;
  t = term_e_69;
  t = table_destroy_0_0(t);
  t = w_180;
  return(t);
}
ATerm option_wrap_5_0 (ATerm p_173 (ATerm), ATerm q_173 (ATerm), ATerm r_173 (ATerm), ATerm s_173 (ATerm), ATerm t_173 (ATerm), ATerm t)
{
  ATerm b_182 = NULL,c_182 = NULL,d_182 = NULL,e_182 = NULL,f_182 = NULL;
  t = parse_options_3_0(p_173, q_173, r_173, t);
  b_182 = t;
  t = term_d_74;
  t = table_create_0_0(t);
  t = term_d_74;
  c_182 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_74, term_e_74, b_182);
  t = lookup_table_0_1(c_182, t);
  f_182 = t;
  t = term_e_74;
  d_182 = t;
  t = f_182;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_15(d_182, b_182, e_182, t);
  t = b_182;
  t = s_173(t);
  {
    ATerm f_74 = t;
    int h_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_173(t);
        t = report_success_0_0(t);
        LocalPopChoice(h_74);
      }
    else
      {
        t = f_74;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm i_74 = t;
  int j_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(j_74);
    }
  else
    {
      t = i_74;
      {
        ATerm k_74 = t;
        int l_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(l_74);
          }
        else
          {
            t = k_74;
            {
              ATerm m_74 = t;
              int n_74 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(y_16, z_16, a_17, t);
                  LocalPopChoice(n_74);
                }
              else
                {
                  t = m_74;
                  {
                    ATerm o_74 = t;
                    int p_74 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(p_74);
                      }
                    else
                      {
                        t = o_74;
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
static ATerm v_16 (ATerm t)
{
  t = input_1_0(b_17, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm h_182 = NULL,i_182 = NULL;
  t = term_y_65;
  h_182 = t;
  t = term_q_68;
  i_182 = t;
  t = term_q_74;
  t = v_15(h_182, i_182, t);
  t = term_r_74;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_u_74;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = output_1_0(d_17, t);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm k_182 = NULL,l_182 = NULL,m_182 = NULL,n_182 = NULL,o_182 = NULL,p_182 = NULL,q_182 = NULL,r_182 = NULL,s_182 = NULL,t_182 = NULL,u_182 = NULL,v_182 = NULL,w_182 = NULL,x_182 = NULL,y_182 = NULL,w_20 = NULL,m_18 = NULL,j_18 = NULL,j_16 = NULL;
  y_182 = t;
  if(match_cons(t, sym_Specification_1))
    {
      l_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_182);
  k_182 = t;
  t = l_182;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_182 = ATgetFirst((ATermList) t);
      o_182 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_182);
  m_182 = t;
  t = o_182;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_182 = ATgetFirst((ATermList) t);
      s_182 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_182);
  q_182 = t;
  t = r_182;
  if(match_cons(t, sym_Strategies_1))
    {
      v_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_182);
  u_182 = t;
  t = v_182;
  t = inline_sdefs_0_0(t);
  w_182 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_182);
  j_16 = t;
  t = SSLsetAnnotations(j_16, u_182);
  x_182 = t;
  t = s_182;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_182), x_182);
  j_18 = t;
  t = SSLsetAnnotations(j_18, q_182);
  t_182 = t;
  t = (ATerm) ATinsert(CheckATermList(t_182), n_182);
  m_18 = t;
  t = SSLsetAnnotations(m_18, m_182);
  p_182 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, p_182);
  w_20 = t;
  t = SSLsetAnnotations(w_20, k_182);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(u_16, default_system_usage_0_0, default_system_about_0_0, _id, v_16, t);
  return(t);
}

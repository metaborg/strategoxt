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
static ATerm term_x_74;
static ATerm term_w_74;
static ATerm term_v_74;
static ATerm term_h_74;
static ATerm term_f_74;
static ATerm term_e_74;
static ATerm term_b_74;
static ATerm term_a_74;
static ATerm term_m_73;
static ATerm term_l_73;
static ATerm term_k_73;
static ATerm term_j_73;
static ATerm term_i_73;
static ATerm term_d_73;
static ATerm term_y_72;
static ATerm term_x_72;
static ATerm term_w_72;
static ATerm term_v_72;
static ATerm term_u_72;
static ATerm term_t_72;
static ATerm term_s_72;
static ATerm term_p_72;
static ATerm term_o_72;
static ATerm term_l_72;
static ATerm term_k_72;
static ATerm term_i_72;
static ATerm term_w_71;
static ATerm term_v_71;
static ATerm term_u_71;
static ATerm term_p_71;
static ATerm term_j_71;
static ATerm term_h_71;
static ATerm term_g_71;
static ATerm term_y_70;
static ATerm term_x_70;
static ATerm term_r_70;
static ATerm term_q_70;
static ATerm term_j_70;
static ATerm term_i_70;
static ATerm term_g_70;
static ATerm term_d_70;
static ATerm term_i_69;
static ATerm term_g_69;
static ATerm term_f_69;
static ATerm term_d_69;
static ATerm term_z_68;
static ATerm term_r_68;
static ATerm term_l_68;
static ATerm term_e_68;
static ATerm term_b_68;
static ATerm term_a_68;
static ATerm term_z_67;
static ATerm term_y_67;
static ATerm term_s_67;
static ATerm term_m_67;
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
  ATprotect(&(term_m_67));
  term_m_67 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_67));
  term_s_67 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_y_67);
  ATprotect(&(term_a_68));
  term_a_68 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_68));
  term_b_68 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_68));
  term_e_68 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_b_68);
  ATprotect(&(term_l_68));
  term_l_68 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_68));
  term_r_68 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(sym__2, term_d_69, term_f_69);
  ATprotect(&(term_i_69));
  term_i_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_70));
  term_g_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_70));
  term_i_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_70));
  term_j_70 = (ATerm) ATmakeAppl(sym__2, term_i_70, term_w_57);
  ATprotect(&(term_q_70));
  term_q_70 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_57);
  ATprotect(&(term_r_70));
  term_r_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_70));
  term_y_70 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(sym__2, term_y_70, term_l_68);
  ATprotect(&(term_h_71));
  term_h_71 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_71));
  term_u_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_71));
  term_v_71 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_i_70);
  ATprotect(&(term_k_72));
  term_k_72 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_72));
  term_o_72 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_p_72));
  term_p_72 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_72));
  term_t_72 = (ATerm) ATmakeAppl(sym__2, term_s_72, term_l_68);
  ATprotect(&(term_u_72));
  term_u_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(sym__2, term_v_72, term_l_68);
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(sym__2, term_i_73, term_l_68);
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(sym__3, term_d_69, term_f_69, (ATerm) ATempty);
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_i_73);
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(sym__2, term_p_65, term_s_72);
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_74));
  term_f_74 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_74));
  term_v_74 = (ATerm) ATmakeAppl(sym__2, term_y_65, term_l_68);
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
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
ATerm Seq_2_0 (ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm t);
static ATerm g_1 (ATerm t);
ATerm body_to_inline_0_0 (ATerm t);
ATerm inlineable_0_0 (ATerm t);
static ATerm j_7 (ATerm x_39, ATerm y_39, ATerm t);
ATerm bottomup_1_0 (ATerm q_142 (ATerm), ATerm t);
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
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm spaste_1_0 (ATerm i_141 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm j_141 (ATerm), ATerm k_141 (ATerm), ATerm l_141 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm n_141 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm d_13 (ATerm t_28, ATerm s_28, ATerm t);
ATerm SVar_1_0 (ATerm l_119 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm s_141 (ATerm), ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t);
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
static ATerm o_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm tpaste_1_0 (ATerm e_141 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm h_141 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm o_141 (ATerm), ATerm t);
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
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm g_13 (ATerm r_158 (ATerm), ATerm h_64, ATerm g_64, ATerm t);
static ATerm i_13 (ATerm u_158 (ATerm), ATerm v_158 (ATerm), ATerm l_64, ATerm k_64, ATerm t);
static ATerm j_13 (ATerm m_158 (ATerm), ATerm f_64, ATerm e_64, ATerm t);
static ATerm t_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm l_13 (ATerm t_882, ATerm y_882, ATerm u_87, ATerm t);
ATerm while_not_2_0 (ATerm g_149 (ATerm), ATerm h_149 (ATerm), ATerm t);
ATerm for_3_0 (ATerm j_149 (ATerm), ATerm k_149 (ATerm), ATerm l_149 (ATerm), ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm m_138 (ATerm g_137, ATerm h_137, ATerm i_137, ATerm t);
static ATerm c_9 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
ATerm free_vars_3_0 (ATerm q_165 (ATerm), ATerm r_165 (ATerm), ATerm s_165 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm h_119 (ATerm), ATerm t);
static ATerm n_13 (ATerm y_163 (ATerm), ATerm z_163 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_67, ATerm p_67, ATerm o_67, ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm o_13 (ATerm s_163 (ATerm), ATerm t_163 (ATerm (ATerm), ATerm), ATerm i_67, ATerm l_67, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm g_164 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm n_163 (ATerm (ATerm), ATerm), ATerm o_163 (ATerm), ATerm p_163 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_163 (ATerm (ATerm), ATerm), ATerm t);
static ATerm z_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm d_11 (ATerm t);
static ATerm e_11 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm k_11 (ATerm t);
ATerm InlineCall_0_0 (ATerm t);
ATerm leq_0_0 (ATerm t);
ATerm foldr_3_0 (ATerm w_161 (ATerm), ATerm x_161 (ATerm), ATerm y_161 (ATerm), ATerm t);
static ATerm m_11 (ATerm t);
static ATerm n_11 (ATerm t);
ATerm occurrences_1_0 (ATerm y_158 (ATerm), ATerm t);
static ATerm t_13 (ATerm j_140 (ATerm), ATerm w_27, ATerm v_27, ATerm t);
static ATerm v_13 (ATerm q_150 (ATerm), ATerm i_38, ATerm g_38, ATerm t);
static ATerm x_13 (ATerm r_39, ATerm s_39, ATerm t);
ATerm end_scope_1_0 (ATerm n_150 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm a_146 (ATerm), ATerm b_146 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm m_150 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm o_150 (ATerm), ATerm p_150 (ATerm), ATerm t);
static ATerm v_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm a_12 (ATerm t);
ATerm inline_sdef_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm p_142 (ATerm), ATerm t);
static ATerm e_12 (ATerm t);
static ATerm z_13 (ATerm j_108, ATerm i_108, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
ATerm genzip_4_0 (ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm i_147 (ATerm), ATerm j_147 (ATerm), ATerm t);
static ATerm i_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm t_143 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm o_156 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm h_159 (ATerm p_158, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm v_12 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm p_148 (ATerm), ATerm q_148 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm r_142 (ATerm), ATerm t);
static ATerm y_12 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm e_13 (ATerm t);
ATerm inline_sdefs_0_0 (ATerm t);
static ATerm f_15 (ATerm m_75, ATerm n_75, ATerm t);
static ATerm g_15 (ATerm l_35, ATerm m_35, ATerm t);
static ATerm i_15 (ATerm e_150 (ATerm), ATerm z_279, ATerm r_35, ATerm t);
static ATerm h_15 (ATerm h_35, ATerm i_35, ATerm t);
static ATerm f_13 (ATerm t);
static ATerm h_13 (ATerm t);
ATerm output_1_0 (ATerm m_174 (ATerm), ATerm t);
static ATerm t_168 (ATerm n_168, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_15 (ATerm n_35, ATerm t);
static ATerm k_15 (ATerm s_73, ATerm t_73, ATerm t);
static ATerm l_15 (ATerm o_75, ATerm p_75, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_170 (ATerm d_169, ATerm t);
static ATerm f_170 (ATerm h_169, ATerm i_169, ATerm j_169, ATerm t);
static ATerm g_170 (ATerm r_169, ATerm s_169, ATerm t_169, ATerm t);
static ATerm m_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm n_174 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm z_155 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm m_13 (ATerm t);
static ATerm p_13 (ATerm t);
static ATerm r_13 (ATerm t);
ATerm default_system_usage_2_0 (ATerm l_176 (ATerm), ATerm m_176 (ATerm), ATerm t);
static ATerm u_13 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm y_13 (ATerm t);
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
static ATerm w_15 (ATerm r_83, ATerm s_83, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm u_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm y_14 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_15 (ATerm m_39, ATerm n_39, ATerm l_39, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t);
static ATerm a_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm z_15 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_15 (ATerm u_36, ATerm v_36, ATerm t);
ATerm foldr_2_0 (ATerm u_161 (ATerm), ATerm v_161 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm e_16 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_171 (ATerm), ATerm t);
static ATerm f_16 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_15 (ATerm d_44, ATerm e_44, ATerm f_44, ATerm t);
ATerm lookup_table_0_1 (ATerm y_40, ATerm t);
ATerm new_hashtable_0_2 (ATerm o_44, ATerm p_44, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm q_15 (ATerm k_44, ATerm m_44, ATerm t);
static ATerm r_15 (ATerm r_44, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_156 (ATerm), ATerm t);
static ATerm y_15 (ATerm i_44, ATerm j_44, ATerm t);
static ATerm t_15 (ATerm f_41, ATerm g_41, ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_176 (ATerm), ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
ATerm parse_options_3_0 (ATerm d_176 (ATerm), ATerm e_176 (ATerm), ATerm f_176 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm g_174 (ATerm), ATerm h_174 (ATerm), ATerm i_174 (ATerm), ATerm j_174 (ATerm), ATerm k_174 (ATerm), ATerm t);
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
          t = v_13(u_0, z_0, a_1, t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty);
          x_0 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_17, i_0);
          y_0 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_0), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_m_17, i_0));
          t = v_13(v_0, x_0, y_0, t);
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
  t = n_15(e_1, t_1, t);
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
  t = n_15(z_1, a_2, t);
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
ATerm Seq_2_0 (ATerm w_122 (ATerm), ATerm x_122 (ATerm), ATerm t)
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
  t = w_122(t);
  q_1 = t;
  t = p_1;
  t = x_122(t);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, q_1, r_1);
  q_0 = t;
  t = SSLsetAnnotations(q_0, n_1);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,w_8 = NULL,n_2 = NULL;
  w_8 = t;
  if(match_cons(t, sym_Match_1))
    {
      v_8 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_8);
  u_8 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, v_8);
  n_2 = t;
  t = SSLsetAnnotations(n_2, u_8);
  return(t);
}
ATerm body_to_inline_0_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  static ATerm b_13 (ATerm t);
  static ATerm b_13 (ATerm t)
  {
    ATerm n_12 = NULL,w_12 = NULL,z_12 = NULL,a_13 = NULL;
    w_12 = t;
    if(match_cons(t, sym_Id_0))
      {
        t = w_12;
      }
    else
      {
        if(match_cons(t, sym_Fail_0))
          {
            t = w_12;
          }
        else
          {
            if(match_cons(t, sym_CallT_3))
              {
                z_12 = ATgetArgument(t, 0);
                a_13 = ATgetArgument(t, 1);
                n_12 = ATgetArgument(t, 2);
                {
                  ATerm f_2 = NULL,j_2 = NULL,m_2 = NULL,o_2 = NULL,i_1 = NULL,d_1 = NULL;
                  t = SSLgetAnnotations(w_12);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, o_2, a_13, n_12);
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
                    n_12 = ATgetArgument(t, 2);
                    {
                      ATerm k_4 = NULL,r_4 = NULL,t_4 = NULL,u_4 = NULL,k_1 = NULL,j_1 = NULL;
                      t = SSLgetAnnotations(w_12);
                      k_4 = t;
                      t = z_12;
                      if(match_cons(t, sym_SVar_1))
                        {
                          t_4 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(z_12);
                      r_4 = t;
                      t = (ATerm) ATmakeAppl(sym_SVar_1, t_4);
                      j_1 = t;
                      t = SSLsetAnnotations(j_1, r_4);
                      u_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, u_4, a_13, n_12);
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
                          ATerm g_5 = NULL,l_1 = NULL;
                          t = SSLgetAnnotations(w_12);
                          g_5 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, z_12);
                          l_1 = t;
                          t = SSLsetAnnotations(l_1, g_5);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Match_1))
                          {
                            z_12 = ATgetArgument(t, 0);
                            {
                              ATerm i_6 = NULL,w_1 = NULL;
                              t = SSLgetAnnotations(w_12);
                              i_6 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, z_12);
                              w_1 = t;
                              t = SSLsetAnnotations(w_1, i_6);
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
                                      ATerm i_7 = NULL,s_7 = NULL,b_8 = NULL,d_8 = NULL,y_1 = NULL,x_1 = NULL;
                                      t = SSLgetAnnotations(w_12);
                                      i_7 = t;
                                      t = z_12;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          b_8 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = SSLgetAnnotations(z_12);
                                      s_7 = t;
                                      t = (ATerm) ATmakeAppl(sym_Match_1, b_8);
                                      x_1 = t;
                                      t = SSLsetAnnotations(x_1, s_7);
                                      d_8 = t;
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_8, a_13);
                                      y_1 = t;
                                      t = SSLsetAnnotations(y_1, i_7);
                                      LocalPopChoice(v_17);
                                    }
                                  else
                                    {
                                      t = t_17;
                                      {
                                        ATerm l_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,q_2 = NULL,p_2 = NULL;
                                        t = SSLgetAnnotations(w_12);
                                        l_8 = t;
                                        t = z_12;
                                        if(match_cons(t, sym_Scope_2))
                                          {
                                            p_8 = ATgetArgument(t, 0);
                                            q_8 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(z_12);
                                        o_8 = t;
                                        t = q_8;
                                        t = Seq_2_0(g_1, _id, t);
                                        r_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Scope_2, p_8, r_8);
                                        p_2 = t;
                                        t = SSLsetAnnotations(p_2, o_8);
                                        s_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Seq_2, s_8, a_13);
                                        q_2 = t;
                                        t = SSLsetAnnotations(q_2, l_8);
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
                                          ATerm e_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,t_2 = NULL,r_2 = NULL;
                                          t = SSLgetAnnotations(w_12);
                                          e_9 = t;
                                          t = a_13;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              i_9 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = SSLgetAnnotations(a_13);
                                          h_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Match_1, i_9);
                                          r_2 = t;
                                          t = SSLsetAnnotations(r_2, h_9);
                                          j_9 = t;
                                          t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, j_9);
                                          t_2 = t;
                                          t = SSLsetAnnotations(t_2, e_9);
                                          LocalPopChoice(x_17);
                                        }
                                      else
                                        {
                                          t = w_17;
                                          {
                                            ATerm r_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,z_9 = NULL,b_10 = NULL,x_2 = NULL,w_2 = NULL,u_2 = NULL;
                                            t = SSLgetAnnotations(w_12);
                                            r_9 = t;
                                            t = a_13;
                                            if(match_cons(t, sym_Seq_2))
                                              {
                                                v_9 = ATgetArgument(t, 0);
                                                w_9 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(a_13);
                                            u_9 = t;
                                            t = v_9;
                                            if(match_cons(t, sym_Match_1))
                                              {
                                                z_9 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = SSLgetAnnotations(v_9);
                                            y_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, z_9);
                                            u_2 = t;
                                            t = SSLsetAnnotations(u_2, y_9);
                                            b_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Seq_2, b_10, w_9);
                                            w_2 = t;
                                            t = SSLsetAnnotations(w_2, u_9);
                                            x_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, z_12, x_9);
                                            x_2 = t;
                                            t = SSLsetAnnotations(x_2, r_9);
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
                                          ATerm q_10 = NULL,w_10 = NULL,x_10 = NULL,y_2 = NULL;
                                          t = SSLgetAnnotations(w_12);
                                          q_10 = t;
                                          t = z_12;
                                          t = b_13(t);
                                          w_10 = t;
                                          t = a_13;
                                          t = b_13(t);
                                          x_10 = t;
                                          t = (ATerm) ATmakeAppl(sym_Choice_2, w_10, x_10);
                                          y_2 = t;
                                          t = SSLsetAnnotations(y_2, q_10);
                                        }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_LChoice_2))
                                          {
                                            z_12 = ATgetArgument(t, 0);
                                            a_13 = ATgetArgument(t, 1);
                                            {
                                              ATerm l_11 = NULL,p_11 = NULL,q_11 = NULL,z_2 = NULL;
                                              t = SSLgetAnnotations(w_12);
                                              l_11 = t;
                                              t = z_12;
                                              t = b_13(t);
                                              p_11 = t;
                                              t = a_13;
                                              t = b_13(t);
                                              q_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_LChoice_2, p_11, q_11);
                                              z_2 = t;
                                              t = SSLsetAnnotations(z_2, l_11);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_GuardedLChoice_3))
                                              {
                                                z_12 = ATgetArgument(t, 0);
                                                a_13 = ATgetArgument(t, 1);
                                                n_12 = ATgetArgument(t, 2);
                                                {
                                                  ATerm z_11 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,a_3 = NULL;
                                                  t = SSLgetAnnotations(w_12);
                                                  z_11 = t;
                                                  t = z_12;
                                                  t = b_13(t);
                                                  f_12 = t;
                                                  t = a_13;
                                                  t = b_13(t);
                                                  g_12 = t;
                                                  t = n_12;
                                                  t = b_13(t);
                                                  h_12 = t;
                                                  t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, f_12, g_12, h_12);
                                                  a_3 = t;
                                                  t = SSLsetAnnotations(a_3, z_11);
                                                }
                                              }
                                            else
                                              {
                                                ATerm r_12 = NULL,b_3 = NULL;
                                                if(match_cons(t, sym_Cong_2))
                                                  {
                                                    z_12 = ATgetArgument(t, 0);
                                                    a_13 = ATgetArgument(t, 1);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSLgetAnnotations(w_12);
                                                r_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_Cong_2, z_12, a_13);
                                                b_3 = t;
                                                t = SSLsetAnnotations(b_3, r_12);
                                              }
                                          }
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
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,o_15 = NULL,p_15 = NULL;
  c_15 = t;
  if(match_cons(t, sym_ExtSDefInl_4))
    {
      d_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
      o_15 = ATgetArgument(t, 2);
      p_15 = ATgetArgument(t, 3);
      {
        ATerm c_16 = NULL,d_16 = NULL,k_16 = NULL,c_4 = NULL;
        t = SSLgetAnnotations(c_15);
        d_16 = t;
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
        c_16 = t;
        t = p_15;
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
                        if((c_16 != ATgetArgument(b_18, 0)))
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
        t = p_15;
        t = body_to_inline_0_0(t);
        k_16 = t;
        t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, c_16, e_15, o_15, k_16);
        c_4 = t;
        t = SSLsetAnnotations(c_4, d_16);
      }
    }
  else
    {
      ATerm w_16 = NULL,x_16 = NULL,c_17 = NULL,d_4 = NULL;
      if(match_cons(t, sym_SDefT_4))
        {
          d_15 = ATgetArgument(t, 0);
          e_15 = ATgetArgument(t, 1);
          o_15 = ATgetArgument(t, 2);
          p_15 = ATgetArgument(t, 3);
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
      t = p_15;
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
      t = p_15;
      t = body_to_inline_0_0(t);
      c_17 = t;
      t = (ATerm) ATmakeAppl(sym_SDefT_4, w_16, e_15, o_15, c_17);
      d_4 = t;
      t = SSLsetAnnotations(d_4, x_16);
    }
  return(t);
}
static ATerm j_7 (ATerm x_39, ATerm y_39, ATerm t)
{
  ATerm b_16 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_39, y_39);
  t = t_15(x_39, y_39, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_16 = ATgetFirst((ATermList) t);
      {
        ATerm o_18 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_16;
  return(t);
}
ATerm bottomup_1_0 (ATerm q_142 (ATerm), ATerm t)
{
  static ATerm c_2 (ATerm t);
  static ATerm c_2 (ATerm t)
  {
    t = bottomup_1_0(q_142, t);
    return(t);
  }
  t = SRTS_all(c_2, t);
  t = q_142(t);
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
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_18 = ATgetArgument(t, 0);
      if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
        {
          z_30 = ATgetFirst((ATermList) s_18);
          a_31 = (ATerm) ATgetNext((ATermList) s_18);
        }
      else
        _fail(t);
      {
        ATerm v_18 = ATgetArgument(t, 1);
        if(((ATgetType(v_18) == AT_LIST) && !(ATisEmpty(v_18))))
          {
            b_31 = ATgetFirst((ATermList) v_18);
            c_31 = (ATerm) ATgetNext((ATermList) v_18);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_30, b_31), (ATerm) ATmakeAppl(sym__2, a_31, c_31));
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL;
  if(match_cons(t, sym__2))
    {
      e_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_31), e_31);
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
  ATerm t_40 = NULL,w_40 = NULL,x_40 = NULL,c_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_19 = ATgetArgument(t, 0);
      if(((ATgetType(j_19) == AT_LIST) && !(ATisEmpty(j_19))))
        {
          t_40 = ATgetFirst((ATermList) j_19);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_40, x_40), (ATerm) ATmakeAppl(sym__2, w_40, c_41));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL;
  if(match_cons(t, sym__2))
    {
      j_41 = ATgetArgument(t, 0);
      k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_41), j_41);
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
        ATerm q_57 = NULL,t_57 = NULL;
        q_57 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm o_19 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t_57 = t;
        t = SSLgetAnnotations(q_57);
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
        t = t_57;
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
    ATerm w_21 = NULL,z_21 = NULL,b_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,v_22 = NULL,w_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
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
                      ATerm f_23 = NULL,h_23 = NULL,j_23 = NULL,k_23 = NULL,r_23 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL;
                      t = b_23;
                      t = new_0_0(t);
                      f_23 = t;
                      t = bottomup_1_0(d_2, t);
                      h_24 = t;
                      t = (ATerm) ATempty;
                      t = d_2(t);
                      i_24 = t;
                      t = (ATerm) ATinsert(CheckATermList(i_24), h_24);
                      t = d_2(t);
                      h_23 = t;
                      t = f_23;
                      t = bottomup_1_0(d_2, t);
                      g_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, g_24);
                      t = d_2(t);
                      f_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Match_1, f_24);
                      t = d_2(t);
                      k_23 = t;
                      t = a_23;
                      t = bottomup_1_0(d_2, t);
                      b_24 = t;
                      t = f_23;
                      t = bottomup_1_0(d_2, t);
                      e_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Var_1, e_24);
                      t = d_2(t);
                      d_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Build_1, d_24);
                      t = d_2(t);
                      c_24 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, b_24, c_24);
                      t = d_2(t);
                      r_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_23, r_23);
                      t = d_2(t);
                      j_23 = t;
                      t = (ATerm) ATmakeAppl(sym_Scope_2, h_23, j_23);
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
                          ATerm o_24 = NULL,p_24 = NULL,q_24 = NULL,r_24 = NULL,s_24 = NULL,u_24 = NULL,w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL,a_25 = NULL,f_25 = NULL,g_25 = NULL;
                          t = b_23;
                          t = new_0_0(t);
                          o_24 = t;
                          t = bottomup_1_0(d_2, t);
                          f_25 = t;
                          t = (ATerm) ATempty;
                          t = d_2(t);
                          g_25 = t;
                          t = (ATerm) ATinsert(CheckATermList(g_25), f_25);
                          t = d_2(t);
                          p_24 = t;
                          t = o_24;
                          t = bottomup_1_0(d_2, t);
                          a_25 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, a_25);
                          t = d_2(t);
                          z_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Match_1, z_24);
                          t = d_2(t);
                          r_24 = t;
                          t = a_23;
                          t = bottomup_1_0(d_2, t);
                          u_24 = t;
                          t = o_24;
                          t = bottomup_1_0(d_2, t);
                          y_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, y_24);
                          t = d_2(t);
                          x_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Build_1, x_24);
                          t = d_2(t);
                          w_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_24, w_24);
                          t = d_2(t);
                          s_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, r_24, s_24);
                          t = d_2(t);
                          q_24 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, p_24, q_24);
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
                                ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,g_26 = NULL,p_26 = NULL;
                                t = b_23;
                                t = new_0_0(t);
                                k_25 = t;
                                t = bottomup_1_0(d_2, t);
                                g_26 = t;
                                t = (ATerm) ATempty;
                                t = d_2(t);
                                p_26 = t;
                                t = (ATerm) ATinsert(CheckATermList(p_26), g_26);
                                t = d_2(t);
                                l_25 = t;
                                t = k_25;
                                t = bottomup_1_0(d_2, t);
                                y_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, y_25);
                                t = d_2(t);
                                x_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, x_25);
                                t = d_2(t);
                                n_25 = t;
                                t = a_23;
                                t = bottomup_1_0(d_2, t);
                                r_25 = t;
                                t = k_25;
                                t = bottomup_1_0(d_2, t);
                                w_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Var_1, w_25);
                                t = d_2(t);
                                t_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Build_1, t_25);
                                t = d_2(t);
                                s_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_25, s_25);
                                t = d_2(t);
                                q_25 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, n_25, q_25);
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
                        ATerm t_26 = NULL,v_26 = NULL,w_26 = NULL,y_26 = NULL,c_27 = NULL,j_27 = NULL,o_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL;
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
                        e_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_28);
                        t = d_2(t);
                        c_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Match_1, c_28);
                        t = d_2(t);
                        y_26 = t;
                        t = a_23;
                        t = bottomup_1_0(d_2, t);
                        j_27 = t;
                        t = t_26;
                        t = bottomup_1_0(d_2, t);
                        b_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Var_1, b_28);
                        t = d_2(t);
                        a_28 = t;
                        t = (ATerm) ATmakeAppl(sym_Build_1, a_28);
                        t = d_2(t);
                        o_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, j_27, o_27);
                        t = d_2(t);
                        c_27 = t;
                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_26, c_27);
                        t = d_2(t);
                        w_26 = t;
                        t = (ATerm) ATmakeAppl(sym_Scope_2, v_26, w_26);
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
                          int d_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATmakeAppl(sym_Test_1, w_22);
                              t = d_2(t);
                              LocalPopChoice(d_21);
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
                        t_22 = ATgetArgument(t, 0);
                        v_22 = ATgetArgument(t, 1);
                        t = t_22;
                        if(match_cons(t, sym_Match_1))
                          {
                            s_22 = ATgetArgument(t, 0);
                            t = s_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                q_22 = ATgetArgument(t, 0);
                                j_22 = ATgetArgument(t, 1);
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
                                                    r_22 = ATgetArgument(t, 0);
                                                    k_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm j_21 = t;
                                                      int k_21 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, r_22, q_22);
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
                                                                ATerm y_30 = NULL;
                                                                t = q_22;
                                                                if((r_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, k_22, j_22);
                                                                t = genzip_4_0(e_2, g_2, h_2, i_2, t);
                                                                y_30 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_30), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_22, k_22)), v_22));
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
                                                                      ATerm r_31 = NULL;
                                                                      t = s_22;
                                                                      if((w_22 != t))
                                                                        {
                                                                          _fail(t);
                                                                        }
                                                                      t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                                      t = d_2(t);
                                                                      r_31 = t;
                                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, r_31, v_22);
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
                                                        ATerm b_32 = NULL;
                                                        t = s_22;
                                                        if((w_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                        t = d_2(t);
                                                        b_32 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_32, v_22);
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
                                                          ATerm f_32 = NULL;
                                                          t = s_22;
                                                          if((w_22 != t))
                                                            {
                                                              _fail(t);
                                                            }
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, w_22);
                                                          t = d_2(t);
                                                          f_32 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_32, v_22);
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
                                                              ATerm m_32 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              m_32 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, m_32);
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
                                        ATerm a_22 = t;
                                        int u_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = term_m_20;
                                            t = d_2(t);
                                            LocalPopChoice(u_22);
                                          }
                                        else
                                          {
                                            t = a_22;
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
                                                  ATerm i_23 = t;
                                                  int l_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm l_33 = NULL;
                                                      t = s_22;
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
                                                      t = i_23;
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
                                                          t = s_22;
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
                                                              ATerm y_33 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              y_33 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, y_33);
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
                                s_22 = ATgetArgument(t, 0);
                                t = s_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    q_22 = ATgetArgument(t, 0);
                                    t = a_23;
                                    if(match_cons(t, sym_Id_0))
                                      {
                                        t = z_22;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Fail_0))
                                          {
                                            ATerm q_23 = t;
                                            int s_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(s_23);
                                              }
                                            else
                                              {
                                                t = q_23;
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
                                                      ATerm v_34 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      v_34 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, v_34);
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
                                                      int a_24 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm b_35 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                          t = d_2(t);
                                                          b_35 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_35, v_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(a_24);
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
                                                            r_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm j_24 = t;
                                                              int k_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_35 = NULL,j_35 = NULL;
                                                                  t = q_22;
                                                                  if((r_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_22);
                                                                  t = d_2(t);
                                                                  j_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, j_35);
                                                                  t = d_2(t);
                                                                  f_35 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_35, v_22);
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
                                                              ATerm m_24 = t;
                                                              int n_24 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_36 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                  t = d_2(t);
                                                                  j_36 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, j_36);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(n_24);
                                                                }
                                                              else
                                                                {
                                                                  t = m_24;
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
                                            ATerm v_24 = t;
                                            int h_25 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(h_25);
                                              }
                                            else
                                              {
                                                t = v_24;
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
                                                ATerm u_25 = t;
                                                int z_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm c_26 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(z_25);
                                                    {
                                                      ATerm d_26 = t;
                                                      int e_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm e_37 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, s_22);
                                                          t = d_2(t);
                                                          e_37 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_37, v_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(e_26);
                                                        }
                                                      else
                                                        {
                                                          t = d_26;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = u_25;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm f_26 = t;
                                                          int h_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm o_37 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              o_37 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, o_37);
                                                              t = d_2(t);
                                                              LocalPopChoice(h_26);
                                                            }
                                                          else
                                                            {
                                                              t = f_26;
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
                                    l_22 = ATgetArgument(t, 1);
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
                                            ATerm i_26 = t;
                                            int j_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(j_26);
                                              }
                                            else
                                              {
                                                t = i_26;
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
                                                  ATerm k_26 = t;
                                                  int l_26 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm x_37 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      x_37 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, x_37);
                                                      t = d_2(t);
                                                      LocalPopChoice(l_26);
                                                    }
                                                  else
                                                    {
                                                      t = k_26;
                                                      t = b_23;
                                                    }
                                                }
                                              }
                                            else
                                              {
                                                ATerm m_26 = t;
                                                int n_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm o_26 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(n_26);
                                                    {
                                                      ATerm r_26 = t;
                                                      int s_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm p_38 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, s_22, l_22, m_22);
                                                          t = d_2(t);
                                                          p_38 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_38, v_22);
                                                          t = d_2(t);
                                                          LocalPopChoice(s_26);
                                                        }
                                                      else
                                                        {
                                                          t = r_26;
                                                          t = b_23;
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = m_26;
                                                    if(match_cons(t, sym_Scope_2))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        y_22 = ATgetArgument(t, 1);
                                                        {
                                                          ATerm u_26 = t;
                                                          int x_26 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_38 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              u_38 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, u_38);
                                                              t = d_2(t);
                                                              LocalPopChoice(x_26);
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
                                            ATerm z_26 = t;
                                            int d_27 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(d_27);
                                              }
                                            else
                                              {
                                                t = z_26;
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
                            t_22 = ATgetArgument(t, 0);
                            t = t_22;
                            if(match_cons(t, sym_Op_2))
                              {
                                s_22 = ATgetArgument(t, 0);
                                l_22 = ATgetArgument(t, 1);
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
                                                  ATerm j_40 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                  t = d_2(t);
                                                  j_40 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, j_40);
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
                                                    r_22 = ATgetArgument(t, 0);
                                                    k_22 = ATgetArgument(t, 1);
                                                    {
                                                      ATerm z_27 = t;
                                                      int d_28 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, r_22, s_22);
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
                                                          LocalPopChoice(d_28);
                                                        }
                                                      else
                                                        {
                                                          t = z_27;
                                                          {
                                                            ATerm i_28 = t;
                                                            int j_28 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm s_40 = NULL;
                                                                t = s_22;
                                                                if((r_22 != t))
                                                                  {
                                                                    _fail(t);
                                                                  }
                                                                t = (ATerm) ATmakeAppl(sym__2, k_22, l_22);
                                                                t = genzip_4_0(s_2, v_2, c_3, d_3, t);
                                                                s_40 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_40), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, r_22, k_22)));
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
                                                                      t = t_22;
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
                                                    ATerm n_28 = t;
                                                    int o_28 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = t_22;
                                                        if((w_22 != t))
                                                          {
                                                            _fail(t);
                                                          }
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_22);
                                                        t = d_2(t);
                                                        LocalPopChoice(o_28);
                                                      }
                                                    else
                                                      {
                                                        t = n_28;
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
                                                          t = t_22;
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
                                                          int v_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm i_42 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              i_42 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, i_42);
                                                              t = d_2(t);
                                                              LocalPopChoice(v_28);
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
                                                  ATerm g_43 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                  t = d_2(t);
                                                  g_43 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, g_43);
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
                                                      t = t_22;
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
                                                          t = t_22;
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
                                                          int g_29 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm r_43 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              r_43 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, r_43);
                                                              t = d_2(t);
                                                              LocalPopChoice(g_29);
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
                                t_22 = ATgetArgument(t, 0);
                                t = t_22;
                                if(match_cons(t, sym_Var_1))
                                  {
                                    s_22 = ATgetArgument(t, 0);
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
                                            int j_29 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(j_29);
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
                                                  int m_29 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm n_44 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      n_44 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, n_44);
                                                      t = d_2(t);
                                                      LocalPopChoice(m_29);
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
                                                ATerm n_29 = t;
                                                int o_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        ATerm p_29 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(o_29);
                                                    {
                                                      ATerm q_29 = t;
                                                      int r_29 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_22);
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
                                                    t = n_29;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        w_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Var_1))
                                                          {
                                                            r_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm s_29 = t;
                                                              int t_29 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm b_45 = NULL;
                                                                  t = s_22;
                                                                  if((r_22 != t))
                                                                    {
                                                                      _fail(t);
                                                                    }
                                                                  t = (ATerm) ATmakeAppl(sym_Var_1, r_22);
                                                                  t = d_2(t);
                                                                  b_45 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Match_1, b_45);
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
                                                                  ATerm h_45 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                  t = d_2(t);
                                                                  h_45 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, h_45);
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
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_22);
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
                                    t_22 = ATgetArgument(t, 0);
                                    v_22 = ATgetArgument(t, 1);
                                    n_22 = ATgetArgument(t, 2);
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
                                                  int k_30 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm b_47 = NULL;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                      t = d_2(t);
                                                      b_47 = t;
                                                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, b_47);
                                                      t = d_2(t);
                                                      LocalPopChoice(k_30);
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
                                                          t = (ATerm) ATmakeAppl(sym_PrimT_3, t_22, v_22, n_22);
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
                                                              ATerm v_47 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              v_47 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, v_47);
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
                                        t_22 = ATgetArgument(t, 0);
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
                                                      int x_30 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          ATerm t_48 = NULL;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                          t = d_2(t);
                                                          t_48 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Let_2, t_22, t_48);
                                                          t = d_2(t);
                                                          LocalPopChoice(x_30);
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
                                                                t = (ATerm) ATmakeAppl(sym_Let_2, t_22, q_49);
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
                                                              ATerm w_49 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                              t = d_2(t);
                                                              w_49 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Let_2, t_22, w_49);
                                                              t = d_2(t);
                                                              LocalPopChoice(p_31);
                                                            }
                                                          else
                                                            {
                                                              t = o_31;
                                                              {
                                                                ATerm q_31 = t;
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
                                                                    t = q_31;
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
                                                            ATerm r_50 = NULL;
                                                            t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                            t = d_2(t);
                                                            r_50 = t;
                                                            t = (ATerm) ATmakeAppl(sym_Let_2, t_22, r_50);
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
                                            t_22 = ATgetArgument(t, 0);
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
                                                          int z_31 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm l_51 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                              t = d_2(t);
                                                              l_51 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, t_22, l_51);
                                                              t = d_2(t);
                                                              LocalPopChoice(z_31);
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
                                                          ATerm a_32 = t;
                                                          int c_32 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm u_51 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              u_51 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, u_51);
                                                              t = d_2(t);
                                                              LocalPopChoice(c_32);
                                                            }
                                                          else
                                                            {
                                                              t = a_32;
                                                              {
                                                                ATerm d_32 = t;
                                                                int e_32 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    ATerm b_52 = NULL;
                                                                    t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                                    t = d_2(t);
                                                                    b_52 = t;
                                                                    t = (ATerm) ATmakeAppl(sym_Scope_2, t_22, b_52);
                                                                    t = d_2(t);
                                                                    LocalPopChoice(e_32);
                                                                  }
                                                                else
                                                                  {
                                                                    t = d_32;
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
                                                              ATerm g_32 = t;
                                                              int h_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm j_52 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                                  t = d_2(t);
                                                                  j_52 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, t_22, j_52);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(h_32);
                                                                }
                                                              else
                                                                {
                                                                  t = g_32;
                                                                  {
                                                                    ATerm i_32 = t;
                                                                    int j_32 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm r_52 = NULL;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                        t = d_2(t);
                                                                        r_52 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, r_52);
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
                                                            int l_32 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm y_52 = NULL;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, v_22);
                                                                t = d_2(t);
                                                                y_52 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, t_22, y_52);
                                                                t = d_2(t);
                                                                LocalPopChoice(l_32);
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
                                                              ATerm o_53 = NULL;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                              t = d_2(t);
                                                              o_53 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_22, o_53);
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
                                                              int v_32 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm v_53 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_22, z_22);
                                                                  t = d_2(t);
                                                                  v_53 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_22, v_53);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(v_32);
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
                            ATerm x_32 = t;
                            int y_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = term_y_19;
                                t = d_2(t);
                                LocalPopChoice(y_32);
                              }
                            else
                              {
                                t = x_32;
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
                                          ATerm l_57 = NULL;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, y_22, z_22);
                                          t = d_2(t);
                                          l_57 = t;
                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, w_22, l_57);
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
                                    int x_33 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_20;
                                        t = d_2(t);
                                        LocalPopChoice(x_33);
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
                                    t_22 = ATgetArgument(t, 0);
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
                                            ATerm i_60 = NULL;
                                            t = (ATerm) ATmakeAppl(sym__2, a_23, t_22);
                                            t = conc_0_0(t);
                                            i_60 = t;
                                            t = (ATerm) ATmakeAppl(sym_Scope_2, i_60, v_22);
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
                                    int k_34 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = term_m_20;
                                        t = d_2(t);
                                        LocalPopChoice(k_34);
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
                                                  ATerm v_60 = NULL,b_61 = NULL,g_61 = NULL,h_61 = NULL,j_61 = NULL,m_61 = NULL,n_61 = NULL,p_61 = NULL,s_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL;
                                                  t = b_23;
                                                  t = new_0_0(t);
                                                  v_60 = t;
                                                  t = bottomup_1_0(d_2, t);
                                                  c_62 = t;
                                                  t = (ATerm) ATempty;
                                                  t = d_2(t);
                                                  d_62 = t;
                                                  t = (ATerm) ATinsert(CheckATermList(d_62), c_62);
                                                  t = d_2(t);
                                                  b_61 = t;
                                                  t = v_60;
                                                  t = bottomup_1_0(d_2, t);
                                                  b_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, b_62);
                                                  t = d_2(t);
                                                  a_62 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, a_62);
                                                  t = d_2(t);
                                                  h_61 = t;
                                                  t = a_23;
                                                  t = bottomup_1_0(d_2, t);
                                                  m_61 = t;
                                                  t = v_60;
                                                  t = bottomup_1_0(d_2, t);
                                                  s_61 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Var_1, s_61);
                                                  t = d_2(t);
                                                  p_61 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Build_1, p_61);
                                                  t = d_2(t);
                                                  n_61 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, m_61, n_61);
                                                  t = d_2(t);
                                                  j_61 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, h_61, j_61);
                                                  t = d_2(t);
                                                  g_61 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Scope_2, b_61, g_61);
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
                                            int u_34 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = term_m_20;
                                                t = d_2(t);
                                                LocalPopChoice(u_34);
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
                                                    g_22 = ATgetArgument(t, 1);
                                                    t = z_21;
                                                    if(match_cons(t, sym_Build_1))
                                                      {
                                                        b_22 = ATgetArgument(t, 0);
                                                        t = w_22;
                                                        if(match_cons(t, sym_Where_1))
                                                          {
                                                            r_22 = ATgetArgument(t, 0);
                                                            {
                                                              ATerm y_34 = t;
                                                              int z_34 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm d_63 = NULL,h_63 = NULL,i_63 = NULL;
                                                                  t = (ATerm) ATmakeAppl(sym_Build_1, b_22);
                                                                  t = d_2(t);
                                                                  i_63 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, i_63, g_22);
                                                                  t = d_2(t);
                                                                  h_63 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, r_22, h_63);
                                                                  t = d_2(t);
                                                                  d_63 = t;
                                                                  t = (ATerm) ATmakeAppl(sym_Where_1, d_63);
                                                                  t = d_2(t);
                                                                  LocalPopChoice(z_34);
                                                                }
                                                              else
                                                                {
                                                                  t = y_34;
                                                                  {
                                                                    ATerm a_35 = t;
                                                                    int c_35 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        ATerm k_63 = NULL,m_63 = NULL,n_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL;
                                                                        t = b_23;
                                                                        t = new_0_0(t);
                                                                        k_63 = t;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        b_64 = t;
                                                                        t = (ATerm) ATempty;
                                                                        t = d_2(t);
                                                                        c_64 = t;
                                                                        t = (ATerm) ATinsert(CheckATermList(c_64), b_64);
                                                                        t = d_2(t);
                                                                        m_63 = t;
                                                                        t = k_63;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        a_64 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, a_64);
                                                                        t = d_2(t);
                                                                        y_63 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Match_1, y_63);
                                                                        t = d_2(t);
                                                                        p_63 = t;
                                                                        t = a_23;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        r_63 = t;
                                                                        t = k_63;
                                                                        t = bottomup_1_0(d_2, t);
                                                                        x_63 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Var_1, x_63);
                                                                        t = d_2(t);
                                                                        w_63 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Build_1, w_63);
                                                                        t = d_2(t);
                                                                        v_63 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, r_63, v_63);
                                                                        t = d_2(t);
                                                                        q_63 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, p_63, q_63);
                                                                        t = d_2(t);
                                                                        n_63 = t;
                                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, m_63, n_63);
                                                                        t = d_2(t);
                                                                        LocalPopChoice(c_35);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = a_35;
                                                                        t = b_23;
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                        else
                                                          {
                                                            ATerm d_35 = t;
                                                            int e_35 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                ATerm u_64 = NULL,b_65 = NULL,c_65 = NULL,h_65 = NULL,k_65 = NULL,w_65 = NULL,a_66 = NULL,b_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL;
                                                                t = b_23;
                                                                t = new_0_0(t);
                                                                u_64 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                j_66 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                k_66 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(k_66), j_66);
                                                                t = d_2(t);
                                                                b_65 = t;
                                                                t = u_64;
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
                                                                t = u_64;
                                                                t = bottomup_1_0(d_2, t);
                                                                g_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, g_66);
                                                                t = d_2(t);
                                                                b_66 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, b_66);
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
                                                                LocalPopChoice(e_35);
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
                                                          ATerm g_35 = t;
                                                          int k_35 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,v_66 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,n_67 = NULL,t_67 = NULL,w_67 = NULL,x_67 = NULL;
                                                              t = b_23;
                                                              t = new_0_0(t);
                                                              p_66 = t;
                                                              t = bottomup_1_0(d_2, t);
                                                              w_67 = t;
                                                              t = (ATerm) ATempty;
                                                              t = d_2(t);
                                                              x_67 = t;
                                                              t = (ATerm) ATinsert(CheckATermList(x_67), w_67);
                                                              t = d_2(t);
                                                              q_66 = t;
                                                              t = p_66;
                                                              t = bottomup_1_0(d_2, t);
                                                              t_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, t_67);
                                                              t = d_2(t);
                                                              n_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Match_1, n_67);
                                                              t = d_2(t);
                                                              s_66 = t;
                                                              t = a_23;
                                                              t = bottomup_1_0(d_2, t);
                                                              d_67 = t;
                                                              t = p_66;
                                                              t = bottomup_1_0(d_2, t);
                                                              g_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Var_1, g_67);
                                                              t = d_2(t);
                                                              f_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Build_1, f_67);
                                                              t = d_2(t);
                                                              e_67 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_67, e_67);
                                                              t = d_2(t);
                                                              v_66 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_66, v_66);
                                                              t = d_2(t);
                                                              r_66 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Scope_2, q_66, r_66);
                                                              t = d_2(t);
                                                              LocalPopChoice(k_35);
                                                            }
                                                          else
                                                            {
                                                              t = g_35;
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
                                                          ATerm c_68 = NULL,d_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,t_68 = NULL,x_68 = NULL,a_69 = NULL,b_69 = NULL,e_69 = NULL,h_69 = NULL;
                                                          t = b_23;
                                                          t = new_0_0(t);
                                                          c_68 = t;
                                                          t = bottomup_1_0(d_2, t);
                                                          e_69 = t;
                                                          t = (ATerm) ATempty;
                                                          t = d_2(t);
                                                          h_69 = t;
                                                          t = (ATerm) ATinsert(CheckATermList(h_69), e_69);
                                                          t = d_2(t);
                                                          d_68 = t;
                                                          t = c_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          b_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, b_69);
                                                          t = d_2(t);
                                                          a_69 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Match_1, a_69);
                                                          t = d_2(t);
                                                          n_68 = t;
                                                          t = a_23;
                                                          t = bottomup_1_0(d_2, t);
                                                          p_68 = t;
                                                          t = c_68;
                                                          t = bottomup_1_0(d_2, t);
                                                          x_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Var_1, x_68);
                                                          t = d_2(t);
                                                          t_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Build_1, t_68);
                                                          t = d_2(t);
                                                          q_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_68, q_68);
                                                          t = d_2(t);
                                                          o_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_68, o_68);
                                                          t = d_2(t);
                                                          m_68 = t;
                                                          t = (ATerm) ATmakeAppl(sym_Scope_2, d_68, m_68);
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
                                                                ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL,c_70 = NULL,h_70 = NULL,l_70 = NULL,m_70 = NULL,p_70 = NULL;
                                                                t = b_23;
                                                                t = new_0_0(t);
                                                                p_69 = t;
                                                                t = bottomup_1_0(d_2, t);
                                                                m_70 = t;
                                                                t = (ATerm) ATempty;
                                                                t = d_2(t);
                                                                p_70 = t;
                                                                t = (ATerm) ATinsert(CheckATermList(p_70), m_70);
                                                                t = d_2(t);
                                                                q_69 = t;
                                                                t = p_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                l_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, l_70);
                                                                t = d_2(t);
                                                                h_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, h_70);
                                                                t = d_2(t);
                                                                s_69 = t;
                                                                t = a_23;
                                                                t = bottomup_1_0(d_2, t);
                                                                v_69 = t;
                                                                t = p_69;
                                                                t = bottomup_1_0(d_2, t);
                                                                c_70 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Var_1, c_70);
                                                                t = d_2(t);
                                                                x_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Build_1, x_69);
                                                                t = d_2(t);
                                                                w_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, v_69, w_69);
                                                                t = d_2(t);
                                                                u_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Seq_2, s_69, u_69);
                                                                t = d_2(t);
                                                                r_69 = t;
                                                                t = (ATerm) ATmakeAppl(sym_Scope_2, q_69, r_69);
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
                                                        ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,i_71 = NULL;
                                                        t = b_23;
                                                        t = new_0_0(t);
                                                        s_70 = t;
                                                        t = bottomup_1_0(d_2, t);
                                                        f_71 = t;
                                                        t = (ATerm) ATempty;
                                                        t = d_2(t);
                                                        i_71 = t;
                                                        t = (ATerm) ATinsert(CheckATermList(i_71), f_71);
                                                        t = d_2(t);
                                                        t_70 = t;
                                                        t = s_70;
                                                        t = bottomup_1_0(d_2, t);
                                                        e_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, e_71);
                                                        t = d_2(t);
                                                        d_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, d_71);
                                                        t = d_2(t);
                                                        v_70 = t;
                                                        t = a_23;
                                                        t = bottomup_1_0(d_2, t);
                                                        z_70 = t;
                                                        t = s_70;
                                                        t = bottomup_1_0(d_2, t);
                                                        c_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, c_71);
                                                        t = d_2(t);
                                                        b_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Build_1, b_71);
                                                        t = d_2(t);
                                                        a_71 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, z_70, a_71);
                                                        t = d_2(t);
                                                        w_70 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, v_70, w_70);
                                                        t = d_2(t);
                                                        u_70 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Scope_2, t_70, u_70);
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
                                                int i_36 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_Path_2))
                                                      {
                                                        ATerm k_36 = ATgetArgument(t, 0);
                                                        z_22 = ATgetArgument(t, 1);
                                                      }
                                                    else
                                                      _fail(t);
                                                    LocalPopChoice(i_36);
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
                                                                  w_21 = ATgetArgument(t, 2);
                                                                  t = w_21;
                                                                  if(match_cons(t, sym_Fail_0))
                                                                    {
                                                                      ATerm d_37 = t;
                                                                      int g_37 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_23, z_22);
                                                                          t = d_2(t);
                                                                          LocalPopChoice(g_37);
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
                                                                                        ATerm q_74 = NULL;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choices_1, y_22);
                                                                                        t = d_2(t);
                                                                                        q_74 = t;
                                                                                        t = (ATerm) ATmakeAppl(sym_Choice_2, w_22, q_74);
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
                                                                                      w_21 = ATgetArgument(t, 2);
                                                                                      {
                                                                                        ATerm w_37 = t;
                                                                                        int y_37 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL;
                                                                                            t = term_z_37;
                                                                                            t = bottomup_1_0(d_2, t);
                                                                                            z_75 = t;
                                                                                            t = (ATerm) ATempty;
                                                                                            t = d_2(t);
                                                                                            c_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(c_76), w_21);
                                                                                            t = d_2(t);
                                                                                            b_76 = t;
                                                                                            t = (ATerm) ATinsert(CheckATermList(b_76), a_23);
                                                                                            t = d_2(t);
                                                                                            a_76 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_Op_2, z_75, a_76);
                                                                                            t = d_2(t);
                                                                                            y_75 = t;
                                                                                            t = (ATerm) ATmakeAppl(sym_App_2, z_22, y_75);
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
                                                                                          w_21 = ATgetArgument(t, 2);
                                                                                          {
                                                                                            ATerm a_38 = t;
                                                                                            int b_38 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL;
                                                                                                t = (ATerm) ATmakeAppl(sym_Build_1, z_22);
                                                                                                t = d_2(t);
                                                                                                k_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Match_1, w_21);
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
                                                                                                l_76 = t;
                                                                                                t = (ATerm) ATinsert(CheckATermList(l_76), k_76);
                                                                                                t = d_2(t);
                                                                                                j_76 = t;
                                                                                                t = (ATerm) ATmakeAppl(sym_Seqs_1, j_76);
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
                                                                                                              t_22 = ATgetArgument(t, 0);
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
                                                                                                                      ATerm n_78 = NULL;
                                                                                                                      t = (ATerm) ATmakeAppl(sym__2, a_23, t_22);
                                                                                                                      t = conc_0_0(t);
                                                                                                                      n_78 = t;
                                                                                                                      t = (ATerm) ATmakeAppl(sym_Let_2, n_78, v_22);
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
                                                                                                                  t_22 = ATgetArgument(t, 0);
                                                                                                                  v_22 = ATgetArgument(t, 1);
                                                                                                                  n_22 = ATgetArgument(t, 2);
                                                                                                                  t = n_22;
                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                    {
                                                                                                                      t = v_22;
                                                                                                                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                        {
                                                                                                                          t = t_22;
                                                                                                                          if(match_cons(t, sym_SVar_1))
                                                                                                                            {
                                                                                                                              s_22 = ATgetArgument(t, 0);
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
                                                                                                                                              r_22 = ATgetArgument(t, 0);
                                                                                                                                              k_22 = ATgetArgument(t, 1);
                                                                                                                                              h_22 = ATgetArgument(t, 2);
                                                                                                                                              i_22 = ATgetArgument(t, 3);
                                                                                                                                              t = h_22;
                                                                                                                                              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                {
                                                                                                                                                  t = k_22;
                                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                                    {
                                                                                                                                                      ATerm q_38 = t;
                                                                                                                                                      int r_38 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = s_22;
                                                                                                                                                          if((r_22 != t))
                                                                                                                                                            {
                                                                                                                                                              _fail(t);
                                                                                                                                                            }
                                                                                                                                                          t = i_22;
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
                                                                                                                                                                          if((r_22 != ATgetArgument(t_38, 0)))
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
                                                                                                                                                          t = i_22;
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
  ATerm f_80 = NULL,g_80 = NULL,i_80 = NULL,j_80 = NULL,h_18 = NULL,i_18 = NULL;
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
      g_80 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_80), (ATerm)ATempty, (ATerm) ATempty);
  h_18 = t;
  t = term_y_38;
  i_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_38, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_80), (ATerm)ATempty, (ATerm) ATempty));
  t = j_7(i_18, h_18, t);
  if(match_cons(t, sym_Defined_2))
    {
      ATerm z_38 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_38) != ATmakeSymbol("n_0", 0, ATtrue)))
        _fail(t);
      j_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_80), f_80, g_80);
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
  t = j_7(l_18, l_80, t);
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
  ATerm f_81 = NULL,g_81 = NULL,j_81 = NULL,k_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL,s_81 = NULL,b_82 = NULL,e_82 = NULL;
  m_81 = t;
  if(match_cons(t, sym__2))
    {
      n_81 = ATgetArgument(t, 0);
      e_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_81;
  if(match_cons(t, sym_VarDec_2))
    {
      o_81 = ATgetArgument(t, 0);
      p_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_81;
  if(match_cons(t, sym_FunType_2))
    {
      s_81 = ATgetArgument(t, 0);
      {
        ATerm h_39 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = s_81;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_39 = ATgetFirst((ATermList) t);
      b_82 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_82;
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
          ATerm s_82 = NULL,w_82 = NULL;
          t = e_82;
          if(match_cons(t, sym_CallT_3))
            {
              f_81 = ATgetArgument(t, 0);
              j_81 = ATgetArgument(t, 1);
              k_81 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = f_81;
          if(match_cons(t, sym_SVar_1))
            {
              g_81 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_81;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_81;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_81), (ATerm)ATempty, (ATerm) ATempty);
          s_82 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_39, g_81);
          w_82 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_81), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_u_39, g_81));
          t = v_13(h_3, s_82, w_82, t);
          t = m_81;
        }
      }
    else
      {
        t = j_39;
        {
          ATerm g_83 = NULL,k_83 = NULL;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_81), (ATerm)ATempty, (ATerm) ATempty);
          g_83 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_v_39, e_82);
          k_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_81), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_2, term_v_39, e_82));
          t = v_13(i_3, g_83, k_83, t);
          t = m_81;
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
  ATerm x_83 = NULL,z_83 = NULL,f_84 = NULL,g_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_40 = ATgetArgument(t, 0);
      if(((ATgetType(a_40) == AT_LIST) && !(ATisEmpty(a_40))))
        {
          x_83 = ATgetFirst((ATermList) a_40);
          z_83 = (ATerm) ATgetNext((ATermList) a_40);
        }
      else
        _fail(t);
      {
        ATerm b_40 = ATgetArgument(t, 1);
        if(((ATgetType(b_40) == AT_LIST) && !(ATisEmpty(b_40))))
          {
            f_84 = ATgetFirst((ATermList) b_40);
            g_84 = (ATerm) ATgetNext((ATermList) b_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_83, f_84), (ATerm) ATmakeAppl(sym__2, z_83, g_84));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm i_84 = NULL,l_84 = NULL;
  if(match_cons(t, sym__2))
    {
      i_84 = ATgetArgument(t, 0);
      l_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_84), i_84);
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
  ATerm o_83 = NULL,p_83 = NULL,w_83 = NULL;
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
          if(((p_83 != NULL) && (p_83 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            p_83 = ATgetArgument(t, 1);
          if(((w_83 != NULL) && (w_83 != ATgetArgument(t, 2))))
            _fail(ATgetArgument(t, 2));
          else
            w_83 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, o_83, p_83);
      t = genzip_4_0(n_3, o_3, p_3, substitute_arg_0_0, t);
      t = w_83;
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
        ATerm k_40 = ATgetArgument(t, 1);
        if(((ATgetType(k_40) != AT_LIST) || !(ATisEmpty(k_40))))
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
      ATerm l_40 = ATgetArgument(t, 0);
      if(((ATgetType(l_40) == AT_LIST) && !(ATisEmpty(l_40))))
        {
          w_18 = ATgetFirst((ATermList) l_40);
          x_18 = (ATerm) ATgetNext((ATermList) l_40);
        }
      else
        _fail(t);
      {
        ATerm m_40 = ATgetArgument(t, 1);
        if(((ATgetType(m_40) == AT_LIST) && !(ATisEmpty(m_40))))
          {
            y_18 = ATgetFirst((ATermList) m_40);
            z_18 = (ATerm) ATgetNext((ATermList) m_40);
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
    ATerm n_40 = t;
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
        t = n_40;
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
        ATerm u_40 = ATgetArgument(t, 1);
        if(((ATgetType(u_40) != AT_LIST) || !(ATisEmpty(u_40))))
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
      ATerm v_40 = ATgetArgument(t, 0);
      if(((ATgetType(v_40) == AT_LIST) && !(ATisEmpty(v_40))))
        {
          e_20 = ATgetFirst((ATermList) v_40);
          f_20 = (ATerm) ATgetNext((ATermList) v_40);
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
    int h_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm i_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_41);
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
  ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL;
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
            f_22 = (ATerm) ATgetNext((ATermList) r_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_22, e_22), (ATerm) ATmakeAppl(sym__2, d_22, f_22));
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  if(match_cons(t, sym__2))
    {
      o_22 = ATgetArgument(t, 0);
      p_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_22), o_22);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm x_22 = NULL,d_23 = NULL,g_23 = NULL;
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      g_23 = ATgetArgument(t, 1);
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_23);
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
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_23, d_23);
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
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL,e_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_42 = ATgetArgument(t, 0);
      if(((ATgetType(b_42) == AT_LIST) && !(ATisEmpty(b_42))))
        {
          b_25 = ATgetFirst((ATermList) b_42);
          c_25 = (ATerm) ATgetNext((ATermList) b_42);
        }
      else
        _fail(t);
      {
        ATerm c_42 = ATgetArgument(t, 1);
        if(((ATgetType(c_42) == AT_LIST) && !(ATisEmpty(c_42))))
          {
            d_25 = ATgetFirst((ATermList) c_42);
            e_25 = (ATerm) ATgetNext((ATermList) c_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_25, d_25), (ATerm) ATmakeAppl(sym__2, c_25, e_25));
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm o_25 = NULL,p_25 = NULL;
  if(match_cons(t, sym__2))
    {
      o_25 = ATgetArgument(t, 0);
      p_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_25), o_25);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm v_25 = NULL,a_26 = NULL,b_26 = NULL;
  if(match_cons(t, sym__2))
    {
      v_25 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_25;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_26);
      }
    else
      {
        t = f_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm j_42 = ATgetArgument(t, 0);
            a_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_26, a_26);
      }
  }
  return(t);
}
static ATerm p_4 (ATerm t)
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
static ATerm s_4 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_42 = ATgetArgument(t, 0);
      if(((ATgetType(s_42) == AT_LIST) && !(ATisEmpty(s_42))))
        {
          e_27 = ATgetFirst((ATermList) s_42);
          f_27 = (ATerm) ATgetNext((ATermList) s_42);
        }
      else
        _fail(t);
      {
        ATerm t_42 = ATgetArgument(t, 1);
        if(((ATgetType(t_42) == AT_LIST) && !(ATisEmpty(t_42))))
          {
            g_27 = ATgetFirst((ATermList) t_42);
            h_27 = (ATerm) ATgetNext((ATermList) t_42);
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
    ATerm w_42 = t;
    int x_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_27);
      }
    else
      {
        t = w_42;
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
  ATerm d_100 = NULL,e_100 = NULL,f_100 = NULL,j_100 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_43 = ATgetArgument(t, 0);
      if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
        {
          d_100 = ATgetFirst((ATermList) c_43);
          e_100 = (ATerm) ATgetNext((ATermList) c_43);
        }
      else
        _fail(t);
      {
        ATerm d_43 = ATgetArgument(t, 1);
        if(((ATgetType(d_43) == AT_LIST) && !(ATisEmpty(d_43))))
          {
            f_100 = ATgetFirst((ATermList) d_43);
            j_100 = (ATerm) ATgetNext((ATermList) d_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_100, f_100), (ATerm) ATmakeAppl(sym__2, e_100, j_100));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm k_100 = NULL,m_100 = NULL;
  if(match_cons(t, sym__2))
    {
      k_100 = ATgetArgument(t, 0);
      m_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_100), k_100);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm t_100 = NULL,v_100 = NULL,w_100 = NULL;
  if(match_cons(t, sym__2))
    {
      t_100 = ATgetArgument(t, 0);
      w_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_100;
  {
    ATerm e_43 = t;
    int f_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_43);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_100);
      }
    else
      {
        t = e_43;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_43 = ATgetArgument(t, 0);
            v_100 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_100, v_100);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm i_141 (ATerm), ATerm t)
{
  ATerm j_43 = t;
  int k_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_99 = NULL,k_99 = NULL,l_99 = NULL,s_99 = NULL,t_99 = NULL;
      k_99 = t;
      if(match_cons(t, sym_Let_2))
        {
          l_99 = ATgetArgument(t, 0);
          s_99 = ATgetArgument(t, 1);
          {
            ATerm q_18 = NULL,t_18 = NULL,u_18 = NULL,h_4 = NULL;
            t = SSLgetAnnotations(k_99);
            q_18 = t;
            t = l_99;
            t = i_141(t);
            u_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_99, u_18);
            t = genzip_4_0(r_3, s_3, t_3, u_3, t);
            t_18 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, t_18, s_99);
            h_4 = t;
            t = SSLsetAnnotations(h_4, q_18);
          }
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              l_99 = ATgetArgument(t, 0);
              s_99 = ATgetArgument(t, 1);
              t_99 = ATgetArgument(t, 2);
              {
                ATerm x_19 = NULL,b_20 = NULL,c_20 = NULL,i_4 = NULL;
                t = SSLgetAnnotations(k_99);
                x_19 = t;
                t = s_99;
                t = i_141(t);
                c_20 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_99, c_20);
                t = genzip_4_0(v_3, w_3, x_3, y_3, t);
                b_20 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, l_99, b_20, t_99);
                i_4 = t;
                t = SSLsetAnnotations(i_4, x_19);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  l_99 = ATgetArgument(t, 0);
                  s_99 = ATgetArgument(t, 1);
                  t_99 = ATgetArgument(t, 2);
                  j_99 = ATgetArgument(t, 3);
                  {
                    ATerm e_21 = NULL,x_21 = NULL,y_21 = NULL,j_4 = NULL;
                    t = SSLgetAnnotations(k_99);
                    e_21 = t;
                    t = s_99;
                    t = i_141(t);
                    y_21 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_99, y_21);
                    t = genzip_4_0(z_3, a_4, b_4, e_4, t);
                    x_21 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_99, x_21, t_99, j_99);
                    j_4 = t;
                    t = SSLsetAnnotations(j_4, e_21);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      l_99 = ATgetArgument(t, 0);
                      s_99 = ATgetArgument(t, 1);
                      t_99 = ATgetArgument(t, 2);
                      j_99 = ATgetArgument(t, 3);
                      {
                        ATerm y_23 = NULL,l_24 = NULL,t_24 = NULL,l_4 = NULL;
                        t = SSLgetAnnotations(k_99);
                        y_23 = t;
                        t = s_99;
                        t = i_141(t);
                        t_24 = t;
                        t = (ATerm) ATmakeAppl(sym__2, s_99, t_24);
                        t = genzip_4_0(f_4, g_4, n_4, o_4, t);
                        l_24 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, l_99, l_24, t_99, j_99);
                        l_4 = t;
                        t = SSLsetAnnotations(l_4, y_23);
                      }
                    }
                  else
                    {
                      ATerm q_26 = NULL,a_27 = NULL,b_27 = NULL,m_4 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          l_99 = ATgetArgument(t, 0);
                          s_99 = ATgetArgument(t, 1);
                          t_99 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(k_99);
                      q_26 = t;
                      t = s_99;
                      t = i_141(t);
                      b_27 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_99, b_27);
                      t = genzip_4_0(p_4, s_4, v_4, w_4, t);
                      a_27 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, l_99, a_27, t_99);
                      m_4 = t;
                      t = SSLsetAnnotations(m_4, q_26);
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
              ATerm v_99 = NULL,a_100 = NULL;
              a_100 = t;
              t = i_141(t);
              v_99 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_100, v_99);
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
              ATerm z_101 = NULL,b_102 = NULL,c_102 = NULL,m_28 = NULL,u_28 = NULL,q_4 = NULL;
              z_101 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  b_102 = ATgetArgument(t, 0);
                  c_102 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_101);
              m_28 = t;
              t = b_102;
              t = i_141(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  u_28 = ATgetFirst((ATermList) t);
                  {
                    ATerm o_43 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, u_28, c_102);
              q_4 = t;
              t = SSLsetAnnotations(q_4, m_28);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm j_141 (ATerm), ATerm k_141 (ATerm), ATerm l_141 (ATerm), ATerm t)
{
  ATerm s_108 = NULL,v_108 = NULL,w_108 = NULL,c_109 = NULL,d_109 = NULL;
  w_108 = t;
  if(match_cons(t, sym_Let_2))
    {
      c_109 = ATgetArgument(t, 0);
      d_109 = ATgetArgument(t, 1);
      {
        ATerm f_29 = NULL,i_29 = NULL,l_29 = NULL,i_5 = NULL;
        t = SSLgetAnnotations(w_108);
        f_29 = t;
        t = c_109;
        t = j_141(t);
        i_29 = t;
        t = d_109;
        t = j_141(t);
        l_29 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, i_29, l_29);
        i_5 = t;
        t = SSLsetAnnotations(i_5, f_29);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_109 = ATgetArgument(t, 0);
          d_109 = ATgetArgument(t, 1);
          v_108 = ATgetArgument(t, 2);
          {
            ATerm l_30 = NULL,d_31 = NULL,g_31 = NULL,h_31 = NULL,k_5 = NULL;
            t = SSLgetAnnotations(w_108);
            l_30 = t;
            t = c_109;
            t = l_141(t);
            d_31 = t;
            t = d_109;
            t = l_141(t);
            g_31 = t;
            t = v_108;
            t = j_141(t);
            h_31 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, d_31, g_31, h_31);
            k_5 = t;
            t = SSLsetAnnotations(k_5, l_30);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              c_109 = ATgetArgument(t, 0);
              d_109 = ATgetArgument(t, 1);
              v_108 = ATgetArgument(t, 2);
              s_108 = ATgetArgument(t, 3);
              {
                ATerm y_31 = NULL,r_32 = NULL,t_32 = NULL,u_32 = NULL,w_32 = NULL,l_5 = NULL;
                t = SSLgetAnnotations(w_108);
                y_31 = t;
                t = c_109;
                t = l_141(t);
                r_32 = t;
                t = d_109;
                t = l_141(t);
                t_32 = t;
                t = v_108;
                t = l_141(t);
                u_32 = t;
                t = s_108;
                t = j_141(t);
                w_32 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_32, t_32, u_32, w_32);
                l_5 = t;
                t = SSLsetAnnotations(l_5, y_31);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  c_109 = ATgetArgument(t, 0);
                  d_109 = ATgetArgument(t, 1);
                  v_108 = ATgetArgument(t, 2);
                  s_108 = ATgetArgument(t, 3);
                  {
                    ATerm b_34 = NULL,i_34 = NULL,j_34 = NULL,l_34 = NULL,m_34 = NULL,m_5 = NULL;
                    t = SSLgetAnnotations(w_108);
                    b_34 = t;
                    t = c_109;
                    t = l_141(t);
                    i_34 = t;
                    t = d_109;
                    t = l_141(t);
                    j_34 = t;
                    t = v_108;
                    t = l_141(t);
                    l_34 = t;
                    t = s_108;
                    t = j_141(t);
                    m_34 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, i_34, j_34, l_34, m_34);
                    m_5 = t;
                    t = SSLsetAnnotations(m_5, b_34);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      c_109 = ATgetArgument(t, 0);
                      d_109 = ATgetArgument(t, 1);
                      v_108 = ATgetArgument(t, 2);
                      {
                        ATerm t_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,o_5 = NULL;
                        t = SSLgetAnnotations(w_108);
                        t_35 = t;
                        t = c_109;
                        t = l_141(t);
                        z_35 = t;
                        t = d_109;
                        t = l_141(t);
                        a_36 = t;
                        t = v_108;
                        t = l_141(t);
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
                          c_109 = ATgetArgument(t, 0);
                          d_109 = ATgetArgument(t, 1);
                          {
                            ATerm q_36 = NULL,x_36 = NULL,f_37 = NULL,p_5 = NULL;
                            t = SSLgetAnnotations(w_108);
                            q_36 = t;
                            t = c_109;
                            t = l_141(t);
                            x_36 = t;
                            t = d_109;
                            t = j_141(t);
                            f_37 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, x_36, f_37);
                            p_5 = t;
                            t = SSLsetAnnotations(p_5, q_36);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              c_109 = ATgetArgument(t, 0);
                              d_109 = ATgetArgument(t, 1);
                              {
                                ATerm d_38 = NULL,h_38 = NULL,j_38 = NULL,q_5 = NULL;
                                t = SSLgetAnnotations(w_108);
                                d_38 = t;
                                t = c_109;
                                t = l_141(t);
                                h_38 = t;
                                t = d_109;
                                t = j_141(t);
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
                                  c_109 = ATgetArgument(t, 0);
                                  d_109 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_39 = NULL,c_40 = NULL,d_40 = NULL,r_5 = NULL;
                                    t = SSLgetAnnotations(w_108);
                                    q_39 = t;
                                    t = c_109;
                                    t = l_141(t);
                                    c_40 = t;
                                    t = d_109;
                                    t = j_141(t);
                                    d_40 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, c_40, d_40);
                                    r_5 = t;
                                    t = SSLsetAnnotations(r_5, q_39);
                                  }
                                }
                              else
                                {
                                  ATerm z_40 = NULL,d_41 = NULL,e_41 = NULL,s_5 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      c_109 = ATgetArgument(t, 0);
                                      d_109 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(w_108);
                                  z_40 = t;
                                  t = c_109;
                                  t = l_141(t);
                                  d_41 = t;
                                  t = d_109;
                                  t = j_141(t);
                                  e_41 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, d_41, e_41);
                                  s_5 = t;
                                  t = SSLsetAnnotations(s_5, z_40);
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
  ATerm s_110 = NULL,t_110 = NULL,v_110 = NULL;
  ATerm p_43 = t;
  int q_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          s_110 = ATgetArgument(t, 0);
          {
            ATerm s_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_43);
      t = s_110;
      if(match_cons(t, sym_DynRuleId_1))
        {
          t_110 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_110;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm t_43 = ATgetArgument(t, 0);
          v_110 = ATgetArgument(t, 1);
          {
            ATerm u_43 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = v_110;
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
                s_110 = ATgetArgument(t, 0);
                {
                  ATerm z_43 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_43);
            t = s_110;
            if(match_cons(t, sym_DynRuleId_1))
              {
                t_110 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_110;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm b_44 = ATgetArgument(t, 0);
                v_110 = ATgetArgument(t, 1);
                {
                  ATerm g_44 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = v_110;
          }
        else
          {
            t = v_43;
            if(match_cons(t, sym_AddDynRule_2))
              {
                s_110 = ATgetArgument(t, 0);
                {
                  ATerm l_44 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = s_110;
            if(match_cons(t, sym_DynRuleId_1))
              {
                t_110 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_110;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm q_44 = ATgetArgument(t, 0);
                v_110 = ATgetArgument(t, 1);
                {
                  ATerm t_44 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = v_110;
          }
      }
    }
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm m_111 = NULL;
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_111 = ATgetArgument(t, 0);
          {
            ATerm c_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_45);
      t = m_111;
    }
  else
    {
      t = z_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_111;
    }
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm u_111 = NULL;
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_111 = ATgetArgument(t, 0);
          {
            ATerm f_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_45);
      t = u_111;
    }
  else
    {
      t = d_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_111;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm g_111 = NULL;
  ATerm g_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm n_45 = ATgetArgument(t, 0);
          g_111 = ATgetArgument(t, 1);
          {
            ATerm o_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_45);
      t = g_111;
      t = map_1_0(c_5, t);
    }
  else
    {
      t = g_45;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm p_45 = ATgetArgument(t, 0);
          g_111 = ATgetArgument(t, 1);
          {
            ATerm q_45 = ATgetArgument(t, 2);
          }
          {
            ATerm s_45 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = g_111;
      t = map_1_0(d_5, t);
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm z_111 = NULL;
  ATerm w_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_111 = ATgetArgument(t, 0);
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
      t = z_111;
    }
  else
    {
      t = w_45;
      if(match_cons(t, sym_SDefT_4))
        {
          z_111 = ATgetArgument(t, 0);
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
      t = z_111;
    }
  return(t);
}
static ATerm d_13 (ATerm t_28, ATerm s_28, ATerm t)
{
  t = t_28;
  t = map_1_0(e_5, t);
  return(t);
}
ATerm SVar_1_0 (ATerm l_119 (ATerm), ATerm t)
{
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,e_6 = NULL;
  j_112 = t;
  if(match_cons(t, sym_SVar_1))
    {
      h_112 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_112);
  g_112 = t;
  t = h_112;
  t = l_119(t);
  i_112 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, i_112);
  e_6 = t;
  t = SSLsetAnnotations(e_6, g_112);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm d_46 = t;
  int f_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL,s_112 = NULL;
      o_112 = t;
      if(match_cons(t, sym_Let_2))
        {
          p_112 = ATgetArgument(t, 0);
          q_112 = ATgetArgument(t, 1);
          t = o_112;
          t = d_13(p_112, q_112, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              p_112 = ATgetArgument(t, 0);
              q_112 = ATgetArgument(t, 1);
              r_112 = ATgetArgument(t, 2);
              t = q_112;
              t = map_1_0(h_5, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  p_112 = ATgetArgument(t, 0);
                  q_112 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, p_112);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_112 = ATgetArgument(t, 0);
                      q_112 = ATgetArgument(t, 1);
                      r_112 = ATgetArgument(t, 2);
                      s_112 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_112;
                  t = map_1_0(j_5, t);
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
            t = dynrule_sargs_1_0(n_5, t);
          }
      }
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm b_113 = NULL;
  ATerm i_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_113 = ATgetArgument(t, 0);
          {
            ATerm l_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_46);
      t = b_113;
    }
  else
    {
      t = i_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_113;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm p_113 = NULL;
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_113 = ATgetArgument(t, 0);
          {
            ATerm p_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_46);
      t = p_113;
    }
  else
    {
      t = n_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_113;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = map_1_0(t_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm u_113 = NULL;
  ATerm r_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_113 = ATgetArgument(t, 0);
          {
            ATerm t_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_46);
      t = u_113;
    }
  else
    {
      t = r_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_113 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_113;
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  t = rename_4_0(SVar_1_0, f_5, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm p_141 (ATerm), ATerm q_141 (ATerm), ATerm r_141 (ATerm), ATerm s_141 (ATerm), ATerm t_141 (ATerm), ATerm u_141 (ATerm), ATerm t)
{
  ATerm b_117 = NULL,c_117 = NULL,d_117 = NULL;
  b_117 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      c_117 = ATgetArgument(t, 0);
      d_117 = ATgetArgument(t, 1);
      {
        ATerm u_41 = NULL,y_41 = NULL,z_41 = NULL,d_42 = NULL,e_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,p_42 = NULL,r_42 = NULL,u_42 = NULL,v_42 = NULL,l_6 = NULL,k_6 = NULL,j_6 = NULL;
        t = SSLgetAnnotations(b_117);
        u_41 = t;
        t = c_117;
        if(match_cons(t, sym_DynRuleId_1))
          {
            d_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_117);
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
        t = p_141(t);
        p_42 = t;
        t = m_42;
        t = q_141(t);
        r_42 = t;
        t = n_42;
        t = r_141(t);
        u_42 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, p_42, r_42, u_42);
        j_6 = t;
        t = SSLsetAnnotations(j_6, k_42);
        v_42 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, v_42);
        k_6 = t;
        t = SSLsetAnnotations(k_6, z_41);
        e_42 = t;
        t = d_117;
        t = s_141(t);
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
          c_117 = ATgetArgument(t, 0);
          d_117 = ATgetArgument(t, 1);
          {
            ATerm n_43 = NULL,w_43 = NULL,x_43 = NULL,a_44 = NULL,c_44 = NULL,h_44 = NULL,s_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,r_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,q_6 = NULL,p_6 = NULL,n_6 = NULL,m_6 = NULL;
            t = SSLgetAnnotations(b_117);
            n_43 = t;
            t = c_117;
            if(match_cons(t, sym_DynRuleId_1))
              {
                x_44 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_117);
            w_44 = t;
            t = x_44;
            if(match_cons(t, sym_RDecT_3))
              {
                j_45 = ATgetArgument(t, 0);
                k_45 = ATgetArgument(t, 1);
                l_45 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_44);
            i_45 = t;
            t = j_45;
            t = p_141(t);
            r_45 = t;
            t = k_45;
            t = q_141(t);
            t_45 = t;
            t = l_45;
            t = r_141(t);
            u_45 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, r_45, t_45, u_45);
            m_6 = t;
            t = SSLsetAnnotations(m_6, i_45);
            v_45 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, v_45);
            n_6 = t;
            t = SSLsetAnnotations(n_6, w_44);
            y_44 = t;
            t = d_117;
            if(match_cons(t, sym_Rule_3))
              {
                x_43 = ATgetArgument(t, 0);
                a_44 = ATgetArgument(t, 1);
                c_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_117);
            w_43 = t;
            t = x_43;
            t = s_141(t);
            h_44 = t;
            t = a_44;
            t = t_141(t);
            s_44 = t;
            t = c_44;
            t = u_141(t);
            u_44 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, h_44, s_44, u_44);
            p_6 = t;
            t = SSLsetAnnotations(p_6, w_43);
            v_44 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, y_44, v_44);
            q_6 = t;
            t = SSLsetAnnotations(q_6, n_43);
          }
        }
      else
        {
          ATerm j_46 = NULL,m_46 = NULL,v_46 = NULL,w_46 = NULL,c_47 = NULL,e_47 = NULL,f_47 = NULL,h_47 = NULL,j_47 = NULL,k_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,z_47 = NULL,a_48 = NULL,g_48 = NULL,j_48 = NULL,k_48 = NULL,v_6 = NULL,u_6 = NULL,t_6 = NULL,r_6 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              c_117 = ATgetArgument(t, 0);
              d_117 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_117);
          j_46 = t;
          t = c_117;
          if(match_cons(t, sym_DynRuleId_1))
            {
              m_47 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_117);
          k_47 = t;
          t = m_47;
          if(match_cons(t, sym_RDecT_3))
            {
              p_47 = ATgetArgument(t, 0);
              q_47 = ATgetArgument(t, 1);
              z_47 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_47);
          o_47 = t;
          t = p_47;
          t = p_141(t);
          a_48 = t;
          t = q_47;
          t = q_141(t);
          g_48 = t;
          t = z_47;
          t = r_141(t);
          j_48 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, a_48, g_48, j_48);
          r_6 = t;
          t = SSLsetAnnotations(r_6, o_47);
          k_48 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, k_48);
          t_6 = t;
          t = SSLsetAnnotations(t_6, k_47);
          n_47 = t;
          t = d_117;
          if(match_cons(t, sym_Rule_3))
            {
              v_46 = ATgetArgument(t, 0);
              w_46 = ATgetArgument(t, 1);
              c_47 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_117);
          m_46 = t;
          t = v_46;
          t = s_141(t);
          e_47 = t;
          t = w_46;
          t = t_141(t);
          f_47 = t;
          t = c_47;
          t = u_141(t);
          h_47 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, e_47, f_47, h_47);
          u_6 = t;
          t = SSLsetAnnotations(u_6, m_46);
          j_47 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, n_47, j_47);
          v_6 = t;
          t = SSLsetAnnotations(v_6, j_46);
        }
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_46 = ATgetArgument(t, 0);
      if(((ATgetType(u_46) != AT_LIST) || !(ATisEmpty(u_46))))
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
  ATerm p_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_46 = ATgetArgument(t, 0);
      if(((ATgetType(y_46) == AT_LIST) && !(ATisEmpty(y_46))))
        {
          p_50 = ATgetFirst((ATermList) y_46);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_50, t_50), (ATerm) ATmakeAppl(sym__2, s_50, u_50));
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm v_50 = NULL,c_51 = NULL;
  if(match_cons(t, sym__2))
    {
      v_50 = ATgetArgument(t, 0);
      c_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_51), v_50);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm i_51 = NULL,k_51 = NULL,n_51 = NULL;
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
    int d_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_47);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_51);
      }
    else
      {
        t = a_47;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_47 = ATgetArgument(t, 0);
            k_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_51, k_51);
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
        ATerm r_47 = ATgetArgument(t, 1);
        if(((ATgetType(r_47) != AT_LIST) || !(ATisEmpty(r_47))))
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
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL,r_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_47 = ATgetArgument(t, 0);
      if(((ATgetType(s_47) == AT_LIST) && !(ATisEmpty(s_47))))
        {
          i_53 = ATgetFirst((ATermList) s_47);
          j_53 = (ATerm) ATgetNext((ATermList) s_47);
        }
      else
        _fail(t);
      {
        ATerm t_47 = ATgetArgument(t, 1);
        if(((ATgetType(t_47) == AT_LIST) && !(ATisEmpty(t_47))))
          {
            k_53 = ATgetFirst((ATermList) t_47);
            r_53 = (ATerm) ATgetNext((ATermList) t_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_53, k_53), (ATerm) ATmakeAppl(sym__2, j_53, r_53));
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm s_53 = NULL,x_53 = NULL;
  if(match_cons(t, sym__2))
    {
      s_53 = ATgetArgument(t, 0);
      x_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_53), s_53);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm z_53 = NULL,d_54 = NULL,e_54 = NULL;
  if(match_cons(t, sym__2))
    {
      z_53 = ATgetArgument(t, 0);
      e_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_53;
  {
    ATerm u_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_47);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_54);
      }
    else
      {
        t = u_47;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_47 = ATgetArgument(t, 0);
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
      ATerm b_48 = ATgetArgument(t, 0);
      if(((ATgetType(b_48) != AT_LIST) || !(ATisEmpty(b_48))))
        _fail(t);
      {
        ATerm c_48 = ATgetArgument(t, 1);
        if(((ATgetType(c_48) != AT_LIST) || !(ATisEmpty(c_48))))
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
      ATerm d_48 = ATgetArgument(t, 0);
      if(((ATgetType(d_48) == AT_LIST) && !(ATisEmpty(d_48))))
        {
          m_55 = ATgetFirst((ATermList) d_48);
          n_55 = (ATerm) ATgetNext((ATermList) d_48);
        }
      else
        _fail(t);
      {
        ATerm e_48 = ATgetArgument(t, 1);
        if(((ATgetType(e_48) == AT_LIST) && !(ATisEmpty(e_48))))
          {
            o_55 = ATgetFirst((ATermList) e_48);
            p_55 = (ATerm) ATgetNext((ATermList) e_48);
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
  ATerm q_55 = NULL,r_55 = NULL;
  if(match_cons(t, sym__2))
    {
      q_55 = ATgetArgument(t, 0);
      r_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_55), q_55);
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
    ATerm f_48 = t;
    int h_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm i_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_48);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_55);
      }
    else
      {
        t = f_48;
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
static ATerm o_6 (ATerm t)
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
static ATerm s_6 (ATerm t)
{
  ATerm z_121 = NULL,a_122 = NULL,b_122 = NULL,c_122 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_48 = ATgetArgument(t, 0);
      if(((ATgetType(o_48) == AT_LIST) && !(ATisEmpty(o_48))))
        {
          z_121 = ATgetFirst((ATermList) o_48);
          a_122 = (ATerm) ATgetNext((ATermList) o_48);
        }
      else
        _fail(t);
      {
        ATerm p_48 = ATgetArgument(t, 1);
        if(((ATgetType(p_48) == AT_LIST) && !(ATisEmpty(p_48))))
          {
            b_122 = ATgetFirst((ATermList) p_48);
            c_122 = (ATerm) ATgetNext((ATermList) p_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_121, b_122), (ATerm) ATmakeAppl(sym__2, a_122, c_122));
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm d_122 = NULL,e_122 = NULL;
  if(match_cons(t, sym__2))
    {
      d_122 = ATgetArgument(t, 0);
      e_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_122), d_122);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm g_122 = NULL,i_122 = NULL,j_122 = NULL;
  if(match_cons(t, sym__2))
    {
      g_122 = ATgetArgument(t, 0);
      j_122 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_122;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_122);
      }
    else
      {
        t = q_48;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_48 = ATgetArgument(t, 0);
            i_122 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_122, i_122);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm e_141 (ATerm), ATerm t)
{
  ATerm w_48 = t;
  int x_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_121 = NULL,r_121 = NULL,s_121 = NULL,t_121 = NULL,u_121 = NULL;
      q_121 = t;
      if(match_cons(t, sym_Scope_2))
        {
          r_121 = ATgetArgument(t, 0);
          s_121 = ATgetArgument(t, 1);
          {
            ATerm v_48 = NULL,z_48 = NULL,o_7 = NULL;
            t = SSLgetAnnotations(q_121);
            v_48 = t;
            t = r_121;
            t = e_141(t);
            z_48 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, z_48, s_121);
            o_7 = t;
            t = SSLsetAnnotations(o_7, v_48);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              r_121 = ATgetArgument(t, 0);
              {
                ATerm j_49 = NULL,p_7 = NULL;
                t = SSLgetAnnotations(q_121);
                j_49 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, r_121);
                p_7 = t;
                t = SSLsetAnnotations(p_7, j_49);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  r_121 = ATgetArgument(t, 0);
                  s_121 = ATgetArgument(t, 1);
                  t_121 = ATgetArgument(t, 2);
                  {
                    ATerm h_50 = NULL,l_50 = NULL,m_50 = NULL,t_7 = NULL;
                    t = SSLgetAnnotations(q_121);
                    h_50 = t;
                    t = t_121;
                    t = e_141(t);
                    m_50 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_121, m_50);
                    t = genzip_4_0(u_5, v_5, w_5, x_5, t);
                    l_50 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, r_121, s_121, l_50);
                    t_7 = t;
                    t = SSLsetAnnotations(t_7, h_50);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_121 = ATgetArgument(t, 0);
                      s_121 = ATgetArgument(t, 1);
                      t_121 = ATgetArgument(t, 2);
                      u_121 = ATgetArgument(t, 3);
                      {
                        ATerm n_52 = NULL,c_53 = NULL,g_53 = NULL,u_7 = NULL;
                        t = SSLgetAnnotations(q_121);
                        n_52 = t;
                        t = t_121;
                        t = e_141(t);
                        g_53 = t;
                        t = (ATerm) ATmakeAppl(sym__2, t_121, g_53);
                        t = genzip_4_0(y_5, z_5, a_6, b_6, t);
                        c_53 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, r_121, s_121, c_53, u_121);
                        u_7 = t;
                        t = SSLsetAnnotations(u_7, n_52);
                      }
                    }
                  else
                    {
                      ATerm d_55 = NULL,j_55 = NULL,k_55 = NULL,v_7 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          r_121 = ATgetArgument(t, 0);
                          s_121 = ATgetArgument(t, 1);
                          t_121 = ATgetArgument(t, 2);
                          u_121 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(q_121);
                      d_55 = t;
                      t = t_121;
                      t = e_141(t);
                      k_55 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_121, k_55);
                      t = genzip_4_0(c_6, d_6, f_6, g_6, t);
                      j_55 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, r_121, s_121, j_55, u_121);
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
        static ATerm h_6 (ATerm t);
        static ATerm h_6 (ATerm t)
        {
          ATerm x_121 = NULL,y_121 = NULL;
          y_121 = t;
          t = e_141(t);
          x_121 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_121, x_121);
          t = genzip_4_0(o_6, s_6, w_6, x_6, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, h_6, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm f_141 (ATerm), ATerm g_141 (ATerm), ATerm h_141 (ATerm), ATerm t)
{
  ATerm c_128 = NULL,d_128 = NULL,e_128 = NULL,f_128 = NULL,g_128 = NULL;
  f_128 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_128 = ATgetArgument(t, 0);
      e_128 = ATgetArgument(t, 1);
      {
        ATerm w_56 = NULL,c_57 = NULL,f_57 = NULL,c_8 = NULL;
        t = SSLgetAnnotations(f_128);
        w_56 = t;
        t = g_128;
        t = h_141(t);
        c_57 = t;
        t = e_128;
        t = f_141(t);
        f_57 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, c_57, f_57);
        c_8 = t;
        t = SSLsetAnnotations(c_8, w_56);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          g_128 = ATgetArgument(t, 0);
          {
            ATerm s_57 = NULL,v_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,d_10 = NULL,a_10 = NULL;
            t = SSLgetAnnotations(f_128);
            s_57 = t;
            t = g_128;
            if(match_cons(t, sym_Rule_3))
              {
                y_57 = ATgetArgument(t, 0);
                z_57 = ATgetArgument(t, 1);
                a_58 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_128);
            v_57 = t;
            t = y_57;
            t = f_141(t);
            b_58 = t;
            t = z_57;
            t = f_141(t);
            c_58 = t;
            t = a_58;
            t = f_141(t);
            d_58 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, b_58, c_58, d_58);
            a_10 = t;
            t = SSLsetAnnotations(a_10, v_57);
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
              g_128 = ATgetArgument(t, 0);
              e_128 = ATgetArgument(t, 1);
              c_128 = ATgetArgument(t, 2);
              {
                ATerm n_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,e_10 = NULL;
                t = SSLgetAnnotations(f_128);
                n_58 = t;
                t = g_128;
                t = h_141(t);
                s_58 = t;
                t = e_128;
                t = h_141(t);
                t_58 = t;
                t = c_128;
                t = h_141(t);
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
                  g_128 = ATgetArgument(t, 0);
                  e_128 = ATgetArgument(t, 1);
                  c_128 = ATgetArgument(t, 2);
                  d_128 = ATgetArgument(t, 3);
                  {
                    ATerm j_59 = NULL,v_59 = NULL,w_59 = NULL,b_60 = NULL,c_60 = NULL,f_10 = NULL;
                    t = SSLgetAnnotations(f_128);
                    j_59 = t;
                    t = g_128;
                    t = h_141(t);
                    v_59 = t;
                    t = e_128;
                    t = h_141(t);
                    w_59 = t;
                    t = c_128;
                    t = h_141(t);
                    b_60 = t;
                    t = d_128;
                    t = f_141(t);
                    c_60 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, v_59, w_59, b_60, c_60);
                    f_10 = t;
                    t = SSLsetAnnotations(f_10, j_59);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_128 = ATgetArgument(t, 0);
                      e_128 = ATgetArgument(t, 1);
                      c_128 = ATgetArgument(t, 2);
                      d_128 = ATgetArgument(t, 3);
                      {
                        ATerm a_61 = NULL,i_61 = NULL,k_61 = NULL,l_61 = NULL,o_61 = NULL,i_10 = NULL;
                        t = SSLgetAnnotations(f_128);
                        a_61 = t;
                        t = g_128;
                        t = h_141(t);
                        i_61 = t;
                        t = e_128;
                        t = h_141(t);
                        k_61 = t;
                        t = c_128;
                        t = h_141(t);
                        l_61 = t;
                        t = d_128;
                        t = f_141(t);
                        o_61 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, i_61, k_61, l_61, o_61);
                        i_10 = t;
                        t = SSLsetAnnotations(i_10, a_61);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          g_128 = ATgetArgument(t, 0);
                          e_128 = ATgetArgument(t, 1);
                          {
                            ATerm q_62 = NULL,y_62 = NULL,z_62 = NULL,j_10 = NULL;
                            t = SSLgetAnnotations(f_128);
                            q_62 = t;
                            t = g_128;
                            t = h_141(t);
                            y_62 = t;
                            t = e_128;
                            t = f_141(t);
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
                              g_128 = ATgetArgument(t, 0);
                              e_128 = ATgetArgument(t, 1);
                              {
                                ATerm t_63 = NULL,j_64 = NULL,m_64 = NULL,k_10 = NULL;
                                t = SSLgetAnnotations(f_128);
                                t_63 = t;
                                t = g_128;
                                t = h_141(t);
                                j_64 = t;
                                t = e_128;
                                t = f_141(t);
                                m_64 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, j_64, m_64);
                                k_10 = t;
                                t = SSLsetAnnotations(k_10, t_63);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  g_128 = ATgetArgument(t, 0);
                                  e_128 = ATgetArgument(t, 1);
                                  {
                                    ATerm v_64 = NULL,y_64 = NULL,z_64 = NULL,n_10 = NULL;
                                    t = SSLgetAnnotations(f_128);
                                    v_64 = t;
                                    t = g_128;
                                    t = h_141(t);
                                    y_64 = t;
                                    t = e_128;
                                    t = f_141(t);
                                    z_64 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, y_64, z_64);
                                    n_10 = t;
                                    t = SSLsetAnnotations(n_10, v_64);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      g_128 = ATgetArgument(t, 0);
                                      {
                                        ATerm j_65 = NULL,m_65 = NULL,t_10 = NULL;
                                        t = SSLgetAnnotations(f_128);
                                        j_65 = t;
                                        t = g_128;
                                        t = f_141(t);
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
                                          g_128 = ATgetArgument(t, 0);
                                          {
                                            ATerm s_65 = NULL,u_65 = NULL,u_10 = NULL;
                                            t = SSLgetAnnotations(f_128);
                                            s_65 = t;
                                            t = g_128;
                                            t = f_141(t);
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
                                              g_128 = ATgetArgument(t, 0);
                                              {
                                                ATerm d_66 = NULL,f_66 = NULL,v_10 = NULL;
                                                t = SSLgetAnnotations(f_128);
                                                d_66 = t;
                                                t = g_128;
                                                t = f_141(t);
                                                f_66 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, f_66);
                                                v_10 = t;
                                                t = SSLsetAnnotations(v_10, d_66);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  g_128 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm x_66 = NULL,z_66 = NULL,a_11 = NULL;
                                                    t = SSLgetAnnotations(f_128);
                                                    x_66 = t;
                                                    t = g_128;
                                                    t = f_141(t);
                                                    z_66 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, z_66);
                                                    a_11 = t;
                                                    t = SSLsetAnnotations(a_11, x_66);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm k_67 = NULL,r_67 = NULL,b_11 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      g_128 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(f_128);
                                                  k_67 = t;
                                                  t = g_128;
                                                  t = f_141(t);
                                                  r_67 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, r_67);
                                                  b_11 = t;
                                                  t = SSLsetAnnotations(b_11, k_67);
                                                }
                                            }
                                        }
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
  ATerm c_129 = NULL,d_129 = NULL,g_129 = NULL;
  ATerm y_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          c_129 = ATgetArgument(t, 0);
          {
            ATerm b_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_49);
      t = c_129;
      if(match_cons(t, sym_DynRuleId_1))
        {
          d_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_129;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm c_49 = ATgetArgument(t, 0);
          ATerm d_49 = ATgetArgument(t, 1);
          g_129 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_129;
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
                c_129 = ATgetArgument(t, 0);
                {
                  ATerm g_49 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_49);
            t = c_129;
            if(match_cons(t, sym_DynRuleId_1))
              {
                d_129 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_129;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm h_49 = ATgetArgument(t, 0);
                ATerm k_49 = ATgetArgument(t, 1);
                g_129 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = g_129;
          }
        else
          {
            t = e_49;
            if(match_cons(t, sym_AddDynRule_2))
              {
                c_129 = ATgetArgument(t, 0);
                {
                  ATerm l_49 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = c_129;
            if(match_cons(t, sym_DynRuleId_1))
              {
                d_129 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_129;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm m_49 = ATgetArgument(t, 0);
                ATerm n_49 = ATgetArgument(t, 1);
                g_129 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = g_129;
          }
      }
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm w_129 = NULL;
  ATerm o_49 = t;
  int p_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_129 = ATgetArgument(t, 0);
          {
            ATerm r_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_49);
      t = w_129;
    }
  else
    {
      t = o_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_129;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm c_130 = NULL;
  ATerm s_49 = t;
  int t_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_130 = ATgetArgument(t, 0);
          {
            ATerm u_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_49);
      t = c_130;
    }
  else
    {
      t = s_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_130;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm r_129 = NULL;
  ATerm v_49 = t;
  int x_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm y_49 = ATgetArgument(t, 0);
          ATerm z_49 = ATgetArgument(t, 1);
          r_129 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(x_49);
      t = r_129;
      t = map_1_0(y_6, t);
    }
  else
    {
      t = v_49;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm a_50 = ATgetArgument(t, 0);
          ATerm b_50 = ATgetArgument(t, 1);
          r_129 = ATgetArgument(t, 2);
          {
            ATerm c_50 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = r_129;
      t = map_1_0(z_6, t);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm y_130 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_130);
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
                  ATerm a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_131 = ATgetArgument(t, 0);
                      b_131 = ATgetArgument(t, 1);
                      c_131 = ATgetArgument(t, 2);
                      d_131 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_131;
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
  ATerm k_131 = NULL;
  ATerm q_50 = t;
  int w_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_131 = ATgetArgument(t, 0);
          {
            ATerm x_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_50);
      t = k_131;
    }
  else
    {
      t = q_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_131;
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
  ATerm p_131 = NULL;
  ATerm y_50 = t;
  int z_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_131 = ATgetArgument(t, 0);
          {
            ATerm a_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_50);
      t = p_131;
    }
  else
    {
      t = y_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_131;
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm t_131 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_131);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm b_51 = t;
  int d_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_51);
    }
  else
    {
      t = b_51;
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
                  ATerm v_131 = NULL,w_131 = NULL,x_131 = NULL,y_131 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_131 = ATgetArgument(t, 0);
                      w_131 = ATgetArgument(t, 1);
                      x_131 = ATgetArgument(t, 2);
                      y_131 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_131;
                  t = map_1_0(h_7, t);
                  LocalPopChoice(h_51);
                }
              else
                {
                  t = g_51;
                  {
                    ATerm j_51 = t;
                    int m_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_51);
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
static ATerm h_7 (ATerm t)
{
  ATerm f_132 = NULL;
  ATerm o_51 = t;
  int p_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_132 = ATgetArgument(t, 0);
          {
            ATerm q_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_51);
      t = f_132;
    }
  else
    {
      t = o_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_132;
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
  ATerm k_132 = NULL;
  ATerm r_51 = t;
  int s_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_132 = ATgetArgument(t, 0);
          {
            ATerm t_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_51);
      t = k_132;
    }
  else
    {
      t = r_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_132;
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm o_132 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_132);
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
              int a_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_132 = NULL,r_132 = NULL,s_132 = NULL,t_132 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_132 = ATgetArgument(t, 0);
                      r_132 = ATgetArgument(t, 1);
                      s_132 = ATgetArgument(t, 2);
                      t_132 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_132;
                  t = map_1_0(q_7, t);
                  LocalPopChoice(a_52);
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
                        t = dynrule_targs_1_0(r_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm a_133 = NULL;
  ATerm e_52 = t;
  int f_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_133 = ATgetArgument(t, 0);
          {
            ATerm g_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_52);
      t = a_133;
    }
  else
    {
      t = e_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_133;
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = map_1_0(w_7, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm f_133 = NULL;
  ATerm h_52 = t;
  int i_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_133 = ATgetArgument(t, 0);
          {
            ATerm k_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_52);
      t = f_133;
    }
  else
    {
      t = h_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_133;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm j_133 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_133);
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
        ATerm o_52 = t;
        int p_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_52);
          }
        else
          {
            t = o_52;
            {
              ATerm q_52 = t;
              int s_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_133 = NULL,m_133 = NULL,n_133 = NULL,o_133 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_133 = ATgetArgument(t, 0);
                      m_133 = ATgetArgument(t, 1);
                      n_133 = ATgetArgument(t, 2);
                      o_133 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_133;
                  t = map_1_0(z_7, t);
                  LocalPopChoice(s_52);
                }
              else
                {
                  t = q_52;
                  {
                    ATerm t_52 = t;
                    int u_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_52);
                      }
                    else
                      {
                        t = t_52;
                        t = dynrule_targs_1_0(a_8, t);
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
  ATerm v_133 = NULL;
  ATerm v_52 = t;
  int w_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_133 = ATgetArgument(t, 0);
          {
            ATerm x_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_52);
      t = v_133;
    }
  else
    {
      t = v_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_133;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  t = map_1_0(e_8, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm a_134 = NULL;
  ATerm z_52 = t;
  int a_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_134 = ATgetArgument(t, 0);
          {
            ATerm b_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_53);
      t = a_134;
    }
  else
    {
      t = z_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_134;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm e_134 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_134);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm d_53 = t;
  int e_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_53);
    }
  else
    {
      t = d_53;
      {
        ATerm f_53 = t;
        int h_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_53);
          }
        else
          {
            t = f_53;
            {
              ATerm l_53 = t;
              int m_53 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_134 = NULL,h_134 = NULL,i_134 = NULL,j_134 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_134 = ATgetArgument(t, 0);
                      h_134 = ATgetArgument(t, 1);
                      i_134 = ATgetArgument(t, 2);
                      j_134 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_134;
                  t = map_1_0(h_8, t);
                  LocalPopChoice(m_53);
                }
              else
                {
                  t = l_53;
                  {
                    ATerm n_53 = t;
                    int p_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(p_53);
                      }
                    else
                      {
                        t = n_53;
                        t = dynrule_targs_1_0(i_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm q_134 = NULL;
  ATerm q_53 = t;
  int t_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_134 = ATgetArgument(t, 0);
          {
            ATerm u_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_53);
      t = q_134;
    }
  else
    {
      t = q_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_134;
    }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = map_1_0(j_8, t);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm v_134 = NULL;
  ATerm w_53 = t;
  int y_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_134 = ATgetArgument(t, 0);
          {
            ATerm a_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_53);
      t = v_134;
    }
  else
    {
      t = w_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_134;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm w_130 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      w_130 = ATgetArgument(t, 0);
      t = w_130;
      t = free_vars_3_0(a_7, b_7, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          w_130 = ATgetArgument(t, 0);
          t = w_130;
          t = free_vars_3_0(f_7, g_7, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              w_130 = ATgetArgument(t, 0);
              t = w_130;
              t = free_vars_3_0(m_7, n_7, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  w_130 = ATgetArgument(t, 0);
                  t = w_130;
                  t = free_vars_3_0(x_7, y_7, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      w_130 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = w_130;
                  t = free_vars_3_0(f_8, g_8, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm g_13 (ATerm r_158 (ATerm), ATerm h_64, ATerm g_64, ATerm t)
{
  static ATerm n_135 (ATerm t);
  static ATerm n_135 (ATerm t)
  {
    ATerm i_135 = NULL,j_135 = NULL,k_135 = NULL;
    i_135 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_64;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_135 = ATgetFirst((ATermList) t);
            k_135 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_54 = t;
          int c_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_135;
              {
                static ATerm k_8 (ATerm t);
                static ATerm k_8 (ATerm t)
                {
                  t = g_64;
                  return(t);
                }
                t = i_13(r_158, k_8, j_135, k_135, t);
              }
              t = n_135(t);
              LocalPopChoice(c_54);
            }
          else
            {
              t = b_54;
              {
                ATerm f_68 = NULL,i_68 = NULL,q_13 = NULL;
                t = SSLgetAnnotations(i_135);
                f_68 = t;
                t = k_135;
                t = n_135(t);
                i_68 = t;
                t = (ATerm) ATinsert(CheckATermList(i_68), j_135);
                q_13 = t;
                t = SSLsetAnnotations(q_13, f_68);
              }
            }
        }
      }
    return(t);
  }
  t = h_64;
  t = n_135(t);
  return(t);
}
static ATerm i_13 (ATerm u_158 (ATerm), ATerm v_158 (ATerm), ATerm l_64, ATerm k_64, ATerm t)
{
  t = v_158(t);
  {
    static ATerm m_8 (ATerm t);
    static ATerm m_8 (ATerm t)
    {
      ATerm p_135 = NULL;
      p_135 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_64, p_135);
      t = u_158(t);
      return(t);
    }
    t = fetch_1_0(m_8, t);
  }
  t = k_64;
  return(t);
}
static ATerm j_13 (ATerm m_158 (ATerm), ATerm f_64, ATerm e_64, ATerm t)
{
  static ATerm f_136 (ATerm t);
  static ATerm f_136 (ATerm t)
  {
    ATerm a_136 = NULL,b_136 = NULL,c_136 = NULL;
    a_136 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_136;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_136 = ATgetFirst((ATermList) t);
            c_136 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_54 = t;
          int g_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_136;
              {
                static ATerm n_8 (ATerm t);
                static ATerm n_8 (ATerm t)
                {
                  t = e_64;
                  return(t);
                }
                t = i_13(m_158, n_8, b_136, c_136, t);
              }
              t = f_136(t);
              LocalPopChoice(g_54);
            }
          else
            {
              t = f_54;
              {
                ATerm w_68 = NULL,c_69 = NULL,s_13 = NULL;
                t = SSLgetAnnotations(a_136);
                w_68 = t;
                t = c_136;
                t = f_136(t);
                c_69 = t;
                t = (ATerm) ATinsert(CheckATermList(c_69), b_136);
                s_13 = t;
                t = SSLsetAnnotations(s_13, w_68);
              }
            }
        }
      }
    return(t);
  }
  t = f_64;
  t = f_136(t);
  return(t);
}
static ATerm t_8 (ATerm t)
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
static ATerm x_8 (ATerm t)
{
  ATerm n_136 = NULL,o_136 = NULL,p_136 = NULL,q_136 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_54 = ATgetArgument(t, 0);
      if(((ATgetType(j_54) == AT_LIST) && !(ATisEmpty(j_54))))
        {
          n_136 = ATgetFirst((ATermList) j_54);
          o_136 = (ATerm) ATgetNext((ATermList) j_54);
        }
      else
        _fail(t);
      {
        ATerm k_54 = ATgetArgument(t, 1);
        if(((ATgetType(k_54) == AT_LIST) && !(ATisEmpty(k_54))))
          {
            p_136 = ATgetFirst((ATermList) k_54);
            q_136 = (ATerm) ATgetNext((ATermList) k_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_136, p_136), (ATerm) ATmakeAppl(sym__2, o_136, q_136));
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm r_136 = NULL,s_136 = NULL;
  if(match_cons(t, sym__2))
    {
      r_136 = ATgetArgument(t, 0);
      s_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_136), r_136);
  return(t);
}
static ATerm l_13 (ATerm t_882, ATerm y_882, ATerm u_87, ATerm t)
{
  ATerm i_136 = NULL,j_136 = NULL,k_136 = NULL,l_136 = NULL;
  t = SSL_explode_term(y_882);
  if(match_cons(t, sym__2))
    {
      i_136 = ATgetArgument(t, 0);
      k_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_882);
  if(match_cons(t, sym__2))
    {
      if((i_136 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      j_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_136, k_136);
  t = genzip_4_0(t_8, x_8, y_8, _id, t);
  l_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_136, u_87);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm g_149 (ATerm), ATerm h_149 (ATerm), ATerm t)
{
  static ATerm u_136 (ATerm t);
  static ATerm u_136 (ATerm t)
  {
    ATerm l_54 = t;
    int m_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_149(t);
        LocalPopChoice(m_54);
      }
    else
      {
        t = l_54;
        t = h_149(t);
        t = u_136(t);
      }
    return(t);
  }
  t = u_136(t);
  return(t);
}
ATerm for_3_0 (ATerm j_149 (ATerm), ATerm k_149 (ATerm), ATerm l_149 (ATerm), ATerm t)
{
  t = j_149(t);
  t = while_not_2_0(k_149, l_149, t);
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm b_137 = NULL;
  b_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_137);
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm c_137 = NULL,d_137 = NULL,e_137 = NULL,f_137 = NULL,w_13 = NULL;
  f_137 = t;
  if(match_cons(t, sym__2))
    {
      d_137 = ATgetArgument(t, 0);
      e_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_137);
  c_137 = t;
  t = e_137;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_137, e_137);
  w_13 = t;
  t = SSLsetAnnotations(w_13, c_137);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm y_137 = NULL,z_137 = NULL,a_138 = NULL,b_138 = NULL,c_138 = NULL;
  y_137 = t;
  if(match_cons(t, sym__2))
    {
      z_137 = ATgetArgument(t, 0);
      a_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_138;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_138 = ATgetFirst((ATermList) t);
      c_138 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_54 = t;
        int o_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_138(z_137, a_138, y_137, t);
            LocalPopChoice(o_54);
          }
        else
          {
            t = n_54;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_137), b_138), c_138);
          }
      }
    }
  else
    {
      t = m_138(z_137, a_138, y_137, t);
    }
  return(t);
}
static ATerm m_138 (ATerm g_137, ATerm h_137, ATerm i_137, ATerm t)
{
  ATerm j_137 = NULL,m_137 = NULL,c_14 = NULL,p_137 = NULL,q_137 = NULL,r_137 = NULL,s_137 = NULL;
  t = SSLgetAnnotations(i_137);
  j_137 = t;
  t = h_137;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_137 = ATgetFirst((ATermList) t);
      s_137 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_137;
  if(match_cons(t, sym__2))
    {
      q_137 = ATgetArgument(t, 0);
      r_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_54 = t;
    int q_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_137;
        if((q_137 != t))
          {
            _fail(t);
          }
        t = s_137;
        LocalPopChoice(q_54);
      }
    else
      {
        t = p_54;
        t = h_137;
        t = l_13(q_137, r_137, s_137, t);
      }
  }
  m_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_137, m_137);
  c_14 = t;
  t = SSLsetAnnotations(c_14, j_137);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm l_138 = NULL;
  if(match_cons(t, sym__2))
    {
      l_138 = ATgetArgument(t, 0);
      if((l_138 != ATgetArgument(t, 1)))
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
      t = for_3_0(z_8, a_9, b_9, t);
      LocalPopChoice(s_54);
    }
  else
    {
      t = r_54;
      {
        ATerm g_138 = NULL,h_138 = NULL,i_138 = NULL;
        g_138 = t;
        if(match_cons(t, sym__2))
          {
            h_138 = ATgetArgument(t, 0);
            i_138 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_138;
        t = j_13(c_9, h_138, i_138, t);
      }
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL;
  if(match_cons(t, sym__2))
    {
      z_69 = ATgetArgument(t, 0);
      a_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_13(l_9, z_69, a_70, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm b_70 = NULL;
  if(match_cons(t, sym__2))
    {
      b_70 = ATgetArgument(t, 0);
      if((b_70 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm k_70 = NULL,n_70 = NULL;
  if(match_cons(t, sym__2))
    {
      k_70 = ATgetArgument(t, 0);
      n_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_13(o_9, k_70, n_70, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm o_70 = NULL;
  if(match_cons(t, sym__2))
    {
      o_70 = ATgetArgument(t, 0);
      if((o_70 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm q_165 (ATerm), ATerm r_165 (ATerm), ATerm s_165 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm a_139 (ATerm t);
  static ATerm a_139 (ATerm t)
  {
    ATerm t_54 = t;
    int u_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_165(t);
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
              ATerm o_138 = NULL,p_138 = NULL,m_69 = NULL,n_69 = NULL;
              o_138 = t;
              t = r_165(t);
              p_138 = t;
              t = o_138;
              {
                static ATerm d_9 (ATerm t);
                static ATerm d_9 (ATerm t)
                {
                  ATerm r_138 = NULL;
                  t = a_139(t);
                  r_138 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_138, p_138);
                  t = diff_0_0(t);
                  return(t);
                }
                t = s_165(d_9, a_139, f_9, t);
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
              t = foldr_3_0(g_9, k_9, _id, t);
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
                t = foldr_3_0(m_9, n_9, a_139, t);
              }
            }
        }
      }
    return(t);
  }
  t = a_139(t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm n_139 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_139);
  return(t);
}
static ATerm q_9 (ATerm t)
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
                  ATerm p_139 = NULL,q_139 = NULL,r_139 = NULL,s_139 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_139 = ATgetArgument(t, 0);
                      q_139 = ATgetArgument(t, 1);
                      r_139 = ATgetArgument(t, 2);
                      s_139 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_139;
                  t = map_1_0(s_9, t);
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
                        t = dynrule_targs_1_0(t_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm z_139 = NULL;
  ATerm i_55 = t;
  int l_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_139 = ATgetArgument(t, 0);
          {
            ATerm s_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_55);
      t = z_139;
    }
  else
    {
      t = i_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_139 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_139;
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  t = map_1_0(c_10, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm e_140 = NULL;
  ATerm t_55 = t;
  int u_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_140 = ATgetArgument(t, 0);
          {
            ATerm w_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_55);
      t = e_140;
    }
  else
    {
      t = t_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_140 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_140;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm g_139 = NULL,k_139 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      k_139 = ATgetArgument(t, 0);
      t = k_139;
      if(match_cons(t, sym_Rule_3))
        {
          g_139 = ATgetArgument(t, 0);
          {
            ATerm z_55 = ATgetArgument(t, 1);
          }
          {
            ATerm a_56 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = g_139;
      t = free_vars_3_0(p_9, q_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          k_139 = ATgetArgument(t, 0);
          {
            ATerm b_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = k_139;
    }
  return(t);
}
ATerm Var_1_0 (ATerm h_119 (ATerm), ATerm t)
{
  ATerm m_140 = NULL,n_140 = NULL,o_140 = NULL,p_140 = NULL,f_14 = NULL;
  p_140 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_140);
  m_140 = t;
  t = n_140;
  t = h_119(t);
  o_140 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_140);
  f_14 = t;
  t = SSLsetAnnotations(f_14, m_140);
  return(t);
}
static ATerm n_13 (ATerm y_163 (ATerm), ATerm z_163 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_67, ATerm p_67, ATerm o_67, ATerm t)
{
  static ATerm g_10 (ATerm t);
  static ATerm h_10 (ATerm t);
  static ATerm g_10 (ATerm t)
  {
    ATerm r_140 = NULL;
    r_140 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_140, o_67);
    t = y_163(t);
    return(t);
  }
  static ATerm h_10 (ATerm t)
  {
    ATerm s_140 = NULL;
    s_140 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_140, p_67);
    t = y_163(t);
    return(t);
  }
  t = q_67;
  t = z_163(g_10, h_10, _id, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm l_10 (ATerm t)
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
static ATerm m_10 (ATerm t)
{
  ATerm b_141 = NULL,c_141 = NULL,d_141 = NULL,m_141 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_56 = ATgetArgument(t, 0);
      if(((ATgetType(e_56) == AT_LIST) && !(ATisEmpty(e_56))))
        {
          b_141 = ATgetFirst((ATermList) e_56);
          c_141 = (ATerm) ATgetNext((ATermList) e_56);
        }
      else
        _fail(t);
      {
        ATerm f_56 = ATgetArgument(t, 1);
        if(((ATgetType(f_56) == AT_LIST) && !(ATisEmpty(f_56))))
          {
            d_141 = ATgetFirst((ATermList) f_56);
            m_141 = (ATerm) ATgetNext((ATermList) f_56);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_141, d_141), (ATerm) ATmakeAppl(sym__2, c_141, m_141));
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm v_141 = NULL,w_141 = NULL;
  if(match_cons(t, sym__2))
    {
      v_141 = ATgetArgument(t, 0);
      w_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_141), v_141);
  return(t);
}
static ATerm o_13 (ATerm s_163 (ATerm), ATerm t_163 (ATerm (ATerm), ATerm), ATerm i_67, ATerm l_67, ATerm t)
{
  ATerm v_140 = NULL,w_140 = NULL,x_140 = NULL,y_140 = NULL,a_141 = NULL;
  t = i_67;
  t = s_163(t);
  v_140 = t;
  t = map_1_0(new_0_0, t);
  w_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_140, w_140);
  t = genzip_4_0(l_10, m_10, o_10, _id, t);
  a_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_141, l_67);
  t = conc_0_0(t);
  x_140 = t;
  t = i_67;
  {
    static ATerm p_10 (ATerm t);
    static ATerm p_10 (ATerm t)
    {
      t = w_140;
      return(t);
    }
    t = t_163(p_10, t);
  }
  y_140 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_140, l_67, x_140);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm b_142 = NULL,c_142 = NULL,d_142 = NULL,e_142 = NULL,f_142 = NULL,g_142 = NULL,h_142 = NULL;
  d_142 = t;
  if(match_cons(t, sym__2))
    {
      e_142 = ATgetArgument(t, 0);
      f_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_142;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_142 = ATgetFirst((ATermList) t);
      h_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_142;
  if(match_cons(t, sym__2))
    {
      b_142 = ATgetArgument(t, 0);
      c_142 = ATgetArgument(t, 1);
      {
        ATerm g_56 = t;
        int h_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_142;
            if((e_142 != t))
              {
                _fail(t);
              }
            t = c_142;
            LocalPopChoice(h_56);
          }
        else
          {
            t = g_56;
            t = (ATerm) ATmakeAppl(sym__2, e_142, h_142);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, e_142, h_142);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm g_164 (ATerm), ATerm t)
{
  static ATerm g_143 (ATerm t);
  static ATerm g_143 (ATerm t)
  {
    ATerm i_56 = t;
    int j_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_164(t);
        LocalPopChoice(j_56);
      }
    else
      {
        t = i_56;
        {
          ATerm d_143 = NULL,e_143 = NULL,f_143 = NULL;
          static ATerm r_10 (ATerm t);
          static ATerm r_10 (ATerm t)
          {
            ATerm o_71 = NULL;
            o_71 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_71, not_null(f_143));
            t = g_143(t);
            return(t);
          }
          d_143 = t;
          if(match_cons(t, sym__2))
            {
              e_143 = ATgetArgument(t, 0);
              if(((f_143 != NULL) && (f_143 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                f_143 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_143;
          t = SRTS_all(r_10, t);
        }
      }
    return(t);
  }
  t = g_143(t);
  return(t);
}
ATerm rename_4_0 (ATerm n_163 (ATerm (ATerm), ATerm), ATerm o_163 (ATerm), ATerm p_163 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm q_163 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm k_143 = NULL;
  static ATerm b_144 (ATerm t);
  static ATerm b_144 (ATerm t)
  {
    static ATerm s_10 (ATerm t);
    static ATerm s_10 (ATerm t)
    {
      ATerm v_143 = NULL,w_143 = NULL,x_143 = NULL;
      v_143 = t;
      if(match_cons(t, sym__2))
        {
          w_143 = ATgetArgument(t, 0);
          x_143 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm k_56 = t;
        int l_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm y_10 (ATerm t);
            static ATerm y_10 (ATerm t)
            {
              ATerm a_144 = NULL;
              a_144 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_144, x_143);
              t = lookup_0_0(t);
              return(t);
            }
            t = w_143;
            t = n_163(y_10, t);
            LocalPopChoice(l_56);
          }
        else
          {
            t = k_56;
            {
              ATerm e_72 = NULL,g_72 = NULL,j_72 = NULL;
              t = v_143;
              t = o_13(o_163, q_163, w_143, x_143, t);
              if(match_cons(t, sym__3))
                {
                  e_72 = ATgetArgument(t, 0);
                  g_72 = ATgetArgument(t, 1);
                  j_72 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_13(b_144, p_163, e_72, g_72, j_72, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(s_10, t);
    return(t);
  }
  k_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_143, (ATerm) ATempty);
  t = b_144(t);
  return(t);
}
static ATerm z_10 (ATerm t)
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
            ATerm h_144 = NULL,i_144 = NULL,j_144 = NULL,k_144 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                h_144 = ATgetArgument(t, 0);
                i_144 = ATgetArgument(t, 1);
                j_144 = ATgetArgument(t, 2);
                k_144 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = j_144;
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
  ATerm r_144 = NULL;
  ATerm s_56 = t;
  int t_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_144 = ATgetArgument(t, 0);
          {
            ATerm u_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_56);
      t = r_144;
    }
  else
    {
      t = s_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_144 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_144;
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
  ATerm w_144 = NULL;
  ATerm v_56 = t;
  int x_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_144 = ATgetArgument(t, 0);
          {
            ATerm y_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_56);
      t = w_144;
    }
  else
    {
      t = v_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_144 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_144;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, z_10, tboundin_3_0, tpaste_1_0, t);
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
      ATerm d_57 = ATgetArgument(t, 0);
      if(((ATgetType(d_57) == AT_LIST) && !(ATisEmpty(d_57))))
        {
          k_77 = ATgetFirst((ATermList) d_57);
          l_77 = (ATerm) ATgetNext((ATermList) d_57);
        }
      else
        _fail(t);
      {
        ATerm e_57 = ATgetArgument(t, 1);
        if(((ATgetType(e_57) == AT_LIST) && !(ATisEmpty(e_57))))
          {
            m_77 = ATgetFirst((ATermList) e_57);
            p_77 = (ATerm) ATgetNext((ATermList) e_57);
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
static ATerm k_11 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm InlineCall_0_0 (ATerm t)
{
  ATerm t_146 = NULL,u_146 = NULL,v_146 = NULL,w_146 = NULL,x_146 = NULL;
  t_146 = t;
  if(match_cons(t, sym_CallT_3))
    {
      u_146 = ATgetArgument(t, 0);
      w_146 = ATgetArgument(t, 1);
      x_146 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_146;
  if(match_cons(t, sym_SVar_1))
    {
      v_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_57 = t;
    int h_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_74 = NULL,u_74 = NULL;
        t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_146), (ATerm)ATempty, (ATerm) ATempty);
        t_74 = t;
        t = term_e_17;
        u_74 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_146), (ATerm)ATempty, (ATerm) ATempty));
        t = j_7(u_74, t_74, t);
        if(!(match_cons(t, sym_Undefined_0)))
          _fail(t);
        t = t_146;
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
              t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_146), (ATerm)ATempty, (ATerm) ATempty);
              s_75 = t;
              t = term_e_17;
              t_75 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_146), (ATerm)ATempty, (ATerm) ATempty));
              t = j_7(t_75, s_75, t);
              if(!(match_cons(t, sym_Undefined_0)))
                _fail(t);
              t = t_146;
              _fail(t);
              LocalPopChoice(j_57);
            }
          else
            {
              t = i_57;
              {
                ATerm k_57 = t;
                int m_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_76 = NULL,m_76 = NULL,t_76 = NULL,u_76 = NULL,z_76 = NULL,a_77 = NULL,f_77 = NULL,g_77 = NULL,i_77 = NULL,g_78 = NULL,j_78 = NULL;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_146), (ATerm)ATempty, (ATerm) ATempty);
                    g_78 = t;
                    t = term_e_17;
                    j_78 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_146), (ATerm)ATempty, (ATerm) ATempty));
                    t = j_7(j_78, g_78, t);
                    if(match_cons(t, sym_Defined_2))
                      {
                        ATerm n_57 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) n_57) != ATmakeSymbol("d_0", 0, ATtrue)))
                          _fail(t);
                        h_76 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = h_76;
                    t = strename_0_0(t);
                    if(match_cons(t, sym_SDefT_4))
                      {
                        if((v_146 != ATgetArgument(t, 0)))
                          {
                            _fail(ATgetArgument(t, 0));
                          }
                        m_76 = ATgetArgument(t, 1);
                        u_76 = ATgetArgument(t, 2);
                        t_76 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__3, m_76, w_146, t_76);
                    t = substitute_args_0_0(t);
                    a_77 = t;
                    t = u_76;
                    t = map_1_0(f_11, t);
                    z_76 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_146, z_76);
                    t = genzip_4_0(g_11, h_11, i_11, j_11, t);
                    f_77 = t;
                    t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_146), (ATerm)ATempty, (ATerm) ATempty);
                    g_77 = t;
                    t = term_o_57;
                    i_77 = t;
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_146), (ATerm)ATempty, (ATerm) ATempty), term_o_57);
                    t = v_13(k_11, g_77, i_77, t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, z_76, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_77), a_77));
                    t = simplify_0_0(t);
                    LocalPopChoice(m_57);
                  }
                else
                  {
                    t = k_57;
                    {
                      ATerm f_79 = NULL,k_79 = NULL;
                      t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_146), (ATerm)ATempty, (ATerm) ATempty);
                      f_79 = t;
                      t = term_e_17;
                      k_79 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_e_17, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_146), (ATerm)ATempty, (ATerm) ATempty));
                      t = j_7(k_79, f_79, t);
                      if(!(match_cons(t, sym_Undefined_0)))
                        _fail(t);
                      t = t_146;
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
  ATerm p_57 = t;
  if((PushChoice() == 0))
    {
      ATerm c_147 = NULL,d_147 = NULL;
      if(match_cons(t, sym__2))
        {
          c_147 = ATgetArgument(t, 0);
          d_147 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, c_147, d_147);
      {
        ATerm r_57 = t;
        int u_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_gti(c_147, d_147);
            LocalPopChoice(u_57);
          }
        else
          {
            t = r_57;
            t = SSL_gtr(c_147, d_147);
          }
      }
      t = (ATerm) ATmakeAppl(sym__2, c_147, d_147);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_57;
    }
  return(t);
}
ATerm foldr_3_0 (ATerm w_161 (ATerm), ATerm x_161 (ATerm), ATerm y_161 (ATerm), ATerm t)
{
  ATerm f_147 = NULL,l_147 = NULL,m_147 = NULL;
  f_147 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_147;
      t = w_161(t);
    }
  else
    {
      ATerm p_147 = NULL,q_147 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_147 = ATgetFirst((ATermList) t);
          m_147 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_147;
      t = y_161(t);
      p_147 = t;
      t = m_147;
      t = foldr_3_0(w_161, x_161, y_161, t);
      q_147 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_147, q_147);
      t = x_161(t);
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
  ATerm h_80 = NULL,k_80 = NULL;
  if(match_cons(t, sym__2))
    {
      h_80 = ATgetArgument(t, 0);
      k_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(h_80, k_80, t);
  return(t);
}
ATerm occurrences_1_0 (ATerm y_158 (ATerm), ATerm t)
{
  ATerm t_147 = NULL,u_147 = NULL,v_147 = NULL,p_79 = NULL;
  v_147 = t;
  {
    ATerm x_57 = t;
    int f_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_158(t);
        t = term_o_17;
        LocalPopChoice(f_58);
      }
    else
      {
        t = x_57;
        t = term_w_57;
      }
  }
  t_147 = t;
  t = SSL_explode_term(v_147);
  if(match_cons(t, sym__2))
    {
      ATerm g_58 = ATgetArgument(t, 0);
      p_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_79;
  {
    static ATerm o_11 (ATerm t);
    static ATerm o_11 (ATerm t)
    {
      t = occurrences_1_0(y_158, t);
      return(t);
    }
    t = foldr_3_0(m_11, n_11, o_11, t);
  }
  u_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_147, u_147);
  t = n_15(t_147, u_147, t);
  return(t);
}
static ATerm t_13 (ATerm j_140 (ATerm), ATerm w_27, ATerm v_27, ATerm t)
{
  ATerm y_147 = NULL,z_147 = NULL;
  y_147 = t;
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
  t = j_140(t);
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
  z_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_147, term_o_17);
  t = leq_0_0(t);
  t = y_147;
  return(t);
}
static ATerm v_13 (ATerm q_150 (ATerm), ATerm i_38, ATerm g_38, ATerm t)
{
  ATerm a_148 = NULL,b_148 = NULL,c_148 = NULL,d_148 = NULL,e_148 = NULL,f_148 = NULL,g_148 = NULL,h_148 = NULL;
  d_148 = t;
  t = q_150(t);
  a_148 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_148, i_38, g_38);
  t = u_15(a_148, i_38, g_38, t);
  {
    ATerm p_58 = t;
    int q_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_148 = NULL;
        t = term_r_58;
        i_148 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_148, term_r_58);
        t = t_15(a_148, i_148, t);
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
      b_148 = ATgetFirst((ATermList) t);
      c_148 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_148, term_r_58, (ATerm) ATinsert(CheckATermList(c_148), (ATerm) ATinsert(CheckATermList(b_148), i_38)));
  t = lookup_table_0_1(a_148, t);
  h_148 = t;
  t = term_r_58;
  e_148 = t;
  t = (ATerm) ATinsert(CheckATermList(c_148), (ATerm) ATinsert(CheckATermList(b_148), i_38));
  f_148 = t;
  t = h_148;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(e_148, f_148, g_148, t);
  t = d_148;
  return(t);
}
static ATerm x_13 (ATerm r_39, ATerm s_39, ATerm t)
{
  ATerm j_148 = NULL,k_148 = NULL;
  k_148 = t;
  {
    ATerm w_58 = t;
    int x_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_39, s_39);
        t = t_15(r_39, s_39, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm y_58 = ATgetFirst((ATermList) t);
            j_148 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(x_58);
        {
          ATerm l_148 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, r_39, s_39, j_148);
          t = lookup_table_0_1(r_39, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_148 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_15(s_39, j_148, l_148, t);
          t = (ATerm) ATmakeAppl(sym__3, r_39, s_39, j_148);
        }
      }
    else
      {
        t = w_58;
        {
          ATerm n_148 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, r_39, s_39);
          t = lookup_table_0_1(r_39, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_148 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_15(s_39, n_148, t);
          t = (ATerm) ATmakeAppl(sym__2, r_39, s_39);
        }
      }
  }
  t = k_148;
  return(t);
}
ATerm end_scope_1_0 (ATerm n_150 (ATerm), ATerm t)
{
  ATerm s_148 = NULL,t_148 = NULL,u_148 = NULL,v_148 = NULL,w_148 = NULL,x_148 = NULL,y_148 = NULL;
  v_148 = t;
  t = n_150(t);
  u_148 = t;
  {
    ATerm z_58 = t;
    int a_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_148 = NULL;
        t = term_r_58;
        z_148 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_148, term_r_58);
        t = t_15(u_148, z_148, t);
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
      t_148 = ATgetFirst((ATermList) t);
      s_148 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, u_148, term_r_58, s_148);
  t = lookup_table_0_1(u_148, t);
  y_148 = t;
  t = term_r_58;
  w_148 = t;
  t = y_148;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(w_148, s_148, x_148, t);
  t = t_148;
  {
    static ATerm t_11 (ATerm t);
    static ATerm t_11 (ATerm t)
    {
      ATerm a_149 = NULL;
      a_149 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_148, a_149);
      t = x_13(u_148, a_149, t);
      return(t);
    }
    t = map_1_0(t_11, t);
  }
  t = v_148;
  return(t);
}
ATerm restore_always_2_0 (ATerm a_146 (ATerm), ATerm b_146 (ATerm), ATerm t)
{
  ATerm c_59 = t;
  int d_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_146(t);
      t = b_146(t);
      LocalPopChoice(d_59);
    }
  else
    {
      t = c_59;
      t = b_146(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_150 (ATerm), ATerm t)
{
  ATerm c_149 = NULL,d_149 = NULL,e_149 = NULL,f_149 = NULL,m_149 = NULL,n_149 = NULL,o_149 = NULL;
  d_149 = t;
  t = m_150(t);
  c_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_149, term_r_58);
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
        t = (ATerm) ATmakeAppl(sym__2, c_149, term_r_58);
        t = t_15(c_149, s_149, t);
        LocalPopChoice(f_59);
      }
    else
      {
        t = e_59;
        t = (ATerm) ATempty;
      }
  }
  e_149 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_149, term_r_58, (ATerm) ATinsert(CheckATermList(e_149), (ATerm) ATempty));
  t = lookup_table_0_1(c_149, t);
  o_149 = t;
  t = term_r_58;
  f_149 = t;
  t = (ATerm) ATinsert(CheckATermList(e_149), (ATerm) ATempty);
  m_149 = t;
  t = o_149;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(f_149, m_149, n_149, t);
  t = d_149;
  return(t);
}
ATerm scope_2_0 (ATerm o_150 (ATerm), ATerm p_150 (ATerm), ATerm t)
{
  static ATerm u_11 (ATerm t);
  static ATerm u_11 (ATerm t)
  {
    t = end_scope_1_0(o_150, t);
    return(t);
  }
  t = begin_scope_1_0(o_150, t);
  t = restore_always_2_0(p_150, u_11, t);
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
    static ATerm y_11 (ATerm t);
    static ATerm y_11 (ATerm t)
    {
      ATerm i_59 = t;
      int k_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_149 = NULL,y_149 = NULL,z_149 = NULL;
          x_149 = t;
          {
            ATerm l_59 = t;
            int m_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    y_149 = ATgetArgument(t, 0);
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
                  ATerm c_150 = NULL,d_150 = NULL;
                  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_149), (ATerm)ATempty, (ATerm) ATempty);
                  c_150 = t;
                  t = term_o_57;
                  d_150 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_149), (ATerm)ATempty, (ATerm) ATempty), term_o_57);
                  t = v_13(a_12, c_150, d_150, t);
                  t = x_149;
                }
              }
            else
              {
                t = l_59;
                if(match_cons(t, sym_Let_2))
                  {
                    y_149 = ATgetArgument(t, 0);
                    z_149 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_149;
                {
                  static ATerm b_12 (ATerm t);
                  static ATerm b_12 (ATerm t)
                  {
                    ATerm h_150 = NULL,i_150 = NULL;
                    if(match_cons(t, sym_SDefT_4))
                      {
                        h_150 = ATgetArgument(t, 0);
                        {
                          ATerm q_59 = ATgetArgument(t, 1);
                        }
                        {
                          ATerm r_59 = ATgetArgument(t, 2);
                        }
                        i_150 = ATgetArgument(t, 3);
                      }
                    else
                      _fail(t);
                    {
                      static ATerm c_12 (ATerm t);
                      static ATerm c_12 (ATerm t)
                      {
                        t = z_149;
                        return(t);
                      }
                      t = t_13(c_12, h_150, i_150, t);
                    }
                    t = AddSDef_0_0(t);
                    return(t);
                  }
                  t = map_1_0(b_12, t);
                }
                t = (ATerm) ATmakeAppl(sym_Let_2, y_149, z_149);
              }
          }
          LocalPopChoice(k_59);
        }
      else
        {
          t = i_59;
          t = repeat_2_0(InlineCall_0_0, _id, t);
        }
      t = SRTS_all(inline_sdef_0_0, t);
      return(t);
    }
    t = scope_2_0(x_11, y_11, t);
    return(t);
  }
  t = scope_2_0(v_11, w_11, t);
  return(t);
}
ATerm topdown_1_0 (ATerm p_142 (ATerm), ATerm t)
{
  static ATerm d_12 (ATerm t);
  static ATerm d_12 (ATerm t)
  {
    t = topdown_1_0(p_142, t);
    return(t);
  }
  t = p_142(t);
  t = SRTS_all(d_12, t);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm s_59 = t;
  int t_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm u_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(t_59);
      {
        ATerm r_150 = NULL,t_150 = NULL;
        r_150 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm x_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t_150 = t;
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
        t = t_150;
      }
    }
  else
    {
      t = s_59;
      {
        ATerm a_60 = t;
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
            t = a_60;
          }
      }
    }
  return(t);
}
static ATerm z_13 (ATerm j_108, ATerm i_108, ATerm t)
{
  t = j_108;
  t = topdown_1_0(e_12, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, j_108);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm c_151 = NULL,d_151 = NULL,f_151 = NULL,g_151 = NULL,h_151 = NULL,i_151 = NULL,j_151 = NULL,k_151 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_151 = ATgetArgument(t, 0);
      i_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_151;
  if(match_cons(t, sym_Match_1))
    {
      g_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_151;
  if(match_cons(t, sym_Var_1))
    {
      h_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_151;
  if(match_cons(t, sym_Seq_2))
    {
      j_151 = ATgetArgument(t, 0);
      d_151 = ATgetArgument(t, 1);
      t = j_151;
      if(match_cons(t, sym_Build_1))
        {
          k_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_151;
      if(match_cons(t, sym_Var_1))
        {
          c_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_151;
      if((h_151 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_151)), d_151);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          j_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_151;
      if(match_cons(t, sym_Var_1))
        {
          k_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_151;
      if((h_151 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_151));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm s_151 = NULL,t_151 = NULL,v_151 = NULL,w_151 = NULL,x_151 = NULL,y_151 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_151 = ATgetArgument(t, 0);
      x_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_151;
  if(match_cons(t, sym_Build_1))
    {
      w_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_151;
  if(match_cons(t, sym_Seq_2))
    {
      y_151 = ATgetArgument(t, 0);
      t_151 = ATgetArgument(t, 1);
      t = y_151;
      if(match_cons(t, sym_Match_1))
        {
          s_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_151;
      if((w_151 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_151), t_151);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          y_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_151;
      if((w_151 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, w_151);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm g_152 = NULL,h_152 = NULL,j_152 = NULL,k_152 = NULL,l_152 = NULL,m_152 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      j_152 = ATgetArgument(t, 0);
      l_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_152;
  if(match_cons(t, sym_Match_1))
    {
      k_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_152;
  if(match_cons(t, sym_Seq_2))
    {
      m_152 = ATgetArgument(t, 0);
      h_152 = ATgetArgument(t, 1);
      t = m_152;
      if(match_cons(t, sym_Match_1))
        {
          g_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_152;
      if((k_152 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_152), h_152);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          m_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_152;
      if((k_152 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, k_152);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm u_152 = NULL,v_152 = NULL,w_152 = NULL,y_152 = NULL,a_153 = NULL,b_153 = NULL,c_153 = NULL,d_153 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_152 = ATgetArgument(t, 0);
      a_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_152;
  if(match_cons(t, sym_Build_1))
    {
      ATerm g_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_153;
  if(match_cons(t, sym_Seq_2))
    {
      b_153 = ATgetArgument(t, 0);
      c_153 = ATgetArgument(t, 1);
      t = b_153;
      if(match_cons(t, sym_PrimT_3))
        {
          u_152 = ATgetArgument(t, 0);
          v_152 = ATgetArgument(t, 1);
          w_152 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, u_152, v_152, w_152), c_153);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          b_153 = ATgetArgument(t, 0);
          c_153 = ATgetArgument(t, 1);
          d_153 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, b_153, c_153, d_153);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm p_153 = NULL,q_153 = NULL,s_153 = NULL,u_153 = NULL,v_153 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      s_153 = ATgetArgument(t, 0);
      u_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_153;
  if(match_cons(t, sym_Build_1))
    {
      ATerm h_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_153;
  if(match_cons(t, sym_Seq_2))
    {
      v_153 = ATgetArgument(t, 0);
      q_153 = ATgetArgument(t, 1);
      t = v_153;
      if(match_cons(t, sym_Build_1))
        {
          p_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_153), q_153);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          v_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, v_153);
    }
  return(t);
}
ATerm genzip_4_0 (ATerm g_147 (ATerm), ATerm h_147 (ATerm), ATerm i_147 (ATerm), ATerm j_147 (ATerm), ATerm t)
{
  static ATerm f_154 (ATerm t);
  static ATerm f_154 (ATerm t)
  {
    ATerm j_60 = t;
    int k_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_147(t);
        LocalPopChoice(k_60);
      }
    else
      {
        t = j_60;
        {
          ATerm z_153 = NULL,a_154 = NULL,b_154 = NULL,c_154 = NULL,d_154 = NULL,e_154 = NULL,h_14 = NULL;
          t = h_147(t);
          e_154 = t;
          if(match_cons(t, sym__2))
            {
              a_154 = ATgetArgument(t, 0);
              b_154 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_154);
          z_153 = t;
          t = a_154;
          t = j_147(t);
          c_154 = t;
          t = b_154;
          t = f_154(t);
          d_154 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_154, d_154);
          h_14 = t;
          t = SSLsetAnnotations(h_14, z_153);
          t = i_147(t);
        }
      }
    return(t);
  }
  t = f_154(t);
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
  ATerm e_155 = NULL,f_155 = NULL,g_155 = NULL,h_155 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_60 = ATgetArgument(t, 0);
      if(((ATgetType(n_60) == AT_LIST) && !(ATisEmpty(n_60))))
        {
          e_155 = ATgetFirst((ATermList) n_60);
          f_155 = (ATerm) ATgetNext((ATermList) n_60);
        }
      else
        _fail(t);
      {
        ATerm o_60 = ATgetArgument(t, 1);
        if(((ATgetType(o_60) == AT_LIST) && !(ATisEmpty(o_60))))
          {
            g_155 = ATgetFirst((ATermList) o_60);
            h_155 = (ATerm) ATgetNext((ATermList) o_60);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_155, g_155), (ATerm) ATmakeAppl(sym__2, f_155, h_155));
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm i_155 = NULL,j_155 = NULL;
  if(match_cons(t, sym__2))
    {
      i_155 = ATgetArgument(t, 0);
      j_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_155), i_155);
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm k_155 = NULL,l_155 = NULL;
  if(match_cons(t, sym__2))
    {
      k_155 = ATgetArgument(t, 0);
      l_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_155), (ATerm) ATmakeAppl(sym_Match_1, l_155));
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
static ATerm o_12 (ATerm t)
{
  ATerm q_155 = NULL,r_155 = NULL,s_155 = NULL,t_155 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_60 = ATgetArgument(t, 0);
      if(((ATgetType(r_60) == AT_LIST) && !(ATisEmpty(r_60))))
        {
          q_155 = ATgetFirst((ATermList) r_60);
          r_155 = (ATerm) ATgetNext((ATermList) r_60);
        }
      else
        _fail(t);
      {
        ATerm s_60 = ATgetArgument(t, 1);
        if(((ATgetType(s_60) == AT_LIST) && !(ATisEmpty(s_60))))
          {
            s_155 = ATgetFirst((ATermList) s_60);
            t_155 = (ATerm) ATgetNext((ATermList) s_60);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_155, s_155), (ATerm) ATmakeAppl(sym__2, r_155, t_155));
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm u_155 = NULL,v_155 = NULL;
  if(match_cons(t, sym__2))
    {
      u_155 = ATgetArgument(t, 0);
      v_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_155), u_155);
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm w_155 = NULL,y_155 = NULL;
  if(match_cons(t, sym__2))
    {
      w_155 = ATgetArgument(t, 0);
      y_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_155), (ATerm) ATmakeAppl(sym_Match_1, y_155));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm n_154 = NULL,o_154 = NULL,p_154 = NULL,r_154 = NULL,s_154 = NULL,t_154 = NULL,u_154 = NULL,v_154 = NULL,w_154 = NULL,x_154 = NULL,y_154 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      r_154 = ATgetArgument(t, 0);
      v_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_154;
  if(match_cons(t, sym_Build_1))
    {
      s_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_154;
  if(match_cons(t, sym_Op_2))
    {
      t_154 = ATgetArgument(t, 0);
      u_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_154;
  if(match_cons(t, sym_Seq_2))
    {
      w_154 = ATgetArgument(t, 0);
      p_154 = ATgetArgument(t, 1);
      {
        ATerm d_155 = NULL;
        t = w_154;
        if(match_cons(t, sym_Match_1))
          {
            x_154 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_154;
        if(match_cons(t, sym_Op_2))
          {
            n_154 = ATgetArgument(t, 0);
            o_154 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_154;
        if((t_154 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, u_154, o_154);
        t = genzip_4_0(i_12, j_12, k_12, l_12, t);
        d_155 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_155), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, t_154, u_154)), p_154));
      }
    }
  else
    {
      ATerm p_155 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          w_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_154;
      if(match_cons(t, sym_Op_2))
        {
          x_154 = ATgetArgument(t, 0);
          y_154 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_154;
      if((t_154 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, u_154, y_154);
      t = genzip_4_0(m_12, o_12, p_12, q_12, t);
      p_155 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_155), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, t_154, u_154)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm a_157 = NULL,d_157 = NULL,e_157 = NULL,f_157 = NULL,g_157 = NULL,i_157 = NULL,j_157 = NULL,k_157 = NULL;
  d_157 = t;
  if(match_cons(t, sym_Seq_2))
    {
      e_157 = ATgetArgument(t, 0);
      i_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_157;
  if(match_cons(t, sym_Build_1))
    {
      f_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_157;
  if(match_cons(t, sym_Op_2))
    {
      g_157 = ATgetArgument(t, 0);
      {
        ATerm t_60 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_157;
  {
    ATerm u_60 = t;
    int w_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            j_157 = ATgetArgument(t, 0);
            {
              ATerm x_60 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_60);
        t = j_157;
        if(match_cons(t, sym_Match_1))
          {
            k_157 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_157;
        if(match_cons(t, sym_Op_2))
          {
            a_157 = ATgetArgument(t, 0);
            {
              ATerm y_60 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_157, a_157);
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
        t = u_60;
        if(match_cons(t, sym_Match_1))
          {
            j_157 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_157;
        if(match_cons(t, sym_Op_2))
          {
            k_157 = ATgetArgument(t, 0);
            {
              ATerm c_61 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_157, k_157);
        {
          ATerm d_61 = t;
          if((PushChoice() == 0))
            {
              ATerm e_81 = NULL;
              if(match_cons(t, sym__2))
                {
                  e_81 = ATgetArgument(t, 0);
                  if((e_81 != ATgetArgument(t, 1)))
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
ATerm oncetd_1_0 (ATerm t_143 (ATerm), ATerm t)
{
  static ATerm o_157 (ATerm t);
  static ATerm o_157 (ATerm t)
  {
    ATerm e_61 = t;
    int f_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_143(t);
        LocalPopChoice(f_61);
      }
    else
      {
        t = e_61;
        t = SRTS_one(o_157, t);
      }
    return(t);
  }
  t = o_157(t);
  return(t);
}
ATerm at_end_1_0 (ATerm o_156 (ATerm), ATerm t)
{
  static ATerm j_158 (ATerm t);
  static ATerm j_158 (ATerm t)
  {
    ATerm g_158 = NULL,h_158 = NULL,i_158 = NULL;
    i_158 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_158 = ATgetFirst((ATermList) t);
        h_158 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_81 = NULL,y_81 = NULL,j_14 = NULL;
          t = SSLgetAnnotations(i_158);
          v_81 = t;
          t = h_158;
          t = j_158(t);
          y_81 = t;
          t = (ATerm) ATinsert(CheckATermList(y_81), g_158);
          j_14 = t;
          t = SSLsetAnnotations(j_14, v_81);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_158;
        t = o_156(t);
      }
    return(t);
  }
  t = j_158(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_157 = NULL,r_157 = NULL,s_157 = NULL;
  q_157 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_157;
    }
  else
    {
      static ATerm s_12 (ATerm t);
      static ATerm s_12 (ATerm t)
      {
        t = not_null(s_157);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_157 = ATgetFirst((ATermList) t);
          if(((s_157 != NULL) && (s_157 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_157 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_157;
      t = at_end_1_0(s_12, t);
    }
  return(t);
}
static ATerm h_159 (ATerm p_158, ATerm t)
{
  ATerm q_158 = NULL;
  t = SSL_explode_term(p_158);
  if(match_cons(t, sym__2))
    {
      ATerm q_61 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_61) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_158;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_158 = NULL,x_158 = NULL,z_158 = NULL;
  z_158 = t;
  if(match_cons(t, sym__2))
    {
      w_158 = ATgetArgument(t, 0);
      x_158 = ATgetArgument(t, 1);
      {
        ATerm r_61 = t;
        int t_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm t_12 (ATerm t);
            static ATerm t_12 (ATerm t)
            {
              t = x_158;
              return(t);
            }
            t = w_158;
            t = at_end_1_0(t_12, t);
            LocalPopChoice(t_61);
          }
        else
          {
            t = r_61;
            t = h_159(z_158, t);
          }
      }
    }
  else
    {
      t = h_159(z_158, t);
    }
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm a_160 = NULL,b_160 = NULL,c_160 = NULL,d_160 = NULL,e_160 = NULL,f_160 = NULL,g_160 = NULL,h_160 = NULL,i_160 = NULL,j_160 = NULL,k_160 = NULL,l_160 = NULL,m_160 = NULL;
  a_160 = t;
  if(match_cons(t, sym_Let_2))
    {
      b_160 = ATgetArgument(t, 0);
      i_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_160;
  if(match_cons(t, sym_Let_2))
    {
      j_160 = ATgetArgument(t, 0);
      l_160 = ATgetArgument(t, 1);
      {
        ATerm q_160 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, b_160, j_160);
        t = conc_0_0(t);
        q_160 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, q_160, l_160);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          j_160 = ATgetArgument(t, 0);
          l_160 = ATgetArgument(t, 1);
          m_160 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_160;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_160 = ATgetFirst((ATermList) t);
          h_160 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_160;
      if(match_cons(t, sym_SDefT_4))
        {
          d_160 = ATgetArgument(t, 0);
          e_160 = ATgetArgument(t, 1);
          f_160 = ATgetArgument(t, 2);
          g_160 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = e_160;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_160;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_160;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_160;
      if(match_cons(t, sym_SVar_1))
        {
          k_160 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_160;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_160;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_160;
      if((d_160 != t))
        {
          _fail(t);
        }
      t = g_160;
      {
        ATerm u_61 = t;
        if((PushChoice() == 0))
          {
            static ATerm u_12 (ATerm t);
            static ATerm u_12 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm v_61 = ATgetArgument(t, 0);
                  if(match_cons(v_61, sym_SVar_1))
                    {
                      if((d_160 != ATgetArgument(v_61, 0)))
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
            t = oncetd_1_0(u_12, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_61;
          }
      }
      t = g_160;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm z_160 = NULL,a_161 = NULL,b_161 = NULL,c_161 = NULL,e_161 = NULL,f_161 = NULL,h_161 = NULL,i_161 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      h_161 = ATgetArgument(t, 0);
      t = h_161;
      if(match_cons(t, sym_Seq_2))
        {
          f_161 = ATgetArgument(t, 0);
          a_161 = ATgetArgument(t, 1);
          t = f_161;
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
              e_161 = ATgetArgument(t, 1);
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
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, z_160, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_161), e_161)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              f_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, f_161);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          h_161 = ATgetArgument(t, 0);
          t = h_161;
          if(match_cons(t, sym_Test_1))
            {
              f_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, f_161);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              h_161 = ATgetArgument(t, 0);
              t = h_161;
              if(match_cons(t, sym_Not_1))
                {
                  f_161 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, f_161);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  h_161 = ATgetArgument(t, 0);
                  i_161 = ATgetArgument(t, 1);
                  t = i_161;
                  if((h_161 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      h_161 = ATgetArgument(t, 0);
                      i_161 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_161;
                  if((h_161 != t))
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
  ATerm b_162 = NULL,c_162 = NULL,d_162 = NULL,e_162 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      b_162 = ATgetArgument(t, 0);
      e_162 = ATgetArgument(t, 1);
      t = b_162;
      if(match_cons(t, sym_LChoice_2))
        {
          c_162 = ATgetArgument(t, 0);
          d_162 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, c_162, (ATerm) ATmakeAppl(sym_LChoice_2, d_162, e_162));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          b_162 = ATgetArgument(t, 0);
          e_162 = ATgetArgument(t, 1);
          t = b_162;
          if(match_cons(t, sym_Seq_2))
            {
              c_162 = ATgetArgument(t, 0);
              d_162 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, c_162, (ATerm) ATmakeAppl(sym_Seq_2, d_162, e_162));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              b_162 = ATgetArgument(t, 0);
              e_162 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_162;
          if(match_cons(t, sym_Choice_2))
            {
              c_162 = ATgetArgument(t, 0);
              d_162 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, c_162, (ATerm) ATmakeAppl(sym_Choice_2, d_162, e_162));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm s_162 = NULL,t_162 = NULL,u_162 = NULL,w_162 = NULL,x_162 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      w_162 = ATgetArgument(t, 0);
      x_162 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, w_162, x_162);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          w_162 = ATgetArgument(t, 0);
          t = w_162;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_162 = ATgetFirst((ATermList) t);
              t_162 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, s_162, (ATerm) ATmakeAppl(sym_LChoices_1, t_162));
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
              w_162 = ATgetArgument(t, 0);
              t = w_162;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_162 = ATgetFirst((ATermList) t);
                  t_162 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, s_162, (ATerm) ATmakeAppl(sym_Choices_1, t_162));
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
                  w_162 = ATgetArgument(t, 0);
                  t = w_162;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_162 = ATgetFirst((ATermList) t);
                      t_162 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_162, (ATerm) ATmakeAppl(sym_Seqs_1, t_162));
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
                      w_162 = ATgetArgument(t, 0);
                      x_162 = ATgetArgument(t, 1);
                      u_162 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, x_162, (ATerm) ATmakeAppl(sym_Op_2, term_z_37, (ATerm) ATinsert(ATinsert(ATempty, u_162), w_162)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          w_162 = ATgetArgument(t, 0);
                          x_162 = ATgetArgument(t, 1);
                          u_162 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, u_162)), w_162), (ATerm) ATmakeAppl(sym_Build_1, x_162)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              w_162 = ATgetArgument(t, 0);
                              x_162 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_162, (ATerm) ATmakeAppl(sym_Match_1, x_162));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  w_162 = ATgetArgument(t, 0);
                                  x_162 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_162), x_162);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      w_162 = ATgetArgument(t, 0);
                                      x_162 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_162), w_162);
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
static ATerm v_12 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm v_164 = NULL,w_164 = NULL,x_164 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      v_164 = ATgetArgument(t, 0);
      t = v_164;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_m_20;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          v_164 = ATgetArgument(t, 0);
          t = v_164;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_y_19;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              v_164 = ATgetArgument(t, 0);
              w_164 = ATgetArgument(t, 1);
              t = v_164;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_m_20;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  v_164 = ATgetArgument(t, 0);
                  w_164 = ATgetArgument(t, 1);
                  t = w_164;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_m_20;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      v_164 = ATgetArgument(t, 0);
                      w_164 = ATgetArgument(t, 1);
                      t = w_164;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_m_20;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          v_164 = ATgetArgument(t, 0);
                          t = v_164;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_m_20;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              v_164 = ATgetArgument(t, 0);
                              t = v_164;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_m_20;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  v_164 = ATgetArgument(t, 0);
                                  w_164 = ATgetArgument(t, 1);
                                  t = w_164;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_m_20;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      v_164 = ATgetArgument(t, 0);
                                      w_164 = ATgetArgument(t, 1);
                                      t = w_164;
                                      t = fetch_1_0(v_12, t);
                                      t = term_m_20;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          v_164 = ATgetArgument(t, 0);
                                          w_164 = ATgetArgument(t, 1);
                                          t = w_164;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = v_164;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = w_164;
                                                }
                                              else
                                                {
                                                  t = v_164;
                                                }
                                            }
                                          else
                                            {
                                              t = v_164;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = w_164;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              v_164 = ATgetArgument(t, 0);
                                              w_164 = ATgetArgument(t, 1);
                                              t = w_164;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = v_164;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = w_164;
                                                    }
                                                  else
                                                    {
                                                      t = v_164;
                                                    }
                                                }
                                              else
                                                {
                                                  t = v_164;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = w_164;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  v_164 = ATgetArgument(t, 0);
                                                  t = v_164;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_m_20;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      v_164 = ATgetArgument(t, 0);
                                                      w_164 = ATgetArgument(t, 1);
                                                      x_164 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = x_164;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, v_164, w_164);
                                                }
                                            }
                                        }
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
  ATerm e_166 = NULL,g_166 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      g_166 = ATgetArgument(t, 0);
      t = g_166;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_y_19;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          g_166 = ATgetArgument(t, 0);
          t = g_166;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_m_20;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              g_166 = ATgetArgument(t, 0);
              e_166 = ATgetArgument(t, 1);
              t = e_166;
              if(match_cons(t, sym_Id_0))
                {
                  t = g_166;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = e_166;
                    }
                  else
                    {
                      t = g_166;
                    }
                }
              else
                {
                  t = g_166;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = e_166;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  g_166 = ATgetArgument(t, 0);
                  e_166 = ATgetArgument(t, 1);
                  t = g_166;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_y_19;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      g_166 = ATgetArgument(t, 0);
                      e_166 = ATgetArgument(t, 1);
                      t = e_166;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_y_19;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          g_166 = ATgetArgument(t, 0);
                          e_166 = ATgetArgument(t, 1);
                          t = e_166;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_y_19;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              g_166 = ATgetArgument(t, 0);
                              t = g_166;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_y_19;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  g_166 = ATgetArgument(t, 0);
                                  t = g_166;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_y_19;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      g_166 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = g_166;
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
                                int e_63 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm v_166 = NULL,w_166 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        v_166 = ATgetArgument(t, 0);
                                        w_166 = ATgetArgument(t, 1);
                                        t = v_166;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = w_166;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            v_166 = ATgetArgument(t, 0);
                                            w_166 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = v_166;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = w_166;
                                      }
                                    LocalPopChoice(e_63);
                                  }
                                else
                                  {
                                    t = c_63;
                                    {
                                      ATerm f_63 = t;
                                      int g_63 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(g_63);
                                        }
                                      else
                                        {
                                          t = f_63;
                                          {
                                            ATerm j_63 = t;
                                            int l_63 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(l_63);
                                              }
                                            else
                                              {
                                                t = j_63;
                                                {
                                                  ATerm o_63 = t;
                                                  int s_63 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(s_63);
                                                    }
                                                  else
                                                    {
                                                      t = o_63;
                                                      {
                                                        ATerm u_63 = t;
                                                        int z_63 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(z_63);
                                                          }
                                                        else
                                                          {
                                                            t = u_63;
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
                                                                                      ATerm z_166 = NULL,a_167 = NULL,b_167 = NULL,c_167 = NULL;
                                                                                      a_167 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          b_167 = ATgetArgument(t, 0);
                                                                                          c_167 = ATgetArgument(t, 1);
                                                                                          t = b_167;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              z_166 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = a_167;
                                                                                          t = z_13(z_166, c_167, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              b_167 = ATgetArgument(t, 0);
                                                                                              c_167 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = b_167;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = c_167;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2_0 (ATerm p_148 (ATerm), ATerm q_148 (ATerm), ATerm t)
{
  static ATerm g_167 (ATerm t);
  static ATerm g_167 (ATerm t)
  {
    ATerm t_64 = t;
    int w_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_148(t);
        t = g_167(t);
        LocalPopChoice(w_64);
      }
    else
      {
        t = t_64;
        t = q_148(t);
      }
    return(t);
  }
  t = g_167(t);
  return(t);
}
ATerm downup_1_0 (ATerm r_142 (ATerm), ATerm t)
{
  t = r_142(t);
  {
    static ATerm x_12 (ATerm t);
    static ATerm x_12 (ATerm t)
    {
      t = downup_1_0(r_142, t);
      return(t);
    }
    t = SRTS_all(x_12, t);
  }
  t = r_142(t);
  return(t);
}
static ATerm y_12 (ATerm t)
{
  t = downup_1_0(c_13, t);
  {
    ATerm x_64 = t;
    int a_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = inlineable_0_0(t);
        t = AddSDef_0_0(t);
        LocalPopChoice(a_65);
      }
    else
      {
        t = x_64;
      }
  }
  return(t);
}
static ATerm c_13 (ATerm t)
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
  t = map_1_0(y_12, t);
  t = map_1_0(e_13, t);
  return(t);
}
static ATerm f_15 (ATerm m_75, ATerm n_75, ATerm t)
{
  ATerm p_167 = NULL;
  t = SSL_fputc(m_75, n_75);
  p_167 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_167);
  return(t);
}
static ATerm g_15 (ATerm l_35, ATerm m_35, ATerm t)
{
  ATerm q_167 = NULL;
  t = SSL_write_term_to_stream_text(l_35, m_35);
  q_167 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_167);
  return(t);
}
static ATerm i_15 (ATerm e_150 (ATerm), ATerm z_279, ATerm r_35, ATerm t)
{
  ATerm r_167 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_279, term_f_65);
  t = m_15(t);
  r_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_167, r_35);
  t = e_150(t);
  t = fclose_0_0(t);
  t = r_35;
  return(t);
}
static ATerm h_15 (ATerm h_35, ATerm i_35, ATerm t)
{
  ATerm s_167 = NULL;
  t = SSL_write_term_to_stream_baf(h_35, i_35);
  s_167 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_167);
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm z_167 = NULL,a_168 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_65 = ATgetArgument(t, 0);
      if(match_cons(g_65, sym_Stream_1))
        {
          z_167 = ATgetArgument(g_65, 0);
        }
      else
        _fail(t);
      a_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_15(z_167, a_168, t);
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm b_168 = NULL,c_168 = NULL,d_168 = NULL,e_168 = NULL,f_168 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_65 = ATgetArgument(t, 0);
      if(match_cons(i_65, sym_Stream_1))
        {
          e_168 = ATgetArgument(i_65, 0);
        }
      else
        _fail(t);
      f_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_15(e_168, f_168, t);
  b_168 = t;
  t = term_l_65;
  c_168 = t;
  t = b_168;
  if(match_cons(t, sym_Stream_1))
    {
      d_168 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_65, b_168);
  t = f_15(c_168, d_168, t);
  return(t);
}
ATerm output_1_0 (ATerm m_174 (ATerm), ATerm t)
{
  ATerm t_167 = NULL,u_167 = NULL;
  t = m_174(t);
  u_167 = t;
  {
    ATerm n_65 = t;
    int o_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_167 = NULL,w_167 = NULL;
        t = term_p_65;
        v_167 = t;
        t = term_q_65;
        w_167 = t;
        t = term_r_65;
        t = t_15(v_167, w_167, t);
        LocalPopChoice(o_65);
      }
    else
      {
        t = n_65;
        t = term_t_65;
      }
  }
  t_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_167, u_167);
  {
    ATerm v_65 = t;
    int x_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_167 = NULL,y_167 = NULL;
        t = term_p_65;
        x_167 = t;
        t = term_y_65;
        y_167 = t;
        t = term_z_65;
        t = t_15(x_167, y_167, t);
        t = (ATerm) ATmakeAppl(sym__2, t_167, u_167);
        LocalPopChoice(x_65);
        if(match_cons(t, sym__2))
          {
            ATerm c_66 = ATgetArgument(t, 0);
            ATerm e_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_15(f_13, t_167, u_167, t);
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
        t = i_15(h_13, t_167, u_167, t);
      }
  }
  return(t);
}
static ATerm t_168 (ATerm n_168, ATerm t)
{
  t = SSL_fclose(n_168);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_168 = NULL,r_168 = NULL;
  r_168 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_168 = ATgetArgument(t, 0);
      {
        ATerm n_66 = t;
        int o_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_168);
            LocalPopChoice(o_66);
          }
        else
          {
            t = n_66;
            t = t_168(r_168, t);
          }
      }
    }
  else
    {
      t = t_168(r_168, t);
    }
  return(t);
}
static ATerm j_15 (ATerm n_35, ATerm t)
{
  t = SSL_read_term_from_stream(n_35);
  return(t);
}
static ATerm k_15 (ATerm s_73, ATerm t_73, ATerm t)
{
  t = SSL_strcat(s_73, t_73);
  return(t);
}
static ATerm l_15 (ATerm o_75, ATerm p_75, ATerm t)
{
  ATerm u_168 = NULL;
  t = SSL_fopen(o_75, p_75);
  u_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_168);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_168 = NULL;
  t = SSL_stdin_stream();
  v_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_168);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_168 = NULL;
  t = SSL_stdout_stream();
  w_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_168);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_168 = NULL;
  t = SSL_stderr_stream();
  x_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_168);
  return(t);
}
static ATerm e_170 (ATerm d_169, ATerm t)
{
  ATerm e_169 = NULL;
  t = SSL_explode_term(d_169);
  if(match_cons(t, sym__2))
    {
      ATerm t_66 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_66) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_66 = ATgetArgument(t, 1);
        if(((ATgetType(u_66) == AT_LIST) && !(ATisEmpty(u_66))))
          {
            e_169 = ATgetFirst((ATermList) u_66);
            {
              ATerm w_66 = (ATerm) ATgetNext((ATermList) u_66);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_169;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_169;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_169;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_169;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm f_170 (ATerm h_169, ATerm i_169, ATerm j_169, ATerm t)
{
  ATerm k_169 = NULL,l_169 = NULL,m_169 = NULL,p_169 = NULL,l_14 = NULL;
  t = SSLgetAnnotations(j_169);
  m_169 = t;
  t = h_169;
  if(match_cons(t, sym_Path_1))
    {
      p_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_169, i_169);
  l_14 = t;
  t = SSLsetAnnotations(l_14, m_169);
  if(match_cons(t, sym__2))
    {
      k_169 = ATgetArgument(t, 0);
      l_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_15(k_169, l_169, t);
  return(t);
}
static ATerm g_170 (ATerm r_169, ATerm s_169, ATerm t_169, ATerm t)
{
  ATerm u_169 = NULL,v_169 = NULL,w_169 = NULL,z_169 = NULL,m_14 = NULL;
  t = SSLgetAnnotations(t_169);
  w_169 = t;
  t = SSL_is_string(r_169);
  z_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_169, s_169);
  m_14 = t;
  t = SSLsetAnnotations(m_14, w_169);
  if(match_cons(t, sym__2))
    {
      u_169 = ATgetArgument(t, 0);
      v_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_15(u_169, v_169, t);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm b_170 = NULL,c_170 = NULL,d_170 = NULL;
  b_170 = t;
  if(match_cons(t, sym__2))
    {
      c_170 = ATgetArgument(t, 0);
      d_170 = ATgetArgument(t, 1);
      {
        ATerm y_66 = t;
        int a_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_170(b_170, t);
            LocalPopChoice(a_67);
          }
        else
          {
            t = y_66;
            {
              ATerm b_67 = t;
              int c_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_170(c_170, d_170, b_170, t);
                  LocalPopChoice(c_67);
                }
              else
                {
                  t = b_67;
                  t = g_170(c_170, d_170, b_170, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_170(b_170, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_170 = NULL,j_170 = NULL,k_170 = NULL,p_170 = NULL;
  p_170 = t;
  {
    ATerm h_67 = t;
    int j_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, p_170, term_m_67);
        t = m_15(t);
        LocalPopChoice(j_67);
      }
    else
      {
        t = h_67;
        {
          ATerm h_83 = NULL,i_83 = NULL;
          t = term_s_67;
          i_83 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_67, p_170);
          t = k_15(i_83, p_170, t);
          h_83 = t;
          t = SSL_perror(h_83);
          _fail(t);
        }
      }
  }
  j_170 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_15(k_170, t);
  i_170 = t;
  t = j_170;
  t = fclose_0_0(t);
  t = i_170;
  return(t);
}
ATerm input_1_0 (ATerm n_174 (ATerm), ATerm t)
{
  ATerm u_67 = t;
  int v_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_170 = NULL,t_170 = NULL;
      t = term_p_65;
      s_170 = t;
      t = term_y_67;
      t_170 = t;
      t = term_z_67;
      t = t_15(s_170, t_170, t);
      LocalPopChoice(v_67);
    }
  else
    {
      t = u_67;
      t = term_a_68;
    }
  t = ReadFromFile_0_0(t);
  t = n_174(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm u_170 = NULL,v_170 = NULL;
  t = term_p_65;
  u_170 = t;
  t = term_b_68;
  v_170 = t;
  t = term_e_68;
  t = t_15(u_170, v_170, t);
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
ATerm map_1_0 (ATerm z_155 (ATerm), ATerm t)
{
  static ATerm s_171 (ATerm t);
  static ATerm s_171 (ATerm t)
  {
    ATerm p_171 = NULL,q_171 = NULL,r_171 = NULL;
    p_171 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_171;
      }
    else
      {
        ATerm q_83 = NULL,v_83 = NULL,y_83 = NULL,p_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_171 = ATgetFirst((ATermList) t);
            r_171 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_171);
        q_83 = t;
        t = q_171;
        t = z_155(t);
        v_83 = t;
        t = r_171;
        t = s_171(t);
        y_83 = t;
        t = (ATerm) ATinsert(CheckATermList(y_83), v_83);
        p_14 = t;
        t = SSLsetAnnotations(p_14, q_83);
      }
    return(t);
  }
  t = s_171(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm v_171 = NULL,w_171 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_171 = ATgetFirst((ATermList) t);
      w_171 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_172 = NULL,b_172 = NULL;
        static ATerm k_13 (ATerm t);
        static ATerm k_13 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_172)), not_null(b_172));
          return(t);
        }
        t = w_171;
        t = o_0(t);
        if(((a_172 != NULL) && (a_172 != t)))
          _fail(t);
        else
          a_172 = t;
        t = v_171;
        t = m_0(t);
        if(((b_172 != NULL) && (b_172 != t)))
          _fail(t);
        else
          b_172 = t;
        t = w_171;
        t = reverse_acc_2_0(m_0, k_13, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_l_68;
      t = o_0(t);
    }
  return(t);
}
static ATerm m_13 (ATerm t)
{
  ATerm k_172 = NULL,l_172 = NULL,m_172 = NULL,r_14 = NULL;
  m_172 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_172 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_172);
  k_172 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_172);
  r_14 = t;
  t = SSLsetAnnotations(r_14, k_172);
  return(t);
}
static ATerm p_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm q_172 = NULL;
  q_172 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_172), term_r_68);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm l_176 (ATerm), ATerm m_176 (ATerm), ATerm t)
{
  ATerm g_172 = NULL,h_172 = NULL;
  ATerm s_68 = t;
  int u_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_172 = NULL,j_172 = NULL;
      t = term_p_65;
      i_172 = t;
      t = term_b_68;
      j_172 = t;
      t = term_e_68;
      t = t_15(i_172, j_172, t);
      LocalPopChoice(u_68);
    }
  else
    {
      t = s_68;
      t = fetch_1_0(m_13, t);
    }
  {
    ATerm v_68 = t;
    int y_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_176(t);
        t = echo_0_0(t);
        LocalPopChoice(y_68);
      }
    else
      {
        t = v_68;
      }
  }
  t = term_z_68;
  t = echo_0_0(t);
  t = term_d_69;
  g_172 = t;
  t = term_f_69;
  h_172 = t;
  t = term_g_69;
  t = t_15(g_172, h_172, t);
  t = reverse_acc_2_0(_id, p_13, t);
  t = map_1_0(r_13, t);
  t = term_i_69;
  t = echo_0_0(t);
  {
    ATerm j_69 = t;
    int k_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_176(t);
        {
          ATerm l_69 = t;
          int o_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_172 = NULL;
              r_172 = t;
              t = SSL_is_string(r_172);
              t = r_172;
              LocalPopChoice(o_69);
              {
                ATerm s_172 = NULL;
                s_172 = t;
                t = (ATerm) ATinsert(ATempty, s_172);
              }
            }
          else
            {
              t = l_69;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(k_69);
      }
    else
      {
        t = j_69;
      }
  }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm z_172 = NULL,a_173 = NULL,b_173 = NULL,t_14 = NULL;
  b_173 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_173);
  z_172 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_173);
  t_14 = t;
  t = SSLsetAnnotations(t_14, z_172);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_172 = NULL;
  w_172 = t;
  {
    ATerm t_69 = t;
    int y_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_172 = NULL,y_172 = NULL;
        t = term_p_65;
        x_172 = t;
        t = term_b_68;
        y_172 = t;
        t = term_e_68;
        t = t_15(x_172, y_172, t);
        LocalPopChoice(y_69);
      }
    else
      {
        t = t_69;
        t = fetch_1_0(u_13, t);
      }
  }
  t = w_172;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm d_173 = NULL;
  d_173 = t;
  if(match_string(t, "-k"))
    {
      t = d_173;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_173;
    }
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm e_173 = NULL,f_173 = NULL,g_173 = NULL;
  e_173 = t;
  t = SSL_string_to_int(e_173);
  f_173 = t;
  t = term_d_70;
  g_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_70, f_173);
  t = w_15(g_173, f_173, t);
  t = e_173;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_g_70;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_13, a_14, b_14, t);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm i_173 = NULL;
  i_173 = t;
  if(match_string(t, "-S"))
    {
      t = i_173;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_173;
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm j_173 = NULL,k_173 = NULL;
  t = term_i_70;
  j_173 = t;
  t = term_w_57;
  k_173 = t;
  t = term_j_70;
  t = w_15(j_173, k_173, t);
  t = term_q_70;
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_r_70;
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
  ATerm l_173 = NULL,m_173 = NULL,n_173 = NULL;
  l_173 = t;
  t = SSL_string_to_int(l_173);
  m_173 = t;
  t = term_i_70;
  n_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_70, m_173);
  t = w_15(n_173, m_173, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_173);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  t = term_x_70;
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
  ATerm o_173 = NULL,p_173 = NULL;
  t = term_y_70;
  o_173 = t;
  t = term_l_68;
  p_173 = t;
  t = term_g_71;
  t = w_15(o_173, p_173, t);
  t = term_h_71;
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_j_71;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_71 = t;
  int l_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_14, e_14, g_14, t);
      LocalPopChoice(l_71);
    }
  else
    {
      t = k_71;
      {
        ATerm m_71 = t;
        int n_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_14, k_14, n_14, t);
            LocalPopChoice(n_71);
          }
        else
          {
            t = m_71;
            t = Option_3_0(o_14, q_14, s_14, t);
          }
      }
    }
  return(t);
}
static ATerm w_15 (ATerm r_83, ATerm s_83, ATerm t)
{
  ATerm q_173 = NULL,r_173 = NULL;
  t = term_p_65;
  q_173 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_65, r_83, s_83);
  t = lookup_table_0_1(q_173, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(r_83, s_83, r_173, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_65, r_83, s_83);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm v_173 = NULL,w_173 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_173 = NULL,y_173 = NULL,z_173 = NULL;
      t = term_l_68;
      t = f_0(t);
      x_173 = t;
      t = term_d_69;
      y_173 = t;
      t = term_f_69;
      z_173 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_69, term_f_69, x_173);
      t = u_15(y_173, z_173, x_173, t);
      _fail(t);
    }
  else
    {
      ATerm c_174 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_173 = ATgetFirst((ATermList) t);
          w_173 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_173;
      t = b_0(t);
      t = term_l_68;
      t = e_0(t);
      c_174 = t;
      t = (ATerm) ATinsert(CheckATermList(w_173), c_174);
    }
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm e_174 = NULL;
  e_174 = t;
  if(match_string(t, "-o"))
    {
      t = e_174;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_174;
    }
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm f_174 = NULL,l_174 = NULL;
  f_174 = t;
  t = term_q_65;
  l_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_65, f_174);
  t = w_15(l_174, f_174, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_174);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = term_p_71;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_14, x_14, y_14, t);
  return(t);
}
static ATerm u_15 (ATerm m_39, ATerm n_39, ATerm l_39, ATerm t)
{
  ATerm p_174 = NULL,q_174 = NULL,r_174 = NULL,s_174 = NULL,t_174 = NULL;
  p_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_39, n_39);
  {
    ATerm q_71 = t;
    int r_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_71 = ATgetArgument(t, 0);
            ATerm t_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_39, n_39);
        t = t_15(m_39, n_39, t);
        LocalPopChoice(r_71);
      }
    else
      {
        t = q_71;
        t = (ATerm) ATempty;
      }
  }
  q_174 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_39, n_39, (ATerm) ATinsert(CheckATermList(q_174), l_39));
  t = lookup_table_0_1(m_39, t);
  t_174 = t;
  t = (ATerm) ATinsert(CheckATermList(q_174), l_39);
  r_174 = t;
  t = t_174;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(n_39, r_174, s_174, t);
  t = p_174;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm a_175 = NULL,b_175 = NULL,c_175 = NULL,d_175 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_175 = NULL,f_175 = NULL,g_175 = NULL;
      t = term_l_68;
      t = k_0(t);
      e_175 = t;
      t = term_d_69;
      f_175 = t;
      t = term_f_69;
      g_175 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_69, term_f_69, e_175);
      t = u_15(f_175, g_175, e_175, t);
      _fail(t);
    }
  else
    {
      ATerm k_175 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_175 = ATgetFirst((ATermList) t);
          b_175 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_175;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_175 = ATgetFirst((ATermList) t);
          d_175 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_175;
      t = h_0(t);
      t = c_175;
      t = j_0(t);
      k_175 = t;
      t = (ATerm) ATinsert(CheckATermList(d_175), k_175);
    }
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm m_175 = NULL;
  m_175 = t;
  if(match_string(t, "-i"))
    {
      t = m_175;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_175;
    }
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm n_175 = NULL,o_175 = NULL;
  n_175 = t;
  t = term_y_67;
  o_175 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_67, n_175);
  t = w_15(o_175, n_175, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_175);
  return(t);
}
static ATerm z_15 (ATerm t)
{
  t = term_u_71;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_15, s_15, z_15, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_175 = NULL,q_175 = NULL,r_175 = NULL,s_175 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_68;
  t = whoami_0_0(t);
  p_175 = t;
  t = term_v_71;
  r_175 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_71), p_175);
  s_175 = t;
  t = SSL_printnl(r_175, s_175);
  t = term_o_17;
  q_175 = t;
  t = SSL_exit(q_175);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_175 = NULL,u_175 = NULL;
  t = term_p_65;
  t_175 = t;
  t = term_b_68;
  u_175 = t;
  t = term_e_68;
  t = t_15(t_175, u_175, t);
  return(t);
}
static ATerm n_15 (ATerm u_36, ATerm v_36, ATerm t)
{
  ATerm x_71 = t;
  int y_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_36, v_36);
      LocalPopChoice(y_71);
    }
  else
    {
      t = x_71;
      t = SSL_addr(u_36, v_36);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_161 (ATerm), ATerm v_161 (ATerm), ATerm t)
{
  ATerm w_175 = NULL,x_175 = NULL,y_175 = NULL;
  w_175 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_175;
      t = u_161(t);
    }
  else
    {
      ATerm b_176 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_175 = ATgetFirst((ATermList) t);
          y_175 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_175;
      t = foldr_2_0(u_161, v_161, t);
      b_176 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_175, b_176);
      t = v_161(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm a_16 (ATerm t)
{
  t = term_w_57;
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm n_84 = NULL,o_84 = NULL;
  if(match_cons(t, sym__2))
    {
      n_84 = ATgetArgument(t, 0);
      o_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_15(n_84, o_84, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_176 = NULL,e_84 = NULL,h_84 = NULL;
  t = times_0_0(t);
  h_84 = t;
  t = SSL_explode_term(h_84);
  if(match_cons(t, sym__2))
    {
      ATerm z_71 = ATgetArgument(t, 0);
      e_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_84;
  t = foldr_2_0(a_16, e_16, t);
  i_176 = t;
  t = SSL_TicksToSeconds(i_176);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_176 = NULL,w_176 = NULL,x_176 = NULL;
  v_176 = t;
  if(match_cons(t, sym__2))
    {
      w_176 = ATgetArgument(t, 0);
      x_176 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_72 = t;
    int b_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_176;
        if((w_176 != t))
          {
            _fail(t);
          }
        t = v_176;
        LocalPopChoice(b_72);
      }
    else
      {
        t = a_72;
        t = (ATerm) ATmakeAppl(sym__2, w_176, x_176);
        {
          ATerm c_72 = t;
          int d_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_176, x_176);
              LocalPopChoice(d_72);
            }
          else
            {
              t = c_72;
              t = SSL_gtr(w_176, x_176);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_176, x_176);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_171 (ATerm), ATerm t)
{
  ATerm b_177 = NULL;
  b_177 = t;
  {
    ATerm f_72 = t;
    int h_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_177 = NULL,e_177 = NULL,f_177 = NULL;
        t = term_p_65;
        e_177 = t;
        t = term_i_70;
        f_177 = t;
        t = term_i_72;
        t = t_15(e_177, f_177, t);
        d_177 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_177, term_o_17);
        t = geq_0_0(t);
        t = b_177;
        t = n_171(t);
        LocalPopChoice(h_72);
      }
    else
      {
        t = f_72;
        t = b_177;
      }
  }
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm h_177 = NULL,i_177 = NULL,k_177 = NULL,l_177 = NULL;
  t = run_time_0_0(t);
  h_177 = t;
  t = term_l_68;
  t = whoami_0_0(t);
  i_177 = t;
  t = term_v_71;
  k_177 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_72), h_177), term_k_72), i_177);
  l_177 = t;
  t = SSL_printnl(k_177, l_177);
  t = (ATerm) ATmakeAppl(sym__2, term_v_71, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_72), h_177), term_k_72), i_177));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_16, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_177 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_57;
  m_177 = t;
  t = SSL_exit(m_177);
  return(t);
}
static ATerm x_15 (ATerm d_44, ATerm e_44, ATerm f_44, ATerm t)
{
  ATerm n_177 = NULL;
  t = SSL_hashtable_put(f_44, d_44, e_44);
  n_177 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_177);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_40, ATerm t)
{
  ATerm w_177 = NULL;
  t = table_hashtable_0_0(t);
  w_177 = t;
  {
    ATerm m_72 = t;
    int n_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_85 = NULL;
        t = w_177;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_85 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_15(y_40, a_85, t);
        LocalPopChoice(n_72);
      }
    else
      {
        t = m_72;
        {
          ATerm f_85 = NULL;
          t = y_40;
          t = table_create_0_0(t);
          t = w_177;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_85 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_15(y_40, f_85, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm z_177 = NULL;
  t = SSL_hashtable_create(o_44, p_44);
  z_177 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_177);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm a_178 = NULL,b_178 = NULL,c_178 = NULL,e_178 = NULL,f_178 = NULL;
  a_178 = t;
  t = term_o_72;
  e_178 = t;
  t = term_p_72;
  f_178 = t;
  t = a_178;
  t = new_hashtable_0_2(e_178, f_178, t);
  b_178 = t;
  t = a_178;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(a_178, b_178, c_178, t);
  t = a_178;
  return(t);
}
static ATerm q_15 (ATerm k_44, ATerm m_44, ATerm t)
{
  ATerm g_178 = NULL;
  t = SSL_hashtable_remove(m_44, k_44);
  g_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_178);
  return(t);
}
static ATerm r_15 (ATerm r_44, ATerm t)
{
  ATerm h_178 = NULL;
  t = SSL_hashtable_destroy(r_44);
  h_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_178);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_178 = NULL;
  t = SSL_table_hashtable();
  i_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_178);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_178 = NULL,k_178 = NULL,l_178 = NULL,m_178 = NULL;
  j_178 = t;
  t = table_hashtable_0_0(t);
  k_178 = t;
  t = lookup_table_0_1(j_178, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_15(m_178, t);
  t = k_178;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_15(j_178, l_178, t);
  t = j_178;
  return(t);
}
ATerm fetch_1_0 (ATerm h_156 (ATerm), ATerm t)
{
  static ATerm j_179 (ATerm t);
  static ATerm j_179 (ATerm t)
  {
    ATerm g_179 = NULL,h_179 = NULL,i_179 = NULL;
    g_179 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_179 = ATgetFirst((ATermList) t);
        i_179 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_72 = t;
      int r_72 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_85 = NULL,n_85 = NULL,v_14 = NULL;
          t = SSLgetAnnotations(g_179);
          k_85 = t;
          t = h_179;
          t = h_156(t);
          n_85 = t;
          t = (ATerm) ATinsert(CheckATermList(i_179), n_85);
          v_14 = t;
          t = SSLsetAnnotations(v_14, k_85);
          LocalPopChoice(r_72);
        }
      else
        {
          t = q_72;
          {
            ATerm v_85 = NULL,y_85 = NULL,w_14 = NULL;
            t = SSLgetAnnotations(g_179);
            v_85 = t;
            t = i_179;
            t = j_179(t);
            y_85 = t;
            t = (ATerm) ATinsert(CheckATermList(y_85), h_179);
            w_14 = t;
            t = SSLsetAnnotations(w_14, v_85);
          }
        }
    }
    return(t);
  }
  t = j_179(t);
  return(t);
}
static ATerm y_15 (ATerm i_44, ATerm j_44, ATerm t)
{
  t = SSL_hashtable_get(j_44, i_44);
  return(t);
}
static ATerm t_15 (ATerm f_41, ATerm g_41, ATerm t)
{
  ATerm m_179 = NULL;
  t = lookup_table_0_1(f_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_15(g_41, m_179, t);
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
  ATerm o_179 = NULL,p_179 = NULL;
  t = term_s_72;
  o_179 = t;
  t = term_l_68;
  p_179 = t;
  t = term_t_72;
  t = w_15(o_179, p_179, t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  t = term_u_72;
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
  ATerm q_179 = NULL,r_179 = NULL,s_179 = NULL,t_179 = NULL;
  t = term_s_72;
  s_179 = t;
  t = term_l_68;
  t_179 = t;
  t = term_t_72;
  t = w_15(s_179, t_179, t);
  t = term_v_72;
  q_179 = t;
  t = term_l_68;
  r_179 = t;
  t = term_w_72;
  t = w_15(q_179, r_179, t);
  t = term_x_72;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = term_y_72;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_72 = t;
  int a_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_16, h_16, i_16, t);
      LocalPopChoice(a_73);
    }
  else
    {
      t = z_72;
      t = Option_3_0(l_16, m_16, n_16, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_115 (ATerm), ATerm a_116 (ATerm), ATerm t)
{
  ATerm u_179 = NULL,v_179 = NULL,w_179 = NULL,x_179 = NULL,y_179 = NULL,z_179 = NULL,z_14 = NULL;
  z_179 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_179 = ATgetFirst((ATermList) t);
      w_179 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_179);
  u_179 = t;
  t = v_179;
  t = z_115(t);
  x_179 = t;
  t = w_179;
  t = a_116(t);
  y_179 = t;
  t = (ATerm) ATinsert(CheckATermList(y_179), x_179);
  z_14 = t;
  t = SSLsetAnnotations(z_14, u_179);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_176 (ATerm), ATerm t)
{
  ATerm e_180 = NULL,f_180 = NULL,g_180 = NULL,h_180 = NULL,j_180 = NULL,k_180 = NULL,b_15 = NULL;
  e_180 = t;
  {
    ATerm b_73 = t;
    int c_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_73;
        t = g_176(t);
        LocalPopChoice(c_73);
      }
    else
      {
        t = b_73;
      }
  }
  t = e_180;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_180 = ATgetFirst((ATermList) t);
      h_180 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_180);
  f_180 = t;
  t = term_b_68;
  k_180 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_68, g_180);
  t = w_15(k_180, g_180, t);
  t = h_180;
  {
    static ATerm u_180 (ATerm t);
    static ATerm u_180 (ATerm t)
    {
      ATerm e_73 = t;
      int f_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_73 = t;
          int h_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_180 = NULL;
              n_180 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_180;
              LocalPopChoice(h_73);
            }
          else
            {
              t = g_73;
              t = g_176(t);
              t = Cons_2_0(_id, u_180, t);
            }
          LocalPopChoice(f_73);
        }
      else
        {
          t = e_73;
          {
            ATerm q_180 = NULL,r_180 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_180 = ATgetFirst((ATermList) t);
                r_180 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_180), (ATerm) ATmakeAppl(sym_Undefined_1, q_180));
          }
        }
      return(t);
    }
    t = u_180(t);
  }
  j_180 = t;
  t = (ATerm) ATinsert(CheckATermList(j_180), (ATerm) ATmakeAppl(sym_Program_1, g_180));
  b_15 = t;
  t = SSLsetAnnotations(b_15, f_180);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm h_181 = NULL;
  h_181 = t;
  if(match_string(t, "--help"))
    {
      t = h_181;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_181;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_181;
        }
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm i_181 = NULL,j_181 = NULL;
  t = term_i_73;
  i_181 = t;
  t = term_l_68;
  j_181 = t;
  t = term_j_73;
  t = w_15(i_181, j_181, t);
  t = term_k_73;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = term_l_73;
  return(t);
}
static ATerm s_16 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm d_176 (ATerm), ATerm e_176 (ATerm), ATerm f_176 (ATerm), ATerm t)
{
  ATerm z_180 = NULL,a_181 = NULL,b_181 = NULL,c_181 = NULL,d_181 = NULL,e_181 = NULL,f_181 = NULL,g_181 = NULL;
  b_181 = t;
  t = term_d_69;
  c_181 = t;
  t = term_m_73;
  t = lookup_table_0_1(c_181, t);
  g_181 = t;
  t = term_f_69;
  d_181 = t;
  t = (ATerm) ATempty;
  e_181 = t;
  t = g_181;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(d_181, e_181, f_181, t);
  t = b_181;
  {
    static ATerm o_16 (ATerm t);
    static ATerm o_16 (ATerm t)
    {
      ATerm n_73 = t;
      int o_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_176(t);
          LocalPopChoice(o_73);
        }
      else
        {
          t = n_73;
          {
            ATerm p_73 = t;
            int r_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_16, q_16, r_16, t);
                LocalPopChoice(r_73);
              }
            else
              {
                t = p_73;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_16, t);
  }
  {
    ATerm u_73 = t;
    int v_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_181 = NULL;
        u_181 = t;
        {
          ATerm w_73 = t;
          int x_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_86 = NULL;
              t = u_181;
              {
                ATerm y_73 = t;
                int z_73 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_86 = NULL,h_86 = NULL;
                    t = term_p_65;
                    g_86 = t;
                    t = term_i_73;
                    h_86 = t;
                    t = term_a_74;
                    t = t_15(g_86, h_86, t);
                    LocalPopChoice(z_73);
                  }
                else
                  {
                    t = y_73;
                    t = fetch_1_0(s_16, t);
                  }
              }
              t = u_181;
              t = e_176(t);
              t = term_w_57;
              f_86 = t;
              t = SSL_exit(f_86);
              LocalPopChoice(x_73);
            }
          else
            {
              t = w_73;
              {
                ATerm l_86 = NULL,m_86 = NULL,n_86 = NULL;
                t = term_p_65;
                m_86 = t;
                t = term_s_72;
                n_86 = t;
                t = term_b_74;
                t = t_15(m_86, n_86, t);
                t = u_181;
                t = f_176(t);
                t = term_w_57;
                l_86 = t;
                t = SSL_exit(l_86);
              }
            }
        }
        LocalPopChoice(v_73);
      }
    else
      {
        t = u_73;
        {
          ATerm c_74 = t;
          int d_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_181 = NULL,w_181 = NULL,x_181 = NULL;
              static ATerm t_16 (ATerm t);
              static ATerm t_16 (ATerm t)
              {
                ATerm y_181 = NULL,z_181 = NULL,a_182 = NULL,v_15 = NULL;
                a_182 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_181 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_182);
                y_181 = t;
                t = z_181;
                if(((z_180 != NULL) && (z_180 != t)))
                  _fail(t);
                else
                  z_180 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_181);
                v_15 = t;
                t = SSLsetAnnotations(v_15, y_181);
                return(t);
              }
              t = fetch_1_0(t_16, t);
              t = term_v_71;
              w_181 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_180)), term_e_74);
              x_181 = t;
              t = SSL_printnl(w_181, x_181);
              t = (ATerm) ATmakeAppl(sym__2, term_v_71, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_180)), term_e_74));
              t = e_176(t);
              t = term_o_17;
              v_181 = t;
              t = SSL_exit(v_181);
              LocalPopChoice(d_74);
            }
          else
            {
              t = c_74;
            }
        }
      }
  }
  a_181 = t;
  t = term_d_69;
  t = table_destroy_0_0(t);
  t = a_181;
  return(t);
}
ATerm option_wrap_5_0 (ATerm g_174 (ATerm), ATerm h_174 (ATerm), ATerm i_174 (ATerm), ATerm j_174 (ATerm), ATerm k_174 (ATerm), ATerm t)
{
  ATerm f_182 = NULL,g_182 = NULL,h_182 = NULL,i_182 = NULL,j_182 = NULL;
  t = parse_options_3_0(g_174, h_174, i_174, t);
  f_182 = t;
  t = term_f_74;
  t = table_create_0_0(t);
  t = term_f_74;
  g_182 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_f_74, term_h_74, f_182);
  t = lookup_table_0_1(g_182, t);
  j_182 = t;
  t = term_h_74;
  h_182 = t;
  t = j_182;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_15(h_182, f_182, i_182, t);
  t = f_182;
  t = j_174(t);
  {
    ATerm i_74 = t;
    int j_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_174(t);
        t = report_success_0_0(t);
        LocalPopChoice(j_74);
      }
    else
      {
        t = i_74;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm k_74 = t;
  int l_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
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
                  t = Option_3_0(y_16, z_16, a_17, t);
                  LocalPopChoice(p_74);
                }
              else
                {
                  t = o_74;
                  {
                    ATerm r_74 = t;
                    int s_74 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(s_74);
                      }
                    else
                      {
                        t = r_74;
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
  ATerm l_182 = NULL,m_182 = NULL;
  t = term_y_65;
  l_182 = t;
  t = term_l_68;
  m_182 = t;
  t = term_v_74;
  t = w_15(l_182, m_182, t);
  t = term_w_74;
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = term_x_74;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = output_1_0(d_17, t);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm o_182 = NULL,p_182 = NULL,q_182 = NULL,r_182 = NULL,s_182 = NULL,t_182 = NULL,u_182 = NULL,v_182 = NULL,w_182 = NULL,x_182 = NULL,y_182 = NULL,z_182 = NULL,a_183 = NULL,b_183 = NULL,c_183 = NULL,w_20 = NULL,m_18 = NULL,j_18 = NULL,j_16 = NULL;
  c_183 = t;
  if(match_cons(t, sym_Specification_1))
    {
      p_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_183);
  o_182 = t;
  t = p_182;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_182 = ATgetFirst((ATermList) t);
      s_182 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_182);
  q_182 = t;
  t = s_182;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_182 = ATgetFirst((ATermList) t);
      w_182 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_182);
  u_182 = t;
  t = v_182;
  if(match_cons(t, sym_Strategies_1))
    {
      z_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_182);
  y_182 = t;
  t = z_182;
  t = inline_sdefs_0_0(t);
  a_183 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_183);
  j_16 = t;
  t = SSLsetAnnotations(j_16, y_182);
  b_183 = t;
  t = w_182;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_182), b_183);
  j_18 = t;
  t = SSLsetAnnotations(j_18, u_182);
  x_182 = t;
  t = (ATerm) ATinsert(CheckATermList(x_182), r_182);
  m_18 = t;
  t = SSLsetAnnotations(m_18, q_182);
  t_182 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_182);
  w_20 = t;
  t = SSLsetAnnotations(w_20, o_182);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(u_16, default_system_usage_0_0, default_system_about_0_0, _id, v_16, t);
  return(t);
}

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
static Symbol sym_Signature_1;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_Module_2;
static Symbol sym_Overlay_3;
static Symbol sym_OverlayNoArgs_2;
static Symbol sym_Con4_4;
static Symbol sym_Con3_3;
static Symbol sym_Con_3;
static Symbol sym_Con1_2;
static Symbol sym_ListTail_2;
static Symbol sym_List_1;
static Symbol sym_Tuple_1;
static Symbol sym_As_2;
static Symbol sym_RootApp_1;
static Symbol sym_App_2;
static Symbol sym_Anno_2;
static Symbol sym_Explode_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Char_1;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_StrategyCurly_1;
static Symbol sym_SVar_1;
static Symbol sym_ExtendOverrideDynamicRules_1;
static Symbol sym_ExtendDynamicRules_1;
static Symbol sym_OverrideDynamicRules_1;
static Symbol sym_GenDynRules_1;
static Symbol sym_AM_2;
static Symbol sym_RChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_SRule_1;
static Symbol sym_LRule_1;
static Symbol sym_CallNoArgs_1;
static Symbol sym_ExplodeCong_2;
static Symbol sym_ListCong_2;
static Symbol sym_ListCongNoTail_1;
static Symbol sym_ModCong_2;
static Symbol sym_ModCongNoArgs_1;
static Symbol sym_TupleCong_2;
static Symbol sym_EmptyTupleCong_0;
static Symbol sym_AnnoCong_2;
static Symbol sym_CharCong_1;
static Symbol sym_RealCong_1;
static Symbol sym_IntCong_1;
static Symbol sym_StrCong_1;
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
static Symbol sym_Call_2;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_ParenStrat_1;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_SDefNoArgs_2;
static Symbol sym_Sort_2;
static Symbol sym_SortNoArgs_1;
static Symbol sym_StratRule_3;
static Symbol sym_StratRuleNoCond_2;
static Symbol sym_Rule_3;
static Symbol sym_RuleNoCond_2;
static Symbol sym_SRDefT_4;
static Symbol sym_SRDef_3;
static Symbol sym_SRDefNoArgs_2;
static Symbol sym_RDefT_4;
static Symbol sym_RDef_3;
static Symbol sym_RDefNoArgs_2;
static Symbol sym_Some_1;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
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
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
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
static Symbol sym_Signature_1;
static Symbol sym_Strategies_1;
static Symbol sym_Specification_1;
static Symbol sym_Module_2;
static Symbol sym_Overlay_3;
static Symbol sym_OverlayNoArgs_2;
static Symbol sym_Con4_4;
static Symbol sym_Con3_3;
static Symbol sym_Con_3;
static Symbol sym_Con1_2;
static Symbol sym_ListTail_2;
static Symbol sym_List_1;
static Symbol sym_Tuple_1;
static Symbol sym_As_2;
static Symbol sym_RootApp_1;
static Symbol sym_App_2;
static Symbol sym_Anno_2;
static Symbol sym_Explode_2;
static Symbol sym_Op_2;
static Symbol sym_Wld_0;
static Symbol sym_Char_1;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_StrategyCurly_1;
static Symbol sym_SVar_1;
static Symbol sym_ExtendOverrideDynamicRules_1;
static Symbol sym_ExtendDynamicRules_1;
static Symbol sym_OverrideDynamicRules_1;
static Symbol sym_GenDynRules_1;
static Symbol sym_AM_2;
static Symbol sym_RChoice_2;
static Symbol sym_Choice_2;
static Symbol sym_SRule_1;
static Symbol sym_LRule_1;
static Symbol sym_CallNoArgs_1;
static Symbol sym_ExplodeCong_2;
static Symbol sym_ListCong_2;
static Symbol sym_ListCongNoTail_1;
static Symbol sym_ModCong_2;
static Symbol sym_ModCongNoArgs_1;
static Symbol sym_TupleCong_2;
static Symbol sym_EmptyTupleCong_0;
static Symbol sym_AnnoCong_2;
static Symbol sym_CharCong_1;
static Symbol sym_RealCong_1;
static Symbol sym_IntCong_1;
static Symbol sym_StrCong_1;
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
static Symbol sym_Call_2;
static Symbol sym_Let_2;
static Symbol sym_Id_0;
static Symbol sym_Fail_0;
static Symbol sym_ParenStrat_1;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_SDefNoArgs_2;
static Symbol sym_Sort_2;
static Symbol sym_SortNoArgs_1;
static Symbol sym_StratRule_3;
static Symbol sym_StratRuleNoCond_2;
static Symbol sym_Rule_3;
static Symbol sym_RuleNoCond_2;
static Symbol sym_SRDefT_4;
static Symbol sym_SRDef_3;
static Symbol sym_SRDefNoArgs_2;
static Symbol sym_RDefT_4;
static Symbol sym_RDef_3;
static Symbol sym_RDefNoArgs_2;
static Symbol sym_Cong_2;
static Symbol sym_InfixApp_3;
static Symbol sym_MA_2;
static Symbol sym_BAM_3;
static Symbol sym_Seqs_1;
static Symbol sym_Choices_1;
static Symbol sym_LChoices_1;
static Symbol sym_Lets_2;
static Symbol sym_Anno_2;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_DynamicRules_1;
static Symbol sym_Con_3;
static Symbol sym_TupleCong_1;
static Symbol sym_TupleCong_0;
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
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Con4_4 = ATmakeSymbol("Con4", 4, ATfalse);
  ATprotectSymbol(sym_Con4_4);
  sym_Con3_3 = ATmakeSymbol("Con3", 3, ATfalse);
  ATprotectSymbol(sym_Con3_3);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Con1_2 = ATmakeSymbol("Con1", 2, ATfalse);
  ATprotectSymbol(sym_Con1_2);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
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
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
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
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_EmptyTupleCong_0 = ATmakeSymbol("EmptyTupleCong", 0, ATfalse);
  ATprotectSymbol(sym_EmptyTupleCong_0);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
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
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Con4_4 = ATmakeSymbol("Con4", 4, ATfalse);
  ATprotectSymbol(sym_Con4_4);
  sym_Con3_3 = ATmakeSymbol("Con3", 3, ATfalse);
  ATprotectSymbol(sym_Con3_3);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Con1_2 = ATmakeSymbol("Con1", 2, ATfalse);
  ATprotectSymbol(sym_Con1_2);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
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
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
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
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_EmptyTupleCong_0 = ATmakeSymbol("EmptyTupleCong", 0, ATfalse);
  ATprotectSymbol(sym_EmptyTupleCong_0);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
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
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
}
static ATerm term_y_77;
static ATerm term_n_77;
static ATerm term_j_77;
static ATerm term_c_77;
static ATerm term_a_77;
static ATerm term_x_75;
static ATerm term_w_75;
static ATerm term_v_75;
static ATerm term_q_75;
static ATerm term_p_75;
static ATerm term_a_75;
static ATerm term_z_74;
static ATerm term_y_74;
static ATerm term_x_74;
static ATerm term_w_74;
static ATerm term_l_74;
static ATerm term_b_74;
static ATerm term_a_74;
static ATerm term_z_73;
static ATerm term_y_73;
static ATerm term_x_73;
static ATerm term_w_73;
static ATerm term_v_73;
static ATerm term_o_73;
static ATerm term_n_73;
static ATerm term_j_73;
static ATerm term_i_73;
static ATerm term_v_72;
static ATerm term_u_72;
static ATerm term_s_72;
static ATerm term_n_72;
static ATerm term_z_71;
static ATerm term_y_71;
static ATerm term_x_71;
static ATerm term_w_71;
static ATerm term_t_71;
static ATerm term_s_71;
static ATerm term_q_71;
static ATerm term_p_71;
static ATerm term_o_71;
static ATerm term_n_71;
static ATerm term_m_71;
static ATerm term_j_71;
static ATerm term_g_71;
static ATerm term_c_71;
static ATerm term_w_70;
static ATerm term_h_70;
static ATerm term_o_69;
static ATerm term_n_69;
static ATerm term_g_69;
static ATerm term_f_69;
static ATerm term_e_69;
static ATerm term_d_69;
static ATerm term_c_69;
static ATerm term_x_68;
static ATerm term_v_68;
static ATerm term_w_67;
static ATerm term_v_67;
static ATerm term_j_67;
static ATerm term_g_67;
static ATerm term_f_67;
static ATerm term_z_66;
static ATerm term_i_66;
static ATerm term_h_66;
static ATerm term_d_66;
static ATerm term_b_66;
static ATerm term_a_66;
static ATerm term_u_65;
static ATerm term_x_44;
static ATerm term_z_42;
static ATerm term_y_42;
static ATerm term_o_42;
static ATerm term_l_42;
static ATerm term_g_42;
static ATerm term_i_41;
static ATerm term_g_41;
static ATerm term_e_41;
static ATerm term_z_40;
static ATerm term_t_40;
static ATerm term_c_40;
static ATerm term_b_40;
static ATerm term_a_40;
static ATerm term_z_39;
static ATerm term_v_39;
static ATerm term_t_39;
static ATerm term_o_39;
static ATerm term_n_39;
static ATerm term_z_37;
static ATerm term_y_37;
static ATerm term_i_37;
static ATerm term_h_37;
static ATerm term_d_37;
static ATerm term_c_37;
static ATerm term_z_36;
static ATerm term_y_36;
static ATerm term_v_36;
static ATerm term_u_36;
static ATerm term_t_36;
static ATerm term_s_36;
static ATerm term_x_35;
static ATerm term_v_35;
static ATerm term_y_34;
static ATerm term_j_33;
static ATerm term_i_33;
static ATerm term_f_33;
static ATerm term_d_33;
static ATerm term_c_33;
static ATerm term_b_33;
static ATerm term_x_32;
static ATerm term_w_32;
static ATerm term_v_32;
static ATerm term_u_32;
static ATerm term_t_32;
static ATerm term_r_32;
static ATerm term_q_32;
static ATerm term_l_32;
static ATerm term_q_28;
static ATerm term_i_28;
static ATerm term_u_27;
static ATerm term_g_27;
static ATerm term_e_27;
static ATerm term_b_27;
static ATerm term_a_27;
static ATerm term_z_26;
static ATerm term_x_26;
static ATerm term_n_26;
static ATerm term_k_26;
static ATerm term_j_26;
static ATerm term_p_25;
static ATerm term_o_25;
static ATerm term_n_25;
static ATerm term_l_25;
static ATerm term_k_25;
static ATerm term_g_25;
static ATerm term_f_25;
static ATerm term_d_25;
static ATerm term_c_25;
static ATerm term_p_24;
static ATerm term_n_24;
static ATerm term_l_24;
static ATerm term_i_24;
static ATerm term_f_24;
static ATerm term_b_24;
static ATerm term_a_24;
static ATerm term_y_23;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(sym__2, term_y_23, term_a_24);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_24);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(sym_Op_2, term_n_24, (ATerm) ATempty);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_25);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_24);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Call_2, term_f_25, (ATerm) ATempty);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_26);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Call_2, term_k_26, (ATerm) ATempty);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Call_2, term_l_24, (ATerm) ATempty);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_32);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_CallT_3, term_r_32, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(sym_Seq_2, term_v_32, term_w_32);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_u_32, term_x_32);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_t_32, term_b_33);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym__2, term_d_33, term_c_33);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_33);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_35);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym_Seq_2, term_u_32, term_w_32);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym_Seq_2, term_t_32, term_s_36);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym__2, term_u_36, term_t_36);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_36);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_37);
  ATprotect(&(term_n_39));
  term_n_39 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol("j_1", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_39);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol("l_1", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_39);
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_y_42));
  term_y_42 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_42);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_65));
  term_u_65 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_d_66));
  term_d_66 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_h_66));
  term_h_66 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_i_66));
  term_i_66 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_66);
  ATprotect(&(term_z_66));
  term_z_66 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_67));
  term_f_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(sym__2, term_y_23, term_f_67);
  ATprotect(&(term_j_67));
  term_j_67 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_67));
  term_v_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_67));
  term_w_67 = (ATerm) ATmakeAppl(sym__2, term_y_23, term_v_67);
  ATprotect(&(term_v_68));
  term_v_68 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_69));
  term_d_69 = (ATerm) ATmakeAppl(sym__2, term_y_23, term_c_69);
  ATprotect(&(term_e_69));
  term_e_69 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(sym__2, term_y_23, term_f_69);
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_69));
  term_o_69 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_70));
  term_h_70 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_70));
  term_w_70 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_71));
  term_c_71 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(sym__2, term_w_70, term_c_71);
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_71));
  term_n_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(sym__2, term_a_24, term_o_71);
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_71);
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_71));
  term_t_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_71));
  term_w_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_71));
  term_x_71 = (ATerm) ATmakeAppl(sym__2, term_w_71, term_n_69);
  ATprotect(&(term_y_71));
  term_y_71 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_72));
  term_s_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_72));
  term_u_72 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_72));
  term_v_72 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_73));
  term_i_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_73));
  term_w_73 = (ATerm) ATmakeAppl(sym__2, term_v_73, term_n_69);
  ATprotect(&(term_x_73));
  term_x_73 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_73));
  term_y_73 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_73));
  term_z_73 = (ATerm) ATmakeAppl(sym__2, term_y_73, term_n_69);
  ATprotect(&(term_a_74));
  term_a_74 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_74));
  term_b_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_74));
  term_w_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(sym__2, term_w_74, term_n_69);
  ATprotect(&(term_y_74));
  term_y_74 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_a_75));
  term_a_75 = (ATerm) ATmakeAppl(sym__3, term_w_70, term_c_71, (ATerm) ATempty);
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(sym__2, term_y_23, term_w_74);
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(sym__2, term_y_23, term_v_73);
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_77));
  term_a_77 = (ATerm) ATmakeAppl(sym__2, term_v_67, term_n_69);
  ATprotect(&(term_c_77));
  term_c_77 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_77));
  term_j_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_y_77));
  term_y_77 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm if_verbose2_1_0 (ATerm b_179 (ATerm), ATerm t);
static ATerm u_5 (ATerm s_1, ATerm t_1, ATerm t);
static ATerm v_5 (ATerm z_1, ATerm b_2, ATerm t);
static ATerm i_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm f_177 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm j_9 (ATerm n_105, ATerm o_105, ATerm p_105, ATerm t);
static ATerm b_19 (ATerm j_18, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm n_9 (ATerm a_101, ATerm b_101, ATerm c_101, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t);
static ATerm h_40 (ATerm l_39, ATerm m_39, ATerm t);
static ATerm i_40 (ATerm p_39, ATerm s_39, ATerm t);
ATerm Replace_0_0 (ATerm t);
static ATerm w_10 (ATerm f_46, ATerm g_46, ATerm t);
ATerm end_scope_1_0 (ATerm f_148 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_142 (ATerm), ATerm g_142 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm e_148 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm g_148 (ATerm), ATerm h_148 (ATerm), ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm x_10 (ATerm b_28, ATerm a_28, ATerm c_28, ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t);
ATerm fuse_with_bottomup_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm v_138 (ATerm), ATerm t);
ATerm propagate_mark_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm h_121 (ATerm), ATerm i_121 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
ATerm inline_rules_0_0 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm bottomup_to_var_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm seq_over_choice_0_0 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm e_11 (ATerm l_26, ATerm t);
ATerm alltd_1_0 (ATerm m_140 (ATerm), ATerm t);
static ATerm k_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm check_that_innermost_is_innermost_0_0 (ATerm t);
ATerm debug_1_0 (ATerm u_147 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm u_138 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm g_11 (ATerm m_83, ATerm l_83, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm p_7 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm y_139 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm v_7 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm h_146 (ATerm), ATerm i_146 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm w_138 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm m_156 (ATerm), ATerm n_156 (ATerm), ATerm o_156 (ATerm), ATerm p_156 (ATerm), ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm d_172 (ATerm), ATerm e_172 (ATerm), ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
ATerm spaste_1_0 (ATerm d_178 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm e_178 (ATerm), ATerm f_178 (ATerm), ATerm g_178 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm i_178 (ATerm), ATerm t);
static ATerm o_9 (ATerm t);
static ATerm r_9 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm q_12 (ATerm b_108, ATerm a_108, ATerm t);
ATerm SVar_1_0 (ATerm w_117 (ATerm), ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm k_178 (ATerm), ATerm l_178 (ATerm), ATerm m_178 (ATerm), ATerm n_178 (ATerm), ATerm o_178 (ATerm), ATerm p_178 (ATerm), ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm a_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm p_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
ATerm tpaste_1_0 (ATerm z_177 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm a_178 (ATerm), ATerm b_178 (ATerm), ATerm c_178 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm j_178 (ATerm), ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm t_12 (ATerm t_158 (ATerm), ATerm k_74, ATerm j_74, ATerm t);
ATerm foldr_3_0 (ATerm y_161 (ATerm), ATerm z_161 (ATerm), ATerm a_162 (ATerm), ATerm t);
static ATerm u_12 (ATerm w_158 (ATerm), ATerm x_158 (ATerm), ATerm o_74, ATerm n_74, ATerm t);
static ATerm v_12 (ATerm o_158 (ATerm), ATerm i_74, ATerm h_74, ATerm t);
static ATerm k_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm x_12 (ATerm d_922, ATerm i_922, ATerm z_96, ATerm t);
ATerm while_not_2_0 (ATerm y_146 (ATerm), ATerm z_146 (ATerm), ATerm t);
ATerm for_3_0 (ATerm b_147 (ATerm), ATerm c_147 (ATerm), ATerm d_147 (ATerm), ATerm t);
static ATerm o_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_160 (ATerm q_159, ATerm r_159, ATerm s_159, ATerm t);
static ATerm w_16 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
ATerm free_vars_3_0 (ATerm k_174 (ATerm), ATerm l_174 (ATerm), ATerm m_174 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm t_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm s_117 (ATerm), ATerm t);
static ATerm z_12 (ATerm f_173 (ATerm), ATerm g_173 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_95, ATerm f_95, ATerm e_95, ATerm t);
ATerm at_end_1_0 (ATerm z_154 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm o_164 (ATerm e_164, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm i_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm a_13 (ATerm z_172 (ATerm), ATerm a_173 (ATerm (ATerm), ATerm), ATerm y_94, ATerm b_95, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm g_164 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm u_172 (ATerm (ATerm), ATerm), ATerm v_172 (ATerm), ATerm w_172 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_172 (ATerm (ATerm), ATerm), ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm a_19 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm g_13 (ATerm o_46, ATerm p_46, ATerm t);
static ATerm c_19 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm i_19 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm k_19 (ATerm t);
static ATerm l_19 (ATerm t);
static ATerm m_19 (ATerm t);
ATerm InlineStrat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm o_19 (ATerm t);
static ATerm p_19 (ATerm t);
static ATerm q_19 (ATerm t);
ATerm check_that_try_is_try_0_0 (ATerm t);
ATerm check_library_definitions_0_0 (ATerm t);
static ATerm h_13 (ATerm i_148 (ATerm), ATerm u_44, ATerm s_44, ATerm t);
ATerm map_1_0 (ATerm k_154 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm t);
static ATerm j_13 (ATerm g_36, ATerm h_36, ATerm t);
static ATerm k_13 (ATerm x_41, ATerm y_41, ATerm t);
static ATerm m_13 (ATerm w_147 (ATerm), ATerm q_367, ATerm d_42, ATerm t);
static ATerm l_13 (ATerm t_41, ATerm u_41, ATerm t);
static ATerm r_19 (ATerm t);
static ATerm b_20 (ATerm t);
ATerm output_1_0 (ATerm a_169 (ATerm), ATerm t);
static ATerm u_173 (ATerm o_173, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_13 (ATerm z_41, ATerm t);
static ATerm o_13 (ATerm j_34, ATerm k_34, ATerm t);
static ATerm p_13 (ATerm i_36, ATerm j_36, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_175 (ATerm e_174, ATerm t);
static ATerm k_175 (ATerm i_174, ATerm j_174, ATerm o_174, ATerm t);
static ATerm l_175 (ATerm w_174, ATerm x_174, ATerm y_174, ATerm t);
static ATerm r_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm b_169 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm d_20 (ATerm t);
static ATerm e_20 (ATerm t);
static ATerm f_20 (ATerm t);
ATerm default_system_usage_2_0 (ATerm b_172 (ATerm), ATerm c_172 (ATerm), ATerm t);
static ATerm g_20 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm i_20 (ATerm t);
static ATerm j_20 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm m_20 (ATerm t);
static ATerm o_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm h_21 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_14 (ATerm k_93, ATerm l_93, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm j_21 (ATerm t);
static ATerm k_21 (ATerm t);
static ATerm l_21 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_13 (ATerm y_45, ATerm z_45, ATerm x_45, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm m_21 (ATerm t);
static ATerm n_21 (ATerm t);
static ATerm o_21 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_13 (ATerm g_43, ATerm h_43, ATerm t);
ATerm foldr_2_0 (ATerm w_161 (ATerm), ATerm x_161 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_21 (ATerm t);
static ATerm r_21 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_179 (ATerm), ATerm t);
static ATerm s_21 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_14 (ATerm e_51, ATerm f_51, ATerm g_51, ATerm t);
ATerm lookup_table_0_1 (ATerm y_47, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_51, ATerm n_51, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm v_13 (ATerm j_51, ATerm k_51, ATerm t);
static ATerm w_13 (ATerm o_51, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_154 (ATerm), ATerm t);
static ATerm d_14 (ATerm h_51, ATerm i_51, ATerm t);
static ATerm y_13 (ATerm i_48, ATerm j_48, ATerm t);
static ATerm t_21 (ATerm t);
static ATerm u_21 (ATerm t);
static ATerm v_21 (ATerm t);
static ATerm w_21 (ATerm t);
static ATerm x_21 (ATerm t);
static ATerm d_22 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm w_171 (ATerm), ATerm t);
static ATerm g_22 (ATerm t);
static ATerm h_22 (ATerm t);
static ATerm i_22 (ATerm t);
static ATerm j_22 (ATerm t);
ATerm parse_options_3_0 (ATerm t_171 (ATerm), ATerm u_171 (ATerm), ATerm v_171 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm u_168 (ATerm), ATerm v_168 (ATerm), ATerm w_168 (ATerm), ATerm x_168 (ATerm), ATerm y_168 (ATerm), ATerm t);
static ATerm l_22 (ATerm t);
static ATerm n_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm c_23 (ATerm t);
static ATerm f_23 (ATerm t);
static ATerm n_23 (ATerm t);
static ATerm o_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm v_23 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_179 (ATerm), ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL;
        t = term_y_23;
        u_0 = t;
        t = term_a_24;
        v_0 = t;
        t = term_b_24;
        t = y_13(u_0, v_0, t);
        t_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_0, term_f_24);
        t = geq_0_0(t);
        t = c_0;
        t = b_179(t);
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        t = c_0;
      }
  }
  return(t);
}
static ATerm u_5 (ATerm s_1, ATerm t_1, ATerm t)
{
  t = s_1;
  {
    ATerm h_24 = t;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL,y_0 = NULL;
        y_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_1 = ATgetFirst((ATermList) t);
            x_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_1);
        v_1 = t;
        t = x_1;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(x_1), w_1);
        y_0 = t;
        t = SSLsetAnnotations(y_0, v_1);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_i_24, s_1);
  return(t);
}
static ATerm v_5 (ATerm z_1, ATerm b_2, ATerm t)
{
  t = z_1;
  {
    ATerm k_24 = t;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL,z_0 = NULL;
        g_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_2 = ATgetFirst((ATermList) t);
            f_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_2);
        d_2 = t;
        t = f_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(f_2), e_2);
        z_0 = t;
        t = SSLsetAnnotations(z_0, d_2);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_l_24, z_1);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  t = term_p_24;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,a_0 = NULL;
  x_2 = t;
  t = SSL_explode_term(x_2);
  if(match_cons(t, sym__2))
    {
      ATerm q_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_24 = ATgetArgument(t, 1);
        if(((ATgetType(r_24) == AT_LIST) && !(ATisEmpty(r_24))))
          {
            y_2 = ATgetFirst((ATermList) r_24);
            {
              ATerm s_24 = (ATerm) ATgetNext((ATermList) r_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(x_2);
  if(match_cons(t, sym__2))
    {
      ATerm t_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_24 = ATgetArgument(t, 1);
        if(((ATgetType(u_24) == AT_LIST) && !(ATisEmpty(u_24))))
          {
            ATerm v_24 = ATgetFirst((ATermList) u_24);
            ATerm a_25 = (ATerm) ATgetNext((ATermList) u_24);
            if(((ATgetType(a_25) == AT_LIST) && !(ATisEmpty(a_25))))
              {
                a_0 = ATgetFirst((ATermList) a_25);
                {
                  ATerm b_25 = (ATerm) ATgetNext((ATermList) a_25);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, a_0), y_2));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm n_3 = NULL,q_3 = NULL;
  if(match_cons(t, sym__2))
    {
      n_3 = ATgetArgument(t, 0);
      q_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, q_3), n_3));
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_p_24;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, t_3), s_3));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm e_4 = NULL,f_4 = NULL;
  if(match_cons(t, sym__2))
    {
      e_4 = ATgetArgument(t, 0);
      f_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_d_25, (ATerm) ATinsert(ATinsert(ATempty, f_4), e_4));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm h_4 = NULL,i_4 = NULL;
  if(match_cons(t, sym__2))
    {
      h_4 = ATgetArgument(t, 0);
      i_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_d_25, (ATerm) ATinsert(ATinsert(ATempty, i_4), h_4));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,l_2 = NULL,n_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_Anno_2))
    {
      q_2 = ATgetArgument(t, 0);
      r_2 = ATgetArgument(t, 1);
      {
        ATerm v_2 = NULL;
        t = r_2;
        t = foldr_2_0(i_0, w_0, t);
        v_2 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, q_2, v_2);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          q_2 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, q_2, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              q_2 = ATgetArgument(t, 0);
              {
                ATerm d_1 = NULL;
                t = q_2;
                {
                  ATerm i_25 = t;
                  int j_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_k_25;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_l_25;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_n_25;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_o_25;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_p_25;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(j_25);
                    }
                  else
                    {
                      t = i_25;
                      {
                        ATerm f_1 = NULL;
                        t = SSL_explode_string(q_2);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm r_25 = ATgetFirst((ATermList) t);
                            if(((ATgetType(r_25) != AT_INT) || (ATgetInt((ATermInt) r_25) != 39)))
                              _fail(t);
                            {
                              ATerm s_25 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(s_25) == AT_LIST) && !(ATisEmpty(s_25))))
                                {
                                  f_1 = ATgetFirst((ATermList) s_25);
                                  {
                                    ATerm t_25 = (ATerm) ATgetNext((ATermList) s_25);
                                    if(((ATgetType(t_25) == AT_LIST) && !(ATisEmpty(t_25))))
                                      {
                                        ATerm x_25 = ATgetFirst((ATermList) t_25);
                                        if(((ATgetType(x_25) != AT_INT) || (ATgetInt((ATermInt) x_25) != 39)))
                                          _fail(t);
                                        {
                                          ATerm y_25 = (ATerm) ATgetNext((ATermList) t_25);
                                          if(((ATgetType(y_25) != AT_LIST) || !(ATisEmpty(y_25))))
                                            _fail(t);
                                        }
                                      }
                                    else
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = f_1;
                      }
                    }
                }
                d_1 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, d_1);
              }
            }
          else
            {
              ATerm a_26 = t;
              int c_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      q_2 = ATgetArgument(t, 0);
                      {
                        ATerm e_26 = ATgetArgument(t, 1);
                      }
                      n_2 = ATgetArgument(t, 2);
                      h_2 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_26);
                  t = (ATerm) ATmakeAppl(sym_Con_3, q_2, n_2, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_2), (ATerm) ATempty));
                }
              else
                {
                  t = a_26;
                  {
                    ATerm f_26 = t;
                    int g_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            q_2 = ATgetArgument(t, 0);
                            {
                              ATerm h_26 = ATgetArgument(t, 1);
                            }
                            n_2 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(g_26);
                        t = (ATerm) ATmakeAppl(sym_Con_3, q_2, n_2, term_n_26);
                      }
                    else
                      {
                        t = f_26;
                        if(match_cons(t, sym_Con1_2))
                          {
                            q_2 = ATgetArgument(t, 0);
                            r_2 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, q_2, r_2, term_n_26);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                q_2 = ATgetArgument(t, 0);
                                r_2 = ATgetArgument(t, 1);
                                {
                                  static ATerm x_0 (ATerm t);
                                  static ATerm x_0 (ATerm t)
                                  {
                                    t = r_2;
                                    return(t);
                                  }
                                  t = q_2;
                                  t = foldr_2_0(x_0, a_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    q_2 = ATgetArgument(t, 0);
                                    t = q_2;
                                    t = foldr_2_0(b_1, c_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        q_2 = ATgetArgument(t, 0);
                                        t = q_2;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            i_2 = ATgetFirst((ATermList) t);
                                            j_2 = (ATerm) ATgetNext((ATermList) t);
                                            t = j_2;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm p_26 = t;
                                                int q_26 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = u_5(q_2, p_2, t);
                                                    LocalPopChoice(q_26);
                                                  }
                                                else
                                                  {
                                                    t = p_26;
                                                    t = i_2;
                                                  }
                                              }
                                            else
                                              {
                                                t = u_5(q_2, p_2, t);
                                              }
                                          }
                                        else
                                          {
                                            t = u_5(q_2, p_2, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            q_2 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, q_2));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                q_2 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, q_2));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    q_2 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, q_2));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        q_2 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, q_2));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            q_2 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_2), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                q_2 = ATgetArgument(t, 0);
                                                                r_2 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_2), r_2);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    q_2 = ATgetArgument(t, 0);
                                                                    r_2 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm e_1 (ATerm t);
                                                                      static ATerm e_1 (ATerm t)
                                                                      {
                                                                        t = r_2;
                                                                        return(t);
                                                                      }
                                                                      t = q_2;
                                                                      t = foldr_2_0(e_1, g_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        q_2 = ATgetArgument(t, 0);
                                                                        t = q_2;
                                                                        t = foldr_2_0(h_1, i_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            q_2 = ATgetArgument(t, 0);
                                                                            r_2 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_l_24, (ATerm) ATinsert(CheckATermList(r_2), q_2));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                q_2 = ATgetArgument(t, 0);
                                                                                t = q_2;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    i_2 = ATgetFirst((ATermList) t);
                                                                                    j_2 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = j_2;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm r_26 = t;
                                                                                        int w_26 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = v_5(q_2, p_2, t);
                                                                                            LocalPopChoice(w_26);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = r_26;
                                                                                            t = i_2;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = v_5(q_2, p_2, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_5(q_2, p_2, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_x_26;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        q_2 = ATgetArgument(t, 0);
                                                                                        r_2 = ATgetArgument(t, 1);
                                                                                        t = r_2;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            l_2 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_a_27, (ATerm) ATinsert(ATinsert(ATempty, l_2), q_2));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            q_2 = ATgetArgument(t, 0);
                                                                                            t = q_2;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                q_2 = ATgetArgument(t, 0);
                                                                                                r_2 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, q_2, r_2, term_b_27);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    q_2 = ATgetArgument(t, 0);
                                                                                                    r_2 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, q_2, r_2, term_b_27);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        q_2 = ATgetArgument(t, 0);
                                                                                                        r_2 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, q_2, (ATerm)ATempty, r_2);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            q_2 = ATgetArgument(t, 0);
                                                                                                            r_2 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, r_2, q_2);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                q_2 = ATgetArgument(t, 0);
                                                                                                                r_2 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, q_2, r_2, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    q_2 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, q_2, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        q_2 = ATgetArgument(t, 0);
                                                                                                                        r_2 = ATgetArgument(t, 1);
                                                                                                                        n_2 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, q_2, r_2, (ATerm)ATempty, n_2);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            q_2 = ATgetArgument(t, 0);
                                                                                                                            r_2 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, q_2, (ATerm)ATempty, (ATerm)ATempty, r_2);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                q_2 = ATgetArgument(t, 0);
                                                                                                                                r_2 = ATgetArgument(t, 1);
                                                                                                                                n_2 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_2, r_2, (ATerm)ATempty, n_2);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    q_2 = ATgetArgument(t, 0);
                                                                                                                                    r_2 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_2, (ATerm)ATempty, (ATerm)ATempty, r_2);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        q_2 = ATgetArgument(t, 0);
                                                                                                                                        r_2 = ATgetArgument(t, 1);
                                                                                                                                        n_2 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_2, r_2, (ATerm)ATempty, n_2);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            q_2 = ATgetArgument(t, 0);
                                                                                                                                            r_2 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, q_2, (ATerm)ATempty, (ATerm)ATempty, r_2);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm c_27 = ATgetArgument(t, 0);
                                                                                                                                                r_2 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, r_2);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm Expl_0_0 (ATerm t)
{
  ATerm y_5 = NULL,b_6 = NULL,c_6 = NULL;
  b_6 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      c_6 = ATgetArgument(t, 0);
      y_5 = ATgetArgument(t, 1);
      {
        ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
        t = b_6;
        t = new_0_0(t);
        g_6 = t;
        t = new_0_0(t);
        h_6 = t;
        t = new_0_0(t);
        i_6 = t;
        t = new_0_0(t);
        j_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_6), i_6), h_6), g_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, g_6), (ATerm) ATmakeAppl(sym_Var_1, i_6))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, c_6, (ATerm)ATmakeAppl(sym_Var_1, g_6), (ATerm) ATmakeAppl(sym_Var_1, h_6)), (ATerm) ATmakeAppl(sym_BAM_3, y_5, (ATerm)ATmakeAppl(sym_Var_1, i_6), (ATerm) ATmakeAppl(sym_Var_1, j_6)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_e_27, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_6)), (ATerm) ATmakeAppl(sym_Var_1, h_6))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          c_6 = ATgetArgument(t, 0);
          {
            ATerm l_6 = NULL,p_6 = NULL,u_6 = NULL,v_6 = NULL;
            t = b_6;
            t = new_0_0(t);
            u_6 = t;
            t = c_6;
            {
              static ATerm k_1 (ATerm t);
              static ATerm k_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((l_6 != NULL) && (l_6 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      l_6 = ATgetArgument(t, 0);
                    if(((p_6 != NULL) && (p_6 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      p_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, u_6);
                return(t);
              }
              t = oncetd_1_0(k_1, t);
            }
            v_6 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_27, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_6)), not_null(l_6))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_6)), (ATerm) ATmakeAppl(sym_Build_1, v_6))));
          }
        }
      else
        {
          ATerm e_7 = NULL,g_7 = NULL,h_7 = NULL,j_7 = NULL,k_7 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              c_6 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_6;
          t = new_0_0(t);
          h_7 = t;
          t = new_0_0(t);
          j_7 = t;
          t = c_6;
          {
            static ATerm m_1 (ATerm t);
            static ATerm m_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((e_7 != NULL) && (e_7 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_7 = ATgetArgument(t, 0);
                  if(((g_7 != NULL) && (g_7 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    g_7 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, h_7);
              return(t);
            }
            t = oncetd_1_0(m_1, t);
          }
          k_7 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_7), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_7)), (ATerm) ATmakeAppl(sym_PrimT_3, term_g_27, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_7))))), (ATerm)ATmakeAppl(sym_Var_1, h_7), (ATerm) ATmakeAppl(sym_Op_2, term_i_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_7)), not_null(e_7)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm n_7 = NULL,o_7 = NULL;
  n_7 = t;
  if(match_cons(t, sym_Match_1))
    {
      o_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm h_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_7 = NULL,r_7 = NULL,t_7 = NULL,u_7 = NULL;
        t = n_7;
        t = new_0_0(t);
        t_7 = t;
        t = o_7;
        {
          static ATerm n_1 (ATerm t);
          static ATerm n_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((q_7 != NULL) && (q_7 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_7 = ATgetArgument(t, 0);
                if(((r_7 != NULL) && (r_7 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  r_7 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_7), q_7);
            return(t);
          }
          t = pat_td_1_0(n_1, t);
        }
        u_7 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_7), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_27, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_7))), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_7))))));
        LocalPopChoice(n_27);
      }
    else
      {
        t = h_27;
        {
          ATerm v_27 = t;
          int w_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
              t = n_7;
              t = new_0_0(t);
              x_7 = t;
              t = o_7;
              {
                static ATerm u_1 (ATerm t);
                static ATerm u_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((w_7 != NULL) && (w_7 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        w_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, x_7);
                  return(t);
                }
                t = pat_td_1_0(u_1, t);
              }
              y_7 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_7)), not_null(w_7))));
              LocalPopChoice(w_27);
            }
          else
            {
              t = v_27;
              {
                ATerm a_8 = NULL,d_8 = NULL,i_8 = NULL,k_8 = NULL;
                t = n_7;
                t = new_0_0(t);
                i_8 = t;
                t = o_7;
                {
                  static ATerm a_2 (ATerm t);
                  static ATerm a_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((d_8 != NULL) && (d_8 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          d_8 = ATgetArgument(t, 0);
                        if(((a_8 != NULL) && (a_8 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_8);
                    return(t);
                  }
                  t = pat_td_1_0(a_2, t);
                }
                k_8 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, i_8)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_8)), not_null(d_8)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm f_177 (ATerm), ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_177(t);
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm t_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
        y_14 = t;
        if(match_cons(t, sym_Op_2))
          {
            z_14 = ATgetArgument(t, 0);
            a_15 = ATgetArgument(t, 1);
            {
              ATerm k_2 = NULL,u_2 = NULL,o_1 = NULL;
              t = SSLgetAnnotations(y_14);
              k_2 = t;
              t = a_15;
              {
                static ATerm c_2 (ATerm t);
                static ATerm c_2 (ATerm t)
                {
                  t = pat_td_1_0(f_177, t);
                  return(t);
                }
                t = fetch_1_0(c_2, t);
              }
              u_2 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, z_14, u_2);
              o_1 = t;
              t = SSLsetAnnotations(o_1, k_2);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                z_14 = ATgetArgument(t, 0);
                a_15 = ATgetArgument(t, 1);
                {
                  ATerm z_27 = t;
                  int e_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_5 = NULL,z_5 = NULL,p_1 = NULL;
                      t = SSLgetAnnotations(y_14);
                      l_5 = t;
                      t = a_15;
                      t = pat_td_1_0(f_177, t);
                      z_5 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, z_14, z_5);
                      p_1 = t;
                      t = SSLsetAnnotations(p_1, l_5);
                      LocalPopChoice(e_28);
                    }
                  else
                    {
                      t = z_27;
                      {
                        ATerm s_6 = NULL,x_6 = NULL,q_1 = NULL;
                        t = SSLgetAnnotations(y_14);
                        s_6 = t;
                        t = z_14;
                        t = pat_td_1_0(f_177, t);
                        x_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, x_6, a_15);
                        q_1 = t;
                        t = SSLsetAnnotations(q_1, s_6);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    z_14 = ATgetArgument(t, 0);
                    a_15 = ATgetArgument(t, 1);
                    t_14 = ATgetArgument(t, 2);
                    {
                      ATerm m_7 = NULL,e_8 = NULL,r_1 = NULL;
                      t = SSLgetAnnotations(y_14);
                      m_7 = t;
                      t = t_14;
                      {
                        static ATerm m_2 (ATerm t);
                        static ATerm m_2 (ATerm t)
                        {
                          t = pat_td_1_0(f_177, t);
                          return(t);
                        }
                        t = fetch_1_0(m_2, t);
                      }
                      e_8 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, z_14, a_15, e_8);
                      r_1 = t;
                      t = SSLsetAnnotations(r_1, m_7);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        z_14 = ATgetArgument(t, 0);
                        a_15 = ATgetArgument(t, 1);
                        t_14 = ATgetArgument(t, 2);
                        {
                          ATerm q_8 = NULL,u_8 = NULL,t_5 = NULL;
                          t = SSLgetAnnotations(y_14);
                          q_8 = t;
                          t = t_14;
                          {
                            static ATerm o_2 (ATerm t);
                            static ATerm o_2 (ATerm t)
                            {
                              t = pat_td_1_0(f_177, t);
                              return(t);
                            }
                            t = fetch_1_0(o_2, t);
                          }
                          u_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, z_14, a_15, u_8);
                          t_5 = t;
                          t = SSLsetAnnotations(t_5, q_8);
                        }
                      }
                    else
                      {
                        ATerm h_9 = NULL,q_9 = NULL,x_8 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            z_14 = ATgetArgument(t, 0);
                            a_15 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(y_14);
                        h_9 = t;
                        t = a_15;
                        t = pat_td_1_0(f_177, t);
                        q_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, z_14, q_9);
                        x_8 = t;
                        t = SSLsetAnnotations(x_8, h_9);
                      }
                  }
              }
          }
      }
    }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm p_15 = NULL,s_15 = NULL;
  p_15 = t;
  if(match_cons(t, sym_Build_1))
    {
      s_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_15 = NULL,u_15 = NULL,w_15 = NULL,x_15 = NULL;
        t = p_15;
        t = new_0_0(t);
        w_15 = t;
        t = s_15;
        {
          static ATerm s_2 (ATerm t);
          static ATerm s_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((t_15 != NULL) && (t_15 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_15 = ATgetArgument(t, 0);
                if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  u_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, w_15);
            return(t);
          }
          t = pat_td_1_0(s_2, t);
        }
        x_15 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_28, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_15)), not_null(t_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_15)))), (ATerm) ATmakeAppl(sym_Build_1, x_15)));
        LocalPopChoice(h_28);
      }
    else
      {
        t = g_28;
        {
          ATerm k_28 = t;
          int l_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_15 = NULL,c_16 = NULL,e_16 = NULL;
              t = p_15;
              t = new_0_0(t);
              c_16 = t;
              t = s_15;
              {
                static ATerm t_2 (ATerm t);
                static ATerm t_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((y_15 != NULL) && (y_15 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, c_16);
                  return(t);
                }
                t = pat_td_1_0(t_2, t);
              }
              e_16 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_15), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_16)))), (ATerm) ATmakeAppl(sym_Build_1, e_16)));
              LocalPopChoice(l_28);
            }
          else
            {
              t = k_28;
              {
                ATerm f_16 = NULL,g_16 = NULL,i_16 = NULL,j_16 = NULL;
                t = p_15;
                t = new_0_0(t);
                i_16 = t;
                t = s_15;
                {
                  static ATerm w_2 (ATerm t);
                  static ATerm w_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((f_16 != NULL) && (f_16 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          f_16 = ATgetArgument(t, 0);
                        if(((g_16 != NULL) && (g_16 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_16);
                    return(t);
                  }
                  t = pat_td_1_0(w_2, t);
                }
                j_16 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_16), not_null(g_16), (ATerm) ATmakeAppl(sym_Var_1, i_16))), (ATerm) ATmakeAppl(sym_Build_1, j_16)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm p_28 = t;
  if((PushChoice() == 0))
    {
      ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,p_9 = NULL;
      f_17 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_17 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_17);
      d_17 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_17);
      p_9 = t;
      t = SSLsetAnnotations(p_9, d_17);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_28;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_28;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm g_17 = NULL,i_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_17 = ATgetFirst((ATermList) t);
      i_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_17, i_17);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_28 = ATgetArgument(t, 0);
      if(match_cons(r_28, sym__2))
        {
          m_17 = ATgetArgument(r_28, 0);
          n_17 = ATgetArgument(r_28, 1);
        }
      else
        _fail(t);
      {
        ATerm t_28 = ATgetArgument(t, 1);
        if(match_cons(t_28, sym__2))
          {
            o_17 = ATgetArgument(t_28, 0);
            p_17 = ATgetArgument(t_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_17), m_17), (ATerm) ATinsert(CheckATermList(p_17), n_17));
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_28;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_17 = ATgetFirst((ATermList) t);
      v_17 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_17, v_17);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_28 = ATgetArgument(t, 0);
      if(match_cons(x_28, sym__2))
        {
          w_17 = ATgetArgument(x_28, 0);
          x_17 = ATgetArgument(x_28, 1);
        }
      else
        _fail(t);
      {
        ATerm y_28 = ATgetArgument(t, 1);
        if(match_cons(y_28, sym__2))
          {
            y_17 = ATgetArgument(y_28, 0);
            z_17 = ATgetArgument(y_28, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_17), w_17), (ATerm) ATinsert(CheckATermList(z_17), x_17));
  return(t);
}
static ATerm j_9 (ATerm n_105, ATerm o_105, ATerm p_105, ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,t_9 = NULL;
  t = p_105;
  t = fetch_1_0(z_2, t);
  t = p_105;
  t = genzip_4_0(a_3, b_3, c_3, LiftPrimArg_0_0, t);
  c_17 = t;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_17);
  s_16 = t;
  t = t_16;
  t = concat_0_0(t);
  a_17 = t;
  t = z_16;
  t = genzip_4_0(d_3, e_3, f_3, _id, t);
  b_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_17, b_17);
  t_9 = t;
  t = SSLsetAnnotations(t_9, s_16);
  if(match_cons(t, sym__2))
    {
      p_16 = ATgetArgument(t, 0);
      {
        ATerm a_29 = ATgetArgument(t, 1);
        if(match_cons(a_29, sym__2))
          {
            q_16 = ATgetArgument(a_29, 0);
            r_16 = ATgetArgument(a_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, p_16, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_16), (ATerm) ATmakeAppl(sym_CallT_3, n_105, o_105, r_16)));
  return(t);
}
static ATerm b_19 (ATerm j_18, ATerm t)
{
  ATerm l_18 = NULL;
  t = j_18;
  {
    ATerm c_29 = t;
    if((PushChoice() == 0))
      {
        ATerm m_18 = NULL,p_18 = NULL,r_18 = NULL,z_9 = NULL;
        r_18 = t;
        if(match_cons(t, sym_Var_1))
          {
            p_18 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_18);
        m_18 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, p_18);
        z_9 = t;
        t = SSLsetAnnotations(z_9, m_18);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_29;
      }
  }
  t = new_0_0(t);
  l_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, l_18), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_18), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_18)))), (ATerm) ATmakeAppl(sym_Var_1, l_18)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL;
  y_18 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_18 = ATgetArgument(t, 0);
      {
        ATerm g_29 = t;
        int h_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_19(y_18, t);
            LocalPopChoice(h_29);
          }
        else
          {
            t = g_29;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_b_27, (ATerm) ATmakeAppl(sym_Var_1, z_18)));
          }
      }
    }
  else
    {
      t = b_19(y_18, t);
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm i_29 = t;
  if((PushChoice() == 0))
    {
      ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
      s_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          r_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_10);
      q_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, r_10);
      t_10 = t;
      t = SSLsetAnnotations(t_10, q_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_29;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_28;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm u_10 = NULL,b_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_10 = ATgetFirst((ATermList) t);
      b_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_10, b_11);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL,h_11 = NULL,i_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_29 = ATgetArgument(t, 0);
      if(match_cons(j_29, sym__2))
        {
          c_11 = ATgetArgument(j_29, 0);
          d_11 = ATgetArgument(j_29, 1);
        }
      else
        _fail(t);
      {
        ATerm k_29 = ATgetArgument(t, 1);
        if(match_cons(k_29, sym__2))
          {
            h_11 = ATgetArgument(k_29, 0);
            i_11 = ATgetArgument(k_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_11), c_11), (ATerm) ATinsert(CheckATermList(i_11), d_11));
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_28;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_11 = ATgetFirst((ATermList) t);
      l_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_11, l_11);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm n_11 = NULL,q_11 = NULL,r_11 = NULL,t_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      if(match_cons(l_29, sym__2))
        {
          n_11 = ATgetArgument(l_29, 0);
          q_11 = ATgetArgument(l_29, 1);
        }
      else
        _fail(t);
      {
        ATerm m_29 = ATgetArgument(t, 1);
        if(match_cons(m_29, sym__2))
          {
            r_11 = ATgetArgument(m_29, 0);
            t_11 = ATgetArgument(m_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_11), n_11), (ATerm) ATinsert(CheckATermList(t_11), q_11));
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm n_29 = t;
  if((PushChoice() == 0))
    {
      ATerm d_13 = NULL,e_13 = NULL,p_14 = NULL,y_10 = NULL;
      p_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_14);
      d_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_13);
      y_10 = t;
      t = SSLsetAnnotations(y_10, d_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_29;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_28;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm q_14 = NULL,s_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_14 = ATgetFirst((ATermList) t);
      s_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_14, s_14);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_29 = ATgetArgument(t, 0);
      if(match_cons(o_29, sym__2))
        {
          u_14 = ATgetArgument(o_29, 0);
          v_14 = ATgetArgument(o_29, 1);
        }
      else
        _fail(t);
      {
        ATerm p_29 = ATgetArgument(t, 1);
        if(match_cons(p_29, sym__2))
          {
            w_14 = ATgetArgument(p_29, 0);
            x_14 = ATgetArgument(p_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_14), u_14), (ATerm) ATinsert(CheckATermList(x_14), v_14));
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_q_28;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm b_15 = NULL,c_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_15 = ATgetFirst((ATermList) t);
      c_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_15, c_15);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL,g_15 = NULL,m_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_29 = ATgetArgument(t, 0);
      if(match_cons(q_29, sym__2))
        {
          d_15 = ATgetArgument(q_29, 0);
          e_15 = ATgetArgument(q_29, 1);
        }
      else
        _fail(t);
      {
        ATerm v_29 = ATgetArgument(t, 1);
        if(match_cons(v_29, sym__2))
          {
            g_15 = ATgetArgument(v_29, 0);
            m_15 = ATgetArgument(v_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_15), d_15), (ATerm) ATinsert(CheckATermList(m_15), e_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,j_23 = NULL,k_23 = NULL;
  b_23 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      j_23 = ATgetArgument(t, 0);
      k_23 = ATgetArgument(t, 1);
      a_23 = ATgetArgument(t, 2);
      {
        ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,v_10 = NULL;
        t = a_23;
        t = fetch_1_0(g_3, t);
        t = a_23;
        t = genzip_4_0(h_3, i_3, j_3, LiftPrimArg_0_0, t);
        p_10 = t;
        if(match_cons(t, sym__2))
          {
            l_10 = ATgetArgument(t, 0);
            m_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_10);
        k_10 = t;
        t = l_10;
        t = concat_0_0(t);
        n_10 = t;
        t = m_10;
        t = genzip_4_0(k_3, l_3, m_3, _id, t);
        o_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_10, o_10);
        v_10 = t;
        t = SSLsetAnnotations(v_10, k_10);
        if(match_cons(t, sym__2))
          {
            h_10 = ATgetArgument(t, 0);
            {
              ATerm x_29 = ATgetArgument(t, 1);
              if(match_cons(x_29, sym__2))
                {
                  i_10 = ATgetArgument(x_29, 0);
                  j_10 = ATgetArgument(x_29, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_10), (ATerm) ATmakeAppl(sym_PrimT_3, j_23, k_23, j_10)));
      }
    }
  else
    {
      ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,p_12 = NULL,r_12 = NULL,w_12 = NULL,y_12 = NULL,b_13 = NULL,z_10 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          j_23 = ATgetArgument(t, 0);
          k_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_23;
      t = fetch_1_0(o_3, t);
      t = k_23;
      t = genzip_4_0(p_3, r_3, u_3, LiftPrimArg_0_0, t);
      b_13 = t;
      if(match_cons(t, sym__2))
        {
          p_12 = ATgetArgument(t, 0);
          r_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_13);
      m_12 = t;
      t = p_12;
      t = concat_0_0(t);
      w_12 = t;
      t = r_12;
      t = genzip_4_0(v_3, w_3, x_3, _id, t);
      y_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_12, y_12);
      z_10 = t;
      t = SSLsetAnnotations(z_10, m_12);
      if(match_cons(t, sym__2))
        {
          j_12 = ATgetArgument(t, 0);
          {
            ATerm z_29 = ATgetArgument(t, 1);
            if(match_cons(z_29, sym__2))
              {
                k_12 = ATgetArgument(z_29, 0);
                l_12 = ATgetArgument(z_29, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, j_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_12), (ATerm) ATmakeAppl(sym_PrimT_3, j_23, (ATerm)ATempty, l_12)));
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  z_24 = t;
  if(match_cons(t, sym_Con_3))
    {
      w_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
      y_24 = ATgetArgument(t, 2);
      {
        ATerm l_16 = NULL,o_11 = NULL;
        t = SSLgetAnnotations(z_24);
        l_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, w_24, x_24, y_24);
        o_11 = t;
        t = SSLsetAnnotations(o_11, l_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = z_24;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm a_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(y_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_30;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL,o_27 = NULL;
  j_27 = t;
  if(match_cons(t, sym_Con_3))
    {
      k_27 = ATgetArgument(t, 0);
      o_27 = ATgetArgument(t, 1);
      i_27 = ATgetArgument(t, 2);
      {
        ATerm q_17 = NULL,s_11 = NULL;
        t = SSLgetAnnotations(j_27);
        q_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, k_27, o_27, i_27);
        s_11 = t;
        t = SSLsetAnnotations(s_11, q_17);
      }
    }
  else
    {
      ATerm n_18 = NULL,x_11 = NULL;
      if(match_cons(t, sym_App_2))
        {
          k_27 = ATgetArgument(t, 0);
          o_27 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_27);
      n_18 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, k_27, o_27);
      x_11 = t;
      t = SSLsetAnnotations(x_11, n_18);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm c_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(z_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_30;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,e_29 = NULL,f_29 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      u_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_28;
  if(match_cons(t, sym_StratRule_3))
    {
      v_28 = ATgetArgument(t, 0);
      e_29 = ATgetArgument(t, 1);
      f_29 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_29), (ATerm) ATmakeAppl(sym_Where_1, f_29)), v_28));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          v_28 = ATgetArgument(t, 0);
          e_29 = ATgetArgument(t, 1);
          f_29 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_28;
      t = pureterm_0_0(t);
      t = e_29;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, e_29)), (ATerm) ATmakeAppl(sym_Where_1, f_29)), (ATerm) ATmakeAppl(sym_Match_1, v_28)));
    }
  return(t);
}
static ATerm n_9 (ATerm a_101, ATerm b_101, ATerm c_101, ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,w_29 = NULL,y_29 = NULL,b_30 = NULL;
  t = new_0_0(t);
  w_29 = t;
  t = a_101;
  {
    static ATerm a_4 (ATerm t);
    static ATerm a_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm d_30 = ATgetArgument(t, 0);
          if(match_cons(d_30, sym_Var_1))
            {
              if(((u_29 != NULL) && (u_29 != ATgetArgument(d_30, 0))))
                _fail(ATgetArgument(d_30, 0));
              else
                u_29 = ATgetArgument(d_30, 0);
            }
          else
            _fail(t);
          if(((s_29 != NULL) && (s_29 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            s_29 = ATgetArgument(t, 1);
          {
            ATerm h_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, u_29);
      return(t);
    }
    t = oncetd_1_0(a_4, t);
  }
  y_29 = t;
  t = b_101;
  {
    static ATerm b_4 (ATerm t);
    static ATerm b_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm k_30 = ATgetArgument(t, 0);
          if(match_cons(k_30, sym_Var_1))
            {
              if(((u_29 != NULL) && (u_29 != ATgetArgument(k_30, 0))))
                _fail(ATgetArgument(k_30, 0));
              else
                u_29 = ATgetArgument(k_30, 0);
            }
          else
            _fail(t);
          if(((t_29 != NULL) && (t_29 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_29 = ATgetArgument(t, 1);
          {
            ATerm l_30 = ATgetArgument(t, 2);
            if(match_cons(l_30, sym_CallT_3))
              {
                if(((r_29 != NULL) && (r_29 != ATgetArgument(l_30, 0))))
                  _fail(ATgetArgument(l_30, 0));
                else
                  r_29 = ATgetArgument(l_30, 0);
                {
                  ATerm m_30 = ATgetArgument(l_30, 1);
                  if(((ATgetType(m_30) != AT_LIST) || !(ATisEmpty(m_30))))
                    _fail(t);
                }
                {
                  ATerm n_30 = ATgetArgument(l_30, 2);
                  if(((ATgetType(n_30) != AT_LIST) || !(ATisEmpty(n_30))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, w_29);
      return(t);
    }
    t = oncetd_1_0(b_4, t);
  }
  b_30 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_29), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, y_29, b_30, (ATerm) ATmakeAppl(sym_Seq_2, c_101, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(r_29), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_29), not_null(t_29), term_b_27))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(u_29)), (ATerm) ATmakeAppl(sym_Var_1, w_29))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm o_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_30 = t;
      int r_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
          c_31 = t;
          if(match_cons(t, sym_SRule_1))
            {
              d_31 = ATgetArgument(t, 0);
              t = d_31;
              if(match_cons(t, sym_Rule_3))
                {
                  z_30 = ATgetArgument(t, 0);
                  a_31 = ATgetArgument(t, 1);
                  b_31 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = c_31;
              t = n_9(z_30, a_31, b_31, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm d_19 = NULL,g_19 = NULL,f_12 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  d_31 = ATgetArgument(t, 0);
                  e_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_31);
              d_19 = t;
              t = e_31;
              t = desugarRule_0_0(t);
              g_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, d_31, g_19);
              f_12 = t;
              t = SSLsetAnnotations(f_12, d_19);
            }
          LocalPopChoice(r_30);
        }
      else
        {
          t = q_30;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(p_30);
    }
  else
    {
      t = o_30;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm s_30 = t;
  int t_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(t_30);
    }
  else
    {
      t = s_30;
    }
  t = repeat_2_0(d_4, _id, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm u_30 = t;
  int v_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
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
            ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
            f_32 = t;
            if(match_cons(t, sym_CallT_3))
              {
                g_32 = ATgetArgument(t, 0);
                h_32 = ATgetArgument(t, 1);
                i_32 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_32;
            t = j_9(g_32, h_32, i_32, t);
            LocalPopChoice(x_30);
          }
        else
          {
            t = w_30;
            {
              ATerm y_30 = t;
              int f_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(f_31);
                }
              else
                {
                  t = y_30;
                  {
                    ATerm g_31 = t;
                    int h_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(h_31);
                      }
                    else
                      {
                        t = g_31;
                        {
                          ATerm k_31 = t;
                          int l_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_31 = t;
                              int n_31 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      y_32 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = y_32;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      z_32 = ATgetArgument(t, 0);
                                      t = z_32;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          z_32 = ATgetArgument(t, 0);
                                          a_33 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, z_32, a_33);
                                    }
                                  LocalPopChoice(n_31);
                                }
                              else
                                {
                                  t = m_31;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(l_31);
                            }
                          else
                            {
                              t = k_31;
                              {
                                ATerm o_31 = t;
                                int p_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(p_31);
                                  }
                                else
                                  {
                                    t = o_31;
                                    t = Desugar_0_0(t);
                                  }
                              }
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
ATerm desugar_0_0 (ATerm t)
{
  t = topdown_1_0(c_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm e_23 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_23);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm q_31 = t;
  int r_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_31);
    }
  else
    {
      t = q_31;
      {
        ATerm s_31 = t;
        int u_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_31);
          }
        else
          {
            t = s_31;
            {
              ATerm v_31 = t;
              int y_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,m_23 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_23 = ATgetArgument(t, 0);
                      h_23 = ATgetArgument(t, 1);
                      i_23 = ATgetArgument(t, 2);
                      m_23 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_23;
                  t = map_1_0(k_4, t);
                  LocalPopChoice(y_31);
                }
              else
                {
                  t = v_31;
                  {
                    ATerm z_31 = t;
                    int a_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(a_32);
                      }
                    else
                      {
                        t = z_31;
                        t = dynrule_targs_1_0(l_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm u_23 = NULL;
  ATerm b_32 = t;
  int c_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_23 = ATgetArgument(t, 0);
          {
            ATerm d_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_32);
      t = u_23;
    }
  else
    {
      t = b_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_23;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = map_1_0(m_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm z_23 = NULL;
  ATerm e_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_23 = ATgetArgument(t, 0);
          {
            ATerm k_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_32);
      t = z_23;
    }
  else
    {
      t = e_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_23 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_23;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_l_32;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm x_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,p_38 = NULL;
  x_37 = t;
  if(match_cons(t, sym_Seq_2))
    {
      a_38 = ATgetArgument(t, 0);
      g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_38;
  if(match_cons(t, sym_CallT_3))
    {
      b_38 = ATgetArgument(t, 0);
      e_38 = ATgetArgument(t, 1);
      f_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_38;
  if(match_cons(t, sym_SVar_1))
    {
      c_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_38;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = e_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = f_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = g_38;
  if(match_cons(t, sym_Seq_2))
    {
      h_38 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_38;
  if(match_cons(t, sym_Match_1))
    {
      i_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_38;
  if(match_cons(t, sym_Seq_2))
    {
      m_38 = ATgetArgument(t, 0);
      o_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_38;
  if(match_cons(t, sym_Where_1))
    {
      n_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_38;
  if(match_cons(t, sym_Build_1))
    {
      p_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_32 = t;
    int o_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_20 = NULL,u_20 = NULL,x_20 = NULL,g_21 = NULL,p_21 = NULL,z_21 = NULL;
        t = term_c_33;
        p_21 = t;
        t = term_d_33;
        z_21 = t;
        t = term_f_33;
        t = g_13(z_21, p_21, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm g_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_33) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            q_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_38, p_38);
        g_21 = t;
        t = (ATerm) ATmakeAppl(sym__3, q_20, i_38, (ATerm) ATmakeAppl(sym__2, n_38, p_38));
        t = x_10(q_20, i_38, g_21, t);
        if(match_cons(t, sym__2))
          {
            u_20 = ATgetArgument(t, 0);
            x_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_38), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, u_20), (ATerm) ATmakeAppl(sym_Build_1, x_20)));
        LocalPopChoice(o_32);
      }
    else
      {
        t = n_32;
        {
          ATerm m_22 = NULL,d_23 = NULL,m_24 = NULL,o_24 = NULL;
          t = term_c_33;
          m_24 = t;
          t = term_d_33;
          o_24 = t;
          t = term_f_33;
          t = g_13(o_24, m_24, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm h_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_33) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              m_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_38;
          t = free_vars_3_0(g_4, j_4, tboundin_3_0, t);
          {
            static ATerm o_4 (ATerm t);
            static ATerm o_4 (ATerm t)
            {
              static ATerm p_4 (ATerm t);
              static ATerm p_4 (ATerm t)
              {
                ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
                c_24 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, m_22, (ATerm) ATmakeAppl(sym_Var_1, c_24));
                d_24 = t;
                t = term_j_33;
                e_24 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, m_22, (ATerm) ATmakeAppl(sym_Var_1, c_24)), term_j_33);
                t = h_13(q_4, d_24, e_24, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, c_24);
                return(t);
              }
              t = map_1_0(p_4, t);
              t = (ATerm) ATmakeAppl(sym__2, n_38, p_38);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((d_23 != NULL) && (d_23 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    d_23 = ATgetArgument(t, 0);
                  {
                    ATerm q_33 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(n_4, o_4, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_38), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(d_23)), (ATerm) ATmakeAppl(sym_Build_1, p_38)));
        }
      }
  }
  return(t);
}
static ATerm h_40 (ATerm l_39, ATerm m_39, ATerm t)
{
  ATerm e_25 = NULL;
  t = term_l_32;
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_32, m_39);
  t = g_13(e_25, m_39, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm v_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_33) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = l_39;
  return(t);
}
static ATerm i_40 (ATerm p_39, ATerm s_39, ATerm t)
{
  ATerm h_25 = NULL;
  t = term_l_32;
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_32, s_39);
  t = g_13(h_25, s_39, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm w_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_33) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = p_39;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,f_40 = NULL;
  x_39 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm x_33 = ATgetArgument(t, 0);
      f_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_40;
  if(match_cons(t, sym_Var_1))
    {
      w_39 = ATgetArgument(t, 0);
      {
        ATerm y_33 = t;
        int z_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_25 = NULL;
            t = term_l_32;
            u_25 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_l_32, x_39);
            t = g_13(u_25, x_39, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm a_34 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) a_34) != ATmakeSymbol("s_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, w_39);
            LocalPopChoice(z_33);
          }
        else
          {
            t = y_33;
            {
              ATerm b_34 = t;
              int d_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_40(f_40, x_39, t);
                  LocalPopChoice(d_34);
                }
              else
                {
                  t = b_34;
                  t = i_40(f_40, x_39, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm e_34 = t;
      int p_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_40(f_40, x_39, t);
          LocalPopChoice(p_34);
        }
      else
        {
          t = e_34;
          t = i_40(f_40, x_39, t);
        }
    }
  return(t);
}
static ATerm w_10 (ATerm f_46, ATerm g_46, ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  k_40 = t;
  {
    ATerm q_34 = t;
    int u_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_46, g_46);
        t = y_13(f_46, g_46, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_34 = ATgetFirst((ATermList) t);
            j_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_34);
        {
          ATerm l_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, f_46, g_46, j_40);
          t = lookup_table_0_1(f_46, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_14(g_46, j_40, l_40, t);
          t = (ATerm) ATmakeAppl(sym__3, f_46, g_46, j_40);
        }
      }
    else
      {
        t = q_34;
        {
          ATerm p_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, f_46, g_46);
          t = lookup_table_0_1(f_46, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_13(g_46, p_40, t);
          t = (ATerm) ATmakeAppl(sym__2, f_46, g_46);
        }
      }
  }
  t = k_40;
  return(t);
}
ATerm end_scope_1_0 (ATerm f_148 (ATerm), ATerm t)
{
  ATerm r_40 = NULL,u_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,b_41 = NULL,d_41 = NULL;
  x_40 = t;
  t = f_148(t);
  w_40 = t;
  {
    ATerm w_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_41 = NULL;
        t = term_y_34;
        h_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_40, term_y_34);
        t = y_13(w_40, h_41, t);
        {
          ATerm z_34 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_34;
            }
        }
        LocalPopChoice(x_34);
      }
    else
      {
        t = w_34;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_40 = ATgetFirst((ATermList) t);
      r_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_40, term_y_34, r_40);
  t = lookup_table_0_1(w_40, t);
  d_41 = t;
  t = term_y_34;
  y_40 = t;
  t = d_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14(y_40, r_40, b_41, t);
  t = u_40;
  {
    static ATerm r_4 (ATerm t);
    static ATerm r_4 (ATerm t)
    {
      ATerm j_41 = NULL;
      j_41 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_40, j_41);
      t = w_10(w_40, j_41, t);
      return(t);
    }
    t = map_1_0(r_4, t);
  }
  t = x_40;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_142 (ATerm), ATerm g_142 (ATerm), ATerm t)
{
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_142(t);
      t = g_142(t);
      LocalPopChoice(b_35);
    }
  else
    {
      t = a_35;
      t = g_142(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_148 (ATerm), ATerm t)
{
  ATerm p_41 = NULL,r_41 = NULL,s_41 = NULL,v_41 = NULL,w_41 = NULL,a_42 = NULL,b_42 = NULL;
  r_41 = t;
  t = e_148(t);
  p_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_41, term_y_34);
  {
    ATerm d_35 = t;
    int e_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_42 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_35 = ATgetArgument(t, 0);
            ATerm g_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_34;
        h_42 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_41, term_y_34);
        t = y_13(p_41, h_42, t);
        LocalPopChoice(e_35);
      }
    else
      {
        t = d_35;
        t = (ATerm) ATempty;
      }
  }
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_41, term_y_34, (ATerm) ATinsert(CheckATermList(s_41), (ATerm) ATempty));
  t = lookup_table_0_1(p_41, t);
  b_42 = t;
  t = term_y_34;
  v_41 = t;
  t = (ATerm) ATinsert(CheckATermList(s_41), (ATerm) ATempty);
  w_41 = t;
  t = b_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14(v_41, w_41, a_42, t);
  t = r_41;
  return(t);
}
ATerm scope_2_0 (ATerm g_148 (ATerm), ATerm h_148 (ATerm), ATerm t)
{
  static ATerm s_4 (ATerm t);
  static ATerm s_4 (ATerm t)
  {
    t = end_scope_1_0(g_148, t);
    return(t);
  }
  t = begin_scope_1_0(g_148, t);
  t = restore_always_2_0(h_148, s_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_l_32;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm p_42 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_42);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
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
                  ATerm s_42 = NULL,t_42 = NULL,w_42 = NULL,x_42 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_42 = ATgetArgument(t, 0);
                      t_42 = ATgetArgument(t, 1);
                      w_42 = ATgetArgument(t, 2);
                      x_42 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_42;
                  t = map_1_0(x_4, t);
                  LocalPopChoice(m_35);
                }
              else
                {
                  t = l_35;
                  {
                    ATerm n_35 = t;
                    int o_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_35);
                      }
                    else
                      {
                        t = n_35;
                        t = dynrule_targs_1_0(y_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm i_43 = NULL;
  ATerm p_35 = t;
  int q_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_43 = ATgetArgument(t, 0);
          {
            ATerm r_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_35);
      t = i_43;
    }
  else
    {
      t = p_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_43;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  t = map_1_0(z_4, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm p_43 = NULL;
  ATerm s_35 = t;
  int t_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_43 = ATgetArgument(t, 0);
          {
            ATerm u_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_35);
      t = p_43;
    }
  else
    {
      t = s_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_43;
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_l_32;
  return(t);
}
static ATerm x_10 (ATerm b_28, ATerm a_28, ATerm c_28, ATerm t)
{
  ATerm n_42 = NULL;
  static ATerm u_4 (ATerm t);
  static ATerm u_4 (ATerm t)
  {
    t = a_28;
    t = free_vars_3_0(v_4, w_4, tboundin_3_0, t);
    {
      static ATerm a_5 (ATerm t);
      static ATerm a_5 (ATerm t)
      {
        ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
        u_43 = t;
        t = (ATerm) ATmakeAppl(sym_App_2, b_28, (ATerm) ATmakeAppl(sym_Var_1, u_43));
        v_43 = t;
        t = term_x_35;
        w_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, b_28, (ATerm) ATmakeAppl(sym_Var_1, u_43)), term_x_35);
        t = h_13(b_5, v_43, w_43, t);
        t = u_43;
        return(t);
      }
      t = map_1_0(a_5, t);
    }
    t = c_28;
    t = alltd_1_0(Replace_0_0, t);
    if(((n_42 != NULL) && (n_42 != t)))
      _fail(t);
    else
      n_42 = t;
    return(t);
  }
  t = scope_2_0(t_4, u_4, t);
  t = not_null(n_42);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm m_27 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_27);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm y_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_35);
    }
  else
    {
      t = y_35;
      {
        ATerm a_36 = t;
        int b_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_36);
          }
        else
          {
            t = a_36;
            {
              ATerm c_36 = t;
              int d_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,s_27 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_27 = ATgetArgument(t, 0);
                      q_27 = ATgetArgument(t, 1);
                      r_27 = ATgetArgument(t, 2);
                      s_27 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_27;
                  t = map_1_0(e_5, t);
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
                        t = dynrule_targs_1_0(f_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm d_28 = NULL;
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_28 = ATgetArgument(t, 0);
          {
            ATerm m_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_36);
      t = d_28;
    }
  else
    {
      t = k_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_28;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = map_1_0(g_5, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm j_28 = NULL;
  ATerm n_36 = t;
  int o_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_28 = ATgetArgument(t, 0);
          {
            ATerm p_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_36);
      t = j_28;
    }
  else
    {
      t = n_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_28;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_l_32;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_l_32;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm q_48 = NULL,s_48 = NULL,x_48 = NULL,z_48 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,f_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL;
  q_48 = t;
  if(match_cons(t, sym_Seq_2))
    {
      s_48 = ATgetArgument(t, 0);
      d_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_48;
  if(match_cons(t, sym_CallT_3))
    {
      x_48 = ATgetArgument(t, 0);
      b_49 = ATgetArgument(t, 1);
      c_49 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_48;
  if(match_cons(t, sym_SVar_1))
    {
      z_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_48;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = b_49;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = c_49;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = d_49;
  if(match_cons(t, sym_Seq_2))
    {
      f_49 = ATgetArgument(t, 0);
      s_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_49;
  if(match_cons(t, sym_Match_1))
    {
      r_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_49;
  if(match_cons(t, sym_Build_1))
    {
      t_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_36 = t;
    int r_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_26 = NULL,m_26 = NULL,u_26 = NULL,v_26 = NULL;
        t = term_t_36;
        u_26 = t;
        t = term_u_36;
        v_26 = t;
        t = term_v_36;
        t = g_13(v_26, u_26, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_36 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_36) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            i_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, i_26, r_49, t_49);
        t = x_10(i_26, r_49, t_49, t);
        m_26 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_49), (ATerm) ATmakeAppl(sym_Build_1, m_26));
        LocalPopChoice(r_36);
      }
    else
      {
        t = q_36;
        {
          ATerm f_27 = NULL,l_27 = NULL,s_28 = NULL,w_28 = NULL;
          t = term_t_36;
          s_28 = t;
          t = term_u_36;
          w_28 = t;
          t = term_v_36;
          t = g_13(w_28, s_28, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm x_36 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_36) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              f_27 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_49;
          t = free_vars_3_0(c_5, d_5, tboundin_3_0, t);
          {
            static ATerm i_5 (ATerm t);
            static ATerm i_5 (ATerm t)
            {
              static ATerm j_5 (ATerm t);
              static ATerm j_5 (ATerm t)
              {
                ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
                m_28 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, f_27, (ATerm) ATmakeAppl(sym_Var_1, m_28));
                n_28 = t;
                t = term_z_36;
                o_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, f_27, (ATerm) ATmakeAppl(sym_Var_1, m_28)), term_z_36);
                t = h_13(k_5, n_28, o_28, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, m_28);
                return(t);
              }
              t = map_1_0(j_5, t);
              t = t_49;
              t = alltd_1_0(Replace_0_0, t);
              if(((l_27 != NULL) && (l_27 != t)))
                _fail(t);
              else
                l_27 = t;
              return(t);
            }
            t = scope_2_0(h_5, i_5, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_49), (ATerm) ATmakeAppl(sym_Build_1, not_null(l_27)));
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  static ATerm m_5 (ATerm t);
  static ATerm m_5 (ATerm t)
  {
    ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL,s_52 = NULL;
    s_52 = t;
    if(match_cons(t, sym_Seq_2))
      {
        e_52 = ATgetArgument(t, 0);
        p_52 = ATgetArgument(t, 1);
        t = e_52;
        if(match_cons(t, sym_Choice_2))
          {
            f_52 = ATgetArgument(t, 0);
            l_52 = ATgetArgument(t, 1);
            {
              ATerm a_37 = t;
              int b_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_30 = NULL,f_30 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_c_37, p_52);
                  e_30 = t;
                  t = term_d_37;
                  f_30 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_d_37, (ATerm) ATmakeAppl(sym_Seq_2, term_c_37, p_52));
                  t = g_13(f_30, e_30, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm e_37 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) e_37) != ATmakeSymbol("j_1", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, f_52, p_52), (ATerm) ATmakeAppl(sym_Seq_2, l_52, p_52));
                  t = bottomup_1_0(m_5, t);
                  LocalPopChoice(b_37);
                }
              else
                {
                  t = a_37;
                  t = s_52;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                f_52 = ATgetArgument(t, 0);
                l_52 = ATgetArgument(t, 1);
                {
                  ATerm f_37 = t;
                  int g_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_31 = NULL,j_31 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_h_37, p_52);
                      i_31 = t;
                      t = term_i_37;
                      j_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_i_37, (ATerm) ATmakeAppl(sym_Seq_2, term_h_37, p_52));
                      t = g_13(j_31, i_31, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm j_37 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) j_37) != ATmakeSymbol("l_1", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, f_52, p_52), (ATerm) ATmakeAppl(sym_Seq_2, l_52, p_52));
                      t = bottomup_1_0(m_5, t);
                      LocalPopChoice(g_37);
                    }
                  else
                    {
                      t = f_37;
                      t = s_52;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    f_52 = ATgetArgument(t, 0);
                    l_52 = ATgetArgument(t, 1);
                    {
                      ATerm k_37 = t;
                      int l_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_53 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_52, p_52);
                          t = m_5(t);
                          b_53 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, f_52, b_53);
                          t = m_5(t);
                          LocalPopChoice(l_37);
                        }
                      else
                        {
                          t = k_37;
                          t = s_52;
                        }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        f_52 = ATgetArgument(t, 0);
                        l_52 = ATgetArgument(t, 1);
                        {
                          ATerm m_37 = t;
                          int o_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_53 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, l_52, p_52);
                              t = m_5(t);
                              i_53 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, f_52, i_53);
                              t = m_5(t);
                              LocalPopChoice(o_37);
                            }
                          else
                            {
                              t = m_37;
                              t = s_52;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            f_52 = ATgetArgument(t, 0);
                            {
                              ATerm p_37 = t;
                              int q_37 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_53 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, p_52, f_52);
                                  t = m_5(t);
                                  n_53 = t;
                                  t = (ATerm) ATmakeAppl(sym_Build_1, n_53);
                                  t = m_5(t);
                                  LocalPopChoice(q_37);
                                }
                              else
                                {
                                  t = p_37;
                                  t = s_52;
                                }
                            }
                          }
                        else
                          {
                            t = s_52;
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
            e_52 = ATgetArgument(t, 0);
            p_52 = ATgetArgument(t, 1);
            t = e_52;
            if(match_cons(t, sym_LChoice_2))
              {
                f_52 = ATgetArgument(t, 0);
                l_52 = ATgetArgument(t, 1);
                {
                  ATerm r_37 = t;
                  int s_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_53 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, l_52, p_52);
                      t = m_5(t);
                      y_53 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, f_52, y_53);
                      t = m_5(t);
                      LocalPopChoice(s_37);
                    }
                  else
                    {
                      t = r_37;
                      t = s_52;
                    }
                }
              }
            else
              {
                t = s_52;
              }
          }
        else
          {
            if(match_cons(t, sym_Choice_2))
              {
                e_52 = ATgetArgument(t, 0);
                p_52 = ATgetArgument(t, 1);
                t = e_52;
                if(match_cons(t, sym_Choice_2))
                  {
                    f_52 = ATgetArgument(t, 0);
                    l_52 = ATgetArgument(t, 1);
                    {
                      ATerm t_37 = t;
                      int u_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_54 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, l_52, p_52);
                          t = m_5(t);
                          g_54 = t;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, f_52, g_54);
                          t = m_5(t);
                          LocalPopChoice(u_37);
                        }
                      else
                        {
                          t = t_37;
                          t = s_52;
                        }
                    }
                  }
                else
                  {
                    t = s_52;
                  }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    e_52 = ATgetArgument(t, 0);
                    p_52 = ATgetArgument(t, 1);
                    t = p_52;
                    if(match_cons(t, sym_Op_2))
                      {
                        q_52 = ATgetArgument(t, 0);
                        r_52 = ATgetArgument(t, 1);
                        t = e_52;
                        if(match_cons(t, sym_CallT_3))
                          {
                            f_52 = ATgetArgument(t, 0);
                            l_52 = ATgetArgument(t, 1);
                            o_52 = ATgetArgument(t, 2);
                            t = o_52;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                t = l_52;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    m_52 = ATgetFirst((ATermList) t);
                                    n_52 = (ATerm) ATgetNext((ATermList) t);
                                    t = n_52;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = f_52;
                                        if(match_cons(t, sym_SVar_1))
                                          {
                                            g_52 = ATgetArgument(t, 0);
                                            t = g_52;
                                            if(match_string(t, "bottomup_1_0"))
                                              {
                                                ATerm v_37 = t;
                                                int w_37 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm v_54 = NULL;
                                                    t = r_52;
                                                    {
                                                      static ATerm n_5 (ATerm t);
                                                      static ATerm n_5 (ATerm t)
                                                      {
                                                        ATerm a_55 = NULL;
                                                        a_55 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_z_37, (ATerm)ATinsert(ATempty, m_52), (ATerm) ATempty), a_55);
                                                        return(t);
                                                      }
                                                      t = map_1_0(n_5, t);
                                                    }
                                                    v_54 = t;
                                                    t = (ATerm) ATmakeAppl(sym_App_2, m_52, (ATerm) ATmakeAppl(sym_Op_2, q_52, v_54));
                                                    t = bottomup_1_0(m_5, t);
                                                    LocalPopChoice(w_37);
                                                  }
                                                else
                                                  {
                                                    t = v_37;
                                                    t = s_52;
                                                  }
                                              }
                                            else
                                              {
                                                t = s_52;
                                              }
                                          }
                                        else
                                          {
                                            t = s_52;
                                          }
                                      }
                                    else
                                      {
                                        t = s_52;
                                      }
                                  }
                                else
                                  {
                                    t = s_52;
                                  }
                              }
                            else
                              {
                                t = s_52;
                              }
                          }
                        else
                          {
                            t = s_52;
                          }
                      }
                    else
                      {
                        t = s_52;
                      }
                  }
                else
                  {
                    t = s_52;
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(m_5, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm v_138 (ATerm), ATerm t)
{
  static ATerm o_5 (ATerm t);
  static ATerm o_5 (ATerm t)
  {
    t = bottomup_1_0(v_138, t);
    return(t);
  }
  t = SRTS_all(o_5, t);
  t = v_138(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  static ATerm p_5 (ATerm t);
  static ATerm p_5 (ATerm t)
  {
    ATerm e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
    i_56 = t;
    if(match_cons(t, sym_Seq_2))
      {
        e_56 = ATgetArgument(t, 0);
        f_56 = ATgetArgument(t, 1);
        t = f_56;
        if(match_cons(t, sym_Choice_2))
          {
            g_56 = ATgetArgument(t, 0);
            h_56 = ATgetArgument(t, 1);
            {
              ATerm d_38 = t;
              int k_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_56 = NULL,p_56 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_56, g_56);
                  t = p_5(t);
                  o_56 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_56, h_56);
                  t = p_5(t);
                  p_56 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, o_56, p_56);
                  t = p_5(t);
                  LocalPopChoice(k_38);
                }
              else
                {
                  t = d_38;
                  t = i_56;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                g_56 = ATgetArgument(t, 0);
                h_56 = ATgetArgument(t, 1);
                {
                  ATerm l_38 = t;
                  int q_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_57 = NULL,b_57 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_56, g_56);
                      t = p_5(t);
                      a_57 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_56, h_56);
                      t = p_5(t);
                      b_57 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, a_57, b_57);
                      t = p_5(t);
                      LocalPopChoice(q_38);
                    }
                  else
                    {
                      t = l_38;
                      t = i_56;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    g_56 = ATgetArgument(t, 0);
                    h_56 = ATgetArgument(t, 1);
                    {
                      ATerm s_38 = t;
                      int t_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_58 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, e_56, h_56);
                          t = p_5(t);
                          v_58 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, g_56, v_58);
                          t = p_5(t);
                          LocalPopChoice(t_38);
                        }
                      else
                        {
                          t = s_38;
                          t = i_56;
                        }
                    }
                  }
                else
                  {
                    t = i_56;
                  }
              }
          }
      }
    else
      {
        t = i_56;
      }
    return(t);
  }
  t = bottomup_1_0(p_5, t);
  return(t);
}
ATerm Seq_2_0 (ATerm h_121 (ATerm), ATerm i_121 (ATerm), ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,n_12 = NULL;
  b_60 = t;
  if(match_cons(t, sym_Seq_2))
    {
      v_59 = ATgetArgument(t, 0);
      w_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_60);
  u_59 = t;
  t = v_59;
  t = h_121(t);
  z_59 = t;
  t = w_59;
  t = i_121(t);
  a_60 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, z_59, a_60);
  n_12 = t;
  t = SSLsetAnnotations(n_12, u_59);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,x_13 = NULL;
  t_34 = t;
  if(match_cons(t, sym_Build_1))
    {
      s_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_34);
  r_34 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, s_34);
  x_13 = t;
  t = SSLsetAnnotations(x_13, r_34);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm u_38 = t;
  int x_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_39 = t;
      int f_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          LocalPopChoice(f_39);
        }
      else
        {
          t = a_39;
          {
            ATerm h_39 = t;
            int i_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL;
                b_64 = t;
                if(match_cons(t, sym_Choice_2))
                  {
                    c_64 = ATgetArgument(t, 0);
                    d_64 = ATgetArgument(t, 1);
                    {
                      ATerm t_31 = NULL,w_31 = NULL,x_31 = NULL,s_12 = NULL;
                      t = SSLgetAnnotations(b_64);
                      t_31 = t;
                      t = c_64;
                      t = inline_rules_0_0(t);
                      w_31 = t;
                      t = d_64;
                      t = inline_rules_0_0(t);
                      x_31 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, w_31, x_31);
                      s_12 = t;
                      t = SSLsetAnnotations(s_12, t_31);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        c_64 = ATgetArgument(t, 0);
                        d_64 = ATgetArgument(t, 1);
                        {
                          ATerm m_32 = NULL,p_32 = NULL,s_32 = NULL,c_13 = NULL;
                          t = SSLgetAnnotations(b_64);
                          m_32 = t;
                          t = c_64;
                          t = inline_rules_0_0(t);
                          p_32 = t;
                          t = d_64;
                          t = inline_rules_0_0(t);
                          s_32 = t;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, p_32, s_32);
                          c_13 = t;
                          t = SSLsetAnnotations(c_13, m_32);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            c_64 = ATgetArgument(t, 0);
                            d_64 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm j_39 = t;
                          int k_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,t_13 = NULL,q_13 = NULL,i_13 = NULL,f_13 = NULL;
                              t = SSLgetAnnotations(b_64);
                              e_33 = t;
                              t = d_64;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  l_33 = ATgetArgument(t, 0);
                                  m_33 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(d_64);
                              k_33 = t;
                              t = l_33;
                              if(match_cons(t, sym_Match_1))
                                {
                                  t_33 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(l_33);
                              s_33 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, t_33);
                              f_13 = t;
                              t = SSLsetAnnotations(f_13, s_33);
                              u_33 = t;
                              t = m_33;
                              if(match_cons(t, sym_Build_1))
                                {
                                  p_33 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(m_33);
                              o_33 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, p_33);
                              i_13 = t;
                              t = SSLsetAnnotations(i_13, o_33);
                              r_33 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_33, r_33);
                              q_13 = t;
                              t = SSLsetAnnotations(q_13, k_33);
                              n_33 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, c_64, n_33);
                              t_13 = t;
                              t = SSLsetAnnotations(t_13, e_33);
                              LocalPopChoice(k_39);
                            }
                          else
                            {
                              t = j_39;
                              {
                                ATerm c_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,e_14 = NULL,a_14 = NULL,u_13 = NULL;
                                t = SSLgetAnnotations(b_64);
                                c_34 = t;
                                t = d_64;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    g_34 = ATgetArgument(t, 0);
                                    h_34 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(d_64);
                                f_34 = t;
                                t = g_34;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    n_34 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(g_34);
                                m_34 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, n_34);
                                u_13 = t;
                                t = SSLsetAnnotations(u_13, m_34);
                                o_34 = t;
                                t = h_34;
                                t = Seq_2_0(_id, q_5, t);
                                i_34 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_34, i_34);
                                a_14 = t;
                                t = SSLsetAnnotations(a_14, f_34);
                                l_34 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, c_64, l_34);
                                e_14 = t;
                                t = SSLsetAnnotations(e_14, c_34);
                              }
                            }
                        }
                      }
                  }
                LocalPopChoice(i_39);
              }
            else
              {
                t = h_39;
                t = InlineStrat_0_0(t);
                t = inline_rules_0_0(t);
              }
          }
        }
      LocalPopChoice(x_38);
    }
  else
    {
      t = u_38;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_u_36;
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_d_33;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL,u_64 = NULL,w_64 = NULL,x_64 = NULL;
  q_64 = t;
  t = term_t_36;
  w_64 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_39, q_64);
  x_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_36, (ATerm) ATmakeAppl(sym_Defined_2, term_n_39, q_64));
  t = h_13(r_5, w_64, x_64, t);
  t = term_c_33;
  r_64 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_39, q_64);
  u_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_33, (ATerm) ATmakeAppl(sym_Defined_2, term_o_39, q_64));
  t = h_13(s_5, r_64, u_64, t);
  t = q_64;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_d_37;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_i_37;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm a_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL;
  a_65 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_c_37, a_65);
  h_65 = t;
  t = term_v_39;
  i_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_c_37, a_65), term_v_39);
  t = h_13(w_5, h_65, i_65, t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_h_37, a_65);
  f_65 = t;
  t = term_a_40;
  g_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_h_37, a_65), term_a_40);
  t = h_13(x_5, f_65, g_65, t);
  t = a_65;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm t_65 = NULL,v_65 = NULL,y_65 = NULL;
  t_65 = t;
  t = term_b_40;
  v_65 = t;
  t = (ATerm) ATinsert(ATempty, term_c_40);
  y_65 = t;
  t = SSL_printnl(v_65, y_65);
  t = t_65;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
      {
        ATerm g_40 = t;
        int m_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            LocalPopChoice(m_40);
          }
        else
          {
            t = g_40;
            {
              ATerm e_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  e_66 = ATgetArgument(t, 0);
                  k_66 = ATgetArgument(t, 1);
                  l_66 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = e_66;
              if(match_cons(t, sym_SVar_1))
                {
                  j_66 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = j_66;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = k_66;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_66;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_b_27;
            }
          }
      }
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm n_40 = ATgetArgument(t, 0);
      if(match_cons(n_40, sym_SVar_1))
        {
          ATerm s_40 = ATgetArgument(n_40, 0);
          if((ATgetSymbol((ATermAppl) s_40) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm o_40 = ATgetArgument(t, 1);
        if(((ATgetType(o_40) != AT_LIST) || !(ATisEmpty(o_40))))
          _fail(t);
      }
      {
        ATerm q_40 = ATgetArgument(t, 2);
        if(((ATgetType(q_40) != AT_LIST) || !(ATisEmpty(q_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,t_66 = NULL;
  p_66 = t;
  t = term_b_40;
  q_66 = t;
  t = (ATerm) ATinsert(ATempty, term_t_40);
  t_66 = t;
  t = SSL_printnl(q_66, t_66);
  t = p_66;
  return(t);
}
static ATerm e_11 (ATerm l_26, ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL;
  t = if_verbose2_1_0(a_6, t);
  t = new_0_0(t);
  r_65 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_37, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_65), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_37, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_65), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = l_26;
  t = inline_rules_0_0(t);
  q_65 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_37, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, r_65, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_t_32, q_65), (ATerm) ATmakeAppl(sym_CallT_3, term_z_37, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_65), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_b_27))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(d_6, t);
  {
    ATerm v_40 = t;
    if((PushChoice() == 0))
      {
        ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL;
        t = oncetd_1_0(e_6, t);
        m_66 = t;
        t = term_b_40;
        n_66 = t;
        t = (ATerm) ATinsert(ATempty, term_z_40);
        o_66 = t;
        t = SSL_printnl(n_66, o_66);
        t = m_66;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_40;
      }
  }
  t = desugar_0_0(t);
  t = if_verbose1_1_0(f_6, t);
  return(t);
}
ATerm alltd_1_0 (ATerm m_140 (ATerm), ATerm t)
{
  static ATerm u_66 (ATerm t);
  static ATerm u_66 (ATerm t)
  {
    ATerm a_41 = t;
    int c_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_140(t);
        LocalPopChoice(c_41);
      }
    else
      {
        t = a_41;
        t = SRTS_all(u_66, t);
      }
    return(t);
  }
  t = u_66(t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm r_69 = NULL,v_69 = NULL,w_69 = NULL;
  r_69 = t;
  t = term_b_40;
  v_69 = t;
  t = (ATerm) ATinsert(ATempty, term_e_41);
  w_69 = t;
  t = SSL_printnl(v_69, w_69);
  t = r_69;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = debug_1_0(n_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_g_41;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,f_71 = NULL;
  a_71 = t;
  t = term_b_40;
  b_71 = t;
  t = (ATerm) ATinsert(ATempty, term_i_41);
  f_71 = t;
  t = SSL_printnl(b_71, f_71);
  t = a_71;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL;
  m_69 = t;
  t = new_0_0(t);
  l_69 = t;
  {
    ATerm k_41 = t;
    int n_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_37, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_69), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(n_41);
      }
    else
      {
        t = k_41;
        t = if_verbose2_1_0(k_6, t);
        _fail(t);
      }
  }
  {
    ATerm e_42 = t;
    int f_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL,k_70 = NULL,l_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,y_70 = NULL,z_70 = NULL;
        x_69 = t;
        if(match_cons(t, sym_Seq_2))
          {
            y_69 = ATgetArgument(t, 0);
            t_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_69;
        if(match_cons(t, sym_All_1))
          {
            z_69 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_69;
        if(match_cons(t, sym_CallT_3))
          {
            a_70 = ATgetArgument(t, 0);
            e_70 = ATgetArgument(t, 1);
            s_70 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = a_70;
        if(match_cons(t, sym_SVar_1))
          {
            d_70 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_70;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = e_70;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_70 = ATgetFirst((ATermList) t);
            r_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_70;
        if(match_cons(t, sym_CallT_3))
          {
            g_70 = ATgetArgument(t, 0);
            l_70 = ATgetArgument(t, 1);
            q_70 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = g_70;
        if(match_cons(t, sym_SVar_1))
          {
            k_70 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_70;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_70;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_70;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_70;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_70;
        if(match_cons(t, sym_CallT_3))
          {
            u_70 = ATgetArgument(t, 0);
            y_70 = ATgetArgument(t, 1);
            z_70 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = u_70;
        if(match_cons(t, sym_SVar_1))
          {
            v_70 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_70;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_70;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_70;
        if((l_69 != t))
          {
            _fail(t);
          }
        t = v_70;
        if((k_70 != t))
          {
            _fail(t);
          }
        t = x_69;
        LocalPopChoice(f_42);
      }
    else
      {
        t = e_42;
        t = if_verbose1_1_0(m_6, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(o_6, t);
  t = m_69;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL;
  g_76 = t;
  t = term_b_40;
  h_76 = t;
  t = (ATerm) ATinsert(ATempty, term_g_42);
  i_76 = t;
  t = SSL_printnl(h_76, i_76);
  t = g_76;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = debug_1_0(t_6, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_l_42;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm l_80 = NULL,m_80 = NULL,o_80 = NULL;
  l_80 = t;
  t = term_b_40;
  m_80 = t;
  t = (ATerm) ATinsert(ATempty, term_o_42);
  o_80 = t;
  t = SSL_printnl(m_80, o_80);
  t = l_80;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm c_76 = NULL,f_76 = NULL;
  f_76 = t;
  t = new_0_0(t);
  c_76 = t;
  {
    ATerm q_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_42, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_76), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(v_42);
      }
    else
      {
        t = q_42;
        t = if_verbose2_1_0(q_6, t);
        _fail(t);
      }
  }
  {
    ATerm a_43 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,k_77 = NULL,p_77 = NULL,q_77 = NULL,s_77 = NULL,d_78 = NULL,e_78 = NULL,h_78 = NULL,n_78 = NULL,o_78 = NULL,q_78 = NULL,s_78 = NULL,w_78 = NULL,x_78 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,k_79 = NULL,l_79 = NULL,m_79 = NULL,n_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,h_80 = NULL,i_80 = NULL;
        h_78 = t;
        if(match_cons(t, sym_CallT_3))
          {
            n_78 = ATgetArgument(t, 0);
            q_78 = ATgetArgument(t, 1);
            i_80 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = n_78;
        if(match_cons(t, sym_SVar_1))
          {
            o_78 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_78;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = q_78;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_78 = ATgetFirst((ATermList) t);
            h_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_78;
        if(match_cons(t, sym_CallT_3))
          {
            w_78 = ATgetArgument(t, 0);
            x_78 = ATgetArgument(t, 1);
            l_76 = ATgetArgument(t, 2);
            t = w_78;
            if(match_cons(t, sym_SVar_1))
              {
                j_76 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_76;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
              _fail(t);
            t = x_78;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_79 = ATgetFirst((ATermList) t);
                e_80 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_79;
            if(match_cons(t, sym_Seq_2))
              {
                d_79 = ATgetArgument(t, 0);
                k_79 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_79;
            if(match_cons(t, sym_CallT_3))
              {
                e_79 = ATgetArgument(t, 0);
                g_79 = ATgetArgument(t, 1);
                h_79 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = e_79;
            if(match_cons(t, sym_SVar_1))
              {
                f_79 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_79;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = h_79;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = k_79;
            if(match_cons(t, sym_CallT_3))
              {
                l_79 = ATgetArgument(t, 0);
                n_79 = ATgetArgument(t, 1);
                d_80 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = l_79;
            if(match_cons(t, sym_SVar_1))
              {
                m_79 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_79;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
              _fail(t);
            t = n_79;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                x_79 = ATgetFirst((ATermList) t);
                c_80 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_79;
            if(match_cons(t, sym_CallT_3))
              {
                y_79 = ATgetArgument(t, 0);
                a_80 = ATgetArgument(t, 1);
                b_80 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = y_79;
            if(match_cons(t, sym_SVar_1))
              {
                z_79 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_80;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = b_80;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = c_80;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = d_80;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = e_80;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_76;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = h_80;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = i_80;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_79;
            if((c_76 != t))
              {
                _fail(t);
              }
            t = z_79;
            if((f_79 != t))
              {
                _fail(t);
              }
            t = h_78;
          }
        else
          {
            if(match_cons(t, sym_Rec_2))
              {
                w_78 = ATgetArgument(t, 0);
                x_78 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_78;
            if(match_cons(t, sym_CallT_3))
              {
                c_79 = ATgetArgument(t, 0);
                e_80 = ATgetArgument(t, 1);
                e_78 = ATgetArgument(t, 2);
                t = c_79;
                if(match_cons(t, sym_SVar_1))
                  {
                    d_79 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = d_79;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                  _fail(t);
                t = e_80;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_76 = ATgetFirst((ATermList) t);
                    d_78 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = m_76;
                if(match_cons(t, sym_Seq_2))
                  {
                    n_76 = ATgetArgument(t, 0);
                    w_76 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = n_76;
                if(match_cons(t, sym_CallT_3))
                  {
                    o_76 = ATgetArgument(t, 0);
                    u_76 = ATgetArgument(t, 1);
                    v_76 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = o_76;
                if(match_cons(t, sym_SVar_1))
                  {
                    t_76 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = u_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_76;
                if(match_cons(t, sym_CallT_3))
                  {
                    d_77 = ATgetArgument(t, 0);
                    f_77 = ATgetArgument(t, 1);
                    s_77 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = d_77;
                if(match_cons(t, sym_SVar_1))
                  {
                    e_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_77;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = f_77;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    g_77 = ATgetFirst((ATermList) t);
                    q_77 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = g_77;
                if(match_cons(t, sym_CallT_3))
                  {
                    h_77 = ATgetArgument(t, 0);
                    k_77 = ATgetArgument(t, 1);
                    p_77 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = h_77;
                if(match_cons(t, sym_SVar_1))
                  {
                    i_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = k_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_78;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_78;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_80;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_80;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_76;
                if((c_76 != t))
                  {
                    _fail(t);
                  }
                t = i_77;
                if((w_78 != t))
                  {
                    _fail(t);
                  }
                t = h_78;
              }
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    c_79 = ATgetArgument(t, 0);
                    e_80 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_79;
                if(match_cons(t, sym_Seq_2))
                  {
                    d_79 = ATgetArgument(t, 0);
                    k_79 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_79;
                if(match_cons(t, sym_CallT_3))
                  {
                    e_79 = ATgetArgument(t, 0);
                    g_79 = ATgetArgument(t, 1);
                    h_79 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = e_79;
                if(match_cons(t, sym_SVar_1))
                  {
                    f_79 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = g_79;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_79;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_79;
                if(match_cons(t, sym_CallT_3))
                  {
                    l_79 = ATgetArgument(t, 0);
                    n_79 = ATgetArgument(t, 1);
                    d_80 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = l_79;
                if(match_cons(t, sym_SVar_1))
                  {
                    m_79 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_79;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = n_79;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_79 = ATgetFirst((ATermList) t);
                    c_80 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = x_79;
                if(match_cons(t, sym_CallT_3))
                  {
                    y_79 = ATgetArgument(t, 0);
                    a_80 = ATgetArgument(t, 1);
                    b_80 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = y_79;
                if(match_cons(t, sym_SVar_1))
                  {
                    z_79 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_80;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_80;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_80;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_80;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_80;
                if(!(match_cons(t, sym_Id_0)))
                  _fail(t);
                t = h_80;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_80;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_79;
                if((c_76 != t))
                  {
                    _fail(t);
                  }
                t = z_79;
                if((w_78 != t))
                  {
                    _fail(t);
                  }
                t = h_78;
              }
          }
        LocalPopChoice(b_43);
      }
    else
      {
        t = a_43;
        t = if_verbose1_1_0(r_6, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(w_6, t);
  t = f_76;
  return(t);
}
ATerm debug_1_0 (ATerm u_147 (ATerm), ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL,v_80 = NULL;
  q_80 = t;
  t = u_147(t);
  r_80 = t;
  t = term_b_40;
  s_80 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_80), r_80);
  v_80 = t;
  t = SSL_printnl(s_80, v_80);
  t = q_80;
  return(t);
}
ATerm topdown_1_0 (ATerm u_138 (ATerm), ATerm t)
{
  static ATerm y_6 (ATerm t);
  static ATerm y_6 (ATerm t)
  {
    t = topdown_1_0(u_138, t);
    return(t);
  }
  t = u_138(t);
  t = SRTS_all(y_6, t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm c_43 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm e_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(d_43);
      {
        ATerm y_80 = NULL,b_81 = NULL;
        y_80 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm f_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        b_81 = t;
        t = SSLgetAnnotations(y_80);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_43 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) j_43) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_43 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(k_43) != AT_LIST) || !(ATisEmpty(k_43))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_81;
      }
    }
  else
    {
      t = c_43;
      {
        ATerm l_43 = t;
        int m_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm n_43 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) n_43) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm o_43 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(m_43);
            _fail(t);
          }
        else
          {
            t = l_43;
          }
      }
    }
  return(t);
}
static ATerm g_11 (ATerm m_83, ATerm l_83, ATerm t)
{
  t = m_83;
  t = topdown_1_0(z_6, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, m_83);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm q_81 = NULL,r_81 = NULL,g_82 = NULL,k_82 = NULL,m_82 = NULL,v_82 = NULL,i_83 = NULL,j_83 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      g_82 = ATgetArgument(t, 0);
      v_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_82;
  if(match_cons(t, sym_Match_1))
    {
      k_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_82;
  if(match_cons(t, sym_Var_1))
    {
      m_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_82;
  if(match_cons(t, sym_Seq_2))
    {
      i_83 = ATgetArgument(t, 0);
      r_81 = ATgetArgument(t, 1);
      t = i_83;
      if(match_cons(t, sym_Build_1))
        {
          j_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_83;
      if(match_cons(t, sym_Var_1))
        {
          q_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_81;
      if((m_82 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_82)), r_81);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_83;
      if(match_cons(t, sym_Var_1))
        {
          j_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_83;
      if((m_82 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_82));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm v_83 = NULL,y_83 = NULL,n_84 = NULL,p_84 = NULL,s_84 = NULL,w_84 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      n_84 = ATgetArgument(t, 0);
      s_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_84;
  if(match_cons(t, sym_Build_1))
    {
      p_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_84;
  if(match_cons(t, sym_Seq_2))
    {
      w_84 = ATgetArgument(t, 0);
      y_83 = ATgetArgument(t, 1);
      t = w_84;
      if(match_cons(t, sym_Match_1))
        {
          v_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_83;
      if((p_84 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_84), y_83);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          w_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_84;
      if((p_84 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, p_84);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm y_85 = NULL,z_85 = NULL,c_86 = NULL,o_86 = NULL,v_86 = NULL,c_87 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_86 = ATgetArgument(t, 0);
      v_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_86;
  if(match_cons(t, sym_Match_1))
    {
      o_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_86;
  if(match_cons(t, sym_Seq_2))
    {
      c_87 = ATgetArgument(t, 0);
      z_85 = ATgetArgument(t, 1);
      t = c_87;
      if(match_cons(t, sym_Match_1))
        {
          y_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_85;
      if((o_86 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_86), z_85);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          c_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_87;
      if((o_86 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, o_86);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm u_87 = NULL,v_87 = NULL,w_87 = NULL,b_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL,h_88 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_88 = ATgetArgument(t, 0);
      e_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_88;
  if(match_cons(t, sym_Build_1))
    {
      ATerm q_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_88;
  if(match_cons(t, sym_Seq_2))
    {
      f_88 = ATgetArgument(t, 0);
      g_88 = ATgetArgument(t, 1);
      t = f_88;
      if(match_cons(t, sym_PrimT_3))
        {
          u_87 = ATgetArgument(t, 0);
          v_87 = ATgetArgument(t, 1);
          w_87 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, u_87, v_87, w_87), g_88);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          f_88 = ATgetArgument(t, 0);
          g_88 = ATgetArgument(t, 1);
          h_88 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, f_88, g_88, h_88);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm e_89 = NULL,h_89 = NULL,j_89 = NULL,l_89 = NULL,o_89 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      j_89 = ATgetArgument(t, 0);
      l_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_89;
  if(match_cons(t, sym_Build_1))
    {
      ATerm r_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_89;
  if(match_cons(t, sym_Seq_2))
    {
      o_89 = ATgetArgument(t, 0);
      h_89 = ATgetArgument(t, 1);
      t = o_89;
      if(match_cons(t, sym_Build_1))
        {
          e_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_89), h_89);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          o_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, o_89);
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_43 = ATgetArgument(t, 0);
      if(((ATgetType(s_43) != AT_LIST) || !(ATisEmpty(s_43))))
        _fail(t);
      {
        ATerm t_43 = ATgetArgument(t, 1);
        if(((ATgetType(t_43) != AT_LIST) || !(ATisEmpty(t_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_43 = ATgetArgument(t, 0);
      if(((ATgetType(x_43) == AT_LIST) && !(ATisEmpty(x_43))))
        {
          l_91 = ATgetFirst((ATermList) x_43);
          m_91 = (ATerm) ATgetNext((ATermList) x_43);
        }
      else
        _fail(t);
      {
        ATerm y_43 = ATgetArgument(t, 1);
        if(((ATgetType(y_43) == AT_LIST) && !(ATisEmpty(y_43))))
          {
            n_91 = ATgetFirst((ATermList) y_43);
            o_91 = (ATerm) ATgetNext((ATermList) y_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_91, n_91), (ATerm) ATmakeAppl(sym__2, m_91, o_91));
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm p_91 = NULL,q_91 = NULL;
  if(match_cons(t, sym__2))
    {
      p_91 = ATgetArgument(t, 0);
      q_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_91), p_91);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm r_91 = NULL,s_91 = NULL;
  if(match_cons(t, sym__2))
    {
      r_91 = ATgetArgument(t, 0);
      s_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_91), (ATerm) ATmakeAppl(sym_Match_1, s_91));
  return(t);
}
static ATerm f_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_43 = ATgetArgument(t, 0);
      if(((ATgetType(z_43) != AT_LIST) || !(ATisEmpty(z_43))))
        _fail(t);
      {
        ATerm a_44 = ATgetArgument(t, 1);
        if(((ATgetType(a_44) != AT_LIST) || !(ATisEmpty(a_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL,a_92 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_44 = ATgetArgument(t, 0);
      if(((ATgetType(b_44) == AT_LIST) && !(ATisEmpty(b_44))))
        {
          x_91 = ATgetFirst((ATermList) b_44);
          y_91 = (ATerm) ATgetNext((ATermList) b_44);
        }
      else
        _fail(t);
      {
        ATerm d_44 = ATgetArgument(t, 1);
        if(((ATgetType(d_44) == AT_LIST) && !(ATisEmpty(d_44))))
          {
            z_91 = ATgetFirst((ATermList) d_44);
            a_92 = (ATerm) ATgetNext((ATermList) d_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_91, z_91), (ATerm) ATmakeAppl(sym__2, y_91, a_92));
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm b_92 = NULL,c_92 = NULL;
  if(match_cons(t, sym__2))
    {
      b_92 = ATgetArgument(t, 0);
      c_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_92), b_92);
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm d_92 = NULL,g_92 = NULL;
  if(match_cons(t, sym__2))
    {
      d_92 = ATgetArgument(t, 0);
      g_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_92), (ATerm) ATmakeAppl(sym_Match_1, g_92));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm d_90 = NULL,e_90 = NULL,f_90 = NULL,i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL,o_90 = NULL,r_90 = NULL,w_90 = NULL,b_91 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_90 = ATgetArgument(t, 0);
      o_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_90;
  if(match_cons(t, sym_Build_1))
    {
      j_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_90;
  if(match_cons(t, sym_Op_2))
    {
      k_90 = ATgetArgument(t, 0);
      l_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_90;
  if(match_cons(t, sym_Seq_2))
    {
      r_90 = ATgetArgument(t, 0);
      f_90 = ATgetArgument(t, 1);
      {
        ATerm k_91 = NULL;
        t = r_90;
        if(match_cons(t, sym_Match_1))
          {
            w_90 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_90;
        if(match_cons(t, sym_Op_2))
          {
            d_90 = ATgetArgument(t, 0);
            e_90 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_90;
        if((k_90 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, l_90, e_90);
        t = genzip_4_0(a_7, b_7, c_7, d_7, t);
        k_91 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_91), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, k_90, l_90)), f_90));
      }
    }
  else
    {
      ATerm w_91 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          r_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_90;
      if(match_cons(t, sym_Op_2))
        {
          w_90 = ATgetArgument(t, 0);
          b_91 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_90;
      if((k_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, l_90, b_91);
      t = genzip_4_0(f_7, i_7, l_7, p_7, t);
      w_91 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_91), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, k_90, l_90)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm z_93 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,k_94 = NULL,n_94 = NULL,s_94 = NULL;
  e_94 = t;
  if(match_cons(t, sym_Seq_2))
    {
      f_94 = ATgetArgument(t, 0);
      k_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_94;
  if(match_cons(t, sym_Build_1))
    {
      g_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_94;
  if(match_cons(t, sym_Op_2))
    {
      h_94 = ATgetArgument(t, 0);
      {
        ATerm e_44 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = k_94;
  {
    ATerm f_44 = t;
    int g_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            n_94 = ATgetArgument(t, 0);
            {
              ATerm j_44 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(g_44);
        t = n_94;
        if(match_cons(t, sym_Match_1))
          {
            s_94 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_94;
        if(match_cons(t, sym_Op_2))
          {
            z_93 = ATgetArgument(t, 0);
            {
              ATerm q_44 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_94, z_93);
        {
          ATerm t_44 = t;
          if((PushChoice() == 0))
            {
              ATerm c_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  c_35 = ATgetArgument(t, 0);
                  if((c_35 != ATgetArgument(t, 1)))
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
              t = t_44;
            }
        }
        t = term_x_44;
      }
    else
      {
        t = f_44;
        if(match_cons(t, sym_Match_1))
          {
            n_94 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_94;
        if(match_cons(t, sym_Op_2))
          {
            s_94 = ATgetArgument(t, 0);
            {
              ATerm y_44 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_94, s_94);
        {
          ATerm z_44 = t;
          if((PushChoice() == 0))
            {
              ATerm w_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  w_35 = ATgetArgument(t, 0);
                  if((w_35 != ATgetArgument(t, 1)))
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
              t = z_44;
            }
        }
        t = term_x_44;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm y_139 (ATerm), ATerm t)
{
  static ATerm m_95 (ATerm t);
  static ATerm m_95 (ATerm t)
  {
    ATerm a_45 = t;
    int b_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_139(t);
        LocalPopChoice(b_45);
      }
    else
      {
        t = a_45;
        t = SRTS_one(m_95, t);
      }
    return(t);
  }
  t = m_95(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm o_97 = NULL,q_97 = NULL,t_97 = NULL,v_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,d_98 = NULL,e_98 = NULL,h_98 = NULL,j_98 = NULL,n_98 = NULL,o_98 = NULL;
  o_97 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_97 = ATgetArgument(t, 0);
      e_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_98;
  if(match_cons(t, sym_Let_2))
    {
      h_98 = ATgetArgument(t, 0);
      n_98 = ATgetArgument(t, 1);
      {
        ATerm v_98 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, q_97, h_98);
        t = conc_0_0(t);
        v_98 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, v_98, n_98);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          h_98 = ATgetArgument(t, 0);
          n_98 = ATgetArgument(t, 1);
          o_98 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_97;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_97 = ATgetFirst((ATermList) t);
          d_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_97;
      if(match_cons(t, sym_SDefT_4))
        {
          v_97 = ATgetArgument(t, 0);
          z_97 = ATgetArgument(t, 1);
          a_98 = ATgetArgument(t, 2);
          b_98 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = z_97;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_98;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_98;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_98;
      if(match_cons(t, sym_SVar_1))
        {
          j_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_98;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_98;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_98;
      if((v_97 != t))
        {
          _fail(t);
        }
      t = b_98;
      {
        ATerm c_45 = t;
        if((PushChoice() == 0))
          {
            static ATerm s_7 (ATerm t);
            static ATerm s_7 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm d_45 = ATgetArgument(t, 0);
                  if(match_cons(d_45, sym_SVar_1))
                    {
                      if((v_97 != ATgetArgument(d_45, 0)))
                        {
                          _fail(ATgetArgument(d_45, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm e_45 = ATgetArgument(t, 1);
                    if(((ATgetType(e_45) != AT_LIST) || !(ATisEmpty(e_45))))
                      _fail(t);
                  }
                  {
                    ATerm f_45 = ATgetArgument(t, 2);
                    if(((ATgetType(f_45) != AT_LIST) || !(ATisEmpty(f_45))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(s_7, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = c_45;
          }
      }
      t = b_98;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm n_99 = NULL,r_99 = NULL,s_99 = NULL,t_99 = NULL,w_99 = NULL,x_99 = NULL,b_100 = NULL,c_100 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      b_100 = ATgetArgument(t, 0);
      t = b_100;
      if(match_cons(t, sym_Seq_2))
        {
          x_99 = ATgetArgument(t, 0);
          r_99 = ATgetArgument(t, 1);
          t = x_99;
          if(match_cons(t, sym_Where_1))
            {
              n_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_99;
          if(match_cons(t, sym_Seq_2))
            {
              s_99 = ATgetArgument(t, 0);
              w_99 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_99;
          if(match_cons(t, sym_Build_1))
            {
              t_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, n_99, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_99), w_99)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              x_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, x_99);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          b_100 = ATgetArgument(t, 0);
          t = b_100;
          if(match_cons(t, sym_Test_1))
            {
              x_99 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, x_99);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              b_100 = ATgetArgument(t, 0);
              t = b_100;
              if(match_cons(t, sym_Not_1))
                {
                  x_99 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, x_99);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  b_100 = ATgetArgument(t, 0);
                  c_100 = ATgetArgument(t, 1);
                  t = c_100;
                  if((b_100 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      b_100 = ATgetArgument(t, 0);
                      c_100 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_100;
                  if((b_100 != t))
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
  ATerm y_101 = NULL,z_101 = NULL,a_102 = NULL,y_102 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      y_101 = ATgetArgument(t, 0);
      y_102 = ATgetArgument(t, 1);
      t = y_101;
      if(match_cons(t, sym_LChoice_2))
        {
          z_101 = ATgetArgument(t, 0);
          a_102 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, z_101, (ATerm) ATmakeAppl(sym_LChoice_2, a_102, y_102));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          y_101 = ATgetArgument(t, 0);
          y_102 = ATgetArgument(t, 1);
          t = y_101;
          if(match_cons(t, sym_Seq_2))
            {
              z_101 = ATgetArgument(t, 0);
              a_102 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, z_101, (ATerm) ATmakeAppl(sym_Seq_2, a_102, y_102));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              y_101 = ATgetArgument(t, 0);
              y_102 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_101;
          if(match_cons(t, sym_Choice_2))
            {
              z_101 = ATgetArgument(t, 0);
              a_102 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, z_101, (ATerm) ATmakeAppl(sym_Choice_2, a_102, y_102));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm i_106 = NULL,j_106 = NULL,m_106 = NULL,r_106 = NULL,s_106 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      r_106 = ATgetArgument(t, 0);
      s_106 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, r_106, s_106);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          r_106 = ATgetArgument(t, 0);
          t = r_106;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_106 = ATgetFirst((ATermList) t);
              j_106 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, i_106, (ATerm) ATmakeAppl(sym_LChoices_1, j_106));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_x_44;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              r_106 = ATgetArgument(t, 0);
              t = r_106;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_106 = ATgetFirst((ATermList) t);
                  j_106 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, i_106, (ATerm) ATmakeAppl(sym_Choices_1, j_106));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_x_44;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  r_106 = ATgetArgument(t, 0);
                  t = r_106;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      i_106 = ATgetFirst((ATermList) t);
                      j_106 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, i_106, (ATerm) ATmakeAppl(sym_Seqs_1, j_106));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_b_27;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      r_106 = ATgetArgument(t, 0);
                      s_106 = ATgetArgument(t, 1);
                      m_106 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, s_106, (ATerm) ATmakeAppl(sym_Op_2, term_i_24, (ATerm) ATinsert(ATinsert(ATempty, m_106), r_106)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          r_106 = ATgetArgument(t, 0);
                          s_106 = ATgetArgument(t, 1);
                          m_106 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, m_106)), r_106), (ATerm) ATmakeAppl(sym_Build_1, s_106)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              r_106 = ATgetArgument(t, 0);
                              s_106 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_106, (ATerm) ATmakeAppl(sym_Match_1, s_106));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  r_106 = ATgetArgument(t, 0);
                                  s_106 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_106), s_106);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      r_106 = ATgetArgument(t, 0);
                                      s_106 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_106), r_106);
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
static ATerm v_7 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm l_109 = NULL,n_109 = NULL,q_109 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      l_109 = ATgetArgument(t, 0);
      t = l_109;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_x_44;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          l_109 = ATgetArgument(t, 0);
          t = l_109;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_b_27;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              l_109 = ATgetArgument(t, 0);
              n_109 = ATgetArgument(t, 1);
              t = l_109;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_x_44;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  l_109 = ATgetArgument(t, 0);
                  n_109 = ATgetArgument(t, 1);
                  t = n_109;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_x_44;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      l_109 = ATgetArgument(t, 0);
                      n_109 = ATgetArgument(t, 1);
                      t = n_109;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_x_44;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          l_109 = ATgetArgument(t, 0);
                          t = l_109;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_x_44;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              l_109 = ATgetArgument(t, 0);
                              t = l_109;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_x_44;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  l_109 = ATgetArgument(t, 0);
                                  n_109 = ATgetArgument(t, 1);
                                  t = n_109;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_x_44;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      l_109 = ATgetArgument(t, 0);
                                      n_109 = ATgetArgument(t, 1);
                                      t = n_109;
                                      t = fetch_1_0(v_7, t);
                                      t = term_x_44;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          l_109 = ATgetArgument(t, 0);
                                          n_109 = ATgetArgument(t, 1);
                                          t = n_109;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = l_109;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = n_109;
                                                }
                                              else
                                                {
                                                  t = l_109;
                                                }
                                            }
                                          else
                                            {
                                              t = l_109;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = n_109;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              l_109 = ATgetArgument(t, 0);
                                              n_109 = ATgetArgument(t, 1);
                                              t = n_109;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = l_109;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = n_109;
                                                    }
                                                  else
                                                    {
                                                      t = l_109;
                                                    }
                                                }
                                              else
                                                {
                                                  t = l_109;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = n_109;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  l_109 = ATgetArgument(t, 0);
                                                  t = l_109;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_x_44;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      l_109 = ATgetArgument(t, 0);
                                                      n_109 = ATgetArgument(t, 1);
                                                      q_109 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = q_109;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, l_109, n_109);
                                                }
                                            }
                                        }
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
  ATerm q_114 = NULL,s_114 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      s_114 = ATgetArgument(t, 0);
      t = s_114;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_b_27;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          s_114 = ATgetArgument(t, 0);
          t = s_114;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_x_44;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              s_114 = ATgetArgument(t, 0);
              q_114 = ATgetArgument(t, 1);
              t = q_114;
              if(match_cons(t, sym_Id_0))
                {
                  t = s_114;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = q_114;
                    }
                  else
                    {
                      t = s_114;
                    }
                }
              else
                {
                  t = s_114;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = q_114;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  s_114 = ATgetArgument(t, 0);
                  q_114 = ATgetArgument(t, 1);
                  t = s_114;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_b_27;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      s_114 = ATgetArgument(t, 0);
                      q_114 = ATgetArgument(t, 1);
                      t = q_114;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_b_27;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          s_114 = ATgetArgument(t, 0);
                          q_114 = ATgetArgument(t, 1);
                          t = q_114;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_b_27;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              s_114 = ATgetArgument(t, 0);
                              t = s_114;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_b_27;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  s_114 = ATgetArgument(t, 0);
                                  t = s_114;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_b_27;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      s_114 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = s_114;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_b_27;
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
  ATerm g_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(h_45);
    }
  else
    {
      t = g_45;
      {
        ATerm i_45 = t;
        int j_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(j_45);
          }
        else
          {
            t = i_45;
            {
              ATerm k_45 = t;
              int l_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(l_45);
                }
              else
                {
                  t = k_45;
                  {
                    ATerm m_45 = t;
                    int n_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(n_45);
                      }
                    else
                      {
                        t = m_45;
                        {
                          ATerm o_45 = t;
                          int p_45 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(p_45);
                            }
                          else
                            {
                              t = o_45;
                              {
                                ATerm q_45 = t;
                                int r_45 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm a_116 = NULL,d_116 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        a_116 = ATgetArgument(t, 0);
                                        d_116 = ATgetArgument(t, 1);
                                        t = a_116;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = d_116;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            a_116 = ATgetArgument(t, 0);
                                            d_116 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = a_116;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = d_116;
                                      }
                                    LocalPopChoice(r_45);
                                  }
                                else
                                  {
                                    t = q_45;
                                    {
                                      ATerm s_45 = t;
                                      int t_45 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(t_45);
                                        }
                                      else
                                        {
                                          t = s_45;
                                          {
                                            ATerm u_45 = t;
                                            int w_45 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(w_45);
                                              }
                                            else
                                              {
                                                t = u_45;
                                                {
                                                  ATerm a_46 = t;
                                                  int b_46 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(b_46);
                                                    }
                                                  else
                                                    {
                                                      t = a_46;
                                                      {
                                                        ATerm c_46 = t;
                                                        int d_46 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(d_46);
                                                          }
                                                        else
                                                          {
                                                            t = c_46;
                                                            {
                                                              ATerm e_46 = t;
                                                              int h_46 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(h_46);
                                                                }
                                                              else
                                                                {
                                                                  t = e_46;
                                                                  {
                                                                    ATerm k_46 = t;
                                                                    int l_46 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(l_46);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = k_46;
                                                                        {
                                                                          ATerm n_46 = t;
                                                                          int u_46 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(u_46);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = n_46;
                                                                              {
                                                                                ATerm w_46 = t;
                                                                                int x_46 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(x_46);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_46;
                                                                                    {
                                                                                      ATerm h_116 = NULL,j_116 = NULL,o_116 = NULL,p_116 = NULL;
                                                                                      j_116 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          o_116 = ATgetArgument(t, 0);
                                                                                          p_116 = ATgetArgument(t, 1);
                                                                                          t = o_116;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              h_116 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = j_116;
                                                                                          t = g_11(h_116, p_116, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              o_116 = ATgetArgument(t, 0);
                                                                                              p_116 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = o_116;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = p_116;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2_0 (ATerm h_146 (ATerm), ATerm i_146 (ATerm), ATerm t)
{
  static ATerm y_116 (ATerm t);
  static ATerm y_116 (ATerm t)
  {
    ATerm y_46 = t;
    int a_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_146(t);
        t = y_116(t);
        LocalPopChoice(a_47);
      }
    else
      {
        t = y_46;
        t = i_146(t);
      }
    return(t);
  }
  t = y_116(t);
  return(t);
}
ATerm downup_1_0 (ATerm w_138 (ATerm), ATerm t)
{
  t = w_138(t);
  {
    static ATerm z_7 (ATerm t);
    static ATerm z_7 (ATerm t)
    {
      t = downup_1_0(w_138, t);
      return(t);
    }
    t = SRTS_all(z_7, t);
  }
  t = w_138(t);
  return(t);
}
ATerm genzip_4_0 (ATerm m_156 (ATerm), ATerm n_156 (ATerm), ATerm o_156 (ATerm), ATerm p_156 (ATerm), ATerm t)
{
  static ATerm f_117 (ATerm t);
  static ATerm f_117 (ATerm t)
  {
    ATerm d_47 = t;
    int e_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_156(t);
        LocalPopChoice(e_47);
      }
    else
      {
        t = d_47;
        {
          ATerm z_116 = NULL,a_117 = NULL,b_117 = NULL,c_117 = NULL,d_117 = NULL,e_117 = NULL,r_14 = NULL;
          t = n_156(t);
          e_117 = t;
          if(match_cons(t, sym__2))
            {
              a_117 = ATgetArgument(t, 0);
              b_117 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(e_117);
          z_116 = t;
          t = a_117;
          t = p_156(t);
          c_117 = t;
          t = b_117;
          t = f_117(t);
          d_117 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_117, d_117);
          r_14 = t;
          t = SSLsetAnnotations(r_14, z_116);
          t = o_156(t);
        }
      }
    return(t);
  }
  t = f_117(t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_47 = ATgetArgument(t, 0);
      if(((ATgetType(f_47) != AT_LIST) || !(ATisEmpty(f_47))))
        _fail(t);
      {
        ATerm g_47 = ATgetArgument(t, 1);
        if(((ATgetType(g_47) != AT_LIST) || !(ATisEmpty(g_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_8 (ATerm t)
{
  ATerm u_117 = NULL,v_117 = NULL,x_117 = NULL,y_117 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_47 = ATgetArgument(t, 0);
      if(((ATgetType(h_47) == AT_LIST) && !(ATisEmpty(h_47))))
        {
          u_117 = ATgetFirst((ATermList) h_47);
          v_117 = (ATerm) ATgetNext((ATermList) h_47);
        }
      else
        _fail(t);
      {
        ATerm i_47 = ATgetArgument(t, 1);
        if(((ATgetType(i_47) == AT_LIST) && !(ATisEmpty(i_47))))
          {
            x_117 = ATgetFirst((ATermList) i_47);
            y_117 = (ATerm) ATgetNext((ATermList) i_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_117, x_117), (ATerm) ATmakeAppl(sym__2, v_117, y_117));
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm z_117 = NULL,a_118 = NULL;
  if(match_cons(t, sym__2))
    {
      z_117 = ATgetArgument(t, 0);
      a_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_118), z_117);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm l_117 = NULL,m_117 = NULL,n_117 = NULL,o_117 = NULL;
  l_117 = t;
  {
    ATerm j_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_47 = ATgetArgument(t, 0);
            ATerm m_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(k_47);
        t = l_117;
      }
    else
      {
        t = j_47;
        {
          ATerm t_117 = NULL;
          if(match_cons(t, sym__3))
            {
              m_117 = ATgetArgument(t, 0);
              n_117 = ATgetArgument(t, 1);
              o_117 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, m_117, n_117);
          t = genzip_4_0(b_8, c_8, f_8, _id, t);
          t_117 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_117, o_117);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm d_172 (ATerm), ATerm e_172 (ATerm), ATerm t)
{
  ATerm c_118 = NULL,d_118 = NULL;
  static ATerm g_8 (ATerm t);
  static ATerm g_8 (ATerm t)
  {
    ATerm n_37 = NULL;
    t = d_172(t);
    n_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_37, not_null(d_118));
    t = lookup_0_0(t);
    t = e_172(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((d_118 != NULL) && (d_118 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        d_118 = ATgetArgument(t, 0);
      c_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_118;
  t = alltd_1_0(g_8, t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_47 = ATgetArgument(t, 0);
      if(((ATgetType(n_47) != AT_LIST) || !(ATisEmpty(n_47))))
        _fail(t);
      {
        ATerm o_47 = ATgetArgument(t, 1);
        if(((ATgetType(o_47) != AT_LIST) || !(ATisEmpty(o_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,b_39 = NULL,c_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_47 = ATgetArgument(t, 0);
      if(((ATgetType(p_47) == AT_LIST) && !(ATisEmpty(p_47))))
        {
          y_38 = ATgetFirst((ATermList) p_47);
          z_38 = (ATerm) ATgetNext((ATermList) p_47);
        }
      else
        _fail(t);
      {
        ATerm q_47 = ATgetArgument(t, 1);
        if(((ATgetType(q_47) == AT_LIST) && !(ATisEmpty(q_47))))
          {
            b_39 = ATgetFirst((ATermList) q_47);
            c_39 = (ATerm) ATgetNext((ATermList) q_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_38, b_39), (ATerm) ATmakeAppl(sym__2, z_38, c_39));
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL;
  if(match_cons(t, sym__2))
    {
      d_39 = ATgetArgument(t, 0);
      e_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_39), d_39);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm g_39 = NULL,q_39 = NULL,r_39 = NULL,u_39 = NULL,y_39 = NULL;
  if(match_cons(t, sym__2))
    {
      g_39 = ATgetArgument(t, 0);
      y_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_39;
  {
    ATerm r_47 = t;
    int s_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm t_47 = ATgetArgument(t, 0);
            q_39 = ATgetArgument(t, 1);
            r_39 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(s_47);
        t = (ATerm) ATmakeAppl(sym_SDef_3, y_39, q_39, r_39);
      }
    else
      {
        t = r_47;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm u_47 = ATgetArgument(t, 0);
            q_39 = ATgetArgument(t, 1);
            r_39 = ATgetArgument(t, 2);
            u_39 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, y_39, q_39, r_39, u_39);
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_47 = ATgetArgument(t, 0);
      if(((ATgetType(v_47) != AT_LIST) || !(ATisEmpty(v_47))))
        _fail(t);
      {
        ATerm w_47 = ATgetArgument(t, 1);
        if(((ATgetType(w_47) != AT_LIST) || !(ATisEmpty(w_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm o_41 = NULL,q_41 = NULL,c_42 = NULL,i_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_47 = ATgetArgument(t, 0);
      if(((ATgetType(x_47) == AT_LIST) && !(ATisEmpty(x_47))))
        {
          o_41 = ATgetFirst((ATermList) x_47);
          q_41 = (ATerm) ATgetNext((ATermList) x_47);
        }
      else
        _fail(t);
      {
        ATerm z_47 = ATgetArgument(t, 1);
        if(((ATgetType(z_47) == AT_LIST) && !(ATisEmpty(z_47))))
          {
            c_42 = ATgetFirst((ATermList) z_47);
            i_42 = (ATerm) ATgetNext((ATermList) z_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_41, c_42), (ATerm) ATmakeAppl(sym__2, q_41, i_42));
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  if(match_cons(t, sym__2))
    {
      j_42 = ATgetArgument(t, 0);
      k_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_42), j_42);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm m_42 = NULL,r_42 = NULL,u_42 = NULL;
  if(match_cons(t, sym__2))
    {
      m_42 = ATgetArgument(t, 0);
      u_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_42;
  {
    ATerm a_48 = t;
    int b_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_48);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_42);
      }
    else
      {
        t = a_48;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_48 = ATgetArgument(t, 0);
            r_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_42, r_42);
      }
  }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_48 = ATgetArgument(t, 0);
      if(((ATgetType(f_48) != AT_LIST) || !(ATisEmpty(f_48))))
        _fail(t);
      {
        ATerm g_48 = ATgetArgument(t, 1);
        if(((ATgetType(g_48) != AT_LIST) || !(ATisEmpty(g_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_48 = ATgetArgument(t, 0);
      if(((ATgetType(h_48) == AT_LIST) && !(ATisEmpty(h_48))))
        {
          k_44 = ATgetFirst((ATermList) h_48);
          l_44 = (ATerm) ATgetNext((ATermList) h_48);
        }
      else
        _fail(t);
      {
        ATerm k_48 = ATgetArgument(t, 1);
        if(((ATgetType(k_48) == AT_LIST) && !(ATisEmpty(k_48))))
          {
            m_44 = ATgetFirst((ATermList) k_48);
            n_44 = (ATerm) ATgetNext((ATermList) k_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_44, m_44), (ATerm) ATmakeAppl(sym__2, l_44, n_44));
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  if(match_cons(t, sym__2))
    {
      o_44 = ATgetArgument(t, 0);
      p_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_44), o_44);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm r_44 = NULL,v_44 = NULL,w_44 = NULL;
  if(match_cons(t, sym__2))
    {
      r_44 = ATgetArgument(t, 0);
      w_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_44;
  {
    ATerm m_48 = t;
    int n_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_48 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_48);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_44);
      }
    else
      {
        t = m_48;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_48 = ATgetArgument(t, 0);
            v_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_44, v_44);
      }
  }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_49 = ATgetArgument(t, 0);
      if(((ATgetType(e_49) != AT_LIST) || !(ATisEmpty(e_49))))
        _fail(t);
      {
        ATerm h_49 = ATgetArgument(t, 1);
        if(((ATgetType(h_49) != AT_LIST) || !(ATisEmpty(h_49))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm m_46 = NULL,q_46 = NULL,r_46 = NULL,s_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_49 = ATgetArgument(t, 0);
      if(((ATgetType(k_49) == AT_LIST) && !(ATisEmpty(k_49))))
        {
          m_46 = ATgetFirst((ATermList) k_49);
          q_46 = (ATerm) ATgetNext((ATermList) k_49);
        }
      else
        _fail(t);
      {
        ATerm l_49 = ATgetArgument(t, 1);
        if(((ATgetType(l_49) == AT_LIST) && !(ATisEmpty(l_49))))
          {
            r_46 = ATgetFirst((ATermList) l_49);
            s_46 = (ATerm) ATgetNext((ATermList) l_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_46, r_46), (ATerm) ATmakeAppl(sym__2, q_46, s_46));
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm t_46 = NULL,v_46 = NULL;
  if(match_cons(t, sym__2))
    {
      t_46 = ATgetArgument(t, 0);
      v_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_46), t_46);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm z_46 = NULL,b_47 = NULL,c_47 = NULL;
  if(match_cons(t, sym__2))
    {
      z_46 = ATgetArgument(t, 0);
      c_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_46;
  {
    ATerm m_49 = t;
    int n_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm o_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_49);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_47);
      }
    else
      {
        t = m_49;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm p_49 = ATgetArgument(t, 0);
            b_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_47, b_47);
      }
  }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_49 = ATgetArgument(t, 0);
      if(((ATgetType(q_49) != AT_LIST) || !(ATisEmpty(q_49))))
        _fail(t);
      {
        ATerm u_49 = ATgetArgument(t, 1);
        if(((ATgetType(u_49) != AT_LIST) || !(ATisEmpty(u_49))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL,v_48 = NULL,w_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_49 = ATgetArgument(t, 0);
      if(((ATgetType(v_49) == AT_LIST) && !(ATisEmpty(v_49))))
        {
          t_48 = ATgetFirst((ATermList) v_49);
          u_48 = (ATerm) ATgetNext((ATermList) v_49);
        }
      else
        _fail(t);
      {
        ATerm w_49 = ATgetArgument(t, 1);
        if(((ATgetType(w_49) == AT_LIST) && !(ATisEmpty(w_49))))
          {
            v_48 = ATgetFirst((ATermList) w_49);
            w_48 = (ATerm) ATgetNext((ATermList) w_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_48, v_48), (ATerm) ATmakeAppl(sym__2, u_48, w_48));
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm y_48 = NULL,a_49 = NULL;
  if(match_cons(t, sym__2))
    {
      y_48 = ATgetArgument(t, 0);
      a_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_49), y_48);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm g_49 = NULL,i_49 = NULL,j_49 = NULL;
  if(match_cons(t, sym__2))
    {
      g_49 = ATgetArgument(t, 0);
      j_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_49;
  {
    ATerm x_49 = t;
    int y_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm a_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_49);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_49);
      }
    else
      {
        t = x_49;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm b_50 = ATgetArgument(t, 0);
            i_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_49, i_49);
      }
  }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_50 = ATgetArgument(t, 0);
      if(((ATgetType(d_50) != AT_LIST) || !(ATisEmpty(d_50))))
        _fail(t);
      {
        ATerm e_50 = ATgetArgument(t, 1);
        if(((ATgetType(e_50) != AT_LIST) || !(ATisEmpty(e_50))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm c_125 = NULL,d_125 = NULL,e_125 = NULL,f_125 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_50 = ATgetArgument(t, 0);
      if(((ATgetType(f_50) == AT_LIST) && !(ATisEmpty(f_50))))
        {
          c_125 = ATgetFirst((ATermList) f_50);
          d_125 = (ATerm) ATgetNext((ATermList) f_50);
        }
      else
        _fail(t);
      {
        ATerm g_50 = ATgetArgument(t, 1);
        if(((ATgetType(g_50) == AT_LIST) && !(ATisEmpty(g_50))))
          {
            e_125 = ATgetFirst((ATermList) g_50);
            f_125 = (ATerm) ATgetNext((ATermList) g_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_125, e_125), (ATerm) ATmakeAppl(sym__2, d_125, f_125));
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm g_125 = NULL,h_125 = NULL;
  if(match_cons(t, sym__2))
    {
      g_125 = ATgetArgument(t, 0);
      h_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_125), g_125);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm j_125 = NULL,l_125 = NULL,m_125 = NULL;
  if(match_cons(t, sym__2))
    {
      j_125 = ATgetArgument(t, 0);
      m_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_125;
  {
    ATerm h_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_50);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_125);
      }
    else
      {
        t = h_50;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_50 = ATgetArgument(t, 0);
            l_125 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_125, l_125);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm d_178 (ATerm), ATerm t)
{
  ATerm m_50 = t;
  int p_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_124 = NULL,v_124 = NULL,w_124 = NULL,x_124 = NULL,y_124 = NULL;
      v_124 = t;
      if(match_cons(t, sym_Let_2))
        {
          w_124 = ATgetArgument(t, 0);
          x_124 = ATgetArgument(t, 1);
          {
            ATerm r_38 = NULL,v_38 = NULL,w_38 = NULL,h_15 = NULL;
            t = SSLgetAnnotations(v_124);
            r_38 = t;
            t = w_124;
            t = d_178(t);
            w_38 = t;
            t = (ATerm) ATmakeAppl(sym__2, w_124, w_38);
            t = genzip_4_0(h_8, j_8, l_8, m_8, t);
            v_38 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, v_38, x_124);
            h_15 = t;
            t = SSLsetAnnotations(h_15, r_38);
          }
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              w_124 = ATgetArgument(t, 0);
              x_124 = ATgetArgument(t, 1);
              y_124 = ATgetArgument(t, 2);
              {
                ATerm f_41 = NULL,l_41 = NULL,m_41 = NULL,i_15 = NULL;
                t = SSLgetAnnotations(v_124);
                f_41 = t;
                t = x_124;
                t = d_178(t);
                m_41 = t;
                t = (ATerm) ATmakeAppl(sym__2, x_124, m_41);
                t = genzip_4_0(n_8, o_8, p_8, r_8, t);
                l_41 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, w_124, l_41, y_124);
                i_15 = t;
                t = SSLsetAnnotations(i_15, f_41);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  w_124 = ATgetArgument(t, 0);
                  x_124 = ATgetArgument(t, 1);
                  y_124 = ATgetArgument(t, 2);
                  u_124 = ATgetArgument(t, 3);
                  {
                    ATerm c_44 = NULL,h_44 = NULL,i_44 = NULL,j_15 = NULL;
                    t = SSLgetAnnotations(v_124);
                    c_44 = t;
                    t = x_124;
                    t = d_178(t);
                    i_44 = t;
                    t = (ATerm) ATmakeAppl(sym__2, x_124, i_44);
                    t = genzip_4_0(s_8, t_8, v_8, w_8, t);
                    h_44 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, w_124, h_44, y_124, u_124);
                    j_15 = t;
                    t = SSLsetAnnotations(j_15, c_44);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      w_124 = ATgetArgument(t, 0);
                      x_124 = ATgetArgument(t, 1);
                      y_124 = ATgetArgument(t, 2);
                      u_124 = ATgetArgument(t, 3);
                      {
                        ATerm v_45 = NULL,i_46 = NULL,j_46 = NULL,k_15 = NULL;
                        t = SSLgetAnnotations(v_124);
                        v_45 = t;
                        t = x_124;
                        t = d_178(t);
                        j_46 = t;
                        t = (ATerm) ATmakeAppl(sym__2, x_124, j_46);
                        t = genzip_4_0(y_8, z_8, a_9, b_9, t);
                        i_46 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, w_124, i_46, y_124, u_124);
                        k_15 = t;
                        t = SSLsetAnnotations(k_15, v_45);
                      }
                    }
                  else
                    {
                      ATerm e_48 = NULL,l_48 = NULL,o_48 = NULL,l_15 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          w_124 = ATgetArgument(t, 0);
                          x_124 = ATgetArgument(t, 1);
                          y_124 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(v_124);
                      e_48 = t;
                      t = x_124;
                      t = d_178(t);
                      o_48 = t;
                      t = (ATerm) ATmakeAppl(sym__2, x_124, o_48);
                      t = genzip_4_0(c_9, d_9, e_9, f_9, t);
                      l_48 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, w_124, l_48, y_124);
                      l_15 = t;
                      t = SSLsetAnnotations(l_15, e_48);
                    }
                }
            }
        }
      LocalPopChoice(p_50);
    }
  else
    {
      t = m_50;
      {
        ATerm q_50 = t;
        int r_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm g_9 (ATerm t);
            static ATerm g_9 (ATerm t)
            {
              ATerm a_125 = NULL,b_125 = NULL;
              b_125 = t;
              t = d_178(t);
              a_125 = t;
              t = (ATerm) ATmakeAppl(sym__2, b_125, a_125);
              t = genzip_4_0(i_9, k_9, l_9, m_9, t);
              return(t);
            }
            t = dynrule_cong_6_0(_id, g_9, _id, _id, _id, _id, t);
            LocalPopChoice(r_50);
          }
        else
          {
            t = q_50;
            {
              ATerm c_126 = NULL,d_126 = NULL,e_126 = NULL,z_49 = NULL,c_50 = NULL,h_19 = NULL;
              c_126 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  d_126 = ATgetArgument(t, 0);
                  e_126 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_126);
              z_49 = t;
              t = d_126;
              t = d_178(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_50 = ATgetFirst((ATermList) t);
                  {
                    ATerm s_50 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, c_50, e_126);
              h_19 = t;
              t = SSLsetAnnotations(h_19, z_49);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm e_178 (ATerm), ATerm f_178 (ATerm), ATerm g_178 (ATerm), ATerm t)
{
  ATerm q_130 = NULL,r_130 = NULL,s_130 = NULL,t_130 = NULL,u_130 = NULL;
  s_130 = t;
  if(match_cons(t, sym_Let_2))
    {
      t_130 = ATgetArgument(t, 0);
      u_130 = ATgetArgument(t, 1);
      {
        ATerm k_50 = NULL,n_50 = NULL,o_50 = NULL,s_19 = NULL;
        t = SSLgetAnnotations(s_130);
        k_50 = t;
        t = t_130;
        t = e_178(t);
        n_50 = t;
        t = u_130;
        t = e_178(t);
        o_50 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, n_50, o_50);
        s_19 = t;
        t = SSLsetAnnotations(s_19, k_50);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          t_130 = ATgetArgument(t, 0);
          u_130 = ATgetArgument(t, 1);
          r_130 = ATgetArgument(t, 2);
          {
            ATerm x_50 = NULL,c_51 = NULL,s_51 = NULL,u_51 = NULL,t_19 = NULL;
            t = SSLgetAnnotations(s_130);
            x_50 = t;
            t = t_130;
            t = g_178(t);
            c_51 = t;
            t = u_130;
            t = g_178(t);
            s_51 = t;
            t = r_130;
            t = e_178(t);
            u_51 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, c_51, s_51, u_51);
            t_19 = t;
            t = SSLsetAnnotations(t_19, x_50);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              t_130 = ATgetArgument(t, 0);
              u_130 = ATgetArgument(t, 1);
              r_130 = ATgetArgument(t, 2);
              q_130 = ATgetArgument(t, 3);
              {
                ATerm d_53 = NULL,r_53 = NULL,s_53 = NULL,b_54 = NULL,c_54 = NULL,u_19 = NULL;
                t = SSLgetAnnotations(s_130);
                d_53 = t;
                t = t_130;
                t = g_178(t);
                r_53 = t;
                t = u_130;
                t = g_178(t);
                s_53 = t;
                t = r_130;
                t = g_178(t);
                b_54 = t;
                t = q_130;
                t = e_178(t);
                c_54 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, r_53, s_53, b_54, c_54);
                u_19 = t;
                t = SSLsetAnnotations(u_19, d_53);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  t_130 = ATgetArgument(t, 0);
                  u_130 = ATgetArgument(t, 1);
                  r_130 = ATgetArgument(t, 2);
                  q_130 = ATgetArgument(t, 3);
                  {
                    ATerm y_54 = NULL,q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,v_19 = NULL;
                    t = SSLgetAnnotations(s_130);
                    y_54 = t;
                    t = t_130;
                    t = g_178(t);
                    q_55 = t;
                    t = u_130;
                    t = g_178(t);
                    r_55 = t;
                    t = r_130;
                    t = g_178(t);
                    s_55 = t;
                    t = q_130;
                    t = e_178(t);
                    t_55 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, q_55, r_55, s_55, t_55);
                    v_19 = t;
                    t = SSLsetAnnotations(v_19, y_54);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      t_130 = ATgetArgument(t, 0);
                      u_130 = ATgetArgument(t, 1);
                      r_130 = ATgetArgument(t, 2);
                      {
                        ATerm m_56 = NULL,w_56 = NULL,x_56 = NULL,y_56 = NULL,w_19 = NULL;
                        t = SSLgetAnnotations(s_130);
                        m_56 = t;
                        t = t_130;
                        t = g_178(t);
                        w_56 = t;
                        t = u_130;
                        t = g_178(t);
                        x_56 = t;
                        t = r_130;
                        t = g_178(t);
                        y_56 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, w_56, x_56, y_56);
                        w_19 = t;
                        t = SSLsetAnnotations(w_19, m_56);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          t_130 = ATgetArgument(t, 0);
                          u_130 = ATgetArgument(t, 1);
                          {
                            ATerm k_57 = NULL,n_57 = NULL,o_57 = NULL,x_19 = NULL;
                            t = SSLgetAnnotations(s_130);
                            k_57 = t;
                            t = t_130;
                            t = g_178(t);
                            n_57 = t;
                            t = u_130;
                            t = e_178(t);
                            o_57 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, n_57, o_57);
                            x_19 = t;
                            t = SSLsetAnnotations(x_19, k_57);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              t_130 = ATgetArgument(t, 0);
                              u_130 = ATgetArgument(t, 1);
                              {
                                ATerm x_57 = NULL,a_58 = NULL,c_58 = NULL,y_19 = NULL;
                                t = SSLgetAnnotations(s_130);
                                x_57 = t;
                                t = t_130;
                                t = g_178(t);
                                a_58 = t;
                                t = u_130;
                                t = e_178(t);
                                c_58 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, a_58, c_58);
                                y_19 = t;
                                t = SSLsetAnnotations(y_19, x_57);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  t_130 = ATgetArgument(t, 0);
                                  u_130 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_58 = NULL,n_58 = NULL,p_58 = NULL,z_19 = NULL;
                                    t = SSLgetAnnotations(s_130);
                                    k_58 = t;
                                    t = t_130;
                                    t = g_178(t);
                                    n_58 = t;
                                    t = u_130;
                                    t = e_178(t);
                                    p_58 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, n_58, p_58);
                                    z_19 = t;
                                    t = SSLsetAnnotations(z_19, k_58);
                                  }
                                }
                              else
                                {
                                  ATerm y_58 = NULL,b_59 = NULL,d_59 = NULL,a_20 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      t_130 = ATgetArgument(t, 0);
                                      u_130 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(s_130);
                                  y_58 = t;
                                  t = t_130;
                                  t = g_178(t);
                                  b_59 = t;
                                  t = u_130;
                                  t = e_178(t);
                                  d_59 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, b_59, d_59);
                                  a_20 = t;
                                  t = SSLsetAnnotations(a_20, y_58);
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
ATerm dynrule_sargs_1_0 (ATerm i_178 (ATerm), ATerm t)
{
  ATerm m_131 = NULL,n_131 = NULL,p_131 = NULL;
  ATerm t_50 = t;
  int u_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          m_131 = ATgetArgument(t, 0);
          {
            ATerm v_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_50);
      t = m_131;
      if(match_cons(t, sym_DynRuleId_1))
        {
          n_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_131;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm w_50 = ATgetArgument(t, 0);
          p_131 = ATgetArgument(t, 1);
          {
            ATerm y_50 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = p_131;
    }
  else
    {
      t = t_50;
      {
        ATerm z_50 = t;
        int a_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                m_131 = ATgetArgument(t, 0);
                {
                  ATerm b_51 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(a_51);
            t = m_131;
            if(match_cons(t, sym_DynRuleId_1))
              {
                n_131 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = n_131;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm d_51 = ATgetArgument(t, 0);
                p_131 = ATgetArgument(t, 1);
                {
                  ATerm l_51 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = p_131;
          }
        else
          {
            t = z_50;
            if(match_cons(t, sym_AddDynRule_2))
              {
                m_131 = ATgetArgument(t, 0);
                {
                  ATerm p_51 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = m_131;
            if(match_cons(t, sym_DynRuleId_1))
              {
                n_131 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = n_131;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm q_51 = ATgetArgument(t, 0);
                p_131 = ATgetArgument(t, 1);
                {
                  ATerm r_51 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = p_131;
          }
      }
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm g_132 = NULL;
  ATerm t_51 = t;
  int v_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_132 = ATgetArgument(t, 0);
          {
            ATerm w_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_51);
      t = g_132;
    }
  else
    {
      t = t_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_132;
    }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm m_132 = NULL;
  ATerm x_51 = t;
  int y_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_132 = ATgetArgument(t, 0);
          {
            ATerm z_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_51);
      t = m_132;
    }
  else
    {
      t = x_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_132;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm a_132 = NULL;
  ATerm a_52 = t;
  int b_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm c_52 = ATgetArgument(t, 0);
          a_132 = ATgetArgument(t, 1);
          {
            ATerm d_52 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_52);
      t = a_132;
      t = map_1_0(o_9, t);
    }
  else
    {
      t = a_52;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm h_52 = ATgetArgument(t, 0);
          a_132 = ATgetArgument(t, 1);
          {
            ATerm i_52 = ATgetArgument(t, 2);
          }
          {
            ATerm j_52 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = a_132;
      t = map_1_0(r_9, t);
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm r_132 = NULL;
  ATerm k_52 = t;
  int t_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          r_132 = ATgetArgument(t, 0);
          {
            ATerm u_52 = ATgetArgument(t, 1);
          }
          {
            ATerm v_52 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_52);
      t = r_132;
    }
  else
    {
      t = k_52;
      if(match_cons(t, sym_SDefT_4))
        {
          r_132 = ATgetArgument(t, 0);
          {
            ATerm w_52 = ATgetArgument(t, 1);
          }
          {
            ATerm x_52 = ATgetArgument(t, 2);
          }
          {
            ATerm y_52 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = r_132;
    }
  return(t);
}
static ATerm q_12 (ATerm b_108, ATerm a_108, ATerm t)
{
  t = b_108;
  t = map_1_0(s_9, t);
  return(t);
}
ATerm SVar_1_0 (ATerm w_117 (ATerm), ATerm t)
{
  ATerm x_132 = NULL,y_132 = NULL,z_132 = NULL,a_133 = NULL,n_20 = NULL;
  a_133 = t;
  if(match_cons(t, sym_SVar_1))
    {
      y_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_133);
  x_132 = t;
  t = y_132;
  t = w_117(t);
  z_132 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, z_132);
  n_20 = t;
  t = SSLsetAnnotations(n_20, x_132);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm z_52 = t;
  int a_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_133 = NULL,g_133 = NULL,h_133 = NULL,i_133 = NULL,j_133 = NULL;
      f_133 = t;
      if(match_cons(t, sym_Let_2))
        {
          g_133 = ATgetArgument(t, 0);
          h_133 = ATgetArgument(t, 1);
          t = f_133;
          t = q_12(g_133, h_133, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              g_133 = ATgetArgument(t, 0);
              h_133 = ATgetArgument(t, 1);
              i_133 = ATgetArgument(t, 2);
              t = h_133;
              t = map_1_0(v_9, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  g_133 = ATgetArgument(t, 0);
                  h_133 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, g_133);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_133 = ATgetArgument(t, 0);
                      h_133 = ATgetArgument(t, 1);
                      i_133 = ATgetArgument(t, 2);
                      j_133 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_133;
                  t = map_1_0(w_9, t);
                }
            }
        }
      LocalPopChoice(a_53);
    }
  else
    {
      t = z_52;
      {
        ATerm c_53 = t;
        int e_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(e_53);
          }
        else
          {
            t = c_53;
            t = dynrule_sargs_1_0(x_9, t);
          }
      }
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm r_133 = NULL;
  ATerm f_53 = t;
  int g_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_133 = ATgetArgument(t, 0);
          {
            ATerm h_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_53);
      t = r_133;
    }
  else
    {
      t = f_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_133;
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm c_134 = NULL;
  ATerm j_53 = t;
  int k_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_134 = ATgetArgument(t, 0);
          {
            ATerm l_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_53);
      t = c_134;
    }
  else
    {
      t = j_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_134;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = map_1_0(y_9, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm h_134 = NULL;
  ATerm m_53 = t;
  int o_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_134 = ATgetArgument(t, 0);
          {
            ATerm p_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_53);
      t = h_134;
    }
  else
    {
      t = m_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_134;
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  t = rename_4_0(SVar_1_0, u_9, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm k_178 (ATerm), ATerm l_178 (ATerm), ATerm m_178 (ATerm), ATerm n_178 (ATerm), ATerm o_178 (ATerm), ATerm p_178 (ATerm), ATerm t)
{
  ATerm h_137 = NULL,i_137 = NULL,j_137 = NULL;
  h_137 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      i_137 = ATgetArgument(t, 0);
      j_137 = ATgetArgument(t, 1);
      {
        ATerm m_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,x_59 = NULL,y_59 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,y_20 = NULL,w_20 = NULL,v_20 = NULL;
        t = SSLgetAnnotations(h_137);
        m_59 = t;
        t = i_137;
        if(match_cons(t, sym_DynRuleId_1))
          {
            r_59 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_137);
        q_59 = t;
        t = r_59;
        if(match_cons(t, sym_RDecT_3))
          {
            c_60 = ATgetArgument(t, 0);
            d_60 = ATgetArgument(t, 1);
            e_60 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_59);
        y_59 = t;
        t = c_60;
        t = k_178(t);
        f_60 = t;
        t = d_60;
        t = l_178(t);
        g_60 = t;
        t = e_60;
        t = m_178(t);
        h_60 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, f_60, g_60, h_60);
        v_20 = t;
        t = SSLsetAnnotations(v_20, y_59);
        i_60 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, i_60);
        w_20 = t;
        t = SSLsetAnnotations(w_20, q_59);
        x_59 = t;
        t = j_137;
        t = n_178(t);
        p_59 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, x_59, p_59);
        y_20 = t;
        t = SSLsetAnnotations(y_20, m_59);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          i_137 = ATgetArgument(t, 0);
          j_137 = ATgetArgument(t, 1);
          {
            ATerm t_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,z_61 = NULL,d_62 = NULL,f_62 = NULL,i_62 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,x_62 = NULL,y_62 = NULL,e_63 = NULL,c_21 = NULL,b_21 = NULL,a_21 = NULL,z_20 = NULL;
            t = SSLgetAnnotations(h_137);
            t_60 = t;
            t = i_137;
            if(match_cons(t, sym_DynRuleId_1))
              {
                i_62 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_137);
            f_62 = t;
            t = i_62;
            if(match_cons(t, sym_RDecT_3))
              {
                l_62 = ATgetArgument(t, 0);
                m_62 = ATgetArgument(t, 1);
                n_62 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_62);
            k_62 = t;
            t = l_62;
            t = k_178(t);
            o_62 = t;
            t = m_62;
            t = l_178(t);
            x_62 = t;
            t = n_62;
            t = m_178(t);
            y_62 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, o_62, x_62, y_62);
            z_20 = t;
            t = SSLsetAnnotations(z_20, k_62);
            e_63 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, e_63);
            a_21 = t;
            t = SSLsetAnnotations(a_21, f_62);
            j_62 = t;
            t = j_137;
            if(match_cons(t, sym_Rule_3))
              {
                b_61 = ATgetArgument(t, 0);
                c_61 = ATgetArgument(t, 1);
                w_61 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_137);
            a_61 = t;
            t = b_61;
            t = n_178(t);
            x_61 = t;
            t = c_61;
            t = o_178(t);
            y_61 = t;
            t = w_61;
            t = p_178(t);
            z_61 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, x_61, y_61, z_61);
            b_21 = t;
            t = SSLsetAnnotations(b_21, a_61);
            d_62 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, j_62, d_62);
            c_21 = t;
            t = SSLsetAnnotations(c_21, t_60);
          }
        }
      else
        {
          ATerm r_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,f_64 = NULL,g_64 = NULL,m_64 = NULL,o_64 = NULL,p_64 = NULL,s_64 = NULL,t_64 = NULL,v_64 = NULL,y_64 = NULL,z_64 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,j_65 = NULL,k_65 = NULL,i_21 = NULL,f_21 = NULL,e_21 = NULL,d_21 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              i_137 = ATgetArgument(t, 0);
              j_137 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_137);
          r_63 = t;
          t = i_137;
          if(match_cons(t, sym_DynRuleId_1))
            {
              t_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_137);
          s_64 = t;
          t = t_64;
          if(match_cons(t, sym_RDecT_3))
            {
              z_64 = ATgetArgument(t, 0);
              b_65 = ATgetArgument(t, 1);
              c_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(t_64);
          y_64 = t;
          t = z_64;
          t = k_178(t);
          d_65 = t;
          t = b_65;
          t = l_178(t);
          e_65 = t;
          t = c_65;
          t = m_178(t);
          j_65 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, d_65, e_65, j_65);
          d_21 = t;
          t = SSLsetAnnotations(d_21, y_64);
          k_65 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, k_65);
          e_21 = t;
          t = SSLsetAnnotations(e_21, s_64);
          v_64 = t;
          t = j_137;
          if(match_cons(t, sym_Rule_3))
            {
              v_63 = ATgetArgument(t, 0);
              w_63 = ATgetArgument(t, 1);
              f_64 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_137);
          u_63 = t;
          t = v_63;
          t = n_178(t);
          g_64 = t;
          t = w_63;
          t = o_178(t);
          m_64 = t;
          t = f_64;
          t = p_178(t);
          o_64 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, g_64, m_64, o_64);
          f_21 = t;
          t = SSLsetAnnotations(f_21, u_63);
          p_64 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, v_64, p_64);
          i_21 = t;
          t = SSLsetAnnotations(i_21, r_63);
        }
    }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_53 = ATgetArgument(t, 0);
      if(((ATgetType(q_53) != AT_LIST) || !(ATisEmpty(q_53))))
        _fail(t);
      {
        ATerm t_53 = ATgetArgument(t, 1);
        if(((ATgetType(t_53) != AT_LIST) || !(ATisEmpty(t_53))))
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
  ATerm k_67 = NULL,l_67 = NULL,m_67 = NULL,n_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_53 = ATgetArgument(t, 0);
      if(((ATgetType(u_53) == AT_LIST) && !(ATisEmpty(u_53))))
        {
          k_67 = ATgetFirst((ATermList) u_53);
          l_67 = (ATerm) ATgetNext((ATermList) u_53);
        }
      else
        _fail(t);
      {
        ATerm v_53 = ATgetArgument(t, 1);
        if(((ATgetType(v_53) == AT_LIST) && !(ATisEmpty(v_53))))
          {
            m_67 = ATgetFirst((ATermList) v_53);
            n_67 = (ATerm) ATgetNext((ATermList) v_53);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_67, m_67), (ATerm) ATmakeAppl(sym__2, l_67, n_67));
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL;
  if(match_cons(t, sym__2))
    {
      o_67 = ATgetArgument(t, 0);
      p_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_67), o_67);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm r_67 = NULL,t_67 = NULL,u_67 = NULL;
  if(match_cons(t, sym__2))
    {
      r_67 = ATgetArgument(t, 0);
      u_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_67;
  {
    ATerm w_53 = t;
    int x_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_53);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_67);
      }
    else
      {
        t = w_53;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_54 = ATgetArgument(t, 0);
            t_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_67, t_67);
      }
  }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_54 = ATgetArgument(t, 0);
      if(((ATgetType(d_54) != AT_LIST) || !(ATisEmpty(d_54))))
        _fail(t);
      {
        ATerm e_54 = ATgetArgument(t, 1);
        if(((ATgetType(e_54) != AT_LIST) || !(ATisEmpty(e_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_54 = ATgetArgument(t, 0);
      if(((ATgetType(f_54) == AT_LIST) && !(ATisEmpty(f_54))))
        {
          p_68 = ATgetFirst((ATermList) f_54);
          q_68 = (ATerm) ATgetNext((ATermList) f_54);
        }
      else
        _fail(t);
      {
        ATerm h_54 = ATgetArgument(t, 1);
        if(((ATgetType(h_54) == AT_LIST) && !(ATisEmpty(h_54))))
          {
            r_68 = ATgetFirst((ATermList) h_54);
            s_68 = (ATerm) ATgetNext((ATermList) h_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_68, r_68), (ATerm) ATmakeAppl(sym__2, q_68, s_68));
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL;
  if(match_cons(t, sym__2))
    {
      t_68 = ATgetArgument(t, 0);
      u_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_68), t_68);
  return(t);
}
static ATerm a_11 (ATerm t)
{
  ATerm w_68 = NULL,y_68 = NULL,z_68 = NULL;
  if(match_cons(t, sym__2))
    {
      w_68 = ATgetArgument(t, 0);
      z_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_68;
  {
    ATerm i_54 = t;
    int j_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm k_54 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_54);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_68);
      }
    else
      {
        t = i_54;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_54 = ATgetArgument(t, 0);
            y_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, z_68, y_68);
      }
  }
  return(t);
}
static ATerm f_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_54 = ATgetArgument(t, 0);
      if(((ATgetType(m_54) != AT_LIST) || !(ATisEmpty(m_54))))
        _fail(t);
      {
        ATerm n_54 = ATgetArgument(t, 1);
        if(((ATgetType(n_54) != AT_LIST) || !(ATisEmpty(n_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,m_70 = NULL,n_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_54 = ATgetArgument(t, 0);
      if(((ATgetType(o_54) == AT_LIST) && !(ATisEmpty(o_54))))
        {
          i_70 = ATgetFirst((ATermList) o_54);
          j_70 = (ATerm) ATgetNext((ATermList) o_54);
        }
      else
        _fail(t);
      {
        ATerm p_54 = ATgetArgument(t, 1);
        if(((ATgetType(p_54) == AT_LIST) && !(ATisEmpty(p_54))))
          {
            m_70 = ATgetFirst((ATermList) p_54);
            n_70 = (ATerm) ATgetNext((ATermList) p_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_70, m_70), (ATerm) ATmakeAppl(sym__2, j_70, n_70));
  return(t);
}
static ATerm m_11 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL;
  if(match_cons(t, sym__2))
    {
      o_70 = ATgetArgument(t, 0);
      p_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_70), o_70);
  return(t);
}
static ATerm p_11 (ATerm t)
{
  ATerm x_70 = NULL,d_71 = NULL,e_71 = NULL;
  if(match_cons(t, sym__2))
    {
      x_70 = ATgetArgument(t, 0);
      e_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_70;
  {
    ATerm q_54 = t;
    int r_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm s_54 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_54);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_71);
      }
    else
      {
        t = q_54;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm t_54 = ATgetArgument(t, 0);
            d_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_71, d_71);
      }
  }
  return(t);
}
static ATerm v_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_54 = ATgetArgument(t, 0);
      if(((ATgetType(u_54) != AT_LIST) || !(ATisEmpty(u_54))))
        _fail(t);
      {
        ATerm w_54 = ATgetArgument(t, 1);
        if(((ATgetType(w_54) != AT_LIST) || !(ATisEmpty(w_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm n_142 = NULL,o_142 = NULL,p_142 = NULL,q_142 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_54 = ATgetArgument(t, 0);
      if(((ATgetType(x_54) == AT_LIST) && !(ATisEmpty(x_54))))
        {
          n_142 = ATgetFirst((ATermList) x_54);
          o_142 = (ATerm) ATgetNext((ATermList) x_54);
        }
      else
        _fail(t);
      {
        ATerm z_54 = ATgetArgument(t, 1);
        if(((ATgetType(z_54) == AT_LIST) && !(ATisEmpty(z_54))))
          {
            p_142 = ATgetFirst((ATermList) z_54);
            q_142 = (ATerm) ATgetNext((ATermList) z_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_142, p_142), (ATerm) ATmakeAppl(sym__2, o_142, q_142));
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm r_142 = NULL,s_142 = NULL;
  if(match_cons(t, sym__2))
    {
      r_142 = ATgetArgument(t, 0);
      s_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_142), r_142);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm u_142 = NULL,w_142 = NULL,x_142 = NULL;
  if(match_cons(t, sym__2))
    {
      u_142 = ATgetArgument(t, 0);
      x_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_142;
  {
    ATerm b_55 = t;
    int c_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_55);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_142);
      }
    else
      {
        t = b_55;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_55 = ATgetArgument(t, 0);
            w_142 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_142, w_142);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm z_177 (ATerm), ATerm t)
{
  ATerm f_55 = t;
  int g_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_142 = NULL,d_142 = NULL,e_142 = NULL,h_142 = NULL,i_142 = NULL;
      c_142 = t;
      if(match_cons(t, sym_Scope_2))
        {
          d_142 = ATgetArgument(t, 0);
          e_142 = ATgetArgument(t, 1);
          {
            ATerm x_65 = NULL,c_66 = NULL,y_21 = NULL;
            t = SSLgetAnnotations(c_142);
            x_65 = t;
            t = d_142;
            t = z_177(t);
            c_66 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, c_66, e_142);
            y_21 = t;
            t = SSLsetAnnotations(y_21, x_65);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              d_142 = ATgetArgument(t, 0);
              {
                ATerm s_66 = NULL,a_22 = NULL;
                t = SSLgetAnnotations(c_142);
                s_66 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, d_142);
                a_22 = t;
                t = SSLsetAnnotations(a_22, s_66);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  d_142 = ATgetArgument(t, 0);
                  e_142 = ATgetArgument(t, 1);
                  h_142 = ATgetArgument(t, 2);
                  {
                    ATerm d_67 = NULL,h_67 = NULL,i_67 = NULL,b_22 = NULL;
                    t = SSLgetAnnotations(c_142);
                    d_67 = t;
                    t = h_142;
                    t = z_177(t);
                    i_67 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_142, i_67);
                    t = genzip_4_0(a_10, b_10, c_10, d_10, t);
                    h_67 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, d_142, e_142, h_67);
                    b_22 = t;
                    t = SSLsetAnnotations(b_22, d_67);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_142 = ATgetArgument(t, 0);
                      e_142 = ATgetArgument(t, 1);
                      h_142 = ATgetArgument(t, 2);
                      i_142 = ATgetArgument(t, 3);
                      {
                        ATerm h_68 = NULL,m_68 = NULL,n_68 = NULL,c_22 = NULL;
                        t = SSLgetAnnotations(c_142);
                        h_68 = t;
                        t = h_142;
                        t = z_177(t);
                        n_68 = t;
                        t = (ATerm) ATmakeAppl(sym__2, h_142, n_68);
                        t = genzip_4_0(e_10, f_10, g_10, a_11, t);
                        m_68 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_142, e_142, m_68, i_142);
                        c_22 = t;
                        t = SSLsetAnnotations(c_22, h_68);
                      }
                    }
                  else
                    {
                      ATerm p_69 = NULL,b_70 = NULL,c_70 = NULL,e_22 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          d_142 = ATgetArgument(t, 0);
                          e_142 = ATgetArgument(t, 1);
                          h_142 = ATgetArgument(t, 2);
                          i_142 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(c_142);
                      p_69 = t;
                      t = h_142;
                      t = z_177(t);
                      c_70 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_142, c_70);
                      t = genzip_4_0(f_11, j_11, m_11, p_11, t);
                      b_70 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, d_142, e_142, b_70, i_142);
                      e_22 = t;
                      t = SSLsetAnnotations(e_22, p_69);
                    }
                }
            }
        }
      LocalPopChoice(g_55);
    }
  else
    {
      t = f_55;
      {
        static ATerm u_11 (ATerm t);
        static ATerm u_11 (ATerm t)
        {
          ATerm l_142 = NULL,m_142 = NULL;
          m_142 = t;
          t = z_177(t);
          l_142 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_142, l_142);
          t = genzip_4_0(v_11, w_11, y_11, z_11, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, u_11, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm a_178 (ATerm), ATerm b_178 (ATerm), ATerm c_178 (ATerm), ATerm t)
{
  ATerm f_149 = NULL,g_149 = NULL,h_149 = NULL,i_149 = NULL,j_149 = NULL;
  i_149 = t;
  if(match_cons(t, sym_Scope_2))
    {
      j_149 = ATgetArgument(t, 0);
      h_149 = ATgetArgument(t, 1);
      {
        ATerm r_71 = NULL,u_71 = NULL,v_71 = NULL,p_22 = NULL;
        t = SSLgetAnnotations(i_149);
        r_71 = t;
        t = j_149;
        t = c_178(t);
        u_71 = t;
        t = h_149;
        t = a_178(t);
        v_71 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, u_71, v_71);
        p_22 = t;
        t = SSLsetAnnotations(p_22, r_71);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          j_149 = ATgetArgument(t, 0);
          {
            ATerm c_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,s_22 = NULL,q_22 = NULL;
            t = SSLgetAnnotations(i_149);
            c_72 = t;
            t = j_149;
            if(match_cons(t, sym_Rule_3))
              {
                f_72 = ATgetArgument(t, 0);
                g_72 = ATgetArgument(t, 1);
                h_72 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(j_149);
            e_72 = t;
            t = f_72;
            t = a_178(t);
            i_72 = t;
            t = g_72;
            t = a_178(t);
            j_72 = t;
            t = h_72;
            t = a_178(t);
            k_72 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, i_72, j_72, k_72);
            q_22 = t;
            t = SSLsetAnnotations(q_22, e_72);
            l_72 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, l_72);
            s_22 = t;
            t = SSLsetAnnotations(s_22, c_72);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              j_149 = ATgetArgument(t, 0);
              h_149 = ATgetArgument(t, 1);
              f_149 = ATgetArgument(t, 2);
              {
                ATerm t_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,t_22 = NULL;
                t = SSLgetAnnotations(i_149);
                t_72 = t;
                t = j_149;
                t = c_178(t);
                x_72 = t;
                t = h_149;
                t = c_178(t);
                y_72 = t;
                t = f_149;
                t = c_178(t);
                z_72 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, x_72, y_72, z_72);
                t_22 = t;
                t = SSLsetAnnotations(t_22, t_72);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  j_149 = ATgetArgument(t, 0);
                  h_149 = ATgetArgument(t, 1);
                  f_149 = ATgetArgument(t, 2);
                  g_149 = ATgetArgument(t, 3);
                  {
                    ATerm k_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,u_22 = NULL;
                    t = SSLgetAnnotations(i_149);
                    k_73 = t;
                    t = j_149;
                    t = c_178(t);
                    p_73 = t;
                    t = h_149;
                    t = c_178(t);
                    q_73 = t;
                    t = f_149;
                    t = c_178(t);
                    r_73 = t;
                    t = g_149;
                    t = a_178(t);
                    s_73 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, p_73, q_73, r_73, s_73);
                    u_22 = t;
                    t = SSLsetAnnotations(u_22, k_73);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_149 = ATgetArgument(t, 0);
                      h_149 = ATgetArgument(t, 1);
                      f_149 = ATgetArgument(t, 2);
                      g_149 = ATgetArgument(t, 3);
                      {
                        ATerm e_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,v_22 = NULL;
                        t = SSLgetAnnotations(i_149);
                        e_74 = t;
                        t = j_149;
                        t = c_178(t);
                        p_74 = t;
                        t = h_149;
                        t = c_178(t);
                        q_74 = t;
                        t = f_149;
                        t = c_178(t);
                        r_74 = t;
                        t = g_149;
                        t = a_178(t);
                        s_74 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, p_74, q_74, r_74, s_74);
                        v_22 = t;
                        t = SSLsetAnnotations(v_22, e_74);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          j_149 = ATgetArgument(t, 0);
                          h_149 = ATgetArgument(t, 1);
                          {
                            ATerm c_75 = NULL,f_75 = NULL,g_75 = NULL,w_22 = NULL;
                            t = SSLgetAnnotations(i_149);
                            c_75 = t;
                            t = j_149;
                            t = c_178(t);
                            f_75 = t;
                            t = h_149;
                            t = a_178(t);
                            g_75 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, f_75, g_75);
                            w_22 = t;
                            t = SSLsetAnnotations(w_22, c_75);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              j_149 = ATgetArgument(t, 0);
                              h_149 = ATgetArgument(t, 1);
                              {
                                ATerm o_75 = NULL,r_75 = NULL,s_75 = NULL,x_22 = NULL;
                                t = SSLgetAnnotations(i_149);
                                o_75 = t;
                                t = j_149;
                                t = c_178(t);
                                r_75 = t;
                                t = h_149;
                                t = a_178(t);
                                s_75 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, r_75, s_75);
                                x_22 = t;
                                t = SSLsetAnnotations(x_22, o_75);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  j_149 = ATgetArgument(t, 0);
                                  h_149 = ATgetArgument(t, 1);
                                  {
                                    ATerm a_76 = NULL,e_76 = NULL,k_76 = NULL,y_22 = NULL;
                                    t = SSLgetAnnotations(i_149);
                                    a_76 = t;
                                    t = j_149;
                                    t = c_178(t);
                                    e_76 = t;
                                    t = h_149;
                                    t = a_178(t);
                                    k_76 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, e_76, k_76);
                                    y_22 = t;
                                    t = SSLsetAnnotations(y_22, a_76);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      j_149 = ATgetArgument(t, 0);
                                      {
                                        ATerm z_76 = NULL,b_77 = NULL,z_22 = NULL;
                                        t = SSLgetAnnotations(i_149);
                                        z_76 = t;
                                        t = j_149;
                                        t = a_178(t);
                                        b_77 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, b_77);
                                        z_22 = t;
                                        t = SSLsetAnnotations(z_22, z_76);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          j_149 = ATgetArgument(t, 0);
                                          {
                                            ATerm o_77 = NULL,t_77 = NULL,l_23 = NULL;
                                            t = SSLgetAnnotations(i_149);
                                            o_77 = t;
                                            t = j_149;
                                            t = a_178(t);
                                            t_77 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, t_77);
                                            l_23 = t;
                                            t = SSLsetAnnotations(l_23, o_77);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              j_149 = ATgetArgument(t, 0);
                                              {
                                                ATerm z_77 = NULL,b_78 = NULL,t_23 = NULL;
                                                t = SSLgetAnnotations(i_149);
                                                z_77 = t;
                                                t = j_149;
                                                t = a_178(t);
                                                b_78 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, b_78);
                                                t_23 = t;
                                                t = SSLsetAnnotations(t_23, z_77);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  j_149 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm k_78 = NULL,m_78 = NULL,g_24 = NULL;
                                                    t = SSLgetAnnotations(i_149);
                                                    k_78 = t;
                                                    t = j_149;
                                                    t = a_178(t);
                                                    m_78 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, m_78);
                                                    g_24 = t;
                                                    t = SSLsetAnnotations(g_24, k_78);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm y_78 = NULL,a_79 = NULL,j_24 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      j_149 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(i_149);
                                                  y_78 = t;
                                                  t = j_149;
                                                  t = a_178(t);
                                                  a_79 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, a_79);
                                                  j_24 = t;
                                                  t = SSLsetAnnotations(j_24, y_78);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm j_178 (ATerm), ATerm t)
{
  ATerm f_150 = NULL,g_150 = NULL,j_150 = NULL;
  ATerm h_55 = t;
  int i_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          f_150 = ATgetArgument(t, 0);
          {
            ATerm j_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_55);
      t = f_150;
      if(match_cons(t, sym_DynRuleId_1))
        {
          g_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_150;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm k_55 = ATgetArgument(t, 0);
          ATerm l_55 = ATgetArgument(t, 1);
          j_150 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_150;
    }
  else
    {
      t = h_55;
      {
        ATerm m_55 = t;
        int n_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                f_150 = ATgetArgument(t, 0);
                {
                  ATerm o_55 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(n_55);
            t = f_150;
            if(match_cons(t, sym_DynRuleId_1))
              {
                g_150 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_150;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm p_55 = ATgetArgument(t, 0);
                ATerm u_55 = ATgetArgument(t, 1);
                j_150 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = j_150;
          }
        else
          {
            t = m_55;
            if(match_cons(t, sym_AddDynRule_2))
              {
                f_150 = ATgetArgument(t, 0);
                {
                  ATerm v_55 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = f_150;
            if(match_cons(t, sym_DynRuleId_1))
              {
                g_150 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_150;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm w_55 = ATgetArgument(t, 0);
                ATerm x_55 = ATgetArgument(t, 1);
                j_150 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = j_150;
          }
      }
    }
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm z_150 = NULL;
  ATerm y_55 = t;
  int z_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_150 = ATgetArgument(t, 0);
          {
            ATerm a_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_55);
      t = z_150;
    }
  else
    {
      t = y_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_150;
    }
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm f_151 = NULL;
  ATerm b_56 = t;
  int c_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_151 = ATgetArgument(t, 0);
          {
            ATerm d_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_56);
      t = f_151;
    }
  else
    {
      t = b_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_151;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm u_150 = NULL;
  ATerm j_56 = t;
  int k_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm l_56 = ATgetArgument(t, 0);
          ATerm n_56 = ATgetArgument(t, 1);
          u_150 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(k_56);
      t = u_150;
      t = map_1_0(a_12, t);
    }
  else
    {
      t = j_56;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm q_56 = ATgetArgument(t, 0);
          ATerm r_56 = ATgetArgument(t, 1);
          u_150 = ATgetArgument(t, 2);
          {
            ATerm s_56 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = u_150;
      t = map_1_0(b_12, t);
    }
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm b_152 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_152);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm t_56 = t;
  int u_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_56);
    }
  else
    {
      t = t_56;
      {
        ATerm v_56 = t;
        int z_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_56);
          }
        else
          {
            t = v_56;
            {
              ATerm c_57 = t;
              int d_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_152 = NULL,e_152 = NULL,f_152 = NULL,g_152 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_152 = ATgetArgument(t, 0);
                      e_152 = ATgetArgument(t, 1);
                      f_152 = ATgetArgument(t, 2);
                      g_152 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_152;
                  t = map_1_0(e_12, t);
                  LocalPopChoice(d_57);
                }
              else
                {
                  t = c_57;
                  {
                    ATerm e_57 = t;
                    int f_57 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_57);
                      }
                    else
                      {
                        t = e_57;
                        t = dynrule_targs_1_0(g_12, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_12 (ATerm t)
{
  ATerm n_152 = NULL;
  ATerm g_57 = t;
  int h_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_152 = ATgetArgument(t, 0);
          {
            ATerm i_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_57);
      t = n_152;
    }
  else
    {
      t = g_57;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_152;
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = map_1_0(h_12, t);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm s_152 = NULL;
  ATerm j_57 = t;
  int l_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_152 = ATgetArgument(t, 0);
          {
            ATerm m_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_57);
      t = s_152;
    }
  else
    {
      t = j_57;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_152;
    }
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm w_152 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_152);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm p_57 = t;
  int q_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_57);
    }
  else
    {
      t = p_57;
      {
        ATerm r_57 = t;
        int s_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_57);
          }
        else
          {
            t = r_57;
            {
              ATerm t_57 = t;
              int u_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_152 = NULL,z_152 = NULL,a_153 = NULL,b_153 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_152 = ATgetArgument(t, 0);
                      z_152 = ATgetArgument(t, 1);
                      a_153 = ATgetArgument(t, 2);
                      b_153 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_153;
                  t = map_1_0(f_14, t);
                  LocalPopChoice(u_57);
                }
              else
                {
                  t = t_57;
                  {
                    ATerm v_57 = t;
                    int w_57 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_57);
                      }
                    else
                      {
                        t = v_57;
                        t = dynrule_targs_1_0(g_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm i_153 = NULL;
  ATerm y_57 = t;
  int z_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_153 = ATgetArgument(t, 0);
          {
            ATerm b_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_57);
      t = i_153;
    }
  else
    {
      t = y_57;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_153;
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = map_1_0(h_14, t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm n_153 = NULL;
  ATerm d_58 = t;
  int e_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_153 = ATgetArgument(t, 0);
          {
            ATerm f_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_58);
      t = n_153;
    }
  else
    {
      t = d_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_153;
    }
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm r_153 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_153);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm g_58 = t;
  int h_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_58);
    }
  else
    {
      t = g_58;
      {
        ATerm i_58 = t;
        int j_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_58);
          }
        else
          {
            t = i_58;
            {
              ATerm l_58 = t;
              int m_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_153 = NULL,u_153 = NULL,v_153 = NULL,w_153 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_153 = ATgetArgument(t, 0);
                      u_153 = ATgetArgument(t, 1);
                      v_153 = ATgetArgument(t, 2);
                      w_153 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_153;
                  t = map_1_0(k_14, t);
                  LocalPopChoice(m_58);
                }
              else
                {
                  t = l_58;
                  {
                    ATerm o_58 = t;
                    int q_58 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(q_58);
                      }
                    else
                      {
                        t = o_58;
                        t = dynrule_targs_1_0(l_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm d_154 = NULL;
  ATerm r_58 = t;
  int s_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_154 = ATgetArgument(t, 0);
          {
            ATerm t_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_58);
      t = d_154;
    }
  else
    {
      t = r_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_154;
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  t = map_1_0(m_14, t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm j_154 = NULL;
  ATerm u_58 = t;
  int w_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_154 = ATgetArgument(t, 0);
          {
            ATerm x_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_58);
      t = j_154;
    }
  else
    {
      t = u_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_154;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm p_154 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_154);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm z_58 = t;
  int a_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_59);
    }
  else
    {
      t = z_58;
      {
        ATerm c_59 = t;
        int e_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_59);
          }
        else
          {
            t = c_59;
            {
              ATerm f_59 = t;
              int g_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_154 = NULL,u_154 = NULL,v_154 = NULL,w_154 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_154 = ATgetArgument(t, 0);
                      u_154 = ATgetArgument(t, 1);
                      v_154 = ATgetArgument(t, 2);
                      w_154 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_154;
                  t = map_1_0(f_15, t);
                  LocalPopChoice(g_59);
                }
              else
                {
                  t = f_59;
                  {
                    ATerm h_59 = t;
                    int i_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(i_59);
                      }
                    else
                      {
                        t = h_59;
                        t = dynrule_targs_1_0(n_15, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm f_155 = NULL;
  ATerm j_59 = t;
  int k_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_155 = ATgetArgument(t, 0);
          {
            ATerm l_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_59);
      t = f_155;
    }
  else
    {
      t = j_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_155 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_155;
    }
  return(t);
}
static ATerm n_15 (ATerm t)
{
  t = map_1_0(o_15, t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm k_155 = NULL;
  ATerm n_59 = t;
  int o_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_155 = ATgetArgument(t, 0);
          {
            ATerm s_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_59);
      t = k_155;
    }
  else
    {
      t = n_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_155 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_155;
    }
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm o_155 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_155);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm t_59 = t;
  int j_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_60);
    }
  else
    {
      t = t_59;
      {
        ATerm k_60 = t;
        int l_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_60);
          }
        else
          {
            t = k_60;
            {
              ATerm m_60 = t;
              int n_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_155 = NULL,r_155 = NULL,s_155 = NULL,t_155 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_155 = ATgetArgument(t, 0);
                      r_155 = ATgetArgument(t, 1);
                      s_155 = ATgetArgument(t, 2);
                      t_155 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_155;
                  t = map_1_0(v_15, t);
                  LocalPopChoice(n_60);
                }
              else
                {
                  t = m_60;
                  {
                    ATerm o_60 = t;
                    int p_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(p_60);
                      }
                    else
                      {
                        t = o_60;
                        t = dynrule_targs_1_0(z_15, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm a_156 = NULL;
  ATerm q_60 = t;
  int r_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_156 = ATgetArgument(t, 0);
          {
            ATerm s_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_60);
      t = a_156;
    }
  else
    {
      t = q_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_156 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_156;
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  t = map_1_0(a_16, t);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm f_156 = NULL;
  ATerm u_60 = t;
  int v_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_156 = ATgetArgument(t, 0);
          {
            ATerm w_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_60);
      t = f_156;
    }
  else
    {
      t = u_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_156 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_156;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm z_151 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      z_151 = ATgetArgument(t, 0);
      t = z_151;
      t = free_vars_3_0(c_12, d_12, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          z_151 = ATgetArgument(t, 0);
          t = z_151;
          t = free_vars_3_0(i_12, o_12, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              z_151 = ATgetArgument(t, 0);
              t = z_151;
              t = free_vars_3_0(i_14, j_14, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  z_151 = ATgetArgument(t, 0);
                  t = z_151;
                  t = free_vars_3_0(n_14, o_14, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      z_151 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_151;
                  t = free_vars_3_0(q_15, r_15, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm t_12 (ATerm t_158 (ATerm), ATerm k_74, ATerm j_74, ATerm t)
{
  static ATerm c_157 (ATerm t);
  static ATerm c_157 (ATerm t)
  {
    ATerm x_156 = NULL,y_156 = NULL,z_156 = NULL;
    x_156 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_74;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_156 = ATgetFirst((ATermList) t);
            z_156 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm x_60 = t;
          int y_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_156;
              {
                static ATerm b_16 (ATerm t);
                static ATerm b_16 (ATerm t)
                {
                  t = j_74;
                  return(t);
                }
                t = u_12(t_158, b_16, y_156, z_156, t);
              }
              t = c_157(t);
              LocalPopChoice(y_60);
            }
          else
            {
              t = x_60;
              {
                ATerm r_79 = NULL,u_79 = NULL,m_25 = NULL;
                t = SSLgetAnnotations(x_156);
                r_79 = t;
                t = z_156;
                t = c_157(t);
                u_79 = t;
                t = (ATerm) ATinsert(CheckATermList(u_79), y_156);
                m_25 = t;
                t = SSLsetAnnotations(m_25, r_79);
              }
            }
        }
      }
    return(t);
  }
  t = k_74;
  t = c_157(t);
  return(t);
}
ATerm foldr_3_0 (ATerm y_161 (ATerm), ATerm z_161 (ATerm), ATerm a_162 (ATerm), ATerm t)
{
  ATerm f_157 = NULL,g_157 = NULL,h_157 = NULL;
  f_157 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_157;
      t = y_161(t);
    }
  else
    {
      ATerm k_157 = NULL,l_157 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_157 = ATgetFirst((ATermList) t);
          h_157 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_157;
      t = a_162(t);
      k_157 = t;
      t = h_157;
      t = foldr_3_0(y_161, z_161, a_162, t);
      l_157 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_157, l_157);
      t = z_161(t);
    }
  return(t);
}
static ATerm u_12 (ATerm w_158 (ATerm), ATerm x_158 (ATerm), ATerm o_74, ATerm n_74, ATerm t)
{
  t = x_158(t);
  {
    static ATerm d_16 (ATerm t);
    static ATerm d_16 (ATerm t)
    {
      ATerm o_157 = NULL;
      o_157 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_74, o_157);
      t = w_158(t);
      return(t);
    }
    t = fetch_1_0(d_16, t);
  }
  t = n_74;
  return(t);
}
static ATerm v_12 (ATerm o_158 (ATerm), ATerm i_74, ATerm h_74, ATerm t)
{
  static ATerm e_158 (ATerm t);
  static ATerm e_158 (ATerm t)
  {
    ATerm z_157 = NULL,a_158 = NULL,b_158 = NULL;
    z_157 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_157;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_158 = ATgetFirst((ATermList) t);
            b_158 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_60 = t;
          int d_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_157;
              {
                static ATerm h_16 (ATerm t);
                static ATerm h_16 (ATerm t)
                {
                  t = h_74;
                  return(t);
                }
                t = u_12(o_158, h_16, a_158, b_158, t);
              }
              t = e_158(t);
              LocalPopChoice(d_61);
            }
          else
            {
              t = z_60;
              {
                ATerm u_80 = NULL,z_80 = NULL,q_25 = NULL;
                t = SSLgetAnnotations(z_157);
                u_80 = t;
                t = b_158;
                t = e_158(t);
                z_80 = t;
                t = (ATerm) ATinsert(CheckATermList(z_80), a_158);
                q_25 = t;
                t = SSLsetAnnotations(q_25, u_80);
              }
            }
        }
      }
    return(t);
  }
  t = i_74;
  t = e_158(t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_61 = ATgetArgument(t, 0);
      if(((ATgetType(e_61) != AT_LIST) || !(ATisEmpty(e_61))))
        _fail(t);
      {
        ATerm f_61 = ATgetArgument(t, 1);
        if(((ATgetType(f_61) != AT_LIST) || !(ATisEmpty(f_61))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm m_158 = NULL,n_158 = NULL,q_158 = NULL,r_158 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_61 = ATgetArgument(t, 0);
      if(((ATgetType(g_61) == AT_LIST) && !(ATisEmpty(g_61))))
        {
          m_158 = ATgetFirst((ATermList) g_61);
          n_158 = (ATerm) ATgetNext((ATermList) g_61);
        }
      else
        _fail(t);
      {
        ATerm h_61 = ATgetArgument(t, 1);
        if(((ATgetType(h_61) == AT_LIST) && !(ATisEmpty(h_61))))
          {
            q_158 = ATgetFirst((ATermList) h_61);
            r_158 = (ATerm) ATgetNext((ATermList) h_61);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_158, q_158), (ATerm) ATmakeAppl(sym__2, n_158, r_158));
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm s_158 = NULL,v_158 = NULL;
  if(match_cons(t, sym__2))
    {
      s_158 = ATgetArgument(t, 0);
      v_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_158), s_158);
  return(t);
}
static ATerm x_12 (ATerm d_922, ATerm i_922, ATerm z_96, ATerm t)
{
  ATerm h_158 = NULL,i_158 = NULL,j_158 = NULL,k_158 = NULL;
  t = SSL_explode_term(i_922);
  if(match_cons(t, sym__2))
    {
      h_158 = ATgetArgument(t, 0);
      j_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_922);
  if(match_cons(t, sym__2))
    {
      if((h_158 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      i_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_158, j_158);
  t = genzip_4_0(k_16, m_16, n_16, _id, t);
  k_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_158, z_96);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm y_146 (ATerm), ATerm z_146 (ATerm), ATerm t)
{
  static ATerm z_158 (ATerm t);
  static ATerm z_158 (ATerm t)
  {
    ATerm i_61 = t;
    int j_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_146(t);
        LocalPopChoice(j_61);
      }
    else
      {
        t = i_61;
        t = z_146(t);
        t = z_158(t);
      }
    return(t);
  }
  t = z_158(t);
  return(t);
}
ATerm for_3_0 (ATerm b_147 (ATerm), ATerm c_147 (ATerm), ATerm d_147 (ATerm), ATerm t)
{
  t = b_147(t);
  t = while_not_2_0(c_147, d_147, t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm l_159 = NULL;
  l_159 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, l_159);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm m_159 = NULL,n_159 = NULL,o_159 = NULL,p_159 = NULL,v_25 = NULL;
  p_159 = t;
  if(match_cons(t, sym__2))
    {
      n_159 = ATgetArgument(t, 0);
      o_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_159);
  m_159 = t;
  t = o_159;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_159, o_159);
  v_25 = t;
  t = SSLsetAnnotations(v_25, m_159);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm i_160 = NULL,j_160 = NULL,k_160 = NULL,l_160 = NULL,m_160 = NULL;
  i_160 = t;
  if(match_cons(t, sym__2))
    {
      j_160 = ATgetArgument(t, 0);
      k_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_160;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_160 = ATgetFirst((ATermList) t);
      m_160 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_61 = t;
        int l_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_160(j_160, k_160, i_160, t);
            LocalPopChoice(l_61);
          }
        else
          {
            t = k_61;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_160), l_160), m_160);
          }
      }
    }
  else
    {
      t = w_160(j_160, k_160, i_160, t);
    }
  return(t);
}
static ATerm w_160 (ATerm q_159, ATerm r_159, ATerm s_159, ATerm t)
{
  ATerm t_159 = NULL,w_159 = NULL,w_25 = NULL,z_159 = NULL,a_160 = NULL,b_160 = NULL,c_160 = NULL;
  t = SSLgetAnnotations(s_159);
  t_159 = t;
  t = r_159;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_159 = ATgetFirst((ATermList) t);
      c_160 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_159;
  if(match_cons(t, sym__2))
    {
      a_160 = ATgetArgument(t, 0);
      b_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_61 = t;
    int n_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_160;
        if((a_160 != t))
          {
            _fail(t);
          }
        t = c_160;
        LocalPopChoice(n_61);
      }
    else
      {
        t = m_61;
        t = r_159;
        t = x_12(a_160, b_160, c_160, t);
      }
  }
  w_159 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_159, w_159);
  w_25 = t;
  t = SSLsetAnnotations(w_25, t_159);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm v_160 = NULL;
  if(match_cons(t, sym__2))
    {
      v_160 = ATgetArgument(t, 0);
      if((v_160 != ATgetArgument(t, 1)))
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
  ATerm o_61 = t;
  int p_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(o_16, u_16, v_16, t);
      LocalPopChoice(p_61);
    }
  else
    {
      t = o_61;
      {
        ATerm q_160 = NULL,r_160 = NULL,s_160 = NULL;
        q_160 = t;
        if(match_cons(t, sym__2))
          {
            r_160 = ATgetArgument(t, 0);
            s_160 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_160;
        t = v_12(w_16, r_160, s_160, t);
      }
    }
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm l_81 = NULL,m_81 = NULL;
  if(match_cons(t, sym__2))
    {
      l_81 = ATgetArgument(t, 0);
      m_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12(k_17, l_81, m_81, t);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm n_81 = NULL;
  if(match_cons(t, sym__2))
    {
      n_81 = ATgetArgument(t, 0);
      if((n_81 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm w_81 = NULL,x_81 = NULL;
  if(match_cons(t, sym__2))
    {
      w_81 = ATgetArgument(t, 0);
      x_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12(s_17, w_81, x_81, t);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm z_81 = NULL;
  if(match_cons(t, sym__2))
    {
      z_81 = ATgetArgument(t, 0);
      if((z_81 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm k_174 (ATerm), ATerm l_174 (ATerm), ATerm m_174 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm l_161 (ATerm t);
  static ATerm l_161 (ATerm t)
  {
    ATerm q_61 = t;
    int r_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_174(t);
        LocalPopChoice(r_61);
      }
    else
      {
        t = q_61;
        {
          ATerm s_61 = t;
          int t_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_160 = NULL,z_160 = NULL,g_81 = NULL,h_81 = NULL;
              y_160 = t;
              t = l_174(t);
              z_160 = t;
              t = y_160;
              {
                static ATerm x_16 (ATerm t);
                static ATerm x_16 (ATerm t)
                {
                  ATerm b_161 = NULL;
                  t = l_161(t);
                  b_161 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_161, z_160);
                  t = diff_0_0(t);
                  return(t);
                }
                t = m_174(x_16, l_161, y_16, t);
              }
              h_81 = t;
              t = SSL_explode_term(h_81);
              if(match_cons(t, sym__2))
                {
                  ATerm u_61 = ATgetArgument(t, 0);
                  g_81 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_81;
              t = foldr_3_0(h_17, j_17, _id, t);
              LocalPopChoice(t_61);
            }
          else
            {
              t = s_61;
              {
                ATerm p_81 = NULL,s_81 = NULL;
                s_81 = t;
                t = SSL_explode_term(s_81);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_61 = ATgetArgument(t, 0);
                    p_81 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_81;
                t = foldr_3_0(l_17, r_17, l_161, t);
              }
            }
        }
      }
    return(t);
  }
  t = l_161(t);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm d_162 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_162);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm a_62 = t;
  int b_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_62);
    }
  else
    {
      t = a_62;
      {
        ATerm c_62 = t;
        int e_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_62);
          }
        else
          {
            t = c_62;
            {
              ATerm g_62 = t;
              int h_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_162 = NULL,g_162 = NULL,h_162 = NULL,i_162 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_162 = ATgetArgument(t, 0);
                      g_162 = ATgetArgument(t, 1);
                      h_162 = ATgetArgument(t, 2);
                      i_162 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_162;
                  t = map_1_0(b_18, t);
                  LocalPopChoice(h_62);
                }
              else
                {
                  t = g_62;
                  {
                    ATerm p_62 = t;
                    int q_62 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(q_62);
                      }
                    else
                      {
                        t = p_62;
                        t = dynrule_targs_1_0(c_18, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm p_162 = NULL;
  ATerm r_62 = t;
  int s_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_162 = ATgetArgument(t, 0);
          {
            ATerm t_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_62);
      t = p_162;
    }
  else
    {
      t = r_62;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_162 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_162;
    }
  return(t);
}
static ATerm c_18 (ATerm t)
{
  t = map_1_0(d_18, t);
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm u_162 = NULL;
  ATerm u_62 = t;
  int v_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_162 = ATgetArgument(t, 0);
          {
            ATerm w_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_62);
      t = u_162;
    }
  else
    {
      t = u_62;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_162 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_162;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm r_161 = NULL,v_161 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      v_161 = ATgetArgument(t, 0);
      t = v_161;
      if(match_cons(t, sym_Rule_3))
        {
          r_161 = ATgetArgument(t, 0);
          {
            ATerm z_62 = ATgetArgument(t, 1);
          }
          {
            ATerm a_63 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = r_161;
      t = free_vars_3_0(t_17, a_18, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          v_161 = ATgetArgument(t, 0);
          {
            ATerm b_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_161;
    }
  return(t);
}
ATerm Var_1_0 (ATerm s_117 (ATerm), ATerm t)
{
  ATerm y_162 = NULL,z_162 = NULL,a_163 = NULL,b_163 = NULL,z_25 = NULL;
  b_163 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_163);
  y_162 = t;
  t = z_162;
  t = s_117(t);
  a_163 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_163);
  z_25 = t;
  t = SSLsetAnnotations(z_25, y_162);
  return(t);
}
static ATerm z_12 (ATerm f_173 (ATerm), ATerm g_173 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_95, ATerm f_95, ATerm e_95, ATerm t)
{
  static ATerm e_18 (ATerm t);
  static ATerm f_18 (ATerm t);
  static ATerm e_18 (ATerm t)
  {
    ATerm d_163 = NULL;
    d_163 = t;
    t = (ATerm) ATmakeAppl(sym__2, d_163, e_95);
    t = f_173(t);
    return(t);
  }
  static ATerm f_18 (ATerm t)
  {
    ATerm e_163 = NULL;
    e_163 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_163, f_95);
    t = f_173(t);
    return(t);
  }
  t = g_95;
  t = g_173(e_18, f_18, _id, t);
  return(t);
}
ATerm at_end_1_0 (ATerm z_154 (ATerm), ATerm t)
{
  static ATerm a_164 (ATerm t);
  static ATerm a_164 (ATerm t)
  {
    ATerm x_163 = NULL,y_163 = NULL,z_163 = NULL;
    z_163 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_163 = ATgetFirst((ATermList) t);
        y_163 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_82 = NULL,h_82 = NULL,b_26 = NULL;
          t = SSLgetAnnotations(z_163);
          d_82 = t;
          t = y_163;
          t = a_164(t);
          h_82 = t;
          t = (ATerm) ATinsert(CheckATermList(h_82), x_163);
          b_26 = t;
          t = SSLsetAnnotations(b_26, d_82);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_163;
        t = z_154(t);
      }
    return(t);
  }
  t = a_164(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_163 = NULL,i_163 = NULL,j_163 = NULL;
  h_163 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_163;
    }
  else
    {
      static ATerm g_18 (ATerm t);
      static ATerm g_18 (ATerm t)
      {
        t = not_null(j_163);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_163 = ATgetFirst((ATermList) t);
          if(((j_163 != NULL) && (j_163 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_163 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_163;
      t = at_end_1_0(g_18, t);
    }
  return(t);
}
static ATerm o_164 (ATerm e_164, ATerm t)
{
  ATerm f_164 = NULL;
  t = SSL_explode_term(e_164);
  if(match_cons(t, sym__2))
    {
      ATerm c_63 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_63) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_164;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_164 = NULL,k_164 = NULL,l_164 = NULL;
  l_164 = t;
  if(match_cons(t, sym__2))
    {
      j_164 = ATgetArgument(t, 0);
      k_164 = ATgetArgument(t, 1);
      {
        ATerm d_63 = t;
        int f_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_18 (ATerm t);
            static ATerm h_18 (ATerm t)
            {
              t = k_164;
              return(t);
            }
            t = j_164;
            t = at_end_1_0(h_18, t);
            LocalPopChoice(f_63);
          }
        else
          {
            t = d_63;
            t = o_164(l_164, t);
          }
      }
    }
  else
    {
      t = o_164(l_164, t);
    }
  return(t);
}
static ATerm i_18 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_63 = ATgetArgument(t, 0);
      if(((ATgetType(g_63) != AT_LIST) || !(ATisEmpty(g_63))))
        _fail(t);
      {
        ATerm h_63 = ATgetArgument(t, 1);
        if(((ATgetType(h_63) != AT_LIST) || !(ATisEmpty(h_63))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm w_164 = NULL,x_164 = NULL,y_164 = NULL,z_164 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_63 = ATgetArgument(t, 0);
      if(((ATgetType(i_63) == AT_LIST) && !(ATisEmpty(i_63))))
        {
          w_164 = ATgetFirst((ATermList) i_63);
          x_164 = (ATerm) ATgetNext((ATermList) i_63);
        }
      else
        _fail(t);
      {
        ATerm j_63 = ATgetArgument(t, 1);
        if(((ATgetType(j_63) == AT_LIST) && !(ATisEmpty(j_63))))
          {
            y_164 = ATgetFirst((ATermList) j_63);
            z_164 = (ATerm) ATgetNext((ATermList) j_63);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_164, y_164), (ATerm) ATmakeAppl(sym__2, x_164, z_164));
  return(t);
}
static ATerm o_18 (ATerm t)
{
  ATerm a_165 = NULL,b_165 = NULL;
  if(match_cons(t, sym__2))
    {
      a_165 = ATgetArgument(t, 0);
      b_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_165), a_165);
  return(t);
}
static ATerm a_13 (ATerm z_172 (ATerm), ATerm a_173 (ATerm (ATerm), ATerm), ATerm y_94, ATerm b_95, ATerm t)
{
  ATerm q_164 = NULL,r_164 = NULL,s_164 = NULL,t_164 = NULL,v_164 = NULL;
  t = y_94;
  t = z_172(t);
  q_164 = t;
  t = map_1_0(new_0_0, t);
  r_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_164, r_164);
  t = genzip_4_0(i_18, k_18, o_18, _id, t);
  v_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_164, b_95);
  t = conc_0_0(t);
  s_164 = t;
  t = y_94;
  {
    static ATerm q_18 (ATerm t);
    static ATerm q_18 (ATerm t)
    {
      t = r_164;
      return(t);
    }
    t = a_173(q_18, t);
  }
  t_164 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_164, b_95, s_164);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm g_165 = NULL,h_165 = NULL,i_165 = NULL,j_165 = NULL,k_165 = NULL,l_165 = NULL,m_165 = NULL;
  i_165 = t;
  if(match_cons(t, sym__2))
    {
      j_165 = ATgetArgument(t, 0);
      k_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_165;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_165 = ATgetFirst((ATermList) t);
      m_165 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_165;
  if(match_cons(t, sym__2))
    {
      g_165 = ATgetArgument(t, 0);
      h_165 = ATgetArgument(t, 1);
      {
        ATerm k_63 = t;
        int l_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_165;
            if((j_165 != t))
              {
                _fail(t);
              }
            t = h_165;
            LocalPopChoice(l_63);
          }
        else
          {
            t = k_63;
            t = (ATerm) ATmakeAppl(sym__2, j_165, m_165);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, j_165, m_165);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm g_164 (ATerm), ATerm t)
{
  static ATerm i_166 (ATerm t);
  static ATerm i_166 (ATerm t)
  {
    ATerm m_63 = t;
    int n_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_164(t);
        LocalPopChoice(n_63);
      }
    else
      {
        t = m_63;
        {
          ATerm f_166 = NULL,g_166 = NULL,h_166 = NULL;
          static ATerm s_18 (ATerm t);
          static ATerm s_18 (ATerm t)
          {
            ATerm t_82 = NULL;
            t_82 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_82, not_null(h_166));
            t = i_166(t);
            return(t);
          }
          f_166 = t;
          if(match_cons(t, sym__2))
            {
              g_166 = ATgetArgument(t, 0);
              if(((h_166 != NULL) && (h_166 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                h_166 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_166;
          t = SRTS_all(s_18, t);
        }
      }
    return(t);
  }
  t = i_166(t);
  return(t);
}
ATerm rename_4_0 (ATerm u_172 (ATerm (ATerm), ATerm), ATerm v_172 (ATerm), ATerm w_172 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm x_172 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_166 = NULL;
  static ATerm b_167 (ATerm t);
  static ATerm b_167 (ATerm t)
  {
    static ATerm t_18 (ATerm t);
    static ATerm t_18 (ATerm t)
    {
      ATerm v_166 = NULL,w_166 = NULL,x_166 = NULL;
      v_166 = t;
      if(match_cons(t, sym__2))
        {
          w_166 = ATgetArgument(t, 0);
          x_166 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm o_63 = t;
        int p_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm u_18 (ATerm t);
            static ATerm u_18 (ATerm t)
            {
              ATerm a_167 = NULL;
              a_167 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_167, x_166);
              t = lookup_0_0(t);
              return(t);
            }
            t = w_166;
            t = u_172(u_18, t);
            LocalPopChoice(p_63);
          }
        else
          {
            t = o_63;
            {
              ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL;
              t = v_166;
              t = a_13(v_172, x_172, w_166, x_166, t);
              if(match_cons(t, sym__3))
                {
                  b_83 = ATgetArgument(t, 0);
                  c_83 = ATgetArgument(t, 1);
                  d_83 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = z_12(b_167, w_172, b_83, c_83, d_83, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(t_18, t);
    return(t);
  }
  m_166 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_166, (ATerm) ATempty);
  t = b_167(t);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm q_63 = t;
  int s_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_63);
    }
  else
    {
      t = q_63;
      {
        ATerm t_63 = t;
        int x_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_167 = NULL,i_167 = NULL,j_167 = NULL,k_167 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                h_167 = ATgetArgument(t, 0);
                i_167 = ATgetArgument(t, 1);
                j_167 = ATgetArgument(t, 2);
                k_167 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = j_167;
            t = map_1_0(w_18, t);
            LocalPopChoice(x_63);
          }
        else
          {
            t = t_63;
            {
              ATerm y_63 = t;
              int z_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Bind8_0_0(t);
                  LocalPopChoice(z_63);
                }
              else
                {
                  t = y_63;
                  t = dynrule_targs_1_0(x_18, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm r_167 = NULL;
  ATerm a_64 = t;
  int e_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_167 = ATgetArgument(t, 0);
          {
            ATerm h_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_64);
      t = r_167;
    }
  else
    {
      t = a_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_167 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_167;
    }
  return(t);
}
static ATerm x_18 (ATerm t)
{
  t = map_1_0(a_19, t);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm w_167 = NULL;
  ATerm i_64 = t;
  int j_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_167 = ATgetArgument(t, 0);
          {
            ATerm k_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_64);
      t = w_167;
    }
  else
    {
      t = i_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_167 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_167;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, v_18, tboundin_3_0, tpaste_1_0, t);
  t = srename_0_0(t);
  return(t);
}
static ATerm g_13 (ATerm o_46, ATerm p_46, ATerm t)
{
  ATerm z_167 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_46, p_46);
  t = y_13(o_46, p_46, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_167 = ATgetFirst((ATermList) t);
      {
        ATerm l_64 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_167;
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm e_169 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      e_169 = ATgetArgument(t, 0);
      {
        ATerm n_64 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = e_169;
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm f_169 = NULL,h_169 = NULL,i_169 = NULL,j_169 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      h_169 = ATgetArgument(t, 0);
      j_169 = ATgetArgument(t, 1);
      f_169 = ATgetArgument(t, 2);
      t = h_169;
      if(match_cons(t, sym_SVar_1))
        {
          i_169 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_169;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_169;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_169;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          h_169 = ATgetArgument(t, 0);
          j_169 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_169;
      if(match_cons(t, sym_SVar_1))
        {
          i_169 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_169;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_169;
    }
  return(t);
}
static ATerm f_19 (ATerm t)
{
  ATerm n_169 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      n_169 = ATgetArgument(t, 0);
      {
        ATerm l_65 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = n_169;
  return(t);
}
static ATerm i_19 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_65 = ATgetArgument(t, 0);
      if(((ATgetType(m_65) != AT_LIST) || !(ATisEmpty(m_65))))
        _fail(t);
      {
        ATerm n_65 = ATgetArgument(t, 1);
        if(((ATgetType(n_65) != AT_LIST) || !(ATisEmpty(n_65))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm o_169 = NULL,p_169 = NULL,q_169 = NULL,r_169 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_65 = ATgetArgument(t, 0);
      if(((ATgetType(o_65) == AT_LIST) && !(ATisEmpty(o_65))))
        {
          o_169 = ATgetFirst((ATermList) o_65);
          p_169 = (ATerm) ATgetNext((ATermList) o_65);
        }
      else
        _fail(t);
      {
        ATerm p_65 = ATgetArgument(t, 1);
        if(((ATgetType(p_65) == AT_LIST) && !(ATisEmpty(p_65))))
          {
            q_169 = ATgetFirst((ATermList) p_65);
            r_169 = (ATerm) ATgetNext((ATermList) p_65);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_169, q_169), (ATerm) ATmakeAppl(sym__2, p_169, r_169));
  return(t);
}
static ATerm k_19 (ATerm t)
{
  ATerm s_169 = NULL,t_169 = NULL;
  if(match_cons(t, sym__2))
    {
      s_169 = ATgetArgument(t, 0);
      t_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_169), s_169);
  return(t);
}
static ATerm l_19 (ATerm t)
{
  ATerm u_169 = NULL,v_169 = NULL;
  if(match_cons(t, sym__2))
    {
      u_169 = ATgetArgument(t, 0);
      v_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_169), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_169)));
  return(t);
}
static ATerm m_19 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm k_168 = NULL,l_168 = NULL,m_168 = NULL,n_168 = NULL,o_168 = NULL,p_168 = NULL,q_168 = NULL,r_168 = NULL,s_168 = NULL,t_168 = NULL,c_169 = NULL,d_169 = NULL,q_83 = NULL,r_83 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm s_65 = ATgetArgument(t, 0);
      if(match_cons(s_65, sym_SVar_1))
        {
          m_168 = ATgetArgument(s_65, 0);
        }
      else
        _fail(t);
      o_168 = ATgetArgument(t, 1);
      s_168 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_168), (ATerm)ATempty, (ATerm) ATempty);
  q_83 = t;
  t = term_u_65;
  r_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_65, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_168), (ATerm)ATempty, (ATerm) ATempty));
  t = g_13(r_83, q_83, t);
  if(match_cons(t, sym_Defined_4))
    {
      ATerm w_65 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_65) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      k_168 = ATgetArgument(t, 1);
      l_168 = ATgetArgument(t, 2);
      r_168 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, m_168, k_168, r_168, l_168);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((m_168 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_168 = ATgetArgument(t, 1);
      {
        ATerm z_65 = ATgetArgument(t, 2);
      }
      p_168 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = n_168;
  t = map_1_0(c_19, t);
  d_169 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_169, o_168, p_168);
  t = substitute_2_0(e_19, _id, t);
  q_168 = t;
  t = r_168;
  t = map_1_0(f_19, t);
  t_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_168, t_168);
  t = genzip_4_0(i_19, j_19, k_19, l_19, t);
  c_169 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_168, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_169), q_168));
  t = downup_1_0(m_19, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm n_19 (ATerm t)
{
  ATerm f_170 = NULL,g_170 = NULL,h_170 = NULL;
  f_170 = t;
  t = term_b_40;
  g_170 = t;
  t = (ATerm) ATinsert(ATempty, term_a_66);
  h_170 = t;
  t = SSL_printnl(g_170, h_170);
  t = f_170;
  return(t);
}
static ATerm o_19 (ATerm t)
{
  t = debug_1_0(p_19, t);
  return(t);
}
static ATerm p_19 (ATerm t)
{
  t = term_b_66;
  return(t);
}
static ATerm q_19 (ATerm t)
{
  ATerm p_170 = NULL,q_170 = NULL,r_170 = NULL;
  p_170 = t;
  t = term_b_40;
  q_170 = t;
  t = (ATerm) ATinsert(ATempty, term_d_66);
  r_170 = t;
  t = SSL_printnl(q_170, r_170);
  t = p_170;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm d_170 = NULL,e_170 = NULL;
  e_170 = t;
  t = new_0_0(t);
  d_170 = t;
  {
    ATerm f_66 = t;
    int g_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_66, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_170), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(g_66);
      }
    else
      {
        t = f_66;
        t = if_verbose2_1_0(n_19, t);
        _fail(t);
      }
  }
  {
    ATerm r_66 = t;
    int v_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_170 = NULL,j_170 = NULL,k_170 = NULL,l_170 = NULL,m_170 = NULL,n_170 = NULL,o_170 = NULL;
        i_170 = t;
        if(match_cons(t, sym_LChoice_2))
          {
            j_170 = ATgetArgument(t, 0);
            o_170 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_170;
        if(match_cons(t, sym_CallT_3))
          {
            k_170 = ATgetArgument(t, 0);
            m_170 = ATgetArgument(t, 1);
            n_170 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = k_170;
        if(match_cons(t, sym_SVar_1))
          {
            l_170 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_170;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_170;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_170;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        t = l_170;
        if((d_170 != t))
          {
            _fail(t);
          }
        t = i_170;
        LocalPopChoice(v_66);
      }
    else
      {
        t = r_66;
        t = if_verbose1_1_0(o_19, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(q_19, t);
  t = e_170;
  return(t);
}
ATerm check_library_definitions_0_0 (ATerm t)
{
  t = check_that_try_is_try_0_0(t);
  t = check_that_innermost_is_innermost_0_0(t);
  t = check_that_bottomup_is_bottomup_0_0(t);
  return(t);
}
static ATerm h_13 (ATerm i_148 (ATerm), ATerm u_44, ATerm s_44, ATerm t)
{
  ATerm s_170 = NULL,t_170 = NULL,u_170 = NULL,v_170 = NULL,w_170 = NULL,x_170 = NULL,y_170 = NULL,z_170 = NULL;
  v_170 = t;
  t = i_148(t);
  s_170 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_170, u_44, s_44);
  t = z_13(s_170, u_44, s_44, t);
  {
    ATerm w_66 = t;
    int x_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_171 = NULL;
        t = term_y_34;
        a_171 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_170, term_y_34);
        t = y_13(s_170, a_171, t);
        {
          ATerm y_66 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = y_66;
            }
        }
        LocalPopChoice(x_66);
      }
    else
      {
        t = w_66;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_170 = ATgetFirst((ATermList) t);
      u_170 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_170, term_y_34, (ATerm) ATinsert(CheckATermList(u_170), (ATerm) ATinsert(CheckATermList(t_170), u_44)));
  t = lookup_table_0_1(s_170, t);
  z_170 = t;
  t = term_y_34;
  w_170 = t;
  t = (ATerm) ATinsert(CheckATermList(u_170), (ATerm) ATinsert(CheckATermList(t_170), u_44));
  x_170 = t;
  t = z_170;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14(w_170, x_170, y_170, t);
  t = v_170;
  return(t);
}
ATerm map_1_0 (ATerm k_154 (ATerm), ATerm t)
{
  static ATerm p_171 (ATerm t);
  static ATerm p_171 (ATerm t)
  {
    ATerm m_171 = NULL,n_171 = NULL,o_171 = NULL;
    m_171 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_171;
      }
    else
      {
        ATerm x_83 = NULL,c_84 = NULL,d_84 = NULL,d_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_171 = ATgetFirst((ATermList) t);
            o_171 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_171);
        x_83 = t;
        t = n_171;
        t = k_154(t);
        c_84 = t;
        t = o_171;
        t = p_171(t);
        d_84 = t;
        t = (ATerm) ATinsert(CheckATermList(d_84), c_84);
        d_26 = t;
        t = SSLsetAnnotations(d_26, x_83);
      }
    return(t);
  }
  t = p_171(t);
  return(t);
}
ATerm Cons_2_0 (ATerm k_114 (ATerm), ATerm l_114 (ATerm), ATerm t)
{
  ATerm r_171 = NULL,s_171 = NULL,x_171 = NULL,y_171 = NULL,z_171 = NULL,a_172 = NULL,o_26 = NULL;
  a_172 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_171 = ATgetFirst((ATermList) t);
      x_171 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_172);
  r_171 = t;
  t = s_171;
  t = k_114(t);
  y_171 = t;
  t = x_171;
  t = l_114(t);
  z_171 = t;
  t = (ATerm) ATinsert(CheckATermList(z_171), y_171);
  o_26 = t;
  t = SSLsetAnnotations(o_26, r_171);
  return(t);
}
static ATerm j_13 (ATerm g_36, ATerm h_36, ATerm t)
{
  ATerm f_172 = NULL;
  t = SSL_fputc(g_36, h_36);
  f_172 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_172);
  return(t);
}
static ATerm k_13 (ATerm x_41, ATerm y_41, ATerm t)
{
  ATerm g_172 = NULL;
  t = SSL_write_term_to_stream_text(x_41, y_41);
  g_172 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_172);
  return(t);
}
static ATerm m_13 (ATerm w_147 (ATerm), ATerm q_367, ATerm d_42, ATerm t)
{
  ATerm h_172 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_367, term_z_66);
  t = r_13(t);
  h_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_172, d_42);
  t = w_147(t);
  t = fclose_0_0(t);
  t = d_42;
  return(t);
}
static ATerm l_13 (ATerm t_41, ATerm u_41, ATerm t)
{
  ATerm i_172 = NULL;
  t = SSL_write_term_to_stream_baf(t_41, u_41);
  i_172 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_172);
  return(t);
}
static ATerm r_19 (ATerm t)
{
  ATerm p_172 = NULL,q_172 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_67 = ATgetArgument(t, 0);
      if(match_cons(a_67, sym_Stream_1))
        {
          p_172 = ATgetArgument(a_67, 0);
        }
      else
        _fail(t);
      q_172 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_13(p_172, q_172, t);
  return(t);
}
static ATerm b_20 (ATerm t)
{
  ATerm r_172 = NULL,b_173 = NULL,c_173 = NULL,d_173 = NULL,e_173 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_67 = ATgetArgument(t, 0);
      if(match_cons(b_67, sym_Stream_1))
        {
          d_173 = ATgetArgument(b_67, 0);
        }
      else
        _fail(t);
      e_173 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_13(d_173, e_173, t);
  r_172 = t;
  t = term_o_25;
  b_173 = t;
  t = r_172;
  if(match_cons(t, sym_Stream_1))
    {
      c_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_o_25, r_172);
  t = j_13(b_173, c_173, t);
  return(t);
}
ATerm output_1_0 (ATerm a_169 (ATerm), ATerm t)
{
  ATerm j_172 = NULL,k_172 = NULL;
  t = a_169(t);
  k_172 = t;
  {
    ATerm c_67 = t;
    int e_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_172 = NULL,m_172 = NULL;
        t = term_y_23;
        l_172 = t;
        t = term_f_67;
        m_172 = t;
        t = term_g_67;
        t = y_13(l_172, m_172, t);
        LocalPopChoice(e_67);
      }
    else
      {
        t = c_67;
        t = term_j_67;
      }
  }
  j_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_172, k_172);
  {
    ATerm q_67 = t;
    int s_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_172 = NULL,o_172 = NULL;
        t = term_y_23;
        n_172 = t;
        t = term_v_67;
        o_172 = t;
        t = term_w_67;
        t = y_13(n_172, o_172, t);
        t = (ATerm) ATmakeAppl(sym__2, j_172, k_172);
        LocalPopChoice(s_67);
        if(match_cons(t, sym__2))
          {
            ATerm x_67 = ATgetArgument(t, 0);
            ATerm y_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_13(r_19, j_172, k_172, t);
      }
    else
      {
        t = q_67;
        if(match_cons(t, sym__2))
          {
            ATerm z_67 = ATgetArgument(t, 0);
            ATerm a_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_13(b_20, j_172, k_172, t);
      }
  }
  return(t);
}
static ATerm u_173 (ATerm o_173, ATerm t)
{
  t = SSL_fclose(o_173);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_173 = NULL,s_173 = NULL;
  s_173 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_173 = ATgetArgument(t, 0);
      {
        ATerm b_68 = t;
        int c_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_173);
            LocalPopChoice(c_68);
          }
        else
          {
            t = b_68;
            t = u_173(s_173, t);
          }
      }
    }
  else
    {
      t = u_173(s_173, t);
    }
  return(t);
}
static ATerm n_13 (ATerm z_41, ATerm t)
{
  t = SSL_read_term_from_stream(z_41);
  return(t);
}
static ATerm o_13 (ATerm j_34, ATerm k_34, ATerm t)
{
  t = SSL_strcat(j_34, k_34);
  return(t);
}
static ATerm p_13 (ATerm i_36, ATerm j_36, ATerm t)
{
  ATerm v_173 = NULL;
  t = SSL_fopen(i_36, j_36);
  v_173 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_173);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_173 = NULL;
  t = SSL_stdin_stream();
  w_173 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_173);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_173 = NULL;
  t = SSL_stdout_stream();
  x_173 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_173);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_173 = NULL;
  t = SSL_stderr_stream();
  y_173 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_173);
  return(t);
}
static ATerm j_175 (ATerm e_174, ATerm t)
{
  ATerm f_174 = NULL;
  t = SSL_explode_term(e_174);
  if(match_cons(t, sym__2))
    {
      ATerm d_68 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_68) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_68 = ATgetArgument(t, 1);
        if(((ATgetType(e_68) == AT_LIST) && !(ATisEmpty(e_68))))
          {
            f_174 = ATgetFirst((ATermList) e_68);
            {
              ATerm f_68 = (ATerm) ATgetNext((ATermList) e_68);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_174;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_174;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_174;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_174;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_175 (ATerm i_174, ATerm j_174, ATerm o_174, ATerm t)
{
  ATerm p_174 = NULL,q_174 = NULL,r_174 = NULL,u_174 = NULL,s_26 = NULL;
  t = SSLgetAnnotations(o_174);
  r_174 = t;
  t = i_174;
  if(match_cons(t, sym_Path_1))
    {
      u_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_174, j_174);
  s_26 = t;
  t = SSLsetAnnotations(s_26, r_174);
  if(match_cons(t, sym__2))
    {
      p_174 = ATgetArgument(t, 0);
      q_174 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_13(p_174, q_174, t);
  return(t);
}
static ATerm l_175 (ATerm w_174, ATerm x_174, ATerm y_174, ATerm t)
{
  ATerm z_174 = NULL,a_175 = NULL,b_175 = NULL,e_175 = NULL,t_26 = NULL;
  t = SSLgetAnnotations(y_174);
  b_175 = t;
  t = SSL_is_string(w_174);
  e_175 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_175, x_174);
  t_26 = t;
  t = SSLsetAnnotations(t_26, b_175);
  if(match_cons(t, sym__2))
    {
      z_174 = ATgetArgument(t, 0);
      a_175 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_13(z_174, a_175, t);
  return(t);
}
static ATerm r_13 (ATerm t)
{
  ATerm g_175 = NULL,h_175 = NULL,i_175 = NULL;
  g_175 = t;
  if(match_cons(t, sym__2))
    {
      h_175 = ATgetArgument(t, 0);
      i_175 = ATgetArgument(t, 1);
      {
        ATerm g_68 = t;
        int i_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_175(g_175, t);
            LocalPopChoice(i_68);
          }
        else
          {
            t = g_68;
            {
              ATerm j_68 = t;
              int k_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_175(h_175, i_175, g_175, t);
                  LocalPopChoice(k_68);
                }
              else
                {
                  t = j_68;
                  t = l_175(h_175, i_175, g_175, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_175(g_175, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_175 = NULL,o_175 = NULL,p_175 = NULL,u_175 = NULL;
  u_175 = t;
  {
    ATerm l_68 = t;
    int o_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_175, term_v_68);
        t = r_13(t);
        LocalPopChoice(o_68);
      }
    else
      {
        t = l_68;
        {
          ATerm t_84 = NULL,u_84 = NULL;
          t = term_x_68;
          u_84 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_68, u_175);
          t = o_13(u_84, u_175, t);
          t_84 = t;
          t = SSL_perror(t_84);
          _fail(t);
        }
      }
  }
  o_175 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_13(p_175, t);
  n_175 = t;
  t = o_175;
  t = fclose_0_0(t);
  t = n_175;
  return(t);
}
ATerm input_1_0 (ATerm b_169 (ATerm), ATerm t)
{
  ATerm a_69 = t;
  int b_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_175 = NULL,y_175 = NULL;
      t = term_y_23;
      x_175 = t;
      t = term_c_69;
      y_175 = t;
      t = term_d_69;
      t = y_13(x_175, y_175, t);
      LocalPopChoice(b_69);
    }
  else
    {
      t = a_69;
      t = term_e_69;
    }
  t = ReadFromFile_0_0(t);
  t = b_169(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm z_175 = NULL,a_176 = NULL;
  t = term_y_23;
  z_175 = t;
  t = term_f_69;
  a_176 = t;
  t = term_g_69;
  t = y_13(z_175, a_176, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_176 = NULL,d_176 = NULL,e_176 = NULL;
  c_176 = t;
  {
    ATerm h_69 = t;
    int i_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_176;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_69 = ATgetFirst((ATermList) t);
                ATerm k_69 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_176;
          }
        LocalPopChoice(i_69);
      }
    else
      {
        t = h_69;
        t = (ATerm) ATinsert(ATempty, c_176);
      }
  }
  d_176 = t;
  t = term_j_67;
  e_176 = t;
  t = SSL_printnl(e_176, d_176);
  t = c_176;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm j_176 = NULL,k_176 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_176 = ATgetFirst((ATermList) t);
      k_176 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_176 = NULL,p_176 = NULL;
        static ATerm c_20 (ATerm t);
        static ATerm c_20 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_176)), not_null(p_176));
          return(t);
        }
        t = k_176;
        t = r_0(t);
        if(((o_176 != NULL) && (o_176 != t)))
          _fail(t);
        else
          o_176 = t;
        t = j_176;
        t = p_0(t);
        if(((p_176 != NULL) && (p_176 != t)))
          _fail(t);
        else
          p_176 = t;
        t = k_176;
        t = reverse_acc_2_0(p_0, c_20, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_69;
      t = r_0(t);
    }
  return(t);
}
static ATerm d_20 (ATerm t)
{
  ATerm x_176 = NULL,y_176 = NULL,z_176 = NULL,y_26 = NULL;
  z_176 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_176 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_176);
  x_176 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_176);
  y_26 = t;
  t = SSLsetAnnotations(y_26, x_176);
  return(t);
}
static ATerm e_20 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_20 (ATerm t)
{
  ATerm d_177 = NULL;
  d_177 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_177), term_o_69);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm b_172 (ATerm), ATerm c_172 (ATerm), ATerm t)
{
  ATerm t_176 = NULL,u_176 = NULL;
  ATerm q_69 = t;
  int s_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_176 = NULL,w_176 = NULL;
      t = term_y_23;
      v_176 = t;
      t = term_f_69;
      w_176 = t;
      t = term_g_69;
      t = y_13(v_176, w_176, t);
      LocalPopChoice(s_69);
    }
  else
    {
      t = q_69;
      t = fetch_1_0(d_20, t);
    }
  {
    ATerm t_69 = t;
    int u_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_172(t);
        t = echo_0_0(t);
        LocalPopChoice(u_69);
      }
    else
      {
        t = t_69;
      }
  }
  t = term_h_70;
  t = echo_0_0(t);
  t = term_w_70;
  t_176 = t;
  t = term_c_71;
  u_176 = t;
  t = term_g_71;
  t = y_13(t_176, u_176, t);
  t = reverse_acc_2_0(_id, e_20, t);
  t = map_1_0(f_20, t);
  {
    ATerm h_71 = t;
    int i_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_177 = NULL;
        t = c_172(t);
        g_177 = t;
        t = (ATerm) ATinsert(CheckATermList(g_177), term_j_71);
        t = echo_0_0(t);
        LocalPopChoice(i_71);
      }
    else
      {
        t = h_71;
      }
  }
  return(t);
}
static ATerm g_20 (ATerm t)
{
  ATerm m_177 = NULL,n_177 = NULL,o_177 = NULL,d_27 = NULL;
  o_177 = t;
  if(match_cons(t, sym_Program_1))
    {
      n_177 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_177);
  m_177 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, n_177);
  d_27 = t;
  t = SSLsetAnnotations(d_27, m_177);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_177 = NULL;
  j_177 = t;
  {
    ATerm k_71 = t;
    int l_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_177 = NULL,l_177 = NULL;
        t = term_y_23;
        k_177 = t;
        t = term_f_69;
        l_177 = t;
        t = term_g_69;
        t = y_13(k_177, l_177, t);
        LocalPopChoice(l_71);
      }
    else
      {
        t = k_71;
        t = fetch_1_0(g_20, t);
      }
  }
  t = j_177;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm h_20 (ATerm t)
{
  ATerm q_177 = NULL;
  q_177 = t;
  if(match_string(t, "-k"))
    {
      t = q_177;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_177;
    }
  return(t);
}
static ATerm i_20 (ATerm t)
{
  ATerm r_177 = NULL,s_177 = NULL,t_177 = NULL;
  r_177 = t;
  t = SSL_string_to_int(r_177);
  s_177 = t;
  t = term_m_71;
  t_177 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_71, s_177);
  t = b_14(t_177, s_177, t);
  t = r_177;
  return(t);
}
static ATerm j_20 (ATerm t)
{
  t = term_n_71;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_20, i_20, j_20, t);
  return(t);
}
static ATerm k_20 (ATerm t)
{
  ATerm v_177 = NULL;
  v_177 = t;
  if(match_string(t, "-S"))
    {
      t = v_177;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_177;
    }
  return(t);
}
static ATerm l_20 (ATerm t)
{
  ATerm w_177 = NULL,x_177 = NULL;
  t = term_a_24;
  w_177 = t;
  t = term_o_71;
  x_177 = t;
  t = term_p_71;
  t = b_14(w_177, x_177, t);
  t = term_q_71;
  return(t);
}
static ATerm m_20 (ATerm t)
{
  t = term_s_71;
  return(t);
}
static ATerm o_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_20 (ATerm t)
{
  ATerm y_177 = NULL,h_178 = NULL,q_178 = NULL;
  y_177 = t;
  t = SSL_string_to_int(y_177);
  h_178 = t;
  t = term_a_24;
  q_178 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_24, h_178);
  t = b_14(q_178, h_178, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_177);
  return(t);
}
static ATerm r_20 (ATerm t)
{
  t = term_t_71;
  return(t);
}
static ATerm s_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm r_178 = NULL,s_178 = NULL;
  t = term_w_71;
  r_178 = t;
  t = term_n_69;
  s_178 = t;
  t = term_x_71;
  t = b_14(r_178, s_178, t);
  t = term_y_71;
  return(t);
}
static ATerm h_21 (ATerm t)
{
  t = term_z_71;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_72 = t;
  int b_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(k_20, l_20, m_20, t);
      LocalPopChoice(b_72);
    }
  else
    {
      t = a_72;
      {
        ATerm d_72 = t;
        int m_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_20, p_20, r_20, t);
            LocalPopChoice(m_72);
          }
        else
          {
            t = d_72;
            t = Option_3_0(s_20, t_20, h_21, t);
          }
      }
    }
  return(t);
}
static ATerm b_14 (ATerm k_93, ATerm l_93, ATerm t)
{
  ATerm t_178 = NULL,u_178 = NULL;
  t = term_y_23;
  t_178 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_23, k_93, l_93);
  t = lookup_table_0_1(t_178, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14(k_93, l_93, u_178, t);
  t = (ATerm) ATmakeAppl(sym__3, term_y_23, k_93, l_93);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm y_178 = NULL,z_178 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_179 = NULL,d_179 = NULL,e_179 = NULL;
      t = term_n_69;
      t = g_0(t);
      c_179 = t;
      t = term_w_70;
      d_179 = t;
      t = term_c_71;
      e_179 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_70, term_c_71, c_179);
      t = z_13(d_179, e_179, c_179, t);
      _fail(t);
    }
  else
    {
      ATerm h_179 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_178 = ATgetFirst((ATermList) t);
          z_178 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_178;
      t = d_0(t);
      t = term_n_69;
      t = f_0(t);
      h_179 = t;
      t = (ATerm) ATinsert(CheckATermList(z_178), h_179);
    }
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm j_179 = NULL;
  j_179 = t;
  if(match_string(t, "-o"))
    {
      t = j_179;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_179;
    }
  return(t);
}
static ATerm k_21 (ATerm t)
{
  ATerm k_179 = NULL,l_179 = NULL;
  k_179 = t;
  t = term_f_67;
  l_179 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_67, k_179);
  t = b_14(l_179, k_179, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_179);
  return(t);
}
static ATerm l_21 (ATerm t)
{
  t = term_n_72;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_21, k_21, l_21, t);
  return(t);
}
static ATerm z_13 (ATerm y_45, ATerm z_45, ATerm x_45, ATerm t)
{
  ATerm n_179 = NULL,o_179 = NULL,p_179 = NULL,q_179 = NULL,r_179 = NULL;
  n_179 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_45, z_45);
  {
    ATerm o_72 = t;
    int p_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_72 = ATgetArgument(t, 0);
            ATerm r_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_45, z_45);
        t = y_13(y_45, z_45, t);
        LocalPopChoice(p_72);
      }
    else
      {
        t = o_72;
        t = (ATerm) ATempty;
      }
  }
  o_179 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_45, z_45, (ATerm) ATinsert(CheckATermList(o_179), x_45));
  t = lookup_table_0_1(y_45, t);
  r_179 = t;
  t = (ATerm) ATinsert(CheckATermList(o_179), x_45);
  p_179 = t;
  t = r_179;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14(z_45, p_179, q_179, t);
  t = n_179;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_179 = NULL,z_179 = NULL,a_180 = NULL,b_180 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_180 = NULL,d_180 = NULL,e_180 = NULL;
      t = term_n_69;
      t = n_0(t);
      c_180 = t;
      t = term_w_70;
      d_180 = t;
      t = term_c_71;
      e_180 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_70, term_c_71, c_180);
      t = z_13(d_180, e_180, c_180, t);
      _fail(t);
    }
  else
    {
      ATerm i_180 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_179 = ATgetFirst((ATermList) t);
          z_179 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_179;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_180 = ATgetFirst((ATermList) t);
          b_180 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_179;
      t = j_0(t);
      t = a_180;
      t = l_0(t);
      i_180 = t;
      t = (ATerm) ATinsert(CheckATermList(b_180), i_180);
    }
  return(t);
}
static ATerm m_21 (ATerm t)
{
  ATerm k_180 = NULL;
  k_180 = t;
  if(match_string(t, "-i"))
    {
      t = k_180;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = k_180;
    }
  return(t);
}
static ATerm n_21 (ATerm t)
{
  ATerm l_180 = NULL,m_180 = NULL;
  l_180 = t;
  t = term_c_69;
  m_180 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_69, l_180);
  t = b_14(m_180, l_180, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, l_180);
  return(t);
}
static ATerm o_21 (ATerm t)
{
  t = term_s_72;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_21, n_21, o_21, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_180 = NULL,o_180 = NULL,p_180 = NULL,q_180 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_69;
  t = whoami_0_0(t);
  n_180 = t;
  t = term_b_40;
  p_180 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_72), n_180);
  q_180 = t;
  t = SSL_printnl(p_180, q_180);
  t = term_v_72;
  o_180 = t;
  t = SSL_exit(o_180);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm r_180 = NULL,s_180 = NULL;
  t = term_y_23;
  r_180 = t;
  t = term_f_69;
  s_180 = t;
  t = term_g_69;
  t = y_13(r_180, s_180, t);
  return(t);
}
static ATerm s_13 (ATerm g_43, ATerm h_43, ATerm t)
{
  ATerm w_72 = t;
  int a_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(g_43, h_43);
      LocalPopChoice(a_73);
    }
  else
    {
      t = w_72;
      t = SSL_addr(g_43, h_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_161 (ATerm), ATerm x_161 (ATerm), ATerm t)
{
  ATerm u_180 = NULL,v_180 = NULL,w_180 = NULL;
  u_180 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_180;
      t = w_161(t);
    }
  else
    {
      ATerm z_180 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_180 = ATgetFirst((ATermList) t);
          w_180 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_180;
      t = foldr_2_0(w_161, x_161, t);
      z_180 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_180, z_180);
      t = x_161(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_21 (ATerm t)
{
  t = term_o_71;
  return(t);
}
static ATerm r_21 (ATerm t)
{
  ATerm b_85 = NULL,c_85 = NULL;
  if(match_cons(t, sym__2))
    {
      b_85 = ATgetArgument(t, 0);
      c_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_13(b_85, c_85, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_181 = NULL,x_84 = NULL,y_84 = NULL;
  t = times_0_0(t);
  y_84 = t;
  t = SSL_explode_term(y_84);
  if(match_cons(t, sym__2))
    {
      ATerm b_73 = ATgetArgument(t, 0);
      x_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_84;
  t = foldr_2_0(q_21, r_21, t);
  c_181 = t;
  t = SSL_TicksToSeconds(c_181);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_181 = NULL,o_181 = NULL,p_181 = NULL;
  n_181 = t;
  if(match_cons(t, sym__2))
    {
      o_181 = ATgetArgument(t, 0);
      p_181 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_73 = t;
    int d_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_181;
        if((o_181 != t))
          {
            _fail(t);
          }
        t = n_181;
        LocalPopChoice(d_73);
      }
    else
      {
        t = c_73;
        t = (ATerm) ATmakeAppl(sym__2, o_181, p_181);
        {
          ATerm e_73 = t;
          int f_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_181, p_181);
              LocalPopChoice(f_73);
            }
          else
            {
              t = e_73;
              t = SSL_gtr(o_181, p_181);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_181, p_181);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_179 (ATerm), ATerm t)
{
  ATerm t_181 = NULL;
  t_181 = t;
  {
    ATerm g_73 = t;
    int h_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_181 = NULL,w_181 = NULL,x_181 = NULL;
        t = term_y_23;
        w_181 = t;
        t = term_a_24;
        x_181 = t;
        t = term_b_24;
        t = y_13(w_181, x_181, t);
        v_181 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_181, term_v_72);
        t = geq_0_0(t);
        t = t_181;
        t = a_179(t);
        LocalPopChoice(h_73);
      }
    else
      {
        t = g_73;
        t = t_181;
      }
  }
  return(t);
}
static ATerm s_21 (ATerm t)
{
  ATerm z_181 = NULL,a_182 = NULL,c_182 = NULL,d_182 = NULL;
  t = run_time_0_0(t);
  z_181 = t;
  t = term_n_69;
  t = whoami_0_0(t);
  a_182 = t;
  t = term_b_40;
  c_182 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_73), z_181), term_i_73), a_182);
  d_182 = t;
  t = SSL_printnl(c_182, d_182);
  t = (ATerm) ATmakeAppl(sym__2, term_b_40, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_73), z_181), term_i_73), a_182));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_21, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_182 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_71;
  e_182 = t;
  t = SSL_exit(e_182);
  return(t);
}
static ATerm c_14 (ATerm e_51, ATerm f_51, ATerm g_51, ATerm t)
{
  ATerm f_182 = NULL;
  t = SSL_hashtable_put(g_51, e_51, f_51);
  f_182 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_182);
  return(t);
}
ATerm lookup_table_0_1 (ATerm y_47, ATerm t)
{
  ATerm o_182 = NULL;
  t = table_hashtable_0_0(t);
  o_182 = t;
  {
    ATerm l_73 = t;
    int m_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_85 = NULL;
        t = o_182;
        if(match_cons(t, sym_Hashtable_1))
          {
            o_85 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_14(y_47, o_85, t);
        LocalPopChoice(m_73);
      }
    else
      {
        t = l_73;
        {
          ATerm v_85 = NULL;
          t = y_47;
          t = table_create_0_0(t);
          t = o_182;
          if(match_cons(t, sym_Hashtable_1))
            {
              v_85 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_14(y_47, v_85, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_51, ATerm n_51, ATerm t)
{
  ATerm r_182 = NULL;
  t = SSL_hashtable_create(m_51, n_51);
  r_182 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_182);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm s_182 = NULL,t_182 = NULL,u_182 = NULL,w_182 = NULL,x_182 = NULL;
  s_182 = t;
  t = term_n_73;
  w_182 = t;
  t = term_o_73;
  x_182 = t;
  t = s_182;
  t = new_hashtable_0_2(w_182, x_182, t);
  t_182 = t;
  t = s_182;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14(s_182, t_182, u_182, t);
  t = s_182;
  return(t);
}
static ATerm v_13 (ATerm j_51, ATerm k_51, ATerm t)
{
  ATerm y_182 = NULL;
  t = SSL_hashtable_remove(k_51, j_51);
  y_182 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_182);
  return(t);
}
static ATerm w_13 (ATerm o_51, ATerm t)
{
  ATerm z_182 = NULL;
  t = SSL_hashtable_destroy(o_51);
  z_182 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_182);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm a_183 = NULL;
  t = SSL_table_hashtable();
  a_183 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_183);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_183 = NULL,c_183 = NULL,d_183 = NULL,e_183 = NULL;
  b_183 = t;
  t = table_hashtable_0_0(t);
  c_183 = t;
  t = lookup_table_0_1(b_183, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_183 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_13(e_183, t);
  t = c_183;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_183 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_13(b_183, d_183, t);
  t = b_183;
  return(t);
}
ATerm fetch_1_0 (ATerm s_154 (ATerm), ATerm t)
{
  static ATerm b_184 (ATerm t);
  static ATerm b_184 (ATerm t)
  {
    ATerm y_183 = NULL,z_183 = NULL,a_184 = NULL;
    y_183 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_183 = ATgetFirst((ATermList) t);
        a_184 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm t_73 = t;
      int u_73 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_86 = NULL,h_86 = NULL,t_27 = NULL;
          t = SSLgetAnnotations(y_183);
          e_86 = t;
          t = z_183;
          t = s_154(t);
          h_86 = t;
          t = (ATerm) ATinsert(CheckATermList(a_184), h_86);
          t_27 = t;
          t = SSLsetAnnotations(t_27, e_86);
          LocalPopChoice(u_73);
        }
      else
        {
          t = t_73;
          {
            ATerm q_86 = NULL,t_86 = NULL,f_28 = NULL;
            t = SSLgetAnnotations(y_183);
            q_86 = t;
            t = a_184;
            t = b_184(t);
            t_86 = t;
            t = (ATerm) ATinsert(CheckATermList(t_86), z_183);
            f_28 = t;
            t = SSLsetAnnotations(f_28, q_86);
          }
        }
    }
    return(t);
  }
  t = b_184(t);
  return(t);
}
static ATerm d_14 (ATerm h_51, ATerm i_51, ATerm t)
{
  t = SSL_hashtable_get(i_51, h_51);
  return(t);
}
static ATerm y_13 (ATerm i_48, ATerm j_48, ATerm t)
{
  ATerm e_184 = NULL;
  t = lookup_table_0_1(i_48, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_184 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_14(j_48, e_184, t);
  return(t);
}
static ATerm t_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_21 (ATerm t)
{
  ATerm g_184 = NULL,h_184 = NULL;
  t = term_v_73;
  g_184 = t;
  t = term_n_69;
  h_184 = t;
  t = term_w_73;
  t = b_14(g_184, h_184, t);
  return(t);
}
static ATerm v_21 (ATerm t)
{
  t = term_x_73;
  return(t);
}
static ATerm w_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_21 (ATerm t)
{
  ATerm i_184 = NULL,j_184 = NULL,k_184 = NULL,l_184 = NULL;
  t = term_v_73;
  k_184 = t;
  t = term_n_69;
  l_184 = t;
  t = term_w_73;
  t = b_14(k_184, l_184, t);
  t = term_y_73;
  i_184 = t;
  t = term_n_69;
  j_184 = t;
  t = term_z_73;
  t = b_14(i_184, j_184, t);
  t = term_a_74;
  return(t);
}
static ATerm d_22 (ATerm t)
{
  t = term_b_74;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_74 = t;
  int d_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_21, u_21, v_21, t);
      LocalPopChoice(d_74);
    }
  else
    {
      t = c_74;
      t = Option_3_0(w_21, x_21, d_22, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_171 (ATerm), ATerm t)
{
  ATerm q_184 = NULL,r_184 = NULL,s_184 = NULL,t_184 = NULL,v_184 = NULL,w_184 = NULL,z_28 = NULL;
  q_184 = t;
  {
    ATerm f_74 = t;
    int g_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_l_74;
        t = w_171(t);
        LocalPopChoice(g_74);
      }
    else
      {
        t = f_74;
      }
  }
  t = q_184;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_184 = ATgetFirst((ATermList) t);
      t_184 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_184);
  r_184 = t;
  t = term_f_69;
  w_184 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_69, s_184);
  t = b_14(w_184, s_184, t);
  t = t_184;
  {
    static ATerm g_185 (ATerm t);
    static ATerm g_185 (ATerm t)
    {
      ATerm m_74 = t;
      int t_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_74 = t;
          int v_74 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_184 = NULL;
              z_184 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_184;
              LocalPopChoice(v_74);
            }
          else
            {
              t = u_74;
              t = w_171(t);
              t = Cons_2_0(_id, g_185, t);
            }
          LocalPopChoice(t_74);
        }
      else
        {
          t = m_74;
          {
            ATerm c_185 = NULL,d_185 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_185 = ATgetFirst((ATermList) t);
                d_185 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_185), (ATerm) ATmakeAppl(sym_Undefined_1, c_185));
          }
        }
      return(t);
    }
    t = g_185(t);
  }
  v_184 = t;
  t = (ATerm) ATinsert(CheckATermList(v_184), (ATerm) ATmakeAppl(sym_Program_1, s_184));
  z_28 = t;
  t = SSLsetAnnotations(z_28, r_184);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  ATerm t_185 = NULL;
  t_185 = t;
  if(match_string(t, "--help"))
    {
      t = t_185;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_185;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_185;
        }
    }
  return(t);
}
static ATerm h_22 (ATerm t)
{
  ATerm u_185 = NULL,v_185 = NULL;
  t = term_w_74;
  u_185 = t;
  t = term_n_69;
  v_185 = t;
  t = term_x_74;
  t = b_14(u_185, v_185, t);
  t = term_y_74;
  return(t);
}
static ATerm i_22 (ATerm t)
{
  t = term_z_74;
  return(t);
}
static ATerm j_22 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm t_171 (ATerm), ATerm u_171 (ATerm), ATerm v_171 (ATerm), ATerm t)
{
  ATerm l_185 = NULL,m_185 = NULL,n_185 = NULL,o_185 = NULL,p_185 = NULL,q_185 = NULL,r_185 = NULL,s_185 = NULL;
  n_185 = t;
  t = term_w_70;
  o_185 = t;
  t = term_a_75;
  t = lookup_table_0_1(o_185, t);
  s_185 = t;
  t = term_c_71;
  p_185 = t;
  t = (ATerm) ATempty;
  q_185 = t;
  t = s_185;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_185 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14(p_185, q_185, r_185, t);
  t = n_185;
  {
    static ATerm f_22 (ATerm t);
    static ATerm f_22 (ATerm t)
    {
      ATerm b_75 = t;
      int d_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_171(t);
          LocalPopChoice(d_75);
        }
      else
        {
          t = b_75;
          {
            ATerm e_75 = t;
            int h_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_22, h_22, i_22, t);
                LocalPopChoice(h_75);
              }
            else
              {
                t = e_75;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_22, t);
  }
  {
    ATerm i_75 = t;
    int j_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_186 = NULL;
        g_186 = t;
        {
          ATerm k_75 = t;
          int l_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_87 = NULL;
              t = g_186;
              {
                ATerm m_75 = t;
                int n_75 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_87 = NULL,e_87 = NULL;
                    t = term_y_23;
                    d_87 = t;
                    t = term_w_74;
                    e_87 = t;
                    t = term_p_75;
                    t = y_13(d_87, e_87, t);
                    LocalPopChoice(n_75);
                  }
                else
                  {
                    t = m_75;
                    t = fetch_1_0(j_22, t);
                  }
              }
              t = g_186;
              t = u_171(t);
              t = term_o_71;
              b_87 = t;
              t = SSL_exit(b_87);
              LocalPopChoice(l_75);
            }
          else
            {
              t = k_75;
              {
                ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL;
                t = term_y_23;
                j_87 = t;
                t = term_v_73;
                k_87 = t;
                t = term_q_75;
                t = y_13(j_87, k_87, t);
                t = g_186;
                t = v_171(t);
                t = term_o_71;
                i_87 = t;
                t = SSL_exit(i_87);
              }
            }
        }
        LocalPopChoice(j_75);
      }
    else
      {
        t = i_75;
        {
          ATerm t_75 = t;
          int u_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_186 = NULL,i_186 = NULL,j_186 = NULL;
              static ATerm k_22 (ATerm t);
              static ATerm k_22 (ATerm t)
              {
                ATerm k_186 = NULL,l_186 = NULL,m_186 = NULL,b_29 = NULL;
                m_186 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    l_186 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(m_186);
                k_186 = t;
                t = l_186;
                if(((l_185 != NULL) && (l_185 != t)))
                  _fail(t);
                else
                  l_185 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, l_186);
                b_29 = t;
                t = SSLsetAnnotations(b_29, k_186);
                return(t);
              }
              t = fetch_1_0(k_22, t);
              t = term_b_40;
              i_186 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_185)), term_v_75);
              j_186 = t;
              t = SSL_printnl(i_186, j_186);
              t = (ATerm) ATmakeAppl(sym__2, term_b_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_185)), term_v_75));
              t = u_171(t);
              t = term_v_72;
              h_186 = t;
              t = SSL_exit(h_186);
              LocalPopChoice(u_75);
            }
          else
            {
              t = t_75;
            }
        }
      }
  }
  m_185 = t;
  t = term_w_70;
  t = table_destroy_0_0(t);
  t = m_185;
  return(t);
}
ATerm option_wrap_5_0 (ATerm u_168 (ATerm), ATerm v_168 (ATerm), ATerm w_168 (ATerm), ATerm x_168 (ATerm), ATerm y_168 (ATerm), ATerm t)
{
  ATerm r_186 = NULL,s_186 = NULL,t_186 = NULL,u_186 = NULL,v_186 = NULL;
  t = parse_options_3_0(u_168, v_168, w_168, t);
  r_186 = t;
  t = term_w_75;
  t = table_create_0_0(t);
  t = term_w_75;
  s_186 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_75, term_x_75, r_186);
  t = lookup_table_0_1(s_186, t);
  v_186 = t;
  t = term_x_75;
  t_186 = t;
  t = v_186;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_186 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14(t_186, r_186, u_186, t);
  t = r_186;
  t = x_168(t);
  {
    ATerm y_75 = t;
    int z_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_168(t);
        t = report_success_0_0(t);
        LocalPopChoice(z_75);
      }
    else
      {
        t = y_75;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm l_22 (ATerm t)
{
  ATerm b_76 = t;
  int d_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(d_76);
    }
  else
    {
      t = b_76;
      {
        ATerm p_76 = t;
        int q_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(q_76);
          }
        else
          {
            t = p_76;
            {
              ATerm r_76 = t;
              int s_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(o_22, r_22, c_23, t);
                  LocalPopChoice(s_76);
                }
              else
                {
                  t = r_76;
                  {
                    ATerm x_76 = t;
                    int y_76 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(y_76);
                      }
                    else
                      {
                        t = x_76;
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
static ATerm n_22 (ATerm t)
{
  t = input_1_0(f_23, t);
  return(t);
}
static ATerm o_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm r_22 (ATerm t)
{
  ATerm z_186 = NULL,a_187 = NULL;
  t = term_v_67;
  z_186 = t;
  t = term_n_69;
  a_187 = t;
  t = term_a_77;
  t = b_14(z_186, a_187, t);
  t = term_c_77;
  return(t);
}
static ATerm c_23 (ATerm t)
{
  t = term_j_77;
  return(t);
}
static ATerm f_23 (ATerm t)
{
  t = output_1_0(n_23, t);
  return(t);
}
static ATerm n_23 (ATerm t)
{
  ATerm l_77 = t;
  int m_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_188 = NULL,b_188 = NULL,r_87 = NULL,t_87 = NULL,x_87 = NULL,y_87 = NULL,a_88 = NULL,d_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,j_30 = NULL,i_30 = NULL,d_29 = NULL;
      a_188 = t;
      if(match_cons(t, sym_Specification_1))
        {
          b_188 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_188);
      r_87 = t;
      t = b_188;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_87 = ATgetFirst((ATermList) t);
          y_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_188);
      t_87 = t;
      t = x_87;
      if(match_cons(t, sym_Signature_1))
        {
          j_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_87);
      i_88 = t;
      t = (ATerm) ATmakeAppl(sym_Signature_1, j_88);
      d_29 = t;
      t = SSLsetAnnotations(d_29, i_88);
      k_88 = t;
      t = y_87;
      t = Cons_2_0(o_23, p_23, t);
      a_88 = t;
      t = (ATerm) ATinsert(CheckATermList(a_88), k_88);
      i_30 = t;
      t = SSLsetAnnotations(i_30, t_87);
      d_88 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, d_88);
      j_30 = t;
      t = SSLsetAnnotations(j_30, r_87);
      t = check_library_definitions_0_0(t);
      t = alltd_1_0(s_23, t);
      LocalPopChoice(m_77);
    }
  else
    {
      t = l_77;
      t = if_verbose2_1_0(v_23, t);
    }
  return(t);
}
static ATerm o_23 (ATerm t)
{
  ATerm m_88 = NULL,n_88 = NULL,o_88 = NULL,p_88 = NULL,g_30 = NULL;
  p_88 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      n_88 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_88);
  m_88 = t;
  t = n_88;
  t = map_1_0(q_23, t);
  o_88 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, o_88);
  g_30 = t;
  t = SSLsetAnnotations(g_30, m_88);
  return(t);
}
static ATerm p_23 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm q_23 (ATerm t)
{
  ATerm q_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      q_88 = ATgetArgument(t, 0);
      y_88 = ATgetArgument(t, 1);
      z_88 = ATgetArgument(t, 2);
      a_89 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_88), (ATerm)ATempty, (ATerm) ATempty);
  b_89 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_4, term_n_77, y_88, a_89, z_88);
  c_89 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_88), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_4, term_n_77, y_88, a_89, z_88));
  t = h_13(r_23, b_89, c_89, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_88, y_88, z_88, a_89);
  return(t);
}
static ATerm r_23 (ATerm t)
{
  t = term_u_65;
  return(t);
}
static ATerm s_23 (ATerm t)
{
  ATerm d_89 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm r_77 = ATgetArgument(t, 0);
      if(match_cons(r_77, sym_SVar_1))
        {
          ATerm w_77 = ATgetArgument(r_77, 0);
          if((ATgetSymbol((ATermAppl) w_77) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm u_77 = ATgetArgument(t, 1);
        if(((ATgetType(u_77) == AT_LIST) && !(ATisEmpty(u_77))))
          {
            d_89 = ATgetFirst((ATermList) u_77);
            {
              ATerm x_77 = (ATerm) ATgetNext((ATermList) u_77);
              if(((ATgetType(x_77) != AT_LIST) || !(ATisEmpty(x_77))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm v_77 = ATgetArgument(t, 2);
        if(((ATgetType(v_77) != AT_LIST) || !(ATisEmpty(v_77))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_11(d_89, t);
  return(t);
}
static ATerm v_23 (ATerm t)
{
  ATerm c_188 = NULL,d_188 = NULL,e_188 = NULL;
  c_188 = t;
  t = term_b_40;
  d_188 = t;
  t = (ATerm) ATinsert(ATempty, term_y_77);
  e_188 = t;
  t = SSL_printnl(d_188, e_188);
  t = c_188;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(l_22, default_system_usage_0_0, default_system_about_0_0, _id, n_22, t);
  return(t);
}

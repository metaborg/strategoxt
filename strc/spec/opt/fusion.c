#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_1;
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
static Symbol sym_OpQ_2;
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
static Symbol sym_CongQ_2;
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
static Symbol sym_Cons_1;
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
static Symbol sym_OpQ_2;
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
static Symbol sym_CongQ_2;
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
  sym_OpQ_2 = ATmakeSymbol("OpQ", 2, ATfalse);
  ATprotectSymbol(sym_OpQ_2);
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
  sym_CongQ_2 = ATmakeSymbol("CongQ", 2, ATfalse);
  ATprotectSymbol(sym_CongQ_2);
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
  sym_OpQ_2 = ATmakeSymbol("OpQ", 2, ATfalse);
  ATprotectSymbol(sym_OpQ_2);
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
  sym_CongQ_2 = ATmakeSymbol("CongQ", 2, ATfalse);
  ATprotectSymbol(sym_CongQ_2);
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
static ATerm term_c_78;
static ATerm term_u_77;
static ATerm term_q_77;
static ATerm term_p_77;
static ATerm term_o_77;
static ATerm term_y_76;
static ATerm term_x_76;
static ATerm term_w_76;
static ATerm term_t_76;
static ATerm term_s_76;
static ATerm term_w_75;
static ATerm term_v_75;
static ATerm term_u_75;
static ATerm term_t_75;
static ATerm term_s_75;
static ATerm term_j_75;
static ATerm term_e_75;
static ATerm term_d_75;
static ATerm term_p_74;
static ATerm term_l_74;
static ATerm term_k_74;
static ATerm term_j_74;
static ATerm term_e_74;
static ATerm term_t_73;
static ATerm term_s_73;
static ATerm term_l_73;
static ATerm term_k_73;
static ATerm term_l_72;
static ATerm term_i_72;
static ATerm term_h_72;
static ATerm term_b_72;
static ATerm term_l_71;
static ATerm term_k_71;
static ATerm term_j_71;
static ATerm term_g_71;
static ATerm term_f_71;
static ATerm term_e_71;
static ATerm term_d_71;
static ATerm term_a_71;
static ATerm term_x_70;
static ATerm term_u_70;
static ATerm term_n_70;
static ATerm term_d_70;
static ATerm term_z_69;
static ATerm term_y_69;
static ATerm term_x_69;
static ATerm term_w_69;
static ATerm term_n_69;
static ATerm term_m_69;
static ATerm term_g_69;
static ATerm term_f_69;
static ATerm term_c_69;
static ATerm term_b_69;
static ATerm term_x_68;
static ATerm term_u_68;
static ATerm term_s_68;
static ATerm term_u_67;
static ATerm term_t_67;
static ATerm term_q_67;
static ATerm term_p_67;
static ATerm term_o_67;
static ATerm term_i_67;
static ATerm term_c_67;
static ATerm term_b_67;
static ATerm term_x_66;
static ATerm term_w_66;
static ATerm term_v_66;
static ATerm term_s_66;
static ATerm term_t_44;
static ATerm term_j_42;
static ATerm term_i_42;
static ATerm term_c_42;
static ATerm term_b_42;
static ATerm term_u_41;
static ATerm term_k_41;
static ATerm term_j_41;
static ATerm term_i_41;
static ATerm term_f_41;
static ATerm term_b_41;
static ATerm term_q_40;
static ATerm term_p_40;
static ATerm term_o_40;
static ATerm term_n_40;
static ATerm term_m_40;
static ATerm term_l_40;
static ATerm term_k_40;
static ATerm term_i_40;
static ATerm term_p_39;
static ATerm term_o_39;
static ATerm term_u_38;
static ATerm term_t_38;
static ATerm term_p_38;
static ATerm term_o_38;
static ATerm term_l_38;
static ATerm term_k_38;
static ATerm term_h_38;
static ATerm term_g_38;
static ATerm term_e_38;
static ATerm term_d_38;
static ATerm term_e_37;
static ATerm term_d_37;
static ATerm term_k_35;
static ATerm term_b_34;
static ATerm term_a_34;
static ATerm term_u_33;
static ATerm term_t_33;
static ATerm term_s_33;
static ATerm term_r_33;
static ATerm term_q_33;
static ATerm term_o_33;
static ATerm term_l_33;
static ATerm term_i_33;
static ATerm term_h_33;
static ATerm term_g_33;
static ATerm term_f_33;
static ATerm term_c_33;
static ATerm term_g_29;
static ATerm term_v_28;
static ATerm term_a_28;
static ATerm term_v_27;
static ATerm term_u_27;
static ATerm term_t_27;
static ATerm term_s_27;
static ATerm term_r_27;
static ATerm term_d_27;
static ATerm term_c_27;
static ATerm term_b_27;
static ATerm term_a_27;
static ATerm term_x_25;
static ATerm term_w_25;
static ATerm term_v_25;
static ATerm term_u_25;
static ATerm term_r_25;
static ATerm term_q_25;
static ATerm term_l_25;
static ATerm term_k_25;
static ATerm term_g_25;
static ATerm term_f_25;
static ATerm term_y_24;
static ATerm term_x_24;
static ATerm term_v_24;
static ATerm term_u_24;
static ATerm term_t_24;
static ATerm term_o_24;
static ATerm term_n_24;
static ATerm term_d_24;
static ATerm term_c_24;
static ATerm term_b_24;
static ATerm term_r_23;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_b_24);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_24);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_25);
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Call_2, term_v_25, (ATerm) ATempty);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Op_2, term_u_25, (ATerm) ATempty);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Call_2, term_o_24, (ATerm) ATempty);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_27);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_27);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(sym_Call_2, term_s_27, (ATerm) ATempty);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_33);
  ATprotect(&(term_h_33));
  term_h_33 = (ATerm) ATmakeAppl(sym_CallT_3, term_g_33, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_l_33, term_o_33);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_i_33, term_q_33);
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_h_33, term_r_33);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym__2, term_t_33, term_s_33);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_34);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_37);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_Seq_2, term_i_33, term_o_33);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_Seq_2, term_h_33, term_d_38);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(sym__2, term_g_38, term_e_38);
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_38);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_39);
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("p_4", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_40);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("r_4", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_40);
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_42);
  ATprotect(&(term_t_44));
  term_t_44 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_s_66));
  term_s_66 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_v_66));
  term_v_66 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_w_66));
  term_w_66 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_x_66));
  term_x_66 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_b_67));
  term_b_67 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_67);
  ATprotect(&(term_i_67));
  term_i_67 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_67));
  term_o_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_67));
  term_p_67 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_o_67);
  ATprotect(&(term_q_67));
  term_q_67 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_67));
  term_u_67 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_t_67);
  ATprotect(&(term_s_68));
  term_s_68 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_68));
  term_u_68 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_69));
  term_b_69 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_x_68);
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_f_69);
  ATprotect(&(term_m_69));
  term_m_69 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_69));
  term_n_69 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_69));
  term_w_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_69));
  term_x_69 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_69));
  term_z_69 = (ATerm) ATmakeAppl(sym__2, term_x_69, term_y_69);
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_70));
  term_u_70 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_70));
  term_x_70 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(sym__2, term_b_24, term_x_70);
  ATprotect(&(term_d_71));
  term_d_71 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_70);
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_71));
  term_f_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(sym__2, term_g_71, term_m_69);
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_72));
  term_i_72 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_73));
  term_s_73 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_t_73));
  term_t_73 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_74));
  term_j_74 = (ATerm) ATmakeAppl(sym__2, term_e_74, term_m_69);
  ATprotect(&(term_k_74));
  term_k_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeAppl(sym__2, term_l_74, term_m_69);
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_75));
  term_e_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_75));
  term_j_75 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_75));
  term_s_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_75));
  term_t_75 = (ATerm) ATmakeAppl(sym__2, term_s_75, term_m_69);
  ATprotect(&(term_u_75));
  term_u_75 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_75));
  term_v_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(sym__3, term_x_69, term_y_69, (ATerm) ATempty);
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_s_75);
  ATprotect(&(term_t_76));
  term_t_76 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_e_74);
  ATprotect(&(term_w_76));
  term_w_76 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_76));
  term_x_76 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_76));
  term_y_76 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_77));
  term_o_77 = (ATerm) ATmakeAppl(sym__2, term_t_67, term_m_69);
  ATprotect(&(term_p_77));
  term_p_77 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_c_78));
  term_c_78 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm if_verbose2_1_0 (ATerm x_180 (ATerm), ATerm t);
ATerm escape_chars_1_0 (ATerm m_145 (ATerm), ATerm t);
static ATerm v_9 (ATerm f_3, ATerm h_3, ATerm t);
static ATerm w_9 (ATerm r_3, ATerm s_3, ATerm t_3, ATerm t);
static ATerm x_9 (ATerm f_4, ATerm g_4, ATerm t);
static ATerm b_10 (ATerm m_4, ATerm n_4, ATerm t);
static ATerm a_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm b_179 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm p_9 (ATerm d_107, ATerm e_107, ATerm f_107, ATerm t);
static ATerm u_22 (ATerm g_22, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm a_11 (ATerm q_102, ATerm r_102, ATerm s_102, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t);
static ATerm f_44 (ATerm a_43, ATerm b_43, ATerm t);
static ATerm g_44 (ATerm e_43, ATerm f_43, ATerm t);
ATerm Replace_0_0 (ATerm t);
static ATerm c_11 (ATerm d_48, ATerm f_48, ATerm t);
ATerm end_scope_1_0 (ATerm b_150 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm b_144 (ATerm), ATerm c_144 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm a_150 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm c_150 (ATerm), ATerm d_150 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm d_11 (ATerm i_28, ATerm h_28, ATerm j_28, ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t);
ATerm fuse_with_bottomup_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm r_140 (ATerm), ATerm t);
ATerm propagate_mark_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
ATerm inline_rules_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm bottomup_to_var_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm seq_over_choice_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm k_11 (ATerm s_26, ATerm t);
ATerm alltd_1_0 (ATerm i_142 (ATerm), ATerm t);
static ATerm z_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm check_that_innermost_is_innermost_0_0 (ATerm t);
ATerm debug_1_0 (ATerm q_149 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm q_140 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm m_11 (ATerm c_85, ATerm b_85, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm u_141 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm d_148 (ATerm), ATerm e_148 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm s_140 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm i_158 (ATerm), ATerm j_158 (ATerm), ATerm k_158 (ATerm), ATerm l_158 (ATerm), ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm z_173 (ATerm), ATerm a_174 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
ATerm spaste_1_0 (ATerm z_179 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm a_180 (ATerm), ATerm b_180 (ATerm), ATerm c_180 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm e_180 (ATerm), ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm w_12 (ATerm r_109, ATerm q_109, ATerm t);
ATerm SVar_1_0 (ATerm p_119 (ATerm), ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm g_180 (ATerm), ATerm h_180 (ATerm), ATerm i_180 (ATerm), ATerm j_180 (ATerm), ATerm k_180 (ATerm), ATerm l_180 (ATerm), ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
ATerm tpaste_1_0 (ATerm v_179 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm w_179 (ATerm), ATerm x_179 (ATerm), ATerm y_179 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm f_180 (ATerm), ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm u_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm k_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm o_15 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm z_12 (ATerm p_160 (ATerm), ATerm a_76, ATerm z_75, ATerm t);
ATerm foldr_3_0 (ATerm u_163 (ATerm), ATerm v_163 (ATerm), ATerm w_163 (ATerm), ATerm t);
static ATerm a_13 (ATerm s_160 (ATerm), ATerm t_160 (ATerm), ATerm e_76, ATerm d_76, ATerm t);
static ATerm b_13 (ATerm k_160 (ATerm), ATerm y_75, ATerm x_75, ATerm t);
static ATerm d_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm d_13 (ATerm w_935, ATerm b_936, ATerm p_98, ATerm t);
ATerm while_not_2_0 (ATerm u_148 (ATerm), ATerm v_148 (ATerm), ATerm t);
ATerm for_3_0 (ATerm x_148 (ATerm), ATerm y_148 (ATerm), ATerm z_148 (ATerm), ATerm t);
static ATerm j_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm i_164 (ATerm w_162, ATerm x_162, ATerm y_162, ATerm t);
static ATerm n_16 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
ATerm free_vars_3_0 (ATerm g_176 (ATerm), ATerm h_176 (ATerm), ATerm i_176 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm l_119 (ATerm), ATerm t);
static ATerm f_13 (ATerm b_175 (ATerm), ATerm c_175 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_96, ATerm v_96, ATerm u_96, ATerm t);
ATerm at_end_1_0 (ATerm v_156 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm u_167 (ATerm m_167, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm g_13 (ATerm v_174 (ATerm), ATerm w_174 (ATerm (ATerm), ATerm), ATerm o_96, ATerm r_96, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm c_166 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm q_174 (ATerm (ATerm), ATerm), ATerm r_174 (ATerm), ATerm s_174 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t_174 (ATerm (ATerm), ATerm), ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm b_18 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm m_13 (ATerm m_48, ATerm n_48, ATerm t);
static ATerm d_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm i_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
ATerm InlineStrat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm r_18 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
ATerm check_that_try_is_try_0_0 (ATerm t);
ATerm check_library_definitions_0_0 (ATerm t);
static ATerm n_13 (ATerm e_150 (ATerm), ATerm k_46, ATerm i_46, ATerm t);
ATerm map_1_0 (ATerm g_156 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm s_137 (ATerm), ATerm t_137 (ATerm), ATerm t);
static ATerm p_13 (ATerm w_37, ATerm x_37, ATerm t);
static ATerm q_13 (ATerm n_43, ATerm o_43, ATerm t);
static ATerm t_13 (ATerm s_149 (ATerm), ATerm j_381, ATerm t_43, ATerm t);
static ATerm r_13 (ATerm j_43, ATerm k_43, ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
ATerm output_1_0 (ATerm w_170 (ATerm), ATerm t);
static ATerm e_177 (ATerm y_176, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_13 (ATerm p_43, ATerm t);
static ATerm w_13 (ATerm z_35, ATerm a_36, ATerm t);
static ATerm x_13 (ATerm y_37, ATerm z_37, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm p_178 (ATerm o_177, ATerm t);
static ATerm q_178 (ATerm s_177, ATerm t_177, ATerm u_177, ATerm t);
static ATerm r_178 (ATerm c_178, ATerm d_178, ATerm e_178, ATerm t);
static ATerm y_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm x_170 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm y_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm b_19 (ATerm t);
ATerm default_system_usage_2_0 (ATerm x_173 (ATerm), ATerm y_173 (ATerm), ATerm t);
static ATerm k_19 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm l_19 (ATerm t);
static ATerm o_19 (ATerm t);
static ATerm t_19 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm x_19 (ATerm t);
static ATerm y_19 (ATerm t);
static ATerm z_19 (ATerm t);
static ATerm a_20 (ATerm t);
static ATerm b_20 (ATerm t);
static ATerm e_20 (ATerm t);
static ATerm f_20 (ATerm t);
static ATerm i_20 (ATerm t);
static ATerm l_20 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_14 (ATerm a_95, ATerm b_95, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm m_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm r_20 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_14 (ATerm x_47, ATerm y_47, ATerm v_47, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm t_20 (ATerm t);
static ATerm z_20 (ATerm t);
static ATerm j_21 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_13 (ATerm w_44, ATerm x_44, ATerm t);
ATerm foldr_2_0 (ATerm s_163 (ATerm), ATerm t_163 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_21 (ATerm t);
static ATerm l_21 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_180 (ATerm), ATerm t);
static ATerm m_21 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_14 (ATerm u_52, ATerm v_52, ATerm w_52, ATerm t);
ATerm lookup_table_0_1 (ATerm r_49, ATerm t);
ATerm new_hashtable_0_2 (ATerm c_53, ATerm d_53, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm b_14 (ATerm z_52, ATerm a_53, ATerm t);
static ATerm c_14 (ATerm e_53, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm o_156 (ATerm), ATerm t);
static ATerm j_14 (ATerm x_52, ATerm y_52, ATerm t);
static ATerm e_14 (ATerm y_49, ATerm z_49, ATerm t);
static ATerm y_21 (ATerm t);
static ATerm z_21 (ATerm t);
static ATerm a_22 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm d_22 (ATerm t);
static ATerm e_22 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm s_173 (ATerm), ATerm t);
static ATerm h_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm t_22 (ATerm t);
ATerm parse_options_3_0 (ATerm p_173 (ATerm), ATerm q_173 (ATerm), ATerm r_173 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm q_170 (ATerm), ATerm r_170 (ATerm), ATerm s_170 (ATerm), ATerm t_170 (ATerm), ATerm u_170 (ATerm), ATerm t);
static ATerm w_22 (ATerm t);
static ATerm z_22 (ATerm t);
static ATerm a_23 (ATerm t);
static ATerm b_23 (ATerm t);
static ATerm c_23 (ATerm t);
static ATerm d_23 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm h_23 (ATerm t);
static ATerm i_23 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm l_23 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_180 (ATerm), ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  {
    ATerm m_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL;
        t = term_r_23;
        u_0 = t;
        t = term_b_24;
        v_0 = t;
        t = term_c_24;
        t = e_14(u_0, v_0, t);
        t_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_0, term_d_24);
        t = geq_0_0(t);
        t = c_0;
        t = x_180(t);
        LocalPopChoice(p_23);
      }
    else
      {
        t = m_23;
        t = c_0;
      }
  }
  return(t);
}
ATerm escape_chars_1_0 (ATerm m_145 (ATerm), ATerm t)
{
  static ATerm u_1 (ATerm t);
  static ATerm u_1 (ATerm t)
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL,d_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,x_0 = NULL;
        t = m_145(t);
        h_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_1 = ATgetFirst((ATermList) t);
            f_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_1);
        c_1 = t;
        t = f_1;
        t = Cons_2_0(_id, u_1, t);
        g_1 = t;
        t = (ATerm) ATinsert(CheckATermList(g_1), d_1);
        x_0 = t;
        t = SSLsetAnnotations(x_0, c_1);
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
        {
          ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL;
          t_1 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_1 = ATgetFirst((ATermList) t);
              s_1 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm b_1 = NULL,x_1 = NULL,y_0 = NULL;
                t = SSLgetAnnotations(t_1);
                b_1 = t;
                t = s_1;
                t = u_1(t);
                x_1 = t;
                t = (ATerm) ATinsert(CheckATermList(x_1), r_1);
                y_0 = t;
                t = SSLsetAnnotations(y_0, b_1);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_1;
            }
        }
      }
    return(t);
  }
  t = u_1(t);
  return(t);
}
static ATerm v_9 (ATerm f_3, ATerm h_3, ATerm t)
{
  t = f_3;
  {
    ATerm g_24 = t;
    if((PushChoice() == 0))
      {
        ATerm j_3 = NULL,m_3 = NULL,n_3 = NULL,q_3 = NULL,l_1 = NULL;
        q_3 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_3 = ATgetFirst((ATermList) t);
            n_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_3);
        j_3 = t;
        t = n_3;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(n_3), m_3);
        l_1 = t;
        t = SSLsetAnnotations(l_1, j_3);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_24, f_3);
  return(t);
}
static ATerm w_9 (ATerm r_3, ATerm s_3, ATerm t_3, ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  t = SSL_explode_string(r_3);
  t = escape_chars_1_0(a_0, t);
  x_3 = t;
  t = SSL_implode_string(x_3);
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, w_3, s_3);
  return(t);
}
static ATerm x_9 (ATerm f_4, ATerm g_4, ATerm t)
{
  t = f_4;
  {
    ATerm q_24 = t;
    if((PushChoice() == 0))
      {
        ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,m_1 = NULL;
        l_4 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_4 = ATgetFirst((ATermList) t);
            k_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_4);
        i_4 = t;
        t = k_4;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(k_4), j_4);
        m_1 = t;
        t = SSLsetAnnotations(m_1, i_4);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_24, f_4);
  return(t);
}
static ATerm b_10 (ATerm m_4, ATerm n_4, ATerm t)
{
  ATerm q_4 = NULL;
  t = m_4;
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_string(t, "'\\ '"))
          {
            t = term_t_24;
          }
        else
          {
            if(match_string(t, "'\\r'"))
              {
                t = term_u_24;
              }
            else
              {
                if(match_string(t, "'\\t'"))
                  {
                    t = term_v_24;
                  }
                else
                  {
                    if(match_string(t, "'\\n'"))
                      {
                        t = term_x_24;
                      }
                    else
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                          _fail(t);
                        t = term_y_24;
                      }
                  }
              }
          }
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        {
          ATerm t_4 = NULL;
          t = SSL_explode_string(m_4);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm z_24 = ATgetFirst((ATermList) t);
              if(((ATgetType(z_24) != AT_INT) || (ATgetInt((ATermInt) z_24) != 39)))
                _fail(t);
              {
                ATerm a_25 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(a_25) == AT_LIST) && !(ATisEmpty(a_25))))
                  {
                    t_4 = ATgetFirst((ATermList) a_25);
                    {
                      ATerm b_25 = (ATerm) ATgetNext((ATermList) a_25);
                      if(((ATgetType(b_25) == AT_LIST) && !(ATisEmpty(b_25))))
                        {
                          ATerm c_25 = ATgetFirst((ATermList) b_25);
                          if(((ATgetType(c_25) != AT_INT) || (ATgetInt((ATermInt) c_25) != 39)))
                            _fail(t);
                          {
                            ATerm d_25 = (ATerm) ATgetNext((ATermList) b_25);
                            if(((ATgetType(d_25) != AT_LIST) || !(ATisEmpty(d_25))))
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
          t = t_4;
        }
      }
  }
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, q_4);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm z_3 = NULL,a_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_3 = ATgetFirst((ATermList) t);
      a_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_3;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(a_4), term_g_25), term_f_25);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(a_4), term_f_25), term_f_25);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(a_4), term_k_25), term_f_25);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(a_4), term_l_25), term_f_25);
            }
        }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_2 = ATgetFirst((ATermList) t);
      l_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_2;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(l_2), term_g_25), term_f_25);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(l_2), term_f_25), term_f_25);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(l_2), term_k_25), term_f_25);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(l_2), term_l_25), term_f_25);
            }
        }
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL;
  if(match_cons(t, sym__2))
    {
      o_5 = ATgetArgument(t, 0);
      p_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_25, (ATerm) ATinsert(ATinsert(ATempty, p_5), o_5));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_w_25;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm r_5 = NULL,s_5 = NULL;
  if(match_cons(t, sym__2))
    {
      r_5 = ATgetArgument(t, 0);
      s_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_25, (ATerm) ATinsert(ATinsert(ATempty, s_5), r_5));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      z_7 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_25, (ATerm) ATinsert(ATinsert(ATempty, a_8), z_7));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm f_8 = NULL,k_8 = NULL;
  if(match_cons(t, sym__2))
    {
      f_8 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_25, (ATerm) ATinsert(ATinsert(ATempty, k_8), f_8));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_x_25;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm w_8 = NULL,b_9 = NULL,l_3 = NULL;
  w_8 = t;
  t = SSL_explode_term(w_8);
  if(match_cons(t, sym__2))
    {
      ATerm y_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_25 = ATgetArgument(t, 1);
        if(((ATgetType(z_25) == AT_LIST) && !(ATisEmpty(z_25))))
          {
            b_9 = ATgetFirst((ATermList) z_25);
            {
              ATerm d_26 = (ATerm) ATgetNext((ATermList) z_25);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(w_8);
  if(match_cons(t, sym__2))
    {
      ATerm g_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_26 = ATgetArgument(t, 1);
        if(((ATgetType(h_26) == AT_LIST) && !(ATisEmpty(h_26))))
          {
            ATerm i_26 = ATgetFirst((ATermList) h_26);
            ATerm j_26 = (ATerm) ATgetNext((ATermList) h_26);
            if(((ATgetType(j_26) == AT_LIST) && !(ATisEmpty(j_26))))
              {
                l_3 = ATgetFirst((ATermList) j_26);
                {
                  ATerm n_26 = (ATerm) ATgetNext((ATermList) j_26);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_25, (ATerm) ATinsert(ATinsert(ATempty, l_3), b_9));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
  a_5 = t;
  if(match_cons(t, sym_CongQ_2))
    {
      b_5 = ATgetArgument(t, 0);
      c_5 = ATgetArgument(t, 1);
      {
        ATerm h_2 = NULL,i_2 = NULL;
        t = SSL_explode_string(b_5);
        t = escape_chars_1_0(i_0, t);
        i_2 = t;
        t = SSL_implode_string(i_2);
        h_2 = t;
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_2), c_5);
      }
    }
  else
    {
      if(match_cons(t, sym_CharCong_1))
        {
          b_5 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, b_5));
        }
      else
        {
          if(match_cons(t, sym_RealCong_1))
            {
              b_5 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, b_5));
            }
          else
            {
              if(match_cons(t, sym_IntCong_1))
                {
                  b_5 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, b_5));
                }
              else
                {
                  if(match_cons(t, sym_StrCong_1))
                    {
                      b_5 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, b_5));
                    }
                  else
                    {
                      if(match_cons(t, sym_ModCongNoArgs_1))
                        {
                          b_5 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_5), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_ModCong_2))
                            {
                              b_5 = ATgetArgument(t, 0);
                              c_5 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_5), c_5);
                            }
                          else
                            {
                              if(match_cons(t, sym_ListCong_2))
                                {
                                  b_5 = ATgetArgument(t, 0);
                                  c_5 = ATgetArgument(t, 1);
                                  {
                                    static ATerm w_0 (ATerm t);
                                    static ATerm w_0 (ATerm t)
                                    {
                                      t = c_5;
                                      return(t);
                                    }
                                    t = b_5;
                                    t = foldr_2_0(w_0, z_0, t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_ListCongNoTail_1))
                                    {
                                      b_5 = ATgetArgument(t, 0);
                                      t = b_5;
                                      t = foldr_2_0(a_1, e_1, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_TupleCong_2))
                                        {
                                          b_5 = ATgetArgument(t, 0);
                                          c_5 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Call_2, term_o_24, (ATerm) ATinsert(CheckATermList(c_5), b_5));
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_TupleCong_1))
                                            {
                                              b_5 = ATgetArgument(t, 0);
                                              t = b_5;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  v_4 = ATgetFirst((ATermList) t);
                                                  w_4 = (ATerm) ATgetNext((ATermList) t);
                                                  t = w_4;
                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                    {
                                                      ATerm o_26 = t;
                                                      int p_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = v_9(b_5, a_5, t);
                                                          LocalPopChoice(p_26);
                                                        }
                                                      else
                                                        {
                                                          t = o_26;
                                                          t = v_4;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = v_9(b_5, a_5, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = v_9(b_5, a_5, t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_EmptyTupleCong_0))
                                                {
                                                  t = term_a_27;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_AnnoCong_2))
                                                    {
                                                      b_5 = ATgetArgument(t, 0);
                                                      c_5 = ATgetArgument(t, 1);
                                                      t = c_5;
                                                      if(match_cons(t, sym_StrategyCurly_1))
                                                        {
                                                          u_4 = ATgetArgument(t, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_Call_2, term_c_27, (ATerm) ATinsert(ATinsert(ATempty, u_4), b_5));
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_ParenStrat_1))
                                                        {
                                                          b_5 = ATgetArgument(t, 0);
                                                          t = b_5;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_StratRuleNoCond_2))
                                                            {
                                                              b_5 = ATgetArgument(t, 0);
                                                              c_5 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_StratRule_3, b_5, c_5, term_d_27);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RuleNoCond_2))
                                                                {
                                                                  b_5 = ATgetArgument(t, 0);
                                                                  c_5 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Rule_3, b_5, c_5, term_d_27);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_OverlayNoArgs_2))
                                                                    {
                                                                      b_5 = ATgetArgument(t, 0);
                                                                      c_5 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Overlay_3, b_5, (ATerm)ATempty, c_5);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          b_5 = ATgetArgument(t, 0);
                                                                          c_5 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, c_5, b_5);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Call_2))
                                                                            {
                                                                              b_5 = ATgetArgument(t, 0);
                                                                              c_5 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_CallT_3, b_5, c_5, (ATerm) ATempty);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_CallNoArgs_1))
                                                                                {
                                                                                  b_5 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, b_5, (ATerm)ATempty, (ATerm) ATempty);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SDef_3))
                                                                                    {
                                                                                      b_5 = ATgetArgument(t, 0);
                                                                                      c_5 = ATgetArgument(t, 1);
                                                                                      y_4 = ATgetArgument(t, 2);
                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, b_5, c_5, (ATerm)ATempty, y_4);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefNoArgs_2))
                                                                                        {
                                                                                          b_5 = ATgetArgument(t, 0);
                                                                                          c_5 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_SDefT_4, b_5, (ATerm)ATempty, (ATerm)ATempty, c_5);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_SRDef_3))
                                                                                            {
                                                                                              b_5 = ATgetArgument(t, 0);
                                                                                              c_5 = ATgetArgument(t, 1);
                                                                                              y_4 = ATgetArgument(t, 2);
                                                                                              t = (ATerm) ATmakeAppl(sym_SRDefT_4, b_5, c_5, (ATerm)ATempty, y_4);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                {
                                                                                                  b_5 = ATgetArgument(t, 0);
                                                                                                  c_5 = ATgetArgument(t, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_SRDefT_4, b_5, (ATerm)ATempty, (ATerm)ATempty, c_5);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_RDef_3))
                                                                                                    {
                                                                                                      b_5 = ATgetArgument(t, 0);
                                                                                                      c_5 = ATgetArgument(t, 1);
                                                                                                      y_4 = ATgetArgument(t, 2);
                                                                                                      t = (ATerm) ATmakeAppl(sym_RDefT_4, b_5, c_5, (ATerm)ATempty, y_4);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                        {
                                                                                                          b_5 = ATgetArgument(t, 0);
                                                                                                          c_5 = ATgetArgument(t, 1);
                                                                                                          t = (ATerm) ATmakeAppl(sym_RDefT_4, b_5, (ATerm)ATempty, (ATerm)ATempty, c_5);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          ATerm e_27 = t;
                                                                                                          int f_27 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Module_2))
                                                                                                                {
                                                                                                                  ATerm g_27 = ATgetArgument(t, 0);
                                                                                                                  c_5 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(f_27);
                                                                                                              t = (ATerm) ATmakeAppl(sym_Specification_1, c_5);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = e_27;
                                                                                                              if(match_cons(t, sym_OpQ_2))
                                                                                                                {
                                                                                                                  b_5 = ATgetArgument(t, 0);
                                                                                                                  c_5 = ATgetArgument(t, 1);
                                                                                                                  t = w_9(b_5, c_5, a_5, t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_ListTail_2))
                                                                                                                    {
                                                                                                                      b_5 = ATgetArgument(t, 0);
                                                                                                                      c_5 = ATgetArgument(t, 1);
                                                                                                                      {
                                                                                                                        static ATerm i_1 (ATerm t);
                                                                                                                        static ATerm i_1 (ATerm t)
                                                                                                                        {
                                                                                                                          t = c_5;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = b_5;
                                                                                                                        t = foldr_2_0(i_1, j_1, t);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_List_1))
                                                                                                                        {
                                                                                                                          b_5 = ATgetArgument(t, 0);
                                                                                                                          t = b_5;
                                                                                                                          t = foldr_2_0(k_1, n_1, t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_Tuple_1))
                                                                                                                            {
                                                                                                                              b_5 = ATgetArgument(t, 0);
                                                                                                                              t = b_5;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  v_4 = ATgetFirst((ATermList) t);
                                                                                                                                  w_4 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                  t = w_4;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      ATerm h_27 = t;
                                                                                                                                      int i_27 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = x_9(b_5, a_5, t);
                                                                                                                                          LocalPopChoice(i_27);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = h_27;
                                                                                                                                          t = v_4;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = x_9(b_5, a_5, t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = x_9(b_5, a_5, t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_Anno_2))
                                                                                                                                {
                                                                                                                                  b_5 = ATgetArgument(t, 0);
                                                                                                                                  c_5 = ATgetArgument(t, 1);
                                                                                                                                  {
                                                                                                                                    ATerm r_8 = NULL;
                                                                                                                                    t = c_5;
                                                                                                                                    t = foldr_2_0(o_1, w_1, t);
                                                                                                                                    r_8 = t;
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Anno_2, b_5, r_8);
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_SortNoArgs_1))
                                                                                                                                    {
                                                                                                                                      b_5 = ATgetArgument(t, 0);
                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Sort_2, b_5, (ATerm) ATempty);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_Char_1))
                                                                                                                                        {
                                                                                                                                          b_5 = ATgetArgument(t, 0);
                                                                                                                                          t = b_10(b_5, a_5, t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          ATerm k_27 = t;
                                                                                                                                          int l_27 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_Con4_4))
                                                                                                                                                {
                                                                                                                                                  b_5 = ATgetArgument(t, 0);
                                                                                                                                                  {
                                                                                                                                                    ATerm m_27 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                  y_4 = ATgetArgument(t, 2);
                                                                                                                                                  x_4 = ATgetArgument(t, 3);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              LocalPopChoice(l_27);
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Con_3, b_5, y_4, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_4), (ATerm) ATempty));
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = k_27;
                                                                                                                                              {
                                                                                                                                                ATerm n_27 = t;
                                                                                                                                                int p_27 = stack_ptr;
                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Con3_3))
                                                                                                                                                      {
                                                                                                                                                        b_5 = ATgetArgument(t, 0);
                                                                                                                                                        {
                                                                                                                                                          ATerm q_27 = ATgetArgument(t, 1);
                                                                                                                                                        }
                                                                                                                                                        y_4 = ATgetArgument(t, 2);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    LocalPopChoice(p_27);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, b_5, y_4, term_t_27);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = n_27;
                                                                                                                                                    if(match_cons(t, sym_Con1_2))
                                                                                                                                                      {
                                                                                                                                                        b_5 = ATgetArgument(t, 0);
                                                                                                                                                        c_5 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, b_5, c_5, term_t_27);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm v_10 = NULL,b_11 = NULL,e_11 = NULL;
  b_11 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      e_11 = ATgetArgument(t, 0);
      v_10 = ATgetArgument(t, 1);
      {
        ATerm i_11 = NULL,j_11 = NULL,o_11 = NULL,q_11 = NULL;
        t = b_11;
        t = new_0_0(t);
        i_11 = t;
        t = new_0_0(t);
        j_11 = t;
        t = new_0_0(t);
        o_11 = t;
        t = new_0_0(t);
        q_11 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_11), o_11), j_11), i_11), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, i_11), (ATerm) ATmakeAppl(sym_Var_1, o_11))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, e_11, (ATerm)ATmakeAppl(sym_Var_1, i_11), (ATerm) ATmakeAppl(sym_Var_1, j_11)), (ATerm) ATmakeAppl(sym_BAM_3, v_10, (ATerm)ATmakeAppl(sym_Var_1, o_11), (ATerm) ATmakeAppl(sym_Var_1, q_11)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_u_27, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_11)), (ATerm) ATmakeAppl(sym_Var_1, j_11))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          e_11 = ATgetArgument(t, 0);
          {
            ATerm r_11 = NULL,s_11 = NULL,v_11 = NULL,w_11 = NULL;
            t = b_11;
            t = new_0_0(t);
            v_11 = t;
            t = e_11;
            {
              static ATerm y_1 (ATerm t);
              static ATerm y_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((r_11 != NULL) && (r_11 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      r_11 = ATgetArgument(t, 0);
                    if(((s_11 != NULL) && (s_11 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      s_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, v_11);
                return(t);
              }
              t = oncetd_1_0(y_1, t);
            }
            w_11 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_11), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_27, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_11)), not_null(r_11))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_11)), (ATerm) ATmakeAppl(sym_Build_1, w_11))));
          }
        }
      else
        {
          ATerm y_11 = NULL,c_12 = NULL,f_12 = NULL,j_12 = NULL,m_12 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              e_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_11;
          t = new_0_0(t);
          f_12 = t;
          t = new_0_0(t);
          j_12 = t;
          t = e_11;
          {
            static ATerm z_1 (ATerm t);
            static ATerm z_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((y_11 != NULL) && (y_11 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    y_11 = ATgetArgument(t, 0);
                  if(((c_12 != NULL) && (c_12 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    c_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, f_12);
              return(t);
            }
            t = oncetd_1_0(z_1, t);
          }
          m_12 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_12), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_12), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_12), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_12)), (ATerm) ATmakeAppl(sym_PrimT_3, term_v_27, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_12))))), (ATerm)ATmakeAppl(sym_Var_1, f_12), (ATerm) ATmakeAppl(sym_Op_2, term_n_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_12)), not_null(y_11)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm t_12 = NULL,c_13 = NULL;
  t_12 = t;
  if(match_cons(t, sym_Match_1))
    {
      c_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_13 = NULL,s_13 = NULL,v_13 = NULL,d_14 = NULL;
        t = t_12;
        t = new_0_0(t);
        v_13 = t;
        t = c_13;
        {
          static ATerm a_2 (ATerm t);
          static ATerm a_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((j_13 != NULL) && (j_13 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_13 = ATgetArgument(t, 0);
                if(((s_13 != NULL) && (s_13 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  s_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, v_13), j_13);
            return(t);
          }
          t = pat_td_1_0(a_2, t);
        }
        d_14 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_14), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_28, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_13))), (ATerm) ATmakeAppl(sym_Match_1, not_null(s_13))))));
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        {
          ATerm b_28 = t;
          int c_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_14 = NULL,q_14 = NULL,t_14 = NULL;
              t = t_12;
              t = new_0_0(t);
              q_14 = t;
              t = c_13;
              {
                static ATerm b_2 (ATerm t);
                static ATerm b_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_14 != NULL) && (m_14 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_14 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, q_14);
                  return(t);
                }
                t = pat_td_1_0(b_2, t);
              }
              t_14 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, q_14)), not_null(m_14))));
              LocalPopChoice(c_28);
            }
          else
            {
              t = b_28;
              {
                ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
                t = t_12;
                t = new_0_0(t);
                x_14 = t;
                t = c_13;
                {
                  static ATerm c_2 (ATerm t);
                  static ATerm c_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_14 != NULL) && (w_14 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_14 = ATgetArgument(t, 0);
                        if(((v_14 != NULL) && (v_14 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, x_14);
                    return(t);
                  }
                  t = pat_td_1_0(c_2, t);
                }
                y_14 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_14)), not_null(w_14)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm b_179 (ATerm), ATerm t)
{
  ATerm e_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_179(t);
      LocalPopChoice(f_28);
    }
  else
    {
      t = e_28;
      {
        ATerm a_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
        c_19 = t;
        if(match_cons(t, sym_Op_2))
          {
            d_19 = ATgetArgument(t, 0);
            e_19 = ATgetArgument(t, 1);
            {
              ATerm n_5 = NULL,c_6 = NULL,p_1 = NULL;
              t = SSLgetAnnotations(c_19);
              n_5 = t;
              t = e_19;
              {
                static ATerm d_2 (ATerm t);
                static ATerm d_2 (ATerm t)
                {
                  t = pat_td_1_0(b_179, t);
                  return(t);
                }
                t = fetch_1_0(d_2, t);
              }
              c_6 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, d_19, c_6);
              p_1 = t;
              t = SSLsetAnnotations(p_1, n_5);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                d_19 = ATgetArgument(t, 0);
                e_19 = ATgetArgument(t, 1);
                {
                  ATerm l_28 = t;
                  int p_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_6 = NULL,a_7 = NULL,q_1 = NULL;
                      t = SSLgetAnnotations(c_19);
                      v_6 = t;
                      t = e_19;
                      t = pat_td_1_0(b_179, t);
                      a_7 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, d_19, a_7);
                      q_1 = t;
                      t = SSLsetAnnotations(q_1, v_6);
                      LocalPopChoice(p_28);
                    }
                  else
                    {
                      t = l_28;
                      {
                        ATerm q_7 = NULL,c_8 = NULL,v_1 = NULL;
                        t = SSLgetAnnotations(c_19);
                        q_7 = t;
                        t = d_19;
                        t = pat_td_1_0(b_179, t);
                        c_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, c_8, e_19);
                        v_1 = t;
                        t = SSLsetAnnotations(v_1, q_7);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    d_19 = ATgetArgument(t, 0);
                    e_19 = ATgetArgument(t, 1);
                    a_19 = ATgetArgument(t, 2);
                    {
                      ATerm t_8 = NULL,y_8 = NULL,q_2 = NULL;
                      t = SSLgetAnnotations(c_19);
                      t_8 = t;
                      t = a_19;
                      {
                        static ATerm e_2 (ATerm t);
                        static ATerm e_2 (ATerm t)
                        {
                          t = pat_td_1_0(b_179, t);
                          return(t);
                        }
                        t = fetch_1_0(e_2, t);
                      }
                      y_8 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, d_19, e_19, y_8);
                      q_2 = t;
                      t = SSLsetAnnotations(q_2, t_8);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        d_19 = ATgetArgument(t, 0);
                        e_19 = ATgetArgument(t, 1);
                        a_19 = ATgetArgument(t, 2);
                        {
                          ATerm u_9 = NULL,c_10 = NULL,r_2 = NULL;
                          t = SSLgetAnnotations(c_19);
                          u_9 = t;
                          t = a_19;
                          {
                            static ATerm f_2 (ATerm t);
                            static ATerm f_2 (ATerm t)
                            {
                              t = pat_td_1_0(b_179, t);
                              return(t);
                            }
                            t = fetch_1_0(f_2, t);
                          }
                          c_10 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, d_19, e_19, c_10);
                          r_2 = t;
                          t = SSLsetAnnotations(r_2, u_9);
                        }
                      }
                    else
                      {
                        ATerm l_10 = NULL,o_10 = NULL,s_2 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            d_19 = ATgetArgument(t, 0);
                            e_19 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(c_19);
                        l_10 = t;
                        t = e_19;
                        t = pat_td_1_0(b_179, t);
                        o_10 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, d_19, o_10);
                        s_2 = t;
                        t = SSLsetAnnotations(s_2, l_10);
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
  ATerm p_19 = NULL,q_19 = NULL;
  p_19 = t;
  if(match_cons(t, sym_Build_1))
    {
      q_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_28 = t;
    int u_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_19 = NULL,s_19 = NULL,u_19 = NULL,v_19 = NULL;
        t = p_19;
        t = new_0_0(t);
        u_19 = t;
        t = q_19;
        {
          static ATerm g_2 (ATerm t);
          static ATerm g_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((r_19 != NULL) && (r_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_19 = ATgetArgument(t, 0);
                if(((s_19 != NULL) && (s_19 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  s_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, u_19);
            return(t);
          }
          t = pat_td_1_0(g_2, t);
        }
        v_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_v_28, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_19)), not_null(r_19))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_19)))), (ATerm) ATmakeAppl(sym_Build_1, v_19)));
        LocalPopChoice(u_28);
      }
    else
      {
        t = r_28;
        {
          ATerm z_28 = t;
          int a_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_19 = NULL,c_20 = NULL,d_20 = NULL;
              t = p_19;
              t = new_0_0(t);
              c_20 = t;
              t = q_19;
              {
                static ATerm j_2 (ATerm t);
                static ATerm j_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((w_19 != NULL) && (w_19 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        w_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, c_20);
                  return(t);
                }
                t = pat_td_1_0(j_2, t);
              }
              d_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_19), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_20)))), (ATerm) ATmakeAppl(sym_Build_1, d_20)));
              LocalPopChoice(a_29);
            }
          else
            {
              t = z_28;
              {
                ATerm g_20 = NULL,h_20 = NULL,j_20 = NULL,o_20 = NULL;
                t = p_19;
                t = new_0_0(t);
                j_20 = t;
                t = q_19;
                {
                  static ATerm m_2 (ATerm t);
                  static ATerm m_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((g_20 != NULL) && (g_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          g_20 = ATgetArgument(t, 0);
                        if(((h_20 != NULL) && (h_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          h_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, j_20);
                    return(t);
                  }
                  t = pat_td_1_0(m_2, t);
                }
                o_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_20), not_null(h_20), (ATerm) ATmakeAppl(sym_Var_1, j_20))), (ATerm) ATmakeAppl(sym_Build_1, o_20)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm f_29 = t;
  if((PushChoice() == 0))
    {
      ATerm f_21 = NULL,g_21 = NULL,h_21 = NULL,a_3 = NULL;
      h_21 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_21);
      f_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_21);
      a_3 = t;
      t = SSLsetAnnotations(a_3, f_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_29;
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_29;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm i_21 = NULL,n_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_21 = ATgetFirst((ATermList) t);
      n_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_21, n_21);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_29 = ATgetArgument(t, 0);
      if(match_cons(h_29, sym__2))
        {
          o_21 = ATgetArgument(h_29, 0);
          p_21 = ATgetArgument(h_29, 1);
        }
      else
        _fail(t);
      {
        ATerm i_29 = ATgetArgument(t, 1);
        if(match_cons(i_29, sym__2))
          {
            q_21 = ATgetArgument(i_29, 0);
            r_21 = ATgetArgument(i_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_21), o_21), (ATerm) ATinsert(CheckATermList(r_21), p_21));
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_29;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_21 = ATgetFirst((ATermList) t);
      t_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_21, t_21);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_29 = ATgetArgument(t, 0);
      if(match_cons(j_29, sym__2))
        {
          u_21 = ATgetArgument(j_29, 0);
          v_21 = ATgetArgument(j_29, 1);
        }
      else
        _fail(t);
      {
        ATerm m_29 = ATgetArgument(t, 1);
        if(match_cons(m_29, sym__2))
          {
            w_21 = ATgetArgument(m_29, 0);
            x_21 = ATgetArgument(m_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_21), u_21), (ATerm) ATinsert(CheckATermList(x_21), v_21));
  return(t);
}
static ATerm p_9 (ATerm d_107, ATerm e_107, ATerm f_107, ATerm t)
{
  ATerm q_20 = NULL,s_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,a_21 = NULL,c_21 = NULL,b_3 = NULL;
  t = f_107;
  t = fetch_1_0(n_2, t);
  t = f_107;
  t = genzip_4_0(o_2, p_2, t_2, LiftPrimArg_0_0, t);
  c_21 = t;
  if(match_cons(t, sym__2))
    {
      w_20 = ATgetArgument(t, 0);
      x_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_21);
  v_20 = t;
  t = w_20;
  t = concat_0_0(t);
  y_20 = t;
  t = x_20;
  t = genzip_4_0(u_2, v_2, w_2, _id, t);
  a_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_20, a_21);
  b_3 = t;
  t = SSLsetAnnotations(b_3, v_20);
  if(match_cons(t, sym__2))
    {
      q_20 = ATgetArgument(t, 0);
      {
        ATerm n_29 = ATgetArgument(t, 1);
        if(match_cons(n_29, sym__2))
          {
            s_20 = ATgetArgument(n_29, 0);
            u_20 = ATgetArgument(n_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, q_20, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_20), (ATerm) ATmakeAppl(sym_CallT_3, d_107, e_107, u_20)));
  return(t);
}
static ATerm u_22 (ATerm g_22, ATerm t)
{
  ATerm i_22 = NULL;
  t = g_22;
  {
    ATerm o_29 = t;
    if((PushChoice() == 0))
      {
        ATerm j_22 = NULL,l_22 = NULL,m_22 = NULL,e_3 = NULL;
        m_22 = t;
        if(match_cons(t, sym_Var_1))
          {
            l_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_22);
        j_22 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, l_22);
        e_3 = t;
        t = SSLsetAnnotations(e_3, j_22);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_29;
      }
  }
  t = new_0_0(t);
  i_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, i_22), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_22), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_22)))), (ATerm) ATmakeAppl(sym_Var_1, i_22)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  n_22 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_22 = ATgetArgument(t, 0);
      {
        ATerm q_29 = t;
        int r_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_22(n_22, t);
            LocalPopChoice(r_29);
          }
        else
          {
            t = q_29;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_d_27, (ATerm) ATmakeAppl(sym_Var_1, o_22)));
          }
      }
    }
  else
    {
      t = u_22(n_22, t);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm t_29 = t;
  if((PushChoice() == 0))
    {
      ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL,k_15 = NULL;
      i_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_12);
      g_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_12);
      k_15 = t;
      t = SSLsetAnnotations(k_15, g_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_29;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_29;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_12 = ATgetFirst((ATermList) t);
      l_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_12, l_12);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_29 = ATgetArgument(t, 0);
      if(match_cons(u_29, sym__2))
        {
          n_12 = ATgetArgument(u_29, 0);
          o_12 = ATgetArgument(u_29, 1);
        }
      else
        _fail(t);
      {
        ATerm w_29 = ATgetArgument(t, 1);
        if(match_cons(w_29, sym__2))
          {
            p_12 = ATgetArgument(w_29, 0);
            q_12 = ATgetArgument(w_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_12), n_12), (ATerm) ATinsert(CheckATermList(q_12), o_12));
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_29;
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_12 = ATgetFirst((ATermList) t);
      s_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_12, s_12);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_29 = ATgetArgument(t, 0);
      if(match_cons(x_29, sym__2))
        {
          u_12 = ATgetArgument(x_29, 0);
          v_12 = ATgetArgument(x_29, 1);
        }
      else
        _fail(t);
      {
        ATerm c_30 = ATgetArgument(t, 1);
        if(match_cons(c_30, sym__2))
          {
            x_12 = ATgetArgument(c_30, 0);
            y_12 = ATgetArgument(c_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_12), u_12), (ATerm) ATinsert(CheckATermList(y_12), v_12));
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm d_30 = t;
  if((PushChoice() == 0))
    {
      ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,m_15 = NULL;
      h_15 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_15);
      f_15 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_15);
      m_15 = t;
      t = SSLsetAnnotations(m_15, f_15);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_30;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_29;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm i_15 = NULL,j_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_15 = ATgetFirst((ATermList) t);
      j_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_15, j_15);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm p_15 = NULL,s_15 = NULL,t_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_30 = ATgetArgument(t, 0);
      if(match_cons(e_30, sym__2))
        {
          p_15 = ATgetArgument(e_30, 0);
          s_15 = ATgetArgument(e_30, 1);
        }
      else
        _fail(t);
      {
        ATerm i_30 = ATgetArgument(t, 1);
        if(match_cons(i_30, sym__2))
          {
            t_15 = ATgetArgument(i_30, 0);
            v_15 = ATgetArgument(i_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_15), p_15), (ATerm) ATinsert(CheckATermList(v_15), s_15));
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_29;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_15 = ATgetFirst((ATermList) t);
      y_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_15, y_15);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_30 = ATgetArgument(t, 0);
      if(match_cons(j_30, sym__2))
        {
          z_15 = ATgetArgument(j_30, 0);
          a_16 = ATgetArgument(j_30, 1);
        }
      else
        _fail(t);
      {
        ATerm l_30 = ATgetArgument(t, 1);
        if(match_cons(l_30, sym__2))
          {
            b_16 = ATgetArgument(l_30, 0);
            c_16 = ATgetArgument(l_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_16), z_15), (ATerm) ATinsert(CheckATermList(c_16), a_16));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      d_29 = ATgetArgument(t, 0);
      e_29 = ATgetArgument(t, 1);
      b_29 = ATgetArgument(t, 2);
      {
        ATerm l_11 = NULL,n_11 = NULL,p_11 = NULL,t_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,d_12 = NULL,e_12 = NULL,l_15 = NULL;
        t = b_29;
        t = fetch_1_0(x_2, t);
        t = b_29;
        t = genzip_4_0(y_2, z_2, c_3, LiftPrimArg_0_0, t);
        e_12 = t;
        if(match_cons(t, sym__2))
          {
            z_11 = ATgetArgument(t, 0);
            a_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_12);
        t_11 = t;
        t = z_11;
        t = concat_0_0(t);
        b_12 = t;
        t = a_12;
        t = genzip_4_0(d_3, g_3, i_3, _id, t);
        d_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_12, d_12);
        l_15 = t;
        t = SSLsetAnnotations(l_15, t_11);
        if(match_cons(t, sym__2))
          {
            l_11 = ATgetArgument(t, 0);
            {
              ATerm n_30 = ATgetArgument(t, 1);
              if(match_cons(n_30, sym__2))
                {
                  n_11 = ATgetArgument(n_30, 0);
                  p_11 = ATgetArgument(n_30, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, l_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_11), (ATerm) ATmakeAppl(sym_PrimT_3, d_29, e_29, p_11)));
      }
    }
  else
    {
      ATerm p_14 = NULL,r_14 = NULL,s_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,n_15 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          d_29 = ATgetArgument(t, 0);
          e_29 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_29;
      t = fetch_1_0(k_3, t);
      t = e_29;
      t = genzip_4_0(o_3, p_3, u_3, LiftPrimArg_0_0, t);
      e_15 = t;
      if(match_cons(t, sym__2))
        {
          a_15 = ATgetArgument(t, 0);
          b_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_15);
      z_14 = t;
      t = a_15;
      t = concat_0_0(t);
      c_15 = t;
      t = b_15;
      t = genzip_4_0(v_3, y_3, b_4, _id, t);
      d_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_15, d_15);
      n_15 = t;
      t = SSLsetAnnotations(n_15, z_14);
      if(match_cons(t, sym__2))
        {
          p_14 = ATgetArgument(t, 0);
          {
            ATerm o_30 = ATgetArgument(t, 1);
            if(match_cons(o_30, sym__2))
              {
                r_14 = ATgetArgument(o_30, 0);
                s_14 = ATgetArgument(o_30, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, p_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_14), (ATerm) ATmakeAppl(sym_PrimT_3, d_29, (ATerm)ATempty, s_14)));
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,m_31 = NULL,n_31 = NULL;
  n_31 = t;
  if(match_cons(t, sym_Con_3))
    {
      i_31 = ATgetArgument(t, 0);
      j_31 = ATgetArgument(t, 1);
      m_31 = ATgetArgument(t, 2);
      {
        ATerm d_17 = NULL,w_15 = NULL;
        t = SSLgetAnnotations(n_31);
        d_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, i_31, j_31, m_31);
        w_15 = t;
        t = SSLsetAnnotations(w_15, d_17);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = n_31;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm p_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(c_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_30;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm v_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  if(match_cons(t, sym_Con_3))
    {
      z_32 = ATgetArgument(t, 0);
      a_33 = ATgetArgument(t, 1);
      v_32 = ATgetArgument(t, 2);
      {
        ATerm e_18 = NULL,e_16 = NULL;
        t = SSLgetAnnotations(y_32);
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, z_32, a_33, v_32);
        e_16 = t;
        t = SSLsetAnnotations(e_16, e_18);
      }
    }
  else
    {
      ATerm g_19 = NULL,f_16 = NULL;
      if(match_cons(t, sym_App_2))
        {
          z_32 = ATgetArgument(t, 0);
          a_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_32);
      g_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, z_32, a_33);
      f_16 = t;
      t = SSLsetAnnotations(f_16, g_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm q_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(d_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_30;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,m_33 = NULL,p_33 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      j_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_33;
  if(match_cons(t, sym_StratRule_3))
    {
      k_33 = ATgetArgument(t, 0);
      m_33 = ATgetArgument(t, 1);
      p_33 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_33), (ATerm) ATmakeAppl(sym_Where_1, p_33)), k_33));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          k_33 = ATgetArgument(t, 0);
          m_33 = ATgetArgument(t, 1);
          p_33 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_33;
      t = pureterm_0_0(t);
      t = m_33;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, m_33)), (ATerm) ATmakeAppl(sym_Where_1, p_33)), (ATerm) ATmakeAppl(sym_Match_1, k_33)));
    }
  return(t);
}
static ATerm a_11 (ATerm q_102, ATerm r_102, ATerm s_102, ATerm t)
{
  ATerm x_33 = NULL,c_34 = NULL,e_34 = NULL,f_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL;
  t = new_0_0(t);
  k_34 = t;
  t = q_102;
  {
    static ATerm e_4 (ATerm t);
    static ATerm e_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm r_30 = ATgetArgument(t, 0);
          if(match_cons(r_30, sym_Var_1))
            {
              if(((f_34 != NULL) && (f_34 != ATgetArgument(r_30, 0))))
                _fail(ATgetArgument(r_30, 0));
              else
                f_34 = ATgetArgument(r_30, 0);
            }
          else
            _fail(t);
          if(((c_34 != NULL) && (c_34 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_34 = ATgetArgument(t, 1);
          {
            ATerm s_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, f_34);
      return(t);
    }
    t = oncetd_1_0(e_4, t);
  }
  l_34 = t;
  t = r_102;
  {
    static ATerm h_4 (ATerm t);
    static ATerm h_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm t_30 = ATgetArgument(t, 0);
          if(match_cons(t_30, sym_Var_1))
            {
              if(((f_34 != NULL) && (f_34 != ATgetArgument(t_30, 0))))
                _fail(ATgetArgument(t_30, 0));
              else
                f_34 = ATgetArgument(t_30, 0);
            }
          else
            _fail(t);
          if(((e_34 != NULL) && (e_34 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_34 = ATgetArgument(t, 1);
          {
            ATerm u_30 = ATgetArgument(t, 2);
            if(match_cons(u_30, sym_CallT_3))
              {
                if(((x_33 != NULL) && (x_33 != ATgetArgument(u_30, 0))))
                  _fail(ATgetArgument(u_30, 0));
                else
                  x_33 = ATgetArgument(u_30, 0);
                {
                  ATerm v_30 = ATgetArgument(u_30, 1);
                  if(((ATgetType(v_30) != AT_LIST) || !(ATisEmpty(v_30))))
                    _fail(t);
                }
                {
                  ATerm w_30 = ATgetArgument(u_30, 2);
                  if(((ATgetType(w_30) != AT_LIST) || !(ATisEmpty(w_30))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, k_34);
      return(t);
    }
    t = oncetd_1_0(h_4, t);
  }
  m_34 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_34), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, l_34, m_34, (ATerm) ATmakeAppl(sym_Seq_2, s_102, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(x_33), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_34), not_null(e_34), term_d_27))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_34)), (ATerm) ATmakeAppl(sym_Var_1, k_34))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL;
          o_35 = t;
          if(match_cons(t, sym_SRule_1))
            {
              p_35 = ATgetArgument(t, 0);
              t = p_35;
              if(match_cons(t, sym_Rule_3))
                {
                  g_35 = ATgetArgument(t, 0);
                  m_35 = ATgetArgument(t, 1);
                  n_35 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = o_35;
              t = a_11(g_35, m_35, n_35, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm k_20 = NULL,n_20 = NULL,i_16 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  p_35 = ATgetArgument(t, 0);
                  q_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_35);
              k_20 = t;
              t = q_35;
              t = desugarRule_0_0(t);
              n_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, p_35, n_20);
              i_16 = t;
              t = SSLsetAnnotations(i_16, k_20);
            }
          LocalPopChoice(e_31);
        }
      else
        {
          t = b_31;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm f_31 = t;
  int g_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(g_31);
    }
  else
    {
      t = f_31;
    }
  t = repeat_2_0(s_4, _id, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm h_31 = t;
  int k_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(k_31);
    }
  else
    {
      t = h_31;
      {
        ATerm l_31 = t;
        int p_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
            x_36 = t;
            if(match_cons(t, sym_CallT_3))
              {
                z_36 = ATgetArgument(t, 0);
                a_37 = ATgetArgument(t, 1);
                b_37 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = x_36;
            t = p_9(z_36, a_37, b_37, t);
            LocalPopChoice(p_31);
          }
        else
          {
            t = l_31;
            {
              ATerm q_31 = t;
              int r_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(r_31);
                }
              else
                {
                  t = q_31;
                  {
                    ATerm s_31 = t;
                    int t_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(t_31);
                      }
                    else
                      {
                        t = s_31;
                        {
                          ATerm u_31 = t;
                          int x_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_31 = t;
                              int e_32 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_37 = NULL,k_37 = NULL,n_37 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      j_37 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = j_37;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      k_37 = ATgetArgument(t, 0);
                                      t = k_37;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          k_37 = ATgetArgument(t, 0);
                                          n_37 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, k_37, n_37);
                                    }
                                  LocalPopChoice(e_32);
                                }
                              else
                                {
                                  t = z_31;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(x_31);
                            }
                          else
                            {
                              t = u_31;
                              {
                                ATerm f_32 = t;
                                int g_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(g_32);
                                  }
                                else
                                  {
                                    t = f_32;
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
  t = topdown_1_0(o_4, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm o_23 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_23);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm h_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_32);
    }
  else
    {
      t = h_32;
      {
        ATerm k_32 = t;
        int l_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_32);
          }
        else
          {
            t = k_32;
            {
              ATerm n_32 = t;
              int o_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_23 = ATgetArgument(t, 0);
                      y_23 = ATgetArgument(t, 1);
                      z_23 = ATgetArgument(t, 2);
                      a_24 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_23;
                  t = map_1_0(e_5, t);
                  LocalPopChoice(o_32);
                }
              else
                {
                  t = n_32;
                  {
                    ATerm p_32 = t;
                    int q_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(q_32);
                      }
                    else
                      {
                        t = p_32;
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
  ATerm h_24 = NULL;
  ATerm r_32 = t;
  int s_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_24 = ATgetArgument(t, 0);
          {
            ATerm t_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_32);
      t = h_24;
    }
  else
    {
      t = r_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_24;
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
  ATerm w_24 = NULL;
  ATerm u_32 = t;
  int x_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_24 = ATgetArgument(t, 0);
          {
            ATerm b_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_32);
      t = w_24;
    }
  else
    {
      t = u_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_24;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_c_33;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL;
  n_41 = t;
  if(match_cons(t, sym_Seq_2))
    {
      o_41 = ATgetArgument(t, 0);
      w_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_41;
  if(match_cons(t, sym_CallT_3))
    {
      r_41 = ATgetArgument(t, 0);
      t_41 = ATgetArgument(t, 1);
      v_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_41;
  if(match_cons(t, sym_SVar_1))
    {
      s_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_41;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = t_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = v_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = w_41;
  if(match_cons(t, sym_Seq_2))
    {
      x_41 = ATgetArgument(t, 0);
      z_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_41;
  if(match_cons(t, sym_Match_1))
    {
      y_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_41;
  if(match_cons(t, sym_Seq_2))
    {
      a_42 = ATgetArgument(t, 0);
      e_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_42;
  if(match_cons(t, sym_Where_1))
    {
      d_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_42;
  if(match_cons(t, sym_Build_1))
    {
      f_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_33 = t;
    int e_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_22 = NULL,k_22 = NULL,p_22 = NULL,q_22 = NULL,x_22 = NULL,y_22 = NULL;
        t = term_s_33;
        x_22 = t;
        t = term_t_33;
        y_22 = t;
        t = term_u_33;
        t = m_13(y_22, x_22, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm v_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_33) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            c_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_42, f_42);
        q_22 = t;
        t = (ATerm) ATmakeAppl(sym__3, c_22, y_41, (ATerm) ATmakeAppl(sym__2, d_42, f_42));
        t = d_11(c_22, y_41, q_22, t);
        if(match_cons(t, sym__2))
          {
            k_22 = ATgetArgument(t, 0);
            p_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_41), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, k_22), (ATerm) ATmakeAppl(sym_Build_1, p_22)));
        LocalPopChoice(e_33);
      }
    else
      {
        t = d_33;
        {
          ATerm f_23 = NULL,n_23 = NULL,s_25 = NULL,t_25 = NULL;
          t = term_s_33;
          s_25 = t;
          t = term_t_33;
          t_25 = t;
          t = term_u_33;
          t = m_13(t_25, s_25, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm w_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_33) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              f_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_41;
          t = free_vars_3_0(z_4, d_5, tboundin_3_0, t);
          {
            static ATerm i_5 (ATerm t);
            static ATerm i_5 (ATerm t)
            {
              static ATerm j_5 (ATerm t);
              static ATerm j_5 (ATerm t)
              {
                ATerm e_25 = NULL,i_25 = NULL,j_25 = NULL;
                e_25 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, f_23, (ATerm) ATmakeAppl(sym_Var_1, e_25));
                i_25 = t;
                t = term_b_34;
                j_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, f_23, (ATerm) ATmakeAppl(sym_Var_1, e_25)), term_b_34);
                t = n_13(k_5, i_25, j_25, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, e_25);
                return(t);
              }
              t = map_1_0(j_5, t);
              t = (ATerm) ATmakeAppl(sym__2, d_42, f_42);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((n_23 != NULL) && (n_23 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    n_23 = ATgetArgument(t, 0);
                  {
                    ATerm d_34 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(h_5, i_5, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_41), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(n_23)), (ATerm) ATmakeAppl(sym_Build_1, f_42)));
        }
      }
  }
  return(t);
}
static ATerm f_44 (ATerm a_43, ATerm b_43, ATerm t)
{
  ATerm a_26 = NULL;
  t = term_c_33;
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_33, b_43);
  t = m_13(a_26, b_43, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm g_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_34) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = a_43;
  return(t);
}
static ATerm g_44 (ATerm e_43, ATerm f_43, ATerm t)
{
  ATerm e_26 = NULL;
  t = term_c_33;
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_33, f_43);
  t = m_13(e_26, f_43, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm h_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_34) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = e_43;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm r_43 = NULL,u_43 = NULL,d_44 = NULL;
  u_43 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm i_34 = ATgetArgument(t, 0);
      d_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_44;
  if(match_cons(t, sym_Var_1))
    {
      r_43 = ATgetArgument(t, 0);
      {
        ATerm j_34 = t;
        int o_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_26 = NULL;
            t = term_c_33;
            q_26 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_c_33, u_43);
            t = m_13(q_26, u_43, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm p_34 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) p_34) != ATmakeSymbol("s_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, r_43);
            LocalPopChoice(o_34);
          }
        else
          {
            t = j_34;
            {
              ATerm r_34 = t;
              int s_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_44(d_44, u_43, t);
                  LocalPopChoice(s_34);
                }
              else
                {
                  t = r_34;
                  t = g_44(d_44, u_43, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm t_34 = t;
      int a_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_44(d_44, u_43, t);
          LocalPopChoice(a_35);
        }
      else
        {
          t = t_34;
          t = g_44(d_44, u_43, t);
        }
    }
  return(t);
}
static ATerm c_11 (ATerm d_48, ATerm f_48, ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL;
  i_44 = t;
  {
    ATerm b_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_48, f_48);
        t = e_14(d_48, f_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm d_35 = ATgetFirst((ATermList) t);
            h_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(c_35);
        {
          ATerm j_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, d_48, f_48, h_44);
          t = lookup_table_0_1(d_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_14(f_48, h_44, j_44, t);
          t = (ATerm) ATmakeAppl(sym__3, d_48, f_48, h_44);
        }
      }
    else
      {
        t = b_35;
        {
          ATerm n_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, d_48, f_48);
          t = lookup_table_0_1(d_48, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_14(f_48, n_44, t);
          t = (ATerm) ATmakeAppl(sym__2, d_48, f_48);
        }
      }
  }
  t = i_44;
  return(t);
}
ATerm end_scope_1_0 (ATerm b_150 (ATerm), ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,v_44 = NULL,y_44 = NULL,z_44 = NULL,e_45 = NULL,g_45 = NULL;
  y_44 = t;
  t = b_150(t);
  v_44 = t;
  {
    ATerm f_35 = t;
    int j_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_45 = NULL;
        t = term_k_35;
        l_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_44, term_k_35);
        t = e_14(v_44, l_45, t);
        {
          ATerm l_35 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_35;
            }
        }
        LocalPopChoice(j_35);
      }
    else
      {
        t = f_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_44 = ATgetFirst((ATermList) t);
      p_44 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_44, term_k_35, p_44);
  t = lookup_table_0_1(v_44, t);
  g_45 = t;
  t = term_k_35;
  z_44 = t;
  t = g_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(z_44, p_44, e_45, t);
  t = q_44;
  {
    static ATerm l_5 (ATerm t);
    static ATerm l_5 (ATerm t)
    {
      ATerm n_45 = NULL;
      n_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_44, n_45);
      t = c_11(v_44, n_45, t);
      return(t);
    }
    t = map_1_0(l_5, t);
  }
  t = y_44;
  return(t);
}
ATerm restore_always_2_0 (ATerm b_144 (ATerm), ATerm c_144 (ATerm), ATerm t)
{
  ATerm r_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_144(t);
      t = c_144(t);
      LocalPopChoice(s_35);
    }
  else
    {
      t = r_35;
      t = c_144(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_150 (ATerm), ATerm t)
{
  ATerm v_45 = NULL,x_45 = NULL,y_45 = NULL,a_46 = NULL,p_46 = NULL,r_46 = NULL,t_46 = NULL;
  x_45 = t;
  t = a_150(t);
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_45, term_k_35);
  {
    ATerm t_35 = t;
    int u_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_46 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_35 = ATgetArgument(t, 0);
            ATerm w_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_35;
        z_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_45, term_k_35);
        t = e_14(v_45, z_46, t);
        LocalPopChoice(u_35);
      }
    else
      {
        t = t_35;
        t = (ATerm) ATempty;
      }
  }
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_45, term_k_35, (ATerm) ATinsert(CheckATermList(y_45), (ATerm) ATempty));
  t = lookup_table_0_1(v_45, t);
  t_46 = t;
  t = term_k_35;
  a_46 = t;
  t = (ATerm) ATinsert(CheckATermList(y_45), (ATerm) ATempty);
  p_46 = t;
  t = t_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(a_46, p_46, r_46, t);
  t = x_45;
  return(t);
}
ATerm scope_2_0 (ATerm c_150 (ATerm), ATerm d_150 (ATerm), ATerm t)
{
  static ATerm m_5 (ATerm t);
  static ATerm m_5 (ATerm t)
  {
    t = end_scope_1_0(c_150, t);
    return(t);
  }
  t = begin_scope_1_0(c_150, t);
  t = restore_always_2_0(d_150, m_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_c_33;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm g_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_47);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm x_35 = t;
  int y_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_35);
    }
  else
    {
      t = x_35;
      {
        ATerm b_36 = t;
        int c_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_36);
          }
        else
          {
            t = b_36;
            {
              ATerm d_36 = t;
              int f_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_47 = NULL,k_47 = NULL,m_47 = NULL,n_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_47 = ATgetArgument(t, 0);
                      k_47 = ATgetArgument(t, 1);
                      m_47 = ATgetArgument(t, 2);
                      n_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_47;
                  t = map_1_0(w_5, t);
                  LocalPopChoice(f_36);
                }
              else
                {
                  t = d_36;
                  {
                    ATerm g_36 = t;
                    int p_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(p_36);
                      }
                    else
                      {
                        t = g_36;
                        t = dynrule_targs_1_0(x_5, t);
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
  ATerm b_48 = NULL;
  ATerm q_36 = t;
  int r_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_48 = ATgetArgument(t, 0);
          {
            ATerm v_36 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_36);
      t = b_48;
    }
  else
    {
      t = q_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_48;
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
  ATerm q_48 = NULL;
  ATerm w_36 = t;
  int y_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_48 = ATgetArgument(t, 0);
          {
            ATerm c_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_36);
      t = q_48;
    }
  else
    {
      t = w_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_48;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_c_33;
  return(t);
}
static ATerm d_11 (ATerm i_28, ATerm h_28, ATerm j_28, ATerm t)
{
  ATerm f_47 = NULL;
  static ATerm t_5 (ATerm t);
  static ATerm t_5 (ATerm t)
  {
    t = h_28;
    t = free_vars_3_0(u_5, v_5, tboundin_3_0, t);
    {
      static ATerm z_5 (ATerm t);
      static ATerm z_5 (ATerm t)
      {
        ATerm w_48 = NULL,x_48 = NULL,z_48 = NULL;
        w_48 = t;
        t = (ATerm) ATmakeAppl(sym_App_2, i_28, (ATerm) ATmakeAppl(sym_Var_1, w_48));
        x_48 = t;
        t = term_e_37;
        z_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, i_28, (ATerm) ATmakeAppl(sym_Var_1, w_48)), term_e_37);
        t = n_13(a_6, x_48, z_48, t);
        t = w_48;
        return(t);
      }
      t = map_1_0(z_5, t);
    }
    t = j_28;
    t = alltd_1_0(Replace_0_0, t);
    if(((f_47 != NULL) && (f_47 != t)))
      _fail(t);
    else
      f_47 = t;
    return(t);
  }
  t = scope_2_0(q_5, t_5, t);
  t = not_null(f_47);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm k_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_28);
  return(t);
}
static ATerm d_6 (ATerm t)
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
              ATerm l_37 = t;
              int m_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_28 = NULL,o_28 = NULL,x_28 = NULL,y_28 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_28 = ATgetArgument(t, 0);
                      o_28 = ATgetArgument(t, 1);
                      x_28 = ATgetArgument(t, 2);
                      y_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_28;
                  t = map_1_0(e_6, t);
                  LocalPopChoice(m_37);
                }
              else
                {
                  t = l_37;
                  {
                    ATerm o_37 = t;
                    int p_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(p_37);
                      }
                    else
                      {
                        t = o_37;
                        t = dynrule_targs_1_0(f_6, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm k_29 = NULL;
  ATerm r_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_29 = ATgetArgument(t, 0);
          {
            ATerm t_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_37);
      t = k_29;
    }
  else
    {
      t = r_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_29;
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = map_1_0(g_6, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm v_29 = NULL;
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_29 = ATgetArgument(t, 0);
          {
            ATerm a_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_37);
      t = v_29;
    }
  else
    {
      t = u_37;
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
static ATerm h_6 (ATerm t)
{
  t = term_c_33;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_c_33;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,i_54 = NULL,k_54 = NULL,l_54 = NULL;
  v_53 = t;
  if(match_cons(t, sym_Seq_2))
    {
      w_53 = ATgetArgument(t, 0);
      d_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_53;
  if(match_cons(t, sym_CallT_3))
    {
      x_53 = ATgetArgument(t, 0);
      b_54 = ATgetArgument(t, 1);
      c_54 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_53;
  if(match_cons(t, sym_SVar_1))
    {
      y_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_53;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = b_54;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = c_54;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = d_54;
  if(match_cons(t, sym_Seq_2))
    {
      e_54 = ATgetArgument(t, 0);
      k_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_54;
  if(match_cons(t, sym_Match_1))
    {
      i_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_54;
  if(match_cons(t, sym_Build_1))
    {
      l_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_27 = NULL,o_27 = NULL,w_27 = NULL,x_27 = NULL;
        t = term_e_38;
        w_27 = t;
        t = term_g_38;
        x_27 = t;
        t = term_h_38;
        t = m_13(x_27, w_27, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm i_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_38) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            j_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, j_27, i_54, l_54);
        t = d_11(j_27, i_54, l_54, t);
        o_27 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_54), (ATerm) ATmakeAppl(sym_Build_1, o_27));
        LocalPopChoice(c_38);
      }
    else
      {
        t = b_38;
        {
          ATerm d_28 = NULL,g_28 = NULL,f_30 = NULL,g_30 = NULL;
          t = term_e_38;
          f_30 = t;
          t = term_g_38;
          g_30 = t;
          t = term_h_38;
          t = m_13(g_30, f_30, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm j_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_38) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              d_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_54;
          t = free_vars_3_0(b_6, d_6, tboundin_3_0, t);
          {
            static ATerm i_6 (ATerm t);
            static ATerm i_6 (ATerm t)
            {
              static ATerm j_6 (ATerm t);
              static ATerm j_6 (ATerm t)
              {
                ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
                z_29 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, d_28, (ATerm) ATmakeAppl(sym_Var_1, z_29));
                a_30 = t;
                t = term_l_38;
                b_30 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, d_28, (ATerm) ATmakeAppl(sym_Var_1, z_29)), term_l_38);
                t = n_13(k_6, a_30, b_30, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, z_29);
                return(t);
              }
              t = map_1_0(j_6, t);
              t = l_54;
              t = alltd_1_0(Replace_0_0, t);
              if(((g_28 != NULL) && (g_28 != t)))
                _fail(t);
              else
                g_28 = t;
              return(t);
            }
            t = scope_2_0(h_6, i_6, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_54), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_28)));
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  static ATerm l_6 (ATerm t);
  static ATerm l_6 (ATerm t)
  {
    ATerm e_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,t_57 = NULL,u_57 = NULL;
    u_57 = t;
    if(match_cons(t, sym_Seq_2))
      {
        e_57 = ATgetArgument(t, 0);
        p_57 = ATgetArgument(t, 1);
        t = e_57;
        if(match_cons(t, sym_Choice_2))
          {
            j_57 = ATgetArgument(t, 0);
            l_57 = ATgetArgument(t, 1);
            {
              ATerm m_38 = t;
              int n_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_31 = NULL,d_31 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_o_38, p_57);
                  c_31 = t;
                  t = term_p_38;
                  d_31 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_p_38, (ATerm) ATmakeAppl(sym_Seq_2, term_o_38, p_57));
                  t = m_13(d_31, c_31, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm q_38 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) q_38) != ATmakeSymbol("p_4", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, j_57, p_57), (ATerm) ATmakeAppl(sym_Seq_2, l_57, p_57));
                  t = bottomup_1_0(l_6, t);
                  LocalPopChoice(n_38);
                }
              else
                {
                  t = m_38;
                  t = u_57;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                j_57 = ATgetArgument(t, 0);
                l_57 = ATgetArgument(t, 1);
                {
                  ATerm r_38 = t;
                  int s_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_31 = NULL,w_31 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_t_38, p_57);
                      v_31 = t;
                      t = term_u_38;
                      w_31 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_u_38, (ATerm) ATmakeAppl(sym_Seq_2, term_t_38, p_57));
                      t = m_13(w_31, v_31, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm w_38 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) w_38) != ATmakeSymbol("r_4", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, j_57, p_57), (ATerm) ATmakeAppl(sym_Seq_2, l_57, p_57));
                      t = bottomup_1_0(l_6, t);
                      LocalPopChoice(s_38);
                    }
                  else
                    {
                      t = r_38;
                      t = u_57;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    j_57 = ATgetArgument(t, 0);
                    l_57 = ATgetArgument(t, 1);
                    {
                      ATerm x_38 = t;
                      int y_38 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_58 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, l_57, p_57);
                          t = l_6(t);
                          h_58 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, j_57, h_58);
                          t = l_6(t);
                          LocalPopChoice(y_38);
                        }
                      else
                        {
                          t = x_38;
                          t = u_57;
                        }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        j_57 = ATgetArgument(t, 0);
                        l_57 = ATgetArgument(t, 1);
                        {
                          ATerm z_38 = t;
                          int a_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_58 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, l_57, p_57);
                              t = l_6(t);
                              t_58 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_57, t_58);
                              t = l_6(t);
                              LocalPopChoice(a_39);
                            }
                          else
                            {
                              t = z_38;
                              t = u_57;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            j_57 = ATgetArgument(t, 0);
                            {
                              ATerm b_39 = t;
                              int d_39 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_58 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, p_57, j_57);
                                  t = l_6(t);
                                  x_58 = t;
                                  t = (ATerm) ATmakeAppl(sym_Build_1, x_58);
                                  t = l_6(t);
                                  LocalPopChoice(d_39);
                                }
                              else
                                {
                                  t = b_39;
                                  t = u_57;
                                }
                            }
                          }
                        else
                          {
                            t = u_57;
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
            e_57 = ATgetArgument(t, 0);
            p_57 = ATgetArgument(t, 1);
            t = e_57;
            if(match_cons(t, sym_LChoice_2))
              {
                j_57 = ATgetArgument(t, 0);
                l_57 = ATgetArgument(t, 1);
                {
                  ATerm e_39 = t;
                  int h_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_59 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, l_57, p_57);
                      t = l_6(t);
                      g_59 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, j_57, g_59);
                      t = l_6(t);
                      LocalPopChoice(h_39);
                    }
                  else
                    {
                      t = e_39;
                      t = u_57;
                    }
                }
              }
            else
              {
                t = u_57;
              }
          }
        else
          {
            if(match_cons(t, sym_Choice_2))
              {
                e_57 = ATgetArgument(t, 0);
                p_57 = ATgetArgument(t, 1);
                t = e_57;
                if(match_cons(t, sym_Choice_2))
                  {
                    j_57 = ATgetArgument(t, 0);
                    l_57 = ATgetArgument(t, 1);
                    {
                      ATerm j_39 = t;
                      int k_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_59 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, l_57, p_57);
                          t = l_6(t);
                          w_59 = t;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, j_57, w_59);
                          t = l_6(t);
                          LocalPopChoice(k_39);
                        }
                      else
                        {
                          t = j_39;
                          t = u_57;
                        }
                    }
                  }
                else
                  {
                    t = u_57;
                  }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    e_57 = ATgetArgument(t, 0);
                    p_57 = ATgetArgument(t, 1);
                    t = p_57;
                    if(match_cons(t, sym_Op_2))
                      {
                        q_57 = ATgetArgument(t, 0);
                        t_57 = ATgetArgument(t, 1);
                        t = e_57;
                        if(match_cons(t, sym_CallT_3))
                          {
                            j_57 = ATgetArgument(t, 0);
                            l_57 = ATgetArgument(t, 1);
                            o_57 = ATgetArgument(t, 2);
                            t = o_57;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                t = l_57;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    m_57 = ATgetFirst((ATermList) t);
                                    n_57 = (ATerm) ATgetNext((ATermList) t);
                                    t = n_57;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = j_57;
                                        if(match_cons(t, sym_SVar_1))
                                          {
                                            k_57 = ATgetArgument(t, 0);
                                            t = k_57;
                                            if(match_string(t, "bottomup_1_0"))
                                              {
                                                ATerm m_39 = t;
                                                int n_39 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm e_60 = NULL;
                                                    t = t_57;
                                                    {
                                                      static ATerm m_6 (ATerm t);
                                                      static ATerm m_6 (ATerm t)
                                                      {
                                                        ATerm f_60 = NULL;
                                                        f_60 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_39, (ATerm)ATinsert(ATempty, m_57), (ATerm) ATempty), f_60);
                                                        return(t);
                                                      }
                                                      t = map_1_0(m_6, t);
                                                    }
                                                    e_60 = t;
                                                    t = (ATerm) ATmakeAppl(sym_App_2, m_57, (ATerm) ATmakeAppl(sym_Op_2, q_57, e_60));
                                                    t = bottomup_1_0(l_6, t);
                                                    LocalPopChoice(n_39);
                                                  }
                                                else
                                                  {
                                                    t = m_39;
                                                    t = u_57;
                                                  }
                                              }
                                            else
                                              {
                                                t = u_57;
                                              }
                                          }
                                        else
                                          {
                                            t = u_57;
                                          }
                                      }
                                    else
                                      {
                                        t = u_57;
                                      }
                                  }
                                else
                                  {
                                    t = u_57;
                                  }
                              }
                            else
                              {
                                t = u_57;
                              }
                          }
                        else
                          {
                            t = u_57;
                          }
                      }
                    else
                      {
                        t = u_57;
                      }
                  }
                else
                  {
                    t = u_57;
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(l_6, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm r_140 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t);
  static ATerm n_6 (ATerm t)
  {
    t = bottomup_1_0(r_140, t);
    return(t);
  }
  t = SRTS_all(n_6, t);
  t = r_140(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  static ATerm o_6 (ATerm t);
  static ATerm o_6 (ATerm t)
  {
    ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL;
    t_61 = t;
    if(match_cons(t, sym_Seq_2))
      {
        p_61 = ATgetArgument(t, 0);
        q_61 = ATgetArgument(t, 1);
        t = q_61;
        if(match_cons(t, sym_Choice_2))
          {
            r_61 = ATgetArgument(t, 0);
            s_61 = ATgetArgument(t, 1);
            {
              ATerm q_39 = t;
              int r_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_62 = NULL,c_62 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_61, r_61);
                  t = o_6(t);
                  b_62 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_61, s_61);
                  t = o_6(t);
                  c_62 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, b_62, c_62);
                  t = o_6(t);
                  LocalPopChoice(r_39);
                }
              else
                {
                  t = q_39;
                  t = t_61;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                r_61 = ATgetArgument(t, 0);
                s_61 = ATgetArgument(t, 1);
                {
                  ATerm u_39 = t;
                  int v_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_62 = NULL,t_62 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_61, r_61);
                      t = o_6(t);
                      l_62 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, p_61, s_61);
                      t = o_6(t);
                      t_62 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, l_62, t_62);
                      t = o_6(t);
                      LocalPopChoice(v_39);
                    }
                  else
                    {
                      t = u_39;
                      t = t_61;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    r_61 = ATgetArgument(t, 0);
                    s_61 = ATgetArgument(t, 1);
                    {
                      ATerm w_39 = t;
                      int y_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_63 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, p_61, s_61);
                          t = o_6(t);
                          k_63 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, r_61, k_63);
                          t = o_6(t);
                          LocalPopChoice(y_39);
                        }
                      else
                        {
                          t = w_39;
                          t = t_61;
                        }
                    }
                  }
                else
                  {
                    t = t_61;
                  }
              }
          }
      }
    else
      {
        t = t_61;
      }
    return(t);
  }
  t = bottomup_1_0(o_6, t);
  return(t);
}
ATerm Seq_2_0 (ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm t)
{
  ATerm r_63 = NULL,u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,c_64 = NULL,k_16 = NULL;
  c_64 = t;
  if(match_cons(t, sym_Seq_2))
    {
      u_63 = ATgetArgument(t, 0);
      v_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_64);
  r_63 = t;
  t = u_63;
  t = a_123(t);
  w_63 = t;
  t = v_63;
  t = b_123(t);
  x_63 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, w_63, x_63);
  k_16 = t;
  t = SSLsetAnnotations(k_16, r_63);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,z_16 = NULL;
  u_36 = t;
  if(match_cons(t, sym_Build_1))
    {
      t_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_36);
  s_36 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, t_36);
  z_16 = t;
  t = SSLsetAnnotations(z_16, s_36);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm z_39 = t;
  int a_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_40 = t;
      int c_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          LocalPopChoice(c_40);
        }
      else
        {
          t = b_40;
          {
            ATerm d_40 = t;
            int f_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL;
                y_68 = t;
                if(match_cons(t, sym_Choice_2))
                  {
                    z_68 = ATgetArgument(t, 0);
                    a_69 = ATgetArgument(t, 1);
                    {
                      ATerm i_32 = NULL,m_32 = NULL,w_32 = NULL,p_16 = NULL;
                      t = SSLgetAnnotations(y_68);
                      i_32 = t;
                      t = z_68;
                      t = inline_rules_0_0(t);
                      m_32 = t;
                      t = a_69;
                      t = inline_rules_0_0(t);
                      w_32 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, m_32, w_32);
                      p_16 = t;
                      t = SSLsetAnnotations(p_16, i_32);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        z_68 = ATgetArgument(t, 0);
                        a_69 = ATgetArgument(t, 1);
                        {
                          ATerm n_33 = NULL,y_33 = NULL,z_33 = NULL,q_16 = NULL;
                          t = SSLgetAnnotations(y_68);
                          n_33 = t;
                          t = z_68;
                          t = inline_rules_0_0(t);
                          y_33 = t;
                          t = a_69;
                          t = inline_rules_0_0(t);
                          z_33 = t;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, y_33, z_33);
                          q_16 = t;
                          t = SSLsetAnnotations(q_16, n_33);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            z_68 = ATgetArgument(t, 0);
                            a_69 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm g_40 = t;
                          int h_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_34 = NULL,q_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,e_35 = NULL,h_35 = NULL,i_35 = NULL,u_16 = NULL,t_16 = NULL,s_16 = NULL,r_16 = NULL;
                              t = SSLgetAnnotations(y_68);
                              n_34 = t;
                              t = a_69;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  u_34 = ATgetArgument(t, 0);
                                  v_34 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(a_69);
                              q_34 = t;
                              t = u_34;
                              if(match_cons(t, sym_Match_1))
                                {
                                  h_35 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(u_34);
                              e_35 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, h_35);
                              r_16 = t;
                              t = SSLsetAnnotations(r_16, e_35);
                              i_35 = t;
                              t = v_34;
                              if(match_cons(t, sym_Build_1))
                                {
                                  y_34 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(v_34);
                              x_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, y_34);
                              s_16 = t;
                              t = SSLsetAnnotations(s_16, x_34);
                              z_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, i_35, z_34);
                              t_16 = t;
                              t = SSLsetAnnotations(t_16, q_34);
                              w_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, z_68, w_34);
                              u_16 = t;
                              t = SSLsetAnnotations(u_16, n_34);
                              LocalPopChoice(h_40);
                            }
                          else
                            {
                              t = g_40;
                              {
                                ATerm e_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,i_17 = NULL,b_17 = NULL,v_16 = NULL;
                                t = SSLgetAnnotations(y_68);
                                e_36 = t;
                                t = a_69;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    i_36 = ATgetArgument(t, 0);
                                    j_36 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(a_69);
                                h_36 = t;
                                t = i_36;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    n_36 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(i_36);
                                m_36 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, n_36);
                                v_16 = t;
                                t = SSLsetAnnotations(v_16, m_36);
                                o_36 = t;
                                t = j_36;
                                t = Seq_2_0(_id, p_6, t);
                                k_36 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, o_36, k_36);
                                b_17 = t;
                                t = SSLsetAnnotations(b_17, h_36);
                                l_36 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, z_68, l_36);
                                i_17 = t;
                                t = SSLsetAnnotations(i_17, e_36);
                              }
                            }
                        }
                      }
                  }
                LocalPopChoice(f_40);
              }
            else
              {
                t = d_40;
                t = InlineStrat_0_0(t);
                t = inline_rules_0_0(t);
              }
          }
        }
      LocalPopChoice(a_40);
    }
  else
    {
      t = z_39;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_g_38;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_t_33;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm l_69 = NULL,o_69 = NULL,s_69 = NULL,t_69 = NULL,v_69 = NULL;
  l_69 = t;
  t = term_e_38;
  t_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_i_40, l_69);
  v_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_38, (ATerm) ATmakeAppl(sym_Defined_2, term_i_40, l_69));
  t = n_13(q_6, t_69, v_69, t);
  t = term_s_33;
  o_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_k_40, l_69);
  s_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_33, (ATerm) ATmakeAppl(sym_Defined_2, term_k_40, l_69));
  t = n_13(r_6, o_69, s_69, t);
  t = l_69;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_p_38;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_u_38;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
  e_70 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_o_38, e_70);
  h_70 = t;
  t = term_m_40;
  i_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_o_38, e_70), term_m_40);
  t = n_13(s_6, h_70, i_70, t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_t_38, e_70);
  f_70 = t;
  t = term_o_40;
  g_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_t_38, e_70), term_o_40);
  t = n_13(t_6, f_70, g_70, t);
  t = e_70;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm z_70 = NULL,h_71 = NULL,i_71 = NULL;
  z_70 = t;
  t = term_p_40;
  h_71 = t;
  t = (ATerm) ATinsert(ATempty, term_q_40);
  i_71 = t;
  t = SSL_printnl(h_71, i_71);
  t = z_70;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm s_40 = t;
  int t_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      LocalPopChoice(t_40);
    }
  else
    {
      t = s_40;
      {
        ATerm u_40 = t;
        int w_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            LocalPopChoice(w_40);
          }
        else
          {
            t = u_40;
            {
              ATerm o_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  o_71 = ATgetArgument(t, 0);
                  r_71 = ATgetArgument(t, 1);
                  s_71 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = o_71;
              if(match_cons(t, sym_SVar_1))
                {
                  q_71 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_71;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = r_71;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_71;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_d_27;
            }
          }
      }
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm x_40 = ATgetArgument(t, 0);
      if(match_cons(x_40, sym_SVar_1))
        {
          ATerm a_41 = ATgetArgument(x_40, 0);
          if((ATgetSymbol((ATermAppl) a_41) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm y_40 = ATgetArgument(t, 1);
        if(((ATgetType(y_40) != AT_LIST) || !(ATisEmpty(y_40))))
          _fail(t);
      }
      {
        ATerm z_40 = ATgetArgument(t, 2);
        if(((ATgetType(z_40) != AT_LIST) || !(ATisEmpty(z_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL;
  w_71 = t;
  t = term_p_40;
  x_71 = t;
  t = (ATerm) ATinsert(ATempty, term_b_41);
  y_71 = t;
  t = SSL_printnl(x_71, y_71);
  t = w_71;
  return(t);
}
static ATerm k_11 (ATerm s_26, ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL;
  t = if_verbose2_1_0(u_6, t);
  t = new_0_0(t);
  w_70 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_p_39, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_70), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_p_39, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_70), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = s_26;
  t = inline_rules_0_0(t);
  v_70 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_p_39, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, w_70, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_h_33, v_70), (ATerm) ATmakeAppl(sym_CallT_3, term_p_39, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_70), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_d_27))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(w_6, t);
  {
    ATerm e_41 = t;
    if((PushChoice() == 0))
      {
        ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL;
        t = oncetd_1_0(x_6, t);
        t_71 = t;
        t = term_p_40;
        u_71 = t;
        t = (ATerm) ATinsert(ATempty, term_f_41);
        v_71 = t;
        t = SSL_printnl(u_71, v_71);
        t = t_71;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_41;
      }
  }
  t = desugar_0_0(t);
  t = if_verbose1_1_0(y_6, t);
  return(t);
}
ATerm alltd_1_0 (ATerm i_142 (ATerm), ATerm t)
{
  static ATerm z_71 (ATerm t);
  static ATerm z_71 (ATerm t)
  {
    ATerm g_41 = t;
    int h_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_142(t);
        LocalPopChoice(h_41);
      }
    else
      {
        t = g_41;
        t = SRTS_all(z_71, t);
      }
    return(t);
  }
  t = z_71(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm d_73 = NULL,f_73 = NULL,g_73 = NULL;
  d_73 = t;
  t = term_p_40;
  f_73 = t;
  t = (ATerm) ATinsert(ATempty, term_i_41);
  g_73 = t;
  t = SSL_printnl(f_73, g_73);
  t = d_73;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = debug_1_0(c_7, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_j_41;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm u_74 = NULL,v_74 = NULL,w_74 = NULL;
  u_74 = t;
  t = term_p_40;
  v_74 = t;
  t = (ATerm) ATinsert(ATempty, term_k_41);
  w_74 = t;
  t = SSL_printnl(v_74, w_74);
  t = u_74;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm z_72 = NULL,a_73 = NULL;
  a_73 = t;
  t = new_0_0(t);
  z_72 = t;
  {
    ATerm l_41 = t;
    int m_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_p_39, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_72), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(m_41);
      }
    else
      {
        t = l_41;
        t = if_verbose2_1_0(z_6, t);
        _fail(t);
      }
  }
  {
    ATerm p_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL,u_73 = NULL,v_73 = NULL,y_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,m_74 = NULL,n_74 = NULL,s_74 = NULL,t_74 = NULL;
        j_73 = t;
        if(match_cons(t, sym_Seq_2))
          {
            p_73 = ATgetArgument(t, 0);
            i_74 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_73;
        if(match_cons(t, sym_All_1))
          {
            q_73 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_73;
        if(match_cons(t, sym_CallT_3))
          {
            r_73 = ATgetArgument(t, 0);
            v_73 = ATgetArgument(t, 1);
            h_74 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = r_73;
        if(match_cons(t, sym_SVar_1))
          {
            u_73 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_73;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = v_73;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_73 = ATgetFirst((ATermList) t);
            g_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_73;
        if(match_cons(t, sym_CallT_3))
          {
            a_74 = ATgetArgument(t, 0);
            c_74 = ATgetArgument(t, 1);
            f_74 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = a_74;
        if(match_cons(t, sym_SVar_1))
          {
            b_74 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_74;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_74;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_74;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_74;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_74;
        if(match_cons(t, sym_CallT_3))
          {
            m_74 = ATgetArgument(t, 0);
            s_74 = ATgetArgument(t, 1);
            t_74 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = m_74;
        if(match_cons(t, sym_SVar_1))
          {
            n_74 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_74;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_74;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_74;
        if((z_72 != t))
          {
            _fail(t);
          }
        t = n_74;
        if((b_74 != t))
          {
            _fail(t);
          }
        t = j_73;
        LocalPopChoice(q_41);
      }
    else
      {
        t = p_41;
        t = if_verbose1_1_0(b_7, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(d_7, t);
  t = a_73;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm e_80 = NULL,k_80 = NULL,l_80 = NULL;
  e_80 = t;
  t = term_p_40;
  k_80 = t;
  t = (ATerm) ATinsert(ATempty, term_u_41);
  l_80 = t;
  t = SSL_printnl(k_80, l_80);
  t = e_80;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = debug_1_0(g_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_b_42;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm b_87 = NULL,f_87 = NULL,h_87 = NULL;
  b_87 = t;
  t = term_p_40;
  f_87 = t;
  t = (ATerm) ATinsert(ATempty, term_c_42);
  h_87 = t;
  t = SSL_printnl(f_87, h_87);
  t = b_87;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm c_80 = NULL,d_80 = NULL;
  d_80 = t;
  t = new_0_0(t);
  c_80 = t;
  {
    ATerm g_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_42, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_80), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(h_42);
      }
    else
      {
        t = g_42;
        t = if_verbose2_1_0(e_7, t);
        _fail(t);
      }
  }
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_80 = NULL,n_80 = NULL,u_80 = NULL,v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,f_81 = NULL,g_81 = NULL,q_81 = NULL,y_81 = NULL,c_82 = NULL,e_82 = NULL,m_82 = NULL,n_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL,g_83 = NULL,r_83 = NULL,u_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL,r_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,d_85 = NULL,k_85 = NULL,l_85 = NULL,o_85 = NULL,p_85 = NULL,w_85 = NULL,d_86 = NULL,f_86 = NULL;
        x_82 = t;
        if(match_cons(t, sym_CallT_3))
          {
            g_83 = ATgetArgument(t, 0);
            u_83 = ATgetArgument(t, 1);
            f_86 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = g_83;
        if(match_cons(t, sym_SVar_1))
          {
            r_83 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_83;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = u_83;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_83 = ATgetFirst((ATermList) t);
            d_86 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_83;
        if(match_cons(t, sym_CallT_3))
          {
            z_83 = ATgetArgument(t, 0);
            a_84 = ATgetArgument(t, 1);
            n_80 = ATgetArgument(t, 2);
            t = z_83;
            if(match_cons(t, sym_SVar_1))
              {
                m_80 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_80;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
              _fail(t);
            t = a_84;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_84 = ATgetFirst((ATermList) t);
                w_85 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_84;
            if(match_cons(t, sym_Seq_2))
              {
                l_84 = ATgetArgument(t, 0);
                q_84 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_84;
            if(match_cons(t, sym_CallT_3))
              {
                m_84 = ATgetArgument(t, 0);
                o_84 = ATgetArgument(t, 1);
                p_84 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = m_84;
            if(match_cons(t, sym_SVar_1))
              {
                n_84 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = o_84;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = p_84;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = q_84;
            if(match_cons(t, sym_CallT_3))
              {
                r_84 = ATgetArgument(t, 0);
                v_84 = ATgetArgument(t, 1);
                p_85 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = r_84;
            if(match_cons(t, sym_SVar_1))
              {
                u_84 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = u_84;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
              _fail(t);
            t = v_84;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_84 = ATgetFirst((ATermList) t);
                o_85 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_84;
            if(match_cons(t, sym_CallT_3))
              {
                x_84 = ATgetArgument(t, 0);
                k_85 = ATgetArgument(t, 1);
                l_85 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = x_84;
            if(match_cons(t, sym_SVar_1))
              {
                d_85 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = k_85;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_85;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = o_85;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = p_85;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = w_85;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = n_80;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = d_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = n_84;
            if((c_80 != t))
              {
                _fail(t);
              }
            t = d_85;
            if((n_84 != t))
              {
                _fail(t);
              }
            t = x_82;
          }
        else
          {
            if(match_cons(t, sym_Rec_2))
              {
                z_83 = ATgetArgument(t, 0);
                a_84 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_84;
            if(match_cons(t, sym_CallT_3))
              {
                k_84 = ATgetArgument(t, 0);
                w_85 = ATgetArgument(t, 1);
                w_82 = ATgetArgument(t, 2);
                t = k_84;
                if(match_cons(t, sym_SVar_1))
                  {
                    l_84 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = l_84;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                  _fail(t);
                t = w_85;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_80 = ATgetFirst((ATermList) t);
                    v_82 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = u_80;
                if(match_cons(t, sym_Seq_2))
                  {
                    v_80 = ATgetArgument(t, 0);
                    f_81 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_80;
                if(match_cons(t, sym_CallT_3))
                  {
                    w_80 = ATgetArgument(t, 0);
                    y_80 = ATgetArgument(t, 1);
                    z_80 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = w_80;
                if(match_cons(t, sym_SVar_1))
                  {
                    x_80 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = y_80;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_80;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_81;
                if(match_cons(t, sym_CallT_3))
                  {
                    g_81 = ATgetArgument(t, 0);
                    y_81 = ATgetArgument(t, 1);
                    u_82 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = g_81;
                if(match_cons(t, sym_SVar_1))
                  {
                    q_81 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = q_81;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = y_81;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    c_82 = ATgetFirst((ATermList) t);
                    t_82 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = c_82;
                if(match_cons(t, sym_CallT_3))
                  {
                    e_82 = ATgetArgument(t, 0);
                    n_82 = ATgetArgument(t, 1);
                    s_82 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = e_82;
                if(match_cons(t, sym_SVar_1))
                  {
                    m_82 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = n_82;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_82;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_82;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = u_82;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_82;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_82;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_80;
                if((c_80 != t))
                  {
                    _fail(t);
                  }
                t = m_82;
                if((z_83 != t))
                  {
                    _fail(t);
                  }
                t = x_82;
              }
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    k_84 = ATgetArgument(t, 0);
                    w_85 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_84;
                if(match_cons(t, sym_Seq_2))
                  {
                    l_84 = ATgetArgument(t, 0);
                    q_84 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_84;
                if(match_cons(t, sym_CallT_3))
                  {
                    m_84 = ATgetArgument(t, 0);
                    o_84 = ATgetArgument(t, 1);
                    p_84 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = m_84;
                if(match_cons(t, sym_SVar_1))
                  {
                    n_84 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = o_84;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_84;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_84;
                if(match_cons(t, sym_CallT_3))
                  {
                    r_84 = ATgetArgument(t, 0);
                    v_84 = ATgetArgument(t, 1);
                    p_85 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = r_84;
                if(match_cons(t, sym_SVar_1))
                  {
                    u_84 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = u_84;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = v_84;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    w_84 = ATgetFirst((ATermList) t);
                    o_85 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = w_84;
                if(match_cons(t, sym_CallT_3))
                  {
                    x_84 = ATgetArgument(t, 0);
                    k_85 = ATgetArgument(t, 1);
                    l_85 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = x_84;
                if(match_cons(t, sym_SVar_1))
                  {
                    d_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = k_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = o_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_85;
                if(!(match_cons(t, sym_Id_0)))
                  _fail(t);
                t = d_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_84;
                if((c_80 != t))
                  {
                    _fail(t);
                  }
                t = d_85;
                if((z_83 != t))
                  {
                    _fail(t);
                  }
                t = x_82;
              }
          }
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = if_verbose1_1_0(f_7, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(h_7, t);
  t = d_80;
  return(t);
}
ATerm debug_1_0 (ATerm q_149 (ATerm), ATerm t)
{
  ATerm k_87 = NULL,l_87 = NULL,n_87 = NULL,p_87 = NULL;
  k_87 = t;
  t = q_149(t);
  l_87 = t;
  t = term_p_40;
  n_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_87), l_87);
  p_87 = t;
  t = SSL_printnl(n_87, p_87);
  t = k_87;
  return(t);
}
ATerm topdown_1_0 (ATerm q_140 (ATerm), ATerm t)
{
  static ATerm i_7 (ATerm t);
  static ATerm i_7 (ATerm t)
  {
    t = topdown_1_0(q_140, t);
    return(t);
  }
  t = q_140(t);
  t = SRTS_all(i_7, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm m_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm o_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(n_42);
      {
        ATerm b_88 = NULL,g_88 = NULL;
        b_88 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm p_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        g_88 = t;
        t = SSLgetAnnotations(b_88);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_42 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) q_42) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm r_42 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(r_42) != AT_LIST) || !(ATisEmpty(r_42))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = g_88;
      }
    }
  else
    {
      t = m_42;
      {
        ATerm s_42 = t;
        int u_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm v_42 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) v_42) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm w_42 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(u_42);
            _fail(t);
          }
        else
          {
            t = s_42;
          }
      }
    }
  return(t);
}
static ATerm m_11 (ATerm c_85, ATerm b_85, ATerm t)
{
  t = c_85;
  t = topdown_1_0(j_7, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, c_85);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm c_89 = NULL,d_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_89 = ATgetArgument(t, 0);
      m_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_89;
  if(match_cons(t, sym_Match_1))
    {
      j_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_89;
  if(match_cons(t, sym_Var_1))
    {
      k_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_89;
  if(match_cons(t, sym_Seq_2))
    {
      n_89 = ATgetArgument(t, 0);
      d_89 = ATgetArgument(t, 1);
      t = n_89;
      if(match_cons(t, sym_Build_1))
        {
          o_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_89;
      if(match_cons(t, sym_Var_1))
        {
          c_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_89;
      if((k_89 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_89)), d_89);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          n_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_89;
      if(match_cons(t, sym_Var_1))
        {
          o_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_89;
      if((k_89 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_89));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm c_90 = NULL,d_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL,i_90 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_90 = ATgetArgument(t, 0);
      h_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_90;
  if(match_cons(t, sym_Build_1))
    {
      g_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_90;
  if(match_cons(t, sym_Seq_2))
    {
      i_90 = ATgetArgument(t, 0);
      d_90 = ATgetArgument(t, 1);
      t = i_90;
      if(match_cons(t, sym_Match_1))
        {
          c_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_90;
      if((g_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_90), d_90);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          i_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_90;
      if((g_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, g_90);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL,t_90 = NULL,u_90 = NULL,v_90 = NULL,w_90 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      t_90 = ATgetArgument(t, 0);
      v_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_90;
  if(match_cons(t, sym_Match_1))
    {
      u_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_90;
  if(match_cons(t, sym_Seq_2))
    {
      w_90 = ATgetArgument(t, 0);
      r_90 = ATgetArgument(t, 1);
      t = w_90;
      if(match_cons(t, sym_Match_1))
        {
          q_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_90;
      if((u_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_90), r_90);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          w_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_90;
      if((u_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, u_90);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm k_91 = NULL,l_91 = NULL,m_91 = NULL,q_91 = NULL,s_91 = NULL,u_91 = NULL,v_91 = NULL,w_91 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_91 = ATgetArgument(t, 0);
      s_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_91;
  if(match_cons(t, sym_Build_1))
    {
      ATerm z_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_91;
  if(match_cons(t, sym_Seq_2))
    {
      u_91 = ATgetArgument(t, 0);
      v_91 = ATgetArgument(t, 1);
      t = u_91;
      if(match_cons(t, sym_PrimT_3))
        {
          k_91 = ATgetArgument(t, 0);
          l_91 = ATgetArgument(t, 1);
          m_91 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, k_91, l_91, m_91), v_91);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          u_91 = ATgetArgument(t, 0);
          v_91 = ATgetArgument(t, 1);
          w_91 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, u_91, v_91, w_91);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm t_92 = NULL,u_92 = NULL,y_92 = NULL,a_93 = NULL,b_93 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_92 = ATgetArgument(t, 0);
      a_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_92;
  if(match_cons(t, sym_Build_1))
    {
      ATerm c_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_93;
  if(match_cons(t, sym_Seq_2))
    {
      b_93 = ATgetArgument(t, 0);
      u_92 = ATgetArgument(t, 1);
      t = b_93;
      if(match_cons(t, sym_Build_1))
        {
          t_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_92), u_92);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          b_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, b_93);
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_43 = ATgetArgument(t, 0);
      if(((ATgetType(d_43) != AT_LIST) || !(ATisEmpty(d_43))))
        _fail(t);
      {
        ATerm g_43 = ATgetArgument(t, 1);
        if(((ATgetType(g_43) != AT_LIST) || !(ATisEmpty(g_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_43 = ATgetArgument(t, 0);
      if(((ATgetType(h_43) == AT_LIST) && !(ATisEmpty(h_43))))
        {
          v_94 = ATgetFirst((ATermList) h_43);
          w_94 = (ATerm) ATgetNext((ATermList) h_43);
        }
      else
        _fail(t);
      {
        ATerm q_43 = ATgetArgument(t, 1);
        if(((ATgetType(q_43) == AT_LIST) && !(ATisEmpty(q_43))))
          {
            x_94 = ATgetFirst((ATermList) q_43);
            y_94 = (ATerm) ATgetNext((ATermList) q_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_94, x_94), (ATerm) ATmakeAppl(sym__2, w_94, y_94));
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm z_94 = NULL,f_95 = NULL;
  if(match_cons(t, sym__2))
    {
      z_94 = ATgetArgument(t, 0);
      f_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_95), z_94);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm g_95 = NULL,i_95 = NULL;
  if(match_cons(t, sym__2))
    {
      g_95 = ATgetArgument(t, 0);
      i_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_95), (ATerm) ATmakeAppl(sym_Match_1, i_95));
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_43 = ATgetArgument(t, 0);
      if(((ATgetType(v_43) != AT_LIST) || !(ATisEmpty(v_43))))
        _fail(t);
      {
        ATerm y_43 = ATgetArgument(t, 1);
        if(((ATgetType(y_43) != AT_LIST) || !(ATisEmpty(y_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm x_95 = NULL,z_95 = NULL,a_96 = NULL,d_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_44 = ATgetArgument(t, 0);
      if(((ATgetType(a_44) == AT_LIST) && !(ATisEmpty(a_44))))
        {
          x_95 = ATgetFirst((ATermList) a_44);
          z_95 = (ATerm) ATgetNext((ATermList) a_44);
        }
      else
        _fail(t);
      {
        ATerm e_44 = ATgetArgument(t, 1);
        if(((ATgetType(e_44) == AT_LIST) && !(ATisEmpty(e_44))))
          {
            a_96 = ATgetFirst((ATermList) e_44);
            d_96 = (ATerm) ATgetNext((ATermList) e_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_95, a_96), (ATerm) ATmakeAppl(sym__2, z_95, d_96));
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm i_96 = NULL,j_96 = NULL;
  if(match_cons(t, sym__2))
    {
      i_96 = ATgetArgument(t, 0);
      j_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_96), i_96);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm b_97 = NULL,c_97 = NULL;
  if(match_cons(t, sym__2))
    {
      b_97 = ATgetArgument(t, 0);
      c_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_97), (ATerm) ATmakeAppl(sym_Match_1, c_97));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm s_93 = NULL,t_93 = NULL,u_93 = NULL,w_93 = NULL,x_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL,h_94 = NULL,i_94 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_93 = ATgetArgument(t, 0);
      b_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_93;
  if(match_cons(t, sym_Build_1))
    {
      x_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_93;
  if(match_cons(t, sym_Op_2))
    {
      z_93 = ATgetArgument(t, 0);
      a_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_94;
  if(match_cons(t, sym_Seq_2))
    {
      c_94 = ATgetArgument(t, 0);
      u_93 = ATgetArgument(t, 1);
      {
        ATerm u_94 = NULL;
        t = c_94;
        if(match_cons(t, sym_Match_1))
          {
            h_94 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_94;
        if(match_cons(t, sym_Op_2))
          {
            s_93 = ATgetArgument(t, 0);
            t_93 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_93;
        if((z_93 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, a_94, t_93);
        t = genzip_4_0(k_7, l_7, m_7, n_7, t);
        u_94 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_94), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_93, a_94)), u_93));
      }
    }
  else
    {
      ATerm w_95 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          c_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_94;
      if(match_cons(t, sym_Op_2))
        {
          h_94 = ATgetArgument(t, 0);
          i_94 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_94;
      if((z_93 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, a_94, i_94);
      t = genzip_4_0(o_7, p_7, r_7, s_7, t);
      w_95 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_95), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, z_93, a_94)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm f_99 = NULL,i_99 = NULL,j_99 = NULL,m_99 = NULL,n_99 = NULL,r_99 = NULL,w_99 = NULL,x_99 = NULL;
  i_99 = t;
  if(match_cons(t, sym_Seq_2))
    {
      j_99 = ATgetArgument(t, 0);
      r_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_99;
  if(match_cons(t, sym_Build_1))
    {
      m_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_99;
  if(match_cons(t, sym_Op_2))
    {
      n_99 = ATgetArgument(t, 0);
      {
        ATerm k_44 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_99;
  {
    ATerm l_44 = t;
    int m_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            w_99 = ATgetArgument(t, 0);
            {
              ATerm o_44 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(m_44);
        t = w_99;
        if(match_cons(t, sym_Match_1))
          {
            x_99 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_99;
        if(match_cons(t, sym_Op_2))
          {
            f_99 = ATgetArgument(t, 0);
            {
              ATerm r_44 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_99, f_99);
        {
          ATerm s_44 = t;
          if((PushChoice() == 0))
            {
              ATerm q_37 = NULL;
              if(match_cons(t, sym__2))
                {
                  q_37 = ATgetArgument(t, 0);
                  if((q_37 != ATgetArgument(t, 1)))
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
              t = s_44;
            }
        }
        t = term_t_44;
      }
    else
      {
        t = l_44;
        if(match_cons(t, sym_Match_1))
          {
            w_99 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_99;
        if(match_cons(t, sym_Op_2))
          {
            x_99 = ATgetArgument(t, 0);
            {
              ATerm u_44 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_99, x_99);
        {
          ATerm a_45 = t;
          if((PushChoice() == 0))
            {
              ATerm f_38 = NULL;
              if(match_cons(t, sym__2))
                {
                  f_38 = ATgetArgument(t, 0);
                  if((f_38 != ATgetArgument(t, 1)))
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
              t = a_45;
            }
        }
        t = term_t_44;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm u_141 (ATerm), ATerm t)
{
  static ATerm h_100 (ATerm t);
  static ATerm h_100 (ATerm t)
  {
    ATerm b_45 = t;
    int c_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_141(t);
        LocalPopChoice(c_45);
      }
    else
      {
        t = b_45;
        t = SRTS_one(h_100, t);
      }
    return(t);
  }
  t = h_100(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm d_102 = NULL,e_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,l_102 = NULL,m_102 = NULL,p_102 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL,g_103 = NULL,h_103 = NULL;
  d_102 = t;
  if(match_cons(t, sym_Let_2))
    {
      e_102 = ATgetArgument(t, 0);
      d_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_103;
  if(match_cons(t, sym_Let_2))
    {
      e_103 = ATgetArgument(t, 0);
      g_103 = ATgetArgument(t, 1);
      {
        ATerm n_103 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, e_102, e_103);
        t = conc_0_0(t);
        n_103 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, n_103, g_103);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          e_103 = ATgetArgument(t, 0);
          g_103 = ATgetArgument(t, 1);
          h_103 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_102;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_102 = ATgetFirst((ATermList) t);
          p_102 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_102;
      if(match_cons(t, sym_SDefT_4))
        {
          i_102 = ATgetArgument(t, 0);
          j_102 = ATgetArgument(t, 1);
          l_102 = ATgetArgument(t, 2);
          m_102 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = j_102;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_102;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_102;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_103;
      if(match_cons(t, sym_SVar_1))
        {
          f_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_103;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_103;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_103;
      if((i_102 != t))
        {
          _fail(t);
        }
      t = m_102;
      {
        ATerm d_45 = t;
        if((PushChoice() == 0))
          {
            static ATerm t_7 (ATerm t);
            static ATerm t_7 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm f_45 = ATgetArgument(t, 0);
                  if(match_cons(f_45, sym_SVar_1))
                    {
                      if((i_102 != ATgetArgument(f_45, 0)))
                        {
                          _fail(ATgetArgument(f_45, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm h_45 = ATgetArgument(t, 1);
                    if(((ATgetType(h_45) != AT_LIST) || !(ATisEmpty(h_45))))
                      _fail(t);
                  }
                  {
                    ATerm j_45 = ATgetArgument(t, 2);
                    if(((ATgetType(j_45) != AT_LIST) || !(ATisEmpty(j_45))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(t_7, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_45;
          }
      }
      t = m_102;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm z_104 = NULL,a_105 = NULL,e_105 = NULL,u_105 = NULL,v_105 = NULL,w_105 = NULL,y_105 = NULL,z_105 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      y_105 = ATgetArgument(t, 0);
      t = y_105;
      if(match_cons(t, sym_Seq_2))
        {
          w_105 = ATgetArgument(t, 0);
          a_105 = ATgetArgument(t, 1);
          t = w_105;
          if(match_cons(t, sym_Where_1))
            {
              z_104 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_105;
          if(match_cons(t, sym_Seq_2))
            {
              e_105 = ATgetArgument(t, 0);
              v_105 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_105;
          if(match_cons(t, sym_Build_1))
            {
              u_105 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, z_104, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_105), v_105)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              w_105 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, w_105);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          y_105 = ATgetArgument(t, 0);
          t = y_105;
          if(match_cons(t, sym_Test_1))
            {
              w_105 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, w_105);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              y_105 = ATgetArgument(t, 0);
              t = y_105;
              if(match_cons(t, sym_Not_1))
                {
                  w_105 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, w_105);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  y_105 = ATgetArgument(t, 0);
                  z_105 = ATgetArgument(t, 1);
                  t = z_105;
                  if((y_105 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      y_105 = ATgetArgument(t, 0);
                      z_105 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = z_105;
                  if((y_105 != t))
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
  ATerm k_109 = NULL,l_109 = NULL,n_109 = NULL,o_109 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      k_109 = ATgetArgument(t, 0);
      o_109 = ATgetArgument(t, 1);
      t = k_109;
      if(match_cons(t, sym_LChoice_2))
        {
          l_109 = ATgetArgument(t, 0);
          n_109 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, l_109, (ATerm) ATmakeAppl(sym_LChoice_2, n_109, o_109));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          k_109 = ATgetArgument(t, 0);
          o_109 = ATgetArgument(t, 1);
          t = k_109;
          if(match_cons(t, sym_Seq_2))
            {
              l_109 = ATgetArgument(t, 0);
              n_109 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, l_109, (ATerm) ATmakeAppl(sym_Seq_2, n_109, o_109));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              k_109 = ATgetArgument(t, 0);
              o_109 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_109;
          if(match_cons(t, sym_Choice_2))
            {
              l_109 = ATgetArgument(t, 0);
              n_109 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, l_109, (ATerm) ATmakeAppl(sym_Choice_2, n_109, o_109));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm s_110 = NULL,t_110 = NULL,v_110 = NULL,z_110 = NULL,b_111 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      z_110 = ATgetArgument(t, 0);
      b_111 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, z_110, b_111);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          z_110 = ATgetArgument(t, 0);
          t = z_110;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_110 = ATgetFirst((ATermList) t);
              t_110 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, s_110, (ATerm) ATmakeAppl(sym_LChoices_1, t_110));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_t_44;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              z_110 = ATgetArgument(t, 0);
              t = z_110;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_110 = ATgetFirst((ATermList) t);
                  t_110 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, s_110, (ATerm) ATmakeAppl(sym_Choices_1, t_110));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_t_44;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  z_110 = ATgetArgument(t, 0);
                  t = z_110;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_110 = ATgetFirst((ATermList) t);
                      t_110 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_110, (ATerm) ATmakeAppl(sym_Seqs_1, t_110));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_d_27;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      z_110 = ATgetArgument(t, 0);
                      b_111 = ATgetArgument(t, 1);
                      v_110 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, b_111, (ATerm) ATmakeAppl(sym_Op_2, term_n_24, (ATerm) ATinsert(ATinsert(ATempty, v_110), z_110)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          z_110 = ATgetArgument(t, 0);
                          b_111 = ATgetArgument(t, 1);
                          v_110 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, v_110)), z_110), (ATerm) ATmakeAppl(sym_Build_1, b_111)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              z_110 = ATgetArgument(t, 0);
                              b_111 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_110, (ATerm) ATmakeAppl(sym_Match_1, b_111));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  z_110 = ATgetArgument(t, 0);
                                  b_111 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_110), b_111);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      z_110 = ATgetArgument(t, 0);
                                      b_111 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_111), z_110);
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
static ATerm u_7 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm j_116 = NULL,k_116 = NULL,l_116 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      j_116 = ATgetArgument(t, 0);
      t = j_116;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_t_44;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          j_116 = ATgetArgument(t, 0);
          t = j_116;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_d_27;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              j_116 = ATgetArgument(t, 0);
              k_116 = ATgetArgument(t, 1);
              t = j_116;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_t_44;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  j_116 = ATgetArgument(t, 0);
                  k_116 = ATgetArgument(t, 1);
                  t = k_116;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_t_44;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      j_116 = ATgetArgument(t, 0);
                      k_116 = ATgetArgument(t, 1);
                      t = k_116;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_t_44;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          j_116 = ATgetArgument(t, 0);
                          t = j_116;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_t_44;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              j_116 = ATgetArgument(t, 0);
                              t = j_116;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_t_44;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  j_116 = ATgetArgument(t, 0);
                                  k_116 = ATgetArgument(t, 1);
                                  t = k_116;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_t_44;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      j_116 = ATgetArgument(t, 0);
                                      k_116 = ATgetArgument(t, 1);
                                      t = k_116;
                                      t = fetch_1_0(u_7, t);
                                      t = term_t_44;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          j_116 = ATgetArgument(t, 0);
                                          k_116 = ATgetArgument(t, 1);
                                          t = k_116;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = j_116;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = k_116;
                                                }
                                              else
                                                {
                                                  t = j_116;
                                                }
                                            }
                                          else
                                            {
                                              t = j_116;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = k_116;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              j_116 = ATgetArgument(t, 0);
                                              k_116 = ATgetArgument(t, 1);
                                              t = k_116;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = j_116;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = k_116;
                                                    }
                                                  else
                                                    {
                                                      t = j_116;
                                                    }
                                                }
                                              else
                                                {
                                                  t = j_116;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = k_116;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  j_116 = ATgetArgument(t, 0);
                                                  t = j_116;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_t_44;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      j_116 = ATgetArgument(t, 0);
                                                      k_116 = ATgetArgument(t, 1);
                                                      l_116 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = l_116;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_116, k_116);
                                                }
                                            }
                                        }
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
  ATerm w_117 = NULL,a_118 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      a_118 = ATgetArgument(t, 0);
      t = a_118;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_d_27;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          a_118 = ATgetArgument(t, 0);
          t = a_118;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_t_44;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              a_118 = ATgetArgument(t, 0);
              w_117 = ATgetArgument(t, 1);
              t = w_117;
              if(match_cons(t, sym_Id_0))
                {
                  t = a_118;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = w_117;
                    }
                  else
                    {
                      t = a_118;
                    }
                }
              else
                {
                  t = a_118;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = w_117;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  a_118 = ATgetArgument(t, 0);
                  w_117 = ATgetArgument(t, 1);
                  t = a_118;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_d_27;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      a_118 = ATgetArgument(t, 0);
                      w_117 = ATgetArgument(t, 1);
                      t = w_117;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_d_27;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          a_118 = ATgetArgument(t, 0);
                          w_117 = ATgetArgument(t, 1);
                          t = w_117;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_d_27;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              a_118 = ATgetArgument(t, 0);
                              t = a_118;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_d_27;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  a_118 = ATgetArgument(t, 0);
                                  t = a_118;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_d_27;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      a_118 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_118;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_d_27;
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
  ATerm k_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(m_45);
    }
  else
    {
      t = k_45;
      {
        ATerm o_45 = t;
        int r_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(r_45);
          }
        else
          {
            t = o_45;
            {
              ATerm c_46 = t;
              int e_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(e_46);
                }
              else
                {
                  t = c_46;
                  {
                    ATerm h_46 = t;
                    int j_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(j_46);
                      }
                    else
                      {
                        t = h_46;
                        {
                          ATerm l_46 = t;
                          int m_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
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
                                    ATerm t_118 = NULL,u_118 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        t_118 = ATgetArgument(t, 0);
                                        u_118 = ATgetArgument(t, 1);
                                        t = t_118;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = u_118;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            t_118 = ATgetArgument(t, 0);
                                            u_118 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = t_118;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = u_118;
                                      }
                                    LocalPopChoice(o_46);
                                  }
                                else
                                  {
                                    t = n_46;
                                    {
                                      ATerm q_46 = t;
                                      int s_46 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(s_46);
                                        }
                                      else
                                        {
                                          t = q_46;
                                          {
                                            ATerm u_46 = t;
                                            int v_46 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(v_46);
                                              }
                                            else
                                              {
                                                t = u_46;
                                                {
                                                  ATerm w_46 = t;
                                                  int x_46 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(x_46);
                                                    }
                                                  else
                                                    {
                                                      t = w_46;
                                                      {
                                                        ATerm y_46 = t;
                                                        int a_47 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(a_47);
                                                          }
                                                        else
                                                          {
                                                            t = y_46;
                                                            {
                                                              ATerm b_47 = t;
                                                              int c_47 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(c_47);
                                                                }
                                                              else
                                                                {
                                                                  t = b_47;
                                                                  {
                                                                    ATerm e_47 = t;
                                                                    int h_47 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(h_47);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = e_47;
                                                                        {
                                                                          ATerm i_47 = t;
                                                                          int l_47 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(l_47);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_47;
                                                                              {
                                                                                ATerm o_47 = t;
                                                                                int p_47 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(p_47);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = o_47;
                                                                                    {
                                                                                      ATerm a_119 = NULL,c_119 = NULL,d_119 = NULL,e_119 = NULL;
                                                                                      c_119 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          d_119 = ATgetArgument(t, 0);
                                                                                          e_119 = ATgetArgument(t, 1);
                                                                                          t = d_119;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              a_119 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = c_119;
                                                                                          t = m_11(a_119, e_119, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              d_119 = ATgetArgument(t, 0);
                                                                                              e_119 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = d_119;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = e_119;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2_0 (ATerm d_148 (ATerm), ATerm e_148 (ATerm), ATerm t)
{
  static ATerm q_119 (ATerm t);
  static ATerm q_119 (ATerm t)
  {
    ATerm q_47 = t;
    int s_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_148(t);
        t = q_119(t);
        LocalPopChoice(s_47);
      }
    else
      {
        t = q_47;
        t = e_148(t);
      }
    return(t);
  }
  t = q_119(t);
  return(t);
}
ATerm downup_1_0 (ATerm s_140 (ATerm), ATerm t)
{
  t = s_140(t);
  {
    static ATerm v_7 (ATerm t);
    static ATerm v_7 (ATerm t)
    {
      t = downup_1_0(s_140, t);
      return(t);
    }
    t = SRTS_all(v_7, t);
  }
  t = s_140(t);
  return(t);
}
ATerm genzip_4_0 (ATerm i_158 (ATerm), ATerm j_158 (ATerm), ATerm k_158 (ATerm), ATerm l_158 (ATerm), ATerm t)
{
  static ATerm b_120 (ATerm t);
  static ATerm b_120 (ATerm t)
  {
    ATerm t_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_158(t);
        LocalPopChoice(w_47);
      }
    else
      {
        t = t_47;
        {
          ATerm r_119 = NULL,s_119 = NULL,t_119 = NULL,v_119 = NULL,w_119 = NULL,a_120 = NULL,a_18 = NULL;
          t = j_158(t);
          a_120 = t;
          if(match_cons(t, sym__2))
            {
              s_119 = ATgetArgument(t, 0);
              t_119 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_120);
          r_119 = t;
          t = s_119;
          t = l_158(t);
          v_119 = t;
          t = t_119;
          t = b_120(t);
          w_119 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_119, w_119);
          a_18 = t;
          t = SSLsetAnnotations(a_18, r_119);
          t = k_158(t);
        }
      }
    return(t);
  }
  t = b_120(t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_47 = ATgetArgument(t, 0);
      if(((ATgetType(z_47) != AT_LIST) || !(ATisEmpty(z_47))))
        _fail(t);
      {
        ATerm a_48 = ATgetArgument(t, 1);
        if(((ATgetType(a_48) != AT_LIST) || !(ATisEmpty(a_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm x_120 = NULL,y_120 = NULL,z_120 = NULL,a_121 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_48 = ATgetArgument(t, 0);
      if(((ATgetType(e_48) == AT_LIST) && !(ATisEmpty(e_48))))
        {
          x_120 = ATgetFirst((ATermList) e_48);
          y_120 = (ATerm) ATgetNext((ATermList) e_48);
        }
      else
        _fail(t);
      {
        ATerm j_48 = ATgetArgument(t, 1);
        if(((ATgetType(j_48) == AT_LIST) && !(ATisEmpty(j_48))))
          {
            z_120 = ATgetFirst((ATermList) j_48);
            a_121 = (ATerm) ATgetNext((ATermList) j_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_120, z_120), (ATerm) ATmakeAppl(sym__2, y_120, a_121));
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm b_121 = NULL,c_121 = NULL;
  if(match_cons(t, sym__2))
    {
      b_121 = ATgetArgument(t, 0);
      c_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_121), b_121);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm k_120 = NULL,m_120 = NULL,o_120 = NULL,p_120 = NULL;
  k_120 = t;
  {
    ATerm l_48 = t;
    int o_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_48 = ATgetArgument(t, 0);
            ATerm t_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(o_48);
        t = k_120;
      }
    else
      {
        t = l_48;
        {
          ATerm w_120 = NULL;
          if(match_cons(t, sym__3))
            {
              m_120 = ATgetArgument(t, 0);
              o_120 = ATgetArgument(t, 1);
              p_120 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, m_120, o_120);
          t = genzip_4_0(w_7, x_7, y_7, _id, t);
          w_120 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_120, p_120);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm z_173 (ATerm), ATerm a_174 (ATerm), ATerm t)
{
  ATerm e_121 = NULL,f_121 = NULL;
  static ATerm b_8 (ATerm t);
  static ATerm b_8 (ATerm t)
  {
    ATerm v_38 = NULL;
    t = z_173(t);
    v_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_38, not_null(f_121));
    t = lookup_0_0(t);
    t = a_174(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((f_121 != NULL) && (f_121 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        f_121 = ATgetArgument(t, 0);
      e_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_121;
  t = alltd_1_0(b_8, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_48 = ATgetArgument(t, 0);
      if(((ATgetType(u_48) != AT_LIST) || !(ATisEmpty(u_48))))
        _fail(t);
      {
        ATerm v_48 = ATgetArgument(t, 1);
        if(((ATgetType(v_48) != AT_LIST) || !(ATisEmpty(v_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm i_39 = NULL,l_39 = NULL,s_39 = NULL,t_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_49 = ATgetArgument(t, 0);
      if(((ATgetType(b_49) == AT_LIST) && !(ATisEmpty(b_49))))
        {
          i_39 = ATgetFirst((ATermList) b_49);
          l_39 = (ATerm) ATgetNext((ATermList) b_49);
        }
      else
        _fail(t);
      {
        ATerm c_49 = ATgetArgument(t, 1);
        if(((ATgetType(c_49) == AT_LIST) && !(ATisEmpty(c_49))))
          {
            s_39 = ATgetFirst((ATermList) c_49);
            t_39 = (ATerm) ATgetNext((ATermList) c_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_39, s_39), (ATerm) ATmakeAppl(sym__2, l_39, t_39));
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm x_39 = NULL,e_40 = NULL;
  if(match_cons(t, sym__2))
    {
      x_39 = ATgetArgument(t, 0);
      e_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_40), x_39);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm j_40 = NULL,r_40 = NULL,v_40 = NULL,c_41 = NULL,d_41 = NULL;
  if(match_cons(t, sym__2))
    {
      j_40 = ATgetArgument(t, 0);
      d_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_40;
  {
    ATerm d_49 = t;
    int e_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm f_49 = ATgetArgument(t, 0);
            r_40 = ATgetArgument(t, 1);
            v_40 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(e_49);
        t = (ATerm) ATmakeAppl(sym_SDef_3, d_41, r_40, v_40);
      }
    else
      {
        t = d_49;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm g_49 = ATgetArgument(t, 0);
            r_40 = ATgetArgument(t, 1);
            v_40 = ATgetArgument(t, 2);
            c_41 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_41, r_40, v_40, c_41);
      }
  }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_49 = ATgetArgument(t, 0);
      if(((ATgetType(h_49) != AT_LIST) || !(ATisEmpty(h_49))))
        _fail(t);
      {
        ATerm i_49 = ATgetArgument(t, 1);
        if(((ATgetType(i_49) != AT_LIST) || !(ATisEmpty(i_49))))
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
  ATerm i_43 = NULL,l_43 = NULL,m_43 = NULL,s_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_49 = ATgetArgument(t, 0);
      if(((ATgetType(j_49) == AT_LIST) && !(ATisEmpty(j_49))))
        {
          i_43 = ATgetFirst((ATermList) j_49);
          l_43 = (ATerm) ATgetNext((ATermList) j_49);
        }
      else
        _fail(t);
      {
        ATerm k_49 = ATgetArgument(t, 1);
        if(((ATgetType(k_49) == AT_LIST) && !(ATisEmpty(k_49))))
          {
            m_43 = ATgetFirst((ATermList) k_49);
            s_43 = (ATerm) ATgetNext((ATermList) k_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_43, m_43), (ATerm) ATmakeAppl(sym__2, l_43, s_43));
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL;
  if(match_cons(t, sym__2))
    {
      w_43 = ATgetArgument(t, 0);
      x_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_43), w_43);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm z_43 = NULL,b_44 = NULL,c_44 = NULL;
  if(match_cons(t, sym__2))
    {
      z_43 = ATgetArgument(t, 0);
      c_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_43;
  {
    ATerm l_49 = t;
    int m_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm o_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_49);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_44);
      }
    else
      {
        t = l_49;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm p_49 = ATgetArgument(t, 0);
            b_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_44, b_44);
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
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
static ATerm o_8 (ATerm t)
{
  ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,w_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_50 = ATgetArgument(t, 0);
      if(((ATgetType(d_50) == AT_LIST) && !(ATisEmpty(d_50))))
        {
          s_45 = ATgetFirst((ATermList) d_50);
          t_45 = (ATerm) ATgetNext((ATermList) d_50);
        }
      else
        _fail(t);
      {
        ATerm f_50 = ATgetArgument(t, 1);
        if(((ATgetType(f_50) == AT_LIST) && !(ATisEmpty(f_50))))
          {
            u_45 = ATgetFirst((ATermList) f_50);
            w_45 = (ATerm) ATgetNext((ATermList) f_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_45, u_45), (ATerm) ATmakeAppl(sym__2, t_45, w_45));
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm z_45 = NULL,b_46 = NULL;
  if(match_cons(t, sym__2))
    {
      z_45 = ATgetArgument(t, 0);
      b_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_46), z_45);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm d_46 = NULL,f_46 = NULL,g_46 = NULL;
  if(match_cons(t, sym__2))
    {
      d_46 = ATgetArgument(t, 0);
      g_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_46;
  {
    ATerm i_50 = t;
    int j_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm k_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_50);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_46);
      }
    else
      {
        t = i_50;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm l_50 = ATgetArgument(t, 0);
            f_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_46, f_46);
      }
  }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_50 = ATgetArgument(t, 0);
      if(((ATgetType(m_50) != AT_LIST) || !(ATisEmpty(m_50))))
        _fail(t);
      {
        ATerm n_50 = ATgetArgument(t, 1);
        if(((ATgetType(n_50) != AT_LIST) || !(ATisEmpty(n_50))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm c_48 = NULL,g_48 = NULL,h_48 = NULL,i_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_50 = ATgetArgument(t, 0);
      if(((ATgetType(o_50) == AT_LIST) && !(ATisEmpty(o_50))))
        {
          c_48 = ATgetFirst((ATermList) o_50);
          g_48 = (ATerm) ATgetNext((ATermList) o_50);
        }
      else
        _fail(t);
      {
        ATerm p_50 = ATgetArgument(t, 1);
        if(((ATgetType(p_50) == AT_LIST) && !(ATisEmpty(p_50))))
          {
            h_48 = ATgetFirst((ATermList) p_50);
            i_48 = (ATerm) ATgetNext((ATermList) p_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_48, h_48), (ATerm) ATmakeAppl(sym__2, g_48, i_48));
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm k_48 = NULL,p_48 = NULL;
  if(match_cons(t, sym__2))
    {
      k_48 = ATgetArgument(t, 0);
      p_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_48), k_48);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm s_48 = NULL,y_48 = NULL,a_49 = NULL;
  if(match_cons(t, sym__2))
    {
      s_48 = ATgetArgument(t, 0);
      a_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_48;
  {
    ATerm q_50 = t;
    int r_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm s_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(r_50);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_49);
      }
    else
      {
        t = q_50;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm t_50 = ATgetArgument(t, 0);
            y_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, a_49, y_48);
      }
  }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_50 = ATgetArgument(t, 0);
      if(((ATgetType(u_50) != AT_LIST) || !(ATisEmpty(u_50))))
        _fail(t);
      {
        ATerm v_50 = ATgetArgument(t, 1);
        if(((ATgetType(v_50) != AT_LIST) || !(ATisEmpty(v_50))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm v_49 = NULL,w_49 = NULL,x_49 = NULL,a_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_50 = ATgetArgument(t, 0);
      if(((ATgetType(w_50) == AT_LIST) && !(ATisEmpty(w_50))))
        {
          v_49 = ATgetFirst((ATermList) w_50);
          w_49 = (ATerm) ATgetNext((ATermList) w_50);
        }
      else
        _fail(t);
      {
        ATerm x_50 = ATgetArgument(t, 1);
        if(((ATgetType(x_50) == AT_LIST) && !(ATisEmpty(x_50))))
          {
            x_49 = ATgetFirst((ATermList) x_50);
            a_50 = (ATerm) ATgetNext((ATermList) x_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_49, x_49), (ATerm) ATmakeAppl(sym__2, w_49, a_50));
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm b_50 = NULL,c_50 = NULL;
  if(match_cons(t, sym__2))
    {
      b_50 = ATgetArgument(t, 0);
      c_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_50), b_50);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm e_50 = NULL,g_50 = NULL,h_50 = NULL;
  if(match_cons(t, sym__2))
    {
      e_50 = ATgetArgument(t, 0);
      h_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_50;
  {
    ATerm y_50 = t;
    int z_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm a_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_50);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_50);
      }
    else
      {
        t = y_50;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm b_51 = ATgetArgument(t, 0);
            g_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_50, g_50);
      }
  }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_51 = ATgetArgument(t, 0);
      if(((ATgetType(c_51) != AT_LIST) || !(ATisEmpty(c_51))))
        _fail(t);
      {
        ATerm d_51 = ATgetArgument(t, 1);
        if(((ATgetType(d_51) != AT_LIST) || !(ATisEmpty(d_51))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL,h_128 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_51 = ATgetArgument(t, 0);
      if(((ATgetType(e_51) == AT_LIST) && !(ATisEmpty(e_51))))
        {
          e_128 = ATgetFirst((ATermList) e_51);
          f_128 = (ATerm) ATgetNext((ATermList) e_51);
        }
      else
        _fail(t);
      {
        ATerm f_51 = ATgetArgument(t, 1);
        if(((ATgetType(f_51) == AT_LIST) && !(ATisEmpty(f_51))))
          {
            g_128 = ATgetFirst((ATermList) f_51);
            h_128 = (ATerm) ATgetNext((ATermList) f_51);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_128, g_128), (ATerm) ATmakeAppl(sym__2, f_128, h_128));
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm i_128 = NULL,j_128 = NULL;
  if(match_cons(t, sym__2))
    {
      i_128 = ATgetArgument(t, 0);
      j_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_128), i_128);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm l_128 = NULL,n_128 = NULL,o_128 = NULL;
  if(match_cons(t, sym__2))
    {
      l_128 = ATgetArgument(t, 0);
      o_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_128;
  {
    ATerm g_51 = t;
    int h_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(h_51);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_128);
      }
    else
      {
        t = g_51;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_51 = ATgetArgument(t, 0);
            n_128 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_128, n_128);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm z_179 (ATerm), ATerm t)
{
  ATerm m_51 = t;
  int n_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_127 = NULL,x_127 = NULL,y_127 = NULL,z_127 = NULL,a_128 = NULL;
      x_127 = t;
      if(match_cons(t, sym_Let_2))
        {
          y_127 = ATgetArgument(t, 0);
          z_127 = ATgetArgument(t, 1);
          {
            ATerm c_39 = NULL,f_39 = NULL,g_39 = NULL,c_18 = NULL;
            t = SSLgetAnnotations(x_127);
            c_39 = t;
            t = y_127;
            t = z_179(t);
            g_39 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_127, g_39);
            t = genzip_4_0(d_8, e_8, g_8, h_8, t);
            f_39 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, f_39, z_127);
            c_18 = t;
            t = SSLsetAnnotations(c_18, c_39);
          }
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              y_127 = ATgetArgument(t, 0);
              z_127 = ATgetArgument(t, 1);
              a_128 = ATgetArgument(t, 2);
              {
                ATerm t_42 = NULL,x_42 = NULL,y_42 = NULL,f_18 = NULL;
                t = SSLgetAnnotations(x_127);
                t_42 = t;
                t = z_127;
                t = z_179(t);
                y_42 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_127, y_42);
                t = genzip_4_0(i_8, j_8, l_8, m_8, t);
                x_42 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, y_127, x_42, a_128);
                f_18 = t;
                t = SSLsetAnnotations(f_18, t_42);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  y_127 = ATgetArgument(t, 0);
                  z_127 = ATgetArgument(t, 1);
                  a_128 = ATgetArgument(t, 2);
                  w_127 = ATgetArgument(t, 3);
                  {
                    ATerm i_45 = NULL,p_45 = NULL,q_45 = NULL,g_18 = NULL;
                    t = SSLgetAnnotations(x_127);
                    i_45 = t;
                    t = z_127;
                    t = z_179(t);
                    q_45 = t;
                    t = (ATerm) ATmakeAppl(sym__2, z_127, q_45);
                    t = genzip_4_0(n_8, o_8, p_8, q_8, t);
                    p_45 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, y_127, p_45, a_128, w_127);
                    g_18 = t;
                    t = SSLsetAnnotations(g_18, i_45);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      y_127 = ATgetArgument(t, 0);
                      z_127 = ATgetArgument(t, 1);
                      a_128 = ATgetArgument(t, 2);
                      w_127 = ATgetArgument(t, 3);
                      {
                        ATerm d_47 = NULL,r_47 = NULL,u_47 = NULL,j_18 = NULL;
                        t = SSLgetAnnotations(x_127);
                        d_47 = t;
                        t = z_127;
                        t = z_179(t);
                        u_47 = t;
                        t = (ATerm) ATmakeAppl(sym__2, z_127, u_47);
                        t = genzip_4_0(s_8, u_8, v_8, x_8, t);
                        r_47 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, y_127, r_47, a_128, w_127);
                        j_18 = t;
                        t = SSLsetAnnotations(j_18, d_47);
                      }
                    }
                  else
                    {
                      ATerm n_49 = NULL,s_49 = NULL,t_49 = NULL,n_18 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          y_127 = ATgetArgument(t, 0);
                          z_127 = ATgetArgument(t, 1);
                          a_128 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(x_127);
                      n_49 = t;
                      t = z_127;
                      t = z_179(t);
                      t_49 = t;
                      t = (ATerm) ATmakeAppl(sym__2, z_127, t_49);
                      t = genzip_4_0(z_8, a_9, c_9, d_9, t);
                      s_49 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, y_127, s_49, a_128);
                      n_18 = t;
                      t = SSLsetAnnotations(n_18, n_49);
                    }
                }
            }
        }
      LocalPopChoice(n_51);
    }
  else
    {
      t = m_51;
      {
        ATerm o_51 = t;
        int p_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_9 (ATerm t);
            static ATerm e_9 (ATerm t)
            {
              ATerm c_128 = NULL,d_128 = NULL;
              d_128 = t;
              t = z_179(t);
              c_128 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_128, c_128);
              t = genzip_4_0(f_9, g_9, h_9, i_9, t);
              return(t);
            }
            t = dynrule_cong_6_0(_id, e_9, _id, _id, _id, _id, t);
            LocalPopChoice(p_51);
          }
        else
          {
            t = o_51;
            {
              ATerm e_129 = NULL,f_129 = NULL,g_129 = NULL,i_51 = NULL,l_51 = NULL,o_18 = NULL;
              e_129 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  f_129 = ATgetArgument(t, 0);
                  g_129 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(e_129);
              i_51 = t;
              t = f_129;
              t = z_179(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_51 = ATgetFirst((ATermList) t);
                  {
                    ATerm q_51 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, l_51, g_129);
              o_18 = t;
              t = SSLsetAnnotations(o_18, i_51);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm a_180 (ATerm), ATerm b_180 (ATerm), ATerm c_180 (ATerm), ATerm t)
{
  ATerm s_133 = NULL,t_133 = NULL,u_133 = NULL,v_133 = NULL,w_133 = NULL;
  u_133 = t;
  if(match_cons(t, sym_Let_2))
    {
      v_133 = ATgetArgument(t, 0);
      w_133 = ATgetArgument(t, 1);
      {
        ATerm f_52 = NULL,j_52 = NULL,k_52 = NULL,f_19 = NULL;
        t = SSLgetAnnotations(u_133);
        f_52 = t;
        t = v_133;
        t = a_180(t);
        j_52 = t;
        t = w_133;
        t = a_180(t);
        k_52 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, j_52, k_52);
        f_19 = t;
        t = SSLsetAnnotations(f_19, f_52);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_133 = ATgetArgument(t, 0);
          w_133 = ATgetArgument(t, 1);
          t_133 = ATgetArgument(t, 2);
          {
            ATerm h_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL,h_19 = NULL;
            t = SSLgetAnnotations(u_133);
            h_53 = t;
            t = v_133;
            t = c_180(t);
            l_53 = t;
            t = w_133;
            t = c_180(t);
            m_53 = t;
            t = t_133;
            t = a_180(t);
            n_53 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, l_53, m_53, n_53);
            h_19 = t;
            t = SSLsetAnnotations(h_19, h_53);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              v_133 = ATgetArgument(t, 0);
              w_133 = ATgetArgument(t, 1);
              t_133 = ATgetArgument(t, 2);
              s_133 = ATgetArgument(t, 3);
              {
                ATerm n_54 = NULL,s_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,i_19 = NULL;
                t = SSLgetAnnotations(u_133);
                n_54 = t;
                t = v_133;
                t = c_180(t);
                s_54 = t;
                t = w_133;
                t = c_180(t);
                v_54 = t;
                t = t_133;
                t = c_180(t);
                w_54 = t;
                t = s_133;
                t = a_180(t);
                x_54 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, s_54, v_54, w_54, x_54);
                i_19 = t;
                t = SSLsetAnnotations(i_19, n_54);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  v_133 = ATgetArgument(t, 0);
                  w_133 = ATgetArgument(t, 1);
                  t_133 = ATgetArgument(t, 2);
                  s_133 = ATgetArgument(t, 3);
                  {
                    ATerm j_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL,j_19 = NULL;
                    t = SSLgetAnnotations(u_133);
                    j_55 = t;
                    t = v_133;
                    t = c_180(t);
                    o_55 = t;
                    t = w_133;
                    t = c_180(t);
                    p_55 = t;
                    t = t_133;
                    t = c_180(t);
                    q_55 = t;
                    t = s_133;
                    t = a_180(t);
                    r_55 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, o_55, p_55, q_55, r_55);
                    j_19 = t;
                    t = SSLsetAnnotations(j_19, j_55);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      v_133 = ATgetArgument(t, 0);
                      w_133 = ATgetArgument(t, 1);
                      t_133 = ATgetArgument(t, 2);
                      {
                        ATerm c_56 = NULL,q_56 = NULL,s_56 = NULL,t_56 = NULL,m_19 = NULL;
                        t = SSLgetAnnotations(u_133);
                        c_56 = t;
                        t = v_133;
                        t = c_180(t);
                        q_56 = t;
                        t = w_133;
                        t = c_180(t);
                        s_56 = t;
                        t = t_133;
                        t = c_180(t);
                        t_56 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, q_56, s_56, t_56);
                        m_19 = t;
                        t = SSLsetAnnotations(m_19, c_56);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          v_133 = ATgetArgument(t, 0);
                          w_133 = ATgetArgument(t, 1);
                          {
                            ATerm g_57 = NULL,r_57 = NULL,s_57 = NULL,n_19 = NULL;
                            t = SSLgetAnnotations(u_133);
                            g_57 = t;
                            t = v_133;
                            t = c_180(t);
                            r_57 = t;
                            t = w_133;
                            t = a_180(t);
                            s_57 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, r_57, s_57);
                            n_19 = t;
                            t = SSLsetAnnotations(n_19, g_57);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              v_133 = ATgetArgument(t, 0);
                              w_133 = ATgetArgument(t, 1);
                              {
                                ATerm j_58 = NULL,m_58 = NULL,n_58 = NULL,b_21 = NULL;
                                t = SSLgetAnnotations(u_133);
                                j_58 = t;
                                t = v_133;
                                t = c_180(t);
                                m_58 = t;
                                t = w_133;
                                t = a_180(t);
                                n_58 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, m_58, n_58);
                                b_21 = t;
                                t = SSLsetAnnotations(b_21, j_58);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  v_133 = ATgetArgument(t, 0);
                                  w_133 = ATgetArgument(t, 1);
                                  {
                                    ATerm k_59 = NULL,p_59 = NULL,q_59 = NULL,d_21 = NULL;
                                    t = SSLgetAnnotations(u_133);
                                    k_59 = t;
                                    t = v_133;
                                    t = c_180(t);
                                    p_59 = t;
                                    t = w_133;
                                    t = a_180(t);
                                    q_59 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, p_59, q_59);
                                    d_21 = t;
                                    t = SSLsetAnnotations(d_21, k_59);
                                  }
                                }
                              else
                                {
                                  ATerm m_60 = NULL,p_60 = NULL,s_60 = NULL,e_21 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      v_133 = ATgetArgument(t, 0);
                                      w_133 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(u_133);
                                  m_60 = t;
                                  t = v_133;
                                  t = c_180(t);
                                  p_60 = t;
                                  t = w_133;
                                  t = a_180(t);
                                  s_60 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, p_60, s_60);
                                  e_21 = t;
                                  t = SSLsetAnnotations(e_21, m_60);
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
ATerm dynrule_sargs_1_0 (ATerm e_180 (ATerm), ATerm t)
{
  ATerm o_134 = NULL,p_134 = NULL,r_134 = NULL;
  ATerm r_51 = t;
  int s_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          o_134 = ATgetArgument(t, 0);
          {
            ATerm t_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_51);
      t = o_134;
      if(match_cons(t, sym_DynRuleId_1))
        {
          p_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_134;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm u_51 = ATgetArgument(t, 0);
          r_134 = ATgetArgument(t, 1);
          {
            ATerm v_51 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = r_134;
    }
  else
    {
      t = r_51;
      {
        ATerm w_51 = t;
        int x_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                o_134 = ATgetArgument(t, 0);
                {
                  ATerm y_51 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(x_51);
            t = o_134;
            if(match_cons(t, sym_DynRuleId_1))
              {
                p_134 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_134;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm z_51 = ATgetArgument(t, 0);
                r_134 = ATgetArgument(t, 1);
                {
                  ATerm a_52 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = r_134;
          }
        else
          {
            t = w_51;
            if(match_cons(t, sym_AddDynRule_2))
              {
                o_134 = ATgetArgument(t, 0);
                {
                  ATerm b_52 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = o_134;
            if(match_cons(t, sym_DynRuleId_1))
              {
                p_134 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_134;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm c_52 = ATgetArgument(t, 0);
                r_134 = ATgetArgument(t, 1);
                {
                  ATerm d_52 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = r_134;
          }
      }
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm i_135 = NULL;
  ATerm e_52 = t;
  int g_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_135 = ATgetArgument(t, 0);
          {
            ATerm h_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_52);
      t = i_135;
    }
  else
    {
      t = e_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_135;
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm o_135 = NULL;
  ATerm i_52 = t;
  int l_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_135 = ATgetArgument(t, 0);
          {
            ATerm m_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_52);
      t = o_135;
    }
  else
    {
      t = i_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_135;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm c_135 = NULL;
  ATerm n_52 = t;
  int o_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_52 = ATgetArgument(t, 0);
          c_135 = ATgetArgument(t, 1);
          {
            ATerm q_52 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_52);
      t = c_135;
      t = map_1_0(j_9, t);
    }
  else
    {
      t = n_52;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm r_52 = ATgetArgument(t, 0);
          c_135 = ATgetArgument(t, 1);
          {
            ATerm s_52 = ATgetArgument(t, 2);
          }
          {
            ATerm t_52 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = c_135;
      t = map_1_0(k_9, t);
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm t_135 = NULL;
  ATerm b_53 = t;
  int f_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          t_135 = ATgetArgument(t, 0);
          {
            ATerm g_53 = ATgetArgument(t, 1);
          }
          {
            ATerm i_53 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_53);
      t = t_135;
    }
  else
    {
      t = b_53;
      if(match_cons(t, sym_SDefT_4))
        {
          t_135 = ATgetArgument(t, 0);
          {
            ATerm j_53 = ATgetArgument(t, 1);
          }
          {
            ATerm k_53 = ATgetArgument(t, 2);
          }
          {
            ATerm o_53 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = t_135;
    }
  return(t);
}
static ATerm w_12 (ATerm r_109, ATerm q_109, ATerm t)
{
  t = r_109;
  t = map_1_0(l_9, t);
  return(t);
}
ATerm SVar_1_0 (ATerm p_119 (ATerm), ATerm t)
{
  ATerm z_135 = NULL,a_136 = NULL,b_136 = NULL,c_136 = NULL,q_23 = NULL;
  c_136 = t;
  if(match_cons(t, sym_SVar_1))
    {
      a_136 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_136);
  z_135 = t;
  t = a_136;
  t = p_119(t);
  b_136 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, b_136);
  q_23 = t;
  t = SSLsetAnnotations(q_23, z_135);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm p_53 = t;
  int q_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_136 = NULL,i_136 = NULL,j_136 = NULL,k_136 = NULL,l_136 = NULL;
      h_136 = t;
      if(match_cons(t, sym_Let_2))
        {
          i_136 = ATgetArgument(t, 0);
          j_136 = ATgetArgument(t, 1);
          t = h_136;
          t = w_12(i_136, j_136, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              i_136 = ATgetArgument(t, 0);
              j_136 = ATgetArgument(t, 1);
              k_136 = ATgetArgument(t, 2);
              t = j_136;
              t = map_1_0(n_9, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  i_136 = ATgetArgument(t, 0);
                  j_136 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, i_136);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_136 = ATgetArgument(t, 0);
                      j_136 = ATgetArgument(t, 1);
                      k_136 = ATgetArgument(t, 2);
                      l_136 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_136;
                  t = map_1_0(o_9, t);
                }
            }
        }
      LocalPopChoice(q_53);
    }
  else
    {
      t = p_53;
      {
        ATerm r_53 = t;
        int s_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(s_53);
          }
        else
          {
            t = r_53;
            t = dynrule_sargs_1_0(q_9, t);
          }
      }
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm t_136 = NULL;
  ATerm t_53 = t;
  int u_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_136 = ATgetArgument(t, 0);
          {
            ATerm z_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_53);
      t = t_136;
    }
  else
    {
      t = t_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_136;
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm e_137 = NULL;
  ATerm a_54 = t;
  int f_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_137 = ATgetArgument(t, 0);
          {
            ATerm g_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_54);
      t = e_137;
    }
  else
    {
      t = a_54;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_137;
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = map_1_0(r_9, t);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm j_137 = NULL;
  ATerm h_54 = t;
  int j_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_137 = ATgetArgument(t, 0);
          {
            ATerm m_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_54);
      t = j_137;
    }
  else
    {
      t = h_54;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_137;
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  t = rename_4_0(SVar_1_0, m_9, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm g_180 (ATerm), ATerm h_180 (ATerm), ATerm i_180 (ATerm), ATerm j_180 (ATerm), ATerm k_180 (ATerm), ATerm l_180 (ATerm), ATerm t)
{
  ATerm l_140 = NULL,m_140 = NULL,n_140 = NULL;
  l_140 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      m_140 = ATgetArgument(t, 0);
      n_140 = ATgetArgument(t, 1);
      {
        ATerm c_61 = NULL,f_61 = NULL,g_61 = NULL,h_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,f_62 = NULL,g_62 = NULL,u_23 = NULL,t_23 = NULL,s_23 = NULL;
        t = SSLgetAnnotations(l_140);
        c_61 = t;
        t = m_140;
        if(match_cons(t, sym_DynRuleId_1))
          {
            h_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_140);
        g_61 = t;
        t = h_61;
        if(match_cons(t, sym_RDecT_3))
          {
            o_61 = ATgetArgument(t, 0);
            u_61 = ATgetArgument(t, 1);
            v_61 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_61);
        n_61 = t;
        t = o_61;
        t = g_180(t);
        w_61 = t;
        t = u_61;
        t = h_180(t);
        x_61 = t;
        t = v_61;
        t = i_180(t);
        f_62 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, w_61, x_61, f_62);
        s_23 = t;
        t = SSLsetAnnotations(s_23, n_61);
        g_62 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, g_62);
        t_23 = t;
        t = SSLsetAnnotations(t_23, g_61);
        m_61 = t;
        t = n_140;
        t = j_180(t);
        f_61 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, m_61, f_61);
        u_23 = t;
        t = SSLsetAnnotations(u_23, c_61);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          m_140 = ATgetArgument(t, 0);
          n_140 = ATgetArgument(t, 1);
          {
            ATerm r_62 = NULL,v_62 = NULL,w_62 = NULL,z_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,n_63 = NULL,o_63 = NULL,s_63 = NULL,t_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,j_24 = NULL,i_24 = NULL,x_23 = NULL,v_23 = NULL;
            t = SSLgetAnnotations(l_140);
            r_62 = t;
            t = m_140;
            if(match_cons(t, sym_DynRuleId_1))
              {
                g_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(m_140);
            f_63 = t;
            t = g_63;
            if(match_cons(t, sym_RDecT_3))
              {
                o_63 = ATgetArgument(t, 0);
                s_63 = ATgetArgument(t, 1);
                t_63 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(g_63);
            n_63 = t;
            t = o_63;
            t = g_180(t);
            y_63 = t;
            t = s_63;
            t = h_180(t);
            z_63 = t;
            t = t_63;
            t = i_180(t);
            a_64 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, y_63, z_63, a_64);
            v_23 = t;
            t = SSLsetAnnotations(v_23, n_63);
            b_64 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, b_64);
            x_23 = t;
            t = SSLsetAnnotations(x_23, f_63);
            h_63 = t;
            t = n_140;
            if(match_cons(t, sym_Rule_3))
              {
                w_62 = ATgetArgument(t, 0);
                z_62 = ATgetArgument(t, 1);
                a_63 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_140);
            v_62 = t;
            t = w_62;
            t = j_180(t);
            b_63 = t;
            t = z_62;
            t = k_180(t);
            c_63 = t;
            t = a_63;
            t = l_180(t);
            d_63 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, b_63, c_63, d_63);
            i_24 = t;
            t = SSLsetAnnotations(i_24, v_62);
            e_63 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, h_63, e_63);
            j_24 = t;
            t = SSLsetAnnotations(j_24, r_62);
          }
        }
      else
        {
          ATerm k_64 = NULL,p_64 = NULL,r_64 = NULL,s_64 = NULL,u_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,p_24 = NULL,m_24 = NULL,l_24 = NULL,k_24 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              m_140 = ATgetArgument(t, 0);
              n_140 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(l_140);
          k_64 = t;
          t = m_140;
          if(match_cons(t, sym_DynRuleId_1))
            {
              a_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_140);
          z_64 = t;
          t = a_65;
          if(match_cons(t, sym_RDecT_3))
            {
              e_65 = ATgetArgument(t, 0);
              h_65 = ATgetArgument(t, 1);
              i_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_65);
          d_65 = t;
          t = e_65;
          t = g_180(t);
          j_65 = t;
          t = h_65;
          t = h_180(t);
          k_65 = t;
          t = i_65;
          t = i_180(t);
          l_65 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, j_65, k_65, l_65);
          k_24 = t;
          t = SSLsetAnnotations(k_24, d_65);
          m_65 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, m_65);
          l_24 = t;
          t = SSLsetAnnotations(l_24, z_64);
          c_65 = t;
          t = n_140;
          if(match_cons(t, sym_Rule_3))
            {
              r_64 = ATgetArgument(t, 0);
              s_64 = ATgetArgument(t, 1);
              u_64 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_140);
          p_64 = t;
          t = r_64;
          t = j_180(t);
          v_64 = t;
          t = s_64;
          t = k_180(t);
          w_64 = t;
          t = u_64;
          t = l_180(t);
          x_64 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, v_64, w_64, x_64);
          m_24 = t;
          t = SSLsetAnnotations(m_24, p_64);
          y_64 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, c_65, y_64);
          p_24 = t;
          t = SSLsetAnnotations(p_24, k_64);
        }
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_54 = ATgetArgument(t, 0);
      if(((ATgetType(o_54) != AT_LIST) || !(ATisEmpty(o_54))))
        _fail(t);
      {
        ATerm p_54 = ATgetArgument(t, 1);
        if(((ATgetType(p_54) != AT_LIST) || !(ATisEmpty(p_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm g_68 = NULL,i_68 = NULL,j_68 = NULL,l_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_54 = ATgetArgument(t, 0);
      if(((ATgetType(q_54) == AT_LIST) && !(ATisEmpty(q_54))))
        {
          g_68 = ATgetFirst((ATermList) q_54);
          i_68 = (ATerm) ATgetNext((ATermList) q_54);
        }
      else
        _fail(t);
      {
        ATerm r_54 = ATgetArgument(t, 1);
        if(((ATgetType(r_54) == AT_LIST) && !(ATisEmpty(r_54))))
          {
            j_68 = ATgetFirst((ATermList) r_54);
            l_68 = (ATerm) ATgetNext((ATermList) r_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_68, j_68), (ATerm) ATmakeAppl(sym__2, i_68, l_68));
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm o_68 = NULL,r_68 = NULL;
  if(match_cons(t, sym__2))
    {
      o_68 = ATgetArgument(t, 0);
      r_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_68), o_68);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm t_68 = NULL,d_69 = NULL,e_69 = NULL;
  if(match_cons(t, sym__2))
    {
      t_68 = ATgetArgument(t, 0);
      e_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_68;
  {
    ATerm t_54 = t;
    int u_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_54 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_54);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_69);
      }
    else
      {
        t = t_54;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_54 = ATgetArgument(t, 0);
            d_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_69, d_69);
      }
  }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_55 = ATgetArgument(t, 0);
      if(((ATgetType(a_55) != AT_LIST) || !(ATisEmpty(a_55))))
        _fail(t);
      {
        ATerm b_55 = ATgetArgument(t, 1);
        if(((ATgetType(b_55) != AT_LIST) || !(ATisEmpty(b_55))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_55 = ATgetArgument(t, 0);
      if(((ATgetType(c_55) == AT_LIST) && !(ATisEmpty(c_55))))
        {
          o_70 = ATgetFirst((ATermList) c_55);
          p_70 = (ATerm) ATgetNext((ATermList) c_55);
        }
      else
        _fail(t);
      {
        ATerm d_55 = ATgetArgument(t, 1);
        if(((ATgetType(d_55) == AT_LIST) && !(ATisEmpty(d_55))))
          {
            q_70 = ATgetFirst((ATermList) d_55);
            r_70 = (ATerm) ATgetNext((ATermList) d_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_70, q_70), (ATerm) ATmakeAppl(sym__2, p_70, r_70));
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL;
  if(match_cons(t, sym__2))
    {
      s_70 = ATgetArgument(t, 0);
      t_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_70), s_70);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm y_70 = NULL,b_71 = NULL,c_71 = NULL;
  if(match_cons(t, sym__2))
    {
      y_70 = ATgetArgument(t, 0);
      c_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_70;
  {
    ATerm e_55 = t;
    int f_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_55);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_71);
      }
    else
      {
        t = e_55;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_55 = ATgetArgument(t, 0);
            b_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_71, b_71);
      }
  }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_55 = ATgetArgument(t, 0);
      if(((ATgetType(i_55) != AT_LIST) || !(ATisEmpty(i_55))))
        _fail(t);
      {
        ATerm k_55 = ATgetArgument(t, 1);
        if(((ATgetType(k_55) != AT_LIST) || !(ATisEmpty(k_55))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_55 = ATgetArgument(t, 0);
      if(((ATgetType(l_55) == AT_LIST) && !(ATisEmpty(l_55))))
        {
          m_72 = ATgetFirst((ATermList) l_55);
          n_72 = (ATerm) ATgetNext((ATermList) l_55);
        }
      else
        _fail(t);
      {
        ATerm m_55 = ATgetArgument(t, 1);
        if(((ATgetType(m_55) == AT_LIST) && !(ATisEmpty(m_55))))
          {
            o_72 = ATgetFirst((ATermList) m_55);
            p_72 = (ATerm) ATgetNext((ATermList) m_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_72, o_72), (ATerm) ATmakeAppl(sym__2, n_72, p_72));
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL;
  if(match_cons(t, sym__2))
    {
      q_72 = ATgetArgument(t, 0);
      r_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_72), q_72);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm t_72 = NULL,v_72 = NULL,w_72 = NULL;
  if(match_cons(t, sym__2))
    {
      t_72 = ATgetArgument(t, 0);
      w_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_72;
  {
    ATerm n_55 = t;
    int s_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_55);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_72);
      }
    else
      {
        t = n_55;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_55 = ATgetArgument(t, 0);
            v_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_72, v_72);
      }
  }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_55 = ATgetArgument(t, 0);
      if(((ATgetType(v_55) != AT_LIST) || !(ATisEmpty(v_55))))
        _fail(t);
      {
        ATerm w_55 = ATgetArgument(t, 1);
        if(((ATgetType(w_55) != AT_LIST) || !(ATisEmpty(w_55))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  ATerm t_145 = NULL,u_145 = NULL,v_145 = NULL,w_145 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_55 = ATgetArgument(t, 0);
      if(((ATgetType(x_55) == AT_LIST) && !(ATisEmpty(x_55))))
        {
          t_145 = ATgetFirst((ATermList) x_55);
          u_145 = (ATerm) ATgetNext((ATermList) x_55);
        }
      else
        _fail(t);
      {
        ATerm y_55 = ATgetArgument(t, 1);
        if(((ATgetType(y_55) == AT_LIST) && !(ATisEmpty(y_55))))
          {
            v_145 = ATgetFirst((ATermList) y_55);
            w_145 = (ATerm) ATgetNext((ATermList) y_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_145, v_145), (ATerm) ATmakeAppl(sym__2, u_145, w_145));
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm x_145 = NULL,y_145 = NULL;
  if(match_cons(t, sym__2))
    {
      x_145 = ATgetArgument(t, 0);
      y_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_145), x_145);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm a_146 = NULL,c_146 = NULL,d_146 = NULL;
  if(match_cons(t, sym__2))
    {
      a_146 = ATgetArgument(t, 0);
      d_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_146;
  {
    ATerm z_55 = t;
    int a_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_56);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_146);
      }
    else
      {
        t = z_55;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_56 = ATgetArgument(t, 0);
            c_146 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_146, c_146);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm v_179 (ATerm), ATerm t)
{
  ATerm e_56 = t;
  int f_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_145 = NULL,j_145 = NULL,k_145 = NULL,l_145 = NULL,o_145 = NULL;
      i_145 = t;
      if(match_cons(t, sym_Scope_2))
        {
          j_145 = ATgetArgument(t, 0);
          k_145 = ATgetArgument(t, 1);
          {
            ATerm a_66 = NULL,d_66 = NULL,h_25 = NULL;
            t = SSLgetAnnotations(i_145);
            a_66 = t;
            t = j_145;
            t = v_179(t);
            d_66 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, d_66, k_145);
            h_25 = t;
            t = SSLsetAnnotations(h_25, a_66);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              j_145 = ATgetArgument(t, 0);
              {
                ATerm z_66 = NULL,m_25 = NULL;
                t = SSLgetAnnotations(i_145);
                z_66 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, j_145);
                m_25 = t;
                t = SSLsetAnnotations(m_25, z_66);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  j_145 = ATgetArgument(t, 0);
                  k_145 = ATgetArgument(t, 1);
                  l_145 = ATgetArgument(t, 2);
                  {
                    ATerm l_67 = NULL,c_68 = NULL,e_68 = NULL,n_25 = NULL;
                    t = SSLgetAnnotations(i_145);
                    l_67 = t;
                    t = l_145;
                    t = v_179(t);
                    e_68 = t;
                    t = (ATerm) ATmakeAppl(sym__2, l_145, e_68);
                    t = genzip_4_0(s_9, t_9, y_9, z_9, t);
                    c_68 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, j_145, k_145, c_68);
                    n_25 = t;
                    t = SSLsetAnnotations(n_25, l_67);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_145 = ATgetArgument(t, 0);
                      k_145 = ATgetArgument(t, 1);
                      l_145 = ATgetArgument(t, 2);
                      o_145 = ATgetArgument(t, 3);
                      {
                        ATerm b_70 = NULL,l_70 = NULL,m_70 = NULL,o_25 = NULL;
                        t = SSLgetAnnotations(i_145);
                        b_70 = t;
                        t = l_145;
                        t = v_179(t);
                        m_70 = t;
                        t = (ATerm) ATmakeAppl(sym__2, l_145, m_70);
                        t = genzip_4_0(a_10, d_10, e_10, f_10, t);
                        l_70 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, j_145, k_145, l_70, o_145);
                        o_25 = t;
                        t = SSLsetAnnotations(o_25, b_70);
                      }
                    }
                  else
                    {
                      ATerm e_72 = NULL,j_72 = NULL,k_72 = NULL,p_25 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          j_145 = ATgetArgument(t, 0);
                          k_145 = ATgetArgument(t, 1);
                          l_145 = ATgetArgument(t, 2);
                          o_145 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(i_145);
                      e_72 = t;
                      t = l_145;
                      t = v_179(t);
                      k_72 = t;
                      t = (ATerm) ATmakeAppl(sym__2, l_145, k_72);
                      t = genzip_4_0(g_10, h_10, i_10, j_10, t);
                      j_72 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, j_145, k_145, j_72, o_145);
                      p_25 = t;
                      t = SSLsetAnnotations(p_25, e_72);
                    }
                }
            }
        }
      LocalPopChoice(f_56);
    }
  else
    {
      t = e_56;
      {
        static ATerm k_10 (ATerm t);
        static ATerm k_10 (ATerm t)
        {
          ATerm r_145 = NULL,s_145 = NULL;
          s_145 = t;
          t = v_179(t);
          r_145 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_145, r_145);
          t = genzip_4_0(m_10, n_10, p_10, q_10, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, k_10, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm w_179 (ATerm), ATerm x_179 (ATerm), ATerm y_179 (ATerm), ATerm t)
{
  ATerm l_152 = NULL,m_152 = NULL,n_152 = NULL,o_152 = NULL,p_152 = NULL;
  o_152 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_152 = ATgetArgument(t, 0);
      n_152 = ATgetArgument(t, 1);
      {
        ATerm o_73 = NULL,w_73 = NULL,x_73 = NULL,b_26 = NULL;
        t = SSLgetAnnotations(o_152);
        o_73 = t;
        t = p_152;
        t = y_179(t);
        w_73 = t;
        t = n_152;
        t = w_179(t);
        x_73 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_73, x_73);
        b_26 = t;
        t = SSLsetAnnotations(b_26, o_73);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          p_152 = ATgetArgument(t, 0);
          {
            ATerm o_74 = NULL,q_74 = NULL,r_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,f_26 = NULL,c_26 = NULL;
            t = SSLgetAnnotations(o_152);
            o_74 = t;
            t = p_152;
            if(match_cons(t, sym_Rule_3))
              {
                r_74 = ATgetArgument(t, 0);
                x_74 = ATgetArgument(t, 1);
                y_74 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(p_152);
            q_74 = t;
            t = r_74;
            t = w_179(t);
            z_74 = t;
            t = x_74;
            t = w_179(t);
            a_75 = t;
            t = y_74;
            t = w_179(t);
            b_75 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, z_74, a_75, b_75);
            c_26 = t;
            t = SSLsetAnnotations(c_26, q_74);
            c_75 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, c_75);
            f_26 = t;
            t = SSLsetAnnotations(f_26, o_74);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              p_152 = ATgetArgument(t, 0);
              n_152 = ATgetArgument(t, 1);
              l_152 = ATgetArgument(t, 2);
              {
                ATerm k_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,k_26 = NULL;
                t = SSLgetAnnotations(o_152);
                k_75 = t;
                t = p_152;
                t = y_179(t);
                o_75 = t;
                t = n_152;
                t = y_179(t);
                p_75 = t;
                t = l_152;
                t = y_179(t);
                q_75 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, o_75, p_75, q_75);
                k_26 = t;
                t = SSLsetAnnotations(k_26, k_75);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  p_152 = ATgetArgument(t, 0);
                  n_152 = ATgetArgument(t, 1);
                  l_152 = ATgetArgument(t, 2);
                  m_152 = ATgetArgument(t, 3);
                  {
                    ATerm h_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,l_26 = NULL;
                    t = SSLgetAnnotations(o_152);
                    h_76 = t;
                    t = p_152;
                    t = y_179(t);
                    m_76 = t;
                    t = n_152;
                    t = y_179(t);
                    n_76 = t;
                    t = l_152;
                    t = y_179(t);
                    o_76 = t;
                    t = m_152;
                    t = w_179(t);
                    p_76 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, m_76, n_76, o_76, p_76);
                    l_26 = t;
                    t = SSLsetAnnotations(l_26, h_76);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      p_152 = ATgetArgument(t, 0);
                      n_152 = ATgetArgument(t, 1);
                      l_152 = ATgetArgument(t, 2);
                      m_152 = ATgetArgument(t, 3);
                      {
                        ATerm b_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,m_26 = NULL;
                        t = SSLgetAnnotations(o_152);
                        b_77 = t;
                        t = p_152;
                        t = y_179(t);
                        g_77 = t;
                        t = n_152;
                        t = y_179(t);
                        h_77 = t;
                        t = l_152;
                        t = y_179(t);
                        i_77 = t;
                        t = m_152;
                        t = w_179(t);
                        j_77 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, g_77, h_77, i_77, j_77);
                        m_26 = t;
                        t = SSLsetAnnotations(m_26, b_77);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          p_152 = ATgetArgument(t, 0);
                          n_152 = ATgetArgument(t, 1);
                          {
                            ATerm t_77 = NULL,w_77 = NULL,x_77 = NULL,r_26 = NULL;
                            t = SSLgetAnnotations(o_152);
                            t_77 = t;
                            t = p_152;
                            t = y_179(t);
                            w_77 = t;
                            t = n_152;
                            t = w_179(t);
                            x_77 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, w_77, x_77);
                            r_26 = t;
                            t = SSLsetAnnotations(r_26, t_77);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              p_152 = ATgetArgument(t, 0);
                              n_152 = ATgetArgument(t, 1);
                              {
                                ATerm f_78 = NULL,i_78 = NULL,j_78 = NULL,t_26 = NULL;
                                t = SSLgetAnnotations(o_152);
                                f_78 = t;
                                t = p_152;
                                t = y_179(t);
                                i_78 = t;
                                t = n_152;
                                t = w_179(t);
                                j_78 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, i_78, j_78);
                                t_26 = t;
                                t = SSLsetAnnotations(t_26, f_78);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  p_152 = ATgetArgument(t, 0);
                                  n_152 = ATgetArgument(t, 1);
                                  {
                                    ATerm r_78 = NULL,u_78 = NULL,v_78 = NULL,u_26 = NULL;
                                    t = SSLgetAnnotations(o_152);
                                    r_78 = t;
                                    t = p_152;
                                    t = y_179(t);
                                    u_78 = t;
                                    t = n_152;
                                    t = w_179(t);
                                    v_78 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, u_78, v_78);
                                    u_26 = t;
                                    t = SSLsetAnnotations(u_26, r_78);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      p_152 = ATgetArgument(t, 0);
                                      {
                                        ATerm c_79 = NULL,e_79 = NULL,v_26 = NULL;
                                        t = SSLgetAnnotations(o_152);
                                        c_79 = t;
                                        t = p_152;
                                        t = w_179(t);
                                        e_79 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, e_79);
                                        v_26 = t;
                                        t = SSLsetAnnotations(v_26, c_79);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          p_152 = ATgetArgument(t, 0);
                                          {
                                            ATerm k_79 = NULL,m_79 = NULL,w_26 = NULL;
                                            t = SSLgetAnnotations(o_152);
                                            k_79 = t;
                                            t = p_152;
                                            t = w_179(t);
                                            m_79 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, m_79);
                                            w_26 = t;
                                            t = SSLsetAnnotations(w_26, k_79);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              p_152 = ATgetArgument(t, 0);
                                              {
                                                ATerm s_79 = NULL,u_79 = NULL,x_26 = NULL;
                                                t = SSLgetAnnotations(o_152);
                                                s_79 = t;
                                                t = p_152;
                                                t = w_179(t);
                                                u_79 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, u_79);
                                                x_26 = t;
                                                t = SSLsetAnnotations(x_26, s_79);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  p_152 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm a_80 = NULL,f_80 = NULL,y_26 = NULL;
                                                    t = SSLgetAnnotations(o_152);
                                                    a_80 = t;
                                                    t = p_152;
                                                    t = w_179(t);
                                                    f_80 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, f_80);
                                                    y_26 = t;
                                                    t = SSLsetAnnotations(y_26, a_80);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm p_80 = NULL,r_80 = NULL,z_26 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      p_152 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(o_152);
                                                  p_80 = t;
                                                  t = p_152;
                                                  t = w_179(t);
                                                  r_80 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, r_80);
                                                  z_26 = t;
                                                  t = SSLsetAnnotations(z_26, p_80);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm f_180 (ATerm), ATerm t)
{
  ATerm l_153 = NULL,m_153 = NULL,p_153 = NULL;
  ATerm g_56 = t;
  int h_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          l_153 = ATgetArgument(t, 0);
          {
            ATerm i_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_56);
      t = l_153;
      if(match_cons(t, sym_DynRuleId_1))
        {
          m_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_153;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm j_56 = ATgetArgument(t, 0);
          ATerm k_56 = ATgetArgument(t, 1);
          p_153 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_153;
    }
  else
    {
      t = g_56;
      {
        ATerm l_56 = t;
        int m_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                l_153 = ATgetArgument(t, 0);
                {
                  ATerm n_56 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(m_56);
            t = l_153;
            if(match_cons(t, sym_DynRuleId_1))
              {
                m_153 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_153;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm o_56 = ATgetArgument(t, 0);
                ATerm p_56 = ATgetArgument(t, 1);
                p_153 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = p_153;
          }
        else
          {
            t = l_56;
            if(match_cons(t, sym_AddDynRule_2))
              {
                l_153 = ATgetArgument(t, 0);
                {
                  ATerm r_56 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = l_153;
            if(match_cons(t, sym_DynRuleId_1))
              {
                m_153 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_153;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm u_56 = ATgetArgument(t, 0);
                ATerm v_56 = ATgetArgument(t, 1);
                p_153 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = p_153;
          }
      }
    }
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm f_154 = NULL;
  ATerm w_56 = t;
  int x_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_154 = ATgetArgument(t, 0);
          {
            ATerm y_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_56);
      t = f_154;
    }
  else
    {
      t = w_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_154;
    }
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm l_154 = NULL;
  ATerm z_56 = t;
  int a_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_154 = ATgetArgument(t, 0);
          {
            ATerm b_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_57);
      t = l_154;
    }
  else
    {
      t = z_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_154;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm a_154 = NULL;
  ATerm c_57 = t;
  int d_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm f_57 = ATgetArgument(t, 0);
          ATerm h_57 = ATgetArgument(t, 1);
          a_154 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(d_57);
      t = a_154;
      t = map_1_0(r_10, t);
    }
  else
    {
      t = c_57;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm i_57 = ATgetArgument(t, 0);
          ATerm v_57 = ATgetArgument(t, 1);
          a_154 = ATgetArgument(t, 2);
          {
            ATerm w_57 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = a_154;
      t = map_1_0(s_10, t);
    }
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm h_155 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_155);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm x_57 = t;
  int y_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_57);
    }
  else
    {
      t = x_57;
      {
        ATerm z_57 = t;
        int a_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_58);
          }
        else
          {
            t = z_57;
            {
              ATerm b_58 = t;
              int c_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_155 = NULL,k_155 = NULL,l_155 = NULL,m_155 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_155 = ATgetArgument(t, 0);
                      k_155 = ATgetArgument(t, 1);
                      l_155 = ATgetArgument(t, 2);
                      m_155 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_155;
                  t = map_1_0(w_10, t);
                  LocalPopChoice(c_58);
                }
              else
                {
                  t = b_58;
                  {
                    ATerm d_58 = t;
                    int e_58 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_58);
                      }
                    else
                      {
                        t = d_58;
                        t = dynrule_targs_1_0(x_10, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm t_155 = NULL;
  ATerm f_58 = t;
  int g_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_155 = ATgetArgument(t, 0);
          {
            ATerm i_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_58);
      t = t_155;
    }
  else
    {
      t = f_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_155 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_155;
    }
  return(t);
}
static ATerm x_10 (ATerm t)
{
  t = map_1_0(y_10, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm y_155 = NULL;
  ATerm k_58 = t;
  int l_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_155 = ATgetArgument(t, 0);
          {
            ATerm o_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_58);
      t = y_155;
    }
  else
    {
      t = k_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_155 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_155;
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm c_156 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_156);
  return(t);
}
static ATerm f_11 (ATerm t)
{
  ATerm p_58 = t;
  int q_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_58);
    }
  else
    {
      t = p_58;
      {
        ATerm r_58 = t;
        int s_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_58);
          }
        else
          {
            t = r_58;
            {
              ATerm u_58 = t;
              int v_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_156 = NULL,i_156 = NULL,j_156 = NULL,k_156 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_156 = ATgetArgument(t, 0);
                      i_156 = ATgetArgument(t, 1);
                      j_156 = ATgetArgument(t, 2);
                      k_156 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_156;
                  t = map_1_0(g_11, t);
                  LocalPopChoice(v_58);
                }
              else
                {
                  t = u_58;
                  {
                    ATerm w_58 = t;
                    int y_58 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_58);
                      }
                    else
                      {
                        t = w_58;
                        t = dynrule_targs_1_0(h_11, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_11 (ATerm t)
{
  ATerm t_156 = NULL;
  ATerm z_58 = t;
  int a_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_156 = ATgetArgument(t, 0);
          {
            ATerm b_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_59);
      t = t_156;
    }
  else
    {
      t = z_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_156 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_156;
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = map_1_0(u_11, t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm a_157 = NULL;
  ATerm c_59 = t;
  int d_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_157 = ATgetArgument(t, 0);
          {
            ATerm e_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_59);
      t = a_157;
    }
  else
    {
      t = c_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_157 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_157;
    }
  return(t);
}
static ATerm x_11 (ATerm t)
{
  ATerm e_157 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_157);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm f_59 = t;
  int h_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_59);
    }
  else
    {
      t = f_59;
      {
        ATerm i_59 = t;
        int j_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_59);
          }
        else
          {
            t = i_59;
            {
              ATerm l_59 = t;
              int m_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_157 = NULL,h_157 = NULL,i_157 = NULL,j_157 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_157 = ATgetArgument(t, 0);
                      h_157 = ATgetArgument(t, 1);
                      i_157 = ATgetArgument(t, 2);
                      j_157 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_157;
                  t = map_1_0(h_13, t);
                  LocalPopChoice(m_59);
                }
              else
                {
                  t = l_59;
                  {
                    ATerm n_59 = t;
                    int o_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_59);
                      }
                    else
                      {
                        t = n_59;
                        t = dynrule_targs_1_0(i_13, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm q_157 = NULL;
  ATerm r_59 = t;
  int s_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_157 = ATgetArgument(t, 0);
          {
            ATerm t_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_59);
      t = q_157;
    }
  else
    {
      t = r_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_157 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_157;
    }
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = map_1_0(k_13, t);
  return(t);
}
static ATerm k_13 (ATerm t)
{
  ATerm v_157 = NULL;
  ATerm u_59 = t;
  int v_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_157 = ATgetArgument(t, 0);
          {
            ATerm x_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_59);
      t = v_157;
    }
  else
    {
      t = u_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_157 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_157;
    }
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm z_157 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_157);
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm y_59 = t;
  int z_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_59);
    }
  else
    {
      t = y_59;
      {
        ATerm a_60 = t;
        int b_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_60);
          }
        else
          {
            t = a_60;
            {
              ATerm c_60 = t;
              int d_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_158 = NULL,c_158 = NULL,d_158 = NULL,e_158 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_158 = ATgetArgument(t, 0);
                      c_158 = ATgetArgument(t, 1);
                      d_158 = ATgetArgument(t, 2);
                      e_158 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_158;
                  t = map_1_0(a_14, t);
                  LocalPopChoice(d_60);
                }
              else
                {
                  t = c_60;
                  {
                    ATerm g_60 = t;
                    int h_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_60);
                      }
                    else
                      {
                        t = g_60;
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
static ATerm a_14 (ATerm t)
{
  ATerm q_158 = NULL;
  ATerm i_60 = t;
  int j_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_158 = ATgetArgument(t, 0);
          {
            ATerm k_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_60);
      t = q_158;
    }
  else
    {
      t = i_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_158 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_158;
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = map_1_0(k_14, t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm v_158 = NULL;
  ATerm l_60 = t;
  int n_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_158 = ATgetArgument(t, 0);
          {
            ATerm o_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_60);
      t = v_158;
    }
  else
    {
      t = l_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_158 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_158;
    }
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm z_158 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_158);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm q_60 = t;
  int r_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_60);
    }
  else
    {
      t = q_60;
      {
        ATerm t_60 = t;
        int u_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_60);
          }
        else
          {
            t = t_60;
            {
              ATerm v_60 = t;
              int w_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_159 = NULL,c_159 = NULL,d_159 = NULL,e_159 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_159 = ATgetArgument(t, 0);
                      c_159 = ATgetArgument(t, 1);
                      d_159 = ATgetArgument(t, 2);
                      e_159 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_159;
                  t = map_1_0(o_14, t);
                  LocalPopChoice(w_60);
                }
              else
                {
                  t = v_60;
                  {
                    ATerm x_60 = t;
                    int y_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_60);
                      }
                    else
                      {
                        t = x_60;
                        t = dynrule_targs_1_0(u_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm l_159 = NULL;
  ATerm z_60 = t;
  int a_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_159 = ATgetArgument(t, 0);
          {
            ATerm b_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_61);
      t = l_159;
    }
  else
    {
      t = z_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_159 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_159;
    }
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = map_1_0(o_15, t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm q_159 = NULL;
  ATerm d_61 = t;
  int e_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_159 = ATgetArgument(t, 0);
          {
            ATerm i_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_61);
      t = q_159;
    }
  else
    {
      t = d_61;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_159 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_159;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm f_155 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      f_155 = ATgetArgument(t, 0);
      t = f_155;
      t = free_vars_3_0(t_10, u_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          f_155 = ATgetArgument(t, 0);
          t = f_155;
          t = free_vars_3_0(z_10, f_11, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              f_155 = ATgetArgument(t, 0);
              t = f_155;
              t = free_vars_3_0(x_11, e_13, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  f_155 = ATgetArgument(t, 0);
                  t = f_155;
                  t = free_vars_3_0(l_13, o_13, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      f_155 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = f_155;
                  t = free_vars_3_0(l_14, n_14, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm z_12 (ATerm p_160 (ATerm), ATerm a_76, ATerm z_75, ATerm t)
{
  static ATerm i_160 (ATerm t);
  static ATerm i_160 (ATerm t)
  {
    ATerm d_160 = NULL,e_160 = NULL,f_160 = NULL;
    d_160 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_75;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_160 = ATgetFirst((ATermList) t);
            f_160 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_61 = t;
          int k_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_160;
              {
                static ATerm q_15 (ATerm t);
                static ATerm q_15 (ATerm t)
                {
                  t = z_75;
                  return(t);
                }
                t = a_13(p_160, q_15, e_160, f_160, t);
              }
              t = i_160(t);
              LocalPopChoice(k_61);
            }
          else
            {
              t = j_61;
              {
                ATerm e_81 = NULL,j_81 = NULL,m_28 = NULL;
                t = SSLgetAnnotations(d_160);
                e_81 = t;
                t = f_160;
                t = i_160(t);
                j_81 = t;
                t = (ATerm) ATinsert(CheckATermList(j_81), e_160);
                m_28 = t;
                t = SSLsetAnnotations(m_28, e_81);
              }
            }
        }
      }
    return(t);
  }
  t = a_76;
  t = i_160(t);
  return(t);
}
ATerm foldr_3_0 (ATerm u_163 (ATerm), ATerm v_163 (ATerm), ATerm w_163 (ATerm), ATerm t)
{
  ATerm n_160 = NULL,o_160 = NULL,r_160 = NULL;
  n_160 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_160;
      t = u_163(t);
    }
  else
    {
      ATerm w_160 = NULL,x_160 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_160 = ATgetFirst((ATermList) t);
          r_160 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_160;
      t = w_163(t);
      w_160 = t;
      t = r_160;
      t = foldr_3_0(u_163, v_163, w_163, t);
      x_160 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_160, x_160);
      t = v_163(t);
    }
  return(t);
}
static ATerm a_13 (ATerm s_160 (ATerm), ATerm t_160 (ATerm), ATerm e_76, ATerm d_76, ATerm t)
{
  t = t_160(t);
  {
    static ATerm r_15 (ATerm t);
    static ATerm r_15 (ATerm t)
    {
      ATerm f_161 = NULL;
      f_161 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_76, f_161);
      t = s_160(t);
      return(t);
    }
    t = fetch_1_0(r_15, t);
  }
  t = d_76;
  return(t);
}
static ATerm b_13 (ATerm k_160 (ATerm), ATerm y_75, ATerm x_75, ATerm t)
{
  static ATerm v_161 (ATerm t);
  static ATerm v_161 (ATerm t)
  {
    ATerm q_161 = NULL,r_161 = NULL,s_161 = NULL;
    q_161 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_161;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_161 = ATgetFirst((ATermList) t);
            s_161 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_61 = t;
          int y_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_161;
              {
                static ATerm u_15 (ATerm t);
                static ATerm u_15 (ATerm t)
                {
                  t = x_75;
                  return(t);
                }
                t = a_13(k_160, u_15, r_161, s_161, t);
              }
              t = v_161(t);
              LocalPopChoice(y_61);
            }
          else
            {
              t = l_61;
              {
                ATerm s_81 = NULL,v_81 = NULL,q_28 = NULL;
                t = SSLgetAnnotations(q_161);
                s_81 = t;
                t = s_161;
                t = v_161(t);
                v_81 = t;
                t = (ATerm) ATinsert(CheckATermList(v_81), r_161);
                q_28 = t;
                t = SSLsetAnnotations(q_28, s_81);
              }
            }
        }
      }
    return(t);
  }
  t = y_75;
  t = v_161(t);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_61 = ATgetArgument(t, 0);
      if(((ATgetType(z_61) != AT_LIST) || !(ATisEmpty(z_61))))
        _fail(t);
      {
        ATerm a_62 = ATgetArgument(t, 1);
        if(((ATgetType(a_62) != AT_LIST) || !(ATisEmpty(a_62))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm d_162 = NULL,e_162 = NULL,f_162 = NULL,g_162 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_62 = ATgetArgument(t, 0);
      if(((ATgetType(d_62) == AT_LIST) && !(ATisEmpty(d_62))))
        {
          d_162 = ATgetFirst((ATermList) d_62);
          e_162 = (ATerm) ATgetNext((ATermList) d_62);
        }
      else
        _fail(t);
      {
        ATerm e_62 = ATgetArgument(t, 1);
        if(((ATgetType(e_62) == AT_LIST) && !(ATisEmpty(e_62))))
          {
            f_162 = ATgetFirst((ATermList) e_62);
            g_162 = (ATerm) ATgetNext((ATermList) e_62);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_162, f_162), (ATerm) ATmakeAppl(sym__2, e_162, g_162));
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm h_162 = NULL,i_162 = NULL;
  if(match_cons(t, sym__2))
    {
      h_162 = ATgetArgument(t, 0);
      i_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_162), h_162);
  return(t);
}
static ATerm d_13 (ATerm w_935, ATerm b_936, ATerm p_98, ATerm t)
{
  ATerm y_161 = NULL,z_161 = NULL,a_162 = NULL,b_162 = NULL;
  t = SSL_explode_term(b_936);
  if(match_cons(t, sym__2))
    {
      y_161 = ATgetArgument(t, 0);
      a_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_935);
  if(match_cons(t, sym__2))
    {
      if((y_161 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      z_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_161, a_162);
  t = genzip_4_0(d_16, g_16, h_16, _id, t);
  b_162 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_162, p_98);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm u_148 (ATerm), ATerm v_148 (ATerm), ATerm t)
{
  static ATerm k_162 (ATerm t);
  static ATerm k_162 (ATerm t)
  {
    ATerm h_62 = t;
    int i_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_148(t);
        LocalPopChoice(i_62);
      }
    else
      {
        t = h_62;
        t = v_148(t);
        t = k_162(t);
      }
    return(t);
  }
  t = k_162(t);
  return(t);
}
ATerm for_3_0 (ATerm x_148 (ATerm), ATerm y_148 (ATerm), ATerm z_148 (ATerm), ATerm t)
{
  t = x_148(t);
  t = while_not_2_0(y_148, z_148, t);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm r_162 = NULL;
  r_162 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, r_162);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm s_162 = NULL,t_162 = NULL,u_162 = NULL,v_162 = NULL,s_28 = NULL;
  v_162 = t;
  if(match_cons(t, sym__2))
    {
      t_162 = ATgetArgument(t, 0);
      u_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_162);
  s_162 = t;
  t = u_162;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_162, u_162);
  s_28 = t;
  t = SSLsetAnnotations(s_28, s_162);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm p_163 = NULL,q_163 = NULL,r_163 = NULL,x_163 = NULL,y_163 = NULL;
  p_163 = t;
  if(match_cons(t, sym__2))
    {
      q_163 = ATgetArgument(t, 0);
      r_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_163;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_163 = ATgetFirst((ATermList) t);
      y_163 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_62 = t;
        int k_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_164(q_163, r_163, p_163, t);
            LocalPopChoice(k_62);
          }
        else
          {
            t = j_62;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_163), x_163), y_163);
          }
      }
    }
  else
    {
      t = i_164(q_163, r_163, p_163, t);
    }
  return(t);
}
static ATerm i_164 (ATerm w_162, ATerm x_162, ATerm y_162, ATerm t)
{
  ATerm z_162 = NULL,d_163 = NULL,t_28 = NULL,g_163 = NULL,h_163 = NULL,i_163 = NULL,j_163 = NULL;
  t = SSLgetAnnotations(y_162);
  z_162 = t;
  t = x_162;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_163 = ATgetFirst((ATermList) t);
      j_163 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_163;
  if(match_cons(t, sym__2))
    {
      h_163 = ATgetArgument(t, 0);
      i_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_62 = t;
    int n_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_163;
        if((h_163 != t))
          {
            _fail(t);
          }
        t = j_163;
        LocalPopChoice(n_62);
      }
    else
      {
        t = m_62;
        t = x_162;
        t = d_13(h_163, i_163, j_163, t);
      }
  }
  d_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_162, d_163);
  t_28 = t;
  t = SSLsetAnnotations(t_28, z_162);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm h_164 = NULL;
  if(match_cons(t, sym__2))
    {
      h_164 = ATgetArgument(t, 0);
      if((h_164 != ATgetArgument(t, 1)))
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
  ATerm o_62 = t;
  int p_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_16, l_16, m_16, t);
      LocalPopChoice(p_62);
    }
  else
    {
      t = o_62;
      {
        ATerm c_164 = NULL,d_164 = NULL,e_164 = NULL;
        c_164 = t;
        if(match_cons(t, sym__2))
          {
            d_164 = ATgetArgument(t, 0);
            e_164 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_164;
        t = b_13(n_16, d_164, e_164, t);
      }
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm i_82 = NULL,j_82 = NULL;
  if(match_cons(t, sym__2))
    {
      i_82 = ATgetArgument(t, 0);
      j_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_12(a_17, i_82, j_82, t);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm k_82 = NULL;
  if(match_cons(t, sym__2))
    {
      k_82 = ATgetArgument(t, 0);
      if((k_82 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm z_82 = NULL,a_83 = NULL;
  if(match_cons(t, sym__2))
    {
      z_82 = ATgetArgument(t, 0);
      a_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_12(f_17, z_82, a_83, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm b_83 = NULL;
  if(match_cons(t, sym__2))
    {
      b_83 = ATgetArgument(t, 0);
      if((b_83 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm g_176 (ATerm), ATerm h_176 (ATerm), ATerm i_176 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm w_164 (ATerm t);
  static ATerm w_164 (ATerm t)
  {
    ATerm q_62 = t;
    int s_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_176(t);
        LocalPopChoice(s_62);
      }
    else
      {
        t = q_62;
        {
          ATerm u_62 = t;
          int x_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_164 = NULL,l_164 = NULL,b_82 = NULL,d_82 = NULL;
              k_164 = t;
              t = h_176(t);
              l_164 = t;
              t = k_164;
              {
                static ATerm o_16 (ATerm t);
                static ATerm o_16 (ATerm t)
                {
                  ATerm n_164 = NULL;
                  t = w_164(t);
                  n_164 = t;
                  t = (ATerm) ATmakeAppl(sym__2, n_164, l_164);
                  t = diff_0_0(t);
                  return(t);
                }
                t = i_176(o_16, w_164, w_16, t);
              }
              d_82 = t;
              t = SSL_explode_term(d_82);
              if(match_cons(t, sym__2))
                {
                  ATerm y_62 = ATgetArgument(t, 0);
                  b_82 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_82;
              t = foldr_3_0(x_16, y_16, _id, t);
              LocalPopChoice(x_62);
            }
          else
            {
              t = u_62;
              {
                ATerm o_82 = NULL,p_82 = NULL;
                p_82 = t;
                t = SSL_explode_term(p_82);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_63 = ATgetArgument(t, 0);
                    o_82 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_82;
                t = foldr_3_0(c_17, e_17, w_164, t);
              }
            }
        }
      }
    return(t);
  }
  t = w_164(t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm j_165 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_165);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm j_63 = t;
  int l_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_63);
    }
  else
    {
      t = j_63;
      {
        ATerm m_63 = t;
        int p_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_63);
          }
        else
          {
            t = m_63;
            {
              ATerm q_63 = t;
              int d_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_165 = NULL,m_165 = NULL,n_165 = NULL,o_165 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_165 = ATgetArgument(t, 0);
                      m_165 = ATgetArgument(t, 1);
                      n_165 = ATgetArgument(t, 2);
                      o_165 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_165;
                  t = map_1_0(j_17, t);
                  LocalPopChoice(d_64);
                }
              else
                {
                  t = q_63;
                  {
                    ATerm e_64 = t;
                    int f_64 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_64);
                      }
                    else
                      {
                        t = e_64;
                        t = dynrule_targs_1_0(k_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm v_165 = NULL;
  ATerm g_64 = t;
  int h_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_165 = ATgetArgument(t, 0);
          {
            ATerm i_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_64);
      t = v_165;
    }
  else
    {
      t = g_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_165 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_165;
    }
  return(t);
}
static ATerm k_17 (ATerm t)
{
  t = map_1_0(l_17, t);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm a_166 = NULL;
  ATerm j_64 = t;
  int l_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_166 = ATgetArgument(t, 0);
          {
            ATerm m_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_64);
      t = a_166;
    }
  else
    {
      t = j_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_166 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_166;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm c_165 = NULL,g_165 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      g_165 = ATgetArgument(t, 0);
      t = g_165;
      if(match_cons(t, sym_Rule_3))
        {
          c_165 = ATgetArgument(t, 0);
          {
            ATerm n_64 = ATgetArgument(t, 1);
          }
          {
            ATerm o_64 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = c_165;
      t = free_vars_3_0(g_17, h_17, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          g_165 = ATgetArgument(t, 0);
          {
            ATerm q_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = g_165;
    }
  return(t);
}
ATerm Var_1_0 (ATerm l_119 (ATerm), ATerm t)
{
  ATerm g_166 = NULL,h_166 = NULL,i_166 = NULL,j_166 = NULL,w_28 = NULL;
  j_166 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_166);
  g_166 = t;
  t = h_166;
  t = l_119(t);
  i_166 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_166);
  w_28 = t;
  t = SSLsetAnnotations(w_28, g_166);
  return(t);
}
static ATerm f_13 (ATerm b_175 (ATerm), ATerm c_175 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_96, ATerm v_96, ATerm u_96, ATerm t)
{
  static ATerm m_17 (ATerm t);
  static ATerm n_17 (ATerm t);
  static ATerm m_17 (ATerm t)
  {
    ATerm l_166 = NULL;
    l_166 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_166, u_96);
    t = b_175(t);
    return(t);
  }
  static ATerm n_17 (ATerm t)
  {
    ATerm m_166 = NULL;
    m_166 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_166, v_96);
    t = b_175(t);
    return(t);
  }
  t = w_96;
  t = c_175(m_17, n_17, _id, t);
  return(t);
}
ATerm at_end_1_0 (ATerm v_156 (ATerm), ATerm t)
{
  static ATerm i_167 (ATerm t);
  static ATerm i_167 (ATerm t)
  {
    ATerm f_167 = NULL,g_167 = NULL,h_167 = NULL;
    h_167 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_167 = ATgetFirst((ATermList) t);
        g_167 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_83 = NULL,j_83 = NULL,l_29 = NULL;
          t = SSLgetAnnotations(h_167);
          f_83 = t;
          t = g_167;
          t = i_167(t);
          j_83 = t;
          t = (ATerm) ATinsert(CheckATermList(j_83), f_167);
          l_29 = t;
          t = SSLsetAnnotations(l_29, f_83);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_167;
        t = v_156(t);
      }
    return(t);
  }
  t = i_167(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_166 = NULL,q_166 = NULL,r_166 = NULL;
  p_166 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_166;
    }
  else
    {
      static ATerm o_17 (ATerm t);
      static ATerm o_17 (ATerm t)
      {
        t = not_null(r_166);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_166 = ATgetFirst((ATermList) t);
          if(((r_166 != NULL) && (r_166 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_166 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_166;
      t = at_end_1_0(o_17, t);
    }
  return(t);
}
static ATerm u_167 (ATerm m_167, ATerm t)
{
  ATerm n_167 = NULL;
  t = SSL_explode_term(m_167);
  if(match_cons(t, sym__2))
    {
      ATerm t_64 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_64) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      n_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_167;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm p_167 = NULL,q_167 = NULL,r_167 = NULL;
  r_167 = t;
  if(match_cons(t, sym__2))
    {
      p_167 = ATgetArgument(t, 0);
      q_167 = ATgetArgument(t, 1);
      {
        ATerm b_65 = t;
        int f_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm p_17 (ATerm t);
            static ATerm p_17 (ATerm t)
            {
              t = q_167;
              return(t);
            }
            t = p_167;
            t = at_end_1_0(p_17, t);
            LocalPopChoice(f_65);
          }
        else
          {
            t = b_65;
            t = u_167(r_167, t);
          }
      }
    }
  else
    {
      t = u_167(r_167, t);
    }
  return(t);
}
static ATerm q_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_65 = ATgetArgument(t, 0);
      if(((ATgetType(g_65) != AT_LIST) || !(ATisEmpty(g_65))))
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
static ATerm r_17 (ATerm t)
{
  ATerm c_168 = NULL,d_168 = NULL,e_168 = NULL,f_168 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_65 = ATgetArgument(t, 0);
      if(((ATgetType(o_65) == AT_LIST) && !(ATisEmpty(o_65))))
        {
          c_168 = ATgetFirst((ATermList) o_65);
          d_168 = (ATerm) ATgetNext((ATermList) o_65);
        }
      else
        _fail(t);
      {
        ATerm p_65 = ATgetArgument(t, 1);
        if(((ATgetType(p_65) == AT_LIST) && !(ATisEmpty(p_65))))
          {
            e_168 = ATgetFirst((ATermList) p_65);
            f_168 = (ATerm) ATgetNext((ATermList) p_65);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_168, e_168), (ATerm) ATmakeAppl(sym__2, d_168, f_168));
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm g_168 = NULL,h_168 = NULL;
  if(match_cons(t, sym__2))
    {
      g_168 = ATgetArgument(t, 0);
      h_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_168), g_168);
  return(t);
}
static ATerm g_13 (ATerm v_174 (ATerm), ATerm w_174 (ATerm (ATerm), ATerm), ATerm o_96, ATerm r_96, ATerm t)
{
  ATerm w_167 = NULL,x_167 = NULL,y_167 = NULL,z_167 = NULL,b_168 = NULL;
  t = o_96;
  t = v_174(t);
  w_167 = t;
  t = map_1_0(new_0_0, t);
  x_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_167, x_167);
  t = genzip_4_0(q_17, r_17, s_17, _id, t);
  b_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_168, r_96);
  t = conc_0_0(t);
  y_167 = t;
  t = o_96;
  {
    static ATerm t_17 (ATerm t);
    static ATerm t_17 (ATerm t)
    {
      t = x_167;
      return(t);
    }
    t = w_174(t_17, t);
  }
  z_167 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_167, r_96, y_167);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm m_168 = NULL,n_168 = NULL,o_168 = NULL,p_168 = NULL,q_168 = NULL,r_168 = NULL,s_168 = NULL;
  o_168 = t;
  if(match_cons(t, sym__2))
    {
      p_168 = ATgetArgument(t, 0);
      q_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_168;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_168 = ATgetFirst((ATermList) t);
      s_168 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_168;
  if(match_cons(t, sym__2))
    {
      m_168 = ATgetArgument(t, 0);
      n_168 = ATgetArgument(t, 1);
      {
        ATerm q_65 = t;
        int r_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_168;
            if((p_168 != t))
              {
                _fail(t);
              }
            t = n_168;
            LocalPopChoice(r_65);
          }
        else
          {
            t = q_65;
            t = (ATerm) ATmakeAppl(sym__2, p_168, s_168);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, p_168, s_168);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm c_166 (ATerm), ATerm t)
{
  static ATerm o_169 (ATerm t);
  static ATerm o_169 (ATerm t)
  {
    ATerm s_65 = t;
    int t_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_166(t);
        LocalPopChoice(t_65);
      }
    else
      {
        t = s_65;
        {
          ATerm l_169 = NULL,m_169 = NULL,n_169 = NULL;
          static ATerm u_17 (ATerm t);
          static ATerm u_17 (ATerm t)
          {
            ATerm v_83 = NULL;
            v_83 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_83, not_null(n_169));
            t = o_169(t);
            return(t);
          }
          l_169 = t;
          if(match_cons(t, sym__2))
            {
              m_169 = ATgetArgument(t, 0);
              if(((n_169 != NULL) && (n_169 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                n_169 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_169;
          t = SRTS_all(u_17, t);
        }
      }
    return(t);
  }
  t = o_169(t);
  return(t);
}
ATerm rename_4_0 (ATerm q_174 (ATerm (ATerm), ATerm), ATerm r_174 (ATerm), ATerm s_174 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t_174 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_169 = NULL;
  static ATerm h_170 (ATerm t);
  static ATerm h_170 (ATerm t)
  {
    static ATerm v_17 (ATerm t);
    static ATerm v_17 (ATerm t)
    {
      ATerm b_170 = NULL,c_170 = NULL,d_170 = NULL;
      b_170 = t;
      if(match_cons(t, sym__2))
        {
          c_170 = ATgetArgument(t, 0);
          d_170 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm u_65 = t;
        int v_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm w_17 (ATerm t);
            static ATerm w_17 (ATerm t)
            {
              ATerm g_170 = NULL;
              g_170 = t;
              t = (ATerm) ATmakeAppl(sym__2, g_170, d_170);
              t = lookup_0_0(t);
              return(t);
            }
            t = c_170;
            t = q_174(w_17, t);
            LocalPopChoice(v_65);
          }
        else
          {
            t = u_65;
            {
              ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL;
              t = b_170;
              t = g_13(r_174, t_174, c_170, d_170, t);
              if(match_cons(t, sym__3))
                {
                  f_84 = ATgetArgument(t, 0);
                  g_84 = ATgetArgument(t, 1);
                  h_84 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = f_13(h_170, s_174, f_84, g_84, h_84, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(v_17, t);
    return(t);
  }
  s_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_169, (ATerm) ATempty);
  t = h_170(t);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm w_65 = t;
  int x_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_65);
    }
  else
    {
      t = w_65;
      {
        ATerm y_65 = t;
        int z_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_170 = NULL,o_170 = NULL,p_170 = NULL,v_170 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                n_170 = ATgetArgument(t, 0);
                o_170 = ATgetArgument(t, 1);
                p_170 = ATgetArgument(t, 2);
                v_170 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = p_170;
            t = map_1_0(y_17, t);
            LocalPopChoice(z_65);
          }
        else
          {
            t = y_65;
            {
              ATerm b_66 = t;
              int c_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Bind8_0_0(t);
                  LocalPopChoice(c_66);
                }
              else
                {
                  t = b_66;
                  t = dynrule_targs_1_0(z_17, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm e_171 = NULL;
  ATerm e_66 = t;
  int f_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_171 = ATgetArgument(t, 0);
          {
            ATerm g_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_66);
      t = e_171;
    }
  else
    {
      t = e_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_171 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_171;
    }
  return(t);
}
static ATerm z_17 (ATerm t)
{
  t = map_1_0(b_18, t);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm j_171 = NULL;
  ATerm h_66 = t;
  int i_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_171 = ATgetArgument(t, 0);
          {
            ATerm j_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_66);
      t = j_171;
    }
  else
    {
      t = h_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_171 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_171;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, x_17, tboundin_3_0, tpaste_1_0, t);
  t = srename_0_0(t);
  return(t);
}
static ATerm m_13 (ATerm m_48, ATerm n_48, ATerm t)
{
  ATerm m_171 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_48, n_48);
  t = e_14(m_48, n_48, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_171 = ATgetFirst((ATermList) t);
      {
        ATerm k_66 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_171;
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm k_172 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      k_172 = ATgetArgument(t, 0);
      {
        ATerm l_66 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = k_172;
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm l_172 = NULL,n_172 = NULL,o_172 = NULL,p_172 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      n_172 = ATgetArgument(t, 0);
      p_172 = ATgetArgument(t, 1);
      l_172 = ATgetArgument(t, 2);
      t = n_172;
      if(match_cons(t, sym_SVar_1))
        {
          o_172 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_172;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_172;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_172;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          n_172 = ATgetArgument(t, 0);
          p_172 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_172;
      if(match_cons(t, sym_SVar_1))
        {
          o_172 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_172;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_172;
    }
  return(t);
}
static ATerm i_18 (ATerm t)
{
  ATerm t_172 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_172 = ATgetArgument(t, 0);
      {
        ATerm m_66 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_172;
  return(t);
}
static ATerm k_18 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_66 = ATgetArgument(t, 0);
      if(((ATgetType(n_66) != AT_LIST) || !(ATisEmpty(n_66))))
        _fail(t);
      {
        ATerm o_66 = ATgetArgument(t, 1);
        if(((ATgetType(o_66) != AT_LIST) || !(ATisEmpty(o_66))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm u_172 = NULL,v_172 = NULL,w_172 = NULL,x_172 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_66 = ATgetArgument(t, 0);
      if(((ATgetType(p_66) == AT_LIST) && !(ATisEmpty(p_66))))
        {
          u_172 = ATgetFirst((ATermList) p_66);
          v_172 = (ATerm) ATgetNext((ATermList) p_66);
        }
      else
        _fail(t);
      {
        ATerm q_66 = ATgetArgument(t, 1);
        if(((ATgetType(q_66) == AT_LIST) && !(ATisEmpty(q_66))))
          {
            w_172 = ATgetFirst((ATermList) q_66);
            x_172 = (ATerm) ATgetNext((ATermList) q_66);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_172, w_172), (ATerm) ATmakeAppl(sym__2, v_172, x_172));
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm y_172 = NULL,z_172 = NULL;
  if(match_cons(t, sym__2))
    {
      y_172 = ATgetArgument(t, 0);
      z_172 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_172), y_172);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm a_173 = NULL,b_173 = NULL;
  if(match_cons(t, sym__2))
    {
      a_173 = ATgetArgument(t, 0);
      b_173 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_173), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_173)));
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm x_171 = NULL,y_171 = NULL,z_171 = NULL,a_172 = NULL,b_172 = NULL,c_172 = NULL,d_172 = NULL,e_172 = NULL,f_172 = NULL,g_172 = NULL,i_172 = NULL,j_172 = NULL,z_84 = NULL,a_85 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm r_66 = ATgetArgument(t, 0);
      if(match_cons(r_66, sym_SVar_1))
        {
          z_171 = ATgetArgument(r_66, 0);
        }
      else
        _fail(t);
      b_172 = ATgetArgument(t, 1);
      f_172 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_171), (ATerm)ATempty, (ATerm) ATempty);
  z_84 = t;
  t = term_s_66;
  a_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_66, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_171), (ATerm)ATempty, (ATerm) ATempty));
  t = m_13(a_85, z_84, t);
  if(match_cons(t, sym_Defined_4))
    {
      ATerm t_66 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_66) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      x_171 = ATgetArgument(t, 1);
      y_171 = ATgetArgument(t, 2);
      e_172 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, z_171, x_171, e_172, y_171);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((z_171 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_172 = ATgetArgument(t, 1);
      {
        ATerm u_66 = ATgetArgument(t, 2);
      }
      c_172 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = a_172;
  t = map_1_0(d_18, t);
  j_172 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_172, b_172, c_172);
  t = substitute_2_0(h_18, _id, t);
  d_172 = t;
  t = e_172;
  t = map_1_0(i_18, t);
  g_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_172, g_172);
  t = genzip_4_0(k_18, l_18, m_18, p_18, t);
  i_172 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, g_172, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_172), d_172));
  t = downup_1_0(q_18, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm l_173 = NULL,m_173 = NULL,n_173 = NULL;
  l_173 = t;
  t = term_p_40;
  m_173 = t;
  t = (ATerm) ATinsert(ATempty, term_v_66);
  n_173 = t;
  t = SSL_printnl(m_173, n_173);
  t = l_173;
  return(t);
}
static ATerm s_18 (ATerm t)
{
  t = debug_1_0(t_18, t);
  return(t);
}
static ATerm t_18 (ATerm t)
{
  t = term_w_66;
  return(t);
}
static ATerm u_18 (ATerm t)
{
  ATerm d_174 = NULL,e_174 = NULL,f_174 = NULL;
  d_174 = t;
  t = term_p_40;
  e_174 = t;
  t = (ATerm) ATinsert(ATempty, term_x_66);
  f_174 = t;
  t = SSL_printnl(e_174, f_174);
  t = d_174;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm j_173 = NULL,k_173 = NULL;
  k_173 = t;
  t = new_0_0(t);
  j_173 = t;
  {
    ATerm y_66 = t;
    int a_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_67, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_173), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(a_67);
      }
    else
      {
        t = y_66;
        t = if_verbose2_1_0(r_18, t);
        _fail(t);
      }
  }
  {
    ATerm d_67 = t;
    int e_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_173 = NULL,t_173 = NULL,u_173 = NULL,v_173 = NULL,w_173 = NULL,b_174 = NULL,c_174 = NULL;
        o_173 = t;
        if(match_cons(t, sym_LChoice_2))
          {
            t_173 = ATgetArgument(t, 0);
            c_174 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_173;
        if(match_cons(t, sym_CallT_3))
          {
            u_173 = ATgetArgument(t, 0);
            w_173 = ATgetArgument(t, 1);
            b_174 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = u_173;
        if(match_cons(t, sym_SVar_1))
          {
            v_173 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_173;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_174;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_174;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        t = v_173;
        if((j_173 != t))
          {
            _fail(t);
          }
        t = o_173;
        LocalPopChoice(e_67);
      }
    else
      {
        t = d_67;
        t = if_verbose1_1_0(s_18, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(u_18, t);
  t = k_173;
  return(t);
}
ATerm check_library_definitions_0_0 (ATerm t)
{
  t = check_that_try_is_try_0_0(t);
  t = check_that_innermost_is_innermost_0_0(t);
  t = check_that_bottomup_is_bottomup_0_0(t);
  return(t);
}
static ATerm n_13 (ATerm e_150 (ATerm), ATerm k_46, ATerm i_46, ATerm t)
{
  ATerm g_174 = NULL,h_174 = NULL,i_174 = NULL,j_174 = NULL,k_174 = NULL,l_174 = NULL,m_174 = NULL,n_174 = NULL;
  j_174 = t;
  t = e_150(t);
  g_174 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_174, k_46, i_46);
  t = f_14(g_174, k_46, i_46, t);
  {
    ATerm f_67 = t;
    int g_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_174 = NULL;
        t = term_k_35;
        x_174 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_174, term_k_35);
        t = e_14(g_174, x_174, t);
        {
          ATerm h_67 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_67;
            }
        }
        LocalPopChoice(g_67);
      }
    else
      {
        t = f_67;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_174 = ATgetFirst((ATermList) t);
      i_174 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_174, term_k_35, (ATerm) ATinsert(CheckATermList(i_174), (ATerm) ATinsert(CheckATermList(h_174), k_46)));
  t = lookup_table_0_1(g_174, t);
  n_174 = t;
  t = term_k_35;
  k_174 = t;
  t = (ATerm) ATinsert(CheckATermList(i_174), (ATerm) ATinsert(CheckATermList(h_174), k_46));
  l_174 = t;
  t = n_174;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(k_174, l_174, m_174, t);
  t = j_174;
  return(t);
}
ATerm map_1_0 (ATerm g_156 (ATerm), ATerm t)
{
  static ATerm o_175 (ATerm t);
  static ATerm o_175 (ATerm t)
  {
    ATerm l_175 = NULL,m_175 = NULL,n_175 = NULL;
    l_175 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_175;
      }
    else
      {
        ATerm i_85 = NULL,n_85 = NULL,q_85 = NULL,p_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_175 = ATgetFirst((ATermList) t);
            n_175 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_175);
        i_85 = t;
        t = m_175;
        t = g_156(t);
        n_85 = t;
        t = n_175;
        t = o_175(t);
        q_85 = t;
        t = (ATerm) ATinsert(CheckATermList(q_85), n_85);
        p_29 = t;
        t = SSLsetAnnotations(p_29, i_85);
      }
    return(t);
  }
  t = o_175(t);
  return(t);
}
ATerm Cons_2_0 (ATerm s_137 (ATerm), ATerm t_137 (ATerm), ATerm t)
{
  ATerm q_175 = NULL,r_175 = NULL,s_175 = NULL,t_175 = NULL,u_175 = NULL,v_175 = NULL,s_29 = NULL;
  v_175 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_175 = ATgetFirst((ATermList) t);
      s_175 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_175);
  q_175 = t;
  t = r_175;
  t = s_137(t);
  t_175 = t;
  t = s_175;
  t = t_137(t);
  u_175 = t;
  t = (ATerm) ATinsert(CheckATermList(u_175), t_175);
  s_29 = t;
  t = SSLsetAnnotations(s_29, q_175);
  return(t);
}
static ATerm p_13 (ATerm w_37, ATerm x_37, ATerm t)
{
  ATerm w_175 = NULL;
  t = SSL_fputc(w_37, x_37);
  w_175 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_175);
  return(t);
}
static ATerm q_13 (ATerm n_43, ATerm o_43, ATerm t)
{
  ATerm x_175 = NULL;
  t = SSL_write_term_to_stream_text(n_43, o_43);
  x_175 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_175);
  return(t);
}
static ATerm t_13 (ATerm s_149 (ATerm), ATerm j_381, ATerm t_43, ATerm t)
{
  ATerm y_175 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_381, term_i_67);
  t = y_13(t);
  y_175 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_175, t_43);
  t = s_149(t);
  t = fclose_0_0(t);
  t = t_43;
  return(t);
}
static ATerm r_13 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm z_175 = NULL;
  t = SSL_write_term_to_stream_baf(j_43, k_43);
  z_175 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_175);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm k_176 = NULL,l_176 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_67 = ATgetArgument(t, 0);
      if(match_cons(j_67, sym_Stream_1))
        {
          k_176 = ATgetArgument(j_67, 0);
        }
      else
        _fail(t);
      l_176 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_13(k_176, l_176, t);
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm m_176 = NULL,n_176 = NULL,o_176 = NULL,p_176 = NULL,q_176 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_67 = ATgetArgument(t, 0);
      if(match_cons(k_67, sym_Stream_1))
        {
          p_176 = ATgetArgument(k_67, 0);
        }
      else
        _fail(t);
      q_176 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_13(p_176, q_176, t);
  m_176 = t;
  t = term_x_24;
  n_176 = t;
  t = m_176;
  if(match_cons(t, sym_Stream_1))
    {
      o_176 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_24, m_176);
  t = p_13(n_176, o_176, t);
  return(t);
}
ATerm output_1_0 (ATerm w_170 (ATerm), ATerm t)
{
  ATerm a_176 = NULL,b_176 = NULL;
  t = w_170(t);
  b_176 = t;
  {
    ATerm m_67 = t;
    int n_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_176 = NULL,d_176 = NULL;
        t = term_r_23;
        c_176 = t;
        t = term_o_67;
        d_176 = t;
        t = term_p_67;
        t = e_14(c_176, d_176, t);
        LocalPopChoice(n_67);
      }
    else
      {
        t = m_67;
        t = term_q_67;
      }
  }
  a_176 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_176, b_176);
  {
    ATerm r_67 = t;
    int s_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_176 = NULL,f_176 = NULL;
        t = term_r_23;
        e_176 = t;
        t = term_t_67;
        f_176 = t;
        t = term_u_67;
        t = e_14(e_176, f_176, t);
        t = (ATerm) ATmakeAppl(sym__2, a_176, b_176);
        LocalPopChoice(s_67);
        if(match_cons(t, sym__2))
          {
            ATerm v_67 = ATgetArgument(t, 0);
            ATerm w_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_13(v_18, a_176, b_176, t);
      }
    else
      {
        t = r_67;
        if(match_cons(t, sym__2))
          {
            ATerm x_67 = ATgetArgument(t, 0);
            ATerm y_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_13(w_18, a_176, b_176, t);
      }
  }
  return(t);
}
static ATerm e_177 (ATerm y_176, ATerm t)
{
  t = SSL_fclose(y_176);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_177 = NULL,c_177 = NULL;
  c_177 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_177 = ATgetArgument(t, 0);
      {
        ATerm z_67 = t;
        int a_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_177);
            LocalPopChoice(a_68);
          }
        else
          {
            t = z_67;
            t = e_177(c_177, t);
          }
      }
    }
  else
    {
      t = e_177(c_177, t);
    }
  return(t);
}
static ATerm u_13 (ATerm p_43, ATerm t)
{
  t = SSL_read_term_from_stream(p_43);
  return(t);
}
static ATerm w_13 (ATerm z_35, ATerm a_36, ATerm t)
{
  t = SSL_strcat(z_35, a_36);
  return(t);
}
static ATerm x_13 (ATerm y_37, ATerm z_37, ATerm t)
{
  ATerm f_177 = NULL;
  t = SSL_fopen(y_37, z_37);
  f_177 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_177);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_177 = NULL;
  t = SSL_stdin_stream();
  g_177 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_177);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_177 = NULL;
  t = SSL_stdout_stream();
  h_177 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_177);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_177 = NULL;
  t = SSL_stderr_stream();
  i_177 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_177);
  return(t);
}
static ATerm p_178 (ATerm o_177, ATerm t)
{
  ATerm p_177 = NULL;
  t = SSL_explode_term(o_177);
  if(match_cons(t, sym__2))
    {
      ATerm b_68 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_68) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_68 = ATgetArgument(t, 1);
        if(((ATgetType(d_68) == AT_LIST) && !(ATisEmpty(d_68))))
          {
            p_177 = ATgetFirst((ATermList) d_68);
            {
              ATerm f_68 = (ATerm) ATgetNext((ATermList) d_68);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_177;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_177;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_177;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_177;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_178 (ATerm s_177, ATerm t_177, ATerm u_177, ATerm t)
{
  ATerm v_177 = NULL,w_177 = NULL,x_177 = NULL,a_178 = NULL,y_29 = NULL;
  t = SSLgetAnnotations(u_177);
  x_177 = t;
  t = s_177;
  if(match_cons(t, sym_Path_1))
    {
      a_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_178, t_177);
  y_29 = t;
  t = SSLsetAnnotations(y_29, x_177);
  if(match_cons(t, sym__2))
    {
      v_177 = ATgetArgument(t, 0);
      w_177 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_13(v_177, w_177, t);
  return(t);
}
static ATerm r_178 (ATerm c_178, ATerm d_178, ATerm e_178, ATerm t)
{
  ATerm f_178 = NULL,g_178 = NULL,h_178 = NULL,k_178 = NULL,h_30 = NULL;
  t = SSLgetAnnotations(e_178);
  h_178 = t;
  t = SSL_is_string(c_178);
  k_178 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_178, d_178);
  h_30 = t;
  t = SSLsetAnnotations(h_30, h_178);
  if(match_cons(t, sym__2))
    {
      f_178 = ATgetArgument(t, 0);
      g_178 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_13(f_178, g_178, t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm m_178 = NULL,n_178 = NULL,o_178 = NULL;
  m_178 = t;
  if(match_cons(t, sym__2))
    {
      n_178 = ATgetArgument(t, 0);
      o_178 = ATgetArgument(t, 1);
      {
        ATerm h_68 = t;
        int k_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_178(m_178, t);
            LocalPopChoice(k_68);
          }
        else
          {
            t = h_68;
            {
              ATerm m_68 = t;
              int n_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_178(n_178, o_178, m_178, t);
                  LocalPopChoice(n_68);
                }
              else
                {
                  t = m_68;
                  t = r_178(n_178, o_178, m_178, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_178(m_178, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_178 = NULL,u_178 = NULL,v_178 = NULL,c_179 = NULL;
  c_179 = t;
  {
    ATerm p_68 = t;
    int q_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_179, term_s_68);
        t = y_13(t);
        LocalPopChoice(q_68);
      }
    else
      {
        t = p_68;
        {
          ATerm g_86 = NULL,h_86 = NULL;
          t = term_u_68;
          h_86 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_68, c_179);
          t = w_13(h_86, c_179, t);
          g_86 = t;
          t = SSL_perror(g_86);
          _fail(t);
        }
      }
  }
  u_178 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_13(v_178, t);
  t_178 = t;
  t = u_178;
  t = fclose_0_0(t);
  t = t_178;
  return(t);
}
ATerm input_1_0 (ATerm x_170 (ATerm), ATerm t)
{
  ATerm v_68 = t;
  int w_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_179 = NULL,g_179 = NULL;
      t = term_r_23;
      f_179 = t;
      t = term_x_68;
      g_179 = t;
      t = term_b_69;
      t = e_14(f_179, g_179, t);
      LocalPopChoice(w_68);
    }
  else
    {
      t = v_68;
      t = term_c_69;
    }
  t = ReadFromFile_0_0(t);
  t = x_170(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_179 = NULL,i_179 = NULL;
  t = term_r_23;
  h_179 = t;
  t = term_f_69;
  i_179 = t;
  t = term_g_69;
  t = e_14(h_179, i_179, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_179 = NULL,l_179 = NULL,m_179 = NULL;
  k_179 = t;
  {
    ATerm h_69 = t;
    int i_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_179;
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
            t = k_179;
          }
        LocalPopChoice(i_69);
      }
    else
      {
        t = h_69;
        t = (ATerm) ATinsert(ATempty, k_179);
      }
  }
  l_179 = t;
  t = term_q_67;
  m_179 = t;
  t = SSL_printnl(m_179, l_179);
  t = k_179;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_179 = NULL,s_179 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_179 = ATgetFirst((ATermList) t);
      s_179 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_180 = NULL,n_180 = NULL;
        static ATerm x_18 (ATerm t);
        static ATerm x_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_180)), not_null(n_180));
          return(t);
        }
        t = s_179;
        t = r_0(t);
        if(((m_180 != NULL) && (m_180 != t)))
          _fail(t);
        else
          m_180 = t;
        t = r_179;
        t = p_0(t);
        if(((n_180 != NULL) && (n_180 != t)))
          _fail(t);
        else
          n_180 = t;
        t = s_179;
        t = reverse_acc_2_0(p_0, x_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_69;
      t = r_0(t);
    }
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm v_180 = NULL,y_180 = NULL,z_180 = NULL,k_30 = NULL;
  z_180 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_180 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_180);
  v_180 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_180);
  k_30 = t;
  t = SSLsetAnnotations(k_30, v_180);
  return(t);
}
static ATerm z_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm d_181 = NULL;
  d_181 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_181), term_n_69);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm x_173 (ATerm), ATerm y_173 (ATerm), ATerm t)
{
  ATerm r_180 = NULL,s_180 = NULL;
  ATerm p_69 = t;
  int q_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_180 = NULL,u_180 = NULL;
      t = term_r_23;
      t_180 = t;
      t = term_f_69;
      u_180 = t;
      t = term_g_69;
      t = e_14(t_180, u_180, t);
      LocalPopChoice(q_69);
    }
  else
    {
      t = p_69;
      t = fetch_1_0(y_18, t);
    }
  {
    ATerm r_69 = t;
    int u_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_173(t);
        t = echo_0_0(t);
        LocalPopChoice(u_69);
      }
    else
      {
        t = r_69;
      }
  }
  t = term_w_69;
  t = echo_0_0(t);
  t = term_x_69;
  r_180 = t;
  t = term_y_69;
  s_180 = t;
  t = term_z_69;
  t = e_14(r_180, s_180, t);
  t = reverse_acc_2_0(_id, z_18, t);
  t = map_1_0(b_19, t);
  {
    ATerm a_70 = t;
    int c_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_181 = NULL;
        t = y_173(t);
        e_181 = t;
        t = (ATerm) ATinsert(CheckATermList(e_181), term_d_70);
        t = echo_0_0(t);
        LocalPopChoice(c_70);
      }
    else
      {
        t = a_70;
      }
  }
  return(t);
}
static ATerm k_19 (ATerm t)
{
  ATerm k_181 = NULL,l_181 = NULL,m_181 = NULL,m_30 = NULL;
  m_181 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_181);
  k_181 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, l_181);
  m_30 = t;
  t = SSLsetAnnotations(m_30, k_181);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_181 = NULL;
  h_181 = t;
  {
    ATerm j_70 = t;
    int k_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_181 = NULL,j_181 = NULL;
        t = term_r_23;
        i_181 = t;
        t = term_f_69;
        j_181 = t;
        t = term_g_69;
        t = e_14(i_181, j_181, t);
        LocalPopChoice(k_70);
      }
    else
      {
        t = j_70;
        t = fetch_1_0(k_19, t);
      }
  }
  t = h_181;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm l_19 (ATerm t)
{
  ATerm o_181 = NULL;
  o_181 = t;
  if(match_string(t, "-k"))
    {
      t = o_181;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_181;
    }
  return(t);
}
static ATerm o_19 (ATerm t)
{
  ATerm p_181 = NULL,q_181 = NULL,r_181 = NULL;
  p_181 = t;
  t = SSL_string_to_int(p_181);
  q_181 = t;
  t = term_n_70;
  r_181 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_70, q_181);
  t = h_14(r_181, q_181, t);
  t = p_181;
  return(t);
}
static ATerm t_19 (ATerm t)
{
  t = term_u_70;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_19, o_19, t_19, t);
  return(t);
}
static ATerm x_19 (ATerm t)
{
  ATerm t_181 = NULL;
  t_181 = t;
  if(match_string(t, "-S"))
    {
      t = t_181;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_181;
    }
  return(t);
}
static ATerm y_19 (ATerm t)
{
  ATerm u_181 = NULL,v_181 = NULL;
  t = term_b_24;
  u_181 = t;
  t = term_x_70;
  v_181 = t;
  t = term_a_71;
  t = h_14(u_181, v_181, t);
  t = term_d_71;
  return(t);
}
static ATerm z_19 (ATerm t)
{
  t = term_e_71;
  return(t);
}
static ATerm a_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_20 (ATerm t)
{
  ATerm w_181 = NULL,x_181 = NULL,y_181 = NULL;
  w_181 = t;
  t = SSL_string_to_int(w_181);
  x_181 = t;
  t = term_b_24;
  y_181 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_24, x_181);
  t = h_14(y_181, x_181, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_181);
  return(t);
}
static ATerm e_20 (ATerm t)
{
  t = term_f_71;
  return(t);
}
static ATerm f_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_20 (ATerm t)
{
  ATerm z_181 = NULL,a_182 = NULL;
  t = term_g_71;
  z_181 = t;
  t = term_m_69;
  a_182 = t;
  t = term_j_71;
  t = h_14(z_181, a_182, t);
  t = term_k_71;
  return(t);
}
static ATerm l_20 (ATerm t)
{
  t = term_l_71;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_71 = t;
  int n_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_19, y_19, z_19, t);
      LocalPopChoice(n_71);
    }
  else
    {
      t = m_71;
      {
        ATerm p_71 = t;
        int a_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_20, b_20, e_20, t);
            LocalPopChoice(a_72);
          }
        else
          {
            t = p_71;
            t = Option_3_0(f_20, i_20, l_20, t);
          }
      }
    }
  return(t);
}
static ATerm h_14 (ATerm a_95, ATerm b_95, ATerm t)
{
  ATerm b_182 = NULL,c_182 = NULL;
  t = term_r_23;
  b_182 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_23, a_95, b_95);
  t = lookup_table_0_1(b_182, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(a_95, b_95, c_182, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_23, a_95, b_95);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm g_182 = NULL,h_182 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_182 = NULL,j_182 = NULL,k_182 = NULL;
      t = term_m_69;
      t = g_0(t);
      i_182 = t;
      t = term_x_69;
      j_182 = t;
      t = term_y_69;
      k_182 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_69, term_y_69, i_182);
      t = f_14(j_182, k_182, i_182, t);
      _fail(t);
    }
  else
    {
      ATerm n_182 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_182 = ATgetFirst((ATermList) t);
          h_182 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_182;
      t = d_0(t);
      t = term_m_69;
      t = f_0(t);
      n_182 = t;
      t = (ATerm) ATinsert(CheckATermList(h_182), n_182);
    }
  return(t);
}
static ATerm m_20 (ATerm t)
{
  ATerm p_182 = NULL;
  p_182 = t;
  if(match_string(t, "-o"))
    {
      t = p_182;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_182;
    }
  return(t);
}
static ATerm p_20 (ATerm t)
{
  ATerm q_182 = NULL,r_182 = NULL;
  q_182 = t;
  t = term_o_67;
  r_182 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_67, q_182);
  t = h_14(r_182, q_182, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_182);
  return(t);
}
static ATerm r_20 (ATerm t)
{
  t = term_b_72;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_20, p_20, r_20, t);
  return(t);
}
static ATerm f_14 (ATerm x_47, ATerm y_47, ATerm v_47, ATerm t)
{
  ATerm t_182 = NULL,u_182 = NULL,v_182 = NULL,w_182 = NULL,x_182 = NULL;
  t_182 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_47, y_47);
  {
    ATerm c_72 = t;
    int d_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_72 = ATgetArgument(t, 0);
            ATerm g_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, x_47, y_47);
        t = e_14(x_47, y_47, t);
        LocalPopChoice(d_72);
      }
    else
      {
        t = c_72;
        t = (ATerm) ATempty;
      }
  }
  u_182 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_47, y_47, (ATerm) ATinsert(CheckATermList(u_182), v_47));
  t = lookup_table_0_1(x_47, t);
  x_182 = t;
  t = (ATerm) ATinsert(CheckATermList(u_182), v_47);
  v_182 = t;
  t = x_182;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(y_47, v_182, w_182, t);
  t = t_182;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm e_183 = NULL,f_183 = NULL,g_183 = NULL,h_183 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_183 = NULL,j_183 = NULL,k_183 = NULL;
      t = term_m_69;
      t = n_0(t);
      i_183 = t;
      t = term_x_69;
      j_183 = t;
      t = term_y_69;
      k_183 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_69, term_y_69, i_183);
      t = f_14(j_183, k_183, i_183, t);
      _fail(t);
    }
  else
    {
      ATerm o_183 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_183 = ATgetFirst((ATermList) t);
          f_183 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_183;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_183 = ATgetFirst((ATermList) t);
          h_183 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_183;
      t = j_0(t);
      t = g_183;
      t = l_0(t);
      o_183 = t;
      t = (ATerm) ATinsert(CheckATermList(h_183), o_183);
    }
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm q_183 = NULL;
  q_183 = t;
  if(match_string(t, "-i"))
    {
      t = q_183;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_183;
    }
  return(t);
}
static ATerm z_20 (ATerm t)
{
  ATerm r_183 = NULL,s_183 = NULL;
  r_183 = t;
  t = term_x_68;
  s_183 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_68, r_183);
  t = h_14(s_183, r_183, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, r_183);
  return(t);
}
static ATerm j_21 (ATerm t)
{
  t = term_h_72;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_20, z_20, j_21, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm t_183 = NULL,u_183 = NULL,v_183 = NULL,w_183 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_69;
  t = whoami_0_0(t);
  t_183 = t;
  t = term_p_40;
  v_183 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_72), t_183);
  w_183 = t;
  t = SSL_printnl(v_183, w_183);
  t = term_l_72;
  u_183 = t;
  t = SSL_exit(u_183);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm x_183 = NULL,y_183 = NULL;
  t = term_r_23;
  x_183 = t;
  t = term_f_69;
  y_183 = t;
  t = term_g_69;
  t = e_14(x_183, y_183, t);
  return(t);
}
static ATerm z_13 (ATerm w_44, ATerm x_44, ATerm t)
{
  ATerm s_72 = t;
  int u_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_44, x_44);
      LocalPopChoice(u_72);
    }
  else
    {
      t = s_72;
      t = SSL_addr(w_44, x_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm s_163 (ATerm), ATerm t_163 (ATerm), ATerm t)
{
  ATerm a_184 = NULL,b_184 = NULL,c_184 = NULL;
  a_184 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_184;
      t = s_163(t);
    }
  else
    {
      ATerm f_184 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_184 = ATgetFirst((ATermList) t);
          c_184 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_184;
      t = foldr_2_0(s_163, t_163, t);
      f_184 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_184, f_184);
      t = t_163(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_21 (ATerm t)
{
  t = term_x_70;
  return(t);
}
static ATerm l_21 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL;
  if(match_cons(t, sym__2))
    {
      p_86 = ATgetArgument(t, 0);
      q_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_13(p_86, q_86, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_184 = NULL,k_86 = NULL,l_86 = NULL;
  t = times_0_0(t);
  l_86 = t;
  t = SSL_explode_term(l_86);
  if(match_cons(t, sym__2))
    {
      ATerm x_72 = ATgetArgument(t, 0);
      k_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_86;
  t = foldr_2_0(k_21, l_21, t);
  i_184 = t;
  t = SSL_TicksToSeconds(i_184);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_184 = NULL,u_184 = NULL,v_184 = NULL;
  t_184 = t;
  if(match_cons(t, sym__2))
    {
      u_184 = ATgetArgument(t, 0);
      v_184 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_72 = t;
    int b_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_184;
        if((u_184 != t))
          {
            _fail(t);
          }
        t = t_184;
        LocalPopChoice(b_73);
      }
    else
      {
        t = y_72;
        t = (ATerm) ATmakeAppl(sym__2, u_184, v_184);
        {
          ATerm c_73 = t;
          int e_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_184, v_184);
              LocalPopChoice(e_73);
            }
          else
            {
              t = c_73;
              t = SSL_gtr(u_184, v_184);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, u_184, v_184);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_180 (ATerm), ATerm t)
{
  ATerm z_184 = NULL;
  z_184 = t;
  {
    ATerm h_73 = t;
    int i_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_185 = NULL,c_185 = NULL,d_185 = NULL;
        t = term_r_23;
        c_185 = t;
        t = term_b_24;
        d_185 = t;
        t = term_c_24;
        t = e_14(c_185, d_185, t);
        b_185 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_185, term_l_72);
        t = geq_0_0(t);
        t = z_184;
        t = w_180(t);
        LocalPopChoice(i_73);
      }
    else
      {
        t = h_73;
        t = z_184;
      }
  }
  return(t);
}
static ATerm m_21 (ATerm t)
{
  ATerm f_185 = NULL,g_185 = NULL,i_185 = NULL,j_185 = NULL;
  t = run_time_0_0(t);
  f_185 = t;
  t = term_m_69;
  t = whoami_0_0(t);
  g_185 = t;
  t = term_p_40;
  i_185 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_73), f_185), term_k_73), g_185);
  j_185 = t;
  t = SSL_printnl(i_185, j_185);
  t = (ATerm) ATmakeAppl(sym__2, term_p_40, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_73), f_185), term_k_73), g_185));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_21, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_185 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_70;
  k_185 = t;
  t = SSL_exit(k_185);
  return(t);
}
static ATerm i_14 (ATerm u_52, ATerm v_52, ATerm w_52, ATerm t)
{
  ATerm l_185 = NULL;
  t = SSL_hashtable_put(w_52, u_52, v_52);
  l_185 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_185);
  return(t);
}
ATerm lookup_table_0_1 (ATerm r_49, ATerm t)
{
  ATerm u_185 = NULL;
  t = table_hashtable_0_0(t);
  u_185 = t;
  {
    ATerm m_73 = t;
    int n_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_87 = NULL;
        t = u_185;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_87 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_14(r_49, c_87, t);
        LocalPopChoice(n_73);
      }
    else
      {
        t = m_73;
        {
          ATerm j_87 = NULL;
          t = r_49;
          t = table_create_0_0(t);
          t = u_185;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_87 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_14(r_49, j_87, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm c_53, ATerm d_53, ATerm t)
{
  ATerm x_185 = NULL;
  t = SSL_hashtable_create(c_53, d_53);
  x_185 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_185);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm y_185 = NULL,z_185 = NULL,a_186 = NULL,c_186 = NULL,d_186 = NULL;
  y_185 = t;
  t = term_s_73;
  c_186 = t;
  t = term_t_73;
  d_186 = t;
  t = y_185;
  t = new_hashtable_0_2(c_186, d_186, t);
  z_185 = t;
  t = y_185;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_186 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(y_185, z_185, a_186, t);
  t = y_185;
  return(t);
}
static ATerm b_14 (ATerm z_52, ATerm a_53, ATerm t)
{
  ATerm e_186 = NULL;
  t = SSL_hashtable_remove(a_53, z_52);
  e_186 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_186);
  return(t);
}
static ATerm c_14 (ATerm e_53, ATerm t)
{
  ATerm f_186 = NULL;
  t = SSL_hashtable_destroy(e_53);
  f_186 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_186);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm g_186 = NULL;
  t = SSL_table_hashtable();
  g_186 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_186);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm h_186 = NULL,i_186 = NULL,j_186 = NULL,k_186 = NULL;
  h_186 = t;
  t = table_hashtable_0_0(t);
  i_186 = t;
  t = lookup_table_0_1(h_186, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_186 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14(k_186, t);
  t = i_186;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_186 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_14(h_186, j_186, t);
  t = h_186;
  return(t);
}
ATerm fetch_1_0 (ATerm o_156 (ATerm), ATerm t)
{
  static ATerm h_187 (ATerm t);
  static ATerm h_187 (ATerm t)
  {
    ATerm e_187 = NULL,f_187 = NULL,g_187 = NULL;
    e_187 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_187 = ATgetFirst((ATermList) t);
        g_187 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_73 = t;
      int d_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_87 = NULL,v_87 = NULL,z_30 = NULL;
          t = SSLgetAnnotations(e_187);
          s_87 = t;
          t = f_187;
          t = o_156(t);
          v_87 = t;
          t = (ATerm) ATinsert(CheckATermList(g_187), v_87);
          z_30 = t;
          t = SSLsetAnnotations(z_30, s_87);
          LocalPopChoice(d_74);
        }
      else
        {
          t = z_73;
          {
            ATerm e_88 = NULL,i_88 = NULL,a_31 = NULL;
            t = SSLgetAnnotations(e_187);
            e_88 = t;
            t = g_187;
            t = h_187(t);
            i_88 = t;
            t = (ATerm) ATinsert(CheckATermList(i_88), f_187);
            a_31 = t;
            t = SSLsetAnnotations(a_31, e_88);
          }
        }
    }
    return(t);
  }
  t = h_187(t);
  return(t);
}
static ATerm j_14 (ATerm x_52, ATerm y_52, ATerm t)
{
  t = SSL_hashtable_get(y_52, x_52);
  return(t);
}
static ATerm e_14 (ATerm y_49, ATerm z_49, ATerm t)
{
  ATerm k_187 = NULL;
  t = lookup_table_0_1(y_49, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_187 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_14(z_49, k_187, t);
  return(t);
}
static ATerm y_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_21 (ATerm t)
{
  ATerm m_187 = NULL,n_187 = NULL;
  t = term_e_74;
  m_187 = t;
  t = term_m_69;
  n_187 = t;
  t = term_j_74;
  t = h_14(m_187, n_187, t);
  return(t);
}
static ATerm a_22 (ATerm t)
{
  t = term_k_74;
  return(t);
}
static ATerm b_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_22 (ATerm t)
{
  ATerm o_187 = NULL,p_187 = NULL,q_187 = NULL,r_187 = NULL;
  t = term_e_74;
  q_187 = t;
  t = term_m_69;
  r_187 = t;
  t = term_j_74;
  t = h_14(q_187, r_187, t);
  t = term_l_74;
  o_187 = t;
  t = term_m_69;
  p_187 = t;
  t = term_p_74;
  t = h_14(o_187, p_187, t);
  t = term_d_75;
  return(t);
}
static ATerm e_22 (ATerm t)
{
  t = term_e_75;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_75 = t;
  int g_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_21, z_21, a_22, t);
      LocalPopChoice(g_75);
    }
  else
    {
      t = f_75;
      t = Option_3_0(b_22, d_22, e_22, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_173 (ATerm), ATerm t)
{
  ATerm w_187 = NULL,x_187 = NULL,y_187 = NULL,z_187 = NULL,b_188 = NULL,c_188 = NULL,o_31 = NULL;
  w_187 = t;
  {
    ATerm h_75 = t;
    int i_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_75;
        t = s_173(t);
        LocalPopChoice(i_75);
      }
    else
      {
        t = h_75;
      }
  }
  t = w_187;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_187 = ATgetFirst((ATermList) t);
      z_187 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_187);
  x_187 = t;
  t = term_f_69;
  c_188 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_69, y_187);
  t = h_14(c_188, y_187, t);
  t = z_187;
  {
    static ATerm m_188 (ATerm t);
    static ATerm m_188 (ATerm t)
    {
      ATerm l_75 = t;
      int m_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_75 = t;
          int r_75 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_188 = NULL;
              f_188 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_188;
              LocalPopChoice(r_75);
            }
          else
            {
              t = n_75;
              t = s_173(t);
              t = Cons_2_0(_id, m_188, t);
            }
          LocalPopChoice(m_75);
        }
      else
        {
          t = l_75;
          {
            ATerm i_188 = NULL,j_188 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_188 = ATgetFirst((ATermList) t);
                j_188 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_188), (ATerm) ATmakeAppl(sym_Undefined_1, i_188));
          }
        }
      return(t);
    }
    t = m_188(t);
  }
  b_188 = t;
  t = (ATerm) ATinsert(CheckATermList(b_188), (ATerm) ATmakeAppl(sym_Program_1, y_187));
  o_31 = t;
  t = SSLsetAnnotations(o_31, x_187);
  return(t);
}
static ATerm h_22 (ATerm t)
{
  ATerm z_188 = NULL;
  z_188 = t;
  if(match_string(t, "--help"))
    {
      t = z_188;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_188;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_188;
        }
    }
  return(t);
}
static ATerm r_22 (ATerm t)
{
  ATerm a_189 = NULL,b_189 = NULL;
  t = term_s_75;
  a_189 = t;
  t = term_m_69;
  b_189 = t;
  t = term_t_75;
  t = h_14(a_189, b_189, t);
  t = term_u_75;
  return(t);
}
static ATerm s_22 (ATerm t)
{
  t = term_v_75;
  return(t);
}
static ATerm t_22 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm p_173 (ATerm), ATerm q_173 (ATerm), ATerm r_173 (ATerm), ATerm t)
{
  ATerm r_188 = NULL,s_188 = NULL,t_188 = NULL,u_188 = NULL,v_188 = NULL,w_188 = NULL,x_188 = NULL,y_188 = NULL;
  t_188 = t;
  t = term_x_69;
  u_188 = t;
  t = term_w_75;
  t = lookup_table_0_1(u_188, t);
  y_188 = t;
  t = term_y_69;
  v_188 = t;
  t = (ATerm) ATempty;
  w_188 = t;
  t = y_188;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_188 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(v_188, w_188, x_188, t);
  t = t_188;
  {
    static ATerm f_22 (ATerm t);
    static ATerm f_22 (ATerm t)
    {
      ATerm b_76 = t;
      int c_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_173(t);
          LocalPopChoice(c_76);
        }
      else
        {
          t = b_76;
          {
            ATerm f_76 = t;
            int g_76 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_22, r_22, s_22, t);
                LocalPopChoice(g_76);
              }
            else
              {
                t = f_76;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_22, t);
  }
  {
    ATerm i_76 = t;
    int j_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_189 = NULL;
        m_189 = t;
        {
          ATerm k_76 = t;
          int l_76 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_88 = NULL;
              t = m_189;
              {
                ATerm q_76 = t;
                int r_76 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_88 = NULL,s_88 = NULL;
                    t = term_r_23;
                    r_88 = t;
                    t = term_s_75;
                    s_88 = t;
                    t = term_s_76;
                    t = e_14(r_88, s_88, t);
                    LocalPopChoice(r_76);
                  }
                else
                  {
                    t = q_76;
                    t = fetch_1_0(t_22, t);
                  }
              }
              t = m_189;
              t = q_173(t);
              t = term_x_70;
              q_88 = t;
              t = SSL_exit(q_88);
              LocalPopChoice(l_76);
            }
          else
            {
              t = k_76;
              {
                ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL;
                t = term_r_23;
                x_88 = t;
                t = term_e_74;
                y_88 = t;
                t = term_t_76;
                t = e_14(x_88, y_88, t);
                t = m_189;
                t = r_173(t);
                t = term_x_70;
                w_88 = t;
                t = SSL_exit(w_88);
              }
            }
        }
        LocalPopChoice(j_76);
      }
    else
      {
        t = i_76;
        {
          ATerm u_76 = t;
          int v_76 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_189 = NULL,o_189 = NULL,p_189 = NULL;
              static ATerm v_22 (ATerm t);
              static ATerm v_22 (ATerm t)
              {
                ATerm q_189 = NULL,r_189 = NULL,s_189 = NULL,y_31 = NULL;
                s_189 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_189 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_189);
                q_189 = t;
                t = r_189;
                if(((r_188 != NULL) && (r_188 != t)))
                  _fail(t);
                else
                  r_188 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_189);
                y_31 = t;
                t = SSLsetAnnotations(y_31, q_189);
                return(t);
              }
              t = fetch_1_0(v_22, t);
              t = term_p_40;
              o_189 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_188)), term_w_76);
              p_189 = t;
              t = SSL_printnl(o_189, p_189);
              t = (ATerm) ATmakeAppl(sym__2, term_p_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_188)), term_w_76));
              t = q_173(t);
              t = term_l_72;
              n_189 = t;
              t = SSL_exit(n_189);
              LocalPopChoice(v_76);
            }
          else
            {
              t = u_76;
            }
        }
      }
  }
  s_188 = t;
  t = term_x_69;
  t = table_destroy_0_0(t);
  t = s_188;
  return(t);
}
ATerm option_wrap_5_0 (ATerm q_170 (ATerm), ATerm r_170 (ATerm), ATerm s_170 (ATerm), ATerm t_170 (ATerm), ATerm u_170 (ATerm), ATerm t)
{
  ATerm x_189 = NULL,y_189 = NULL,z_189 = NULL,a_190 = NULL,b_190 = NULL;
  t = parse_options_3_0(q_170, r_170, s_170, t);
  x_189 = t;
  t = term_x_76;
  t = table_create_0_0(t);
  t = term_x_76;
  y_189 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_x_76, term_y_76, x_189);
  t = lookup_table_0_1(y_189, t);
  b_190 = t;
  t = term_y_76;
  z_189 = t;
  t = b_190;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_190 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(z_189, x_189, a_190, t);
  t = x_189;
  t = t_170(t);
  {
    ATerm z_76 = t;
    int a_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_170(t);
        t = report_success_0_0(t);
        LocalPopChoice(a_77);
      }
    else
      {
        t = z_76;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm w_22 (ATerm t)
{
  ATerm c_77 = t;
  int d_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(d_77);
    }
  else
    {
      t = c_77;
      {
        ATerm e_77 = t;
        int f_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(f_77);
          }
        else
          {
            t = e_77;
            {
              ATerm k_77 = t;
              int l_77 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(a_23, b_23, c_23, t);
                  LocalPopChoice(l_77);
                }
              else
                {
                  t = k_77;
                  {
                    ATerm m_77 = t;
                    int n_77 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(n_77);
                      }
                    else
                      {
                        t = m_77;
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
static ATerm z_22 (ATerm t)
{
  t = input_1_0(d_23, t);
  return(t);
}
static ATerm a_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_23 (ATerm t)
{
  ATerm f_190 = NULL,g_190 = NULL;
  t = term_t_67;
  f_190 = t;
  t = term_m_69;
  g_190 = t;
  t = term_o_77;
  t = h_14(f_190, g_190, t);
  t = term_p_77;
  return(t);
}
static ATerm c_23 (ATerm t)
{
  t = term_q_77;
  return(t);
}
static ATerm d_23 (ATerm t)
{
  t = output_1_0(e_23, t);
  return(t);
}
static ATerm e_23 (ATerm t)
{
  ATerm r_77 = t;
  int s_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_191 = NULL,h_191 = NULL,e_89 = NULL,g_89 = NULL,l_89 = NULL,r_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL,d_32 = NULL,c_32 = NULL,a_32 = NULL;
      g_191 = t;
      if(match_cons(t, sym_Specification_1))
        {
          h_191 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_191);
      e_89 = t;
      t = h_191;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_89 = ATgetFirst((ATermList) t);
          r_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_191);
      g_89 = t;
      t = l_89;
      if(match_cons(t, sym_Signature_1))
        {
          w_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_89);
      v_89 = t;
      t = (ATerm) ATmakeAppl(sym_Signature_1, w_89);
      a_32 = t;
      t = SSLsetAnnotations(a_32, v_89);
      x_89 = t;
      t = r_89;
      t = Cons_2_0(g_23, h_23, t);
      t_89 = t;
      t = (ATerm) ATinsert(CheckATermList(t_89), x_89);
      c_32 = t;
      t = SSLsetAnnotations(c_32, g_89);
      u_89 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, u_89);
      d_32 = t;
      t = SSLsetAnnotations(d_32, e_89);
      t = check_library_definitions_0_0(t);
      t = alltd_1_0(k_23, t);
      LocalPopChoice(s_77);
    }
  else
    {
      t = r_77;
      t = if_verbose2_1_0(l_23, t);
    }
  return(t);
}
static ATerm g_23 (ATerm t)
{
  ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL,m_90 = NULL,b_32 = NULL;
  m_90 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_90);
  z_89 = t;
  t = a_90;
  t = map_1_0(i_23, t);
  b_90 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_90);
  b_32 = t;
  t = SSLsetAnnotations(b_32, z_89);
  return(t);
}
static ATerm h_23 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm i_23 (ATerm t)
{
  ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL,x_90 = NULL,y_90 = NULL,z_90 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      n_90 = ATgetArgument(t, 0);
      o_90 = ATgetArgument(t, 1);
      p_90 = ATgetArgument(t, 2);
      x_90 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_90), (ATerm)ATempty, (ATerm) ATempty);
  y_90 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_4, term_u_77, o_90, x_90, p_90);
  z_90 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_90), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Defined_4, term_u_77, o_90, x_90, p_90));
  t = n_13(j_23, y_90, z_90, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, n_90, o_90, p_90, x_90);
  return(t);
}
static ATerm j_23 (ATerm t)
{
  t = term_s_66;
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm a_91 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm v_77 = ATgetArgument(t, 0);
      if(match_cons(v_77, sym_SVar_1))
        {
          ATerm a_78 = ATgetArgument(v_77, 0);
          if((ATgetSymbol((ATermAppl) a_78) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm y_77 = ATgetArgument(t, 1);
        if(((ATgetType(y_77) == AT_LIST) && !(ATisEmpty(y_77))))
          {
            a_91 = ATgetFirst((ATermList) y_77);
            {
              ATerm b_78 = (ATerm) ATgetNext((ATermList) y_77);
              if(((ATgetType(b_78) != AT_LIST) || !(ATisEmpty(b_78))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm z_77 = ATgetArgument(t, 2);
        if(((ATgetType(z_77) != AT_LIST) || !(ATisEmpty(z_77))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_11(a_91, t);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  ATerm i_191 = NULL,j_191 = NULL,k_191 = NULL;
  i_191 = t;
  t = term_p_40;
  j_191 = t;
  t = (ATerm) ATinsert(ATempty, term_c_78);
  k_191 = t;
  t = SSL_printnl(j_191, k_191);
  t = i_191;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(w_22, default_system_usage_0_0, default_system_about_0_0, _id, z_22, t);
  return(t);
}

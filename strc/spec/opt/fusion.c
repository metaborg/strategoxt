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
static ATerm term_h_78;
static ATerm term_w_77;
static ATerm term_v_77;
static ATerm term_u_77;
static ATerm term_e_77;
static ATerm term_d_77;
static ATerm term_c_77;
static ATerm term_z_76;
static ATerm term_y_76;
static ATerm term_i_76;
static ATerm term_h_76;
static ATerm term_g_76;
static ATerm term_f_76;
static ATerm term_e_76;
static ATerm term_w_75;
static ATerm term_q_75;
static ATerm term_p_75;
static ATerm term_o_75;
static ATerm term_x_74;
static ATerm term_v_74;
static ATerm term_t_74;
static ATerm term_p_74;
static ATerm term_e_74;
static ATerm term_v_73;
static ATerm term_p_73;
static ATerm term_o_73;
static ATerm term_x_72;
static ATerm term_q_72;
static ATerm term_n_72;
static ATerm term_h_72;
static ATerm term_r_71;
static ATerm term_q_71;
static ATerm term_p_71;
static ATerm term_n_71;
static ATerm term_m_71;
static ATerm term_l_71;
static ATerm term_k_71;
static ATerm term_j_71;
static ATerm term_g_71;
static ATerm term_e_71;
static ATerm term_a_71;
static ATerm term_k_70;
static ATerm term_d_70;
static ATerm term_b_70;
static ATerm term_a_70;
static ATerm term_y_69;
static ATerm term_s_69;
static ATerm term_r_69;
static ATerm term_m_69;
static ATerm term_l_69;
static ATerm term_h_69;
static ATerm term_g_69;
static ATerm term_f_69;
static ATerm term_c_69;
static ATerm term_z_68;
static ATerm term_z_67;
static ATerm term_y_67;
static ATerm term_v_67;
static ATerm term_u_67;
static ATerm term_t_67;
static ATerm term_o_67;
static ATerm term_n_67;
static ATerm term_h_67;
static ATerm term_g_67;
static ATerm term_c_67;
static ATerm term_b_67;
static ATerm term_a_67;
static ATerm term_x_66;
static ATerm term_z_44;
static ATerm term_s_42;
static ATerm term_r_42;
static ATerm term_g_42;
static ATerm term_v_41;
static ATerm term_u_41;
static ATerm term_p_41;
static ATerm term_o_41;
static ATerm term_n_41;
static ATerm term_k_41;
static ATerm term_i_41;
static ATerm term_y_40;
static ATerm term_x_40;
static ATerm term_v_40;
static ATerm term_u_40;
static ATerm term_t_40;
static ATerm term_q_40;
static ATerm term_p_40;
static ATerm term_o_40;
static ATerm term_y_39;
static ATerm term_w_39;
static ATerm term_z_38;
static ATerm term_y_38;
static ATerm term_u_38;
static ATerm term_t_38;
static ATerm term_q_38;
static ATerm term_p_38;
static ATerm term_m_38;
static ATerm term_l_38;
static ATerm term_j_38;
static ATerm term_i_38;
static ATerm term_k_37;
static ATerm term_i_37;
static ATerm term_r_35;
static ATerm term_f_34;
static ATerm term_e_34;
static ATerm term_z_33;
static ATerm term_y_33;
static ATerm term_x_33;
static ATerm term_w_33;
static ATerm term_v_33;
static ATerm term_t_33;
static ATerm term_p_33;
static ATerm term_n_33;
static ATerm term_m_33;
static ATerm term_l_33;
static ATerm term_k_33;
static ATerm term_g_33;
static ATerm term_d_29;
static ATerm term_y_28;
static ATerm term_j_28;
static ATerm term_f_28;
static ATerm term_e_28;
static ATerm term_d_28;
static ATerm term_z_27;
static ATerm term_w_27;
static ATerm term_i_27;
static ATerm term_h_27;
static ATerm term_g_27;
static ATerm term_f_27;
static ATerm term_c_26;
static ATerm term_b_26;
static ATerm term_a_26;
static ATerm term_z_25;
static ATerm term_u_25;
static ATerm term_t_25;
static ATerm term_s_25;
static ATerm term_l_25;
static ATerm term_i_25;
static ATerm term_h_25;
static ATerm term_a_25;
static ATerm term_z_24;
static ATerm term_x_24;
static ATerm term_w_24;
static ATerm term_u_24;
static ATerm term_n_24;
static ATerm term_l_24;
static ATerm term_e_24;
static ATerm term_d_24;
static ATerm term_c_24;
static ATerm term_s_23;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_c_24);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_24);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_25);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Call_2, term_a_26, (ATerm) ATempty);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Op_2, term_z_25, (ATerm) ATempty);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATempty);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_27);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_27);
  ATprotect(&(term_d_28));
  term_d_28 = (ATerm) ATmakeAppl(sym_Call_2, term_z_27, (ATerm) ATempty);
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_33);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_CallT_3, term_l_33, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_p_33, term_t_33);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_n_33, term_v_33);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_m_33, term_w_33);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(sym__2, term_y_33, term_x_33);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_34);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_37);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym_Seq_2, term_n_33, term_t_33);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym_Seq_2, term_m_33, term_i_38);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(sym__2, term_l_38, term_j_38);
  ATprotect(&(term_p_38));
  term_p_38 = (ATerm) ATmakeAppl(ATmakeSymbol("k_0", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_38);
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_y_38));
  term_y_38 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_w_39));
  term_w_39 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_39);
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_p_40));
  term_p_40 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("j_1", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_40);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("l_1", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_40);
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_42);
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_x_66));
  term_x_66 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_a_67));
  term_a_67 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_b_67));
  term_b_67 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_c_67));
  term_c_67 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_g_67));
  term_g_67 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_h_67));
  term_h_67 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_67);
  ATprotect(&(term_n_67));
  term_n_67 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_o_67));
  term_o_67 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_67));
  term_t_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_67));
  term_u_67 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_t_67);
  ATprotect(&(term_v_67));
  term_v_67 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_67));
  term_y_67 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_67));
  term_z_67 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_y_67);
  ATprotect(&(term_z_68));
  term_z_68 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_69));
  term_c_69 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_69));
  term_f_69 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_f_69);
  ATprotect(&(term_h_69));
  term_h_69 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_69));
  term_l_69 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_69));
  term_m_69 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_l_69);
  ATprotect(&(term_r_69));
  term_r_69 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_69));
  term_s_69 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_69));
  term_y_69 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_70));
  term_b_70 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_70));
  term_d_70 = (ATerm) ATmakeAppl(sym__2, term_a_70, term_b_70);
  ATprotect(&(term_k_70));
  term_k_70 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_71));
  term_a_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_71));
  term_e_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_71));
  term_g_71 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(sym__2, term_c_24, term_g_71);
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_71);
  ATprotect(&(term_l_71));
  term_l_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_71));
  term_m_71 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_71));
  term_n_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_71));
  term_p_71 = (ATerm) ATmakeAppl(sym__2, term_n_71, term_r_69);
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_72));
  term_n_72 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_72));
  term_q_72 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_73));
  term_o_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_73));
  term_p_73 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_73));
  term_v_73 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_e_74));
  term_e_74 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_74));
  term_t_74 = (ATerm) ATmakeAppl(sym__2, term_p_74, term_r_69);
  ATprotect(&(term_v_74));
  term_v_74 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_75));
  term_o_75 = (ATerm) ATmakeAppl(sym__2, term_x_74, term_r_69);
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_75));
  term_w_75 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_76));
  term_e_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_76));
  term_f_76 = (ATerm) ATmakeAppl(sym__2, term_e_76, term_r_69);
  ATprotect(&(term_g_76));
  term_g_76 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_76));
  term_h_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_76));
  term_i_76 = (ATerm) ATmakeAppl(sym__3, term_a_70, term_b_70, (ATerm) ATempty);
  ATprotect(&(term_y_76));
  term_y_76 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_e_76);
  ATprotect(&(term_z_76));
  term_z_76 = (ATerm) ATmakeAppl(sym__2, term_s_23, term_p_74);
  ATprotect(&(term_c_77));
  term_c_77 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_77));
  term_d_77 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_77));
  term_e_77 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(sym__2, term_y_67, term_r_69);
  ATprotect(&(term_v_77));
  term_v_77 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_77));
  term_w_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_78));
  term_h_78 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm if_verbose2_1_0 (ATerm n_179 (ATerm), ATerm t);
ATerm escape_chars_1_0 (ATerm c_144 (ATerm), ATerm t);
static ATerm w_9 (ATerm h_3, ATerm j_3, ATerm t);
static ATerm x_9 (ATerm t_3, ATerm u_3, ATerm v_3, ATerm t);
static ATerm b_10 (ATerm h_4, ATerm i_4, ATerm t);
static ATerm c_10 (ATerm o_4, ATerm p_4, ATerm t);
static ATerm a_0 (ATerm t);
static ATerm i_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm r_177 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm p_9 (ATerm r_105, ATerm s_105, ATerm t_105, ATerm t);
static ATerm w_22 (ATerm g_22, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm a_11 (ATerm e_101, ATerm f_101, ATerm g_101, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm q_4 (ATerm t);
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
static ATerm j_44 (ATerm o_43, ATerm p_43, ATerm t);
static ATerm k_44 (ATerm s_43, ATerm v_43, ATerm t);
ATerm Replace_0_0 (ATerm t);
static ATerm c_11 (ATerm j_46, ATerm k_46, ATerm t);
ATerm end_scope_1_0 (ATerm r_148 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_148 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm s_148 (ATerm), ATerm t_148 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm d_11 (ATerm b_28, ATerm a_28, ATerm c_28, ATerm t);
static ATerm b_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t);
ATerm fuse_with_bottomup_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm d_139 (ATerm), ATerm t);
ATerm propagate_mark_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm p_121 (ATerm), ATerm q_121 (ATerm), ATerm t);
static ATerm p_6 (ATerm t);
ATerm inline_rules_0_0 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm bottomup_to_var_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm seq_over_choice_0_0 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm k_11 (ATerm l_26, ATerm t);
ATerm alltd_1_0 (ATerm u_140 (ATerm), ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm check_that_innermost_is_innermost_0_0 (ATerm t);
ATerm debug_1_0 (ATerm g_148 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm c_139 (ATerm), ATerm t);
static ATerm j_7 (ATerm t);
static ATerm m_11 (ATerm q_83, ATerm p_83, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm g_140 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm t_146 (ATerm), ATerm u_146 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm e_139 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm y_156 (ATerm), ATerm z_156 (ATerm), ATerm a_157 (ATerm), ATerm b_157 (ATerm), ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm p_172 (ATerm), ATerm q_172 (ATerm), ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
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
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
ATerm spaste_1_0 (ATerm p_178 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm q_178 (ATerm), ATerm r_178 (ATerm), ATerm s_178 (ATerm), ATerm t);
ATerm dynrule_sargs_1_0 (ATerm u_178 (ATerm), ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
ATerm Bind7_0_0 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm w_12 (ATerm f_108, ATerm e_108, ATerm t);
ATerm SVar_1_0 (ATerm e_118 (ATerm), ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
ATerm srename_0_0 (ATerm t);
ATerm dynrule_cong_6_0 (ATerm w_178 (ATerm), ATerm x_178 (ATerm), ATerm y_178 (ATerm), ATerm z_178 (ATerm), ATerm a_179 (ATerm), ATerm b_179 (ATerm), ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
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
ATerm tpaste_1_0 (ATerm l_178 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm m_178 (ATerm), ATerm n_178 (ATerm), ATerm o_178 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm v_178 (ATerm), ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm y_10 (ATerm t);
static ATerm z_10 (ATerm t);
static ATerm b_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm i_13 (ATerm t);
static ATerm j_13 (ATerm t);
static ATerm l_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm r_15 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm z_12 (ATerm f_159 (ATerm), ATerm o_74, ATerm n_74, ATerm t);
ATerm foldr_3_0 (ATerm k_162 (ATerm), ATerm l_162 (ATerm), ATerm m_162 (ATerm), ATerm t);
static ATerm a_13 (ATerm i_159 (ATerm), ATerm j_159 (ATerm), ATerm s_74, ATerm r_74, ATerm t);
static ATerm b_13 (ATerm a_159 (ATerm), ATerm m_74, ATerm l_74, ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm d_13 (ATerm v_925, ATerm a_926, ATerm d_97, ATerm t);
ATerm while_not_2_0 (ATerm k_147 (ATerm), ATerm l_147 (ATerm), ATerm t);
ATerm for_3_0 (ATerm n_147 (ATerm), ATerm o_147 (ATerm), ATerm p_147 (ATerm), ATerm t);
static ATerm j_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_164 (ATerm i_163, ATerm j_163, ATerm k_163, ATerm t);
static ATerm o_16 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
ATerm free_vars_3_0 (ATerm w_174 (ATerm), ATerm x_174 (ATerm), ATerm y_174 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm a_118 (ATerm), ATerm t);
static ATerm f_13 (ATerm r_173 (ATerm), ATerm s_173 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_95, ATerm j_95, ATerm i_95, ATerm t);
ATerm at_end_1_0 (ATerm l_155 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm a_168 (ATerm s_167, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm g_13 (ATerm l_173 (ATerm), ATerm m_173 (ATerm (ATerm), ATerm), ATerm c_95, ATerm f_95, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm s_164 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm g_173 (ATerm (ATerm), ATerm), ATerm h_173 (ATerm), ATerm i_173 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm j_173 (ATerm (ATerm), ATerm), ATerm t);
static ATerm y_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm c_18 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm m_13 (ATerm s_46, ATerm t_46, ATerm t);
static ATerm d_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
ATerm InlineStrat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm v_18 (ATerm t);
ATerm check_that_try_is_try_0_0 (ATerm t);
ATerm check_library_definitions_0_0 (ATerm t);
static ATerm n_13 (ATerm u_148 (ATerm), ATerm y_44, ATerm w_44, ATerm t);
static ATerm w_18 (ATerm t);
static ATerm o_13 (ATerm n_25, ATerm o_25, ATerm q_25, ATerm p_25, ATerm t);
ATerm map_1_0 (ATerm w_154 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm t);
static ATerm p_13 (ATerm k_36, ATerm l_36, ATerm t);
static ATerm q_13 (ATerm b_42, ATerm c_42, ATerm t);
static ATerm t_13 (ATerm i_148 (ATerm), ATerm i_371, ATerm h_42, ATerm t);
static ATerm r_13 (ATerm x_41, ATerm y_41, ATerm t);
static ATerm x_18 (ATerm t);
static ATerm y_18 (ATerm t);
ATerm output_1_0 (ATerm m_169 (ATerm), ATerm t);
static ATerm n_177 (ATerm h_177, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm u_13 (ATerm d_42, ATerm t);
static ATerm w_13 (ATerm n_34, ATerm o_34, ATerm t);
static ATerm x_13 (ATerm m_36, ATerm n_36, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_179 (ATerm z_177, ATerm t);
static ATerm t_179 (ATerm d_178, ATerm e_178, ATerm f_178, ATerm t);
static ATerm u_179 (ATerm d_179, ATerm e_179, ATerm f_179, ATerm t);
static ATerm y_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm n_169 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm b_19 (ATerm t);
static ATerm g_19 (ATerm t);
static ATerm l_19 (ATerm t);
ATerm default_system_usage_2_0 (ATerm n_172 (ATerm), ATerm o_172 (ATerm), ATerm t);
static ATerm m_19 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm q_19 (ATerm t);
static ATerm v_19 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_19 (ATerm t);
static ATerm a_20 (ATerm t);
static ATerm b_20 (ATerm t);
static ATerm c_20 (ATerm t);
static ATerm d_20 (ATerm t);
static ATerm e_20 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm n_20 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm h_14 (ATerm o_93, ATerm p_93, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm o_20 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm s_20 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm f_14 (ATerm c_46, ATerm d_46, ATerm b_46, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm t_20 (ATerm t);
static ATerm j_21 (ATerm t);
static ATerm k_21 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_13 (ATerm k_43, ATerm l_43, ATerm t);
ATerm foldr_2_0 (ATerm i_162 (ATerm), ATerm j_162 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_21 (ATerm t);
static ATerm m_21 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_179 (ATerm), ATerm t);
static ATerm v_21 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm i_14 (ATerm i_51, ATerm j_51, ATerm k_51, ATerm t);
ATerm lookup_table_0_1 (ATerm c_48, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_51, ATerm r_51, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm b_14 (ATerm n_51, ATerm o_51, ATerm t);
static ATerm c_14 (ATerm s_51, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_155 (ATerm), ATerm t);
static ATerm j_14 (ATerm l_51, ATerm m_51, ATerm t);
static ATerm e_14 (ATerm m_48, ATerm n_48, ATerm t);
static ATerm a_22 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm e_22 (ATerm t);
static ATerm f_22 (ATerm t);
static ATerm h_22 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm i_172 (ATerm), ATerm t);
static ATerm s_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm u_22 (ATerm t);
static ATerm v_22 (ATerm t);
ATerm parse_options_3_0 (ATerm f_172 (ATerm), ATerm g_172 (ATerm), ATerm h_172 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm g_169 (ATerm), ATerm h_169 (ATerm), ATerm i_169 (ATerm), ATerm j_169 (ATerm), ATerm k_169 (ATerm), ATerm t);
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
static ATerm m_23 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_179 (ATerm), ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 = NULL,u_0 = NULL,v_0 = NULL;
        t = term_s_23;
        u_0 = t;
        t = term_c_24;
        v_0 = t;
        t = term_d_24;
        t = e_14(u_0, v_0, t);
        t_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_0, term_e_24);
        t = geq_0_0(t);
        t = c_0;
        t = n_179(t);
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        t = c_0;
      }
  }
  return(t);
}
ATerm escape_chars_1_0 (ATerm c_144 (ATerm), ATerm t)
{
  static ATerm w_1 (ATerm t);
  static ATerm w_1 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_1 = NULL,d_1 = NULL,f_1 = NULL,g_1 = NULL,h_1 = NULL,x_0 = NULL;
        t = c_144(t);
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
        t = Cons_2_0(_id, w_1, t);
        g_1 = t;
        t = (ATerm) ATinsert(CheckATermList(g_1), d_1);
        x_0 = t;
        t = SSLsetAnnotations(x_0, c_1);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL;
          v_1 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_1 = ATgetFirst((ATermList) t);
              u_1 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm b_1 = NULL,z_1 = NULL,y_0 = NULL;
                t = SSLgetAnnotations(v_1);
                b_1 = t;
                t = u_1;
                t = w_1(t);
                z_1 = t;
                t = (ATerm) ATinsert(CheckATermList(z_1), t_1);
                y_0 = t;
                t = SSLsetAnnotations(y_0, b_1);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_1;
            }
        }
      }
    return(t);
  }
  t = w_1(t);
  return(t);
}
static ATerm w_9 (ATerm h_3, ATerm j_3, ATerm t)
{
  t = h_3;
  {
    ATerm h_24 = t;
    if((PushChoice() == 0))
      {
        ATerm l_3 = NULL,o_3 = NULL,p_3 = NULL,s_3 = NULL,n_1 = NULL;
        s_3 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_3 = ATgetFirst((ATermList) t);
            p_3 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_3);
        l_3 = t;
        t = p_3;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(p_3), o_3);
        n_1 = t;
        t = SSLsetAnnotations(n_1, l_3);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_24, h_3);
  return(t);
}
static ATerm x_9 (ATerm t_3, ATerm u_3, ATerm v_3, ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL;
  t = SSL_explode_string(t_3);
  t = escape_chars_1_0(a_0, t);
  z_3 = t;
  t = SSL_implode_string(z_3);
  y_3 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, y_3, u_3);
  return(t);
}
static ATerm b_10 (ATerm h_4, ATerm i_4, ATerm t)
{
  t = h_4;
  {
    ATerm o_24 = t;
    if((PushChoice() == 0))
      {
        ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_1 = NULL;
        n_4 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_4 = ATgetFirst((ATermList) t);
            m_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_4);
        k_4 = t;
        t = m_4;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(m_4), l_4);
        o_1 = t;
        t = SSLsetAnnotations(o_1, k_4);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_24, h_4);
  return(t);
}
static ATerm c_10 (ATerm o_4, ATerm p_4, ATerm t)
{
  ATerm r_4 = NULL;
  t = o_4;
  {
    ATerm s_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_string(t, "'\\ '"))
          {
            t = term_u_24;
          }
        else
          {
            if(match_string(t, "'\\r'"))
              {
                t = term_w_24;
              }
            else
              {
                if(match_string(t, "'\\t'"))
                  {
                    t = term_x_24;
                  }
                else
                  {
                    if(match_string(t, "'\\n'"))
                      {
                        t = term_z_24;
                      }
                    else
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                          _fail(t);
                        t = term_a_25;
                      }
                  }
              }
          }
        LocalPopChoice(t_24);
      }
    else
      {
        t = s_24;
        {
          ATerm t_4 = NULL;
          t = SSL_explode_string(o_4);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm b_25 = ATgetFirst((ATermList) t);
              if(((ATgetType(b_25) != AT_INT) || (ATgetInt((ATermInt) b_25) != 39)))
                _fail(t);
              {
                ATerm c_25 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(c_25) == AT_LIST) && !(ATisEmpty(c_25))))
                  {
                    t_4 = ATgetFirst((ATermList) c_25);
                    {
                      ATerm d_25 = (ATerm) ATgetNext((ATermList) c_25);
                      if(((ATgetType(d_25) == AT_LIST) && !(ATisEmpty(d_25))))
                        {
                          ATerm f_25 = ATgetFirst((ATermList) d_25);
                          if(((ATgetType(f_25) != AT_INT) || (ATgetInt((ATermInt) f_25) != 39)))
                            _fail(t);
                          {
                            ATerm g_25 = (ATerm) ATgetNext((ATermList) d_25);
                            if(((ATgetType(g_25) != AT_LIST) || !(ATisEmpty(g_25))))
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
  r_4 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, r_4);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_4 = ATgetFirst((ATermList) t);
      c_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_4;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(c_4), term_i_25), term_h_25);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(c_4), term_h_25), term_h_25);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(c_4), term_l_25), term_h_25);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(c_4), term_s_25), term_h_25);
            }
        }
    }
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm m_2 = NULL,n_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_2 = ATgetFirst((ATermList) t);
      n_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_2;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(n_2), term_i_25), term_h_25);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(n_2), term_h_25), term_h_25);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(n_2), term_l_25), term_h_25);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(n_2), term_s_25), term_h_25);
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_25, (ATerm) ATinsert(ATinsert(ATempty, p_5), o_5));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_b_26;
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
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_25, (ATerm) ATinsert(ATinsert(ATempty, s_5), r_5));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      z_7 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_25, (ATerm) ATinsert(ATinsert(ATempty, a_8), z_7));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm g_8 = NULL,k_8 = NULL;
  if(match_cons(t, sym__2))
    {
      g_8 = ATgetArgument(t, 0);
      k_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_25, (ATerm) ATinsert(ATinsert(ATempty, k_8), g_8));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm z_8 = NULL,b_9 = NULL,n_3 = NULL;
  z_8 = t;
  t = SSL_explode_term(z_8);
  if(match_cons(t, sym__2))
    {
      ATerm d_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_26 = ATgetArgument(t, 1);
        if(((ATgetType(f_26) == AT_LIST) && !(ATisEmpty(f_26))))
          {
            b_9 = ATgetFirst((ATermList) f_26);
            {
              ATerm g_26 = (ATerm) ATgetNext((ATermList) f_26);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_8);
  if(match_cons(t, sym__2))
    {
      ATerm j_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_26) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_26 = ATgetArgument(t, 1);
        if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
          {
            ATerm m_26 = ATgetFirst((ATermList) k_26);
            ATerm n_26 = (ATerm) ATgetNext((ATermList) k_26);
            if(((ATgetType(n_26) == AT_LIST) && !(ATisEmpty(n_26))))
              {
                n_3 = ATgetFirst((ATermList) n_26);
                {
                  ATerm q_26 = (ATerm) ATgetNext((ATermList) n_26);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_25, (ATerm) ATinsert(ATinsert(ATempty, n_3), b_9));
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
        ATerm j_2 = NULL,k_2 = NULL;
        t = SSL_explode_string(b_5);
        t = escape_chars_1_0(i_0, t);
        k_2 = t;
        t = SSL_implode_string(k_2);
        j_2 = t;
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_2), c_5);
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
                                          t = (ATerm) ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(CheckATermList(c_5), b_5));
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
                                                      ATerm r_26 = t;
                                                      int u_26 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = w_9(b_5, a_5, t);
                                                          LocalPopChoice(u_26);
                                                        }
                                                      else
                                                        {
                                                          t = r_26;
                                                          t = v_4;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = w_9(b_5, a_5, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = w_9(b_5, a_5, t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_EmptyTupleCong_0))
                                                {
                                                  t = term_f_27;
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
                                                      t = (ATerm) ATmakeAppl(sym_Call_2, term_h_27, (ATerm) ATinsert(ATinsert(ATempty, u_4), b_5));
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
                                                              t = (ATerm) ATmakeAppl(sym_StratRule_3, b_5, c_5, term_i_27);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RuleNoCond_2))
                                                                {
                                                                  b_5 = ATgetArgument(t, 0);
                                                                  c_5 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Rule_3, b_5, c_5, term_i_27);
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
                                                                                                          ATerm j_27 = t;
                                                                                                          int k_27 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Module_2))
                                                                                                                {
                                                                                                                  ATerm l_27 = ATgetArgument(t, 0);
                                                                                                                  c_5 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(k_27);
                                                                                                              t = (ATerm) ATmakeAppl(sym_Specification_1, c_5);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = j_27;
                                                                                                              if(match_cons(t, sym_OpQ_2))
                                                                                                                {
                                                                                                                  b_5 = ATgetArgument(t, 0);
                                                                                                                  c_5 = ATgetArgument(t, 1);
                                                                                                                  t = x_9(b_5, c_5, a_5, t);
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
                                                                                                                        t = foldr_2_0(i_1, k_1, t);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_List_1))
                                                                                                                        {
                                                                                                                          b_5 = ATgetArgument(t, 0);
                                                                                                                          t = b_5;
                                                                                                                          t = foldr_2_0(m_1, p_1, t);
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
                                                                                                                                      ATerm m_27 = t;
                                                                                                                                      int n_27 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = b_10(b_5, a_5, t);
                                                                                                                                          LocalPopChoice(n_27);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = m_27;
                                                                                                                                          t = v_4;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = b_10(b_5, a_5, t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = b_10(b_5, a_5, t);
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
                                                                                                                                    t = foldr_2_0(q_1, y_1, t);
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
                                                                                                                                          t = c_10(b_5, a_5, t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          ATerm o_27 = t;
                                                                                                                                          int q_27 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_Con4_4))
                                                                                                                                                {
                                                                                                                                                  b_5 = ATgetArgument(t, 0);
                                                                                                                                                  {
                                                                                                                                                    ATerm r_27 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                  y_4 = ATgetArgument(t, 2);
                                                                                                                                                  x_4 = ATgetArgument(t, 3);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              LocalPopChoice(q_27);
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Con_3, b_5, y_4, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_4), (ATerm) ATempty));
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = o_27;
                                                                                                                                              {
                                                                                                                                                ATerm t_27 = t;
                                                                                                                                                int u_27 = stack_ptr;
                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Con3_3))
                                                                                                                                                      {
                                                                                                                                                        b_5 = ATgetArgument(t, 0);
                                                                                                                                                        {
                                                                                                                                                          ATerm v_27 = ATgetArgument(t, 1);
                                                                                                                                                        }
                                                                                                                                                        y_4 = ATgetArgument(t, 2);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    LocalPopChoice(u_27);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, b_5, y_4, term_d_28);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = t_27;
                                                                                                                                                    if(match_cons(t, sym_Con1_2))
                                                                                                                                                      {
                                                                                                                                                        b_5 = ATgetArgument(t, 0);
                                                                                                                                                        c_5 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, b_5, c_5, term_d_28);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm x_10 = NULL,e_11 = NULL,f_11 = NULL;
  e_11 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      f_11 = ATgetArgument(t, 0);
      x_10 = ATgetArgument(t, 1);
      {
        ATerm j_11 = NULL,l_11 = NULL,o_11 = NULL,r_11 = NULL;
        t = e_11;
        t = new_0_0(t);
        j_11 = t;
        t = new_0_0(t);
        l_11 = t;
        t = new_0_0(t);
        o_11 = t;
        t = new_0_0(t);
        r_11 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_11), o_11), l_11), j_11), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, j_11), (ATerm) ATmakeAppl(sym_Var_1, o_11))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, f_11, (ATerm)ATmakeAppl(sym_Var_1, j_11), (ATerm) ATmakeAppl(sym_Var_1, l_11)), (ATerm) ATmakeAppl(sym_BAM_3, x_10, (ATerm)ATmakeAppl(sym_Var_1, o_11), (ATerm) ATmakeAppl(sym_Var_1, r_11)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_e_28, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_11)), (ATerm) ATmakeAppl(sym_Var_1, l_11))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_11 = ATgetArgument(t, 0);
          {
            ATerm s_11 = NULL,t_11 = NULL,w_11 = NULL,x_11 = NULL;
            t = e_11;
            t = new_0_0(t);
            w_11 = t;
            t = f_11;
            {
              static ATerm a_2 (ATerm t);
              static ATerm a_2 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((s_11 != NULL) && (s_11 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      s_11 = ATgetArgument(t, 0);
                    if(((t_11 != NULL) && (t_11 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      t_11 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, w_11);
                return(t);
              }
              t = oncetd_1_0(a_2, t);
            }
            x_11 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_11), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_28, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_11)), not_null(s_11))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_11)), (ATerm) ATmakeAppl(sym_Build_1, x_11))));
          }
        }
      else
        {
          ATerm z_11 = NULL,d_12 = NULL,g_12 = NULL,k_12 = NULL,n_12 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              f_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_11;
          t = new_0_0(t);
          g_12 = t;
          t = new_0_0(t);
          k_12 = t;
          t = f_11;
          {
            static ATerm b_2 (ATerm t);
            static ATerm b_2 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((z_11 != NULL) && (z_11 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    z_11 = ATgetArgument(t, 0);
                  if(((d_12 != NULL) && (d_12 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    d_12 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, g_12);
              return(t);
            }
            t = oncetd_1_0(b_2, t);
          }
          n_12 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_12), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_12), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_12), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_12)), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_28, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_12))))), (ATerm)ATmakeAppl(sym_Var_1, g_12), (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_12)), not_null(z_11)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm u_12 = NULL,e_13 = NULL;
  u_12 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_28 = t;
    int i_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_13 = NULL,s_13 = NULL,v_13 = NULL,k_14 = NULL;
        t = u_12;
        t = new_0_0(t);
        v_13 = t;
        t = e_13;
        {
          static ATerm c_2 (ATerm t);
          static ATerm c_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_13 != NULL) && (k_13 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_13 = ATgetArgument(t, 0);
                if(((s_13 != NULL) && (s_13 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  s_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, v_13), k_13);
            return(t);
          }
          t = pat_td_1_0(c_2, t);
        }
        k_14 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_13), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_14), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_28, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_13))), (ATerm) ATmakeAppl(sym_Match_1, not_null(s_13))))));
        LocalPopChoice(i_28);
      }
    else
      {
        t = g_28;
        {
          ATerm k_28 = t;
          int l_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_14 = NULL,s_14 = NULL,v_14 = NULL;
              t = u_12;
              t = new_0_0(t);
              s_14 = t;
              t = e_13;
              {
                static ATerm d_2 (ATerm t);
                static ATerm d_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((o_14 != NULL) && (o_14 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        o_14 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, s_14);
                  return(t);
                }
                t = pat_td_1_0(d_2, t);
              }
              v_14 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_14)), not_null(o_14))));
              LocalPopChoice(l_28);
            }
          else
            {
              t = k_28;
              {
                ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
                t = u_12;
                t = new_0_0(t);
                z_14 = t;
                t = e_13;
                {
                  static ATerm e_2 (ATerm t);
                  static ATerm e_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((y_14 != NULL) && (y_14 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          y_14 = ATgetArgument(t, 0);
                        if(((x_14 != NULL) && (x_14 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          x_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, z_14);
                    return(t);
                  }
                  t = pat_td_1_0(e_2, t);
                }
                a_15 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_14), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_14)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_14)), not_null(y_14)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm r_177 (ATerm), ATerm t)
{
  ATerm o_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_177(t);
      LocalPopChoice(t_28);
    }
  else
    {
      t = o_28;
      {
        ATerm a_19 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL;
        c_19 = t;
        if(match_cons(t, sym_Op_2))
          {
            d_19 = ATgetArgument(t, 0);
            e_19 = ATgetArgument(t, 1);
            {
              ATerm n_5 = NULL,c_6 = NULL,r_1 = NULL;
              t = SSLgetAnnotations(c_19);
              n_5 = t;
              t = e_19;
              {
                static ATerm f_2 (ATerm t);
                static ATerm f_2 (ATerm t)
                {
                  t = pat_td_1_0(r_177, t);
                  return(t);
                }
                t = fetch_1_0(f_2, t);
              }
              c_6 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, d_19, c_6);
              r_1 = t;
              t = SSLsetAnnotations(r_1, n_5);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                d_19 = ATgetArgument(t, 0);
                e_19 = ATgetArgument(t, 1);
                {
                  ATerm u_28 = t;
                  int v_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_6 = NULL,z_6 = NULL,s_1 = NULL;
                      t = SSLgetAnnotations(c_19);
                      u_6 = t;
                      t = e_19;
                      t = pat_td_1_0(r_177, t);
                      z_6 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, d_19, z_6);
                      s_1 = t;
                      t = SSLsetAnnotations(s_1, u_6);
                      LocalPopChoice(v_28);
                    }
                  else
                    {
                      t = u_28;
                      {
                        ATerm o_7 = NULL,c_8 = NULL,x_1 = NULL;
                        t = SSLgetAnnotations(c_19);
                        o_7 = t;
                        t = d_19;
                        t = pat_td_1_0(r_177, t);
                        c_8 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, c_8, e_19);
                        x_1 = t;
                        t = SSLsetAnnotations(x_1, o_7);
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
                      ATerm t_8 = NULL,x_8 = NULL,s_2 = NULL;
                      t = SSLgetAnnotations(c_19);
                      t_8 = t;
                      t = a_19;
                      {
                        static ATerm g_2 (ATerm t);
                        static ATerm g_2 (ATerm t)
                        {
                          t = pat_td_1_0(r_177, t);
                          return(t);
                        }
                        t = fetch_1_0(g_2, t);
                      }
                      x_8 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, d_19, e_19, x_8);
                      s_2 = t;
                      t = SSLsetAnnotations(s_2, t_8);
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
                          ATerm t_9 = NULL,a_10 = NULL,t_2 = NULL;
                          t = SSLgetAnnotations(c_19);
                          t_9 = t;
                          t = a_19;
                          {
                            static ATerm h_2 (ATerm t);
                            static ATerm h_2 (ATerm t)
                            {
                              t = pat_td_1_0(r_177, t);
                              return(t);
                            }
                            t = fetch_1_0(h_2, t);
                          }
                          a_10 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, d_19, e_19, a_10);
                          t_2 = t;
                          t = SSLsetAnnotations(t_2, t_9);
                        }
                      }
                    else
                      {
                        ATerm l_10 = NULL,o_10 = NULL,u_2 = NULL;
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
                        t = pat_td_1_0(r_177, t);
                        o_10 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, d_19, o_10);
                        u_2 = t;
                        t = SSLsetAnnotations(u_2, l_10);
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
  ATerm r_19 = NULL,s_19 = NULL;
  r_19 = t;
  if(match_cons(t, sym_Build_1))
    {
      s_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_19 = NULL,u_19 = NULL,w_19 = NULL,x_19 = NULL;
        t = r_19;
        t = new_0_0(t);
        w_19 = t;
        t = s_19;
        {
          static ATerm i_2 (ATerm t);
          static ATerm i_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((t_19 != NULL) && (t_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  t_19 = ATgetArgument(t, 0);
                if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  u_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, w_19);
            return(t);
          }
          t = pat_td_1_0(i_2, t);
        }
        x_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_28, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_19)), not_null(t_19))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_19)))), (ATerm) ATmakeAppl(sym_Build_1, x_19)));
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        {
          ATerm a_29 = t;
          int b_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_19 = NULL,g_20 = NULL,h_20 = NULL;
              t = r_19;
              t = new_0_0(t);
              g_20 = t;
              t = s_19;
              {
                static ATerm l_2 (ATerm t);
                static ATerm l_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((y_19 != NULL) && (y_19 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, g_20);
                  return(t);
                }
                t = pat_td_1_0(l_2, t);
              }
              h_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_19), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_20)))), (ATerm) ATmakeAppl(sym_Build_1, h_20)));
              LocalPopChoice(b_29);
            }
          else
            {
              t = a_29;
              {
                ATerm i_20 = NULL,j_20 = NULL,p_20 = NULL,q_20 = NULL;
                t = r_19;
                t = new_0_0(t);
                p_20 = t;
                t = s_19;
                {
                  static ATerm o_2 (ATerm t);
                  static ATerm o_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((i_20 != NULL) && (i_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          i_20 = ATgetArgument(t, 0);
                        if(((j_20 != NULL) && (j_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_20);
                    return(t);
                  }
                  t = pat_td_1_0(o_2, t);
                }
                q_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_20), not_null(j_20), (ATerm) ATmakeAppl(sym_Var_1, p_20))), (ATerm) ATmakeAppl(sym_Build_1, q_20)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm c_29 = t;
  if((PushChoice() == 0))
    {
      ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,c_3 = NULL;
      i_21 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_21);
      g_21 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_21);
      c_3 = t;
      t = SSLsetAnnotations(c_3, g_21);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_29;
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_29;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_21 = ATgetFirst((ATermList) t);
      o_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_21, o_21);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_29 = ATgetArgument(t, 0);
      if(match_cons(f_29, sym__2))
        {
          p_21 = ATgetArgument(f_29, 0);
          q_21 = ATgetArgument(f_29, 1);
        }
      else
        _fail(t);
      {
        ATerm g_29 = ATgetArgument(t, 1);
        if(match_cons(g_29, sym__2))
          {
            r_21 = ATgetArgument(g_29, 0);
            s_21 = ATgetArgument(g_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_21), p_21), (ATerm) ATinsert(CheckATermList(s_21), q_21));
  return(t);
}
static ATerm w_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_29;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm t_21 = NULL,u_21 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_21 = ATgetFirst((ATermList) t);
      u_21 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_21, u_21);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_29 = ATgetArgument(t, 0);
      if(match_cons(h_29, sym__2))
        {
          w_21 = ATgetArgument(h_29, 0);
          x_21 = ATgetArgument(h_29, 1);
        }
      else
        _fail(t);
      {
        ATerm j_29 = ATgetArgument(t, 1);
        if(match_cons(j_29, sym__2))
          {
            y_21 = ATgetArgument(j_29, 0);
            z_21 = ATgetArgument(j_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_21), w_21), (ATerm) ATinsert(CheckATermList(z_21), x_21));
  return(t);
}
static ATerm p_9 (ATerm r_105, ATerm s_105, ATerm t_105, ATerm t)
{
  ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,f_21 = NULL,d_3 = NULL;
  t = t_105;
  t = fetch_1_0(p_2, t);
  t = t_105;
  t = genzip_4_0(q_2, r_2, v_2, LiftPrimArg_0_0, t);
  f_21 = t;
  if(match_cons(t, sym__2))
    {
      z_20 = ATgetArgument(t, 0);
      a_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_21);
  y_20 = t;
  t = z_20;
  t = concat_0_0(t);
  b_21 = t;
  t = a_21;
  t = genzip_4_0(w_2, x_2, y_2, _id, t);
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_21, c_21);
  d_3 = t;
  t = SSLsetAnnotations(d_3, y_20);
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      {
        ATerm l_29 = ATgetArgument(t, 1);
        if(match_cons(l_29, sym__2))
          {
            v_20 = ATgetArgument(l_29, 0);
            w_20 = ATgetArgument(l_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_20, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_20), (ATerm) ATmakeAppl(sym_CallT_3, r_105, s_105, w_20)));
  return(t);
}
static ATerm w_22 (ATerm g_22, ATerm t)
{
  ATerm k_22 = NULL;
  t = g_22;
  {
    ATerm o_29 = t;
    if((PushChoice() == 0))
      {
        ATerm l_22 = NULL,n_22 = NULL,o_22 = NULL,g_3 = NULL;
        o_22 = t;
        if(match_cons(t, sym_Var_1))
          {
            n_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_22);
        l_22 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, n_22);
        g_3 = t;
        t = SSLsetAnnotations(g_3, l_22);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_29;
      }
  }
  t = new_0_0(t);
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, k_22), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_22), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_22)))), (ATerm) ATmakeAppl(sym_Var_1, k_22)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  p_22 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_22 = ATgetArgument(t, 0);
      {
        ATerm s_29 = t;
        int t_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_22(p_22, t);
            LocalPopChoice(t_29);
          }
        else
          {
            t = s_29;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_i_27, (ATerm) ATmakeAppl(sym_Var_1, q_22)));
          }
      }
    }
  else
    {
      t = w_22(p_22, t);
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm u_29 = t;
  if((PushChoice() == 0))
    {
      ATerm f_12 = NULL,h_12 = NULL,i_12 = NULL,m_15 = NULL;
      i_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_12);
      f_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_12);
      m_15 = t;
      t = SSLsetAnnotations(m_15, f_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_29;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_29;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm j_12 = NULL,l_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_12 = ATgetFirst((ATermList) t);
      l_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_12, l_12);
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm m_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_29 = ATgetArgument(t, 0);
      if(match_cons(x_29, sym__2))
        {
          m_12 = ATgetArgument(x_29, 0);
          o_12 = ATgetArgument(x_29, 1);
        }
      else
        _fail(t);
      {
        ATerm z_29 = ATgetArgument(t, 1);
        if(match_cons(z_29, sym__2))
          {
            p_12 = ATgetArgument(z_29, 0);
            q_12 = ATgetArgument(z_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_12), m_12), (ATerm) ATinsert(CheckATermList(q_12), o_12));
  return(t);
}
static ATerm f_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_29;
  return(t);
}
static ATerm i_3 (ATerm t)
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
static ATerm k_3 (ATerm t)
{
  ATerm t_12 = NULL,v_12 = NULL,x_12 = NULL,y_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_30 = ATgetArgument(t, 0);
      if(match_cons(c_30, sym__2))
        {
          t_12 = ATgetArgument(c_30, 0);
          v_12 = ATgetArgument(c_30, 1);
        }
      else
        _fail(t);
      {
        ATerm g_30 = ATgetArgument(t, 1);
        if(match_cons(g_30, sym__2))
          {
            x_12 = ATgetArgument(g_30, 0);
            y_12 = ATgetArgument(g_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_12), t_12), (ATerm) ATinsert(CheckATermList(y_12), v_12));
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm i_30 = t;
  if((PushChoice() == 0))
    {
      ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,o_15 = NULL;
      i_15 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_15);
      g_15 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_15);
      o_15 = t;
      t = SSLsetAnnotations(o_15, g_15);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_30;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_29;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm j_15 = NULL,k_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_15 = ATgetFirst((ATermList) t);
      k_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_15, k_15);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm l_15 = NULL,p_15 = NULL,u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_30 = ATgetArgument(t, 0);
      if(match_cons(k_30, sym__2))
        {
          l_15 = ATgetArgument(k_30, 0);
          p_15 = ATgetArgument(k_30, 1);
        }
      else
        _fail(t);
      {
        ATerm n_30 = ATgetArgument(t, 1);
        if(match_cons(n_30, sym__2))
          {
            u_15 = ATgetArgument(n_30, 0);
            v_15 = ATgetArgument(n_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_15), l_15), (ATerm) ATinsert(CheckATermList(v_15), p_15));
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_d_29;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm x_15 = NULL,z_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_15 = ATgetFirst((ATermList) t);
      z_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_15, z_15);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_30 = ATgetArgument(t, 0);
      if(match_cons(o_30, sym__2))
        {
          a_16 = ATgetArgument(o_30, 0);
          b_16 = ATgetArgument(o_30, 1);
        }
      else
        _fail(t);
      {
        ATerm q_30 = ATgetArgument(t, 1);
        if(match_cons(q_30, sym__2))
          {
            c_16 = ATgetArgument(q_30, 0);
            d_16 = ATgetArgument(q_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_16), a_16), (ATerm) ATinsert(CheckATermList(d_16), b_16));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm w_29 = NULL,y_29 = NULL,d_30 = NULL,e_30 = NULL;
  y_29 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      d_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
      w_29 = ATgetArgument(t, 2);
      {
        ATerm g_11 = NULL,n_11 = NULL,p_11 = NULL,q_11 = NULL,u_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,e_12 = NULL,n_15 = NULL;
        t = w_29;
        t = fetch_1_0(z_2, t);
        t = w_29;
        t = genzip_4_0(a_3, b_3, e_3, LiftPrimArg_0_0, t);
        e_12 = t;
        if(match_cons(t, sym__2))
          {
            u_11 = ATgetArgument(t, 0);
            a_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_12);
        q_11 = t;
        t = u_11;
        t = concat_0_0(t);
        b_12 = t;
        t = a_12;
        t = genzip_4_0(f_3, i_3, k_3, _id, t);
        c_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_12, c_12);
        n_15 = t;
        t = SSLsetAnnotations(n_15, q_11);
        if(match_cons(t, sym__2))
          {
            g_11 = ATgetArgument(t, 0);
            {
              ATerm s_30 = ATgetArgument(t, 1);
              if(match_cons(s_30, sym__2))
                {
                  n_11 = ATgetArgument(s_30, 0);
                  p_11 = ATgetArgument(s_30, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_11), (ATerm) ATmakeAppl(sym_PrimT_3, d_30, e_30, p_11)));
      }
    }
  else
    {
      ATerm q_14 = NULL,r_14 = NULL,t_14 = NULL,u_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,q_15 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          d_30 = ATgetArgument(t, 0);
          e_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_30;
      t = fetch_1_0(m_3, t);
      t = e_30;
      t = genzip_4_0(q_3, r_3, w_3, LiftPrimArg_0_0, t);
      f_15 = t;
      if(match_cons(t, sym__2))
        {
          b_15 = ATgetArgument(t, 0);
          c_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_15);
      u_14 = t;
      t = b_15;
      t = concat_0_0(t);
      d_15 = t;
      t = c_15;
      t = genzip_4_0(x_3, a_4, d_4, _id, t);
      e_15 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_15, e_15);
      q_15 = t;
      t = SSLsetAnnotations(q_15, u_14);
      if(match_cons(t, sym__2))
        {
          q_14 = ATgetArgument(t, 0);
          {
            ATerm t_30 = ATgetArgument(t, 1);
            if(match_cons(t_30, sym__2))
              {
                r_14 = ATgetArgument(t_30, 0);
                t_14 = ATgetArgument(t_30, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, q_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_14), (ATerm) ATmakeAppl(sym_PrimT_3, d_30, (ATerm)ATempty, t_14)));
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,u_31 = NULL,v_31 = NULL;
  v_31 = t;
  if(match_cons(t, sym_Con_3))
    {
      n_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
      u_31 = ATgetArgument(t, 2);
      {
        ATerm e_17 = NULL,y_15 = NULL;
        t = SSLgetAnnotations(v_31);
        e_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, n_31, o_31, u_31);
        y_15 = t;
        t = SSLsetAnnotations(y_15, e_17);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = v_31;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm u_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(e_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_30;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,f_33 = NULL,h_33 = NULL;
  c_33 = t;
  if(match_cons(t, sym_Con_3))
    {
      f_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
      b_33 = ATgetArgument(t, 2);
      {
        ATerm e_18 = NULL,g_16 = NULL;
        t = SSLgetAnnotations(c_33);
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, f_33, h_33, b_33);
        g_16 = t;
        t = SSLsetAnnotations(g_16, e_18);
      }
    }
  else
    {
      ATerm k_19 = NULL,h_16 = NULL;
      if(match_cons(t, sym_App_2))
        {
          f_33 = ATgetArgument(t, 0);
          h_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_33);
      k_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, f_33, h_33);
      h_16 = t;
      t = SSLsetAnnotations(h_16, k_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm v_30 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(f_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_30;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,u_33 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      q_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_33;
  if(match_cons(t, sym_StratRule_3))
    {
      r_33 = ATgetArgument(t, 0);
      s_33 = ATgetArgument(t, 1);
      u_33 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_33), (ATerm) ATmakeAppl(sym_Where_1, u_33)), r_33));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          r_33 = ATgetArgument(t, 0);
          s_33 = ATgetArgument(t, 1);
          u_33 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_33;
      t = pureterm_0_0(t);
      t = s_33;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, s_33)), (ATerm) ATmakeAppl(sym_Where_1, u_33)), (ATerm) ATmakeAppl(sym_Match_1, r_33)));
    }
  return(t);
}
static ATerm a_11 (ATerm e_101, ATerm f_101, ATerm g_101, ATerm t)
{
  ATerm g_34 = NULL,i_34 = NULL,j_34 = NULL,q_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL;
  t = new_0_0(t);
  s_34 = t;
  t = e_101;
  {
    static ATerm g_4 (ATerm t);
    static ATerm g_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm w_30 = ATgetArgument(t, 0);
          if(match_cons(w_30, sym_Var_1))
            {
              if(((q_34 != NULL) && (q_34 != ATgetArgument(w_30, 0))))
                _fail(ATgetArgument(w_30, 0));
              else
                q_34 = ATgetArgument(w_30, 0);
            }
          else
            _fail(t);
          if(((i_34 != NULL) && (i_34 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            i_34 = ATgetArgument(t, 1);
          {
            ATerm x_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, q_34);
      return(t);
    }
    t = oncetd_1_0(g_4, t);
  }
  t_34 = t;
  t = f_101;
  {
    static ATerm j_4 (ATerm t);
    static ATerm j_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm y_30 = ATgetArgument(t, 0);
          if(match_cons(y_30, sym_Var_1))
            {
              if(((q_34 != NULL) && (q_34 != ATgetArgument(y_30, 0))))
                _fail(ATgetArgument(y_30, 0));
              else
                q_34 = ATgetArgument(y_30, 0);
            }
          else
            _fail(t);
          if(((j_34 != NULL) && (j_34 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            j_34 = ATgetArgument(t, 1);
          {
            ATerm z_30 = ATgetArgument(t, 2);
            if(match_cons(z_30, sym_CallT_3))
              {
                if(((g_34 != NULL) && (g_34 != ATgetArgument(z_30, 0))))
                  _fail(ATgetArgument(z_30, 0));
                else
                  g_34 = ATgetArgument(z_30, 0);
                {
                  ATerm a_31 = ATgetArgument(z_30, 1);
                  if(((ATgetType(a_31) != AT_LIST) || !(ATisEmpty(a_31))))
                    _fail(t);
                }
                {
                  ATerm b_31 = ATgetArgument(z_30, 2);
                  if(((ATgetType(b_31) != AT_LIST) || !(ATisEmpty(b_31))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, s_34);
      return(t);
    }
    t = oncetd_1_0(j_4, t);
  }
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_34), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, t_34, u_34, (ATerm) ATmakeAppl(sym_Seq_2, g_101, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(g_34), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(i_34), not_null(j_34), term_i_27))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_34)), (ATerm) ATmakeAppl(sym_Var_1, s_34))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm c_31 = t;
  int d_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_31 = t;
      int j_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
          w_35 = t;
          if(match_cons(t, sym_SRule_1))
            {
              x_35 = ATgetArgument(t, 0);
              t = x_35;
              if(match_cons(t, sym_Rule_3))
                {
                  p_35 = ATgetArgument(t, 0);
                  u_35 = ATgetArgument(t, 1);
                  v_35 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = w_35;
              t = a_11(p_35, u_35, v_35, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm f_20 = NULL,m_20 = NULL,k_16 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  x_35 = ATgetArgument(t, 0);
                  y_35 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_35);
              f_20 = t;
              t = y_35;
              t = desugarRule_0_0(t);
              m_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, x_35, m_20);
              k_16 = t;
              t = SSLsetAnnotations(k_16, f_20);
            }
          LocalPopChoice(j_31);
        }
      else
        {
          t = h_31;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(d_31);
    }
  else
    {
      t = c_31;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm k_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(l_31);
    }
  else
    {
      t = k_31;
    }
  t = repeat_2_0(s_4, _id, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm m_31 = t;
  int p_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(p_31);
    }
  else
    {
      t = m_31;
      {
        ATerm q_31 = t;
        int r_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
            j_37 = t;
            if(match_cons(t, sym_CallT_3))
              {
                l_37 = ATgetArgument(t, 0);
                m_37 = ATgetArgument(t, 1);
                n_37 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = j_37;
            t = p_9(l_37, m_37, n_37, t);
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
                  t = HL_0_0(t);
                  LocalPopChoice(t_31);
                }
              else
                {
                  t = s_31;
                  {
                    ATerm x_31 = t;
                    int y_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(y_31);
                      }
                    else
                      {
                        t = x_31;
                        {
                          ATerm z_31 = t;
                          int a_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_32 = t;
                              int h_32 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_37 = NULL,w_37 = NULL,z_37 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      v_37 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = v_37;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      w_37 = ATgetArgument(t, 0);
                                      t = w_37;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          w_37 = ATgetArgument(t, 0);
                                          z_37 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, w_37, z_37);
                                    }
                                  LocalPopChoice(h_32);
                                }
                              else
                                {
                                  t = c_32;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(a_32);
                            }
                          else
                            {
                              t = z_31;
                              {
                                ATerm i_32 = t;
                                int j_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(j_32);
                                  }
                                else
                                  {
                                    t = i_32;
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
  t = topdown_1_0(q_4, t);
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
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
      {
        ATerm p_32 = t;
        int q_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_32);
          }
        else
          {
            t = p_32;
            {
              ATerm r_32 = t;
              int s_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_23 = ATgetArgument(t, 0);
                      z_23 = ATgetArgument(t, 1);
                      a_24 = ATgetArgument(t, 2);
                      b_24 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_24;
                  t = map_1_0(e_5, t);
                  LocalPopChoice(s_32);
                }
              else
                {
                  t = r_32;
                  {
                    ATerm t_32 = t;
                    int u_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_32);
                      }
                    else
                      {
                        t = t_32;
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
  ATerm k_24 = NULL;
  ATerm v_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_24 = ATgetArgument(t, 0);
          {
            ATerm z_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_32);
      t = k_24;
    }
  else
    {
      t = v_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_24;
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
  ATerm v_24 = NULL;
  ATerm a_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_24 = ATgetArgument(t, 0);
          {
            ATerm e_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_33);
      t = v_24;
    }
  else
    {
      t = a_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_24 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_24;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_g_33;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm w_41 = NULL,z_41 = NULL,a_42 = NULL,e_42 = NULL,f_42 = NULL,i_42 = NULL,j_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,t_42 = NULL,u_42 = NULL;
  w_41 = t;
  if(match_cons(t, sym_Seq_2))
    {
      z_41 = ATgetArgument(t, 0);
      j_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_41;
  if(match_cons(t, sym_CallT_3))
    {
      a_42 = ATgetArgument(t, 0);
      f_42 = ATgetArgument(t, 1);
      i_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_42;
  if(match_cons(t, sym_SVar_1))
    {
      e_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_42;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = f_42;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = i_42;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = j_42;
  if(match_cons(t, sym_Seq_2))
    {
      m_42 = ATgetArgument(t, 0);
      o_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_42;
  if(match_cons(t, sym_Match_1))
    {
      n_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_42;
  if(match_cons(t, sym_Seq_2))
    {
      p_42 = ATgetArgument(t, 0);
      t_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_42;
  if(match_cons(t, sym_Where_1))
    {
      q_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_42;
  if(match_cons(t, sym_Build_1))
    {
      u_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_22 = NULL,i_22 = NULL,m_22 = NULL,r_22 = NULL,y_22 = NULL,z_22 = NULL;
        t = term_x_33;
        y_22 = t;
        t = term_y_33;
        z_22 = t;
        t = term_z_33;
        t = m_13(z_22, y_22, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm b_34 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_34) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            d_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_42, u_42);
        r_22 = t;
        t = (ATerm) ATmakeAppl(sym__3, d_22, n_42, (ATerm) ATmakeAppl(sym__2, q_42, u_42));
        t = d_11(d_22, n_42, r_22, t);
        if(match_cons(t, sym__2))
          {
            i_22 = ATgetArgument(t, 0);
            m_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, i_22), (ATerm) ATmakeAppl(sym_Build_1, m_22)));
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        {
          ATerm f_23 = NULL,n_23 = NULL,w_25 = NULL,x_25 = NULL;
          t = term_x_33;
          w_25 = t;
          t = term_y_33;
          x_25 = t;
          t = term_z_33;
          t = m_13(x_25, w_25, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm c_34 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_34) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              f_23 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_42;
          t = free_vars_3_0(z_4, d_5, tboundin_3_0, t);
          {
            static ATerm i_5 (ATerm t);
            static ATerm i_5 (ATerm t)
            {
              static ATerm j_5 (ATerm t);
              static ATerm j_5 (ATerm t)
              {
                ATerm y_24 = NULL,e_25 = NULL,k_25 = NULL;
                y_24 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, f_23, (ATerm) ATmakeAppl(sym_Var_1, y_24));
                e_25 = t;
                t = term_f_34;
                k_25 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, f_23, (ATerm) ATmakeAppl(sym_Var_1, y_24)), term_f_34);
                t = n_13(k_5, e_25, k_25, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, y_24);
                return(t);
              }
              t = map_1_0(j_5, t);
              t = (ATerm) ATmakeAppl(sym__2, q_42, u_42);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((n_23 != NULL) && (n_23 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    n_23 = ATgetArgument(t, 0);
                  {
                    ATerm h_34 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(h_5, i_5, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_42), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(n_23)), (ATerm) ATmakeAppl(sym_Build_1, u_42)));
        }
      }
  }
  return(t);
}
static ATerm j_44 (ATerm o_43, ATerm p_43, ATerm t)
{
  ATerm e_26 = NULL;
  t = term_g_33;
  e_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_33, p_43);
  t = m_13(e_26, p_43, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm k_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_34) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = o_43;
  return(t);
}
static ATerm k_44 (ATerm s_43, ATerm v_43, ATerm t)
{
  ATerm h_26 = NULL;
  t = term_g_33;
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_33, v_43);
  t = m_13(h_26, v_43, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm l_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_34) != ATmakeSymbol("k_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = s_43;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm y_43 = NULL,z_43 = NULL,h_44 = NULL;
  z_43 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm m_34 = ATgetArgument(t, 0);
      h_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_44;
  if(match_cons(t, sym_Var_1))
    {
      y_43 = ATgetArgument(t, 0);
      {
        ATerm p_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_26 = NULL;
            t = term_g_33;
            v_26 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_g_33, z_43);
            t = m_13(v_26, z_43, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm w_34 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) w_34) != ATmakeSymbol("s_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, y_43);
            LocalPopChoice(v_34);
          }
        else
          {
            t = p_34;
            {
              ATerm z_34 = t;
              int a_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_44(h_44, z_43, t);
                  LocalPopChoice(a_35);
                }
              else
                {
                  t = z_34;
                  t = k_44(h_44, z_43, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm b_35 = t;
      int c_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_44(h_44, z_43, t);
          LocalPopChoice(c_35);
        }
      else
        {
          t = b_35;
          t = k_44(h_44, z_43, t);
        }
    }
  return(t);
}
static ATerm c_11 (ATerm j_46, ATerm k_46, ATerm t)
{
  ATerm m_44 = NULL,n_44 = NULL;
  n_44 = t;
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_46, k_46);
        t = e_14(j_46, k_46, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm m_35 = ATgetFirst((ATermList) t);
            m_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(l_35);
        {
          ATerm o_44 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, j_46, k_46, m_44);
          t = lookup_table_0_1(j_46, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              o_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_14(k_46, m_44, o_44, t);
          t = (ATerm) ATmakeAppl(sym__3, j_46, k_46, m_44);
        }
      }
    else
      {
        t = k_35;
        {
          ATerm d_45 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, j_46, k_46);
          t = lookup_table_0_1(j_46, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_14(k_46, d_45, t);
          t = (ATerm) ATmakeAppl(sym__2, j_46, k_46);
        }
      }
  }
  t = n_44;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_148 (ATerm), ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,w_45 = NULL,y_45 = NULL;
  q_45 = t;
  t = r_148(t);
  p_45 = t;
  {
    ATerm o_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_46 = NULL;
        t = term_r_35;
        g_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_45, term_r_35);
        t = e_14(p_45, g_46, t);
        {
          ATerm s_35 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_35;
            }
        }
        LocalPopChoice(q_35);
      }
    else
      {
        t = o_35;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_45 = ATgetFirst((ATermList) t);
      g_45 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_45, term_r_35, g_45);
  t = lookup_table_0_1(p_45, t);
  y_45 = t;
  t = term_r_35;
  r_45 = t;
  t = y_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(r_45, g_45, w_45, t);
  t = h_45;
  {
    static ATerm l_5 (ATerm t);
    static ATerm l_5 (ATerm t)
    {
      ATerm l_46 = NULL;
      l_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_45, l_46);
      t = c_11(p_45, l_46, t);
      return(t);
    }
    t = map_1_0(l_5, t);
  }
  t = q_45;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm t)
{
  ATerm t_35 = t;
  int z_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_142(t);
      t = o_142(t);
      LocalPopChoice(z_35);
    }
  else
    {
      t = t_35;
      t = o_142(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_148 (ATerm), ATerm t)
{
  ATerm v_46 = NULL,y_46 = NULL,z_46 = NULL,b_47 = NULL,c_47 = NULL,e_47 = NULL,f_47 = NULL;
  y_46 = t;
  t = q_148(t);
  v_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_46, term_r_35);
  {
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_47 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_36 = ATgetArgument(t, 0);
            ATerm d_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_35;
        m_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_46, term_r_35);
        t = e_14(v_46, m_47, t);
        LocalPopChoice(b_36);
      }
    else
      {
        t = a_36;
        t = (ATerm) ATempty;
      }
  }
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_46, term_r_35, (ATerm) ATinsert(CheckATermList(z_46), (ATerm) ATempty));
  t = lookup_table_0_1(v_46, t);
  f_47 = t;
  t = term_r_35;
  b_47 = t;
  t = (ATerm) ATinsert(CheckATermList(z_46), (ATerm) ATempty);
  c_47 = t;
  t = f_47;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(b_47, c_47, e_47, t);
  t = y_46;
  return(t);
}
ATerm scope_2_0 (ATerm s_148 (ATerm), ATerm t_148 (ATerm), ATerm t)
{
  static ATerm m_5 (ATerm t);
  static ATerm m_5 (ATerm t)
  {
    t = end_scope_1_0(s_148, t);
    return(t);
  }
  t = begin_scope_1_0(s_148, t);
  t = restore_always_2_0(t_148, m_5, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm s_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_47);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm e_36 = t;
  int f_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_36);
    }
  else
    {
      t = e_36;
      {
        ATerm g_36 = t;
        int i_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_36);
          }
        else
          {
            t = g_36;
            {
              ATerm j_36 = t;
              int q_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_47 = NULL,x_47 = NULL,y_47 = NULL,a_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_47 = ATgetArgument(t, 0);
                      x_47 = ATgetArgument(t, 1);
                      y_47 = ATgetArgument(t, 2);
                      a_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_47;
                  t = map_1_0(w_5, t);
                  LocalPopChoice(q_36);
                }
              else
                {
                  t = j_36;
                  {
                    ATerm r_36 = t;
                    int y_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_36);
                      }
                    else
                      {
                        t = r_36;
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
  ATerm r_48 = NULL;
  ATerm z_36 = t;
  int d_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_48 = ATgetArgument(t, 0);
          {
            ATerm e_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_37);
      t = r_48;
    }
  else
    {
      t = z_36;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_48;
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
  ATerm c_49 = NULL;
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_49 = ATgetArgument(t, 0);
          {
            ATerm h_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_37);
      t = c_49;
    }
  else
    {
      t = f_37;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_49;
    }
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm d_11 (ATerm b_28, ATerm a_28, ATerm c_28, ATerm t)
{
  ATerm r_47 = NULL;
  static ATerm t_5 (ATerm t);
  static ATerm t_5 (ATerm t)
  {
    t = a_28;
    t = free_vars_3_0(u_5, v_5, tboundin_3_0, t);
    {
      static ATerm z_5 (ATerm t);
      static ATerm z_5 (ATerm t)
      {
        ATerm h_49 = NULL,i_49 = NULL,k_49 = NULL;
        h_49 = t;
        t = (ATerm) ATmakeAppl(sym_App_2, b_28, (ATerm) ATmakeAppl(sym_Var_1, h_49));
        i_49 = t;
        t = term_k_37;
        k_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, b_28, (ATerm) ATmakeAppl(sym_Var_1, h_49)), term_k_37);
        t = n_13(a_6, i_49, k_49, t);
        t = h_49;
        return(t);
      }
      t = map_1_0(z_5, t);
    }
    t = c_28;
    t = alltd_1_0(Replace_0_0, t);
    if(((r_47 != NULL) && (r_47 != t)))
      _fail(t);
    else
      r_47 = t;
    return(t);
  }
  t = scope_2_0(q_5, t_5, t);
  t = not_null(r_47);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm n_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_28);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_37);
    }
  else
    {
      t = o_37;
      {
        ATerm q_37 = t;
        int r_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_37);
          }
        else
          {
            t = q_37;
            {
              ATerm s_37 = t;
              int t_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_28 = ATgetArgument(t, 0);
                      q_28 = ATgetArgument(t, 1);
                      r_28 = ATgetArgument(t, 2);
                      s_28 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_28;
                  t = map_1_0(e_6, t);
                  LocalPopChoice(t_37);
                }
              else
                {
                  t = s_37;
                  {
                    ATerm u_37 = t;
                    int y_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_37);
                      }
                    else
                      {
                        t = u_37;
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
  ATerm z_28 = NULL;
  ATerm a_38 = t;
  int b_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_28 = ATgetArgument(t, 0);
          {
            ATerm c_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_38);
      t = z_28;
    }
  else
    {
      t = a_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_28;
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
  ATerm e_29 = NULL;
  ATerm d_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_29 = ATgetArgument(t, 0);
          {
            ATerm f_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_38);
      t = e_29;
    }
  else
    {
      t = d_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_29;
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_g_33;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL,y_53 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,i_54 = NULL,k_54 = NULL,l_54 = NULL,o_54 = NULL;
  w_53 = t;
  if(match_cons(t, sym_Seq_2))
    {
      x_53 = ATgetArgument(t, 0);
      e_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_53;
  if(match_cons(t, sym_CallT_3))
    {
      y_53 = ATgetArgument(t, 0);
      c_54 = ATgetArgument(t, 1);
      d_54 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_53;
  if(match_cons(t, sym_SVar_1))
    {
      b_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_54;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = c_54;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = d_54;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = e_54;
  if(match_cons(t, sym_Seq_2))
    {
      i_54 = ATgetArgument(t, 0);
      l_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_54;
  if(match_cons(t, sym_Match_1))
    {
      k_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_54;
  if(match_cons(t, sym_Build_1))
    {
      o_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_27 = NULL,s_27 = NULL,x_27 = NULL,y_27 = NULL;
        t = term_j_38;
        x_27 = t;
        t = term_l_38;
        y_27 = t;
        t = term_m_38;
        t = m_13(y_27, x_27, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm n_38 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_38) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            p_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, p_27, k_54, o_54);
        t = d_11(p_27, k_54, o_54, t);
        s_27 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_54), (ATerm) ATmakeAppl(sym_Build_1, s_27));
        LocalPopChoice(h_38);
      }
    else
      {
        t = g_38;
        {
          ATerm h_28 = NULL,m_28 = NULL,a_30 = NULL,b_30 = NULL;
          t = term_j_38;
          a_30 = t;
          t = term_l_38;
          b_30 = t;
          t = term_m_38;
          t = m_13(b_30, a_30, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm o_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) o_38) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              h_28 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_54;
          t = free_vars_3_0(b_6, d_6, tboundin_3_0, t);
          {
            static ATerm i_6 (ATerm t);
            static ATerm i_6 (ATerm t)
            {
              static ATerm j_6 (ATerm t);
              static ATerm j_6 (ATerm t)
              {
                ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
                p_29 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, h_28, (ATerm) ATmakeAppl(sym_Var_1, p_29));
                q_29 = t;
                t = term_q_38;
                r_29 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, h_28, (ATerm) ATmakeAppl(sym_Var_1, p_29)), term_q_38);
                t = n_13(k_6, q_29, r_29, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, p_29);
                return(t);
              }
              t = map_1_0(j_6, t);
              t = o_54;
              t = alltd_1_0(Replace_0_0, t);
              if(((m_28 != NULL) && (m_28 != t)))
                _fail(t);
              else
                m_28 = t;
              return(t);
            }
            t = scope_2_0(h_6, i_6, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_54), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_28)));
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
    ATerm j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL;
    v_57 = t;
    if(match_cons(t, sym_Seq_2))
      {
        j_57 = ATgetArgument(t, 0);
        q_57 = ATgetArgument(t, 1);
        t = j_57;
        if(match_cons(t, sym_Choice_2))
          {
            k_57 = ATgetArgument(t, 0);
            m_57 = ATgetArgument(t, 1);
            {
              ATerm r_38 = t;
              int s_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_31 = NULL,f_31 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_t_38, q_57);
                  e_31 = t;
                  t = term_u_38;
                  f_31 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_u_38, (ATerm) ATmakeAppl(sym_Seq_2, term_t_38, q_57));
                  t = m_13(f_31, e_31, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm v_38 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) v_38) != ATmakeSymbol("j_1", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, k_57, q_57), (ATerm) ATmakeAppl(sym_Seq_2, m_57, q_57));
                  t = bottomup_1_0(l_6, t);
                  LocalPopChoice(s_38);
                }
              else
                {
                  t = r_38;
                  t = v_57;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                k_57 = ATgetArgument(t, 0);
                m_57 = ATgetArgument(t, 1);
                {
                  ATerm w_38 = t;
                  int x_38 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_32 = NULL,f_32 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_y_38, q_57);
                      e_32 = t;
                      t = term_z_38;
                      f_32 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_z_38, (ATerm) ATmakeAppl(sym_Seq_2, term_y_38, q_57));
                      t = m_13(f_32, e_32, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm b_39 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) b_39) != ATmakeSymbol("l_1", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, k_57, q_57), (ATerm) ATmakeAppl(sym_Seq_2, m_57, q_57));
                      t = bottomup_1_0(l_6, t);
                      LocalPopChoice(x_38);
                    }
                  else
                    {
                      t = w_38;
                      t = v_57;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    k_57 = ATgetArgument(t, 0);
                    m_57 = ATgetArgument(t, 1);
                    {
                      ATerm c_39 = t;
                      int d_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_58 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_57, q_57);
                          t = l_6(t);
                          i_58 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, k_57, i_58);
                          t = l_6(t);
                          LocalPopChoice(d_39);
                        }
                      else
                        {
                          t = c_39;
                          t = v_57;
                        }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        k_57 = ATgetArgument(t, 0);
                        m_57 = ATgetArgument(t, 1);
                        {
                          ATerm e_39 = t;
                          int f_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_58 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_57, q_57);
                              t = l_6(t);
                              t_58 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, k_57, t_58);
                              t = l_6(t);
                              LocalPopChoice(f_39);
                            }
                          else
                            {
                              t = e_39;
                              t = v_57;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            k_57 = ATgetArgument(t, 0);
                            {
                              ATerm g_39 = t;
                              int i_39 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_58 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, q_57, k_57);
                                  t = l_6(t);
                                  x_58 = t;
                                  t = (ATerm) ATmakeAppl(sym_Build_1, x_58);
                                  t = l_6(t);
                                  LocalPopChoice(i_39);
                                }
                              else
                                {
                                  t = g_39;
                                  t = v_57;
                                }
                            }
                          }
                        else
                          {
                            t = v_57;
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
            j_57 = ATgetArgument(t, 0);
            q_57 = ATgetArgument(t, 1);
            t = j_57;
            if(match_cons(t, sym_LChoice_2))
              {
                k_57 = ATgetArgument(t, 0);
                m_57 = ATgetArgument(t, 1);
                {
                  ATerm j_39 = t;
                  int m_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_59 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, m_57, q_57);
                      t = l_6(t);
                      g_59 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, k_57, g_59);
                      t = l_6(t);
                      LocalPopChoice(m_39);
                    }
                  else
                    {
                      t = j_39;
                      t = v_57;
                    }
                }
              }
            else
              {
                t = v_57;
              }
          }
        else
          {
            if(match_cons(t, sym_Choice_2))
              {
                j_57 = ATgetArgument(t, 0);
                q_57 = ATgetArgument(t, 1);
                t = j_57;
                if(match_cons(t, sym_Choice_2))
                  {
                    k_57 = ATgetArgument(t, 0);
                    m_57 = ATgetArgument(t, 1);
                    {
                      ATerm q_39 = t;
                      int r_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_59 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, m_57, q_57);
                          t = l_6(t);
                          x_59 = t;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, k_57, x_59);
                          t = l_6(t);
                          LocalPopChoice(r_39);
                        }
                      else
                        {
                          t = q_39;
                          t = v_57;
                        }
                    }
                  }
                else
                  {
                    t = v_57;
                  }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    j_57 = ATgetArgument(t, 0);
                    q_57 = ATgetArgument(t, 1);
                    t = q_57;
                    if(match_cons(t, sym_Op_2))
                      {
                        t_57 = ATgetArgument(t, 0);
                        u_57 = ATgetArgument(t, 1);
                        t = j_57;
                        if(match_cons(t, sym_CallT_3))
                          {
                            k_57 = ATgetArgument(t, 0);
                            m_57 = ATgetArgument(t, 1);
                            p_57 = ATgetArgument(t, 2);
                            t = p_57;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                t = m_57;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    n_57 = ATgetFirst((ATermList) t);
                                    o_57 = (ATerm) ATgetNext((ATermList) t);
                                    t = o_57;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = k_57;
                                        if(match_cons(t, sym_SVar_1))
                                          {
                                            l_57 = ATgetArgument(t, 0);
                                            t = l_57;
                                            if(match_string(t, "bottomup_1_0"))
                                              {
                                                ATerm u_39 = t;
                                                int v_39 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm f_60 = NULL;
                                                    t = u_57;
                                                    {
                                                      static ATerm m_6 (ATerm t);
                                                      static ATerm m_6 (ATerm t)
                                                      {
                                                        ATerm g_60 = NULL;
                                                        g_60 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_y_39, (ATerm)ATinsert(ATempty, n_57), (ATerm) ATempty), g_60);
                                                        return(t);
                                                      }
                                                      t = map_1_0(m_6, t);
                                                    }
                                                    f_60 = t;
                                                    t = (ATerm) ATmakeAppl(sym_App_2, n_57, (ATerm) ATmakeAppl(sym_Op_2, t_57, f_60));
                                                    t = bottomup_1_0(l_6, t);
                                                    LocalPopChoice(v_39);
                                                  }
                                                else
                                                  {
                                                    t = u_39;
                                                    t = v_57;
                                                  }
                                              }
                                            else
                                              {
                                                t = v_57;
                                              }
                                          }
                                        else
                                          {
                                            t = v_57;
                                          }
                                      }
                                    else
                                      {
                                        t = v_57;
                                      }
                                  }
                                else
                                  {
                                    t = v_57;
                                  }
                              }
                            else
                              {
                                t = v_57;
                              }
                          }
                        else
                          {
                            t = v_57;
                          }
                      }
                    else
                      {
                        t = v_57;
                      }
                  }
                else
                  {
                    t = v_57;
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(l_6, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm d_139 (ATerm), ATerm t)
{
  static ATerm n_6 (ATerm t);
  static ATerm n_6 (ATerm t)
  {
    t = bottomup_1_0(d_139, t);
    return(t);
  }
  t = SRTS_all(n_6, t);
  t = d_139(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  static ATerm o_6 (ATerm t);
  static ATerm o_6 (ATerm t)
  {
    ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL;
    d_62 = t;
    if(match_cons(t, sym_Seq_2))
      {
        z_61 = ATgetArgument(t, 0);
        a_62 = ATgetArgument(t, 1);
        t = a_62;
        if(match_cons(t, sym_Choice_2))
          {
            b_62 = ATgetArgument(t, 0);
            c_62 = ATgetArgument(t, 1);
            {
              ATerm z_39 = t;
              int a_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_62 = NULL,i_62 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_61, b_62);
                  t = o_6(t);
                  h_62 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, z_61, c_62);
                  t = o_6(t);
                  i_62 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, h_62, i_62);
                  t = o_6(t);
                  LocalPopChoice(a_40);
                }
              else
                {
                  t = z_39;
                  t = d_62;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                b_62 = ATgetArgument(t, 0);
                c_62 = ATgetArgument(t, 1);
                {
                  ATerm b_40 = t;
                  int c_40 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_62 = NULL,z_62 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_61, b_62);
                      t = o_6(t);
                      r_62 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, z_61, c_62);
                      t = o_6(t);
                      z_62 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, r_62, z_62);
                      t = o_6(t);
                      LocalPopChoice(c_40);
                    }
                  else
                    {
                      t = b_40;
                      t = d_62;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    b_62 = ATgetArgument(t, 0);
                    c_62 = ATgetArgument(t, 1);
                    {
                      ATerm d_40 = t;
                      int e_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_63 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, z_61, c_62);
                          t = o_6(t);
                          m_63 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, b_62, m_63);
                          t = o_6(t);
                          LocalPopChoice(e_40);
                        }
                      else
                        {
                          t = d_40;
                          t = d_62;
                        }
                    }
                  }
                else
                  {
                    t = d_62;
                  }
              }
          }
      }
    else
      {
        t = d_62;
      }
    return(t);
  }
  t = bottomup_1_0(o_6, t);
  return(t);
}
ATerm Seq_2_0 (ATerm p_121 (ATerm), ATerm q_121 (ATerm), ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,m_16 = NULL;
  e_64 = t;
  if(match_cons(t, sym_Seq_2))
    {
      w_63 = ATgetArgument(t, 0);
      x_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_64);
  v_63 = t;
  t = w_63;
  t = p_121(t);
  c_64 = t;
  t = x_63;
  t = q_121(t);
  d_64 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, c_64, d_64);
  m_16 = t;
  t = SSLsetAnnotations(m_16, v_63);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,b_17 = NULL;
  c_37 = t;
  if(match_cons(t, sym_Build_1))
    {
      b_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_37);
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, b_37);
  b_17 = t;
  t = SSLsetAnnotations(b_17, a_37);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm f_40 = t;
  int h_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_40 = t;
      int j_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
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
                ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL;
                i_69 = t;
                if(match_cons(t, sym_Choice_2))
                  {
                    j_69 = ATgetArgument(t, 0);
                    k_69 = ATgetArgument(t, 1);
                    {
                      ATerm k_32 = NULL,w_32 = NULL,x_32 = NULL,r_16 = NULL;
                      t = SSLgetAnnotations(i_69);
                      k_32 = t;
                      t = j_69;
                      t = inline_rules_0_0(t);
                      w_32 = t;
                      t = k_69;
                      t = inline_rules_0_0(t);
                      x_32 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, w_32, x_32);
                      r_16 = t;
                      t = SSLsetAnnotations(r_16, k_32);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        j_69 = ATgetArgument(t, 0);
                        k_69 = ATgetArgument(t, 1);
                        {
                          ATerm o_33 = NULL,a_34 = NULL,d_34 = NULL,s_16 = NULL;
                          t = SSLgetAnnotations(i_69);
                          o_33 = t;
                          t = j_69;
                          t = inline_rules_0_0(t);
                          a_34 = t;
                          t = k_69;
                          t = inline_rules_0_0(t);
                          d_34 = t;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, a_34, d_34);
                          s_16 = t;
                          t = SSLsetAnnotations(s_16, o_33);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            j_69 = ATgetArgument(t, 0);
                            k_69 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm m_40 = t;
                          int n_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_34 = NULL,x_34 = NULL,y_34 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL,n_35 = NULL,x_16 = NULL,v_16 = NULL,u_16 = NULL,t_16 = NULL;
                              t = SSLgetAnnotations(i_69);
                              r_34 = t;
                              t = k_69;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  y_34 = ATgetArgument(t, 0);
                                  d_35 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(k_69);
                              x_34 = t;
                              t = y_34;
                              if(match_cons(t, sym_Match_1))
                                {
                                  j_35 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(y_34);
                              i_35 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, j_35);
                              t_16 = t;
                              t = SSLsetAnnotations(t_16, i_35);
                              n_35 = t;
                              t = d_35;
                              if(match_cons(t, sym_Build_1))
                                {
                                  g_35 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(d_35);
                              f_35 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, g_35);
                              u_16 = t;
                              t = SSLsetAnnotations(u_16, f_35);
                              h_35 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_35, h_35);
                              v_16 = t;
                              t = SSLsetAnnotations(v_16, x_34);
                              e_35 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, j_69, e_35);
                              x_16 = t;
                              t = SSLsetAnnotations(x_16, r_34);
                              LocalPopChoice(n_40);
                            }
                          else
                            {
                              t = m_40;
                              {
                                ATerm h_36 = NULL,o_36 = NULL,p_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,k_17 = NULL,d_17 = NULL,y_16 = NULL;
                                t = SSLgetAnnotations(i_69);
                                h_36 = t;
                                t = k_69;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    p_36 = ATgetArgument(t, 0);
                                    s_36 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(k_69);
                                o_36 = t;
                                t = p_36;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    w_36 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(p_36);
                                v_36 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, w_36);
                                y_16 = t;
                                t = SSLsetAnnotations(y_16, v_36);
                                x_36 = t;
                                t = s_36;
                                t = Seq_2_0(_id, p_6, t);
                                t_36 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, x_36, t_36);
                                d_17 = t;
                                t = SSLsetAnnotations(d_17, o_36);
                                u_36 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, j_69, u_36);
                                k_17 = t;
                                t = SSLsetAnnotations(k_17, h_36);
                              }
                            }
                        }
                      }
                  }
                LocalPopChoice(l_40);
              }
            else
              {
                t = k_40;
                t = InlineStrat_0_0(t);
                t = inline_rules_0_0(t);
              }
          }
        }
      LocalPopChoice(h_40);
    }
  else
    {
      t = f_40;
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_l_38;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = term_y_33;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm x_69 = NULL,z_69 = NULL,c_70 = NULL,e_70 = NULL,h_70 = NULL;
  x_69 = t;
  t = term_j_38;
  e_70 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_40, x_69);
  h_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_38, (ATerm) ATmakeAppl(sym_Defined_2, term_o_40, x_69));
  t = n_13(q_6, e_70, h_70, t);
  t = term_x_33;
  z_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_p_40, x_69);
  c_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_33, (ATerm) ATmakeAppl(sym_Defined_2, term_p_40, x_69));
  t = n_13(r_6, z_69, c_70, t);
  t = x_69;
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_u_38;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_z_38;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm i_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL;
  i_70 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_t_38, i_70);
  p_70 = t;
  t = term_t_40;
  q_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_t_38, i_70), term_t_40);
  t = n_13(s_6, p_70, q_70, t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_y_38, i_70);
  n_70 = t;
  t = term_v_40;
  o_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_y_38, i_70), term_v_40);
  t = n_13(t_6, n_70, o_70, t);
  t = i_70;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm b_71 = NULL,d_71 = NULL,o_71 = NULL;
  b_71 = t;
  t = term_x_40;
  d_71 = t;
  t = (ATerm) ATinsert(ATempty, term_y_40);
  o_71 = t;
  t = SSL_printnl(d_71, o_71);
  t = b_71;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm z_40 = t;
  int a_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      LocalPopChoice(a_41);
    }
  else
    {
      t = z_40;
      {
        ATerm b_41 = t;
        int c_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            LocalPopChoice(c_41);
          }
        else
          {
            t = b_41;
            {
              ATerm u_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  u_71 = ATgetArgument(t, 0);
                  x_71 = ATgetArgument(t, 1);
                  y_71 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = u_71;
              if(match_cons(t, sym_SVar_1))
                {
                  w_71 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = w_71;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = x_71;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_71;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_i_27;
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
      ATerm e_41 = ATgetArgument(t, 0);
      if(match_cons(e_41, sym_SVar_1))
        {
          ATerm h_41 = ATgetArgument(e_41, 0);
          if((ATgetSymbol((ATermAppl) h_41) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm f_41 = ATgetArgument(t, 1);
        if(((ATgetType(f_41) != AT_LIST) || !(ATisEmpty(f_41))))
          _fail(t);
      }
      {
        ATerm g_41 = ATgetArgument(t, 2);
        if(((ATgetType(g_41) != AT_LIST) || !(ATisEmpty(g_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL;
  c_72 = t;
  t = term_x_40;
  d_72 = t;
  t = (ATerm) ATinsert(ATempty, term_i_41);
  e_72 = t;
  t = SSL_printnl(d_72, e_72);
  t = c_72;
  return(t);
}
static ATerm k_11 (ATerm l_26, ATerm t)
{
  ATerm y_70 = NULL,z_70 = NULL;
  t = if_verbose2_1_0(v_6, t);
  t = new_0_0(t);
  z_70 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_39, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_70), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_39, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_70), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = l_26;
  t = inline_rules_0_0(t);
  y_70 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_39, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, z_70, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_m_33, y_70), (ATerm) ATmakeAppl(sym_CallT_3, term_y_39, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_70), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_i_27))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(w_6, t);
  {
    ATerm j_41 = t;
    if((PushChoice() == 0))
      {
        ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL;
        t = oncetd_1_0(x_6, t);
        z_71 = t;
        t = term_x_40;
        a_72 = t;
        t = (ATerm) ATinsert(ATempty, term_k_41);
        b_72 = t;
        t = SSL_printnl(a_72, b_72);
        t = z_71;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_41;
      }
  }
  t = desugar_0_0(t);
  t = if_verbose1_1_0(y_6, t);
  return(t);
}
ATerm alltd_1_0 (ATerm u_140 (ATerm), ATerm t)
{
  static ATerm f_72 (ATerm t);
  static ATerm f_72 (ATerm t)
  {
    ATerm l_41 = t;
    int m_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_140(t);
        LocalPopChoice(m_41);
      }
    else
      {
        t = l_41;
        t = SRTS_all(f_72, t);
      }
    return(t);
  }
  t = f_72(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm j_73 = NULL,l_73 = NULL,r_73 = NULL;
  j_73 = t;
  t = term_x_40;
  l_73 = t;
  t = (ATerm) ATinsert(ATempty, term_n_41);
  r_73 = t;
  t = SSL_printnl(l_73, r_73);
  t = j_73;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = debug_1_0(c_7, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = term_o_41;
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm g_75 = NULL,j_75 = NULL,k_75 = NULL;
  g_75 = t;
  t = term_x_40;
  j_75 = t;
  t = (ATerm) ATinsert(ATempty, term_p_41);
  k_75 = t;
  t = SSL_printnl(j_75, k_75);
  t = g_75;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  g_73 = t;
  t = new_0_0(t);
  f_73 = t;
  {
    ATerm q_41 = t;
    int r_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_39, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_73), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(r_41);
      }
    else
      {
        t = q_41;
        t = if_verbose2_1_0(a_7, t);
        _fail(t);
      }
  }
  {
    ATerm s_41 = t;
    int t_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL,q_74 = NULL,u_74 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL;
        s_73 = t;
        if(match_cons(t, sym_Seq_2))
          {
            x_73 = ATgetArgument(t, 0);
            b_75 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_73;
        if(match_cons(t, sym_All_1))
          {
            y_73 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_73;
        if(match_cons(t, sym_CallT_3))
          {
            z_73 = ATgetArgument(t, 0);
            b_74 = ATgetArgument(t, 1);
            u_74 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = z_73;
        if(match_cons(t, sym_SVar_1))
          {
            a_74 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_74;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = b_74;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_74 = ATgetFirst((ATermList) t);
            q_74 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_74;
        if(match_cons(t, sym_CallT_3))
          {
            f_74 = ATgetArgument(t, 0);
            h_74 = ATgetArgument(t, 1);
            i_74 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = f_74;
        if(match_cons(t, sym_SVar_1))
          {
            g_74 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_74;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_74;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_74;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = u_74;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_75;
        if(match_cons(t, sym_CallT_3))
          {
            c_75 = ATgetArgument(t, 0);
            e_75 = ATgetArgument(t, 1);
            f_75 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = c_75;
        if(match_cons(t, sym_SVar_1))
          {
            d_75 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_75;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_75;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_74;
        if((f_73 != t))
          {
            _fail(t);
          }
        t = d_75;
        if((g_74 != t))
          {
            _fail(t);
          }
        t = s_73;
        LocalPopChoice(t_41);
      }
    else
      {
        t = s_41;
        t = if_verbose1_1_0(b_7, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(d_7, t);
  t = g_73;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm m_80 = NULL,n_80 = NULL,u_80 = NULL;
  m_80 = t;
  t = term_x_40;
  n_80 = t;
  t = (ATerm) ATinsert(ATempty, term_u_41);
  u_80 = t;
  t = SSL_printnl(n_80, u_80);
  t = m_80;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  t = debug_1_0(g_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_v_41;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm f_87 = NULL,h_87 = NULL,k_87 = NULL;
  f_87 = t;
  t = term_x_40;
  h_87 = t;
  t = (ATerm) ATinsert(ATempty, term_g_42);
  k_87 = t;
  t = SSL_printnl(h_87, k_87);
  t = f_87;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm k_80 = NULL,l_80 = NULL;
  l_80 = t;
  t = new_0_0(t);
  k_80 = t;
  {
    ATerm k_42 = t;
    int l_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_s_42, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_80), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(l_42);
      }
    else
      {
        t = k_42;
        t = if_verbose2_1_0(e_7, t);
        _fail(t);
      }
  }
  {
    ATerm v_42 = t;
    int w_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_80 = NULL,w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,c_81 = NULL,f_81 = NULL,g_81 = NULL,i_81 = NULL,j_81 = NULL,y_81 = NULL,g_82 = NULL,n_82 = NULL,p_82 = NULL,y_82 = NULL,j_83 = NULL,k_83 = NULL,r_83 = NULL,s_83 = NULL,u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL,c_84 = NULL,d_84 = NULL,j_84 = NULL,r_84 = NULL,t_84 = NULL,w_84 = NULL,a_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,j_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL,n_86 = NULL,q_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL;
        w_83 = t;
        if(match_cons(t, sym_CallT_3))
          {
            x_83 = ATgetArgument(t, 0);
            z_83 = ATgetArgument(t, 1);
            t_86 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = x_83;
        if(match_cons(t, sym_SVar_1))
          {
            y_83 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_83;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = z_83;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_84 = ATgetFirst((ATermList) t);
            s_86 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_84;
        if(match_cons(t, sym_CallT_3))
          {
            d_84 = ATgetArgument(t, 0);
            j_84 = ATgetArgument(t, 1);
            w_80 = ATgetArgument(t, 2);
            t = d_84;
            if(match_cons(t, sym_SVar_1))
              {
                v_80 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_80;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
              _fail(t);
            t = j_84;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_84 = ATgetFirst((ATermList) t);
                r_86 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_84;
            if(match_cons(t, sym_Seq_2))
              {
                t_84 = ATgetArgument(t, 0);
                v_85 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_84;
            if(match_cons(t, sym_CallT_3))
              {
                w_84 = ATgetArgument(t, 0);
                t_85 = ATgetArgument(t, 1);
                u_85 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_84;
            if(match_cons(t, sym_SVar_1))
              {
                a_85 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = t_85;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = u_85;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = v_85;
            if(match_cons(t, sym_CallT_3))
              {
                w_85 = ATgetArgument(t, 0);
                h_86 = ATgetArgument(t, 1);
                q_86 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_85;
            if(match_cons(t, sym_SVar_1))
              {
                g_86 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_86;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
              _fail(t);
            t = h_86;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_86 = ATgetFirst((ATermList) t);
                n_86 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_86;
            if(match_cons(t, sym_CallT_3))
              {
                j_86 = ATgetArgument(t, 0);
                l_86 = ATgetArgument(t, 1);
                m_86 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = j_86;
            if(match_cons(t, sym_SVar_1))
              {
                k_86 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = m_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = n_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = q_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = w_80;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = s_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = t_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_85;
            if((k_80 != t))
              {
                _fail(t);
              }
            t = k_86;
            if((a_85 != t))
              {
                _fail(t);
              }
            t = w_83;
          }
        else
          {
            if(match_cons(t, sym_Rec_2))
              {
                d_84 = ATgetArgument(t, 0);
                j_84 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = j_84;
            if(match_cons(t, sym_CallT_3))
              {
                r_84 = ATgetArgument(t, 0);
                r_86 = ATgetArgument(t, 1);
                v_83 = ATgetArgument(t, 2);
                t = r_84;
                if(match_cons(t, sym_SVar_1))
                  {
                    t_84 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = t_84;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                  _fail(t);
                t = r_86;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    x_80 = ATgetFirst((ATermList) t);
                    u_83 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = x_80;
                if(match_cons(t, sym_Seq_2))
                  {
                    y_80 = ATgetArgument(t, 0);
                    i_81 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_80;
                if(match_cons(t, sym_CallT_3))
                  {
                    z_80 = ATgetArgument(t, 0);
                    f_81 = ATgetArgument(t, 1);
                    g_81 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = z_80;
                if(match_cons(t, sym_SVar_1))
                  {
                    c_81 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = f_81;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = g_81;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_81;
                if(match_cons(t, sym_CallT_3))
                  {
                    j_81 = ATgetArgument(t, 0);
                    g_82 = ATgetArgument(t, 1);
                    s_83 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = j_81;
                if(match_cons(t, sym_SVar_1))
                  {
                    y_81 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = y_81;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = g_82;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    n_82 = ATgetFirst((ATermList) t);
                    r_83 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = n_82;
                if(match_cons(t, sym_CallT_3))
                  {
                    p_82 = ATgetArgument(t, 0);
                    j_83 = ATgetArgument(t, 1);
                    k_83 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = p_82;
                if(match_cons(t, sym_SVar_1))
                  {
                    y_82 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = j_83;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_83;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_83;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_83;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = u_83;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_83;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = s_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_81;
                if((k_80 != t))
                  {
                    _fail(t);
                  }
                t = y_82;
                if((d_84 != t))
                  {
                    _fail(t);
                  }
                t = w_83;
              }
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    r_84 = ATgetArgument(t, 0);
                    r_86 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_84;
                if(match_cons(t, sym_Seq_2))
                  {
                    t_84 = ATgetArgument(t, 0);
                    v_85 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_84;
                if(match_cons(t, sym_CallT_3))
                  {
                    w_84 = ATgetArgument(t, 0);
                    t_85 = ATgetArgument(t, 1);
                    u_85 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = w_84;
                if(match_cons(t, sym_SVar_1))
                  {
                    a_85 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = t_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = u_85;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = v_85;
                if(match_cons(t, sym_CallT_3))
                  {
                    w_85 = ATgetArgument(t, 0);
                    h_86 = ATgetArgument(t, 1);
                    q_86 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = w_85;
                if(match_cons(t, sym_SVar_1))
                  {
                    g_86 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = g_86;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = h_86;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_86 = ATgetFirst((ATermList) t);
                    n_86 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_86;
                if(match_cons(t, sym_CallT_3))
                  {
                    j_86 = ATgetArgument(t, 0);
                    l_86 = ATgetArgument(t, 1);
                    m_86 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = j_86;
                if(match_cons(t, sym_SVar_1))
                  {
                    k_86 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = l_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_86;
                if(!(match_cons(t, sym_Id_0)))
                  _fail(t);
                t = s_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = t_86;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_85;
                if((k_80 != t))
                  {
                    _fail(t);
                  }
                t = k_86;
                if((d_84 != t))
                  {
                    _fail(t);
                  }
                t = w_83;
              }
          }
        LocalPopChoice(w_42);
      }
    else
      {
        t = v_42;
        t = if_verbose1_1_0(f_7, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(h_7, t);
  t = l_80;
  return(t);
}
ATerm debug_1_0 (ATerm g_148 (ATerm), ATerm t)
{
  ATerm l_87 = NULL,n_87 = NULL,o_87 = NULL,v_87 = NULL;
  l_87 = t;
  t = g_148(t);
  n_87 = t;
  t = term_x_40;
  o_87 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_87), n_87);
  v_87 = t;
  t = SSL_printnl(o_87, v_87);
  t = l_87;
  return(t);
}
ATerm topdown_1_0 (ATerm c_139 (ATerm), ATerm t)
{
  static ATerm i_7 (ATerm t);
  static ATerm i_7 (ATerm t)
  {
    t = topdown_1_0(c_139, t);
    return(t);
  }
  t = c_139(t);
  t = SRTS_all(i_7, t);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm x_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm z_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(y_42);
      {
        ATerm h_88 = NULL,m_88 = NULL;
        h_88 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm a_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        m_88 = t;
        t = SSLgetAnnotations(h_88);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_43 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) c_43) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_43 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(d_43) != AT_LIST) || !(ATisEmpty(d_43))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = m_88;
      }
    }
  else
    {
      t = x_42;
      {
        ATerm e_43 = t;
        int f_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm i_43 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) i_43) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm j_43 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(f_43);
            _fail(t);
          }
        else
          {
            t = e_43;
          }
      }
    }
  return(t);
}
static ATerm m_11 (ATerm q_83, ATerm p_83, ATerm t)
{
  t = q_83;
  t = topdown_1_0(j_7, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, q_83);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm d_89 = NULL,h_89 = NULL,j_89 = NULL,k_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      j_89 = ATgetArgument(t, 0);
      n_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_89;
  if(match_cons(t, sym_Match_1))
    {
      k_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_89;
  if(match_cons(t, sym_Var_1))
    {
      m_89 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_89;
  if(match_cons(t, sym_Seq_2))
    {
      o_89 = ATgetArgument(t, 0);
      h_89 = ATgetArgument(t, 1);
      t = o_89;
      if(match_cons(t, sym_Build_1))
        {
          p_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_89;
      if(match_cons(t, sym_Var_1))
        {
          d_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_89;
      if((m_89 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_89)), h_89);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          o_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_89;
      if(match_cons(t, sym_Var_1))
        {
          p_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_89;
      if((m_89 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_89));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm i_90 = NULL,j_90 = NULL,l_90 = NULL,m_90 = NULL,n_90 = NULL,o_90 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_90 = ATgetArgument(t, 0);
      n_90 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_90;
  if(match_cons(t, sym_Build_1))
    {
      m_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_90;
  if(match_cons(t, sym_Seq_2))
    {
      o_90 = ATgetArgument(t, 0);
      j_90 = ATgetArgument(t, 1);
      t = o_90;
      if(match_cons(t, sym_Match_1))
        {
          i_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_90;
      if((m_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_90), j_90);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          o_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_90;
      if((m_90 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, m_90);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm w_90 = NULL,x_90 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL,g_91 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      d_91 = ATgetArgument(t, 0);
      f_91 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_91;
  if(match_cons(t, sym_Match_1))
    {
      e_91 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_91;
  if(match_cons(t, sym_Seq_2))
    {
      g_91 = ATgetArgument(t, 0);
      x_90 = ATgetArgument(t, 1);
      t = g_91;
      if(match_cons(t, sym_Match_1))
        {
          w_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_90;
      if((e_91 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_91), x_90);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          g_91 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_91;
      if((e_91 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, e_91);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm s_91 = NULL,t_91 = NULL,v_91 = NULL,x_91 = NULL,b_92 = NULL,i_92 = NULL,j_92 = NULL,k_92 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_91 = ATgetArgument(t, 0);
      b_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_91;
  if(match_cons(t, sym_Build_1))
    {
      ATerm m_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_92;
  if(match_cons(t, sym_Seq_2))
    {
      i_92 = ATgetArgument(t, 0);
      j_92 = ATgetArgument(t, 1);
      t = i_92;
      if(match_cons(t, sym_PrimT_3))
        {
          s_91 = ATgetArgument(t, 0);
          t_91 = ATgetArgument(t, 1);
          v_91 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, s_91, t_91, v_91), j_92);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          i_92 = ATgetArgument(t, 0);
          j_92 = ATgetArgument(t, 1);
          k_92 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_92, j_92, k_92);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm z_92 = NULL,a_93 = NULL,c_93 = NULL,g_93 = NULL,h_93 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_93 = ATgetArgument(t, 0);
      g_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_93;
  if(match_cons(t, sym_Build_1))
    {
      ATerm n_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_93;
  if(match_cons(t, sym_Seq_2))
    {
      h_93 = ATgetArgument(t, 0);
      a_93 = ATgetArgument(t, 1);
      t = h_93;
      if(match_cons(t, sym_Build_1))
        {
          z_92 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_92), a_93);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          h_93 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, h_93);
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_43 = ATgetArgument(t, 0);
      if(((ATgetType(q_43) != AT_LIST) || !(ATisEmpty(q_43))))
        _fail(t);
      {
        ATerm r_43 = ATgetArgument(t, 1);
        if(((ATgetType(r_43) != AT_LIST) || !(ATisEmpty(r_43))))
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
  ATerm z_95 = NULL,a_96 = NULL,e_96 = NULL,f_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_43 = ATgetArgument(t, 0);
      if(((ATgetType(w_43) == AT_LIST) && !(ATisEmpty(w_43))))
        {
          z_95 = ATgetFirst((ATermList) w_43);
          a_96 = (ATerm) ATgetNext((ATermList) w_43);
        }
      else
        _fail(t);
      {
        ATerm x_43 = ATgetArgument(t, 1);
        if(((ATgetType(x_43) == AT_LIST) && !(ATisEmpty(x_43))))
          {
            e_96 = ATgetFirst((ATermList) x_43);
            f_96 = (ATerm) ATgetNext((ATermList) x_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_95, e_96), (ATerm) ATmakeAppl(sym__2, a_96, f_96));
  return(t);
}
static ATerm m_7 (ATerm t)
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
static ATerm n_7 (ATerm t)
{
  ATerm l_96 = NULL,m_96 = NULL;
  if(match_cons(t, sym__2))
    {
      l_96 = ATgetArgument(t, 0);
      m_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_96), (ATerm) ATmakeAppl(sym_Match_1, m_96));
  return(t);
}
static ATerm p_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_44 = ATgetArgument(t, 0);
      if(((ATgetType(e_44) != AT_LIST) || !(ATisEmpty(e_44))))
        _fail(t);
      {
        ATerm g_44 = ATgetArgument(t, 1);
        if(((ATgetType(g_44) != AT_LIST) || !(ATisEmpty(g_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm s_96 = NULL,v_96 = NULL,w_96 = NULL,y_96 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_44 = ATgetArgument(t, 0);
      if(((ATgetType(i_44) == AT_LIST) && !(ATisEmpty(i_44))))
        {
          s_96 = ATgetFirst((ATermList) i_44);
          v_96 = (ATerm) ATgetNext((ATermList) i_44);
        }
      else
        _fail(t);
      {
        ATerm l_44 = ATgetArgument(t, 1);
        if(((ATgetType(l_44) == AT_LIST) && !(ATisEmpty(l_44))))
          {
            w_96 = ATgetFirst((ATermList) l_44);
            y_96 = (ATerm) ATgetNext((ATermList) l_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_96, w_96), (ATerm) ATmakeAppl(sym__2, v_96, y_96));
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm z_96 = NULL,f_97 = NULL;
  if(match_cons(t, sym__2))
    {
      z_96 = ATgetArgument(t, 0);
      f_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_97), z_96);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm h_97 = NULL,n_97 = NULL;
  if(match_cons(t, sym__2))
    {
      h_97 = ATgetArgument(t, 0);
      n_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_97), (ATerm) ATmakeAppl(sym_Match_1, n_97));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,n_94 = NULL,o_94 = NULL,r_94 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      h_94 = ATgetArgument(t, 0);
      l_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_94;
  if(match_cons(t, sym_Build_1))
    {
      i_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_94;
  if(match_cons(t, sym_Op_2))
    {
      j_94 = ATgetArgument(t, 0);
      k_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_94;
  if(match_cons(t, sym_Seq_2))
    {
      n_94 = ATgetArgument(t, 0);
      e_94 = ATgetArgument(t, 1);
      {
        ATerm y_95 = NULL;
        t = n_94;
        if(match_cons(t, sym_Match_1))
          {
            o_94 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_94;
        if(match_cons(t, sym_Op_2))
          {
            c_94 = ATgetArgument(t, 0);
            d_94 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_94;
        if((j_94 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, k_94, d_94);
        t = genzip_4_0(k_7, l_7, m_7, n_7, t);
        y_95 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_95), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, j_94, k_94)), e_94));
      }
    }
  else
    {
      ATerm r_96 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          n_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_94;
      if(match_cons(t, sym_Op_2))
        {
          o_94 = ATgetArgument(t, 0);
          r_94 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_94;
      if((j_94 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, k_94, r_94);
      t = genzip_4_0(p_7, q_7, r_7, s_7, t);
      r_96 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_96), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, j_94, k_94)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm h_99 = NULL,m_99 = NULL,n_99 = NULL,u_99 = NULL,v_99 = NULL,c_100 = NULL,d_100 = NULL,g_100 = NULL;
  m_99 = t;
  if(match_cons(t, sym_Seq_2))
    {
      n_99 = ATgetArgument(t, 0);
      c_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_99;
  if(match_cons(t, sym_Build_1))
    {
      u_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_99;
  if(match_cons(t, sym_Op_2))
    {
      v_99 = ATgetArgument(t, 0);
      {
        ATerm p_44 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = c_100;
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            d_100 = ATgetArgument(t, 0);
            {
              ATerm u_44 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(t_44);
        t = d_100;
        if(match_cons(t, sym_Match_1))
          {
            g_100 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_100;
        if(match_cons(t, sym_Op_2))
          {
            h_99 = ATgetArgument(t, 0);
            {
              ATerm v_44 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_99, h_99);
        {
          ATerm x_44 = t;
          if((PushChoice() == 0))
            {
              ATerm x_37 = NULL;
              if(match_cons(t, sym__2))
                {
                  x_37 = ATgetArgument(t, 0);
                  if((x_37 != ATgetArgument(t, 1)))
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
              t = x_44;
            }
        }
        t = term_z_44;
      }
    else
      {
        t = s_44;
        if(match_cons(t, sym_Match_1))
          {
            d_100 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_100;
        if(match_cons(t, sym_Op_2))
          {
            g_100 = ATgetArgument(t, 0);
            {
              ATerm a_45 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_99, g_100);
        {
          ATerm b_45 = t;
          if((PushChoice() == 0))
            {
              ATerm k_38 = NULL;
              if(match_cons(t, sym__2))
                {
                  k_38 = ATgetArgument(t, 0);
                  if((k_38 != ATgetArgument(t, 1)))
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
              t = b_45;
            }
        }
        t = term_z_44;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm g_140 (ATerm), ATerm t)
{
  static ATerm r_100 (ATerm t);
  static ATerm r_100 (ATerm t)
  {
    ATerm c_45 = t;
    int e_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_140(t);
        LocalPopChoice(e_45);
      }
    else
      {
        t = c_45;
        t = SRTS_one(r_100, t);
      }
    return(t);
  }
  t = r_100(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm n_103 = NULL,o_103 = NULL,r_103 = NULL,s_103 = NULL,i_104 = NULL,j_104 = NULL,k_104 = NULL,n_104 = NULL,t_104 = NULL,w_104 = NULL,m_106 = NULL,n_106 = NULL,u_106 = NULL;
  n_103 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_103 = ATgetArgument(t, 0);
      t_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_104;
  if(match_cons(t, sym_Let_2))
    {
      w_104 = ATgetArgument(t, 0);
      n_106 = ATgetArgument(t, 1);
      {
        ATerm j_107 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, o_103, w_104);
        t = conc_0_0(t);
        j_107 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, j_107, n_106);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          w_104 = ATgetArgument(t, 0);
          n_106 = ATgetArgument(t, 1);
          u_106 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_103;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_103 = ATgetFirst((ATermList) t);
          n_104 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_103;
      if(match_cons(t, sym_SDefT_4))
        {
          s_103 = ATgetArgument(t, 0);
          i_104 = ATgetArgument(t, 1);
          j_104 = ATgetArgument(t, 2);
          k_104 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = i_104;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_104;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_104;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_104;
      if(match_cons(t, sym_SVar_1))
        {
          m_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_106;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_106;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_106;
      if((s_103 != t))
        {
          _fail(t);
        }
      t = k_104;
      {
        ATerm f_45 = t;
        if((PushChoice() == 0))
          {
            static ATerm t_7 (ATerm t);
            static ATerm t_7 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm i_45 = ATgetArgument(t, 0);
                  if(match_cons(i_45, sym_SVar_1))
                    {
                      if((s_103 != ATgetArgument(i_45, 0)))
                        {
                          _fail(ATgetArgument(i_45, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm j_45 = ATgetArgument(t, 1);
                    if(((ATgetType(j_45) != AT_LIST) || !(ATisEmpty(j_45))))
                      _fail(t);
                  }
                  {
                    ATerm l_45 = ATgetArgument(t, 2);
                    if(((ATgetType(l_45) != AT_LIST) || !(ATisEmpty(l_45))))
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
            t = f_45;
          }
      }
      t = k_104;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm b_108 = NULL,c_108 = NULL,g_108 = NULL,h_108 = NULL,i_108 = NULL,j_108 = NULL,s_108 = NULL,u_108 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      s_108 = ATgetArgument(t, 0);
      t = s_108;
      if(match_cons(t, sym_Seq_2))
        {
          j_108 = ATgetArgument(t, 0);
          c_108 = ATgetArgument(t, 1);
          t = j_108;
          if(match_cons(t, sym_Where_1))
            {
              b_108 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_108;
          if(match_cons(t, sym_Seq_2))
            {
              g_108 = ATgetArgument(t, 0);
              i_108 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_108;
          if(match_cons(t, sym_Build_1))
            {
              h_108 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, b_108, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_108), i_108)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              j_108 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, j_108);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          s_108 = ATgetArgument(t, 0);
          t = s_108;
          if(match_cons(t, sym_Test_1))
            {
              j_108 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, j_108);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              s_108 = ATgetArgument(t, 0);
              t = s_108;
              if(match_cons(t, sym_Not_1))
                {
                  j_108 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, j_108);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  s_108 = ATgetArgument(t, 0);
                  u_108 = ATgetArgument(t, 1);
                  t = u_108;
                  if((s_108 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      s_108 = ATgetArgument(t, 0);
                      u_108 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_108;
                  if((s_108 != t))
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
  ATerm m_109 = NULL,n_109 = NULL,q_109 = NULL,s_109 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      m_109 = ATgetArgument(t, 0);
      s_109 = ATgetArgument(t, 1);
      t = m_109;
      if(match_cons(t, sym_LChoice_2))
        {
          n_109 = ATgetArgument(t, 0);
          q_109 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, n_109, (ATerm) ATmakeAppl(sym_LChoice_2, q_109, s_109));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          m_109 = ATgetArgument(t, 0);
          s_109 = ATgetArgument(t, 1);
          t = m_109;
          if(match_cons(t, sym_Seq_2))
            {
              n_109 = ATgetArgument(t, 0);
              q_109 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, n_109, (ATerm) ATmakeAppl(sym_Seq_2, q_109, s_109));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              m_109 = ATgetArgument(t, 0);
              s_109 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_109;
          if(match_cons(t, sym_Choice_2))
            {
              n_109 = ATgetArgument(t, 0);
              q_109 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, n_109, (ATerm) ATmakeAppl(sym_Choice_2, q_109, s_109));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm s_113 = NULL,w_113 = NULL,a_114 = NULL,c_114 = NULL,d_114 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      c_114 = ATgetArgument(t, 0);
      d_114 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, c_114, d_114);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          c_114 = ATgetArgument(t, 0);
          t = c_114;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_113 = ATgetFirst((ATermList) t);
              w_113 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, s_113, (ATerm) ATmakeAppl(sym_LChoices_1, w_113));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_z_44;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              c_114 = ATgetArgument(t, 0);
              t = c_114;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_113 = ATgetFirst((ATermList) t);
                  w_113 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, s_113, (ATerm) ATmakeAppl(sym_Choices_1, w_113));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_z_44;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  c_114 = ATgetArgument(t, 0);
                  t = c_114;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_113 = ATgetFirst((ATermList) t);
                      w_113 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_113, (ATerm) ATmakeAppl(sym_Seqs_1, w_113));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_i_27;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      c_114 = ATgetArgument(t, 0);
                      d_114 = ATgetArgument(t, 1);
                      a_114 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, d_114, (ATerm) ATmakeAppl(sym_Op_2, term_l_24, (ATerm) ATinsert(ATinsert(ATempty, a_114), c_114)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          c_114 = ATgetArgument(t, 0);
                          d_114 = ATgetArgument(t, 1);
                          a_114 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, a_114)), c_114), (ATerm) ATmakeAppl(sym_Build_1, d_114)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              c_114 = ATgetArgument(t, 0);
                              d_114 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, c_114, (ATerm) ATmakeAppl(sym_Match_1, d_114));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  c_114 = ATgetArgument(t, 0);
                                  d_114 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_114), d_114);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      c_114 = ATgetArgument(t, 0);
                                      d_114 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_114), c_114);
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
  ATerm a_117 = NULL,b_117 = NULL,c_117 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      a_117 = ATgetArgument(t, 0);
      t = a_117;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_z_44;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          a_117 = ATgetArgument(t, 0);
          t = a_117;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_i_27;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              a_117 = ATgetArgument(t, 0);
              b_117 = ATgetArgument(t, 1);
              t = a_117;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_z_44;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  a_117 = ATgetArgument(t, 0);
                  b_117 = ATgetArgument(t, 1);
                  t = b_117;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_z_44;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      a_117 = ATgetArgument(t, 0);
                      b_117 = ATgetArgument(t, 1);
                      t = b_117;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_z_44;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          a_117 = ATgetArgument(t, 0);
                          t = a_117;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_z_44;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              a_117 = ATgetArgument(t, 0);
                              t = a_117;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_z_44;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  a_117 = ATgetArgument(t, 0);
                                  b_117 = ATgetArgument(t, 1);
                                  t = b_117;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_z_44;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      a_117 = ATgetArgument(t, 0);
                                      b_117 = ATgetArgument(t, 1);
                                      t = b_117;
                                      t = fetch_1_0(u_7, t);
                                      t = term_z_44;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          a_117 = ATgetArgument(t, 0);
                                          b_117 = ATgetArgument(t, 1);
                                          t = b_117;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = a_117;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = b_117;
                                                }
                                              else
                                                {
                                                  t = a_117;
                                                }
                                            }
                                          else
                                            {
                                              t = a_117;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = b_117;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              a_117 = ATgetArgument(t, 0);
                                              b_117 = ATgetArgument(t, 1);
                                              t = b_117;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = a_117;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = b_117;
                                                    }
                                                  else
                                                    {
                                                      t = a_117;
                                                    }
                                                }
                                              else
                                                {
                                                  t = a_117;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = b_117;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  a_117 = ATgetArgument(t, 0);
                                                  t = a_117;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_z_44;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      a_117 = ATgetArgument(t, 0);
                                                      b_117 = ATgetArgument(t, 1);
                                                      c_117 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = c_117;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, a_117, b_117);
                                                }
                                            }
                                        }
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
  ATerm z_118 = NULL,b_119 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      b_119 = ATgetArgument(t, 0);
      t = b_119;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_i_27;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          b_119 = ATgetArgument(t, 0);
          t = b_119;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_z_44;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              b_119 = ATgetArgument(t, 0);
              z_118 = ATgetArgument(t, 1);
              t = z_118;
              if(match_cons(t, sym_Id_0))
                {
                  t = b_119;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = z_118;
                    }
                  else
                    {
                      t = b_119;
                    }
                }
              else
                {
                  t = b_119;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = z_118;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  b_119 = ATgetArgument(t, 0);
                  z_118 = ATgetArgument(t, 1);
                  t = b_119;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_i_27;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      b_119 = ATgetArgument(t, 0);
                      z_118 = ATgetArgument(t, 1);
                      t = z_118;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_i_27;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          b_119 = ATgetArgument(t, 0);
                          z_118 = ATgetArgument(t, 1);
                          t = z_118;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_i_27;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              b_119 = ATgetArgument(t, 0);
                              t = b_119;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_i_27;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  b_119 = ATgetArgument(t, 0);
                                  t = b_119;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_i_27;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      b_119 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = b_119;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_i_27;
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
  ATerm m_45 = t;
  int n_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(n_45);
    }
  else
    {
      t = m_45;
      {
        ATerm o_45 = t;
        int u_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(u_45);
          }
        else
          {
            t = o_45;
            {
              ATerm h_46 = t;
              int m_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(m_46);
                }
              else
                {
                  t = h_46;
                  {
                    ATerm p_46 = t;
                    int q_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(q_46);
                      }
                    else
                      {
                        t = p_46;
                        {
                          ATerm r_46 = t;
                          int u_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(u_46);
                            }
                          else
                            {
                              t = r_46;
                              {
                                ATerm w_46 = t;
                                int x_46 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_119 = NULL,c_120 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        z_119 = ATgetArgument(t, 0);
                                        c_120 = ATgetArgument(t, 1);
                                        t = z_119;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = c_120;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            z_119 = ATgetArgument(t, 0);
                                            c_120 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = z_119;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = c_120;
                                      }
                                    LocalPopChoice(x_46);
                                  }
                                else
                                  {
                                    t = w_46;
                                    {
                                      ATerm a_47 = t;
                                      int d_47 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(d_47);
                                        }
                                      else
                                        {
                                          t = a_47;
                                          {
                                            ATerm g_47 = t;
                                            int h_47 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(h_47);
                                              }
                                            else
                                              {
                                                t = g_47;
                                                {
                                                  ATerm i_47 = t;
                                                  int j_47 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(j_47);
                                                    }
                                                  else
                                                    {
                                                      t = i_47;
                                                      {
                                                        ATerm k_47 = t;
                                                        int l_47 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(l_47);
                                                          }
                                                        else
                                                          {
                                                            t = k_47;
                                                            {
                                                              ATerm n_47 = t;
                                                              int o_47 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(o_47);
                                                                }
                                                              else
                                                                {
                                                                  t = n_47;
                                                                  {
                                                                    ATerm q_47 = t;
                                                                    int t_47 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(t_47);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = q_47;
                                                                        {
                                                                          ATerm u_47 = t;
                                                                          int w_47 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(w_47);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_47;
                                                                              {
                                                                                ATerm z_47 = t;
                                                                                int b_48 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(b_48);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_47;
                                                                                    {
                                                                                      ATerm f_120 = NULL,g_120 = NULL,h_120 = NULL,i_120 = NULL;
                                                                                      g_120 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          h_120 = ATgetArgument(t, 0);
                                                                                          i_120 = ATgetArgument(t, 1);
                                                                                          t = h_120;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              f_120 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = g_120;
                                                                                          t = m_11(f_120, i_120, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              h_120 = ATgetArgument(t, 0);
                                                                                              i_120 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = h_120;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = i_120;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_2_0 (ATerm t_146 (ATerm), ATerm u_146 (ATerm), ATerm t)
{
  static ATerm m_120 (ATerm t);
  static ATerm m_120 (ATerm t)
  {
    ATerm f_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_146(t);
        t = m_120(t);
        LocalPopChoice(i_48);
      }
    else
      {
        t = f_48;
        t = u_146(t);
      }
    return(t);
  }
  t = m_120(t);
  return(t);
}
ATerm downup_1_0 (ATerm e_139 (ATerm), ATerm t)
{
  t = e_139(t);
  {
    static ATerm v_7 (ATerm t);
    static ATerm v_7 (ATerm t)
    {
      t = downup_1_0(e_139, t);
      return(t);
    }
    t = SRTS_all(v_7, t);
  }
  t = e_139(t);
  return(t);
}
ATerm genzip_4_0 (ATerm y_156 (ATerm), ATerm z_156 (ATerm), ATerm a_157 (ATerm), ATerm b_157 (ATerm), ATerm t)
{
  static ATerm t_120 (ATerm t);
  static ATerm t_120 (ATerm t)
  {
    ATerm j_48 = t;
    int k_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_156(t);
        LocalPopChoice(k_48);
      }
    else
      {
        t = j_48;
        {
          ATerm n_120 = NULL,o_120 = NULL,p_120 = NULL,q_120 = NULL,r_120 = NULL,s_120 = NULL,b_18 = NULL;
          t = z_156(t);
          s_120 = t;
          if(match_cons(t, sym__2))
            {
              o_120 = ATgetArgument(t, 0);
              p_120 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_120);
          n_120 = t;
          t = o_120;
          t = b_157(t);
          q_120 = t;
          t = p_120;
          t = t_120(t);
          r_120 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_120, r_120);
          b_18 = t;
          t = SSLsetAnnotations(b_18, n_120);
          t = a_157(t);
        }
      }
    return(t);
  }
  t = t_120(t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_48 = ATgetArgument(t, 0);
      if(((ATgetType(o_48) != AT_LIST) || !(ATisEmpty(o_48))))
        _fail(t);
      {
        ATerm q_48 = ATgetArgument(t, 1);
        if(((ATgetType(q_48) != AT_LIST) || !(ATisEmpty(q_48))))
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
  ATerm h_121 = NULL,i_121 = NULL,j_121 = NULL,k_121 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_48 = ATgetArgument(t, 0);
      if(((ATgetType(s_48) == AT_LIST) && !(ATisEmpty(s_48))))
        {
          h_121 = ATgetFirst((ATermList) s_48);
          i_121 = (ATerm) ATgetNext((ATermList) s_48);
        }
      else
        _fail(t);
      {
        ATerm v_48 = ATgetArgument(t, 1);
        if(((ATgetType(v_48) == AT_LIST) && !(ATisEmpty(v_48))))
          {
            j_121 = ATgetFirst((ATermList) v_48);
            k_121 = (ATerm) ATgetNext((ATermList) v_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_121, j_121), (ATerm) ATmakeAppl(sym__2, i_121, k_121));
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm l_121 = NULL,m_121 = NULL;
  if(match_cons(t, sym__2))
    {
      l_121 = ATgetArgument(t, 0);
      m_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_121), l_121);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm z_120 = NULL,a_121 = NULL,b_121 = NULL,c_121 = NULL;
  z_120 = t;
  {
    ATerm x_48 = t;
    int y_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_48 = ATgetArgument(t, 0);
            ATerm a_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(y_48);
        t = z_120;
      }
    else
      {
        t = x_48;
        {
          ATerm g_121 = NULL;
          if(match_cons(t, sym__3))
            {
              a_121 = ATgetArgument(t, 0);
              b_121 = ATgetArgument(t, 1);
              c_121 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, a_121, b_121);
          t = genzip_4_0(w_7, x_7, y_7, _id, t);
          g_121 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_121, c_121);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm p_172 (ATerm), ATerm q_172 (ATerm), ATerm t)
{
  ATerm o_121 = NULL,r_121 = NULL;
  static ATerm b_8 (ATerm t);
  static ATerm b_8 (ATerm t)
  {
    ATerm a_39 = NULL;
    t = p_172(t);
    a_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_39, not_null(r_121));
    t = lookup_0_0(t);
    t = q_172(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((r_121 != NULL) && (r_121 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        r_121 = ATgetArgument(t, 0);
      o_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_121;
  t = alltd_1_0(b_8, t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_49 = ATgetArgument(t, 0);
      if(((ATgetType(e_49) != AT_LIST) || !(ATisEmpty(e_49))))
        _fail(t);
      {
        ATerm f_49 = ATgetArgument(t, 1);
        if(((ATgetType(f_49) != AT_LIST) || !(ATisEmpty(f_49))))
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
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,s_39 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_49 = ATgetArgument(t, 0);
      if(((ATgetType(g_49) == AT_LIST) && !(ATisEmpty(g_49))))
        {
          n_39 = ATgetFirst((ATermList) g_49);
          o_39 = (ATerm) ATgetNext((ATermList) g_49);
        }
      else
        _fail(t);
      {
        ATerm j_49 = ATgetArgument(t, 1);
        if(((ATgetType(j_49) == AT_LIST) && !(ATisEmpty(j_49))))
          {
            p_39 = ATgetFirst((ATermList) j_49);
            s_39 = (ATerm) ATgetNext((ATermList) j_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_39, p_39), (ATerm) ATmakeAppl(sym__2, o_39, s_39));
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm t_39 = NULL,x_39 = NULL;
  if(match_cons(t, sym__2))
    {
      t_39 = ATgetArgument(t, 0);
      x_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_39), t_39);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm g_40 = NULL,r_40 = NULL,s_40 = NULL,w_40 = NULL,d_41 = NULL;
  if(match_cons(t, sym__2))
    {
      g_40 = ATgetArgument(t, 0);
      d_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_40;
  {
    ATerm l_49 = t;
    int m_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm n_49 = ATgetArgument(t, 0);
            r_40 = ATgetArgument(t, 1);
            s_40 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(m_49);
        t = (ATerm) ATmakeAppl(sym_SDef_3, d_41, r_40, s_40);
      }
    else
      {
        t = l_49;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm o_49 = ATgetArgument(t, 0);
            r_40 = ATgetArgument(t, 1);
            s_40 = ATgetArgument(t, 2);
            w_40 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_41, r_40, s_40, w_40);
      }
  }
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_49 = ATgetArgument(t, 0);
      if(((ATgetType(p_49) != AT_LIST) || !(ATisEmpty(p_49))))
        _fail(t);
      {
        ATerm q_49 = ATgetArgument(t, 1);
        if(((ATgetType(q_49) != AT_LIST) || !(ATisEmpty(q_49))))
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
  ATerm t_43 = NULL,u_43 = NULL,a_44 = NULL,b_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_49 = ATgetArgument(t, 0);
      if(((ATgetType(r_49) == AT_LIST) && !(ATisEmpty(r_49))))
        {
          t_43 = ATgetFirst((ATermList) r_49);
          u_43 = (ATerm) ATgetNext((ATermList) r_49);
        }
      else
        _fail(t);
      {
        ATerm s_49 = ATgetArgument(t, 1);
        if(((ATgetType(s_49) == AT_LIST) && !(ATisEmpty(s_49))))
          {
            a_44 = ATgetFirst((ATermList) s_49);
            b_44 = (ATerm) ATgetNext((ATermList) s_49);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_43, a_44), (ATerm) ATmakeAppl(sym__2, u_43, b_44));
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL;
  if(match_cons(t, sym__2))
    {
      c_44 = ATgetArgument(t, 0);
      d_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_44), c_44);
  return(t);
}
static ATerm m_8 (ATerm t)
{
  ATerm f_44 = NULL,q_44 = NULL,r_44 = NULL;
  if(match_cons(t, sym__2))
    {
      f_44 = ATgetArgument(t, 0);
      r_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_44;
  {
    ATerm t_49 = t;
    int u_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_49);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_44);
      }
    else
      {
        t = t_49;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_49 = ATgetArgument(t, 0);
            q_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_44, q_44);
      }
  }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_49 = ATgetArgument(t, 0);
      if(((ATgetType(y_49) != AT_LIST) || !(ATisEmpty(y_49))))
        _fail(t);
      {
        ATerm b_50 = ATgetArgument(t, 1);
        if(((ATgetType(b_50) != AT_LIST) || !(ATisEmpty(b_50))))
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
  ATerm v_45 = NULL,x_45 = NULL,z_45 = NULL,a_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_50 = ATgetArgument(t, 0);
      if(((ATgetType(i_50) == AT_LIST) && !(ATisEmpty(i_50))))
        {
          v_45 = ATgetFirst((ATermList) i_50);
          x_45 = (ATerm) ATgetNext((ATermList) i_50);
        }
      else
        _fail(t);
      {
        ATerm k_50 = ATgetArgument(t, 1);
        if(((ATgetType(k_50) == AT_LIST) && !(ATisEmpty(k_50))))
          {
            z_45 = ATgetFirst((ATermList) k_50);
            a_46 = (ATerm) ATgetNext((ATermList) k_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_45, z_45), (ATerm) ATmakeAppl(sym__2, x_45, a_46));
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL;
  if(match_cons(t, sym__2))
    {
      e_46 = ATgetArgument(t, 0);
      f_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_46), e_46);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm i_46 = NULL,n_46 = NULL,o_46 = NULL;
  if(match_cons(t, sym__2))
    {
      i_46 = ATgetArgument(t, 0);
      o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_46;
  {
    ATerm n_50 = t;
    int o_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_50);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_46);
      }
    else
      {
        t = n_50;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_50 = ATgetArgument(t, 0);
            n_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_46, n_46);
      }
  }
  return(t);
}
static ATerm s_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_50 = ATgetArgument(t, 0);
      if(((ATgetType(r_50) != AT_LIST) || !(ATisEmpty(r_50))))
        _fail(t);
      {
        ATerm s_50 = ATgetArgument(t, 1);
        if(((ATgetType(s_50) != AT_LIST) || !(ATisEmpty(s_50))))
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
  ATerm g_48 = NULL,h_48 = NULL,l_48 = NULL,p_48 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_50 = ATgetArgument(t, 0);
      if(((ATgetType(t_50) == AT_LIST) && !(ATisEmpty(t_50))))
        {
          g_48 = ATgetFirst((ATermList) t_50);
          h_48 = (ATerm) ATgetNext((ATermList) t_50);
        }
      else
        _fail(t);
      {
        ATerm u_50 = ATgetArgument(t, 1);
        if(((ATgetType(u_50) == AT_LIST) && !(ATisEmpty(u_50))))
          {
            l_48 = ATgetFirst((ATermList) u_50);
            p_48 = (ATerm) ATgetNext((ATermList) u_50);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_48, l_48), (ATerm) ATmakeAppl(sym__2, h_48, p_48));
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm t_48 = NULL,u_48 = NULL;
  if(match_cons(t, sym__2))
    {
      t_48 = ATgetArgument(t, 0);
      u_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_48), t_48);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm w_48 = NULL,b_49 = NULL,d_49 = NULL;
  if(match_cons(t, sym__2))
    {
      w_48 = ATgetArgument(t, 0);
      d_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_48;
  {
    ATerm v_50 = t;
    int w_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_50 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_50);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_49);
      }
    else
      {
        t = v_50;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_50 = ATgetArgument(t, 0);
            b_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_49, b_49);
      }
  }
  return(t);
}
static ATerm y_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_50 = ATgetArgument(t, 0);
      if(((ATgetType(z_50) != AT_LIST) || !(ATisEmpty(z_50))))
        _fail(t);
      {
        ATerm a_51 = ATgetArgument(t, 1);
        if(((ATgetType(a_51) != AT_LIST) || !(ATisEmpty(a_51))))
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
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL,f_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_51 = ATgetArgument(t, 0);
      if(((ATgetType(b_51) == AT_LIST) && !(ATisEmpty(b_51))))
        {
          c_50 = ATgetFirst((ATermList) b_51);
          d_50 = (ATerm) ATgetNext((ATermList) b_51);
        }
      else
        _fail(t);
      {
        ATerm c_51 = ATgetArgument(t, 1);
        if(((ATgetType(c_51) == AT_LIST) && !(ATisEmpty(c_51))))
          {
            e_50 = ATgetFirst((ATermList) c_51);
            f_50 = (ATerm) ATgetNext((ATermList) c_51);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_50, e_50), (ATerm) ATmakeAppl(sym__2, d_50, f_50));
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL;
  if(match_cons(t, sym__2))
    {
      g_50 = ATgetArgument(t, 0);
      h_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_50), g_50);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm j_50 = NULL,l_50 = NULL,m_50 = NULL;
  if(match_cons(t, sym__2))
    {
      j_50 = ATgetArgument(t, 0);
      m_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_50;
  {
    ATerm d_51 = t;
    int e_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_51);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_50);
      }
    else
      {
        t = d_51;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm g_51 = ATgetArgument(t, 0);
            l_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_50, l_50);
      }
  }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_51 = ATgetArgument(t, 0);
      if(((ATgetType(h_51) != AT_LIST) || !(ATisEmpty(h_51))))
        _fail(t);
      {
        ATerm p_51 = ATgetArgument(t, 1);
        if(((ATgetType(p_51) != AT_LIST) || !(ATisEmpty(p_51))))
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
  ATerm m_128 = NULL,n_128 = NULL,o_128 = NULL,p_128 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_51 = ATgetArgument(t, 0);
      if(((ATgetType(t_51) == AT_LIST) && !(ATisEmpty(t_51))))
        {
          m_128 = ATgetFirst((ATermList) t_51);
          n_128 = (ATerm) ATgetNext((ATermList) t_51);
        }
      else
        _fail(t);
      {
        ATerm u_51 = ATgetArgument(t, 1);
        if(((ATgetType(u_51) == AT_LIST) && !(ATisEmpty(u_51))))
          {
            o_128 = ATgetFirst((ATermList) u_51);
            p_128 = (ATerm) ATgetNext((ATermList) u_51);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_128, o_128), (ATerm) ATmakeAppl(sym__2, n_128, p_128));
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm q_128 = NULL,r_128 = NULL;
  if(match_cons(t, sym__2))
    {
      q_128 = ATgetArgument(t, 0);
      r_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_128), q_128);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm t_128 = NULL,v_128 = NULL,w_128 = NULL;
  if(match_cons(t, sym__2))
    {
      t_128 = ATgetArgument(t, 0);
      w_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_128;
  {
    ATerm v_51 = t;
    int x_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_51);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_128);
      }
    else
      {
        t = v_51;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_51 = ATgetArgument(t, 0);
            v_128 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_128, v_128);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm p_178 (ATerm), ATerm t)
{
  ATerm a_52 = t;
  int b_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL,h_128 = NULL,i_128 = NULL;
      f_128 = t;
      if(match_cons(t, sym_Let_2))
        {
          g_128 = ATgetArgument(t, 0);
          h_128 = ATgetArgument(t, 1);
          {
            ATerm h_39 = NULL,k_39 = NULL,l_39 = NULL,f_18 = NULL;
            t = SSLgetAnnotations(f_128);
            h_39 = t;
            t = g_128;
            t = p_178(t);
            l_39 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_128, l_39);
            t = genzip_4_0(d_8, e_8, f_8, h_8, t);
            k_39 = t;
            t = (ATerm) ATmakeAppl(sym_Let_2, k_39, h_128);
            f_18 = t;
            t = SSLsetAnnotations(f_18, h_39);
          }
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              g_128 = ATgetArgument(t, 0);
              h_128 = ATgetArgument(t, 1);
              i_128 = ATgetArgument(t, 2);
              {
                ATerm b_43 = NULL,g_43 = NULL,h_43 = NULL,g_18 = NULL;
                t = SSLgetAnnotations(f_128);
                b_43 = t;
                t = h_128;
                t = p_178(t);
                h_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, h_128, h_43);
                t = genzip_4_0(i_8, j_8, l_8, m_8, t);
                g_43 = t;
                t = (ATerm) ATmakeAppl(sym_SDef_3, g_128, g_43, i_128);
                g_18 = t;
                t = SSLsetAnnotations(g_18, b_43);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  g_128 = ATgetArgument(t, 0);
                  h_128 = ATgetArgument(t, 1);
                  i_128 = ATgetArgument(t, 2);
                  e_128 = ATgetArgument(t, 3);
                  {
                    ATerm k_45 = NULL,s_45 = NULL,t_45 = NULL,i_18 = NULL;
                    t = SSLgetAnnotations(f_128);
                    k_45 = t;
                    t = h_128;
                    t = p_178(t);
                    t_45 = t;
                    t = (ATerm) ATmakeAppl(sym__2, h_128, t_45);
                    t = genzip_4_0(n_8, o_8, p_8, q_8, t);
                    s_45 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, g_128, s_45, i_128, e_128);
                    i_18 = t;
                    t = SSLsetAnnotations(i_18, k_45);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_128 = ATgetArgument(t, 0);
                      h_128 = ATgetArgument(t, 1);
                      i_128 = ATgetArgument(t, 2);
                      e_128 = ATgetArgument(t, 3);
                      {
                        ATerm p_47 = NULL,d_48 = NULL,e_48 = NULL,j_18 = NULL;
                        t = SSLgetAnnotations(f_128);
                        p_47 = t;
                        t = h_128;
                        t = p_178(t);
                        e_48 = t;
                        t = (ATerm) ATmakeAppl(sym__2, h_128, e_48);
                        t = genzip_4_0(s_8, u_8, v_8, w_8, t);
                        d_48 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, g_128, d_48, i_128, e_128);
                        j_18 = t;
                        t = SSLsetAnnotations(j_18, p_47);
                      }
                    }
                  else
                    {
                      ATerm v_49 = NULL,z_49 = NULL,a_50 = NULL,n_18 = NULL;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          g_128 = ATgetArgument(t, 0);
                          h_128 = ATgetArgument(t, 1);
                          i_128 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(f_128);
                      v_49 = t;
                      t = h_128;
                      t = p_178(t);
                      a_50 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_128, a_50);
                      t = genzip_4_0(y_8, a_9, c_9, d_9, t);
                      z_49 = t;
                      t = (ATerm) ATmakeAppl(sym_RDecT_3, g_128, z_49, i_128);
                      n_18 = t;
                      t = SSLsetAnnotations(n_18, v_49);
                    }
                }
            }
        }
      LocalPopChoice(b_52);
    }
  else
    {
      t = a_52;
      {
        ATerm c_52 = t;
        int d_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm e_9 (ATerm t);
            static ATerm e_9 (ATerm t)
            {
              ATerm k_128 = NULL,l_128 = NULL;
              l_128 = t;
              t = p_178(t);
              k_128 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_128, k_128);
              t = genzip_4_0(f_9, g_9, h_9, i_9, t);
              return(t);
            }
            t = dynrule_cong_6_0(_id, e_9, _id, _id, _id, _id, t);
            LocalPopChoice(d_52);
          }
        else
          {
            t = c_52;
            {
              ATerm m_129 = NULL,n_129 = NULL,o_129 = NULL,w_51 = NULL,h_52 = NULL,o_18 = NULL;
              m_129 = t;
              if(match_cons(t, sym_Rec_2))
                {
                  n_129 = ATgetArgument(t, 0);
                  o_129 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(m_129);
              w_51 = t;
              t = n_129;
              t = p_178(t);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_52 = ATgetFirst((ATermList) t);
                  {
                    ATerm e_52 = (ATerm) ATgetNext((ATermList) t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Rec_2, h_52, o_129);
              o_18 = t;
              t = SSLsetAnnotations(o_18, w_51);
            }
          }
      }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm q_178 (ATerm), ATerm r_178 (ATerm), ATerm s_178 (ATerm), ATerm t)
{
  ATerm a_134 = NULL,b_134 = NULL,c_134 = NULL,d_134 = NULL,e_134 = NULL;
  c_134 = t;
  if(match_cons(t, sym_Let_2))
    {
      d_134 = ATgetArgument(t, 0);
      e_134 = ATgetArgument(t, 1);
      {
        ATerm u_52 = NULL,y_52 = NULL,a_53 = NULL,f_19 = NULL;
        t = SSLgetAnnotations(c_134);
        u_52 = t;
        t = d_134;
        t = q_178(t);
        y_52 = t;
        t = e_134;
        t = q_178(t);
        a_53 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, y_52, a_53);
        f_19 = t;
        t = SSLsetAnnotations(f_19, u_52);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          d_134 = ATgetArgument(t, 0);
          e_134 = ATgetArgument(t, 1);
          b_134 = ATgetArgument(t, 2);
          {
            ATerm l_53 = NULL,p_53 = NULL,q_53 = NULL,z_53 = NULL,h_19 = NULL;
            t = SSLgetAnnotations(c_134);
            l_53 = t;
            t = d_134;
            t = s_178(t);
            p_53 = t;
            t = e_134;
            t = s_178(t);
            q_53 = t;
            t = b_134;
            t = q_178(t);
            z_53 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, p_53, q_53, z_53);
            h_19 = t;
            t = SSLsetAnnotations(h_19, l_53);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              d_134 = ATgetArgument(t, 0);
              e_134 = ATgetArgument(t, 1);
              b_134 = ATgetArgument(t, 2);
              a_134 = ATgetArgument(t, 3);
              {
                ATerm s_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,i_19 = NULL;
                t = SSLgetAnnotations(c_134);
                s_54 = t;
                t = d_134;
                t = s_178(t);
                z_54 = t;
                t = e_134;
                t = s_178(t);
                a_55 = t;
                t = b_134;
                t = s_178(t);
                b_55 = t;
                t = a_134;
                t = q_178(t);
                c_55 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, z_54, a_55, b_55, c_55);
                i_19 = t;
                t = SSLsetAnnotations(i_19, s_54);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  d_134 = ATgetArgument(t, 0);
                  e_134 = ATgetArgument(t, 1);
                  b_134 = ATgetArgument(t, 2);
                  a_134 = ATgetArgument(t, 3);
                  {
                    ATerm o_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,j_19 = NULL;
                    t = SSLgetAnnotations(c_134);
                    o_55 = t;
                    t = d_134;
                    t = s_178(t);
                    t_55 = t;
                    t = e_134;
                    t = s_178(t);
                    u_55 = t;
                    t = b_134;
                    t = s_178(t);
                    v_55 = t;
                    t = a_134;
                    t = q_178(t);
                    w_55 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, t_55, u_55, v_55, w_55);
                    j_19 = t;
                    t = SSLsetAnnotations(j_19, o_55);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDecT_3))
                    {
                      d_134 = ATgetArgument(t, 0);
                      e_134 = ATgetArgument(t, 1);
                      b_134 = ATgetArgument(t, 2);
                      {
                        ATerm q_56 = NULL,v_56 = NULL,w_56 = NULL,z_56 = NULL,o_19 = NULL;
                        t = SSLgetAnnotations(c_134);
                        q_56 = t;
                        t = d_134;
                        t = s_178(t);
                        v_56 = t;
                        t = e_134;
                        t = s_178(t);
                        w_56 = t;
                        t = b_134;
                        t = s_178(t);
                        z_56 = t;
                        t = (ATerm) ATmakeAppl(sym_RDecT_3, v_56, w_56, z_56);
                        o_19 = t;
                        t = SSLsetAnnotations(o_19, q_56);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          d_134 = ATgetArgument(t, 0);
                          e_134 = ATgetArgument(t, 1);
                          {
                            ATerm s_57 = NULL,b_58 = NULL,c_58 = NULL,p_19 = NULL;
                            t = SSLgetAnnotations(c_134);
                            s_57 = t;
                            t = d_134;
                            t = s_178(t);
                            b_58 = t;
                            t = e_134;
                            t = q_178(t);
                            c_58 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, b_58, c_58);
                            p_19 = t;
                            t = SSLsetAnnotations(p_19, s_57);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              d_134 = ATgetArgument(t, 0);
                              e_134 = ATgetArgument(t, 1);
                              {
                                ATerm o_58 = NULL,z_58 = NULL,f_59 = NULL,x_20 = NULL;
                                t = SSLgetAnnotations(c_134);
                                o_58 = t;
                                t = d_134;
                                t = s_178(t);
                                z_58 = t;
                                t = e_134;
                                t = q_178(t);
                                f_59 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, z_58, f_59);
                                x_20 = t;
                                t = SSLsetAnnotations(x_20, o_58);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  d_134 = ATgetArgument(t, 0);
                                  e_134 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_59 = NULL,t_59 = NULL,c_60 = NULL,d_21 = NULL;
                                    t = SSLgetAnnotations(c_134);
                                    q_59 = t;
                                    t = d_134;
                                    t = s_178(t);
                                    t_59 = t;
                                    t = e_134;
                                    t = q_178(t);
                                    c_60 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, t_59, c_60);
                                    d_21 = t;
                                    t = SSLsetAnnotations(d_21, q_59);
                                  }
                                }
                              else
                                {
                                  ATerm s_60 = NULL,w_60 = NULL,x_60 = NULL,e_21 = NULL;
                                  if(match_cons(t, sym_Rec_2))
                                    {
                                      d_134 = ATgetArgument(t, 0);
                                      e_134 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(c_134);
                                  s_60 = t;
                                  t = d_134;
                                  t = s_178(t);
                                  w_60 = t;
                                  t = e_134;
                                  t = q_178(t);
                                  x_60 = t;
                                  t = (ATerm) ATmakeAppl(sym_Rec_2, w_60, x_60);
                                  e_21 = t;
                                  t = SSLsetAnnotations(e_21, s_60);
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
ATerm dynrule_sargs_1_0 (ATerm u_178 (ATerm), ATerm t)
{
  ATerm w_134 = NULL,x_134 = NULL,z_134 = NULL;
  ATerm f_52 = t;
  int g_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          w_134 = ATgetArgument(t, 0);
          {
            ATerm i_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_52);
      t = w_134;
      if(match_cons(t, sym_DynRuleId_1))
        {
          x_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_134;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm j_52 = ATgetArgument(t, 0);
          z_134 = ATgetArgument(t, 1);
          {
            ATerm k_52 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_134;
    }
  else
    {
      t = f_52;
      {
        ATerm l_52 = t;
        int m_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                w_134 = ATgetArgument(t, 0);
                {
                  ATerm n_52 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(m_52);
            t = w_134;
            if(match_cons(t, sym_DynRuleId_1))
              {
                x_134 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = x_134;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm o_52 = ATgetArgument(t, 0);
                z_134 = ATgetArgument(t, 1);
                {
                  ATerm p_52 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = z_134;
          }
        else
          {
            t = l_52;
            if(match_cons(t, sym_AddDynRule_2))
              {
                w_134 = ATgetArgument(t, 0);
                {
                  ATerm q_52 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = w_134;
            if(match_cons(t, sym_DynRuleId_1))
              {
                x_134 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = x_134;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm r_52 = ATgetArgument(t, 0);
                z_134 = ATgetArgument(t, 1);
                {
                  ATerm s_52 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = z_134;
          }
      }
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm q_135 = NULL;
  ATerm t_52 = t;
  int v_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_135 = ATgetArgument(t, 0);
          {
            ATerm w_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_52);
      t = q_135;
    }
  else
    {
      t = t_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_135;
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm w_135 = NULL;
  ATerm x_52 = t;
  int z_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_135 = ATgetArgument(t, 0);
          {
            ATerm b_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_52);
      t = w_135;
    }
  else
    {
      t = x_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_135;
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm k_135 = NULL;
  ATerm c_53 = t;
  int d_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm e_53 = ATgetArgument(t, 0);
          k_135 = ATgetArgument(t, 1);
          {
            ATerm f_53 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_53);
      t = k_135;
      t = map_1_0(j_9, t);
    }
  else
    {
      t = c_53;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm g_53 = ATgetArgument(t, 0);
          k_135 = ATgetArgument(t, 1);
          {
            ATerm h_53 = ATgetArgument(t, 2);
          }
          {
            ATerm i_53 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = k_135;
      t = map_1_0(k_9, t);
    }
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm b_136 = NULL;
  ATerm j_53 = t;
  int k_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          b_136 = ATgetArgument(t, 0);
          {
            ATerm m_53 = ATgetArgument(t, 1);
          }
          {
            ATerm n_53 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_53);
      t = b_136;
    }
  else
    {
      t = j_53;
      if(match_cons(t, sym_SDefT_4))
        {
          b_136 = ATgetArgument(t, 0);
          {
            ATerm o_53 = ATgetArgument(t, 1);
          }
          {
            ATerm r_53 = ATgetArgument(t, 2);
          }
          {
            ATerm s_53 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = b_136;
    }
  return(t);
}
static ATerm w_12 (ATerm f_108, ATerm e_108, ATerm t)
{
  t = f_108;
  t = map_1_0(l_9, t);
  return(t);
}
ATerm SVar_1_0 (ATerm e_118 (ATerm), ATerm t)
{
  ATerm h_136 = NULL,i_136 = NULL,j_136 = NULL,k_136 = NULL,r_23 = NULL;
  k_136 = t;
  if(match_cons(t, sym_SVar_1))
    {
      i_136 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_136);
  h_136 = t;
  t = i_136;
  t = e_118(t);
  j_136 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, j_136);
  r_23 = t;
  t = SSLsetAnnotations(r_23, h_136);
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm t_53 = t;
  int u_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_136 = NULL,q_136 = NULL,r_136 = NULL,s_136 = NULL,t_136 = NULL;
      p_136 = t;
      if(match_cons(t, sym_Let_2))
        {
          q_136 = ATgetArgument(t, 0);
          r_136 = ATgetArgument(t, 1);
          t = p_136;
          t = w_12(q_136, r_136, t);
        }
      else
        {
          if(match_cons(t, sym_SDef_3))
            {
              q_136 = ATgetArgument(t, 0);
              r_136 = ATgetArgument(t, 1);
              s_136 = ATgetArgument(t, 2);
              t = r_136;
              t = map_1_0(n_9, t);
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  q_136 = ATgetArgument(t, 0);
                  r_136 = ATgetArgument(t, 1);
                  t = (ATerm) ATinsert(ATempty, q_136);
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_136 = ATgetArgument(t, 0);
                      r_136 = ATgetArgument(t, 1);
                      s_136 = ATgetArgument(t, 2);
                      t_136 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_136;
                  t = map_1_0(o_9, t);
                }
            }
        }
      LocalPopChoice(u_53);
    }
  else
    {
      t = t_53;
      {
        ATerm v_53 = t;
        int a_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind7_0_0(t);
            LocalPopChoice(a_54);
          }
        else
          {
            t = v_53;
            t = dynrule_sargs_1_0(q_9, t);
          }
      }
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm b_137 = NULL;
  ATerm f_54 = t;
  int g_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_137 = ATgetArgument(t, 0);
          {
            ATerm h_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_54);
      t = b_137;
    }
  else
    {
      t = f_54;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_137;
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm m_137 = NULL;
  ATerm j_54 = t;
  int m_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_137 = ATgetArgument(t, 0);
          {
            ATerm n_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_54);
      t = m_137;
    }
  else
    {
      t = j_54;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_137;
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
  ATerm r_137 = NULL;
  ATerm p_54 = t;
  int q_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_137 = ATgetArgument(t, 0);
          {
            ATerm r_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_54);
      t = r_137;
    }
  else
    {
      t = p_54;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_137;
    }
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  t = rename_4_0(SVar_1_0, m_9, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm dynrule_cong_6_0 (ATerm w_178 (ATerm), ATerm x_178 (ATerm), ATerm y_178 (ATerm), ATerm z_178 (ATerm), ATerm a_179 (ATerm), ATerm b_179 (ATerm), ATerm t)
{
  ATerm z_140 = NULL,a_141 = NULL,b_141 = NULL;
  z_140 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      a_141 = ATgetArgument(t, 0);
      b_141 = ATgetArgument(t, 1);
      {
        ATerm g_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,s_61 = NULL,t_61 = NULL,u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,y_61 = NULL,l_62 = NULL,v_23 = NULL,u_23 = NULL,t_23 = NULL;
        t = SSLgetAnnotations(z_140);
        g_61 = t;
        t = a_141;
        if(match_cons(t, sym_DynRuleId_1))
          {
            m_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_141);
        l_61 = t;
        t = m_61;
        if(match_cons(t, sym_RDecT_3))
          {
            t_61 = ATgetArgument(t, 0);
            u_61 = ATgetArgument(t, 1);
            v_61 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_61);
        s_61 = t;
        t = t_61;
        t = w_178(t);
        w_61 = t;
        t = u_61;
        t = x_178(t);
        x_61 = t;
        t = v_61;
        t = y_178(t);
        y_61 = t;
        t = (ATerm) ATmakeAppl(sym_RDecT_3, w_61, x_61, y_61);
        t_23 = t;
        t = SSLsetAnnotations(t_23, s_61);
        l_62 = t;
        t = (ATerm) ATmakeAppl(sym_DynRuleId_1, l_62);
        u_23 = t;
        t = SSLsetAnnotations(u_23, l_61);
        n_61 = t;
        t = b_141;
        t = z_178(t);
        k_61 = t;
        t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, n_61, k_61);
        v_23 = t;
        t = SSLsetAnnotations(v_23, g_61);
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          a_141 = ATgetArgument(t, 0);
          b_141 = ATgetArgument(t, 1);
          {
            ATerm w_62 = NULL,a_63 = NULL,b_63 = NULL,c_63 = NULL,d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL,h_63 = NULL,n_63 = NULL,o_63 = NULL,s_63 = NULL,t_63 = NULL,y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,j_24 = NULL,i_24 = NULL,x_23 = NULL,w_23 = NULL;
            t = SSLgetAnnotations(z_140);
            w_62 = t;
            t = a_141;
            if(match_cons(t, sym_DynRuleId_1))
              {
                o_63 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_141);
            n_63 = t;
            t = o_63;
            if(match_cons(t, sym_RDecT_3))
              {
                y_63 = ATgetArgument(t, 0);
                z_63 = ATgetArgument(t, 1);
                a_64 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(o_63);
            t_63 = t;
            t = y_63;
            t = w_178(t);
            b_64 = t;
            t = z_63;
            t = x_178(t);
            f_64 = t;
            t = a_64;
            t = y_178(t);
            g_64 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, b_64, f_64, g_64);
            w_23 = t;
            t = SSLsetAnnotations(w_23, t_63);
            h_64 = t;
            t = (ATerm) ATmakeAppl(sym_DynRuleId_1, h_64);
            x_23 = t;
            t = SSLsetAnnotations(x_23, n_63);
            s_63 = t;
            t = b_141;
            if(match_cons(t, sym_Rule_3))
              {
                b_63 = ATgetArgument(t, 0);
                c_63 = ATgetArgument(t, 1);
                d_63 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_141);
            a_63 = t;
            t = b_63;
            t = z_178(t);
            e_63 = t;
            t = c_63;
            t = a_179(t);
            f_63 = t;
            t = d_63;
            t = b_179(t);
            g_63 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, e_63, f_63, g_63);
            i_24 = t;
            t = SSLsetAnnotations(i_24, a_63);
            h_63 = t;
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, s_63, h_63);
            j_24 = t;
            t = SSLsetAnnotations(j_24, w_62);
          }
        }
      else
        {
          ATerm p_64 = NULL,u_64 = NULL,v_64 = NULL,x_64 = NULL,y_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,r_24 = NULL,q_24 = NULL,p_24 = NULL,m_24 = NULL;
          if(match_cons(t, sym_AddDynRule_2))
            {
              a_141 = ATgetArgument(t, 0);
              b_141 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_140);
          p_64 = t;
          t = a_141;
          if(match_cons(t, sym_DynRuleId_1))
            {
              f_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_141);
          e_65 = t;
          t = f_65;
          if(match_cons(t, sym_RDecT_3))
            {
              j_65 = ATgetArgument(t, 0);
              k_65 = ATgetArgument(t, 1);
              n_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(f_65);
          i_65 = t;
          t = j_65;
          t = w_178(t);
          o_65 = t;
          t = k_65;
          t = x_178(t);
          p_65 = t;
          t = n_65;
          t = y_178(t);
          q_65 = t;
          t = (ATerm) ATmakeAppl(sym_RDecT_3, o_65, p_65, q_65);
          m_24 = t;
          t = SSLsetAnnotations(m_24, i_65);
          r_65 = t;
          t = (ATerm) ATmakeAppl(sym_DynRuleId_1, r_65);
          p_24 = t;
          t = SSLsetAnnotations(p_24, e_65);
          g_65 = t;
          t = b_141;
          if(match_cons(t, sym_Rule_3))
            {
              v_64 = ATgetArgument(t, 0);
              x_64 = ATgetArgument(t, 1);
              y_64 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_141);
          u_64 = t;
          t = v_64;
          t = z_178(t);
          a_65 = t;
          t = x_64;
          t = a_179(t);
          b_65 = t;
          t = y_64;
          t = b_179(t);
          c_65 = t;
          t = (ATerm) ATmakeAppl(sym_Rule_3, a_65, b_65, c_65);
          q_24 = t;
          t = SSLsetAnnotations(q_24, u_64);
          d_65 = t;
          t = (ATerm) ATmakeAppl(sym_AddDynRule_2, g_65, d_65);
          r_24 = t;
          t = SSLsetAnnotations(r_24, p_64);
        }
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_54 = ATgetArgument(t, 0);
      if(((ATgetType(t_54) != AT_LIST) || !(ATisEmpty(t_54))))
        _fail(t);
      {
        ATerm u_54 = ATgetArgument(t, 1);
        if(((ATgetType(u_54) != AT_LIST) || !(ATisEmpty(u_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,q_68 = NULL,t_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_54 = ATgetArgument(t, 0);
      if(((ATgetType(v_54) == AT_LIST) && !(ATisEmpty(v_54))))
        {
          n_68 = ATgetFirst((ATermList) v_54);
          o_68 = (ATerm) ATgetNext((ATermList) v_54);
        }
      else
        _fail(t);
      {
        ATerm w_54 = ATgetArgument(t, 1);
        if(((ATgetType(w_54) == AT_LIST) && !(ATisEmpty(w_54))))
          {
            q_68 = ATgetFirst((ATermList) w_54);
            t_68 = (ATerm) ATgetNext((ATermList) w_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_68, q_68), (ATerm) ATmakeAppl(sym__2, o_68, t_68));
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm v_68 = NULL,w_68 = NULL;
  if(match_cons(t, sym__2))
    {
      v_68 = ATgetArgument(t, 0);
      w_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_68), v_68);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm y_68 = NULL,a_69 = NULL,b_69 = NULL;
  if(match_cons(t, sym__2))
    {
      y_68 = ATgetArgument(t, 0);
      b_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_68;
  {
    ATerm x_54 = t;
    int y_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_54);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_69);
      }
    else
      {
        t = x_54;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_55 = ATgetArgument(t, 0);
            a_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_69, a_69);
      }
  }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_55 = ATgetArgument(t, 0);
      if(((ATgetType(f_55) != AT_LIST) || !(ATisEmpty(f_55))))
        _fail(t);
      {
        ATerm g_55 = ATgetArgument(t, 1);
        if(((ATgetType(g_55) != AT_LIST) || !(ATisEmpty(g_55))))
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
  ATerm t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_55 = ATgetArgument(t, 0);
      if(((ATgetType(h_55) == AT_LIST) && !(ATisEmpty(h_55))))
        {
          t_70 = ATgetFirst((ATermList) h_55);
          u_70 = (ATerm) ATgetNext((ATermList) h_55);
        }
      else
        _fail(t);
      {
        ATerm i_55 = ATgetArgument(t, 1);
        if(((ATgetType(i_55) == AT_LIST) && !(ATisEmpty(i_55))))
          {
            v_70 = ATgetFirst((ATermList) i_55);
            w_70 = (ATerm) ATgetNext((ATermList) i_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_70, v_70), (ATerm) ATmakeAppl(sym__2, u_70, w_70));
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm x_70 = NULL,c_71 = NULL;
  if(match_cons(t, sym__2))
    {
      x_70 = ATgetArgument(t, 0);
      c_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_71), x_70);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm f_71 = NULL,h_71 = NULL,i_71 = NULL;
  if(match_cons(t, sym__2))
    {
      f_71 = ATgetArgument(t, 0);
      i_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_71;
  {
    ATerm j_55 = t;
    int k_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_55);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_71);
      }
    else
      {
        t = j_55;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_55 = ATgetArgument(t, 0);
            h_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_71, h_71);
      }
  }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_55 = ATgetArgument(t, 0);
      if(((ATgetType(n_55) != AT_LIST) || !(ATisEmpty(n_55))))
        _fail(t);
      {
        ATerm p_55 = ATgetArgument(t, 1);
        if(((ATgetType(p_55) != AT_LIST) || !(ATisEmpty(p_55))))
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
  ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL,u_72 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_55 = ATgetArgument(t, 0);
      if(((ATgetType(q_55) == AT_LIST) && !(ATisEmpty(q_55))))
        {
          r_72 = ATgetFirst((ATermList) q_55);
          s_72 = (ATerm) ATgetNext((ATermList) q_55);
        }
      else
        _fail(t);
      {
        ATerm r_55 = ATgetArgument(t, 1);
        if(((ATgetType(r_55) == AT_LIST) && !(ATisEmpty(r_55))))
          {
            t_72 = ATgetFirst((ATermList) r_55);
            u_72 = (ATerm) ATgetNext((ATermList) r_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_72, t_72), (ATerm) ATmakeAppl(sym__2, s_72, u_72));
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm v_72 = NULL,w_72 = NULL;
  if(match_cons(t, sym__2))
    {
      v_72 = ATgetArgument(t, 0);
      w_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_72), v_72);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm y_72 = NULL,a_73 = NULL,b_73 = NULL;
  if(match_cons(t, sym__2))
    {
      y_72 = ATgetArgument(t, 0);
      b_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_72;
  {
    ATerm s_55 = t;
    int x_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm y_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(x_55);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_73);
      }
    else
      {
        t = s_55;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm z_55 = ATgetArgument(t, 0);
            a_73 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_73, a_73);
      }
  }
  return(t);
}
static ATerm m_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_56 = ATgetArgument(t, 0);
      if(((ATgetType(a_56) != AT_LIST) || !(ATisEmpty(a_56))))
        _fail(t);
      {
        ATerm b_56 = ATgetArgument(t, 1);
        if(((ATgetType(b_56) != AT_LIST) || !(ATisEmpty(b_56))))
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
  ATerm z_145 = NULL,a_146 = NULL,b_146 = NULL,c_146 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_56 = ATgetArgument(t, 0);
      if(((ATgetType(c_56) == AT_LIST) && !(ATisEmpty(c_56))))
        {
          z_145 = ATgetFirst((ATermList) c_56);
          a_146 = (ATerm) ATgetNext((ATermList) c_56);
        }
      else
        _fail(t);
      {
        ATerm d_56 = ATgetArgument(t, 1);
        if(((ATgetType(d_56) == AT_LIST) && !(ATisEmpty(d_56))))
          {
            b_146 = ATgetFirst((ATermList) d_56);
            c_146 = (ATerm) ATgetNext((ATermList) d_56);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_145, b_146), (ATerm) ATmakeAppl(sym__2, a_146, c_146));
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm d_146 = NULL,e_146 = NULL;
  if(match_cons(t, sym__2))
    {
      d_146 = ATgetArgument(t, 0);
      e_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_146), d_146);
  return(t);
}
static ATerm q_10 (ATerm t)
{
  ATerm g_146 = NULL,i_146 = NULL,j_146 = NULL;
  if(match_cons(t, sym__2))
    {
      g_146 = ATgetArgument(t, 0);
      j_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_146;
  {
    ATerm e_56 = t;
    int f_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_56);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_146);
      }
    else
      {
        t = e_56;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_56 = ATgetArgument(t, 0);
            i_146 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, j_146, i_146);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm l_178 (ATerm), ATerm t)
{
  ATerm i_56 = t;
  int j_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_145 = NULL,r_145 = NULL,s_145 = NULL,t_145 = NULL,u_145 = NULL;
      q_145 = t;
      if(match_cons(t, sym_Scope_2))
        {
          r_145 = ATgetArgument(t, 0);
          s_145 = ATgetArgument(t, 1);
          {
            ATerm d_66 = NULL,o_66 = NULL,j_25 = NULL;
            t = SSLgetAnnotations(q_145);
            d_66 = t;
            t = r_145;
            t = l_178(t);
            o_66 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, o_66, s_145);
            j_25 = t;
            t = SSLsetAnnotations(j_25, d_66);
          }
        }
      else
        {
          if(match_cons(t, sym_LRule_1))
            {
              r_145 = ATgetArgument(t, 0);
              {
                ATerm d_67 = NULL,m_25 = NULL;
                t = SSLgetAnnotations(q_145);
                d_67 = t;
                t = (ATerm) ATmakeAppl(sym_LRule_1, r_145);
                m_25 = t;
                t = SSLsetAnnotations(m_25, d_67);
              }
            }
          else
            {
              if(match_cons(t, sym_RDecT_3))
                {
                  r_145 = ATgetArgument(t, 0);
                  s_145 = ATgetArgument(t, 1);
                  t_145 = ATgetArgument(t, 2);
                  {
                    ATerm e_68 = NULL,k_68 = NULL,l_68 = NULL,r_25 = NULL;
                    t = SSLgetAnnotations(q_145);
                    e_68 = t;
                    t = t_145;
                    t = l_178(t);
                    l_68 = t;
                    t = (ATerm) ATmakeAppl(sym__2, t_145, l_68);
                    t = genzip_4_0(s_9, u_9, v_9, y_9, t);
                    k_68 = t;
                    t = (ATerm) ATmakeAppl(sym_RDecT_3, r_145, s_145, k_68);
                    r_25 = t;
                    t = SSLsetAnnotations(r_25, e_68);
                  }
                }
              else
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_145 = ATgetArgument(t, 0);
                      s_145 = ATgetArgument(t, 1);
                      t_145 = ATgetArgument(t, 2);
                      u_145 = ATgetArgument(t, 3);
                      {
                        ATerm f_70 = NULL,m_70 = NULL,r_70 = NULL,v_25 = NULL;
                        t = SSLgetAnnotations(q_145);
                        f_70 = t;
                        t = t_145;
                        t = l_178(t);
                        r_70 = t;
                        t = (ATerm) ATmakeAppl(sym__2, t_145, r_70);
                        t = genzip_4_0(z_9, d_10, e_10, f_10, t);
                        m_70 = t;
                        t = (ATerm) ATmakeAppl(sym_SDefT_4, r_145, s_145, m_70, u_145);
                        v_25 = t;
                        t = SSLsetAnnotations(v_25, f_70);
                      }
                    }
                  else
                    {
                      ATerm j_72 = NULL,o_72 = NULL,p_72 = NULL,y_25 = NULL;
                      if(match_cons(t, sym_RDefT_4))
                        {
                          r_145 = ATgetArgument(t, 0);
                          s_145 = ATgetArgument(t, 1);
                          t_145 = ATgetArgument(t, 2);
                          u_145 = ATgetArgument(t, 3);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(q_145);
                      j_72 = t;
                      t = t_145;
                      t = l_178(t);
                      p_72 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_145, p_72);
                      t = genzip_4_0(g_10, h_10, i_10, j_10, t);
                      o_72 = t;
                      t = (ATerm) ATmakeAppl(sym_RDefT_4, r_145, s_145, o_72, u_145);
                      y_25 = t;
                      t = SSLsetAnnotations(y_25, j_72);
                    }
                }
            }
        }
      LocalPopChoice(j_56);
    }
  else
    {
      t = i_56;
      {
        static ATerm k_10 (ATerm t);
        static ATerm k_10 (ATerm t)
        {
          ATerm x_145 = NULL,y_145 = NULL;
          y_145 = t;
          t = l_178(t);
          x_145 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_145, x_145);
          t = genzip_4_0(m_10, n_10, p_10, q_10, t);
          return(t);
        }
        t = dynrule_cong_6_0(_id, _id, k_10, _id, _id, _id, t);
      }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm m_178 (ATerm), ATerm n_178 (ATerm), ATerm o_178 (ATerm), ATerm t)
{
  ATerm r_152 = NULL,s_152 = NULL,t_152 = NULL,u_152 = NULL,v_152 = NULL;
  u_152 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_152 = ATgetArgument(t, 0);
      t_152 = ATgetArgument(t, 1);
      {
        ATerm t_73 = NULL,w_73 = NULL,d_74 = NULL,i_26 = NULL;
        t = SSLgetAnnotations(u_152);
        t_73 = t;
        t = v_152;
        t = o_178(t);
        w_73 = t;
        t = t_152;
        t = m_178(t);
        d_74 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_73, d_74);
        i_26 = t;
        t = SSLsetAnnotations(i_26, t_73);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          v_152 = ATgetArgument(t, 0);
          {
            ATerm w_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL,h_75 = NULL,i_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,p_26 = NULL,o_26 = NULL;
            t = SSLgetAnnotations(u_152);
            w_74 = t;
            t = v_152;
            if(match_cons(t, sym_Rule_3))
              {
                z_74 = ATgetArgument(t, 0);
                a_75 = ATgetArgument(t, 1);
                h_75 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_152);
            y_74 = t;
            t = z_74;
            t = m_178(t);
            i_75 = t;
            t = a_75;
            t = m_178(t);
            l_75 = t;
            t = h_75;
            t = m_178(t);
            m_75 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, i_75, l_75, m_75);
            o_26 = t;
            t = SSLsetAnnotations(o_26, y_74);
            n_75 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, n_75);
            p_26 = t;
            t = SSLsetAnnotations(p_26, w_74);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              v_152 = ATgetArgument(t, 0);
              t_152 = ATgetArgument(t, 1);
              r_152 = ATgetArgument(t, 2);
              {
                ATerm v_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,s_26 = NULL;
                t = SSLgetAnnotations(u_152);
                v_75 = t;
                t = v_152;
                t = o_178(t);
                z_75 = t;
                t = t_152;
                t = o_178(t);
                a_76 = t;
                t = r_152;
                t = o_178(t);
                b_76 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, z_75, a_76, b_76);
                s_26 = t;
                t = SSLsetAnnotations(s_26, v_75);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  v_152 = ATgetArgument(t, 0);
                  t_152 = ATgetArgument(t, 1);
                  r_152 = ATgetArgument(t, 2);
                  s_152 = ATgetArgument(t, 3);
                  {
                    ATerm m_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,t_26 = NULL;
                    t = SSLgetAnnotations(u_152);
                    m_76 = t;
                    t = v_152;
                    t = o_178(t);
                    r_76 = t;
                    t = t_152;
                    t = o_178(t);
                    s_76 = t;
                    t = r_152;
                    t = o_178(t);
                    t_76 = t;
                    t = s_152;
                    t = m_178(t);
                    u_76 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, r_76, s_76, t_76, u_76);
                    t_26 = t;
                    t = SSLsetAnnotations(t_26, m_76);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      v_152 = ATgetArgument(t, 0);
                      t_152 = ATgetArgument(t, 1);
                      r_152 = ATgetArgument(t, 2);
                      s_152 = ATgetArgument(t, 3);
                      {
                        ATerm g_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,w_26 = NULL;
                        t = SSLgetAnnotations(u_152);
                        g_77 = t;
                        t = v_152;
                        t = o_178(t);
                        l_77 = t;
                        t = t_152;
                        t = o_178(t);
                        m_77 = t;
                        t = r_152;
                        t = o_178(t);
                        n_77 = t;
                        t = s_152;
                        t = m_178(t);
                        o_77 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, l_77, m_77, n_77, o_77);
                        w_26 = t;
                        t = SSLsetAnnotations(w_26, g_77);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          v_152 = ATgetArgument(t, 0);
                          t_152 = ATgetArgument(t, 1);
                          {
                            ATerm y_77 = NULL,b_78 = NULL,c_78 = NULL,x_26 = NULL;
                            t = SSLgetAnnotations(u_152);
                            y_77 = t;
                            t = v_152;
                            t = o_178(t);
                            b_78 = t;
                            t = t_152;
                            t = m_178(t);
                            c_78 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, b_78, c_78);
                            x_26 = t;
                            t = SSLsetAnnotations(x_26, y_77);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              v_152 = ATgetArgument(t, 0);
                              t_152 = ATgetArgument(t, 1);
                              {
                                ATerm k_78 = NULL,n_78 = NULL,o_78 = NULL,y_26 = NULL;
                                t = SSLgetAnnotations(u_152);
                                k_78 = t;
                                t = v_152;
                                t = o_178(t);
                                n_78 = t;
                                t = t_152;
                                t = m_178(t);
                                o_78 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, n_78, o_78);
                                y_26 = t;
                                t = SSLsetAnnotations(y_26, k_78);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  v_152 = ATgetArgument(t, 0);
                                  t_152 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_78 = NULL,z_78 = NULL,a_79 = NULL,z_26 = NULL;
                                    t = SSLgetAnnotations(u_152);
                                    w_78 = t;
                                    t = v_152;
                                    t = o_178(t);
                                    z_78 = t;
                                    t = t_152;
                                    t = m_178(t);
                                    a_79 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, z_78, a_79);
                                    z_26 = t;
                                    t = SSLsetAnnotations(z_26, w_78);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      v_152 = ATgetArgument(t, 0);
                                      {
                                        ATerm h_79 = NULL,j_79 = NULL,a_27 = NULL;
                                        t = SSLgetAnnotations(u_152);
                                        h_79 = t;
                                        t = v_152;
                                        t = m_178(t);
                                        j_79 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, j_79);
                                        a_27 = t;
                                        t = SSLsetAnnotations(a_27, h_79);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          v_152 = ATgetArgument(t, 0);
                                          {
                                            ATerm p_79 = NULL,r_79 = NULL,b_27 = NULL;
                                            t = SSLgetAnnotations(u_152);
                                            p_79 = t;
                                            t = v_152;
                                            t = m_178(t);
                                            r_79 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, r_79);
                                            b_27 = t;
                                            t = SSLsetAnnotations(b_27, p_79);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              v_152 = ATgetArgument(t, 0);
                                              {
                                                ATerm x_79 = NULL,z_79 = NULL,c_27 = NULL;
                                                t = SSLgetAnnotations(u_152);
                                                x_79 = t;
                                                t = v_152;
                                                t = m_178(t);
                                                z_79 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, z_79);
                                                c_27 = t;
                                                t = SSLsetAnnotations(c_27, x_79);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  v_152 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm f_80 = NULL,h_80 = NULL,d_27 = NULL;
                                                    t = SSLgetAnnotations(u_152);
                                                    f_80 = t;
                                                    t = v_152;
                                                    t = m_178(t);
                                                    h_80 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, h_80);
                                                    d_27 = t;
                                                    t = SSLsetAnnotations(d_27, f_80);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm r_80 = NULL,t_80 = NULL,e_27 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      v_152 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(u_152);
                                                  r_80 = t;
                                                  t = v_152;
                                                  t = m_178(t);
                                                  t_80 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, t_80);
                                                  e_27 = t;
                                                  t = SSLsetAnnotations(e_27, r_80);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm v_178 (ATerm), ATerm t)
{
  ATerm r_153 = NULL,s_153 = NULL,v_153 = NULL;
  ATerm k_56 = t;
  int l_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          r_153 = ATgetArgument(t, 0);
          {
            ATerm m_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_56);
      t = r_153;
      if(match_cons(t, sym_DynRuleId_1))
        {
          s_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_153;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm n_56 = ATgetArgument(t, 0);
          ATerm o_56 = ATgetArgument(t, 1);
          v_153 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_153;
    }
  else
    {
      t = k_56;
      {
        ATerm p_56 = t;
        int r_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                r_153 = ATgetArgument(t, 0);
                {
                  ATerm s_56 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(r_56);
            t = r_153;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_153 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_153;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm t_56 = ATgetArgument(t, 0);
                ATerm u_56 = ATgetArgument(t, 1);
                v_153 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = v_153;
          }
        else
          {
            t = p_56;
            if(match_cons(t, sym_AddDynRule_2))
              {
                r_153 = ATgetArgument(t, 0);
                {
                  ATerm x_56 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = r_153;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_153 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_153;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm y_56 = ATgetArgument(t, 0);
                ATerm a_57 = ATgetArgument(t, 1);
                v_153 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = v_153;
          }
      }
    }
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm l_154 = NULL;
  ATerm b_57 = t;
  int c_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_154 = ATgetArgument(t, 0);
          {
            ATerm d_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_57);
      t = l_154;
    }
  else
    {
      t = b_57;
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
static ATerm s_10 (ATerm t)
{
  ATerm r_154 = NULL;
  ATerm e_57 = t;
  int f_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_154 = ATgetArgument(t, 0);
          {
            ATerm g_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_57);
      t = r_154;
    }
  else
    {
      t = e_57;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_154;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm g_154 = NULL;
  ATerm h_57 = t;
  int i_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm r_57 = ATgetArgument(t, 0);
          ATerm w_57 = ATgetArgument(t, 1);
          g_154 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(i_57);
      t = g_154;
      t = map_1_0(r_10, t);
    }
  else
    {
      t = h_57;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm x_57 = ATgetArgument(t, 0);
          ATerm y_57 = ATgetArgument(t, 1);
          g_154 = ATgetArgument(t, 2);
          {
            ATerm z_57 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = g_154;
      t = map_1_0(s_10, t);
    }
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm u_155 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_155);
  return(t);
}
static ATerm u_10 (ATerm t)
{
  ATerm a_58 = t;
  int d_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_58);
    }
  else
    {
      t = a_58;
      {
        ATerm e_58 = t;
        int f_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_58);
          }
        else
          {
            t = e_58;
            {
              ATerm g_58 = t;
              int h_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_155 = NULL,x_155 = NULL,y_155 = NULL,z_155 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_155 = ATgetArgument(t, 0);
                      x_155 = ATgetArgument(t, 1);
                      y_155 = ATgetArgument(t, 2);
                      z_155 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_155;
                  t = map_1_0(v_10, t);
                  LocalPopChoice(h_58);
                }
              else
                {
                  t = g_58;
                  {
                    ATerm j_58 = t;
                    int k_58 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_58);
                      }
                    else
                      {
                        t = j_58;
                        t = dynrule_targs_1_0(w_10, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm g_156 = NULL;
  ATerm l_58 = t;
  int m_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_156 = ATgetArgument(t, 0);
          {
            ATerm n_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_58);
      t = g_156;
    }
  else
    {
      t = l_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_156 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_156;
    }
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = map_1_0(y_10, t);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm l_156 = NULL;
  ATerm p_58 = t;
  int q_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_156 = ATgetArgument(t, 0);
          {
            ATerm r_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_58);
      t = l_156;
    }
  else
    {
      t = p_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_156 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_156;
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm p_156 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_156);
  return(t);
}
static ATerm b_11 (ATerm t)
{
  ATerm s_58 = t;
  int u_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_58);
    }
  else
    {
      t = s_58;
      {
        ATerm v_58 = t;
        int w_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_58);
          }
        else
          {
            t = v_58;
            {
              ATerm y_58 = t;
              int a_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_156 = NULL,s_156 = NULL,t_156 = NULL,u_156 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_156 = ATgetArgument(t, 0);
                      s_156 = ATgetArgument(t, 1);
                      t_156 = ATgetArgument(t, 2);
                      u_156 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_156;
                  t = map_1_0(h_11, t);
                  LocalPopChoice(a_59);
                }
              else
                {
                  t = y_58;
                  {
                    ATerm b_59 = t;
                    int c_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(c_59);
                      }
                    else
                      {
                        t = b_59;
                        t = dynrule_targs_1_0(i_11, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  ATerm g_157 = NULL;
  ATerm d_59 = t;
  int e_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_157 = ATgetArgument(t, 0);
          {
            ATerm h_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_59);
      t = g_157;
    }
  else
    {
      t = d_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_157 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_157;
    }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = map_1_0(v_11, t);
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm l_157 = NULL;
  ATerm i_59 = t;
  int j_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_157 = ATgetArgument(t, 0);
          {
            ATerm k_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_59);
      t = l_157;
    }
  else
    {
      t = i_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_157 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_157;
    }
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm p_157 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_157);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm l_59 = t;
  int m_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(o_59);
          }
        else
          {
            t = n_59;
            {
              ATerm p_59 = t;
              int r_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_157 = NULL,s_157 = NULL,t_157 = NULL,u_157 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_157 = ATgetArgument(t, 0);
                      s_157 = ATgetArgument(t, 1);
                      t_157 = ATgetArgument(t, 2);
                      u_157 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_157;
                  t = map_1_0(h_13, t);
                  LocalPopChoice(r_59);
                }
              else
                {
                  t = p_59;
                  {
                    ATerm s_59 = t;
                    int u_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_59);
                      }
                    else
                      {
                        t = s_59;
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
  ATerm b_158 = NULL;
  ATerm v_59 = t;
  int w_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_158 = ATgetArgument(t, 0);
          {
            ATerm y_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_59);
      t = b_158;
    }
  else
    {
      t = v_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_158 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_158;
    }
  return(t);
}
static ATerm i_13 (ATerm t)
{
  t = map_1_0(j_13, t);
  return(t);
}
static ATerm j_13 (ATerm t)
{
  ATerm g_158 = NULL;
  ATerm z_59 = t;
  int a_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_158 = ATgetArgument(t, 0);
          {
            ATerm b_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_60);
      t = g_158;
    }
  else
    {
      t = z_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_158 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_158;
    }
  return(t);
}
static ATerm l_13 (ATerm t)
{
  ATerm k_158 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_158);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm d_60 = t;
  int e_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_60);
    }
  else
    {
      t = d_60;
      {
        ATerm h_60 = t;
        int i_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_60);
          }
        else
          {
            t = h_60;
            {
              ATerm j_60 = t;
              int k_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_158 = NULL,n_158 = NULL,o_158 = NULL,p_158 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_158 = ATgetArgument(t, 0);
                      n_158 = ATgetArgument(t, 1);
                      o_158 = ATgetArgument(t, 2);
                      p_158 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_158;
                  t = map_1_0(d_14, t);
                  LocalPopChoice(k_60);
                }
              else
                {
                  t = j_60;
                  {
                    ATerm l_60 = t;
                    int m_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_60);
                      }
                    else
                      {
                        t = l_60;
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
static ATerm d_14 (ATerm t)
{
  ATerm w_158 = NULL;
  ATerm n_60 = t;
  int o_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_158 = ATgetArgument(t, 0);
          {
            ATerm p_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_60);
      t = w_158;
    }
  else
    {
      t = n_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_158 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_158;
    }
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = map_1_0(l_14, t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm d_159 = NULL;
  ATerm q_60 = t;
  int r_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_159 = ATgetArgument(t, 0);
          {
            ATerm t_60 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_60);
      t = d_159;
    }
  else
    {
      t = q_60;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_159 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_159;
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm l_159 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_159);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm u_60 = t;
  int v_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_60);
    }
  else
    {
      t = u_60;
      {
        ATerm y_60 = t;
        int z_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_60);
          }
        else
          {
            t = y_60;
            {
              ATerm a_61 = t;
              int b_61 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_159 = NULL,o_159 = NULL,u_159 = NULL,v_159 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_159 = ATgetArgument(t, 0);
                      o_159 = ATgetArgument(t, 1);
                      u_159 = ATgetArgument(t, 2);
                      v_159 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_159;
                  t = map_1_0(p_14, t);
                  LocalPopChoice(b_61);
                }
              else
                {
                  t = a_61;
                  {
                    ATerm c_61 = t;
                    int d_61 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_61);
                      }
                    else
                      {
                        t = c_61;
                        t = dynrule_targs_1_0(w_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm c_160 = NULL;
  ATerm e_61 = t;
  int f_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_160 = ATgetArgument(t, 0);
          {
            ATerm h_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_61);
      t = c_160;
    }
  else
    {
      t = e_61;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_160 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_160;
    }
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = map_1_0(r_15, t);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm h_160 = NULL;
  ATerm i_61 = t;
  int j_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_160 = ATgetArgument(t, 0);
          {
            ATerm o_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_61);
      t = h_160;
    }
  else
    {
      t = i_61;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_160 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_160;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm s_155 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      s_155 = ATgetArgument(t, 0);
      t = s_155;
      t = free_vars_3_0(t_10, u_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          s_155 = ATgetArgument(t, 0);
          t = s_155;
          t = free_vars_3_0(z_10, b_11, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              s_155 = ATgetArgument(t, 0);
              t = s_155;
              t = free_vars_3_0(y_11, c_13, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  s_155 = ATgetArgument(t, 0);
                  t = s_155;
                  t = free_vars_3_0(l_13, a_14, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      s_155 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = s_155;
                  t = free_vars_3_0(m_14, n_14, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm z_12 (ATerm f_159 (ATerm), ATerm o_74, ATerm n_74, ATerm t)
{
  static ATerm z_160 (ATerm t);
  static ATerm z_160 (ATerm t)
  {
    ATerm u_160 = NULL,v_160 = NULL,w_160 = NULL;
    u_160 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_74;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_160 = ATgetFirst((ATermList) t);
            w_160 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_61 = t;
          int q_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_160;
              {
                static ATerm s_15 (ATerm t);
                static ATerm s_15 (ATerm t)
                {
                  t = n_74;
                  return(t);
                }
                t = a_13(f_159, s_15, v_160, w_160, t);
              }
              t = z_160(t);
              LocalPopChoice(q_61);
            }
          else
            {
              t = p_61;
              {
                ATerm l_81 = NULL,o_81 = NULL,i_29 = NULL;
                t = SSLgetAnnotations(u_160);
                l_81 = t;
                t = w_160;
                t = z_160(t);
                o_81 = t;
                t = (ATerm) ATinsert(CheckATermList(o_81), v_160);
                i_29 = t;
                t = SSLsetAnnotations(i_29, l_81);
              }
            }
        }
      }
    return(t);
  }
  t = o_74;
  t = z_160(t);
  return(t);
}
ATerm foldr_3_0 (ATerm k_162 (ATerm), ATerm l_162 (ATerm), ATerm m_162 (ATerm), ATerm t)
{
  ATerm c_161 = NULL,d_161 = NULL,e_161 = NULL;
  c_161 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_161;
      t = k_162(t);
    }
  else
    {
      ATerm h_161 = NULL,i_161 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_161 = ATgetFirst((ATermList) t);
          e_161 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_161;
      t = m_162(t);
      h_161 = t;
      t = e_161;
      t = foldr_3_0(k_162, l_162, m_162, t);
      i_161 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_161, i_161);
      t = l_162(t);
    }
  return(t);
}
static ATerm a_13 (ATerm i_159 (ATerm), ATerm j_159 (ATerm), ATerm s_74, ATerm r_74, ATerm t)
{
  t = j_159(t);
  {
    static ATerm t_15 (ATerm t);
    static ATerm t_15 (ATerm t)
    {
      ATerm l_161 = NULL;
      l_161 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_74, l_161);
      t = i_159(t);
      return(t);
    }
    t = fetch_1_0(t_15, t);
  }
  t = r_74;
  return(t);
}
static ATerm b_13 (ATerm a_159 (ATerm), ATerm m_74, ATerm l_74, ATerm t)
{
  static ATerm c_162 (ATerm t);
  static ATerm c_162 (ATerm t)
  {
    ATerm x_161 = NULL,y_161 = NULL,z_161 = NULL;
    x_161 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_161;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_161 = ATgetFirst((ATermList) t);
            z_161 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_61 = t;
          int e_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_161;
              {
                static ATerm w_15 (ATerm t);
                static ATerm w_15 (ATerm t)
                {
                  t = l_74;
                  return(t);
                }
                t = a_13(a_159, w_15, y_161, z_161, t);
              }
              t = c_162(t);
              LocalPopChoice(e_62);
            }
          else
            {
              t = r_61;
              {
                ATerm w_81 = NULL,a_82 = NULL,k_29 = NULL;
                t = SSLgetAnnotations(x_161);
                w_81 = t;
                t = z_161;
                t = c_162(t);
                a_82 = t;
                t = (ATerm) ATinsert(CheckATermList(a_82), y_161);
                k_29 = t;
                t = SSLsetAnnotations(k_29, w_81);
              }
            }
        }
      }
    return(t);
  }
  t = m_74;
  t = c_162(t);
  return(t);
}
static ATerm e_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_62 = ATgetArgument(t, 0);
      if(((ATgetType(f_62) != AT_LIST) || !(ATisEmpty(f_62))))
        _fail(t);
      {
        ATerm g_62 = ATgetArgument(t, 1);
        if(((ATgetType(g_62) != AT_LIST) || !(ATisEmpty(g_62))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm p_162 = NULL,q_162 = NULL,r_162 = NULL,s_162 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_62 = ATgetArgument(t, 0);
      if(((ATgetType(j_62) == AT_LIST) && !(ATisEmpty(j_62))))
        {
          p_162 = ATgetFirst((ATermList) j_62);
          q_162 = (ATerm) ATgetNext((ATermList) j_62);
        }
      else
        _fail(t);
      {
        ATerm k_62 = ATgetArgument(t, 1);
        if(((ATgetType(k_62) == AT_LIST) && !(ATisEmpty(k_62))))
          {
            r_162 = ATgetFirst((ATermList) k_62);
            s_162 = (ATerm) ATgetNext((ATermList) k_62);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_162, r_162), (ATerm) ATmakeAppl(sym__2, q_162, s_162));
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm t_162 = NULL,u_162 = NULL;
  if(match_cons(t, sym__2))
    {
      t_162 = ATgetArgument(t, 0);
      u_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_162), t_162);
  return(t);
}
static ATerm d_13 (ATerm v_925, ATerm a_926, ATerm d_97, ATerm t)
{
  ATerm f_162 = NULL,g_162 = NULL,h_162 = NULL,n_162 = NULL;
  t = SSL_explode_term(a_926);
  if(match_cons(t, sym__2))
    {
      f_162 = ATgetArgument(t, 0);
      h_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_925);
  if(match_cons(t, sym__2))
    {
      if((f_162 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      g_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_162, h_162);
  t = genzip_4_0(e_16, f_16, i_16, _id, t);
  n_162 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_162, d_97);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm k_147 (ATerm), ATerm l_147 (ATerm), ATerm t)
{
  static ATerm w_162 (ATerm t);
  static ATerm w_162 (ATerm t)
  {
    ATerm m_62 = t;
    int n_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_147(t);
        LocalPopChoice(n_62);
      }
    else
      {
        t = m_62;
        t = l_147(t);
        t = w_162(t);
      }
    return(t);
  }
  t = w_162(t);
  return(t);
}
ATerm for_3_0 (ATerm n_147 (ATerm), ATerm o_147 (ATerm), ATerm p_147 (ATerm), ATerm t)
{
  t = n_147(t);
  t = while_not_2_0(o_147, p_147, t);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm d_163 = NULL;
  d_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, d_163);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm e_163 = NULL,f_163 = NULL,g_163 = NULL,h_163 = NULL,m_29 = NULL;
  h_163 = t;
  if(match_cons(t, sym__2))
    {
      f_163 = ATgetArgument(t, 0);
      g_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_163);
  e_163 = t;
  t = g_163;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_163, g_163);
  m_29 = t;
  t = SSLsetAnnotations(m_29, e_163);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm a_164 = NULL,b_164 = NULL,c_164 = NULL,d_164 = NULL,e_164 = NULL;
  a_164 = t;
  if(match_cons(t, sym__2))
    {
      b_164 = ATgetArgument(t, 0);
      c_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_164;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_164 = ATgetFirst((ATermList) t);
      e_164 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_62 = t;
        int p_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_164(b_164, c_164, a_164, t);
            LocalPopChoice(p_62);
          }
        else
          {
            t = o_62;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_164), d_164), e_164);
          }
      }
    }
  else
    {
      t = o_164(b_164, c_164, a_164, t);
    }
  return(t);
}
static ATerm o_164 (ATerm i_163, ATerm j_163, ATerm k_163, ATerm t)
{
  ATerm l_163 = NULL,o_163 = NULL,n_29 = NULL,r_163 = NULL,s_163 = NULL,t_163 = NULL,u_163 = NULL;
  t = SSLgetAnnotations(k_163);
  l_163 = t;
  t = j_163;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_163 = ATgetFirst((ATermList) t);
      u_163 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_163;
  if(match_cons(t, sym__2))
    {
      s_163 = ATgetArgument(t, 0);
      t_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_62 = t;
    int s_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_163;
        if((s_163 != t))
          {
            _fail(t);
          }
        t = u_163;
        LocalPopChoice(s_62);
      }
    else
      {
        t = q_62;
        t = j_163;
        t = d_13(s_163, t_163, u_163, t);
      }
  }
  o_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_163, o_163);
  n_29 = t;
  t = SSLsetAnnotations(n_29, l_163);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm n_164 = NULL;
  if(match_cons(t, sym__2))
    {
      n_164 = ATgetArgument(t, 0);
      if((n_164 != ATgetArgument(t, 1)))
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
  ATerm t_62 = t;
  int u_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_16, l_16, n_16, t);
      LocalPopChoice(u_62);
    }
  else
    {
      t = t_62;
      {
        ATerm i_164 = NULL,j_164 = NULL,k_164 = NULL;
        i_164 = t;
        if(match_cons(t, sym__2))
          {
            j_164 = ATgetArgument(t, 0);
            k_164 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_164;
        t = b_13(o_16, j_164, k_164, t);
      }
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm l_82 = NULL,m_82 = NULL;
  if(match_cons(t, sym__2))
    {
      l_82 = ATgetArgument(t, 0);
      m_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_12(a_17, l_82, m_82, t);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm o_82 = NULL;
  if(match_cons(t, sym__2))
    {
      o_82 = ATgetArgument(t, 0);
      if((o_82 != ATgetArgument(t, 1)))
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
static ATerm f_17 (ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL;
  if(match_cons(t, sym__2))
    {
      w_82 = ATgetArgument(t, 0);
      x_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_12(g_17, w_82, x_82, t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm z_82 = NULL;
  if(match_cons(t, sym__2))
    {
      z_82 = ATgetArgument(t, 0);
      if((z_82 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm w_174 (ATerm), ATerm x_174 (ATerm), ATerm y_174 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm e_165 (ATerm t);
  static ATerm e_165 (ATerm t)
  {
    ATerm v_62 = t;
    int x_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_174(t);
        LocalPopChoice(x_62);
      }
    else
      {
        t = v_62;
        {
          ATerm y_62 = t;
          int i_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_164 = NULL,r_164 = NULL,f_82 = NULL,h_82 = NULL;
              q_164 = t;
              t = x_174(t);
              r_164 = t;
              t = q_164;
              {
                static ATerm p_16 (ATerm t);
                static ATerm p_16 (ATerm t)
                {
                  ATerm v_164 = NULL;
                  t = e_165(t);
                  v_164 = t;
                  t = (ATerm) ATmakeAppl(sym__2, v_164, r_164);
                  t = diff_0_0(t);
                  return(t);
                }
                t = y_174(p_16, e_165, q_16, t);
              }
              h_82 = t;
              t = SSL_explode_term(h_82);
              if(match_cons(t, sym__2))
                {
                  ATerm j_63 = ATgetArgument(t, 0);
                  f_82 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_82;
              t = foldr_3_0(w_16, z_16, _id, t);
              LocalPopChoice(i_63);
            }
          else
            {
              t = y_62;
              {
                ATerm r_82 = NULL,s_82 = NULL;
                s_82 = t;
                t = SSL_explode_term(s_82);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_63 = ATgetArgument(t, 0);
                    r_82 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_82;
                t = foldr_3_0(c_17, f_17, e_165, t);
              }
            }
        }
      }
    return(t);
  }
  t = e_165(t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm r_165 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_165);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm l_63 = t;
  int p_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_63);
    }
  else
    {
      t = l_63;
      {
        ATerm q_63 = t;
        int r_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_63);
          }
        else
          {
            t = q_63;
            {
              ATerm u_63 = t;
              int i_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_165 = NULL,u_165 = NULL,v_165 = NULL,w_165 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_165 = ATgetArgument(t, 0);
                      u_165 = ATgetArgument(t, 1);
                      v_165 = ATgetArgument(t, 2);
                      w_165 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_165;
                  t = map_1_0(j_17, t);
                  LocalPopChoice(i_64);
                }
              else
                {
                  t = u_63;
                  {
                    ATerm j_64 = t;
                    int k_64 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_64);
                      }
                    else
                      {
                        t = j_64;
                        t = dynrule_targs_1_0(l_17, t);
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
  ATerm d_166 = NULL;
  ATerm l_64 = t;
  int m_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_166 = ATgetArgument(t, 0);
          {
            ATerm n_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_64);
      t = d_166;
    }
  else
    {
      t = l_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_166 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_166;
    }
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = map_1_0(m_17, t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm i_166 = NULL;
  ATerm o_64 = t;
  int q_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_166 = ATgetArgument(t, 0);
          {
            ATerm r_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_64);
      t = i_166;
    }
  else
    {
      t = o_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_166 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_166;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm k_165 = NULL,o_165 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      o_165 = ATgetArgument(t, 0);
      t = o_165;
      if(match_cons(t, sym_Rule_3))
        {
          k_165 = ATgetArgument(t, 0);
          {
            ATerm s_64 = ATgetArgument(t, 1);
          }
          {
            ATerm t_64 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_165;
      t = free_vars_3_0(h_17, i_17, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          o_165 = ATgetArgument(t, 0);
          {
            ATerm w_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = o_165;
    }
  return(t);
}
ATerm Var_1_0 (ATerm a_118 (ATerm), ATerm t)
{
  ATerm m_166 = NULL,n_166 = NULL,o_166 = NULL,p_166 = NULL,v_29 = NULL;
  p_166 = t;
  if(match_cons(t, sym_Var_1))
    {
      n_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_166);
  m_166 = t;
  t = n_166;
  t = a_118(t);
  o_166 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_166);
  v_29 = t;
  t = SSLsetAnnotations(v_29, m_166);
  return(t);
}
static ATerm f_13 (ATerm r_173 (ATerm), ATerm s_173 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_95, ATerm j_95, ATerm i_95, ATerm t)
{
  static ATerm n_17 (ATerm t);
  static ATerm o_17 (ATerm t);
  static ATerm n_17 (ATerm t)
  {
    ATerm r_166 = NULL;
    r_166 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_166, i_95);
    t = r_173(t);
    return(t);
  }
  static ATerm o_17 (ATerm t)
  {
    ATerm s_166 = NULL;
    s_166 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_166, j_95);
    t = r_173(t);
    return(t);
  }
  t = k_95;
  t = s_173(n_17, o_17, _id, t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_155 (ATerm), ATerm t)
{
  static ATerm o_167 (ATerm t);
  static ATerm o_167 (ATerm t)
  {
    ATerm l_167 = NULL,m_167 = NULL,n_167 = NULL;
    n_167 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_167 = ATgetFirst((ATermList) t);
        m_167 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_83 = NULL,g_83 = NULL,f_30 = NULL;
          t = SSLgetAnnotations(n_167);
          d_83 = t;
          t = m_167;
          t = o_167(t);
          g_83 = t;
          t = (ATerm) ATinsert(CheckATermList(g_83), l_167);
          f_30 = t;
          t = SSLsetAnnotations(f_30, d_83);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_167;
        t = l_155(t);
      }
    return(t);
  }
  t = o_167(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_166 = NULL,w_166 = NULL,x_166 = NULL;
  v_166 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_166;
    }
  else
    {
      static ATerm p_17 (ATerm t);
      static ATerm p_17 (ATerm t)
      {
        t = not_null(x_166);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_166 = ATgetFirst((ATermList) t);
          if(((x_166 != NULL) && (x_166 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            x_166 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_166;
      t = at_end_1_0(p_17, t);
    }
  return(t);
}
static ATerm a_168 (ATerm s_167, ATerm t)
{
  ATerm t_167 = NULL;
  t = SSL_explode_term(s_167);
  if(match_cons(t, sym__2))
    {
      ATerm z_64 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_64) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_167;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_167 = NULL,w_167 = NULL,x_167 = NULL;
  x_167 = t;
  if(match_cons(t, sym__2))
    {
      v_167 = ATgetArgument(t, 0);
      w_167 = ATgetArgument(t, 1);
      {
        ATerm h_65 = t;
        int l_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm q_17 (ATerm t);
            static ATerm q_17 (ATerm t)
            {
              t = w_167;
              return(t);
            }
            t = v_167;
            t = at_end_1_0(q_17, t);
            LocalPopChoice(l_65);
          }
        else
          {
            t = h_65;
            t = a_168(x_167, t);
          }
      }
    }
  else
    {
      t = a_168(x_167, t);
    }
  return(t);
}
static ATerm r_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_65 = ATgetArgument(t, 0);
      if(((ATgetType(m_65) != AT_LIST) || !(ATisEmpty(m_65))))
        _fail(t);
      {
        ATerm s_65 = ATgetArgument(t, 1);
        if(((ATgetType(s_65) != AT_LIST) || !(ATisEmpty(s_65))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm i_168 = NULL,j_168 = NULL,k_168 = NULL,l_168 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_65 = ATgetArgument(t, 0);
      if(((ATgetType(t_65) == AT_LIST) && !(ATisEmpty(t_65))))
        {
          i_168 = ATgetFirst((ATermList) t_65);
          j_168 = (ATerm) ATgetNext((ATermList) t_65);
        }
      else
        _fail(t);
      {
        ATerm u_65 = ATgetArgument(t, 1);
        if(((ATgetType(u_65) == AT_LIST) && !(ATisEmpty(u_65))))
          {
            k_168 = ATgetFirst((ATermList) u_65);
            l_168 = (ATerm) ATgetNext((ATermList) u_65);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_168, k_168), (ATerm) ATmakeAppl(sym__2, j_168, l_168));
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm m_168 = NULL,n_168 = NULL;
  if(match_cons(t, sym__2))
    {
      m_168 = ATgetArgument(t, 0);
      n_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_168), m_168);
  return(t);
}
static ATerm g_13 (ATerm l_173 (ATerm), ATerm m_173 (ATerm (ATerm), ATerm), ATerm c_95, ATerm f_95, ATerm t)
{
  ATerm c_168 = NULL,d_168 = NULL,e_168 = NULL,f_168 = NULL,h_168 = NULL;
  t = c_95;
  t = l_173(t);
  c_168 = t;
  t = map_1_0(new_0_0, t);
  d_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_168, d_168);
  t = genzip_4_0(r_17, s_17, t_17, _id, t);
  h_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_168, f_95);
  t = conc_0_0(t);
  e_168 = t;
  t = c_95;
  {
    static ATerm u_17 (ATerm t);
    static ATerm u_17 (ATerm t)
    {
      t = d_168;
      return(t);
    }
    t = m_173(u_17, t);
  }
  f_168 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_168, f_95, e_168);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm s_168 = NULL,t_168 = NULL,u_168 = NULL,v_168 = NULL,w_168 = NULL,x_168 = NULL,y_168 = NULL;
  u_168 = t;
  if(match_cons(t, sym__2))
    {
      v_168 = ATgetArgument(t, 0);
      w_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_168;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_168 = ATgetFirst((ATermList) t);
      y_168 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_168;
  if(match_cons(t, sym__2))
    {
      s_168 = ATgetArgument(t, 0);
      t_168 = ATgetArgument(t, 1);
      {
        ATerm v_65 = t;
        int w_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_168;
            if((v_168 != t))
              {
                _fail(t);
              }
            t = t_168;
            LocalPopChoice(w_65);
          }
        else
          {
            t = v_65;
            t = (ATerm) ATmakeAppl(sym__2, v_168, y_168);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, v_168, y_168);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm s_164 (ATerm), ATerm t)
{
  static ATerm b_170 (ATerm t);
  static ATerm b_170 (ATerm t)
  {
    ATerm x_65 = t;
    int y_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_164(t);
        LocalPopChoice(y_65);
      }
    else
      {
        t = x_65;
        {
          ATerm y_169 = NULL,z_169 = NULL,a_170 = NULL;
          static ATerm v_17 (ATerm t);
          static ATerm v_17 (ATerm t)
          {
            ATerm e_84 = NULL;
            e_84 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_84, not_null(a_170));
            t = b_170(t);
            return(t);
          }
          y_169 = t;
          if(match_cons(t, sym__2))
            {
              z_169 = ATgetArgument(t, 0);
              if(((a_170 != NULL) && (a_170 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                a_170 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_169;
          t = SRTS_all(v_17, t);
        }
      }
    return(t);
  }
  t = b_170(t);
  return(t);
}
ATerm rename_4_0 (ATerm g_173 (ATerm (ATerm), ATerm), ATerm h_173 (ATerm), ATerm i_173 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm j_173 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm f_170 = NULL;
  static ATerm u_170 (ATerm t);
  static ATerm u_170 (ATerm t)
  {
    static ATerm w_17 (ATerm t);
    static ATerm w_17 (ATerm t)
    {
      ATerm o_170 = NULL,p_170 = NULL,q_170 = NULL;
      o_170 = t;
      if(match_cons(t, sym__2))
        {
          p_170 = ATgetArgument(t, 0);
          q_170 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm z_65 = t;
        int a_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_17 (ATerm t);
            static ATerm x_17 (ATerm t)
            {
              ATerm t_170 = NULL;
              t_170 = t;
              t = (ATerm) ATmakeAppl(sym__2, t_170, q_170);
              t = lookup_0_0(t);
              return(t);
            }
            t = p_170;
            t = g_173(x_17, t);
            LocalPopChoice(a_66);
          }
        else
          {
            t = z_65;
            {
              ATerm m_84 = NULL,n_84 = NULL,o_84 = NULL;
              t = o_170;
              t = g_13(h_173, j_173, p_170, q_170, t);
              if(match_cons(t, sym__3))
                {
                  m_84 = ATgetArgument(t, 0);
                  n_84 = ATgetArgument(t, 1);
                  o_84 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = f_13(u_170, i_173, m_84, n_84, o_84, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(w_17, t);
    return(t);
  }
  f_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_170, (ATerm) ATempty);
  t = u_170(t);
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm b_66 = t;
  int c_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_66);
    }
  else
    {
      t = b_66;
      {
        ATerm e_66 = t;
        int f_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_171 = NULL,b_171 = NULL,c_171 = NULL,d_171 = NULL;
            if(match_cons(t, sym_SDefT_4))
              {
                a_171 = ATgetArgument(t, 0);
                b_171 = ATgetArgument(t, 1);
                c_171 = ATgetArgument(t, 2);
                d_171 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = c_171;
            t = map_1_0(z_17, t);
            LocalPopChoice(f_66);
          }
        else
          {
            t = e_66;
            {
              ATerm g_66 = t;
              int h_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Bind8_0_0(t);
                  LocalPopChoice(h_66);
                }
              else
                {
                  t = g_66;
                  t = dynrule_targs_1_0(a_18, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm k_171 = NULL;
  ATerm i_66 = t;
  int j_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_171 = ATgetArgument(t, 0);
          {
            ATerm k_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_66);
      t = k_171;
    }
  else
    {
      t = i_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_171 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_171;
    }
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = map_1_0(c_18, t);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm p_171 = NULL;
  ATerm l_66 = t;
  int m_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_171 = ATgetArgument(t, 0);
          {
            ATerm n_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_66);
      t = p_171;
    }
  else
    {
      t = l_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_171 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_171;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, y_17, tboundin_3_0, tpaste_1_0, t);
  t = srename_0_0(t);
  return(t);
}
static ATerm m_13 (ATerm s_46, ATerm t_46, ATerm t)
{
  ATerm s_171 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_46, t_46);
  t = e_14(s_46, t_46, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_171 = ATgetFirst((ATermList) t);
      {
        ATerm p_66 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_171;
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm y_172 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      y_172 = ATgetArgument(t, 0);
      {
        ATerm q_66 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_172;
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm z_172 = NULL,b_173 = NULL,c_173 = NULL,d_173 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      b_173 = ATgetArgument(t, 0);
      d_173 = ATgetArgument(t, 1);
      z_172 = ATgetArgument(t, 2);
      t = b_173;
      if(match_cons(t, sym_SVar_1))
        {
          c_173 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_173;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_172;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_173;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          b_173 = ATgetArgument(t, 0);
          d_173 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_173;
      if(match_cons(t, sym_SVar_1))
        {
          c_173 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_173;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = c_173;
    }
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm q_173 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      q_173 = ATgetArgument(t, 0);
      {
        ATerm r_66 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = q_173;
  return(t);
}
static ATerm l_18 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_66 = ATgetArgument(t, 0);
      if(((ATgetType(s_66) != AT_LIST) || !(ATisEmpty(s_66))))
        _fail(t);
      {
        ATerm t_66 = ATgetArgument(t, 1);
        if(((ATgetType(t_66) != AT_LIST) || !(ATisEmpty(t_66))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm t_173 = NULL,u_173 = NULL,v_173 = NULL,w_173 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_66 = ATgetArgument(t, 0);
      if(((ATgetType(u_66) == AT_LIST) && !(ATisEmpty(u_66))))
        {
          t_173 = ATgetFirst((ATermList) u_66);
          u_173 = (ATerm) ATgetNext((ATermList) u_66);
        }
      else
        _fail(t);
      {
        ATerm v_66 = ATgetArgument(t, 1);
        if(((ATgetType(v_66) == AT_LIST) && !(ATisEmpty(v_66))))
          {
            v_173 = ATgetFirst((ATermList) v_66);
            w_173 = (ATerm) ATgetNext((ATermList) v_66);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_173, v_173), (ATerm) ATmakeAppl(sym__2, u_173, w_173));
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm x_173 = NULL,y_173 = NULL;
  if(match_cons(t, sym__2))
    {
      x_173 = ATgetArgument(t, 0);
      y_173 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_173), x_173);
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm z_173 = NULL,a_174 = NULL;
  if(match_cons(t, sym__2))
    {
      z_173 = ATgetArgument(t, 0);
      a_174 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_173), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_174)));
  return(t);
}
static ATerm r_18 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm d_172 = NULL,e_172 = NULL,j_172 = NULL,k_172 = NULL,l_172 = NULL,m_172 = NULL,r_172 = NULL,s_172 = NULL,t_172 = NULL,u_172 = NULL,w_172 = NULL,x_172 = NULL,x_84 = NULL,y_84 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm w_66 = ATgetArgument(t, 0);
      if(match_cons(w_66, sym_SVar_1))
        {
          j_172 = ATgetArgument(w_66, 0);
        }
      else
        _fail(t);
      l_172 = ATgetArgument(t, 1);
      t_172 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_172), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  x_84 = t;
  t = term_x_66;
  y_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_66, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_172), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)));
  t = m_13(y_84, x_84, t);
  if(match_cons(t, sym_Defined_4))
    {
      ATerm y_66 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_66) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      d_172 = ATgetArgument(t, 1);
      e_172 = ATgetArgument(t, 2);
      s_172 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, j_172, d_172, s_172, e_172);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((j_172 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_172 = ATgetArgument(t, 1);
      {
        ATerm z_66 = ATgetArgument(t, 2);
      }
      m_172 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = k_172;
  t = map_1_0(d_18, t);
  x_172 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_172, l_172, m_172);
  t = substitute_2_0(h_18, _id, t);
  r_172 = t;
  t = s_172;
  t = map_1_0(k_18, t);
  u_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_172, u_172);
  t = genzip_4_0(l_18, m_18, p_18, q_18, t);
  w_172 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_172, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_172), r_172));
  t = downup_1_0(r_18, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm s_18 (ATerm t)
{
  ATerm k_174 = NULL,l_174 = NULL,m_174 = NULL;
  k_174 = t;
  t = term_x_40;
  l_174 = t;
  t = (ATerm) ATinsert(ATempty, term_a_67);
  m_174 = t;
  t = SSL_printnl(l_174, m_174);
  t = k_174;
  return(t);
}
static ATerm t_18 (ATerm t)
{
  t = debug_1_0(u_18, t);
  return(t);
}
static ATerm u_18 (ATerm t)
{
  t = term_b_67;
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm u_174 = NULL,v_174 = NULL,a_175 = NULL;
  u_174 = t;
  t = term_x_40;
  v_174 = t;
  t = (ATerm) ATinsert(ATempty, term_c_67);
  a_175 = t;
  t = SSL_printnl(v_174, a_175);
  t = u_174;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm i_174 = NULL,j_174 = NULL;
  j_174 = t;
  t = new_0_0(t);
  i_174 = t;
  {
    ATerm e_67 = t;
    int f_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_67, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_174), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(f_67);
      }
    else
      {
        t = e_67;
        t = if_verbose2_1_0(s_18, t);
        _fail(t);
      }
  }
  {
    ATerm i_67 = t;
    int j_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_174 = NULL,o_174 = NULL,p_174 = NULL,q_174 = NULL,r_174 = NULL,s_174 = NULL,t_174 = NULL;
        n_174 = t;
        if(match_cons(t, sym_LChoice_2))
          {
            o_174 = ATgetArgument(t, 0);
            t_174 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_174;
        if(match_cons(t, sym_CallT_3))
          {
            p_174 = ATgetArgument(t, 0);
            r_174 = ATgetArgument(t, 1);
            s_174 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = p_174;
        if(match_cons(t, sym_SVar_1))
          {
            q_174 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_174;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_174;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_174;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        t = q_174;
        if((i_174 != t))
          {
            _fail(t);
          }
        t = n_174;
        LocalPopChoice(j_67);
      }
    else
      {
        t = i_67;
        t = if_verbose1_1_0(t_18, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(v_18, t);
  t = j_174;
  return(t);
}
ATerm check_library_definitions_0_0 (ATerm t)
{
  t = check_that_try_is_try_0_0(t);
  t = check_that_innermost_is_innermost_0_0(t);
  t = check_that_bottomup_is_bottomup_0_0(t);
  return(t);
}
static ATerm n_13 (ATerm u_148 (ATerm), ATerm y_44, ATerm w_44, ATerm t)
{
  ATerm b_175 = NULL,c_175 = NULL,d_175 = NULL,e_175 = NULL,f_175 = NULL,g_175 = NULL,h_175 = NULL,i_175 = NULL;
  e_175 = t;
  t = u_148(t);
  b_175 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_175, y_44, w_44);
  t = f_14(b_175, y_44, w_44, t);
  {
    ATerm k_67 = t;
    int l_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_175 = NULL;
        t = term_r_35;
        j_175 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_175, term_r_35);
        t = e_14(b_175, j_175, t);
        {
          ATerm m_67 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_67;
            }
        }
        LocalPopChoice(l_67);
      }
    else
      {
        t = k_67;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_175 = ATgetFirst((ATermList) t);
      d_175 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, b_175, term_r_35, (ATerm) ATinsert(CheckATermList(d_175), (ATerm) ATinsert(CheckATermList(c_175), y_44)));
  t = lookup_table_0_1(b_175, t);
  i_175 = t;
  t = term_r_35;
  f_175 = t;
  t = (ATerm) ATinsert(CheckATermList(d_175), (ATerm) ATinsert(CheckATermList(c_175), y_44));
  g_175 = t;
  t = i_175;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(f_175, g_175, h_175, t);
  t = e_175;
  return(t);
}
static ATerm w_18 (ATerm t)
{
  t = term_x_66;
  return(t);
}
static ATerm o_13 (ATerm n_25, ATerm o_25, ATerm q_25, ATerm p_25, ATerm t)
{
  ATerm k_175 = NULL,l_175 = NULL,m_175 = NULL;
  k_175 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_25), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  l_175 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_4, term_n_67, o_25, p_25, q_25);
  m_175 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_25), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_n_67, o_25, p_25, q_25));
  t = n_13(w_18, l_175, m_175, t);
  t = k_175;
  return(t);
}
ATerm map_1_0 (ATerm w_154 (ATerm), ATerm t)
{
  static ATerm b_176 (ATerm t);
  static ATerm b_176 (ATerm t)
  {
    ATerm y_175 = NULL,z_175 = NULL,a_176 = NULL;
    y_175 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_175;
      }
    else
      {
        ATerm e_85 = NULL,h_85 = NULL,i_85 = NULL,h_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_175 = ATgetFirst((ATermList) t);
            a_176 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_175);
        e_85 = t;
        t = z_175;
        t = w_154(t);
        h_85 = t;
        t = a_176;
        t = b_176(t);
        i_85 = t;
        t = (ATerm) ATinsert(CheckATermList(i_85), h_85);
        h_30 = t;
        t = SSLsetAnnotations(h_30, e_85);
      }
    return(t);
  }
  t = b_176(t);
  return(t);
}
ATerm Cons_2_0 (ATerm s_114 (ATerm), ATerm t_114 (ATerm), ATerm t)
{
  ATerm d_176 = NULL,e_176 = NULL,f_176 = NULL,g_176 = NULL,h_176 = NULL,i_176 = NULL,j_30 = NULL;
  i_176 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_176 = ATgetFirst((ATermList) t);
      f_176 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_176);
  d_176 = t;
  t = e_176;
  t = s_114(t);
  g_176 = t;
  t = f_176;
  t = t_114(t);
  h_176 = t;
  t = (ATerm) ATinsert(CheckATermList(h_176), g_176);
  j_30 = t;
  t = SSLsetAnnotations(j_30, d_176);
  return(t);
}
static ATerm p_13 (ATerm k_36, ATerm l_36, ATerm t)
{
  ATerm j_176 = NULL;
  t = SSL_fputc(k_36, l_36);
  j_176 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_176);
  return(t);
}
static ATerm q_13 (ATerm b_42, ATerm c_42, ATerm t)
{
  ATerm k_176 = NULL;
  t = SSL_write_term_to_stream_text(b_42, c_42);
  k_176 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_176);
  return(t);
}
static ATerm t_13 (ATerm i_148 (ATerm), ATerm i_371, ATerm h_42, ATerm t)
{
  ATerm l_176 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, i_371, term_o_67);
  t = y_13(t);
  l_176 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_176, h_42);
  t = i_148(t);
  t = fclose_0_0(t);
  t = h_42;
  return(t);
}
static ATerm r_13 (ATerm x_41, ATerm y_41, ATerm t)
{
  ATerm m_176 = NULL;
  t = SSL_write_term_to_stream_baf(x_41, y_41);
  m_176 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_176);
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm t_176 = NULL,u_176 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_67 = ATgetArgument(t, 0);
      if(match_cons(p_67, sym_Stream_1))
        {
          t_176 = ATgetArgument(p_67, 0);
        }
      else
        _fail(t);
      u_176 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_13(t_176, u_176, t);
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm v_176 = NULL,w_176 = NULL,x_176 = NULL,y_176 = NULL,z_176 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_67 = ATgetArgument(t, 0);
      if(match_cons(q_67, sym_Stream_1))
        {
          y_176 = ATgetArgument(q_67, 0);
        }
      else
        _fail(t);
      z_176 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_13(y_176, z_176, t);
  v_176 = t;
  t = term_z_24;
  w_176 = t;
  t = v_176;
  if(match_cons(t, sym_Stream_1))
    {
      x_176 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_z_24, v_176);
  t = p_13(w_176, x_176, t);
  return(t);
}
ATerm output_1_0 (ATerm m_169 (ATerm), ATerm t)
{
  ATerm n_176 = NULL,o_176 = NULL;
  t = m_169(t);
  o_176 = t;
  {
    ATerm r_67 = t;
    int s_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_176 = NULL,q_176 = NULL;
        t = term_s_23;
        p_176 = t;
        t = term_t_67;
        q_176 = t;
        t = term_u_67;
        t = e_14(p_176, q_176, t);
        LocalPopChoice(s_67);
      }
    else
      {
        t = r_67;
        t = term_v_67;
      }
  }
  n_176 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_176, o_176);
  {
    ATerm w_67 = t;
    int x_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_176 = NULL,s_176 = NULL;
        t = term_s_23;
        r_176 = t;
        t = term_y_67;
        s_176 = t;
        t = term_z_67;
        t = e_14(r_176, s_176, t);
        t = (ATerm) ATmakeAppl(sym__2, n_176, o_176);
        LocalPopChoice(x_67);
        if(match_cons(t, sym__2))
          {
            ATerm a_68 = ATgetArgument(t, 0);
            ATerm b_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_13(x_18, n_176, o_176, t);
      }
    else
      {
        t = w_67;
        if(match_cons(t, sym__2))
          {
            ATerm c_68 = ATgetArgument(t, 0);
            ATerm d_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_13(y_18, n_176, o_176, t);
      }
  }
  return(t);
}
static ATerm n_177 (ATerm h_177, ATerm t)
{
  t = SSL_fclose(h_177);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm k_177 = NULL,l_177 = NULL;
  l_177 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_177 = ATgetArgument(t, 0);
      {
        ATerm f_68 = t;
        int g_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_177);
            LocalPopChoice(g_68);
          }
        else
          {
            t = f_68;
            t = n_177(l_177, t);
          }
      }
    }
  else
    {
      t = n_177(l_177, t);
    }
  return(t);
}
static ATerm u_13 (ATerm d_42, ATerm t)
{
  t = SSL_read_term_from_stream(d_42);
  return(t);
}
static ATerm w_13 (ATerm n_34, ATerm o_34, ATerm t)
{
  t = SSL_strcat(n_34, o_34);
  return(t);
}
static ATerm x_13 (ATerm m_36, ATerm n_36, ATerm t)
{
  ATerm o_177 = NULL;
  t = SSL_fopen(m_36, n_36);
  o_177 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_177);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm p_177 = NULL;
  t = SSL_stdin_stream();
  p_177 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_177);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_177 = NULL;
  t = SSL_stdout_stream();
  s_177 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_177);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_177 = NULL;
  t = SSL_stderr_stream();
  t_177 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_177);
  return(t);
}
static ATerm s_179 (ATerm z_177, ATerm t)
{
  ATerm a_178 = NULL;
  t = SSL_explode_term(z_177);
  if(match_cons(t, sym__2))
    {
      ATerm h_68 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_68) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_68 = ATgetArgument(t, 1);
        if(((ATgetType(i_68) == AT_LIST) && !(ATisEmpty(i_68))))
          {
            a_178 = ATgetFirst((ATermList) i_68);
            {
              ATerm j_68 = (ATerm) ATgetNext((ATermList) i_68);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_178;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_178;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_178;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_178;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_179 (ATerm d_178, ATerm e_178, ATerm f_178, ATerm t)
{
  ATerm g_178 = NULL,h_178 = NULL,i_178 = NULL,t_178 = NULL,l_30 = NULL;
  t = SSLgetAnnotations(f_178);
  i_178 = t;
  t = d_178;
  if(match_cons(t, sym_Path_1))
    {
      t_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_178, e_178);
  l_30 = t;
  t = SSLsetAnnotations(l_30, i_178);
  if(match_cons(t, sym__2))
    {
      g_178 = ATgetArgument(t, 0);
      h_178 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_13(g_178, h_178, t);
  return(t);
}
static ATerm u_179 (ATerm d_179, ATerm e_179, ATerm f_179, ATerm t)
{
  ATerm g_179 = NULL,h_179 = NULL,i_179 = NULL,l_179 = NULL,m_30 = NULL;
  t = SSLgetAnnotations(f_179);
  i_179 = t;
  t = SSL_is_string(d_179);
  l_179 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_179, e_179);
  m_30 = t;
  t = SSLsetAnnotations(m_30, i_179);
  if(match_cons(t, sym__2))
    {
      g_179 = ATgetArgument(t, 0);
      h_179 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_13(g_179, h_179, t);
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm p_179 = NULL,q_179 = NULL,r_179 = NULL;
  p_179 = t;
  if(match_cons(t, sym__2))
    {
      q_179 = ATgetArgument(t, 0);
      r_179 = ATgetArgument(t, 1);
      {
        ATerm m_68 = t;
        int p_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_179(p_179, t);
            LocalPopChoice(p_68);
          }
        else
          {
            t = m_68;
            {
              ATerm r_68 = t;
              int s_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_179(q_179, r_179, p_179, t);
                  LocalPopChoice(s_68);
                }
              else
                {
                  t = r_68;
                  t = u_179(q_179, r_179, p_179, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_179(p_179, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_179 = NULL,x_179 = NULL,y_179 = NULL,d_180 = NULL;
  d_180 = t;
  {
    ATerm u_68 = t;
    int x_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_180, term_z_68);
        t = y_13(t);
        LocalPopChoice(x_68);
      }
    else
      {
        t = u_68;
        {
          ATerm z_85 = NULL,a_86 = NULL;
          t = term_c_69;
          a_86 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_69, d_180);
          t = w_13(a_86, d_180, t);
          z_85 = t;
          t = SSL_perror(z_85);
          _fail(t);
        }
      }
  }
  x_179 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_13(y_179, t);
  w_179 = t;
  t = x_179;
  t = fclose_0_0(t);
  t = w_179;
  return(t);
}
ATerm input_1_0 (ATerm n_169 (ATerm), ATerm t)
{
  ATerm d_69 = t;
  int e_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_180 = NULL,h_180 = NULL;
      t = term_s_23;
      g_180 = t;
      t = term_f_69;
      h_180 = t;
      t = term_g_69;
      t = e_14(g_180, h_180, t);
      LocalPopChoice(e_69);
    }
  else
    {
      t = d_69;
      t = term_h_69;
    }
  t = ReadFromFile_0_0(t);
  t = n_169(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm i_180 = NULL,j_180 = NULL;
  t = term_s_23;
  i_180 = t;
  t = term_l_69;
  j_180 = t;
  t = term_m_69;
  t = e_14(i_180, j_180, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_180 = NULL,m_180 = NULL,n_180 = NULL;
  l_180 = t;
  {
    ATerm n_69 = t;
    int o_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_180;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_69 = ATgetFirst((ATermList) t);
                ATerm q_69 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_180;
          }
        LocalPopChoice(o_69);
      }
    else
      {
        t = n_69;
        t = (ATerm) ATinsert(ATempty, l_180);
      }
  }
  m_180 = t;
  t = term_v_67;
  n_180 = t;
  t = SSL_printnl(n_180, m_180);
  t = l_180;
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm s_180 = NULL,t_180 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_180 = ATgetFirst((ATermList) t);
      t_180 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_180 = NULL,y_180 = NULL;
        static ATerm z_18 (ATerm t);
        static ATerm z_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(x_180)), not_null(y_180));
          return(t);
        }
        t = t_180;
        t = r_0(t);
        if(((x_180 != NULL) && (x_180 != t)))
          _fail(t);
        else
          x_180 = t;
        t = s_180;
        t = p_0(t);
        if(((y_180 != NULL) && (y_180 != t)))
          _fail(t);
        else
          y_180 = t;
        t = t_180;
        t = reverse_acc_2_0(p_0, z_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_69;
      t = r_0(t);
    }
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm g_181 = NULL,h_181 = NULL,i_181 = NULL,p_30 = NULL;
  i_181 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_181);
  g_181 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_181);
  p_30 = t;
  t = SSLsetAnnotations(p_30, g_181);
  return(t);
}
static ATerm g_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_19 (ATerm t)
{
  ATerm m_181 = NULL;
  m_181 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_181), term_s_69);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm n_172 (ATerm), ATerm o_172 (ATerm), ATerm t)
{
  ATerm c_181 = NULL,d_181 = NULL;
  ATerm t_69 = t;
  int u_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_181 = NULL,f_181 = NULL;
      t = term_s_23;
      e_181 = t;
      t = term_l_69;
      f_181 = t;
      t = term_m_69;
      t = e_14(e_181, f_181, t);
      LocalPopChoice(u_69);
    }
  else
    {
      t = t_69;
      t = fetch_1_0(b_19, t);
    }
  {
    ATerm v_69 = t;
    int w_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_172(t);
        t = echo_0_0(t);
        LocalPopChoice(w_69);
      }
    else
      {
        t = v_69;
      }
  }
  t = term_y_69;
  t = echo_0_0(t);
  t = term_a_70;
  c_181 = t;
  t = term_b_70;
  d_181 = t;
  t = term_d_70;
  t = e_14(c_181, d_181, t);
  t = reverse_acc_2_0(_id, g_19, t);
  t = map_1_0(l_19, t);
  {
    ATerm g_70 = t;
    int j_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_181 = NULL;
        t = o_172(t);
        n_181 = t;
        t = (ATerm) ATinsert(CheckATermList(n_181), term_k_70);
        t = echo_0_0(t);
        LocalPopChoice(j_70);
      }
    else
      {
        t = g_70;
      }
  }
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm t_181 = NULL,u_181 = NULL,v_181 = NULL,r_30 = NULL;
  v_181 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_181);
  t_181 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_181);
  r_30 = t;
  t = SSLsetAnnotations(r_30, t_181);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_181 = NULL;
  q_181 = t;
  {
    ATerm l_70 = t;
    int s_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_181 = NULL,s_181 = NULL;
        t = term_s_23;
        r_181 = t;
        t = term_l_69;
        s_181 = t;
        t = term_m_69;
        t = e_14(r_181, s_181, t);
        LocalPopChoice(s_70);
      }
    else
      {
        t = l_70;
        t = fetch_1_0(m_19, t);
      }
  }
  t = q_181;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm n_19 (ATerm t)
{
  ATerm x_181 = NULL;
  x_181 = t;
  if(match_string(t, "-k"))
    {
      t = x_181;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = x_181;
    }
  return(t);
}
static ATerm q_19 (ATerm t)
{
  ATerm y_181 = NULL,z_181 = NULL,a_182 = NULL;
  y_181 = t;
  t = SSL_string_to_int(y_181);
  z_181 = t;
  t = term_a_71;
  a_182 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_71, z_181);
  t = h_14(a_182, z_181, t);
  t = y_181;
  return(t);
}
static ATerm v_19 (ATerm t)
{
  t = term_e_71;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_19, q_19, v_19, t);
  return(t);
}
static ATerm z_19 (ATerm t)
{
  ATerm c_182 = NULL;
  c_182 = t;
  if(match_string(t, "-S"))
    {
      t = c_182;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = c_182;
    }
  return(t);
}
static ATerm a_20 (ATerm t)
{
  ATerm d_182 = NULL,e_182 = NULL;
  t = term_c_24;
  d_182 = t;
  t = term_g_71;
  e_182 = t;
  t = term_j_71;
  t = h_14(d_182, e_182, t);
  t = term_k_71;
  return(t);
}
static ATerm b_20 (ATerm t)
{
  t = term_l_71;
  return(t);
}
static ATerm c_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_20 (ATerm t)
{
  ATerm f_182 = NULL,g_182 = NULL,h_182 = NULL;
  f_182 = t;
  t = SSL_string_to_int(f_182);
  g_182 = t;
  t = term_c_24;
  h_182 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_24, g_182);
  t = h_14(h_182, g_182, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, f_182);
  return(t);
}
static ATerm e_20 (ATerm t)
{
  t = term_m_71;
  return(t);
}
static ATerm k_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_20 (ATerm t)
{
  ATerm i_182 = NULL,j_182 = NULL;
  t = term_n_71;
  i_182 = t;
  t = term_r_69;
  j_182 = t;
  t = term_p_71;
  t = h_14(i_182, j_182, t);
  t = term_q_71;
  return(t);
}
static ATerm n_20 (ATerm t)
{
  t = term_r_71;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_71 = t;
  int t_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_19, a_20, b_20, t);
      LocalPopChoice(t_71);
    }
  else
    {
      t = s_71;
      {
        ATerm v_71 = t;
        int g_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_20, d_20, e_20, t);
            LocalPopChoice(g_72);
          }
        else
          {
            t = v_71;
            t = Option_3_0(k_20, l_20, n_20, t);
          }
      }
    }
  return(t);
}
static ATerm h_14 (ATerm o_93, ATerm p_93, ATerm t)
{
  ATerm k_182 = NULL,l_182 = NULL;
  t = term_s_23;
  k_182 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_23, o_93, p_93);
  t = lookup_table_0_1(k_182, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(o_93, p_93, l_182, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_23, o_93, p_93);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_182 = NULL,q_182 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_182 = NULL,s_182 = NULL,t_182 = NULL;
      t = term_r_69;
      t = g_0(t);
      r_182 = t;
      t = term_a_70;
      s_182 = t;
      t = term_b_70;
      t_182 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_70, term_b_70, r_182);
      t = f_14(s_182, t_182, r_182, t);
      _fail(t);
    }
  else
    {
      ATerm w_182 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_182 = ATgetFirst((ATermList) t);
          q_182 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_182;
      t = d_0(t);
      t = term_r_69;
      t = f_0(t);
      w_182 = t;
      t = (ATerm) ATinsert(CheckATermList(q_182), w_182);
    }
  return(t);
}
static ATerm o_20 (ATerm t)
{
  ATerm y_182 = NULL;
  y_182 = t;
  if(match_string(t, "-o"))
    {
      t = y_182;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_182;
    }
  return(t);
}
static ATerm r_20 (ATerm t)
{
  ATerm z_182 = NULL,a_183 = NULL;
  z_182 = t;
  t = term_t_67;
  a_183 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_67, z_182);
  t = h_14(a_183, z_182, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_182);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  t = term_h_72;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_20, r_20, s_20, t);
  return(t);
}
static ATerm f_14 (ATerm c_46, ATerm d_46, ATerm b_46, ATerm t)
{
  ATerm c_183 = NULL,d_183 = NULL,e_183 = NULL,f_183 = NULL,g_183 = NULL;
  c_183 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_46, d_46);
  {
    ATerm i_72 = t;
    int k_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_72 = ATgetArgument(t, 0);
            ATerm m_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, c_46, d_46);
        t = e_14(c_46, d_46, t);
        LocalPopChoice(k_72);
      }
    else
      {
        t = i_72;
        t = (ATerm) ATempty;
      }
  }
  d_183 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_46, d_46, (ATerm) ATinsert(CheckATermList(d_183), b_46));
  t = lookup_table_0_1(c_46, t);
  g_183 = t;
  t = (ATerm) ATinsert(CheckATermList(d_183), b_46);
  e_183 = t;
  t = g_183;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_183 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(d_46, e_183, f_183, t);
  t = c_183;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm n_183 = NULL,o_183 = NULL,p_183 = NULL,q_183 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_183 = NULL,s_183 = NULL,t_183 = NULL;
      t = term_r_69;
      t = n_0(t);
      r_183 = t;
      t = term_a_70;
      s_183 = t;
      t = term_b_70;
      t_183 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_70, term_b_70, r_183);
      t = f_14(s_183, t_183, r_183, t);
      _fail(t);
    }
  else
    {
      ATerm x_183 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_183 = ATgetFirst((ATermList) t);
          o_183 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_183;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_183 = ATgetFirst((ATermList) t);
          q_183 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_183;
      t = j_0(t);
      t = p_183;
      t = l_0(t);
      x_183 = t;
      t = (ATerm) ATinsert(CheckATermList(q_183), x_183);
    }
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm z_183 = NULL;
  z_183 = t;
  if(match_string(t, "-i"))
    {
      t = z_183;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_183;
    }
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm a_184 = NULL,b_184 = NULL;
  a_184 = t;
  t = term_f_69;
  b_184 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_69, a_184);
  t = h_14(b_184, a_184, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_184);
  return(t);
}
static ATerm k_21 (ATerm t)
{
  t = term_n_72;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_20, j_21, k_21, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_184 = NULL,d_184 = NULL,e_184 = NULL,f_184 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_69;
  t = whoami_0_0(t);
  c_184 = t;
  t = term_x_40;
  e_184 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_72), c_184);
  f_184 = t;
  t = SSL_printnl(e_184, f_184);
  t = term_x_72;
  d_184 = t;
  t = SSL_exit(d_184);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm g_184 = NULL,h_184 = NULL;
  t = term_s_23;
  g_184 = t;
  t = term_l_69;
  h_184 = t;
  t = term_m_69;
  t = e_14(g_184, h_184, t);
  return(t);
}
static ATerm z_13 (ATerm k_43, ATerm l_43, ATerm t)
{
  ATerm z_72 = t;
  int c_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_43, l_43);
      LocalPopChoice(c_73);
    }
  else
    {
      t = z_72;
      t = SSL_addr(k_43, l_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_162 (ATerm), ATerm j_162 (ATerm), ATerm t)
{
  ATerm j_184 = NULL,k_184 = NULL,l_184 = NULL;
  j_184 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_184;
      t = i_162(t);
    }
  else
    {
      ATerm o_184 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_184 = ATgetFirst((ATermList) t);
          l_184 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_184;
      t = foldr_2_0(i_162, j_162, t);
      o_184 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_184, o_184);
      t = j_162(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_21 (ATerm t)
{
  t = term_g_71;
  return(t);
}
static ATerm m_21 (ATerm t)
{
  ATerm o_86 = NULL,p_86 = NULL;
  if(match_cons(t, sym__2))
    {
      o_86 = ATgetArgument(t, 0);
      p_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_13(o_86, p_86, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm r_184 = NULL,c_86 = NULL,d_86 = NULL;
  t = times_0_0(t);
  d_86 = t;
  t = SSL_explode_term(d_86);
  if(match_cons(t, sym__2))
    {
      ATerm d_73 = ATgetArgument(t, 0);
      c_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_86;
  t = foldr_2_0(l_21, m_21, t);
  r_184 = t;
  t = SSL_TicksToSeconds(r_184);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_185 = NULL,d_185 = NULL,e_185 = NULL;
  c_185 = t;
  if(match_cons(t, sym__2))
    {
      d_185 = ATgetArgument(t, 0);
      e_185 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_73 = t;
    int h_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_185;
        if((d_185 != t))
          {
            _fail(t);
          }
        t = c_185;
        LocalPopChoice(h_73);
      }
    else
      {
        t = e_73;
        t = (ATerm) ATmakeAppl(sym__2, d_185, e_185);
        {
          ATerm i_73 = t;
          int k_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_185, e_185);
              LocalPopChoice(k_73);
            }
          else
            {
              t = i_73;
              t = SSL_gtr(d_185, e_185);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_185, e_185);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_179 (ATerm), ATerm t)
{
  ATerm i_185 = NULL;
  i_185 = t;
  {
    ATerm m_73 = t;
    int n_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_185 = NULL,l_185 = NULL,m_185 = NULL;
        t = term_s_23;
        l_185 = t;
        t = term_c_24;
        m_185 = t;
        t = term_d_24;
        t = e_14(l_185, m_185, t);
        k_185 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_185, term_x_72);
        t = geq_0_0(t);
        t = i_185;
        t = m_179(t);
        LocalPopChoice(n_73);
      }
    else
      {
        t = m_73;
        t = i_185;
      }
  }
  return(t);
}
static ATerm v_21 (ATerm t)
{
  ATerm o_185 = NULL,p_185 = NULL,r_185 = NULL,s_185 = NULL;
  t = run_time_0_0(t);
  o_185 = t;
  t = term_r_69;
  t = whoami_0_0(t);
  p_185 = t;
  t = term_x_40;
  r_185 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_73), o_185), term_o_73), p_185);
  s_185 = t;
  t = SSL_printnl(r_185, s_185);
  t = (ATerm) ATmakeAppl(sym__2, term_x_40, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_73), o_185), term_o_73), p_185));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_21, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_185 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_71;
  t_185 = t;
  t = SSL_exit(t_185);
  return(t);
}
static ATerm i_14 (ATerm i_51, ATerm j_51, ATerm k_51, ATerm t)
{
  ATerm u_185 = NULL;
  t = SSL_hashtable_put(k_51, i_51, j_51);
  u_185 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_185);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_48, ATerm t)
{
  ATerm d_186 = NULL;
  t = table_hashtable_0_0(t);
  d_186 = t;
  {
    ATerm q_73 = t;
    int u_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_87 = NULL;
        t = d_186;
        if(match_cons(t, sym_Hashtable_1))
          {
            i_87 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_14(c_48, i_87, t);
        LocalPopChoice(u_73);
      }
    else
      {
        t = q_73;
        {
          ATerm r_87 = NULL;
          t = c_48;
          t = table_create_0_0(t);
          t = d_186;
          if(match_cons(t, sym_Hashtable_1))
            {
              r_87 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_14(c_48, r_87, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_51, ATerm r_51, ATerm t)
{
  ATerm g_186 = NULL;
  t = SSL_hashtable_create(q_51, r_51);
  g_186 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_186);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm h_186 = NULL,i_186 = NULL,j_186 = NULL,l_186 = NULL,m_186 = NULL;
  h_186 = t;
  t = term_v_73;
  l_186 = t;
  t = term_e_74;
  m_186 = t;
  t = h_186;
  t = new_hashtable_0_2(l_186, m_186, t);
  i_186 = t;
  t = h_186;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_186 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(h_186, i_186, j_186, t);
  t = h_186;
  return(t);
}
static ATerm b_14 (ATerm n_51, ATerm o_51, ATerm t)
{
  ATerm n_186 = NULL;
  t = SSL_hashtable_remove(o_51, n_51);
  n_186 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_186);
  return(t);
}
static ATerm c_14 (ATerm s_51, ATerm t)
{
  ATerm o_186 = NULL;
  t = SSL_hashtable_destroy(s_51);
  o_186 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_186);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm p_186 = NULL;
  t = SSL_table_hashtable();
  p_186 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_186);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm q_186 = NULL,r_186 = NULL,s_186 = NULL,t_186 = NULL;
  q_186 = t;
  t = table_hashtable_0_0(t);
  r_186 = t;
  t = lookup_table_0_1(q_186, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_186 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14(t_186, t);
  t = r_186;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_186 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_14(q_186, s_186, t);
  t = q_186;
  return(t);
}
ATerm fetch_1_0 (ATerm e_155 (ATerm), ATerm t)
{
  static ATerm q_187 (ATerm t);
  static ATerm q_187 (ATerm t)
  {
    ATerm n_187 = NULL,o_187 = NULL,p_187 = NULL;
    n_187 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_187 = ATgetFirst((ATermList) t);
        p_187 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_74 = t;
      int k_74 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_87 = NULL,a_88 = NULL,g_31 = NULL;
          t = SSLgetAnnotations(n_187);
          x_87 = t;
          t = o_187;
          t = e_155(t);
          a_88 = t;
          t = (ATerm) ATinsert(CheckATermList(p_187), a_88);
          g_31 = t;
          t = SSLsetAnnotations(g_31, x_87);
          LocalPopChoice(k_74);
        }
      else
        {
          t = j_74;
          {
            ATerm j_88 = NULL,n_88 = NULL,i_31 = NULL;
            t = SSLgetAnnotations(n_187);
            j_88 = t;
            t = p_187;
            t = q_187(t);
            n_88 = t;
            t = (ATerm) ATinsert(CheckATermList(n_88), o_187);
            i_31 = t;
            t = SSLsetAnnotations(i_31, j_88);
          }
        }
    }
    return(t);
  }
  t = q_187(t);
  return(t);
}
static ATerm j_14 (ATerm l_51, ATerm m_51, ATerm t)
{
  t = SSL_hashtable_get(m_51, l_51);
  return(t);
}
static ATerm e_14 (ATerm m_48, ATerm n_48, ATerm t)
{
  ATerm t_187 = NULL;
  t = lookup_table_0_1(m_48, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_187 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_14(n_48, t_187, t);
  return(t);
}
static ATerm a_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_22 (ATerm t)
{
  ATerm v_187 = NULL,w_187 = NULL;
  t = term_p_74;
  v_187 = t;
  t = term_r_69;
  w_187 = t;
  t = term_t_74;
  t = h_14(v_187, w_187, t);
  return(t);
}
static ATerm c_22 (ATerm t)
{
  t = term_v_74;
  return(t);
}
static ATerm e_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_22 (ATerm t)
{
  ATerm x_187 = NULL,y_187 = NULL,z_187 = NULL,a_188 = NULL;
  t = term_p_74;
  z_187 = t;
  t = term_r_69;
  a_188 = t;
  t = term_t_74;
  t = h_14(z_187, a_188, t);
  t = term_x_74;
  x_187 = t;
  t = term_r_69;
  y_187 = t;
  t = term_o_75;
  t = h_14(x_187, y_187, t);
  t = term_p_75;
  return(t);
}
static ATerm h_22 (ATerm t)
{
  t = term_q_75;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_75 = t;
  int s_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_22, b_22, c_22, t);
      LocalPopChoice(s_75);
    }
  else
    {
      t = r_75;
      t = Option_3_0(e_22, f_22, h_22, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm i_172 (ATerm), ATerm t)
{
  ATerm f_188 = NULL,g_188 = NULL,h_188 = NULL,i_188 = NULL,k_188 = NULL,l_188 = NULL,w_31 = NULL;
  f_188 = t;
  {
    ATerm t_75 = t;
    int u_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_75;
        t = i_172(t);
        LocalPopChoice(u_75);
      }
    else
      {
        t = t_75;
      }
  }
  t = f_188;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_188 = ATgetFirst((ATermList) t);
      i_188 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_188);
  g_188 = t;
  t = term_l_69;
  l_188 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_69, h_188);
  t = h_14(l_188, h_188, t);
  t = i_188;
  {
    static ATerm v_188 (ATerm t);
    static ATerm v_188 (ATerm t)
    {
      ATerm x_75 = t;
      int y_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_76 = t;
          int d_76 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_188 = NULL;
              o_188 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_188;
              LocalPopChoice(d_76);
            }
          else
            {
              t = c_76;
              t = i_172(t);
              t = Cons_2_0(_id, v_188, t);
            }
          LocalPopChoice(y_75);
        }
      else
        {
          t = x_75;
          {
            ATerm r_188 = NULL,s_188 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_188 = ATgetFirst((ATermList) t);
                s_188 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_188), (ATerm) ATmakeAppl(sym_Undefined_1, r_188));
          }
        }
      return(t);
    }
    t = v_188(t);
  }
  k_188 = t;
  t = (ATerm) ATinsert(CheckATermList(k_188), (ATerm) ATmakeAppl(sym_Program_1, h_188));
  w_31 = t;
  t = SSLsetAnnotations(w_31, g_188);
  return(t);
}
static ATerm s_22 (ATerm t)
{
  ATerm i_189 = NULL;
  i_189 = t;
  if(match_string(t, "--help"))
    {
      t = i_189;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_189;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_189;
        }
    }
  return(t);
}
static ATerm t_22 (ATerm t)
{
  ATerm j_189 = NULL,k_189 = NULL;
  t = term_e_76;
  j_189 = t;
  t = term_r_69;
  k_189 = t;
  t = term_f_76;
  t = h_14(j_189, k_189, t);
  t = term_g_76;
  return(t);
}
static ATerm u_22 (ATerm t)
{
  t = term_h_76;
  return(t);
}
static ATerm v_22 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm f_172 (ATerm), ATerm g_172 (ATerm), ATerm h_172 (ATerm), ATerm t)
{
  ATerm a_189 = NULL,b_189 = NULL,c_189 = NULL,d_189 = NULL,e_189 = NULL,f_189 = NULL,g_189 = NULL,h_189 = NULL;
  c_189 = t;
  t = term_a_70;
  d_189 = t;
  t = term_i_76;
  t = lookup_table_0_1(d_189, t);
  h_189 = t;
  t = term_b_70;
  e_189 = t;
  t = (ATerm) ATempty;
  f_189 = t;
  t = h_189;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_189 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(e_189, f_189, g_189, t);
  t = c_189;
  {
    static ATerm j_22 (ATerm t);
    static ATerm j_22 (ATerm t)
    {
      ATerm j_76 = t;
      int k_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_172(t);
          LocalPopChoice(k_76);
        }
      else
        {
          t = j_76;
          {
            ATerm l_76 = t;
            int n_76 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_22, t_22, u_22, t);
                LocalPopChoice(n_76);
              }
            else
              {
                t = l_76;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_22, t);
  }
  {
    ATerm o_76 = t;
    int p_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_189 = NULL;
        v_189 = t;
        {
          ATerm q_76 = t;
          int v_76 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_88 = NULL;
              t = v_189;
              {
                ATerm w_76 = t;
                int x_76 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_88 = NULL,x_88 = NULL;
                    t = term_s_23;
                    w_88 = t;
                    t = term_e_76;
                    x_88 = t;
                    t = term_y_76;
                    t = e_14(w_88, x_88, t);
                    LocalPopChoice(x_76);
                  }
                else
                  {
                    t = w_76;
                    t = fetch_1_0(v_22, t);
                  }
              }
              t = v_189;
              t = g_172(t);
              t = term_g_71;
              v_88 = t;
              t = SSL_exit(v_88);
              LocalPopChoice(v_76);
            }
          else
            {
              t = q_76;
              {
                ATerm b_89 = NULL,c_89 = NULL,e_89 = NULL;
                t = term_s_23;
                c_89 = t;
                t = term_p_74;
                e_89 = t;
                t = term_z_76;
                t = e_14(c_89, e_89, t);
                t = v_189;
                t = h_172(t);
                t = term_g_71;
                b_89 = t;
                t = SSL_exit(b_89);
              }
            }
        }
        LocalPopChoice(p_76);
      }
    else
      {
        t = o_76;
        {
          ATerm a_77 = t;
          int b_77 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_189 = NULL,x_189 = NULL,y_189 = NULL;
              static ATerm x_22 (ATerm t);
              static ATerm x_22 (ATerm t)
              {
                ATerm z_189 = NULL,a_190 = NULL,b_190 = NULL,b_32 = NULL;
                b_190 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_190 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_190);
                z_189 = t;
                t = a_190;
                if(((a_189 != NULL) && (a_189 != t)))
                  _fail(t);
                else
                  a_189 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_190);
                b_32 = t;
                t = SSLsetAnnotations(b_32, z_189);
                return(t);
              }
              t = fetch_1_0(x_22, t);
              t = term_x_40;
              x_189 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_189)), term_c_77);
              y_189 = t;
              t = SSL_printnl(x_189, y_189);
              t = (ATerm) ATmakeAppl(sym__2, term_x_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_189)), term_c_77));
              t = g_172(t);
              t = term_x_72;
              w_189 = t;
              t = SSL_exit(w_189);
              LocalPopChoice(b_77);
            }
          else
            {
              t = a_77;
            }
        }
      }
  }
  b_189 = t;
  t = term_a_70;
  t = table_destroy_0_0(t);
  t = b_189;
  return(t);
}
ATerm option_wrap_5_0 (ATerm g_169 (ATerm), ATerm h_169 (ATerm), ATerm i_169 (ATerm), ATerm j_169 (ATerm), ATerm k_169 (ATerm), ATerm t)
{
  ATerm g_190 = NULL,h_190 = NULL,i_190 = NULL,j_190 = NULL,k_190 = NULL;
  t = parse_options_3_0(g_169, h_169, i_169, t);
  g_190 = t;
  t = term_d_77;
  t = table_create_0_0(t);
  t = term_d_77;
  h_190 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_77, term_e_77, g_190);
  t = lookup_table_0_1(h_190, t);
  k_190 = t;
  t = term_e_77;
  i_190 = t;
  t = k_190;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_190 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(i_190, g_190, j_190, t);
  t = g_190;
  t = j_169(t);
  {
    ATerm f_77 = t;
    int h_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_169(t);
        t = report_success_0_0(t);
        LocalPopChoice(h_77);
      }
    else
      {
        t = f_77;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm a_23 (ATerm t)
{
  ATerm i_77 = t;
  int j_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(j_77);
    }
  else
    {
      t = i_77;
      {
        ATerm k_77 = t;
        int p_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(p_77);
          }
        else
          {
            t = k_77;
            {
              ATerm q_77 = t;
              int r_77 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(c_23, d_23, e_23, t);
                  LocalPopChoice(r_77);
                }
              else
                {
                  t = q_77;
                  {
                    ATerm s_77 = t;
                    int t_77 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(t_77);
                      }
                    else
                      {
                        t = s_77;
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
static ATerm b_23 (ATerm t)
{
  t = input_1_0(g_23, t);
  return(t);
}
static ATerm c_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm o_190 = NULL,p_190 = NULL;
  t = term_y_67;
  o_190 = t;
  t = term_r_69;
  p_190 = t;
  t = term_u_77;
  t = h_14(o_190, p_190, t);
  t = term_v_77;
  return(t);
}
static ATerm e_23 (ATerm t)
{
  t = term_w_77;
  return(t);
}
static ATerm g_23 (ATerm t)
{
  t = output_1_0(h_23, t);
  return(t);
}
static ATerm h_23 (ATerm t)
{
  ATerm x_77 = t;
  int z_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_191 = NULL,o_191 = NULL,r_89 = NULL,u_89 = NULL,v_89 = NULL,w_89 = NULL,x_89 = NULL,y_89 = NULL,z_89 = NULL,a_90 = NULL,b_90 = NULL,o_32 = NULL,n_32 = NULL,d_32 = NULL;
      n_191 = t;
      if(match_cons(t, sym_Specification_1))
        {
          o_191 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_191);
      r_89 = t;
      t = o_191;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_89 = ATgetFirst((ATermList) t);
          w_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_191);
      u_89 = t;
      t = v_89;
      if(match_cons(t, sym_Signature_1))
        {
          a_90 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_89);
      z_89 = t;
      t = (ATerm) ATmakeAppl(sym_Signature_1, a_90);
      d_32 = t;
      t = SSLsetAnnotations(d_32, z_89);
      b_90 = t;
      t = w_89;
      t = Cons_2_0(i_23, j_23, t);
      x_89 = t;
      t = (ATerm) ATinsert(CheckATermList(x_89), b_90);
      n_32 = t;
      t = SSLsetAnnotations(n_32, u_89);
      y_89 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, y_89);
      o_32 = t;
      t = SSLsetAnnotations(o_32, r_89);
      t = check_library_definitions_0_0(t);
      t = alltd_1_0(l_23, t);
      LocalPopChoice(z_77);
    }
  else
    {
      t = x_77;
      t = if_verbose2_1_0(m_23, t);
    }
  return(t);
}
static ATerm i_23 (ATerm t)
{
  ATerm e_90 = NULL,f_90 = NULL,g_90 = NULL,h_90 = NULL,g_32 = NULL;
  h_90 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_90 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_90);
  e_90 = t;
  t = f_90;
  t = map_1_0(k_23, t);
  g_90 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_90);
  g_32 = t;
  t = SSLsetAnnotations(g_32, e_90);
  return(t);
}
static ATerm j_23 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL,v_90 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      s_90 = ATgetArgument(t, 0);
      t_90 = ATgetArgument(t, 1);
      u_90 = ATgetArgument(t, 2);
      v_90 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = o_13(s_90, t_90, u_90, v_90, t);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  ATerm y_90 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm a_78 = ATgetArgument(t, 0);
      if(match_cons(a_78, sym_SVar_1))
        {
          ATerm f_78 = ATgetArgument(a_78, 0);
          if((ATgetSymbol((ATermAppl) f_78) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm d_78 = ATgetArgument(t, 1);
        if(((ATgetType(d_78) == AT_LIST) && !(ATisEmpty(d_78))))
          {
            y_90 = ATgetFirst((ATermList) d_78);
            {
              ATerm g_78 = (ATerm) ATgetNext((ATermList) d_78);
              if(((ATgetType(g_78) != AT_LIST) || !(ATisEmpty(g_78))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm e_78 = ATgetArgument(t, 2);
        if(((ATgetType(e_78) != AT_LIST) || !(ATisEmpty(e_78))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_11(y_90, t);
  return(t);
}
static ATerm m_23 (ATerm t)
{
  ATerm p_191 = NULL,q_191 = NULL,r_191 = NULL;
  p_191 = t;
  t = term_x_40;
  q_191 = t;
  t = (ATerm) ATinsert(ATempty, term_h_78);
  r_191 = t;
  t = SSL_printnl(q_191, r_191);
  t = p_191;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(a_23, default_system_usage_0_0, default_system_about_0_0, _id, b_23, t);
  return(t);
}

#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_RDecT_3;
static Symbol sym_DynRuleScopeId_1;
static Symbol sym_LabeledDynRuleScopeId_2;
static Symbol sym_DynRuleId_1;
static Symbol sym_AddLabelDynRuleId_2;
static Symbol sym_LabeledDynRuleId_2;
static Symbol sym_SetDynRuleDepends_3;
static Symbol sym_SetDynRuleMatch_2;
static Symbol sym_AddDynRule_2;
static Symbol sym_SetDynRule_2;
static Symbol sym_UndefineDynRule_2;
static Symbol sym_AddScopeLabel_2;
static Symbol sym_ScopeLabels_1;
static Symbol sym_Overlays_1;
static Symbol sym_Signature_1;
static Symbol sym_Strategies_1;
static Symbol sym_Rules_1;
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
static Symbol sym_ListVar_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_StrategyCurly_1;
static Symbol sym_SVar_1;
static Symbol sym_ExtendOverrideDynamicRules_1;
static Symbol sym_ExtendDynamicRules_1;
static Symbol sym_OverrideDynamicRules_1;
static Symbol sym_GenDynRules_1;
static Symbol sym_DynRuleScope_2;
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
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Prim_2;
static Symbol sym_Where_1;
static Symbol sym_Not_1;
static Symbol sym_Rec_2;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_BA_2;
static Symbol sym_Scope_2;
static Symbol sym_ScopeDefault_1;
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
static Symbol sym_FunType_2;
static Symbol sym_ConstType_1;
static Symbol sym_OpDecl_2;
static Symbol sym_Sort_2;
static Symbol sym_SortNoArgs_1;
static Symbol sym_Constructors_1;
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
static Symbol sym_Anno_2;
static Symbol sym_Hashtable_1;
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
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_RDecT_3;
static Symbol sym_DynRuleScopeId_1;
static Symbol sym_LabeledDynRuleScopeId_2;
static Symbol sym_DynRuleId_1;
static Symbol sym_AddLabelDynRuleId_2;
static Symbol sym_LabeledDynRuleId_2;
static Symbol sym_SetDynRuleDepends_3;
static Symbol sym_SetDynRuleMatch_2;
static Symbol sym_AddDynRule_2;
static Symbol sym_SetDynRule_2;
static Symbol sym_UndefineDynRule_2;
static Symbol sym_AddScopeLabel_2;
static Symbol sym_ScopeLabels_1;
static Symbol sym_Overlays_1;
static Symbol sym_Signature_1;
static Symbol sym_Strategies_1;
static Symbol sym_Rules_1;
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
static Symbol sym_ListVar_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_StrategyCurly_1;
static Symbol sym_SVar_1;
static Symbol sym_ExtendOverrideDynamicRules_1;
static Symbol sym_ExtendDynamicRules_1;
static Symbol sym_OverrideDynamicRules_1;
static Symbol sym_GenDynRules_1;
static Symbol sym_DynRuleScope_2;
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
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Prim_2;
static Symbol sym_Where_1;
static Symbol sym_Not_1;
static Symbol sym_Rec_2;
static Symbol sym_LChoice_2;
static Symbol sym_Seq_2;
static Symbol sym_BA_2;
static Symbol sym_Scope_2;
static Symbol sym_ScopeDefault_1;
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
static Symbol sym_FunType_2;
static Symbol sym_ConstType_1;
static Symbol sym_OpDecl_2;
static Symbol sym_Sort_2;
static Symbol sym_SortNoArgs_1;
static Symbol sym_Constructors_1;
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
static Symbol sym_InfixApp_3;
static Symbol sym_MA_2;
static Symbol sym_BAM_3;
static Symbol sym_Seqs_1;
static Symbol sym_Choices_1;
static Symbol sym_LChoices_1;
static Symbol sym_Lets_2;
static Symbol sym_DynamicRules_1;
static Symbol sym_Con_3;
static Symbol sym_TupleCong_1;
static Symbol sym_TupleCong_0;
static Symbol sym_DynamicRules_1;
static Symbol sym_DynRuleScope_2;
static void init_module_constructors (void)
{
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleScopeId_1 = ATmakeSymbol("DynRuleScopeId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleScopeId_1);
  sym_LabeledDynRuleScopeId_2 = ATmakeSymbol("LabeledDynRuleScopeId", 2, ATfalse);
  ATprotectSymbol(sym_LabeledDynRuleScopeId_2);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddLabelDynRuleId_2 = ATmakeSymbol("AddLabelDynRuleId", 2, ATfalse);
  ATprotectSymbol(sym_AddLabelDynRuleId_2);
  sym_LabeledDynRuleId_2 = ATmakeSymbol("LabeledDynRuleId", 2, ATfalse);
  ATprotectSymbol(sym_LabeledDynRuleId_2);
  sym_SetDynRuleDepends_3 = ATmakeSymbol("SetDynRuleDepends", 3, ATfalse);
  ATprotectSymbol(sym_SetDynRuleDepends_3);
  sym_SetDynRuleMatch_2 = ATmakeSymbol("SetDynRuleMatch", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRuleMatch_2);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_AddScopeLabel_2 = ATmakeSymbol("AddScopeLabel", 2, ATfalse);
  ATprotectSymbol(sym_AddScopeLabel_2);
  sym_ScopeLabels_1 = ATmakeSymbol("ScopeLabels", 1, ATfalse);
  ATprotectSymbol(sym_ScopeLabels_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
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
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
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
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
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
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
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
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_DynRuleScopeId_1 = ATmakeSymbol("DynRuleScopeId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleScopeId_1);
  sym_LabeledDynRuleScopeId_2 = ATmakeSymbol("LabeledDynRuleScopeId", 2, ATfalse);
  ATprotectSymbol(sym_LabeledDynRuleScopeId_2);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_AddLabelDynRuleId_2 = ATmakeSymbol("AddLabelDynRuleId", 2, ATfalse);
  ATprotectSymbol(sym_AddLabelDynRuleId_2);
  sym_LabeledDynRuleId_2 = ATmakeSymbol("LabeledDynRuleId", 2, ATfalse);
  ATprotectSymbol(sym_LabeledDynRuleId_2);
  sym_SetDynRuleDepends_3 = ATmakeSymbol("SetDynRuleDepends", 3, ATfalse);
  ATprotectSymbol(sym_SetDynRuleDepends_3);
  sym_SetDynRuleMatch_2 = ATmakeSymbol("SetDynRuleMatch", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRuleMatch_2);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_AddScopeLabel_2 = ATmakeSymbol("AddScopeLabel", 2, ATfalse);
  ATprotectSymbol(sym_AddScopeLabel_2);
  sym_ScopeLabels_1 = ATmakeSymbol("ScopeLabels", 1, ATfalse);
  ATprotectSymbol(sym_ScopeLabels_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
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
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
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
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
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
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
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
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
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
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
}
static ATerm term_i_99;
static ATerm term_h_99;
static ATerm term_g_99;
static ATerm term_o_98;
static ATerm term_n_98;
static ATerm term_m_98;
static ATerm term_j_98;
static ATerm term_i_98;
static ATerm term_n_97;
static ATerm term_m_97;
static ATerm term_l_97;
static ATerm term_k_97;
static ATerm term_j_97;
static ATerm term_e_97;
static ATerm term_z_96;
static ATerm term_x_96;
static ATerm term_w_96;
static ATerm term_v_96;
static ATerm term_u_96;
static ATerm term_t_96;
static ATerm term_r_96;
static ATerm term_l_96;
static ATerm term_k_96;
static ATerm term_h_96;
static ATerm term_g_96;
static ATerm term_f_96;
static ATerm term_q_95;
static ATerm term_p_95;
static ATerm term_k_95;
static ATerm term_j_95;
static ATerm term_e_95;
static ATerm term_d_95;
static ATerm term_c_95;
static ATerm term_b_95;
static ATerm term_a_95;
static ATerm term_z_94;
static ATerm term_y_94;
static ATerm term_x_94;
static ATerm term_w_94;
static ATerm term_v_94;
static ATerm term_u_94;
static ATerm term_r_94;
static ATerm term_o_94;
static ATerm term_n_94;
static ATerm term_m_94;
static ATerm term_l_94;
static ATerm term_g_94;
static ATerm term_y_93;
static ATerm term_x_93;
static ATerm term_w_93;
static ATerm term_v_93;
static ATerm term_u_93;
static ATerm term_r_93;
static ATerm term_q_93;
static ATerm term_a_93;
static ATerm term_z_92;
static ATerm term_w_92;
static ATerm term_v_92;
static ATerm term_u_92;
static ATerm term_p_92;
static ATerm term_o_92;
static ATerm term_n_92;
static ATerm term_m_92;
static ATerm term_x_90;
static ATerm term_w_90;
static ATerm term_v_90;
static ATerm term_g_89;
static ATerm term_f_89;
static ATerm term_e_89;
static ATerm term_d_89;
static ATerm term_u_88;
static ATerm term_w_79;
static ATerm term_v_79;
static ATerm term_u_79;
static ATerm term_s_79;
static ATerm term_r_79;
static ATerm term_q_79;
static ATerm term_p_79;
static ATerm term_f_79;
static ATerm term_i_78;
static ATerm term_b_77;
static ATerm term_v_76;
static ATerm term_b_75;
static ATerm term_z_74;
static ATerm term_m_72;
static ATerm term_l_72;
static ATerm term_h_72;
static ATerm term_g_72;
static ATerm term_q_66;
static ATerm term_p_66;
static ATerm term_l_66;
static ATerm term_k_66;
static ATerm term_n_65;
static ATerm term_m_65;
static ATerm term_q_64;
static ATerm term_n_64;
static ATerm term_c_64;
static ATerm term_b_64;
static ATerm term_o_63;
static ATerm term_n_63;
static ATerm term_e_63;
static ATerm term_d_63;
static ATerm term_t_62;
static ATerm term_s_62;
static ATerm term_n_62;
static ATerm term_m_62;
static ATerm term_l_62;
static ATerm term_c_62;
static ATerm term_b_62;
static ATerm term_a_62;
static ATerm term_z_61;
static ATerm term_y_61;
static ATerm term_t_61;
static ATerm term_s_61;
static ATerm term_o_61;
static ATerm term_n_61;
static ATerm term_m_61;
static ATerm term_l_61;
static ATerm term_k_61;
static ATerm term_j_61;
static ATerm term_i_61;
static ATerm term_g_61;
static ATerm term_f_61;
static ATerm term_e_61;
static ATerm term_d_61;
static ATerm term_c_61;
static ATerm term_a_61;
static ATerm term_z_60;
static ATerm term_y_60;
static ATerm term_x_60;
static ATerm term_w_60;
static ATerm term_v_60;
static ATerm term_t_60;
static ATerm term_s_60;
static ATerm term_o_60;
static ATerm term_m_60;
static ATerm term_l_60;
static ATerm term_c_60;
static ATerm term_m_59;
static ATerm term_j_59;
static ATerm term_h_56;
static ATerm term_o_55;
static ATerm term_l_55;
static ATerm term_k_55;
static ATerm term_i_55;
static ATerm term_h_55;
static ATerm term_g_55;
static ATerm term_f_55;
static ATerm term_e_55;
static ATerm term_w_54;
static ATerm term_r_54;
static ATerm term_n_54;
static ATerm term_m_54;
static ATerm term_k_54;
static ATerm term_j_54;
static ATerm term_i_54;
static ATerm term_f_54;
static ATerm term_e_54;
static ATerm term_d_54;
static ATerm term_z_53;
static ATerm term_x_53;
static ATerm term_w_53;
static ATerm term_v_53;
static ATerm term_t_53;
static ATerm term_r_53;
static ATerm term_q_53;
static ATerm term_p_53;
static ATerm term_o_53;
static ATerm term_n_53;
static ATerm term_m_53;
static ATerm term_l_53;
static ATerm term_g_53;
static ATerm term_f_53;
static ATerm term_e_53;
static ATerm term_b_53;
static ATerm term_a_53;
static ATerm term_z_52;
static ATerm term_y_52;
static ATerm term_x_52;
static ATerm term_w_52;
static ATerm term_u_52;
static ATerm term_r_52;
static ATerm term_p_52;
static ATerm term_o_52;
static ATerm term_n_52;
static ATerm term_m_52;
static ATerm term_l_52;
static ATerm term_k_52;
static ATerm term_i_52;
static ATerm term_h_52;
static ATerm term_g_52;
static ATerm term_d_52;
static ATerm term_p_51;
static ATerm term_e_51;
static ATerm term_z_50;
static ATerm term_t_50;
static ATerm term_l_50;
static ATerm term_b_50;
static ATerm term_a_50;
static ATerm term_b_49;
static ATerm term_a_49;
static ATerm term_z_48;
static ATerm term_y_48;
static ATerm term_q_48;
static ATerm term_h_48;
static ATerm term_g_48;
static ATerm term_c_48;
static ATerm term_b_48;
static ATerm term_y_47;
static ATerm term_w_47;
static ATerm term_v_47;
static ATerm term_u_47;
static ATerm term_o_47;
static ATerm term_n_47;
static ATerm term_j_47;
static ATerm term_i_47;
static ATerm term_c_47;
static ATerm term_b_47;
static ATerm term_z_46;
static ATerm term_y_46;
static ATerm term_x_46;
static ATerm term_w_46;
static ATerm term_v_46;
static ATerm term_s_46;
static ATerm term_r_46;
static ATerm term_m_42;
static ATerm term_l_42;
static ATerm term_k_42;
static ATerm term_g_42;
static ATerm term_m_39;
static ATerm term_g_39;
static ATerm term_q_38;
static ATerm term_n_38;
static ATerm term_l_38;
static ATerm term_j_38;
static ATerm term_i_38;
static ATerm term_h_38;
static ATerm term_n_37;
static ATerm term_m_37;
static ATerm term_l_37;
static ATerm term_w_36;
static ATerm term_u_36;
static ATerm term_s_36;
static ATerm term_q_36;
static ATerm term_p_36;
static ATerm term_n_36;
static ATerm term_m_36;
static ATerm term_j_36;
static ATerm term_h_36;
static ATerm term_f_36;
static ATerm term_x_35;
static ATerm term_v_35;
static ATerm term_u_35;
static ATerm term_t_35;
static ATerm term_s_35;
static ATerm term_n_35;
static ATerm term_q_34;
static ATerm term_o_34;
static ATerm term_k_34;
static ATerm term_q_33;
static ATerm term_o_33;
static ATerm term_n_33;
static ATerm term_y_32;
static ATerm term_u_32;
static ATerm term_f_30;
static ATerm term_e_30;
static ATerm term_d_30;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Op_2, term_u_32, (ATerm) ATempty);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_33);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_34);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_30);
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_36);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym_Call_2, term_s_36, (ATerm) ATempty);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym_Op_2, term_q_36, (ATerm) ATempty);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym_Call_2, term_n_35, (ATerm) ATempty);
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_37);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_38);
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(sym_Call_2, term_i_38, (ATerm) ATempty);
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_w_46));
  term_w_46 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_46);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(sym_RootApp_1, term_e_30);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_46);
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_b_47);
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_47);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_o_47));
  term_o_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_47);
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_47);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_47);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_48);
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_48);
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_48);
  ATprotect(&(term_a_49));
  term_a_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("f_6", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("v_7", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("w_2", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("m_4", 0, ATtrue));
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(ATmakeSymbol("g_1", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("LiftedRules", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("KillStrategy", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("kill-", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(sym_Var_1, term_h_52);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(sym_Match_1, term_i_52);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("DR_KILL", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("map", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_52);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("lhs", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("deps", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Var_1, term_y_48);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym_Var_1, term_o_52);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(sym_Var_1, term_p_52);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym_Build_1, term_w_52);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("scope2", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(ATmakeSymbol("dep2", 0, ATtrue));
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("kill-dep2", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(sym_Var_1, term_y_52);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym_Var_1, term_z_52);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym_Var_1, term_a_53);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_53);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("deps2", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(sym_Var_1, term_n_53);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym_Build_1, term_o_53);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_53);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym_Var_1, term_b_53);
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rules-vis", 0, ATtrue));
  ATprotect(&(term_w_53));
  term_w_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_53);
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-kill", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_h_52);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("k_9", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_54);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("NewStrategy", 0, ATtrue));
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("new-", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, term_y_48);
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-new", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("b_6", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_54);
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Counter", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(sym_Defined_2, term_e_55, term_f_55);
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("DRRenameVar", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("DRVarNumber", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(sym__2, term_i_55, term_g_55);
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(ATmakeSymbol("DRAuxRuleGenerated", 0, ATtrue));
  ATprotect(&(term_m_59));
  term_m_59 = (ATerm) ATmakeAppl(ATmakeSymbol("DRCallersGenerated", 0, ATtrue));
  ATprotect(&(term_c_60));
  term_c_60 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_l_60));
  term_l_60 = (ATerm) ATmakeAppl(ATmakeSymbol("once-", 0, ATtrue));
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol("bigbagof-", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost-scope-", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_t_60));
  term_t_60 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_60);
  ATprotect(&(term_v_60));
  term_v_60 = (ATerm) ATmakeAppl(sym_Build_1, term_q_34);
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("res", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(sym_Var_1, term_w_60);
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule-pointer", 0, ATtrue));
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_60);
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("key", 0, ATtrue));
  ATprotect(&(term_c_61));
  term_c_61 = (ATerm) ATmakeAppl(sym_Var_1, term_a_61);
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(sym_Var_1, term_d_61);
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(ATmakeSymbol("split-fetch", 0, ATtrue));
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_61);
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(sym_Match_1, term_x_60);
  ATprotect(&(term_j_61));
  term_j_61 = (ATerm) ATmakeAppl(ATmakeSymbol("conc", 0, ATtrue));
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_61);
  ATprotect(&(term_l_61));
  term_l_61 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_k_61);
  ATprotect(&(term_m_61));
  term_m_61 = (ATerm) ATmakeAppl(ATmakeSymbol("closures'", 0, ATtrue));
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(sym_Var_1, term_m_61);
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-put", 0, ATtrue));
  ATprotect(&(term_s_61));
  term_s_61 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_61);
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-all-rules", 0, ATtrue));
  ATprotect(&(term_y_61));
  term_y_61 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_61);
  ATprotect(&(term_z_61));
  term_z_61 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-get-first-scope-label", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_61);
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(ATmakeSymbol("c_1", 0, ATtrue));
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_62);
  ATprotect(&(term_l_62));
  term_l_62 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule-vis", 0, ATtrue));
  ATprotect(&(term_m_62));
  term_m_62 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_62);
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATempty);
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule", 0, ATtrue));
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_62);
  ATprotect(&(term_d_63));
  term_d_63 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule-vis", 0, ATtrue));
  ATprotect(&(term_e_63));
  term_e_63 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_63);
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_63);
  ATprotect(&(term_b_64));
  term_b_64 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule-vis", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_64);
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_64);
  ATprotect(&(term_m_65));
  term_m_65 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-label-scope", 0, ATtrue));
  ATprotect(&(term_n_65));
  term_n_65 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_65);
  ATprotect(&(term_k_66));
  term_k_66 = (ATerm) ATmakeAppl(ATmakeSymbol("m_9", 0, ATtrue));
  ATprotect(&(term_l_66));
  term_l_66 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_66);
  ATprotect(&(term_p_66));
  term_p_66 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
  ATprotect(&(term_q_66));
  term_q_66 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_66);
  ATprotect(&(term_g_72));
  term_g_72 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scope", 0, ATtrue));
  ATprotect(&(term_h_72));
  term_h_72 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_72);
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scopes", 0, ATtrue));
  ATprotect(&(term_m_72));
  term_m_72 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_72);
  ATprotect(&(term_z_74));
  term_z_74 = (ATerm) ATmakeAppl(ATmakeSymbol("DR_DUMMY", 0, ATtrue));
  ATprotect(&(term_b_75));
  term_b_75 = (ATerm) ATmakeAppl(sym_Op_2, term_z_74, (ATerm) ATempty);
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] Your condition has been removed from the original dynamic rule: ", 0, ATtrue));
  ATprotect(&(term_b_77));
  term_b_77 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] rule undefining doesn't allow a condition strategy anymore", 0, ATtrue));
  ATprotect(&(term_i_78));
  term_i_78 = (ATerm) ATmakeAppl(ATmakeSymbol("DROverrideLabelsNeeded", 0, ATtrue));
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(sym__2, term_i_78, (ATerm) ATempty);
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(ATmakeSymbol("p_9", 0, ATtrue));
  ATprotect(&(term_q_79));
  term_q_79 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_79);
  ATprotect(&(term_r_79));
  term_r_79 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_q_79);
  ATprotect(&(term_s_79));
  term_s_79 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(sym_Sort_2, term_s_79, (ATerm) ATempty);
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(sym_ConstType_1, term_u_79);
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(sym_OpDecl_2, term_z_74, term_v_79);
  ATprotect(&(term_u_88));
  term_u_88 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_d_89));
  term_d_89 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_e_89));
  term_e_89 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_89);
  ATprotect(&(term_f_89));
  term_f_89 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_g_89));
  term_g_89 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_89);
  ATprotect(&(term_v_90));
  term_v_90 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_w_90));
  term_w_90 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_x_90));
  term_x_90 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_m_92));
  term_m_92 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_92));
  term_n_92 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_o_92));
  term_o_92 = (ATerm) ATmakeAppl(sym__2, term_m_92, term_n_92);
  ATprotect(&(term_p_92));
  term_p_92 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_92));
  term_u_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_92));
  term_v_92 = (ATerm) ATmakeAppl(sym__2, term_m_92, term_u_92);
  ATprotect(&(term_w_92));
  term_w_92 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_92));
  term_z_92 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_93));
  term_a_93 = (ATerm) ATmakeAppl(sym__2, term_m_92, term_z_92);
  ATprotect(&(term_q_93));
  term_q_93 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_93));
  term_r_93 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_93));
  term_u_93 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_93));
  term_v_93 = (ATerm) ATmakeAppl(sym__2, term_m_92, term_u_93);
  ATprotect(&(term_w_93));
  term_w_93 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_93));
  term_x_93 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_93));
  term_y_93 = (ATerm) ATmakeAppl(sym__2, term_m_92, term_x_93);
  ATprotect(&(term_g_94));
  term_g_94 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_94));
  term_l_94 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_94));
  term_m_94 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_94));
  term_n_94 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_o_94));
  term_o_94 = (ATerm) ATmakeAppl(sym__2, term_m_94, term_n_94);
  ATprotect(&(term_r_94));
  term_r_94 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_u_94));
  term_u_94 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_v_94));
  term_v_94 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_94));
  term_w_94 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_94));
  term_x_94 = (ATerm) ATmakeAppl(sym__2, term_w_94, term_f_55);
  ATprotect(&(term_y_94));
  term_y_94 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_55);
  ATprotect(&(term_z_94));
  term_z_94 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_a_95));
  term_a_95 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_95));
  term_b_95 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_c_95));
  term_c_95 = (ATerm) ATmakeAppl(sym__2, term_b_95, term_a_50);
  ATprotect(&(term_d_95));
  term_d_95 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_95));
  term_e_95 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_j_95));
  term_j_95 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_95));
  term_k_95 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_95));
  term_p_95 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_q_95));
  term_q_95 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_96));
  term_f_96 = (ATerm) ATmakeAppl(sym__2, term_m_92, term_w_94);
  ATprotect(&(term_g_96));
  term_g_96 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_96));
  term_h_96 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_96));
  term_k_96 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_96));
  term_l_96 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_96));
  term_r_96 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_96));
  term_t_96 = (ATerm) ATmakeAppl(sym__2, term_r_96, term_a_50);
  ATprotect(&(term_u_96));
  term_u_96 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_96));
  term_v_96 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_96));
  term_w_96 = (ATerm) ATmakeAppl(sym__2, term_v_96, term_a_50);
  ATprotect(&(term_x_96));
  term_x_96 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_96));
  term_z_96 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_97));
  term_e_97 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_97));
  term_j_97 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_97));
  term_k_97 = (ATerm) ATmakeAppl(sym__2, term_j_97, term_a_50);
  ATprotect(&(term_l_97));
  term_l_97 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_97));
  term_m_97 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_97));
  term_n_97 = (ATerm) ATmakeAppl(sym__3, term_m_94, term_n_94, (ATerm) ATempty);
  ATprotect(&(term_i_98));
  term_i_98 = (ATerm) ATmakeAppl(sym__2, term_m_92, term_j_97);
  ATprotect(&(term_j_98));
  term_j_98 = (ATerm) ATmakeAppl(sym__2, term_m_92, term_r_96);
  ATprotect(&(term_m_98));
  term_m_98 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_98));
  term_n_98 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_98));
  term_o_98 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_99));
  term_g_99 = (ATerm) ATmakeAppl(sym__2, term_z_92, term_a_50);
  ATprotect(&(term_h_99));
  term_h_99 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_99));
  term_i_99 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm r_143 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm o_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm s_14 (ATerm h_179 (ATerm), ATerm m_103, ATerm k_103, ATerm l_103, ATerm p_103, ATerm n_103, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm h_179 (ATerm), ATerm t);
ATerm escape_chars_1_0 (ATerm w_160 (ATerm), ATerm t);
static ATerm k_23 (ATerm a_14, ATerm e_14, ATerm t);
static ATerm m_23 (ATerm g_15, ATerm h_15, ATerm l_15, ATerm t);
static ATerm n_23 (ATerm j_17, ATerm k_17, ATerm t);
static ATerm p_23 (ATerm q_17, ATerm r_17, ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm q_177 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm y_14 (ATerm z_93, ATerm a_94, ATerm b_94, ATerm t);
static ATerm m_35 (ATerm t_34, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm c_15 (ATerm m_89, ATerm n_89, ATerm o_89, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm dummify_old_0_0 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm d_15 (ATerm g_179 (ATerm), ATerm t_102, ATerm q_102, ATerm r_102, ATerm a_103, ATerm e_103, ATerm f_103, ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm i_7 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm i_179 (ATerm), ATerm t);
static ATerm m_7 (ATerm t);
static ATerm f_15 (ATerm t_103, ATerm s_103, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm h_73 (ATerm p_72, ATerm t);
static ATerm i_73 (ATerm r_72, ATerm t);
static ATerm q_7 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm l_76 (ATerm l_75, ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm u_7 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
ATerm aux_LiftedRules_0_0 (ATerm t);
ATerm bagof_LiftedRules_0_0 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
ATerm create_kill_strategy_0_0 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm create_new_strategy_0_0 (ATerm t);
static ATerm m_15 (ATerm d_45, ATerm t_327, ATerm t);
static ATerm n_15 (ATerm w_138 (ATerm), ATerm h_26, ATerm f_26, ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
ATerm next_counter_0_0 (ATerm t);
static ATerm z_8 (ATerm t);
ATerm NewNumberedVar_0_0 (ATerm t);
ATerm RenameVarTerm_2_0 (ATerm m_179 (ATerm), ATerm n_179 (ATerm), ATerm t);
static ATerm a_9 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
ATerm dr_rename_vars_0_0 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm v_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm c_11 (ATerm t);
static ATerm e_11 (ATerm t);
static ATerm f_11 (ATerm t);
static ATerm h_11 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm o_11 (ATerm t);
static ATerm t_11 (ATerm t);
static ATerm v_11 (ATerm t);
static ATerm w_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm z_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm f_12 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm o_179 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm DesugarDynRuleDef_0_0 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm r_13 (ATerm t);
ATerm lift_dynamic_rule_0_0 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm b_17 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm p_15 (ATerm q_112, ATerm p_112, ATerm t);
ATerm repeat_2_0 (ATerm r_142 (ATerm), ATerm s_142 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm k_151 (ATerm), ATerm t);
static ATerm t_17 (ATerm t);
ATerm collect_om_2_0 (ATerm t_155 (ATerm), ATerm u_155 (ATerm), ATerm t);
ATerm partition_1_0 (ATerm o_158 (ATerm), ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm v_144 (ATerm), ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm i_18 (ATerm t);
static ATerm j_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm c_19 (ATerm t);
ATerm DummifyTerm_0_0 (ATerm t);
static ATerm d_19 (ATerm t);
ATerm dummify_0_0 (ATerm t);
ATerm DRDef_LHS_1_0 (ATerm r_179 (ATerm), ATerm t);
static ATerm a_149 (ATerm c_148, ATerm d_148, ATerm e_148, ATerm f_148, ATerm g_148, ATerm h_148, ATerm i_148, ATerm t);
static ATerm e_19 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm s_149 (ATerm), ATerm t);
static ATerm f_19 (ATerm t);
ATerm UpgradeUndefine_0_0 (ATerm t);
static ATerm g_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm i_19 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm r_19 (ATerm t);
static ATerm t_19 (ATerm t);
ATerm upgrade_old_dr_constructs_0_0 (ATerm t);
static ATerm v_19 (ATerm t);
static ATerm w_19 (ATerm t);
static ATerm x_19 (ATerm t);
static ATerm y_19 (ATerm t);
static ATerm z_19 (ATerm t);
static ATerm a_20 (ATerm t);
ATerm LiftDynamicRules_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm l_178 (ATerm), ATerm m_178 (ATerm), ATerm n_178 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm u_178 (ATerm), ATerm t);
static ATerm b_20 (ATerm t);
static ATerm c_20 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm d_20 (ATerm t);
static ATerm f_20 (ATerm t);
static ATerm g_20 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm i_20 (ATerm t);
static ATerm j_20 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm m_20 (ATerm t);
static ATerm n_20 (ATerm t);
static ATerm o_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm q_20 (ATerm t);
static ATerm r_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm v_20 (ATerm t);
static ATerm w_20 (ATerm t);
static ATerm y_20 (ATerm t);
static ATerm z_20 (ATerm t);
static ATerm a_21 (ATerm t);
static ATerm b_21 (ATerm t);
static ATerm c_21 (ATerm t);
static ATerm d_21 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm e_21 (ATerm t);
static ATerm g_21 (ATerm t);
static ATerm h_21 (ATerm t);
static ATerm i_21 (ATerm t);
static ATerm j_21 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm y_15 (ATerm l_154 (ATerm), ATerm k_50, ATerm j_50, ATerm t);
static ATerm z_15 (ATerm o_154 (ATerm), ATerm p_154 (ATerm), ATerm o_50, ATerm n_50, ATerm t);
static ATerm a_16 (ATerm g_154 (ATerm), ATerm i_50, ATerm h_50, ATerm t);
ATerm genzip_4_0 (ATerm e_152 (ATerm), ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm h_152 (ATerm), ATerm t);
static ATerm o_21 (ATerm t);
static ATerm p_21 (ATerm t);
static ATerm q_21 (ATerm t);
static ATerm f_16 (ATerm y_860, ATerm d_861, ATerm l_85, ATerm t);
ATerm while_not_2_0 (ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm t);
ATerm for_3_0 (ATerm l_143 (ATerm), ATerm m_143 (ATerm), ATerm n_143 (ATerm), ATerm t);
static ATerm r_21 (ATerm t);
static ATerm s_21 (ATerm t);
static ATerm t_21 (ATerm t);
static ATerm m_171 (ATerm z_169, ATerm a_170, ATerm b_170, ATerm t);
static ATerm u_21 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm w_21 (ATerm t);
static ATerm x_21 (ATerm t);
static ATerm z_21 (ATerm t);
static ATerm d_22 (ATerm t);
static ATerm g_22 (ATerm t);
static ATerm k_22 (ATerm t);
static ATerm m_22 (ATerm t);
ATerm free_vars_3_0 (ATerm v_174 (ATerm), ATerm w_174 (ATerm), ATerm x_174 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm s_143 (ATerm), ATerm t);
static ATerm j_16 (ATerm b_66, ATerm c_66, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm j_145 (ATerm), ATerm t);
static ATerm k_16 (ATerm t_138 (ATerm), ATerm w_25, ATerm u_25, ATerm t);
static ATerm o_22 (ATerm t);
static ATerm q_22 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm l_16 (ATerm v_65, ATerm w_65, ATerm t);
ATerm end_scope_1_0 (ATerm q_138 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm p_138 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm r_138 (ATerm), ATerm s_138 (ATerm), ATerm t);
static ATerm w_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm a_23 (ATerm t);
static ATerm b_23 (ATerm t);
static ATerm d_23 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm d_158 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm r_150 (ATerm), ATerm t);
static ATerm g_178 (ATerm y_177, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm o_16 (ATerm z_22, ATerm v_22, ATerm t);
ATerm foldr_3_0 (ATerm b_157 (ATerm), ATerm c_157 (ATerm), ATerm d_157 (ATerm), ATerm t);
static ATerm h_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm o_23 (ATerm t);
static ATerm q_23 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm v_23 (ATerm t);
static ATerm w_23 (ATerm t);
static ATerm b_24 (ATerm t);
static ATerm e_24 (ATerm t);
static ATerm i_24 (ATerm t);
static ATerm m_24 (ATerm t);
static ATerm p_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm w_24 (ATerm t);
static ATerm x_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm b_25 (ATerm t);
static ATerm m_25 (ATerm t);
static ATerm s_25 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm p_16 (ATerm e_60, ATerm f_60, ATerm t);
static ATerm q_16 (ATerm h_44, ATerm i_44, ATerm t);
static ATerm s_16 (ATerm u_149 (ATerm), ATerm f_316, ATerm n_44, ATerm t);
static ATerm r_16 (ATerm d_44, ATerm e_44, ATerm t);
static ATerm t_25 (ATerm t);
static ATerm v_25 (ATerm t);
ATerm output_1_0 (ATerm n_170 (ATerm), ATerm t);
static ATerm f_184 (ATerm z_183, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm t_16 (ATerm j_44, ATerm t);
static ATerm u_16 (ATerm k_58, ATerm l_58, ATerm t);
static ATerm v_16 (ATerm g_60, ATerm h_60, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_185 (ATerm p_184, ATerm t);
static ATerm s_185 (ATerm t_184, ATerm u_184, ATerm v_184, ATerm t);
static ATerm t_185 (ATerm d_185, ATerm e_185, ATerm g_185, ATerm t);
static ATerm w_16 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm o_170 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm c_150 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm k_26 (ATerm t);
ATerm default_system_usage_2_0 (ATerm m_172 (ATerm), ATerm n_172 (ATerm), ATerm t);
static ATerm n_26 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm r_26 (ATerm t);
static ATerm v_26 (ATerm t);
static ATerm w_26 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm x_26 (ATerm t);
static ATerm z_26 (ATerm t);
static ATerm a_27 (ATerm t);
static ATerm k_27 (ATerm t);
static ATerm l_27 (ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
static ATerm b_28 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm f_17 (ATerm k_80, ATerm l_80, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
static ATerm i_28 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_28 (ATerm t);
static ATerm n_28 (ATerm t);
static ATerm o_28 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm d_17 (ATerm q_65, ATerm r_65, ATerm p_65, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm p_28 (ATerm t);
static ATerm q_28 (ATerm t);
static ATerm u_28 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm x_16 (ATerm z_63, ATerm a_64, ATerm t);
ATerm foldr_2_0 (ATerm z_156 (ATerm), ATerm a_157 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm w_28 (ATerm t);
static ATerm x_28 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm j_167 (ATerm), ATerm t);
static ATerm y_28 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_17 (ATerm f_70, ATerm g_70, ATerm h_70, ATerm t);
ATerm lookup_table_0_1 (ATerm c_67, ATerm t);
ATerm new_hashtable_0_2 (ATerm n_70, ATerm o_70, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm z_16 (ATerm k_70, ATerm l_70, ATerm t);
static ATerm a_17 (ATerm p_70, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_150 (ATerm), ATerm t);
static ATerm h_17 (ATerm i_70, ATerm j_70, ATerm t);
static ATerm c_17 (ATerm j_67, ATerm k_67, ATerm t);
static ATerm z_28 (ATerm t);
static ATerm a_29 (ATerm t);
static ATerm b_29 (ATerm t);
static ATerm c_29 (ATerm t);
static ATerm d_29 (ATerm t);
static ATerm g_29 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm h_172 (ATerm), ATerm t);
static ATerm l_29 (ATerm t);
static ATerm m_29 (ATerm t);
static ATerm n_29 (ATerm t);
static ATerm o_29 (ATerm t);
ATerm parse_options_3_0 (ATerm e_172 (ATerm), ATerm f_172 (ATerm), ATerm g_172 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm h_170 (ATerm), ATerm i_170 (ATerm), ATerm j_170 (ATerm), ATerm k_170 (ATerm), ATerm l_170 (ATerm), ATerm t);
static ATerm r_29 (ATerm t);
static ATerm t_29 (ATerm t);
static ATerm u_29 (ATerm t);
static ATerm w_29 (ATerm t);
static ATerm y_29 (ATerm t);
static ATerm z_29 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm v_0 = NULL,x_0 = NULL,y_0 = NULL,b_1 = NULL,d_1 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      b_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, b_1, d_1);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          b_1 = ATgetArgument(t, 0);
          t = b_1;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_0 = ATgetFirst((ATermList) t);
              x_0 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, v_0, (ATerm) ATmakeAppl(sym_LChoices_1, x_0));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_d_30;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              b_1 = ATgetArgument(t, 0);
              t = b_1;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_0 = ATgetFirst((ATermList) t);
                  x_0 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, v_0, (ATerm) ATmakeAppl(sym_Choices_1, x_0));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_d_30;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  b_1 = ATgetArgument(t, 0);
                  t = b_1;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_0 = ATgetFirst((ATermList) t);
                      x_0 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_0, (ATerm) ATmakeAppl(sym_Seqs_1, x_0));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_e_30;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      b_1 = ATgetArgument(t, 0);
                      d_1 = ATgetArgument(t, 1);
                      y_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, d_1, (ATerm) ATmakeAppl(sym_Op_2, term_f_30, (ATerm) ATinsert(ATinsert(ATempty, y_0), b_1)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          b_1 = ATgetArgument(t, 0);
                          d_1 = ATgetArgument(t, 1);
                          y_0 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, y_0)), b_1), (ATerm) ATmakeAppl(sym_Build_1, d_1)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              b_1 = ATgetArgument(t, 0);
                              d_1 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_1, (ATerm) ATmakeAppl(sym_Match_1, d_1));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  b_1 = ATgetArgument(t, 0);
                                  d_1 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_1), d_1);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      b_1 = ATgetArgument(t, 0);
                                      d_1 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_1), b_1);
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
ATerm topdown_1_0 (ATerm r_143 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t);
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(r_143, t);
    return(t);
  }
  t = r_143(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm h_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_6);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  ATerm g_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_30);
    }
  else
    {
      t = g_30;
      {
        ATerm j_30 = t;
        int k_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_30);
          }
        else
          {
            t = j_30;
            {
              ATerm q_30 = t;
              int r_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_6 = NULL,m_6 = NULL,n_6 = NULL,p_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_6 = ATgetArgument(t, 0);
                      m_6 = ATgetArgument(t, 1);
                      n_6 = ATgetArgument(t, 2);
                      p_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_6;
                  t = map_1_0(q_0, t);
                  LocalPopChoice(r_30);
                }
              else
                {
                  t = q_30;
                  {
                    ATerm s_30 = t;
                    int t_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_30);
                      }
                    else
                      {
                        t = s_30;
                        t = dynrule_targs_1_0(s_0, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm z_6 = NULL;
  ATerm c_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_6 = ATgetArgument(t, 0);
          {
            ATerm g_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_31);
      t = z_6;
    }
  else
    {
      t = c_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_6;
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = map_1_0(u_0, t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm j_7 = NULL;
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_7 = ATgetArgument(t, 0);
          {
            ATerm n_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_31);
      t = j_7;
    }
  else
    {
      t = l_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_7;
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm o_7 = NULL;
  o_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_7);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm s_7 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_7);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm p_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_31);
    }
  else
    {
      t = p_31;
      {
        ATerm x_31 = t;
        int z_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_31);
          }
        else
          {
            t = x_31;
            {
              ATerm d_32 = t;
              int e_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_7 = ATgetArgument(t, 0);
                      y_7 = ATgetArgument(t, 1);
                      z_7 = ATgetArgument(t, 2);
                      a_8 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_7;
                  t = map_1_0(h_1, t);
                  LocalPopChoice(e_32);
                }
              else
                {
                  t = d_32;
                  {
                    ATerm f_32 = t;
                    int h_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_32);
                      }
                    else
                      {
                        t = f_32;
                        t = dynrule_targs_1_0(i_1, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm h_8 = NULL;
  ATerm i_32 = t;
  int j_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_8 = ATgetArgument(t, 0);
          {
            ATerm m_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_32);
      t = h_8;
    }
  else
    {
      t = i_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_8;
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  t = map_1_0(j_1, t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm r_8 = NULL;
  ATerm n_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_8 = ATgetArgument(t, 0);
          {
            ATerm q_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_32);
      t = r_8;
    }
  else
    {
      t = n_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_8;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm u_8 = NULL;
  u_8 = t;
  {
    ATerm s_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_9 = NULL,e_0 = NULL,m_0 = NULL,m_3 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            i_9 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_8);
        e_0 = t;
        t = i_9;
        t = ContextVar_0_0(t);
        m_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, m_0);
        m_3 = t;
        t = SSLsetAnnotations(m_3, e_0);
        LocalPopChoice(t_32);
      }
    else
      {
        t = s_32;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, u_8);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  static ATerm y_9 (ATerm p_4, ATerm q_4, ATerm t_4, ATerm x_4, ATerm z_4, ATerm a_5, ATerm b_5, ATerm t);
  static ATerm y_9 (ATerm p_4, ATerm q_4, ATerm t_4, ATerm x_4, ATerm z_4, ATerm a_5, ATerm b_5, ATerm t)
  {
    ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,x_5 = NULL,y_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, z_4, term_y_32);
    {
      ATerm z_32 = t;
      if((PushChoice() == 0))
        {
          ATerm z_5 = NULL;
          if(match_cons(t, sym__2))
            {
              z_5 = ATgetArgument(t, 0);
              if((z_5 != ATgetArgument(t, 1)))
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
          t = z_32;
        }
    }
    t = new_0_0(t);
    l_5 = t;
    t = x_4;
    t = dummify_old_0_0(t);
    n_5 = t;
    {
      ATerm b_33 = t;
      int c_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_5;
          if((x_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, l_5);
          LocalPopChoice(c_33);
        }
      else
        {
          t = b_33;
          t = n_5;
        }
    }
    m_5 = t;
    t = n_5;
    t = free_vars_3_0(k_0, o_0, tboundin_3_0, t);
    t = map_1_0(a_1, t);
    s_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_4, a_5);
    t = free_vars_3_0(e_1, f_1, tboundin_3_0, t);
    t = filter_1_0(k_1, t);
    r_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_5, s_5);
    t = diff_0_0(t);
    t_5 = t;
    t = new_0_0(t);
    x_5 = t;
    t = p_4;
    t = r_0(t);
    y_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, y_5, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_33, (ATerm) ATinsert(CheckATermList(t_5), (ATerm) ATmakeAppl(sym_Str_1, x_5)))), n_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, p_4, q_4, t_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_5), x_4), z_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, p_4)))), m_5), (ATerm) ATmakeAppl(sym_Op_2, term_n_33, (ATerm) ATinsert(CheckATermList(t_5), (ATerm) ATmakeAppl(sym_Str_1, x_5))))), a_5))));
    return(t);
  }
  ATerm j_9 = NULL,n_9 = NULL,o_9 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL;
  o_9 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      q_9 = ATgetArgument(t, 0);
      r_9 = ATgetArgument(t, 1);
      s_9 = ATgetArgument(t, 2);
      t_9 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = t_9;
  if(match_cons(t, sym_Rule_3))
    {
      u_9 = ATgetArgument(t, 0);
      v_9 = ATgetArgument(t, 1);
      w_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_9;
  if(match_cons(t, sym_Op_2))
    {
      j_9 = ATgetArgument(t, 0);
      n_9 = ATgetArgument(t, 1);
      t = n_9;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_9;
          if(match_string(t, "Undefined"))
            {
              ATerm t_33 = t;
              int u_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL;
                  t = o_9;
                  t = new_0_0(t);
                  i_2 = t;
                  t = u_9;
                  t = dummify_old_0_0(t);
                  g_2 = t;
                  {
                    ATerm v_33 = t;
                    int w_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = g_2;
                        if((u_9 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, i_2);
                        LocalPopChoice(w_33);
                      }
                    else
                      {
                        t = v_33;
                        t = g_2;
                      }
                  }
                  j_2 = t;
                  t = q_9;
                  t = r_0(t);
                  k_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, k_2, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_y_32), g_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, q_9, r_9, s_9, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, i_2), u_9), term_y_32, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_9)))), j_2), term_y_32)), (ATerm) ATmakeAppl(sym_Seq_2, w_9, term_d_30)))));
                  LocalPopChoice(u_33);
                }
              else
                {
                  t = t_33;
                  t = y_9(q_9, r_9, s_9, u_9, v_9, w_9, o_9, t);
                }
            }
          else
            {
              t = y_9(q_9, r_9, s_9, u_9, v_9, w_9, o_9, t);
            }
        }
      else
        {
          t = j_9;
          t = y_9(q_9, r_9, s_9, u_9, v_9, w_9, o_9, t);
        }
    }
  else
    {
      t = y_9(q_9, r_9, s_9, u_9, v_9, w_9, o_9, t);
    }
  return(t);
}
static ATerm s_14 (ATerm h_179 (ATerm), ATerm m_103, ATerm k_103, ATerm l_103, ATerm p_103, ATerm n_103, ATerm t)
{
  ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL;
  t = new_0_0(t);
  d_10 = t;
  t = p_103;
  t = dummify_old_0_0(t);
  c_10 = t;
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_10;
        if((p_103 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, d_10);
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
        t = c_10;
      }
  }
  e_10 = t;
  t = m_103;
  t = h_179(t);
  f_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, f_10, c_10)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, m_103, k_103, l_103, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, d_10), p_103), term_y_32, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_103)))), e_10), term_q_34)), (ATerm) ATmakeAppl(sym_Seq_2, n_103, term_d_30))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm h_179 (ATerm), ATerm t)
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,p_10 = NULL,q_10 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
      n_10 = ATgetArgument(t, 2);
      {
        ATerm u_34 = ATgetArgument(t, 3);
        if(match_cons(u_34, sym_Rule_3))
          {
            p_10 = ATgetArgument(u_34, 0);
            {
              ATerm c_35 = ATgetArgument(u_34, 1);
              if(match_cons(c_35, sym_Op_2))
                {
                  ATerm d_35 = ATgetArgument(c_35, 0);
                  if((ATgetSymbol((ATermAppl) d_35) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm g_35 = ATgetArgument(c_35, 1);
                    if(((ATgetType(g_35) != AT_LIST) || !(ATisEmpty(g_35))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            q_10 = ATgetArgument(u_34, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_14(h_179, l_10, m_10, n_10, p_10, q_10, t);
  return(t);
}
ATerm escape_chars_1_0 (ATerm w_160 (ATerm), ATerm t)
{
  static ATerm r_11 (ATerm t);
  static ATerm r_11 (ATerm t)
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,o_3 = NULL;
        t = w_160(t);
        b_11 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_10 = ATgetFirst((ATermList) t);
            z_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_11);
        x_10 = t;
        t = z_10;
        t = Cons_2_0(_id, r_11, t);
        a_11 = t;
        t = (ATerm) ATinsert(CheckATermList(a_11), y_10);
        o_3 = t;
        t = SSLsetAnnotations(o_3, x_10);
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        {
          ATerm n_11 = NULL,p_11 = NULL,q_11 = NULL;
          q_11 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_11 = ATgetFirst((ATermList) t);
              p_11 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm x_2 = NULL,a_3 = NULL,p_3 = NULL;
                t = SSLgetAnnotations(q_11);
                x_2 = t;
                t = p_11;
                t = r_11(t);
                a_3 = t;
                t = (ATerm) ATinsert(CheckATermList(a_3), n_11);
                p_3 = t;
                t = SSLsetAnnotations(p_3, x_2);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_11;
            }
        }
      }
    return(t);
  }
  t = r_11(t);
  return(t);
}
static ATerm k_23 (ATerm a_14, ATerm e_14, ATerm t)
{
  t = a_14;
  {
    ATerm l_35 = t;
    if((PushChoice() == 0))
      {
        ATerm k_14 = NULL,n_14 = NULL,v_14 = NULL,x_14 = NULL,v_3 = NULL;
        x_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_14 = ATgetFirst((ATermList) t);
            v_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_14);
        k_14 = t;
        t = v_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(v_14), n_14);
        v_3 = t;
        t = SSLsetAnnotations(v_3, k_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_35;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_35, a_14);
  return(t);
}
static ATerm m_23 (ATerm g_15, ATerm h_15, ATerm l_15, ATerm t)
{
  ATerm x_15 = NULL,e_16 = NULL;
  t = SSL_explode_string(g_15);
  t = escape_chars_1_0(l_1, t);
  e_16 = t;
  t = SSL_implode_string(e_16);
  x_15 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, x_15, h_15);
  return(t);
}
static ATerm n_23 (ATerm j_17, ATerm k_17, ATerm t)
{
  t = j_17;
  {
    ATerm p_35 = t;
    if((PushChoice() == 0))
      {
        ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,x_3 = NULL;
        p_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_17 = ATgetFirst((ATermList) t);
            o_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_17);
        m_17 = t;
        t = o_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(o_17), n_17);
        x_3 = t;
        t = SSLsetAnnotations(x_3, m_17);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_35;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_f_30, j_17);
  return(t);
}
static ATerm p_23 (ATerm q_17, ATerm r_17, ATerm t)
{
  ATerm w_17 = NULL;
  t = q_17;
  {
    ATerm q_35 = t;
    int r_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_string(t, "'\\ '"))
          {
            t = term_s_35;
          }
        else
          {
            if(match_string(t, "'\\r'"))
              {
                t = term_t_35;
              }
            else
              {
                if(match_string(t, "'\\t'"))
                  {
                    t = term_u_35;
                  }
                else
                  {
                    if(match_string(t, "'\\n'"))
                      {
                        t = term_v_35;
                      }
                    else
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                          _fail(t);
                        t = term_x_35;
                      }
                  }
              }
          }
        LocalPopChoice(r_35);
      }
    else
      {
        t = q_35;
        {
          ATerm g_18 = NULL;
          t = SSL_explode_string(q_17);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm z_35 = ATgetFirst((ATermList) t);
              if(((ATgetType(z_35) != AT_INT) || (ATgetInt((ATermInt) z_35) != 39)))
                _fail(t);
              {
                ATerm b_36 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(b_36) == AT_LIST) && !(ATisEmpty(b_36))))
                  {
                    g_18 = ATgetFirst((ATermList) b_36);
                    {
                      ATerm c_36 = (ATerm) ATgetNext((ATermList) b_36);
                      if(((ATgetType(c_36) == AT_LIST) && !(ATisEmpty(c_36))))
                        {
                          ATerm d_36 = ATgetFirst((ATermList) c_36);
                          if(((ATgetType(d_36) != AT_INT) || (ATgetInt((ATermInt) d_36) != 39)))
                            _fail(t);
                          {
                            ATerm e_36 = (ATerm) ATgetNext((ATermList) c_36);
                            if(((ATgetType(e_36) != AT_LIST) || !(ATisEmpty(e_36))))
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
          t = g_18;
        }
      }
  }
  w_17 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, w_17);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_16 = ATgetFirst((ATermList) t);
      n_16 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_16;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(n_16), term_h_36), term_f_36);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(n_16), term_f_36), term_f_36);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(n_16), term_j_36), term_f_36);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(n_16), term_m_36), term_f_36);
            }
        }
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm s_3 = NULL,u_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_3 = ATgetFirst((ATermList) t);
      u_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_3;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(u_3), term_h_36), term_f_36);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(u_3), term_f_36), term_f_36);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(u_3), term_j_36), term_f_36);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(u_3), term_m_36), term_f_36);
            }
        }
    }
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL;
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_36, (ATerm) ATinsert(ATinsert(ATempty, m_19), l_19));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_u_36;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL;
  if(match_cons(t, sym__2))
    {
      o_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_36, (ATerm) ATinsert(ATinsert(ATempty, p_19), o_19));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm y_21 = NULL,c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      y_21 = ATgetArgument(t, 0);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_36, (ATerm) ATinsert(ATinsert(ATempty, c_22), y_21));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_w_36;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm h_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_36, (ATerm) ATinsert(ATinsert(ATempty, j_22), h_22));
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_w_36;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,o_4 = NULL;
  r_22 = t;
  t = SSL_explode_term(r_22);
  if(match_cons(t, sym__2))
    {
      ATerm x_36 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_36) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_36 = ATgetArgument(t, 1);
        if(((ATgetType(y_36) == AT_LIST) && !(ATisEmpty(y_36))))
          {
            s_22 = ATgetFirst((ATermList) y_36);
            {
              ATerm z_36 = (ATerm) ATgetNext((ATermList) y_36);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(r_22);
  if(match_cons(t, sym__2))
    {
      ATerm a_37 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_37) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_37 = ATgetArgument(t, 1);
        if(((ATgetType(c_37) == AT_LIST) && !(ATisEmpty(c_37))))
          {
            ATerm e_37 = ATgetFirst((ATermList) c_37);
            ATerm g_37 = (ATerm) ATgetNext((ATermList) c_37);
            if(((ATgetType(g_37) == AT_LIST) && !(ATisEmpty(g_37))))
              {
                o_4 = ATgetFirst((ATermList) g_37);
                {
                  ATerm h_37 = (ATerm) ATgetNext((ATermList) g_37);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_36, (ATerm) ATinsert(ATinsert(ATempty, o_4), s_22));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  q_18 = t;
  if(match_cons(t, sym_CongQ_2))
    {
      r_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
      {
        ATerm k_3 = NULL,l_3 = NULL;
        t = SSL_explode_string(r_18);
        t = escape_chars_1_0(m_1, t);
        l_3 = t;
        t = SSL_implode_string(l_3);
        k_3 = t;
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_3), s_18);
      }
    }
  else
    {
      if(match_cons(t, sym_CharCong_1))
        {
          r_18 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, r_18));
        }
      else
        {
          if(match_cons(t, sym_RealCong_1))
            {
              r_18 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, r_18));
            }
          else
            {
              if(match_cons(t, sym_IntCong_1))
                {
                  r_18 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, r_18));
                }
              else
                {
                  if(match_cons(t, sym_StrCong_1))
                    {
                      r_18 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, r_18));
                    }
                  else
                    {
                      if(match_cons(t, sym_ModCongNoArgs_1))
                        {
                          r_18 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_18), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_ModCong_2))
                            {
                              r_18 = ATgetArgument(t, 0);
                              s_18 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_18), s_18);
                            }
                          else
                            {
                              if(match_cons(t, sym_ListCong_2))
                                {
                                  r_18 = ATgetArgument(t, 0);
                                  s_18 = ATgetArgument(t, 1);
                                  {
                                    static ATerm n_1 (ATerm t);
                                    static ATerm n_1 (ATerm t)
                                    {
                                      t = s_18;
                                      return(t);
                                    }
                                    t = r_18;
                                    t = foldr_2_0(n_1, o_1, t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_ListCongNoTail_1))
                                    {
                                      r_18 = ATgetArgument(t, 0);
                                      t = r_18;
                                      t = foldr_2_0(p_1, q_1, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_TupleCong_2))
                                        {
                                          r_18 = ATgetArgument(t, 0);
                                          s_18 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Call_2, term_n_35, (ATerm) ATinsert(CheckATermList(s_18), r_18));
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_TupleCong_1))
                                            {
                                              r_18 = ATgetArgument(t, 0);
                                              t = r_18;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  m_18 = ATgetFirst((ATermList) t);
                                                  n_18 = (ATerm) ATgetNext((ATermList) t);
                                                  t = n_18;
                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                    {
                                                      ATerm i_37 = t;
                                                      int k_37 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = k_23(r_18, q_18, t);
                                                          LocalPopChoice(k_37);
                                                        }
                                                      else
                                                        {
                                                          t = i_37;
                                                          t = m_18;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = k_23(r_18, q_18, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = k_23(r_18, q_18, t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_EmptyTupleCong_0))
                                                {
                                                  t = term_l_37;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_AnnoCong_2))
                                                    {
                                                      r_18 = ATgetArgument(t, 0);
                                                      s_18 = ATgetArgument(t, 1);
                                                      t = s_18;
                                                      if(match_cons(t, sym_StrategyCurly_1))
                                                        {
                                                          l_18 = ATgetArgument(t, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_Call_2, term_n_37, (ATerm) ATinsert(ATinsert(ATempty, l_18), r_18));
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_ParenStrat_1))
                                                        {
                                                          r_18 = ATgetArgument(t, 0);
                                                          t = r_18;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_StratRuleNoCond_2))
                                                            {
                                                              r_18 = ATgetArgument(t, 0);
                                                              s_18 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_StratRule_3, r_18, s_18, term_e_30);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RuleNoCond_2))
                                                                {
                                                                  r_18 = ATgetArgument(t, 0);
                                                                  s_18 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Rule_3, r_18, s_18, term_e_30);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_OverlayNoArgs_2))
                                                                    {
                                                                      r_18 = ATgetArgument(t, 0);
                                                                      s_18 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Overlay_3, r_18, (ATerm)ATempty, s_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          r_18 = ATgetArgument(t, 0);
                                                                          s_18 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, s_18, r_18);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Call_2))
                                                                            {
                                                                              r_18 = ATgetArgument(t, 0);
                                                                              s_18 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_CallT_3, r_18, s_18, (ATerm) ATempty);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_CallNoArgs_1))
                                                                                {
                                                                                  r_18 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, r_18, (ATerm)ATempty, (ATerm) ATempty);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SDef_3))
                                                                                    {
                                                                                      r_18 = ATgetArgument(t, 0);
                                                                                      s_18 = ATgetArgument(t, 1);
                                                                                      p_18 = ATgetArgument(t, 2);
                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, r_18, s_18, (ATerm)ATempty, p_18);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefNoArgs_2))
                                                                                        {
                                                                                          r_18 = ATgetArgument(t, 0);
                                                                                          s_18 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_SDefT_4, r_18, (ATerm)ATempty, (ATerm)ATempty, s_18);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_SRDef_3))
                                                                                            {
                                                                                              r_18 = ATgetArgument(t, 0);
                                                                                              s_18 = ATgetArgument(t, 1);
                                                                                              p_18 = ATgetArgument(t, 2);
                                                                                              t = (ATerm) ATmakeAppl(sym_SRDefT_4, r_18, s_18, (ATerm)ATempty, p_18);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                {
                                                                                                  r_18 = ATgetArgument(t, 0);
                                                                                                  s_18 = ATgetArgument(t, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_SRDefT_4, r_18, (ATerm)ATempty, (ATerm)ATempty, s_18);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_RDef_3))
                                                                                                    {
                                                                                                      r_18 = ATgetArgument(t, 0);
                                                                                                      s_18 = ATgetArgument(t, 1);
                                                                                                      p_18 = ATgetArgument(t, 2);
                                                                                                      t = (ATerm) ATmakeAppl(sym_RDefT_4, r_18, s_18, (ATerm)ATempty, p_18);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                        {
                                                                                                          r_18 = ATgetArgument(t, 0);
                                                                                                          s_18 = ATgetArgument(t, 1);
                                                                                                          t = (ATerm) ATmakeAppl(sym_RDefT_4, r_18, (ATerm)ATempty, (ATerm)ATempty, s_18);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          ATerm o_37 = t;
                                                                                                          int q_37 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Module_2))
                                                                                                                {
                                                                                                                  ATerm s_37 = ATgetArgument(t, 0);
                                                                                                                  s_18 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(q_37);
                                                                                                              t = (ATerm) ATmakeAppl(sym_Specification_1, s_18);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = o_37;
                                                                                                              if(match_cons(t, sym_OpQ_2))
                                                                                                                {
                                                                                                                  r_18 = ATgetArgument(t, 0);
                                                                                                                  s_18 = ATgetArgument(t, 1);
                                                                                                                  t = m_23(r_18, s_18, q_18, t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_ListTail_2))
                                                                                                                    {
                                                                                                                      r_18 = ATgetArgument(t, 0);
                                                                                                                      s_18 = ATgetArgument(t, 1);
                                                                                                                      {
                                                                                                                        static ATerm r_1 (ATerm t);
                                                                                                                        static ATerm r_1 (ATerm t)
                                                                                                                        {
                                                                                                                          t = s_18;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = r_18;
                                                                                                                        t = foldr_2_0(r_1, s_1, t);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_List_1))
                                                                                                                        {
                                                                                                                          r_18 = ATgetArgument(t, 0);
                                                                                                                          t = r_18;
                                                                                                                          t = foldr_2_0(t_1, u_1, t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_Tuple_1))
                                                                                                                            {
                                                                                                                              r_18 = ATgetArgument(t, 0);
                                                                                                                              t = r_18;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  m_18 = ATgetFirst((ATermList) t);
                                                                                                                                  n_18 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                  t = n_18;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      ATerm u_37 = t;
                                                                                                                                      int w_37 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = n_23(r_18, q_18, t);
                                                                                                                                          LocalPopChoice(w_37);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = u_37;
                                                                                                                                          t = m_18;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = n_23(r_18, q_18, t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = n_23(r_18, q_18, t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_Anno_2))
                                                                                                                                {
                                                                                                                                  r_18 = ATgetArgument(t, 0);
                                                                                                                                  s_18 = ATgetArgument(t, 1);
                                                                                                                                  {
                                                                                                                                    ATerm p_22 = NULL;
                                                                                                                                    t = s_18;
                                                                                                                                    t = foldr_2_0(v_1, w_1, t);
                                                                                                                                    p_22 = t;
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Anno_2, r_18, p_22);
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_SortNoArgs_1))
                                                                                                                                    {
                                                                                                                                      r_18 = ATgetArgument(t, 0);
                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Sort_2, r_18, (ATerm) ATempty);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_Char_1))
                                                                                                                                        {
                                                                                                                                          r_18 = ATgetArgument(t, 0);
                                                                                                                                          t = p_23(r_18, q_18, t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          ATerm y_37 = t;
                                                                                                                                          int a_38 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_Con4_4))
                                                                                                                                                {
                                                                                                                                                  r_18 = ATgetArgument(t, 0);
                                                                                                                                                  {
                                                                                                                                                    ATerm b_38 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                  p_18 = ATgetArgument(t, 2);
                                                                                                                                                  o_18 = ATgetArgument(t, 3);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              LocalPopChoice(a_38);
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Con_3, r_18, p_18, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, o_18), (ATerm) ATempty));
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = y_37;
                                                                                                                                              {
                                                                                                                                                ATerm e_38 = t;
                                                                                                                                                int f_38 = stack_ptr;
                                                                                                                                                if((PushChoice() == 0))
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Con3_3))
                                                                                                                                                      {
                                                                                                                                                        r_18 = ATgetArgument(t, 0);
                                                                                                                                                        {
                                                                                                                                                          ATerm g_38 = ATgetArgument(t, 1);
                                                                                                                                                        }
                                                                                                                                                        p_18 = ATgetArgument(t, 2);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    LocalPopChoice(f_38);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, r_18, p_18, term_j_38);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = e_38;
                                                                                                                                                    if(match_cons(t, sym_Con1_2))
                                                                                                                                                      {
                                                                                                                                                        r_18 = ATgetArgument(t, 0);
                                                                                                                                                        s_18 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, r_18, s_18, term_j_38);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
  ATerm r_23 = NULL,s_23 = NULL,u_23 = NULL;
  s_23 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      u_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
      {
        ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL;
        t = s_23;
        t = new_0_0(t);
        x_23 = t;
        t = new_0_0(t);
        y_23 = t;
        t = new_0_0(t);
        z_23 = t;
        t = new_0_0(t);
        a_24 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_24), z_23), y_23), x_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, x_23), (ATerm) ATmakeAppl(sym_Var_1, z_23))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, u_23, (ATerm)ATmakeAppl(sym_Var_1, x_23), (ATerm) ATmakeAppl(sym_Var_1, y_23)), (ATerm) ATmakeAppl(sym_BAM_3, r_23, (ATerm)ATmakeAppl(sym_Var_1, z_23), (ATerm) ATmakeAppl(sym_Var_1, a_24)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_l_38, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_24)), (ATerm) ATmakeAppl(sym_Var_1, y_23))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          u_23 = ATgetArgument(t, 0);
          {
            ATerm c_24 = NULL,h_24 = NULL,j_24 = NULL,l_24 = NULL;
            t = s_23;
            t = new_0_0(t);
            j_24 = t;
            t = u_23;
            {
              static ATerm x_1 (ATerm t);
              static ATerm x_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((c_24 != NULL) && (c_24 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      c_24 = ATgetArgument(t, 0);
                    if(((h_24 != NULL) && (h_24 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      h_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, j_24);
                return(t);
              }
              t = oncetd_1_0(x_1, t);
            }
            l_24 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_38, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_24)), not_null(c_24))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_24)), (ATerm) ATmakeAppl(sym_Build_1, l_24))));
          }
        }
      else
        {
          ATerm n_24 = NULL,o_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              u_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_23;
          t = new_0_0(t);
          t_24 = t;
          t = new_0_0(t);
          u_24 = t;
          t = u_23;
          {
            static ATerm y_1 (ATerm t);
            static ATerm y_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((n_24 != NULL) && (n_24 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    n_24 = ATgetArgument(t, 0);
                  if(((o_24 != NULL) && (o_24 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    o_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, t_24);
              return(t);
            }
            t = oncetd_1_0(y_1, t);
          }
          v_24 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_24), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_24)), (ATerm) ATmakeAppl(sym_PrimT_3, term_n_38, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_24))))), (ATerm)ATmakeAppl(sym_Var_1, t_24), (ATerm) ATmakeAppl(sym_Op_2, term_f_30, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_24)), not_null(n_24)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm y_24 = NULL,z_24 = NULL;
  y_24 = t;
  if(match_cons(t, sym_Match_1))
    {
      z_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_38 = t;
    int p_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_25 = NULL,o_25 = NULL,l_26 = NULL,m_26 = NULL;
        t = y_24;
        t = new_0_0(t);
        l_26 = t;
        t = z_24;
        {
          static ATerm z_1 (ATerm t);
          static ATerm z_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((n_25 != NULL) && (n_25 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_25 = ATgetArgument(t, 0);
                if(((o_25 != NULL) && (o_25 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  o_25 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_26), n_25);
            return(t);
          }
          t = pat_td_1_0(z_1, t);
        }
        m_26 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_26), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_q_38, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_26))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_25))))));
        LocalPopChoice(p_38);
      }
    else
      {
        t = o_38;
        {
          ATerm t_38 = t;
          int w_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
              t = y_24;
              t = new_0_0(t);
              p_26 = t;
              t = z_24;
              {
                static ATerm a_2 (ATerm t);
                static ATerm a_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((o_26 != NULL) && (o_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        o_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, p_26);
                  return(t);
                }
                t = pat_td_1_0(a_2, t);
              }
              q_26 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_26)), not_null(o_26))));
              LocalPopChoice(w_38);
            }
          else
            {
              t = t_38;
              {
                ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,y_26 = NULL;
                t = y_24;
                t = new_0_0(t);
                u_26 = t;
                t = z_24;
                {
                  static ATerm b_2 (ATerm t);
                  static ATerm b_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((t_26 != NULL) && (t_26 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          t_26 = ATgetArgument(t, 0);
                        if(((s_26 != NULL) && (s_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, u_26);
                    return(t);
                  }
                  t = pat_td_1_0(b_2, t);
                }
                y_26 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, u_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_26)), not_null(t_26)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm q_177 (ATerm), ATerm t)
{
  ATerm x_38 = t;
  int z_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_177(t);
      LocalPopChoice(z_38);
    }
  else
    {
      t = x_38;
      {
        ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL;
        y_30 = t;
        if(match_cons(t, sym_Op_2))
          {
            z_30 = ATgetArgument(t, 0);
            a_31 = ATgetArgument(t, 1);
            {
              ATerm w_4 = NULL,e_5 = NULL,d_4 = NULL;
              t = SSLgetAnnotations(y_30);
              w_4 = t;
              t = a_31;
              {
                static ATerm c_2 (ATerm t);
                static ATerm c_2 (ATerm t)
                {
                  t = pat_td_1_0(q_177, t);
                  return(t);
                }
                t = fetch_1_0(c_2, t);
              }
              e_5 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, z_30, e_5);
              d_4 = t;
              t = SSLsetAnnotations(d_4, w_4);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                z_30 = ATgetArgument(t, 0);
                a_31 = ATgetArgument(t, 1);
                {
                  ATerm b_39 = t;
                  int d_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_6 = NULL,i_6 = NULL,e_4 = NULL;
                      t = SSLgetAnnotations(y_30);
                      a_6 = t;
                      t = a_31;
                      t = pat_td_1_0(q_177, t);
                      i_6 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, z_30, i_6);
                      e_4 = t;
                      t = SSLsetAnnotations(e_4, a_6);
                      LocalPopChoice(d_39);
                    }
                  else
                    {
                      t = b_39;
                      {
                        ATerm d_7 = NULL,l_7 = NULL,f_4 = NULL;
                        t = SSLgetAnnotations(y_30);
                        d_7 = t;
                        t = z_30;
                        t = pat_td_1_0(q_177, t);
                        l_7 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, l_7, a_31);
                        f_4 = t;
                        t = SSLsetAnnotations(f_4, d_7);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    z_30 = ATgetArgument(t, 0);
                    a_31 = ATgetArgument(t, 1);
                    x_30 = ATgetArgument(t, 2);
                    {
                      ATerm m_8 = NULL,w_8 = NULL,i_4 = NULL;
                      t = SSLgetAnnotations(y_30);
                      m_8 = t;
                      t = x_30;
                      {
                        static ATerm d_2 (ATerm t);
                        static ATerm d_2 (ATerm t)
                        {
                          t = pat_td_1_0(q_177, t);
                          return(t);
                        }
                        t = fetch_1_0(d_2, t);
                      }
                      w_8 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, z_30, a_31, w_8);
                      i_4 = t;
                      t = SSLsetAnnotations(i_4, m_8);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        z_30 = ATgetArgument(t, 0);
                        a_31 = ATgetArgument(t, 1);
                        x_30 = ATgetArgument(t, 2);
                        {
                          ATerm g_10 = NULL,s_10 = NULL,j_4 = NULL;
                          t = SSLgetAnnotations(y_30);
                          g_10 = t;
                          t = x_30;
                          {
                            static ATerm e_2 (ATerm t);
                            static ATerm e_2 (ATerm t)
                            {
                              t = pat_td_1_0(q_177, t);
                              return(t);
                            }
                            t = fetch_1_0(e_2, t);
                          }
                          s_10 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, z_30, a_31, s_10);
                          j_4 = t;
                          t = SSLsetAnnotations(j_4, g_10);
                        }
                      }
                    else
                      {
                        ATerm u_11 = NULL,x_11 = NULL,k_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            z_30 = ATgetArgument(t, 0);
                            a_31 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(y_30);
                        u_11 = t;
                        t = a_31;
                        t = pat_td_1_0(q_177, t);
                        x_11 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, z_30, x_11);
                        k_4 = t;
                        t = SSLsetAnnotations(k_4, u_11);
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
  ATerm q_31 = NULL,r_31 = NULL;
  q_31 = t;
  if(match_cons(t, sym_Build_1))
    {
      r_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_31 = NULL,t_31 = NULL,v_31 = NULL,w_31 = NULL;
        t = q_31;
        t = new_0_0(t);
        v_31 = t;
        t = r_31;
        {
          static ATerm f_2 (ATerm t);
          static ATerm f_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((s_31 != NULL) && (s_31 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_31 = ATgetArgument(t, 0);
                if(((t_31 != NULL) && (t_31 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  t_31 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, v_31);
            return(t);
          }
          t = pat_td_1_0(f_2, t);
        }
        w_31 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_31), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_g_39, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_31)), not_null(s_31))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_31)))), (ATerm) ATmakeAppl(sym_Build_1, w_31)));
        LocalPopChoice(f_39);
      }
    else
      {
        t = e_39;
        {
          ATerm h_39 = t;
          int i_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_31 = NULL,a_32 = NULL,b_32 = NULL;
              t = q_31;
              t = new_0_0(t);
              a_32 = t;
              t = r_31;
              {
                static ATerm h_2 (ATerm t);
                static ATerm h_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((y_31 != NULL) && (y_31 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_31 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, a_32);
                  return(t);
                }
                t = pat_td_1_0(h_2, t);
              }
              b_32 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(y_31), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_32)))), (ATerm) ATmakeAppl(sym_Build_1, b_32)));
              LocalPopChoice(i_39);
            }
          else
            {
              t = h_39;
              {
                ATerm c_32 = NULL,k_32 = NULL,w_32 = NULL,x_32 = NULL;
                t = q_31;
                t = new_0_0(t);
                w_32 = t;
                t = r_31;
                {
                  static ATerm l_2 (ATerm t);
                  static ATerm l_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((c_32 != NULL) && (c_32 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          c_32 = ATgetArgument(t, 0);
                        if(((k_32 != NULL) && (k_32 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_32 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_32);
                    return(t);
                  }
                  t = pat_td_1_0(l_2, t);
                }
                x_32 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(c_32), not_null(k_32), (ATerm) ATmakeAppl(sym_Var_1, w_32))), (ATerm) ATmakeAppl(sym_Build_1, x_32)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm l_39 = t;
  if((PushChoice() == 0))
    {
      ATerm r_33 = NULL,s_33 = NULL,x_33 = NULL,z_9 = NULL;
      x_33 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_33);
      r_33 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_33);
      z_9 = t;
      t = SSLsetAnnotations(z_9, r_33);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_39;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_39;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_33 = ATgetFirst((ATermList) t);
      z_33 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_39 = ATgetArgument(t, 0);
      if(match_cons(n_39, sym__2))
        {
          a_34 = ATgetArgument(n_39, 0);
          b_34 = ATgetArgument(n_39, 1);
        }
      else
        _fail(t);
      {
        ATerm o_39 = ATgetArgument(t, 1);
        if(match_cons(o_39, sym__2))
          {
            c_34 = ATgetArgument(o_39, 0);
            d_34 = ATgetArgument(o_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_34), a_34), (ATerm) ATinsert(CheckATermList(d_34), b_34));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_39;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_34 = ATgetFirst((ATermList) t);
      f_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm g_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_39 = ATgetArgument(t, 0);
      if(match_cons(p_39, sym__2))
        {
          g_34 = ATgetArgument(p_39, 0);
          l_34 = ATgetArgument(p_39, 1);
        }
      else
        _fail(t);
      {
        ATerm q_39 = ATgetArgument(t, 1);
        if(match_cons(q_39, sym__2))
          {
            m_34 = ATgetArgument(q_39, 0);
            n_34 = ATgetArgument(q_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_34), g_34), (ATerm) ATinsert(CheckATermList(n_34), l_34));
  return(t);
}
static ATerm y_14 (ATerm z_93, ATerm a_94, ATerm b_94, ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,d_11 = NULL;
  t = b_94;
  t = fetch_1_0(m_2, t);
  t = b_94;
  t = genzip_4_0(n_2, o_2, p_2, LiftPrimArg_0_0, t);
  l_33 = t;
  if(match_cons(t, sym__2))
    {
      h_33 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_33);
  g_33 = t;
  t = h_33;
  t = concat_0_0(t);
  j_33 = t;
  t = i_33;
  t = genzip_4_0(q_2, r_2, s_2, _id, t);
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_33, k_33);
  d_11 = t;
  t = SSLsetAnnotations(d_11, g_33);
  if(match_cons(t, sym__2))
    {
      d_33 = ATgetArgument(t, 0);
      {
        ATerm r_39 = ATgetArgument(t, 1);
        if(match_cons(r_39, sym__2))
          {
            e_33 = ATgetArgument(r_39, 0);
            f_33 = ATgetArgument(r_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, d_33, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_33), (ATerm) ATmakeAppl(sym_CallT_3, z_93, a_94, f_33)));
  return(t);
}
static ATerm m_35 (ATerm t_34, ATerm t)
{
  ATerm v_34 = NULL;
  t = t_34;
  {
    ATerm s_39 = t;
    if((PushChoice() == 0))
      {
        ATerm z_34 = NULL,b_35 = NULL,e_35 = NULL,g_11 = NULL;
        e_35 = t;
        if(match_cons(t, sym_Var_1))
          {
            b_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_35);
        z_34 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, b_35);
        g_11 = t;
        t = SSLsetAnnotations(g_11, z_34);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_39;
      }
  }
  t = new_0_0(t);
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, v_34), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_34)))), (ATerm) ATmakeAppl(sym_Var_1, v_34)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm f_35 = NULL,k_35 = NULL;
  f_35 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_35 = ATgetArgument(t, 0);
      {
        ATerm t_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_35(f_35, t);
            LocalPopChoice(u_39);
          }
        else
          {
            t = t_39;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_e_30, (ATerm) ATmakeAppl(sym_Var_1, k_35)));
          }
      }
    }
  else
    {
      t = m_35(f_35, t);
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm v_39 = t;
  if((PushChoice() == 0))
    {
      ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,i_11 = NULL;
      u_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          t_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_12);
      s_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, t_12);
      i_11 = t;
      t = SSLsetAnnotations(i_11, s_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_39;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_39;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_12 = ATgetFirst((ATermList) t);
      w_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_12, w_12);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_39 = ATgetArgument(t, 0);
      if(match_cons(w_39, sym__2))
        {
          x_12 = ATgetArgument(w_39, 0);
          y_12 = ATgetArgument(w_39, 1);
        }
      else
        _fail(t);
      {
        ATerm x_39 = ATgetArgument(t, 1);
        if(match_cons(x_39, sym__2))
          {
            z_12 = ATgetArgument(x_39, 0);
            a_13 = ATgetArgument(x_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_12), x_12), (ATerm) ATinsert(CheckATermList(a_13), y_12));
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_39;
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm c_13 = NULL,j_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_13 = ATgetFirst((ATermList) t);
      j_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_13, j_13);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm k_13 = NULL,m_13 = NULL,o_13 = NULL,p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_39 = ATgetArgument(t, 0);
      if(match_cons(y_39, sym__2))
        {
          k_13 = ATgetArgument(y_39, 0);
          m_13 = ATgetArgument(y_39, 1);
        }
      else
        _fail(t);
      {
        ATerm z_39 = ATgetArgument(t, 1);
        if(match_cons(z_39, sym__2))
          {
            o_13 = ATgetArgument(z_39, 0);
            p_13 = ATgetArgument(z_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_13), k_13), (ATerm) ATinsert(CheckATermList(p_13), m_13));
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm a_40 = t;
  if((PushChoice() == 0))
    {
      ATerm u_14 = NULL,w_14 = NULL,z_14 = NULL,m_11 = NULL;
      z_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_14);
      u_14 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, w_14);
      m_11 = t;
      t = SSLsetAnnotations(m_11, u_14);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_40;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_39;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_15 = ATgetFirst((ATermList) t);
      b_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_15, b_15);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm e_15 = NULL,i_15 = NULL,j_15 = NULL,o_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_40 = ATgetArgument(t, 0);
      if(match_cons(c_40, sym__2))
        {
          e_15 = ATgetArgument(c_40, 0);
          i_15 = ATgetArgument(c_40, 1);
        }
      else
        _fail(t);
      {
        ATerm d_40 = ATgetArgument(t, 1);
        if(match_cons(d_40, sym__2))
          {
            j_15 = ATgetArgument(d_40, 0);
            o_15 = ATgetArgument(d_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_15), e_15), (ATerm) ATinsert(CheckATermList(o_15), i_15));
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_39;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_15 = ATgetFirst((ATermList) t);
      r_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_15, r_15);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm s_15 = NULL,v_15 = NULL,w_15 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_40 = ATgetArgument(t, 0);
      if(match_cons(e_40, sym__2))
        {
          s_15 = ATgetArgument(e_40, 0);
          v_15 = ATgetArgument(e_40, 1);
        }
      else
        _fail(t);
      {
        ATerm f_40 = ATgetArgument(t, 1);
        if(match_cons(f_40, sym__2))
          {
            w_15 = ATgetArgument(f_40, 0);
            b_16 = ATgetArgument(f_40, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_15), s_15), (ATerm) ATinsert(CheckATermList(b_16), v_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm b_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_40 = ATgetArgument(t, 0);
      i_40 = ATgetArgument(t, 1);
      b_40 = ATgetArgument(t, 2);
      {
        ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,k_11 = NULL;
        t = b_40;
        t = fetch_1_0(t_2, t);
        t = b_40;
        t = genzip_4_0(u_2, v_2, y_2, LiftPrimArg_0_0, t);
        r_12 = t;
        if(match_cons(t, sym__2))
          {
            n_12 = ATgetArgument(t, 0);
            o_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_12);
        m_12 = t;
        t = n_12;
        t = concat_0_0(t);
        p_12 = t;
        t = o_12;
        t = genzip_4_0(z_2, b_3, c_3, _id, t);
        q_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_12, q_12);
        k_11 = t;
        t = SSLsetAnnotations(k_11, m_12);
        if(match_cons(t, sym__2))
          {
            j_12 = ATgetArgument(t, 0);
            {
              ATerm j_40 = ATgetArgument(t, 1);
              if(match_cons(j_40, sym__2))
                {
                  k_12 = ATgetArgument(j_40, 0);
                  l_12 = ATgetArgument(j_40, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_12), (ATerm) ATmakeAppl(sym_PrimT_3, h_40, i_40, l_12)));
      }
    }
  else
    {
      ATerm h_14 = NULL,i_14 = NULL,l_14 = NULL,m_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,t_14 = NULL,s_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          h_40 = ATgetArgument(t, 0);
          i_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_40;
      t = fetch_1_0(d_3, t);
      t = i_40;
      t = genzip_4_0(e_3, f_3, g_3, LiftPrimArg_0_0, t);
      t_14 = t;
      if(match_cons(t, sym__2))
        {
          o_14 = ATgetArgument(t, 0);
          p_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_14);
      m_14 = t;
      t = o_14;
      t = concat_0_0(t);
      q_14 = t;
      t = p_14;
      t = genzip_4_0(h_3, i_3, j_3, _id, t);
      r_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_14, r_14);
      s_11 = t;
      t = SSLsetAnnotations(s_11, m_14);
      if(match_cons(t, sym__2))
        {
          h_14 = ATgetArgument(t, 0);
          {
            ATerm k_40 = ATgetArgument(t, 1);
            if(match_cons(k_40, sym__2))
              {
                i_14 = ATgetArgument(k_40, 0);
                l_14 = ATgetArgument(k_40, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, h_14, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_14), (ATerm) ATmakeAppl(sym_PrimT_3, h_40, (ATerm)ATempty, l_14)));
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm f_41 = NULL,h_41 = NULL,m_41 = NULL,n_41 = NULL;
  n_41 = t;
  if(match_cons(t, sym_Con_3))
    {
      f_41 = ATgetArgument(t, 0);
      h_41 = ATgetArgument(t, 1);
      m_41 = ATgetArgument(t, 2);
      {
        ATerm y_17 = NULL,g_13 = NULL;
        t = SSLgetAnnotations(n_41);
        y_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, f_41, h_41, m_41);
        g_13 = t;
        t = SSLsetAnnotations(g_13, y_17);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = n_41;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm m_40 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(n_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_40;
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
  q_44 = t;
  if(match_cons(t, sym_Con_3))
    {
      r_44 = ATgetArgument(t, 0);
      s_44 = ATgetArgument(t, 1);
      p_44 = ATgetArgument(t, 2);
      {
        ATerm x_18 = NULL,i_13 = NULL;
        t = SSLgetAnnotations(q_44);
        x_18 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, r_44, s_44, p_44);
        i_13 = t;
        t = SSLsetAnnotations(i_13, x_18);
      }
    }
  else
    {
      ATerm e_20 = NULL,l_13 = NULL;
      if(match_cons(t, sym_App_2))
        {
          r_44 = ATgetArgument(t, 0);
          s_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_44);
      e_20 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, r_44, s_44);
      l_13 = t;
      t = SSLsetAnnotations(l_13, e_20);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm n_40 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(q_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_40;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm i_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      i_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_45;
  if(match_cons(t, sym_StratRule_3))
    {
      k_45 = ATgetArgument(t, 0);
      l_45 = ATgetArgument(t, 1);
      m_45 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, l_45), (ATerm) ATmakeAppl(sym_Where_1, m_45)), k_45));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          k_45 = ATgetArgument(t, 0);
          l_45 = ATgetArgument(t, 1);
          m_45 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_45;
      t = pureterm_0_0(t);
      t = l_45;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, l_45)), (ATerm) ATmakeAppl(sym_Where_1, m_45)), (ATerm) ATmakeAppl(sym_Match_1, k_45)));
    }
  return(t);
}
static ATerm c_15 (ATerm m_89, ATerm n_89, ATerm o_89, ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL;
  t = new_0_0(t);
  h_46 = t;
  t = m_89;
  {
    static ATerm r_3 (ATerm t);
    static ATerm r_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm o_40 = ATgetArgument(t, 0);
          if(match_cons(o_40, sym_Var_1))
            {
              if(((f_46 != NULL) && (f_46 != ATgetArgument(o_40, 0))))
                _fail(ATgetArgument(o_40, 0));
              else
                f_46 = ATgetArgument(o_40, 0);
            }
          else
            _fail(t);
          if(((d_46 != NULL) && (d_46 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_46 = ATgetArgument(t, 1);
          {
            ATerm p_40 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, f_46);
      return(t);
    }
    t = oncetd_1_0(r_3, t);
  }
  i_46 = t;
  t = n_89;
  {
    static ATerm t_3 (ATerm t);
    static ATerm t_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm q_40 = ATgetArgument(t, 0);
          if(match_cons(q_40, sym_Var_1))
            {
              if(((f_46 != NULL) && (f_46 != ATgetArgument(q_40, 0))))
                _fail(ATgetArgument(q_40, 0));
              else
                f_46 = ATgetArgument(q_40, 0);
            }
          else
            _fail(t);
          if(((e_46 != NULL) && (e_46 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_46 = ATgetArgument(t, 1);
          {
            ATerm r_40 = ATgetArgument(t, 2);
            if(match_cons(r_40, sym_CallT_3))
              {
                if(((c_46 != NULL) && (c_46 != ATgetArgument(r_40, 0))))
                  _fail(ATgetArgument(r_40, 0));
                else
                  c_46 = ATgetArgument(r_40, 0);
                {
                  ATerm t_40 = ATgetArgument(r_40, 1);
                  if(((ATgetType(t_40) != AT_LIST) || !(ATisEmpty(t_40))))
                    _fail(t);
                }
                {
                  ATerm w_40 = ATgetArgument(r_40, 2);
                  if(((ATgetType(w_40) != AT_LIST) || !(ATisEmpty(w_40))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, h_46);
      return(t);
    }
    t = oncetd_1_0(t_3, t);
  }
  j_46 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_46), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, i_46, j_46, (ATerm) ATmakeAppl(sym_Seq_2, o_89, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(c_46), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_46), not_null(e_46), term_e_30))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_46)), (ATerm) ATmakeAppl(sym_Var_1, h_46))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm x_40 = t;
  int y_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_40 = t;
      int a_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,k_47 = NULL,l_47 = NULL,r_47 = NULL;
          k_47 = t;
          if(match_cons(t, sym_SRule_1))
            {
              l_47 = ATgetArgument(t, 0);
              t = l_47;
              if(match_cons(t, sym_Rule_3))
                {
                  f_47 = ATgetArgument(t, 0);
                  g_47 = ATgetArgument(t, 1);
                  h_47 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = k_47;
              t = c_15(f_47, g_47, h_47, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm x_20 = NULL,f_21 = NULL,u_13 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  l_47 = ATgetArgument(t, 0);
                  r_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_47);
              x_20 = t;
              t = r_47;
              t = desugarRule_0_0(t);
              f_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, l_47, f_21);
              u_13 = t;
              t = SSLsetAnnotations(u_13, x_20);
            }
          LocalPopChoice(a_41);
        }
      else
        {
          t = z_40;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(y_40);
    }
  else
    {
      t = x_40;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
    }
  t = repeat_2_0(y_3, _id, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm d_41 = t;
  int e_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(e_41);
    }
  else
    {
      t = d_41;
      {
        ATerm g_41 = t;
        int i_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_48 = NULL,m_48 = NULL,n_48 = NULL,s_48 = NULL;
            j_48 = t;
            if(match_cons(t, sym_CallT_3))
              {
                m_48 = ATgetArgument(t, 0);
                n_48 = ATgetArgument(t, 1);
                s_48 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = j_48;
            t = y_14(m_48, n_48, s_48, t);
            LocalPopChoice(i_41);
          }
        else
          {
            t = g_41;
            {
              ATerm j_41 = t;
              int k_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(k_41);
                }
              else
                {
                  t = j_41;
                  {
                    ATerm l_41 = t;
                    int o_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(o_41);
                      }
                    else
                      {
                        t = l_41;
                        {
                          ATerm p_41 = t;
                          int r_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_41 = t;
                              int t_41 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      c_49 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = c_49;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      d_49 = ATgetArgument(t, 0);
                                      t = d_49;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          d_49 = ATgetArgument(t, 0);
                                          e_49 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, d_49, e_49);
                                    }
                                  LocalPopChoice(t_41);
                                }
                              else
                                {
                                  t = s_41;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(r_41);
                            }
                          else
                            {
                              t = p_41;
                              {
                                ATerm u_41 = t;
                                int v_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(v_41);
                                  }
                                else
                                  {
                                    t = u_41;
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
  t = topdown_1_0(w_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm i_51 = NULL,j_51 = NULL,o_51 = NULL;
  i_51 = t;
  {
    ATerm w_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm c_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_42);
        t = i_51;
        {
          ATerm d_42 = t;
          if((PushChoice() == 0))
            {
              ATerm e_22 = NULL,f_22 = NULL,i_22 = NULL,l_22 = NULL,z_13 = NULL;
              l_22 = t;
              if(match_cons(t, sym_Var_1))
                {
                  f_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(l_22);
              e_22 = t;
              t = f_22;
              {
                ATerm e_42 = t;
                int f_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(f_42);
                  }
                else
                  {
                    t = e_42;
                    {
                      ATerm i_23 = NULL,t_23 = NULL,d_24 = NULL,w_13 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          i_23 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(f_22);
                      t_23 = t;
                      t = i_23;
                      t = ContextVar_0_0(t);
                      d_24 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, d_24);
                      w_13 = t;
                      t = SSLsetAnnotations(w_13, t_23);
                    }
                  }
              }
              i_22 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, i_22);
              z_13 = t;
              t = SSLsetAnnotations(z_13, e_22);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_42;
            }
        }
        t = term_w_36;
      }
    else
      {
        t = w_41;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_w_36;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                j_51 = ATgetArgument(t, 0);
                {
                  ATerm r_51 = NULL;
                  t = j_51;
                  t = free_vars_3_0(a_4, b_4, tboundin_3_0, t);
                  t = map_1_0(l_4, t);
                  r_51 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_42, r_51);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    j_51 = ATgetArgument(t, 0);
                    o_51 = ATgetArgument(t, 1);
                    {
                      ATerm c_53 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, j_51, o_51);
                      t = free_vars_3_0(n_4, r_4, tboundin_3_0, t);
                      t = map_1_0(y_4, t);
                      c_53 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_g_42, c_53);
                    }
                  }
                else
                  {
                    ATerm f_24 = NULL,g_24 = NULL,k_24 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm h_42 = ATgetArgument(t, 0);
                        ATerm i_42 = ATgetArgument(t, 1);
                        ATerm j_42 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_k_42;
                    g_24 = t;
                    t = (ATerm) ATinsert(ATempty, term_l_42);
                    k_24 = t;
                    t = SSL_printnl(g_24, k_24);
                    t = term_m_42;
                    f_24 = t;
                    t = SSL_exit(f_24);
                    t = (ATerm) ATinsert(ATempty, term_l_42);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm s_51 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_51);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm n_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_42);
    }
  else
    {
      t = n_42;
      {
        ATerm q_42 = t;
        int r_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_42);
          }
        else
          {
            t = q_42;
            {
              ATerm u_42 = t;
              int v_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_51 = NULL,x_51 = NULL,z_51 = NULL,a_52 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_51 = ATgetArgument(t, 0);
                      x_51 = ATgetArgument(t, 1);
                      z_51 = ATgetArgument(t, 2);
                      a_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_51;
                  t = map_1_0(c_4, t);
                  LocalPopChoice(v_42);
                }
              else
                {
                  t = u_42;
                  {
                    ATerm w_42 = t;
                    int x_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_42);
                      }
                    else
                      {
                        t = w_42;
                        t = dynrule_targs_1_0(g_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm j_52 = NULL;
  ATerm y_42 = t;
  int z_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_52 = ATgetArgument(t, 0);
          {
            ATerm a_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_42);
      t = j_52;
    }
  else
    {
      t = y_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_52;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = map_1_0(h_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm q_52 = NULL;
  ATerm b_43 = t;
  int c_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_52 = ATgetArgument(t, 0);
          {
            ATerm d_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_43);
      t = q_52;
    }
  else
    {
      t = b_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_52 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_52;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm v_52 = NULL;
  v_52 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_52);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm d_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_53);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm f_43 = t;
  int g_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_43);
    }
  else
    {
      t = f_43;
      {
        ATerm h_43 = t;
        int j_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_43);
          }
        else
          {
            t = h_43;
            {
              ATerm k_43 = t;
              int m_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_53 = ATgetArgument(t, 0);
                      i_53 = ATgetArgument(t, 1);
                      j_53 = ATgetArgument(t, 2);
                      k_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_53;
                  t = map_1_0(s_4, t);
                  LocalPopChoice(m_43);
                }
              else
                {
                  t = k_43;
                  {
                    ATerm o_43 = t;
                    int p_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(p_43);
                      }
                    else
                      {
                        t = o_43;
                        t = dynrule_targs_1_0(u_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm y_53 = NULL;
  ATerm q_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_53 = ATgetArgument(t, 0);
          {
            ATerm t_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_43);
      t = y_53;
    }
  else
    {
      t = q_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_53;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = map_1_0(v_4, t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm p_54 = NULL;
  ATerm v_43 = t;
  int x_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_54 = ATgetArgument(t, 0);
          {
            ATerm y_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_43);
      t = p_54;
    }
  else
    {
      t = v_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_54 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_54;
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm s_54 = NULL;
  s_54 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_54);
  return(t);
}
ATerm dummify_old_0_0 (ATerm t)
{
  t = alltd_1_0(z_3, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm b_57 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_57 = ATgetArgument(t, 0);
      t = b_57;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_57 = ATgetArgument(t, 0);
          {
            ATerm z_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_57;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_57), (ATerm) ATempty);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm k_57 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_57 = ATgetArgument(t, 0);
      t = k_57;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_57 = ATgetArgument(t, 0);
          {
            ATerm b_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = k_57;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, k_57);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm u_57 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_57);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm f_44 = t;
  int k_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_44);
    }
  else
    {
      t = f_44;
      {
        ATerm l_44 = t;
        int m_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_44);
          }
        else
          {
            t = l_44;
            {
              ATerm o_44 = t;
              int u_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_57 = NULL,z_57 = NULL,b_58 = NULL,c_58 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_57 = ATgetArgument(t, 0);
                      z_57 = ATgetArgument(t, 1);
                      b_58 = ATgetArgument(t, 2);
                      c_58 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_58;
                  t = map_1_0(h_5, t);
                  LocalPopChoice(u_44);
                }
              else
                {
                  t = o_44;
                  {
                    ATerm w_44 = t;
                    int y_44 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_44);
                      }
                    else
                      {
                        t = w_44;
                        t = dynrule_targs_1_0(i_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm r_58 = NULL;
  ATerm z_44 = t;
  int a_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_58 = ATgetArgument(t, 0);
          {
            ATerm b_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_45);
      t = r_58;
    }
  else
    {
      t = z_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_58 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_58;
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = map_1_0(j_5, t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm g_59 = NULL;
  ATerm f_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_59 = ATgetArgument(t, 0);
          {
            ATerm j_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_45);
      t = g_59;
    }
  else
    {
      t = f_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_59;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm o_59 = NULL;
  o_59 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_59);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm p_59 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_59);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm r_45 = t;
  int s_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_45);
    }
  else
    {
      t = r_45;
      {
        ATerm t_45 = t;
        int u_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_45);
          }
        else
          {
            t = t_45;
            {
              ATerm v_45 = t;
              int w_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_59 = ATgetArgument(t, 0);
                      t_59 = ATgetArgument(t, 1);
                      u_59 = ATgetArgument(t, 2);
                      v_59 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_59;
                  t = map_1_0(q_5, t);
                  LocalPopChoice(w_45);
                }
              else
                {
                  t = v_45;
                  {
                    ATerm x_45 = t;
                    int y_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_45);
                      }
                    else
                      {
                        t = x_45;
                        t = dynrule_targs_1_0(u_5, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm k_60 = NULL;
  ATerm z_45 = t;
  int a_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_60 = ATgetArgument(t, 0);
          {
            ATerm b_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_46);
      t = k_60;
    }
  else
    {
      t = z_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_60;
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  t = map_1_0(v_5, t);
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm q_60 = NULL;
  ATerm g_46 = t;
  int l_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_60 = ATgetArgument(t, 0);
          {
            ATerm m_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_46);
      t = q_60;
    }
  else
    {
      t = g_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_60;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm u_60 = NULL;
  u_60 = t;
  {
    ATerm n_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_61 = NULL,q_24 = NULL,s_24 = NULL,m_21 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            b_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_60);
        q_24 = t;
        t = b_61;
        t = ContextVar_0_0(t);
        s_24 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, s_24);
        m_21 = t;
        t = SSLsetAnnotations(m_21, q_24);
        LocalPopChoice(o_46);
      }
    else
      {
        t = n_46;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, u_60);
  return(t);
}
static ATerm d_15 (ATerm g_179 (ATerm), ATerm t_102, ATerm q_102, ATerm r_102, ATerm a_103, ATerm e_103, ATerm f_103, ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,c_56 = NULL,d_56 = NULL,i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,n_56 = NULL,o_56 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_103, term_y_32);
  {
    ATerm p_46 = t;
    if((PushChoice() == 0))
      {
        ATerm p_56 = NULL;
        if(match_cons(t, sym__2))
          {
            p_56 = ATgetArgument(t, 0);
            if((p_56 != ATgetArgument(t, 1)))
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
        t = p_46;
      }
  }
  t = term_r_46;
  o_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_46, t_102);
  t = u_16(o_56, t_102, t);
  q_55 = t;
  t = term_s_46;
  n_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_46, t_102);
  t = u_16(n_56, t_102, t);
  r_55 = t;
  t = new_0_0(t);
  s_55 = t;
  t = q_102;
  t = map_1_0(c_5, t);
  t_55 = t;
  t = r_102;
  t = map_1_0(d_5, t);
  u_55 = t;
  t = new_0_0(t);
  v_55 = t;
  t = a_103;
  t = dummify_old_0_0(t);
  c_56 = t;
  {
    ATerm t_46 = t;
    int u_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_56;
        if((a_103 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, v_55);
        LocalPopChoice(u_46);
      }
    else
      {
        t = t_46;
        t = c_56;
      }
  }
  w_55 = t;
  t = c_56;
  t = free_vars_3_0(f_5, g_5, tboundin_3_0, t);
  t = map_1_0(k_5, t);
  i_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_103, f_103);
  t = free_vars_3_0(o_5, p_5, tboundin_3_0, t);
  t = filter_1_0(w_5, t);
  d_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_56, i_56);
  t = diff_0_0(t);
  j_56 = t;
  t = new_0_0(t);
  k_56 = t;
  t = t_102;
  t = g_179(t);
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, l_56, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_33, (ATerm) ATinsert(CheckATermList(j_56), (ATerm) ATmakeAppl(sym_Str_1, k_56)))), c_56)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, r_55, q_102, r_102, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_33, (ATerm) ATinsert(CheckATermList(j_56), (ATerm) ATmakeAppl(sym_Str_1, k_56)))), a_103)), e_103, (ATerm) ATmakeAppl(sym_Seq_2, term_c_47, f_103)))), (ATerm) ATmakeAppl(sym_RDefT_4, q_55, q_102, r_102, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, v_55), a_103), (ATerm)ATmakeAppl(sym_Var_1, s_55), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, t_102)))), w_55), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_46, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_55), t_55, u_55), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_y_46), (ATerm) ATmakeAppl(sym_Var_1, v_55)))))), (ATerm) ATmakeAppl(sym_Var_1, s_55)))))), (ATerm) ATmakeAppl(sym_RDefT_4, t_102, q_102, r_102, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, v_55), a_103), e_103, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, t_102)))), w_55), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_n_33, (ATerm) ATinsert(CheckATermList(j_56), (ATerm) ATmakeAppl(sym_Str_1, k_56)))), term_v_46))), f_103)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm d_47 = t;
  int e_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
      h_25 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          i_25 = ATgetArgument(t, 0);
          j_25 = ATgetArgument(t, 1);
          k_25 = ATgetArgument(t, 2);
          l_25 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = l_25;
      if(match_cons(t, sym_Rule_3))
        {
          p_25 = ATgetArgument(t, 0);
          q_25 = ATgetArgument(t, 1);
          r_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_25;
      t = d_15(d_6, i_25, j_25, k_25, p_25, q_25, r_25, t);
      LocalPopChoice(e_47);
    }
  else
    {
      t = d_47;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(e_6, t);
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm a_26 = NULL;
  a_26 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_47, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_26))));
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm b_26 = NULL;
  b_26 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_47, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, b_26))));
  return(t);
}
static ATerm g_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_39;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_26 = ATgetFirst((ATermList) t);
      d_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_26, d_26);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm e_26 = NULL,g_26 = NULL,i_26 = NULL,j_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_47 = ATgetArgument(t, 0);
      if(match_cons(p_47, sym__2))
        {
          e_26 = ATgetArgument(p_47, 0);
          g_26 = ATgetArgument(p_47, 1);
        }
      else
        _fail(t);
      {
        ATerm q_47 = ATgetArgument(t, 1);
        if(match_cons(q_47, sym__2))
          {
            i_26 = ATgetArgument(q_47, 0);
            j_26 = ATgetArgument(q_47, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_26), e_26), (ATerm) ATinsert(CheckATermList(j_26), g_26));
  return(t);
}
static ATerm o_6 (ATerm t)
{
  ATerm s_47 = t;
  int t_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,o_27 = NULL,p_27 = NULL,r_27 = NULL,s_27 = NULL;
      g_27 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          h_27 = ATgetArgument(t, 0);
          i_27 = ATgetArgument(t, 1);
          j_27 = ATgetArgument(t, 2);
          o_27 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = o_27;
      if(match_cons(t, sym_Rule_3))
        {
          p_27 = ATgetArgument(t, 0);
          r_27 = ATgetArgument(t, 1);
          s_27 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_27;
      t = d_15(q_6, h_27, i_27, j_27, p_27, r_27, s_27, t);
      LocalPopChoice(t_47);
    }
  else
    {
      t = s_47;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(r_6, t);
    }
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm e_28 = NULL;
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_47, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, e_28))));
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm k_28 = NULL;
  k_28 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_47, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_28))));
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_39;
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_28 = ATgetFirst((ATermList) t);
      m_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_28, m_28);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,v_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_47 = ATgetArgument(t, 0);
      if(match_cons(z_47, sym__2))
        {
          r_28 = ATgetArgument(z_47, 0);
          s_28 = ATgetArgument(z_47, 1);
        }
      else
        _fail(t);
      {
        ATerm a_48 = ATgetArgument(t, 1);
        if(match_cons(a_48, sym__2))
          {
            t_28 = ATgetArgument(a_48, 0);
            v_28 = ATgetArgument(a_48, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_28), r_28), (ATerm) ATinsert(CheckATermList(v_28), s_28));
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(w_6, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm i_69 = NULL;
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_48, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_69))));
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_39;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm j_69 = NULL,k_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_69 = ATgetFirst((ATermList) t);
      k_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_69, k_69);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_48 = ATgetArgument(t, 0);
      if(match_cons(d_48, sym__2))
        {
          l_69 = ATgetArgument(d_48, 0);
          m_69 = ATgetArgument(d_48, 1);
        }
      else
        _fail(t);
      {
        ATerm f_48 = ATgetArgument(t, 1);
        if(match_cons(f_48, sym__2))
          {
            n_69 = ATgetArgument(f_48, 0);
            o_69 = ATgetArgument(f_48, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_69), l_69), (ATerm) ATinsert(CheckATermList(o_69), m_69));
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(c_7, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm r_69 = NULL;
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_48, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_69))));
  return(t);
}
static ATerm e_7 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_m_39;
  return(t);
}
static ATerm f_7 (ATerm t)
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
static ATerm g_7 (ATerm t)
{
  ATerm x_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_48 = ATgetArgument(t, 0);
      if(match_cons(i_48, sym__2))
        {
          x_69 = ATgetArgument(i_48, 0);
          a_70 = ATgetArgument(i_48, 1);
        }
      else
        _fail(t);
      {
        ATerm o_48 = ATgetArgument(t, 1);
        if(match_cons(o_48, sym__2))
          {
            b_70 = ATgetArgument(o_48, 0);
            c_70 = ATgetArgument(o_48, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_70), x_69), (ATerm) ATinsert(CheckATermList(c_70), a_70));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm f_69 = NULL,g_69 = NULL;
  f_69 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      g_69 = ATgetArgument(t, 0);
      {
        ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL,a_22 = NULL;
        t = g_69;
        t = map_1_0(c_6, t);
        t = genzip_4_0(g_6, j_6, l_6, _id, t);
        g_25 = t;
        if(match_cons(t, sym__2))
          {
            d_25 = ATgetArgument(t, 0);
            e_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_25);
        c_25 = t;
        t = e_25;
        t = concat_0_0(t);
        f_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_25, f_25);
        a_22 = t;
        t = SSLsetAnnotations(a_22, c_25);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          g_69 = ATgetArgument(t, 0);
          {
            ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,b_22 = NULL;
            t = g_69;
            t = map_1_0(o_6, t);
            t = genzip_4_0(s_6, t_6, u_6, _id, t);
            f_27 = t;
            if(match_cons(t, sym__2))
              {
                c_27 = ATgetArgument(t, 0);
                d_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_27);
            b_27 = t;
            t = d_27;
            t = concat_0_0(t);
            e_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, c_27, e_27);
            b_22 = t;
            t = SSLsetAnnotations(b_22, b_27);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              g_69 = ATgetArgument(t, 0);
              t = g_69;
              t = map_1_0(v_6, t);
              t = genzip_4_0(x_6, y_6, a_7, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  g_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = g_69;
              t = map_1_0(b_7, t);
              t = genzip_4_0(e_7, f_7, g_7, _id, t);
            }
        }
    }
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_q_48;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm i_179 (ATerm), ATerm t)
{
  static ATerm e_71 (ATerm t);
  static ATerm e_71 (ATerm t)
  {
    static ATerm h_7 (ATerm t);
    static ATerm h_7 (ATerm t)
    {
      ATerm v_48 = t;
      int w_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_179(t);
          LocalPopChoice(w_48);
        }
      else
        {
          t = v_48;
          {
            ATerm u_70 = NULL,v_70 = NULL,b_71 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                u_70 = ATgetArgument(t, 0);
                v_70 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, u_70, v_70);
            {
              static ATerm k_7 (ATerm t);
              static ATerm k_7 (ATerm t)
              {
                t = u_70;
                t = DeclareContextVars_0_0(t);
                t = v_70;
                t = e_71(t);
                if(((b_71 != NULL) && (b_71 != t)))
                  _fail(t);
                else
                  b_71 = t;
                return(t);
              }
              t = scope_2_0(i_7, k_7, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, u_70, not_null(b_71));
          }
        }
      return(t);
    }
    t = oncetd_1_0(h_7, t);
    return(t);
  }
  t = e_71(t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_q_48;
  return(t);
}
static ATerm f_15 (ATerm t_103, ATerm s_103, ATerm t)
{
  ATerm f_71 = NULL,g_71 = NULL,n_71 = NULL;
  static ATerm n_7 (ATerm t);
  static ATerm n_7 (ATerm t)
  {
    t = t_103;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = t_103;
    {
      static ATerm p_7 (ATerm t);
      static ATerm p_7 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((g_71 != NULL) && (g_71 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              g_71 = ATgetArgument(t, 0);
            if(((f_71 != NULL) && (f_71 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              f_71 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, g_71);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(p_7, t);
    }
    if(((n_71 != NULL) && (n_71 != t)))
      _fail(t);
    else
      n_71 = t;
    return(t);
  }
  t = scope_2_0(m_7, n_7, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_71)), not_null(n_71)), s_103);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm r_71 = NULL,s_71 = NULL,x_71 = NULL,z_71 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      x_71 = ATgetArgument(t, 0);
      z_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_71 = ATgetFirst((ATermList) t);
      s_71 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_z_48, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, s_71, z_71)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_71))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_71;
    }
  return(t);
}
static ATerm h_73 (ATerm p_72, ATerm t)
{
  t = SSL_is_string(p_72);
  return(t);
}
static ATerm i_73 (ATerm r_72, ATerm t)
{
  ATerm s_72 = NULL,w_72 = NULL,x_72 = NULL;
  t = term_k_42;
  w_72 = t;
  t = (ATerm) ATinsert(ATempty, term_a_49);
  x_72 = t;
  t = SSL_printnl(w_72, x_72);
  t = r_72;
  t = debug_1_0(q_7, t);
  t = term_m_42;
  s_72 = t;
  t = SSL_exit(s_72);
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_b_49;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm y_72 = NULL,b_73 = NULL;
  b_73 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      y_72 = ATgetArgument(t, 0);
      {
        ATerm f_49 = t;
        int g_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_73(b_73, t);
            LocalPopChoice(g_49);
          }
        else
          {
            t = f_49;
            t = y_72;
          }
      }
    }
  else
    {
      ATerm h_49 = t;
      int i_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_73(b_73, t);
          LocalPopChoice(i_49);
        }
      else
        {
          t = h_49;
          t = i_73(b_73, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm w_73 = NULL,x_73 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL,g_74 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      w_73 = ATgetArgument(t, 0);
      g_74 = ATgetArgument(t, 1);
      t = w_73;
      if(match_cons(t, sym_DynRuleId_1))
        {
          x_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_73;
      if(match_cons(t, sym_RDecT_3))
        {
          d_74 = ATgetArgument(t, 0);
          e_74 = ATgetArgument(t, 1);
          f_74 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, d_74, e_74, f_74, (ATerm) ATmakeAppl(sym_Rule_3, g_74, term_y_32, term_e_30));
    }
  else
    {
      if(match_cons(t, sym_SetDynRuleMatch_2))
        {
          w_73 = ATgetArgument(t, 0);
          g_74 = ATgetArgument(t, 1);
          t = w_73;
          if(match_cons(t, sym_DynRuleId_1))
            {
              x_73 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_73;
          if(match_cons(t, sym_RDecT_3))
            {
              d_74 = ATgetArgument(t, 0);
              e_74 = ATgetArgument(t, 1);
              f_74 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, d_74, e_74, f_74, (ATerm) ATmakeAppl(sym_Rule_3, g_74, g_74, term_e_30));
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              w_73 = ATgetArgument(t, 0);
              g_74 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_73;
          if(match_cons(t, sym_DynRuleId_1))
            {
              x_73 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_73;
          if(match_cons(t, sym_RDecT_3))
            {
              d_74 = ATgetArgument(t, 0);
              e_74 = ATgetArgument(t, 1);
              f_74 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, d_74, e_74, f_74, g_74);
        }
    }
  return(t);
}
static ATerm l_76 (ATerm l_75, ATerm t)
{
  ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL,y_75 = NULL;
  t = l_75;
  if(match_cons(t, sym_GenDynRules_1))
    {
      r_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_75;
  t = filter_1_0(r_7, t);
  y_75 = t;
  t = l_75;
  if(match_cons(t, sym_GenDynRules_1))
    {
      p_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_75;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  q_75 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, y_75), (ATerm) ATmakeAppl(sym_DynamicRules_1, q_75));
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm z_75 = NULL,a_76 = NULL,e_76 = NULL,h_76 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm j_49 = ATgetArgument(t, 0);
      if(match_cons(j_49, sym_DynRuleId_1))
        {
          ATerm k_49 = ATgetArgument(j_49, 0);
          if(match_cons(k_49, sym_RDecT_3))
            {
              z_75 = ATgetArgument(k_49, 0);
              a_76 = ATgetArgument(k_49, 1);
              e_76 = ATgetArgument(k_49, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      h_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, z_75, a_76, e_76, h_76);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm l_49 = ATgetArgument(t, 0);
      ATerm m_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL;
  j_76 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      i_76 = ATgetArgument(t, 0);
      {
        ATerm o_49 = t;
        int p_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_29 = NULL;
            t = i_76;
            {
              ATerm q_49 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(t_7, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = q_49;
                }
            }
            t = i_76;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            e_29 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, e_29);
            LocalPopChoice(p_49);
          }
        else
          {
            t = o_49;
            t = l_76(j_76, t);
          }
      }
    }
  else
    {
      t = l_76(j_76, t);
    }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm r_49 = t;
  int t_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_76 = NULL;
      n_76 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm u_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_76;
      LocalPopChoice(t_49);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = r_49;
      {
        ATerm v_49 = t;
        int w_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_76 = NULL;
            o_76 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm x_49 = ATgetArgument(t, 0);
                ATerm z_49 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_76;
            LocalPopChoice(w_49);
            {
              ATerm r_76 = NULL,s_76 = NULL,t_76 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  r_76 = ATgetArgument(t, 0);
                  s_76 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_76;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              t_76 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, t_76, s_76);
            }
          }
        else
          {
            t = v_49;
          }
      }
    }
  return(t);
}
ATerm downgrade_new_dr_syntax_0_0 (ATerm t)
{
  t = topdown_1_0(u_7, t);
  return(t);
}
static ATerm w_7 (ATerm t)
{
  t = Cons_2_0(b_8, c_8, t);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm b_78 = NULL,d_78 = NULL,f_78 = NULL,g_78 = NULL,x_22 = NULL;
  g_78 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      d_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_78);
  b_78 = t;
  t = d_78;
  t = topdown_1_0(d_8, t);
  t = listtd_1_0(e_8, t);
  f_78 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, f_78);
  x_22 = t;
  t = SSLsetAnnotations(x_22, b_78);
  return(t);
}
static ATerm c_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  t = repeat_2_0(DefDynamicRuleScope_0_0, _id, t);
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = repeat_2_0(f_8, _id, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_78 = ATgetFirst((ATermList) t);
      k_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_15(j_78, k_78, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL,m_77 = NULL,n_77 = NULL,p_77 = NULL,u_77 = NULL,w_77 = NULL,j_23 = NULL,c_23 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  w_77 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_77);
  g_77 = t;
  t = h_77;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_77 = ATgetFirst((ATermList) t);
      n_77 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_77);
  i_77 = t;
  t = n_77;
  t = Cons_2_0(_id, w_7, t);
  p_77 = t;
  t = (ATerm) ATinsert(CheckATermList(p_77), m_77);
  c_23 = t;
  t = SSLsetAnnotations(c_23, i_77);
  u_77 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, u_77);
  j_23 = t;
  t = SSLsetAnnotations(j_23, g_77);
  return(t);
}
ATerm aux_LiftedRules_0_0 (ATerm t)
{
  ATerm g_80 = NULL,j_80 = NULL,m_80 = NULL,n_80 = NULL,p_80 = NULL;
  g_80 = t;
  if(match_cons(t, sym__2))
    {
      j_80 = ATgetArgument(t, 0);
      m_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_80;
  if(!(match_cons(t, sym__0)))
    _fail(t);
  t = m_80;
  if(match_cons(t, sym_Defined_2))
    {
      n_80 = ATgetArgument(t, 0);
      p_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_80;
  if(match_string(t, "f_6"))
    {
      ATerm x_29 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, term_a_50, (ATerm) ATmakeAppl(sym_Defined_2, term_b_50, p_80));
      x_29 = t;
      t = SSL_explode_term(x_29);
      if(match_cons(t, sym__2))
        {
          ATerm d_50 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) d_50) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          {
            ATerm e_50 = ATgetArgument(t, 1);
            if(((ATgetType(e_50) == AT_LIST) && !(ATisEmpty(e_50))))
              {
                ATerm f_50 = ATgetFirst((ATermList) e_50);
                ATerm g_50 = (ATerm) ATgetNext((ATermList) e_50);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = p_80;
    }
  else
    {
      if(match_string(t, "v_7"))
        {
          ATerm l_30 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, term_a_50, (ATerm) ATmakeAppl(sym_Defined_2, term_l_50, p_80));
          l_30 = t;
          t = SSL_explode_term(l_30);
          if(match_cons(t, sym__2))
            {
              ATerm m_50 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) m_50) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              {
                ATerm p_50 = ATgetArgument(t, 1);
                if(((ATgetType(p_50) == AT_LIST) && !(ATisEmpty(p_50))))
                  {
                    ATerm q_50 = ATgetFirst((ATermList) p_50);
                    ATerm s_50 = (ATerm) ATgetNext((ATermList) p_50);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = p_80;
        }
      else
        {
          if(match_string(t, "w_2"))
            {
              ATerm e_31 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_a_50, (ATerm) ATmakeAppl(sym_Defined_2, term_t_50, p_80));
              e_31 = t;
              t = SSL_explode_term(e_31);
              if(match_cons(t, sym__2))
                {
                  ATerm u_50 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_50) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm v_50 = ATgetArgument(t, 1);
                    if(((ATgetType(v_50) == AT_LIST) && !(ATisEmpty(v_50))))
                      {
                        ATerm w_50 = ATgetFirst((ATermList) v_50);
                        ATerm x_50 = (ATerm) ATgetNext((ATermList) v_50);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = p_80;
            }
          else
            {
              if(match_string(t, "m_4"))
                {
                  ATerm o_31 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, term_a_50, (ATerm) ATmakeAppl(sym_Defined_2, term_z_50, p_80));
                  o_31 = t;
                  t = SSL_explode_term(o_31);
                  if(match_cons(t, sym__2))
                    {
                      ATerm a_51 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) a_51) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm b_51 = ATgetArgument(t, 1);
                        if(((ATgetType(b_51) == AT_LIST) && !(ATisEmpty(b_51))))
                          {
                            ATerm c_51 = ATgetFirst((ATermList) b_51);
                            ATerm d_51 = (ATerm) ATgetNext((ATermList) b_51);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = p_80;
                }
              else
                {
                  ATerm g_32 = NULL;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("g_1", 0, ATtrue)))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, term_a_50, (ATerm) ATmakeAppl(sym_Defined_2, term_e_51, p_80));
                  g_32 = t;
                  t = SSL_explode_term(g_32);
                  if(match_cons(t, sym__2))
                    {
                      ATerm f_51 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) f_51) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm g_51 = ATgetArgument(t, 1);
                        if(((ATgetType(g_51) == AT_LIST) && !(ATisEmpty(g_51))))
                          {
                            ATerm h_51 = ATgetFirst((ATermList) g_51);
                            ATerm k_51 = (ATerm) ATgetNext((ATermList) g_51);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = p_80;
                }
            }
        }
    }
  return(t);
}
ATerm bagof_LiftedRules_0_0 (ATerm t)
{
  ATerm b_81 = NULL;
  b_81 = t;
  if(!(match_cons(t, sym__0)))
    _fail(t);
  {
    ATerm l_51 = t;
    int m_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_32 = NULL;
        static ATerm g_8 (ATerm t);
        static ATerm g_8 (ATerm t)
        {
          ATerm j_81 = NULL;
          j_81 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_81, j_81);
          t = aux_LiftedRules_0_0(t);
          return(t);
        }
        t = term_p_51;
        l_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_p_51, b_81);
        t = j_16(l_32, b_81, t);
        t = filter_1_0(g_8, t);
        LocalPopChoice(m_51);
      }
    else
      {
        t = l_51;
        {
          ATerm q_51 = t;
          int t_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_32 = NULL;
              static ATerm i_8 (ATerm t);
              static ATerm i_8 (ATerm t)
              {
                ATerm l_81 = NULL;
                l_81 = t;
                t = (ATerm) ATmakeAppl(sym__2, b_81, l_81);
                t = aux_LiftedRules_0_0(t);
                return(t);
              }
              t = term_p_51;
              o_32 = t;
              t = (ATerm) ATmakeAppl(sym__2, term_p_51, b_81);
              t = j_16(o_32, b_81, t);
              t = filter_1_0(i_8, t);
              LocalPopChoice(t_51);
            }
          else
            {
              t = q_51;
              {
                ATerm u_51 = t;
                int w_51 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm r_32 = NULL;
                    static ATerm j_8 (ATerm t);
                    static ATerm j_8 (ATerm t)
                    {
                      ATerm n_81 = NULL;
                      n_81 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_81, n_81);
                      t = aux_LiftedRules_0_0(t);
                      return(t);
                    }
                    t = term_p_51;
                    r_32 = t;
                    t = (ATerm) ATmakeAppl(sym__2, term_p_51, b_81);
                    t = j_16(r_32, b_81, t);
                    t = filter_1_0(j_8, t);
                    LocalPopChoice(w_51);
                  }
                else
                  {
                    t = u_51;
                    {
                      ATerm b_52 = t;
                      int c_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_32 = NULL;
                          static ATerm k_8 (ATerm t);
                          static ATerm k_8 (ATerm t)
                          {
                            ATerm r_81 = NULL;
                            r_81 = t;
                            t = (ATerm) ATmakeAppl(sym__2, b_81, r_81);
                            t = aux_LiftedRules_0_0(t);
                            return(t);
                          }
                          t = term_p_51;
                          v_32 = t;
                          t = (ATerm) ATmakeAppl(sym__2, term_p_51, b_81);
                          t = j_16(v_32, b_81, t);
                          t = filter_1_0(k_8, t);
                          LocalPopChoice(c_52);
                        }
                      else
                        {
                          t = b_52;
                          {
                            ATerm a_33 = NULL;
                            static ATerm l_8 (ATerm t);
                            static ATerm l_8 (ATerm t)
                            {
                              ATerm w_81 = NULL;
                              w_81 = t;
                              t = (ATerm) ATmakeAppl(sym__2, b_81, w_81);
                              t = aux_LiftedRules_0_0(t);
                              return(t);
                            }
                            t = term_p_51;
                            a_33 = t;
                            t = (ATerm) ATmakeAppl(sym__2, term_p_51, b_81);
                            t = j_16(a_33, b_81, t);
                            t = filter_1_0(l_8, t);
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
static ATerm n_8 (ATerm t)
{
  t = term_p_51;
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = term_p_51;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_d_52;
  return(t);
}
ATerm create_kill_strategy_0_0 (ATerm t)
{
  ATerm x_81 = NULL,y_81 = NULL,z_81 = NULL,a_82 = NULL,b_82 = NULL,e_82 = NULL,l_82 = NULL,m_82 = NULL,n_82 = NULL,s_82 = NULL,v_82 = NULL,w_82 = NULL,x_82 = NULL;
  a_82 = t;
  {
    ATerm e_52 = t;
    if((PushChoice() == 0))
      {
        ATerm b_83 = NULL,e_83 = NULL,m_33 = NULL;
        e_83 = t;
        b_83 = t;
        t = term_d_52;
        m_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_52, e_83);
        t = j_16(m_33, e_83, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm f_52 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_52) != ATmakeSymbol("k_9", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = b_83;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_52;
      }
  }
  b_82 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_82), term_g_52);
  x_82 = t;
  t = SSL_concat_strings(x_82);
  z_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_82), term_r_46);
  w_82 = t;
  t = SSL_concat_strings(w_82);
  x_81 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_82), term_s_46);
  v_82 = t;
  t = SSL_concat_strings(v_82);
  y_81 = t;
  t = term_a_50;
  n_82 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_b_50, (ATerm) ATmakeAppl(sym_SDefT_4, z_81, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_k_52, (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, x_81)), (ATerm) ATmakeAppl(sym_Op_2, term_l_52, (ATerm) ATinsert(ATempty, term_i_52))), (ATerm) ATmakeAppl(sym_Call_2, term_n_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_p_52), term_o_52), term_y_48), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_52), term_u_52), term_r_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_LabeledDynRuleId_2, (ATerm)ATmakeAppl(sym_RDecT_3, a_82, (ATerm)ATempty, (ATerm) ATempty), term_r_52), term_u_52))), (ATerm) ATmakeAppl(sym_Seq_2, term_x_52, (ATerm) ATmakeAppl(sym_Call_2, term_n_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_53), term_a_53), term_z_52), term_y_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_f_53), term_e_53))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_52, (ATerm) ATinsert(ATempty, term_f_53))), term_g_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, term_m_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_g_53), (ATerm) ATmakeAppl(sym_Str_1, a_82))), term_g_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_46, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_81), (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_g_53), term_f_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_53), term_v_46), term_v_46))), (ATerm) ATmakeAppl(sym_Seq_2, term_p_53, (ATerm) ATmakeAppl(sym_Not_1, (ATerm) ATmakeAppl(sym_Call_2, term_r_53, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_i_52), term_v_46))))))))))))), term_t_53), (ATerm) ATmakeAppl(sym_CallT_3, term_w_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_53), term_g_53), term_e_53), (ATerm) ATmakeAppl(sym_Str_1, a_82)))))))))))))))))))));
  s_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_50, (ATerm) ATmakeAppl(sym_Defined_2, term_b_50, (ATerm) ATmakeAppl(sym_SDefT_4, z_81, (ATerm)ATempty, (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Seq_2, term_k_52, (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, x_81)), (ATerm) ATmakeAppl(sym_Op_2, term_l_52, (ATerm) ATinsert(ATempty, term_i_52))), (ATerm) ATmakeAppl(sym_Call_2, term_n_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, term_p_52), term_o_52), term_y_48), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_52), term_u_52), term_r_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_LabeledDynRuleId_2, (ATerm)ATmakeAppl(sym_RDecT_3, a_82, (ATerm)ATempty, (ATerm) ATempty), term_r_52), term_u_52))), (ATerm) ATmakeAppl(sym_Seq_2, term_x_52, (ATerm) ATmakeAppl(sym_Call_2, term_n_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_53), term_a_53), term_z_52), term_y_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_f_53), term_e_53))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_52, (ATerm) ATinsert(ATempty, term_f_53))), term_g_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, term_m_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_g_53), (ATerm) ATmakeAppl(sym_Str_1, a_82))), term_g_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_46, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, term_n_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_81), (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_g_53), term_f_53)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_53), term_v_46), term_v_46))), (ATerm) ATmakeAppl(sym_Seq_2, term_p_53, (ATerm) ATmakeAppl(sym_Not_1, (ATerm) ATmakeAppl(sym_Call_2, term_r_53, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_i_52), term_v_46))))))))))))), term_t_53), (ATerm) ATmakeAppl(sym_CallT_3, term_w_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_53), term_g_53), term_e_53), (ATerm) ATmakeAppl(sym_Str_1, a_82))))))))))))))))))))));
  t = n_15(n_8, n_82, s_82, t);
  t = term_a_50;
  l_82 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_50, (ATerm) ATmakeAppl(sym_SDefT_4, term_x_53, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_z_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, a_82)), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_81), (ATerm)ATempty, (ATerm) ATempty), term_i_52))));
  m_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_50, (ATerm) ATmakeAppl(sym_Defined_2, term_l_50, (ATerm) ATmakeAppl(sym_SDefT_4, term_x_53, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_z_53), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, a_82)), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_81), (ATerm)ATempty, (ATerm) ATempty), term_i_52)))));
  t = n_15(o_8, l_82, m_82, t);
  t = term_e_54;
  e_82 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_82, term_e_54);
  t = k_16(p_8, a_82, e_82, t);
  t = b_82;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_p_51;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_p_51;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_f_54;
  return(t);
}
ATerm create_new_strategy_0_0 (ATerm t)
{
  ATerm f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL,p_83 = NULL,q_83 = NULL,r_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL;
  h_83 = t;
  {
    ATerm g_54 = t;
    if((PushChoice() == 0))
      {
        ATerm b_84 = NULL,c_84 = NULL,p_33 = NULL;
        c_84 = t;
        b_84 = t;
        t = term_f_54;
        p_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_54, c_84);
        t = j_16(p_33, c_84, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm h_54 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_54) != ATmakeSymbol("b_6", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = b_84;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_54;
      }
  }
  i_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_83), term_i_54);
  a_84 = t;
  t = SSL_concat_strings(a_84);
  g_83 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_83), term_r_46);
  z_83 = t;
  t = SSL_concat_strings(z_83);
  f_83 = t;
  t = term_a_50;
  x_83 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_50, (ATerm) ATmakeAppl(sym_SDefT_4, g_83, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_j_54), (ATerm) ATmakeAppl(sym_Seq_2, term_k_52, (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, h_83, term_r_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, f_83)), (ATerm) ATmakeAppl(sym_Op_2, term_l_52, (ATerm) ATinsert(ATempty, term_i_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_n_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATempty, term_p_52), term_o_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_46), term_u_52), term_v_46))), (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_LabeledDynRuleId_2, (ATerm)ATmakeAppl(sym_RDecT_3, h_83, (ATerm)ATempty, (ATerm) ATempty), term_r_52), term_u_52))))))), (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_LabeledDynRuleId_2, (ATerm)ATmakeAppl(sym_RDecT_3, h_83, (ATerm)ATempty, (ATerm) ATempty), term_r_52), (ATerm) ATmakeAppl(sym_Op_2, term_l_52, (ATerm) ATinsert(ATempty, term_i_52))))))))))));
  y_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_50, (ATerm) ATmakeAppl(sym_Defined_2, term_t_50, (ATerm) ATmakeAppl(sym_SDefT_4, g_83, (ATerm)ATempty, (ATerm)ATinsert(ATempty, term_j_54), (ATerm) ATmakeAppl(sym_Seq_2, term_k_52, (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, h_83, term_r_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, f_83)), (ATerm) ATmakeAppl(sym_Op_2, term_l_52, (ATerm) ATinsert(ATempty, term_i_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_n_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATempty, term_p_52), term_o_52), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_46), term_u_52), term_v_46))), (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_LabeledDynRuleId_2, (ATerm)ATmakeAppl(sym_RDecT_3, h_83, (ATerm)ATempty, (ATerm) ATempty), term_r_52), term_u_52))))))), (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_LabeledDynRuleId_2, (ATerm)ATmakeAppl(sym_RDecT_3, h_83, (ATerm)ATempty, (ATerm) ATempty), term_r_52), (ATerm) ATmakeAppl(sym_Op_2, term_l_52, (ATerm) ATinsert(ATempty, term_i_52)))))))))))));
  t = n_15(q_8, x_83, y_83, t);
  t = term_a_50;
  q_83 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_50, (ATerm) ATmakeAppl(sym_SDefT_4, term_k_54, (ATerm)ATempty, (ATerm)ATinsert(ATinsert(ATempty, term_z_53), term_j_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, h_83)), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_83), (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_r_52)), term_i_52))));
  r_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_50, (ATerm) ATmakeAppl(sym_Defined_2, term_z_50, (ATerm) ATmakeAppl(sym_SDefT_4, term_k_54, (ATerm)ATempty, (ATerm)ATinsert(ATinsert(ATempty, term_z_53), term_j_54), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, h_83)), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_83), (ATerm)ATempty, (ATerm) ATinsert(ATempty, term_r_52)), term_i_52)))));
  t = n_15(s_8, q_83, r_83, t);
  t = term_n_54;
  p_83 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_83, term_n_54);
  t = k_16(t_8, h_83, p_83, t);
  t = i_83;
  return(t);
}
static ATerm m_15 (ATerm d_45, ATerm t_327, ATerm t)
{
  static ATerm v_8 (ATerm t);
  static ATerm v_8 (ATerm t)
  {
    if((d_45 != t))
      {
        _fail(t);
      }
    return(t);
  }
  t = t_327;
  t = fetch_1_0(v_8, t);
  return(t);
}
static ATerm n_15 (ATerm w_138 (ATerm), ATerm h_26, ATerm f_26, ATerm t)
{
  ATerm d_84 = NULL,g_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL;
  l_84 = t;
  t = w_138(t);
  i_84 = t;
  {
    ATerm o_54 = t;
    int q_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_84 = NULL;
        t = term_r_54;
        m_84 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_84, term_r_54);
        t = c_17(i_84, m_84, t);
        {
          ATerm t_54 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = t_54;
            }
        }
        LocalPopChoice(q_54);
      }
    else
      {
        t = o_54;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_84 = ATgetFirst((ATermList) t);
      k_84 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm u_54 = t;
    int v_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_84 = NULL,o_84 = NULL,p_84 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, h_26, j_84);
        t = m_15(h_26, j_84, t);
        t = (ATerm) ATmakeAppl(sym__2, i_84, h_26);
        t = c_17(i_84, h_26, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_84 = ATgetFirst((ATermList) t);
            g_84 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, i_84, h_26, (ATerm) ATinsert(CheckATermList(g_84), (ATerm) ATinsert(CheckATermList(d_84), f_26)));
        t = lookup_table_0_1(i_84, t);
        p_84 = t;
        t = (ATerm) ATinsert(CheckATermList(g_84), (ATerm) ATinsert(CheckATermList(d_84), f_26));
        n_84 = t;
        t = p_84;
        if(match_cons(t, sym_Hashtable_1))
          {
            o_84 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_17(h_26, n_84, o_84, t);
        t = (ATerm) ATmakeAppl(sym__3, i_84, h_26, (ATerm) ATinsert(CheckATermList(g_84), (ATerm) ATinsert(CheckATermList(d_84), f_26)));
        LocalPopChoice(v_54);
      }
    else
      {
        t = u_54;
        {
          ATerm q_84 = NULL,r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL;
          t = (ATerm) ATinsert(ATempty, f_26);
          u_84 = t;
          t = (ATerm) ATmakeAppl(sym__3, i_84, h_26, (ATerm) ATinsert(ATempty, f_26));
          t = d_17(i_84, h_26, u_84, t);
          t = (ATerm) ATmakeAppl(sym__3, i_84, term_r_54, (ATerm) ATinsert(CheckATermList(k_84), (ATerm) ATinsert(CheckATermList(j_84), h_26)));
          t = lookup_table_0_1(i_84, t);
          t_84 = t;
          t = term_r_54;
          q_84 = t;
          t = (ATerm) ATinsert(CheckATermList(k_84), (ATerm) ATinsert(CheckATermList(j_84), h_26));
          r_84 = t;
          t = t_84;
          if(match_cons(t, sym_Hashtable_1))
            {
              s_84 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_17(q_84, r_84, s_84, t);
          t = (ATerm) ATmakeAppl(sym__3, i_84, term_r_54, (ATerm) ATinsert(CheckATermList(k_84), (ATerm) ATinsert(CheckATermList(j_84), h_26)));
        }
      }
  }
  t = l_84;
  return(t);
}
static ATerm x_8 (ATerm t)
{
  t = term_w_54;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_w_54;
  return(t);
}
ATerm next_counter_0_0 (ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL;
  w_84 = t;
  {
    ATerm x_54 = t;
    int y_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_85 = NULL,h_34 = NULL;
        t = term_w_54;
        h_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_w_54, w_84);
        t = j_16(h_34, w_84, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_55 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_55) != ATmakeSymbol("i_0", 0, ATtrue)))
              _fail(t);
            c_85 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_85;
        LocalPopChoice(y_54);
      }
    else
      {
        t = x_54;
        {
          ATerm d_85 = NULL;
          t = term_g_55;
          d_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_84, term_g_55);
          t = k_16(x_8, w_84, d_85, t);
          t = (ATerm) ATmakeAppl(sym__2, w_84, term_f_55);
        }
      }
  }
  z_84 = t;
  t = term_m_42;
  a_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_84, term_m_42);
  t = x_16(z_84, a_85, t);
  x_84 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_55, x_84);
  y_84 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_84, (ATerm) ATmakeAppl(sym_Defined_2, term_e_55, x_84));
  t = k_16(y_8, w_84, y_84, t);
  t = x_84;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  t = term_h_55;
  return(t);
}
ATerm NewNumberedVar_0_0 (ATerm t)
{
  ATerm e_85 = NULL,g_85 = NULL,h_85 = NULL,q_85 = NULL,r_85 = NULL,s_85 = NULL;
  g_85 = t;
  t = term_i_55;
  t = next_counter_0_0(t);
  e_85 = t;
  t = SSL_int_to_string(e_85);
  q_85 = t;
  t = term_k_55;
  s_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_55, q_85);
  t = u_16(s_85, q_85, t);
  h_85 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_55, h_85);
  r_85 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_85, (ATerm) ATmakeAppl(sym_Defined_2, term_l_55, h_85));
  t = k_16(z_8, g_85, r_85, t);
  t = h_85;
  return(t);
}
ATerm RenameVarTerm_2_0 (ATerm m_179 (ATerm), ATerm n_179 (ATerm), ATerm t)
{
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL;
  w_95 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_95 = ATgetArgument(t, 0);
      {
        ATerm m_55 = t;
        int n_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_34 = NULL,r_34 = NULL,s_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,a_35 = NULL,n_27 = NULL,m_27 = NULL;
            t = SSLgetAnnotations(w_95);
            p_34 = t;
            t = x_95;
            if(match_cons(t, sym_ListVar_1))
              {
                s_34 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(x_95);
            r_34 = t;
            t = s_34;
            t = m_179(t);
            y_34 = t;
            t = term_o_55;
            a_35 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_34, term_o_55);
            t = u_16(y_34, a_35, t);
            w_34 = t;
            t = (ATerm) ATmakeAppl(sym_ListVar_1, w_34);
            m_27 = t;
            t = SSLsetAnnotations(m_27, r_34);
            x_34 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, x_34);
            n_27 = t;
            t = SSLsetAnnotations(n_27, p_34);
            LocalPopChoice(n_55);
          }
        else
          {
            t = m_55;
            {
              ATerm j_35 = NULL,o_35 = NULL,q_27 = NULL;
              t = SSLgetAnnotations(w_95);
              j_35 = t;
              t = x_95;
              t = m_179(t);
              o_35 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, o_35);
              q_27 = t;
              t = SSLsetAnnotations(q_27, j_35);
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_SVar_1))
        {
          x_95 = ATgetArgument(t, 0);
          {
            ATerm w_35 = NULL,y_35 = NULL,t_27 = NULL;
            t = SSLgetAnnotations(w_95);
            w_35 = t;
            t = x_95;
            t = m_179(t);
            y_35 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, y_35);
            t_27 = t;
            t = SSLsetAnnotations(t_27, w_35);
          }
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              x_95 = ATgetArgument(t, 0);
              y_95 = ATgetArgument(t, 1);
              {
                ATerm r_36 = NULL,v_36 = NULL,u_27 = NULL;
                t = SSLgetAnnotations(w_95);
                r_36 = t;
                t = x_95;
                t = m_179(t);
                v_36 = t;
                t = (ATerm) ATmakeAppl(sym_VarDec_2, v_36, y_95);
                u_27 = t;
                t = SSLsetAnnotations(u_27, r_36);
              }
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  x_95 = ATgetArgument(t, 0);
                  {
                    ATerm d_37 = NULL,f_37 = NULL,v_27 = NULL;
                    t = SSLgetAnnotations(w_95);
                    d_37 = t;
                    t = x_95;
                    t = m_179(t);
                    f_37 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_37);
                    v_27 = t;
                    t = SSLsetAnnotations(v_27, d_37);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      x_95 = ATgetArgument(t, 0);
                      y_95 = ATgetArgument(t, 1);
                      {
                        ATerm z_37 = NULL,c_38 = NULL,d_38 = NULL,z_27 = NULL;
                        t = SSLgetAnnotations(w_95);
                        z_37 = t;
                        t = x_95;
                        t = m_179(t);
                        c_38 = t;
                        t = y_95;
                        t = n_179(t);
                        d_38 = t;
                        t = (ATerm) ATmakeAppl(sym_Rec_2, c_38, d_38);
                        z_27 = t;
                        t = SSLsetAnnotations(z_27, z_37);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefNoArgs_2))
                        {
                          x_95 = ATgetArgument(t, 0);
                          y_95 = ATgetArgument(t, 1);
                          {
                            ATerm r_38 = NULL,j_39 = NULL,k_39 = NULL,a_28 = NULL;
                            t = SSLgetAnnotations(w_95);
                            r_38 = t;
                            t = x_95;
                            t = m_179(t);
                            j_39 = t;
                            t = y_95;
                            t = n_179(t);
                            k_39 = t;
                            t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, j_39, k_39);
                            a_28 = t;
                            t = SSLsetAnnotations(a_28, r_38);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              x_95 = ATgetArgument(t, 0);
                              y_95 = ATgetArgument(t, 1);
                              u_95 = ATgetArgument(t, 2);
                              {
                                ATerm l_40 = NULL,s_40 = NULL,u_40 = NULL,v_40 = NULL,f_28 = NULL;
                                t = SSLgetAnnotations(w_95);
                                l_40 = t;
                                t = x_95;
                                t = m_179(t);
                                s_40 = t;
                                t = y_95;
                                t = n_179(t);
                                u_40 = t;
                                t = u_95;
                                t = n_179(t);
                                v_40 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, s_40, u_40, v_40);
                                f_28 = t;
                                t = SSLsetAnnotations(f_28, l_40);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  x_95 = ATgetArgument(t, 0);
                                  y_95 = ATgetArgument(t, 1);
                                  u_95 = ATgetArgument(t, 2);
                                  v_95 = ATgetArgument(t, 3);
                                  {
                                    ATerm q_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,b_42 = NULL,g_28 = NULL;
                                    t = SSLgetAnnotations(w_95);
                                    q_41 = t;
                                    t = x_95;
                                    t = m_179(t);
                                    x_41 = t;
                                    t = y_95;
                                    t = n_179(t);
                                    y_41 = t;
                                    t = u_95;
                                    t = n_179(t);
                                    z_41 = t;
                                    t = v_95;
                                    t = n_179(t);
                                    b_42 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, x_41, y_41, z_41, b_42);
                                    g_28 = t;
                                    t = SSLsetAnnotations(g_28, q_41);
                                  }
                                }
                              else
                                {
                                  ATerm o_42 = NULL,s_42 = NULL,t_42 = NULL,h_28 = NULL;
                                  if(match_cons(t, sym_Scope_2))
                                    {
                                      x_95 = ATgetArgument(t, 0);
                                      y_95 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(w_95);
                                  o_42 = t;
                                  t = x_95;
                                  t = map_1_0(m_179, t);
                                  s_42 = t;
                                  t = y_95;
                                  t = n_179(t);
                                  t_42 = t;
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, s_42, t_42);
                                  h_28 = t;
                                  t = SSLsetAnnotations(h_28, o_42);
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
static ATerm a_9 (ATerm t)
{
  t = term_h_55;
  return(t);
}
static ATerm c_9 (ATerm t)
{
  t = term_w_54;
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm p_55 = t;
  int x_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_96 = NULL,e_43 = NULL,i_43 = NULL;
      s_96 = t;
      t = term_h_55;
      i_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_h_55, s_96);
      t = j_16(i_43, s_96, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm y_55 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) y_55) != ATmakeSymbol("w_0", 0, ATtrue)))
            _fail(t);
          e_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = e_43;
      LocalPopChoice(x_55);
    }
  else
    {
      t = p_55;
      t = NewNumberedVar_0_0(t);
    }
  return(t);
}
ATerm dr_rename_vars_0_0 (ATerm t)
{
  static ATerm b_9 (ATerm t);
  static ATerm b_9 (ATerm t)
  {
    ATerm m_96 = NULL,n_96 = NULL,o_96 = NULL;
    static ATerm y_96 (ATerm t);
    static ATerm y_96 (ATerm t)
    {
      ATerm b_56 = t;
      int e_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RenameVarTerm_2_0(d_9, y_96, t);
          LocalPopChoice(e_56);
        }
      else
        {
          t = b_56;
          t = SRTS_all(y_96, t);
        }
      return(t);
    }
    m_96 = t;
    t = term_i_55;
    n_96 = t;
    t = term_g_55;
    o_96 = t;
    t = term_h_56;
    t = k_16(c_9, n_96, o_96, t);
    t = m_96;
    t = y_96(t);
    return(t);
  }
  t = scope_2_0(a_9, b_9, t);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm c_105 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_105);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm m_56 = t;
  int q_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_56);
    }
  else
    {
      t = m_56;
      {
        ATerm r_56 = t;
        int z_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_56);
          }
        else
          {
            t = r_56;
            {
              ATerm a_57 = t;
              int c_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_105 = NULL,f_105 = NULL,g_105 = NULL,h_105 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_105 = ATgetArgument(t, 0);
                      f_105 = ATgetArgument(t, 1);
                      g_105 = ATgetArgument(t, 2);
                      h_105 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_105;
                  t = map_1_0(g_9, t);
                  LocalPopChoice(c_57);
                }
              else
                {
                  t = a_57;
                  {
                    ATerm d_57 = t;
                    int e_57 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_57);
                      }
                    else
                      {
                        t = d_57;
                        t = dynrule_targs_1_0(h_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm h_106 = NULL;
  ATerm f_57 = t;
  int g_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_106 = ATgetArgument(t, 0);
          {
            ATerm h_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_57);
      t = h_106;
    }
  else
    {
      t = f_57;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_106;
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = map_1_0(l_9, t);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm a_107 = NULL;
  ATerm i_57 = t;
  int j_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_107 = ATgetArgument(t, 0);
          {
            ATerm l_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_57);
      t = a_107;
    }
  else
    {
      t = i_57;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_107 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_107;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm e_107 = NULL;
  e_107 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, e_107);
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm f_107 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_107);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm m_57 = t;
  int n_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_57);
    }
  else
    {
      t = m_57;
      {
        ATerm o_57 = t;
        int p_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_57);
          }
        else
          {
            t = o_57;
            {
              ATerm q_57 = t;
              int r_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_107 = NULL,i_107 = NULL,j_107 = NULL,p_107 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_107 = ATgetArgument(t, 0);
                      i_107 = ATgetArgument(t, 1);
                      j_107 = ATgetArgument(t, 2);
                      p_107 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_107;
                  t = map_1_0(h_10, t);
                  LocalPopChoice(r_57);
                }
              else
                {
                  t = q_57;
                  {
                    ATerm s_57 = t;
                    int t_57 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_57);
                      }
                    else
                      {
                        t = s_57;
                        t = dynrule_targs_1_0(i_10, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm l_111 = NULL;
  ATerm v_57 = t;
  int w_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_111 = ATgetArgument(t, 0);
          {
            ATerm y_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_57);
      t = l_111;
    }
  else
    {
      t = v_57;
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
static ATerm i_10 (ATerm t)
{
  t = map_1_0(j_10, t);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm s_111 = NULL;
  ATerm e_58 = t;
  int g_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_111 = ATgetArgument(t, 0);
          {
            ATerm h_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_58);
      t = s_111;
    }
  else
    {
      t = e_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_111 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_111;
    }
  return(t);
}
static ATerm k_10 (ATerm t)
{
  ATerm a_112 = NULL;
  a_112 = t;
  {
    ATerm j_58 = t;
    int m_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_112 = NULL,l_43 = NULL,n_43 = NULL,f_29 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            i_112 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_112);
        l_43 = t;
        t = i_112;
        t = ContextVar_0_0(t);
        n_43 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, n_43);
        f_29 = t;
        t = SSLsetAnnotations(f_29, l_43);
        LocalPopChoice(m_58);
      }
    else
      {
        t = j_58;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, a_112);
  return(t);
}
static ATerm o_10 (ATerm t)
{
  t = term_f_55;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm k_112 = NULL,n_112 = NULL;
  if(match_cons(t, sym__2))
    {
      k_112 = ATgetArgument(t, 0);
      n_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_16(k_112, n_112, t);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  t = term_m_42;
  return(t);
}
static ATerm u_10 (ATerm t)
{
  t = term_f_55;
  return(t);
}
static ATerm v_10 (ATerm t)
{
  ATerm t_112 = NULL,u_112 = NULL;
  if(match_cons(t, sym__2))
    {
      t_112 = ATgetArgument(t, 0);
      u_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_16(t_112, u_112, t);
  return(t);
}
static ATerm w_10 (ATerm t)
{
  t = term_m_42;
  return(t);
}
static ATerm c_11 (ATerm t)
{
  ATerm y_113 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_113);
  return(t);
}
static ATerm e_11 (ATerm t)
{
  ATerm o_58 = t;
  int p_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_58);
    }
  else
    {
      t = o_58;
      {
        ATerm q_58 = t;
        int x_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_58);
          }
        else
          {
            t = q_58;
            {
              ATerm y_58 = t;
              int z_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_114 = NULL,n_114 = NULL,o_114 = NULL,p_114 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_114 = ATgetArgument(t, 0);
                      n_114 = ATgetArgument(t, 1);
                      o_114 = ATgetArgument(t, 2);
                      p_114 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_114;
                  t = map_1_0(f_11, t);
                  LocalPopChoice(z_58);
                }
              else
                {
                  t = y_58;
                  {
                    ATerm a_59 = t;
                    int b_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_59);
                      }
                    else
                      {
                        t = a_59;
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
static ATerm f_11 (ATerm t)
{
  ATerm w_114 = NULL;
  ATerm c_59 = t;
  int d_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_114 = ATgetArgument(t, 0);
          {
            ATerm e_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_59);
      t = w_114;
    }
  else
    {
      t = c_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_114;
    }
  return(t);
}
static ATerm h_11 (ATerm t)
{
  t = map_1_0(j_11, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  ATerm b_115 = NULL;
  ATerm f_59 = t;
  int h_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_115 = ATgetArgument(t, 0);
          {
            ATerm i_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_59);
      t = b_115;
    }
  else
    {
      t = f_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_115;
    }
  return(t);
}
static ATerm l_11 (ATerm t)
{
  ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL;
  g_115 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      f_115 = ATgetArgument(t, 0);
      t = f_115;
    }
  else
    {
      t = g_115;
    }
  e_115 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_115);
  return(t);
}
static ATerm o_11 (ATerm t)
{
  t = term_j_59;
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = term_f_55;
  return(t);
}
static ATerm v_11 (ATerm t)
{
  ATerm n_115 = NULL,o_115 = NULL;
  if(match_cons(t, sym__2))
    {
      n_115 = ATgetArgument(t, 0);
      o_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_16(n_115, o_115, t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  t = term_m_42;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  t = term_f_55;
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm p_115 = NULL,q_115 = NULL;
  if(match_cons(t, sym__2))
    {
      p_115 = ATgetArgument(t, 0);
      q_115 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_16(p_115, q_115, t);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_m_42;
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm i_116 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_116 = ATgetArgument(t, 0);
      t = i_116;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_116 = ATgetArgument(t, 0);
          {
            ATerm k_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = i_116;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_116), (ATerm) ATempty);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  ATerm q_116 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_116 = ATgetArgument(t, 0);
      t = q_116;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_116 = ATgetArgument(t, 0);
          {
            ATerm l_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = q_116;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, q_116);
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm v_116 = NULL;
  v_116 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_116);
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_m_59;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  ATerm e_117 = NULL,f_117 = NULL,g_117 = NULL;
  e_117 = t;
  t = term_a_50;
  f_117 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_51, e_117);
  g_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_50, (ATerm) ATmakeAppl(sym_Defined_2, term_e_51, e_117));
  t = n_15(g_12, f_117, g_117, t);
  t = e_117;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_p_51;
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm o_179 (ATerm), ATerm t)
{
  ATerm u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,g_98 = NULL,h_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,l_99 = NULL,f_100 = NULL,g_100 = NULL,j_100 = NULL,k_100 = NULL,q_101 = NULL,r_101 = NULL,w_102 = NULL,y_102 = NULL,x_103 = NULL,y_103 = NULL,z_103 = NULL,l_104 = NULL,w_104 = NULL,b_105 = NULL;
  w_97 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      ATerm n_59 = ATgetArgument(t, 0);
      if(((ATgetType(n_59) == AT_LIST) && !(ATisEmpty(n_59))))
        {
          ATerm q_59 = ATgetFirst((ATermList) n_59);
          if(match_cons(q_59, sym_SetDynRule_2))
            {
              ATerm w_59 = ATgetArgument(q_59, 0);
              if(match_cons(w_59, sym_DynRuleId_1))
                {
                  ATerm y_59 = ATgetArgument(w_59, 0);
                  if(match_cons(y_59, sym_RDecT_3))
                    {
                      z_103 = ATgetArgument(y_59, 0);
                      h_98 = ATgetArgument(y_59, 1);
                      s_98 = ATgetArgument(y_59, 2);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
              {
                ATerm x_59 = ATgetArgument(q_59, 1);
                if(match_cons(x_59, sym_Rule_3))
                  {
                    f_100 = ATgetArgument(x_59, 0);
                    z_97 = ATgetArgument(x_59, 1);
                    a_98 = ATgetArgument(x_59, 2);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          {
            ATerm s_59 = (ATerm) ATgetNext((ATermList) n_59);
            if(((ATgetType(s_59) != AT_LIST) || !(ATisEmpty(s_59))))
              _fail(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = f_100;
  t = dummify_0_0(t);
  y_102 = t;
  t = free_vars_3_0(e_9, f_9, tboundin_3_0, t);
  t = map_1_0(x_9, t);
  v_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_100, z_97, a_98);
  t = free_vars_3_0(a_10, b_10, tboundin_3_0, t);
  t = filter_1_0(k_10, t);
  u_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_97, v_97);
  t = diff_0_0(t);
  y_97 = t;
  t = h_98;
  t = foldr_3_0(o_10, r_10, t_10, t);
  w_104 = t;
  t = s_98;
  t = foldr_3_0(u_10, v_10, w_10, t);
  b_105 = t;
  t = w_97;
  t = dr_rename_vars_0_0(t);
  b_98 = t;
  {
    ATerm z_59 = t;
    int a_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_112 = NULL,r_43 = NULL;
        t = term_j_59;
        r_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_59, b_98);
        t = j_16(r_43, b_98, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm b_60 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_60) != ATmakeSymbol("z_0", 0, ATtrue)))
              _fail(t);
            v_112 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_112;
        g_98 = t;
        t = b_98;
        LocalPopChoice(a_60);
        t = (ATerm) ATempty;
        x_103 = t;
        t = (ATerm) ATempty;
        y_103 = t;
      }
    else
      {
        t = z_59;
        {
          ATerm h_113 = NULL,o_113 = NULL,p_113 = NULL,q_113 = NULL,x_113 = NULL;
          t = term_s_46;
          x_113 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_s_46, z_103);
          t = u_16(x_113, z_103, t);
          g_100 = t;
          t = new_0_0(t);
          g_98 = t;
          t = new_0_0(t);
          w_102 = t;
          t = f_100;
          t = free_vars_3_0(c_11, e_11, tboundin_3_0, t);
          u_98 = t;
          t = map_1_0(l_11, t);
          p_113 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_102))), p_113), s_98);
          t = concat_0_0(t);
          x_97 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, g_100, h_98, x_97, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(y_97), (ATerm) ATmakeAppl(sym_Str_1, g_98))), z_97, (ATerm) ATmakeAppl(sym_BA_2, a_98, (ATerm) ATmakeAppl(sym_Var_1, w_102)))));
          x_103 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_c_60, g_98);
          q_113 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_98, (ATerm) ATmakeAppl(sym_Defined_2, term_c_60, g_98));
          t = k_16(o_11, b_98, q_113, t);
          t = h_98;
          t = foldr_3_0(t_11, v_11, w_11, t);
          h_113 = t;
          t = s_98;
          t = foldr_3_0(y_11, z_11, a_12, t);
          o_113 = t;
          t = h_113;
          if((w_104 != t))
            {
              _fail(t);
            }
          t = o_113;
          if((b_105 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, z_103, (ATerm) ATmakeAppl(sym__2, h_113, o_113));
          {
            ATerm d_60 = t;
            int i_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_43 = NULL,w_43 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_103, (ATerm) ATmakeAppl(sym__2, h_113, o_113)), y_102);
                u_43 = t;
                t = term_m_59;
                w_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_m_59, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_103, (ATerm) ATmakeAppl(sym__2, h_113, o_113)), y_102));
                t = j_16(w_43, u_43, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm j_60 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_60) != ATmakeSymbol("c_1", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, z_103, (ATerm) ATmakeAppl(sym__2, h_113, o_113));
                LocalPopChoice(i_60);
                t = (ATerm) ATempty;
                y_103 = t;
              }
            else
              {
                t = d_60;
                {
                  ATerm r_115 = NULL,s_115 = NULL,z_115 = NULL,a_116 = NULL,b_116 = NULL,c_116 = NULL,d_116 = NULL;
                  t = term_r_46;
                  d_116 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_r_46, z_103);
                  t = u_16(d_116, z_103, t);
                  v_98 = t;
                  t = term_l_60;
                  c_116 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_l_60, z_103);
                  t = u_16(c_116, z_103, t);
                  w_98 = t;
                  t = term_m_60;
                  b_116 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_m_60, z_103);
                  t = u_16(b_116, z_103, t);
                  l_99 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, z_103), term_o_60);
                  a_116 = t;
                  t = SSL_concat_strings(a_116);
                  r_101 = t;
                  t = h_98;
                  t = map_1_0(b_12, t);
                  j_100 = t;
                  t = s_98;
                  t = map_1_0(c_12, t);
                  t_98 = t;
                  t = u_98;
                  t = map_1_0(d_12, t);
                  r_115 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_102))), r_115), t_98);
                  t = concat_0_0(t);
                  k_100 = t;
                  t = y_102;
                  {
                    ATerm p_60 = t;
                    int r_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = y_102;
                        if((f_100 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, w_102);
                        LocalPopChoice(r_60);
                      }
                    else
                      {
                        t = p_60;
                        t = y_102;
                      }
                  }
                  q_101 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, r_101, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_102)), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_a_62, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, w_102))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, z_103))))), (ATerm) ATmakeAppl(sym_RDefT_4, l_99, h_98, s_98, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_102), f_100), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_46, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_100), j_100, k_100))), term_t_53), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_y_61, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, q_101), (ATerm) ATmakeAppl(sym_Str_1, z_103))), term_v_60), term_t_53)))), (ATerm) ATmakeAppl(sym_RDefT_4, w_98, h_98, s_98, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_102), f_100), term_x_60, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_z_60, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, q_101), (ATerm) ATmakeAppl(sym_Str_1, z_103))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_61), term_c_61), term_t_53))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_61, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_100), j_100, k_100), term_i_61))), term_l_61), term_t_53), term_n_61), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, term_s_61, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_n_61), term_c_61)), term_e_61)))))), (ATerm) ATmakeAppl(sym_RDefT_4, v_98, h_98, s_98, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_102), f_100), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_46, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_100), j_100, k_100))), term_t_53), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_m_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, q_101), (ATerm) ATmakeAppl(sym_Str_1, z_103))), term_v_60), term_t_53)))), (ATerm) ATmakeAppl(sym_RDefT_4, z_103, h_98, s_98, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_102), f_100), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_t_60, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_100), j_100, k_100))), term_t_53), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_m_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, q_101), (ATerm) ATmakeAppl(sym_Str_1, z_103))), term_t_53))));
                  y_103 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_103, (ATerm) ATmakeAppl(sym__2, h_113, o_113)), y_102);
                  s_115 = t;
                  t = term_c_62;
                  z_115 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_103, (ATerm) ATmakeAppl(sym__2, h_113, o_113)), y_102), term_c_62);
                  t = k_16(e_12, s_115, z_115, t);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SDefT_4, r_101, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_102)), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_CallT_3, term_a_62, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallNoArgs_1, (ATerm) ATmakeAppl(sym_SVar_1, w_102))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, z_103))))), (ATerm) ATmakeAppl(sym_RDefT_4, l_99, h_98, s_98, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_102), f_100), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_46, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_100), j_100, k_100))), term_t_53), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_y_61, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, q_101), (ATerm) ATmakeAppl(sym_Str_1, z_103))), term_v_60), term_t_53)))), (ATerm) ATmakeAppl(sym_RDefT_4, w_98, h_98, s_98, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_102), f_100), term_x_60, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_z_60, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, q_101), (ATerm) ATmakeAppl(sym_Str_1, z_103))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_61), term_c_61), term_t_53))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_g_61, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_100), j_100, k_100), term_i_61))), term_l_61), term_t_53), term_n_61), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, term_s_61, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_n_61), term_c_61)), term_e_61)))))), (ATerm) ATmakeAppl(sym_RDefT_4, v_98, h_98, s_98, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_102), f_100), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_x_46, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_100), j_100, k_100))), term_t_53), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_m_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, q_101), (ATerm) ATmakeAppl(sym_Str_1, z_103))), term_v_60), term_t_53)))), (ATerm) ATmakeAppl(sym_RDefT_4, z_103, h_98, s_98, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, w_102), f_100), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_t_60, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_100), j_100, k_100))), term_t_53), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_m_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, q_101), (ATerm) ATmakeAppl(sym_Str_1, z_103))), term_t_53))));
                }
              }
          }
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, x_103, y_103);
  t = conc_0_0(t);
  t = map_1_0(f_12, t);
  t = z_103;
  {
    ATerm e_62 = t;
    int f_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = create_new_strategy_0_0(t);
        LocalPopChoice(f_62);
      }
    else
      {
        t = e_62;
      }
  }
  t = z_103;
  {
    ATerm g_62 = t;
    int h_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = create_kill_strategy_0_0(t);
        LocalPopChoice(h_62);
      }
    else
      {
        t = g_62;
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, y_102, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(y_97), (ATerm) ATmakeAppl(sym_Str_1, g_98))));
  t = o_179(t);
  l_104 = t;
  t = (ATerm) ATmakeAppl(sym_Where_1, l_104);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL,u_118 = NULL;
  p_118 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      q_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_118 = ATgetFirst((ATermList) t);
      u_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_118;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      s_118 = ATgetArgument(t, 0);
      t_118 = ATgetArgument(t, 1);
      t = s_118;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          l_118 = ATgetArgument(t, 0);
          k_118 = ATgetArgument(t, 1);
          {
            static ATerm h_12 (ATerm t);
            static ATerm h_12 (ATerm t)
            {
              ATerm a_119 = NULL,b_119 = NULL;
              a_119 = t;
              t = SSL_explode_term(a_119);
              if(match_cons(t, sym__2))
                {
                  ATerm i_62 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) i_62) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm j_62 = ATgetArgument(t, 1);
                    if(((ATgetType(j_62) == AT_LIST) && !(ATisEmpty(j_62))))
                      {
                        b_119 = ATgetFirst((ATermList) j_62);
                        {
                          ATerm k_62 = (ATerm) ATgetNext((ATermList) j_62);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_62, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_119), k_118), (ATerm) ATmakeAppl(sym_Str_1, not_null(m_118))));
              return(t);
            }
            t = l_118;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((m_118 != NULL) && (m_118 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_118 = ATgetArgument(t, 0);
                n_118 = ATgetArgument(t, 1);
                o_118 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = u_118;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, m_118, n_118, o_118)), (ATerm) ATmakeAppl(sym_Rule_3, t_118, term_n_62, term_e_30))));
            t = SplitDynamicRule_1_0(h_12, t);
          }
        }
      else
        {
          static ATerm i_12 (ATerm t);
          static ATerm i_12 (ATerm t)
          {
            ATerm g_119 = NULL,h_119 = NULL;
            g_119 = t;
            t = SSL_explode_term(g_119);
            if(match_cons(t, sym__2))
              {
                ATerm o_62 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_62) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm p_62 = ATgetArgument(t, 1);
                  if(((ATgetType(p_62) == AT_LIST) && !(ATisEmpty(p_62))))
                    {
                      h_119 = ATgetFirst((ATermList) p_62);
                      {
                        ATerm q_62 = (ATerm) ATgetNext((ATermList) p_62);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_t_62, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_119), (ATerm) ATmakeAppl(sym_Str_1, not_null(m_118))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              l_118 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_118;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((m_118 != NULL) && (m_118 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                m_118 = ATgetArgument(t, 0);
              n_118 = ATgetArgument(t, 1);
              o_118 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = u_118;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, m_118, n_118, o_118)), (ATerm) ATmakeAppl(sym_Rule_3, t_118, term_n_62, term_e_30))));
          t = SplitDynamicRule_1_0(i_12, t);
        }
    }
  else
    {
      if(match_cons(t, sym_SetDynRuleMatch_2))
        {
          s_118 = ATgetArgument(t, 0);
          t_118 = ATgetArgument(t, 1);
          t = s_118;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              l_118 = ATgetArgument(t, 0);
              k_118 = ATgetArgument(t, 1);
              {
                static ATerm b_13 (ATerm t);
                static ATerm b_13 (ATerm t)
                {
                  ATerm o_119 = NULL,p_119 = NULL,a_44 = NULL;
                  o_119 = t;
                  t = SSL_explode_term(o_119);
                  if(match_cons(t, sym__2))
                    {
                      ATerm u_62 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) u_62) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm v_62 = ATgetArgument(t, 1);
                        if(((ATgetType(v_62) == AT_LIST) && !(ATisEmpty(v_62))))
                          {
                            p_119 = ATgetFirst((ATermList) v_62);
                            {
                              ATerm x_62 = (ATerm) ATgetNext((ATermList) v_62);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(o_119);
                  if(match_cons(t, sym__2))
                    {
                      ATerm y_62 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) y_62) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm z_62 = ATgetArgument(t, 1);
                        if(((ATgetType(z_62) == AT_LIST) && !(ATisEmpty(z_62))))
                          {
                            ATerm a_63 = ATgetFirst((ATermList) z_62);
                            ATerm b_63 = (ATerm) ATgetNext((ATermList) z_62);
                            if(((ATgetType(b_63) == AT_LIST) && !(ATisEmpty(b_63))))
                              {
                                a_44 = ATgetFirst((ATermList) b_63);
                                {
                                  ATerm c_63 = (ATerm) ATgetNext((ATermList) b_63);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_e_63, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_44), p_119), k_118), (ATerm) ATmakeAppl(sym_Str_1, not_null(m_118))));
                  return(t);
                }
                t = l_118;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((m_118 != NULL) && (m_118 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      m_118 = ATgetArgument(t, 0);
                    n_118 = ATgetArgument(t, 1);
                    o_118 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = u_118;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, m_118, n_118, o_118)), (ATerm) ATmakeAppl(sym_Rule_3, t_118, t_118, term_e_30))));
                t = SplitDynamicRule_1_0(b_13, t);
              }
            }
          else
            {
              static ATerm d_13 (ATerm t);
              static ATerm d_13 (ATerm t)
              {
                ATerm v_119 = NULL,w_119 = NULL,c_44 = NULL;
                v_119 = t;
                t = SSL_explode_term(v_119);
                if(match_cons(t, sym__2))
                  {
                    ATerm f_63 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_63) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm g_63 = ATgetArgument(t, 1);
                      if(((ATgetType(g_63) == AT_LIST) && !(ATisEmpty(g_63))))
                        {
                          w_119 = ATgetFirst((ATermList) g_63);
                          {
                            ATerm h_63 = (ATerm) ATgetNext((ATermList) g_63);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(v_119);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_63 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_63) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm j_63 = ATgetArgument(t, 1);
                      if(((ATgetType(j_63) == AT_LIST) && !(ATisEmpty(j_63))))
                        {
                          ATerm k_63 = ATgetFirst((ATermList) j_63);
                          ATerm l_63 = (ATerm) ATgetNext((ATermList) j_63);
                          if(((ATgetType(l_63) == AT_LIST) && !(ATisEmpty(l_63))))
                            {
                              c_44 = ATgetFirst((ATermList) l_63);
                              {
                                ATerm m_63 = (ATerm) ATgetNext((ATermList) l_63);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_63, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_44), w_119), (ATerm) ATmakeAppl(sym_Str_1, not_null(m_118))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  l_118 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_118;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((m_118 != NULL) && (m_118 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    m_118 = ATgetArgument(t, 0);
                  n_118 = ATgetArgument(t, 1);
                  o_118 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = u_118;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, m_118, n_118, o_118)), (ATerm) ATmakeAppl(sym_Rule_3, t_118, t_118, term_e_30))));
              t = SplitDynamicRule_1_0(d_13, t);
            }
        }
      else
        {
          if(match_cons(t, sym_AddDynRule_2))
            {
              s_118 = ATgetArgument(t, 0);
              t_118 = ATgetArgument(t, 1);
              t = s_118;
              if(match_cons(t, sym_LabeledDynRuleId_2))
                {
                  l_118 = ATgetArgument(t, 0);
                  k_118 = ATgetArgument(t, 1);
                  {
                    static ATerm e_13 (ATerm t);
                    static ATerm e_13 (ATerm t)
                    {
                      ATerm d_120 = NULL,e_120 = NULL,g_44 = NULL;
                      d_120 = t;
                      t = SSL_explode_term(d_120);
                      if(match_cons(t, sym__2))
                        {
                          ATerm p_63 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) p_63) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm q_63 = ATgetArgument(t, 1);
                            if(((ATgetType(q_63) == AT_LIST) && !(ATisEmpty(q_63))))
                              {
                                e_120 = ATgetFirst((ATermList) q_63);
                                {
                                  ATerm r_63 = (ATerm) ATgetNext((ATermList) q_63);
                                }
                              }
                            else
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      t = SSL_explode_term(d_120);
                      if(match_cons(t, sym__2))
                        {
                          ATerm s_63 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) s_63) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm t_63 = ATgetArgument(t, 1);
                            if(((ATgetType(t_63) == AT_LIST) && !(ATisEmpty(t_63))))
                              {
                                ATerm u_63 = ATgetFirst((ATermList) t_63);
                                ATerm v_63 = (ATerm) ATgetNext((ATermList) t_63);
                                if(((ATgetType(v_63) == AT_LIST) && !(ATisEmpty(v_63))))
                                  {
                                    g_44 = ATgetFirst((ATermList) v_63);
                                    {
                                      ATerm w_63 = (ATerm) ATgetNext((ATermList) v_63);
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
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_64, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_44), e_120), k_118), (ATerm) ATmakeAppl(sym_Str_1, not_null(m_118))));
                      return(t);
                    }
                    t = l_118;
                    if(match_cons(t, sym_RDecT_3))
                      {
                        if(((m_118 != NULL) && (m_118 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          m_118 = ATgetArgument(t, 0);
                        n_118 = ATgetArgument(t, 1);
                        o_118 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = u_118;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, m_118, n_118, o_118)), t_118)));
                    t = SplitDynamicRule_1_0(e_13, t);
                  }
                }
              else
                {
                  static ATerm f_13 (ATerm t);
                  static ATerm f_13 (ATerm t)
                  {
                    ATerm k_120 = NULL,l_120 = NULL,t_44 = NULL;
                    k_120 = t;
                    t = SSL_explode_term(k_120);
                    if(match_cons(t, sym__2))
                      {
                        ATerm d_64 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) d_64) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm e_64 = ATgetArgument(t, 1);
                          if(((ATgetType(e_64) == AT_LIST) && !(ATisEmpty(e_64))))
                            {
                              l_120 = ATgetFirst((ATermList) e_64);
                              {
                                ATerm f_64 = (ATerm) ATgetNext((ATermList) e_64);
                              }
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(k_120);
                    if(match_cons(t, sym__2))
                      {
                        ATerm g_64 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) g_64) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm h_64 = ATgetArgument(t, 1);
                          if(((ATgetType(h_64) == AT_LIST) && !(ATisEmpty(h_64))))
                            {
                              ATerm i_64 = ATgetFirst((ATermList) h_64);
                              ATerm j_64 = (ATerm) ATgetNext((ATermList) h_64);
                              if(((ATgetType(j_64) == AT_LIST) && !(ATisEmpty(j_64))))
                                {
                                  t_44 = ATgetFirst((ATermList) j_64);
                                  {
                                    ATerm l_64 = (ATerm) ATgetNext((ATermList) j_64);
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
                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_64, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_44), l_120), (ATerm) ATmakeAppl(sym_Str_1, not_null(m_118))));
                    return(t);
                  }
                  if(match_cons(t, sym_DynRuleId_1))
                    {
                      l_118 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_118;
                  if(match_cons(t, sym_RDecT_3))
                    {
                      if(((m_118 != NULL) && (m_118 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_118 = ATgetArgument(t, 0);
                      n_118 = ATgetArgument(t, 1);
                      o_118 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = u_118;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, m_118, n_118, o_118)), t_118)));
                  t = SplitDynamicRule_1_0(f_13, t);
                }
            }
          else
            {
              if(match_cons(t, sym_SetDynRule_2))
                {
                  s_118 = ATgetArgument(t, 0);
                  t_118 = ATgetArgument(t, 1);
                  t = s_118;
                  if(match_cons(t, sym_LabeledDynRuleId_2))
                    {
                      l_118 = ATgetArgument(t, 0);
                      k_118 = ATgetArgument(t, 1);
                      {
                        static ATerm h_13 (ATerm t);
                        static ATerm h_13 (ATerm t)
                        {
                          ATerm s_120 = NULL,t_120 = NULL,v_44 = NULL;
                          s_120 = t;
                          t = SSL_explode_term(s_120);
                          if(match_cons(t, sym__2))
                            {
                              ATerm r_64 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) r_64) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm s_64 = ATgetArgument(t, 1);
                                if(((ATgetType(s_64) == AT_LIST) && !(ATisEmpty(s_64))))
                                  {
                                    t_120 = ATgetFirst((ATermList) s_64);
                                    {
                                      ATerm t_64 = (ATerm) ATgetNext((ATermList) s_64);
                                    }
                                  }
                                else
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          t = SSL_explode_term(s_120);
                          if(match_cons(t, sym__2))
                            {
                              ATerm u_64 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) u_64) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm w_64 = ATgetArgument(t, 1);
                                if(((ATgetType(w_64) == AT_LIST) && !(ATisEmpty(w_64))))
                                  {
                                    ATerm x_64 = ATgetFirst((ATermList) w_64);
                                    ATerm y_64 = (ATerm) ATgetNext((ATermList) w_64);
                                    if(((ATgetType(y_64) == AT_LIST) && !(ATisEmpty(y_64))))
                                      {
                                        v_44 = ATgetFirst((ATermList) y_64);
                                        {
                                          ATerm z_64 = (ATerm) ATgetNext((ATermList) y_64);
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
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_e_63, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_44), t_120), k_118), (ATerm) ATmakeAppl(sym_Str_1, not_null(m_118))));
                          return(t);
                        }
                        t = l_118;
                        if(match_cons(t, sym_RDecT_3))
                          {
                            if(((m_118 != NULL) && (m_118 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              m_118 = ATgetArgument(t, 0);
                            n_118 = ATgetArgument(t, 1);
                            o_118 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = u_118;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, m_118, n_118, o_118)), t_118)));
                        t = SplitDynamicRule_1_0(h_13, t);
                      }
                    }
                  else
                    {
                      static ATerm n_13 (ATerm t);
                      static ATerm n_13 (ATerm t)
                      {
                        ATerm x_120 = NULL,y_120 = NULL,x_44 = NULL;
                        x_120 = t;
                        t = SSL_explode_term(x_120);
                        if(match_cons(t, sym__2))
                          {
                            ATerm b_65 = ATgetArgument(t, 0);
                            if((ATgetSymbol((ATermAppl) b_65) != ATmakeSymbol("", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm c_65 = ATgetArgument(t, 1);
                              if(((ATgetType(c_65) == AT_LIST) && !(ATisEmpty(c_65))))
                                {
                                  y_120 = ATgetFirst((ATermList) c_65);
                                  {
                                    ATerm e_65 = (ATerm) ATgetNext((ATermList) c_65);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = SSL_explode_term(x_120);
                        if(match_cons(t, sym__2))
                          {
                            ATerm f_65 = ATgetArgument(t, 0);
                            if((ATgetSymbol((ATermAppl) f_65) != ATmakeSymbol("", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm g_65 = ATgetArgument(t, 1);
                              if(((ATgetType(g_65) == AT_LIST) && !(ATisEmpty(g_65))))
                                {
                                  ATerm h_65 = ATgetFirst((ATermList) g_65);
                                  ATerm i_65 = (ATerm) ATgetNext((ATermList) g_65);
                                  if(((ATgetType(i_65) == AT_LIST) && !(ATisEmpty(i_65))))
                                    {
                                      x_44 = ATgetFirst((ATermList) i_65);
                                      {
                                        ATerm j_65 = (ATerm) ATgetNext((ATermList) i_65);
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
                        t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_63, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_44), y_120), (ATerm) ATmakeAppl(sym_Str_1, not_null(m_118))));
                        return(t);
                      }
                      if(match_cons(t, sym_DynRuleId_1))
                        {
                          l_118 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = l_118;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          if(((m_118 != NULL) && (m_118 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            m_118 = ATgetArgument(t, 0);
                          {
                            ATerm k_65 = ATgetArgument(t, 1);
                          }
                          {
                            ATerm l_65 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = u_118;
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = p_118;
                      t = SplitDynamicRule_1_0(n_13, t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_AddScopeLabel_2))
                    {
                      s_118 = ATgetArgument(t, 0);
                      t_118 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_118;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_65, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, t_118), (ATerm) ATmakeAppl(sym_Str_1, s_118)));
                }
            }
        }
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm DesugarDynRuleDef_0_0 (ATerm t)
{
  ATerm t_121 = NULL,u_121 = NULL,v_121 = NULL,w_121 = NULL,x_121 = NULL,y_121 = NULL,z_121 = NULL,a_122 = NULL,b_122 = NULL,c_122 = NULL,d_122 = NULL,e_122 = NULL,f_122 = NULL,g_122 = NULL,h_122 = NULL,i_122 = NULL,j_122 = NULL;
  i_122 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      j_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_122;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_122 = ATgetFirst((ATermList) t);
      f_122 = (ATerm) ATgetNext((ATermList) t);
      t = f_122;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = e_122;
          if(match_cons(t, sym_SetDynRuleDepends_3))
            {
              x_121 = ATgetArgument(t, 0);
              d_122 = ATgetArgument(t, 1);
              w_121 = ATgetArgument(t, 2);
              t = x_121;
              if(match_cons(t, sym_LabeledDynRuleId_2))
                {
                  y_121 = ATgetArgument(t, 0);
                  c_122 = ATgetArgument(t, 1);
                  t = y_121;
                  if(match_cons(t, sym_RDecT_3))
                    {
                      z_121 = ATgetArgument(t, 0);
                      a_122 = ATgetArgument(t, 1);
                      b_122 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = d_122;
                  if(match_cons(t, sym_Rule_3))
                    {
                      u_121 = ATgetArgument(t, 0);
                      v_121 = ATgetArgument(t, 1);
                      t_121 = ATgetArgument(t, 2);
                      {
                        ATerm s_122 = NULL,t_122 = NULL,u_122 = NULL,v_122 = NULL,w_122 = NULL;
                        t = i_122;
                        t = new_0_0(t);
                        t = new_0_0(t);
                        s_122 = t;
                        t = new_0_0(t);
                        t_122 = t;
                        t = new_0_0(t);
                        u_122 = t;
                        t = new_0_0(t);
                        v_122 = t;
                        t = new_0_0(t);
                        w_122 = t;
                        t = new_0_0(t);
                        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_LabeledDynRuleId_2, (ATerm)ATmakeAppl(sym_RDecT_3, z_121, a_122, b_122), c_122), (ATerm) ATmakeAppl(sym_Rule_3, u_121, v_121, t_121)))), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Build_1, c_122), (ATerm) ATmakeAppl(sym_Var_1, u_122)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Build_1, u_121), (ATerm) ATmakeAppl(sym_Var_1, v_122)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Build_1, w_121), (ATerm) ATmakeAppl(sym_Var_1, w_122)), (ATerm) ATmakeAppl(sym_Call_2, term_n_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATempty, t_122), s_122), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_122)), (ATerm) ATmakeAppl(sym_Var_1, s_122)))), (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_LabeledDynRuleId_2, (ATerm)ATmakeAppl(sym_RDecT_3, z_121, (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Var_1, s_122)), (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_l_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_122))), (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_122)), (ATerm) ATmakeAppl(sym_Var_1, v_122)), (ATerm) ATmakeAppl(sym_Var_1, u_122))), term_e_30)))))))))))));
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RuleNoCond_2))
                        {
                          u_121 = ATgetArgument(t, 0);
                          v_121 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SetDynRuleDepends_3, (ATerm)ATmakeAppl(sym_LabeledDynRuleId_2, (ATerm)ATmakeAppl(sym_RDecT_3, z_121, a_122, b_122), c_122), (ATerm)ATmakeAppl(sym_Rule_3, u_121, v_121, term_e_30), w_121)));
                    }
                }
              else
                {
                  if(match_cons(t, sym_DynRuleId_1))
                    {
                      y_121 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = y_121;
                  if(match_cons(t, sym_RDecT_3))
                    {
                      z_121 = ATgetArgument(t, 0);
                      a_122 = ATgetArgument(t, 1);
                      b_122 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = d_122;
                  if(match_cons(t, sym_Rule_3))
                    {
                      u_121 = ATgetArgument(t, 0);
                      v_121 = ATgetArgument(t, 1);
                      t_121 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SetDynRuleDepends_3, (ATerm)ATmakeAppl(sym_LabeledDynRuleId_2, (ATerm)ATmakeAppl(sym_RDecT_3, z_121, a_122, b_122), term_n_62), (ATerm)ATmakeAppl(sym_Rule_3, u_121, v_121, t_121), w_121)));
                    }
                  else
                    {
                      if(match_cons(t, sym_RuleNoCond_2))
                        {
                          u_121 = ATgetArgument(t, 0);
                          v_121 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SetDynRuleDepends_3, (ATerm)ATmakeAppl(sym_LabeledDynRuleId_2, (ATerm)ATmakeAppl(sym_RDecT_3, z_121, a_122, b_122), term_n_62), (ATerm)ATmakeAppl(sym_Rule_3, u_121, v_121, term_e_30), w_121)));
                    }
                }
            }
          else
            {
              if(match_cons(t, sym_SetDynRuleMatch_2))
                {
                  x_121 = ATgetArgument(t, 0);
                  d_122 = ATgetArgument(t, 1);
                  t = x_121;
                  if(match_cons(t, sym_AddLabelDynRuleId_2))
                    {
                      y_121 = ATgetArgument(t, 0);
                      c_122 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_121;
                  if(match_cons(t, sym_RDecT_3))
                    {
                      z_121 = ATgetArgument(t, 0);
                      a_122 = ATgetArgument(t, 1);
                      b_122 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SetDynRuleMatch_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, z_121, a_122, b_122)), d_122)), (ATerm) ATmakeAppl(sym_AddScopeLabel_2, z_121, c_122)));
                }
              else
                {
                  if(match_cons(t, sym_UndefineDynRule_2))
                    {
                      x_121 = ATgetArgument(t, 0);
                      d_122 = ATgetArgument(t, 1);
                      t = x_121;
                      if(match_cons(t, sym_AddLabelDynRuleId_2))
                        {
                          y_121 = ATgetArgument(t, 0);
                          c_122 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_121;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          z_121 = ATgetArgument(t, 0);
                          a_122 = ATgetArgument(t, 1);
                          b_122 = ATgetArgument(t, 2);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, z_121, a_122, b_122)), d_122)), (ATerm) ATmakeAppl(sym_AddScopeLabel_2, z_121, c_122)));
                    }
                  else
                    {
                      if(match_cons(t, sym_AddDynRule_2))
                        {
                          x_121 = ATgetArgument(t, 0);
                          d_122 = ATgetArgument(t, 1);
                          t = x_121;
                          if(match_cons(t, sym_AddLabelDynRuleId_2))
                            {
                              y_121 = ATgetArgument(t, 0);
                              c_122 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = y_121;
                          if(match_cons(t, sym_RDecT_3))
                            {
                              z_121 = ATgetArgument(t, 0);
                              a_122 = ATgetArgument(t, 1);
                              b_122 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, z_121, a_122, b_122)), d_122)), (ATerm) ATmakeAppl(sym_AddScopeLabel_2, z_121, c_122)));
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              x_121 = ATgetArgument(t, 0);
                              d_122 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = x_121;
                          if(match_cons(t, sym_AddLabelDynRuleId_2))
                            {
                              y_121 = ATgetArgument(t, 0);
                              c_122 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = y_121;
                          if(match_cons(t, sym_RDecT_3))
                            {
                              z_121 = ATgetArgument(t, 0);
                              a_122 = ATgetArgument(t, 1);
                              b_122 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, z_121, a_122, b_122)), d_122)), (ATerm) ATmakeAppl(sym_AddScopeLabel_2, z_121, c_122)));
                        }
                    }
                }
            }
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_122 = ATgetFirst((ATermList) t);
              h_122 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, e_122)), (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(CheckATermList(h_122), g_122)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_30;
    }
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm s_65 = t;
  int f_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarDynRuleDef_0_0(t);
      t = lift_dynamic_rule_0_0(t);
      LocalPopChoice(f_66);
    }
  else
    {
      t = s_65;
      {
        ATerm g_66 = t;
        int h_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SplitDynamicRule_0_0(t);
            LocalPopChoice(h_66);
          }
        else
          {
            t = g_66;
            {
              ATerm a_125 = NULL,b_125 = NULL,e_125 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  a_125 = ATgetArgument(t, 0);
                  b_125 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Scope_2, a_125, b_125);
              {
                static ATerm s_13 (ATerm t);
                static ATerm s_13 (ATerm t)
                {
                  t = a_125;
                  t = DeclareContextVars_0_0(t);
                  t = b_125;
                  t = lift_dynamic_rule_0_0(t);
                  if(((e_125 != NULL) && (e_125 != t)))
                    _fail(t);
                  else
                    e_125 = t;
                  return(t);
                }
                t = scope_2_0(r_13, s_13, t);
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, a_125, not_null(e_125));
            }
          }
      }
    }
  return(t);
}
static ATerm r_13 (ATerm t)
{
  t = term_q_48;
  return(t);
}
ATerm lift_dynamic_rule_0_0 (ATerm t)
{
  t = oncetd_1_0(q_13, t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm i_125 = NULL,k_125 = NULL,l_125 = NULL,m_125 = NULL;
  m_125 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      l_125 = ATgetArgument(t, 0);
      {
        ATerm i_66 = t;
        int j_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_125;
            i_125 = t;
            t = m_125;
            LocalPopChoice(j_66);
          }
        else
          {
            t = i_66;
            t = m_125;
            i_125 = t;
            t = m_125;
          }
      }
    }
  else
    {
      t = m_125;
      i_125 = t;
      t = m_125;
    }
  t = term_l_66;
  k_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_125, term_l_66);
  t = k_16(v_13, i_125, k_125, t);
  t = m_125;
  return(t);
}
static ATerm v_13 (ATerm t)
{
  t = term_q_48;
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm n_125 = NULL,r_125 = NULL,s_125 = NULL,t_125 = NULL;
  t_125 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      s_125 = ATgetArgument(t, 0);
      {
        ATerm m_66 = t;
        int o_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_125;
            n_125 = t;
            t = t_125;
            LocalPopChoice(o_66);
          }
        else
          {
            t = m_66;
            t = t_125;
            n_125 = t;
            t = t_125;
          }
      }
    }
  else
    {
      t = t_125;
      n_125 = t;
      t = t_125;
    }
  t = term_q_66;
  r_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_125, term_q_66);
  t = k_16(y_13, n_125, r_125, t);
  t = t_125;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  t = term_q_48;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm r_66 = t;
  int v_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(t_13, t);
      LocalPopChoice(v_66);
    }
  else
    {
      t = r_66;
      t = map_1_0(x_13, t);
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm g_45 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_45);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm w_66 = t;
  int x_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_66);
    }
  else
    {
      t = w_66;
      {
        ATerm y_66 = t;
        int z_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_66);
          }
        else
          {
            t = y_66;
            {
              ATerm a_67 = t;
              int b_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_45 = ATgetArgument(t, 0);
                      o_45 = ATgetArgument(t, 1);
                      p_45 = ATgetArgument(t, 2);
                      q_45 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_45;
                  t = map_1_0(d_14, t);
                  LocalPopChoice(b_67);
                }
              else
                {
                  t = a_67;
                  {
                    ATerm d_67 = t;
                    int e_67 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_67);
                      }
                    else
                      {
                        t = d_67;
                        t = dynrule_targs_1_0(f_14, t);
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
  ATerm k_46 = NULL;
  ATerm f_67 = t;
  int g_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_46 = ATgetArgument(t, 0);
          {
            ATerm i_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_67);
      t = k_46;
    }
  else
    {
      t = f_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_46;
    }
  return(t);
}
static ATerm f_14 (ATerm t)
{
  t = map_1_0(g_14, t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm q_46 = NULL;
  ATerm l_67 = t;
  int m_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_46 = ATgetArgument(t, 0);
          {
            ATerm n_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_67);
      t = q_46;
    }
  else
    {
      t = l_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_46;
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm m_47 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_47 = ATgetArgument(t, 0);
      t = m_47;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_47 = ATgetArgument(t, 0);
          {
            ATerm o_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_47;
    }
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm x_47 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_47 = ATgetArgument(t, 0);
      t = x_47;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_47 = ATgetArgument(t, 0);
          {
            ATerm s_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_47;
    }
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm e_48 = NULL;
  if(match_cons(t, sym__2))
    {
      e_48 = ATgetArgument(t, 0);
      if((e_48 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm p_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_48);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm u_67 = t;
  int v_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_67);
    }
  else
    {
      t = u_67;
      {
        ATerm w_67 = t;
        int x_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_67);
          }
        else
          {
            t = w_67;
            {
              ATerm y_67 = t;
              int z_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_48 = NULL,t_48 = NULL,u_48 = NULL,x_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_48 = ATgetArgument(t, 0);
                      t_48 = ATgetArgument(t, 1);
                      u_48 = ATgetArgument(t, 2);
                      x_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_48;
                  t = map_1_0(d_16, t);
                  LocalPopChoice(z_67);
                }
              else
                {
                  t = y_67;
                  {
                    ATerm a_68 = t;
                    int b_68 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_68);
                      }
                    else
                      {
                        t = a_68;
                        t = dynrule_targs_1_0(g_16, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm n_49 = NULL;
  ATerm c_68 = t;
  int d_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_49 = ATgetArgument(t, 0);
          {
            ATerm e_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_68);
      t = n_49;
    }
  else
    {
      t = c_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_49;
    }
  return(t);
}
static ATerm g_16 (ATerm t)
{
  t = map_1_0(h_16, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm s_49 = NULL;
  ATerm f_68 = t;
  int g_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_49 = ATgetArgument(t, 0);
          {
            ATerm h_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_68);
      t = s_49;
    }
  else
    {
      t = f_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_49;
    }
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm c_50 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_50 = ATgetArgument(t, 0);
      t = c_50;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_50 = ATgetArgument(t, 0);
          {
            ATerm j_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_50;
    }
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm r_50 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_50 = ATgetArgument(t, 0);
      t = r_50;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_50 = ATgetArgument(t, 0);
          {
            ATerm k_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_50;
    }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm y_50 = NULL;
  if(match_cons(t, sym__2))
    {
      y_50 = ATgetArgument(t, 0);
      if((y_50 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm def_tvars_0_0 (ATerm t)
{
  ATerm p_131 = NULL;
  p_131 = t;
  {
    ATerm l_68 = t;
    int m_68 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_45 = NULL,e_45 = NULL;
        t = p_131;
        t = free_vars_3_0(b_14, c_14, tboundin_3_0, t);
        c_45 = t;
        t = p_131;
        {
          ATerm n_68 = t;
          int r_68 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_47 = NULL;
              ATerm s_68 = t;
              int t_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm u_68 = ATgetArgument(t, 0);
                      ATerm v_68 = ATgetArgument(t, 1);
                      a_47 = ATgetArgument(t, 2);
                      {
                        ATerm w_68 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_68);
                  t = a_47;
                  t = map_1_0(j_14, t);
                }
              else
                {
                  t = s_68;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm x_68 = ATgetArgument(t, 0);
                      ATerm y_68 = ATgetArgument(t, 1);
                      a_47 = ATgetArgument(t, 2);
                      {
                        ATerm z_68 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = a_47;
                  t = map_1_0(k_15, t);
                }
              LocalPopChoice(r_68);
            }
          else
            {
              t = n_68;
              t = (ATerm) ATempty;
            }
        }
        e_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_45, e_45);
        t = y_15(t_15, c_45, e_45, t);
        LocalPopChoice(m_68);
      }
    else
      {
        t = l_68;
        {
          ATerm k_48 = NULL,l_48 = NULL;
          t = p_131;
          t = free_vars_3_0(u_15, c_16, tboundin_3_0, t);
          k_48 = t;
          t = p_131;
          {
            ATerm a_69 = t;
            int b_69 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_49 = NULL;
                ATerm c_69 = t;
                int d_69 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm e_69 = ATgetArgument(t, 0);
                        ATerm h_69 = ATgetArgument(t, 1);
                        y_49 = ATgetArgument(t, 2);
                        {
                          ATerm p_69 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(d_69);
                    t = y_49;
                    t = map_1_0(i_16, t);
                  }
                else
                  {
                    t = c_69;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm q_69 = ATgetArgument(t, 0);
                        ATerm v_69 = ATgetArgument(t, 1);
                        y_49 = ATgetArgument(t, 2);
                        {
                          ATerm w_69 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = y_49;
                    t = map_1_0(y_16, t);
                  }
                LocalPopChoice(b_69);
              }
            else
              {
                t = a_69;
                t = (ATerm) ATempty;
              }
          }
          l_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_48, l_48);
          t = y_15(b_17, k_48, l_48, t);
        }
      }
  }
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = term_q_48;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_p_51;
  return(t);
}
static ATerm p_15 (ATerm q_112, ATerm p_112, ATerm t)
{
  ATerm u_131 = NULL,v_131 = NULL;
  static ATerm i_17 (ATerm t);
  static ATerm i_17 (ATerm t)
  {
    static ATerm s_17 (ATerm t);
    static ATerm s_17 (ATerm t)
    {
      t = q_112;
      t = def_tvars_0_0(t);
      t = DeclareContextVars_0_0(t);
      t = q_112;
      t = lift_dynamic_rule_0_0(t);
      if(((u_131 != NULL) && (u_131 != t)))
        _fail(t);
      else
        u_131 = t;
      t = term_a_50;
      {
        ATerm y_69 = t;
        int z_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = bagof_LiftedRules_0_0(t);
            LocalPopChoice(z_69);
          }
        else
          {
            t = y_69;
            t = (ATerm) ATempty;
          }
      }
      if(((v_131 != NULL) && (v_131 != t)))
        _fail(t);
      else
        v_131 = t;
      return(t);
    }
    t = scope_2_0(l_17, s_17, t);
    return(t);
  }
  t = scope_2_0(e_17, i_17, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_131)), not_null(u_131)), p_112);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm r_142 (ATerm), ATerm s_142 (ATerm), ATerm t)
{
  static ATerm x_131 (ATerm t);
  static ATerm x_131 (ATerm t)
  {
    ATerm d_70 = t;
    int e_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_142(t);
        t = x_131(t);
        LocalPopChoice(e_70);
      }
    else
      {
        t = d_70;
        t = s_142(t);
      }
    return(t);
  }
  t = x_131(t);
  return(t);
}
ATerm listtd_1_0 (ATerm k_151 (ATerm), ATerm t)
{
  static ATerm l_132 (ATerm t);
  static ATerm l_132 (ATerm t)
  {
    ATerm i_132 = NULL,j_132 = NULL,k_132 = NULL;
    t = k_151(t);
    i_132 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_132;
      }
    else
      {
        ATerm n_51 = NULL,y_51 = NULL,h_29 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_132 = ATgetFirst((ATermList) t);
            k_132 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_132);
        n_51 = t;
        t = k_132;
        t = l_132(t);
        y_51 = t;
        t = (ATerm) ATinsert(CheckATermList(y_51), j_132);
        h_29 = t;
        t = SSLsetAnnotations(h_29, n_51);
      }
    return(t);
  }
  t = l_132(t);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm t_155 (ATerm), ATerm u_155 (ATerm), ATerm t)
{
  ATerm m_70 = t;
  int q_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_132 = NULL;
      t = t_155(t);
      n_132 = t;
      t = (ATerm) ATinsert(ATempty, n_132);
      LocalPopChoice(q_70);
    }
  else
    {
      t = m_70;
      {
        ATerm s_52 = NULL,t_52 = NULL;
        static ATerm u_17 (ATerm t);
        static ATerm u_17 (ATerm t)
        {
          t = collect_om_2_0(t_155, u_155, t);
          return(t);
        }
        t_52 = t;
        t = SSL_explode_term(t_52);
        if(match_cons(t, sym__2))
          {
            ATerm r_70 = ATgetArgument(t, 0);
            s_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_52;
        t = foldr_3_0(t_17, u_155, u_17, t);
      }
    }
  return(t);
}
ATerm partition_1_0 (ATerm o_158 (ATerm), ATerm t)
{
  static ATerm y_134 (ATerm t);
  static ATerm y_134 (ATerm t)
  {
    ATerm u_134 = NULL,v_134 = NULL,x_134 = NULL;
    u_134 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_m_39;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_134 = ATgetFirst((ATermList) t);
            x_134 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_70 = t;
          int t_70 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_53 = NULL,u_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,l_54 = NULL,j_29 = NULL;
              t = SSLgetAnnotations(u_134);
              c_54 = t;
              t = v_134;
              t = o_158(t);
              s_53 = t;
              t = (ATerm) ATinsert(CheckATermList(x_134), s_53);
              j_29 = t;
              t = SSLsetAnnotations(j_29, c_54);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_70 = ATgetFirst((ATermList) t);
                  a_54 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_54;
              t = y_134(t);
              u_53 = t;
              t = SSL_explode_term(u_53);
              if(match_cons(t, sym__2))
                {
                  ATerm x_70 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) x_70) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm y_70 = ATgetArgument(t, 1);
                    if(((ATgetType(y_70) == AT_LIST) && !(ATisEmpty(y_70))))
                      {
                        b_54 = ATgetFirst((ATermList) y_70);
                        {
                          ATerm z_70 = (ATerm) ATgetNext((ATermList) y_70);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(u_53);
              if(match_cons(t, sym__2))
                {
                  ATerm c_71 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_71) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm d_71 = ATgetArgument(t, 1);
                    if(((ATgetType(d_71) == AT_LIST) && !(ATisEmpty(d_71))))
                      {
                        ATerm j_71 = ATgetFirst((ATermList) d_71);
                        ATerm k_71 = (ATerm) ATgetNext((ATermList) d_71);
                        if(((ATgetType(k_71) == AT_LIST) && !(ATisEmpty(k_71))))
                          {
                            l_54 = ATgetFirst((ATermList) k_71);
                            {
                              ATerm l_71 = (ATerm) ATgetNext((ATermList) k_71);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_54), s_53), l_54);
              LocalPopChoice(t_70);
            }
          else
            {
              t = s_70;
              {
                ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,j_55 = NULL,k_29 = NULL;
                t = SSLgetAnnotations(u_134);
                c_55 = t;
                t = (ATerm) ATinsert(CheckATermList(x_134), v_134);
                k_29 = t;
                t = SSLsetAnnotations(k_29, c_55);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm m_71 = ATgetFirst((ATermList) t);
                    a_55 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = a_55;
                t = y_134(t);
                z_54 = t;
                t = SSL_explode_term(z_54);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_71 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_71) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm p_71 = ATgetArgument(t, 1);
                      if(((ATgetType(p_71) == AT_LIST) && !(ATisEmpty(p_71))))
                        {
                          b_55 = ATgetFirst((ATermList) p_71);
                          {
                            ATerm q_71 = (ATerm) ATgetNext((ATermList) p_71);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(z_54);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_71 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) t_71) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm v_71 = ATgetArgument(t, 1);
                      if(((ATgetType(v_71) == AT_LIST) && !(ATisEmpty(v_71))))
                        {
                          ATerm w_71 = ATgetFirst((ATermList) v_71);
                          ATerm y_71 = (ATerm) ATgetNext((ATermList) v_71);
                          if(((ATgetType(y_71) == AT_LIST) && !(ATisEmpty(y_71))))
                            {
                              j_55 = ATgetFirst((ATermList) y_71);
                              {
                                ATerm c_72 = (ATerm) ATgetNext((ATermList) y_71);
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
                t = (ATerm) ATmakeAppl(sym__2, b_55, (ATerm) ATinsert(CheckATermList(j_55), v_134));
              }
            }
        }
      }
    return(t);
  }
  t = y_134(t);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL;
  if(match_cons(t, sym__2))
    {
      v_56 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_15(a_18, v_56, w_56, t);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm x_56 = NULL;
  if(match_cons(t, sym__2))
    {
      x_56 = ATgetArgument(t, 0);
      if((x_56 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL;
  if(match_cons(t, sym__2))
    {
      t_58 = ATgetArgument(t, 0);
      u_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_15(f_18, t_58, u_58, t);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm v_58 = NULL;
  if(match_cons(t, sym__2))
    {
      v_58 = ATgetArgument(t, 0);
      if((v_58 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm DefDynRuleScope_0_0 (ATerm t)
{
  ATerm r_137 = NULL,s_137 = NULL,t_137 = NULL,u_137 = NULL,v_137 = NULL,w_137 = NULL,x_137 = NULL;
  v_137 = t;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      w_137 = ATgetArgument(t, 0);
      x_137 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_137;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_137 = ATgetFirst((ATermList) t);
      t_137 = (ATerm) ATgetNext((ATermList) t);
      t = u_137;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          s_137 = ATgetArgument(t, 0);
          r_137 = ATgetArgument(t, 1);
          {
            ATerm z_55 = NULL,a_56 = NULL,f_56 = NULL,g_56 = NULL;
            t = t_137;
            {
              static ATerm v_17 (ATerm t);
              static ATerm v_17 (ATerm t)
              {
                ATerm s_56 = NULL,t_56 = NULL;
                s_56 = t;
                {
                  ATerm d_72 = t;
                  int e_72 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                        {
                          t_56 = ATgetArgument(t, 0);
                          {
                            ATerm f_72 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(e_72);
                      t = t_56;
                      if((s_137 != t))
                        {
                          _fail(t);
                        }
                      t = s_56;
                    }
                  else
                    {
                      t = d_72;
                      if(match_cons(t, sym_DynRuleScopeId_1))
                        {
                          t_56 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = t_56;
                      if((s_137 != t))
                        {
                          _fail(t);
                        }
                      t = s_56;
                    }
                }
                return(t);
              }
              t = partition_1_0(v_17, t);
            }
            if(match_cons(t, sym__2))
              {
                a_56 = ATgetArgument(t, 0);
                z_55 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_56;
            {
              static ATerm x_17 (ATerm t);
              static ATerm x_17 (ATerm t)
              {
                ATerm u_56 = NULL;
                if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                  {
                    if((s_137 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    u_56 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_56;
                return(t);
              }
              t = collect_om_2_0(x_17, z_17, t);
            }
            g_56 = t;
            t = (ATerm) ATinsert(CheckATermList(g_56), r_137);
            {
              static ATerm b_18 (ATerm t);
              static ATerm b_18 (ATerm t)
              {
                ATerm y_56 = NULL;
                y_56 = t;
                t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, s_137, y_56)));
                return(t);
              }
              t = map_1_0(b_18, t);
            }
            f_56 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_72, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_56), (ATerm) ATmakeAppl(sym_DynRuleScope_2, z_55, x_137))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, s_137)));
          }
        }
      else
        {
          ATerm a_58 = NULL,d_58 = NULL,f_58 = NULL;
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              s_137 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_137;
          {
            static ATerm c_18 (ATerm t);
            static ATerm c_18 (ATerm t)
            {
              ATerm i_58 = NULL,n_58 = NULL;
              i_58 = t;
              {
                ATerm i_72 = t;
                int j_72 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                      {
                        n_58 = ATgetArgument(t, 0);
                        {
                          ATerm k_72 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_72);
                    t = n_58;
                    if((s_137 != t))
                      {
                        _fail(t);
                      }
                    t = i_58;
                  }
                else
                  {
                    t = i_72;
                    if(match_cons(t, sym_DynRuleScopeId_1))
                      {
                        n_58 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = n_58;
                    if((s_137 != t))
                      {
                        _fail(t);
                      }
                    t = i_58;
                  }
              }
              return(t);
            }
            t = partition_1_0(c_18, t);
          }
          if(match_cons(t, sym__2))
            {
              d_58 = ATgetArgument(t, 0);
              a_58 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_58;
          {
            static ATerm d_18 (ATerm t);
            static ATerm d_18 (ATerm t)
            {
              ATerm s_58 = NULL;
              if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                {
                  if((s_137 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                  s_58 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_58;
              return(t);
            }
            t = collect_om_2_0(d_18, e_18, t);
          }
          {
            static ATerm h_18 (ATerm t);
            static ATerm h_18 (ATerm t)
            {
              ATerm w_58 = NULL;
              w_58 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, s_137, w_58)));
              return(t);
            }
            t = map_1_0(h_18, t);
          }
          f_58 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_72, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_58), (ATerm) ATmakeAppl(sym_DynRuleScope_2, a_58, x_137))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, s_137)));
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeLabels_1))
        {
          u_137 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_72, (ATerm)ATinsert(ATempty, x_137), (ATerm) ATinsert(ATempty, u_137));
        }
      else
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_137;
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_144 (ATerm), ATerm t)
{
  static ATerm l_138 (ATerm t);
  static ATerm l_138 (ATerm t)
  {
    ATerm o_72 = t;
    int q_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_144(t);
        LocalPopChoice(q_72);
      }
    else
      {
        t = o_72;
        t = SRTS_one(l_138, t);
      }
    return(t);
  }
  t = l_138(t);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm f_139 = NULL;
  f_139 = t;
  {
    ATerm t_72 = t;
    int u_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_60 = NULL;
        t = term_q_48;
        n_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_48, f_139);
        t = j_16(n_60, f_139, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm a_73 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_73) != ATmakeSymbol("m_9", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = f_139;
        LocalPopChoice(u_72);
      }
    else
      {
        t = t_72;
        {
          ATerm h_61 = NULL;
          t = term_q_48;
          h_61 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_48, f_139);
          t = j_16(h_61, f_139, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm c_73 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_73) != ATmakeSymbol("t_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = f_139;
        }
      }
  }
  return(t);
}
static ATerm i_18 (ATerm t)
{
  ATerm f_141 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_141);
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm d_73 = t;
  int e_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_73);
    }
  else
    {
      t = d_73;
      {
        ATerm f_73 = t;
        int g_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_73);
          }
        else
          {
            t = f_73;
            {
              ATerm j_73 = t;
              int l_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_141 = NULL,i_141 = NULL,j_141 = NULL,l_141 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_141 = ATgetArgument(t, 0);
                      i_141 = ATgetArgument(t, 1);
                      j_141 = ATgetArgument(t, 2);
                      l_141 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_141;
                  t = map_1_0(k_18, t);
                  LocalPopChoice(l_73);
                }
              else
                {
                  t = j_73;
                  {
                    ATerm n_73 = t;
                    int o_73 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_73);
                      }
                    else
                      {
                        t = n_73;
                        t = dynrule_targs_1_0(t_18, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm d_142 = NULL;
  ATerm p_73 = t;
  int q_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_142 = ATgetArgument(t, 0);
          {
            ATerm r_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_73);
      t = d_142;
    }
  else
    {
      t = p_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_142 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_142;
    }
  return(t);
}
static ATerm t_18 (ATerm t)
{
  t = map_1_0(u_18, t);
  return(t);
}
static ATerm u_18 (ATerm t)
{
  ATerm m_142 = NULL;
  ATerm s_73 = t;
  int u_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_142 = ATgetArgument(t, 0);
          {
            ATerm y_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_73);
      t = m_142;
    }
  else
    {
      t = s_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_142 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_142;
    }
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm w_142 = NULL;
  w_142 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_142);
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm b_143 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_143 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_143);
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm z_73 = t;
  int a_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_74);
    }
  else
    {
      t = z_73;
      {
        ATerm b_74 = t;
        int c_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_74);
          }
        else
          {
            t = b_74;
            {
              ATerm h_74 = t;
              int i_74 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_143 = NULL,f_143 = NULL,h_143 = NULL,q_143 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_143 = ATgetArgument(t, 0);
                      f_143 = ATgetArgument(t, 1);
                      h_143 = ATgetArgument(t, 2);
                      q_143 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_143;
                  t = map_1_0(z_18, t);
                  LocalPopChoice(i_74);
                }
              else
                {
                  t = h_74;
                  {
                    ATerm j_74 = t;
                    int k_74 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_74);
                      }
                    else
                      {
                        t = j_74;
                        t = dynrule_targs_1_0(a_19, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_18 (ATerm t)
{
  ATerm z_143 = NULL;
  ATerm l_74 = t;
  int m_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_143 = ATgetArgument(t, 0);
          {
            ATerm o_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_74);
      t = z_143;
    }
  else
    {
      t = l_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_143;
    }
  return(t);
}
static ATerm a_19 (ATerm t)
{
  t = map_1_0(b_19, t);
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm e_144 = NULL;
  ATerm q_74 = t;
  int r_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_144 = ATgetArgument(t, 0);
          {
            ATerm s_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_74);
      t = e_144;
    }
  else
    {
      t = q_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_144 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_144;
    }
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm h_144 = NULL;
  h_144 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_144);
  return(t);
}
ATerm DummifyTerm_0_0 (ATerm t)
{
  ATerm u_140 = NULL,v_140 = NULL,y_140 = NULL;
  v_140 = t;
  {
    ATerm t_74 = t;
    int u_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm v_74 = ATgetArgument(t, 0);
            ATerm w_74 = ATgetArgument(t, 1);
            ATerm y_74 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(u_74);
        {
          ATerm p_61 = NULL,q_61 = NULL,r_61 = NULL;
          t = term_k_42;
          q_61 = t;
          t = (ATerm) ATinsert(ATempty, term_l_42);
          r_61 = t;
          t = SSL_printnl(q_61, r_61);
          t = term_m_42;
          p_61 = t;
          t = SSL_exit(p_61);
          t = (ATerm) ATinsert(ATempty, term_l_42);
        }
      }
    else
      {
        t = t_74;
        if(match_cons(t, sym_App_2))
          {
            y_140 = ATgetArgument(t, 0);
            u_140 = ATgetArgument(t, 1);
            {
              ATerm e_141 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, y_140, u_140);
              t = free_vars_3_0(i_18, j_18, tboundin_3_0, t);
              t = map_1_0(v_18, t);
              e_141 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, term_g_42, e_141);
            }
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                y_140 = ATgetArgument(t, 0);
                {
                  ATerm y_142 = NULL;
                  t = y_140;
                  t = free_vars_3_0(w_18, y_18, tboundin_3_0, t);
                  t = map_1_0(c_19, t);
                  y_142 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_42, y_142);
                }
              }
            else
              {
                if(match_cons(t, sym_Wld_0))
                  {
                    t = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATempty, term_b_75));
                  }
                else
                  {
                    if(match_cons(t, sym_Var_1))
                      {
                        ATerm c_75 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_140;
                    {
                      ATerm d_75 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL,x_61 = NULL,s_29 = NULL;
                          x_61 = t;
                          if(match_cons(t, sym_Var_1))
                            {
                              v_61 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = SSLgetAnnotations(x_61);
                          u_61 = t;
                          t = v_61;
                          {
                            ATerm e_75 = t;
                            int f_75 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = ContextVar_0_0(t);
                                LocalPopChoice(f_75);
                              }
                            else
                              {
                                t = e_75;
                                {
                                  ATerm d_62 = NULL,r_62 = NULL,w_62 = NULL,p_29 = NULL;
                                  if(match_cons(t, sym_ListVar_1))
                                    {
                                      d_62 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(v_61);
                                  r_62 = t;
                                  t = d_62;
                                  t = ContextVar_0_0(t);
                                  w_62 = t;
                                  t = (ATerm) ATmakeAppl(sym_ListVar_1, w_62);
                                  p_29 = t;
                                  t = SSLsetAnnotations(p_29, r_62);
                                }
                              }
                          }
                          w_61 = t;
                          t = (ATerm) ATmakeAppl(sym_Var_1, w_61);
                          s_29 = t;
                          t = SSLsetAnnotations(s_29, u_61);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = d_75;
                        }
                    }
                    t = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATinsert(ATempty, term_b_75));
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm d_19 (ATerm t)
{
  ATerm s_145 = NULL,t_145 = NULL,u_145 = NULL,v_145 = NULL,w_145 = NULL,x_145 = NULL,y_145 = NULL,z_145 = NULL,a_146 = NULL,c_146 = NULL,d_146 = NULL;
  d_146 = t;
  if(match_cons(t, sym_Op_2))
    {
      a_146 = ATgetArgument(t, 0);
      c_146 = ATgetArgument(t, 1);
      t = c_146;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_145 = ATgetFirst((ATermList) t);
          v_145 = (ATerm) ATgetNext((ATermList) t);
          t = v_145;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_145 = ATgetFirst((ATermList) t);
              z_145 = (ATerm) ATgetNext((ATermList) t);
              t = z_145;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = w_145;
                  if(match_cons(t, sym_Op_2))
                    {
                      x_145 = ATgetArgument(t, 0);
                      y_145 = ATgetArgument(t, 1);
                      t = y_145;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = x_145;
                          if(match_string(t, "Nil"))
                            {
                              t = s_145;
                              if(match_cons(t, sym_Var_1))
                                {
                                  t_145 = ATgetArgument(t, 0);
                                  t = t_145;
                                  if(match_cons(t, sym_ListVar_1))
                                    {
                                      u_145 = ATgetArgument(t, 0);
                                      t = a_146;
                                      if(match_string(t, "Cons"))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, u_145));
                                        }
                                      else
                                        {
                                          t = d_146;
                                        }
                                    }
                                  else
                                    {
                                      t = d_146;
                                    }
                                }
                              else
                                {
                                  t = d_146;
                                }
                            }
                          else
                            {
                              t = d_146;
                            }
                        }
                      else
                        {
                          t = d_146;
                        }
                    }
                  else
                    {
                      t = d_146;
                    }
                }
              else
                {
                  t = d_146;
                }
            }
          else
            {
              t = d_146;
            }
        }
      else
        {
          t = d_146;
        }
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          a_146 = ATgetArgument(t, 0);
          c_146 = ATgetArgument(t, 1);
          t = a_146;
          {
            ATerm g_75 = t;
            int h_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Var_1))
                  {
                    ATerm i_75 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                LocalPopChoice(h_75);
                t = c_146;
              }
            else
              {
                t = g_75;
                t = d_146;
              }
          }
        }
      else
        {
          t = d_146;
        }
    }
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = topdown_1_0(d_19, t);
  t = alltd_1_0(DummifyTerm_0_0, t);
  return(t);
}
ATerm DRDef_LHS_1_0 (ATerm r_179 (ATerm), ATerm t)
{
  ATerm y_146 = NULL,z_146 = NULL;
  ATerm j_75 = t;
  int k_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          ATerm n_75 = ATgetArgument(t, 0);
          y_146 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      LocalPopChoice(k_75);
      t = y_146;
      t = r_179(t);
    }
  else
    {
      t = j_75;
      {
        ATerm o_75 = t;
        int t_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                ATerm u_75 = ATgetArgument(t, 0);
                y_146 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(t_75);
            t = y_146;
            if(match_cons(t, sym_Rule_3))
              {
                z_146 = ATgetArgument(t, 0);
                {
                  ATerm v_75 = ATgetArgument(t, 1);
                }
                {
                  ATerm w_75 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = z_146;
            t = r_179(t);
          }
        else
          {
            t = o_75;
            {
              ATerm x_75 = t;
              int b_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SetDynRuleMatch_2))
                    {
                      ATerm d_76 = ATgetArgument(t, 0);
                      y_146 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_76);
                  t = y_146;
                  t = r_179(t);
                }
              else
                {
                  t = x_75;
                  if(match_cons(t, sym_AddDynRule_2))
                    {
                      ATerm f_76 = ATgetArgument(t, 0);
                      y_146 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_146;
                  if(match_cons(t, sym_Rule_3))
                    {
                      z_146 = ATgetArgument(t, 0);
                      {
                        ATerm k_76 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm m_76 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = z_146;
                  t = r_179(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_149 (ATerm c_148, ATerm d_148, ATerm e_148, ATerm f_148, ATerm g_148, ATerm h_148, ATerm i_148, ATerm t)
{
  t = i_148;
  {
    ATerm p_76 = t;
    if((PushChoice() == 0))
      {
        t = g_148;
        if(match_cons(t, sym_Op_2))
          {
            ATerm q_76 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) q_76) != ATmakeSymbol("Undefined", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_76 = ATgetArgument(t, 1);
              if(((ATgetType(u_76) != AT_LIST) || !(ATisEmpty(u_76))))
                _fail(t);
            }
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_76;
      }
  }
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, c_148, d_148, e_148)), (ATerm) ATmakeAppl(sym_Rule_3, f_148, g_148, h_148));
  return(t);
}
static ATerm e_19 (ATerm t)
{
  t = term_v_76;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm p_148 = NULL,q_148 = NULL,r_148 = NULL,s_148 = NULL,t_148 = NULL,u_148 = NULL,v_148 = NULL,w_148 = NULL,x_148 = NULL,y_148 = NULL;
  r_148 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      s_148 = ATgetArgument(t, 0);
      t_148 = ATgetArgument(t, 1);
      u_148 = ATgetArgument(t, 2);
      v_148 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = v_148;
  if(match_cons(t, sym_Rule_3))
    {
      w_148 = ATgetArgument(t, 0);
      x_148 = ATgetArgument(t, 1);
      y_148 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_148;
  if(match_cons(t, sym_Op_2))
    {
      p_148 = ATgetArgument(t, 0);
      q_148 = ATgetArgument(t, 1);
      t = q_148;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = p_148;
          if(match_string(t, "Undefined"))
            {
              ATerm w_76 = t;
              int x_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_148;
                  {
                    ATerm y_76 = t;
                    int a_77 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = y_148;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(a_77);
                      }
                    else
                      {
                        t = y_76;
                        {
                          ATerm x_63 = NULL,y_63 = NULL;
                          t = term_k_42;
                          x_63 = t;
                          t = (ATerm) ATinsert(ATempty, term_b_77);
                          y_63 = t;
                          t = SSL_printnl(x_63, y_63);
                          t = r_148;
                          t = debug_1_0(e_19, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, s_148, t_148, u_148)), w_148);
                  LocalPopChoice(x_76);
                }
              else
                {
                  t = w_76;
                  t = a_149(s_148, t_148, u_148, w_148, x_148, y_148, r_148, t);
                }
            }
          else
            {
              t = a_149(s_148, t_148, u_148, w_148, x_148, y_148, r_148, t);
            }
        }
      else
        {
          t = p_148;
          t = a_149(s_148, t_148, u_148, w_148, x_148, y_148, r_148, t);
        }
    }
  else
    {
      t = a_149(s_148, t_148, u_148, w_148, x_148, y_148, r_148, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm s_149 (ATerm), ATerm t)
{
  ATerm b_149 = NULL,c_149 = NULL,d_149 = NULL,e_149 = NULL;
  b_149 = t;
  t = s_149(t);
  c_149 = t;
  t = term_k_42;
  d_149 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_149), c_149);
  e_149 = t;
  t = SSL_printnl(d_149, e_149);
  t = b_149;
  return(t);
}
static ATerm f_19 (ATerm t)
{
  t = term_v_76;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm f_149 = NULL,g_149 = NULL,h_149 = NULL,i_149 = NULL,j_149 = NULL,k_149 = NULL;
  k_149 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm d_77 = ATgetArgument(t, 0);
      if(match_cons(d_77, sym_DynRuleId_1))
        {
          ATerm f_77 = ATgetArgument(d_77, 0);
          if(match_cons(f_77, sym_RDecT_3))
            {
              f_149 = ATgetArgument(f_77, 0);
              g_149 = ATgetArgument(f_77, 1);
              h_149 = ATgetArgument(f_77, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm e_77 = ATgetArgument(t, 1);
        if(match_cons(e_77, sym_Rule_3))
          {
            i_149 = ATgetArgument(e_77, 0);
            {
              ATerm j_77 = ATgetArgument(e_77, 1);
              if(match_cons(j_77, sym_Op_2))
                {
                  ATerm o_77 = ATgetArgument(j_77, 0);
                  if((ATgetSymbol((ATermAppl) o_77) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm q_77 = ATgetArgument(j_77, 1);
                    if(((ATgetType(q_77) != AT_LIST) || !(ATisEmpty(q_77))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            j_149 = ATgetArgument(e_77, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm r_77 = t;
    int x_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_149;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(x_77);
      }
    else
      {
        t = r_77;
        {
          ATerm l_149 = NULL,m_149 = NULL;
          t = term_k_42;
          l_149 = t;
          t = (ATerm) ATinsert(ATempty, term_b_77);
          m_149 = t;
          t = SSL_printnl(l_149, m_149);
          t = k_149;
          t = debug_1_0(f_19, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, f_149, g_149, h_149)), i_149);
  return(t);
}
static ATerm g_19 (ATerm t)
{
  ATerm z_149 = NULL;
  z_149 = t;
  {
    ATerm y_77 = t;
    int c_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_OverrideDynamicRules_1))
          {
            ATerm e_78 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_78);
        t = z_149;
      }
    else
      {
        t = y_77;
        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
          {
            ATerm h_78 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_149;
      }
  }
  return(t);
}
static ATerm h_19 (ATerm t)
{
  t = term_i_78;
  return(t);
}
static ATerm i_19 (ATerm t)
{
  ATerm l_78 = t;
  int p_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_150 = NULL;
      g_150 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm q_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_150;
      LocalPopChoice(p_78);
      {
        ATerm h_150 = NULL,i_150 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            h_150 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_150;
        t = map_1_0(j_19, t);
        i_150 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, i_150);
      }
    }
  else
    {
      t = l_78;
      {
        ATerm r_78 = t;
        int s_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_150 = NULL;
            u_150 = t;
            if(match_cons(t, sym_ExtendDynamicRules_1))
              {
                ATerm t_78 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = u_150;
            LocalPopChoice(s_78);
            {
              ATerm v_150 = NULL,w_150 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  v_150 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = v_150;
              t = map_1_0(n_19, t);
              w_150 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, w_150);
            }
          }
        else
          {
            t = r_78;
            {
              ATerm u_78 = t;
              int v_78 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_151 = NULL;
                  c_151 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm w_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = c_151;
                  LocalPopChoice(v_78);
                  {
                    ATerm d_151 = NULL,e_151 = NULL;
                    if(match_cons(t, sym_OverrideDynamicRules_1))
                      {
                        d_151 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = d_151;
                    t = map_1_0(r_19, t);
                    e_151 = t;
                    t = (ATerm) ATmakeAppl(sym_GenDynRules_1, e_151);
                  }
                }
              else
                {
                  t = u_78;
                  {
                    ATerm x_78 = t;
                    int y_78 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_151 = NULL;
                        s_151 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm z_78 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = s_151;
                        LocalPopChoice(y_78);
                        {
                          ATerm t_151 = NULL,u_151 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              t_151 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = t_151;
                          t = map_1_0(t_19, t);
                          u_151 = t;
                          t = (ATerm) ATmakeAppl(sym_GenDynRules_1, u_151);
                        }
                      }
                    else
                      {
                        t = x_78;
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm a_79 = t;
  int b_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UpgradeUndefine_0_0(t);
      LocalPopChoice(b_79);
    }
  else
    {
      t = a_79;
    }
  {
    ATerm c_79 = t;
    int e_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_150 = NULL,k_64 = NULL,m_64 = NULL;
        n_150 = t;
        t = (ATerm) ATempty;
        k_64 = t;
        t = term_i_78;
        m_64 = t;
        t = term_f_79;
        t = j_16(m_64, k_64, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm g_79 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_79) != ATmakeSymbol("p_9", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = n_150;
        LocalPopChoice(e_79);
        {
          ATerm o_150 = NULL,p_150 = NULL;
          static ATerm k_19 (ATerm t);
          static ATerm k_19 (ATerm t)
          {
            ATerm q_150 = NULL;
            if(match_cons(t, sym_DynRuleId_1))
              {
                q_150 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_AddLabelDynRuleId_2, q_150, not_null(p_150));
            return(t);
          }
          o_150 = t;
          t = DRDef_LHS_1_0(dummify_0_0, t);
          if(((p_150 != NULL) && (p_150 != t)))
            _fail(t);
          else
            p_150 = t;
          t = o_150;
          t = oncetd_1_0(k_19, t);
        }
      }
    else
      {
        t = c_79;
      }
  }
  return(t);
}
static ATerm n_19 (ATerm t)
{
  t = RDefToDRDef_extend_0_0(t);
  {
    ATerm h_79 = t;
    int i_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_150 = NULL,o_64 = NULL,p_64 = NULL;
        x_150 = t;
        t = (ATerm) ATempty;
        o_64 = t;
        t = term_i_78;
        p_64 = t;
        t = term_f_79;
        t = j_16(p_64, o_64, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm j_79 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_79) != ATmakeSymbol("p_9", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = x_150;
        LocalPopChoice(i_79);
        {
          ATerm y_150 = NULL,z_150 = NULL;
          static ATerm q_19 (ATerm t);
          static ATerm q_19 (ATerm t)
          {
            ATerm a_151 = NULL;
            if(match_cons(t, sym_DynRuleId_1))
              {
                a_151 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_AddLabelDynRuleId_2, a_151, not_null(z_150));
            return(t);
          }
          y_150 = t;
          t = DRDef_LHS_1_0(dummify_0_0, t);
          if(((z_150 != NULL) && (z_150 != t)))
            _fail(t);
          else
            z_150 = t;
          t = y_150;
          t = oncetd_1_0(q_19, t);
        }
      }
    else
      {
        t = h_79;
      }
  }
  return(t);
}
static ATerm r_19 (ATerm t)
{
  ATerm f_151 = NULL,g_151 = NULL,h_151 = NULL,i_151 = NULL,j_151 = NULL,m_151 = NULL,n_151 = NULL,o_151 = NULL;
  static ATerm s_19 (ATerm t);
  static ATerm s_19 (ATerm t)
  {
    ATerm r_151 = NULL;
    if(match_cons(t, sym_DynRuleId_1))
      {
        r_151 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LabeledDynRuleId_2, r_151, not_null(g_151));
    return(t);
  }
  if(match_cons(t, sym_RDefT_4))
    {
      h_151 = ATgetArgument(t, 0);
      i_151 = ATgetArgument(t, 1);
      j_151 = ATgetArgument(t, 2);
      {
        ATerm k_79 = ATgetArgument(t, 3);
        if(match_cons(k_79, sym_Rule_3))
          {
            m_151 = ATgetArgument(k_79, 0);
            n_151 = ATgetArgument(k_79, 1);
            o_151 = ATgetArgument(k_79, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_151, i_151, j_151)), (ATerm) ATmakeAppl(sym_Rule_3, m_151, n_151, o_151));
  {
    ATerm l_79 = t;
    int m_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UpgradeUndefine_0_0(t);
        LocalPopChoice(m_79);
      }
    else
      {
        t = l_79;
      }
  }
  f_151 = t;
  t = DRDef_LHS_1_0(dummify_0_0, t);
  if(((g_151 != NULL) && (g_151 != t)))
    _fail(t);
  else
    g_151 = t;
  t = f_151;
  t = oncetd_1_0(s_19, t);
  return(t);
}
static ATerm t_19 (ATerm t)
{
  ATerm v_151 = NULL,w_151 = NULL;
  static ATerm u_19 (ATerm t);
  static ATerm u_19 (ATerm t)
  {
    ATerm x_151 = NULL;
    if(match_cons(t, sym_DynRuleId_1))
      {
        x_151 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LabeledDynRuleId_2, x_151, not_null(w_151));
    return(t);
  }
  t = RDefToDRDef_extend_0_0(t);
  v_151 = t;
  t = DRDef_LHS_1_0(dummify_0_0, t);
  if(((w_151 != NULL) && (w_151 != t)))
    _fail(t);
  else
    w_151 = t;
  t = v_151;
  t = oncetd_1_0(u_19, t);
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  ATerm n_79 = t;
  int o_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_149 = NULL,x_149 = NULL,y_149 = NULL;
      t = oncetd_1_0(g_19, t);
      w_149 = t;
      t = (ATerm) ATempty;
      x_149 = t;
      t = term_q_79;
      y_149 = t;
      t = term_r_79;
      t = k_16(h_19, x_149, y_149, t);
      t = w_149;
      LocalPopChoice(o_79);
    }
  else
    {
      t = n_79;
    }
  t = topdown_1_0(i_19, t);
  return(t);
}
static ATerm v_19 (ATerm t)
{
  t = Cons_2_0(w_19, x_19, t);
  return(t);
}
static ATerm w_19 (ATerm t)
{
  ATerm u_152 = NULL,v_152 = NULL,w_152 = NULL,x_152 = NULL,a_30 = NULL;
  x_152 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_152);
  u_152 = t;
  t = v_152;
  t = topdown_1_0(y_19, t);
  t = listtd_1_0(z_19, t);
  w_152 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_152);
  a_30 = t;
  t = SSLsetAnnotations(a_30, u_152);
  return(t);
}
static ATerm x_19 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm y_19 (ATerm t)
{
  t = repeat_2_0(DefDynRuleScope_0_0, _id, t);
  return(t);
}
static ATerm z_19 (ATerm t)
{
  t = repeat_2_0(a_20, _id, t);
  return(t);
}
static ATerm a_20 (ATerm t)
{
  ATerm z_152 = NULL,a_153 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_152 = ATgetFirst((ATermList) t);
      a_153 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_15(z_152, a_153, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm c_152 = NULL,d_152 = NULL,j_152 = NULL,k_152 = NULL,l_152 = NULL,m_152 = NULL,n_152 = NULL,o_152 = NULL,p_152 = NULL,r_152 = NULL,s_152 = NULL,c_30 = NULL,b_30 = NULL,v_29 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  s_152 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_152);
  c_152 = t;
  t = d_152;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_152 = ATgetFirst((ATermList) t);
      l_152 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_152);
  j_152 = t;
  t = k_152;
  if(match_cons(t, sym_Constructors_1))
    {
      p_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_152);
  o_152 = t;
  t = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATinsert(ATinsert(CheckATermList(p_152), term_w_79), (ATerm) ATmakeAppl(sym_OpDecl_2, term_l_52, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_v_79), term_v_79))));
  v_29 = t;
  t = SSLsetAnnotations(v_29, o_152);
  r_152 = t;
  t = l_152;
  t = Cons_2_0(_id, v_19, t);
  m_152 = t;
  t = (ATerm) ATinsert(CheckATermList(m_152), r_152);
  b_30 = t;
  t = SSLsetAnnotations(b_30, j_152);
  n_152 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_152);
  c_30 = t;
  t = SSLsetAnnotations(c_30, c_152);
  return(t);
}
ATerm tboundin_3_0 (ATerm l_178 (ATerm), ATerm m_178 (ATerm), ATerm n_178 (ATerm), ATerm t)
{
  ATerm x_158 = NULL,y_158 = NULL,z_158 = NULL,a_159 = NULL,b_159 = NULL;
  a_159 = t;
  if(match_cons(t, sym_Scope_2))
    {
      b_159 = ATgetArgument(t, 0);
      z_158 = ATgetArgument(t, 1);
      {
        ATerm v_64 = NULL,a_65 = NULL,d_65 = NULL,h_30 = NULL;
        t = SSLgetAnnotations(a_159);
        v_64 = t;
        t = b_159;
        t = n_178(t);
        a_65 = t;
        t = z_158;
        t = l_178(t);
        d_65 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_65, d_65);
        h_30 = t;
        t = SSLsetAnnotations(h_30, v_64);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          b_159 = ATgetArgument(t, 0);
          {
            ATerm o_65 = NULL,t_65 = NULL,u_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,d_66 = NULL,e_66 = NULL,n_30 = NULL,m_30 = NULL;
            t = SSLgetAnnotations(a_159);
            o_65 = t;
            t = b_159;
            if(match_cons(t, sym_Rule_3))
              {
                u_65 = ATgetArgument(t, 0);
                x_65 = ATgetArgument(t, 1);
                y_65 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(b_159);
            t_65 = t;
            t = u_65;
            t = l_178(t);
            z_65 = t;
            t = x_65;
            t = l_178(t);
            a_66 = t;
            t = y_65;
            t = l_178(t);
            d_66 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, z_65, a_66, d_66);
            m_30 = t;
            t = SSLsetAnnotations(m_30, t_65);
            e_66 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, e_66);
            n_30 = t;
            t = SSLsetAnnotations(n_30, o_65);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              b_159 = ATgetArgument(t, 0);
              z_158 = ATgetArgument(t, 1);
              x_158 = ATgetArgument(t, 2);
              {
                ATerm n_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,o_30 = NULL;
                t = SSLgetAnnotations(a_159);
                n_66 = t;
                t = b_159;
                t = n_178(t);
                s_66 = t;
                t = z_158;
                t = n_178(t);
                t_66 = t;
                t = x_158;
                t = n_178(t);
                u_66 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, s_66, t_66, u_66);
                o_30 = t;
                t = SSLsetAnnotations(o_30, n_66);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  b_159 = ATgetArgument(t, 0);
                  z_158 = ATgetArgument(t, 1);
                  x_158 = ATgetArgument(t, 2);
                  y_158 = ATgetArgument(t, 3);
                  {
                    ATerm h_67 = NULL,p_67 = NULL,q_67 = NULL,r_67 = NULL,t_67 = NULL,p_30 = NULL;
                    t = SSLgetAnnotations(a_159);
                    h_67 = t;
                    t = b_159;
                    t = n_178(t);
                    p_67 = t;
                    t = z_158;
                    t = n_178(t);
                    q_67 = t;
                    t = x_158;
                    t = n_178(t);
                    r_67 = t;
                    t = y_158;
                    t = l_178(t);
                    t_67 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, p_67, q_67, r_67, t_67);
                    p_30 = t;
                    t = SSLsetAnnotations(p_30, h_67);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      b_159 = ATgetArgument(t, 0);
                      z_158 = ATgetArgument(t, 1);
                      x_158 = ATgetArgument(t, 2);
                      y_158 = ATgetArgument(t, 3);
                      {
                        ATerm i_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,u_69 = NULL,u_30 = NULL;
                        t = SSLgetAnnotations(a_159);
                        i_68 = t;
                        t = b_159;
                        t = n_178(t);
                        o_68 = t;
                        t = z_158;
                        t = n_178(t);
                        p_68 = t;
                        t = x_158;
                        t = n_178(t);
                        q_68 = t;
                        t = y_158;
                        t = l_178(t);
                        u_69 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, o_68, p_68, q_68, u_69);
                        u_30 = t;
                        t = SSLsetAnnotations(u_30, i_68);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          b_159 = ATgetArgument(t, 0);
                          z_158 = ATgetArgument(t, 1);
                          {
                            ATerm a_71 = NULL,h_71 = NULL,i_71 = NULL,v_30 = NULL;
                            t = SSLgetAnnotations(a_159);
                            a_71 = t;
                            t = b_159;
                            t = n_178(t);
                            h_71 = t;
                            t = z_158;
                            t = l_178(t);
                            i_71 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, h_71, i_71);
                            v_30 = t;
                            t = SSLsetAnnotations(v_30, a_71);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              b_159 = ATgetArgument(t, 0);
                              z_158 = ATgetArgument(t, 1);
                              {
                                ATerm u_71 = NULL,a_72 = NULL,b_72 = NULL,w_30 = NULL;
                                t = SSLgetAnnotations(a_159);
                                u_71 = t;
                                t = b_159;
                                t = n_178(t);
                                a_72 = t;
                                t = z_158;
                                t = l_178(t);
                                b_72 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, a_72, b_72);
                                w_30 = t;
                                t = SSLsetAnnotations(w_30, u_71);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  b_159 = ATgetArgument(t, 0);
                                  z_158 = ATgetArgument(t, 1);
                                  {
                                    ATerm n_72 = NULL,v_72 = NULL,z_72 = NULL,b_31 = NULL;
                                    t = SSLgetAnnotations(a_159);
                                    n_72 = t;
                                    t = b_159;
                                    t = n_178(t);
                                    v_72 = t;
                                    t = z_158;
                                    t = l_178(t);
                                    z_72 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, v_72, z_72);
                                    b_31 = t;
                                    t = SSLsetAnnotations(b_31, n_72);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      b_159 = ATgetArgument(t, 0);
                                      {
                                        ATerm k_73 = NULL,m_73 = NULL,d_31 = NULL;
                                        t = SSLgetAnnotations(a_159);
                                        k_73 = t;
                                        t = b_159;
                                        t = l_178(t);
                                        m_73 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, m_73);
                                        d_31 = t;
                                        t = SSLsetAnnotations(d_31, k_73);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          b_159 = ATgetArgument(t, 0);
                                          {
                                            ATerm t_73 = NULL,v_73 = NULL,h_31 = NULL;
                                            t = SSLgetAnnotations(a_159);
                                            t_73 = t;
                                            t = b_159;
                                            t = l_178(t);
                                            v_73 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, v_73);
                                            h_31 = t;
                                            t = SSLsetAnnotations(h_31, t_73);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              b_159 = ATgetArgument(t, 0);
                                              {
                                                ATerm n_74 = NULL,p_74 = NULL,i_31 = NULL;
                                                t = SSLgetAnnotations(a_159);
                                                n_74 = t;
                                                t = b_159;
                                                t = l_178(t);
                                                p_74 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, p_74);
                                                i_31 = t;
                                                t = SSLsetAnnotations(i_31, n_74);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  b_159 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm x_74 = NULL,a_75 = NULL,j_31 = NULL;
                                                    t = SSLgetAnnotations(a_159);
                                                    x_74 = t;
                                                    t = b_159;
                                                    t = l_178(t);
                                                    a_75 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, a_75);
                                                    j_31 = t;
                                                    t = SSLsetAnnotations(j_31, x_74);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm m_75 = NULL,s_75 = NULL,k_31 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      b_159 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(a_159);
                                                  m_75 = t;
                                                  t = b_159;
                                                  t = l_178(t);
                                                  s_75 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, s_75);
                                                  k_31 = t;
                                                  t = SSLsetAnnotations(k_31, m_75);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm u_178 (ATerm), ATerm t)
{
  ATerm x_159 = NULL,y_159 = NULL,b_160 = NULL;
  ATerm x_79 = t;
  int y_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          x_159 = ATgetArgument(t, 0);
          {
            ATerm z_79 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_79);
      t = x_159;
      if(match_cons(t, sym_DynRuleId_1))
        {
          y_159 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_159;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm a_80 = ATgetArgument(t, 0);
          ATerm b_80 = ATgetArgument(t, 1);
          b_160 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_160;
    }
  else
    {
      t = x_79;
      {
        ATerm c_80 = t;
        int d_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                x_159 = ATgetArgument(t, 0);
                {
                  ATerm e_80 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(d_80);
            t = x_159;
            if(match_cons(t, sym_DynRuleId_1))
              {
                y_159 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_159;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm f_80 = ATgetArgument(t, 0);
                ATerm h_80 = ATgetArgument(t, 1);
                b_160 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = b_160;
          }
        else
          {
            t = c_80;
            if(match_cons(t, sym_AddDynRule_2))
              {
                x_159 = ATgetArgument(t, 0);
                {
                  ATerm i_80 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = x_159;
            if(match_cons(t, sym_DynRuleId_1))
              {
                y_159 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = y_159;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm o_80 = ATgetArgument(t, 0);
                ATerm q_80 = ATgetArgument(t, 1);
                b_160 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = b_160;
          }
      }
    }
  return(t);
}
static ATerm b_20 (ATerm t)
{
  ATerm r_160 = NULL;
  ATerm r_80 = t;
  int s_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_160 = ATgetArgument(t, 0);
          {
            ATerm t_80 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_80);
      t = r_160;
    }
  else
    {
      t = r_80;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_160 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_160;
    }
  return(t);
}
static ATerm c_20 (ATerm t)
{
  ATerm z_160 = NULL;
  ATerm u_80 = t;
  int v_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_160 = ATgetArgument(t, 0);
          {
            ATerm w_80 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_80);
      t = z_160;
    }
  else
    {
      t = u_80;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_160 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_160;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm m_160 = NULL;
  ATerm x_80 = t;
  int y_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm z_80 = ATgetArgument(t, 0);
          ATerm a_81 = ATgetArgument(t, 1);
          m_160 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(y_80);
      t = m_160;
      t = map_1_0(b_20, t);
    }
  else
    {
      t = x_80;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm d_81 = ATgetArgument(t, 0);
          ATerm f_81 = ATgetArgument(t, 1);
          m_160 = ATgetArgument(t, 2);
          {
            ATerm g_81 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = m_160;
      t = map_1_0(c_20, t);
    }
  return(t);
}
static ATerm d_20 (ATerm t)
{
  ATerm v_161 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_161);
  return(t);
}
static ATerm f_20 (ATerm t)
{
  ATerm h_81 = t;
  int i_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_81);
    }
  else
    {
      t = h_81;
      {
        ATerm k_81 = t;
        int m_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_81);
          }
        else
          {
            t = k_81;
            {
              ATerm o_81 = t;
              int p_81 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_161 = NULL,y_161 = NULL,z_161 = NULL,f_162 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_161 = ATgetArgument(t, 0);
                      y_161 = ATgetArgument(t, 1);
                      z_161 = ATgetArgument(t, 2);
                      f_162 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_161;
                  t = map_1_0(g_20, t);
                  LocalPopChoice(p_81);
                }
              else
                {
                  t = o_81;
                  {
                    ATerm q_81 = t;
                    int s_81 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_81);
                      }
                    else
                      {
                        t = q_81;
                        t = dynrule_targs_1_0(h_20, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_20 (ATerm t)
{
  ATerm m_162 = NULL;
  ATerm t_81 = t;
  int u_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_162 = ATgetArgument(t, 0);
          {
            ATerm v_81 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_81);
      t = m_162;
    }
  else
    {
      t = t_81;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_162 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_162;
    }
  return(t);
}
static ATerm h_20 (ATerm t)
{
  t = map_1_0(i_20, t);
  return(t);
}
static ATerm i_20 (ATerm t)
{
  ATerm r_162 = NULL;
  ATerm d_82 = t;
  int g_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_162 = ATgetArgument(t, 0);
          {
            ATerm h_82 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_82);
      t = r_162;
    }
  else
    {
      t = d_82;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_162 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_162;
    }
  return(t);
}
static ATerm j_20 (ATerm t)
{
  ATerm v_162 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_162);
  return(t);
}
static ATerm k_20 (ATerm t)
{
  ATerm i_82 = t;
  int j_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_82);
    }
  else
    {
      t = i_82;
      {
        ATerm k_82 = t;
        int o_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_82);
          }
        else
          {
            t = k_82;
            {
              ATerm p_82 = t;
              int q_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_162 = NULL,y_162 = NULL,z_162 = NULL,a_163 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_162 = ATgetArgument(t, 0);
                      y_162 = ATgetArgument(t, 1);
                      z_162 = ATgetArgument(t, 2);
                      a_163 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_162;
                  t = map_1_0(l_20, t);
                  LocalPopChoice(q_82);
                }
              else
                {
                  t = p_82;
                  {
                    ATerm r_82 = t;
                    int u_82 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_82);
                      }
                    else
                      {
                        t = r_82;
                        t = dynrule_targs_1_0(m_20, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_20 (ATerm t)
{
  ATerm h_163 = NULL;
  ATerm y_82 = t;
  int c_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_163 = ATgetArgument(t, 0);
          {
            ATerm d_83 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_83);
      t = h_163;
    }
  else
    {
      t = y_82;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_163 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_163;
    }
  return(t);
}
static ATerm m_20 (ATerm t)
{
  t = map_1_0(n_20, t);
  return(t);
}
static ATerm n_20 (ATerm t)
{
  ATerm m_163 = NULL;
  ATerm j_83 = t;
  int k_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_163 = ATgetArgument(t, 0);
          {
            ATerm l_83 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_83);
      t = m_163;
    }
  else
    {
      t = j_83;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_163 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_163;
    }
  return(t);
}
static ATerm o_20 (ATerm t)
{
  ATerm q_163 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_163);
  return(t);
}
static ATerm p_20 (ATerm t)
{
  ATerm m_83 = t;
  int n_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_83);
    }
  else
    {
      t = m_83;
      {
        ATerm s_83 = t;
        int t_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_83);
          }
        else
          {
            t = s_83;
            {
              ATerm v_83 = t;
              int w_83 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_163 = NULL,t_163 = NULL,u_163 = NULL,v_163 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_163 = ATgetArgument(t, 0);
                      t_163 = ATgetArgument(t, 1);
                      u_163 = ATgetArgument(t, 2);
                      v_163 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_163;
                  t = map_1_0(q_20, t);
                  LocalPopChoice(w_83);
                }
              else
                {
                  t = v_83;
                  {
                    ATerm e_84 = t;
                    int f_84 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_84);
                      }
                    else
                      {
                        t = e_84;
                        t = dynrule_targs_1_0(r_20, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_20 (ATerm t)
{
  ATerm c_164 = NULL;
  ATerm h_84 = t;
  int v_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_164 = ATgetArgument(t, 0);
          {
            ATerm b_85 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_84);
      t = c_164;
    }
  else
    {
      t = h_84;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_164 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_164;
    }
  return(t);
}
static ATerm r_20 (ATerm t)
{
  t = map_1_0(s_20, t);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm h_164 = NULL;
  ATerm f_85 = t;
  int i_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_164 = ATgetArgument(t, 0);
          {
            ATerm j_85 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_85);
      t = h_164;
    }
  else
    {
      t = f_85;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_164 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_164;
    }
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm l_164 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_164);
  return(t);
}
static ATerm u_20 (ATerm t)
{
  ATerm k_85 = t;
  int m_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_85);
    }
  else
    {
      t = k_85;
      {
        ATerm n_85 = t;
        int t_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_85);
          }
        else
          {
            t = n_85;
            {
              ATerm u_85 = t;
              int v_85 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_164 = NULL,o_164 = NULL,p_164 = NULL,q_164 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_164 = ATgetArgument(t, 0);
                      o_164 = ATgetArgument(t, 1);
                      p_164 = ATgetArgument(t, 2);
                      q_164 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_164;
                  t = map_1_0(v_20, t);
                  LocalPopChoice(v_85);
                }
              else
                {
                  t = u_85;
                  {
                    ATerm w_85 = t;
                    int y_85 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_85);
                      }
                    else
                      {
                        t = w_85;
                        t = dynrule_targs_1_0(w_20, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_20 (ATerm t)
{
  ATerm x_164 = NULL;
  ATerm z_85 = t;
  int c_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_164 = ATgetArgument(t, 0);
          {
            ATerm d_86 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_86);
      t = x_164;
    }
  else
    {
      t = z_85;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_164 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_164;
    }
  return(t);
}
static ATerm w_20 (ATerm t)
{
  t = map_1_0(y_20, t);
  return(t);
}
static ATerm y_20 (ATerm t)
{
  ATerm c_165 = NULL;
  ATerm e_86 = t;
  int f_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_165 = ATgetArgument(t, 0);
          {
            ATerm g_86 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_86);
      t = c_165;
    }
  else
    {
      t = e_86;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_165 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_165;
    }
  return(t);
}
static ATerm z_20 (ATerm t)
{
  ATerm g_165 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_165);
  return(t);
}
static ATerm a_21 (ATerm t)
{
  ATerm h_86 = t;
  int k_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_86);
    }
  else
    {
      t = h_86;
      {
        ATerm l_86 = t;
        int m_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_86);
          }
        else
          {
            t = l_86;
            {
              ATerm n_86 = t;
              int o_86 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_165 = NULL,j_165 = NULL,k_165 = NULL,l_165 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_165 = ATgetArgument(t, 0);
                      j_165 = ATgetArgument(t, 1);
                      k_165 = ATgetArgument(t, 2);
                      l_165 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_165;
                  t = map_1_0(b_21, t);
                  LocalPopChoice(o_86);
                }
              else
                {
                  t = n_86;
                  {
                    ATerm p_86 = t;
                    int q_86 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(q_86);
                      }
                    else
                      {
                        t = p_86;
                        t = dynrule_targs_1_0(c_21, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_21 (ATerm t)
{
  ATerm s_165 = NULL;
  ATerm r_86 = t;
  int t_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_165 = ATgetArgument(t, 0);
          {
            ATerm u_86 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_86);
      t = s_165;
    }
  else
    {
      t = r_86;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_165 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_165;
    }
  return(t);
}
static ATerm c_21 (ATerm t)
{
  t = map_1_0(d_21, t);
  return(t);
}
static ATerm d_21 (ATerm t)
{
  ATerm x_165 = NULL;
  ATerm v_86 = t;
  int w_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_165 = ATgetArgument(t, 0);
          {
            ATerm y_86 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_86);
      t = x_165;
    }
  else
    {
      t = v_86;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_165 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_165;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm t_161 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      t_161 = ATgetArgument(t, 0);
      t = t_161;
      t = free_vars_3_0(d_20, f_20, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          t_161 = ATgetArgument(t, 0);
          t = t_161;
          t = free_vars_3_0(j_20, k_20, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              t_161 = ATgetArgument(t, 0);
              t = t_161;
              t = free_vars_3_0(o_20, p_20, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  t_161 = ATgetArgument(t, 0);
                  t = t_161;
                  t = free_vars_3_0(t_20, u_20, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      t_161 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = t_161;
                  t = free_vars_3_0(z_20, a_21, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm e_21 (ATerm t)
{
  ATerm m_166 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_166);
  return(t);
}
static ATerm g_21 (ATerm t)
{
  ATerm z_86 = t;
  int a_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_87);
    }
  else
    {
      t = z_86;
      {
        ATerm b_87 = t;
        int c_87 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_87);
          }
        else
          {
            t = b_87;
            {
              ATerm d_87 = t;
              int e_87 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_166 = NULL,p_166 = NULL,q_166 = NULL,r_166 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_166 = ATgetArgument(t, 0);
                      p_166 = ATgetArgument(t, 1);
                      q_166 = ATgetArgument(t, 2);
                      r_166 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_166;
                  t = map_1_0(h_21, t);
                  LocalPopChoice(e_87);
                }
              else
                {
                  t = d_87;
                  {
                    ATerm f_87 = t;
                    int g_87 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(g_87);
                      }
                    else
                      {
                        t = f_87;
                        t = dynrule_targs_1_0(i_21, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_21 (ATerm t)
{
  ATerm y_166 = NULL;
  ATerm h_87 = t;
  int i_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_166 = ATgetArgument(t, 0);
          {
            ATerm j_87 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_87);
      t = y_166;
    }
  else
    {
      t = h_87;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_166 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_166;
    }
  return(t);
}
static ATerm i_21 (ATerm t)
{
  t = map_1_0(j_21, t);
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm d_167 = NULL;
  ATerm k_87 = t;
  int l_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_167 = ATgetArgument(t, 0);
          {
            ATerm m_87 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_87);
      t = d_167;
    }
  else
    {
      t = k_87;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_167 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_167;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm f_166 = NULL,j_166 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_166 = ATgetArgument(t, 0);
      t = j_166;
      if(match_cons(t, sym_Rule_3))
        {
          f_166 = ATgetArgument(t, 0);
          {
            ATerm n_87 = ATgetArgument(t, 1);
          }
          {
            ATerm o_87 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_166;
      t = free_vars_3_0(e_21, g_21, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_166 = ATgetArgument(t, 0);
          {
            ATerm p_87 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_166;
    }
  return(t);
}
static ATerm y_15 (ATerm l_154 (ATerm), ATerm k_50, ATerm j_50, ATerm t)
{
  static ATerm x_167 (ATerm t);
  static ATerm x_167 (ATerm t)
  {
    ATerm s_167 = NULL,t_167 = NULL,u_167 = NULL;
    s_167 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_50;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_167 = ATgetFirst((ATermList) t);
            u_167 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_87 = t;
          int r_87 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_167;
              {
                static ATerm k_21 (ATerm t);
                static ATerm k_21 (ATerm t)
                {
                  t = j_50;
                  return(t);
                }
                t = z_15(l_154, k_21, t_167, u_167, t);
              }
              t = x_167(t);
              LocalPopChoice(r_87);
            }
          else
            {
              t = q_87;
              {
                ATerm c_76 = NULL,g_76 = NULL,a_36 = NULL;
                t = SSLgetAnnotations(s_167);
                c_76 = t;
                t = u_167;
                t = x_167(t);
                g_76 = t;
                t = (ATerm) ATinsert(CheckATermList(g_76), t_167);
                a_36 = t;
                t = SSLsetAnnotations(a_36, c_76);
              }
            }
        }
      }
    return(t);
  }
  t = k_50;
  t = x_167(t);
  return(t);
}
static ATerm z_15 (ATerm o_154 (ATerm), ATerm p_154 (ATerm), ATerm o_50, ATerm n_50, ATerm t)
{
  t = p_154(t);
  {
    static ATerm l_21 (ATerm t);
    static ATerm l_21 (ATerm t)
    {
      ATerm b_168 = NULL;
      b_168 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_50, b_168);
      t = o_154(t);
      return(t);
    }
    t = fetch_1_0(l_21, t);
  }
  t = n_50;
  return(t);
}
static ATerm a_16 (ATerm g_154 (ATerm), ATerm i_50, ATerm h_50, ATerm t)
{
  static ATerm r_168 (ATerm t);
  static ATerm r_168 (ATerm t)
  {
    ATerm m_168 = NULL,n_168 = NULL,o_168 = NULL;
    m_168 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_168;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_168 = ATgetFirst((ATermList) t);
            o_168 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_87 = t;
          int t_87 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_168;
              {
                static ATerm n_21 (ATerm t);
                static ATerm n_21 (ATerm t)
                {
                  t = h_50;
                  return(t);
                }
                t = z_15(g_154, n_21, n_168, o_168, t);
              }
              t = r_168(t);
              LocalPopChoice(t_87);
            }
          else
            {
              t = s_87;
              {
                ATerm z_76 = NULL,c_77 = NULL,g_36 = NULL;
                t = SSLgetAnnotations(m_168);
                z_76 = t;
                t = o_168;
                t = r_168(t);
                c_77 = t;
                t = (ATerm) ATinsert(CheckATermList(c_77), n_168);
                g_36 = t;
                t = SSLsetAnnotations(g_36, z_76);
              }
            }
        }
      }
    return(t);
  }
  t = i_50;
  t = r_168(t);
  return(t);
}
ATerm genzip_4_0 (ATerm e_152 (ATerm), ATerm f_152 (ATerm), ATerm g_152 (ATerm), ATerm h_152 (ATerm), ATerm t)
{
  static ATerm z_168 (ATerm t);
  static ATerm z_168 (ATerm t)
  {
    ATerm v_87 = t;
    int w_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_152(t);
        LocalPopChoice(w_87);
      }
    else
      {
        t = v_87;
        {
          ATerm t_168 = NULL,u_168 = NULL,v_168 = NULL,w_168 = NULL,x_168 = NULL,y_168 = NULL,i_36 = NULL;
          t = f_152(t);
          y_168 = t;
          if(match_cons(t, sym__2))
            {
              u_168 = ATgetArgument(t, 0);
              v_168 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_168);
          t_168 = t;
          t = u_168;
          t = h_152(t);
          w_168 = t;
          t = v_168;
          t = z_168(t);
          x_168 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_168, x_168);
          i_36 = t;
          t = SSLsetAnnotations(i_36, t_168);
          t = g_152(t);
        }
      }
    return(t);
  }
  t = z_168(t);
  return(t);
}
static ATerm o_21 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_87 = ATgetArgument(t, 0);
      if(((ATgetType(x_87) != AT_LIST) || !(ATisEmpty(x_87))))
        _fail(t);
      {
        ATerm y_87 = ATgetArgument(t, 1);
        if(((ATgetType(y_87) != AT_LIST) || !(ATisEmpty(y_87))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_21 (ATerm t)
{
  ATerm g_169 = NULL,h_169 = NULL,i_169 = NULL,j_169 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_87 = ATgetArgument(t, 0);
      if(((ATgetType(z_87) == AT_LIST) && !(ATisEmpty(z_87))))
        {
          g_169 = ATgetFirst((ATermList) z_87);
          h_169 = (ATerm) ATgetNext((ATermList) z_87);
        }
      else
        _fail(t);
      {
        ATerm a_88 = ATgetArgument(t, 1);
        if(((ATgetType(a_88) == AT_LIST) && !(ATisEmpty(a_88))))
          {
            i_169 = ATgetFirst((ATermList) a_88);
            j_169 = (ATerm) ATgetNext((ATermList) a_88);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_169, i_169), (ATerm) ATmakeAppl(sym__2, h_169, j_169));
  return(t);
}
static ATerm q_21 (ATerm t)
{
  ATerm k_169 = NULL,l_169 = NULL;
  if(match_cons(t, sym__2))
    {
      k_169 = ATgetArgument(t, 0);
      l_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_169), k_169);
  return(t);
}
static ATerm f_16 (ATerm y_860, ATerm d_861, ATerm l_85, ATerm t)
{
  ATerm b_169 = NULL,c_169 = NULL,d_169 = NULL,e_169 = NULL;
  t = SSL_explode_term(d_861);
  if(match_cons(t, sym__2))
    {
      b_169 = ATgetArgument(t, 0);
      d_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(y_860);
  if(match_cons(t, sym__2))
    {
      if((b_169 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      c_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_169, d_169);
  t = genzip_4_0(o_21, p_21, q_21, _id, t);
  e_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_169, l_85);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm t)
{
  static ATerm n_169 (ATerm t);
  static ATerm n_169 (ATerm t)
  {
    ATerm b_88 = t;
    int c_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_143(t);
        LocalPopChoice(c_88);
      }
    else
      {
        t = b_88;
        t = j_143(t);
        t = n_169(t);
      }
    return(t);
  }
  t = n_169(t);
  return(t);
}
ATerm for_3_0 (ATerm l_143 (ATerm), ATerm m_143 (ATerm), ATerm n_143 (ATerm), ATerm t)
{
  t = l_143(t);
  t = while_not_2_0(m_143, n_143, t);
  return(t);
}
static ATerm r_21 (ATerm t)
{
  ATerm u_169 = NULL;
  u_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_169);
  return(t);
}
static ATerm s_21 (ATerm t)
{
  ATerm v_169 = NULL,w_169 = NULL,x_169 = NULL,y_169 = NULL,k_36 = NULL;
  y_169 = t;
  if(match_cons(t, sym__2))
    {
      w_169 = ATgetArgument(t, 0);
      x_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_169);
  v_169 = t;
  t = x_169;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_169, x_169);
  k_36 = t;
  t = SSLsetAnnotations(k_36, v_169);
  return(t);
}
static ATerm t_21 (ATerm t)
{
  ATerm y_170 = NULL,z_170 = NULL,a_171 = NULL,b_171 = NULL,c_171 = NULL;
  y_170 = t;
  if(match_cons(t, sym__2))
    {
      z_170 = ATgetArgument(t, 0);
      a_171 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_171;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_171 = ATgetFirst((ATermList) t);
      c_171 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm d_88 = t;
        int e_88 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_171(z_170, a_171, y_170, t);
            LocalPopChoice(e_88);
          }
        else
          {
            t = d_88;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_170), b_171), c_171);
          }
      }
    }
  else
    {
      t = m_171(z_170, a_171, y_170, t);
    }
  return(t);
}
static ATerm m_171 (ATerm z_169, ATerm a_170, ATerm b_170, ATerm t)
{
  ATerm c_170 = NULL,f_170 = NULL,l_36 = NULL,p_170 = NULL,q_170 = NULL,r_170 = NULL,s_170 = NULL;
  t = SSLgetAnnotations(b_170);
  c_170 = t;
  t = a_170;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_170 = ATgetFirst((ATermList) t);
      s_170 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_170;
  if(match_cons(t, sym__2))
    {
      q_170 = ATgetArgument(t, 0);
      r_170 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_88 = t;
    int g_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_170;
        if((q_170 != t))
          {
            _fail(t);
          }
        t = s_170;
        LocalPopChoice(g_88);
      }
    else
      {
        t = f_88;
        t = a_170;
        t = f_16(q_170, r_170, s_170, t);
      }
  }
  f_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_169, f_170);
  l_36 = t;
  t = SSLsetAnnotations(l_36, c_170);
  return(t);
}
static ATerm u_21 (ATerm t)
{
  ATerm l_171 = NULL;
  if(match_cons(t, sym__2))
    {
      l_171 = ATgetArgument(t, 0);
      if((l_171 != ATgetArgument(t, 1)))
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
  ATerm i_88 = t;
  int j_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(r_21, s_21, t_21, t);
      LocalPopChoice(j_88);
    }
  else
    {
      t = i_88;
      {
        ATerm g_171 = NULL,h_171 = NULL,i_171 = NULL;
        g_171 = t;
        if(match_cons(t, sym__2))
          {
            h_171 = ATgetArgument(t, 0);
            i_171 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = g_171;
        t = a_16(u_21, h_171, i_171, t);
      }
    }
  return(t);
}
static ATerm w_21 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_21 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_21 (ATerm t)
{
  ATerm s_77 = NULL,t_77 = NULL;
  if(match_cons(t, sym__2))
    {
      s_77 = ATgetArgument(t, 0);
      t_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_15(d_22, s_77, t_77, t);
  return(t);
}
static ATerm d_22 (ATerm t)
{
  ATerm v_77 = NULL;
  if(match_cons(t, sym__2))
    {
      v_77 = ATgetArgument(t, 0);
      if((v_77 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_22 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL;
  if(match_cons(t, sym__2))
    {
      m_78 = ATgetArgument(t, 0);
      n_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_15(m_22, m_78, n_78, t);
  return(t);
}
static ATerm m_22 (ATerm t)
{
  ATerm o_78 = NULL;
  if(match_cons(t, sym__2))
    {
      o_78 = ATgetArgument(t, 0);
      if((o_78 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm v_174 (ATerm), ATerm w_174 (ATerm), ATerm x_174 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm a_172 (ATerm t);
  static ATerm a_172 (ATerm t)
  {
    ATerm k_88 = t;
    int l_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_174(t);
        LocalPopChoice(l_88);
      }
    else
      {
        t = k_88;
        {
          ATerm m_88 = t;
          int n_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_171 = NULL,p_171 = NULL,k_77 = NULL,l_77 = NULL;
              o_171 = t;
              t = w_174(t);
              p_171 = t;
              t = o_171;
              {
                static ATerm v_21 (ATerm t);
                static ATerm v_21 (ATerm t)
                {
                  ATerm r_171 = NULL;
                  t = a_172(t);
                  r_171 = t;
                  t = (ATerm) ATmakeAppl(sym__2, r_171, p_171);
                  t = diff_0_0(t);
                  return(t);
                }
                t = x_174(v_21, a_172, w_21, t);
              }
              l_77 = t;
              t = SSL_explode_term(l_77);
              if(match_cons(t, sym__2))
                {
                  ATerm o_88 = ATgetArgument(t, 0);
                  k_77 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_77;
              t = foldr_3_0(x_21, z_21, _id, t);
              LocalPopChoice(n_88);
            }
          else
            {
              t = m_88;
              {
                ATerm z_77 = NULL,a_78 = NULL;
                a_78 = t;
                t = SSL_explode_term(a_78);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_88 = ATgetArgument(t, 0);
                    z_77 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_77;
                t = foldr_3_0(g_22, k_22, a_172, t);
              }
            }
        }
      }
    return(t);
  }
  t = a_172(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm s_143 (ATerm), ATerm t)
{
  static ATerm n_22 (ATerm t);
  static ATerm n_22 (ATerm t)
  {
    t = bottomup_1_0(s_143, t);
    return(t);
  }
  t = SRTS_all(n_22, t);
  t = s_143(t);
  return(t);
}
static ATerm j_16 (ATerm b_66, ATerm c_66, ATerm t)
{
  ATerm b_172 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_66, c_66);
  t = c_17(b_66, c_66, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_172 = ATgetFirst((ATermList) t);
      {
        ATerm q_88 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = b_172;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm v_172 = NULL,w_172 = NULL;
  v_172 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_172 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_88 = t;
    int t_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_79 = NULL;
        t = term_u_88;
        d_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_u_88, v_172);
        t = j_16(d_79, v_172, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm w_88 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_88) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, w_172, (ATerm) ATempty);
        LocalPopChoice(t_88);
      }
    else
      {
        t = r_88;
        {
          ATerm t_79 = NULL;
          t = term_u_88;
          t_79 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_88, v_172);
          t = j_16(t_79, v_172, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm x_88 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_88) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, w_172, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm j_145 (ATerm), ATerm t)
{
  static ATerm z_172 (ATerm t);
  static ATerm z_172 (ATerm t)
  {
    ATerm y_88 = t;
    int z_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_145(t);
        LocalPopChoice(z_88);
      }
    else
      {
        t = y_88;
        t = SRTS_all(z_172, t);
      }
    return(t);
  }
  t = z_172(t);
  return(t);
}
static ATerm k_16 (ATerm t_138 (ATerm), ATerm w_25, ATerm u_25, ATerm t)
{
  ATerm a_173 = NULL,b_173 = NULL,c_173 = NULL,d_173 = NULL,e_173 = NULL,f_173 = NULL,g_173 = NULL,h_173 = NULL;
  d_173 = t;
  t = t_138(t);
  a_173 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_173, w_25, u_25);
  t = d_17(a_173, w_25, u_25, t);
  {
    ATerm a_89 = t;
    int b_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_173 = NULL;
        t = term_r_54;
        i_173 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_173, term_r_54);
        t = c_17(a_173, i_173, t);
        {
          ATerm c_89 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = c_89;
            }
        }
        LocalPopChoice(b_89);
      }
    else
      {
        t = a_89;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_173 = ATgetFirst((ATermList) t);
      c_173 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, a_173, term_r_54, (ATerm) ATinsert(CheckATermList(c_173), (ATerm) ATinsert(CheckATermList(b_173), w_25)));
  t = lookup_table_0_1(a_173, t);
  h_173 = t;
  t = term_r_54;
  e_173 = t;
  t = (ATerm) ATinsert(CheckATermList(c_173), (ATerm) ATinsert(CheckATermList(b_173), w_25));
  f_173 = t;
  t = h_173;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_17(e_173, f_173, g_173, t);
  t = d_173;
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = term_u_88;
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = term_u_88;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm m_173 = NULL,o_173 = NULL,p_173 = NULL,q_173 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      o_173 = ATgetArgument(t, 0);
      p_173 = ATgetArgument(t, 1);
      m_173 = ATgetArgument(t, 2);
      {
        ATerm t_173 = NULL,u_173 = NULL;
        t = p_173;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, o_173);
        t_173 = t;
        t = term_e_89;
        u_173 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_173), term_e_89);
        t = k_16(o_22, t_173, u_173, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, o_173, (ATerm)ATempty, m_173);
      }
    }
  else
    {
      ATerm x_173 = NULL,y_173 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          o_173 = ATgetArgument(t, 0);
          p_173 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_173;
      if(match_cons(t, sym_ConstType_1))
        {
          q_173 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, o_173);
      x_173 = t;
      t = term_g_89;
      y_173 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, o_173), term_g_89);
      t = k_16(q_22, x_173, y_173, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, o_173, (ATerm) ATmakeAppl(sym_ConstType_1, q_173));
    }
  return(t);
}
static ATerm l_16 (ATerm v_65, ATerm w_65, ATerm t)
{
  ATerm c_174 = NULL,d_174 = NULL;
  d_174 = t;
  {
    ATerm h_89 = t;
    int i_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_65, w_65);
        t = c_17(v_65, w_65, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_89 = ATgetFirst((ATermList) t);
            c_174 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_89);
        {
          ATerm e_174 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, v_65, w_65, c_174);
          t = lookup_table_0_1(v_65, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              e_174 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_17(w_65, c_174, e_174, t);
          t = (ATerm) ATmakeAppl(sym__3, v_65, w_65, c_174);
        }
      }
    else
      {
        t = h_89;
        {
          ATerm g_174 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, v_65, w_65);
          t = lookup_table_0_1(v_65, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              g_174 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_16(w_65, g_174, t);
          t = (ATerm) ATmakeAppl(sym__2, v_65, w_65);
        }
      }
  }
  t = d_174;
  return(t);
}
ATerm end_scope_1_0 (ATerm q_138 (ATerm), ATerm t)
{
  ATerm i_174 = NULL,j_174 = NULL,k_174 = NULL,l_174 = NULL,m_174 = NULL,n_174 = NULL,o_174 = NULL;
  l_174 = t;
  t = q_138(t);
  k_174 = t;
  {
    ATerm k_89 = t;
    int l_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_174 = NULL;
        t = term_r_54;
        p_174 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_174, term_r_54);
        t = c_17(k_174, p_174, t);
        {
          ATerm p_89 = t;
          if((PushChoice() == 0))
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_89;
            }
        }
        LocalPopChoice(l_89);
      }
    else
      {
        t = k_89;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_174 = ATgetFirst((ATermList) t);
      i_174 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, k_174, term_r_54, i_174);
  t = lookup_table_0_1(k_174, t);
  o_174 = t;
  t = term_r_54;
  m_174 = t;
  t = o_174;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_17(m_174, i_174, n_174, t);
  t = j_174;
  {
    static ATerm t_22 (ATerm t);
    static ATerm t_22 (ATerm t)
    {
      ATerm q_174 = NULL;
      q_174 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_174, q_174);
      t = l_16(k_174, q_174, t);
      return(t);
    }
    t = map_1_0(t_22, t);
  }
  t = l_174;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_142 (ATerm), ATerm o_142 (ATerm), ATerm t)
{
  ATerm q_89 = t;
  int s_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_142(t);
      t = o_142(t);
      LocalPopChoice(s_89);
    }
  else
    {
      t = q_89;
      t = o_142(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_138 (ATerm), ATerm t)
{
  ATerm s_174 = NULL,t_174 = NULL,u_174 = NULL,z_174 = NULL,a_175 = NULL,b_175 = NULL,c_175 = NULL;
  t_174 = t;
  t = p_138(t);
  s_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_174, term_r_54);
  {
    ATerm t_89 = t;
    int v_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_175 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_89 = ATgetArgument(t, 0);
            ATerm x_89 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_54;
        g_175 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_174, term_r_54);
        t = c_17(s_174, g_175, t);
        LocalPopChoice(v_89);
      }
    else
      {
        t = t_89;
        t = (ATerm) ATempty;
      }
  }
  u_174 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_174, term_r_54, (ATerm) ATinsert(CheckATermList(u_174), (ATerm) ATempty));
  t = lookup_table_0_1(s_174, t);
  c_175 = t;
  t = term_r_54;
  z_174 = t;
  t = (ATerm) ATinsert(CheckATermList(u_174), (ATerm) ATempty);
  a_175 = t;
  t = c_175;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_17(z_174, a_175, b_175, t);
  t = t_174;
  return(t);
}
ATerm scope_2_0 (ATerm r_138 (ATerm), ATerm s_138 (ATerm), ATerm t)
{
  static ATerm u_22 (ATerm t);
  static ATerm u_22 (ATerm t)
  {
    t = end_scope_1_0(r_138, t);
    return(t);
  }
  t = begin_scope_1_0(r_138, t);
  t = restore_always_2_0(s_138, u_22, t);
  return(t);
}
static ATerm w_22 (ATerm t)
{
  t = term_u_88;
  return(t);
}
static ATerm y_22 (ATerm t)
{
  ATerm l_175 = NULL,m_175 = NULL,n_175 = NULL,o_175 = NULL,b_37 = NULL;
  o_175 = t;
  if(match_cons(t, sym_Specification_1))
    {
      m_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_175);
  l_175 = t;
  t = m_175;
  t = map_1_0(a_23, t);
  n_175 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_175);
  b_37 = t;
  t = SSLsetAnnotations(b_37, l_175);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm a_23 (ATerm t)
{
  ATerm b_176 = NULL,c_176 = NULL;
  c_176 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      b_176 = ATgetArgument(t, 0);
      {
        ATerm y_89 = t;
        int z_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_81 = NULL,e_81 = NULL,o_36 = NULL;
            t = SSLgetAnnotations(c_176);
            c_81 = t;
            t = b_176;
            t = map_1_0(b_23, t);
            e_81 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, e_81);
            o_36 = t;
            t = SSLsetAnnotations(o_36, c_81);
            LocalPopChoice(z_89);
          }
        else
          {
            t = y_89;
            t = c_176;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          b_176 = ATgetArgument(t, 0);
          {
            ATerm a_90 = t;
            int b_90 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_82 = NULL,f_82 = NULL,t_36 = NULL;
                t = SSLgetAnnotations(c_176);
                c_82 = t;
                t = b_176;
                t = map_1_0(d_23, t);
                f_82 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, f_82);
                t_36 = t;
                t = SSLsetAnnotations(t_36, c_82);
                LocalPopChoice(b_90);
              }
            else
              {
                t = a_90;
                t = c_176;
              }
          }
        }
      else
        {
          t = c_176;
        }
    }
  return(t);
}
static ATerm b_23 (ATerm t)
{
  ATerm c_90 = t;
  int d_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(d_90);
    }
  else
    {
      t = c_90;
    }
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm e_90 = t;
  int f_90 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(f_90);
    }
  else
    {
      t = e_90;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(w_22, y_22, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_176 = NULL,k_176 = NULL,l_176 = NULL;
  j_176 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_176;
    }
  else
    {
      static ATerm e_23 (ATerm t);
      static ATerm e_23 (ATerm t)
      {
        t = not_null(l_176);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_176 = ATgetFirst((ATermList) t);
          if(((l_176 != NULL) && (l_176 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_176 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_176;
      t = at_end_1_0(e_23, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm d_158 (ATerm), ATerm t)
{
  ATerm a_177 = NULL,b_177 = NULL,c_177 = NULL;
  a_177 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_177;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_177 = ATgetFirst((ATermList) t);
          c_177 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm g_90 = t;
        int h_90 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_82 = NULL,z_82 = NULL,a_83 = NULL,j_37 = NULL;
            t = SSLgetAnnotations(a_177);
            t_82 = t;
            t = b_177;
            t = d_158(t);
            z_82 = t;
            t = c_177;
            t = filter_1_0(d_158, t);
            a_83 = t;
            t = (ATerm) ATinsert(CheckATermList(a_83), z_82);
            j_37 = t;
            t = SSLsetAnnotations(j_37, t_82);
            LocalPopChoice(h_90);
          }
        else
          {
            t = g_90;
            t = c_177;
            t = filter_1_0(d_158, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm r_150 (ATerm), ATerm t)
{
  static ATerm u_177 (ATerm t);
  static ATerm u_177 (ATerm t)
  {
    ATerm r_177 = NULL,s_177 = NULL,t_177 = NULL;
    t_177 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_177 = ATgetFirst((ATermList) t);
        s_177 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_83 = NULL,u_83 = NULL,p_37 = NULL;
          t = SSLgetAnnotations(t_177);
          o_83 = t;
          t = s_177;
          t = u_177(t);
          u_83 = t;
          t = (ATerm) ATinsert(CheckATermList(u_83), r_177);
          p_37 = t;
          t = SSLsetAnnotations(p_37, o_83);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = t_177;
        t = r_150(t);
      }
    return(t);
  }
  t = u_177(t);
  return(t);
}
static ATerm g_178 (ATerm y_177, ATerm t)
{
  ATerm z_177 = NULL;
  t = SSL_explode_term(y_177);
  if(match_cons(t, sym__2))
    {
      ATerm i_90 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_90) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_177 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_177;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm b_178 = NULL,c_178 = NULL,d_178 = NULL;
  d_178 = t;
  if(match_cons(t, sym__2))
    {
      b_178 = ATgetArgument(t, 0);
      c_178 = ATgetArgument(t, 1);
      {
        ATerm k_90 = t;
        int l_90 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm f_23 (ATerm t);
            static ATerm f_23 (ATerm t)
            {
              t = c_178;
              return(t);
            }
            t = b_178;
            t = at_end_1_0(f_23, t);
            LocalPopChoice(l_90);
          }
        else
          {
            t = k_90;
            t = g_178(d_178, t);
          }
      }
    }
  else
    {
      t = g_178(d_178, t);
    }
  return(t);
}
static ATerm o_16 (ATerm z_22, ATerm v_22, ATerm t)
{
  ATerm h_178 = NULL,i_178 = NULL;
  static ATerm g_23 (ATerm t);
  static ATerm g_23 (ATerm t)
  {
    ATerm j_178 = NULL,k_178 = NULL,o_178 = NULL,p_178 = NULL;
    p_178 = t;
    t = SSL_explode_term(p_178);
    if(match_cons(t, sym__2))
      {
        if(((h_178 != NULL) && (h_178 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          h_178 = ATgetArgument(t, 0);
        {
          ATerm m_90 = ATgetArgument(t, 1);
          if(((ATgetType(m_90) == AT_LIST) && !(ATisEmpty(m_90))))
            {
              j_178 = ATgetFirst((ATermList) m_90);
              {
                ATerm p_90 = (ATerm) ATgetNext((ATermList) m_90);
                if(((ATgetType(p_90) != AT_LIST) || !(ATisEmpty(p_90))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, j_178, not_null(i_178));
    t = conc_0_0(t);
    k_178 = t;
    t = (ATerm) ATinsert(ATempty, k_178);
    o_178 = t;
    t = SSL_mkterm(h_178, o_178);
    return(t);
  }
  t = SSL_explode_term(z_22);
  if(match_cons(t, sym__2))
    {
      if(((h_178 != NULL) && (h_178 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        h_178 = ATgetArgument(t, 0);
      {
        ATerm q_90 = ATgetArgument(t, 1);
        if(((ATgetType(q_90) == AT_LIST) && !(ATisEmpty(q_90))))
          {
            if(((i_178 != NULL) && (i_178 != ATgetFirst((ATermList) q_90))))
              _fail(ATgetFirst((ATermList) q_90));
            else
              i_178 = ATgetFirst((ATermList) q_90);
            {
              ATerm r_90 = (ATerm) ATgetNext((ATermList) q_90);
              if(((ATgetType(r_90) != AT_LIST) || !(ATisEmpty(r_90))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_22;
  t = fetch_1_0(g_23, t);
  return(t);
}
ATerm foldr_3_0 (ATerm b_157 (ATerm), ATerm c_157 (ATerm), ATerm d_157 (ATerm), ATerm t)
{
  ATerm r_178 = NULL,s_178 = NULL,t_178 = NULL;
  r_178 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_178;
      t = b_157(t);
    }
  else
    {
      ATerm x_178 = NULL,y_178 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_178 = ATgetFirst((ATermList) t);
          t_178 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_178;
      t = d_157(t);
      x_178 = t;
      t = t_178;
      t = foldr_3_0(b_157, c_157, d_157, t);
      y_178 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_178, y_178);
      t = c_157(t);
    }
  return(t);
}
static ATerm h_23 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_90), term_w_90), term_v_90);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  ATerm f_179 = NULL,k_179 = NULL;
  if(match_cons(t, sym__2))
    {
      f_179 = ATgetArgument(t, 0);
      k_179 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_16(f_179, k_179, t);
  return(t);
}
static ATerm o_23 (ATerm t)
{
  ATerm q_179 = NULL,s_179 = NULL;
  s_179 = t;
  if(match_cons(t, sym_Signature_1))
    {
      q_179 = ATgetArgument(t, 0);
      {
        ATerm y_90 = t;
        int z_90 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_179 = NULL;
            t = q_179;
            t = filter_1_0(q_23, t);
            t = concat_0_0(t);
            v_179 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, v_179);
            LocalPopChoice(z_90);
          }
        else
          {
            t = y_90;
            t = s_179;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          q_179 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, q_179);
        }
      else
        {
          t = s_179;
        }
    }
  return(t);
}
static ATerm q_23 (ATerm t)
{
  ATerm w_179 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      w_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_179;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm b_179 = NULL,c_179 = NULL,d_179 = NULL,e_179 = NULL,r_37 = NULL;
  e_179 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_179);
  b_179 = t;
  t = c_179;
  t = foldr_3_0(h_23, l_23, o_23, t);
  d_179 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, d_179);
  r_37 = t;
  t = SSLsetAnnotations(r_37, b_179);
  return(t);
}
static ATerm v_23 (ATerm t)
{
  ATerm a_91 = t;
  int b_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(b_91);
    }
  else
    {
      t = a_91;
    }
  return(t);
}
static ATerm w_23 (ATerm t)
{
  ATerm s_180 = NULL,t_180 = NULL,u_180 = NULL,v_180 = NULL,w_180 = NULL;
  w_180 = t;
  if(match_cons(t, sym_LRule_1))
    {
      v_180 = ATgetArgument(t, 0);
      t = v_180;
      if(match_cons(t, sym_Rule_3))
        {
          s_180 = ATgetArgument(t, 0);
          t_180 = ATgetArgument(t, 1);
          u_180 = ATgetArgument(t, 2);
          {
            ATerm c_91 = t;
            int d_91 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_181 = NULL;
                t = s_180;
                t = free_vars_3_0(b_24, e_24, tboundin_3_0, t);
                a_181 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, a_181, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, s_180, t_180, u_180)));
                LocalPopChoice(d_91);
              }
            else
              {
                t = c_91;
                t = w_180;
              }
          }
        }
      else
        {
          t = w_180;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          v_180 = ATgetArgument(t, 0);
          {
            ATerm e_91 = t;
            int f_91 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_181 = NULL;
                t = v_180;
                t = free_vars_3_0(r_24, w_24, tboundin_3_0, t);
                y_181 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, y_181, v_180);
                LocalPopChoice(f_91);
              }
            else
              {
                t = e_91;
                t = w_180;
              }
          }
        }
      else
        {
          t = w_180;
        }
    }
  return(t);
}
static ATerm b_24 (ATerm t)
{
  ATerm b_181 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_181);
  return(t);
}
static ATerm e_24 (ATerm t)
{
  ATerm g_91 = t;
  int h_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_91);
    }
  else
    {
      t = g_91;
      {
        ATerm i_91 = t;
        int j_91 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_91);
          }
        else
          {
            t = i_91;
            {
              ATerm k_91 = t;
              int l_91 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_181 = NULL,e_181 = NULL,f_181 = NULL,g_181 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_181 = ATgetArgument(t, 0);
                      e_181 = ATgetArgument(t, 1);
                      f_181 = ATgetArgument(t, 2);
                      g_181 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_181;
                  t = map_1_0(i_24, t);
                  LocalPopChoice(l_91);
                }
              else
                {
                  t = k_91;
                  {
                    ATerm m_91 = t;
                    int n_91 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_91);
                      }
                    else
                      {
                        t = m_91;
                        t = dynrule_targs_1_0(m_24, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_24 (ATerm t)
{
  ATerm n_181 = NULL;
  ATerm o_91 = t;
  int p_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_181 = ATgetArgument(t, 0);
          {
            ATerm q_91 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_91);
      t = n_181;
    }
  else
    {
      t = o_91;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_181 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_181;
    }
  return(t);
}
static ATerm m_24 (ATerm t)
{
  t = map_1_0(p_24, t);
  return(t);
}
static ATerm p_24 (ATerm t)
{
  ATerm s_181 = NULL;
  ATerm r_91 = t;
  int s_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_181 = ATgetArgument(t, 0);
          {
            ATerm t_91 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_91);
      t = s_181;
    }
  else
    {
      t = r_91;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_181 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_181;
    }
  return(t);
}
static ATerm r_24 (ATerm t)
{
  ATerm z_181 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_181);
  return(t);
}
static ATerm w_24 (ATerm t)
{
  ATerm u_91 = t;
  int v_91 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_91);
    }
  else
    {
      t = u_91;
      {
        ATerm w_91 = t;
        int x_91 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_91);
          }
        else
          {
            t = w_91;
            {
              ATerm y_91 = t;
              int z_91 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_182 = NULL,c_182 = NULL,d_182 = NULL,e_182 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_182 = ATgetArgument(t, 0);
                      c_182 = ATgetArgument(t, 1);
                      d_182 = ATgetArgument(t, 2);
                      e_182 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_182;
                  t = map_1_0(x_24, t);
                  LocalPopChoice(z_91);
                }
              else
                {
                  t = y_91;
                  {
                    ATerm a_92 = t;
                    int b_92 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_92);
                      }
                    else
                      {
                        t = a_92;
                        t = dynrule_targs_1_0(a_25, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_24 (ATerm t)
{
  ATerm l_182 = NULL;
  ATerm c_92 = t;
  int d_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_182 = ATgetArgument(t, 0);
          {
            ATerm e_92 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_92);
      t = l_182;
    }
  else
    {
      t = c_92;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_182 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_182;
    }
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = map_1_0(b_25, t);
  return(t);
}
static ATerm b_25 (ATerm t)
{
  ATerm q_182 = NULL;
  ATerm f_92 = t;
  int g_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_182 = ATgetArgument(t, 0);
          {
            ATerm h_92 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_92);
      t = q_182;
    }
  else
    {
      t = f_92;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_182 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_182;
    }
  return(t);
}
static ATerm m_25 (ATerm t)
{
  ATerm i_92 = t;
  int j_92 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(j_92);
    }
  else
    {
      t = i_92;
    }
  return(t);
}
static ATerm s_25 (ATerm t)
{
  ATerm a_183 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      a_183 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, a_183)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm m_180 = NULL,n_180 = NULL,o_180 = NULL,p_180 = NULL,t_37 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(v_23, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(w_23, t);
  {
    ATerm k_92 = t;
    int l_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_182 = NULL,w_182 = NULL,x_182 = NULL;
        v_182 = t;
        t = term_m_92;
        w_182 = t;
        t = term_n_92;
        x_182 = t;
        t = term_o_92;
        t = c_17(w_182, x_182, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = v_182;
        LocalPopChoice(l_92);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = k_92;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(m_25, t);
  p_180 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_180 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_180);
  m_180 = t;
  t = n_180;
  t = fetch_1_0(s_25, t);
  o_180 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_180);
  t_37 = t;
  t = SSLsetAnnotations(t_37, m_180);
  return(t);
}
static ATerm p_16 (ATerm e_60, ATerm f_60, ATerm t)
{
  ATerm b_183 = NULL;
  t = SSL_fputc(e_60, f_60);
  b_183 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_183);
  return(t);
}
static ATerm q_16 (ATerm h_44, ATerm i_44, ATerm t)
{
  ATerm c_183 = NULL;
  t = SSL_write_term_to_stream_text(h_44, i_44);
  c_183 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_183);
  return(t);
}
static ATerm s_16 (ATerm u_149 (ATerm), ATerm f_316, ATerm n_44, ATerm t)
{
  ATerm d_183 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_316, term_p_92);
  t = w_16(t);
  d_183 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_183, n_44);
  t = u_149(t);
  t = fclose_0_0(t);
  t = n_44;
  return(t);
}
static ATerm r_16 (ATerm d_44, ATerm e_44, ATerm t)
{
  ATerm e_183 = NULL;
  t = SSL_write_term_to_stream_baf(d_44, e_44);
  e_183 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_183);
  return(t);
}
static ATerm t_25 (ATerm t)
{
  ATerm l_183 = NULL,m_183 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_92 = ATgetArgument(t, 0);
      if(match_cons(q_92, sym_Stream_1))
        {
          l_183 = ATgetArgument(q_92, 0);
        }
      else
        _fail(t);
      m_183 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_16(l_183, m_183, t);
  return(t);
}
static ATerm v_25 (ATerm t)
{
  ATerm n_183 = NULL,o_183 = NULL,p_183 = NULL,q_183 = NULL,r_183 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_92 = ATgetArgument(t, 0);
      if(match_cons(r_92, sym_Stream_1))
        {
          q_183 = ATgetArgument(r_92, 0);
        }
      else
        _fail(t);
      r_183 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_16(q_183, r_183, t);
  n_183 = t;
  t = term_v_35;
  o_183 = t;
  t = n_183;
  if(match_cons(t, sym_Stream_1))
    {
      p_183 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_35, n_183);
  t = p_16(o_183, p_183, t);
  return(t);
}
ATerm output_1_0 (ATerm n_170 (ATerm), ATerm t)
{
  ATerm f_183 = NULL,g_183 = NULL;
  t = n_170(t);
  g_183 = t;
  {
    ATerm s_92 = t;
    int t_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_183 = NULL,i_183 = NULL;
        t = term_m_92;
        h_183 = t;
        t = term_u_92;
        i_183 = t;
        t = term_v_92;
        t = c_17(h_183, i_183, t);
        LocalPopChoice(t_92);
      }
    else
      {
        t = s_92;
        t = term_w_92;
      }
  }
  f_183 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_183, g_183);
  {
    ATerm x_92 = t;
    int y_92 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_183 = NULL,k_183 = NULL;
        t = term_m_92;
        j_183 = t;
        t = term_z_92;
        k_183 = t;
        t = term_a_93;
        t = c_17(j_183, k_183, t);
        t = (ATerm) ATmakeAppl(sym__2, f_183, g_183);
        LocalPopChoice(y_92);
        if(match_cons(t, sym__2))
          {
            ATerm b_93 = ATgetArgument(t, 0);
            ATerm c_93 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_16(t_25, f_183, g_183, t);
      }
    else
      {
        t = x_92;
        if(match_cons(t, sym__2))
          {
            ATerm d_93 = ATgetArgument(t, 0);
            ATerm e_93 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_16(v_25, f_183, g_183, t);
      }
  }
  return(t);
}
static ATerm f_184 (ATerm z_183, ATerm t)
{
  t = SSL_fclose(z_183);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_184 = NULL,d_184 = NULL;
  d_184 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_184 = ATgetArgument(t, 0);
      {
        ATerm f_93 = t;
        int g_93 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_184);
            LocalPopChoice(g_93);
          }
        else
          {
            t = f_93;
            t = f_184(d_184, t);
          }
      }
    }
  else
    {
      t = f_184(d_184, t);
    }
  return(t);
}
static ATerm t_16 (ATerm j_44, ATerm t)
{
  t = SSL_read_term_from_stream(j_44);
  return(t);
}
static ATerm u_16 (ATerm k_58, ATerm l_58, ATerm t)
{
  t = SSL_strcat(k_58, l_58);
  return(t);
}
static ATerm v_16 (ATerm g_60, ATerm h_60, ATerm t)
{
  ATerm g_184 = NULL;
  t = SSL_fopen(g_60, h_60);
  g_184 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_184);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_184 = NULL;
  t = SSL_stdin_stream();
  h_184 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_184);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_184 = NULL;
  t = SSL_stdout_stream();
  i_184 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_184);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_184 = NULL;
  t = SSL_stderr_stream();
  j_184 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_184);
  return(t);
}
static ATerm r_185 (ATerm p_184, ATerm t)
{
  ATerm q_184 = NULL;
  t = SSL_explode_term(p_184);
  if(match_cons(t, sym__2))
    {
      ATerm h_93 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_93) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_93 = ATgetArgument(t, 1);
        if(((ATgetType(i_93) == AT_LIST) && !(ATisEmpty(i_93))))
          {
            q_184 = ATgetFirst((ATermList) i_93);
            {
              ATerm j_93 = (ATerm) ATgetNext((ATermList) i_93);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_184;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_184;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_184;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_184;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_185 (ATerm t_184, ATerm u_184, ATerm v_184, ATerm t)
{
  ATerm w_184 = NULL,x_184 = NULL,y_184 = NULL,b_185 = NULL,v_37 = NULL;
  t = SSLgetAnnotations(v_184);
  y_184 = t;
  t = t_184;
  if(match_cons(t, sym_Path_1))
    {
      b_185 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_185, u_184);
  v_37 = t;
  t = SSLsetAnnotations(v_37, y_184);
  if(match_cons(t, sym__2))
    {
      w_184 = ATgetArgument(t, 0);
      x_184 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_16(w_184, x_184, t);
  return(t);
}
static ATerm t_185 (ATerm d_185, ATerm e_185, ATerm g_185, ATerm t)
{
  ATerm h_185 = NULL,i_185 = NULL,j_185 = NULL,m_185 = NULL,x_37 = NULL;
  t = SSLgetAnnotations(g_185);
  j_185 = t;
  t = SSL_is_string(d_185);
  m_185 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_185, e_185);
  x_37 = t;
  t = SSLsetAnnotations(x_37, j_185);
  if(match_cons(t, sym__2))
    {
      h_185 = ATgetArgument(t, 0);
      i_185 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_16(h_185, i_185, t);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm o_185 = NULL,p_185 = NULL,q_185 = NULL;
  o_185 = t;
  if(match_cons(t, sym__2))
    {
      p_185 = ATgetArgument(t, 0);
      q_185 = ATgetArgument(t, 1);
      {
        ATerm k_93 = t;
        int l_93 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_185(o_185, t);
            LocalPopChoice(l_93);
          }
        else
          {
            t = k_93;
            {
              ATerm m_93 = t;
              int n_93 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_185(p_185, q_185, o_185, t);
                  LocalPopChoice(n_93);
                }
              else
                {
                  t = m_93;
                  t = t_185(p_185, q_185, o_185, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_185(o_185, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_185 = NULL,w_185 = NULL,x_185 = NULL,c_186 = NULL;
  c_186 = t;
  {
    ATerm o_93 = t;
    int p_93 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, c_186, term_q_93);
        t = w_16(t);
        LocalPopChoice(p_93);
      }
    else
      {
        t = o_93;
        {
          ATerm o_85 = NULL,p_85 = NULL;
          t = term_r_93;
          p_85 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_r_93, c_186);
          t = u_16(p_85, c_186, t);
          o_85 = t;
          t = SSL_perror(o_85);
          _fail(t);
        }
      }
  }
  w_185 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_185 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_16(x_185, t);
  v_185 = t;
  t = w_185;
  t = fclose_0_0(t);
  t = v_185;
  return(t);
}
ATerm input_1_0 (ATerm o_170 (ATerm), ATerm t)
{
  ATerm s_93 = t;
  int t_93 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_186 = NULL,g_186 = NULL;
      t = term_m_92;
      f_186 = t;
      t = term_u_93;
      g_186 = t;
      t = term_v_93;
      t = c_17(f_186, g_186, t);
      LocalPopChoice(t_93);
    }
  else
    {
      t = s_93;
      t = term_w_93;
    }
  t = ReadFromFile_0_0(t);
  t = o_170(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_186 = NULL,i_186 = NULL;
  t = term_m_92;
  h_186 = t;
  t = term_x_93;
  i_186 = t;
  t = term_y_93;
  t = c_17(h_186, i_186, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_186 = NULL,l_186 = NULL,m_186 = NULL;
  k_186 = t;
  {
    ATerm c_94 = t;
    int d_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_186;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_94 = ATgetFirst((ATermList) t);
                ATerm f_94 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_186;
          }
        LocalPopChoice(d_94);
      }
    else
      {
        t = c_94;
        t = (ATerm) ATinsert(ATempty, k_186);
      }
  }
  l_186 = t;
  t = term_w_92;
  m_186 = t;
  t = SSL_printnl(m_186, l_186);
  t = k_186;
  return(t);
}
ATerm map_1_0 (ATerm c_150 (ATerm), ATerm t)
{
  static ATerm e_187 (ATerm t);
  static ATerm e_187 (ATerm t)
  {
    ATerm b_187 = NULL,c_187 = NULL,d_187 = NULL;
    b_187 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_187;
      }
    else
      {
        ATerm x_85 = NULL,a_86 = NULL,b_86 = NULL,k_38 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_187 = ATgetFirst((ATermList) t);
            d_187 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_187);
        x_85 = t;
        t = c_187;
        t = c_150(t);
        a_86 = t;
        t = d_187;
        t = e_187(t);
        b_86 = t;
        t = (ATerm) ATinsert(CheckATermList(b_86), a_86);
        k_38 = t;
        t = SSLsetAnnotations(k_38, x_85);
      }
    return(t);
  }
  t = e_187(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm h_187 = NULL,i_187 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_187 = ATgetFirst((ATermList) t);
      i_187 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_187 = NULL,n_187 = NULL;
        static ATerm x_25 (ATerm t);
        static ATerm x_25 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_187)), not_null(n_187));
          return(t);
        }
        t = i_187;
        t = p_0(t);
        if(((m_187 != NULL) && (m_187 != t)))
          _fail(t);
        else
          m_187 = t;
        t = h_187;
        t = n_0(t);
        if(((n_187 != NULL) && (n_187 != t)))
          _fail(t);
        else
          n_187 = t;
        t = i_187;
        t = reverse_acc_2_0(n_0, x_25, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_50;
      t = p_0(t);
    }
  return(t);
}
static ATerm y_25 (ATerm t)
{
  ATerm v_187 = NULL,w_187 = NULL,x_187 = NULL,m_38 = NULL;
  x_187 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_187 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_187);
  v_187 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_187);
  m_38 = t;
  t = SSLsetAnnotations(m_38, v_187);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_26 (ATerm t)
{
  ATerm b_188 = NULL;
  b_188 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_188), term_g_94);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm m_172 (ATerm), ATerm n_172 (ATerm), ATerm t)
{
  ATerm r_187 = NULL,s_187 = NULL;
  ATerm h_94 = t;
  int i_94 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_187 = NULL,u_187 = NULL;
      t = term_m_92;
      t_187 = t;
      t = term_x_93;
      u_187 = t;
      t = term_y_93;
      t = c_17(t_187, u_187, t);
      LocalPopChoice(i_94);
    }
  else
    {
      t = h_94;
      t = fetch_1_0(y_25, t);
    }
  {
    ATerm j_94 = t;
    int k_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_172(t);
        t = echo_0_0(t);
        LocalPopChoice(k_94);
      }
    else
      {
        t = j_94;
      }
  }
  t = term_l_94;
  t = echo_0_0(t);
  t = term_m_94;
  r_187 = t;
  t = term_n_94;
  s_187 = t;
  t = term_o_94;
  t = c_17(r_187, s_187, t);
  t = reverse_acc_2_0(_id, z_25, t);
  t = map_1_0(k_26, t);
  {
    ATerm p_94 = t;
    int q_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_188 = NULL;
        t = n_172(t);
        c_188 = t;
        t = (ATerm) ATinsert(CheckATermList(c_188), term_r_94);
        t = echo_0_0(t);
        LocalPopChoice(q_94);
      }
    else
      {
        t = p_94;
      }
  }
  return(t);
}
static ATerm n_26 (ATerm t)
{
  ATerm i_188 = NULL,j_188 = NULL,k_188 = NULL,s_38 = NULL;
  k_188 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_188 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_188);
  i_188 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, j_188);
  s_38 = t;
  t = SSLsetAnnotations(s_38, i_188);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm f_188 = NULL;
  f_188 = t;
  {
    ATerm s_94 = t;
    int t_94 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_188 = NULL,h_188 = NULL;
        t = term_m_92;
        g_188 = t;
        t = term_x_93;
        h_188 = t;
        t = term_y_93;
        t = c_17(g_188, h_188, t);
        LocalPopChoice(t_94);
      }
    else
      {
        t = s_94;
        t = fetch_1_0(n_26, t);
      }
  }
  t = f_188;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm r_26 (ATerm t)
{
  ATerm m_188 = NULL;
  m_188 = t;
  if(match_string(t, "-k"))
    {
      t = m_188;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = m_188;
    }
  return(t);
}
static ATerm v_26 (ATerm t)
{
  ATerm n_188 = NULL,o_188 = NULL,p_188 = NULL;
  n_188 = t;
  t = SSL_string_to_int(n_188);
  o_188 = t;
  t = term_u_94;
  p_188 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_94, o_188);
  t = f_17(p_188, o_188, t);
  t = n_188;
  return(t);
}
static ATerm w_26 (ATerm t)
{
  t = term_v_94;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_26, v_26, w_26, t);
  return(t);
}
static ATerm x_26 (ATerm t)
{
  ATerm r_188 = NULL;
  r_188 = t;
  if(match_string(t, "-S"))
    {
      t = r_188;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = r_188;
    }
  return(t);
}
static ATerm z_26 (ATerm t)
{
  ATerm s_188 = NULL,t_188 = NULL;
  t = term_w_94;
  s_188 = t;
  t = term_f_55;
  t_188 = t;
  t = term_x_94;
  t = f_17(s_188, t_188, t);
  t = term_y_94;
  return(t);
}
static ATerm a_27 (ATerm t)
{
  t = term_z_94;
  return(t);
}
static ATerm k_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_27 (ATerm t)
{
  ATerm u_188 = NULL,v_188 = NULL,w_188 = NULL;
  u_188 = t;
  t = SSL_string_to_int(u_188);
  v_188 = t;
  t = term_w_94;
  w_188 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_94, v_188);
  t = f_17(w_188, v_188, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, u_188);
  return(t);
}
static ATerm w_27 (ATerm t)
{
  t = term_a_95;
  return(t);
}
static ATerm x_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_27 (ATerm t)
{
  ATerm x_188 = NULL,y_188 = NULL;
  t = term_b_95;
  x_188 = t;
  t = term_a_50;
  y_188 = t;
  t = term_c_95;
  t = f_17(x_188, y_188, t);
  t = term_d_95;
  return(t);
}
static ATerm b_28 (ATerm t)
{
  t = term_e_95;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm f_95 = t;
  int g_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_26, z_26, a_27, t);
      LocalPopChoice(g_95);
    }
  else
    {
      t = f_95;
      {
        ATerm h_95 = t;
        int i_95 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(k_27, l_27, w_27, t);
            LocalPopChoice(i_95);
          }
        else
          {
            t = h_95;
            t = Option_3_0(x_27, y_27, b_28, t);
          }
      }
    }
  return(t);
}
static ATerm f_17 (ATerm k_80, ATerm l_80, ATerm t)
{
  ATerm z_188 = NULL,a_189 = NULL;
  t = term_m_92;
  z_188 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_92, k_80, l_80);
  t = lookup_table_0_1(z_188, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_189 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_17(k_80, l_80, a_189, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_92, k_80, l_80);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm e_189 = NULL,f_189 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_189 = NULL,h_189 = NULL,i_189 = NULL;
      t = term_a_50;
      t = g_0(t);
      g_189 = t;
      t = term_m_94;
      h_189 = t;
      t = term_n_94;
      i_189 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_94, term_n_94, g_189);
      t = d_17(h_189, i_189, g_189, t);
      _fail(t);
    }
  else
    {
      ATerm l_189 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_189 = ATgetFirst((ATermList) t);
          f_189 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_189;
      t = b_0(t);
      t = term_a_50;
      t = d_0(t);
      l_189 = t;
      t = (ATerm) ATinsert(CheckATermList(f_189), l_189);
    }
  return(t);
}
static ATerm c_28 (ATerm t)
{
  ATerm n_189 = NULL;
  n_189 = t;
  if(match_string(t, "-o"))
    {
      t = n_189;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_189;
    }
  return(t);
}
static ATerm d_28 (ATerm t)
{
  ATerm o_189 = NULL,p_189 = NULL;
  o_189 = t;
  t = term_u_92;
  p_189 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_92, o_189);
  t = f_17(p_189, o_189, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_189);
  return(t);
}
static ATerm i_28 (ATerm t)
{
  t = term_j_95;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_28, d_28, i_28, t);
  return(t);
}
static ATerm j_28 (ATerm t)
{
  ATerm r_189 = NULL;
  r_189 = t;
  if(match_string(t, "-i"))
    {
      t = r_189;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_189;
    }
  return(t);
}
static ATerm n_28 (ATerm t)
{
  ATerm s_189 = NULL,t_189 = NULL;
  s_189 = t;
  t = term_u_93;
  t_189 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_93, s_189);
  t = f_17(t_189, s_189, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_189);
  return(t);
}
static ATerm o_28 (ATerm t)
{
  t = term_k_95;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_28, n_28, o_28, t);
  return(t);
}
static ATerm d_17 (ATerm q_65, ATerm r_65, ATerm p_65, ATerm t)
{
  ATerm v_189 = NULL,w_189 = NULL,x_189 = NULL,y_189 = NULL,z_189 = NULL;
  v_189 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_65, r_65);
  {
    ATerm l_95 = t;
    int m_95 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_95 = ATgetArgument(t, 0);
            ATerm o_95 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_65, r_65);
        t = c_17(q_65, r_65, t);
        LocalPopChoice(m_95);
      }
    else
      {
        t = l_95;
        t = (ATerm) ATempty;
      }
  }
  w_189 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_65, r_65, (ATerm) ATinsert(CheckATermList(w_189), p_65));
  t = lookup_table_0_1(q_65, t);
  z_189 = t;
  t = (ATerm) ATinsert(CheckATermList(w_189), p_65);
  x_189 = t;
  t = z_189;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_189 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_17(r_65, x_189, y_189, t);
  t = v_189;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_190 = NULL,i_190 = NULL,j_190 = NULL,k_190 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_190 = NULL,m_190 = NULL,n_190 = NULL;
      t = term_a_50;
      t = l_0(t);
      l_190 = t;
      t = term_m_94;
      m_190 = t;
      t = term_n_94;
      n_190 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_94, term_n_94, l_190);
      t = d_17(m_190, n_190, l_190, t);
      _fail(t);
    }
  else
    {
      ATerm r_190 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_190 = ATgetFirst((ATermList) t);
          i_190 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_190;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_190 = ATgetFirst((ATermList) t);
          k_190 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_190;
      t = h_0(t);
      t = j_190;
      t = j_0(t);
      r_190 = t;
      t = (ATerm) ATinsert(CheckATermList(k_190), r_190);
    }
  return(t);
}
static ATerm p_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_28 (ATerm t)
{
  ATerm t_190 = NULL,u_190 = NULL;
  t_190 = t;
  if(match_string(t, "old"))
    {
      t = t_190;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = t_190;
    }
  t = term_n_92;
  u_190 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_92, t_190);
  t = f_17(u_190, t_190, t);
  t = term_a_50;
  return(t);
}
static ATerm u_28 (ATerm t)
{
  t = term_p_95;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_28, q_28, u_28, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_190 = NULL,x_190 = NULL,y_190 = NULL,z_190 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_50;
  t = whoami_0_0(t);
  w_190 = t;
  t = term_k_42;
  y_190 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_95), w_190);
  z_190 = t;
  t = SSL_printnl(y_190, z_190);
  t = term_m_42;
  x_190 = t;
  t = SSL_exit(x_190);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_191 = NULL,b_191 = NULL;
  t = term_m_92;
  a_191 = t;
  t = term_x_93;
  b_191 = t;
  t = term_y_93;
  t = c_17(a_191, b_191, t);
  return(t);
}
static ATerm x_16 (ATerm z_63, ATerm a_64, ATerm t)
{
  ATerm r_95 = t;
  int s_95 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(z_63, a_64);
      LocalPopChoice(s_95);
    }
  else
    {
      t = r_95;
      t = SSL_addr(z_63, a_64);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_156 (ATerm), ATerm a_157 (ATerm), ATerm t)
{
  ATerm d_191 = NULL,e_191 = NULL,f_191 = NULL;
  d_191 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_191;
      t = z_156(t);
    }
  else
    {
      ATerm i_191 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_191 = ATgetFirst((ATermList) t);
          f_191 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_191;
      t = foldr_2_0(z_156, a_157, t);
      i_191 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_191, i_191);
      t = a_157(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm w_28 (ATerm t)
{
  t = term_f_55;
  return(t);
}
static ATerm x_28 (ATerm t)
{
  ATerm s_86 = NULL,x_86 = NULL;
  if(match_cons(t, sym__2))
    {
      s_86 = ATgetArgument(t, 0);
      x_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_16(s_86, x_86, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_191 = NULL,i_86 = NULL,j_86 = NULL;
  t = times_0_0(t);
  j_86 = t;
  t = SSL_explode_term(j_86);
  if(match_cons(t, sym__2))
    {
      ATerm t_95 = ATgetArgument(t, 0);
      i_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_86;
  t = foldr_2_0(w_28, x_28, t);
  l_191 = t;
  t = SSL_TicksToSeconds(l_191);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_191 = NULL,x_191 = NULL,y_191 = NULL;
  w_191 = t;
  if(match_cons(t, sym__2))
    {
      x_191 = ATgetArgument(t, 0);
      y_191 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_95 = t;
    int a_96 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_191;
        if((x_191 != t))
          {
            _fail(t);
          }
        t = w_191;
        LocalPopChoice(a_96);
      }
    else
      {
        t = z_95;
        t = (ATerm) ATmakeAppl(sym__2, x_191, y_191);
        {
          ATerm b_96 = t;
          int c_96 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_191, y_191);
              LocalPopChoice(c_96);
            }
          else
            {
              t = b_96;
              t = SSL_gtr(x_191, y_191);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_191, y_191);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_167 (ATerm), ATerm t)
{
  ATerm c_192 = NULL;
  c_192 = t;
  {
    ATerm d_96 = t;
    int e_96 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_192 = NULL,f_192 = NULL,g_192 = NULL;
        t = term_m_92;
        f_192 = t;
        t = term_w_94;
        g_192 = t;
        t = term_f_96;
        t = c_17(f_192, g_192, t);
        e_192 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_192, term_m_42);
        t = geq_0_0(t);
        t = c_192;
        t = j_167(t);
        LocalPopChoice(e_96);
      }
    else
      {
        t = d_96;
        t = c_192;
      }
  }
  return(t);
}
static ATerm y_28 (ATerm t)
{
  ATerm i_192 = NULL,j_192 = NULL,l_192 = NULL,m_192 = NULL;
  t = run_time_0_0(t);
  i_192 = t;
  t = term_a_50;
  t = whoami_0_0(t);
  j_192 = t;
  t = term_k_42;
  l_192 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_96), i_192), term_g_96), j_192);
  m_192 = t;
  t = SSL_printnl(l_192, m_192);
  t = (ATerm) ATmakeAppl(sym__2, term_k_42, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_96), i_192), term_g_96), j_192));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_28, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_192 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_55;
  n_192 = t;
  t = SSL_exit(n_192);
  return(t);
}
static ATerm g_17 (ATerm f_70, ATerm g_70, ATerm h_70, ATerm t)
{
  ATerm o_192 = NULL;
  t = SSL_hashtable_put(h_70, f_70, g_70);
  o_192 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_192);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_67, ATerm t)
{
  ATerm x_192 = NULL;
  t = table_hashtable_0_0(t);
  x_192 = t;
  {
    ATerm i_96 = t;
    int j_96 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_87 = NULL;
        t = x_192;
        if(match_cons(t, sym_Hashtable_1))
          {
            u_87 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_17(c_67, u_87, t);
        LocalPopChoice(j_96);
      }
    else
      {
        t = i_96;
        {
          ATerm h_88 = NULL;
          t = c_67;
          t = table_create_0_0(t);
          t = x_192;
          if(match_cons(t, sym_Hashtable_1))
            {
              h_88 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_17(c_67, h_88, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm n_70, ATerm o_70, ATerm t)
{
  ATerm a_193 = NULL;
  t = SSL_hashtable_create(n_70, o_70);
  a_193 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_193);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_193 = NULL,c_193 = NULL,d_193 = NULL,f_193 = NULL,g_193 = NULL;
  b_193 = t;
  t = term_k_96;
  f_193 = t;
  t = term_l_96;
  g_193 = t;
  t = b_193;
  t = new_hashtable_0_2(f_193, g_193, t);
  c_193 = t;
  t = b_193;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      d_193 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_17(b_193, c_193, d_193, t);
  t = b_193;
  return(t);
}
static ATerm z_16 (ATerm k_70, ATerm l_70, ATerm t)
{
  ATerm h_193 = NULL;
  t = SSL_hashtable_remove(l_70, k_70);
  h_193 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_193);
  return(t);
}
static ATerm a_17 (ATerm p_70, ATerm t)
{
  ATerm i_193 = NULL;
  t = SSL_hashtable_destroy(p_70);
  i_193 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_193);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm j_193 = NULL;
  t = SSL_table_hashtable();
  j_193 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_193);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm k_193 = NULL,l_193 = NULL,m_193 = NULL,n_193 = NULL;
  k_193 = t;
  t = table_hashtable_0_0(t);
  l_193 = t;
  t = lookup_table_0_1(k_193, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_193 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_17(n_193, t);
  t = l_193;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_193 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_16(k_193, m_193, t);
  t = k_193;
  return(t);
}
ATerm fetch_1_0 (ATerm k_150 (ATerm), ATerm t)
{
  static ATerm k_194 (ATerm t);
  static ATerm k_194 (ATerm t)
  {
    ATerm h_194 = NULL,i_194 = NULL,j_194 = NULL;
    h_194 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_194 = ATgetFirst((ATermList) t);
        j_194 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_96 = t;
      int q_96 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_88 = NULL,v_88 = NULL,u_38 = NULL;
          t = SSLgetAnnotations(h_194);
          s_88 = t;
          t = i_194;
          t = k_150(t);
          v_88 = t;
          t = (ATerm) ATinsert(CheckATermList(j_194), v_88);
          u_38 = t;
          t = SSLsetAnnotations(u_38, s_88);
          LocalPopChoice(q_96);
        }
      else
        {
          t = p_96;
          {
            ATerm r_89 = NULL,u_89 = NULL,v_38 = NULL;
            t = SSLgetAnnotations(h_194);
            r_89 = t;
            t = j_194;
            t = k_194(t);
            u_89 = t;
            t = (ATerm) ATinsert(CheckATermList(u_89), i_194);
            v_38 = t;
            t = SSLsetAnnotations(v_38, r_89);
          }
        }
    }
    return(t);
  }
  t = k_194(t);
  return(t);
}
static ATerm h_17 (ATerm i_70, ATerm j_70, ATerm t)
{
  t = SSL_hashtable_get(j_70, i_70);
  return(t);
}
static ATerm c_17 (ATerm j_67, ATerm k_67, ATerm t)
{
  ATerm n_194 = NULL;
  t = lookup_table_0_1(j_67, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      n_194 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_17(k_67, n_194, t);
  return(t);
}
static ATerm z_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_29 (ATerm t)
{
  ATerm p_194 = NULL,q_194 = NULL;
  t = term_r_96;
  p_194 = t;
  t = term_a_50;
  q_194 = t;
  t = term_t_96;
  t = f_17(p_194, q_194, t);
  return(t);
}
static ATerm b_29 (ATerm t)
{
  t = term_u_96;
  return(t);
}
static ATerm c_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_29 (ATerm t)
{
  ATerm r_194 = NULL,s_194 = NULL,t_194 = NULL,u_194 = NULL;
  t = term_r_96;
  t_194 = t;
  t = term_a_50;
  u_194 = t;
  t = term_t_96;
  t = f_17(t_194, u_194, t);
  t = term_v_96;
  r_194 = t;
  t = term_a_50;
  s_194 = t;
  t = term_w_96;
  t = f_17(r_194, s_194, t);
  t = term_x_96;
  return(t);
}
static ATerm g_29 (ATerm t)
{
  t = term_z_96;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_97 = t;
  int b_97 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_28, a_29, b_29, t);
      LocalPopChoice(b_97);
    }
  else
    {
      t = a_97;
      t = Option_3_0(c_29, d_29, g_29, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_115 (ATerm), ATerm k_115 (ATerm), ATerm t)
{
  ATerm v_194 = NULL,w_194 = NULL,x_194 = NULL,y_194 = NULL,z_194 = NULL,a_195 = NULL,y_38 = NULL;
  a_195 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_194 = ATgetFirst((ATermList) t);
      x_194 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_195);
  v_194 = t;
  t = w_194;
  t = j_115(t);
  y_194 = t;
  t = x_194;
  t = k_115(t);
  z_194 = t;
  t = (ATerm) ATinsert(CheckATermList(z_194), y_194);
  y_38 = t;
  t = SSLsetAnnotations(y_38, v_194);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm h_172 (ATerm), ATerm t)
{
  ATerm f_195 = NULL,g_195 = NULL,h_195 = NULL,i_195 = NULL,k_195 = NULL,l_195 = NULL,a_39 = NULL;
  f_195 = t;
  {
    ATerm c_97 = t;
    int d_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_97;
        t = h_172(t);
        LocalPopChoice(d_97);
      }
    else
      {
        t = c_97;
      }
  }
  t = f_195;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_195 = ATgetFirst((ATermList) t);
      i_195 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_195);
  g_195 = t;
  t = term_x_93;
  l_195 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_93, h_195);
  t = f_17(l_195, h_195, t);
  t = i_195;
  {
    static ATerm v_195 (ATerm t);
    static ATerm v_195 (ATerm t)
    {
      ATerm f_97 = t;
      int g_97 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_97 = t;
          int i_97 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_195 = NULL;
              o_195 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_195;
              LocalPopChoice(i_97);
            }
          else
            {
              t = h_97;
              t = h_172(t);
              t = Cons_2_0(_id, v_195, t);
            }
          LocalPopChoice(g_97);
        }
      else
        {
          t = f_97;
          {
            ATerm r_195 = NULL,s_195 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                r_195 = ATgetFirst((ATermList) t);
                s_195 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(s_195), (ATerm) ATmakeAppl(sym_Undefined_1, r_195));
          }
        }
      return(t);
    }
    t = v_195(t);
  }
  k_195 = t;
  t = (ATerm) ATinsert(CheckATermList(k_195), (ATerm) ATmakeAppl(sym_Program_1, h_195));
  a_39 = t;
  t = SSLsetAnnotations(a_39, g_195);
  return(t);
}
static ATerm l_29 (ATerm t)
{
  ATerm i_196 = NULL;
  i_196 = t;
  if(match_string(t, "--help"))
    {
      t = i_196;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_196;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_196;
        }
    }
  return(t);
}
static ATerm m_29 (ATerm t)
{
  ATerm j_196 = NULL,k_196 = NULL;
  t = term_j_97;
  j_196 = t;
  t = term_a_50;
  k_196 = t;
  t = term_k_97;
  t = f_17(j_196, k_196, t);
  t = term_l_97;
  return(t);
}
static ATerm n_29 (ATerm t)
{
  t = term_m_97;
  return(t);
}
static ATerm o_29 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm e_172 (ATerm), ATerm f_172 (ATerm), ATerm g_172 (ATerm), ATerm t)
{
  ATerm a_196 = NULL,b_196 = NULL,c_196 = NULL,d_196 = NULL,e_196 = NULL,f_196 = NULL,g_196 = NULL,h_196 = NULL;
  c_196 = t;
  t = term_m_94;
  d_196 = t;
  t = term_n_97;
  t = lookup_table_0_1(d_196, t);
  h_196 = t;
  t = term_n_94;
  e_196 = t;
  t = (ATerm) ATempty;
  f_196 = t;
  t = h_196;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_196 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_17(e_196, f_196, g_196, t);
  t = c_196;
  {
    static ATerm i_29 (ATerm t);
    static ATerm i_29 (ATerm t)
    {
      ATerm o_97 = t;
      int p_97 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_172(t);
          LocalPopChoice(p_97);
        }
      else
        {
          t = o_97;
          {
            ATerm q_97 = t;
            int r_97 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_29, m_29, n_29, t);
                LocalPopChoice(r_97);
              }
            else
              {
                t = q_97;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_29, t);
  }
  {
    ATerm s_97 = t;
    int t_97 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_196 = NULL;
        v_196 = t;
        {
          ATerm c_98 = t;
          int d_98 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_90 = NULL;
              t = v_196;
              {
                ATerm e_98 = t;
                int f_98 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_90 = NULL,o_90 = NULL;
                    t = term_m_92;
                    n_90 = t;
                    t = term_j_97;
                    o_90 = t;
                    t = term_i_98;
                    t = c_17(n_90, o_90, t);
                    LocalPopChoice(f_98);
                  }
                else
                  {
                    t = e_98;
                    t = fetch_1_0(o_29, t);
                  }
              }
              t = v_196;
              t = f_172(t);
              t = term_f_55;
              j_90 = t;
              t = SSL_exit(j_90);
              LocalPopChoice(d_98);
            }
          else
            {
              t = c_98;
              {
                ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL;
                t = term_m_92;
                t_90 = t;
                t = term_r_96;
                u_90 = t;
                t = term_j_98;
                t = c_17(t_90, u_90, t);
                t = v_196;
                t = g_172(t);
                t = term_f_55;
                s_90 = t;
                t = SSL_exit(s_90);
              }
            }
        }
        LocalPopChoice(t_97);
      }
    else
      {
        t = s_97;
        {
          ATerm k_98 = t;
          int l_98 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_196 = NULL,x_196 = NULL,y_196 = NULL;
              static ATerm q_29 (ATerm t);
              static ATerm q_29 (ATerm t)
              {
                ATerm z_196 = NULL,a_197 = NULL,b_197 = NULL,c_39 = NULL;
                b_197 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_197 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_197);
                z_196 = t;
                t = a_197;
                if(((a_196 != NULL) && (a_196 != t)))
                  _fail(t);
                else
                  a_196 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_197);
                c_39 = t;
                t = SSLsetAnnotations(c_39, z_196);
                return(t);
              }
              t = fetch_1_0(q_29, t);
              t = term_k_42;
              x_196 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_196)), term_m_98);
              y_196 = t;
              t = SSL_printnl(x_196, y_196);
              t = (ATerm) ATmakeAppl(sym__2, term_k_42, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_196)), term_m_98));
              t = f_172(t);
              t = term_m_42;
              w_196 = t;
              t = SSL_exit(w_196);
              LocalPopChoice(l_98);
            }
          else
            {
              t = k_98;
            }
        }
      }
  }
  b_196 = t;
  t = term_m_94;
  t = table_destroy_0_0(t);
  t = b_196;
  return(t);
}
ATerm option_wrap_5_0 (ATerm h_170 (ATerm), ATerm i_170 (ATerm), ATerm j_170 (ATerm), ATerm k_170 (ATerm), ATerm l_170 (ATerm), ATerm t)
{
  ATerm g_197 = NULL,h_197 = NULL,i_197 = NULL,j_197 = NULL,k_197 = NULL;
  t = parse_options_3_0(h_170, i_170, j_170, t);
  g_197 = t;
  t = term_n_98;
  t = table_create_0_0(t);
  t = term_n_98;
  h_197 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_n_98, term_o_98, g_197);
  t = lookup_table_0_1(h_197, t);
  k_197 = t;
  t = term_o_98;
  i_197 = t;
  t = k_197;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_197 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_17(i_197, g_197, j_197, t);
  t = g_197;
  t = k_170(t);
  {
    ATerm p_98 = t;
    int q_98 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_170(t);
        t = report_success_0_0(t);
        LocalPopChoice(q_98);
      }
    else
      {
        t = p_98;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm r_29 (ATerm t)
{
  ATerm r_98 = t;
  int x_98 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(x_98);
    }
  else
    {
      t = r_98;
      {
        ATerm y_98 = t;
        int z_98 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(z_98);
          }
        else
          {
            t = y_98;
            {
              ATerm a_99 = t;
              int b_99 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(b_99);
                }
              else
                {
                  t = a_99;
                  {
                    ATerm c_99 = t;
                    int d_99 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(u_29, w_29, y_29, t);
                        LocalPopChoice(d_99);
                      }
                    else
                      {
                        t = c_99;
                        {
                          ATerm e_99 = t;
                          int f_99 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(f_99);
                            }
                          else
                            {
                              t = e_99;
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
static ATerm t_29 (ATerm t)
{
  t = input_1_0(z_29, t);
  return(t);
}
static ATerm u_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_29 (ATerm t)
{
  ATerm m_197 = NULL,n_197 = NULL;
  t = term_z_92;
  m_197 = t;
  t = term_a_50;
  n_197 = t;
  t = term_g_99;
  t = f_17(m_197, n_197, t);
  t = term_h_99;
  return(t);
}
static ATerm y_29 (ATerm t)
{
  t = term_i_99;
  return(t);
}
static ATerm z_29 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(r_29, default_system_usage_0_0, default_system_about_0_0, _id, t_29, t);
  return(t);
}

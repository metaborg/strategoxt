#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Rules_1;
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Overlays_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_ConstType_1;
Symbol sym_OpDecl_2;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
Symbol sym_Constructors_1;
Symbol sym_Var_1;
Symbol sym_ListVar_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Char_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_Tuple_1;
Symbol sym_List_1;
Symbol sym_ListTail_2;
Symbol sym_Con1_2;
Symbol sym_Con_3;
Symbol sym_Con3_3;
Symbol sym_Con4_4;
Symbol sym_StratRuleNoCond_2;
Symbol sym_StratRule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_SRDefNoArgs_2;
Symbol sym_SRDef_3;
Symbol sym_SRDefT_4;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_ExtendDynamicRules_1;
Symbol sym_ExtendOverrideDynamicRules_1;
Symbol sym_RDecT_3;
Symbol sym_GenDynRules_1;
Symbol sym_AddScopeLabel_2;
Symbol sym_UndefineDynRule_2;
Symbol sym_SetDynRule_2;
Symbol sym_AddDynRule_2;
Symbol sym_SetDynRuleMatch_2;
Symbol sym_LabeledDynRuleId_2;
Symbol sym_AddLabelDynRuleId_2;
Symbol sym_DynRuleId_1;
Symbol sym_LabeledDynRuleScopeId_2;
Symbol sym_DynRuleScopeId_1;
Symbol sym_DynRuleScope_2;
Symbol sym_CallNoArgs_1;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_Choice_2;
Symbol sym_RChoice_2;
Symbol sym_AM_2;
Symbol sym_ParenStrat_1;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_ScopeDefault_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_Rec_2;
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_CharCong_1;
Symbol sym_AnnoCong_2;
Symbol sym_StrategyCurly_1;
Symbol sym_EmptyTupleCong_0;
Symbol sym_TupleCong_2;
Symbol sym_ModCongNoArgs_1;
Symbol sym_ModCong_2;
Symbol sym_ListCongNoTail_1;
Symbol sym_ListCong_2;
Symbol sym_ExplodeCong_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
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
Symbol sym_Anno_2;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_DynamicRules_1;
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
Symbol sym_DynamicRules_1;
Symbol sym_DynRuleScope_2;
static void init_module_constructors (void)
{
  sym_Rules_1 = ATmakeSymbol("Rules", 1, ATfalse);
  ATprotectSymbol(sym_Rules_1);
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Overlays_1 = ATmakeSymbol("Overlays", 1, ATfalse);
  ATprotectSymbol(sym_Overlays_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Constructors_1 = ATmakeSymbol("Constructors", 1, ATfalse);
  ATprotectSymbol(sym_Constructors_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_ListVar_1 = ATmakeSymbol("ListVar", 1, ATfalse);
  ATprotectSymbol(sym_ListVar_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_Con1_2 = ATmakeSymbol("Con1", 2, ATfalse);
  ATprotectSymbol(sym_Con1_2);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Con3_3 = ATmakeSymbol("Con3", 3, ATfalse);
  ATprotectSymbol(sym_Con3_3);
  sym_Con4_4 = ATmakeSymbol("Con4", 4, ATfalse);
  ATprotectSymbol(sym_Con4_4);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_ExtendDynamicRules_1 = ATmakeSymbol("ExtendDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendDynamicRules_1);
  sym_ExtendOverrideDynamicRules_1 = ATmakeSymbol("ExtendOverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_ExtendOverrideDynamicRules_1);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
  sym_GenDynRules_1 = ATmakeSymbol("GenDynRules", 1, ATfalse);
  ATprotectSymbol(sym_GenDynRules_1);
  sym_AddScopeLabel_2 = ATmakeSymbol("AddScopeLabel", 2, ATfalse);
  ATprotectSymbol(sym_AddScopeLabel_2);
  sym_UndefineDynRule_2 = ATmakeSymbol("UndefineDynRule", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_2);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_SetDynRuleMatch_2 = ATmakeSymbol("SetDynRuleMatch", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRuleMatch_2);
  sym_LabeledDynRuleId_2 = ATmakeSymbol("LabeledDynRuleId", 2, ATfalse);
  ATprotectSymbol(sym_LabeledDynRuleId_2);
  sym_AddLabelDynRuleId_2 = ATmakeSymbol("AddLabelDynRuleId", 2, ATfalse);
  ATprotectSymbol(sym_AddLabelDynRuleId_2);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_LabeledDynRuleScopeId_2 = ATmakeSymbol("LabeledDynRuleScopeId", 2, ATfalse);
  ATprotectSymbol(sym_LabeledDynRuleScopeId_2);
  sym_DynRuleScopeId_1 = ATmakeSymbol("DynRuleScopeId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleScopeId_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_ScopeDefault_1 = ATmakeSymbol("ScopeDefault", 1, ATfalse);
  ATprotectSymbol(sym_ScopeDefault_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_EmptyTupleCong_0 = ATmakeSymbol("EmptyTupleCong", 0, ATfalse);
  ATprotectSymbol(sym_EmptyTupleCong_0);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_i_90;
ATerm term_h_90;
ATerm term_g_90;
ATerm term_r_89;
ATerm term_q_89;
ATerm term_p_89;
ATerm term_m_89;
ATerm term_b_89;
ATerm term_a_89;
ATerm term_z_88;
ATerm term_y_88;
ATerm term_s_88;
ATerm term_n_88;
ATerm term_m_88;
ATerm term_k_88;
ATerm term_j_88;
ATerm term_i_88;
ATerm term_h_88;
ATerm term_g_88;
ATerm term_z_87;
ATerm term_y_87;
ATerm term_t_87;
ATerm term_s_87;
ATerm term_r_87;
ATerm term_n_87;
ATerm term_m_87;
ATerm term_j_87;
ATerm term_i_87;
ATerm term_h_87;
ATerm term_x_86;
ATerm term_w_86;
ATerm term_v_86;
ATerm term_u_86;
ATerm term_n_86;
ATerm term_l_86;
ATerm term_g_86;
ATerm term_f_86;
ATerm term_y_85;
ATerm term_w_85;
ATerm term_v_85;
ATerm term_u_85;
ATerm term_t_85;
ATerm term_s_85;
ATerm term_r_85;
ATerm term_p_85;
ATerm term_m_85;
ATerm term_l_85;
ATerm term_k_85;
ATerm term_j_85;
ATerm term_i_85;
ATerm term_h_85;
ATerm term_g_85;
ATerm term_f_85;
ATerm term_e_85;
ATerm term_b_85;
ATerm term_a_85;
ATerm term_k_84;
ATerm term_j_84;
ATerm term_g_84;
ATerm term_f_84;
ATerm term_e_84;
ATerm term_z_83;
ATerm term_y_83;
ATerm term_x_83;
ATerm term_w_83;
ATerm term_h_82;
ATerm term_g_82;
ATerm term_e_82;
ATerm term_n_80;
ATerm term_m_80;
ATerm term_l_80;
ATerm term_k_80;
ATerm term_j_80;
ATerm term_c_80;
ATerm term_n_73;
ATerm term_m_73;
ATerm term_l_73;
ATerm term_b_73;
ATerm term_z_71;
ATerm term_j_71;
ATerm term_d_71;
ATerm term_v_64;
ATerm term_n_64;
ATerm term_i_63;
ATerm term_h_63;
ATerm term_l_57;
ATerm term_i_57;
ATerm term_e_57;
ATerm term_b_57;
ATerm term_o_56;
ATerm term_k_56;
ATerm term_c_55;
ATerm term_b_55;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_h_52;
ATerm term_d_52;
ATerm term_w_51;
ATerm term_j_51;
ATerm term_t_48;
ATerm term_i_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_a_48;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_t_47;
ATerm term_p_45;
ATerm term_o_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_h_45;
ATerm term_b_45;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_r_44;
ATerm term_p_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_z_43;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_t_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_j_43;
ATerm term_g_43;
ATerm term_f_43;
ATerm term_y_37;
ATerm term_s_37;
ATerm term_z_36;
ATerm term_u_36;
ATerm term_r_36;
ATerm term_o_36;
ATerm term_m_36;
ATerm term_k_36;
ATerm term_a_36;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_f_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_a_35;
ATerm term_w_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_a_34;
ATerm term_y_33;
ATerm term_w_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_l_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_j_32;
ATerm term_i_32;
ATerm term_w_29;
ATerm term_v_29;
ATerm term_u_29;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(sym_Op_2, term_i_32, (ATerm) ATempty);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_33);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_33);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_29);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Op_2, term_y_33, (ATerm) ATempty);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_34);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_33);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Call_2, term_r_34, (ATerm) ATempty);
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_35);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym_Call_2, term_w_35, (ATerm) ATempty);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_Call_2, term_w_33, (ATerm) ATempty);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_36);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_43);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym_RootApp_1, term_v_29);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_43);
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_o_43);
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_43);
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_43);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_44);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_44);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_44);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_44);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_45);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_45));
  term_p_45 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Counter", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(sym_Defined_2, term_x_47, term_y_47);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("DRRenameVar", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("DRVarNumber", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym__2, term_d_48, term_a_48);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("DRAuxRuleGenerated", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("DRCallersGenerated", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("once-", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_52);
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym_Var_1, term_m_52);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_52);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym_Build_1, term_p_33);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("res", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(sym_Var_1, term_r_52);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule-pointer", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_52);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("key", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym_Var_1, term_w_52);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_Var_1, term_y_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("split-fetch", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_53);
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(sym_Match_1, term_t_52);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("conc", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_53);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_f_53);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("closures'", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(sym_Var_1, term_h_53);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-put", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_53);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_53);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_53);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATempty);
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_54);
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_55);
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-label-scope", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_56);
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_57);
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_57);
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scope", 0, ATtrue));
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_63);
  ATprotect(&(term_n_64));
  term_n_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_v_64));
  term_v_64 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_d_71));
  term_d_71 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] Your condition has been removed from the original dynamic rule: ", 0, ATtrue));
  ATprotect(&(term_j_71));
  term_j_71 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] rule undefining doesn't allow a condition strategy anymore", 0, ATtrue));
  ATprotect(&(term_z_71));
  term_z_71 = (ATerm) ATmakeAppl(ATmakeSymbol("DROverrideLabelsNeeded", 0, ATtrue));
  ATprotect(&(term_b_73));
  term_b_73 = (ATerm) ATmakeAppl(sym__2, term_z_71, (ATerm) ATempty);
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(ATmakeSymbol("c_1", 0, ATtrue));
  ATprotect(&(term_m_73));
  term_m_73 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_73);
  ATprotect(&(term_n_73));
  term_n_73 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_m_73);
  ATprotect(&(term_c_80));
  term_c_80 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_j_80));
  term_j_80 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_80));
  term_k_80 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_l_80));
  term_l_80 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_80);
  ATprotect(&(term_m_80));
  term_m_80 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_n_80));
  term_n_80 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_80);
  ATprotect(&(term_e_82));
  term_e_82 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_g_82));
  term_g_82 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_h_82));
  term_h_82 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_w_83));
  term_w_83 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_83));
  term_x_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_y_83));
  term_y_83 = (ATerm) ATmakeAppl(sym__2, term_w_83, term_x_83);
  ATprotect(&(term_z_83));
  term_z_83 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_84));
  term_f_84 = (ATerm) ATmakeAppl(sym__2, term_w_83, term_e_84);
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(sym__2, term_w_83, term_j_84);
  ATprotect(&(term_a_85));
  term_a_85 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeAppl(sym__2, term_w_83, term_e_85);
  ATprotect(&(term_g_85));
  term_g_85 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_85));
  term_h_85 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_85));
  term_i_85 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_j_85));
  term_j_85 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_85));
  term_k_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_85));
  term_l_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_85));
  term_p_85 = (ATerm) ATmakeAppl(sym__2, term_m_85, term_y_47);
  ATprotect(&(term_r_85));
  term_r_85 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_47);
  ATprotect(&(term_s_85));
  term_s_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(sym__2, term_u_85, term_h_85);
  ATprotect(&(term_w_85));
  term_w_85 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_85));
  term_y_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_86));
  term_f_86 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_86));
  term_g_86 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_86));
  term_l_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_86));
  term_n_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_86));
  term_u_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_86));
  term_x_86 = (ATerm) ATmakeAppl(sym__2, term_w_83, term_w_86);
  ATprotect(&(term_h_87));
  term_h_87 = (ATerm) ATmakeAppl(sym__2, term_w_83, term_m_85);
  ATprotect(&(term_i_87));
  term_i_87 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_87));
  term_j_87 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_87));
  term_m_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_n_87));
  term_n_87 = (ATerm) ATmakeAppl(sym__2, term_w_83, term_m_87);
  ATprotect(&(term_r_87));
  term_r_87 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_s_87));
  term_s_87 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_87));
  term_t_87 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_87));
  term_y_87 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(sym__2, term_f_86, term_g_86);
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_88));
  term_h_88 = (ATerm) ATmakeAppl(sym__2, term_g_88, term_h_85);
  ATprotect(&(term_i_88));
  term_i_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_88));
  term_j_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_88));
  term_k_88 = (ATerm) ATmakeAppl(sym__2, term_j_88, term_h_85);
  ATprotect(&(term_m_88));
  term_m_88 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_88));
  term_n_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_88));
  term_s_88 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_88));
  term_y_88 = (ATerm) ATmakeAppl(sym__2, term_m_87, term_h_85);
  ATprotect(&(term_z_88));
  term_z_88 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_89));
  term_a_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_89));
  term_b_89 = (ATerm) ATmakeAppl(sym__3, term_f_86, term_g_86, (ATerm) ATempty);
  ATprotect(&(term_m_89));
  term_m_89 = (ATerm) ATmakeAppl(sym__2, term_w_83, term_g_88);
  ATprotect(&(term_p_89));
  term_p_89 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_89));
  term_q_89 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_89));
  term_r_89 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_90));
  term_g_90 = (ATerm) ATmakeAppl(sym__2, term_j_84, term_h_85);
  ATprotect(&(term_h_90));
  term_h_90 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_90));
  term_i_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm z_118 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm j_13 (ATerm u_152 (ATerm), ATerm j_86, ATerm h_86, ATerm i_86, ATerm m_86, ATerm k_86, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm u_152 (ATerm), ATerm t);
static ATerm d_19 (ATerm o_11, ATerm p_11, ATerm t);
static ATerm g_19 (ATerm d_12, ATerm e_12, ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm d_151 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm l_13 (ATerm a_77, ATerm b_77, ATerm c_77, ATerm t);
static ATerm c_31 (ATerm o_30, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm m_13 (ATerm n_72, ATerm o_72, ATerm p_72, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm n_13 (ATerm t_152 (ATerm), ATerm q_85, ATerm n_85, ATerm o_85, ATerm x_85, ATerm b_86, ATerm c_86, ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm v_152 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_13 (ATerm q_86, ATerm p_86, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm h_62 (ATerm v_61, ATerm t);
static ATerm i_62 (ATerm z_61, ATerm t);
static ATerm q_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm s_65 (ATerm s_64, ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm next_counter_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm NewNumberedVar_0_0 (ATerm t);
ATerm RenameVarTerm_2_0 (ATerm z_152 (ATerm), ATerm a_153 (ATerm), ATerm t);
static ATerm o_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm dr_rename_vars_0_0 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm m_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm b_153 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm DesugarDynRuleDef_0_0 (ATerm t);
ATerm split_dynamic_rule_0_0 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm c_153 (ATerm), ATerm t);
static ATerm u_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm f_12 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm k_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm c_14 (ATerm n_90, ATerm m_90, ATerm t);
ATerm repeat_2_0 (ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm v_126 (ATerm), ATerm t);
static ATerm v_14 (ATerm t);
ATerm collect_om_2_0 (ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm t);
ATerm partition_1_0 (ATerm x_133 (ATerm), ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm d_120 (ATerm), ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
ATerm dummify_0_0 (ATerm t);
ATerm DRDef_LHS_1_0 (ATerm f_153 (ATerm), ATerm t);
static ATerm c_137 (ATerm o_135, ATerm p_135, ATerm t_135, ATerm u_135, ATerm v_135, ATerm w_135, ATerm z_135, ATerm t);
static ATerm p_17 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm a_125 (ATerm), ATerm t);
static ATerm q_17 (ATerm t);
ATerm UpgradeUndefine_0_0 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm b_18 (ATerm t);
ATerm upgrade_old_dr_constructs_0_0 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm i_18 (ATerm t);
ATerm LiftDynamicRules_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm y_151 (ATerm), ATerm z_151 (ATerm), ATerm a_152 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm h_152 (ATerm), ATerm t);
static ATerm j_18 (ATerm t);
static ATerm k_18 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm c_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm i_19 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm o_19 (ATerm t);
static ATerm s_19 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm u_19 (ATerm t);
static ATerm v_19 (ATerm t);
static ATerm y_19 (ATerm t);
static ATerm a_20 (ATerm t);
static ATerm b_20 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm l_14 (ATerm w_129 (ATerm), ATerm g_31, ATerm f_31, ATerm t);
static ATerm m_14 (ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm k_31, ATerm j_31, ATerm t);
static ATerm n_14 (ATerm r_129 (ATerm), ATerm e_31, ATerm d_31, ATerm t);
ATerm genzip_4_0 (ATerm p_127 (ATerm), ATerm q_127 (ATerm), ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t);
static ATerm n_20 (ATerm t);
static ATerm o_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm s_14 (ATerm m_721, ATerm r_721, ATerm n_71, ATerm t);
ATerm while_not_2_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm t);
ATerm for_3_0 (ATerm t_118 (ATerm), ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm t);
static ATerm q_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm v_20 (ATerm t);
static ATerm g_159 (ATerm a_158, ATerm b_158, ATerm c_158, ATerm t);
static ATerm x_20 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm h_21 (ATerm t);
static ATerm i_21 (ATerm t);
static ATerm j_21 (ATerm t);
static ATerm m_21 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm f_22 (ATerm t);
ATerm free_vars_3_0 (ATerm l_149 (ATerm), ATerm m_149 (ATerm), ATerm n_149 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm a_119 (ATerm), ATerm t);
static ATerm w_14 (ATerm h_64, ATerm i_64, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm r_120 (ATerm), ATerm t);
static ATerm x_14 (ATerm w_138 (ATerm), ATerm i_45, ATerm g_45, ATerm t);
static ATerm i_22 (ATerm t);
static ATerm l_22 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm y_14 (ATerm b_64, ATerm c_64, ATerm t);
ATerm end_scope_1_0 (ATerm t_138 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm s_138 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm u_138 (ATerm), ATerm v_138 (ATerm), ATerm t);
static ATerm q_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm v_22 (ATerm t);
static ATerm w_22 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_133 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm c_126 (ATerm), ATerm t);
static ATerm r_165 (ATerm j_165, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm b_15 (ATerm o_22, ATerm k_22, ATerm t);
ATerm foldr_3_0 (ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm t);
static ATerm j_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm n_23 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm t_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm w_24 (ATerm t);
static ATerm x_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm b_25 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm c_15 (ATerm y_40, ATerm z_40, ATerm t);
static ATerm d_15 (ATerm c_25, ATerm d_25, ATerm t);
static ATerm f_15 (ATerm c_125 (ATerm), ATerm e_192, ATerm i_25, ATerm t);
static ATerm e_15 (ATerm y_24, ATerm z_24, ATerm t);
static ATerm h_25 (ATerm t);
static ATerm j_25 (ATerm t);
ATerm output_1_0 (ATerm f_145 (ATerm), ATerm t);
static ATerm b_171 (ATerm v_170, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_15 (ATerm e_25, ATerm t);
static ATerm h_15 (ATerm r_39, ATerm s_39, ATerm t);
static ATerm i_15 (ATerm a_41, ATerm b_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm m_172 (ATerm l_171, ATerm t);
static ATerm n_172 (ATerm p_171, ATerm q_171, ATerm r_171, ATerm t);
static ATerm o_172 (ATerm z_171, ATerm a_172, ATerm b_172, ATerm t);
static ATerm j_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm g_145 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm k_25 (ATerm t);
static ATerm l_25 (ATerm t);
static ATerm m_25 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm f_26 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm s_15 (ATerm b_59, ATerm c_59, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm h_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm l_26 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm p_26 (ATerm t);
static ATerm y_26 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm q_15 (ATerm w_63, ATerm x_63, ATerm v_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm z_26 (ATerm t);
static ATerm a_27 (ATerm t);
static ATerm b_27 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_15 (ATerm u_43, ATerm v_43, ATerm t);
ATerm foldr_2_0 (ATerm k_132 (ATerm), ATerm l_132 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_27 (ATerm t);
static ATerm d_27 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm g_142 (ATerm), ATerm t);
static ATerm f_27 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_27 (ATerm t);
ATerm need_help_1_0 (ATerm w_144 (ATerm), ATerm t);
static ATerm t_15 (ATerm o_68, ATerm p_68, ATerm q_68, ATerm t);
ATerm lookup_table_0_1 (ATerm i_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_68, ATerm x_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm m_15 (ATerm t_68, ATerm u_68, ATerm t);
static ATerm n_15 (ATerm y_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_125 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
static ATerm z_27 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_125 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm u_15 (ATerm r_68, ATerm s_68, ATerm t);
static ATerm p_15 (ATerm p_65, ATerm q_65, ATerm t);
static ATerm a_28 (ATerm t);
static ATerm b_28 (ATerm t);
static ATerm d_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
static ATerm h_28 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm z_146 (ATerm), ATerm t);
static ATerm l_28 (ATerm t);
static ATerm m_28 (ATerm t);
static ATerm q_28 (ATerm t);
static ATerm x_28 (ATerm t);
ATerm parse_options_1_0 (ATerm y_146 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm y_144 (ATerm), ATerm z_144 (ATerm), ATerm a_145 (ATerm), ATerm b_145 (ATerm), ATerm t);
static ATerm z_28 (ATerm t);
static ATerm a_29 (ATerm t);
static ATerm b_29 (ATerm t);
static ATerm f_29 (ATerm t);
static ATerm h_29 (ATerm t);
static ATerm s_29 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm v_0 = NULL,y_0 = NULL,b_1 = NULL,e_1 = NULL,f_1 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      e_1 = ATgetArgument(t, 0);
      f_1 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, e_1, f_1);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          e_1 = ATgetArgument(t, 0);
          t = e_1;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_0 = ATgetFirst((ATermList) t);
              y_0 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, v_0, (ATerm) ATmakeAppl(sym_LChoices_1, y_0));
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
              e_1 = ATgetArgument(t, 0);
              t = e_1;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_0 = ATgetFirst((ATermList) t);
                  y_0 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, v_0, (ATerm) ATmakeAppl(sym_Choices_1, y_0));
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
                  e_1 = ATgetArgument(t, 0);
                  t = e_1;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_0 = ATgetFirst((ATermList) t);
                      y_0 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, v_0, (ATerm) ATmakeAppl(sym_Seqs_1, y_0));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_v_29;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      e_1 = ATgetArgument(t, 0);
                      f_1 = ATgetArgument(t, 1);
                      b_1 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, f_1, (ATerm) ATmakeAppl(sym_Op_2, term_w_29, (ATerm) ATinsert(ATinsert(ATempty, b_1), e_1)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          e_1 = ATgetArgument(t, 0);
                          f_1 = ATgetArgument(t, 1);
                          b_1 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_1)), e_1), (ATerm) ATmakeAppl(sym_Build_1, f_1)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              e_1 = ATgetArgument(t, 0);
                              f_1 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_1, (ATerm) ATmakeAppl(sym_Match_1, f_1));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  e_1 = ATgetArgument(t, 0);
                                  f_1 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_1), f_1);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      e_1 = ATgetArgument(t, 0);
                                      f_1 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_1), e_1);
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
ATerm topdown_1_0 (ATerm z_118 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(z_118, t);
    return(t);
  }
  t = z_118(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm z_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_5);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm x_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_30);
    }
  else
    {
      t = x_29;
      {
        ATerm c_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_30);
          }
        else
          {
            t = c_30;
            {
              ATerm i_30 = t;
              int k_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_6 = NULL,h_6 = NULL,k_6 = NULL,l_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_6 = ATgetArgument(t, 0);
                      h_6 = ATgetArgument(t, 1);
                      k_6 = ATgetArgument(t, 2);
                      l_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_6;
                  t = map_1_0(x_0, t);
                  LocalPopChoice(k_30);
                }
              else
                {
                  t = i_30;
                  {
                    ATerm l_30 = t;
                    int m_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_30);
                      }
                    else
                      {
                        t = l_30;
                        t = dynrule_targs_1_0(a_1, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm w_6 = NULL;
  ATerm n_30 = t;
  int p_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_6 = ATgetArgument(t, 0);
          {
            ATerm u_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_30);
      t = w_6;
    }
  else
    {
      t = n_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_6;
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm d_7 = NULL;
  ATerm v_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_7 = ATgetArgument(t, 0);
          {
            ATerm y_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_30);
      t = d_7;
    }
  else
    {
      t = v_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_7;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm i_7 = NULL;
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_7);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm j_7 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_7);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm b_31 = t;
  int l_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_31);
    }
  else
    {
      t = b_31;
      {
        ATerm m_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_31);
          }
        else
          {
            t = m_31;
            {
              ATerm o_31 = t;
              int p_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,p_7 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_7 = ATgetArgument(t, 0);
                      m_7 = ATgetArgument(t, 1);
                      n_7 = ATgetArgument(t, 2);
                      p_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_7;
                  t = map_1_0(j_1, t);
                  LocalPopChoice(p_31);
                }
              else
                {
                  t = o_31;
                  {
                    ATerm q_31 = t;
                    int r_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(r_31);
                      }
                    else
                      {
                        t = q_31;
                        t = dynrule_targs_1_0(k_1, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm f_8 = NULL;
  ATerm w_31 = t;
  int x_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_8 = ATgetArgument(t, 0);
          {
            ATerm y_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_31);
      t = f_8;
    }
  else
    {
      t = w_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_8;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = map_1_0(l_1, t);
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm k_8 = NULL;
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_8 = ATgetArgument(t, 0);
          {
            ATerm f_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_32);
      t = k_8;
    }
  else
    {
      t = z_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_8;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm n_8 = NULL;
  n_8 = t;
  {
    ATerm g_32 = t;
    int h_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_8 = NULL,p_0 = NULL,s_0 = NULL,k_0 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            x_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_8);
        p_0 = t;
        t = x_8;
        t = ContextVar_0_0(t);
        s_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, s_0);
        k_0 = t;
        t = SSLsetAnnotations(k_0, p_0);
        LocalPopChoice(h_32);
      }
    else
      {
        t = g_32;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, n_8);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  static ATerm o_9 (ATerm m_4, ATerm n_4, ATerm p_4, ATerm q_4, ATerm s_4, ATerm u_4, ATerm w_4, ATerm t)
  {
    ATerm d_5 = NULL,f_5 = NULL,g_5 = NULL,l_5 = NULL,m_5 = NULL,o_5 = NULL,p_5 = NULL,t_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, s_4, term_j_32);
    {
      ATerm k_32 = t;
      if((PushChoice() == 0))
        {
          ATerm v_5 = NULL;
          if(match_cons(t, sym__2))
            {
              v_5 = ATgetArgument(t, 0);
              if((v_5 != ATgetArgument(t, 1)))
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
          t = k_32;
        }
    }
    t = new_0_0(t);
    d_5 = t;
    t = q_4;
    t = dummify_0_0(t);
    g_5 = t;
    {
      ATerm u_32 = t;
      int y_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_5;
          if((q_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, d_5);
          LocalPopChoice(y_32);
        }
      else
        {
          t = u_32;
          t = g_5;
        }
    }
    f_5 = t;
    t = g_5;
    t = free_vars_3_0(r_0, u_0, tboundin_3_0, t);
    t = map_1_0(g_1, t);
    m_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_4, u_4);
    t = free_vars_3_0(h_1, i_1, tboundin_3_0, t);
    t = filter_1_0(m_1, t);
    l_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_5, m_5);
    t = diff_0_0(t);
    o_5 = t;
    t = new_0_0(t);
    p_5 = t;
    t = m_4;
    t = o_0(t);
    t_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, t_5, (ATerm) ATmakeAppl(sym_Op_2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_a_33, (ATerm) ATinsert(CheckATermList(o_5), (ATerm) ATmakeAppl(sym_Str_1, p_5)))), g_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, m_4, n_4, p_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, d_5), q_4), s_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_4)))), f_5), (ATerm) ATmakeAppl(sym_Op_2, term_a_33, (ATerm) ATinsert(CheckATermList(o_5), (ATerm) ATmakeAppl(sym_Str_1, p_5))))), u_4))));
    return(t);
  }
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,e_9 = NULL,f_9 = NULL,i_9 = NULL,j_9 = NULL,l_9 = NULL;
  a_9 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      b_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
      e_9 = ATgetArgument(t, 2);
      f_9 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = f_9;
  if(match_cons(t, sym_Rule_3))
    {
      i_9 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
      l_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_9;
  if(match_cons(t, sym_Op_2))
    {
      y_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
      t = z_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = y_8;
          if(match_string(t, "Undefined"))
            {
              ATerm e_33 = t;
              int f_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
                  t = a_9;
                  t = new_0_0(t);
                  k_2 = t;
                  t = i_9;
                  t = dummify_0_0(t);
                  i_2 = t;
                  {
                    ATerm g_33 = t;
                    int h_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_2;
                        if((i_9 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, k_2);
                        LocalPopChoice(h_33);
                      }
                    else
                      {
                        t = g_33;
                        t = i_2;
                      }
                  }
                  l_2 = t;
                  t = b_9;
                  t = o_0(t);
                  m_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, m_2, (ATerm) ATmakeAppl(sym_Op_2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, term_j_32), i_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, b_9, c_9, e_9, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_2), i_9), term_j_32, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, b_9)))), l_2), term_j_32)), (ATerm) ATmakeAppl(sym_Seq_2, l_9, term_u_29)))));
                  LocalPopChoice(f_33);
                }
              else
                {
                  t = e_33;
                  t = o_9(b_9, c_9, e_9, i_9, j_9, l_9, a_9, t);
                }
            }
          else
            {
              t = o_9(b_9, c_9, e_9, i_9, j_9, l_9, a_9, t);
            }
        }
      else
        {
          t = y_8;
          t = o_9(b_9, c_9, e_9, i_9, j_9, l_9, a_9, t);
        }
    }
  else
    {
      t = o_9(b_9, c_9, e_9, i_9, j_9, l_9, a_9, t);
    }
  return(t);
}
static ATerm j_13 (ATerm u_152 (ATerm), ATerm j_86, ATerm h_86, ATerm i_86, ATerm m_86, ATerm k_86, ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
  t = new_0_0(t);
  s_9 = t;
  t = m_86;
  t = dummify_0_0(t);
  r_9 = t;
  {
    ATerm i_33 = t;
    int j_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_9;
        if((m_86 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, s_9);
        LocalPopChoice(j_33);
      }
    else
      {
        t = i_33;
        t = r_9;
      }
  }
  t_9 = t;
  t = j_86;
  t = u_152(t);
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, u_9, r_9)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, j_86, h_86, i_86, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_9), m_86), term_j_32, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, j_86)))), t_9), term_p_33)), (ATerm) ATmakeAppl(sym_Seq_2, k_86, term_u_29))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm u_152 (ATerm), ATerm t)
{
  ATerm y_9 = NULL,a_10 = NULL,g_10 = NULL,j_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      y_9 = ATgetArgument(t, 0);
      a_10 = ATgetArgument(t, 1);
      g_10 = ATgetArgument(t, 2);
      {
        ATerm q_33 = ATgetArgument(t, 3);
        if(match_cons(q_33, sym_Rule_3))
          {
            j_10 = ATgetArgument(q_33, 0);
            {
              ATerm r_33 = ATgetArgument(q_33, 1);
              if(match_cons(r_33, sym_Op_2))
                {
                  ATerm s_33 = ATgetArgument(r_33, 0);
                  if((ATgetSymbol((ATermAppl) s_33) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm t_33 = ATgetArgument(r_33, 1);
                    if(((ATgetType(t_33) != AT_LIST) || !(ATisEmpty(t_33))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            k_10 = ATgetArgument(q_33, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_13(u_152, y_9, a_10, g_10, j_10, k_10, t);
  return(t);
}
static ATerm d_19 (ATerm o_11, ATerm p_11, ATerm t)
{
  t = o_11;
  {
    ATerm u_33 = t;
    if((PushChoice() == 0))
      {
        ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,m_3 = NULL;
        c_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_12 = ATgetFirst((ATermList) t);
            b_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_12);
        z_11 = t;
        t = b_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(b_12), a_12);
        m_3 = t;
        t = SSLsetAnnotations(m_3, z_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_33;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_29, o_11);
  return(t);
}
static ATerm g_19 (ATerm d_12, ATerm e_12, ATerm t)
{
  t = d_12;
  {
    ATerm v_33 = t;
    if((PushChoice() == 0))
      {
        ATerm i_12 = NULL,j_12 = NULL,l_12 = NULL,m_12 = NULL,o_3 = NULL;
        m_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_12 = ATgetFirst((ATermList) t);
            l_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_12);
        i_12 = t;
        t = l_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(l_12), j_12);
        o_3 = t;
        t = SSLsetAnnotations(o_3, i_12);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_33;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_33, d_12);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_a_34;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,v_2 = NULL;
  f_14 = t;
  t = SSL_explode_term(f_14);
  if(match_cons(t, sym__2))
    {
      ATerm b_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_34 = ATgetArgument(t, 1);
        if(((ATgetType(d_34) == AT_LIST) && !(ATisEmpty(d_34))))
          {
            g_14 = ATgetFirst((ATermList) d_34);
            {
              ATerm e_34 = (ATerm) ATgetNext((ATermList) d_34);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(f_14);
  if(match_cons(t, sym__2))
    {
      ATerm f_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_34 = ATgetArgument(t, 1);
        if(((ATgetType(i_34) == AT_LIST) && !(ATisEmpty(i_34))))
          {
            ATerm j_34 = ATgetFirst((ATermList) i_34);
            ATerm k_34 = (ATerm) ATgetNext((ATermList) i_34);
            if(((ATgetType(k_34) == AT_LIST) && !(ATisEmpty(k_34))))
              {
                v_2 = ATgetFirst((ATermList) k_34);
                {
                  ATerm l_34 = (ATerm) ATgetNext((ATermList) k_34);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_34, (ATerm) ATinsert(ATinsert(ATempty, v_2), g_14));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_34, (ATerm) ATinsert(ATinsert(ATempty, a_15), z_14));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_a_34;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm v_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      v_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_34, (ATerm) ATinsert(ATinsert(ATempty, z_15), v_15));
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm o_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      o_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_34, (ATerm) ATinsert(ATinsert(ATempty, u_16), o_16));
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_s_34;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL;
  if(match_cons(t, sym__2))
    {
      a_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_34, (ATerm) ATinsert(ATinsert(ATempty, b_17), a_17));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm n_12 = NULL,q_12 = NULL,r_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,h_13 = NULL;
  a_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      b_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
      {
        ATerm x_13 = NULL;
        t = h_13;
        t = foldr_2_0(n_1, o_1, t);
        x_13 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, b_13, x_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          b_13 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, b_13, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              b_13 = ATgetArgument(t, 0);
              {
                ATerm a_3 = NULL;
                t = b_13;
                {
                  ATerm u_34 = t;
                  int v_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_w_34;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_a_35;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_c_35;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_d_35;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_f_35;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(v_34);
                    }
                  else
                    {
                      t = u_34;
                      {
                        ATerm c_3 = NULL;
                        t = SSL_explode_string(b_13);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm h_35 = ATgetFirst((ATermList) t);
                            if(((ATgetType(h_35) != AT_INT) || (ATgetInt((ATermInt) h_35) != 39)))
                              _fail(t);
                            {
                              ATerm i_35 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(i_35) == AT_LIST) && !(ATisEmpty(i_35))))
                                {
                                  c_3 = ATgetFirst((ATermList) i_35);
                                  {
                                    ATerm j_35 = (ATerm) ATgetNext((ATermList) i_35);
                                    if(((ATgetType(j_35) == AT_LIST) && !(ATisEmpty(j_35))))
                                      {
                                        ATerm k_35 = ATgetFirst((ATermList) j_35);
                                        if(((ATgetType(k_35) != AT_INT) || (ATgetInt((ATermInt) k_35) != 39)))
                                          _fail(t);
                                        {
                                          ATerm l_35 = (ATerm) ATgetNext((ATermList) j_35);
                                          if(((ATgetType(l_35) != AT_LIST) || !(ATisEmpty(l_35))))
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
                        t = c_3;
                      }
                    }
                }
                a_3 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, a_3);
              }
            }
          else
            {
              ATerm n_35 = t;
              int o_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      b_13 = ATgetArgument(t, 0);
                      {
                        ATerm p_35 = ATgetArgument(t, 1);
                      }
                      z_12 = ATgetArgument(t, 2);
                      n_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(o_35);
                  t = (ATerm) ATmakeAppl(sym_Con_3, b_13, z_12, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_12), (ATerm) ATempty));
                }
              else
                {
                  t = n_35;
                  {
                    ATerm q_35 = t;
                    int r_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            b_13 = ATgetArgument(t, 0);
                            {
                              ATerm u_35 = ATgetArgument(t, 1);
                            }
                            z_12 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(r_35);
                        t = (ATerm) ATmakeAppl(sym_Con_3, b_13, z_12, term_a_36);
                      }
                    else
                      {
                        t = q_35;
                        if(match_cons(t, sym_Con1_2))
                          {
                            b_13 = ATgetArgument(t, 0);
                            h_13 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, b_13, h_13, term_a_36);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                b_13 = ATgetArgument(t, 0);
                                h_13 = ATgetArgument(t, 1);
                                {
                                  static ATerm p_1 (ATerm t)
                                  {
                                    t = h_13;
                                    return(t);
                                  }
                                  t = b_13;
                                  t = foldr_2_0(p_1, q_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    b_13 = ATgetArgument(t, 0);
                                    t = b_13;
                                    t = foldr_2_0(r_1, s_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        b_13 = ATgetArgument(t, 0);
                                        t = b_13;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            q_12 = ATgetFirst((ATermList) t);
                                            r_12 = (ATerm) ATgetNext((ATermList) t);
                                            t = r_12;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm b_36 = t;
                                                int e_36 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = d_19(b_13, a_13, t);
                                                    LocalPopChoice(e_36);
                                                  }
                                                else
                                                  {
                                                    t = b_36;
                                                    t = q_12;
                                                  }
                                              }
                                            else
                                              {
                                                t = d_19(b_13, a_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = d_19(b_13, a_13, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            b_13 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, b_13));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                b_13 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, b_13));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    b_13 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, b_13));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        b_13 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, b_13));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            b_13 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_13), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                b_13 = ATgetArgument(t, 0);
                                                                h_13 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_13), h_13);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    b_13 = ATgetArgument(t, 0);
                                                                    h_13 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm t_1 (ATerm t)
                                                                      {
                                                                        t = h_13;
                                                                        return(t);
                                                                      }
                                                                      t = b_13;
                                                                      t = foldr_2_0(t_1, u_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        b_13 = ATgetArgument(t, 0);
                                                                        t = b_13;
                                                                        t = foldr_2_0(v_1, w_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            b_13 = ATgetArgument(t, 0);
                                                                            h_13 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_w_33, (ATerm) ATinsert(CheckATermList(h_13), b_13));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                b_13 = ATgetArgument(t, 0);
                                                                                t = b_13;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    q_12 = ATgetFirst((ATermList) t);
                                                                                    r_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = r_12;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm g_36 = t;
                                                                                        int j_36 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = g_19(b_13, a_13, t);
                                                                                            LocalPopChoice(j_36);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = g_36;
                                                                                            t = q_12;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = g_19(b_13, a_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_19(b_13, a_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_k_36;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        b_13 = ATgetArgument(t, 0);
                                                                                        h_13 = ATgetArgument(t, 1);
                                                                                        t = h_13;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            y_12 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_o_36, (ATerm) ATinsert(ATinsert(ATempty, y_12), b_13));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            b_13 = ATgetArgument(t, 0);
                                                                                            t = b_13;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                b_13 = ATgetArgument(t, 0);
                                                                                                h_13 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, b_13, h_13, term_v_29);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    b_13 = ATgetArgument(t, 0);
                                                                                                    h_13 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, b_13, h_13, term_v_29);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        b_13 = ATgetArgument(t, 0);
                                                                                                        h_13 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, b_13, (ATerm)ATempty, h_13);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            b_13 = ATgetArgument(t, 0);
                                                                                                            h_13 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, h_13, b_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                b_13 = ATgetArgument(t, 0);
                                                                                                                h_13 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, b_13, h_13, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    b_13 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, b_13, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        b_13 = ATgetArgument(t, 0);
                                                                                                                        h_13 = ATgetArgument(t, 1);
                                                                                                                        z_12 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, b_13, h_13, (ATerm)ATempty, z_12);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            b_13 = ATgetArgument(t, 0);
                                                                                                                            h_13 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, b_13, (ATerm)ATempty, (ATerm)ATempty, h_13);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                b_13 = ATgetArgument(t, 0);
                                                                                                                                h_13 = ATgetArgument(t, 1);
                                                                                                                                z_12 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, b_13, h_13, (ATerm)ATempty, z_12);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    b_13 = ATgetArgument(t, 0);
                                                                                                                                    h_13 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, b_13, (ATerm)ATempty, (ATerm)ATempty, h_13);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        b_13 = ATgetArgument(t, 0);
                                                                                                                                        h_13 = ATgetArgument(t, 1);
                                                                                                                                        z_12 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_13, h_13, (ATerm)ATempty, z_12);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            b_13 = ATgetArgument(t, 0);
                                                                                                                                            h_13 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, b_13, (ATerm)ATempty, (ATerm)ATempty, h_13);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm q_36 = ATgetArgument(t, 0);
                                                                                                                                                h_13 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, h_13);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
  l_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      m_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
      {
        ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,t_19 = NULL;
        t = l_19;
        t = new_0_0(t);
        p_19 = t;
        t = new_0_0(t);
        q_19 = t;
        t = new_0_0(t);
        r_19 = t;
        t = new_0_0(t);
        t_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_19), r_19), q_19), p_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, p_19), (ATerm) ATmakeAppl(sym_Var_1, r_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, m_19, (ATerm)ATmakeAppl(sym_Var_1, p_19), (ATerm) ATmakeAppl(sym_Var_1, q_19)), (ATerm) ATmakeAppl(sym_BAM_3, k_19, (ATerm)ATmakeAppl(sym_Var_1, r_19), (ATerm) ATmakeAppl(sym_Var_1, t_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_r_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_19)), (ATerm) ATmakeAppl(sym_Var_1, q_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          m_19 = ATgetArgument(t, 0);
          {
            ATerm w_19 = NULL,x_19 = NULL,z_19 = NULL,e_20 = NULL;
            t = l_19;
            t = new_0_0(t);
            z_19 = t;
            t = m_19;
            {
              static ATerm x_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((w_19 != NULL) && (w_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      w_19 = ATgetArgument(t, 0);
                    if(((x_19 != NULL) && (x_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      x_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, z_19);
                return(t);
              }
              t = oncetd_1_0(x_1, t);
            }
            e_20 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_19)), not_null(w_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_19)), (ATerm) ATmakeAppl(sym_Build_1, e_20))));
          }
        }
      else
        {
          ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              m_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_19;
          t = new_0_0(t);
          i_20 = t;
          t = new_0_0(t);
          j_20 = t;
          t = m_19;
          {
            static ATerm y_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
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
              t = (ATerm) ATmakeAppl(sym_Var_1, i_20);
              return(t);
            }
            t = oncetd_1_0(y_1, t);
          }
          k_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_u_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_20))))), (ATerm)ATmakeAppl(sym_Var_1, i_20), (ATerm) ATmakeAppl(sym_Op_2, term_w_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_20)), not_null(g_20)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL;
  r_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      s_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_36 = t;
    int w_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_20 = NULL,z_20 = NULL,a_21 = NULL,c_21 = NULL;
        t = r_20;
        t = new_0_0(t);
        a_21 = t;
        t = s_20;
        {
          static ATerm z_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((u_20 != NULL) && (u_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_20 = ATgetArgument(t, 0);
                if(((z_20 != NULL) && (z_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  z_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_21), u_20);
            return(t);
          }
          t = pat_td_1_0(z_1, t);
        }
        c_21 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_21), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_21))), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_20))))));
        LocalPopChoice(w_36);
      }
    else
      {
        t = v_36;
        {
          ATerm a_37 = t;
          int b_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
              t = r_20;
              t = new_0_0(t);
              f_21 = t;
              t = s_20;
              {
                static ATerm a_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((e_21 != NULL) && (e_21 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_21 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, f_21);
                  return(t);
                }
                t = pat_td_1_0(a_2, t);
              }
              g_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, f_21)), not_null(e_21))));
              LocalPopChoice(b_37);
            }
          else
            {
              t = a_37;
              {
                ATerm k_21 = NULL,l_21 = NULL,o_21 = NULL,p_21 = NULL;
                t = r_20;
                t = new_0_0(t);
                o_21 = t;
                t = s_20;
                {
                  static ATerm b_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((l_21 != NULL) && (l_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          l_21 = ATgetArgument(t, 0);
                        if(((k_21 != NULL) && (k_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, o_21);
                    return(t);
                  }
                  t = pat_td_1_0(b_2, t);
                }
                p_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_21)), not_null(l_21)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm d_151 (ATerm), ATerm t)
{
  ATerm d_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_151(t);
      LocalPopChoice(k_37);
    }
  else
    {
      t = d_37;
      {
        ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
        t_26 = t;
        if(match_cons(t, sym_Op_2))
          {
            u_26 = ATgetArgument(t, 0);
            v_26 = ATgetArgument(t, 1);
            {
              ATerm i_3 = NULL,n_3 = NULL,s_3 = NULL;
              t = SSLgetAnnotations(t_26);
              i_3 = t;
              t = v_26;
              {
                static ATerm c_2 (ATerm t)
                {
                  t = pat_td_1_0(d_151, t);
                  return(t);
                }
                t = fetch_1_0(c_2, t);
              }
              n_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, u_26, n_3);
              s_3 = t;
              t = SSLsetAnnotations(s_3, i_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                u_26 = ATgetArgument(t, 0);
                v_26 = ATgetArgument(t, 1);
                {
                  ATerm l_37 = t;
                  int n_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_4 = NULL,r_4 = NULL,t_3 = NULL;
                      t = SSLgetAnnotations(t_26);
                      k_4 = t;
                      t = v_26;
                      t = pat_td_1_0(d_151, t);
                      r_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, u_26, r_4);
                      t_3 = t;
                      t = SSLsetAnnotations(t_3, k_4);
                      LocalPopChoice(n_37);
                    }
                  else
                    {
                      t = l_37;
                      {
                        ATerm n_5 = NULL,s_5 = NULL,v_3 = NULL;
                        t = SSLgetAnnotations(t_26);
                        n_5 = t;
                        t = u_26;
                        t = pat_td_1_0(d_151, t);
                        s_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, s_5, v_26);
                        v_3 = t;
                        t = SSLsetAnnotations(v_3, n_5);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    u_26 = ATgetArgument(t, 0);
                    v_26 = ATgetArgument(t, 1);
                    s_26 = ATgetArgument(t, 2);
                    {
                      ATerm j_6 = NULL,t_6 = NULL,z_3 = NULL;
                      t = SSLgetAnnotations(t_26);
                      j_6 = t;
                      t = s_26;
                      {
                        static ATerm d_2 (ATerm t)
                        {
                          t = pat_td_1_0(d_151, t);
                          return(t);
                        }
                        t = fetch_1_0(d_2, t);
                      }
                      t_6 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, u_26, v_26, t_6);
                      z_3 = t;
                      t = SSLsetAnnotations(z_3, j_6);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        u_26 = ATgetArgument(t, 0);
                        v_26 = ATgetArgument(t, 1);
                        s_26 = ATgetArgument(t, 2);
                        {
                          ATerm w_7 = NULL,c_8 = NULL,a_4 = NULL;
                          t = SSLgetAnnotations(t_26);
                          w_7 = t;
                          t = s_26;
                          {
                            static ATerm e_2 (ATerm t)
                            {
                              t = pat_td_1_0(d_151, t);
                              return(t);
                            }
                            t = fetch_1_0(e_2, t);
                          }
                          c_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, u_26, v_26, c_8);
                          a_4 = t;
                          t = SSLsetAnnotations(a_4, w_7);
                        }
                      }
                    else
                      {
                        ATerm m_9 = NULL,b_10 = NULL,b_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            u_26 = ATgetArgument(t, 0);
                            v_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(t_26);
                        m_9 = t;
                        t = v_26;
                        t = pat_td_1_0(d_151, t);
                        b_10 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, u_26, b_10);
                        b_4 = t;
                        t = SSLsetAnnotations(b_4, m_9);
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
  ATerm i_27 = NULL,n_27 = NULL;
  i_27 = t;
  if(match_cons(t, sym_Build_1))
    {
      n_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_27 = NULL,p_27 = NULL,r_27 = NULL,s_27 = NULL;
        t = i_27;
        t = new_0_0(t);
        r_27 = t;
        t = n_27;
        {
          static ATerm f_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((o_27 != NULL) && (o_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_27 = ATgetArgument(t, 0);
                if(((p_27 != NULL) && (p_27 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  p_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, r_27);
            return(t);
          }
          t = pat_td_1_0(f_2, t);
        }
        s_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_37, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_27)), not_null(o_27))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_27)))), (ATerm) ATmakeAppl(sym_Build_1, s_27)));
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
        {
          ATerm t_37 = t;
          int u_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_27 = NULL,v_27 = NULL,w_27 = NULL;
              t = i_27;
              t = new_0_0(t);
              v_27 = t;
              t = n_27;
              {
                static ATerm g_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((t_27 != NULL) && (t_27 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        t_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, v_27);
                  return(t);
                }
                t = pat_td_1_0(g_2, t);
              }
              w_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_27)))), (ATerm) ATmakeAppl(sym_Build_1, w_27)));
              LocalPopChoice(u_37);
            }
          else
            {
              t = t_37;
              {
                ATerm i_28 = NULL,j_28 = NULL,o_28 = NULL,p_28 = NULL;
                t = i_27;
                t = new_0_0(t);
                o_28 = t;
                t = n_27;
                {
                  static ATerm h_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((i_28 != NULL) && (i_28 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          i_28 = ATgetArgument(t, 0);
                        if(((j_28 != NULL) && (j_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, o_28);
                    return(t);
                  }
                  t = pat_td_1_0(h_2, t);
                }
                p_28 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_28), not_null(j_28), (ATerm) ATmakeAppl(sym_Var_1, o_28))), (ATerm) ATmakeAppl(sym_Build_1, p_28)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm v_37 = t;
  if((PushChoice() == 0))
    {
      ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL,o_8 = NULL;
      l_29 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_29);
      j_29 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_29);
      o_8 = t;
      t = SSLsetAnnotations(o_8, j_29);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_37;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_37;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_29 = ATgetFirst((ATermList) t);
      n_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_29, n_29);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_37 = ATgetArgument(t, 0);
      if(match_cons(z_37, sym__2))
        {
          o_29 = ATgetArgument(z_37, 0);
          p_29 = ATgetArgument(z_37, 1);
        }
      else
        _fail(t);
      {
        ATerm b_38 = ATgetArgument(t, 1);
        if(match_cons(b_38, sym__2))
          {
            q_29 = ATgetArgument(b_38, 0);
            r_29 = ATgetArgument(b_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_29), o_29), (ATerm) ATinsert(CheckATermList(r_29), p_29));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_37;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_29 = ATgetFirst((ATermList) t);
      z_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_29, z_29);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm b_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_38 = ATgetArgument(t, 0);
      if(match_cons(c_38, sym__2))
        {
          b_30 = ATgetArgument(c_38, 0);
          e_30 = ATgetArgument(c_38, 1);
        }
      else
        _fail(t);
      {
        ATerm e_38 = ATgetArgument(t, 1);
        if(match_cons(e_38, sym__2))
          {
            f_30 = ATgetArgument(e_38, 0);
            g_30 = ATgetArgument(e_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_30), b_30), (ATerm) ATinsert(CheckATermList(g_30), e_30));
  return(t);
}
static ATerm l_13 (ATerm a_77, ATerm b_77, ATerm c_77, ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,i_29 = NULL,q_8 = NULL;
  t = c_77;
  t = fetch_1_0(j_2, t);
  t = c_77;
  t = genzip_4_0(n_2, o_2, p_2, LiftPrimArg_0_0, t);
  i_29 = t;
  if(match_cons(t, sym__2))
    {
      v_28 = ATgetArgument(t, 0);
      c_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_29);
  u_28 = t;
  t = v_28;
  t = concat_0_0(t);
  d_29 = t;
  t = c_29;
  t = genzip_4_0(q_2, r_2, s_2, _id, t);
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_29, e_29);
  q_8 = t;
  t = SSLsetAnnotations(q_8, u_28);
  if(match_cons(t, sym__2))
    {
      r_28 = ATgetArgument(t, 0);
      {
        ATerm f_38 = ATgetArgument(t, 1);
        if(match_cons(f_38, sym__2))
          {
            s_28 = ATgetArgument(f_38, 0);
            t_28 = ATgetArgument(f_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, r_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_28), (ATerm) ATmakeAppl(sym_CallT_3, a_77, b_77, t_28)));
  return(t);
}
static ATerm c_31 (ATerm o_30, ATerm t)
{
  ATerm q_30 = NULL;
  t = o_30;
  {
    ATerm h_38 = t;
    if((PushChoice() == 0))
      {
        ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,n_9 = NULL;
        t_30 = t;
        if(match_cons(t, sym_Var_1))
          {
            s_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_30);
        r_30 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, s_30);
        n_9 = t;
        t = SSLsetAnnotations(n_9, r_30);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_38;
      }
  }
  t = new_0_0(t);
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, q_30), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_30)))), (ATerm) ATmakeAppl(sym_Var_1, q_30)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  z_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_31 = ATgetArgument(t, 0);
      {
        ATerm j_38 = t;
        int k_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_31(z_30, t);
            LocalPopChoice(k_38);
          }
        else
          {
            t = j_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_v_29, (ATerm) ATmakeAppl(sym_Var_1, a_31)));
          }
      }
    }
  else
    {
      t = c_31(z_30, t);
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm m_38 = t;
  if((PushChoice() == 0))
    {
      ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,g_11 = NULL;
      b_11 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_11);
      z_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_11);
      g_11 = t;
      t = SSLsetAnnotations(g_11, z_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_38;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_37;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm c_11 = NULL,d_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_11 = ATgetFirst((ATermList) t);
      d_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_11, d_11);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,h_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_38 = ATgetArgument(t, 0);
      if(match_cons(o_38, sym__2))
        {
          e_11 = ATgetArgument(o_38, 0);
          f_11 = ATgetArgument(o_38, 1);
        }
      else
        _fail(t);
      {
        ATerm p_38 = ATgetArgument(t, 1);
        if(match_cons(p_38, sym__2))
          {
            h_11 = ATgetArgument(p_38, 0);
            k_11 = ATgetArgument(p_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_11), e_11), (ATerm) ATinsert(CheckATermList(k_11), f_11));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_37;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm q_11 = NULL,r_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_11 = ATgetFirst((ATermList) t);
      r_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_11, r_11);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,v_11 = NULL,w_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_38 = ATgetArgument(t, 0);
      if(match_cons(q_38, sym__2))
        {
          s_11 = ATgetArgument(q_38, 0);
          t_11 = ATgetArgument(q_38, 1);
        }
      else
        _fail(t);
      {
        ATerm t_38 = ATgetArgument(t, 1);
        if(match_cons(t_38, sym__2))
          {
            v_11 = ATgetArgument(t_38, 0);
            w_11 = ATgetArgument(t_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_11), s_11), (ATerm) ATinsert(CheckATermList(w_11), t_11));
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm u_38 = t;
  if((PushChoice() == 0))
    {
      ATerm k_13 = NULL,o_13 = NULL,q_13 = NULL,j_11 = NULL;
      q_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_13);
      k_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_13);
      j_11 = t;
      t = SSLsetAnnotations(j_11, k_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_38;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_37;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm r_13 = NULL,v_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_13 = ATgetFirst((ATermList) t);
      v_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_13, v_13);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm w_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_38 = ATgetArgument(t, 0);
      if(match_cons(v_38, sym__2))
        {
          w_13 = ATgetArgument(v_38, 0);
          y_13 = ATgetArgument(v_38, 1);
        }
      else
        _fail(t);
      {
        ATerm x_38 = ATgetArgument(t, 1);
        if(match_cons(x_38, sym__2))
          {
            z_13 = ATgetArgument(x_38, 0);
            a_14 = ATgetArgument(x_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_13), w_13), (ATerm) ATinsert(CheckATermList(a_14), y_13));
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_37;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm d_14 = NULL,e_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_14 = ATgetFirst((ATermList) t);
      e_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_14, e_14);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm o_15 = NULL,r_15 = NULL,w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_39 = ATgetArgument(t, 0);
      if(match_cons(a_39, sym__2))
        {
          o_15 = ATgetArgument(a_39, 0);
          r_15 = ATgetArgument(a_39, 1);
        }
      else
        _fail(t);
      {
        ATerm d_39 = ATgetArgument(t, 1);
        if(match_cons(d_39, sym__2))
          {
            w_15 = ATgetArgument(d_39, 0);
            x_15 = ATgetArgument(d_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_15), o_15), (ATerm) ATinsert(CheckATermList(x_15), r_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm c_36 = NULL,f_36 = NULL,h_36 = NULL,i_36 = NULL;
  f_36 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_36 = ATgetArgument(t, 0);
      i_36 = ATgetArgument(t, 1);
      c_36 = ATgetArgument(t, 2);
      {
        ATerm q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,i_11 = NULL;
        t = c_36;
        t = fetch_1_0(t_2, t);
        t = c_36;
        t = genzip_4_0(u_2, w_2, x_2, LiftPrimArg_0_0, t);
        y_10 = t;
        if(match_cons(t, sym__2))
          {
            u_10 = ATgetArgument(t, 0);
            v_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_10);
        t_10 = t;
        t = u_10;
        t = concat_0_0(t);
        w_10 = t;
        t = v_10;
        t = genzip_4_0(y_2, z_2, b_3, _id, t);
        x_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_10, x_10);
        i_11 = t;
        t = SSLsetAnnotations(i_11, t_10);
        if(match_cons(t, sym__2))
          {
            q_10 = ATgetArgument(t, 0);
            {
              ATerm e_39 = ATgetArgument(t, 1);
              if(match_cons(e_39, sym__2))
                {
                  r_10 = ATgetArgument(e_39, 0);
                  s_10 = ATgetArgument(e_39, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, q_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_10), (ATerm) ATmakeAppl(sym_PrimT_3, h_36, i_36, s_10)));
      }
    }
  else
    {
      ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,i_13 = NULL,l_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          h_36 = ATgetArgument(t, 0);
          i_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_36;
      t = fetch_1_0(d_3, t);
      t = i_36;
      t = genzip_4_0(e_3, f_3, g_3, LiftPrimArg_0_0, t);
      i_13 = t;
      if(match_cons(t, sym__2))
        {
          d_13 = ATgetArgument(t, 0);
          e_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_13);
      c_13 = t;
      t = d_13;
      t = concat_0_0(t);
      f_13 = t;
      t = e_13;
      t = genzip_4_0(h_3, j_3, k_3, _id, t);
      g_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_13, g_13);
      l_11 = t;
      t = SSLsetAnnotations(l_11, c_13);
      if(match_cons(t, sym__2))
        {
          v_12 = ATgetArgument(t, 0);
          {
            ATerm f_39 = ATgetArgument(t, 1);
            if(match_cons(f_39, sym__2))
              {
                w_12 = ATgetArgument(f_39, 0);
                x_12 = ATgetArgument(f_39, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, v_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_12), (ATerm) ATmakeAppl(sym_PrimT_3, h_36, (ATerm)ATempty, x_12)));
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL;
  i_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      f_37 = ATgetArgument(t, 0);
      g_37 = ATgetArgument(t, 1);
      h_37 = ATgetArgument(t, 2);
      {
        ATerm s_16 = NULL,b_22 = NULL;
        t = SSLgetAnnotations(i_37);
        s_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, f_37, g_37, h_37);
        b_22 = t;
        t = SSLsetAnnotations(b_22, s_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = i_37;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm g_39 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(l_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_39;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm f_40 = NULL,q_40 = NULL,u_40 = NULL,v_40 = NULL;
  q_40 = t;
  if(match_cons(t, sym_Con_3))
    {
      u_40 = ATgetArgument(t, 0);
      v_40 = ATgetArgument(t, 1);
      f_40 = ATgetArgument(t, 2);
      {
        ATerm t_17 = NULL,d_22 = NULL;
        t = SSLgetAnnotations(q_40);
        t_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, u_40, v_40, f_40);
        d_22 = t;
        t = SSLsetAnnotations(d_22, t_17);
      }
    }
  else
    {
      ATerm e_19 = NULL,e_22 = NULL;
      if(match_cons(t, sym_App_2))
        {
          u_40 = ATgetArgument(t, 0);
          v_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_40);
      e_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, u_40, v_40);
      e_22 = t;
      t = SSLsetAnnotations(e_22, e_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm h_39 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(p_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_39;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      k_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_41;
  if(match_cons(t, sym_StratRule_3))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
      n_41 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_41), (ATerm) ATmakeAppl(sym_Where_1, n_41)), l_41));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          l_41 = ATgetArgument(t, 0);
          m_41 = ATgetArgument(t, 1);
          n_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_41;
      t = pureterm_0_0(t);
      t = m_41;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, m_41)), (ATerm) ATmakeAppl(sym_Where_1, n_41)), (ATerm) ATmakeAppl(sym_Match_1, l_41)));
    }
  return(t);
}
static ATerm m_13 (ATerm n_72, ATerm o_72, ATerm p_72, ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
  t = new_0_0(t);
  c_42 = t;
  t = n_72;
  {
    static ATerm q_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm i_39 = ATgetArgument(t, 0);
          if(match_cons(i_39, sym_Var_1))
            {
              if(((b_42 != NULL) && (b_42 != ATgetArgument(i_39, 0))))
                _fail(ATgetArgument(i_39, 0));
              else
                b_42 = ATgetArgument(i_39, 0);
            }
          else
            _fail(t);
          if(((z_41 != NULL) && (z_41 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_41 = ATgetArgument(t, 1);
          {
            ATerm j_39 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, b_42);
      return(t);
    }
    t = oncetd_1_0(q_3, t);
  }
  d_42 = t;
  t = o_72;
  {
    static ATerm r_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm l_39 = ATgetArgument(t, 0);
          if(match_cons(l_39, sym_Var_1))
            {
              if(((b_42 != NULL) && (b_42 != ATgetArgument(l_39, 0))))
                _fail(ATgetArgument(l_39, 0));
              else
                b_42 = ATgetArgument(l_39, 0);
            }
          else
            _fail(t);
          if(((a_42 != NULL) && (a_42 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_42 = ATgetArgument(t, 1);
          {
            ATerm m_39 = ATgetArgument(t, 2);
            if(match_cons(m_39, sym_CallT_3))
              {
                if(((y_41 != NULL) && (y_41 != ATgetArgument(m_39, 0))))
                  _fail(ATgetArgument(m_39, 0));
                else
                  y_41 = ATgetArgument(m_39, 0);
                {
                  ATerm n_39 = ATgetArgument(m_39, 1);
                  if(((ATgetType(n_39) != AT_LIST) || !(ATisEmpty(n_39))))
                    _fail(t);
                }
                {
                  ATerm o_39 = ATgetArgument(m_39, 2);
                  if(((ATgetType(o_39) != AT_LIST) || !(ATisEmpty(o_39))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_42);
      return(t);
    }
    t = oncetd_1_0(r_3, t);
  }
  e_42 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_42), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_42, e_42, (ATerm) ATmakeAppl(sym_Seq_2, p_72, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(y_41), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_41), not_null(a_42), term_v_29))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_42)), (ATerm) ATmakeAppl(sym_Var_1, c_42))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm p_39 = t;
  int t_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_39 = t;
      int v_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
          c_43 = t;
          if(match_cons(t, sym_SRule_1))
            {
              d_43 = ATgetArgument(t, 0);
              t = d_43;
              if(match_cons(t, sym_Rule_3))
                {
                  y_42 = ATgetArgument(t, 0);
                  z_42 = ATgetArgument(t, 1);
                  a_43 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = c_43;
              t = m_13(y_42, z_42, a_43, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm c_20 = NULL,m_20 = NULL,j_22 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  d_43 = ATgetArgument(t, 0);
                  e_43 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_43);
              c_20 = t;
              t = e_43;
              t = desugarRule_0_0(t);
              m_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, d_43, m_20);
              j_22 = t;
              t = SSLsetAnnotations(j_22, c_20);
            }
          LocalPopChoice(v_39);
        }
      else
        {
          t = u_39;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(t_39);
    }
  else
    {
      t = p_39;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm w_39 = t;
  int x_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(x_39);
    }
  else
    {
      t = w_39;
    }
  t = repeat_2_0(w_3, _id, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(z_39);
    }
  else
    {
      t = y_39;
      {
        ATerm a_40 = t;
        int b_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
            b_44 = t;
            if(match_cons(t, sym_CallT_3))
              {
                e_44 = ATgetArgument(t, 0);
                f_44 = ATgetArgument(t, 1);
                g_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = b_44;
            t = l_13(e_44, f_44, g_44, t);
            LocalPopChoice(b_40);
          }
        else
          {
            t = a_40;
            {
              ATerm d_40 = t;
              int e_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(e_40);
                }
              else
                {
                  t = d_40;
                  {
                    ATerm g_40 = t;
                    int i_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(i_40);
                      }
                    else
                      {
                        t = g_40;
                        {
                          ATerm j_40 = t;
                          int k_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_40 = t;
                              int m_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_44 = NULL,t_44 = NULL,v_44 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      s_44 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = s_44;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      t_44 = ATgetArgument(t, 0);
                                      t = t_44;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          t_44 = ATgetArgument(t, 0);
                                          v_44 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, t_44, v_44);
                                    }
                                  LocalPopChoice(m_40);
                                }
                              else
                                {
                                  t = l_40;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(k_40);
                            }
                          else
                            {
                              t = j_40;
                              {
                                ATerm o_40 = t;
                                int p_40 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(p_40);
                                  }
                                else
                                  {
                                    t = o_40;
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
  t = topdown_1_0(u_3, t);
  return(t);
}
static ATerm x_3 (ATerm t)
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
            ATerm r_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_47;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_47), (ATerm) ATempty);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm z_47 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_47 = ATgetArgument(t, 0);
      t = z_47;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_47 = ATgetArgument(t, 0);
          {
            ATerm t_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_47;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, z_47);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm j_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_48);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm w_40 = t;
  int x_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_40);
    }
  else
    {
      t = w_40;
      {
        ATerm c_41 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_41);
          }
        else
          {
            t = c_41;
            {
              ATerm h_41 = t;
              int i_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_48 = ATgetArgument(t, 0);
                      m_48 = ATgetArgument(t, 1);
                      n_48 = ATgetArgument(t, 2);
                      o_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_48;
                  t = map_1_0(e_4, t);
                  LocalPopChoice(i_41);
                }
              else
                {
                  t = h_41;
                  {
                    ATerm o_41 = t;
                    int p_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(p_41);
                      }
                    else
                      {
                        t = o_41;
                        t = dynrule_targs_1_0(f_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm k_49 = NULL;
  ATerm q_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_49 = ATgetArgument(t, 0);
          {
            ATerm v_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_41);
      t = k_49;
    }
  else
    {
      t = q_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_49;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = map_1_0(g_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm r_49 = NULL;
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_49 = ATgetArgument(t, 0);
          {
            ATerm f_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_41);
      t = r_49;
    }
  else
    {
      t = w_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_49;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm u_49 = NULL;
  u_49 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, u_49);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm w_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_49);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm g_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_42);
    }
  else
    {
      t = g_42;
      {
        ATerm i_42 = t;
        int j_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_42);
          }
        else
          {
            t = i_42;
            {
              ATerm l_42 = t;
              int m_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_49 = NULL,z_49 = NULL,b_50 = NULL,c_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_49 = ATgetArgument(t, 0);
                      z_49 = ATgetArgument(t, 1);
                      b_50 = ATgetArgument(t, 2);
                      c_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_50;
                  t = map_1_0(l_4, t);
                  LocalPopChoice(m_42);
                }
              else
                {
                  t = l_42;
                  {
                    ATerm n_42 = t;
                    int o_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_42);
                      }
                    else
                      {
                        t = n_42;
                        t = dynrule_targs_1_0(o_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm l_50 = NULL;
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_50 = ATgetArgument(t, 0);
          {
            ATerm r_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_42);
      t = l_50;
    }
  else
    {
      t = p_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_50;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = map_1_0(t_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm r_50 = NULL;
  ATerm s_42 = t;
  int t_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_50 = ATgetArgument(t, 0);
          {
            ATerm v_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_42);
      t = r_50;
    }
  else
    {
      t = s_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_50;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm v_50 = NULL;
  v_50 = t;
  {
    ATerm w_42 = t;
    int x_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_51 = NULL,w_20 = NULL,y_20 = NULL,m_22 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            f_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_50);
        w_20 = t;
        t = f_51;
        t = ContextVar_0_0(t);
        y_20 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, y_20);
        m_22 = t;
        t = SSLsetAnnotations(m_22, w_20);
        LocalPopChoice(x_42);
      }
    else
      {
        t = w_42;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, v_50);
  return(t);
}
static ATerm n_13 (ATerm t_152 (ATerm), ATerm q_85, ATerm n_85, ATerm o_85, ATerm x_85, ATerm b_86, ATerm c_86, ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,s_46 = NULL,t_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,d_47 = NULL,e_47 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_86, term_j_32);
  {
    ATerm b_43 = t;
    if((PushChoice() == 0))
      {
        ATerm f_47 = NULL;
        if(match_cons(t, sym__2))
          {
            f_47 = ATgetArgument(t, 0);
            if((f_47 != ATgetArgument(t, 1)))
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
        t = b_43;
      }
  }
  t = term_f_43;
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_43, q_85);
  t = h_15(e_47, q_85, t);
  g_46 = t;
  t = term_g_43;
  d_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_43, q_85);
  t = h_15(d_47, q_85, t);
  h_46 = t;
  t = new_0_0(t);
  i_46 = t;
  t = n_85;
  t = map_1_0(x_3, t);
  j_46 = t;
  t = o_85;
  t = map_1_0(y_3, t);
  k_46 = t;
  t = new_0_0(t);
  l_46 = t;
  t = x_85;
  t = dummify_0_0(t);
  s_46 = t;
  {
    ATerm h_43 = t;
    int i_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_46;
        if((x_85 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, l_46);
        LocalPopChoice(i_43);
      }
    else
      {
        t = h_43;
        t = s_46;
      }
  }
  m_46 = t;
  t = s_46;
  t = free_vars_3_0(c_4, d_4, tboundin_3_0, t);
  t = map_1_0(h_4, t);
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_86, c_86);
  t = free_vars_3_0(i_4, j_4, tboundin_3_0, t);
  t = filter_1_0(v_4, t);
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_46, y_46);
  t = diff_0_0(t);
  z_46 = t;
  t = new_0_0(t);
  a_47 = t;
  t = q_85;
  t = t_152(t);
  b_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, b_47, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_a_33, (ATerm) ATinsert(CheckATermList(z_46), (ATerm) ATmakeAppl(sym_Str_1, a_47)))), s_46)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, h_46, n_85, o_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_a_33, (ATerm) ATinsert(CheckATermList(z_46), (ATerm) ATmakeAppl(sym_Str_1, a_47)))), x_85)), b_86, (ATerm) ATmakeAppl(sym_Seq_2, term_p_43, c_86)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_46, n_85, o_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_46), x_85), (ATerm)ATmakeAppl(sym_Var_1, i_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_85)))), m_46), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_46), j_46, k_46), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_43), (ATerm) ATmakeAppl(sym_Var_1, l_46)))))), (ATerm) ATmakeAppl(sym_Var_1, i_46)))))), (ATerm) ATmakeAppl(sym_RDefT_4, q_85, n_85, o_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_46), x_85), b_86, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_85)))), m_46), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_a_33, (ATerm) ATinsert(CheckATermList(z_46), (ATerm) ATmakeAppl(sym_Str_1, a_47)))), term_j_43))), c_86)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm r_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,g_22 = NULL;
      u_21 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          v_21 = ATgetArgument(t, 0);
          w_21 = ATgetArgument(t, 1);
          x_21 = ATgetArgument(t, 2);
          y_21 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = y_21;
      if(match_cons(t, sym_Rule_3))
        {
          z_21 = ATgetArgument(t, 0);
          a_22 = ATgetArgument(t, 1);
          g_22 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_21;
      t = n_13(y_4, v_21, w_21, x_21, z_21, a_22, g_22, t);
      LocalPopChoice(s_43);
    }
  else
    {
      t = r_43;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(z_4, t);
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm y_22 = NULL;
  y_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_22))));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm a_23 = NULL;
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_23))));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_37;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_23 = ATgetFirst((ATermList) t);
      c_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_23, c_23);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_44 = ATgetArgument(t, 0);
      if(match_cons(a_44, sym__2))
        {
          d_23 = ATgetArgument(a_44, 0);
          e_23 = ATgetArgument(a_44, 1);
        }
      else
        _fail(t);
      {
        ATerm c_44 = ATgetArgument(t, 1);
        if(match_cons(c_44, sym__2))
          {
            f_23 = ATgetArgument(c_44, 0);
            g_23 = ATgetArgument(c_44, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_23), d_23), (ATerm) ATinsert(CheckATermList(g_23), e_23));
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm d_44 = t;
  int h_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_23 = NULL,y_23 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,f_25 = NULL,g_25 = NULL;
      x_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          y_23 = ATgetArgument(t, 0);
          d_24 = ATgetArgument(t, 1);
          e_24 = ATgetArgument(t, 2);
          f_24 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = f_24;
      if(match_cons(t, sym_Rule_3))
        {
          g_24 = ATgetArgument(t, 0);
          f_25 = ATgetArgument(t, 1);
          g_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_23;
      t = n_13(h_5, y_23, d_24, e_24, g_24, f_25, g_25, t);
      LocalPopChoice(h_44);
    }
  else
    {
      t = d_44;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(i_5, t);
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm p_25 = NULL;
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, p_25))));
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm q_25 = NULL;
  q_25 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_25))));
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_37;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_25 = ATgetFirst((ATermList) t);
      s_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_25, s_25);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_44 = ATgetArgument(t, 0);
      if(match_cons(n_44, sym__2))
        {
          t_25 = ATgetArgument(n_44, 0);
          u_25 = ATgetArgument(n_44, 1);
        }
      else
        _fail(t);
      {
        ATerm o_44 = ATgetArgument(t, 1);
        if(match_cons(o_44, sym__2))
          {
            v_25 = ATgetArgument(o_44, 0);
            w_25 = ATgetArgument(o_44, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_25), t_25), (ATerm) ATinsert(CheckATermList(w_25), u_25));
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(u_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm l_56 = NULL;
  l_56 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, l_56))));
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_37;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_56 = ATgetFirst((ATermList) t);
      n_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_56, n_56);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm u_56 = NULL,c_57 = NULL,d_57 = NULL,f_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_44 = ATgetArgument(t, 0);
      if(match_cons(u_44, sym__2))
        {
          u_56 = ATgetArgument(u_44, 0);
          c_57 = ATgetArgument(u_44, 1);
        }
      else
        _fail(t);
      {
        ATerm w_44 = ATgetArgument(t, 1);
        if(match_cons(w_44, sym__2))
          {
            d_57 = ATgetArgument(w_44, 0);
            f_57 = ATgetArgument(w_44, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_57), u_56), (ATerm) ATinsert(CheckATermList(f_57), c_57));
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(b_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm k_57 = NULL;
  k_57 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_57))));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_37;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm m_57 = NULL,n_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_57 = ATgetFirst((ATermList) t);
      n_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_57, n_57);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm o_57 = NULL,x_57 = NULL,a_58 = NULL,j_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_44 = ATgetArgument(t, 0);
      if(match_cons(z_44, sym__2))
        {
          o_57 = ATgetArgument(z_44, 0);
          x_57 = ATgetArgument(z_44, 1);
        }
      else
        _fail(t);
      {
        ATerm a_45 = ATgetArgument(t, 1);
        if(match_cons(a_45, sym__2))
          {
            a_58 = ATgetArgument(a_45, 0);
            j_58 = ATgetArgument(a_45, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_58), o_57), (ATerm) ATinsert(CheckATermList(j_58), x_57));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL;
  i_56 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      j_56 = ATgetArgument(t, 0);
      {
        ATerm n_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,t_22 = NULL;
        t = j_56;
        t = map_1_0(x_4, t);
        t = genzip_4_0(a_5, b_5, c_5, _id, t);
        t_21 = t;
        if(match_cons(t, sym__2))
          {
            q_21 = ATgetArgument(t, 0);
            r_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_21);
        n_21 = t;
        t = r_21;
        t = concat_0_0(t);
        s_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_21, s_21);
        t_22 = t;
        t = SSLsetAnnotations(t_22, n_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          j_56 = ATgetArgument(t, 0);
          {
            ATerm o_23 = NULL,q_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,u_22 = NULL;
            t = j_56;
            t = map_1_0(e_5, t);
            t = genzip_4_0(j_5, k_5, q_5, _id, t);
            w_23 = t;
            if(match_cons(t, sym__2))
              {
                q_23 = ATgetArgument(t, 0);
                u_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_23);
            o_23 = t;
            t = u_23;
            t = concat_0_0(t);
            v_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_23, v_23);
            u_22 = t;
            t = SSLsetAnnotations(u_22, o_23);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              j_56 = ATgetArgument(t, 0);
              t = j_56;
              t = map_1_0(r_5, t);
              t = genzip_4_0(w_5, x_5, y_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  j_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = j_56;
              t = map_1_0(a_6, t);
              t = genzip_4_0(c_6, e_6, f_6, _id, t);
            }
        }
    }
  return(t);
}
static ATerm i_6 (ATerm t)
{
  t = term_b_45;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm v_152 (ATerm), ATerm t)
{
  static ATerm c_61 (ATerm t)
  {
    static ATerm g_6 (ATerm t)
    {
      ATerm d_45 = t;
      int e_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_152(t);
          LocalPopChoice(e_45);
        }
      else
        {
          t = d_45;
          {
            ATerm h_60 = NULL,m_60 = NULL,b_61 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                h_60 = ATgetArgument(t, 0);
                m_60 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, h_60, m_60);
            {
              static ATerm m_6 (ATerm t)
              {
                t = h_60;
                t = DeclareContextVars_0_0(t);
                t = m_60;
                t = c_61(t);
                if(((b_61 != NULL) && (b_61 != t)))
                  _fail(t);
                else
                  b_61 = t;
                return(t);
              }
              t = scope_2_0(i_6, m_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, h_60, not_null(b_61));
          }
        }
      return(t);
    }
    t = oncetd_1_0(g_6, t);
    return(t);
  }
  t = c_61(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_b_45;
  return(t);
}
static ATerm p_13 (ATerm q_86, ATerm p_86, ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
  static ATerm o_6 (ATerm t)
  {
    t = q_86;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = q_86;
    {
      static ATerm p_6 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((e_61 != NULL) && (e_61 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              e_61 = ATgetArgument(t, 0);
            if(((d_61 != NULL) && (d_61 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              d_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, e_61);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(p_6, t);
    }
    if(((f_61 != NULL) && (f_61 != t)))
      _fail(t);
    else
      f_61 = t;
    return(t);
  }
  t = scope_2_0(n_6, o_6, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_61)), not_null(f_61)), p_86);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL,m_61 = NULL,n_61 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      m_61 = ATgetArgument(t, 0);
      n_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_61 = ATgetFirst((ATermList) t);
      k_61 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_j_45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, k_61, n_61)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, j_61))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_61;
    }
  return(t);
}
static ATerm h_62 (ATerm v_61, ATerm t)
{
  t = SSL_is_string(v_61);
  return(t);
}
static ATerm i_62 (ATerm z_61, ATerm t)
{
  ATerm a_62 = NULL,c_62 = NULL,d_62 = NULL;
  t = term_k_45;
  c_62 = t;
  t = (ATerm) ATinsert(ATempty, term_l_45);
  d_62 = t;
  t = SSL_printnl(c_62, d_62);
  t = z_61;
  t = debug_1_0(q_6, t);
  t = term_o_45;
  a_62 = t;
  t = SSL_exit(a_62);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_p_45;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL;
  f_62 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      e_62 = ATgetArgument(t, 0);
      {
        ATerm q_45 = t;
        int r_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_62(f_62, t);
            LocalPopChoice(r_45);
          }
        else
          {
            t = q_45;
            t = e_62;
          }
      }
    }
  else
    {
      ATerm s_45 = t;
      int t_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_62(f_62, t);
          LocalPopChoice(t_45);
        }
      else
        {
          t = s_45;
          t = i_62(f_62, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm s_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,b_63 = NULL,j_63 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      s_62 = ATgetArgument(t, 0);
      j_63 = ATgetArgument(t, 1);
      t = s_62;
      if(match_cons(t, sym_DynRuleId_1))
        {
          v_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_62;
      if(match_cons(t, sym_RDecT_3))
        {
          w_62 = ATgetArgument(t, 0);
          x_62 = ATgetArgument(t, 1);
          b_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, w_62, x_62, b_63, (ATerm) ATmakeAppl(sym_Rule_3, j_63, term_j_32, term_v_29));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          s_62 = ATgetArgument(t, 0);
          j_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_62;
      if(match_cons(t, sym_DynRuleId_1))
        {
          v_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_62;
      if(match_cons(t, sym_RDecT_3))
        {
          w_62 = ATgetArgument(t, 0);
          x_62 = ATgetArgument(t, 1);
          b_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, w_62, x_62, b_63, j_63);
    }
  return(t);
}
static ATerm s_65 (ATerm s_64, ATerm t)
{
  ATerm y_64 = NULL,z_64 = NULL,a_65 = NULL,b_65 = NULL;
  t = s_64;
  if(match_cons(t, sym_GenDynRules_1))
    {
      a_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_65;
  t = filter_1_0(r_6, t);
  b_65 = t;
  t = s_64;
  if(match_cons(t, sym_GenDynRules_1))
    {
      y_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_64;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  z_64 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, b_65), (ATerm) ATmakeAppl(sym_DynamicRules_1, z_64));
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm u_45 = ATgetArgument(t, 0);
      if(match_cons(u_45, sym_DynRuleId_1))
        {
          ATerm v_45 = ATgetArgument(u_45, 0);
          if(match_cons(v_45, sym_RDecT_3))
            {
              c_65 = ATgetArgument(v_45, 0);
              d_65 = ATgetArgument(v_45, 1);
              e_65 = ATgetArgument(v_45, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      f_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, c_65, d_65, e_65, f_65);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm w_45 = ATgetArgument(t, 0);
      ATerm x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL;
  h_65 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      g_65 = ATgetArgument(t, 0);
      {
        ATerm z_45 = t;
        int e_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_26 = NULL;
            t = g_65;
            {
              ATerm f_46 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(s_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = f_46;
                }
            }
            t = g_65;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            c_26 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, c_26);
            LocalPopChoice(e_46);
          }
        else
          {
            t = z_45;
            t = s_65(h_65, t);
          }
      }
    }
  else
    {
      t = s_65(h_65, t);
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm n_46 = t;
  int o_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_65 = NULL;
      z_65 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm p_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_65;
      LocalPopChoice(o_46);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = n_46;
      {
        ATerm q_46 = t;
        int u_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_66 = NULL;
            e_66 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm v_46 = ATgetArgument(t, 0);
                ATerm w_46 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_66;
            LocalPopChoice(u_46);
            {
              ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  f_66 = ATgetArgument(t, 0);
                  g_66 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_66;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              h_66 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, h_66, g_66);
            }
          }
        else
          {
            t = q_46;
          }
      }
    }
  return(t);
}
ATerm downgrade_new_dr_syntax_0_0 (ATerm t)
{
  t = topdown_1_0(u_6, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = Cons_2_0(x_6, y_6, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,h_67 = NULL,i_67 = NULL,z_22 = NULL;
  i_67 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      c_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_67);
  b_67 = t;
  t = c_67;
  t = topdown_1_0(z_6, t);
  t = listtd_1_0(a_7, t);
  h_67 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, h_67);
  z_22 = t;
  t = SSLsetAnnotations(z_22, b_67);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm x_46 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(c_47);
    }
  else
    {
      t = x_46;
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  t = repeat_2_0(b_7, _id, t);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_67 = ATgetFirst((ATermList) t);
      q_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_13(p_67, q_67, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm m_66 = NULL,n_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,p_23 = NULL,m_23 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  x_66 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_66);
  m_66 = t;
  t = n_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_66 = ATgetFirst((ATermList) t);
      u_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_66);
  s_66 = t;
  t = u_66;
  t = Cons_2_0(_id, v_6, t);
  v_66 = t;
  t = (ATerm) ATinsert(CheckATermList(v_66), t_66);
  m_23 = t;
  t = SSLsetAnnotations(m_23, s_66);
  w_66 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_66);
  p_23 = t;
  t = SSLsetAnnotations(p_23, m_66);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm g_47 = t;
  int h_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_67 = NULL,w_67 = NULL,c_68 = NULL,d_68 = NULL,z_23 = NULL;
      d_68 = t;
      if(match_cons(t, sym__2))
        {
          w_67 = ATgetArgument(t, 0);
          c_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_68);
      v_67 = t;
      t = w_67;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_67;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm i_47 = ATgetFirst((ATermList) t);
              ATerm o_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_67;
        }
      t = (ATerm) ATmakeAppl(sym__2, w_67, c_68);
      z_23 = t;
      t = SSLsetAnnotations(z_23, v_67);
      LocalPopChoice(h_47);
      t = conc_0_0(t);
    }
  else
    {
      t = g_47;
      {
        ATerm l_68 = NULL,m_68 = NULL;
        if(match_cons(t, sym__2))
          {
            l_68 = ATgetArgument(t, 0);
            m_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(m_68), l_68);
      }
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm p_47 = t;
  int q_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_68 = NULL;
      n_68 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = n_68;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm r_47 = ATgetFirst((ATermList) t);
              ATerm s_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_68;
        }
      LocalPopChoice(q_47);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = p_47;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(c_7, e_7, f_7, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_t_47;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_t_47;
  return(t);
}
ATerm next_counter_0_0 (ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL;
  g_69 = t;
  {
    ATerm u_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_69 = NULL,m_26 = NULL;
        t = term_t_47;
        m_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_47, g_69);
        t = w_14(m_26, g_69, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_47 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_47) != ATmakeSymbol("i_0", 0, ATtrue)))
              _fail(t);
            l_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_69;
        LocalPopChoice(v_47);
      }
    else
      {
        t = u_47;
        {
          ATerm o_69 = NULL;
          t = term_a_48;
          o_69 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_69, term_a_48);
          t = x_14(g_7, g_69, o_69, t);
          t = (ATerm) ATmakeAppl(sym__2, g_69, term_y_47);
        }
      }
  }
  j_69 = t;
  t = term_o_45;
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_69, term_o_45);
  t = k_15(j_69, k_69, t);
  h_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_47, h_69);
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_69, (ATerm) ATmakeAppl(sym_Defined_2, term_x_47, h_69));
  t = x_14(h_7, g_69, i_69, t);
  t = h_69;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_c_48;
  return(t);
}
ATerm NewNumberedVar_0_0 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
  q_69 = t;
  t = term_d_48;
  t = next_counter_0_0(t);
  p_69 = t;
  t = SSL_int_to_string(p_69);
  t_69 = t;
  t = term_e_48;
  v_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_48, t_69);
  t = h_15(v_69, t_69, t);
  s_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_48, s_69);
  u_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_69, (ATerm) ATmakeAppl(sym_Defined_2, term_f_48, s_69));
  t = x_14(k_7, q_69, u_69, t);
  t = s_69;
  return(t);
}
ATerm RenameVarTerm_2_0 (ATerm z_152 (ATerm), ATerm a_153 (ATerm), ATerm t)
{
  ATerm d_81 = NULL,e_81 = NULL,g_81 = NULL,d_82 = NULL,f_82 = NULL;
  g_81 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_82 = ATgetArgument(t, 0);
      {
        ATerm g_48 = t;
        int h_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_27 = NULL,g_27 = NULL,h_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,c_24 = NULL,b_24 = NULL;
            t = SSLgetAnnotations(g_81);
            e_27 = t;
            t = d_82;
            if(match_cons(t, sym_ListVar_1))
              {
                h_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_82);
            g_27 = t;
            t = h_27;
            t = z_152(t);
            l_27 = t;
            t = term_i_48;
            m_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, l_27, term_i_48);
            t = h_15(l_27, m_27, t);
            j_27 = t;
            t = (ATerm) ATmakeAppl(sym_ListVar_1, j_27);
            b_24 = t;
            t = SSLsetAnnotations(b_24, g_27);
            k_27 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, k_27);
            c_24 = t;
            t = SSLsetAnnotations(c_24, e_27);
            LocalPopChoice(h_48);
          }
        else
          {
            t = g_48;
            {
              ATerm c_28 = NULL,e_28 = NULL,h_24 = NULL;
              t = SSLgetAnnotations(g_81);
              c_28 = t;
              t = d_82;
              t = z_152(t);
              e_28 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, e_28);
              h_24 = t;
              t = SSLsetAnnotations(h_24, c_28);
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_SVar_1))
        {
          d_82 = ATgetArgument(t, 0);
          {
            ATerm n_28 = NULL,w_28 = NULL,i_24 = NULL;
            t = SSLgetAnnotations(g_81);
            n_28 = t;
            t = d_82;
            t = z_152(t);
            w_28 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, w_28);
            i_24 = t;
            t = SSLsetAnnotations(i_24, n_28);
          }
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              d_82 = ATgetArgument(t, 0);
              f_82 = ATgetArgument(t, 1);
              {
                ATerm g_29 = NULL,t_29 = NULL,j_24 = NULL;
                t = SSLgetAnnotations(g_81);
                g_29 = t;
                t = d_82;
                t = z_152(t);
                t_29 = t;
                t = (ATerm) ATmakeAppl(sym_VarDec_2, t_29, f_82);
                j_24 = t;
                t = SSLsetAnnotations(j_24, g_29);
              }
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  d_82 = ATgetArgument(t, 0);
                  {
                    ATerm d_30 = NULL,j_30 = NULL,k_24 = NULL;
                    t = SSLgetAnnotations(g_81);
                    d_30 = t;
                    t = d_82;
                    t = z_152(t);
                    j_30 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_30);
                    k_24 = t;
                    t = SSLsetAnnotations(k_24, d_30);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      d_82 = ATgetArgument(t, 0);
                      f_82 = ATgetArgument(t, 1);
                      {
                        ATerm w_30 = NULL,h_31 = NULL,i_31 = NULL,l_24 = NULL;
                        t = SSLgetAnnotations(g_81);
                        w_30 = t;
                        t = d_82;
                        t = z_152(t);
                        h_31 = t;
                        t = f_82;
                        t = a_153(t);
                        i_31 = t;
                        t = (ATerm) ATmakeAppl(sym_Rec_2, h_31, i_31);
                        l_24 = t;
                        t = SSLsetAnnotations(l_24, w_30);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefNoArgs_2))
                        {
                          d_82 = ATgetArgument(t, 0);
                          f_82 = ATgetArgument(t, 1);
                          {
                            ATerm s_31 = NULL,d_32 = NULL,e_32 = NULL,m_24 = NULL;
                            t = SSLgetAnnotations(g_81);
                            s_31 = t;
                            t = d_82;
                            t = z_152(t);
                            d_32 = t;
                            t = f_82;
                            t = a_153(t);
                            e_32 = t;
                            t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, d_32, e_32);
                            m_24 = t;
                            t = SSLsetAnnotations(m_24, s_31);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              d_82 = ATgetArgument(t, 0);
                              f_82 = ATgetArgument(t, 1);
                              d_81 = ATgetArgument(t, 2);
                              {
                                ATerm b_33 = NULL,k_33 = NULL,m_33 = NULL,n_33 = NULL,n_24 = NULL;
                                t = SSLgetAnnotations(g_81);
                                b_33 = t;
                                t = d_82;
                                t = z_152(t);
                                k_33 = t;
                                t = f_82;
                                t = a_153(t);
                                m_33 = t;
                                t = d_81;
                                t = a_153(t);
                                n_33 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, k_33, m_33, n_33);
                                n_24 = t;
                                t = SSLsetAnnotations(n_24, b_33);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  d_82 = ATgetArgument(t, 0);
                                  f_82 = ATgetArgument(t, 1);
                                  d_81 = ATgetArgument(t, 2);
                                  e_81 = ATgetArgument(t, 3);
                                  {
                                    ATerm q_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,b_35 = NULL,o_24 = NULL;
                                    t = SSLgetAnnotations(g_81);
                                    q_34 = t;
                                    t = d_82;
                                    t = z_152(t);
                                    x_34 = t;
                                    t = f_82;
                                    t = a_153(t);
                                    y_34 = t;
                                    t = d_81;
                                    t = a_153(t);
                                    z_34 = t;
                                    t = e_81;
                                    t = a_153(t);
                                    b_35 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, x_34, y_34, z_34, b_35);
                                    o_24 = t;
                                    t = SSLsetAnnotations(o_24, q_34);
                                  }
                                }
                              else
                                {
                                  ATerm t_35 = NULL,x_35 = NULL,d_36 = NULL,p_24 = NULL;
                                  if(match_cons(t, sym_Scope_2))
                                    {
                                      d_82 = ATgetArgument(t, 0);
                                      f_82 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(g_81);
                                  t_35 = t;
                                  t = d_82;
                                  t = map_1_0(z_152, t);
                                  x_35 = t;
                                  t = f_82;
                                  t = a_153(t);
                                  d_36 = t;
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, x_35, d_36);
                                  p_24 = t;
                                  t = SSLsetAnnotations(p_24, t_35);
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
static ATerm o_7 (ATerm t)
{
  t = term_c_48;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  t = term_t_47;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm k_48 = t;
  int p_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_88 = NULL,x_36 = NULL,e_37 = NULL;
      l_88 = t;
      t = term_c_48;
      e_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_48, l_88);
      t = w_14(e_37, l_88, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm q_48 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) q_48) != ATmakeSymbol("q_0", 0, ATtrue)))
            _fail(t);
          x_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_36;
      LocalPopChoice(p_48);
    }
  else
    {
      t = k_48;
      t = NewNumberedVar_0_0(t);
    }
  return(t);
}
ATerm dr_rename_vars_0_0 (ATerm t)
{
  static ATerm q_7 (ATerm t)
  {
    ATerm p_87 = NULL,u_87 = NULL,x_87 = NULL;
    static ATerm w_88 (ATerm t)
    {
      ATerm r_48 = t;
      int s_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RenameVarTerm_2_0(s_7, w_88, t);
          LocalPopChoice(s_48);
        }
      else
        {
          t = r_48;
          t = SRTS_all(w_88, t);
        }
      return(t);
    }
    p_87 = t;
    t = term_d_48;
    u_87 = t;
    t = term_a_48;
    x_87 = t;
    t = term_t_48;
    t = x_14(r_7, u_87, x_87, t);
    t = p_87;
    t = w_88(t);
    return(t);
  }
  t = scope_2_0(o_7, q_7, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm t_95 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_95);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm v_48 = t;
  int x_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_48);
    }
  else
    {
      t = v_48;
      {
        ATerm y_48 = t;
        int z_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_48);
          }
        else
          {
            t = y_48;
            {
              ATerm c_49 = t;
              int d_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_95 = NULL,w_95 = NULL,x_95 = NULL,y_95 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_95 = ATgetArgument(t, 0);
                      w_95 = ATgetArgument(t, 1);
                      x_95 = ATgetArgument(t, 2);
                      y_95 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_95;
                  t = map_1_0(v_7, t);
                  LocalPopChoice(d_49);
                }
              else
                {
                  t = c_49;
                  {
                    ATerm f_49 = t;
                    int g_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(g_49);
                      }
                    else
                      {
                        t = f_49;
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
  ATerm f_96 = NULL;
  ATerm j_49 = t;
  int m_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_96 = ATgetArgument(t, 0);
          {
            ATerm n_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_49);
      t = f_96;
    }
  else
    {
      t = j_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_96;
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  t = map_1_0(y_7, t);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm k_96 = NULL;
  ATerm o_49 = t;
  int p_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_96 = ATgetArgument(t, 0);
          {
            ATerm s_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_49);
      t = k_96;
    }
  else
    {
      t = o_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_96;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm n_96 = NULL;
  n_96 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_96);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm o_96 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_96);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm t_49 = t;
  int x_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_49);
    }
  else
    {
      t = t_49;
      {
        ATerm d_50 = t;
        int e_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_50);
          }
        else
          {
            t = d_50;
            {
              ATerm f_50 = t;
              int g_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_96 = NULL,r_96 = NULL,s_96 = NULL,t_96 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_96 = ATgetArgument(t, 0);
                      r_96 = ATgetArgument(t, 1);
                      s_96 = ATgetArgument(t, 2);
                      t_96 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_96;
                  t = map_1_0(d_8, t);
                  LocalPopChoice(g_50);
                }
              else
                {
                  t = f_50;
                  {
                    ATerm h_50 = t;
                    int i_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(i_50);
                      }
                    else
                      {
                        t = h_50;
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
  ATerm a_97 = NULL;
  ATerm j_50 = t;
  int k_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_97 = ATgetArgument(t, 0);
          {
            ATerm m_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_50);
      t = a_97;
    }
  else
    {
      t = j_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_97;
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  t = map_1_0(g_8, t);
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm f_97 = NULL;
  ATerm n_50 = t;
  int o_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_97 = ATgetArgument(t, 0);
          {
            ATerm p_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_50);
      t = f_97;
    }
  else
    {
      t = n_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_97;
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm i_97 = NULL;
  i_97 = t;
  {
    ATerm q_50 = t;
    int s_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_97 = NULL,m_37 = NULL,o_37 = NULL,b_26 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            o_97 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_97);
        m_37 = t;
        t = o_97;
        t = ContextVar_0_0(t);
        o_37 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, o_37);
        b_26 = t;
        t = SSLsetAnnotations(b_26, m_37);
        LocalPopChoice(s_50);
      }
    else
      {
        t = q_50;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, i_97);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm p_97 = NULL,q_97 = NULL;
  if(match_cons(t, sym__2))
    {
      p_97 = ATgetArgument(t, 0);
      q_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_15(p_97, q_97, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_o_45;
  return(t);
}
static ATerm m_8 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm r_97 = NULL,s_97 = NULL;
  if(match_cons(t, sym__2))
    {
      r_97 = ATgetArgument(t, 0);
      s_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_15(r_97, s_97, t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_o_45;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm z_97 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_97);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm t_50 = t;
  int u_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_50);
    }
  else
    {
      t = t_50;
      {
        ATerm w_50 = t;
        int x_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_50);
          }
        else
          {
            t = w_50;
            {
              ATerm y_50 = t;
              int z_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_98 = ATgetArgument(t, 0);
                      c_98 = ATgetArgument(t, 1);
                      d_98 = ATgetArgument(t, 2);
                      e_98 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_98;
                  t = map_1_0(u_8, t);
                  LocalPopChoice(z_50);
                }
              else
                {
                  t = y_50;
                  {
                    ATerm a_51 = t;
                    int b_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_51);
                      }
                    else
                      {
                        t = a_51;
                        t = dynrule_targs_1_0(v_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm l_98 = NULL;
  ATerm c_51 = t;
  int d_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_98 = ATgetArgument(t, 0);
          {
            ATerm e_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_51);
      t = l_98;
    }
  else
    {
      t = c_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_98;
    }
  return(t);
}
static ATerm v_8 (ATerm t)
{
  t = map_1_0(w_8, t);
  return(t);
}
static ATerm w_8 (ATerm t)
{
  ATerm u_98 = NULL;
  ATerm g_51 = t;
  int h_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_98 = ATgetArgument(t, 0);
          {
            ATerm i_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_51);
      t = u_98;
    }
  else
    {
      t = g_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_98;
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm x_98 = NULL,y_98 = NULL,z_98 = NULL;
  z_98 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      y_98 = ATgetArgument(t, 0);
      t = y_98;
    }
  else
    {
      t = z_98;
    }
  x_98 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_98);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm d_99 = NULL,e_99 = NULL;
  if(match_cons(t, sym__2))
    {
      d_99 = ATgetArgument(t, 0);
      e_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_15(d_99, e_99, t);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_o_45;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm f_99 = NULL,g_99 = NULL;
  if(match_cons(t, sym__2))
    {
      f_99 = ATgetArgument(t, 0);
      g_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_15(f_99, g_99, t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_o_45;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm o_99 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_99 = ATgetArgument(t, 0);
      t = o_99;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_99 = ATgetArgument(t, 0);
          {
            ATerm m_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = o_99;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, o_99), (ATerm) ATempty);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm z_99 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_99 = ATgetArgument(t, 0);
      t = z_99;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_99 = ATgetArgument(t, 0);
          {
            ATerm o_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = z_99;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, z_99);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm d_100 = NULL;
  d_100 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_100);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_w_51;
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm b_153 (ATerm), ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL,d_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,r_95 = NULL,s_95 = NULL;
  j_94 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm x_51 = ATgetArgument(t, 0);
      if(match_cons(x_51, sym_DynRuleId_1))
        {
          ATerm z_51 = ATgetArgument(x_51, 0);
          if(match_cons(z_51, sym_RDecT_3))
            {
              h_95 = ATgetArgument(z_51, 0);
              w_94 = ATgetArgument(z_51, 1);
              x_94 = ATgetArgument(z_51, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm y_51 = ATgetArgument(t, 1);
        if(match_cons(y_51, sym_Rule_3))
          {
            g_95 = ATgetArgument(y_51, 0);
            r_94 = ATgetArgument(y_51, 1);
            s_94 = ATgetArgument(y_51, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_95;
  t = dummify_0_0(t);
  n_95 = t;
  t = free_vars_3_0(t_7, u_7, tboundin_3_0, t);
  t = map_1_0(z_7, t);
  c_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_95, r_94, s_94);
  t = free_vars_3_0(a_8, b_8, tboundin_3_0, t);
  t = filter_1_0(h_8, t);
  b_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_94, c_94);
  t = diff_0_0(t);
  l_94 = t;
  t = w_94;
  t = foldr_3_0(i_8, j_8, l_8, t);
  r_95 = t;
  t = x_94;
  t = foldr_3_0(m_8, p_8, r_8, t);
  s_95 = t;
  t = j_94;
  t = dr_rename_vars_0_0(t);
  u_94 = t;
  {
    ATerm a_52 = t;
    int b_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_97 = NULL,r_37 = NULL;
        t = term_j_51;
        r_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_51, u_94);
        t = w_14(r_37, u_94, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm c_52 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_52) != ATmakeSymbol("t_0", 0, ATtrue)))
              _fail(t);
            t_97 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_97;
        v_94 = t;
        t = u_94;
        LocalPopChoice(b_52);
        t = (ATerm) ATempty;
        t_94 = t;
        t = (ATerm) ATempty;
        m_95 = t;
      }
    else
      {
        t = a_52;
        {
          ATerm u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL;
          t = term_g_43;
          y_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_43, h_95);
          t = h_15(y_97, h_95, t);
          j_95 = t;
          t = new_0_0(t);
          v_94 = t;
          t = new_0_0(t);
          f_95 = t;
          t = g_95;
          t = free_vars_3_0(s_8, t_8, tboundin_3_0, t);
          z_94 = t;
          t = map_1_0(d_9, t);
          w_97 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_95))), w_97), x_94);
          t = concat_0_0(t);
          k_94 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, j_95, w_94, k_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(l_94), (ATerm) ATmakeAppl(sym_Str_1, v_94))), r_94, (ATerm) ATmakeAppl(sym_BA_2, s_94, (ATerm) ATmakeAppl(sym_Var_1, f_95)))));
          t_94 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_52, v_94);
          x_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_94, (ATerm) ATmakeAppl(sym_Defined_2, term_d_52, v_94));
          t = x_14(g_9, u_94, x_97, t);
          t = w_94;
          t = foldr_3_0(h_9, k_9, p_9, t);
          u_97 = t;
          t = x_94;
          t = foldr_3_0(q_9, v_9, w_9, t);
          v_97 = t;
          t = u_97;
          if((r_95 != t))
            {
              _fail(t);
            }
          t = v_97;
          if((s_95 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_95, (ATerm) ATmakeAppl(sym__2, u_97, v_97));
          {
            ATerm e_52 = t;
            int f_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_37 = NULL,x_37 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_95, (ATerm) ATmakeAppl(sym__2, u_97, v_97)), n_95);
                w_37 = t;
                t = term_w_51;
                x_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_51, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_95, (ATerm) ATmakeAppl(sym__2, u_97, v_97)), n_95));
                t = w_14(x_37, w_37, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm g_52 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) g_52) != ATmakeSymbol("w_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, h_95, (ATerm) ATmakeAppl(sym__2, u_97, v_97));
                LocalPopChoice(f_52);
                t = (ATerm) ATempty;
                m_95 = t;
              }
            else
              {
                t = e_52;
                {
                  ATerm h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL,l_99 = NULL;
                  t = term_f_43;
                  l_99 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_f_43, h_95);
                  t = h_15(l_99, h_95, t);
                  a_95 = t;
                  t = term_h_52;
                  k_99 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_h_52, h_95);
                  t = h_15(k_99, h_95, t);
                  d_95 = t;
                  t = w_94;
                  t = map_1_0(x_9, t);
                  k_95 = t;
                  t = x_94;
                  t = map_1_0(z_9, t);
                  y_94 = t;
                  t = z_94;
                  t = map_1_0(c_10, t);
                  h_99 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_95))), h_99), y_94);
                  t = concat_0_0(t);
                  l_95 = t;
                  t = n_95;
                  {
                    ATerm i_52 = t;
                    int j_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = n_95;
                        if((g_95 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, f_95);
                        LocalPopChoice(j_52);
                      }
                    else
                      {
                        t = i_52;
                        t = n_95;
                      }
                  }
                  i_95 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, d_95, w_94, x_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_95), g_95), term_t_52, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_v_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_95), (ATerm) ATmakeAppl(sym_Str_1, h_95))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_52), term_x_52), term_n_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_53, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_95), k_95, l_95), term_d_53))), term_g_53), term_n_52), term_i_53), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, term_k_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_i_53), term_x_52)), term_z_52)))))), (ATerm) ATmakeAppl(sym_RDefT_4, a_95, w_94, x_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_95), g_95), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_95), k_95, l_95))), term_n_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_95), (ATerm) ATmakeAppl(sym_Str_1, h_95))), term_q_52), term_n_52)))), (ATerm) ATmakeAppl(sym_RDefT_4, h_95, w_94, x_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_95), g_95), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_95), k_95, l_95))), term_n_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_95), (ATerm) ATmakeAppl(sym_Str_1, h_95))), term_n_52))));
                  m_95 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_95, (ATerm) ATmakeAppl(sym__2, u_97, v_97)), n_95);
                  i_99 = t;
                  t = term_m_53;
                  j_99 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_95, (ATerm) ATmakeAppl(sym__2, u_97, v_97)), n_95), term_m_53);
                  t = x_14(d_10, i_99, j_99, t);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, d_95, w_94, x_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_95), g_95), term_t_52, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_v_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_95), (ATerm) ATmakeAppl(sym_Str_1, h_95))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_52), term_x_52), term_n_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_53, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_95), k_95, l_95), term_d_53))), term_g_53), term_n_52), term_i_53), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, term_k_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_i_53), term_x_52)), term_z_52)))))), (ATerm) ATmakeAppl(sym_RDefT_4, a_95, w_94, x_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_95), g_95), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_95), k_95, l_95))), term_n_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_95), (ATerm) ATmakeAppl(sym_Str_1, h_95))), term_q_52), term_n_52)))), (ATerm) ATmakeAppl(sym_RDefT_4, h_95, w_94, x_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_95), g_95), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_95), k_95, l_95))), term_n_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_95), (ATerm) ATmakeAppl(sym_Str_1, h_95))), term_n_52))));
                }
              }
          }
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, n_95, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(l_94), (ATerm) ATmakeAppl(sym_Str_1, v_94))));
  t = b_153(t);
  o_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_94, m_95);
  t = conc_0_0(t);
  p_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, o_95), p_95);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm d_101 = NULL,e_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL,o_101 = NULL,p_101 = NULL;
  k_101 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      o_101 = ATgetArgument(t, 0);
      p_101 = ATgetArgument(t, 1);
      t = o_101;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          e_101 = ATgetArgument(t, 0);
          d_101 = ATgetArgument(t, 1);
          {
            static ATerm e_10 (ATerm t)
            {
              ATerm z_101 = NULL,a_102 = NULL;
              z_101 = t;
              t = SSL_explode_term(z_101);
              if(match_cons(t, sym__2))
                {
                  ATerm n_53 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_53) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm o_53 = ATgetArgument(t, 1);
                    if(((ATgetType(o_53) == AT_LIST) && !(ATisEmpty(o_53))))
                      {
                        a_102 = ATgetFirst((ATermList) o_53);
                        {
                          ATerm p_53 = (ATerm) ATgetNext((ATermList) o_53);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_102), d_101), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
              return(t);
            }
            t = e_101;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((h_101 != NULL) && (h_101 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_101 = ATgetArgument(t, 0);
                i_101 = ATgetArgument(t, 1);
                j_101 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_101, i_101, j_101)), (ATerm) ATmakeAppl(sym_Rule_3, p_101, term_s_53, term_v_29));
            t = SplitDynamicRule_1_0(e_10, t);
          }
        }
      else
        {
          static ATerm f_10 (ATerm t)
          {
            ATerm h_102 = NULL,i_102 = NULL;
            h_102 = t;
            t = SSL_explode_term(h_102);
            if(match_cons(t, sym__2))
              {
                ATerm t_53 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_53) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm w_53 = ATgetArgument(t, 1);
                  if(((ATgetType(w_53) == AT_LIST) && !(ATisEmpty(w_53))))
                    {
                      i_102 = ATgetFirst((ATermList) w_53);
                      {
                        ATerm x_53 = (ATerm) ATgetNext((ATermList) w_53);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_102), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              e_101 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_101;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((h_101 != NULL) && (h_101 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                h_101 = ATgetArgument(t, 0);
              i_101 = ATgetArgument(t, 1);
              j_101 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_101, i_101, j_101)), (ATerm) ATmakeAppl(sym_Rule_3, p_101, term_s_53, term_v_29));
          t = SplitDynamicRule_1_0(f_10, t);
        }
    }
  else
    {
      if(match_cons(t, sym_SetDynRuleMatch_2))
        {
          o_101 = ATgetArgument(t, 0);
          p_101 = ATgetArgument(t, 1);
          t = o_101;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              e_101 = ATgetArgument(t, 0);
              d_101 = ATgetArgument(t, 1);
              {
                static ATerm h_10 (ATerm t)
                {
                  ATerm w_102 = NULL,x_102 = NULL,a_38 = NULL;
                  w_102 = t;
                  t = SSL_explode_term(w_102);
                  if(match_cons(t, sym__2))
                    {
                      ATerm y_53 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) y_53) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm z_53 = ATgetArgument(t, 1);
                        if(((ATgetType(z_53) == AT_LIST) && !(ATisEmpty(z_53))))
                          {
                            x_102 = ATgetFirst((ATermList) z_53);
                            {
                              ATerm a_54 = (ATerm) ATgetNext((ATermList) z_53);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(w_102);
                  if(match_cons(t, sym__2))
                    {
                      ATerm b_54 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) b_54) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm c_54 = ATgetArgument(t, 1);
                        if(((ATgetType(c_54) == AT_LIST) && !(ATisEmpty(c_54))))
                          {
                            ATerm d_54 = ATgetFirst((ATermList) c_54);
                            ATerm e_54 = (ATerm) ATgetNext((ATermList) c_54);
                            if(((ATgetType(e_54) == AT_LIST) && !(ATisEmpty(e_54))))
                              {
                                a_38 = ATgetFirst((ATermList) e_54);
                                {
                                  ATerm f_54 = (ATerm) ATgetNext((ATermList) e_54);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_38), x_102), d_101), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
                  return(t);
                }
                t = e_101;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((h_101 != NULL) && (h_101 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      h_101 = ATgetArgument(t, 0);
                    i_101 = ATgetArgument(t, 1);
                    j_101 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_101, i_101, j_101)), (ATerm) ATmakeAppl(sym_Rule_3, p_101, p_101, term_v_29));
                t = SplitDynamicRule_1_0(h_10, t);
              }
            }
          else
            {
              static ATerm i_10 (ATerm t)
              {
                ATerm e_103 = NULL,f_103 = NULL,d_38 = NULL;
                e_103 = t;
                t = SSL_explode_term(e_103);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_54 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) k_54) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm l_54 = ATgetArgument(t, 1);
                      if(((ATgetType(l_54) == AT_LIST) && !(ATisEmpty(l_54))))
                        {
                          f_103 = ATgetFirst((ATermList) l_54);
                          {
                            ATerm m_54 = (ATerm) ATgetNext((ATermList) l_54);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(e_103);
                if(match_cons(t, sym__2))
                  {
                    ATerm n_54 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) n_54) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm o_54 = ATgetArgument(t, 1);
                      if(((ATgetType(o_54) == AT_LIST) && !(ATisEmpty(o_54))))
                        {
                          ATerm p_54 = ATgetFirst((ATermList) o_54);
                          ATerm q_54 = (ATerm) ATgetNext((ATermList) o_54);
                          if(((ATgetType(q_54) == AT_LIST) && !(ATisEmpty(q_54))))
                            {
                              d_38 = ATgetFirst((ATermList) q_54);
                              {
                                ATerm r_54 = (ATerm) ATgetNext((ATermList) q_54);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_38), f_103), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  e_101 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_101;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((h_101 != NULL) && (h_101 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    h_101 = ATgetArgument(t, 0);
                  i_101 = ATgetArgument(t, 1);
                  j_101 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_101, i_101, j_101)), (ATerm) ATmakeAppl(sym_Rule_3, p_101, p_101, term_v_29));
              t = SplitDynamicRule_1_0(i_10, t);
            }
        }
      else
        {
          if(match_cons(t, sym_AddDynRule_2))
            {
              o_101 = ATgetArgument(t, 0);
              p_101 = ATgetArgument(t, 1);
              t = o_101;
              if(match_cons(t, sym_LabeledDynRuleId_2))
                {
                  e_101 = ATgetArgument(t, 0);
                  d_101 = ATgetArgument(t, 1);
                  {
                    static ATerm l_10 (ATerm t)
                    {
                      ATerm m_103 = NULL,o_103 = NULL,g_38 = NULL;
                      m_103 = t;
                      t = SSL_explode_term(m_103);
                      if(match_cons(t, sym__2))
                        {
                          ATerm t_54 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) t_54) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm u_54 = ATgetArgument(t, 1);
                            if(((ATgetType(u_54) == AT_LIST) && !(ATisEmpty(u_54))))
                              {
                                o_103 = ATgetFirst((ATermList) u_54);
                                {
                                  ATerm v_54 = (ATerm) ATgetNext((ATermList) u_54);
                                }
                              }
                            else
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      t = SSL_explode_term(m_103);
                      if(match_cons(t, sym__2))
                        {
                          ATerm w_54 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) w_54) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm x_54 = ATgetArgument(t, 1);
                            if(((ATgetType(x_54) == AT_LIST) && !(ATisEmpty(x_54))))
                              {
                                ATerm y_54 = ATgetFirst((ATermList) x_54);
                                ATerm z_54 = (ATerm) ATgetNext((ATermList) x_54);
                                if(((ATgetType(z_54) == AT_LIST) && !(ATisEmpty(z_54))))
                                  {
                                    g_38 = ATgetFirst((ATermList) z_54);
                                    {
                                      ATerm a_55 = (ATerm) ATgetNext((ATermList) z_54);
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
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_38), o_103), d_101), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
                      return(t);
                    }
                    t = e_101;
                    if(match_cons(t, sym_RDecT_3))
                      {
                        if(((h_101 != NULL) && (h_101 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          h_101 = ATgetArgument(t, 0);
                        i_101 = ATgetArgument(t, 1);
                        j_101 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_101, i_101, j_101)), p_101);
                    t = SplitDynamicRule_1_0(l_10, t);
                  }
                }
              else
                {
                  static ATerm m_10 (ATerm t)
                  {
                    ATerm c_104 = NULL,d_104 = NULL,i_38 = NULL;
                    c_104 = t;
                    t = SSL_explode_term(c_104);
                    if(match_cons(t, sym__2))
                      {
                        ATerm d_55 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) d_55) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm e_55 = ATgetArgument(t, 1);
                          if(((ATgetType(e_55) == AT_LIST) && !(ATisEmpty(e_55))))
                            {
                              d_104 = ATgetFirst((ATermList) e_55);
                              {
                                ATerm f_55 = (ATerm) ATgetNext((ATermList) e_55);
                              }
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(c_104);
                    if(match_cons(t, sym__2))
                      {
                        ATerm h_55 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) h_55) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm j_55 = ATgetArgument(t, 1);
                          if(((ATgetType(j_55) == AT_LIST) && !(ATisEmpty(j_55))))
                            {
                              ATerm k_55 = ATgetFirst((ATermList) j_55);
                              ATerm l_55 = (ATerm) ATgetNext((ATermList) j_55);
                              if(((ATgetType(l_55) == AT_LIST) && !(ATisEmpty(l_55))))
                                {
                                  i_38 = ATgetFirst((ATermList) l_55);
                                  {
                                    ATerm m_55 = (ATerm) ATgetNext((ATermList) l_55);
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
                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_38), d_104), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
                    return(t);
                  }
                  if(match_cons(t, sym_DynRuleId_1))
                    {
                      e_101 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = e_101;
                  if(match_cons(t, sym_RDecT_3))
                    {
                      if(((h_101 != NULL) && (h_101 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_101 = ATgetArgument(t, 0);
                      i_101 = ATgetArgument(t, 1);
                      j_101 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_101, i_101, j_101)), p_101);
                  t = SplitDynamicRule_1_0(m_10, t);
                }
            }
          else
            {
              if(match_cons(t, sym_SetDynRule_2))
                {
                  o_101 = ATgetArgument(t, 0);
                  p_101 = ATgetArgument(t, 1);
                  t = o_101;
                  if(match_cons(t, sym_LabeledDynRuleId_2))
                    {
                      e_101 = ATgetArgument(t, 0);
                      d_101 = ATgetArgument(t, 1);
                      {
                        static ATerm n_10 (ATerm t)
                        {
                          ATerm n_104 = NULL,o_104 = NULL,l_38 = NULL;
                          n_104 = t;
                          t = SSL_explode_term(n_104);
                          if(match_cons(t, sym__2))
                            {
                              ATerm o_55 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) o_55) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm p_55 = ATgetArgument(t, 1);
                                if(((ATgetType(p_55) == AT_LIST) && !(ATisEmpty(p_55))))
                                  {
                                    o_104 = ATgetFirst((ATermList) p_55);
                                    {
                                      ATerm q_55 = (ATerm) ATgetNext((ATermList) p_55);
                                    }
                                  }
                                else
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          t = SSL_explode_term(n_104);
                          if(match_cons(t, sym__2))
                            {
                              ATerm r_55 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) r_55) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm s_55 = ATgetArgument(t, 1);
                                if(((ATgetType(s_55) == AT_LIST) && !(ATisEmpty(s_55))))
                                  {
                                    ATerm t_55 = ATgetFirst((ATermList) s_55);
                                    ATerm w_55 = (ATerm) ATgetNext((ATermList) s_55);
                                    if(((ATgetType(w_55) == AT_LIST) && !(ATisEmpty(w_55))))
                                      {
                                        l_38 = ATgetFirst((ATermList) w_55);
                                        {
                                          ATerm x_55 = (ATerm) ATgetNext((ATermList) w_55);
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
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_38), o_104), d_101), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
                          return(t);
                        }
                        t = e_101;
                        if(match_cons(t, sym_RDecT_3))
                          {
                            if(((h_101 != NULL) && (h_101 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              h_101 = ATgetArgument(t, 0);
                            i_101 = ATgetArgument(t, 1);
                            j_101 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_101, i_101, j_101)), p_101);
                        t = SplitDynamicRule_1_0(n_10, t);
                      }
                    }
                  else
                    {
                      static ATerm o_10 (ATerm t)
                      {
                        ATerm v_104 = NULL,a_105 = NULL,n_38 = NULL;
                        v_104 = t;
                        t = SSL_explode_term(v_104);
                        if(match_cons(t, sym__2))
                          {
                            ATerm y_55 = ATgetArgument(t, 0);
                            if((ATgetSymbol((ATermAppl) y_55) != ATmakeSymbol("", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm z_55 = ATgetArgument(t, 1);
                              if(((ATgetType(z_55) == AT_LIST) && !(ATisEmpty(z_55))))
                                {
                                  a_105 = ATgetFirst((ATermList) z_55);
                                  {
                                    ATerm a_56 = (ATerm) ATgetNext((ATermList) z_55);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = SSL_explode_term(v_104);
                        if(match_cons(t, sym__2))
                          {
                            ATerm b_56 = ATgetArgument(t, 0);
                            if((ATgetSymbol((ATermAppl) b_56) != ATmakeSymbol("", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm c_56 = ATgetArgument(t, 1);
                              if(((ATgetType(c_56) == AT_LIST) && !(ATisEmpty(c_56))))
                                {
                                  ATerm d_56 = ATgetFirst((ATermList) c_56);
                                  ATerm e_56 = (ATerm) ATgetNext((ATermList) c_56);
                                  if(((ATgetType(e_56) == AT_LIST) && !(ATisEmpty(e_56))))
                                    {
                                      n_38 = ATgetFirst((ATermList) e_56);
                                      {
                                        ATerm f_56 = (ATerm) ATgetNext((ATermList) e_56);
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
                        t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, n_38), a_105), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
                        return(t);
                      }
                      if(match_cons(t, sym_DynRuleId_1))
                        {
                          e_101 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = e_101;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          if(((h_101 != NULL) && (h_101 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            h_101 = ATgetArgument(t, 0);
                          {
                            ATerm g_56 = ATgetArgument(t, 1);
                          }
                          {
                            ATerm h_56 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = k_101;
                      t = SplitDynamicRule_1_0(o_10, t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_AddScopeLabel_2))
                    {
                      o_101 = ATgetArgument(t, 0);
                      p_101 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, term_o_56, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, p_101), (ATerm) ATmakeAppl(sym_Str_1, o_101))), (ATerm) ATempty);
                }
            }
        }
    }
  return(t);
}
ATerm DesugarDynRuleDef_0_0 (ATerm t)
{
  ATerm t_105 = NULL,u_105 = NULL,v_105 = NULL,w_105 = NULL,x_105 = NULL,y_105 = NULL,z_105 = NULL;
  if(match_cons(t, sym_SetDynRuleMatch_2))
    {
      t_105 = ATgetArgument(t, 0);
      z_105 = ATgetArgument(t, 1);
      t = t_105;
      if(match_cons(t, sym_AddLabelDynRuleId_2))
        {
          u_105 = ATgetArgument(t, 0);
          y_105 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_105;
      if(match_cons(t, sym_RDecT_3))
        {
          v_105 = ATgetArgument(t, 0);
          w_105 = ATgetArgument(t, 1);
          x_105 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, v_105, y_105)), (ATerm) ATmakeAppl(sym_SetDynRuleMatch_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, v_105, w_105, x_105)), z_105));
    }
  else
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          t_105 = ATgetArgument(t, 0);
          z_105 = ATgetArgument(t, 1);
          t = t_105;
          if(match_cons(t, sym_AddLabelDynRuleId_2))
            {
              u_105 = ATgetArgument(t, 0);
              y_105 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_105;
          if(match_cons(t, sym_RDecT_3))
            {
              v_105 = ATgetArgument(t, 0);
              w_105 = ATgetArgument(t, 1);
              x_105 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, v_105, y_105)), (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, v_105, w_105, x_105)), z_105));
        }
      else
        {
          if(match_cons(t, sym_AddDynRule_2))
            {
              t_105 = ATgetArgument(t, 0);
              z_105 = ATgetArgument(t, 1);
              t = t_105;
              if(match_cons(t, sym_AddLabelDynRuleId_2))
                {
                  u_105 = ATgetArgument(t, 0);
                  y_105 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_105;
              if(match_cons(t, sym_RDecT_3))
                {
                  v_105 = ATgetArgument(t, 0);
                  w_105 = ATgetArgument(t, 1);
                  x_105 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, v_105, y_105)), (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, v_105, w_105, x_105)), z_105));
            }
          else
            {
              if(match_cons(t, sym_SetDynRule_2))
                {
                  t_105 = ATgetArgument(t, 0);
                  z_105 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_105;
              if(match_cons(t, sym_AddLabelDynRuleId_2))
                {
                  u_105 = ATgetArgument(t, 0);
                  y_105 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_105;
              if(match_cons(t, sym_RDecT_3))
                {
                  v_105 = ATgetArgument(t, 0);
                  w_105 = ATgetArgument(t, 1);
                  x_105 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, v_105, y_105)), (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, v_105, w_105, x_105)), z_105));
            }
        }
    }
  return(t);
}
ATerm split_dynamic_rule_0_0 (ATerm t)
{
  ATerm p_56 = t;
  int v_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarDynRuleDef_0_0(t);
      LocalPopChoice(v_56);
    }
  else
    {
      t = p_56;
      {
        ATerm w_106 = NULL;
        w_106 = t;
        t = (ATerm) ATinsert(ATempty, w_106);
      }
    }
  t = map_1_0(SplitDynamicRule_0_0, t);
  return(t);
}
static ATerm m_11 (ATerm t)
{
  t = term_b_45;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm c_153 (ATerm), ATerm t)
{
  static ATerm f_107 (ATerm t)
  {
    static ATerm p_10 (ATerm t)
    {
      ATerm w_56 = t;
      int x_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_153(t);
          LocalPopChoice(x_56);
        }
      else
        {
          t = w_56;
          {
            ATerm a_107 = NULL,b_107 = NULL,e_107 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                a_107 = ATgetArgument(t, 0);
                b_107 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, a_107, b_107);
            {
              static ATerm n_11 (ATerm t)
              {
                t = a_107;
                t = DeclareContextVars_0_0(t);
                t = b_107;
                t = f_107(t);
                if(((e_107 != NULL) && (e_107 != t)))
                  _fail(t);
                else
                  e_107 = t;
                return(t);
              }
              t = scope_2_0(m_11, n_11, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, a_107, not_null(e_107));
          }
        }
      return(t);
    }
    t = oncetd_1_0(p_10, t);
    return(t);
  }
  t = f_107(t);
  return(t);
}
static ATerm u_11 (ATerm t)
{
  ATerm i_107 = NULL,k_107 = NULL,l_107 = NULL,m_107 = NULL;
  m_107 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      l_107 = ATgetArgument(t, 0);
      {
        ATerm y_56 = t;
        int z_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_107;
            i_107 = t;
            t = m_107;
            LocalPopChoice(z_56);
          }
        else
          {
            t = y_56;
            t = m_107;
            i_107 = t;
            t = m_107;
          }
      }
    }
  else
    {
      t = m_107;
      i_107 = t;
      t = m_107;
    }
  t = term_e_57;
  k_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_107, term_e_57);
  t = x_14(x_11, i_107, k_107, t);
  t = m_107;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_b_45;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm n_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL;
  r_107 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      q_107 = ATgetArgument(t, 0);
      {
        ATerm g_57 = t;
        int h_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_107;
            n_107 = t;
            t = r_107;
            LocalPopChoice(h_57);
          }
        else
          {
            t = g_57;
            t = r_107;
            n_107 = t;
            t = r_107;
          }
      }
    }
  else
    {
      t = r_107;
      n_107 = t;
      t = r_107;
    }
  t = term_l_57;
  p_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_107, term_l_57);
  t = x_14(f_12, n_107, p_107, t);
  t = r_107;
  return(t);
}
static ATerm f_12 (ATerm t)
{
  t = term_b_45;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm q_57 = t;
  int u_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(u_11, t);
      LocalPopChoice(u_57);
    }
  else
    {
      t = q_57;
      t = map_1_0(y_11, t);
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm w_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_38);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm v_57 = t;
  int w_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_57);
    }
  else
    {
      t = v_57;
      {
        ATerm y_57 = t;
        int z_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_57);
          }
        else
          {
            t = y_57;
            {
              ATerm b_58 = t;
              int c_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_38 = NULL,z_38 = NULL,b_39 = NULL,c_39 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_38 = ATgetArgument(t, 0);
                      z_38 = ATgetArgument(t, 1);
                      b_39 = ATgetArgument(t, 2);
                      c_39 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_39;
                  t = map_1_0(k_12, t);
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
                        t = dynrule_targs_1_0(o_12, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_12 (ATerm t)
{
  ATerm k_39 = NULL;
  ATerm f_58 = t;
  int g_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_39 = ATgetArgument(t, 0);
          {
            ATerm h_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_58);
      t = k_39;
    }
  else
    {
      t = f_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_39;
    }
  return(t);
}
static ATerm o_12 (ATerm t)
{
  t = map_1_0(p_12, t);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm q_39 = NULL;
  ATerm l_58 = t;
  int m_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_39 = ATgetArgument(t, 0);
          {
            ATerm n_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_58);
      t = q_39;
    }
  else
    {
      t = l_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_39;
    }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm h_40 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_40 = ATgetArgument(t, 0);
      t = h_40;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_40 = ATgetArgument(t, 0);
          {
            ATerm o_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_40;
    }
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm n_40 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_40 = ATgetArgument(t, 0);
      t = n_40;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_40 = ATgetArgument(t, 0);
          {
            ATerm p_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_40;
    }
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm s_40 = NULL;
  if(match_cons(t, sym__2))
    {
      s_40 = ATgetArgument(t, 0);
      if((s_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm s_13 (ATerm t)
{
  ATerm g_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_41);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm q_58 = t;
  int t_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_58);
    }
  else
    {
      t = q_58;
      {
        ATerm u_58 = t;
        int x_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_58);
          }
        else
          {
            t = u_58;
            {
              ATerm y_58 = t;
              int z_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_41 = NULL,r_41 = NULL,s_41 = NULL,u_41 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_41 = ATgetArgument(t, 0);
                      r_41 = ATgetArgument(t, 1);
                      s_41 = ATgetArgument(t, 2);
                      u_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_41;
                  t = map_1_0(u_13, t);
                  LocalPopChoice(z_58);
                }
              else
                {
                  t = y_58;
                  {
                    ATerm a_59 = t;
                    int e_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_59);
                      }
                    else
                      {
                        t = a_59;
                        t = dynrule_targs_1_0(b_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm k_42 = NULL;
  ATerm f_59 = t;
  int h_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_42 = ATgetArgument(t, 0);
          {
            ATerm j_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_59);
      t = k_42;
    }
  else
    {
      t = f_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_42;
    }
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = map_1_0(h_14, t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm u_42 = NULL;
  ATerm k_59 = t;
  int l_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_42 = ATgetArgument(t, 0);
          {
            ATerm m_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_59);
      t = u_42;
    }
  else
    {
      t = k_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_42;
    }
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm y_43 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_43 = ATgetArgument(t, 0);
      t = y_43;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_43 = ATgetArgument(t, 0);
          {
            ATerm n_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_43;
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm i_44 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_44 = ATgetArgument(t, 0);
      t = i_44;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_44 = ATgetArgument(t, 0);
          {
            ATerm o_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = i_44;
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm q_44 = NULL;
  if(match_cons(t, sym__2))
    {
      q_44 = ATgetArgument(t, 0);
      if((q_44 != ATgetArgument(t, 1)))
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
  ATerm l_112 = NULL;
  l_112 = t;
  {
    ATerm p_59 = t;
    int r_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_38 = NULL,s_38 = NULL;
        t = l_112;
        t = free_vars_3_0(g_12, h_12, tboundin_3_0, t);
        r_38 = t;
        t = l_112;
        {
          ATerm a_60 = t;
          int b_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_40 = NULL;
              ATerm c_60 = t;
              int d_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm e_60 = ATgetArgument(t, 0);
                      ATerm f_60 = ATgetArgument(t, 1);
                      c_40 = ATgetArgument(t, 2);
                      {
                        ATerm g_60 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_60);
                  t = c_40;
                  t = map_1_0(s_12, t);
                }
              else
                {
                  t = c_60;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm i_60 = ATgetArgument(t, 0);
                      ATerm k_60 = ATgetArgument(t, 1);
                      c_40 = ATgetArgument(t, 2);
                      {
                        ATerm l_60 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = c_40;
                  t = map_1_0(t_12, t);
                }
              LocalPopChoice(b_60);
            }
          else
            {
              t = a_60;
              t = (ATerm) ATempty;
            }
        }
        s_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_38, s_38);
        t = l_14(u_12, r_38, s_38, t);
        LocalPopChoice(r_59);
      }
    else
      {
        t = p_59;
        {
          ATerm d_41 = NULL,e_41 = NULL;
          t = l_112;
          t = free_vars_3_0(s_13, t_13, tboundin_3_0, t);
          d_41 = t;
          t = l_112;
          {
            ATerm n_60 = t;
            int r_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_43 = NULL;
                ATerm s_60 = t;
                int t_60 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm u_60 = ATgetArgument(t, 0);
                        ATerm v_60 = ATgetArgument(t, 1);
                        q_43 = ATgetArgument(t, 2);
                        {
                          ATerm w_60 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(t_60);
                    t = q_43;
                    t = map_1_0(i_14, t);
                  }
                else
                  {
                    t = s_60;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm x_60 = ATgetArgument(t, 0);
                        ATerm y_60 = ATgetArgument(t, 1);
                        q_43 = ATgetArgument(t, 2);
                        {
                          ATerm z_60 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = q_43;
                    t = map_1_0(j_14, t);
                  }
                LocalPopChoice(r_60);
              }
            else
              {
                t = n_60;
                t = (ATerm) ATempty;
              }
          }
          e_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_41, e_41);
          t = l_14(k_14, d_41, e_41, t);
        }
      }
  }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_b_45;
  return(t);
}
static ATerm r_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_37;
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_112 = ATgetFirst((ATermList) t);
      a_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_112, a_113);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm b_113 = NULL,c_113 = NULL,d_113 = NULL,e_113 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_61 = ATgetArgument(t, 0);
      if(match_cons(a_61, sym__2))
        {
          b_113 = ATgetArgument(a_61, 0);
          c_113 = ATgetArgument(a_61, 1);
        }
      else
        _fail(t);
      {
        ATerm g_61 = ATgetArgument(t, 1);
        if(match_cons(g_61, sym__2))
          {
            d_113 = ATgetArgument(g_61, 0);
            e_113 = ATgetArgument(g_61, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_113), b_113), (ATerm) ATinsert(CheckATermList(e_113), c_113));
  return(t);
}
static ATerm c_14 (ATerm n_90, ATerm m_90, ATerm t)
{
  ATerm p_112 = NULL,q_112 = NULL,r_112 = NULL;
  static ATerm p_14 (ATerm t)
  {
    t = n_90;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = n_90;
    {
      static ATerm q_14 (ATerm t)
      {
        ATerm t_112 = NULL,u_112 = NULL,v_112 = NULL,w_112 = NULL,x_112 = NULL,y_112 = NULL,g_26 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            t_112 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_112;
        t = map_1_0(split_dynamic_rule_0_0, t);
        t = flatten_list_0_0(t);
        t = genzip_4_0(r_14, t_14, u_14, _id, t);
        y_112 = t;
        if(match_cons(t, sym__2))
          {
            v_112 = ATgetArgument(t, 0);
            w_112 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_112);
        u_112 = t;
        t = w_112;
        t = concat_0_0(t);
        x_112 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_112, x_112);
        g_26 = t;
        t = SSLsetAnnotations(g_26, u_112);
        if(match_cons(t, sym__2))
          {
            if(((q_112 != NULL) && (q_112 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              q_112 = ATgetArgument(t, 0);
            if(((p_112 != NULL) && (p_112 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              p_112 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, q_112);
        return(t);
      }
      t = split_dynamic_rule_1_0(q_14, t);
    }
    if(((r_112 != NULL) && (r_112 != t)))
      _fail(t);
    else
      r_112 = t;
    return(t);
  }
  t = scope_2_0(o_14, p_14, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_112)), not_null(r_112)), m_90);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm z_117 (ATerm), ATerm a_118 (ATerm), ATerm t)
{
  static ATerm g_113 (ATerm t)
  {
    ATerm h_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_117(t);
        t = g_113(t);
        LocalPopChoice(i_61);
      }
    else
      {
        t = h_61;
        t = a_118(t);
      }
    return(t);
  }
  t = g_113(t);
  return(t);
}
ATerm listtd_1_0 (ATerm v_126 (ATerm), ATerm t)
{
  static ATerm u_113 (ATerm t)
  {
    ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL;
    t = v_126(t);
    r_113 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_113;
      }
    else
      {
        ATerm c_45 = NULL,f_45 = NULL,i_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_113 = ATgetFirst((ATermList) t);
            t_113 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_113);
        c_45 = t;
        t = t_113;
        t = u_113(t);
        f_45 = t;
        t = (ATerm) ATinsert(CheckATermList(f_45), s_113);
        i_26 = t;
        t = SSLsetAnnotations(i_26, c_45);
      }
    return(t);
  }
  t = u_113(t);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm t)
{
  ATerm l_61 = t;
  int o_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_113 = NULL;
      t = e_131(t);
      w_113 = t;
      t = (ATerm) ATinsert(ATempty, w_113);
      LocalPopChoice(o_61);
    }
  else
    {
      t = l_61;
      {
        ATerm m_45 = NULL,n_45 = NULL;
        static ATerm l_15 (ATerm t)
        {
          t = collect_om_2_0(e_131, f_131, t);
          return(t);
        }
        n_45 = t;
        t = SSL_explode_term(n_45);
        if(match_cons(t, sym__2))
          {
            ATerm p_61 = ATgetArgument(t, 0);
            m_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_45;
        t = foldr_3_0(v_14, f_131, l_15, t);
      }
    }
  return(t);
}
ATerm partition_1_0 (ATerm x_133 (ATerm), ATerm t)
{
  static ATerm c_115 (ATerm t)
  {
    ATerm z_114 = NULL,a_115 = NULL,b_115 = NULL;
    z_114 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_y_37;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_115 = ATgetFirst((ATermList) t);
            b_115 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_61 = t;
          int r_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,r_46 = NULL,k_26 = NULL;
              t = SSLgetAnnotations(z_114);
              d_46 = t;
              t = a_115;
              t = x_133(t);
              y_45 = t;
              t = (ATerm) ATinsert(CheckATermList(b_115), y_45);
              k_26 = t;
              t = SSLsetAnnotations(k_26, d_46);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_61 = ATgetFirst((ATermList) t);
                  b_46 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_46;
              t = c_115(t);
              a_46 = t;
              t = SSL_explode_term(a_46);
              if(match_cons(t, sym__2))
                {
                  ATerm u_61 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_61) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm w_61 = ATgetArgument(t, 1);
                    if(((ATgetType(w_61) == AT_LIST) && !(ATisEmpty(w_61))))
                      {
                        c_46 = ATgetFirst((ATermList) w_61);
                        {
                          ATerm x_61 = (ATerm) ATgetNext((ATermList) w_61);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(a_46);
              if(match_cons(t, sym__2))
                {
                  ATerm y_61 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) y_61) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm b_62 = ATgetArgument(t, 1);
                    if(((ATgetType(b_62) == AT_LIST) && !(ATisEmpty(b_62))))
                      {
                        ATerm g_62 = ATgetFirst((ATermList) b_62);
                        ATerm n_62 = (ATerm) ATgetNext((ATermList) b_62);
                        if(((ATgetType(n_62) == AT_LIST) && !(ATisEmpty(n_62))))
                          {
                            r_46 = ATgetFirst((ATermList) n_62);
                            {
                              ATerm o_62 = (ATerm) ATgetNext((ATermList) n_62);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_46), y_45), r_46);
              LocalPopChoice(r_61);
            }
          else
            {
              t = q_61;
              {
                ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL,n_47 = NULL,b_48 = NULL,n_26 = NULL;
                t = SSLgetAnnotations(z_114);
                n_47 = t;
                t = (ATerm) ATinsert(CheckATermList(b_115), a_115);
                n_26 = t;
                t = SSLsetAnnotations(n_26, n_47);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm p_62 = ATgetFirst((ATermList) t);
                    k_47 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = k_47;
                t = c_115(t);
                j_47 = t;
                t = SSL_explode_term(j_47);
                if(match_cons(t, sym__2))
                  {
                    ATerm q_62 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_62) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm r_62 = ATgetArgument(t, 1);
                      if(((ATgetType(r_62) == AT_LIST) && !(ATisEmpty(r_62))))
                        {
                          l_47 = ATgetFirst((ATermList) r_62);
                          {
                            ATerm t_62 = (ATerm) ATgetNext((ATermList) r_62);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(j_47);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_62 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) u_62) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm y_62 = ATgetArgument(t, 1);
                      if(((ATgetType(y_62) == AT_LIST) && !(ATisEmpty(y_62))))
                        {
                          ATerm z_62 = ATgetFirst((ATermList) y_62);
                          ATerm a_63 = (ATerm) ATgetNext((ATermList) y_62);
                          if(((ATgetType(a_63) == AT_LIST) && !(ATisEmpty(a_63))))
                            {
                              b_48 = ATgetFirst((ATermList) a_63);
                              {
                                ATerm c_63 = (ATerm) ATgetNext((ATermList) a_63);
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
                t = (ATerm) ATmakeAppl(sym__2, l_47, (ATerm) ATinsert(CheckATermList(b_48), a_115));
              }
            }
        }
      }
    return(t);
  }
  t = c_115(t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm l_49 = NULL,q_49 = NULL;
  if(match_cons(t, sym__2))
    {
      l_49 = ATgetArgument(t, 0);
      q_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_14(c_16, l_49, q_49, t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm v_49 = NULL;
  if(match_cons(t, sym__2))
    {
      v_49 = ATgetArgument(t, 0);
      if((v_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL;
  if(match_cons(t, sym__2))
    {
      s_51 = ATgetArgument(t, 0);
      t_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_14(h_16, s_51, t_51, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm u_51 = NULL;
  if(match_cons(t, sym__2))
    {
      u_51 = ATgetArgument(t, 0);
      if((u_51 != ATgetArgument(t, 1)))
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
  ATerm x_117 = NULL,c_118 = NULL,d_118 = NULL,e_118 = NULL,f_118 = NULL,g_118 = NULL,l_118 = NULL;
  f_118 = t;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      g_118 = ATgetArgument(t, 0);
      l_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_118 = ATgetFirst((ATermList) t);
      e_118 = (ATerm) ATgetNext((ATermList) t);
      t = c_118;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          d_118 = ATgetArgument(t, 0);
          x_117 = ATgetArgument(t, 1);
          {
            ATerm u_48 = NULL,w_48 = NULL,a_49 = NULL,b_49 = NULL;
            t = e_118;
            {
              static ATerm y_15 (ATerm t)
              {
                ATerm e_49 = NULL,h_49 = NULL;
                e_49 = t;
                {
                  ATerm d_63 = t;
                  int f_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                        {
                          h_49 = ATgetArgument(t, 0);
                          {
                            ATerm g_63 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(f_63);
                      t = h_49;
                      if((d_118 != t))
                        {
                          _fail(t);
                        }
                      t = e_49;
                    }
                  else
                    {
                      t = d_63;
                      if(match_cons(t, sym_DynRuleScopeId_1))
                        {
                          h_49 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = h_49;
                      if((d_118 != t))
                        {
                          _fail(t);
                        }
                      t = e_49;
                    }
                }
                return(t);
              }
              t = partition_1_0(y_15, t);
            }
            if(match_cons(t, sym__2))
              {
                w_48 = ATgetArgument(t, 0);
                u_48 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = w_48;
            {
              static ATerm a_16 (ATerm t)
              {
                ATerm i_49 = NULL;
                if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                  {
                    if((d_118 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    i_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_49;
                return(t);
              }
              t = collect_om_2_0(a_16, b_16, t);
            }
            b_49 = t;
            t = (ATerm) ATinsert(CheckATermList(b_49), x_117);
            {
              static ATerm d_16 (ATerm t)
              {
                ATerm a_50 = NULL;
                a_50 = t;
                t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, d_118, a_50)));
                return(t);
              }
              t = map_1_0(d_16, t);
            }
            a_49 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_63, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_49), (ATerm) ATmakeAppl(sym_DynRuleScope_2, u_48, l_118))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, d_118)));
          }
        }
      else
        {
          ATerm k_51 = NULL,l_51 = NULL,n_51 = NULL;
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              d_118 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_118;
          {
            static ATerm e_16 (ATerm t)
            {
              ATerm p_51 = NULL,q_51 = NULL;
              p_51 = t;
              {
                ATerm k_63 = t;
                int l_63 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                      {
                        q_51 = ATgetArgument(t, 0);
                        {
                          ATerm q_63 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(l_63);
                    t = q_51;
                    if((d_118 != t))
                      {
                        _fail(t);
                      }
                    t = p_51;
                  }
                else
                  {
                    t = k_63;
                    if(match_cons(t, sym_DynRuleScopeId_1))
                      {
                        q_51 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = q_51;
                    if((d_118 != t))
                      {
                        _fail(t);
                      }
                    t = p_51;
                  }
              }
              return(t);
            }
            t = partition_1_0(e_16, t);
          }
          if(match_cons(t, sym__2))
            {
              l_51 = ATgetArgument(t, 0);
              k_51 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_51;
          {
            static ATerm f_16 (ATerm t)
            {
              ATerm r_51 = NULL;
              if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                {
                  if((d_118 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                  r_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_51;
              return(t);
            }
            t = collect_om_2_0(f_16, g_16, t);
          }
          {
            static ATerm i_16 (ATerm t)
            {
              ATerm v_51 = NULL;
              v_51 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, d_118, v_51)));
              return(t);
            }
            t = map_1_0(i_16, t);
          }
          n_51 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_63, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_51), (ATerm) ATmakeAppl(sym_DynRuleScope_2, k_51, l_118))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, d_118)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_118;
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm d_120 (ATerm), ATerm t)
{
  static ATerm p_118 (ATerm t)
  {
    ATerm r_63 = t;
    int s_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_120(t);
        LocalPopChoice(s_63);
      }
    else
      {
        t = r_63;
        t = SRTS_one(p_118, t);
      }
    return(t);
  }
  t = p_118(t);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm g_119 = NULL;
  g_119 = t;
  {
    ATerm t_63 = t;
    int u_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_52 = NULL;
        t = term_b_45;
        s_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_45, g_119);
        t = w_14(s_52, g_119, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm y_63 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_63) != ATmakeSymbol("z_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = g_119;
        LocalPopChoice(u_63);
      }
    else
      {
        t = t_63;
        {
          ATerm b_53 = NULL;
          t = term_b_45;
          b_53 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_45, g_119);
          t = w_14(b_53, g_119, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm z_63 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_63) != ATmakeSymbol("n_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = g_119;
        }
      }
  }
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm s_122 = NULL,t_122 = NULL,u_122 = NULL,v_122 = NULL,w_122 = NULL,x_122 = NULL,y_122 = NULL,z_122 = NULL,a_123 = NULL,c_123 = NULL,d_123 = NULL;
  d_123 = t;
  if(match_cons(t, sym_Op_2))
    {
      a_123 = ATgetArgument(t, 0);
      c_123 = ATgetArgument(t, 1);
      t = c_123;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_122 = ATgetFirst((ATermList) t);
          v_122 = (ATerm) ATgetNext((ATermList) t);
          t = v_122;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_122 = ATgetFirst((ATermList) t);
              z_122 = (ATerm) ATgetNext((ATermList) t);
              t = z_122;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = w_122;
                  if(match_cons(t, sym_Op_2))
                    {
                      x_122 = ATgetArgument(t, 0);
                      y_122 = ATgetArgument(t, 1);
                      t = y_122;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = x_122;
                          if(match_string(t, "Nil"))
                            {
                              t = s_122;
                              if(match_cons(t, sym_Var_1))
                                {
                                  t_122 = ATgetArgument(t, 0);
                                  t = t_122;
                                  if(match_cons(t, sym_ListVar_1))
                                    {
                                      u_122 = ATgetArgument(t, 0);
                                      t = a_123;
                                      if(match_string(t, "Cons"))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, u_122));
                                        }
                                      else
                                        {
                                          t = d_123;
                                        }
                                    }
                                  else
                                    {
                                      t = d_123;
                                    }
                                }
                              else
                                {
                                  t = d_123;
                                }
                            }
                          else
                            {
                              t = d_123;
                            }
                        }
                      else
                        {
                          t = d_123;
                        }
                    }
                  else
                    {
                      t = d_123;
                    }
                }
              else
                {
                  t = d_123;
                }
            }
          else
            {
              t = d_123;
            }
        }
      else
        {
          t = d_123;
        }
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          a_123 = ATgetArgument(t, 0);
          c_123 = ATgetArgument(t, 1);
          t = a_123;
          {
            ATerm a_64 = t;
            int d_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_Var_1))
                  {
                    ATerm e_64 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                LocalPopChoice(d_64);
                t = c_123;
              }
            else
              {
                t = a_64;
                t = d_123;
              }
          }
        }
      else
        {
          t = d_123;
        }
    }
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm k_125 = NULL,o_125 = NULL,s_125 = NULL;
  k_125 = t;
  {
    ATerm f_64 = t;
    int g_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm j_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_64);
        t = k_125;
        {
          ATerm k_64 = t;
          if((PushChoice() == 0))
            {
              ATerm u_53 = NULL,v_53 = NULL,g_54 = NULL,h_54 = NULL,r_26 = NULL;
              h_54 = t;
              if(match_cons(t, sym_Var_1))
                {
                  v_53 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(h_54);
              u_53 = t;
              t = v_53;
              {
                ATerm l_64 = t;
                int m_64 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(m_64);
                  }
                else
                  {
                    t = l_64;
                    {
                      ATerm s_54 = NULL,g_55 = NULL,i_55 = NULL,q_26 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          s_54 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(v_53);
                      g_55 = t;
                      t = s_54;
                      t = ContextVar_0_0(t);
                      i_55 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, i_55);
                      q_26 = t;
                      t = SSLsetAnnotations(q_26, g_55);
                    }
                  }
              }
              g_54 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, g_54);
              r_26 = t;
              t = SSLsetAnnotations(r_26, u_53);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_64;
            }
        }
        t = term_a_34;
      }
    else
      {
        t = f_64;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_a_34;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                o_125 = ATgetArgument(t, 0);
                {
                  ATerm y_125 = NULL;
                  t = o_125;
                  t = free_vars_3_0(l_16, m_16, tboundin_3_0, t);
                  t = map_1_0(r_16, t);
                  y_125 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_64, y_125);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    o_125 = ATgetArgument(t, 0);
                    s_125 = ATgetArgument(t, 1);
                    {
                      ATerm u_127 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, o_125, s_125);
                      t = free_vars_3_0(t_16, v_16, tboundin_3_0, t);
                      t = map_1_0(z_16, t);
                      u_127 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_n_64, u_127);
                    }
                  }
                else
                  {
                    ATerm n_55 = NULL,u_55 = NULL,v_55 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm p_64 = ATgetArgument(t, 0);
                        ATerm q_64 = ATgetArgument(t, 1);
                        ATerm t_64 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_k_45;
                    u_55 = t;
                    t = (ATerm) ATinsert(ATempty, term_v_64);
                    v_55 = t;
                    t = SSL_printnl(u_55, v_55);
                    t = term_o_45;
                    n_55 = t;
                    t = SSL_exit(n_55);
                    t = (ATerm) ATinsert(ATempty, term_v_64);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm z_125 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_125);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm w_64 = t;
  int x_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_64);
    }
  else
    {
      t = w_64;
      {
        ATerm j_65 = t;
        int k_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_65);
          }
        else
          {
            t = j_65;
            {
              ATerm l_65 = t;
              int m_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_126 = NULL,h_126 = NULL,i_126 = NULL,j_126 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_126 = ATgetArgument(t, 0);
                      h_126 = ATgetArgument(t, 1);
                      i_126 = ATgetArgument(t, 2);
                      j_126 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_126;
                  t = map_1_0(n_16, t);
                  LocalPopChoice(m_65);
                }
              else
                {
                  t = l_65;
                  {
                    ATerm n_65 = t;
                    int r_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(r_65);
                      }
                    else
                      {
                        t = n_65;
                        t = dynrule_targs_1_0(p_16, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm t_126 = NULL;
  ATerm t_65 = t;
  int w_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_126 = ATgetArgument(t, 0);
          {
            ATerm x_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_65);
      t = t_126;
    }
  else
    {
      t = t_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_126;
    }
  return(t);
}
static ATerm p_16 (ATerm t)
{
  t = map_1_0(q_16, t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm d_127 = NULL;
  ATerm y_65 = t;
  int a_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_127 = ATgetArgument(t, 0);
          {
            ATerm b_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_66);
      t = d_127;
    }
  else
    {
      t = y_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_127;
    }
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm l_127 = NULL;
  l_127 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_127);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm w_127 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_127);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm c_66 = t;
  int d_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_66);
    }
  else
    {
      t = c_66;
      {
        ATerm i_66 = t;
        int k_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_66);
          }
        else
          {
            t = i_66;
            {
              ATerm l_66 = t;
              int q_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_127 = NULL,z_127 = NULL,a_128 = NULL,b_128 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_127 = ATgetArgument(t, 0);
                      z_127 = ATgetArgument(t, 1);
                      a_128 = ATgetArgument(t, 2);
                      b_128 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_128;
                  t = map_1_0(w_16, t);
                  LocalPopChoice(q_66);
                }
              else
                {
                  t = l_66;
                  {
                    ATerm r_66 = t;
                    int y_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(y_66);
                      }
                    else
                      {
                        t = r_66;
                        t = dynrule_targs_1_0(x_16, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm o_128 = NULL;
  ATerm z_66 = t;
  int a_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_128 = ATgetArgument(t, 0);
          {
            ATerm d_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_67);
      t = o_128;
    }
  else
    {
      t = z_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_128;
    }
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = map_1_0(y_16, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm w_128 = NULL;
  ATerm e_67 = t;
  int g_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_128 = ATgetArgument(t, 0);
          {
            ATerm k_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_67);
      t = w_128;
    }
  else
    {
      t = e_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_128;
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm z_128 = NULL;
  z_128 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_128);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm u_129 = NULL,v_129 = NULL,y_129 = NULL;
  u_129 = t;
  {
    ATerm l_67 = t;
    int m_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm n_67 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_67);
        t = u_129;
        {
          ATerm o_67 = t;
          if((PushChoice() == 0))
            {
              ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL,t_56 = NULL,x_26 = NULL;
              t_56 = t;
              if(match_cons(t, sym_Var_1))
                {
                  r_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_56);
              q_56 = t;
              t = r_56;
              {
                ATerm r_67 = t;
                int s_67 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(s_67);
                  }
                else
                  {
                    t = r_67;
                    {
                      ATerm a_57 = NULL,j_57 = NULL,p_57 = NULL,w_26 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          a_57 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(r_56);
                      j_57 = t;
                      t = a_57;
                      t = ContextVar_0_0(t);
                      p_57 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, p_57);
                      w_26 = t;
                      t = SSLsetAnnotations(w_26, j_57);
                    }
                  }
              }
              s_56 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, s_56);
              x_26 = t;
              t = SSLsetAnnotations(x_26, q_56);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_67;
            }
        }
        t = term_a_34;
      }
    else
      {
        t = l_67;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_a_34;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                v_129 = ATgetArgument(t, 0);
                {
                  ATerm f_130 = NULL;
                  t = v_129;
                  t = free_vars_3_0(d_17, e_17, tboundin_3_0, t);
                  t = map_1_0(i_17, t);
                  f_130 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_64, f_130);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    v_129 = ATgetArgument(t, 0);
                    y_129 = ATgetArgument(t, 1);
                    {
                      ATerm q_131 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, v_129, y_129);
                      t = free_vars_3_0(j_17, k_17, tboundin_3_0, t);
                      t = map_1_0(o_17, t);
                      q_131 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_n_64, q_131);
                    }
                  }
                else
                  {
                    ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm t_67 = ATgetArgument(t, 0);
                        ATerm x_67 = ATgetArgument(t, 1);
                        ATerm z_67 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_k_45;
                    s_57 = t;
                    t = (ATerm) ATinsert(ATempty, term_v_64);
                    t_57 = t;
                    t = SSL_printnl(s_57, t_57);
                    t = term_o_45;
                    r_57 = t;
                    t = SSL_exit(r_57);
                    t = (ATerm) ATinsert(ATempty, term_v_64);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm g_130 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_130);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm a_68 = t;
  int b_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_68);
    }
  else
    {
      t = a_68;
      {
        ATerm e_68 = t;
        int f_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_68);
          }
        else
          {
            t = e_68;
            {
              ATerm h_68 = t;
              int i_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_130 = NULL,j_130 = NULL,k_130 = NULL,l_130 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_130 = ATgetArgument(t, 0);
                      j_130 = ATgetArgument(t, 1);
                      k_130 = ATgetArgument(t, 2);
                      l_130 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_130;
                  t = map_1_0(f_17, t);
                  LocalPopChoice(i_68);
                }
              else
                {
                  t = h_68;
                  {
                    ATerm j_68 = t;
                    int k_68 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_68);
                      }
                    else
                      {
                        t = j_68;
                        t = dynrule_targs_1_0(g_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm t_130 = NULL;
  ATerm v_68 = t;
  int z_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_130 = ATgetArgument(t, 0);
          {
            ATerm a_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_68);
      t = t_130;
    }
  else
    {
      t = v_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_130;
    }
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = map_1_0(h_17, t);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm y_130 = NULL;
  ATerm b_69 = t;
  int d_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_130 = ATgetArgument(t, 0);
          {
            ATerm e_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_69);
      t = y_130;
    }
  else
    {
      t = b_69;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_130;
    }
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm d_131 = NULL;
  d_131 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_131);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm r_131 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_131);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm f_69 = t;
  int m_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_69);
    }
  else
    {
      t = f_69;
      {
        ATerm n_69 = t;
        int w_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_69);
          }
        else
          {
            t = n_69;
            {
              ATerm y_69 = t;
              int z_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_131 = NULL,u_131 = NULL,v_131 = NULL,w_131 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_131 = ATgetArgument(t, 0);
                      u_131 = ATgetArgument(t, 1);
                      v_131 = ATgetArgument(t, 2);
                      w_131 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_131;
                  t = map_1_0(l_17, t);
                  LocalPopChoice(z_69);
                }
              else
                {
                  t = y_69;
                  {
                    ATerm a_70 = t;
                    int b_70 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_70);
                      }
                    else
                      {
                        t = a_70;
                        t = dynrule_targs_1_0(m_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm j_132 = NULL;
  ATerm c_70 = t;
  int e_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_132 = ATgetArgument(t, 0);
          {
            ATerm g_70 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_70);
      t = j_132;
    }
  else
    {
      t = c_70;
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
static ATerm m_17 (ATerm t)
{
  t = map_1_0(n_17, t);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm t_132 = NULL;
  ATerm h_70 = t;
  int i_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_132 = ATgetArgument(t, 0);
          {
            ATerm j_70 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_70);
      t = t_132;
    }
  else
    {
      t = h_70;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_132;
    }
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm x_132 = NULL;
  x_132 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, x_132);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  ATerm k_70 = t;
  int l_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(j_16, t);
      t = alltd_1_0(k_16, t);
      LocalPopChoice(l_70);
    }
  else
    {
      t = k_70;
      t = alltd_1_0(c_17, t);
    }
  return(t);
}
ATerm DRDef_LHS_1_0 (ATerm f_153 (ATerm), ATerm t)
{
  ATerm l_133 = NULL,p_133 = NULL;
  ATerm n_70 = t;
  int o_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          ATerm q_70 = ATgetArgument(t, 0);
          l_133 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      LocalPopChoice(o_70);
      t = l_133;
      t = f_153(t);
    }
  else
    {
      t = n_70;
      {
        ATerm r_70 = t;
        int s_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                ATerm t_70 = ATgetArgument(t, 0);
                l_133 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(s_70);
            t = l_133;
            if(match_cons(t, sym_Rule_3))
              {
                p_133 = ATgetArgument(t, 0);
                {
                  ATerm u_70 = ATgetArgument(t, 1);
                }
                {
                  ATerm v_70 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = p_133;
            t = f_153(t);
          }
        else
          {
            t = r_70;
            if(match_cons(t, sym_AddDynRule_2))
              {
                ATerm w_70 = ATgetArgument(t, 0);
                l_133 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_133;
            if(match_cons(t, sym_Rule_3))
              {
                p_133 = ATgetArgument(t, 0);
                {
                  ATerm x_70 = ATgetArgument(t, 1);
                }
                {
                  ATerm y_70 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = p_133;
            t = f_153(t);
          }
      }
    }
  return(t);
}
static ATerm c_137 (ATerm o_135, ATerm p_135, ATerm t_135, ATerm u_135, ATerm v_135, ATerm w_135, ATerm z_135, ATerm t)
{
  t = z_135;
  {
    ATerm z_70 = t;
    if((PushChoice() == 0))
      {
        t = v_135;
        if(match_cons(t, sym_Op_2))
          {
            ATerm a_71 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_71) != ATmakeSymbol("Undefined", 0, ATtrue)))
              _fail(t);
            {
              ATerm c_71 = ATgetArgument(t, 1);
              if(((ATgetType(c_71) != AT_LIST) || !(ATisEmpty(c_71))))
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
        t = z_70;
      }
  }
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, o_135, p_135, t_135)), (ATerm) ATmakeAppl(sym_Rule_3, u_135, v_135, w_135));
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_d_71;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm k_136 = NULL,n_136 = NULL,o_136 = NULL,p_136 = NULL,q_136 = NULL,r_136 = NULL,s_136 = NULL,t_136 = NULL,u_136 = NULL,a_137 = NULL;
  o_136 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      p_136 = ATgetArgument(t, 0);
      q_136 = ATgetArgument(t, 1);
      r_136 = ATgetArgument(t, 2);
      s_136 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = s_136;
  if(match_cons(t, sym_Rule_3))
    {
      t_136 = ATgetArgument(t, 0);
      u_136 = ATgetArgument(t, 1);
      a_137 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_136;
  if(match_cons(t, sym_Op_2))
    {
      k_136 = ATgetArgument(t, 0);
      n_136 = ATgetArgument(t, 1);
      t = n_136;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = k_136;
          if(match_string(t, "Undefined"))
            {
              ATerm e_71 = t;
              int g_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_136;
                  {
                    ATerm h_71 = t;
                    int i_71 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = a_137;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(i_71);
                      }
                    else
                      {
                        t = h_71;
                        {
                          ATerm i_58 = NULL,k_58 = NULL;
                          t = term_k_45;
                          i_58 = t;
                          t = (ATerm) ATinsert(ATempty, term_j_71);
                          k_58 = t;
                          t = SSL_printnl(i_58, k_58);
                          t = o_136;
                          t = debug_1_0(p_17, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, p_136, q_136, r_136)), t_136);
                  LocalPopChoice(g_71);
                }
              else
                {
                  t = e_71;
                  t = c_137(p_136, q_136, r_136, t_136, u_136, a_137, o_136, t);
                }
            }
          else
            {
              t = c_137(p_136, q_136, r_136, t_136, u_136, a_137, o_136, t);
            }
        }
      else
        {
          t = k_136;
          t = c_137(p_136, q_136, r_136, t_136, u_136, a_137, o_136, t);
        }
    }
  else
    {
      t = c_137(p_136, q_136, r_136, t_136, u_136, a_137, o_136, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm a_125 (ATerm), ATerm t)
{
  ATerm d_137 = NULL,e_137 = NULL,f_137 = NULL,g_137 = NULL;
  d_137 = t;
  t = a_125(t);
  e_137 = t;
  t = term_k_45;
  f_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_137), e_137);
  g_137 = t;
  t = SSL_printnl(f_137, g_137);
  t = d_137;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_d_71;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm h_137 = NULL,i_137 = NULL,j_137 = NULL,k_137 = NULL,l_137 = NULL,o_137 = NULL;
  o_137 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm k_71 = ATgetArgument(t, 0);
      if(match_cons(k_71, sym_DynRuleId_1))
        {
          ATerm m_71 = ATgetArgument(k_71, 0);
          if(match_cons(m_71, sym_RDecT_3))
            {
              h_137 = ATgetArgument(m_71, 0);
              i_137 = ATgetArgument(m_71, 1);
              j_137 = ATgetArgument(m_71, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm l_71 = ATgetArgument(t, 1);
        if(match_cons(l_71, sym_Rule_3))
          {
            k_137 = ATgetArgument(l_71, 0);
            {
              ATerm p_71 = ATgetArgument(l_71, 1);
              if(match_cons(p_71, sym_Op_2))
                {
                  ATerm r_71 = ATgetArgument(p_71, 0);
                  if((ATgetSymbol((ATermAppl) r_71) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm s_71 = ATgetArgument(p_71, 1);
                    if(((ATgetType(s_71) != AT_LIST) || !(ATisEmpty(s_71))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            l_137 = ATgetArgument(l_71, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm t_71 = t;
    int u_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_137;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(u_71);
      }
    else
      {
        t = t_71;
        {
          ATerm p_137 = NULL,q_137 = NULL;
          t = term_k_45;
          p_137 = t;
          t = (ATerm) ATinsert(ATempty, term_j_71);
          q_137 = t;
          t = SSL_printnl(p_137, q_137);
          t = o_137;
          t = debug_1_0(q_17, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_137, i_137, j_137)), k_137);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm b_138 = NULL;
  b_138 = t;
  {
    ATerm v_71 = t;
    int w_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_OverrideDynamicRules_1))
          {
            ATerm x_71 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_71);
        t = b_138;
      }
    else
      {
        t = v_71;
        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
          {
            ATerm y_71 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_138;
      }
  }
  return(t);
}
static ATerm s_17 (ATerm t)
{
  t = term_z_71;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm a_72 = t;
  int c_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_138 = NULL;
      f_138 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm f_72 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_138;
      LocalPopChoice(c_72);
      {
        ATerm g_138 = NULL,h_138 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            g_138 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_138;
        t = map_1_0(v_17, t);
        h_138 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, h_138);
      }
    }
  else
    {
      t = a_72;
      {
        ATerm g_72 = t;
        int h_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_138 = NULL;
            p_138 = t;
            if(match_cons(t, sym_ExtendDynamicRules_1))
              {
                ATerm i_72 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = p_138;
            LocalPopChoice(h_72);
            {
              ATerm q_138 = NULL,r_138 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  q_138 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = q_138;
              t = map_1_0(x_17, t);
              r_138 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, r_138);
            }
          }
        else
          {
            t = g_72;
            {
              ATerm l_72 = t;
              int m_72 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_139 = NULL;
                  d_139 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm q_72 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = d_139;
                  LocalPopChoice(m_72);
                  {
                    ATerm e_139 = NULL,f_139 = NULL;
                    if(match_cons(t, sym_OverrideDynamicRules_1))
                      {
                        e_139 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = e_139;
                    t = map_1_0(z_17, t);
                    f_139 = t;
                    t = (ATerm) ATmakeAppl(sym_GenDynRules_1, f_139);
                  }
                }
              else
                {
                  t = l_72;
                  {
                    ATerm r_72 = t;
                    int v_72 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_139 = NULL;
                        r_139 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm w_72 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = r_139;
                        LocalPopChoice(v_72);
                        {
                          ATerm s_139 = NULL,t_139 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              s_139 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = s_139;
                          t = map_1_0(b_18, t);
                          t_139 = t;
                          t = (ATerm) ATmakeAppl(sym_GenDynRules_1, t_139);
                        }
                      }
                    else
                      {
                        t = r_72;
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm x_72 = t;
  int y_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UpgradeUndefine_0_0(t);
      LocalPopChoice(y_72);
    }
  else
    {
      t = x_72;
    }
  {
    ATerm z_72 = t;
    int a_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_138 = NULL,r_58 = NULL,s_58 = NULL;
        k_138 = t;
        t = (ATerm) ATempty;
        r_58 = t;
        t = term_z_71;
        s_58 = t;
        t = term_b_73;
        t = w_14(s_58, r_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm c_73 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_73) != ATmakeSymbol("c_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = k_138;
        LocalPopChoice(a_73);
        {
          ATerm l_138 = NULL,m_138 = NULL;
          static ATerm w_17 (ATerm t)
          {
            ATerm n_138 = NULL;
            if(match_cons(t, sym_DynRuleId_1))
              {
                n_138 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_AddLabelDynRuleId_2, n_138, not_null(m_138));
            return(t);
          }
          l_138 = t;
          t = DRDef_LHS_1_0(dummify_0_0, t);
          if(((m_138 != NULL) && (m_138 != t)))
            _fail(t);
          else
            m_138 = t;
          t = l_138;
          t = oncetd_1_0(w_17, t);
        }
      }
    else
      {
        t = z_72;
      }
  }
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = RDefToDRDef_extend_0_0(t);
  {
    ATerm d_73 = t;
    int e_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_138 = NULL,v_58 = NULL,w_58 = NULL;
        x_138 = t;
        t = (ATerm) ATempty;
        v_58 = t;
        t = term_z_71;
        w_58 = t;
        t = term_b_73;
        t = w_14(w_58, v_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm f_73 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_73) != ATmakeSymbol("c_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = x_138;
        LocalPopChoice(e_73);
        {
          ATerm z_138 = NULL,a_139 = NULL;
          static ATerm y_17 (ATerm t)
          {
            ATerm b_139 = NULL;
            if(match_cons(t, sym_DynRuleId_1))
              {
                b_139 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_AddLabelDynRuleId_2, b_139, not_null(a_139));
            return(t);
          }
          z_138 = t;
          t = DRDef_LHS_1_0(dummify_0_0, t);
          if(((a_139 != NULL) && (a_139 != t)))
            _fail(t);
          else
            a_139 = t;
          t = z_138;
          t = oncetd_1_0(y_17, t);
        }
      }
    else
      {
        t = d_73;
      }
  }
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm g_139 = NULL,h_139 = NULL,i_139 = NULL,j_139 = NULL,k_139 = NULL,l_139 = NULL,m_139 = NULL,n_139 = NULL;
  static ATerm a_18 (ATerm t)
  {
    ATerm q_139 = NULL;
    if(match_cons(t, sym_DynRuleId_1))
      {
        q_139 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LabeledDynRuleId_2, q_139, not_null(h_139));
    return(t);
  }
  if(match_cons(t, sym_RDefT_4))
    {
      i_139 = ATgetArgument(t, 0);
      j_139 = ATgetArgument(t, 1);
      k_139 = ATgetArgument(t, 2);
      {
        ATerm g_73 = ATgetArgument(t, 3);
        if(match_cons(g_73, sym_Rule_3))
          {
            l_139 = ATgetArgument(g_73, 0);
            m_139 = ATgetArgument(g_73, 1);
            n_139 = ATgetArgument(g_73, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, i_139, j_139, k_139)), (ATerm) ATmakeAppl(sym_Rule_3, l_139, m_139, n_139));
  {
    ATerm h_73 = t;
    int i_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UpgradeUndefine_0_0(t);
        LocalPopChoice(i_73);
      }
    else
      {
        t = h_73;
      }
  }
  g_139 = t;
  t = DRDef_LHS_1_0(dummify_0_0, t);
  if(((h_139 != NULL) && (h_139 != t)))
    _fail(t);
  else
    h_139 = t;
  t = g_139;
  t = oncetd_1_0(a_18, t);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm u_139 = NULL,v_139 = NULL;
  static ATerm c_18 (ATerm t)
  {
    ATerm w_139 = NULL;
    if(match_cons(t, sym_DynRuleId_1))
      {
        w_139 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LabeledDynRuleId_2, w_139, not_null(v_139));
    return(t);
  }
  t = RDefToDRDef_extend_0_0(t);
  u_139 = t;
  t = DRDef_LHS_1_0(dummify_0_0, t);
  if(((v_139 != NULL) && (v_139 != t)))
    _fail(t);
  else
    v_139 = t;
  t = u_139;
  t = oncetd_1_0(c_18, t);
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  ATerm j_73 = t;
  int k_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_137 = NULL,z_137 = NULL,a_138 = NULL;
      t = oncetd_1_0(r_17, t);
      y_137 = t;
      t = (ATerm) ATempty;
      z_137 = t;
      t = term_m_73;
      a_138 = t;
      t = term_n_73;
      t = x_14(s_17, z_137, a_138, t);
      t = y_137;
      LocalPopChoice(k_73);
    }
  else
    {
      t = j_73;
    }
  t = topdown_1_0(u_17, t);
  return(t);
}
static ATerm d_18 (ATerm t)
{
  t = Cons_2_0(e_18, f_18, t);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  ATerm k_140 = NULL,l_140 = NULL,m_140 = NULL,n_140 = NULL,t_31 = NULL;
  n_140 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      l_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_140);
  k_140 = t;
  t = l_140;
  t = topdown_1_0(g_18, t);
  t = listtd_1_0(h_18, t);
  m_140 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, m_140);
  t_31 = t;
  t = SSLsetAnnotations(t_31, k_140);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm g_18 (ATerm t)
{
  ATerm o_73 = t;
  int p_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynRuleScope_0_0(t);
      LocalPopChoice(p_73);
    }
  else
    {
      t = o_73;
    }
  return(t);
}
static ATerm h_18 (ATerm t)
{
  t = repeat_2_0(i_18, _id, t);
  return(t);
}
static ATerm i_18 (ATerm t)
{
  ATerm q_140 = NULL,r_140 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_140 = ATgetFirst((ATermList) t);
      r_140 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_14(q_140, r_140, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm b_140 = NULL,c_140 = NULL,d_140 = NULL,e_140 = NULL,f_140 = NULL,g_140 = NULL,h_140 = NULL,i_140 = NULL,v_31 = NULL,u_31 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  i_140 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_140);
  b_140 = t;
  t = c_140;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_140 = ATgetFirst((ATermList) t);
      f_140 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_140);
  d_140 = t;
  t = f_140;
  t = Cons_2_0(_id, d_18, t);
  g_140 = t;
  t = (ATerm) ATinsert(CheckATermList(g_140), e_140);
  u_31 = t;
  t = SSLsetAnnotations(u_31, d_140);
  h_140 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_140);
  v_31 = t;
  t = SSLsetAnnotations(v_31, b_140);
  return(t);
}
ATerm tboundin_3_0 (ATerm y_151 (ATerm), ATerm z_151 (ATerm), ATerm a_152 (ATerm), ATerm t)
{
  ATerm g_146 = NULL,h_146 = NULL,i_146 = NULL,j_146 = NULL,k_146 = NULL;
  j_146 = t;
  if(match_cons(t, sym_Scope_2))
    {
      k_146 = ATgetArgument(t, 0);
      i_146 = ATgetArgument(t, 1);
      {
        ATerm d_59 = NULL,g_59 = NULL,i_59 = NULL,b_32 = NULL;
        t = SSLgetAnnotations(j_146);
        d_59 = t;
        t = k_146;
        t = a_152(t);
        g_59 = t;
        t = i_146;
        t = y_151(t);
        i_59 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_59, i_59);
        b_32 = t;
        t = SSLsetAnnotations(b_32, d_59);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          k_146 = ATgetArgument(t, 0);
          {
            ATerm q_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,l_32 = NULL,c_32 = NULL;
            t = SSLgetAnnotations(j_146);
            q_59 = t;
            t = k_146;
            if(match_cons(t, sym_Rule_3))
              {
                t_59 = ATgetArgument(t, 0);
                u_59 = ATgetArgument(t, 1);
                v_59 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_146);
            s_59 = t;
            t = t_59;
            t = y_151(t);
            w_59 = t;
            t = u_59;
            t = y_151(t);
            x_59 = t;
            t = v_59;
            t = y_151(t);
            y_59 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, w_59, x_59, y_59);
            c_32 = t;
            t = SSLsetAnnotations(c_32, s_59);
            z_59 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, z_59);
            l_32 = t;
            t = SSLsetAnnotations(l_32, q_59);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              k_146 = ATgetArgument(t, 0);
              i_146 = ATgetArgument(t, 1);
              g_146 = ATgetArgument(t, 2);
              {
                ATerm j_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,m_32 = NULL;
                t = SSLgetAnnotations(j_146);
                j_60 = t;
                t = k_146;
                t = a_152(t);
                o_60 = t;
                t = i_146;
                t = a_152(t);
                p_60 = t;
                t = g_146;
                t = a_152(t);
                q_60 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, o_60, p_60, q_60);
                m_32 = t;
                t = SSLsetAnnotations(m_32, j_60);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  k_146 = ATgetArgument(t, 0);
                  i_146 = ATgetArgument(t, 1);
                  g_146 = ATgetArgument(t, 2);
                  h_146 = ATgetArgument(t, 3);
                  {
                    ATerm s_61 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_32 = NULL;
                    t = SSLgetAnnotations(j_146);
                    s_61 = t;
                    t = k_146;
                    t = a_152(t);
                    j_62 = t;
                    t = i_146;
                    t = a_152(t);
                    k_62 = t;
                    t = g_146;
                    t = a_152(t);
                    l_62 = t;
                    t = h_146;
                    t = y_151(t);
                    m_62 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, j_62, k_62, l_62, m_62);
                    n_32 = t;
                    t = SSLsetAnnotations(n_32, s_61);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_146 = ATgetArgument(t, 0);
                      i_146 = ATgetArgument(t, 1);
                      g_146 = ATgetArgument(t, 2);
                      h_146 = ATgetArgument(t, 3);
                      {
                        ATerm e_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,p_63 = NULL,o_32 = NULL;
                        t = SSLgetAnnotations(j_146);
                        e_63 = t;
                        t = k_146;
                        t = a_152(t);
                        m_63 = t;
                        t = i_146;
                        t = a_152(t);
                        n_63 = t;
                        t = g_146;
                        t = a_152(t);
                        o_63 = t;
                        t = h_146;
                        t = y_151(t);
                        p_63 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, m_63, n_63, o_63, p_63);
                        o_32 = t;
                        t = SSLsetAnnotations(o_32, e_63);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          k_146 = ATgetArgument(t, 0);
                          i_146 = ATgetArgument(t, 1);
                          {
                            ATerm o_64 = NULL,r_64 = NULL,u_64 = NULL,p_32 = NULL;
                            t = SSLgetAnnotations(j_146);
                            o_64 = t;
                            t = k_146;
                            t = a_152(t);
                            r_64 = t;
                            t = i_146;
                            t = y_151(t);
                            u_64 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, r_64, u_64);
                            p_32 = t;
                            t = SSLsetAnnotations(p_32, o_64);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              k_146 = ATgetArgument(t, 0);
                              i_146 = ATgetArgument(t, 1);
                              {
                                ATerm o_65 = NULL,u_65 = NULL,v_65 = NULL,q_32 = NULL;
                                t = SSLgetAnnotations(j_146);
                                o_65 = t;
                                t = k_146;
                                t = a_152(t);
                                u_65 = t;
                                t = i_146;
                                t = y_151(t);
                                v_65 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, u_65, v_65);
                                q_32 = t;
                                t = SSLsetAnnotations(q_32, o_65);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  k_146 = ATgetArgument(t, 0);
                                  i_146 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_66 = NULL,o_66 = NULL,p_66 = NULL,r_32 = NULL;
                                    t = SSLgetAnnotations(j_146);
                                    j_66 = t;
                                    t = k_146;
                                    t = a_152(t);
                                    o_66 = t;
                                    t = i_146;
                                    t = y_151(t);
                                    p_66 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, o_66, p_66);
                                    r_32 = t;
                                    t = SSLsetAnnotations(r_32, j_66);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      k_146 = ATgetArgument(t, 0);
                                      {
                                        ATerm f_67 = NULL,j_67 = NULL,s_32 = NULL;
                                        t = SSLgetAnnotations(j_146);
                                        f_67 = t;
                                        t = k_146;
                                        t = y_151(t);
                                        j_67 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, j_67);
                                        s_32 = t;
                                        t = SSLsetAnnotations(s_32, f_67);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          k_146 = ATgetArgument(t, 0);
                                          {
                                            ATerm u_67 = NULL,y_67 = NULL,t_32 = NULL;
                                            t = SSLgetAnnotations(j_146);
                                            u_67 = t;
                                            t = k_146;
                                            t = y_151(t);
                                            y_67 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, y_67);
                                            t_32 = t;
                                            t = SSLsetAnnotations(t_32, u_67);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              k_146 = ATgetArgument(t, 0);
                                              {
                                                ATerm g_68 = NULL,c_69 = NULL,v_32 = NULL;
                                                t = SSLgetAnnotations(j_146);
                                                g_68 = t;
                                                t = k_146;
                                                t = y_151(t);
                                                c_69 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, c_69);
                                                v_32 = t;
                                                t = SSLsetAnnotations(v_32, g_68);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  k_146 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm r_69 = NULL,x_69 = NULL,w_32 = NULL;
                                                    t = SSLgetAnnotations(j_146);
                                                    r_69 = t;
                                                    t = k_146;
                                                    t = y_151(t);
                                                    x_69 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, x_69);
                                                    w_32 = t;
                                                    t = SSLsetAnnotations(w_32, r_69);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm d_70 = NULL,f_70 = NULL,x_32 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      k_146 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(j_146);
                                                  d_70 = t;
                                                  t = k_146;
                                                  t = y_151(t);
                                                  f_70 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, f_70);
                                                  x_32 = t;
                                                  t = SSLsetAnnotations(x_32, d_70);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm h_152 (ATerm), ATerm t)
{
  ATerm i_147 = NULL,j_147 = NULL,m_147 = NULL;
  ATerm q_73 = t;
  int s_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          i_147 = ATgetArgument(t, 0);
          {
            ATerm t_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_73);
      t = i_147;
      if(match_cons(t, sym_DynRuleId_1))
        {
          j_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_147;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm u_73 = ATgetArgument(t, 0);
          ATerm v_73 = ATgetArgument(t, 1);
          m_147 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_147;
    }
  else
    {
      t = q_73;
      {
        ATerm w_73 = t;
        int x_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                i_147 = ATgetArgument(t, 0);
                {
                  ATerm y_73 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(x_73);
            t = i_147;
            if(match_cons(t, sym_DynRuleId_1))
              {
                j_147 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_147;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm z_73 = ATgetArgument(t, 0);
                ATerm b_74 = ATgetArgument(t, 1);
                m_147 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = m_147;
          }
        else
          {
            t = w_73;
            if(match_cons(t, sym_AddDynRule_2))
              {
                i_147 = ATgetArgument(t, 0);
                {
                  ATerm c_74 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = i_147;
            if(match_cons(t, sym_DynRuleId_1))
              {
                j_147 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = j_147;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm d_74 = ATgetArgument(t, 0);
                ATerm e_74 = ATgetArgument(t, 1);
                m_147 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = m_147;
          }
      }
    }
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm c_148 = NULL;
  ATerm f_74 = t;
  int g_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_148 = ATgetArgument(t, 0);
          {
            ATerm h_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_74);
      t = c_148;
    }
  else
    {
      t = f_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_148 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_148;
    }
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm i_148 = NULL;
  ATerm i_74 = t;
  int j_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_148 = ATgetArgument(t, 0);
          {
            ATerm l_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_74);
      t = i_148;
    }
  else
    {
      t = i_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_148 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_148;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm x_147 = NULL;
  ATerm n_74 = t;
  int o_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_74 = ATgetArgument(t, 0);
          ATerm q_74 = ATgetArgument(t, 1);
          x_147 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(o_74);
      t = x_147;
      t = map_1_0(j_18, t);
    }
  else
    {
      t = n_74;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm r_74 = ATgetArgument(t, 0);
          ATerm s_74 = ATgetArgument(t, 1);
          x_147 = ATgetArgument(t, 2);
          {
            ATerm t_74 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = x_147;
      t = map_1_0(k_18, t);
    }
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm e_149 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_149);
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm u_74 = t;
  int v_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_74);
    }
  else
    {
      t = u_74;
      {
        ATerm w_74 = t;
        int x_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_74);
          }
        else
          {
            t = w_74;
            {
              ATerm y_74 = t;
              int z_74 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_149 = NULL,h_149 = NULL,i_149 = NULL,j_149 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_149 = ATgetArgument(t, 0);
                      h_149 = ATgetArgument(t, 1);
                      i_149 = ATgetArgument(t, 2);
                      j_149 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_149;
                  t = map_1_0(n_18, t);
                  LocalPopChoice(z_74);
                }
              else
                {
                  t = y_74;
                  {
                    ATerm a_75 = t;
                    int c_75 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(c_75);
                      }
                    else
                      {
                        t = a_75;
                        t = dynrule_targs_1_0(o_18, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm u_149 = NULL;
  ATerm e_75 = t;
  int f_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_149 = ATgetArgument(t, 0);
          {
            ATerm g_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_75);
      t = u_149;
    }
  else
    {
      t = e_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_149 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_149;
    }
  return(t);
}
static ATerm o_18 (ATerm t)
{
  t = map_1_0(p_18, t);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm z_149 = NULL;
  ATerm h_75 = t;
  int i_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_149 = ATgetArgument(t, 0);
          {
            ATerm j_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_75);
      t = z_149;
    }
  else
    {
      t = h_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_149 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_149;
    }
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm d_150 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_150);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm k_75 = t;
  int l_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_75);
    }
  else
    {
      t = k_75;
      {
        ATerm m_75 = t;
        int n_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_75);
          }
        else
          {
            t = m_75;
            {
              ATerm p_75 = t;
              int q_75 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_150 = NULL,g_150 = NULL,h_150 = NULL,i_150 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_150 = ATgetArgument(t, 0);
                      g_150 = ATgetArgument(t, 1);
                      h_150 = ATgetArgument(t, 2);
                      i_150 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_150;
                  t = map_1_0(s_18, t);
                  LocalPopChoice(q_75);
                }
              else
                {
                  t = p_75;
                  {
                    ATerm s_75 = t;
                    int t_75 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_75);
                      }
                    else
                      {
                        t = s_75;
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
static ATerm s_18 (ATerm t)
{
  ATerm p_150 = NULL;
  ATerm u_75 = t;
  int w_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_150 = ATgetArgument(t, 0);
          {
            ATerm x_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_75);
      t = p_150;
    }
  else
    {
      t = u_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_150;
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
  ATerm u_150 = NULL;
  ATerm y_75 = t;
  int z_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_150 = ATgetArgument(t, 0);
          {
            ATerm a_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_75);
      t = u_150;
    }
  else
    {
      t = y_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_150;
    }
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm y_150 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_150);
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm b_76 = t;
  int c_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_76);
    }
  else
    {
      t = b_76;
      {
        ATerm d_76 = t;
        int e_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_76);
          }
        else
          {
            t = d_76;
            {
              ATerm f_76 = t;
              int h_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_151 = NULL,b_151 = NULL,e_151 = NULL,f_151 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_151 = ATgetArgument(t, 0);
                      b_151 = ATgetArgument(t, 1);
                      e_151 = ATgetArgument(t, 2);
                      f_151 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_151;
                  t = map_1_0(x_18, t);
                  LocalPopChoice(h_76);
                }
              else
                {
                  t = f_76;
                  {
                    ATerm i_76 = t;
                    int k_76 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_76);
                      }
                    else
                      {
                        t = i_76;
                        t = dynrule_targs_1_0(y_18, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm m_151 = NULL;
  ATerm l_76 = t;
  int m_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_151 = ATgetArgument(t, 0);
          {
            ATerm n_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_76);
      t = m_151;
    }
  else
    {
      t = l_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_151;
    }
  return(t);
}
static ATerm y_18 (ATerm t)
{
  t = map_1_0(z_18, t);
  return(t);
}
static ATerm z_18 (ATerm t)
{
  ATerm r_151 = NULL;
  ATerm o_76 = t;
  int p_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_151 = ATgetArgument(t, 0);
          {
            ATerm q_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_76);
      t = r_151;
    }
  else
    {
      t = o_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_151;
    }
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm v_151 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_151);
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm r_76 = t;
  int s_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_76);
    }
  else
    {
      t = r_76;
      {
        ATerm t_76 = t;
        int u_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_76);
          }
        else
          {
            t = t_76;
            {
              ATerm v_76 = t;
              int y_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_151 = NULL,b_152 = NULL,c_152 = NULL,d_152 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_151 = ATgetArgument(t, 0);
                      b_152 = ATgetArgument(t, 1);
                      c_152 = ATgetArgument(t, 2);
                      d_152 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_152;
                  t = map_1_0(c_19, t);
                  LocalPopChoice(y_76);
                }
              else
                {
                  t = v_76;
                  {
                    ATerm e_77 = t;
                    int f_77 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_77);
                      }
                    else
                      {
                        t = e_77;
                        t = dynrule_targs_1_0(f_19, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm l_152 = NULL;
  ATerm i_77 = t;
  int j_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_152 = ATgetArgument(t, 0);
          {
            ATerm k_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_77);
      t = l_152;
    }
  else
    {
      t = i_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_152;
    }
  return(t);
}
static ATerm f_19 (ATerm t)
{
  t = map_1_0(h_19, t);
  return(t);
}
static ATerm h_19 (ATerm t)
{
  ATerm q_152 = NULL;
  ATerm l_77 = t;
  int m_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_152 = ATgetArgument(t, 0);
          {
            ATerm n_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_77);
      t = q_152;
    }
  else
    {
      t = l_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_152;
    }
  return(t);
}
static ATerm i_19 (ATerm t)
{
  ATerm e_153 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_153);
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm o_77 = t;
  int p_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_77);
    }
  else
    {
      t = o_77;
      {
        ATerm q_77 = t;
        int r_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_77);
          }
        else
          {
            t = q_77;
            {
              ATerm s_77 = t;
              int u_77 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_153 = NULL,i_153 = NULL,j_153 = NULL,k_153 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_153 = ATgetArgument(t, 0);
                      i_153 = ATgetArgument(t, 1);
                      j_153 = ATgetArgument(t, 2);
                      k_153 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_153;
                  t = map_1_0(n_19, t);
                  LocalPopChoice(u_77);
                }
              else
                {
                  t = s_77;
                  {
                    ATerm v_77 = t;
                    int w_77 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_77);
                      }
                    else
                      {
                        t = v_77;
                        t = dynrule_targs_1_0(o_19, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_19 (ATerm t)
{
  ATerm s_153 = NULL;
  ATerm x_77 = t;
  int y_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_153 = ATgetArgument(t, 0);
          {
            ATerm z_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_77);
      t = s_153;
    }
  else
    {
      t = x_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_153;
    }
  return(t);
}
static ATerm o_19 (ATerm t)
{
  t = map_1_0(s_19, t);
  return(t);
}
static ATerm s_19 (ATerm t)
{
  ATerm x_153 = NULL;
  ATerm a_78 = t;
  int b_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_153 = ATgetArgument(t, 0);
          {
            ATerm c_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_78);
      t = x_153;
    }
  else
    {
      t = a_78;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_153;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm c_149 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      c_149 = ATgetArgument(t, 0);
      t = c_149;
      t = free_vars_3_0(l_18, m_18, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          c_149 = ATgetArgument(t, 0);
          t = c_149;
          t = free_vars_3_0(q_18, r_18, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              c_149 = ATgetArgument(t, 0);
              t = c_149;
              t = free_vars_3_0(v_18, w_18, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  c_149 = ATgetArgument(t, 0);
                  t = c_149;
                  t = free_vars_3_0(a_19, b_19, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      c_149 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = c_149;
                  t = free_vars_3_0(i_19, j_19, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm u_19 (ATerm t)
{
  ATerm n_154 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_154);
  return(t);
}
static ATerm v_19 (ATerm t)
{
  ATerm d_78 = t;
  int e_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_78);
    }
  else
    {
      t = d_78;
      {
        ATerm f_78 = t;
        int g_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_78);
          }
        else
          {
            t = f_78;
            {
              ATerm i_78 = t;
              int j_78 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_154 = NULL,q_154 = NULL,r_154 = NULL,s_154 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_154 = ATgetArgument(t, 0);
                      q_154 = ATgetArgument(t, 1);
                      r_154 = ATgetArgument(t, 2);
                      s_154 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_154;
                  t = map_1_0(y_19, t);
                  LocalPopChoice(j_78);
                }
              else
                {
                  t = i_78;
                  {
                    ATerm k_78 = t;
                    int l_78 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_78);
                      }
                    else
                      {
                        t = k_78;
                        t = dynrule_targs_1_0(a_20, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_19 (ATerm t)
{
  ATerm a_155 = NULL;
  ATerm n_78 = t;
  int o_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_155 = ATgetArgument(t, 0);
          {
            ATerm p_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_78);
      t = a_155;
    }
  else
    {
      t = n_78;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_155 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_155;
    }
  return(t);
}
static ATerm a_20 (ATerm t)
{
  t = map_1_0(b_20, t);
  return(t);
}
static ATerm b_20 (ATerm t)
{
  ATerm f_155 = NULL;
  ATerm q_78 = t;
  int r_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_155 = ATgetArgument(t, 0);
          {
            ATerm s_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_78);
      t = f_155;
    }
  else
    {
      t = q_78;
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
ATerm Bind0_0_0 (ATerm t)
{
  ATerm f_154 = NULL,k_154 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      k_154 = ATgetArgument(t, 0);
      t = k_154;
      if(match_cons(t, sym_Rule_3))
        {
          f_154 = ATgetArgument(t, 0);
          {
            ATerm t_78 = ATgetArgument(t, 1);
          }
          {
            ATerm v_78 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_154;
      t = free_vars_3_0(u_19, v_19, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          k_154 = ATgetArgument(t, 0);
          {
            ATerm w_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = k_154;
    }
  return(t);
}
static ATerm l_14 (ATerm w_129 (ATerm), ATerm g_31, ATerm f_31, ATerm t)
{
  static ATerm y_155 (ATerm t)
  {
    ATerm t_155 = NULL,u_155 = NULL,v_155 = NULL;
    t_155 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_155 = ATgetFirst((ATermList) t);
            v_155 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_78 = t;
          int a_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_155;
              {
                static ATerm d_20 (ATerm t)
                {
                  t = f_31;
                  return(t);
                }
                t = m_14(w_129, d_20, u_155, v_155, t);
              }
              t = y_155(t);
              LocalPopChoice(a_79);
            }
          else
            {
              t = z_78;
              {
                ATerm m_70 = NULL,p_70 = NULL,x_33 = NULL;
                t = SSLgetAnnotations(t_155);
                m_70 = t;
                t = v_155;
                t = y_155(t);
                p_70 = t;
                t = (ATerm) ATinsert(CheckATermList(p_70), u_155);
                x_33 = t;
                t = SSLsetAnnotations(x_33, m_70);
              }
            }
        }
      }
    return(t);
  }
  t = g_31;
  t = y_155(t);
  return(t);
}
static ATerm m_14 (ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm k_31, ATerm j_31, ATerm t)
{
  t = a_130(t);
  {
    static ATerm f_20 (ATerm t)
    {
      ATerm c_156 = NULL;
      c_156 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_31, c_156);
      t = z_129(t);
      return(t);
    }
    t = fetch_1_0(f_20, t);
  }
  t = j_31;
  return(t);
}
static ATerm n_14 (ATerm r_129 (ATerm), ATerm e_31, ATerm d_31, ATerm t)
{
  static ATerm s_156 (ATerm t)
  {
    ATerm n_156 = NULL,o_156 = NULL,p_156 = NULL;
    n_156 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_156;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_156 = ATgetFirst((ATermList) t);
            p_156 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_79 = t;
          int c_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_156;
              {
                static ATerm l_20 (ATerm t)
                {
                  t = d_31;
                  return(t);
                }
                t = m_14(r_129, l_20, o_156, p_156, t);
              }
              t = s_156(t);
              LocalPopChoice(c_79);
            }
          else
            {
              t = b_79;
              {
                ATerm b_71 = NULL,f_71 = NULL,z_33 = NULL;
                t = SSLgetAnnotations(n_156);
                b_71 = t;
                t = p_156;
                t = s_156(t);
                f_71 = t;
                t = (ATerm) ATinsert(CheckATermList(f_71), o_156);
                z_33 = t;
                t = SSLsetAnnotations(z_33, b_71);
              }
            }
        }
      }
    return(t);
  }
  t = e_31;
  t = s_156(t);
  return(t);
}
ATerm genzip_4_0 (ATerm p_127 (ATerm), ATerm q_127 (ATerm), ATerm r_127 (ATerm), ATerm s_127 (ATerm), ATerm t)
{
  static ATerm a_157 (ATerm t)
  {
    ATerm d_79 = t;
    int e_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_127(t);
        LocalPopChoice(e_79);
      }
    else
      {
        t = d_79;
        {
          ATerm u_156 = NULL,v_156 = NULL,w_156 = NULL,x_156 = NULL,y_156 = NULL,z_156 = NULL,c_34 = NULL;
          t = q_127(t);
          z_156 = t;
          if(match_cons(t, sym__2))
            {
              v_156 = ATgetArgument(t, 0);
              w_156 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_156);
          u_156 = t;
          t = v_156;
          t = s_127(t);
          x_156 = t;
          t = w_156;
          t = a_157(t);
          y_156 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_156, y_156);
          c_34 = t;
          t = SSLsetAnnotations(c_34, u_156);
          t = r_127(t);
        }
      }
    return(t);
  }
  t = a_157(t);
  return(t);
}
static ATerm n_20 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_79 = ATgetArgument(t, 0);
      if(((ATgetType(f_79) != AT_LIST) || !(ATisEmpty(f_79))))
        _fail(t);
      {
        ATerm g_79 = ATgetArgument(t, 1);
        if(((ATgetType(g_79) != AT_LIST) || !(ATisEmpty(g_79))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_20 (ATerm t)
{
  ATerm h_157 = NULL,i_157 = NULL,j_157 = NULL,k_157 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_79 = ATgetArgument(t, 0);
      if(((ATgetType(h_79) == AT_LIST) && !(ATisEmpty(h_79))))
        {
          h_157 = ATgetFirst((ATermList) h_79);
          i_157 = (ATerm) ATgetNext((ATermList) h_79);
        }
      else
        _fail(t);
      {
        ATerm i_79 = ATgetArgument(t, 1);
        if(((ATgetType(i_79) == AT_LIST) && !(ATisEmpty(i_79))))
          {
            j_157 = ATgetFirst((ATermList) i_79);
            k_157 = (ATerm) ATgetNext((ATermList) i_79);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_157, j_157), (ATerm) ATmakeAppl(sym__2, i_157, k_157));
  return(t);
}
static ATerm p_20 (ATerm t)
{
  ATerm l_157 = NULL,m_157 = NULL;
  if(match_cons(t, sym__2))
    {
      l_157 = ATgetArgument(t, 0);
      m_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_157), l_157);
  return(t);
}
static ATerm s_14 (ATerm m_721, ATerm r_721, ATerm n_71, ATerm t)
{
  ATerm c_157 = NULL,d_157 = NULL,e_157 = NULL,f_157 = NULL;
  t = SSL_explode_term(r_721);
  if(match_cons(t, sym__2))
    {
      c_157 = ATgetArgument(t, 0);
      e_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(m_721);
  if(match_cons(t, sym__2))
    {
      if((c_157 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_157, e_157);
  t = genzip_4_0(n_20, o_20, p_20, _id, t);
  f_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_157, n_71);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm t)
{
  static ATerm o_157 (ATerm t)
  {
    ATerm j_79 = t;
    int k_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_118(t);
        LocalPopChoice(k_79);
      }
    else
      {
        t = j_79;
        t = r_118(t);
        t = o_157(t);
      }
    return(t);
  }
  t = o_157(t);
  return(t);
}
ATerm for_3_0 (ATerm t_118 (ATerm), ATerm u_118 (ATerm), ATerm v_118 (ATerm), ATerm t)
{
  t = t_118(t);
  t = while_not_2_0(u_118, v_118, t);
  return(t);
}
static ATerm q_20 (ATerm t)
{
  ATerm v_157 = NULL;
  v_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_157);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm w_157 = NULL,x_157 = NULL,y_157 = NULL,z_157 = NULL,g_34 = NULL;
  z_157 = t;
  if(match_cons(t, sym__2))
    {
      x_157 = ATgetArgument(t, 0);
      y_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_157);
  w_157 = t;
  t = y_157;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_157, y_157);
  g_34 = t;
  t = SSLsetAnnotations(g_34, w_157);
  return(t);
}
static ATerm v_20 (ATerm t)
{
  ATerm s_158 = NULL,t_158 = NULL,u_158 = NULL,v_158 = NULL,w_158 = NULL;
  s_158 = t;
  if(match_cons(t, sym__2))
    {
      t_158 = ATgetArgument(t, 0);
      u_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_158;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_158 = ATgetFirst((ATermList) t);
      w_158 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_79 = t;
        int m_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_159(t_158, u_158, s_158, t);
            LocalPopChoice(m_79);
          }
        else
          {
            t = l_79;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_158), v_158), w_158);
          }
      }
    }
  else
    {
      t = g_159(t_158, u_158, s_158, t);
    }
  return(t);
}
static ATerm g_159 (ATerm a_158, ATerm b_158, ATerm c_158, ATerm t)
{
  ATerm d_158 = NULL,g_158 = NULL,h_34 = NULL,j_158 = NULL,k_158 = NULL,l_158 = NULL,m_158 = NULL;
  t = SSLgetAnnotations(c_158);
  d_158 = t;
  t = b_158;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_158 = ATgetFirst((ATermList) t);
      m_158 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_158;
  if(match_cons(t, sym__2))
    {
      k_158 = ATgetArgument(t, 0);
      l_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_79 = t;
    int o_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_158;
        if((k_158 != t))
          {
            _fail(t);
          }
        t = m_158;
        LocalPopChoice(o_79);
      }
    else
      {
        t = n_79;
        t = b_158;
        t = s_14(k_158, l_158, m_158, t);
      }
  }
  g_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_158, g_158);
  h_34 = t;
  t = SSLsetAnnotations(h_34, d_158);
  return(t);
}
static ATerm x_20 (ATerm t)
{
  ATerm f_159 = NULL;
  if(match_cons(t, sym__2))
    {
      f_159 = ATgetArgument(t, 0);
      if((f_159 != ATgetArgument(t, 1)))
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
  ATerm p_79 = t;
  int q_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(q_20, t_20, v_20, t);
      LocalPopChoice(q_79);
    }
  else
    {
      t = p_79;
      {
        ATerm a_159 = NULL,b_159 = NULL,c_159 = NULL;
        a_159 = t;
        if(match_cons(t, sym__2))
          {
            b_159 = ATgetArgument(t, 0);
            c_159 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_159;
        t = n_14(x_20, b_159, c_159, t);
      }
    }
  return(t);
}
static ATerm d_21 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_21 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_21 (ATerm t)
{
  ATerm b_72 = NULL,d_72 = NULL;
  if(match_cons(t, sym__2))
    {
      b_72 = ATgetArgument(t, 0);
      d_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_14(j_21, b_72, d_72, t);
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm e_72 = NULL;
  if(match_cons(t, sym__2))
    {
      e_72 = ATgetArgument(t, 0);
      if((e_72 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm m_21 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_22 (ATerm t)
{
  ATerm s_72 = NULL,t_72 = NULL;
  if(match_cons(t, sym__2))
    {
      s_72 = ATgetArgument(t, 0);
      t_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_14(f_22, s_72, t_72, t);
  return(t);
}
static ATerm f_22 (ATerm t)
{
  ATerm u_72 = NULL;
  if(match_cons(t, sym__2))
    {
      u_72 = ATgetArgument(t, 0);
      if((u_72 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm l_149 (ATerm), ATerm m_149 (ATerm), ATerm n_149 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm u_159 (ATerm t)
  {
    ATerm r_79 = t;
    int s_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_149(t);
        LocalPopChoice(s_79);
      }
    else
      {
        t = r_79;
        {
          ATerm t_79 = t;
          int u_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_159 = NULL,j_159 = NULL,o_71 = NULL,q_71 = NULL;
              i_159 = t;
              t = m_149(t);
              j_159 = t;
              t = i_159;
              {
                static ATerm b_21 (ATerm t)
                {
                  ATerm l_159 = NULL;
                  t = u_159(t);
                  l_159 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_159, j_159);
                  t = diff_0_0(t);
                  return(t);
                }
                t = n_149(b_21, u_159, d_21, t);
              }
              q_71 = t;
              t = SSL_explode_term(q_71);
              if(match_cons(t, sym__2))
                {
                  ATerm w_79 = ATgetArgument(t, 0);
                  o_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_71;
              t = foldr_3_0(h_21, i_21, _id, t);
              LocalPopChoice(u_79);
            }
          else
            {
              t = t_79;
              {
                ATerm j_72 = NULL,k_72 = NULL;
                k_72 = t;
                t = SSL_explode_term(k_72);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_79 = ATgetArgument(t, 0);
                    j_72 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_72;
                t = foldr_3_0(m_21, c_22, u_159, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_159(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  static ATerm h_22 (ATerm t)
  {
    t = bottomup_1_0(a_119, t);
    return(t);
  }
  t = SRTS_all(h_22, t);
  t = a_119(t);
  return(t);
}
static ATerm w_14 (ATerm h_64, ATerm i_64, ATerm t)
{
  ATerm v_159 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_64, i_64);
  t = p_15(h_64, i_64, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_159 = ATgetFirst((ATermList) t);
      {
        ATerm z_79 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_159;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm j_160 = NULL,k_160 = NULL;
  j_160 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_80 = t;
    int b_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_73 = NULL;
        t = term_c_80;
        r_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_80, j_160);
        t = w_14(r_73, j_160, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm d_80 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_80) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, k_160, (ATerm) ATempty);
        LocalPopChoice(b_80);
      }
    else
      {
        t = a_80;
        {
          ATerm a_74 = NULL;
          t = term_c_80;
          a_74 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_80, j_160);
          t = w_14(a_74, j_160, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm e_80 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_80) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, k_160, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm r_120 (ATerm), ATerm t)
{
  static ATerm n_160 (ATerm t)
  {
    ATerm f_80 = t;
    int g_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_120(t);
        LocalPopChoice(g_80);
      }
    else
      {
        t = f_80;
        t = SRTS_all(n_160, t);
      }
    return(t);
  }
  t = n_160(t);
  return(t);
}
static ATerm x_14 (ATerm w_138 (ATerm), ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm o_160 = NULL,p_160 = NULL,q_160 = NULL,r_160 = NULL,s_160 = NULL,t_160 = NULL,u_160 = NULL,v_160 = NULL;
  r_160 = t;
  t = w_138(t);
  o_160 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_160, i_45, g_45);
  t = q_15(o_160, i_45, g_45, t);
  {
    ATerm h_80 = t;
    int i_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_160 = NULL;
        t = term_j_80;
        w_160 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_160, term_j_80);
        t = p_15(o_160, w_160, t);
        LocalPopChoice(i_80);
      }
    else
      {
        t = h_80;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_160 = ATgetFirst((ATermList) t);
      q_160 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_160, term_j_80, (ATerm) ATinsert(CheckATermList(q_160), (ATerm) ATinsert(CheckATermList(p_160), i_45)));
  t = lookup_table_0_1(o_160, t);
  v_160 = t;
  t = term_j_80;
  s_160 = t;
  t = (ATerm) ATinsert(CheckATermList(q_160), (ATerm) ATinsert(CheckATermList(p_160), i_45));
  t_160 = t;
  t = v_160;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_15(s_160, t_160, u_160, t);
  t = r_160;
  return(t);
}
static ATerm i_22 (ATerm t)
{
  t = term_c_80;
  return(t);
}
static ATerm l_22 (ATerm t)
{
  t = term_c_80;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm a_161 = NULL,c_161 = NULL,d_161 = NULL,e_161 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      c_161 = ATgetArgument(t, 0);
      d_161 = ATgetArgument(t, 1);
      a_161 = ATgetArgument(t, 2);
      {
        ATerm h_161 = NULL,i_161 = NULL;
        t = d_161;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, c_161);
        h_161 = t;
        t = term_l_80;
        i_161 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_161), term_l_80);
        t = x_14(i_22, h_161, i_161, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, c_161, (ATerm)ATempty, a_161);
      }
    }
  else
    {
      ATerm l_161 = NULL,m_161 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          c_161 = ATgetArgument(t, 0);
          d_161 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_161;
      if(match_cons(t, sym_ConstType_1))
        {
          e_161 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_161);
      l_161 = t;
      t = term_n_80;
      m_161 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_161), term_n_80);
      t = x_14(l_22, l_161, m_161, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, c_161, (ATerm) ATmakeAppl(sym_ConstType_1, e_161));
    }
  return(t);
}
static ATerm y_14 (ATerm b_64, ATerm c_64, ATerm t)
{
  ATerm q_161 = NULL,r_161 = NULL;
  r_161 = t;
  {
    ATerm o_80 = t;
    int p_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
        t = p_15(b_64, c_64, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_80 = ATgetFirst((ATermList) t);
            q_161 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_80);
        {
          ATerm s_161 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, b_64, c_64, q_161);
          t = lookup_table_0_1(b_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_15(c_64, q_161, s_161, t);
          t = (ATerm) ATmakeAppl(sym__3, b_64, c_64, q_161);
        }
      }
    else
      {
        t = o_80;
        {
          ATerm u_161 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
          t = lookup_table_0_1(b_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              u_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_15(c_64, u_161, t);
          t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
        }
      }
  }
  t = r_161;
  return(t);
}
ATerm end_scope_1_0 (ATerm t_138 (ATerm), ATerm t)
{
  ATerm w_161 = NULL,x_161 = NULL,y_161 = NULL,z_161 = NULL;
  z_161 = t;
  t = t_138(t);
  y_161 = t;
  {
    ATerm r_80 = t;
    int s_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_162 = NULL;
        t = term_j_80;
        a_162 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_161, term_j_80);
        t = p_15(y_161, a_162, t);
        LocalPopChoice(s_80);
      }
    else
      {
        t = r_80;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_161 = ATgetFirst((ATermList) t);
      w_161 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm t_80 = t;
    int u_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_161;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(w_161), x_161);
        LocalPopChoice(u_80);
        {
          ATerm b_162 = NULL,c_162 = NULL,d_162 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, y_161, term_j_80);
          t = lookup_table_0_1(y_161, t);
          d_162 = t;
          t = term_j_80;
          b_162 = t;
          t = d_162;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_162 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_15(b_162, c_162, t);
          t = (ATerm) ATmakeAppl(sym__2, y_161, term_j_80);
        }
      }
    else
      {
        t = t_80;
        {
          ATerm e_162 = NULL,f_162 = NULL,g_162 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, y_161, term_j_80, w_161);
          t = lookup_table_0_1(y_161, t);
          g_162 = t;
          t = term_j_80;
          e_162 = t;
          t = g_162;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_162 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_15(e_162, w_161, f_162, t);
          t = (ATerm) ATmakeAppl(sym__3, y_161, term_j_80, w_161);
        }
      }
  }
  t = x_161;
  {
    static ATerm n_22 (ATerm t)
    {
      ATerm h_162 = NULL;
      h_162 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_161, h_162);
      t = y_14(y_161, h_162, t);
      return(t);
    }
    t = map_1_0(n_22, t);
  }
  t = z_161;
  return(t);
}
ATerm restore_always_2_0 (ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm t)
{
  ATerm v_80 = t;
  int w_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_117(t);
      t = w_117(t);
      LocalPopChoice(w_80);
    }
  else
    {
      t = v_80;
      t = w_117(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm s_138 (ATerm), ATerm t)
{
  ATerm j_162 = NULL,k_162 = NULL,l_162 = NULL,m_162 = NULL,n_162 = NULL,o_162 = NULL,p_162 = NULL;
  k_162 = t;
  t = s_138(t);
  j_162 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_162, term_j_80);
  {
    ATerm x_80 = t;
    int y_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_162 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm z_80 = ATgetArgument(t, 0);
            ATerm b_81 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_80;
        t_162 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_162, term_j_80);
        t = p_15(j_162, t_162, t);
        LocalPopChoice(y_80);
      }
    else
      {
        t = x_80;
        t = (ATerm) ATempty;
      }
  }
  l_162 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_162, term_j_80, (ATerm) ATinsert(CheckATermList(l_162), (ATerm) ATempty));
  t = lookup_table_0_1(j_162, t);
  p_162 = t;
  t = term_j_80;
  m_162 = t;
  t = (ATerm) ATinsert(CheckATermList(l_162), (ATerm) ATempty);
  n_162 = t;
  t = p_162;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_15(m_162, n_162, o_162, t);
  t = k_162;
  return(t);
}
ATerm scope_2_0 (ATerm u_138 (ATerm), ATerm v_138 (ATerm), ATerm t)
{
  static ATerm p_22 (ATerm t)
  {
    t = end_scope_1_0(u_138, t);
    return(t);
  }
  t = begin_scope_1_0(u_138, t);
  t = restore_always_2_0(v_138, p_22, t);
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = term_c_80;
  return(t);
}
static ATerm r_22 (ATerm t)
{
  ATerm y_162 = NULL,z_162 = NULL,a_163 = NULL,b_163 = NULL,t_34 = NULL;
  b_163 = t;
  if(match_cons(t, sym_Specification_1))
    {
      z_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_163);
  y_162 = t;
  t = z_162;
  t = map_1_0(s_22, t);
  a_163 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_163);
  t_34 = t;
  t = SSLsetAnnotations(t_34, y_162);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm s_22 (ATerm t)
{
  ATerm o_163 = NULL,p_163 = NULL;
  p_163 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      o_163 = ATgetArgument(t, 0);
      {
        ATerm c_81 = t;
        int f_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_74 = NULL,m_74 = NULL,o_34 = NULL;
            t = SSLgetAnnotations(p_163);
            k_74 = t;
            t = o_163;
            t = map_1_0(v_22, t);
            m_74 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, m_74);
            o_34 = t;
            t = SSLsetAnnotations(o_34, k_74);
            LocalPopChoice(f_81);
          }
        else
          {
            t = c_81;
            t = p_163;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          o_163 = ATgetArgument(t, 0);
          {
            ATerm h_81 = t;
            int j_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_75 = NULL,d_75 = NULL,p_34 = NULL;
                t = SSLgetAnnotations(p_163);
                b_75 = t;
                t = o_163;
                t = map_1_0(w_22, t);
                d_75 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, d_75);
                p_34 = t;
                t = SSLsetAnnotations(p_34, b_75);
                LocalPopChoice(j_81);
              }
            else
              {
                t = h_81;
                t = p_163;
              }
          }
        }
      else
        {
          t = p_163;
        }
    }
  return(t);
}
static ATerm v_22 (ATerm t)
{
  ATerm k_81 = t;
  int l_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(l_81);
    }
  else
    {
      t = k_81;
    }
  return(t);
}
static ATerm w_22 (ATerm t)
{
  ATerm m_81 = t;
  int n_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(n_81);
    }
  else
    {
      t = m_81;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(q_22, r_22, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_163 = NULL,x_163 = NULL,y_163 = NULL;
  w_163 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_163;
    }
  else
    {
      static ATerm x_22 (ATerm t)
      {
        t = not_null(y_163);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_163 = ATgetFirst((ATermList) t);
          if(((y_163 != NULL) && (y_163 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_163 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_163;
      t = at_end_1_0(x_22, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm o_133 (ATerm), ATerm t)
{
  ATerm n_164 = NULL,o_164 = NULL,p_164 = NULL;
  n_164 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_164;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_164 = ATgetFirst((ATermList) t);
          p_164 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_81 = t;
        int s_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_75 = NULL,r_75 = NULL,v_75 = NULL,e_35 = NULL;
            t = SSLgetAnnotations(n_164);
            o_75 = t;
            t = o_164;
            t = o_133(t);
            r_75 = t;
            t = p_164;
            t = filter_1_0(o_133, t);
            v_75 = t;
            t = (ATerm) ATinsert(CheckATermList(v_75), r_75);
            e_35 = t;
            t = SSLsetAnnotations(e_35, o_75);
            LocalPopChoice(s_81);
          }
        else
          {
            t = o_81;
            t = p_164;
            t = filter_1_0(o_133, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_126 (ATerm), ATerm t)
{
  static ATerm f_165 (ATerm t)
  {
    ATerm c_165 = NULL,d_165 = NULL,e_165 = NULL;
    e_165 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_165 = ATgetFirst((ATermList) t);
        d_165 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_76 = NULL,j_76 = NULL,g_35 = NULL;
          t = SSLgetAnnotations(e_165);
          g_76 = t;
          t = d_165;
          t = f_165(t);
          j_76 = t;
          t = (ATerm) ATinsert(CheckATermList(j_76), c_165);
          g_35 = t;
          t = SSLsetAnnotations(g_35, g_76);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_165;
        t = c_126(t);
      }
    return(t);
  }
  t = f_165(t);
  return(t);
}
static ATerm r_165 (ATerm j_165, ATerm t)
{
  ATerm k_165 = NULL;
  t = SSL_explode_term(j_165);
  if(match_cons(t, sym__2))
    {
      ATerm t_81 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_81) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      k_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_165;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_165 = NULL,n_165 = NULL,o_165 = NULL;
  o_165 = t;
  if(match_cons(t, sym__2))
    {
      m_165 = ATgetArgument(t, 0);
      n_165 = ATgetArgument(t, 1);
      {
        ATerm u_81 = t;
        int y_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_23 (ATerm t)
            {
              t = n_165;
              return(t);
            }
            t = m_165;
            t = at_end_1_0(h_23, t);
            LocalPopChoice(y_81);
          }
        else
          {
            t = u_81;
            t = r_165(o_165, t);
          }
      }
    }
  else
    {
      t = r_165(o_165, t);
    }
  return(t);
}
static ATerm b_15 (ATerm o_22, ATerm k_22, ATerm t)
{
  ATerm s_165 = NULL,t_165 = NULL;
  static ATerm i_23 (ATerm t)
  {
    ATerm u_165 = NULL,v_165 = NULL,w_165 = NULL,x_165 = NULL;
    x_165 = t;
    t = SSL_explode_term(x_165);
    if(match_cons(t, sym__2))
      {
        if(((s_165 != NULL) && (s_165 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          s_165 = ATgetArgument(t, 0);
        {
          ATerm z_81 = ATgetArgument(t, 1);
          if(((ATgetType(z_81) == AT_LIST) && !(ATisEmpty(z_81))))
            {
              u_165 = ATgetFirst((ATermList) z_81);
              {
                ATerm a_82 = (ATerm) ATgetNext((ATermList) z_81);
                if(((ATgetType(a_82) != AT_LIST) || !(ATisEmpty(a_82))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, u_165, not_null(t_165));
    t = conc_0_0(t);
    v_165 = t;
    t = (ATerm) ATinsert(ATempty, v_165);
    w_165 = t;
    t = SSL_mkterm(s_165, w_165);
    return(t);
  }
  t = SSL_explode_term(o_22);
  if(match_cons(t, sym__2))
    {
      if(((s_165 != NULL) && (s_165 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        s_165 = ATgetArgument(t, 0);
      {
        ATerm b_82 = ATgetArgument(t, 1);
        if(((ATgetType(b_82) == AT_LIST) && !(ATisEmpty(b_82))))
          {
            if(((t_165 != NULL) && (t_165 != ATgetFirst((ATermList) b_82))))
              _fail(ATgetFirst((ATermList) b_82));
            else
              t_165 = ATgetFirst((ATermList) b_82);
            {
              ATerm c_82 = (ATerm) ATgetNext((ATermList) b_82);
              if(((ATgetType(c_82) != AT_LIST) || !(ATisEmpty(c_82))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_22;
  t = fetch_1_0(i_23, t);
  return(t);
}
ATerm foldr_3_0 (ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm o_132 (ATerm), ATerm t)
{
  ATerm z_165 = NULL,a_166 = NULL,b_166 = NULL;
  z_165 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_165;
      t = m_132(t);
    }
  else
    {
      ATerm e_166 = NULL,f_166 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_166 = ATgetFirst((ATermList) t);
          b_166 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_166;
      t = o_132(t);
      e_166 = t;
      t = b_166;
      t = foldr_3_0(m_132, n_132, o_132, t);
      f_166 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_166, f_166);
      t = n_132(t);
    }
  return(t);
}
static ATerm j_23 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_82), term_g_82), term_e_82);
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm m_166 = NULL,n_166 = NULL;
  if(match_cons(t, sym__2))
    {
      m_166 = ATgetArgument(t, 0);
      n_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_15(m_166, n_166, t);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  ATerm o_166 = NULL,p_166 = NULL;
  p_166 = t;
  if(match_cons(t, sym_Signature_1))
    {
      o_166 = ATgetArgument(t, 0);
      {
        ATerm i_82 = t;
        int j_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_166 = NULL;
            t = o_166;
            t = filter_1_0(n_23, t);
            t = concat_0_0(t);
            r_166 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, r_166);
            LocalPopChoice(j_82);
          }
        else
          {
            t = i_82;
            t = p_166;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          o_166 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, o_166);
        }
      else
        {
          t = p_166;
        }
    }
  return(t);
}
static ATerm n_23 (ATerm t)
{
  ATerm s_166 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      s_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_166;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm i_166 = NULL,j_166 = NULL,k_166 = NULL,l_166 = NULL,m_35 = NULL;
  l_166 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_166);
  i_166 = t;
  t = j_166;
  t = foldr_3_0(j_23, k_23, l_23, t);
  k_166 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_166);
  m_35 = t;
  t = SSLsetAnnotations(m_35, i_166);
  return(t);
}
static ATerm r_23 (ATerm t)
{
  ATerm k_82 = t;
  int l_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(l_82);
    }
  else
    {
      t = k_82;
    }
  return(t);
}
static ATerm s_23 (ATerm t)
{
  ATerm o_167 = NULL,p_167 = NULL,q_167 = NULL,r_167 = NULL,s_167 = NULL;
  s_167 = t;
  if(match_cons(t, sym_LRule_1))
    {
      r_167 = ATgetArgument(t, 0);
      t = r_167;
      if(match_cons(t, sym_Rule_3))
        {
          o_167 = ATgetArgument(t, 0);
          p_167 = ATgetArgument(t, 1);
          q_167 = ATgetArgument(t, 2);
          {
            ATerm m_82 = t;
            int n_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_167 = NULL;
                t = o_167;
                t = free_vars_3_0(t_23, a_24, tboundin_3_0, t);
                w_167 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, w_167, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, o_167, p_167, q_167)));
                LocalPopChoice(n_82);
              }
            else
              {
                t = m_82;
                t = s_167;
              }
          }
        }
      else
        {
          t = s_167;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          r_167 = ATgetArgument(t, 0);
          {
            ATerm o_82 = t;
            int p_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_168 = NULL;
                t = r_167;
                t = free_vars_3_0(t_24, u_24, tboundin_3_0, t);
                u_168 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, u_168, r_167);
                LocalPopChoice(p_82);
              }
            else
              {
                t = o_82;
                t = s_167;
              }
          }
        }
      else
        {
          t = s_167;
        }
    }
  return(t);
}
static ATerm t_23 (ATerm t)
{
  ATerm x_167 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_167);
  return(t);
}
static ATerm a_24 (ATerm t)
{
  ATerm q_82 = t;
  int r_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_82);
    }
  else
    {
      t = q_82;
      {
        ATerm s_82 = t;
        int t_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_82);
          }
        else
          {
            t = s_82;
            {
              ATerm u_82 = t;
              int v_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_167 = NULL,a_168 = NULL,b_168 = NULL,c_168 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_167 = ATgetArgument(t, 0);
                      a_168 = ATgetArgument(t, 1);
                      b_168 = ATgetArgument(t, 2);
                      c_168 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_168;
                  t = map_1_0(q_24, t);
                  LocalPopChoice(v_82);
                }
              else
                {
                  t = u_82;
                  {
                    ATerm w_82 = t;
                    int x_82 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_82);
                      }
                    else
                      {
                        t = w_82;
                        t = dynrule_targs_1_0(r_24, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_24 (ATerm t)
{
  ATerm j_168 = NULL;
  ATerm y_82 = t;
  int z_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_168 = ATgetArgument(t, 0);
          {
            ATerm a_83 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_82);
      t = j_168;
    }
  else
    {
      t = y_82;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_168 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_168;
    }
  return(t);
}
static ATerm r_24 (ATerm t)
{
  t = map_1_0(s_24, t);
  return(t);
}
static ATerm s_24 (ATerm t)
{
  ATerm o_168 = NULL;
  ATerm b_83 = t;
  int c_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_168 = ATgetArgument(t, 0);
          {
            ATerm d_83 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_83);
      t = o_168;
    }
  else
    {
      t = b_83;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_168 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_168;
    }
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm v_168 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_168 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_168);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  ATerm e_83 = t;
  int f_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_83);
    }
  else
    {
      t = e_83;
      {
        ATerm g_83 = t;
        int h_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_83);
          }
        else
          {
            t = g_83;
            {
              ATerm i_83 = t;
              int j_83 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_168 = NULL,y_168 = NULL,z_168 = NULL,a_169 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_168 = ATgetArgument(t, 0);
                      y_168 = ATgetArgument(t, 1);
                      z_168 = ATgetArgument(t, 2);
                      a_169 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_168;
                  t = map_1_0(v_24, t);
                  LocalPopChoice(j_83);
                }
              else
                {
                  t = i_83;
                  {
                    ATerm k_83 = t;
                    int l_83 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_83);
                      }
                    else
                      {
                        t = k_83;
                        t = dynrule_targs_1_0(w_24, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_24 (ATerm t)
{
  ATerm h_169 = NULL;
  ATerm m_83 = t;
  int n_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_169 = ATgetArgument(t, 0);
          {
            ATerm o_83 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_83);
      t = h_169;
    }
  else
    {
      t = m_83;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_169 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_169;
    }
  return(t);
}
static ATerm w_24 (ATerm t)
{
  t = map_1_0(x_24, t);
  return(t);
}
static ATerm x_24 (ATerm t)
{
  ATerm m_169 = NULL;
  ATerm p_83 = t;
  int q_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_169 = ATgetArgument(t, 0);
          {
            ATerm r_83 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_83);
      t = m_169;
    }
  else
    {
      t = p_83;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_169 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_169;
    }
  return(t);
}
static ATerm a_25 (ATerm t)
{
  ATerm s_83 = t;
  int t_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(t_83);
    }
  else
    {
      t = s_83;
    }
  return(t);
}
static ATerm b_25 (ATerm t)
{
  ATerm w_169 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      w_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, w_169)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm i_167 = NULL,j_167 = NULL,k_167 = NULL,l_167 = NULL,s_35 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(r_23, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(s_23, t);
  {
    ATerm u_83 = t;
    int v_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_169 = NULL,s_169 = NULL,t_169 = NULL;
        r_169 = t;
        t = term_w_83;
        s_169 = t;
        t = term_x_83;
        t_169 = t;
        t = term_y_83;
        t = p_15(s_169, t_169, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = r_169;
        LocalPopChoice(v_83);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = u_83;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(a_25, t);
  l_167 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_167);
  i_167 = t;
  t = j_167;
  t = fetch_1_0(b_25, t);
  k_167 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, k_167);
  s_35 = t;
  t = SSLsetAnnotations(s_35, i_167);
  return(t);
}
static ATerm c_15 (ATerm y_40, ATerm z_40, ATerm t)
{
  ATerm x_169 = NULL;
  t = SSL_fputc(y_40, z_40);
  x_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_169);
  return(t);
}
static ATerm d_15 (ATerm c_25, ATerm d_25, ATerm t)
{
  ATerm y_169 = NULL;
  t = SSL_write_term_to_stream_text(c_25, d_25);
  y_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_169);
  return(t);
}
static ATerm f_15 (ATerm c_125 (ATerm), ATerm e_192, ATerm i_25, ATerm t)
{
  ATerm z_169 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_192, term_z_83);
  t = j_15(t);
  z_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_169, i_25);
  t = c_125(t);
  t = fclose_0_0(t);
  t = i_25;
  return(t);
}
static ATerm e_15 (ATerm y_24, ATerm z_24, ATerm t)
{
  ATerm a_170 = NULL;
  t = SSL_write_term_to_stream_baf(y_24, z_24);
  a_170 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_170);
  return(t);
}
static ATerm h_25 (ATerm t)
{
  ATerm h_170 = NULL,i_170 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_84 = ATgetArgument(t, 0);
      if(match_cons(a_84, sym_Stream_1))
        {
          h_170 = ATgetArgument(a_84, 0);
        }
      else
        _fail(t);
      i_170 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_15(h_170, i_170, t);
  return(t);
}
static ATerm j_25 (ATerm t)
{
  ATerm j_170 = NULL,k_170 = NULL,l_170 = NULL,m_170 = NULL,n_170 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_84 = ATgetArgument(t, 0);
      if(match_cons(b_84, sym_Stream_1))
        {
          m_170 = ATgetArgument(b_84, 0);
        }
      else
        _fail(t);
      n_170 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_15(m_170, n_170, t);
  j_170 = t;
  t = term_d_35;
  k_170 = t;
  t = j_170;
  if(match_cons(t, sym_Stream_1))
    {
      l_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_35, j_170);
  t = c_15(k_170, l_170, t);
  return(t);
}
ATerm output_1_0 (ATerm f_145 (ATerm), ATerm t)
{
  ATerm b_170 = NULL,c_170 = NULL;
  t = f_145(t);
  c_170 = t;
  {
    ATerm c_84 = t;
    int d_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_170 = NULL,e_170 = NULL;
        t = term_w_83;
        d_170 = t;
        t = term_e_84;
        e_170 = t;
        t = term_f_84;
        t = p_15(d_170, e_170, t);
        LocalPopChoice(d_84);
      }
    else
      {
        t = c_84;
        t = term_g_84;
      }
  }
  b_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_170, c_170);
  {
    ATerm h_84 = t;
    int i_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_170 = NULL,g_170 = NULL;
        t = term_w_83;
        f_170 = t;
        t = term_j_84;
        g_170 = t;
        t = term_k_84;
        t = p_15(f_170, g_170, t);
        t = (ATerm) ATmakeAppl(sym__2, b_170, c_170);
        LocalPopChoice(i_84);
        if(match_cons(t, sym__2))
          {
            ATerm l_84 = ATgetArgument(t, 0);
            ATerm m_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_15(h_25, b_170, c_170, t);
      }
    else
      {
        t = h_84;
        if(match_cons(t, sym__2))
          {
            ATerm n_84 = ATgetArgument(t, 0);
            ATerm o_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_15(j_25, b_170, c_170, t);
      }
  }
  return(t);
}
static ATerm b_171 (ATerm v_170, ATerm t)
{
  t = SSL_fclose(v_170);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm y_170 = NULL,z_170 = NULL;
  z_170 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_170 = ATgetArgument(t, 0);
      {
        ATerm p_84 = t;
        int q_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(y_170);
            LocalPopChoice(q_84);
          }
        else
          {
            t = p_84;
            t = b_171(z_170, t);
          }
      }
    }
  else
    {
      t = b_171(z_170, t);
    }
  return(t);
}
static ATerm g_15 (ATerm e_25, ATerm t)
{
  t = SSL_read_term_from_stream(e_25);
  return(t);
}
static ATerm h_15 (ATerm r_39, ATerm s_39, ATerm t)
{
  t = SSL_strcat(r_39, s_39);
  return(t);
}
static ATerm i_15 (ATerm a_41, ATerm b_41, ATerm t)
{
  ATerm c_171 = NULL;
  t = SSL_fopen(a_41, b_41);
  c_171 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_171);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm d_171 = NULL;
  t = SSL_stdin_stream();
  d_171 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_171);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm e_171 = NULL;
  t = SSL_stdout_stream();
  e_171 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_171);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_171 = NULL;
  t = SSL_stderr_stream();
  f_171 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_171);
  return(t);
}
static ATerm m_172 (ATerm l_171, ATerm t)
{
  ATerm m_171 = NULL;
  t = SSL_explode_term(l_171);
  if(match_cons(t, sym__2))
    {
      ATerm r_84 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_84) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_84 = ATgetArgument(t, 1);
        if(((ATgetType(s_84) == AT_LIST) && !(ATisEmpty(s_84))))
          {
            m_171 = ATgetFirst((ATermList) s_84);
            {
              ATerm t_84 = (ATerm) ATgetNext((ATermList) s_84);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_171;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_171;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_171;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_171;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm n_172 (ATerm p_171, ATerm q_171, ATerm r_171, ATerm t)
{
  ATerm s_171 = NULL,t_171 = NULL,u_171 = NULL,x_171 = NULL,y_35 = NULL;
  t = SSLgetAnnotations(r_171);
  u_171 = t;
  t = p_171;
  if(match_cons(t, sym_Path_1))
    {
      x_171 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_171, q_171);
  y_35 = t;
  t = SSLsetAnnotations(y_35, u_171);
  if(match_cons(t, sym__2))
    {
      s_171 = ATgetArgument(t, 0);
      t_171 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_15(s_171, t_171, t);
  return(t);
}
static ATerm o_172 (ATerm z_171, ATerm a_172, ATerm b_172, ATerm t)
{
  ATerm c_172 = NULL,d_172 = NULL,e_172 = NULL,h_172 = NULL,z_35 = NULL;
  t = SSLgetAnnotations(b_172);
  e_172 = t;
  t = SSL_is_string(z_171);
  h_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_172, a_172);
  z_35 = t;
  t = SSLsetAnnotations(z_35, e_172);
  if(match_cons(t, sym__2))
    {
      c_172 = ATgetArgument(t, 0);
      d_172 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_15(c_172, d_172, t);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm j_172 = NULL,k_172 = NULL,l_172 = NULL;
  j_172 = t;
  if(match_cons(t, sym__2))
    {
      k_172 = ATgetArgument(t, 0);
      l_172 = ATgetArgument(t, 1);
      {
        ATerm u_84 = t;
        int v_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = m_172(j_172, t);
            LocalPopChoice(v_84);
          }
        else
          {
            t = u_84;
            {
              ATerm w_84 = t;
              int x_84 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_172(k_172, l_172, j_172, t);
                  LocalPopChoice(x_84);
                }
              else
                {
                  t = w_84;
                  t = o_172(k_172, l_172, j_172, t);
                }
            }
          }
      }
    }
  else
    {
      t = m_172(j_172, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm q_172 = NULL,r_172 = NULL,s_172 = NULL,x_172 = NULL;
  x_172 = t;
  {
    ATerm y_84 = t;
    int z_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_172, term_a_85);
        t = j_15(t);
        LocalPopChoice(z_84);
      }
    else
      {
        t = y_84;
        {
          ATerm w_76 = NULL,x_76 = NULL;
          t = term_b_85;
          x_76 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_85, x_172);
          t = h_15(x_76, x_172, t);
          w_76 = t;
          t = SSL_perror(w_76);
          _fail(t);
        }
      }
  }
  r_172 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_172 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(s_172, t);
  q_172 = t;
  t = r_172;
  t = fclose_0_0(t);
  t = q_172;
  return(t);
}
ATerm input_1_0 (ATerm g_145 (ATerm), ATerm t)
{
  ATerm c_85 = t;
  int d_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_173 = NULL,b_173 = NULL;
      t = term_w_83;
      a_173 = t;
      t = term_e_85;
      b_173 = t;
      t = term_f_85;
      t = p_15(a_173, b_173, t);
      LocalPopChoice(d_85);
    }
  else
    {
      t = c_85;
      t = term_g_85;
    }
  t = ReadFromFile_0_0(t);
  t = g_145(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_173 = NULL,d_173 = NULL,e_173 = NULL,f_173 = NULL,g_173 = NULL;
  c_173 = t;
  t = term_h_85;
  t = whoami_0_0(t);
  d_173 = t;
  t = term_k_45;
  f_173 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_85), d_173), term_i_85);
  g_173 = t;
  t = SSL_printnl(f_173, g_173);
  t = term_o_45;
  e_173 = t;
  t = SSL_exit(e_173);
  t = c_173;
  return(t);
}
static ATerm k_25 (ATerm t)
{
  ATerm i_173 = NULL;
  i_173 = t;
  if(match_string(t, "-k"))
    {
      t = i_173;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_173;
    }
  return(t);
}
static ATerm l_25 (ATerm t)
{
  ATerm j_173 = NULL,k_173 = NULL,l_173 = NULL;
  j_173 = t;
  t = SSL_string_to_int(j_173);
  k_173 = t;
  t = term_k_85;
  l_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_85, k_173);
  t = s_15(l_173, k_173, t);
  t = j_173;
  return(t);
}
static ATerm m_25 (ATerm t)
{
  t = term_l_85;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_25, l_25, m_25, t);
  return(t);
}
static ATerm n_25 (ATerm t)
{
  ATerm n_173 = NULL;
  n_173 = t;
  if(match_string(t, "-S"))
    {
      t = n_173;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_173;
    }
  return(t);
}
static ATerm o_25 (ATerm t)
{
  ATerm o_173 = NULL,p_173 = NULL;
  t = term_m_85;
  o_173 = t;
  t = term_y_47;
  p_173 = t;
  t = term_p_85;
  t = s_15(o_173, p_173, t);
  t = term_r_85;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  t = term_s_85;
  return(t);
}
static ATerm y_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  ATerm q_173 = NULL,r_173 = NULL,s_173 = NULL;
  q_173 = t;
  t = SSL_string_to_int(q_173);
  r_173 = t;
  t = term_m_85;
  s_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_85, r_173);
  t = s_15(s_173, r_173, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, q_173);
  return(t);
}
static ATerm a_26 (ATerm t)
{
  t = term_t_85;
  return(t);
}
static ATerm d_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_26 (ATerm t)
{
  ATerm t_173 = NULL,u_173 = NULL;
  t = term_u_85;
  t_173 = t;
  t = term_h_85;
  u_173 = t;
  t = term_v_85;
  t = s_15(t_173, u_173, t);
  t = term_w_85;
  return(t);
}
static ATerm f_26 (ATerm t)
{
  t = term_y_85;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_85 = t;
  int a_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_25, o_25, x_25, t);
      LocalPopChoice(a_86);
    }
  else
    {
      t = z_85;
      {
        ATerm d_86 = t;
        int e_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_25, z_25, a_26, t);
            LocalPopChoice(e_86);
          }
        else
          {
            t = d_86;
            t = Option_3_0(d_26, e_26, f_26, t);
          }
      }
    }
  return(t);
}
static ATerm s_15 (ATerm b_59, ATerm c_59, ATerm t)
{
  ATerm v_173 = NULL,w_173 = NULL;
  t = term_w_83;
  v_173 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_w_83, b_59, c_59);
  t = lookup_table_0_1(v_173, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_15(b_59, c_59, w_173, t);
  t = (ATerm) ATmakeAppl(sym__3, term_w_83, b_59, c_59);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm a_174 = NULL,b_174 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_174 = NULL,d_174 = NULL,e_174 = NULL;
      t = term_h_85;
      t = f_0(t);
      c_174 = t;
      t = term_f_86;
      d_174 = t;
      t = term_g_86;
      e_174 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_86, term_g_86, c_174);
      t = q_15(d_174, e_174, c_174, t);
      _fail(t);
    }
  else
    {
      ATerm h_174 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_174 = ATgetFirst((ATermList) t);
          b_174 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_174;
      t = b_0(t);
      t = term_h_85;
      t = d_0(t);
      h_174 = t;
      t = (ATerm) ATinsert(CheckATermList(b_174), h_174);
    }
  return(t);
}
static ATerm h_26 (ATerm t)
{
  ATerm j_174 = NULL;
  j_174 = t;
  if(match_string(t, "-o"))
    {
      t = j_174;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_174;
    }
  return(t);
}
static ATerm j_26 (ATerm t)
{
  ATerm k_174 = NULL,l_174 = NULL;
  k_174 = t;
  t = term_e_84;
  l_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_84, k_174);
  t = s_15(l_174, k_174, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_174);
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = term_l_86;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_26, j_26, l_26, t);
  return(t);
}
static ATerm o_26 (ATerm t)
{
  ATerm n_174 = NULL;
  n_174 = t;
  if(match_string(t, "-i"))
    {
      t = n_174;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_174;
    }
  return(t);
}
static ATerm p_26 (ATerm t)
{
  ATerm o_174 = NULL,p_174 = NULL;
  o_174 = t;
  t = term_e_85;
  p_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_85, o_174);
  t = s_15(p_174, o_174, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_174);
  return(t);
}
static ATerm y_26 (ATerm t)
{
  t = term_n_86;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_26, p_26, y_26, t);
  return(t);
}
static ATerm q_15 (ATerm w_63, ATerm x_63, ATerm v_63, ATerm t)
{
  ATerm r_174 = NULL,s_174 = NULL,t_174 = NULL,u_174 = NULL,v_174 = NULL;
  r_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_63, x_63);
  {
    ATerm o_86 = t;
    int r_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_86 = ATgetArgument(t, 0);
            ATerm t_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_63, x_63);
        t = p_15(w_63, x_63, t);
        LocalPopChoice(r_86);
      }
    else
      {
        t = o_86;
        t = (ATerm) ATempty;
      }
  }
  s_174 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_63, x_63, (ATerm) ATinsert(CheckATermList(s_174), v_63));
  t = lookup_table_0_1(w_63, t);
  v_174 = t;
  t = (ATerm) ATinsert(CheckATermList(s_174), v_63);
  t_174 = t;
  t = v_174;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_15(x_63, t_174, u_174, t);
  t = r_174;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm c_175 = NULL,d_175 = NULL,e_175 = NULL,f_175 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_175 = NULL,h_175 = NULL,i_175 = NULL;
      t = term_h_85;
      t = m_0(t);
      g_175 = t;
      t = term_f_86;
      h_175 = t;
      t = term_g_86;
      i_175 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_86, term_g_86, g_175);
      t = q_15(h_175, i_175, g_175, t);
      _fail(t);
    }
  else
    {
      ATerm m_175 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_175 = ATgetFirst((ATermList) t);
          d_175 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_175;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_175 = ATgetFirst((ATermList) t);
          f_175 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_175;
      t = j_0(t);
      t = e_175;
      t = l_0(t);
      m_175 = t;
      t = (ATerm) ATinsert(CheckATermList(f_175), m_175);
    }
  return(t);
}
static ATerm z_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_27 (ATerm t)
{
  ATerm o_175 = NULL,p_175 = NULL;
  o_175 = t;
  if(match_string(t, "old"))
    {
      t = o_175;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = o_175;
    }
  t = term_x_83;
  p_175 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_83, o_175);
  t = s_15(p_175, o_175, t);
  t = term_h_85;
  return(t);
}
static ATerm b_27 (ATerm t)
{
  t = term_u_86;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_26, a_27, b_27, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_175 = NULL,s_175 = NULL,t_175 = NULL,u_175 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_85;
  t = whoami_0_0(t);
  r_175 = t;
  t = term_k_45;
  t_175 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_86), r_175);
  u_175 = t;
  t = SSL_printnl(t_175, u_175);
  t = term_o_45;
  s_175 = t;
  t = SSL_exit(s_175);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm v_175 = NULL,w_175 = NULL;
  t = term_w_83;
  v_175 = t;
  t = term_w_86;
  w_175 = t;
  t = term_x_86;
  t = p_15(v_175, w_175, t);
  return(t);
}
static ATerm k_15 (ATerm u_43, ATerm v_43, ATerm t)
{
  ATerm y_86 = t;
  int z_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_43, v_43);
      LocalPopChoice(z_86);
    }
  else
    {
      t = y_86;
      t = SSL_addr(u_43, v_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_132 (ATerm), ATerm l_132 (ATerm), ATerm t)
{
  ATerm y_175 = NULL,z_175 = NULL,a_176 = NULL;
  y_175 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_175;
      t = k_132(t);
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
      t = foldr_2_0(k_132, l_132, t);
      d_176 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_175, d_176);
      t = l_132(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_27 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm d_27 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL;
  if(match_cons(t, sym__2))
    {
      g_77 = ATgetArgument(t, 0);
      h_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_15(g_77, h_77, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_176 = NULL,z_76 = NULL,d_77 = NULL;
  t = times_0_0(t);
  d_77 = t;
  t = SSL_explode_term(d_77);
  if(match_cons(t, sym__2))
    {
      ATerm a_87 = ATgetArgument(t, 0);
      z_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_76;
  t = foldr_2_0(c_27, d_27, t);
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
    ATerm b_87 = t;
    int c_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_176;
        if((s_176 != t))
          {
            _fail(t);
          }
        t = r_176;
        LocalPopChoice(c_87);
      }
    else
      {
        t = b_87;
        t = (ATerm) ATmakeAppl(sym__2, s_176, t_176);
        {
          ATerm d_87 = t;
          int e_87 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_176, t_176);
              LocalPopChoice(e_87);
            }
          else
            {
              t = d_87;
              t = SSL_gtr(s_176, t_176);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_176, t_176);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm g_142 (ATerm), ATerm t)
{
  ATerm x_176 = NULL;
  x_176 = t;
  {
    ATerm f_87 = t;
    int g_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_176 = NULL,a_177 = NULL,b_177 = NULL;
        t = term_w_83;
        a_177 = t;
        t = term_m_85;
        b_177 = t;
        t = term_h_87;
        t = p_15(a_177, b_177, t);
        z_176 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_176, term_o_45);
        t = geq_0_0(t);
        t = x_176;
        t = g_142(t);
        LocalPopChoice(g_87);
      }
    else
      {
        t = f_87;
        t = x_176;
      }
  }
  return(t);
}
static ATerm f_27 (ATerm t)
{
  ATerm d_177 = NULL,e_177 = NULL,g_177 = NULL,h_177 = NULL;
  t = run_time_0_0(t);
  d_177 = t;
  t = term_h_85;
  t = whoami_0_0(t);
  e_177 = t;
  t = term_k_45;
  g_177 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_87), d_177), term_i_87), e_177);
  h_177 = t;
  t = SSL_printnl(g_177, h_177);
  t = (ATerm) ATmakeAppl(sym__2, term_k_45, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_87), d_177), term_i_87), e_177));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_27, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_177 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_47;
  i_177 = t;
  t = SSL_exit(i_177);
  return(t);
}
static ATerm q_27 (ATerm t)
{
  ATerm s_177 = NULL,t_177 = NULL;
  t_177 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_177;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_177 = ATgetArgument(t, 0);
          {
            ATerm t_77 = NULL,l_36 = NULL;
            t = SSLgetAnnotations(t_177);
            t_77 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_177);
            l_36 = t;
            t = SSLsetAnnotations(l_36, t_77);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_177;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm w_144 (ATerm), ATerm t)
{
  ATerm k_87 = t;
  int l_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_177 = NULL,m_177 = NULL;
      t = term_w_83;
      l_177 = t;
      t = term_m_87;
      m_177 = t;
      t = term_n_87;
      t = p_15(l_177, m_177, t);
      LocalPopChoice(l_87);
    }
  else
    {
      t = k_87;
      t = fetch_1_0(q_27, t);
    }
  t = w_144(t);
  return(t);
}
static ATerm t_15 (ATerm o_68, ATerm p_68, ATerm q_68, ATerm t)
{
  ATerm v_177 = NULL;
  t = SSL_hashtable_put(q_68, o_68, p_68);
  v_177 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_177);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_65, ATerm t)
{
  ATerm e_178 = NULL;
  t = table_hashtable_0_0(t);
  e_178 = t;
  {
    ATerm o_87 = t;
    int q_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_78 = NULL;
        t = e_178;
        if(match_cons(t, sym_Hashtable_1))
          {
            h_78 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_15(i_65, h_78, t);
        LocalPopChoice(q_87);
      }
    else
      {
        t = o_87;
        {
          ATerm m_78 = NULL;
          t = i_65;
          t = table_create_0_0(t);
          t = e_178;
          if(match_cons(t, sym_Hashtable_1))
            {
              m_78 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_15(i_65, m_78, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_68, ATerm x_68, ATerm t)
{
  ATerm h_178 = NULL;
  t = SSL_hashtable_create(w_68, x_68);
  h_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_178);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm i_178 = NULL,j_178 = NULL,k_178 = NULL,m_178 = NULL,n_178 = NULL;
  i_178 = t;
  t = term_r_87;
  m_178 = t;
  t = term_s_87;
  n_178 = t;
  t = i_178;
  t = new_hashtable_0_2(m_178, n_178, t);
  j_178 = t;
  t = i_178;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_15(i_178, j_178, k_178, t);
  t = i_178;
  return(t);
}
static ATerm m_15 (ATerm t_68, ATerm u_68, ATerm t)
{
  ATerm o_178 = NULL;
  t = SSL_hashtable_remove(u_68, t_68);
  o_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_178);
  return(t);
}
static ATerm n_15 (ATerm y_68, ATerm t)
{
  ATerm p_178 = NULL;
  t = SSL_hashtable_destroy(y_68);
  p_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_178);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm q_178 = NULL;
  t = SSL_table_hashtable();
  q_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_178);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm r_178 = NULL,s_178 = NULL,t_178 = NULL,u_178 = NULL;
  r_178 = t;
  t = table_hashtable_0_0(t);
  s_178 = t;
  t = lookup_table_0_1(r_178, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_15(u_178, t);
  t = s_178;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(r_178, t_178, t);
  t = r_178;
  return(t);
}
ATerm map_1_0 (ATerm l_125 (ATerm), ATerm t)
{
  static ATerm j_179 (ATerm t)
  {
    ATerm g_179 = NULL,h_179 = NULL,i_179 = NULL;
    g_179 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_179;
      }
    else
      {
        ATerm u_78 = NULL,x_78 = NULL,y_78 = NULL,n_36 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_179 = ATgetFirst((ATermList) t);
            i_179 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_179);
        u_78 = t;
        t = h_179;
        t = l_125(t);
        x_78 = t;
        t = i_179;
        t = j_179(t);
        y_78 = t;
        t = (ATerm) ATinsert(CheckATermList(y_78), x_78);
        n_36 = t;
        t = SSLsetAnnotations(n_36, u_78);
      }
    return(t);
  }
  t = j_179(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm m_179 = NULL,n_179 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_179 = ATgetFirst((ATermList) t);
      n_179 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_179 = NULL,t_179 = NULL;
        static ATerm u_27 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(s_179)), not_null(t_179));
          return(t);
        }
        t = n_179;
        t = h_0(t);
        if(((s_179 != NULL) && (s_179 != t)))
          _fail(t);
        else
          s_179 = t;
        t = m_179;
        t = g_0(t);
        if(((t_179 != NULL) && (t_179 != t)))
          _fail(t);
        else
          t_179 = t;
        t = n_179;
        t = reverse_acc_2_0(g_0, u_27, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_85;
      t = h_0(t);
    }
  return(t);
}
static ATerm x_27 (ATerm t)
{
  ATerm z_179 = NULL,a_180 = NULL,b_180 = NULL,p_36 = NULL;
  b_180 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_180 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_180);
  z_179 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_180);
  p_36 = t;
  t = SSLsetAnnotations(p_36, z_179);
  return(t);
}
static ATerm y_27 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_27 (ATerm t)
{
  ATerm d_180 = NULL;
  d_180 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_180), term_t_87);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm v_179 = NULL,w_179 = NULL;
  ATerm v_87 = t;
  int w_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_179 = NULL,y_179 = NULL;
      t = term_w_83;
      x_179 = t;
      t = term_w_86;
      y_179 = t;
      t = term_x_86;
      t = p_15(x_179, y_179, t);
      LocalPopChoice(w_87);
    }
  else
    {
      t = v_87;
      t = fetch_1_0(x_27, t);
    }
  t = term_y_87;
  t = echo_0_0(t);
  t = term_f_86;
  v_179 = t;
  t = term_g_86;
  w_179 = t;
  t = term_z_87;
  t = p_15(v_179, w_179, t);
  t = reverse_acc_2_0(_id, y_27, t);
  t = map_1_0(z_27, t);
  return(t);
}
ATerm fetch_1_0 (ATerm v_125 (ATerm), ATerm t)
{
  static ATerm a_181 (ATerm t)
  {
    ATerm x_180 = NULL,y_180 = NULL,z_180 = NULL;
    x_180 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_180 = ATgetFirst((ATermList) t);
        z_180 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_88 = t;
      int b_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_79 = NULL,y_79 = NULL,s_36 = NULL;
          t = SSLgetAnnotations(x_180);
          v_79 = t;
          t = y_180;
          t = v_125(t);
          y_79 = t;
          t = (ATerm) ATinsert(CheckATermList(z_180), y_79);
          s_36 = t;
          t = SSLsetAnnotations(s_36, v_79);
          LocalPopChoice(b_88);
        }
      else
        {
          t = a_88;
          {
            ATerm a_81 = NULL,i_81 = NULL,t_36 = NULL;
            t = SSLgetAnnotations(x_180);
            a_81 = t;
            t = z_180;
            t = a_181(t);
            i_81 = t;
            t = (ATerm) ATinsert(CheckATermList(i_81), y_180);
            t_36 = t;
            t = SSLsetAnnotations(t_36, a_81);
          }
        }
    }
    return(t);
  }
  t = a_181(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_181 = NULL,f_181 = NULL,g_181 = NULL;
  e_181 = t;
  {
    ATerm c_88 = t;
    int d_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_181;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_88 = ATgetFirst((ATermList) t);
                ATerm f_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_181;
          }
        LocalPopChoice(d_88);
      }
    else
      {
        t = c_88;
        t = (ATerm) ATinsert(ATempty, e_181);
      }
  }
  f_181 = t;
  t = term_g_84;
  g_181 = t;
  t = SSL_printnl(g_181, f_181);
  t = e_181;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_181 = NULL,l_181 = NULL;
  t = term_w_83;
  k_181 = t;
  t = term_w_86;
  l_181 = t;
  t = term_x_86;
  t = p_15(k_181, l_181, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm u_15 (ATerm r_68, ATerm s_68, ATerm t)
{
  t = SSL_hashtable_get(s_68, r_68);
  return(t);
}
static ATerm p_15 (ATerm p_65, ATerm q_65, ATerm t)
{
  ATerm m_181 = NULL;
  t = lookup_table_0_1(p_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_15(q_65, m_181, t);
  return(t);
}
static ATerm a_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_28 (ATerm t)
{
  ATerm o_181 = NULL,p_181 = NULL;
  t = term_g_88;
  o_181 = t;
  t = term_h_85;
  p_181 = t;
  t = term_h_88;
  t = s_15(o_181, p_181, t);
  return(t);
}
static ATerm d_28 (ATerm t)
{
  t = term_i_88;
  return(t);
}
static ATerm f_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_28 (ATerm t)
{
  ATerm q_181 = NULL,r_181 = NULL,s_181 = NULL,t_181 = NULL;
  t = term_g_88;
  s_181 = t;
  t = term_h_85;
  t_181 = t;
  t = term_h_88;
  t = s_15(s_181, t_181, t);
  t = term_j_88;
  q_181 = t;
  t = term_h_85;
  r_181 = t;
  t = term_k_88;
  t = s_15(q_181, r_181, t);
  t = term_m_88;
  return(t);
}
static ATerm h_28 (ATerm t)
{
  t = term_n_88;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_88 = t;
  int p_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_28, b_28, d_28, t);
      LocalPopChoice(p_88);
    }
  else
    {
      t = o_88;
      t = Option_3_0(f_28, g_28, h_28, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm t)
{
  ATerm u_181 = NULL,v_181 = NULL,w_181 = NULL,x_181 = NULL,y_181 = NULL,z_181 = NULL,y_36 = NULL;
  z_181 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_181 = ATgetFirst((ATermList) t);
      w_181 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_181);
  u_181 = t;
  t = v_181;
  t = z_103(t);
  x_181 = t;
  t = w_181;
  t = a_104(t);
  y_181 = t;
  t = (ATerm) ATinsert(CheckATermList(y_181), x_181);
  y_36 = t;
  t = SSLsetAnnotations(y_36, u_181);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_146 (ATerm), ATerm t)
{
  ATerm e_182 = NULL,f_182 = NULL,g_182 = NULL,h_182 = NULL,j_182 = NULL,k_182 = NULL,c_37 = NULL;
  e_182 = t;
  {
    ATerm q_88 = t;
    int r_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_88;
        t = z_146(t);
        LocalPopChoice(r_88);
      }
    else
      {
        t = q_88;
      }
  }
  t = e_182;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_182 = ATgetFirst((ATermList) t);
      h_182 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_182);
  f_182 = t;
  t = term_w_86;
  k_182 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_86, g_182);
  t = s_15(k_182, g_182, t);
  t = h_182;
  {
    static ATerm u_182 (ATerm t)
    {
      ATerm t_88 = t;
      int u_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_88 = t;
          int x_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_182 = NULL;
              n_182 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_182;
              LocalPopChoice(x_88);
            }
          else
            {
              t = v_88;
              t = z_146(t);
              t = Cons_2_0(_id, u_182, t);
            }
          LocalPopChoice(u_88);
        }
      else
        {
          t = t_88;
          {
            ATerm q_182 = NULL,r_182 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_182 = ATgetFirst((ATermList) t);
                r_182 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_182), (ATerm) ATmakeAppl(sym_Undefined_1, q_182));
          }
        }
      return(t);
    }
    t = u_182(t);
  }
  j_182 = t;
  t = (ATerm) ATinsert(CheckATermList(j_182), (ATerm) ATmakeAppl(sym_Program_1, g_182));
  c_37 = t;
  t = SSLsetAnnotations(c_37, f_182);
  return(t);
}
static ATerm l_28 (ATerm t)
{
  ATerm h_183 = NULL;
  h_183 = t;
  if(match_string(t, "--help"))
    {
      t = h_183;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_183;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_183;
        }
    }
  return(t);
}
static ATerm m_28 (ATerm t)
{
  ATerm i_183 = NULL,j_183 = NULL;
  t = term_m_87;
  i_183 = t;
  t = term_h_85;
  j_183 = t;
  t = term_y_88;
  t = s_15(i_183, j_183, t);
  t = term_z_88;
  return(t);
}
static ATerm q_28 (ATerm t)
{
  t = term_a_89;
  return(t);
}
static ATerm x_28 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm y_146 (ATerm), ATerm t)
{
  ATerm z_182 = NULL,a_183 = NULL,b_183 = NULL,c_183 = NULL,d_183 = NULL,e_183 = NULL,f_183 = NULL,g_183 = NULL;
  b_183 = t;
  t = term_f_86;
  c_183 = t;
  t = term_b_89;
  t = lookup_table_0_1(c_183, t);
  g_183 = t;
  t = term_g_86;
  d_183 = t;
  t = (ATerm) ATempty;
  e_183 = t;
  t = g_183;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_183 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_15(d_183, e_183, f_183, t);
  t = b_183;
  {
    static ATerm k_28 (ATerm t)
    {
      ATerm c_89 = t;
      int d_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_146(t);
          LocalPopChoice(d_89);
        }
      else
        {
          t = c_89;
          {
            ATerm e_89 = t;
            int f_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_28, m_28, q_28, t);
                LocalPopChoice(f_89);
              }
            else
              {
                t = e_89;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_28, t);
  }
  {
    ATerm g_89 = t;
    int h_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_183 = NULL;
        u_183 = t;
        {
          ATerm i_89 = t;
          int j_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_81 = NULL;
              t = u_183;
              {
                ATerm k_89 = t;
                int l_89 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_81 = NULL,r_81 = NULL;
                    t = term_w_83;
                    q_81 = t;
                    t = term_m_87;
                    r_81 = t;
                    t = term_n_87;
                    t = p_15(q_81, r_81, t);
                    LocalPopChoice(l_89);
                  }
                else
                  {
                    t = k_89;
                    t = fetch_1_0(x_28, t);
                  }
              }
              t = u_183;
              t = default_system_usage_0_0(t);
              t = term_y_47;
              p_81 = t;
              t = SSL_exit(p_81);
              LocalPopChoice(j_89);
            }
          else
            {
              t = i_89;
              {
                ATerm v_81 = NULL,w_81 = NULL,x_81 = NULL;
                t = term_w_83;
                w_81 = t;
                t = term_g_88;
                x_81 = t;
                t = term_m_89;
                t = p_15(w_81, x_81, t);
                t = u_183;
                t = default_system_about_0_0(t);
                t = term_y_47;
                v_81 = t;
                t = SSL_exit(v_81);
              }
            }
        }
        LocalPopChoice(h_89);
      }
    else
      {
        t = g_89;
        {
          ATerm n_89 = t;
          int o_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_183 = NULL,w_183 = NULL,x_183 = NULL;
              static ATerm y_28 (ATerm t)
              {
                ATerm y_183 = NULL,z_183 = NULL,a_184 = NULL,j_37 = NULL;
                a_184 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_183 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_184);
                y_183 = t;
                t = z_183;
                if(((z_182 != NULL) && (z_182 != t)))
                  _fail(t);
                else
                  z_182 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_183);
                j_37 = t;
                t = SSLsetAnnotations(j_37, y_183);
                return(t);
              }
              t = fetch_1_0(y_28, t);
              t = term_k_45;
              w_183 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_182)), term_p_89);
              x_183 = t;
              t = SSL_printnl(w_183, x_183);
              t = (ATerm) ATmakeAppl(sym__2, term_k_45, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_182)), term_p_89));
              t = default_system_usage_0_0(t);
              t = term_o_45;
              v_183 = t;
              t = SSL_exit(v_183);
              LocalPopChoice(o_89);
            }
          else
            {
              t = n_89;
            }
        }
      }
  }
  a_183 = t;
  t = term_f_86;
  t = table_destroy_0_0(t);
  t = a_183;
  return(t);
}
ATerm option_wrap_4_0 (ATerm y_144 (ATerm), ATerm z_144 (ATerm), ATerm a_145 (ATerm), ATerm b_145 (ATerm), ATerm t)
{
  ATerm f_184 = NULL,g_184 = NULL,h_184 = NULL,i_184 = NULL,j_184 = NULL;
  t = parse_options_1_0(y_144, t);
  f_184 = t;
  t = term_q_89;
  t = table_create_0_0(t);
  t = term_q_89;
  g_184 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_89, term_r_89, f_184);
  t = lookup_table_0_1(g_184, t);
  j_184 = t;
  t = term_r_89;
  h_184 = t;
  t = j_184;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_184 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_15(h_184, f_184, i_184, t);
  t = f_184;
  t = a_145(t);
  {
    ATerm s_89 = t;
    int t_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(z_144, t);
        LocalPopChoice(t_89);
      }
    else
      {
        t = s_89;
        {
          ATerm u_89 = t;
          int v_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = b_145(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_89);
            }
          else
            {
              t = u_89;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm z_28 (ATerm t)
{
  ATerm w_89 = t;
  int x_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(x_89);
    }
  else
    {
      t = w_89;
      {
        ATerm y_89 = t;
        int z_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(z_89);
          }
        else
          {
            t = y_89;
            {
              ATerm a_90 = t;
              int b_90 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(b_90);
                }
              else
                {
                  t = a_90;
                  {
                    ATerm c_90 = t;
                    int d_90 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(b_29, f_29, h_29, t);
                        LocalPopChoice(d_90);
                      }
                    else
                      {
                        t = c_90;
                        {
                          ATerm e_90 = t;
                          int f_90 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(f_90);
                            }
                          else
                            {
                              t = e_90;
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
static ATerm a_29 (ATerm t)
{
  t = input_1_0(s_29, t);
  return(t);
}
static ATerm b_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_29 (ATerm t)
{
  ATerm l_184 = NULL,m_184 = NULL;
  t = term_j_84;
  l_184 = t;
  t = term_h_85;
  m_184 = t;
  t = term_g_90;
  t = s_15(l_184, m_184, t);
  t = term_h_90;
  return(t);
}
static ATerm h_29 (ATerm t)
{
  t = term_i_90;
  return(t);
}
static ATerm s_29 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(z_28, default_usage_0_0, _id, a_29, t);
  return(t);
}

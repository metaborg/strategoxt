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
ATerm term_g_90;
ATerm term_f_90;
ATerm term_e_90;
ATerm term_p_89;
ATerm term_o_89;
ATerm term_n_89;
ATerm term_k_89;
ATerm term_y_88;
ATerm term_x_88;
ATerm term_v_88;
ATerm term_u_88;
ATerm term_p_88;
ATerm term_k_88;
ATerm term_j_88;
ATerm term_i_88;
ATerm term_h_88;
ATerm term_g_88;
ATerm term_f_88;
ATerm term_e_88;
ATerm term_v_87;
ATerm term_u_87;
ATerm term_r_87;
ATerm term_q_87;
ATerm term_o_87;
ATerm term_l_87;
ATerm term_k_87;
ATerm term_h_87;
ATerm term_g_87;
ATerm term_f_87;
ATerm term_v_86;
ATerm term_u_86;
ATerm term_t_86;
ATerm term_s_86;
ATerm term_g_86;
ATerm term_f_86;
ATerm term_e_86;
ATerm term_d_86;
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
ATerm term_d_85;
ATerm term_c_85;
ATerm term_z_84;
ATerm term_y_84;
ATerm term_i_84;
ATerm term_h_84;
ATerm term_e_84;
ATerm term_d_84;
ATerm term_c_84;
ATerm term_x_83;
ATerm term_w_83;
ATerm term_v_83;
ATerm term_u_83;
ATerm term_d_82;
ATerm term_b_82;
ATerm term_a_82;
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
ATerm term_k_57;
ATerm term_j_57;
ATerm term_d_57;
ATerm term_a_57;
ATerm term_n_56;
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
ATerm term_b_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_s_52;
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
ATerm term_s_48;
ATerm term_i_48;
ATerm term_f_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_b_48;
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
ATerm term_q_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_i_44;
ATerm term_z_43;
ATerm term_y_43;
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
ATerm term_l_36;
ATerm term_j_36;
ATerm term_a_36;
ATerm term_x_35;
ATerm term_u_35;
ATerm term_f_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_z_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_n_34;
ATerm term_m_34;
ATerm term_a_34;
ATerm term_y_33;
ATerm term_w_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_z_32;
ATerm term_i_32;
ATerm term_h_32;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_t_29;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_32));
  term_h_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_i_32));
  term_i_32 = (ATerm) ATmakeAppl(sym_Op_2, term_h_32, (ATerm) ATempty);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_33);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_33);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_29);
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Op_2, term_y_33, (ATerm) ATempty);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_34);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_33);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Call_2, term_q_34, (ATerm) ATempty);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_35);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(sym_Call_2, term_x_35, (ATerm) ATempty);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym_Call_2, term_w_33, (ATerm) ATempty);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_36);
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
  term_m_43 = (ATerm) ATmakeAppl(sym_RootApp_1, term_u_29);
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
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_43);
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_44);
  ATprotect(&(term_l_44));
  term_l_44 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_44);
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_r_44));
  term_r_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_44);
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
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(sym_Defined_2, term_x_47, term_y_47);
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
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(sym__2, term_d_48, term_b_48);
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
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("res", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(sym_Var_1, term_s_52);
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
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(ATmakeSymbol("split-fetch", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_53);
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
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_56);
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("z_0", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_57);
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_57);
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
  ATprotect(&(term_a_82));
  term_a_82 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_b_82));
  term_b_82 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_d_82));
  term_d_82 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_u_83));
  term_u_83 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_w_83));
  term_w_83 = (ATerm) ATmakeAppl(sym__2, term_u_83, term_v_83);
  ATprotect(&(term_x_83));
  term_x_83 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_84));
  term_c_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(sym__2, term_u_83, term_c_84);
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeAppl(sym__2, term_u_83, term_h_84);
  ATprotect(&(term_y_84));
  term_y_84 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_z_84));
  term_z_84 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_c_85));
  term_c_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_85));
  term_d_85 = (ATerm) ATmakeAppl(sym__2, term_u_83, term_c_85);
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_85));
  term_g_85 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_85));
  term_h_85 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_85));
  term_i_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_85));
  term_j_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_85));
  term_k_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_85));
  term_l_85 = (ATerm) ATmakeAppl(sym__2, term_k_85, term_y_47);
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_47);
  ATprotect(&(term_p_85));
  term_p_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_85));
  term_r_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_85));
  term_s_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(sym__2, term_s_85, term_f_85);
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_86));
  term_d_86 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_86));
  term_f_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_86));
  term_g_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_86));
  term_s_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_t_86));
  term_t_86 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_86));
  term_u_86 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(sym__2, term_u_83, term_u_86);
  ATprotect(&(term_f_87));
  term_f_87 = (ATerm) ATmakeAppl(sym__2, term_u_83, term_k_85);
  ATprotect(&(term_g_87));
  term_g_87 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_87));
  term_h_87 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_87));
  term_k_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_87));
  term_l_87 = (ATerm) ATmakeAppl(sym__2, term_u_83, term_k_87);
  ATprotect(&(term_o_87));
  term_o_87 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_87));
  term_q_87 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_r_87));
  term_r_87 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_87));
  term_u_87 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_87));
  term_v_87 = (ATerm) ATmakeAppl(sym__2, term_d_86, term_e_86);
  ATprotect(&(term_e_88));
  term_e_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_88));
  term_f_88 = (ATerm) ATmakeAppl(sym__2, term_e_88, term_f_85);
  ATprotect(&(term_g_88));
  term_g_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_88));
  term_h_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_88));
  term_i_88 = (ATerm) ATmakeAppl(sym__2, term_h_88, term_f_85);
  ATprotect(&(term_j_88));
  term_j_88 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_88));
  term_k_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_88));
  term_p_88 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_88));
  term_u_88 = (ATerm) ATmakeAppl(sym__2, term_k_87, term_f_85);
  ATprotect(&(term_v_88));
  term_v_88 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_88));
  term_x_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_88));
  term_y_88 = (ATerm) ATmakeAppl(sym__3, term_d_86, term_e_86, (ATerm) ATempty);
  ATprotect(&(term_k_89));
  term_k_89 = (ATerm) ATmakeAppl(sym__2, term_u_83, term_e_88);
  ATprotect(&(term_n_89));
  term_n_89 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_89));
  term_o_89 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_89));
  term_p_89 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_90));
  term_e_90 = (ATerm) ATmakeAppl(sym__2, term_h_84, term_f_85);
  ATprotect(&(term_f_90));
  term_f_90 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_90));
  term_g_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm v_118 (ATerm), ATerm t);
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
static ATerm i_13 (ATerm q_152 (ATerm), ATerm j_86, ATerm h_86, ATerm i_86, ATerm m_86, ATerm k_86, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm q_152 (ATerm), ATerm t);
static ATerm g_19 (ATerm o_11, ATerm t_11, ATerm t);
static ATerm i_19 (ATerm d_12, ATerm f_12, ATerm t);
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
ATerm pat_td_1_0 (ATerm z_150 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm k_13 (ATerm a_77, ATerm b_77, ATerm c_77, ATerm t);
static ATerm n_31 (ATerm o_30, ATerm t);
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
static ATerm l_13 (ATerm n_72, ATerm o_72, ATerm p_72, ATerm t);
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
static ATerm m_13 (ATerm p_152 (ATerm), ATerm q_85, ATerm n_85, ATerm o_85, ATerm x_85, ATerm b_86, ATerm c_86, ATerm t);
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
ATerm split_dynamic_rule_old_1_0 (ATerm r_152 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_13 (ATerm q_86, ATerm p_86, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm h_62 (ATerm v_61, ATerm t);
static ATerm i_62 (ATerm z_61, ATerm t);
static ATerm q_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm x_65 (ATerm s_64, ATerm t);
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
ATerm RenameVarTerm_2_0 (ATerm v_152 (ATerm), ATerm w_152 (ATerm), ATerm t);
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
static ATerm j_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm x_152 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm DesugarDynRuleDef_0_0 (ATerm t);
ATerm split_dynamic_rule_0_0 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm y_152 (ATerm), ATerm t);
static ATerm w_11 (ATerm t);
static ATerm x_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm e_12 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm g_12 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm j_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm s_13 (ATerm t);
static ATerm t_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm b_14 (ATerm n_90, ATerm m_90, ATerm t);
ATerm repeat_2_0 (ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm r_126 (ATerm), ATerm t);
static ATerm y_14 (ATerm t);
ATerm collect_om_2_0 (ATerm a_131 (ATerm), ATerm b_131 (ATerm), ATerm t);
ATerm partition_1_0 (ATerm t_133 (ATerm), ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm z_119 (ATerm), ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm s_16 (ATerm t);
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
ATerm DRDef_LHS_1_0 (ATerm b_153 (ATerm), ATerm t);
static ATerm z_136 (ATerm o_135, ATerm p_135, ATerm s_135, ATerm t_135, ATerm u_135, ATerm x_135, ATerm z_135, ATerm t);
static ATerm p_17 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm w_124 (ATerm), ATerm t);
static ATerm q_17 (ATerm t);
ATerm UpgradeUndefine_0_0 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm t_17 (ATerm t);
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
ATerm tboundin_3_0 (ATerm u_151 (ATerm), ATerm v_151 (ATerm), ATerm w_151 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm d_152 (ATerm), ATerm t);
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
static ATerm e_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm o_19 (ATerm t);
static ATerm r_19 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm t_19 (ATerm t);
static ATerm u_19 (ATerm t);
static ATerm y_19 (ATerm t);
static ATerm z_19 (ATerm t);
static ATerm a_20 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm k_14 (ATerm s_129 (ATerm), ATerm g_31, ATerm f_31, ATerm t);
static ATerm l_14 (ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm k_31, ATerm j_31, ATerm t);
static ATerm m_14 (ATerm n_129 (ATerm), ATerm e_31, ATerm d_31, ATerm t);
ATerm genzip_4_0 (ATerm l_127 (ATerm), ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm t);
static ATerm n_20 (ATerm t);
static ATerm o_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm r_14 (ATerm d_721, ATerm i_721, ATerm n_71, ATerm t);
ATerm while_not_2_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm t);
ATerm for_3_0 (ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm t);
static ATerm q_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm d_159 (ATerm x_157, ATerm y_157, ATerm z_157, ATerm t);
static ATerm w_20 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm h_21 (ATerm t);
static ATerm i_21 (ATerm t);
static ATerm j_21 (ATerm t);
static ATerm l_21 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm g_22 (ATerm t);
ATerm free_vars_3_0 (ATerm h_149 (ATerm), ATerm i_149 (ATerm), ATerm j_149 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm w_118 (ATerm), ATerm t);
static ATerm v_14 (ATerm h_64, ATerm i_64, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm n_120 (ATerm), ATerm t);
static ATerm w_14 (ATerm s_138 (ATerm), ATerm i_45, ATerm g_45, ATerm t);
static ATerm i_22 (ATerm t);
static ATerm l_22 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm x_14 (ATerm b_64, ATerm c_64, ATerm t);
ATerm end_scope_1_0 (ATerm p_138 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm r_117 (ATerm), ATerm s_117 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm o_138 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm q_138 (ATerm), ATerm r_138 (ATerm), ATerm t);
static ATerm q_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm v_22 (ATerm t);
static ATerm w_22 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_133 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm y_125 (ATerm), ATerm t);
static ATerm l_165 (ATerm d_165, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_15 (ATerm o_22, ATerm k_22, ATerm t);
ATerm foldr_3_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm t);
static ATerm j_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm n_23 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm r_23 (ATerm t);
static ATerm s_23 (ATerm t);
static ATerm y_23 (ATerm t);
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
static ATerm g_25 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm b_15 (ATerm y_40, ATerm z_40, ATerm t);
static ATerm c_15 (ATerm c_25, ATerm d_25, ATerm t);
static ATerm e_15 (ATerm y_124 (ATerm), ATerm a_192, ATerm i_25, ATerm t);
static ATerm d_15 (ATerm y_24, ATerm z_24, ATerm t);
static ATerm h_25 (ATerm t);
static ATerm j_25 (ATerm t);
ATerm output_1_0 (ATerm b_145 (ATerm), ATerm t);
static ATerm v_170 (ATerm p_170, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_15 (ATerm e_25, ATerm t);
static ATerm g_15 (ATerm r_39, ATerm s_39, ATerm t);
static ATerm h_15 (ATerm a_41, ATerm b_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_172 (ATerm f_171, ATerm t);
static ATerm h_172 (ATerm j_171, ATerm k_171, ATerm l_171, ATerm t);
static ATerm i_172 (ATerm t_171, ATerm u_171, ATerm v_171, ATerm t);
static ATerm i_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm c_145 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm k_25 (ATerm t);
static ATerm l_25 (ATerm t);
static ATerm m_25 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
static ATerm f_26 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_15 (ATerm b_59, ATerm c_59, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm h_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm k_26 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm p_26 (ATerm t);
static ATerm y_26 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm p_15 (ATerm w_63, ATerm x_63, ATerm v_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm z_26 (ATerm t);
static ATerm a_27 (ATerm t);
static ATerm b_27 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_15 (ATerm u_43, ATerm v_43, ATerm t);
ATerm foldr_2_0 (ATerm g_132 (ATerm), ATerm h_132 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_27 (ATerm t);
static ATerm e_27 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_142 (ATerm), ATerm t);
static ATerm g_27 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_27 (ATerm t);
ATerm need_help_1_0 (ATerm s_144 (ATerm), ATerm t);
static ATerm s_15 (ATerm o_68, ATerm p_68, ATerm q_68, ATerm t);
ATerm lookup_table_0_1 (ATerm i_65, ATerm t);
ATerm new_hashtable_0_2 (ATerm w_68, ATerm x_68, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_15 (ATerm t_68, ATerm u_68, ATerm t);
static ATerm m_15 (ATerm y_68, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm h_125 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_125 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_15 (ATerm r_68, ATerm s_68, ATerm t);
static ATerm o_15 (ATerm p_65, ATerm q_65, ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_146 (ATerm), ATerm t);
static ATerm l_28 (ATerm t);
static ATerm n_28 (ATerm t);
static ATerm q_28 (ATerm t);
static ATerm w_28 (ATerm t);
ATerm parse_options_1_0 (ATerm u_146 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm u_144 (ATerm), ATerm v_144 (ATerm), ATerm w_144 (ATerm), ATerm x_144 (ATerm), ATerm t);
static ATerm y_28 (ATerm t);
static ATerm z_28 (ATerm t);
static ATerm a_29 (ATerm t);
static ATerm b_29 (ATerm t);
static ATerm g_29 (ATerm t);
static ATerm r_29 (ATerm t);
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
              t = term_t_29;
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
                  t = term_t_29;
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
                      t = term_u_29;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      e_1 = ATgetArgument(t, 0);
                      f_1 = ATgetArgument(t, 1);
                      b_1 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, f_1, (ATerm) ATmakeAppl(sym_Op_2, term_v_29, (ATerm) ATinsert(ATinsert(ATempty, b_1), e_1)));
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
ATerm topdown_1_0 (ATerm v_118 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(v_118, t);
    return(t);
  }
  t = v_118(t);
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
  ATerm w_29 = t;
  int z_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_29);
    }
  else
    {
      t = w_29;
      {
        ATerm b_30 = t;
        int h_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_30);
          }
        else
          {
            t = b_30;
            {
              ATerm j_30 = t;
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
                  t = j_30;
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
            ATerm t_30 = ATgetArgument(t, 1);
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
  ATerm u_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_7 = ATgetArgument(t, 0);
          {
            ATerm x_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_30);
      t = d_7;
    }
  else
    {
      t = u_30;
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
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_31);
    }
  else
    {
      t = b_31;
      {
        ATerm l_31 = t;
        int m_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_31);
          }
        else
          {
            t = l_31;
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
            ATerm e_32 = ATgetArgument(t, 1);
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
    ATerm f_32 = t;
    int g_32 = stack_ptr;
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
        LocalPopChoice(g_32);
      }
    else
      {
        t = f_32;
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
    t = (ATerm) ATmakeAppl(sym__2, s_4, term_i_32);
    {
      ATerm j_32 = t;
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
          t = j_32;
        }
    }
    t = new_0_0(t);
    d_5 = t;
    t = q_4;
    t = dummify_0_0(t);
    g_5 = t;
    {
      ATerm t_32 = t;
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
          t = t_32;
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
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, t_5, (ATerm) ATmakeAppl(sym_Op_2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_33, (ATerm) ATinsert(CheckATermList(o_5), (ATerm) ATmakeAppl(sym_Str_1, p_5)))), g_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, m_4, n_4, p_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, d_5), q_4), s_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_4)))), f_5), (ATerm) ATmakeAppl(sym_Op_2, term_b_33, (ATerm) ATinsert(CheckATermList(o_5), (ATerm) ATmakeAppl(sym_Str_1, p_5))))), u_4))));
    return(t);
  }
  ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,e_9 = NULL,f_9 = NULL,i_9 = NULL,k_9 = NULL,m_9 = NULL;
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
      k_9 = ATgetArgument(t, 1);
      m_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_9;
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
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, m_2, (ATerm) ATmakeAppl(sym_Op_2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, term_i_32), i_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, b_9, c_9, e_9, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_2), i_9), term_i_32, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, b_9)))), l_2), term_i_32)), (ATerm) ATmakeAppl(sym_Seq_2, m_9, term_t_29)))));
                  LocalPopChoice(f_33);
                }
              else
                {
                  t = e_33;
                  t = o_9(b_9, c_9, e_9, i_9, k_9, m_9, a_9, t);
                }
            }
          else
            {
              t = o_9(b_9, c_9, e_9, i_9, k_9, m_9, a_9, t);
            }
        }
      else
        {
          t = y_8;
          t = o_9(b_9, c_9, e_9, i_9, k_9, m_9, a_9, t);
        }
    }
  else
    {
      t = o_9(b_9, c_9, e_9, i_9, k_9, m_9, a_9, t);
    }
  return(t);
}
static ATerm i_13 (ATerm q_152 (ATerm), ATerm j_86, ATerm h_86, ATerm i_86, ATerm m_86, ATerm k_86, ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
  t = new_0_0(t);
  s_9 = t;
  t = m_86;
  t = dummify_0_0(t);
  r_9 = t;
  {
    ATerm i_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_9;
        if((m_86 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, s_9);
        LocalPopChoice(k_33);
      }
    else
      {
        t = i_33;
        t = r_9;
      }
  }
  t_9 = t;
  t = j_86;
  t = q_152(t);
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, u_9, r_9)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, j_86, h_86, i_86, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_9), m_86), term_i_32, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, j_86)))), t_9), term_p_33)), (ATerm) ATmakeAppl(sym_Seq_2, k_86, term_t_29))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm q_152 (ATerm), ATerm t)
{
  ATerm z_9 = NULL,f_10 = NULL,i_10 = NULL,j_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      z_9 = ATgetArgument(t, 0);
      f_10 = ATgetArgument(t, 1);
      i_10 = ATgetArgument(t, 2);
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
            s_10 = ATgetArgument(q_33, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_13(q_152, z_9, f_10, i_10, j_10, s_10, t);
  return(t);
}
static ATerm g_19 (ATerm o_11, ATerm t_11, ATerm t)
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_29, o_11);
  return(t);
}
static ATerm i_19 (ATerm d_12, ATerm f_12, ATerm t)
{
  t = d_12;
  {
    ATerm v_33 = t;
    if((PushChoice() == 0))
      {
        ATerm i_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL,o_3 = NULL;
        m_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_12 = ATgetFirst((ATermList) t);
            l_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_12);
        i_12 = t;
        t = l_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(l_12), k_12);
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
        ATerm c_34 = ATgetArgument(t, 1);
        if(((ATgetType(c_34) == AT_LIST) && !(ATisEmpty(c_34))))
          {
            g_14 = ATgetFirst((ATermList) c_34);
            {
              ATerm d_34 = (ATerm) ATgetNext((ATermList) c_34);
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
        ATerm h_34 = ATgetArgument(t, 1);
        if(((ATgetType(h_34) == AT_LIST) && !(ATisEmpty(h_34))))
          {
            ATerm i_34 = ATgetFirst((ATermList) h_34);
            ATerm j_34 = (ATerm) ATgetNext((ATermList) h_34);
            if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
              {
                v_2 = ATgetFirst((ATermList) j_34);
                {
                  ATerm k_34 = (ATerm) ATgetNext((ATermList) j_34);
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
  ATerm z_14 = NULL,k_15 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      k_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_34, (ATerm) ATinsert(ATinsert(ATempty, k_15), z_14));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_a_34;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      y_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_34, (ATerm) ATinsert(ATinsert(ATempty, z_15), y_15));
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_34, (ATerm) ATinsert(ATinsert(ATempty, u_16), t_16));
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_r_34;
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
  ATerm p_12 = NULL,q_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,g_13 = NULL,r_13 = NULL;
  a_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      g_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
      {
        ATerm a_14 = NULL;
        t = r_13;
        t = foldr_2_0(n_1, o_1, t);
        a_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, g_13, a_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          g_13 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, g_13, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              g_13 = ATgetArgument(t, 0);
              {
                ATerm a_3 = NULL;
                t = g_13;
                {
                  ATerm t_34 = t;
                  int u_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_z_34;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_b_35;
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
                      LocalPopChoice(u_34);
                    }
                  else
                    {
                      t = t_34;
                      {
                        ATerm c_3 = NULL;
                        t = SSL_explode_string(g_13);
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
              ATerm m_35 = t;
              int n_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      g_13 = ATgetArgument(t, 0);
                      {
                        ATerm o_35 = ATgetArgument(t, 1);
                      }
                      z_12 = ATgetArgument(t, 2);
                      p_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(n_35);
                  t = (ATerm) ATmakeAppl(sym_Con_3, g_13, z_12, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_12), (ATerm) ATempty));
                }
              else
                {
                  t = m_35;
                  {
                    ATerm q_35 = t;
                    int r_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            g_13 = ATgetArgument(t, 0);
                            {
                              ATerm t_35 = ATgetArgument(t, 1);
                            }
                            z_12 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(r_35);
                        t = (ATerm) ATmakeAppl(sym_Con_3, g_13, z_12, term_a_36);
                      }
                    else
                      {
                        t = q_35;
                        if(match_cons(t, sym_Con1_2))
                          {
                            g_13 = ATgetArgument(t, 0);
                            r_13 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, g_13, r_13, term_a_36);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                g_13 = ATgetArgument(t, 0);
                                r_13 = ATgetArgument(t, 1);
                                {
                                  static ATerm p_1 (ATerm t)
                                  {
                                    t = r_13;
                                    return(t);
                                  }
                                  t = g_13;
                                  t = foldr_2_0(p_1, q_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    g_13 = ATgetArgument(t, 0);
                                    t = g_13;
                                    t = foldr_2_0(r_1, s_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        g_13 = ATgetArgument(t, 0);
                                        t = g_13;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            q_12 = ATgetFirst((ATermList) t);
                                            x_12 = (ATerm) ATgetNext((ATermList) t);
                                            t = x_12;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm b_36 = t;
                                                int d_36 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = g_19(g_13, a_13, t);
                                                    LocalPopChoice(d_36);
                                                  }
                                                else
                                                  {
                                                    t = b_36;
                                                    t = q_12;
                                                  }
                                              }
                                            else
                                              {
                                                t = g_19(g_13, a_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = g_19(g_13, a_13, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            g_13 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, g_13));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                g_13 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, g_13));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    g_13 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, g_13));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        g_13 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, g_13));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            g_13 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_13), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                g_13 = ATgetArgument(t, 0);
                                                                r_13 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_13), r_13);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    g_13 = ATgetArgument(t, 0);
                                                                    r_13 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm t_1 (ATerm t)
                                                                      {
                                                                        t = r_13;
                                                                        return(t);
                                                                      }
                                                                      t = g_13;
                                                                      t = foldr_2_0(t_1, u_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        g_13 = ATgetArgument(t, 0);
                                                                        t = g_13;
                                                                        t = foldr_2_0(v_1, w_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            g_13 = ATgetArgument(t, 0);
                                                                            r_13 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_w_33, (ATerm) ATinsert(CheckATermList(r_13), g_13));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                g_13 = ATgetArgument(t, 0);
                                                                                t = g_13;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    q_12 = ATgetFirst((ATermList) t);
                                                                                    x_12 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = x_12;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm f_36 = t;
                                                                                        int i_36 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = i_19(g_13, a_13, t);
                                                                                            LocalPopChoice(i_36);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = f_36;
                                                                                            t = q_12;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = i_19(g_13, a_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_19(g_13, a_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_j_36;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        g_13 = ATgetArgument(t, 0);
                                                                                        r_13 = ATgetArgument(t, 1);
                                                                                        t = r_13;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            y_12 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_o_36, (ATerm) ATinsert(ATinsert(ATempty, y_12), g_13));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            g_13 = ATgetArgument(t, 0);
                                                                                            t = g_13;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                g_13 = ATgetArgument(t, 0);
                                                                                                r_13 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, g_13, r_13, term_u_29);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    g_13 = ATgetArgument(t, 0);
                                                                                                    r_13 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, g_13, r_13, term_u_29);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        g_13 = ATgetArgument(t, 0);
                                                                                                        r_13 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, g_13, (ATerm)ATempty, r_13);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            g_13 = ATgetArgument(t, 0);
                                                                                                            r_13 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, r_13, g_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                g_13 = ATgetArgument(t, 0);
                                                                                                                r_13 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, g_13, r_13, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    g_13 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, g_13, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        g_13 = ATgetArgument(t, 0);
                                                                                                                        r_13 = ATgetArgument(t, 1);
                                                                                                                        z_12 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, g_13, r_13, (ATerm)ATempty, z_12);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            g_13 = ATgetArgument(t, 0);
                                                                                                                            r_13 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, g_13, (ATerm)ATempty, (ATerm)ATempty, r_13);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                g_13 = ATgetArgument(t, 0);
                                                                                                                                r_13 = ATgetArgument(t, 1);
                                                                                                                                z_12 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, g_13, r_13, (ATerm)ATempty, z_12);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    g_13 = ATgetArgument(t, 0);
                                                                                                                                    r_13 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, g_13, (ATerm)ATempty, (ATerm)ATempty, r_13);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        g_13 = ATgetArgument(t, 0);
                                                                                                                                        r_13 = ATgetArgument(t, 1);
                                                                                                                                        z_12 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, g_13, r_13, (ATerm)ATempty, z_12);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            g_13 = ATgetArgument(t, 0);
                                                                                                                                            r_13 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, g_13, (ATerm)ATempty, (ATerm)ATempty, r_13);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm q_36 = ATgetArgument(t, 0);
                                                                                                                                                r_13 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, r_13);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
        ATerm p_19 = NULL,q_19 = NULL,s_19 = NULL,v_19 = NULL;
        t = l_19;
        t = new_0_0(t);
        p_19 = t;
        t = new_0_0(t);
        q_19 = t;
        t = new_0_0(t);
        s_19 = t;
        t = new_0_0(t);
        v_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, v_19), s_19), q_19), p_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, p_19), (ATerm) ATmakeAppl(sym_Var_1, s_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, m_19, (ATerm)ATmakeAppl(sym_Var_1, p_19), (ATerm) ATmakeAppl(sym_Var_1, q_19)), (ATerm) ATmakeAppl(sym_BAM_3, k_19, (ATerm)ATmakeAppl(sym_Var_1, s_19), (ATerm) ATmakeAppl(sym_Var_1, v_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_r_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, v_19)), (ATerm) ATmakeAppl(sym_Var_1, q_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          m_19 = ATgetArgument(t, 0);
          {
            ATerm w_19 = NULL,x_19 = NULL,d_20 = NULL,e_20 = NULL;
            t = l_19;
            t = new_0_0(t);
            d_20 = t;
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
                t = (ATerm) ATmakeAppl(sym_Var_1, d_20);
                return(t);
              }
              t = oncetd_1_0(x_1, t);
            }
            e_20 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_19)), not_null(w_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_20)), (ATerm) ATmakeAppl(sym_Build_1, e_20))));
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
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, j_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_u_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_20))))), (ATerm)ATmakeAppl(sym_Var_1, i_20), (ATerm) ATmakeAppl(sym_Op_2, term_v_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_20)), not_null(g_20)))))));
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
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,c_21 = NULL;
        t = r_20;
        t = new_0_0(t);
        a_21 = t;
        t = s_20;
        {
          static ATerm z_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((y_20 != NULL) && (y_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_20 = ATgetArgument(t, 0);
                if(((z_20 != NULL) && (z_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  z_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, a_21), y_20);
            return(t);
          }
          t = pat_td_1_0(z_1, t);
        }
        c_21 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_21), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_21))), (ATerm) ATmakeAppl(sym_Match_1, not_null(z_20))))));
        LocalPopChoice(x_36);
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
                ATerm k_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL;
                t = r_20;
                t = new_0_0(t);
                o_21 = t;
                t = s_20;
                {
                  static ATerm b_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((n_21 != NULL) && (n_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          n_21 = ATgetArgument(t, 0);
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
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_21)), not_null(n_21)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm z_150 (ATerm), ATerm t)
{
  ATerm e_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_150(t);
      LocalPopChoice(k_37);
    }
  else
    {
      t = e_37;
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
                  t = pat_td_1_0(z_150, t);
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
                  ATerm m_37 = t;
                  int o_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_4 = NULL,r_4 = NULL,t_3 = NULL;
                      t = SSLgetAnnotations(t_26);
                      k_4 = t;
                      t = v_26;
                      t = pat_td_1_0(z_150, t);
                      r_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, u_26, r_4);
                      t_3 = t;
                      t = SSLsetAnnotations(t_3, k_4);
                      LocalPopChoice(o_37);
                    }
                  else
                    {
                      t = m_37;
                      {
                        ATerm n_5 = NULL,s_5 = NULL,v_3 = NULL;
                        t = SSLgetAnnotations(t_26);
                        n_5 = t;
                        t = u_26;
                        t = pat_td_1_0(z_150, t);
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
                          t = pat_td_1_0(z_150, t);
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
                              t = pat_td_1_0(z_150, t);
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
                        ATerm l_9 = NULL,a_10 = NULL,b_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            u_26 = ATgetArgument(t, 0);
                            v_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(t_26);
                        l_9 = t;
                        t = v_26;
                        t = pat_td_1_0(z_150, t);
                        a_10 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, u_26, a_10);
                        b_4 = t;
                        t = SSLsetAnnotations(b_4, l_9);
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
  ATerm m_27 = NULL,n_27 = NULL;
  m_27 = t;
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
        t = m_27;
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
              ATerm t_27 = NULL,v_27 = NULL,h_28 = NULL;
              t = m_27;
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
              h_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_27)))), (ATerm) ATmakeAppl(sym_Build_1, h_28)));
              LocalPopChoice(u_37);
            }
          else
            {
              t = t_37;
              {
                ATerm i_28 = NULL,k_28 = NULL,o_28 = NULL,p_28 = NULL;
                t = m_27;
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
                        if(((k_28 != NULL) && (k_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, o_28);
                    return(t);
                  }
                  t = pat_td_1_0(h_2, t);
                }
                p_28 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_28), not_null(k_28), (ATerm) ATmakeAppl(sym_Var_1, o_28))), (ATerm) ATmakeAppl(sym_Build_1, p_28)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm x_37 = t;
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
      t = x_37;
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
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,x_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_38 = ATgetArgument(t, 0);
      if(match_cons(a_38, sym__2))
        {
          o_29 = ATgetArgument(a_38, 0);
          p_29 = ATgetArgument(a_38, 1);
        }
      else
        _fail(t);
      {
        ATerm b_38 = ATgetArgument(t, 1);
        if(match_cons(b_38, sym__2))
          {
            q_29 = ATgetArgument(b_38, 0);
            x_29 = ATgetArgument(b_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_29), o_29), (ATerm) ATinsert(CheckATermList(x_29), p_29));
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
  ATerm y_29 = NULL,a_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_29 = ATgetFirst((ATermList) t);
      a_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_29, a_30);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_38 = ATgetArgument(t, 0);
      if(match_cons(d_38, sym__2))
        {
          d_30 = ATgetArgument(d_38, 0);
          e_30 = ATgetArgument(d_38, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_30), d_30), (ATerm) ATinsert(CheckATermList(g_30), e_30));
  return(t);
}
static ATerm k_13 (ATerm a_77, ATerm b_77, ATerm c_77, ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,h_29 = NULL,i_29 = NULL,q_8 = NULL;
  t = c_77;
  t = fetch_1_0(j_2, t);
  t = c_77;
  t = genzip_4_0(n_2, o_2, p_2, LiftPrimArg_0_0, t);
  i_29 = t;
  if(match_cons(t, sym__2))
    {
      c_29 = ATgetArgument(t, 0);
      d_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_29);
  u_28 = t;
  t = c_29;
  t = concat_0_0(t);
  e_29 = t;
  t = d_29;
  t = genzip_4_0(q_2, r_2, s_2, _id, t);
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_29, h_29);
  q_8 = t;
  t = SSLsetAnnotations(q_8, u_28);
  if(match_cons(t, sym__2))
    {
      r_28 = ATgetArgument(t, 0);
      {
        ATerm g_38 = ATgetArgument(t, 1);
        if(match_cons(g_38, sym__2))
          {
            s_28 = ATgetArgument(g_38, 0);
            t_28 = ATgetArgument(g_38, 1);
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
static ATerm n_31 (ATerm o_30, ATerm t)
{
  ATerm q_30 = NULL;
  t = o_30;
  {
    ATerm i_38 = t;
    if((PushChoice() == 0))
      {
        ATerm r_30 = NULL,s_30 = NULL,y_30 = NULL,n_9 = NULL;
        y_30 = t;
        if(match_cons(t, sym_Var_1))
          {
            s_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_30);
        r_30 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, s_30);
        n_9 = t;
        t = SSLsetAnnotations(n_9, r_30);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_38;
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
        int l_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_31(z_30, t);
            LocalPopChoice(l_38);
          }
        else
          {
            t = j_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_u_29, (ATerm) ATmakeAppl(sym_Var_1, a_31)));
          }
      }
    }
  else
    {
      t = n_31(z_30, t);
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm n_38 = t;
  if((PushChoice() == 0))
    {
      ATerm z_10 = NULL,a_11 = NULL,b_11 = NULL,h_11 = NULL;
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
      h_11 = t;
      t = SSLsetAnnotations(h_11, z_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_38;
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
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,j_11 = NULL;
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
            g_11 = ATgetArgument(p_38, 0);
            j_11 = ATgetArgument(p_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_11), e_11), (ATerm) ATinsert(CheckATermList(j_11), f_11));
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
  ATerm p_11 = NULL,q_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_11 = ATgetFirst((ATermList) t);
      q_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_11, q_11);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm r_11 = NULL,s_11 = NULL,u_11 = NULL,v_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_38 = ATgetArgument(t, 0);
      if(match_cons(s_38, sym__2))
        {
          r_11 = ATgetArgument(s_38, 0);
          s_11 = ATgetArgument(s_38, 1);
        }
      else
        _fail(t);
      {
        ATerm t_38 = ATgetArgument(t, 1);
        if(match_cons(t_38, sym__2))
          {
            u_11 = ATgetArgument(t_38, 0);
            v_11 = ATgetArgument(t_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_11), r_11), (ATerm) ATinsert(CheckATermList(v_11), s_11));
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm u_38 = t;
  if((PushChoice() == 0))
    {
      ATerm j_13 = NULL,n_13 = NULL,p_13 = NULL,k_11 = NULL;
      p_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          n_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_13);
      j_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, n_13);
      k_11 = t;
      t = SSLsetAnnotations(k_11, j_13);
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
  ATerm q_13 = NULL,u_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_13 = ATgetFirst((ATermList) t);
      u_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_13, u_13);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm v_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if(match_cons(w_38, sym__2))
        {
          v_13 = ATgetArgument(w_38, 0);
          x_13 = ATgetArgument(w_38, 1);
        }
      else
        _fail(t);
      {
        ATerm z_38 = ATgetArgument(t, 1);
        if(match_cons(z_38, sym__2))
          {
            y_13 = ATgetArgument(z_38, 0);
            z_13 = ATgetArgument(z_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_13), v_13), (ATerm) ATinsert(CheckATermList(z_13), x_13));
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
  ATerm c_14 = NULL,d_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_14 = ATgetFirst((ATermList) t);
      d_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_14, d_14);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm n_15 = NULL,q_15 = NULL,v_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_39 = ATgetArgument(t, 0);
      if(match_cons(c_39, sym__2))
        {
          n_15 = ATgetArgument(c_39, 0);
          q_15 = ATgetArgument(c_39, 1);
        }
      else
        _fail(t);
      {
        ATerm d_39 = ATgetArgument(t, 1);
        if(match_cons(d_39, sym__2))
          {
            v_15 = ATgetArgument(d_39, 0);
            w_15 = ATgetArgument(d_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_15), n_15), (ATerm) ATinsert(CheckATermList(w_15), q_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm e_36 = NULL,g_36 = NULL,h_36 = NULL,m_36 = NULL;
  g_36 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_36 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
      e_36 = ATgetArgument(t, 2);
      {
        ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,i_11 = NULL;
        t = e_36;
        t = fetch_1_0(t_2, t);
        t = e_36;
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
            p_10 = ATgetArgument(t, 0);
            {
              ATerm e_39 = ATgetArgument(t, 1);
              if(match_cons(e_39, sym__2))
                {
                  q_10 = ATgetArgument(e_39, 0);
                  r_10 = ATgetArgument(e_39, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_10), (ATerm) ATmakeAppl(sym_PrimT_3, h_36, m_36, r_10)));
      }
    }
  else
    {
      ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,h_13 = NULL,l_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          h_36 = ATgetArgument(t, 0);
          m_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_36;
      t = fetch_1_0(d_3, t);
      t = m_36;
      t = genzip_4_0(e_3, f_3, g_3, LiftPrimArg_0_0, t);
      h_13 = t;
      if(match_cons(t, sym__2))
        {
          c_13 = ATgetArgument(t, 0);
          d_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_13);
      b_13 = t;
      t = c_13;
      t = concat_0_0(t);
      e_13 = t;
      t = d_13;
      t = genzip_4_0(h_3, j_3, k_3, _id, t);
      f_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_13, f_13);
      l_11 = t;
      t = SSLsetAnnotations(l_11, b_13);
      if(match_cons(t, sym__2))
        {
          u_12 = ATgetArgument(t, 0);
          {
            ATerm f_39 = ATgetArgument(t, 1);
            if(match_cons(f_39, sym__2))
              {
                v_12 = ATgetArgument(f_39, 0);
                w_12 = ATgetArgument(f_39, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, u_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_12), (ATerm) ATmakeAppl(sym_PrimT_3, h_36, (ATerm)ATempty, w_12)));
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
        ATerm r_16 = NULL,b_22 = NULL;
        t = SSLgetAnnotations(i_37);
        r_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, f_37, g_37, h_37);
        b_22 = t;
        t = SSLsetAnnotations(b_22, r_16);
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
  ATerm p_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t_40 = t;
  if(match_cons(t, sym_Con_3))
    {
      u_40 = ATgetArgument(t, 0);
      v_40 = ATgetArgument(t, 1);
      p_40 = ATgetArgument(t, 2);
      {
        ATerm s_17 = NULL,d_22 = NULL;
        t = SSLgetAnnotations(t_40);
        s_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, u_40, v_40, p_40);
        d_22 = t;
        t = SSLsetAnnotations(d_22, s_17);
      }
    }
  else
    {
      ATerm d_19 = NULL,e_22 = NULL;
      if(match_cons(t, sym_App_2))
        {
          u_40 = ATgetArgument(t, 0);
          v_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_40);
      d_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, u_40, v_40);
      e_22 = t;
      t = SSLsetAnnotations(e_22, d_19);
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
static ATerm l_13 (ATerm n_72, ATerm o_72, ATerm p_72, ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,g_42 = NULL;
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
            ATerm k_39 = ATgetArgument(t, 2);
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
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_42), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_42, g_42, (ATerm) ATmakeAppl(sym_Seq_2, p_72, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(y_41), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_41), not_null(a_42), term_u_29))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_42)), (ATerm) ATmakeAppl(sym_Var_1, c_42))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm q_39 = t;
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
              t = l_13(y_42, z_42, a_43, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm b_20 = NULL,m_20 = NULL,j_22 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  d_43 = ATgetArgument(t, 0);
                  e_43 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_43);
              b_20 = t;
              t = e_43;
              t = desugarRule_0_0(t);
              m_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, d_43, m_20);
              j_22 = t;
              t = SSLsetAnnotations(j_22, b_20);
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
      t = q_39;
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
        int c_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,j_44 = NULL;
            d_44 = t;
            if(match_cons(t, sym_CallT_3))
              {
                e_44 = ATgetArgument(t, 0);
                f_44 = ATgetArgument(t, 1);
                j_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_44;
            t = k_13(e_44, f_44, j_44, t);
            LocalPopChoice(c_40);
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
                    ATerm f_40 = t;
                    int h_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(h_40);
                      }
                    else
                      {
                        t = f_40;
                        {
                          ATerm i_40 = t;
                          int j_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_40 = t;
                              int l_40 = stack_ptr;
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
                                  LocalPopChoice(l_40);
                                }
                              else
                                {
                                  t = k_40;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(j_40);
                            }
                          else
                            {
                              t = i_40;
                              {
                                ATerm n_40 = t;
                                int o_40 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(o_40);
                                  }
                                else
                                  {
                                    t = n_40;
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
  ATerm q_47 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_47 = ATgetArgument(t, 0);
      t = q_47;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_47 = ATgetArgument(t, 0);
          {
            ATerm q_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = q_47;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_47), (ATerm) ATempty);
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
            ATerm s_40 = ATgetArgument(t, 1);
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
        ATerm e_41 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_41);
          }
        else
          {
            t = e_41;
            {
              ATerm h_41 = t;
              int i_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL,u_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_48 = ATgetArgument(t, 0);
                      m_48 = ATgetArgument(t, 1);
                      n_48 = ATgetArgument(t, 2);
                      u_48 = ATgetArgument(t, 3);
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
  ATerm l_49 = NULL;
  ATerm s_41 = t;
  int u_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_49 = ATgetArgument(t, 0);
          {
            ATerm v_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_41);
      t = l_49;
    }
  else
    {
      t = s_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_49;
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
            ATerm e_42 = ATgetArgument(t, 1);
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
  ATerm v_49 = NULL;
  v_49 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_49);
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
  ATerm f_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_42);
    }
  else
    {
      t = f_42;
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
                  ATerm y_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_49 = ATgetArgument(t, 0);
                      a_50 = ATgetArgument(t, 1);
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
  int u_42 = stack_ptr;
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
      LocalPopChoice(u_42);
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
        ATerm f_51 = NULL,v_20 = NULL,x_20 = NULL,p_22 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            f_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_50);
        v_20 = t;
        t = f_51;
        t = ContextVar_0_0(t);
        x_20 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, x_20);
        p_22 = t;
        t = SSLsetAnnotations(p_22, v_20);
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
static ATerm m_13 (ATerm p_152 (ATerm), ATerm q_85, ATerm n_85, ATerm o_85, ATerm x_85, ATerm b_86, ATerm c_86, ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,r_46 = NULL,s_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,d_47 = NULL,e_47 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_86, term_i_32);
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
  t = g_15(e_47, q_85, t);
  g_46 = t;
  t = term_g_43;
  d_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_43, q_85);
  t = g_15(d_47, q_85, t);
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
  r_46 = t;
  t = s_46;
  t = free_vars_3_0(c_4, d_4, tboundin_3_0, t);
  t = map_1_0(h_4, t);
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_86, c_86);
  t = free_vars_3_0(i_4, j_4, tboundin_3_0, t);
  t = filter_1_0(v_4, t);
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_46, y_46);
  t = diff_0_0(t);
  z_46 = t;
  t = new_0_0(t);
  a_47 = t;
  t = q_85;
  t = p_152(t);
  b_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, b_47, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_33, (ATerm) ATinsert(CheckATermList(z_46), (ATerm) ATmakeAppl(sym_Str_1, a_47)))), s_46)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, h_46, n_85, o_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_33, (ATerm) ATinsert(CheckATermList(z_46), (ATerm) ATmakeAppl(sym_Str_1, a_47)))), x_85)), b_86, (ATerm) ATmakeAppl(sym_Seq_2, term_p_43, c_86)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_46, n_85, o_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_46), x_85), (ATerm)ATmakeAppl(sym_Var_1, i_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_85)))), r_46), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_46), j_46, k_46), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_43), (ATerm) ATmakeAppl(sym_Var_1, l_46)))))), (ATerm) ATmakeAppl(sym_Var_1, i_46)))))), (ATerm) ATmakeAppl(sym_RDefT_4, q_85, n_85, o_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_46), x_85), b_86, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_85)))), r_46), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_33, (ATerm) ATinsert(CheckATermList(z_46), (ATerm) ATmakeAppl(sym_Str_1, a_47)))), term_j_43))), c_86)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm r_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,f_22 = NULL;
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
          f_22 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_21;
      t = m_13(y_4, v_21, w_21, x_21, z_21, a_22, f_22, t);
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
        ATerm b_44 = ATgetArgument(t, 1);
        if(match_cons(b_44, sym__2))
          {
            f_23 = ATgetArgument(b_44, 0);
            g_23 = ATgetArgument(b_44, 1);
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
  ATerm c_44 = t;
  int g_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_23 = NULL,x_23 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,b_25 = NULL,f_25 = NULL;
      w_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          x_23 = ATgetArgument(t, 0);
          c_24 = ATgetArgument(t, 1);
          d_24 = ATgetArgument(t, 2);
          e_24 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = e_24;
      if(match_cons(t, sym_Rule_3))
        {
          f_24 = ATgetArgument(t, 0);
          b_25 = ATgetArgument(t, 1);
          f_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_23;
      t = m_13(h_5, x_23, c_24, d_24, f_24, b_25, f_25, t);
      LocalPopChoice(g_44);
    }
  else
    {
      t = c_44;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(i_5, t);
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm o_25 = NULL;
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, o_25))));
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm p_25 = NULL;
  p_25 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, p_25))));
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
  ATerm q_25 = NULL,r_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_25 = ATgetFirst((ATermList) t);
      r_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_25, r_25);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_44 = ATgetArgument(t, 0);
      if(match_cons(n_44, sym__2))
        {
          s_25 = ATgetArgument(n_44, 0);
          t_25 = ATgetArgument(n_44, 1);
        }
      else
        _fail(t);
      {
        ATerm o_44 = ATgetArgument(t, 1);
        if(match_cons(o_44, sym__2))
          {
            u_25 = ATgetArgument(o_44, 0);
            v_25 = ATgetArgument(o_44, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_25), s_25), (ATerm) ATinsert(CheckATermList(v_25), t_25));
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
  ATerm m_56 = NULL,t_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_56 = ATgetFirst((ATermList) t);
      t_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_56, t_56);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm b_57 = NULL,c_57 = NULL,e_57 = NULL,f_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_44 = ATgetArgument(t, 0);
      if(match_cons(u_44, sym__2))
        {
          b_57 = ATgetArgument(u_44, 0);
          c_57 = ATgetArgument(u_44, 1);
        }
      else
        _fail(t);
      {
        ATerm w_44 = ATgetArgument(t, 1);
        if(match_cons(w_44, sym__2))
          {
            e_57 = ATgetArgument(w_44, 0);
            f_57 = ATgetArgument(w_44, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_57), b_57), (ATerm) ATinsert(CheckATermList(f_57), c_57));
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(b_6, t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm l_57 = NULL;
  l_57 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, l_57))));
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
  ATerm w_57 = NULL,z_57 = NULL,i_58 = NULL,t_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_44 = ATgetArgument(t, 0);
      if(match_cons(z_44, sym__2))
        {
          w_57 = ATgetArgument(z_44, 0);
          z_57 = ATgetArgument(z_44, 1);
        }
      else
        _fail(t);
      {
        ATerm a_45 = ATgetArgument(t, 1);
        if(match_cons(a_45, sym__2))
          {
            i_58 = ATgetArgument(a_45, 0);
            t_58 = ATgetArgument(a_45, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_58), w_57), (ATerm) ATinsert(CheckATermList(t_58), z_57));
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
        ATerm m_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,t_22 = NULL;
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
        m_21 = t;
        t = r_21;
        t = concat_0_0(t);
        s_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_21, s_21);
        t_22 = t;
        t = SSLsetAnnotations(t_22, m_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          j_56 = ATgetArgument(t, 0);
          {
            ATerm o_23 = NULL,q_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,u_22 = NULL;
            t = j_56;
            t = map_1_0(e_5, t);
            t = genzip_4_0(j_5, k_5, q_5, _id, t);
            v_23 = t;
            if(match_cons(t, sym__2))
              {
                q_23 = ATgetArgument(t, 0);
                t_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_23);
            o_23 = t;
            t = t_23;
            t = concat_0_0(t);
            u_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_23, u_23);
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
ATerm split_dynamic_rule_old_1_0 (ATerm r_152 (ATerm), ATerm t)
{
  static ATerm c_61 (ATerm t)
  {
    static ATerm g_6 (ATerm t)
    {
      ATerm d_45 = t;
      int e_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_152(t);
          LocalPopChoice(e_45);
        }
      else
        {
          t = d_45;
          {
            ATerm l_60 = NULL,q_60 = NULL,b_61 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                l_60 = ATgetArgument(t, 0);
                q_60 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, l_60, q_60);
            {
              static ATerm m_6 (ATerm t)
              {
                t = l_60;
                t = DeclareContextVars_0_0(t);
                t = q_60;
                t = c_61(t);
                if(((b_61 != NULL) && (b_61 != t)))
                  _fail(t);
                else
                  b_61 = t;
                return(t);
              }
              t = scope_2_0(i_6, m_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, l_60, not_null(b_61));
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
static ATerm o_13 (ATerm q_86, ATerm p_86, ATerm t)
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
  ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,a_63 = NULL,d_63 = NULL,j_63 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      u_62 = ATgetArgument(t, 0);
      j_63 = ATgetArgument(t, 1);
      t = u_62;
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
          a_63 = ATgetArgument(t, 1);
          d_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, w_62, a_63, d_63, (ATerm) ATmakeAppl(sym_Rule_3, j_63, term_i_32, term_u_29));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          u_62 = ATgetArgument(t, 0);
          j_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_62;
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
          a_63 = ATgetArgument(t, 1);
          d_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, w_62, a_63, d_63, j_63);
    }
  return(t);
}
static ATerm x_65 (ATerm s_64, ATerm t)
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
  ATerm g_65 = NULL,m_65 = NULL;
  m_65 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      g_65 = ATgetArgument(t, 0);
      {
        ATerm z_45 = t;
        int e_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_26 = NULL;
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
            b_26 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, b_26);
            LocalPopChoice(e_46);
          }
        else
          {
            t = z_45;
            t = x_65(m_65, t);
          }
      }
    }
  else
    {
      t = x_65(m_65, t);
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm m_46 = t;
  int n_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_66 = NULL;
      d_66 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm o_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_66;
      LocalPopChoice(n_46);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = m_46;
      {
        ATerm p_46 = t;
        int t_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_66 = NULL;
            e_66 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm u_46 = ATgetArgument(t, 0);
                ATerm v_46 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_66;
            LocalPopChoice(t_46);
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
            t = p_46;
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
  ATerm b_67 = NULL,g_67 = NULL,h_67 = NULL,m_67 = NULL,z_22 = NULL;
  m_67 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      g_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_67);
  b_67 = t;
  t = g_67;
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
  ATerm w_46 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(c_47);
    }
  else
    {
      t = w_46;
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
  t = o_13(p_67, q_67, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm m_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,z_66 = NULL,p_23 = NULL,m_23 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  z_66 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_66);
  m_66 = t;
  t = r_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_66 = ATgetFirst((ATermList) t);
      u_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_66);
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
      ATerm v_67 = NULL,b_68 = NULL,c_68 = NULL,h_68 = NULL,z_23 = NULL;
      h_68 = t;
      if(match_cons(t, sym__2))
        {
          b_68 = ATgetArgument(t, 0);
          c_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_68);
      v_67 = t;
      t = b_68;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = b_68;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm l_47 = ATgetFirst((ATermList) t);
              ATerm n_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_68;
        }
      t = (ATerm) ATmakeAppl(sym__2, b_68, c_68);
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
  ATerm o_47 = t;
  int p_47 = stack_ptr;
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
      LocalPopChoice(p_47);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = o_47;
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
        ATerm n_69 = NULL,l_26 = NULL;
        t = term_t_47;
        l_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_47, g_69);
        t = v_14(l_26, g_69, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_47 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_47) != ATmakeSymbol("i_0", 0, ATtrue)))
              _fail(t);
            n_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_69;
        LocalPopChoice(v_47);
      }
    else
      {
        t = u_47;
        {
          ATerm o_69 = NULL;
          t = term_b_48;
          o_69 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_69, term_b_48);
          t = w_14(g_7, g_69, o_69, t);
          t = (ATerm) ATmakeAppl(sym__2, g_69, term_y_47);
        }
      }
  }
  j_69 = t;
  t = term_o_45;
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_69, term_o_45);
  t = j_15(j_69, k_69, t);
  h_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_47, h_69);
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_69, (ATerm) ATmakeAppl(sym_Defined_2, term_x_47, h_69));
  t = w_14(h_7, g_69, i_69, t);
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
  ATerm p_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
  r_69 = t;
  t = term_d_48;
  t = next_counter_0_0(t);
  p_69 = t;
  t = SSL_int_to_string(p_69);
  t_69 = t;
  t = term_e_48;
  v_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_48, t_69);
  t = g_15(v_69, t_69, t);
  s_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_48, s_69);
  u_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_69, (ATerm) ATmakeAppl(sym_Defined_2, term_f_48, s_69));
  t = w_14(k_7, r_69, u_69, t);
  t = s_69;
  return(t);
}
ATerm RenameVarTerm_2_0 (ATerm v_152 (ATerm), ATerm w_152 (ATerm), ATerm t)
{
  ATerm d_81 = NULL,g_81 = NULL,c_82 = NULL,e_82 = NULL,f_82 = NULL;
  c_82 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_82 = ATgetArgument(t, 0);
      {
        ATerm g_48 = t;
        int h_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_27 = NULL,f_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,g_24 = NULL,b_24 = NULL;
            t = SSLgetAnnotations(c_82);
            d_27 = t;
            t = e_82;
            if(match_cons(t, sym_ListVar_1))
              {
                h_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(e_82);
            f_27 = t;
            t = h_27;
            t = v_152(t);
            k_27 = t;
            t = term_i_48;
            l_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_27, term_i_48);
            t = g_15(k_27, l_27, t);
            i_27 = t;
            t = (ATerm) ATmakeAppl(sym_ListVar_1, i_27);
            b_24 = t;
            t = SSLsetAnnotations(b_24, f_27);
            j_27 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, j_27);
            g_24 = t;
            t = SSLsetAnnotations(g_24, d_27);
            LocalPopChoice(h_48);
          }
        else
          {
            t = g_48;
            {
              ATerm b_28 = NULL,d_28 = NULL,h_24 = NULL;
              t = SSLgetAnnotations(c_82);
              b_28 = t;
              t = e_82;
              t = v_152(t);
              d_28 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, d_28);
              h_24 = t;
              t = SSLsetAnnotations(h_24, b_28);
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_SVar_1))
        {
          e_82 = ATgetArgument(t, 0);
          {
            ATerm m_28 = NULL,v_28 = NULL,i_24 = NULL;
            t = SSLgetAnnotations(c_82);
            m_28 = t;
            t = e_82;
            t = v_152(t);
            v_28 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, v_28);
            i_24 = t;
            t = SSLsetAnnotations(i_24, m_28);
          }
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              e_82 = ATgetArgument(t, 0);
              f_82 = ATgetArgument(t, 1);
              {
                ATerm f_29 = NULL,s_29 = NULL,j_24 = NULL;
                t = SSLgetAnnotations(c_82);
                f_29 = t;
                t = e_82;
                t = v_152(t);
                s_29 = t;
                t = (ATerm) ATmakeAppl(sym_VarDec_2, s_29, f_82);
                j_24 = t;
                t = SSLsetAnnotations(j_24, f_29);
              }
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  e_82 = ATgetArgument(t, 0);
                  {
                    ATerm c_30 = NULL,i_30 = NULL,k_24 = NULL;
                    t = SSLgetAnnotations(c_82);
                    c_30 = t;
                    t = e_82;
                    t = v_152(t);
                    i_30 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_30);
                    k_24 = t;
                    t = SSLsetAnnotations(k_24, c_30);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      e_82 = ATgetArgument(t, 0);
                      f_82 = ATgetArgument(t, 1);
                      {
                        ATerm v_30 = NULL,c_31 = NULL,h_31 = NULL,l_24 = NULL;
                        t = SSLgetAnnotations(c_82);
                        v_30 = t;
                        t = e_82;
                        t = v_152(t);
                        c_31 = t;
                        t = f_82;
                        t = w_152(t);
                        h_31 = t;
                        t = (ATerm) ATmakeAppl(sym_Rec_2, c_31, h_31);
                        l_24 = t;
                        t = SSLsetAnnotations(l_24, v_30);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefNoArgs_2))
                        {
                          e_82 = ATgetArgument(t, 0);
                          f_82 = ATgetArgument(t, 1);
                          {
                            ATerm s_31 = NULL,c_32 = NULL,d_32 = NULL,m_24 = NULL;
                            t = SSLgetAnnotations(c_82);
                            s_31 = t;
                            t = e_82;
                            t = v_152(t);
                            c_32 = t;
                            t = f_82;
                            t = w_152(t);
                            d_32 = t;
                            t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, c_32, d_32);
                            m_24 = t;
                            t = SSLsetAnnotations(m_24, s_31);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              e_82 = ATgetArgument(t, 0);
                              f_82 = ATgetArgument(t, 1);
                              d_81 = ATgetArgument(t, 2);
                              {
                                ATerm a_33 = NULL,j_33 = NULL,l_33 = NULL,m_33 = NULL,n_24 = NULL;
                                t = SSLgetAnnotations(c_82);
                                a_33 = t;
                                t = e_82;
                                t = v_152(t);
                                j_33 = t;
                                t = f_82;
                                t = w_152(t);
                                l_33 = t;
                                t = d_81;
                                t = w_152(t);
                                m_33 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, j_33, l_33, m_33);
                                n_24 = t;
                                t = SSLsetAnnotations(n_24, a_33);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  e_82 = ATgetArgument(t, 0);
                                  f_82 = ATgetArgument(t, 1);
                                  d_81 = ATgetArgument(t, 2);
                                  g_81 = ATgetArgument(t, 3);
                                  {
                                    ATerm p_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,a_35 = NULL,o_24 = NULL;
                                    t = SSLgetAnnotations(c_82);
                                    p_34 = t;
                                    t = e_82;
                                    t = v_152(t);
                                    w_34 = t;
                                    t = f_82;
                                    t = w_152(t);
                                    x_34 = t;
                                    t = d_81;
                                    t = w_152(t);
                                    y_34 = t;
                                    t = g_81;
                                    t = w_152(t);
                                    a_35 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, w_34, x_34, y_34, a_35);
                                    o_24 = t;
                                    t = SSLsetAnnotations(o_24, p_34);
                                  }
                                }
                              else
                                {
                                  ATerm s_35 = NULL,w_35 = NULL,c_36 = NULL,p_24 = NULL;
                                  if(match_cons(t, sym_Scope_2))
                                    {
                                      e_82 = ATgetArgument(t, 0);
                                      f_82 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(c_82);
                                  s_35 = t;
                                  t = e_82;
                                  t = map_1_0(v_152, t);
                                  w_35 = t;
                                  t = f_82;
                                  t = w_152(t);
                                  c_36 = t;
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_35, c_36);
                                  p_24 = t;
                                  t = SSLsetAnnotations(p_24, s_35);
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
  int o_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_88 = NULL,w_36 = NULL,d_37 = NULL;
      w_88 = t;
      t = term_c_48;
      d_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_48, w_88);
      t = v_14(d_37, w_88, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm p_48 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) p_48) != ATmakeSymbol("q_0", 0, ATtrue)))
            _fail(t);
          w_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_36;
      LocalPopChoice(o_48);
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
    ATerm p_87 = NULL,w_87 = NULL,y_87 = NULL;
    static ATerm z_88 (ATerm t)
    {
      ATerm q_48 = t;
      int r_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RenameVarTerm_2_0(s_7, z_88, t);
          LocalPopChoice(r_48);
        }
      else
        {
          t = q_48;
          t = SRTS_all(z_88, t);
        }
      return(t);
    }
    p_87 = t;
    t = term_d_48;
    w_87 = t;
    t = term_b_48;
    y_87 = t;
    t = term_s_48;
    t = w_14(r_7, w_87, y_87, t);
    t = p_87;
    t = z_88(t);
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
  ATerm w_48 = t;
  int x_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_48);
    }
  else
    {
      t = w_48;
      {
        ATerm y_48 = t;
        int b_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_49);
          }
        else
          {
            t = y_48;
            {
              ATerm c_49 = t;
              int e_49 = stack_ptr;
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
                  LocalPopChoice(e_49);
                }
              else
                {
                  t = c_49;
                  {
                    ATerm f_49 = t;
                    int i_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(i_49);
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
  int q_49 = stack_ptr;
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
      LocalPopChoice(q_49);
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
        ATerm o_97 = NULL,l_37 = NULL,n_37 = NULL,c_26 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            o_97 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_97);
        l_37 = t;
        t = o_97;
        t = ContextVar_0_0(t);
        n_37 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, n_37);
        c_26 = t;
        t = SSLsetAnnotations(c_26, l_37);
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
  t = j_15(p_97, q_97, t);
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
  t = j_15(r_97, s_97, t);
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
  ATerm m_98 = NULL;
  ATerm c_51 = t;
  int d_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_98 = ATgetArgument(t, 0);
          {
            ATerm e_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_51);
      t = m_98;
    }
  else
    {
      t = c_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_98;
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
static ATerm j_9 (ATerm t)
{
  ATerm d_99 = NULL,e_99 = NULL;
  if(match_cons(t, sym__2))
    {
      d_99 = ATgetArgument(t, 0);
      e_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_15(d_99, e_99, t);
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
  t = j_15(f_99, g_99, t);
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
static ATerm y_9 (ATerm t)
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
static ATerm b_10 (ATerm t)
{
  ATerm f_100 = NULL;
  f_100 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_100);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_w_51;
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm x_152 (ATerm), ATerm t)
{
  ATerm b_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL,c_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,p_95 = NULL,r_95 = NULL,s_95 = NULL;
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
  i_94 = t;
  t = (ATerm) ATmakeAppl(sym__3, g_95, r_94, s_94);
  t = free_vars_3_0(a_8, b_8, tboundin_3_0, t);
  t = filter_1_0(h_8, t);
  b_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_94, i_94);
  t = diff_0_0(t);
  q_94 = t;
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
        t = v_14(r_37, u_94, t);
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
          t = g_15(y_97, h_95, t);
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
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, j_95, w_94, k_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(q_94), (ATerm) ATmakeAppl(sym_Str_1, v_94))), r_94, (ATerm) ATmakeAppl(sym_BA_2, s_94, (ATerm) ATmakeAppl(sym_Var_1, f_95)))));
          t_94 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_52, v_94);
          x_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_94, (ATerm) ATmakeAppl(sym_Defined_2, term_d_52, v_94));
          t = w_14(g_9, u_94, x_97, t);
          t = w_94;
          t = foldr_3_0(h_9, j_9, p_9, t);
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
                ATerm v_37 = NULL,w_37 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_95, (ATerm) ATmakeAppl(sym__2, u_97, v_97)), n_95);
                v_37 = t;
                t = term_w_51;
                w_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_51, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_95, (ATerm) ATmakeAppl(sym__2, u_97, v_97)), n_95));
                t = v_14(w_37, v_37, t);
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
                  t = g_15(l_99, h_95, t);
                  c_95 = t;
                  t = term_h_52;
                  k_99 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_h_52, h_95);
                  t = g_15(k_99, h_95, t);
                  e_95 = t;
                  t = w_94;
                  t = map_1_0(x_9, t);
                  k_95 = t;
                  t = x_94;
                  t = map_1_0(y_9, t);
                  y_94 = t;
                  t = z_94;
                  t = map_1_0(b_10, t);
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
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, e_95, w_94, x_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_95), g_95), term_t_52, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_v_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_95), (ATerm) ATmakeAppl(sym_Str_1, h_95))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_52), term_x_52), term_n_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_53, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_95), k_95, l_95), term_d_53))), term_g_53), term_n_52), term_i_53), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, term_k_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_i_53), term_x_52)), term_z_52)))))), (ATerm) ATmakeAppl(sym_RDefT_4, c_95, w_94, x_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_95), g_95), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_95), k_95, l_95))), term_n_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_95), (ATerm) ATmakeAppl(sym_Str_1, h_95))), term_q_52), term_n_52)))), (ATerm) ATmakeAppl(sym_RDefT_4, h_95, w_94, x_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_95), g_95), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_95), k_95, l_95))), term_n_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_95), (ATerm) ATmakeAppl(sym_Str_1, h_95))), term_n_52))));
                  m_95 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_95, (ATerm) ATmakeAppl(sym__2, u_97, v_97)), n_95);
                  i_99 = t;
                  t = term_m_53;
                  j_99 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_95, (ATerm) ATmakeAppl(sym__2, u_97, v_97)), n_95), term_m_53);
                  t = w_14(c_10, i_99, j_99, t);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, e_95, w_94, x_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_95), g_95), term_t_52, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_v_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_95), (ATerm) ATmakeAppl(sym_Str_1, h_95))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_52), term_x_52), term_n_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_53, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_95), k_95, l_95), term_d_53))), term_g_53), term_n_52), term_i_53), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, term_k_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_i_53), term_x_52)), term_z_52)))))), (ATerm) ATmakeAppl(sym_RDefT_4, c_95, w_94, x_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_95), g_95), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_95), k_95, l_95))), term_n_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_95), (ATerm) ATmakeAppl(sym_Str_1, h_95))), term_q_52), term_n_52)))), (ATerm) ATmakeAppl(sym_RDefT_4, h_95, w_94, x_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_95), g_95), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_95), k_95, l_95))), term_n_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_95), (ATerm) ATmakeAppl(sym_Str_1, h_95))), term_n_52))));
                }
              }
          }
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, n_95, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(q_94), (ATerm) ATmakeAppl(sym_Str_1, v_94))));
  t = x_152(t);
  o_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_94, m_95);
  t = conc_0_0(t);
  p_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, o_95), p_95);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm d_101 = NULL,g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL,n_101 = NULL,o_101 = NULL,p_101 = NULL;
  n_101 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      o_101 = ATgetArgument(t, 0);
      p_101 = ATgetArgument(t, 1);
      t = o_101;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          g_101 = ATgetArgument(t, 0);
          d_101 = ATgetArgument(t, 1);
          {
            static ATerm d_10 (ATerm t)
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
            t = g_101;
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
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_101, i_101, j_101)), (ATerm) ATmakeAppl(sym_Rule_3, p_101, term_s_53, term_u_29));
            t = SplitDynamicRule_1_0(d_10, t);
          }
        }
      else
        {
          static ATerm e_10 (ATerm t)
          {
            ATerm h_102 = NULL,i_102 = NULL;
            h_102 = t;
            t = SSL_explode_term(h_102);
            if(match_cons(t, sym__2))
              {
                ATerm v_53 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) v_53) != ATmakeSymbol("", 0, ATtrue)))
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
              g_101 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_101;
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
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_101, i_101, j_101)), (ATerm) ATmakeAppl(sym_Rule_3, p_101, term_s_53, term_u_29));
          t = SplitDynamicRule_1_0(e_10, t);
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
              g_101 = ATgetArgument(t, 0);
              d_101 = ATgetArgument(t, 1);
              {
                static ATerm g_10 (ATerm t)
                {
                  ATerm w_102 = NULL,x_102 = NULL,z_37 = NULL;
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
                                z_37 = ATgetFirst((ATermList) e_54);
                                {
                                  ATerm h_54 = (ATerm) ATgetNext((ATermList) e_54);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_37), x_102), d_101), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
                  return(t);
                }
                t = g_101;
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
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_101, i_101, j_101)), (ATerm) ATmakeAppl(sym_Rule_3, p_101, p_101, term_u_29));
                t = SplitDynamicRule_1_0(g_10, t);
              }
            }
          else
            {
              static ATerm h_10 (ATerm t)
              {
                ATerm f_103 = NULL,g_103 = NULL,c_38 = NULL;
                f_103 = t;
                t = SSL_explode_term(f_103);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_54 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) k_54) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm l_54 = ATgetArgument(t, 1);
                      if(((ATgetType(l_54) == AT_LIST) && !(ATisEmpty(l_54))))
                        {
                          g_103 = ATgetFirst((ATermList) l_54);
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
                t = SSL_explode_term(f_103);
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
                              c_38 = ATgetFirst((ATermList) q_54);
                              {
                                ATerm s_54 = (ATerm) ATgetNext((ATermList) q_54);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_38), g_103), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  g_101 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = g_101;
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
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_101, i_101, j_101)), (ATerm) ATmakeAppl(sym_Rule_3, p_101, p_101, term_u_29));
              t = SplitDynamicRule_1_0(h_10, t);
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
                  g_101 = ATgetArgument(t, 0);
                  d_101 = ATgetArgument(t, 1);
                  {
                    static ATerm k_10 (ATerm t)
                    {
                      ATerm n_103 = NULL,o_103 = NULL,f_38 = NULL;
                      n_103 = t;
                      t = SSL_explode_term(n_103);
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
                      t = SSL_explode_term(n_103);
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
                                    f_38 = ATgetFirst((ATermList) z_54);
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
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_38), o_103), d_101), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
                      return(t);
                    }
                    t = g_101;
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
                    t = SplitDynamicRule_1_0(k_10, t);
                  }
                }
              else
                {
                  static ATerm l_10 (ATerm t)
                  {
                    ATerm d_104 = NULL,e_104 = NULL,h_38 = NULL;
                    d_104 = t;
                    t = SSL_explode_term(d_104);
                    if(match_cons(t, sym__2))
                      {
                        ATerm d_55 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) d_55) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm e_55 = ATgetArgument(t, 1);
                          if(((ATgetType(e_55) == AT_LIST) && !(ATisEmpty(e_55))))
                            {
                              e_104 = ATgetFirst((ATermList) e_55);
                              {
                                ATerm g_55 = (ATerm) ATgetNext((ATermList) e_55);
                              }
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(d_104);
                    if(match_cons(t, sym__2))
                      {
                        ATerm i_55 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) i_55) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm j_55 = ATgetArgument(t, 1);
                          if(((ATgetType(j_55) == AT_LIST) && !(ATisEmpty(j_55))))
                            {
                              ATerm k_55 = ATgetFirst((ATermList) j_55);
                              ATerm l_55 = (ATerm) ATgetNext((ATermList) j_55);
                              if(((ATgetType(l_55) == AT_LIST) && !(ATisEmpty(l_55))))
                                {
                                  h_38 = ATgetFirst((ATermList) l_55);
                                  {
                                    ATerm n_55 = (ATerm) ATgetNext((ATermList) l_55);
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
                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_38), e_104), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
                    return(t);
                  }
                  if(match_cons(t, sym_DynRuleId_1))
                    {
                      g_101 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = g_101;
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
              if(match_cons(t, sym_SetDynRule_2))
                {
                  o_101 = ATgetArgument(t, 0);
                  p_101 = ATgetArgument(t, 1);
                  t = o_101;
                  if(match_cons(t, sym_LabeledDynRuleId_2))
                    {
                      g_101 = ATgetArgument(t, 0);
                      d_101 = ATgetArgument(t, 1);
                      {
                        static ATerm m_10 (ATerm t)
                        {
                          ATerm n_104 = NULL,o_104 = NULL,k_38 = NULL;
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
                                ATerm t_55 = ATgetArgument(t, 1);
                                if(((ATgetType(t_55) == AT_LIST) && !(ATisEmpty(t_55))))
                                  {
                                    ATerm v_55 = ATgetFirst((ATermList) t_55);
                                    ATerm w_55 = (ATerm) ATgetNext((ATermList) t_55);
                                    if(((ATgetType(w_55) == AT_LIST) && !(ATisEmpty(w_55))))
                                      {
                                        k_38 = ATgetFirst((ATermList) w_55);
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
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_38), o_104), d_101), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
                          return(t);
                        }
                        t = g_101;
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
                      static ATerm n_10 (ATerm t)
                      {
                        ATerm z_104 = NULL,a_105 = NULL,m_38 = NULL;
                        z_104 = t;
                        t = SSL_explode_term(z_104);
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
                        t = SSL_explode_term(z_104);
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
                                      m_38 = ATgetFirst((ATermList) e_56);
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
                        t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_38), a_105), (ATerm) ATmakeAppl(sym_Str_1, not_null(h_101))));
                        return(t);
                      }
                      if(match_cons(t, sym_DynRuleId_1))
                        {
                          g_101 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = g_101;
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
                      t = n_101;
                      t = SplitDynamicRule_1_0(n_10, t);
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
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, term_n_56, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, p_101), (ATerm) ATmakeAppl(sym_Str_1, o_101))), (ATerm) ATempty);
                }
            }
        }
    }
  return(t);
}
ATerm DesugarDynRuleDef_0_0 (ATerm t)
{
  ATerm t_105 = NULL,u_105 = NULL,v_105 = NULL,w_105 = NULL,x_105 = NULL,y_105 = NULL,b_106 = NULL;
  if(match_cons(t, sym_SetDynRuleMatch_2))
    {
      t_105 = ATgetArgument(t, 0);
      b_106 = ATgetArgument(t, 1);
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
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, v_105, y_105)), (ATerm) ATmakeAppl(sym_SetDynRuleMatch_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, v_105, w_105, x_105)), b_106));
    }
  else
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          t_105 = ATgetArgument(t, 0);
          b_106 = ATgetArgument(t, 1);
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
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, v_105, y_105)), (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, v_105, w_105, x_105)), b_106));
        }
      else
        {
          if(match_cons(t, sym_AddDynRule_2))
            {
              t_105 = ATgetArgument(t, 0);
              b_106 = ATgetArgument(t, 1);
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
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, v_105, y_105)), (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, v_105, w_105, x_105)), b_106));
            }
          else
            {
              if(match_cons(t, sym_SetDynRule_2))
                {
                  t_105 = ATgetArgument(t, 0);
                  b_106 = ATgetArgument(t, 1);
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
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, v_105, y_105)), (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, v_105, w_105, x_105)), b_106));
            }
        }
    }
  return(t);
}
ATerm split_dynamic_rule_0_0 (ATerm t)
{
  ATerm o_56 = t;
  int u_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarDynRuleDef_0_0(t);
      LocalPopChoice(u_56);
    }
  else
    {
      t = o_56;
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
ATerm split_dynamic_rule_1_0 (ATerm y_152 (ATerm), ATerm t)
{
  static ATerm f_107 (ATerm t)
  {
    static ATerm o_10 (ATerm t)
    {
      ATerm v_56 = t;
      int w_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_152(t);
          LocalPopChoice(w_56);
        }
      else
        {
          t = v_56;
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
    t = oncetd_1_0(o_10, t);
    return(t);
  }
  t = f_107(t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm i_107 = NULL,k_107 = NULL,l_107 = NULL,m_107 = NULL;
  m_107 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      l_107 = ATgetArgument(t, 0);
      {
        ATerm x_56 = t;
        int y_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_107;
            i_107 = t;
            t = m_107;
            LocalPopChoice(y_56);
          }
        else
          {
            t = x_56;
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
  t = term_d_57;
  k_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_107, term_d_57);
  t = w_14(x_11, i_107, k_107, t);
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
  t = term_k_57;
  p_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_107, term_k_57);
  t = w_14(e_12, n_107, p_107, t);
  t = r_107;
  return(t);
}
static ATerm e_12 (ATerm t)
{
  t = term_b_45;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm p_57 = t;
  int t_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(w_11, t);
      LocalPopChoice(t_57);
    }
  else
    {
      t = p_57;
      t = map_1_0(y_11, t);
    }
  return(t);
}
static ATerm g_12 (ATerm t)
{
  ATerm v_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_38);
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm u_57 = t;
  int v_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_57);
    }
  else
    {
      t = u_57;
      {
        ATerm x_57 = t;
        int y_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_57);
          }
        else
          {
            t = x_57;
            {
              ATerm a_58 = t;
              int b_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_38 = NULL,y_38 = NULL,a_39 = NULL,b_39 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_38 = ATgetArgument(t, 0);
                      y_38 = ATgetArgument(t, 1);
                      a_39 = ATgetArgument(t, 2);
                      b_39 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_39;
                  t = map_1_0(j_12, t);
                  LocalPopChoice(b_58);
                }
              else
                {
                  t = a_58;
                  {
                    ATerm c_58 = t;
                    int d_58 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_58);
                      }
                    else
                      {
                        t = c_58;
                        t = dynrule_targs_1_0(n_12, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_12 (ATerm t)
{
  ATerm j_39 = NULL;
  ATerm e_58 = t;
  int f_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_39 = ATgetArgument(t, 0);
          {
            ATerm g_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_58);
      t = j_39;
    }
  else
    {
      t = e_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_39;
    }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  t = map_1_0(o_12, t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm p_39 = NULL;
  ATerm k_58 = t;
  int l_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_39 = ATgetArgument(t, 0);
          {
            ATerm m_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_58);
      t = p_39;
    }
  else
    {
      t = k_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_39;
    }
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm g_40 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_40 = ATgetArgument(t, 0);
      t = g_40;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_40 = ATgetArgument(t, 0);
          {
            ATerm n_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = g_40;
    }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm m_40 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_40 = ATgetArgument(t, 0);
      t = m_40;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_40 = ATgetArgument(t, 0);
          {
            ATerm o_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = m_40;
    }
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm r_40 = NULL;
  if(match_cons(t, sym__2))
    {
      r_40 = ATgetArgument(t, 0);
      if((r_40 != ATgetArgument(t, 1)))
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
  ATerm p_58 = t;
  int s_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_58);
    }
  else
    {
      t = p_58;
      {
        ATerm w_58 = t;
        int x_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_58);
          }
        else
          {
            t = w_58;
            {
              ATerm y_58 = t;
              int z_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_41 = NULL,q_41 = NULL,r_41 = NULL,t_41 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_41 = ATgetArgument(t, 0);
                      q_41 = ATgetArgument(t, 1);
                      r_41 = ATgetArgument(t, 2);
                      t_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_41;
                  t = map_1_0(w_13, t);
                  LocalPopChoice(z_58);
                }
              else
                {
                  t = y_58;
                  {
                    ATerm d_59 = t;
                    int e_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_59);
                      }
                    else
                      {
                        t = d_59;
                        t = dynrule_targs_1_0(e_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm k_42 = NULL;
  ATerm g_59 = t;
  int i_59 = stack_ptr;
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
      LocalPopChoice(i_59);
      t = k_42;
    }
  else
    {
      t = g_59;
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
static ATerm e_14 (ATerm t)
{
  t = map_1_0(h_14, t);
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm t_42 = NULL;
  ATerm k_59 = t;
  int l_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_42 = ATgetArgument(t, 0);
          {
            ATerm m_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_59);
      t = t_42;
    }
  else
    {
      t = k_59;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_42;
    }
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm x_43 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_43 = ATgetArgument(t, 0);
      t = x_43;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_43 = ATgetArgument(t, 0);
          {
            ATerm n_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_43;
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm h_44 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_44 = ATgetArgument(t, 0);
      t = h_44;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_44 = ATgetArgument(t, 0);
          {
            ATerm o_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_44;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm p_44 = NULL;
  if(match_cons(t, sym__2))
    {
      p_44 = ATgetArgument(t, 0);
      if((p_44 != ATgetArgument(t, 1)))
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
    ATerm q_59 = t;
    int u_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_38 = NULL,r_38 = NULL;
        t = l_112;
        t = free_vars_3_0(g_12, h_12, tboundin_3_0, t);
        q_38 = t;
        t = l_112;
        {
          ATerm a_60 = t;
          int b_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_40 = NULL;
              ATerm c_60 = t;
              int d_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm e_60 = ATgetArgument(t, 0);
                      ATerm f_60 = ATgetArgument(t, 1);
                      b_40 = ATgetArgument(t, 2);
                      {
                        ATerm g_60 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_60);
                  t = b_40;
                  t = map_1_0(r_12, t);
                }
              else
                {
                  t = c_60;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm h_60 = ATgetArgument(t, 0);
                      ATerm j_60 = ATgetArgument(t, 1);
                      b_40 = ATgetArgument(t, 2);
                      {
                        ATerm k_60 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = b_40;
                  t = map_1_0(s_12, t);
                }
              LocalPopChoice(b_60);
            }
          else
            {
              t = a_60;
              t = (ATerm) ATempty;
            }
        }
        r_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_38, r_38);
        t = k_14(t_12, q_38, r_38, t);
        LocalPopChoice(u_59);
      }
    else
      {
        t = q_59;
        {
          ATerm c_41 = NULL,d_41 = NULL;
          t = l_112;
          t = free_vars_3_0(s_13, t_13, tboundin_3_0, t);
          c_41 = t;
          t = l_112;
          {
            ATerm m_60 = t;
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
                t = m_60;
                t = (ATerm) ATempty;
              }
          }
          d_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, c_41, d_41);
          t = k_14(n_14, c_41, d_41, t);
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
static ATerm s_14 (ATerm t)
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
static ATerm b_14 (ATerm n_90, ATerm m_90, ATerm t)
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
        t = genzip_4_0(s_14, t_14, u_14, _id, t);
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
ATerm repeat_2_0 (ATerm v_117 (ATerm), ATerm w_117 (ATerm), ATerm t)
{
  static ATerm g_113 (ATerm t)
  {
    ATerm h_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_117(t);
        t = g_113(t);
        LocalPopChoice(i_61);
      }
    else
      {
        t = h_61;
        t = w_117(t);
      }
    return(t);
  }
  t = g_113(t);
  return(t);
}
ATerm listtd_1_0 (ATerm r_126 (ATerm), ATerm t)
{
  static ATerm u_113 (ATerm t)
  {
    ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL;
    t = r_126(t);
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
static ATerm y_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm a_131 (ATerm), ATerm b_131 (ATerm), ATerm t)
{
  ATerm l_61 = t;
  int o_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_113 = NULL;
      t = a_131(t);
      w_113 = t;
      t = (ATerm) ATinsert(ATempty, w_113);
      LocalPopChoice(o_61);
    }
  else
    {
      t = l_61;
      {
        ATerm m_45 = NULL,n_45 = NULL;
        static ATerm u_15 (ATerm t)
        {
          t = collect_om_2_0(a_131, b_131, t);
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
        t = foldr_3_0(y_14, b_131, u_15, t);
      }
    }
  return(t);
}
ATerm partition_1_0 (ATerm t_133 (ATerm), ATerm t)
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
              ATerm y_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,q_46 = NULL,m_26 = NULL;
              t = SSLgetAnnotations(z_114);
              d_46 = t;
              t = a_115;
              t = t_133(t);
              y_45 = t;
              t = (ATerm) ATinsert(CheckATermList(b_115), y_45);
              m_26 = t;
              t = SSLsetAnnotations(m_26, d_46);
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
                            q_46 = ATgetFirst((ATermList) n_62);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_46), y_45), q_46);
              LocalPopChoice(r_61);
            }
          else
            {
              t = q_61;
              {
                ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,m_47 = NULL,a_48 = NULL,n_26 = NULL;
                t = SSLgetAnnotations(z_114);
                m_47 = t;
                t = (ATerm) ATinsert(CheckATermList(b_115), a_115);
                n_26 = t;
                t = SSLsetAnnotations(n_26, m_47);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm p_62 = ATgetFirst((ATermList) t);
                    j_47 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_47;
                t = c_115(t);
                i_47 = t;
                t = SSL_explode_term(i_47);
                if(match_cons(t, sym__2))
                  {
                    ATerm q_62 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_62) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm r_62 = ATgetArgument(t, 1);
                      if(((ATgetType(r_62) == AT_LIST) && !(ATisEmpty(r_62))))
                        {
                          k_47 = ATgetFirst((ATermList) r_62);
                          {
                            ATerm s_62 = (ATerm) ATgetNext((ATermList) r_62);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(i_47);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_62 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) t_62) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm x_62 = ATgetArgument(t, 1);
                      if(((ATgetType(x_62) == AT_LIST) && !(ATisEmpty(x_62))))
                        {
                          ATerm y_62 = ATgetFirst((ATermList) x_62);
                          ATerm z_62 = (ATerm) ATgetNext((ATermList) x_62);
                          if(((ATgetType(z_62) == AT_LIST) && !(ATisEmpty(z_62))))
                            {
                              a_48 = ATgetFirst((ATermList) z_62);
                              {
                                ATerm b_63 = (ATerm) ATgetNext((ATermList) z_62);
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
                t = (ATerm) ATmakeAppl(sym__2, k_47, (ATerm) ATinsert(CheckATermList(a_48), a_115));
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
  ATerm k_49 = NULL,p_49 = NULL;
  if(match_cons(t, sym__2))
    {
      k_49 = ATgetArgument(t, 0);
      p_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_14(c_16, k_49, p_49, t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm u_49 = NULL;
  if(match_cons(t, sym__2))
    {
      u_49 = ATgetArgument(t, 0);
      if((u_49 != ATgetArgument(t, 1)))
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
  t = k_14(h_16, s_51, t_51, t);
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
  ATerm y_117 = NULL,z_117 = NULL,e_118 = NULL,f_118 = NULL,g_118 = NULL,h_118 = NULL,i_118 = NULL;
  g_118 = t;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      h_118 = ATgetArgument(t, 0);
      i_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_117 = ATgetFirst((ATermList) t);
      f_118 = (ATerm) ATgetNext((ATermList) t);
      t = z_117;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          e_118 = ATgetArgument(t, 0);
          y_117 = ATgetArgument(t, 1);
          {
            ATerm t_48 = NULL,v_48 = NULL,z_48 = NULL,a_49 = NULL;
            t = f_118;
            {
              static ATerm x_15 (ATerm t)
              {
                ATerm d_49 = NULL,g_49 = NULL;
                d_49 = t;
                {
                  ATerm c_63 = t;
                  int f_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                        {
                          g_49 = ATgetArgument(t, 0);
                          {
                            ATerm g_63 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(f_63);
                      t = g_49;
                      if((e_118 != t))
                        {
                          _fail(t);
                        }
                      t = d_49;
                    }
                  else
                    {
                      t = c_63;
                      if(match_cons(t, sym_DynRuleScopeId_1))
                        {
                          g_49 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = g_49;
                      if((e_118 != t))
                        {
                          _fail(t);
                        }
                      t = d_49;
                    }
                }
                return(t);
              }
              t = partition_1_0(x_15, t);
            }
            if(match_cons(t, sym__2))
              {
                v_48 = ATgetArgument(t, 0);
                t_48 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_48;
            {
              static ATerm a_16 (ATerm t)
              {
                ATerm h_49 = NULL;
                if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                  {
                    if((e_118 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    h_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_49;
                return(t);
              }
              t = collect_om_2_0(a_16, b_16, t);
            }
            a_49 = t;
            t = (ATerm) ATinsert(CheckATermList(a_49), y_117);
            {
              static ATerm d_16 (ATerm t)
              {
                ATerm z_49 = NULL;
                z_49 = t;
                t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, e_118, z_49)));
                return(t);
              }
              t = map_1_0(d_16, t);
            }
            z_48 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_63, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_48), (ATerm) ATmakeAppl(sym_DynRuleScope_2, t_48, i_118))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, e_118)));
          }
        }
      else
        {
          ATerm k_51 = NULL,l_51 = NULL,n_51 = NULL;
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              e_118 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_118;
          {
            static ATerm e_16 (ATerm t)
            {
              ATerm p_51 = NULL,q_51 = NULL;
              p_51 = t;
              {
                ATerm k_63 = t;
                int p_63 = stack_ptr;
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
                    LocalPopChoice(p_63);
                    t = q_51;
                    if((e_118 != t))
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
                    if((e_118 != t))
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
                  if((e_118 != ATgetArgument(t, 0)))
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
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, e_118, v_51)));
              return(t);
            }
            t = map_1_0(i_16, t);
          }
          n_51 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_i_63, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_51), (ATerm) ATmakeAppl(sym_DynRuleScope_2, k_51, i_118))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, e_118)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_118;
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_119 (ATerm), ATerm t)
{
  static ATerm s_118 (ATerm t)
  {
    ATerm r_63 = t;
    int s_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_119(t);
        LocalPopChoice(s_63);
      }
    else
      {
        t = r_63;
        t = SRTS_one(s_118, t);
      }
    return(t);
  }
  t = s_118(t);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm f_119 = NULL;
  f_119 = t;
  {
    ATerm t_63 = t;
    int u_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_52 = NULL;
        t = term_b_45;
        r_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_45, f_119);
        t = v_14(r_52, f_119, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm y_63 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_63) != ATmakeSymbol("z_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = f_119;
        LocalPopChoice(u_63);
      }
    else
      {
        t = t_63;
        {
          ATerm a_53 = NULL;
          t = term_b_45;
          a_53 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_45, f_119);
          t = v_14(a_53, f_119, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm z_63 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_63) != ATmakeSymbol("n_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = f_119;
        }
      }
  }
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm p_122 = NULL,q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL,u_122 = NULL,v_122 = NULL,w_122 = NULL,x_122 = NULL,z_122 = NULL,c_123 = NULL;
  c_123 = t;
  if(match_cons(t, sym_Op_2))
    {
      x_122 = ATgetArgument(t, 0);
      z_122 = ATgetArgument(t, 1);
      t = z_122;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_122 = ATgetFirst((ATermList) t);
          s_122 = (ATerm) ATgetNext((ATermList) t);
          t = s_122;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_122 = ATgetFirst((ATermList) t);
              w_122 = (ATerm) ATgetNext((ATermList) t);
              t = w_122;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = t_122;
                  if(match_cons(t, sym_Op_2))
                    {
                      u_122 = ATgetArgument(t, 0);
                      v_122 = ATgetArgument(t, 1);
                      t = v_122;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = u_122;
                          if(match_string(t, "Nil"))
                            {
                              t = p_122;
                              if(match_cons(t, sym_Var_1))
                                {
                                  q_122 = ATgetArgument(t, 0);
                                  t = q_122;
                                  if(match_cons(t, sym_ListVar_1))
                                    {
                                      r_122 = ATgetArgument(t, 0);
                                      t = x_122;
                                      if(match_string(t, "Cons"))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, r_122));
                                        }
                                      else
                                        {
                                          t = c_123;
                                        }
                                    }
                                  else
                                    {
                                      t = c_123;
                                    }
                                }
                              else
                                {
                                  t = c_123;
                                }
                            }
                          else
                            {
                              t = c_123;
                            }
                        }
                      else
                        {
                          t = c_123;
                        }
                    }
                  else
                    {
                      t = c_123;
                    }
                }
              else
                {
                  t = c_123;
                }
            }
          else
            {
              t = c_123;
            }
        }
      else
        {
          t = c_123;
        }
    }
  else
    {
      if(match_cons(t, sym_As_2))
        {
          x_122 = ATgetArgument(t, 0);
          z_122 = ATgetArgument(t, 1);
          t = x_122;
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
                t = z_122;
              }
            else
              {
                t = a_64;
                t = c_123;
              }
          }
        }
      else
        {
          t = c_123;
        }
    }
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm n_125 = NULL,p_125 = NULL,q_125 = NULL;
  n_125 = t;
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
        t = n_125;
        {
          ATerm k_64 = t;
          if((PushChoice() == 0))
            {
              ATerm t_53 = NULL,u_53 = NULL,f_54 = NULL,g_54 = NULL,r_26 = NULL;
              g_54 = t;
              if(match_cons(t, sym_Var_1))
                {
                  u_53 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_54);
              t_53 = t;
              t = u_53;
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
                      ATerm r_54 = NULL,f_55 = NULL,h_55 = NULL,q_26 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          r_54 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(u_53);
                      f_55 = t;
                      t = r_54;
                      t = ContextVar_0_0(t);
                      h_55 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, h_55);
                      q_26 = t;
                      t = SSLsetAnnotations(q_26, f_55);
                    }
                  }
              }
              f_54 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, f_54);
              r_26 = t;
              t = SSLsetAnnotations(r_26, t_53);
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
                p_125 = ATgetArgument(t, 0);
                {
                  ATerm a_126 = NULL;
                  t = p_125;
                  t = free_vars_3_0(l_16, m_16, tboundin_3_0, t);
                  t = map_1_0(q_16, t);
                  a_126 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_64, a_126);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    p_125 = ATgetArgument(t, 0);
                    q_125 = ATgetArgument(t, 1);
                    {
                      ATerm s_127 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, p_125, q_125);
                      t = free_vars_3_0(s_16, v_16, tboundin_3_0, t);
                      t = map_1_0(z_16, t);
                      s_127 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_n_64, s_127);
                    }
                  }
                else
                  {
                    ATerm m_55 = NULL,s_55 = NULL,u_55 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm p_64 = ATgetArgument(t, 0);
                        ATerm q_64 = ATgetArgument(t, 1);
                        ATerm u_64 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_k_45;
                    s_55 = t;
                    t = (ATerm) ATinsert(ATempty, term_v_64);
                    u_55 = t;
                    t = SSL_printnl(s_55, u_55);
                    t = term_o_45;
                    m_55 = t;
                    t = SSL_exit(m_55);
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
  ATerm b_126 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_126);
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
        ATerm h_65 = t;
        int j_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_65);
          }
        else
          {
            t = h_65;
            {
              ATerm k_65 = t;
              int l_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_126 = NULL,e_126 = NULL,h_126 = NULL,i_126 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_126 = ATgetArgument(t, 0);
                      e_126 = ATgetArgument(t, 1);
                      h_126 = ATgetArgument(t, 2);
                      i_126 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_126;
                  t = map_1_0(n_16, t);
                  LocalPopChoice(l_65);
                }
              else
                {
                  t = k_65;
                  {
                    ATerm o_65 = t;
                    int r_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(r_65);
                      }
                    else
                      {
                        t = o_65;
                        t = dynrule_targs_1_0(o_16, t);
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
  ATerm v_126 = NULL;
  ATerm s_65 = t;
  int v_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_126 = ATgetArgument(t, 0);
          {
            ATerm w_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_65);
      t = v_126;
    }
  else
    {
      t = s_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_126;
    }
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = map_1_0(p_16, t);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm f_127 = NULL;
  ATerm y_65 = t;
  int z_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_127 = ATgetArgument(t, 0);
          {
            ATerm a_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_65);
      t = f_127;
    }
  else
    {
      t = y_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_127;
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm k_127 = NULL;
  k_127 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_127);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm t_127 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_127);
  return(t);
}
static ATerm v_16 (ATerm t)
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
              int p_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_127 = NULL,y_127 = NULL,z_127 = NULL,a_128 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_127 = ATgetArgument(t, 0);
                      y_127 = ATgetArgument(t, 1);
                      z_127 = ATgetArgument(t, 2);
                      a_128 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_127;
                  t = map_1_0(w_16, t);
                  LocalPopChoice(p_66);
                }
              else
                {
                  t = l_66;
                  {
                    ATerm q_66 = t;
                    int x_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_66);
                      }
                    else
                      {
                        t = q_66;
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
  ATerm m_128 = NULL;
  ATerm y_66 = t;
  int a_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_128 = ATgetArgument(t, 0);
          {
            ATerm c_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_67);
      t = m_128;
    }
  else
    {
      t = y_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_128;
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
  ATerm t_128 = NULL;
  ATerm d_67 = t;
  int f_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_128 = ATgetArgument(t, 0);
          {
            ATerm j_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_67);
      t = t_128;
    }
  else
    {
      t = d_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_128;
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm w_128 = NULL;
  w_128 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_128);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm x_129 = NULL,y_129 = NULL,z_129 = NULL;
  x_129 = t;
  {
    ATerm k_67 = t;
    int l_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm n_67 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_67);
        t = x_129;
        {
          ATerm o_67 = t;
          if((PushChoice() == 0))
            {
              ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL,x_26 = NULL;
              s_56 = t;
              if(match_cons(t, sym_Var_1))
                {
                  q_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_56);
              p_56 = t;
              t = q_56;
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
                      ATerm z_56 = NULL,i_57 = NULL,o_57 = NULL,w_26 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          z_56 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(q_56);
                      i_57 = t;
                      t = z_56;
                      t = ContextVar_0_0(t);
                      o_57 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, o_57);
                      w_26 = t;
                      t = SSLsetAnnotations(w_26, i_57);
                    }
                  }
              }
              r_56 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, r_56);
              x_26 = t;
              t = SSLsetAnnotations(x_26, p_56);
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
        t = k_67;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_a_34;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                y_129 = ATgetArgument(t, 0);
                {
                  ATerm c_130 = NULL;
                  t = y_129;
                  t = free_vars_3_0(d_17, e_17, tboundin_3_0, t);
                  t = map_1_0(i_17, t);
                  c_130 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_64, c_130);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    y_129 = ATgetArgument(t, 0);
                    z_129 = ATgetArgument(t, 1);
                    {
                      ATerm n_131 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, y_129, z_129);
                      t = free_vars_3_0(j_17, k_17, tboundin_3_0, t);
                      t = map_1_0(o_17, t);
                      n_131 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_n_64, n_131);
                    }
                  }
                else
                  {
                    ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm t_67 = ATgetArgument(t, 0);
                        ATerm w_67 = ATgetArgument(t, 1);
                        ATerm y_67 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_k_45;
                    r_57 = t;
                    t = (ATerm) ATinsert(ATempty, term_v_64);
                    s_57 = t;
                    t = SSL_printnl(r_57, s_57);
                    t = term_o_45;
                    q_57 = t;
                    t = SSL_exit(q_57);
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
  ATerm d_130 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_130);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm z_67 = t;
  int a_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_68);
    }
  else
    {
      t = z_67;
      {
        ATerm d_68 = t;
        int e_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_68);
          }
        else
          {
            t = d_68;
            {
              ATerm g_68 = t;
              int i_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_130 = NULL,g_130 = NULL,h_130 = NULL,i_130 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_130 = ATgetArgument(t, 0);
                      g_130 = ATgetArgument(t, 1);
                      h_130 = ATgetArgument(t, 2);
                      i_130 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_130;
                  t = map_1_0(f_17, t);
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
  ATerm q_130 = NULL;
  ATerm v_68 = t;
  int z_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_130 = ATgetArgument(t, 0);
          {
            ATerm a_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_68);
      t = q_130;
    }
  else
    {
      t = v_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_130;
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
  ATerm z_130 = NULL;
  ATerm c_69 = t;
  int d_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_130 = ATgetArgument(t, 0);
          {
            ATerm e_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_69);
      t = z_130;
    }
  else
    {
      t = c_69;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_130;
    }
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm k_131 = NULL;
  k_131 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_131);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm o_131 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_131);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm f_69 = t;
  int l_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_69);
    }
  else
    {
      t = f_69;
      {
        ATerm m_69 = t;
        int w_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_69);
          }
        else
          {
            t = m_69;
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
  ATerm l_132 = NULL;
  ATerm c_70 = t;
  int e_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_132 = ATgetArgument(t, 0);
          {
            ATerm g_70 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_70);
      t = l_132;
    }
  else
    {
      t = c_70;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_132;
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
  ATerm r_132 = NULL;
  ATerm h_70 = t;
  int i_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_132 = ATgetArgument(t, 0);
          {
            ATerm j_70 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_70);
      t = r_132;
    }
  else
    {
      t = h_70;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_132;
    }
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm w_132 = NULL;
  w_132 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_132);
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
ATerm DRDef_LHS_1_0 (ATerm b_153 (ATerm), ATerm t)
{
  ATerm n_133 = NULL,o_133 = NULL;
  ATerm n_70 = t;
  int o_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          ATerm q_70 = ATgetArgument(t, 0);
          n_133 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      LocalPopChoice(o_70);
      t = n_133;
      t = b_153(t);
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
                n_133 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(s_70);
            t = n_133;
            if(match_cons(t, sym_Rule_3))
              {
                o_133 = ATgetArgument(t, 0);
                {
                  ATerm u_70 = ATgetArgument(t, 1);
                }
                {
                  ATerm v_70 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = o_133;
            t = b_153(t);
          }
        else
          {
            t = r_70;
            if(match_cons(t, sym_AddDynRule_2))
              {
                ATerm w_70 = ATgetArgument(t, 0);
                n_133 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_133;
            if(match_cons(t, sym_Rule_3))
              {
                o_133 = ATgetArgument(t, 0);
                {
                  ATerm x_70 = ATgetArgument(t, 1);
                }
                {
                  ATerm y_70 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = o_133;
            t = b_153(t);
          }
      }
    }
  return(t);
}
static ATerm z_136 (ATerm o_135, ATerm p_135, ATerm s_135, ATerm t_135, ATerm u_135, ATerm x_135, ATerm z_135, ATerm t)
{
  t = z_135;
  {
    ATerm z_70 = t;
    if((PushChoice() == 0))
      {
        t = u_135;
        if(match_cons(t, sym_Op_2))
          {
            ATerm b_71 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_71) != ATmakeSymbol("Undefined", 0, ATtrue)))
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
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, o_135, p_135, s_135)), (ATerm) ATmakeAppl(sym_Rule_3, t_135, u_135, x_135));
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_d_71;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm j_136 = NULL,k_136 = NULL,l_136 = NULL,m_136 = NULL,n_136 = NULL,o_136 = NULL,p_136 = NULL,q_136 = NULL,w_136 = NULL,x_136 = NULL;
  l_136 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      m_136 = ATgetArgument(t, 0);
      n_136 = ATgetArgument(t, 1);
      o_136 = ATgetArgument(t, 2);
      p_136 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = p_136;
  if(match_cons(t, sym_Rule_3))
    {
      q_136 = ATgetArgument(t, 0);
      w_136 = ATgetArgument(t, 1);
      x_136 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_136;
  if(match_cons(t, sym_Op_2))
    {
      j_136 = ATgetArgument(t, 0);
      k_136 = ATgetArgument(t, 1);
      t = k_136;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = j_136;
          if(match_string(t, "Undefined"))
            {
              ATerm f_71 = t;
              int g_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_136;
                  {
                    ATerm h_71 = t;
                    int i_71 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = x_136;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(i_71);
                      }
                    else
                      {
                        t = h_71;
                        {
                          ATerm h_58 = NULL,j_58 = NULL;
                          t = term_k_45;
                          h_58 = t;
                          t = (ATerm) ATinsert(ATempty, term_j_71);
                          j_58 = t;
                          t = SSL_printnl(h_58, j_58);
                          t = l_136;
                          t = debug_1_0(p_17, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, m_136, n_136, o_136)), q_136);
                  LocalPopChoice(g_71);
                }
              else
                {
                  t = f_71;
                  t = z_136(m_136, n_136, o_136, q_136, w_136, x_136, l_136, t);
                }
            }
          else
            {
              t = z_136(m_136, n_136, o_136, q_136, w_136, x_136, l_136, t);
            }
        }
      else
        {
          t = j_136;
          t = z_136(m_136, n_136, o_136, q_136, w_136, x_136, l_136, t);
        }
    }
  else
    {
      t = z_136(m_136, n_136, o_136, q_136, w_136, x_136, l_136, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm w_124 (ATerm), ATerm t)
{
  ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL,d_137 = NULL;
  a_137 = t;
  t = w_124(t);
  b_137 = t;
  t = term_k_45;
  c_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_137), b_137);
  d_137 = t;
  t = SSL_printnl(c_137, d_137);
  t = a_137;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_d_71;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm e_137 = NULL,h_137 = NULL,i_137 = NULL,j_137 = NULL,k_137 = NULL,l_137 = NULL;
  l_137 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm k_71 = ATgetArgument(t, 0);
      if(match_cons(k_71, sym_DynRuleId_1))
        {
          ATerm o_71 = ATgetArgument(k_71, 0);
          if(match_cons(o_71, sym_RDecT_3))
            {
              e_137 = ATgetArgument(o_71, 0);
              h_137 = ATgetArgument(o_71, 1);
              i_137 = ATgetArgument(o_71, 2);
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
            j_137 = ATgetArgument(l_71, 0);
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
            k_137 = ATgetArgument(l_71, 2);
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
        t = k_137;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(u_71);
      }
    else
      {
        t = t_71;
        {
          ATerm m_137 = NULL,n_137 = NULL;
          t = term_k_45;
          m_137 = t;
          t = (ATerm) ATinsert(ATempty, term_j_71);
          n_137 = t;
          t = SSL_printnl(m_137, n_137);
          t = l_137;
          t = debug_1_0(q_17, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_137, h_137, i_137)), j_137);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm y_137 = NULL;
  y_137 = t;
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
        t = y_137;
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
        t = y_137;
      }
  }
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_z_71;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm b_72 = t;
  int e_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_138 = NULL;
      c_138 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm f_72 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_138;
      LocalPopChoice(e_72);
      {
        ATerm d_138 = NULL,e_138 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            d_138 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_138;
        t = map_1_0(v_17, t);
        e_138 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, e_138);
      }
    }
  else
    {
      t = b_72;
      {
        ATerm g_72 = t;
        int h_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_138 = NULL;
            m_138 = t;
            if(match_cons(t, sym_ExtendDynamicRules_1))
              {
                ATerm k_72 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_138;
            LocalPopChoice(h_72);
            {
              ATerm n_138 = NULL,t_138 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  n_138 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = n_138;
              t = map_1_0(x_17, t);
              t_138 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, t_138);
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
                  ATerm a_139 = NULL;
                  a_139 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm q_72 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_139;
                  LocalPopChoice(m_72);
                  {
                    ATerm b_139 = NULL,c_139 = NULL;
                    if(match_cons(t, sym_OverrideDynamicRules_1))
                      {
                        b_139 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = b_139;
                    t = map_1_0(z_17, t);
                    c_139 = t;
                    t = (ATerm) ATmakeAppl(sym_GenDynRules_1, c_139);
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
                        ATerm o_139 = NULL;
                        o_139 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm w_72 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = o_139;
                        LocalPopChoice(v_72);
                        {
                          ATerm p_139 = NULL,q_139 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              p_139 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = p_139;
                          t = map_1_0(b_18, t);
                          q_139 = t;
                          t = (ATerm) ATmakeAppl(sym_GenDynRules_1, q_139);
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
        ATerm h_138 = NULL,q_58 = NULL,r_58 = NULL;
        h_138 = t;
        t = (ATerm) ATempty;
        q_58 = t;
        t = term_z_71;
        r_58 = t;
        t = term_b_73;
        t = v_14(r_58, q_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm c_73 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_73) != ATmakeSymbol("c_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = h_138;
        LocalPopChoice(a_73);
        {
          ATerm i_138 = NULL,j_138 = NULL;
          static ATerm w_17 (ATerm t)
          {
            ATerm k_138 = NULL;
            if(match_cons(t, sym_DynRuleId_1))
              {
                k_138 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_AddLabelDynRuleId_2, k_138, not_null(j_138));
            return(t);
          }
          i_138 = t;
          t = DRDef_LHS_1_0(dummify_0_0, t);
          if(((j_138 != NULL) && (j_138 != t)))
            _fail(t);
          else
            j_138 = t;
          t = i_138;
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
        ATerm v_138 = NULL,u_58 = NULL,v_58 = NULL;
        v_138 = t;
        t = (ATerm) ATempty;
        u_58 = t;
        t = term_z_71;
        v_58 = t;
        t = term_b_73;
        t = v_14(v_58, u_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm f_73 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_73) != ATmakeSymbol("c_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = v_138;
        LocalPopChoice(e_73);
        {
          ATerm w_138 = NULL,x_138 = NULL;
          static ATerm y_17 (ATerm t)
          {
            ATerm y_138 = NULL;
            if(match_cons(t, sym_DynRuleId_1))
              {
                y_138 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_AddLabelDynRuleId_2, y_138, not_null(x_138));
            return(t);
          }
          w_138 = t;
          t = DRDef_LHS_1_0(dummify_0_0, t);
          if(((x_138 != NULL) && (x_138 != t)))
            _fail(t);
          else
            x_138 = t;
          t = w_138;
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
  ATerm d_139 = NULL,e_139 = NULL,f_139 = NULL,g_139 = NULL,h_139 = NULL,i_139 = NULL,j_139 = NULL,k_139 = NULL;
  static ATerm a_18 (ATerm t)
  {
    ATerm n_139 = NULL;
    if(match_cons(t, sym_DynRuleId_1))
      {
        n_139 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LabeledDynRuleId_2, n_139, not_null(e_139));
    return(t);
  }
  if(match_cons(t, sym_RDefT_4))
    {
      f_139 = ATgetArgument(t, 0);
      g_139 = ATgetArgument(t, 1);
      h_139 = ATgetArgument(t, 2);
      {
        ATerm g_73 = ATgetArgument(t, 3);
        if(match_cons(g_73, sym_Rule_3))
          {
            i_139 = ATgetArgument(g_73, 0);
            j_139 = ATgetArgument(g_73, 1);
            k_139 = ATgetArgument(g_73, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, f_139, g_139, h_139)), (ATerm) ATmakeAppl(sym_Rule_3, i_139, j_139, k_139));
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
  d_139 = t;
  t = DRDef_LHS_1_0(dummify_0_0, t);
  if(((e_139 != NULL) && (e_139 != t)))
    _fail(t);
  else
    e_139 = t;
  t = d_139;
  t = oncetd_1_0(a_18, t);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm r_139 = NULL,s_139 = NULL;
  static ATerm c_18 (ATerm t)
  {
    ATerm t_139 = NULL;
    if(match_cons(t, sym_DynRuleId_1))
      {
        t_139 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LabeledDynRuleId_2, t_139, not_null(s_139));
    return(t);
  }
  t = RDefToDRDef_extend_0_0(t);
  r_139 = t;
  t = DRDef_LHS_1_0(dummify_0_0, t);
  if(((s_139 != NULL) && (s_139 != t)))
    _fail(t);
  else
    s_139 = t;
  t = r_139;
  t = oncetd_1_0(c_18, t);
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  ATerm j_73 = t;
  int k_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_137 = NULL,w_137 = NULL,x_137 = NULL;
      t = oncetd_1_0(r_17, t);
      v_137 = t;
      t = (ATerm) ATempty;
      w_137 = t;
      t = term_m_73;
      x_137 = t;
      t = term_n_73;
      t = w_14(t_17, w_137, x_137, t);
      t = v_137;
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
  ATerm h_140 = NULL,i_140 = NULL,j_140 = NULL,k_140 = NULL,t_31 = NULL;
  k_140 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      i_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_140);
  h_140 = t;
  t = i_140;
  t = topdown_1_0(g_18, t);
  t = listtd_1_0(h_18, t);
  j_140 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, j_140);
  t_31 = t;
  t = SSLsetAnnotations(t_31, h_140);
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
  ATerm n_140 = NULL,o_140 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_140 = ATgetFirst((ATermList) t);
      o_140 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_14(n_140, o_140, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm y_139 = NULL,z_139 = NULL,a_140 = NULL,b_140 = NULL,c_140 = NULL,d_140 = NULL,e_140 = NULL,f_140 = NULL,v_31 = NULL,u_31 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  f_140 = t;
  if(match_cons(t, sym_Specification_1))
    {
      z_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_140);
  y_139 = t;
  t = z_139;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_140 = ATgetFirst((ATermList) t);
      c_140 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_139);
  a_140 = t;
  t = c_140;
  t = Cons_2_0(_id, d_18, t);
  d_140 = t;
  t = (ATerm) ATinsert(CheckATermList(d_140), b_140);
  u_31 = t;
  t = SSLsetAnnotations(u_31, a_140);
  e_140 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_140);
  v_31 = t;
  t = SSLsetAnnotations(v_31, y_139);
  return(t);
}
ATerm tboundin_3_0 (ATerm u_151 (ATerm), ATerm v_151 (ATerm), ATerm w_151 (ATerm), ATerm t)
{
  ATerm d_146 = NULL,e_146 = NULL,f_146 = NULL,g_146 = NULL,h_146 = NULL;
  g_146 = t;
  if(match_cons(t, sym_Scope_2))
    {
      h_146 = ATgetArgument(t, 0);
      f_146 = ATgetArgument(t, 1);
      {
        ATerm a_59 = NULL,f_59 = NULL,h_59 = NULL,b_32 = NULL;
        t = SSLgetAnnotations(g_146);
        a_59 = t;
        t = h_146;
        t = w_151(t);
        f_59 = t;
        t = f_146;
        t = u_151(t);
        h_59 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, f_59, h_59);
        b_32 = t;
        t = SSLsetAnnotations(b_32, a_59);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          h_146 = ATgetArgument(t, 0);
          {
            ATerm p_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,l_32 = NULL,k_32 = NULL;
            t = SSLgetAnnotations(g_146);
            p_59 = t;
            t = h_146;
            if(match_cons(t, sym_Rule_3))
              {
                s_59 = ATgetArgument(t, 0);
                t_59 = ATgetArgument(t, 1);
                v_59 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(h_146);
            r_59 = t;
            t = s_59;
            t = u_151(t);
            w_59 = t;
            t = t_59;
            t = u_151(t);
            x_59 = t;
            t = v_59;
            t = u_151(t);
            y_59 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, w_59, x_59, y_59);
            k_32 = t;
            t = SSLsetAnnotations(k_32, r_59);
            z_59 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, z_59);
            l_32 = t;
            t = SSLsetAnnotations(l_32, p_59);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              h_146 = ATgetArgument(t, 0);
              f_146 = ATgetArgument(t, 1);
              d_146 = ATgetArgument(t, 2);
              {
                ATerm i_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,m_32 = NULL;
                t = SSLgetAnnotations(g_146);
                i_60 = t;
                t = h_146;
                t = w_151(t);
                n_60 = t;
                t = f_146;
                t = w_151(t);
                o_60 = t;
                t = d_146;
                t = w_151(t);
                p_60 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, n_60, o_60, p_60);
                m_32 = t;
                t = SSLsetAnnotations(m_32, i_60);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  h_146 = ATgetArgument(t, 0);
                  f_146 = ATgetArgument(t, 1);
                  d_146 = ATgetArgument(t, 2);
                  e_146 = ATgetArgument(t, 3);
                  {
                    ATerm s_61 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,n_32 = NULL;
                    t = SSLgetAnnotations(g_146);
                    s_61 = t;
                    t = h_146;
                    t = w_151(t);
                    j_62 = t;
                    t = f_146;
                    t = w_151(t);
                    k_62 = t;
                    t = d_146;
                    t = w_151(t);
                    l_62 = t;
                    t = e_146;
                    t = u_151(t);
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
                      h_146 = ATgetArgument(t, 0);
                      f_146 = ATgetArgument(t, 1);
                      d_146 = ATgetArgument(t, 2);
                      e_146 = ATgetArgument(t, 3);
                      {
                        ATerm e_63 = NULL,l_63 = NULL,m_63 = NULL,n_63 = NULL,o_63 = NULL,o_32 = NULL;
                        t = SSLgetAnnotations(g_146);
                        e_63 = t;
                        t = h_146;
                        t = w_151(t);
                        l_63 = t;
                        t = f_146;
                        t = w_151(t);
                        m_63 = t;
                        t = d_146;
                        t = w_151(t);
                        n_63 = t;
                        t = e_146;
                        t = u_151(t);
                        o_63 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, l_63, m_63, n_63, o_63);
                        o_32 = t;
                        t = SSLsetAnnotations(o_32, e_63);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          h_146 = ATgetArgument(t, 0);
                          f_146 = ATgetArgument(t, 1);
                          {
                            ATerm o_64 = NULL,r_64 = NULL,t_64 = NULL,p_32 = NULL;
                            t = SSLgetAnnotations(g_146);
                            o_64 = t;
                            t = h_146;
                            t = w_151(t);
                            r_64 = t;
                            t = f_146;
                            t = u_151(t);
                            t_64 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, r_64, t_64);
                            p_32 = t;
                            t = SSLsetAnnotations(p_32, o_64);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              h_146 = ATgetArgument(t, 0);
                              f_146 = ATgetArgument(t, 1);
                              {
                                ATerm n_65 = NULL,t_65 = NULL,u_65 = NULL,q_32 = NULL;
                                t = SSLgetAnnotations(g_146);
                                n_65 = t;
                                t = h_146;
                                t = w_151(t);
                                t_65 = t;
                                t = f_146;
                                t = u_151(t);
                                u_65 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, t_65, u_65);
                                q_32 = t;
                                t = SSLsetAnnotations(q_32, n_65);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  h_146 = ATgetArgument(t, 0);
                                  f_146 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_66 = NULL,n_66 = NULL,o_66 = NULL,r_32 = NULL;
                                    t = SSLgetAnnotations(g_146);
                                    j_66 = t;
                                    t = h_146;
                                    t = w_151(t);
                                    n_66 = t;
                                    t = f_146;
                                    t = u_151(t);
                                    o_66 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, n_66, o_66);
                                    r_32 = t;
                                    t = SSLsetAnnotations(r_32, j_66);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      h_146 = ATgetArgument(t, 0);
                                      {
                                        ATerm e_67 = NULL,i_67 = NULL,s_32 = NULL;
                                        t = SSLgetAnnotations(g_146);
                                        e_67 = t;
                                        t = h_146;
                                        t = u_151(t);
                                        i_67 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, i_67);
                                        s_32 = t;
                                        t = SSLsetAnnotations(s_32, e_67);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          h_146 = ATgetArgument(t, 0);
                                          {
                                            ATerm u_67 = NULL,x_67 = NULL,u_32 = NULL;
                                            t = SSLgetAnnotations(g_146);
                                            u_67 = t;
                                            t = h_146;
                                            t = u_151(t);
                                            x_67 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, x_67);
                                            u_32 = t;
                                            t = SSLsetAnnotations(u_32, u_67);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              h_146 = ATgetArgument(t, 0);
                                              {
                                                ATerm f_68 = NULL,b_69 = NULL,v_32 = NULL;
                                                t = SSLgetAnnotations(g_146);
                                                f_68 = t;
                                                t = h_146;
                                                t = u_151(t);
                                                b_69 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, b_69);
                                                v_32 = t;
                                                t = SSLsetAnnotations(v_32, f_68);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  h_146 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm q_69 = NULL,x_69 = NULL,w_32 = NULL;
                                                    t = SSLgetAnnotations(g_146);
                                                    q_69 = t;
                                                    t = h_146;
                                                    t = u_151(t);
                                                    x_69 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, x_69);
                                                    w_32 = t;
                                                    t = SSLsetAnnotations(w_32, q_69);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm d_70 = NULL,f_70 = NULL,x_32 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      h_146 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(g_146);
                                                  d_70 = t;
                                                  t = h_146;
                                                  t = u_151(t);
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
ATerm dynrule_targs_1_0 (ATerm d_152 (ATerm), ATerm t)
{
  ATerm f_147 = NULL,g_147 = NULL,j_147 = NULL;
  ATerm r_73 = t;
  int s_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          f_147 = ATgetArgument(t, 0);
          {
            ATerm t_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_73);
      t = f_147;
      if(match_cons(t, sym_DynRuleId_1))
        {
          g_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_147;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm u_73 = ATgetArgument(t, 0);
          ATerm v_73 = ATgetArgument(t, 1);
          j_147 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_147;
    }
  else
    {
      t = r_73;
      {
        ATerm w_73 = t;
        int x_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                f_147 = ATgetArgument(t, 0);
                {
                  ATerm y_73 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(x_73);
            t = f_147;
            if(match_cons(t, sym_DynRuleId_1))
              {
                g_147 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_147;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm a_74 = ATgetArgument(t, 0);
                ATerm b_74 = ATgetArgument(t, 1);
                j_147 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = j_147;
          }
        else
          {
            t = w_73;
            if(match_cons(t, sym_AddDynRule_2))
              {
                f_147 = ATgetArgument(t, 0);
                {
                  ATerm c_74 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = f_147;
            if(match_cons(t, sym_DynRuleId_1))
              {
                g_147 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_147;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm d_74 = ATgetArgument(t, 0);
                ATerm e_74 = ATgetArgument(t, 1);
                j_147 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = j_147;
          }
      }
    }
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm z_147 = NULL;
  ATerm f_74 = t;
  int g_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_147 = ATgetArgument(t, 0);
          {
            ATerm h_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_74);
      t = z_147;
    }
  else
    {
      t = f_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_147;
    }
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm f_148 = NULL;
  ATerm i_74 = t;
  int k_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_148 = ATgetArgument(t, 0);
          {
            ATerm m_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_74);
      t = f_148;
    }
  else
    {
      t = i_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_148 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_148;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm u_147 = NULL;
  ATerm n_74 = t;
  int o_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm p_74 = ATgetArgument(t, 0);
          ATerm q_74 = ATgetArgument(t, 1);
          u_147 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(o_74);
      t = u_147;
      t = map_1_0(j_18, t);
    }
  else
    {
      t = n_74;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm r_74 = ATgetArgument(t, 0);
          ATerm s_74 = ATgetArgument(t, 1);
          u_147 = ATgetArgument(t, 2);
          {
            ATerm t_74 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = u_147;
      t = map_1_0(k_18, t);
    }
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm b_149 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_149);
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
                  ATerm d_149 = NULL,e_149 = NULL,f_149 = NULL,g_149 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_149 = ATgetArgument(t, 0);
                      e_149 = ATgetArgument(t, 1);
                      f_149 = ATgetArgument(t, 2);
                      g_149 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_149;
                  t = map_1_0(n_18, t);
                  LocalPopChoice(z_74);
                }
              else
                {
                  t = y_74;
                  {
                    ATerm b_75 = t;
                    int d_75 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_75);
                      }
                    else
                      {
                        t = b_75;
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
  ATerm r_149 = NULL;
  ATerm e_75 = t;
  int f_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_149 = ATgetArgument(t, 0);
          {
            ATerm g_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_75);
      t = r_149;
    }
  else
    {
      t = e_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_149 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_149;
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
  ATerm w_149 = NULL;
  ATerm h_75 = t;
  int i_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_149 = ATgetArgument(t, 0);
          {
            ATerm j_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_75);
      t = w_149;
    }
  else
    {
      t = h_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_149 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_149;
    }
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm a_150 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_150);
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
        int o_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_75);
          }
        else
          {
            t = m_75;
            {
              ATerm p_75 = t;
              int r_75 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_150 = NULL,d_150 = NULL,e_150 = NULL,f_150 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_150 = ATgetArgument(t, 0);
                      d_150 = ATgetArgument(t, 1);
                      e_150 = ATgetArgument(t, 2);
                      f_150 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_150;
                  t = map_1_0(s_18, t);
                  LocalPopChoice(r_75);
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
  ATerm m_150 = NULL;
  ATerm v_75 = t;
  int w_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_150 = ATgetArgument(t, 0);
          {
            ATerm x_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_75);
      t = m_150;
    }
  else
    {
      t = v_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_150;
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
  ATerm r_150 = NULL;
  ATerm y_75 = t;
  int z_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_150 = ATgetArgument(t, 0);
          {
            ATerm a_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_75);
      t = r_150;
    }
  else
    {
      t = y_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_150;
    }
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm v_150 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_150);
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
                  ATerm x_150 = NULL,a_151 = NULL,b_151 = NULL,c_151 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_150 = ATgetArgument(t, 0);
                      a_151 = ATgetArgument(t, 1);
                      b_151 = ATgetArgument(t, 2);
                      c_151 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_151;
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
  ATerm j_151 = NULL;
  ATerm l_76 = t;
  int m_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_151 = ATgetArgument(t, 0);
          {
            ATerm n_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_76);
      t = j_151;
    }
  else
    {
      t = l_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_151;
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
  ATerm o_151 = NULL;
  ATerm o_76 = t;
  int p_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_151 = ATgetArgument(t, 0);
          {
            ATerm q_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_76);
      t = o_151;
    }
  else
    {
      t = o_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_151;
    }
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm s_151 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_151);
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
                  ATerm x_151 = NULL,y_151 = NULL,z_151 = NULL,a_152 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_151 = ATgetArgument(t, 0);
                      y_151 = ATgetArgument(t, 1);
                      z_151 = ATgetArgument(t, 2);
                      a_152 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_151;
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
                        t = dynrule_targs_1_0(e_19, t);
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
  ATerm i_152 = NULL;
  ATerm i_77 = t;
  int j_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_152 = ATgetArgument(t, 0);
          {
            ATerm k_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_77);
      t = i_152;
    }
  else
    {
      t = i_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_152;
    }
  return(t);
}
static ATerm e_19 (ATerm t)
{
  t = map_1_0(f_19, t);
  return(t);
}
static ATerm f_19 (ATerm t)
{
  ATerm n_152 = NULL;
  ATerm l_77 = t;
  int m_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_152 = ATgetArgument(t, 0);
          {
            ATerm n_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_77);
      t = n_152;
    }
  else
    {
      t = l_77;
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
static ATerm h_19 (ATerm t)
{
  ATerm c_153 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_153);
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
                  ATerm e_153 = NULL,f_153 = NULL,g_153 = NULL,h_153 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_153 = ATgetArgument(t, 0);
                      f_153 = ATgetArgument(t, 1);
                      g_153 = ATgetArgument(t, 2);
                      h_153 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_153;
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
  ATerm p_153 = NULL;
  ATerm x_77 = t;
  int y_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_153 = ATgetArgument(t, 0);
          {
            ATerm z_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_77);
      t = p_153;
    }
  else
    {
      t = x_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_153;
    }
  return(t);
}
static ATerm o_19 (ATerm t)
{
  t = map_1_0(r_19, t);
  return(t);
}
static ATerm r_19 (ATerm t)
{
  ATerm u_153 = NULL;
  ATerm a_78 = t;
  int b_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_153 = ATgetArgument(t, 0);
          {
            ATerm c_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_78);
      t = u_153;
    }
  else
    {
      t = a_78;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_153;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm z_148 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      z_148 = ATgetArgument(t, 0);
      t = z_148;
      t = free_vars_3_0(l_18, m_18, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          z_148 = ATgetArgument(t, 0);
          t = z_148;
          t = free_vars_3_0(q_18, r_18, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              z_148 = ATgetArgument(t, 0);
              t = z_148;
              t = free_vars_3_0(v_18, w_18, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  z_148 = ATgetArgument(t, 0);
                  t = z_148;
                  t = free_vars_3_0(a_19, b_19, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      z_148 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_148;
                  t = free_vars_3_0(h_19, j_19, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm t_19 (ATerm t)
{
  ATerm k_154 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_154);
  return(t);
}
static ATerm u_19 (ATerm t)
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
        int h_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_78);
          }
        else
          {
            t = f_78;
            {
              ATerm i_78 = t;
              int j_78 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_154 = NULL,n_154 = NULL,o_154 = NULL,p_154 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_154 = ATgetArgument(t, 0);
                      n_154 = ATgetArgument(t, 1);
                      o_154 = ATgetArgument(t, 2);
                      p_154 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_154;
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
                        t = dynrule_targs_1_0(z_19, t);
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
  ATerm x_154 = NULL;
  ATerm n_78 = t;
  int o_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_154 = ATgetArgument(t, 0);
          {
            ATerm p_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_78);
      t = x_154;
    }
  else
    {
      t = n_78;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_154;
    }
  return(t);
}
static ATerm z_19 (ATerm t)
{
  t = map_1_0(a_20, t);
  return(t);
}
static ATerm a_20 (ATerm t)
{
  ATerm c_155 = NULL;
  ATerm q_78 = t;
  int r_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_155 = ATgetArgument(t, 0);
          {
            ATerm s_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_78);
      t = c_155;
    }
  else
    {
      t = q_78;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_155 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_155;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm c_154 = NULL,h_154 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      h_154 = ATgetArgument(t, 0);
      t = h_154;
      if(match_cons(t, sym_Rule_3))
        {
          c_154 = ATgetArgument(t, 0);
          {
            ATerm u_78 = ATgetArgument(t, 1);
          }
          {
            ATerm v_78 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = c_154;
      t = free_vars_3_0(t_19, u_19, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          h_154 = ATgetArgument(t, 0);
          {
            ATerm y_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_154;
    }
  return(t);
}
static ATerm k_14 (ATerm s_129 (ATerm), ATerm g_31, ATerm f_31, ATerm t)
{
  static ATerm v_155 (ATerm t)
  {
    ATerm q_155 = NULL,r_155 = NULL,s_155 = NULL;
    q_155 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_155 = ATgetFirst((ATermList) t);
            s_155 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_78 = t;
          int a_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_155;
              {
                static ATerm c_20 (ATerm t)
                {
                  t = f_31;
                  return(t);
                }
                t = l_14(s_129, c_20, r_155, s_155, t);
              }
              t = v_155(t);
              LocalPopChoice(a_79);
            }
          else
            {
              t = z_78;
              {
                ATerm m_70 = NULL,p_70 = NULL,x_33 = NULL;
                t = SSLgetAnnotations(q_155);
                m_70 = t;
                t = s_155;
                t = v_155(t);
                p_70 = t;
                t = (ATerm) ATinsert(CheckATermList(p_70), r_155);
                x_33 = t;
                t = SSLsetAnnotations(x_33, m_70);
              }
            }
        }
      }
    return(t);
  }
  t = g_31;
  t = v_155(t);
  return(t);
}
static ATerm l_14 (ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm k_31, ATerm j_31, ATerm t)
{
  t = w_129(t);
  {
    static ATerm f_20 (ATerm t)
    {
      ATerm z_155 = NULL;
      z_155 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_31, z_155);
      t = v_129(t);
      return(t);
    }
    t = fetch_1_0(f_20, t);
  }
  t = j_31;
  return(t);
}
static ATerm m_14 (ATerm n_129 (ATerm), ATerm e_31, ATerm d_31, ATerm t)
{
  static ATerm p_156 (ATerm t)
  {
    ATerm k_156 = NULL,l_156 = NULL,m_156 = NULL;
    k_156 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_156;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_156 = ATgetFirst((ATermList) t);
            m_156 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm b_79 = t;
          int c_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_156;
              {
                static ATerm l_20 (ATerm t)
                {
                  t = d_31;
                  return(t);
                }
                t = l_14(n_129, l_20, l_156, m_156, t);
              }
              t = p_156(t);
              LocalPopChoice(c_79);
            }
          else
            {
              t = b_79;
              {
                ATerm a_71 = NULL,e_71 = NULL,z_33 = NULL;
                t = SSLgetAnnotations(k_156);
                a_71 = t;
                t = m_156;
                t = p_156(t);
                e_71 = t;
                t = (ATerm) ATinsert(CheckATermList(e_71), l_156);
                z_33 = t;
                t = SSLsetAnnotations(z_33, a_71);
              }
            }
        }
      }
    return(t);
  }
  t = e_31;
  t = p_156(t);
  return(t);
}
ATerm genzip_4_0 (ATerm l_127 (ATerm), ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm o_127 (ATerm), ATerm t)
{
  static ATerm x_156 (ATerm t)
  {
    ATerm d_79 = t;
    int e_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_127(t);
        LocalPopChoice(e_79);
      }
    else
      {
        t = d_79;
        {
          ATerm r_156 = NULL,s_156 = NULL,t_156 = NULL,u_156 = NULL,v_156 = NULL,w_156 = NULL,e_34 = NULL;
          t = m_127(t);
          w_156 = t;
          if(match_cons(t, sym__2))
            {
              s_156 = ATgetArgument(t, 0);
              t_156 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_156);
          r_156 = t;
          t = s_156;
          t = o_127(t);
          u_156 = t;
          t = t_156;
          t = x_156(t);
          v_156 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_156, v_156);
          e_34 = t;
          t = SSLsetAnnotations(e_34, r_156);
          t = n_127(t);
        }
      }
    return(t);
  }
  t = x_156(t);
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
  ATerm e_157 = NULL,f_157 = NULL,g_157 = NULL,h_157 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_79 = ATgetArgument(t, 0);
      if(((ATgetType(h_79) == AT_LIST) && !(ATisEmpty(h_79))))
        {
          e_157 = ATgetFirst((ATermList) h_79);
          f_157 = (ATerm) ATgetNext((ATermList) h_79);
        }
      else
        _fail(t);
      {
        ATerm i_79 = ATgetArgument(t, 1);
        if(((ATgetType(i_79) == AT_LIST) && !(ATisEmpty(i_79))))
          {
            g_157 = ATgetFirst((ATermList) i_79);
            h_157 = (ATerm) ATgetNext((ATermList) i_79);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_157, g_157), (ATerm) ATmakeAppl(sym__2, f_157, h_157));
  return(t);
}
static ATerm p_20 (ATerm t)
{
  ATerm i_157 = NULL,j_157 = NULL;
  if(match_cons(t, sym__2))
    {
      i_157 = ATgetArgument(t, 0);
      j_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_157), i_157);
  return(t);
}
static ATerm r_14 (ATerm d_721, ATerm i_721, ATerm n_71, ATerm t)
{
  ATerm z_156 = NULL,a_157 = NULL,b_157 = NULL,c_157 = NULL;
  t = SSL_explode_term(i_721);
  if(match_cons(t, sym__2))
    {
      z_156 = ATgetArgument(t, 0);
      b_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_721);
  if(match_cons(t, sym__2))
    {
      if((z_156 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_157, b_157);
  t = genzip_4_0(n_20, o_20, p_20, _id, t);
  c_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_157, n_71);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm t)
{
  static ATerm l_157 (ATerm t)
  {
    ATerm j_79 = t;
    int k_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_118(t);
        LocalPopChoice(k_79);
      }
    else
      {
        t = j_79;
        t = n_118(t);
        t = l_157(t);
      }
    return(t);
  }
  t = l_157(t);
  return(t);
}
ATerm for_3_0 (ATerm p_118 (ATerm), ATerm q_118 (ATerm), ATerm r_118 (ATerm), ATerm t)
{
  t = p_118(t);
  t = while_not_2_0(q_118, r_118, t);
  return(t);
}
static ATerm q_20 (ATerm t)
{
  ATerm s_157 = NULL;
  s_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, s_157);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm t_157 = NULL,u_157 = NULL,v_157 = NULL,w_157 = NULL,g_34 = NULL;
  w_157 = t;
  if(match_cons(t, sym__2))
    {
      u_157 = ATgetArgument(t, 0);
      v_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_157);
  t_157 = t;
  t = v_157;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_157, v_157);
  g_34 = t;
  t = SSLsetAnnotations(g_34, t_157);
  return(t);
}
static ATerm u_20 (ATerm t)
{
  ATerm p_158 = NULL,q_158 = NULL,r_158 = NULL,s_158 = NULL,t_158 = NULL;
  p_158 = t;
  if(match_cons(t, sym__2))
    {
      q_158 = ATgetArgument(t, 0);
      r_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_158;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_158 = ATgetFirst((ATermList) t);
      t_158 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm l_79 = t;
        int m_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_159(q_158, r_158, p_158, t);
            LocalPopChoice(m_79);
          }
        else
          {
            t = l_79;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_158), s_158), t_158);
          }
      }
    }
  else
    {
      t = d_159(q_158, r_158, p_158, t);
    }
  return(t);
}
static ATerm d_159 (ATerm x_157, ATerm y_157, ATerm z_157, ATerm t)
{
  ATerm a_158 = NULL,d_158 = NULL,l_34 = NULL,g_158 = NULL,h_158 = NULL,i_158 = NULL,j_158 = NULL;
  t = SSLgetAnnotations(z_157);
  a_158 = t;
  t = y_157;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_158 = ATgetFirst((ATermList) t);
      j_158 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_158;
  if(match_cons(t, sym__2))
    {
      h_158 = ATgetArgument(t, 0);
      i_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_79 = t;
    int o_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_158;
        if((h_158 != t))
          {
            _fail(t);
          }
        t = j_158;
        LocalPopChoice(o_79);
      }
    else
      {
        t = n_79;
        t = y_157;
        t = r_14(h_158, i_158, j_158, t);
      }
  }
  d_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_157, d_158);
  l_34 = t;
  t = SSLsetAnnotations(l_34, a_158);
  return(t);
}
static ATerm w_20 (ATerm t)
{
  ATerm c_159 = NULL;
  if(match_cons(t, sym__2))
    {
      c_159 = ATgetArgument(t, 0);
      if((c_159 != ATgetArgument(t, 1)))
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
      t = for_3_0(q_20, t_20, u_20, t);
      LocalPopChoice(q_79);
    }
  else
    {
      t = p_79;
      {
        ATerm x_158 = NULL,y_158 = NULL,z_158 = NULL;
        x_158 = t;
        if(match_cons(t, sym__2))
          {
            y_158 = ATgetArgument(t, 0);
            z_158 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_158;
        t = m_14(w_20, y_158, z_158, t);
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
  ATerm a_72 = NULL,c_72 = NULL;
  if(match_cons(t, sym__2))
    {
      a_72 = ATgetArgument(t, 0);
      c_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_14(j_21, a_72, c_72, t);
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm d_72 = NULL;
  if(match_cons(t, sym__2))
    {
      d_72 = ATgetArgument(t, 0);
      if((d_72 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm l_21 (ATerm t)
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
  t = k_14(g_22, s_72, t_72, t);
  return(t);
}
static ATerm g_22 (ATerm t)
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
ATerm free_vars_3_0 (ATerm h_149 (ATerm), ATerm i_149 (ATerm), ATerm j_149 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm r_159 (ATerm t)
  {
    ATerm r_79 = t;
    int s_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_149(t);
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
              ATerm f_159 = NULL,g_159 = NULL,m_71 = NULL,q_71 = NULL;
              f_159 = t;
              t = i_149(t);
              g_159 = t;
              t = f_159;
              {
                static ATerm b_21 (ATerm t)
                {
                  ATerm i_159 = NULL;
                  t = r_159(t);
                  i_159 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_159, g_159);
                  t = diff_0_0(t);
                  return(t);
                }
                t = j_149(b_21, r_159, d_21, t);
              }
              q_71 = t;
              t = SSL_explode_term(q_71);
              if(match_cons(t, sym__2))
                {
                  ATerm w_79 = ATgetArgument(t, 0);
                  m_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_71;
              t = foldr_3_0(h_21, i_21, _id, t);
              LocalPopChoice(u_79);
            }
          else
            {
              t = t_79;
              {
                ATerm i_72 = NULL,j_72 = NULL;
                j_72 = t;
                t = SSL_explode_term(j_72);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_79 = ATgetArgument(t, 0);
                    i_72 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_72;
                t = foldr_3_0(l_21, c_22, r_159, t);
              }
            }
        }
      }
    return(t);
  }
  t = r_159(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm w_118 (ATerm), ATerm t)
{
  static ATerm h_22 (ATerm t)
  {
    t = bottomup_1_0(w_118, t);
    return(t);
  }
  t = SRTS_all(h_22, t);
  t = w_118(t);
  return(t);
}
static ATerm v_14 (ATerm h_64, ATerm i_64, ATerm t)
{
  ATerm s_159 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, h_64, i_64);
  t = o_15(h_64, i_64, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_159 = ATgetFirst((ATermList) t);
      {
        ATerm z_79 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_159;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm g_160 = NULL,h_160 = NULL;
  g_160 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_80 = t;
    int b_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_73 = NULL;
        t = term_c_80;
        q_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_80, g_160);
        t = v_14(q_73, g_160, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm d_80 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_80) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, h_160, (ATerm) ATempty);
        LocalPopChoice(b_80);
      }
    else
      {
        t = a_80;
        {
          ATerm z_73 = NULL;
          t = term_c_80;
          z_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_80, g_160);
          t = v_14(z_73, g_160, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm e_80 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_80) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, h_160, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm n_120 (ATerm), ATerm t)
{
  static ATerm k_160 (ATerm t)
  {
    ATerm f_80 = t;
    int g_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_120(t);
        LocalPopChoice(g_80);
      }
    else
      {
        t = f_80;
        t = SRTS_all(k_160, t);
      }
    return(t);
  }
  t = k_160(t);
  return(t);
}
static ATerm w_14 (ATerm s_138 (ATerm), ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm l_160 = NULL,m_160 = NULL,n_160 = NULL,o_160 = NULL,p_160 = NULL,q_160 = NULL,r_160 = NULL,s_160 = NULL;
  o_160 = t;
  t = s_138(t);
  l_160 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_160, i_45, g_45);
  t = p_15(l_160, i_45, g_45, t);
  {
    ATerm h_80 = t;
    int i_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_160 = NULL;
        t = term_j_80;
        t_160 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_160, term_j_80);
        t = o_15(l_160, t_160, t);
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
      m_160 = ATgetFirst((ATermList) t);
      n_160 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_160, term_j_80, (ATerm) ATinsert(CheckATermList(n_160), (ATerm) ATinsert(CheckATermList(m_160), i_45)));
  t = lookup_table_0_1(l_160, t);
  s_160 = t;
  t = term_j_80;
  p_160 = t;
  t = (ATerm) ATinsert(CheckATermList(n_160), (ATerm) ATinsert(CheckATermList(m_160), i_45));
  q_160 = t;
  t = s_160;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(p_160, q_160, r_160, t);
  t = o_160;
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
  ATerm x_160 = NULL,z_160 = NULL,a_161 = NULL,b_161 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      z_160 = ATgetArgument(t, 0);
      a_161 = ATgetArgument(t, 1);
      x_160 = ATgetArgument(t, 2);
      {
        ATerm e_161 = NULL,f_161 = NULL;
        t = a_161;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, z_160);
        e_161 = t;
        t = term_l_80;
        f_161 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_160), term_l_80);
        t = w_14(i_22, e_161, f_161, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, z_160, (ATerm)ATempty, x_160);
      }
    }
  else
    {
      ATerm i_161 = NULL,j_161 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          z_160 = ATgetArgument(t, 0);
          a_161 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_161;
      if(match_cons(t, sym_ConstType_1))
        {
          b_161 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, z_160);
      i_161 = t;
      t = term_n_80;
      j_161 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_160), term_n_80);
      t = w_14(l_22, i_161, j_161, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_160, (ATerm) ATmakeAppl(sym_ConstType_1, b_161));
    }
  return(t);
}
static ATerm x_14 (ATerm b_64, ATerm c_64, ATerm t)
{
  ATerm n_161 = NULL,o_161 = NULL;
  o_161 = t;
  {
    ATerm o_80 = t;
    int p_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
        t = o_15(b_64, c_64, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm q_80 = ATgetFirst((ATermList) t);
            n_161 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_80);
        {
          ATerm p_161 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, b_64, c_64, n_161);
          t = lookup_table_0_1(b_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_15(c_64, n_161, p_161, t);
          t = (ATerm) ATmakeAppl(sym__3, b_64, c_64, n_161);
        }
      }
    else
      {
        t = o_80;
        {
          ATerm r_161 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
          t = lookup_table_0_1(b_64, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_15(c_64, r_161, t);
          t = (ATerm) ATmakeAppl(sym__2, b_64, c_64);
        }
      }
  }
  t = o_161;
  return(t);
}
ATerm end_scope_1_0 (ATerm p_138 (ATerm), ATerm t)
{
  ATerm t_161 = NULL,u_161 = NULL,v_161 = NULL,w_161 = NULL,x_161 = NULL,y_161 = NULL,z_161 = NULL;
  w_161 = t;
  t = p_138(t);
  v_161 = t;
  {
    ATerm r_80 = t;
    int s_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_162 = NULL;
        t = term_j_80;
        a_162 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_161, term_j_80);
        t = o_15(v_161, a_162, t);
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
      u_161 = ATgetFirst((ATermList) t);
      t_161 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_161, term_j_80, t_161);
  t = lookup_table_0_1(v_161, t);
  z_161 = t;
  t = term_j_80;
  x_161 = t;
  t = z_161;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(x_161, t_161, y_161, t);
  t = u_161;
  {
    static ATerm m_22 (ATerm t)
    {
      ATerm b_162 = NULL;
      b_162 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_161, b_162);
      t = x_14(v_161, b_162, t);
      return(t);
    }
    t = map_1_0(m_22, t);
  }
  t = w_161;
  return(t);
}
ATerm restore_always_2_0 (ATerm r_117 (ATerm), ATerm s_117 (ATerm), ATerm t)
{
  ATerm t_80 = t;
  int u_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_117(t);
      t = s_117(t);
      LocalPopChoice(u_80);
    }
  else
    {
      t = t_80;
      t = s_117(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm o_138 (ATerm), ATerm t)
{
  ATerm d_162 = NULL,e_162 = NULL,f_162 = NULL,g_162 = NULL,h_162 = NULL,i_162 = NULL,j_162 = NULL;
  e_162 = t;
  t = o_138(t);
  d_162 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_162, term_j_80);
  {
    ATerm v_80 = t;
    int w_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_162 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_80 = ATgetArgument(t, 0);
            ATerm y_80 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_80;
        n_162 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_162, term_j_80);
        t = o_15(d_162, n_162, t);
        LocalPopChoice(w_80);
      }
    else
      {
        t = v_80;
        t = (ATerm) ATempty;
      }
  }
  f_162 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_162, term_j_80, (ATerm) ATinsert(CheckATermList(f_162), (ATerm) ATempty));
  t = lookup_table_0_1(d_162, t);
  j_162 = t;
  t = term_j_80;
  g_162 = t;
  t = (ATerm) ATinsert(CheckATermList(f_162), (ATerm) ATempty);
  h_162 = t;
  t = j_162;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(g_162, h_162, i_162, t);
  t = e_162;
  return(t);
}
ATerm scope_2_0 (ATerm q_138 (ATerm), ATerm r_138 (ATerm), ATerm t)
{
  static ATerm n_22 (ATerm t)
  {
    t = end_scope_1_0(q_138, t);
    return(t);
  }
  t = begin_scope_1_0(q_138, t);
  t = restore_always_2_0(r_138, n_22, t);
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = term_c_80;
  return(t);
}
static ATerm r_22 (ATerm t)
{
  ATerm s_162 = NULL,t_162 = NULL,u_162 = NULL,v_162 = NULL,v_34 = NULL;
  v_162 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_162);
  s_162 = t;
  t = t_162;
  t = map_1_0(s_22, t);
  u_162 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, u_162);
  v_34 = t;
  t = SSLsetAnnotations(v_34, s_162);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm s_22 (ATerm t)
{
  ATerm i_163 = NULL,j_163 = NULL;
  j_163 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      i_163 = ATgetArgument(t, 0);
      {
        ATerm a_81 = t;
        int b_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_74 = NULL,l_74 = NULL,o_34 = NULL;
            t = SSLgetAnnotations(j_163);
            j_74 = t;
            t = i_163;
            t = map_1_0(v_22, t);
            l_74 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, l_74);
            o_34 = t;
            t = SSLsetAnnotations(o_34, j_74);
            LocalPopChoice(b_81);
          }
        else
          {
            t = a_81;
            t = j_163;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          i_163 = ATgetArgument(t, 0);
          {
            ATerm c_81 = t;
            int e_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_75 = NULL,c_75 = NULL,s_34 = NULL;
                t = SSLgetAnnotations(j_163);
                a_75 = t;
                t = i_163;
                t = map_1_0(w_22, t);
                c_75 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, c_75);
                s_34 = t;
                t = SSLsetAnnotations(s_34, a_75);
                LocalPopChoice(e_81);
              }
            else
              {
                t = c_81;
                t = j_163;
              }
          }
        }
      else
        {
          t = j_163;
        }
    }
  return(t);
}
static ATerm v_22 (ATerm t)
{
  ATerm f_81 = t;
  int i_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(i_81);
    }
  else
    {
      t = f_81;
    }
  return(t);
}
static ATerm w_22 (ATerm t)
{
  ATerm j_81 = t;
  int k_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(k_81);
    }
  else
    {
      t = j_81;
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
  ATerm q_163 = NULL,r_163 = NULL,s_163 = NULL;
  q_163 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_163;
    }
  else
    {
      static ATerm x_22 (ATerm t)
      {
        t = not_null(s_163);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_163 = ATgetFirst((ATermList) t);
          if(((s_163 != NULL) && (s_163 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_163 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_163;
      t = at_end_1_0(x_22, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm k_133 (ATerm), ATerm t)
{
  ATerm h_164 = NULL,i_164 = NULL,j_164 = NULL;
  h_164 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_164;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_164 = ATgetFirst((ATermList) t);
          j_164 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_81 = t;
        int m_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_75 = NULL,q_75 = NULL,u_75 = NULL,e_35 = NULL;
            t = SSLgetAnnotations(h_164);
            n_75 = t;
            t = i_164;
            t = k_133(t);
            q_75 = t;
            t = j_164;
            t = filter_1_0(k_133, t);
            u_75 = t;
            t = (ATerm) ATinsert(CheckATermList(u_75), q_75);
            e_35 = t;
            t = SSLsetAnnotations(e_35, n_75);
            LocalPopChoice(m_81);
          }
        else
          {
            t = l_81;
            t = j_164;
            t = filter_1_0(k_133, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_125 (ATerm), ATerm t)
{
  static ATerm z_164 (ATerm t)
  {
    ATerm w_164 = NULL,x_164 = NULL,y_164 = NULL;
    y_164 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_164 = ATgetFirst((ATermList) t);
        x_164 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_76 = NULL,j_76 = NULL,g_35 = NULL;
          t = SSLgetAnnotations(y_164);
          g_76 = t;
          t = x_164;
          t = z_164(t);
          j_76 = t;
          t = (ATerm) ATinsert(CheckATermList(j_76), w_164);
          g_35 = t;
          t = SSLsetAnnotations(g_35, g_76);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_164;
        t = y_125(t);
      }
    return(t);
  }
  t = z_164(t);
  return(t);
}
static ATerm l_165 (ATerm d_165, ATerm t)
{
  ATerm e_165 = NULL;
  t = SSL_explode_term(d_165);
  if(match_cons(t, sym__2))
    {
      ATerm n_81 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_81) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_165;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm g_165 = NULL,h_165 = NULL,i_165 = NULL;
  i_165 = t;
  if(match_cons(t, sym__2))
    {
      g_165 = ATgetArgument(t, 0);
      h_165 = ATgetArgument(t, 1);
      {
        ATerm r_81 = t;
        int s_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_23 (ATerm t)
            {
              t = h_165;
              return(t);
            }
            t = g_165;
            t = at_end_1_0(h_23, t);
            LocalPopChoice(s_81);
          }
        else
          {
            t = r_81;
            t = l_165(i_165, t);
          }
      }
    }
  else
    {
      t = l_165(i_165, t);
    }
  return(t);
}
static ATerm a_15 (ATerm o_22, ATerm k_22, ATerm t)
{
  ATerm m_165 = NULL,n_165 = NULL;
  static ATerm i_23 (ATerm t)
  {
    ATerm o_165 = NULL,p_165 = NULL,q_165 = NULL,r_165 = NULL;
    r_165 = t;
    t = SSL_explode_term(r_165);
    if(match_cons(t, sym__2))
      {
        if(((m_165 != NULL) && (m_165 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          m_165 = ATgetArgument(t, 0);
        {
          ATerm t_81 = ATgetArgument(t, 1);
          if(((ATgetType(t_81) == AT_LIST) && !(ATisEmpty(t_81))))
            {
              o_165 = ATgetFirst((ATermList) t_81);
              {
                ATerm x_81 = (ATerm) ATgetNext((ATermList) t_81);
                if(((ATgetType(x_81) != AT_LIST) || !(ATisEmpty(x_81))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, o_165, not_null(n_165));
    t = conc_0_0(t);
    p_165 = t;
    t = (ATerm) ATinsert(ATempty, p_165);
    q_165 = t;
    t = SSL_mkterm(m_165, q_165);
    return(t);
  }
  t = SSL_explode_term(o_22);
  if(match_cons(t, sym__2))
    {
      if(((m_165 != NULL) && (m_165 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        m_165 = ATgetArgument(t, 0);
      {
        ATerm y_81 = ATgetArgument(t, 1);
        if(((ATgetType(y_81) == AT_LIST) && !(ATisEmpty(y_81))))
          {
            if(((n_165 != NULL) && (n_165 != ATgetFirst((ATermList) y_81))))
              _fail(ATgetFirst((ATermList) y_81));
            else
              n_165 = ATgetFirst((ATermList) y_81);
            {
              ATerm z_81 = (ATerm) ATgetNext((ATermList) y_81);
              if(((ATgetType(z_81) != AT_LIST) || !(ATisEmpty(z_81))))
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
ATerm foldr_3_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm t)
{
  ATerm t_165 = NULL,u_165 = NULL,v_165 = NULL;
  t_165 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_165;
      t = i_132(t);
    }
  else
    {
      ATerm y_165 = NULL,z_165 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_165 = ATgetFirst((ATermList) t);
          v_165 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_165;
      t = k_132(t);
      y_165 = t;
      t = v_165;
      t = foldr_3_0(i_132, j_132, k_132, t);
      z_165 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_165, z_165);
      t = j_132(t);
    }
  return(t);
}
static ATerm j_23 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_82), term_b_82), term_a_82);
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm g_166 = NULL,h_166 = NULL;
  if(match_cons(t, sym__2))
    {
      g_166 = ATgetArgument(t, 0);
      h_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_15(g_166, h_166, t);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  ATerm i_166 = NULL,j_166 = NULL;
  j_166 = t;
  if(match_cons(t, sym_Signature_1))
    {
      i_166 = ATgetArgument(t, 0);
      {
        ATerm g_82 = t;
        int h_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_166 = NULL;
            t = i_166;
            t = filter_1_0(n_23, t);
            t = concat_0_0(t);
            l_166 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, l_166);
            LocalPopChoice(h_82);
          }
        else
          {
            t = g_82;
            t = j_166;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          i_166 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, i_166);
        }
      else
        {
          t = j_166;
        }
    }
  return(t);
}
static ATerm n_23 (ATerm t)
{
  ATerm m_166 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      m_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_166;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm c_166 = NULL,d_166 = NULL,e_166 = NULL,f_166 = NULL,p_35 = NULL;
  f_166 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_166);
  c_166 = t;
  t = d_166;
  t = foldr_3_0(j_23, k_23, l_23, t);
  e_166 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_166);
  p_35 = t;
  t = SSLsetAnnotations(p_35, c_166);
  return(t);
}
static ATerm r_23 (ATerm t)
{
  ATerm i_82 = t;
  int j_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(j_82);
    }
  else
    {
      t = i_82;
    }
  return(t);
}
static ATerm s_23 (ATerm t)
{
  ATerm i_167 = NULL,j_167 = NULL,k_167 = NULL,l_167 = NULL,m_167 = NULL;
  m_167 = t;
  if(match_cons(t, sym_LRule_1))
    {
      l_167 = ATgetArgument(t, 0);
      t = l_167;
      if(match_cons(t, sym_Rule_3))
        {
          i_167 = ATgetArgument(t, 0);
          j_167 = ATgetArgument(t, 1);
          k_167 = ATgetArgument(t, 2);
          {
            ATerm k_82 = t;
            int l_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_167 = NULL;
                t = i_167;
                t = free_vars_3_0(y_23, a_24, tboundin_3_0, t);
                q_167 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, q_167, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, i_167, j_167, k_167)));
                LocalPopChoice(l_82);
              }
            else
              {
                t = k_82;
                t = m_167;
              }
          }
        }
      else
        {
          t = m_167;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          l_167 = ATgetArgument(t, 0);
          {
            ATerm m_82 = t;
            int n_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_168 = NULL;
                t = l_167;
                t = free_vars_3_0(t_24, u_24, tboundin_3_0, t);
                o_168 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, o_168, l_167);
                LocalPopChoice(n_82);
              }
            else
              {
                t = m_82;
                t = m_167;
              }
          }
        }
      else
        {
          t = m_167;
        }
    }
  return(t);
}
static ATerm y_23 (ATerm t)
{
  ATerm r_167 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_167);
  return(t);
}
static ATerm a_24 (ATerm t)
{
  ATerm o_82 = t;
  int p_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_82);
    }
  else
    {
      t = o_82;
      {
        ATerm q_82 = t;
        int r_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm t_167 = NULL,u_167 = NULL,v_167 = NULL,w_167 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_167 = ATgetArgument(t, 0);
                      u_167 = ATgetArgument(t, 1);
                      v_167 = ATgetArgument(t, 2);
                      w_167 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_167;
                  t = map_1_0(q_24, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(v_82);
                      }
                    else
                      {
                        t = u_82;
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
  ATerm d_168 = NULL;
  ATerm w_82 = t;
  int x_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_168 = ATgetArgument(t, 0);
          {
            ATerm y_82 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_82);
      t = d_168;
    }
  else
    {
      t = w_82;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_168 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_168;
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
  ATerm i_168 = NULL;
  ATerm z_82 = t;
  int a_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_168 = ATgetArgument(t, 0);
          {
            ATerm b_83 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_83);
      t = i_168;
    }
  else
    {
      t = z_82;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_168 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_168;
    }
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm p_168 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_168 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_168);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  ATerm c_83 = t;
  int d_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_83);
    }
  else
    {
      t = c_83;
      {
        ATerm e_83 = t;
        int f_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm r_168 = NULL,s_168 = NULL,t_168 = NULL,u_168 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_168 = ATgetArgument(t, 0);
                      s_168 = ATgetArgument(t, 1);
                      t_168 = ATgetArgument(t, 2);
                      u_168 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_168;
                  t = map_1_0(v_24, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(j_83);
                      }
                    else
                      {
                        t = i_83;
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
  ATerm b_169 = NULL;
  ATerm k_83 = t;
  int l_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_169 = ATgetArgument(t, 0);
          {
            ATerm m_83 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_83);
      t = b_169;
    }
  else
    {
      t = k_83;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_169 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_169;
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
  ATerm g_169 = NULL;
  ATerm n_83 = t;
  int o_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_169 = ATgetArgument(t, 0);
          {
            ATerm p_83 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_83);
      t = g_169;
    }
  else
    {
      t = n_83;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_169 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_169;
    }
  return(t);
}
static ATerm a_25 (ATerm t)
{
  ATerm q_83 = t;
  int r_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(r_83);
    }
  else
    {
      t = q_83;
    }
  return(t);
}
static ATerm g_25 (ATerm t)
{
  ATerm q_169 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      q_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, q_169)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm c_167 = NULL,d_167 = NULL,e_167 = NULL,f_167 = NULL,v_35 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(r_23, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(s_23, t);
  {
    ATerm s_83 = t;
    int t_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_169 = NULL,m_169 = NULL,n_169 = NULL;
        l_169 = t;
        t = term_u_83;
        m_169 = t;
        t = term_v_83;
        n_169 = t;
        t = term_w_83;
        t = o_15(m_169, n_169, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = l_169;
        LocalPopChoice(t_83);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = s_83;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(a_25, t);
  f_167 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_167);
  c_167 = t;
  t = d_167;
  t = fetch_1_0(g_25, t);
  e_167 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_167);
  v_35 = t;
  t = SSLsetAnnotations(v_35, c_167);
  return(t);
}
static ATerm b_15 (ATerm y_40, ATerm z_40, ATerm t)
{
  ATerm r_169 = NULL;
  t = SSL_fputc(y_40, z_40);
  r_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_169);
  return(t);
}
static ATerm c_15 (ATerm c_25, ATerm d_25, ATerm t)
{
  ATerm s_169 = NULL;
  t = SSL_write_term_to_stream_text(c_25, d_25);
  s_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_169);
  return(t);
}
static ATerm e_15 (ATerm y_124 (ATerm), ATerm a_192, ATerm i_25, ATerm t)
{
  ATerm t_169 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_192, term_x_83);
  t = i_15(t);
  t_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_169, i_25);
  t = y_124(t);
  t = fclose_0_0(t);
  t = i_25;
  return(t);
}
static ATerm d_15 (ATerm y_24, ATerm z_24, ATerm t)
{
  ATerm u_169 = NULL;
  t = SSL_write_term_to_stream_baf(y_24, z_24);
  u_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_169);
  return(t);
}
static ATerm h_25 (ATerm t)
{
  ATerm b_170 = NULL,c_170 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_83 = ATgetArgument(t, 0);
      if(match_cons(y_83, sym_Stream_1))
        {
          b_170 = ATgetArgument(y_83, 0);
        }
      else
        _fail(t);
      c_170 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_15(b_170, c_170, t);
  return(t);
}
static ATerm j_25 (ATerm t)
{
  ATerm d_170 = NULL,e_170 = NULL,f_170 = NULL,g_170 = NULL,h_170 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_83 = ATgetArgument(t, 0);
      if(match_cons(z_83, sym_Stream_1))
        {
          g_170 = ATgetArgument(z_83, 0);
        }
      else
        _fail(t);
      h_170 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_15(g_170, h_170, t);
  d_170 = t;
  t = term_d_35;
  e_170 = t;
  t = d_170;
  if(match_cons(t, sym_Stream_1))
    {
      f_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_35, d_170);
  t = b_15(e_170, f_170, t);
  return(t);
}
ATerm output_1_0 (ATerm b_145 (ATerm), ATerm t)
{
  ATerm v_169 = NULL,w_169 = NULL;
  t = b_145(t);
  w_169 = t;
  {
    ATerm a_84 = t;
    int b_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_169 = NULL,y_169 = NULL;
        t = term_u_83;
        x_169 = t;
        t = term_c_84;
        y_169 = t;
        t = term_d_84;
        t = o_15(x_169, y_169, t);
        LocalPopChoice(b_84);
      }
    else
      {
        t = a_84;
        t = term_e_84;
      }
  }
  v_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_169, w_169);
  {
    ATerm f_84 = t;
    int g_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_169 = NULL,a_170 = NULL;
        t = term_u_83;
        z_169 = t;
        t = term_h_84;
        a_170 = t;
        t = term_i_84;
        t = o_15(z_169, a_170, t);
        t = (ATerm) ATmakeAppl(sym__2, v_169, w_169);
        LocalPopChoice(g_84);
        if(match_cons(t, sym__2))
          {
            ATerm j_84 = ATgetArgument(t, 0);
            ATerm k_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_15(h_25, v_169, w_169, t);
      }
    else
      {
        t = f_84;
        if(match_cons(t, sym__2))
          {
            ATerm l_84 = ATgetArgument(t, 0);
            ATerm m_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_15(j_25, v_169, w_169, t);
      }
  }
  return(t);
}
static ATerm v_170 (ATerm p_170, ATerm t)
{
  t = SSL_fclose(p_170);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm s_170 = NULL,t_170 = NULL;
  t_170 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_170 = ATgetArgument(t, 0);
      {
        ATerm n_84 = t;
        int o_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(s_170);
            LocalPopChoice(o_84);
          }
        else
          {
            t = n_84;
            t = v_170(t_170, t);
          }
      }
    }
  else
    {
      t = v_170(t_170, t);
    }
  return(t);
}
static ATerm f_15 (ATerm e_25, ATerm t)
{
  t = SSL_read_term_from_stream(e_25);
  return(t);
}
static ATerm g_15 (ATerm r_39, ATerm s_39, ATerm t)
{
  t = SSL_strcat(r_39, s_39);
  return(t);
}
static ATerm h_15 (ATerm a_41, ATerm b_41, ATerm t)
{
  ATerm w_170 = NULL;
  t = SSL_fopen(a_41, b_41);
  w_170 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_170);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm x_170 = NULL;
  t = SSL_stdin_stream();
  x_170 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_170);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm y_170 = NULL;
  t = SSL_stdout_stream();
  y_170 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_170);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm z_170 = NULL;
  t = SSL_stderr_stream();
  z_170 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_170);
  return(t);
}
static ATerm g_172 (ATerm f_171, ATerm t)
{
  ATerm g_171 = NULL;
  t = SSL_explode_term(f_171);
  if(match_cons(t, sym__2))
    {
      ATerm p_84 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_84) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_84 = ATgetArgument(t, 1);
        if(((ATgetType(q_84) == AT_LIST) && !(ATisEmpty(q_84))))
          {
            g_171 = ATgetFirst((ATermList) q_84);
            {
              ATerm r_84 = (ATerm) ATgetNext((ATermList) q_84);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_171;
  if(match_cons(t, sym_stderr_0))
    {
      t = g_171;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = g_171;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = g_171;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_172 (ATerm j_171, ATerm k_171, ATerm l_171, ATerm t)
{
  ATerm m_171 = NULL,n_171 = NULL,o_171 = NULL,r_171 = NULL,y_35 = NULL;
  t = SSLgetAnnotations(l_171);
  o_171 = t;
  t = j_171;
  if(match_cons(t, sym_Path_1))
    {
      r_171 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_171, k_171);
  y_35 = t;
  t = SSLsetAnnotations(y_35, o_171);
  if(match_cons(t, sym__2))
    {
      m_171 = ATgetArgument(t, 0);
      n_171 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_15(m_171, n_171, t);
  return(t);
}
static ATerm i_172 (ATerm t_171, ATerm u_171, ATerm v_171, ATerm t)
{
  ATerm w_171 = NULL,x_171 = NULL,y_171 = NULL,b_172 = NULL,z_35 = NULL;
  t = SSLgetAnnotations(v_171);
  y_171 = t;
  t = SSL_is_string(t_171);
  b_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_172, u_171);
  z_35 = t;
  t = SSLsetAnnotations(z_35, y_171);
  if(match_cons(t, sym__2))
    {
      w_171 = ATgetArgument(t, 0);
      x_171 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_15(w_171, x_171, t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm d_172 = NULL,e_172 = NULL,f_172 = NULL;
  d_172 = t;
  if(match_cons(t, sym__2))
    {
      e_172 = ATgetArgument(t, 0);
      f_172 = ATgetArgument(t, 1);
      {
        ATerm s_84 = t;
        int t_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_172(d_172, t);
            LocalPopChoice(t_84);
          }
        else
          {
            t = s_84;
            {
              ATerm u_84 = t;
              int v_84 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_172(e_172, f_172, d_172, t);
                  LocalPopChoice(v_84);
                }
              else
                {
                  t = u_84;
                  t = i_172(e_172, f_172, d_172, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_172(d_172, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_172 = NULL,l_172 = NULL,m_172 = NULL,r_172 = NULL;
  r_172 = t;
  {
    ATerm w_84 = t;
    int x_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_172, term_y_84);
        t = i_15(t);
        LocalPopChoice(x_84);
      }
    else
      {
        t = w_84;
        {
          ATerm w_76 = NULL,x_76 = NULL;
          t = term_z_84;
          x_76 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_z_84, r_172);
          t = g_15(x_76, r_172, t);
          w_76 = t;
          t = SSL_perror(w_76);
          _fail(t);
        }
      }
  }
  l_172 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_172 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_15(m_172, t);
  k_172 = t;
  t = l_172;
  t = fclose_0_0(t);
  t = k_172;
  return(t);
}
ATerm input_1_0 (ATerm c_145 (ATerm), ATerm t)
{
  ATerm a_85 = t;
  int b_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_172 = NULL,v_172 = NULL;
      t = term_u_83;
      u_172 = t;
      t = term_c_85;
      v_172 = t;
      t = term_d_85;
      t = o_15(u_172, v_172, t);
      LocalPopChoice(b_85);
    }
  else
    {
      t = a_85;
      t = term_e_85;
    }
  t = ReadFromFile_0_0(t);
  t = c_145(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_172 = NULL,x_172 = NULL,y_172 = NULL,z_172 = NULL,a_173 = NULL;
  w_172 = t;
  t = term_f_85;
  t = whoami_0_0(t);
  x_172 = t;
  t = term_k_45;
  z_172 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_85), x_172), term_g_85);
  a_173 = t;
  t = SSL_printnl(z_172, a_173);
  t = term_o_45;
  y_172 = t;
  t = SSL_exit(y_172);
  t = w_172;
  return(t);
}
static ATerm k_25 (ATerm t)
{
  ATerm c_173 = NULL;
  c_173 = t;
  if(match_string(t, "-k"))
    {
      t = c_173;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_173;
    }
  return(t);
}
static ATerm l_25 (ATerm t)
{
  ATerm d_173 = NULL,e_173 = NULL,f_173 = NULL;
  d_173 = t;
  t = SSL_string_to_int(d_173);
  e_173 = t;
  t = term_i_85;
  f_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_85, e_173);
  t = r_15(f_173, e_173, t);
  t = d_173;
  return(t);
}
static ATerm m_25 (ATerm t)
{
  t = term_j_85;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_25, l_25, m_25, t);
  return(t);
}
static ATerm n_25 (ATerm t)
{
  ATerm h_173 = NULL;
  h_173 = t;
  if(match_string(t, "-S"))
    {
      t = h_173;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_173;
    }
  return(t);
}
static ATerm w_25 (ATerm t)
{
  ATerm i_173 = NULL,j_173 = NULL;
  t = term_k_85;
  i_173 = t;
  t = term_y_47;
  j_173 = t;
  t = term_l_85;
  t = r_15(i_173, j_173, t);
  t = term_m_85;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  t = term_p_85;
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
  ATerm k_173 = NULL,l_173 = NULL,m_173 = NULL;
  k_173 = t;
  t = SSL_string_to_int(k_173);
  l_173 = t;
  t = term_k_85;
  m_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_85, l_173);
  t = r_15(m_173, l_173, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_173);
  return(t);
}
static ATerm a_26 (ATerm t)
{
  t = term_r_85;
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
  ATerm n_173 = NULL,o_173 = NULL;
  t = term_s_85;
  n_173 = t;
  t = term_f_85;
  o_173 = t;
  t = term_t_85;
  t = r_15(n_173, o_173, t);
  t = term_u_85;
  return(t);
}
static ATerm f_26 (ATerm t)
{
  t = term_v_85;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_85 = t;
  int y_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_25, w_25, x_25, t);
      LocalPopChoice(y_85);
    }
  else
    {
      t = w_85;
      {
        ATerm z_85 = t;
        int a_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_25, z_25, a_26, t);
            LocalPopChoice(a_86);
          }
        else
          {
            t = z_85;
            t = Option_3_0(d_26, e_26, f_26, t);
          }
      }
    }
  return(t);
}
static ATerm r_15 (ATerm b_59, ATerm c_59, ATerm t)
{
  ATerm p_173 = NULL,q_173 = NULL;
  t = term_u_83;
  p_173 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_83, b_59, c_59);
  t = lookup_table_0_1(p_173, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(b_59, c_59, q_173, t);
  t = (ATerm) ATmakeAppl(sym__3, term_u_83, b_59, c_59);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm u_173 = NULL,v_173 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_173 = NULL,x_173 = NULL,y_173 = NULL;
      t = term_f_85;
      t = f_0(t);
      w_173 = t;
      t = term_d_86;
      x_173 = t;
      t = term_e_86;
      y_173 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_86, term_e_86, w_173);
      t = p_15(x_173, y_173, w_173, t);
      _fail(t);
    }
  else
    {
      ATerm b_174 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_173 = ATgetFirst((ATermList) t);
          v_173 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_173;
      t = b_0(t);
      t = term_f_85;
      t = d_0(t);
      b_174 = t;
      t = (ATerm) ATinsert(CheckATermList(v_173), b_174);
    }
  return(t);
}
static ATerm h_26 (ATerm t)
{
  ATerm d_174 = NULL;
  d_174 = t;
  if(match_string(t, "-o"))
    {
      t = d_174;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = d_174;
    }
  return(t);
}
static ATerm j_26 (ATerm t)
{
  ATerm e_174 = NULL,f_174 = NULL;
  e_174 = t;
  t = term_c_84;
  f_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_84, e_174);
  t = r_15(f_174, e_174, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, e_174);
  return(t);
}
static ATerm k_26 (ATerm t)
{
  t = term_f_86;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_26, j_26, k_26, t);
  return(t);
}
static ATerm o_26 (ATerm t)
{
  ATerm h_174 = NULL;
  h_174 = t;
  if(match_string(t, "-i"))
    {
      t = h_174;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_174;
    }
  return(t);
}
static ATerm p_26 (ATerm t)
{
  ATerm i_174 = NULL,j_174 = NULL;
  i_174 = t;
  t = term_c_85;
  j_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_85, i_174);
  t = r_15(j_174, i_174, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_174);
  return(t);
}
static ATerm y_26 (ATerm t)
{
  t = term_g_86;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_26, p_26, y_26, t);
  return(t);
}
static ATerm p_15 (ATerm w_63, ATerm x_63, ATerm v_63, ATerm t)
{
  ATerm l_174 = NULL,m_174 = NULL,n_174 = NULL,o_174 = NULL,p_174 = NULL;
  l_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_63, x_63);
  {
    ATerm l_86 = t;
    int n_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_86 = ATgetArgument(t, 0);
            ATerm r_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, w_63, x_63);
        t = o_15(w_63, x_63, t);
        LocalPopChoice(n_86);
      }
    else
      {
        t = l_86;
        t = (ATerm) ATempty;
      }
  }
  m_174 = t;
  t = (ATerm) ATmakeAppl(sym__3, w_63, x_63, (ATerm) ATinsert(CheckATermList(m_174), v_63));
  t = lookup_table_0_1(w_63, t);
  p_174 = t;
  t = (ATerm) ATinsert(CheckATermList(m_174), v_63);
  n_174 = t;
  t = p_174;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(x_63, n_174, o_174, t);
  t = l_174;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm w_174 = NULL,x_174 = NULL,y_174 = NULL,z_174 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_175 = NULL,b_175 = NULL,c_175 = NULL;
      t = term_f_85;
      t = m_0(t);
      a_175 = t;
      t = term_d_86;
      b_175 = t;
      t = term_e_86;
      c_175 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_86, term_e_86, a_175);
      t = p_15(b_175, c_175, a_175, t);
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
      t = j_0(t);
      t = y_174;
      t = l_0(t);
      g_175 = t;
      t = (ATerm) ATinsert(CheckATermList(z_174), g_175);
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
  ATerm i_175 = NULL,j_175 = NULL;
  i_175 = t;
  if(match_string(t, "old"))
    {
      t = i_175;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = i_175;
    }
  t = term_v_83;
  j_175 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_83, i_175);
  t = r_15(j_175, i_175, t);
  t = term_f_85;
  return(t);
}
static ATerm b_27 (ATerm t)
{
  t = term_s_86;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_26, a_27, b_27, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_175 = NULL,m_175 = NULL,n_175 = NULL,o_175 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_85;
  t = whoami_0_0(t);
  l_175 = t;
  t = term_k_45;
  n_175 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_86), l_175);
  o_175 = t;
  t = SSL_printnl(n_175, o_175);
  t = term_o_45;
  m_175 = t;
  t = SSL_exit(m_175);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm p_175 = NULL,q_175 = NULL;
  t = term_u_83;
  p_175 = t;
  t = term_u_86;
  q_175 = t;
  t = term_v_86;
  t = o_15(p_175, q_175, t);
  return(t);
}
static ATerm j_15 (ATerm u_43, ATerm v_43, ATerm t)
{
  ATerm w_86 = t;
  int x_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_43, v_43);
      LocalPopChoice(x_86);
    }
  else
    {
      t = w_86;
      t = SSL_addr(u_43, v_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_132 (ATerm), ATerm h_132 (ATerm), ATerm t)
{
  ATerm s_175 = NULL,t_175 = NULL,u_175 = NULL;
  s_175 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_175;
      t = g_132(t);
    }
  else
    {
      ATerm x_175 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_175 = ATgetFirst((ATermList) t);
          u_175 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_175;
      t = foldr_2_0(g_132, h_132, t);
      x_175 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_175, x_175);
      t = h_132(t);
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
static ATerm e_27 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL;
  if(match_cons(t, sym__2))
    {
      g_77 = ATgetArgument(t, 0);
      h_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_15(g_77, h_77, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm a_176 = NULL,z_76 = NULL,d_77 = NULL;
  t = times_0_0(t);
  d_77 = t;
  t = SSL_explode_term(d_77);
  if(match_cons(t, sym__2))
    {
      ATerm y_86 = ATgetArgument(t, 0);
      z_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_76;
  t = foldr_2_0(c_27, e_27, t);
  a_176 = t;
  t = SSL_TicksToSeconds(a_176);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm l_176 = NULL,m_176 = NULL,n_176 = NULL;
  l_176 = t;
  if(match_cons(t, sym__2))
    {
      m_176 = ATgetArgument(t, 0);
      n_176 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_86 = t;
    int a_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_176;
        if((m_176 != t))
          {
            _fail(t);
          }
        t = l_176;
        LocalPopChoice(a_87);
      }
    else
      {
        t = z_86;
        t = (ATerm) ATmakeAppl(sym__2, m_176, n_176);
        {
          ATerm b_87 = t;
          int c_87 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(m_176, n_176);
              LocalPopChoice(c_87);
            }
          else
            {
              t = b_87;
              t = SSL_gtr(m_176, n_176);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, m_176, n_176);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_142 (ATerm), ATerm t)
{
  ATerm r_176 = NULL;
  r_176 = t;
  {
    ATerm d_87 = t;
    int e_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_176 = NULL,u_176 = NULL,v_176 = NULL;
        t = term_u_83;
        u_176 = t;
        t = term_k_85;
        v_176 = t;
        t = term_f_87;
        t = o_15(u_176, v_176, t);
        t_176 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_176, term_o_45);
        t = geq_0_0(t);
        t = r_176;
        t = c_142(t);
        LocalPopChoice(e_87);
      }
    else
      {
        t = d_87;
        t = r_176;
      }
  }
  return(t);
}
static ATerm g_27 (ATerm t)
{
  ATerm x_176 = NULL,y_176 = NULL,a_177 = NULL,b_177 = NULL;
  t = run_time_0_0(t);
  x_176 = t;
  t = term_f_85;
  t = whoami_0_0(t);
  y_176 = t;
  t = term_k_45;
  a_177 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_87), x_176), term_g_87), y_176);
  b_177 = t;
  t = SSL_printnl(a_177, b_177);
  t = (ATerm) ATmakeAppl(sym__2, term_k_45, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_87), x_176), term_g_87), y_176));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_27, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm c_177 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_47;
  c_177 = t;
  t = SSL_exit(c_177);
  return(t);
}
static ATerm q_27 (ATerm t)
{
  ATerm m_177 = NULL,n_177 = NULL;
  n_177 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_177;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_177 = ATgetArgument(t, 0);
          {
            ATerm t_77 = NULL,k_36 = NULL;
            t = SSLgetAnnotations(n_177);
            t_77 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_177);
            k_36 = t;
            t = SSLsetAnnotations(k_36, t_77);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_177;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_144 (ATerm), ATerm t)
{
  ATerm i_87 = t;
  int j_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_177 = NULL,g_177 = NULL;
      t = term_u_83;
      f_177 = t;
      t = term_k_87;
      g_177 = t;
      t = term_l_87;
      t = o_15(f_177, g_177, t);
      LocalPopChoice(j_87);
    }
  else
    {
      t = i_87;
      t = fetch_1_0(q_27, t);
    }
  t = s_144(t);
  return(t);
}
static ATerm s_15 (ATerm o_68, ATerm p_68, ATerm q_68, ATerm t)
{
  ATerm p_177 = NULL;
  t = SSL_hashtable_put(q_68, o_68, p_68);
  p_177 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, p_177);
  return(t);
}
ATerm lookup_table_0_1 (ATerm i_65, ATerm t)
{
  ATerm y_177 = NULL;
  t = table_hashtable_0_0(t);
  y_177 = t;
  {
    ATerm m_87 = t;
    int n_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_78 = NULL;
        t = y_177;
        if(match_cons(t, sym_Hashtable_1))
          {
            g_78 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_15(i_65, g_78, t);
        LocalPopChoice(n_87);
      }
    else
      {
        t = m_87;
        {
          ATerm m_78 = NULL;
          t = i_65;
          t = table_create_0_0(t);
          t = y_177;
          if(match_cons(t, sym_Hashtable_1))
            {
              m_78 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_15(i_65, m_78, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm w_68, ATerm x_68, ATerm t)
{
  ATerm b_178 = NULL;
  t = SSL_hashtable_create(w_68, x_68);
  b_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_178);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm c_178 = NULL,d_178 = NULL,e_178 = NULL,g_178 = NULL,h_178 = NULL;
  c_178 = t;
  t = term_o_87;
  g_178 = t;
  t = term_q_87;
  h_178 = t;
  t = c_178;
  t = new_hashtable_0_2(g_178, h_178, t);
  d_178 = t;
  t = c_178;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(c_178, d_178, e_178, t);
  t = c_178;
  return(t);
}
static ATerm l_15 (ATerm t_68, ATerm u_68, ATerm t)
{
  ATerm i_178 = NULL;
  t = SSL_hashtable_remove(u_68, t_68);
  i_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_178);
  return(t);
}
static ATerm m_15 (ATerm y_68, ATerm t)
{
  ATerm j_178 = NULL;
  t = SSL_hashtable_destroy(y_68);
  j_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_178);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm k_178 = NULL;
  t = SSL_table_hashtable();
  k_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_178);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm l_178 = NULL,m_178 = NULL,n_178 = NULL,o_178 = NULL;
  l_178 = t;
  t = table_hashtable_0_0(t);
  m_178 = t;
  t = lookup_table_0_1(l_178, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      o_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(o_178, t);
  t = m_178;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_15(l_178, n_178, t);
  t = l_178;
  return(t);
}
ATerm map_1_0 (ATerm h_125 (ATerm), ATerm t)
{
  static ATerm d_179 (ATerm t)
  {
    ATerm a_179 = NULL,b_179 = NULL,c_179 = NULL;
    a_179 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = a_179;
      }
    else
      {
        ATerm t_78 = NULL,w_78 = NULL,x_78 = NULL,n_36 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_179 = ATgetFirst((ATermList) t);
            c_179 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_179);
        t_78 = t;
        t = b_179;
        t = h_125(t);
        w_78 = t;
        t = c_179;
        t = d_179(t);
        x_78 = t;
        t = (ATerm) ATinsert(CheckATermList(x_78), w_78);
        n_36 = t;
        t = SSLsetAnnotations(n_36, t_78);
      }
    return(t);
  }
  t = d_179(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm g_179 = NULL,h_179 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_179 = ATgetFirst((ATermList) t);
      h_179 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_179 = NULL,n_179 = NULL;
        static ATerm u_27 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_179)), not_null(n_179));
          return(t);
        }
        t = h_179;
        t = h_0(t);
        if(((m_179 != NULL) && (m_179 != t)))
          _fail(t);
        else
          m_179 = t;
        t = g_179;
        t = g_0(t);
        if(((n_179 != NULL) && (n_179 != t)))
          _fail(t);
        else
          n_179 = t;
        t = h_179;
        t = reverse_acc_2_0(g_0, u_27, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_85;
      t = h_0(t);
    }
  return(t);
}
static ATerm w_27 (ATerm t)
{
  ATerm t_179 = NULL,u_179 = NULL,v_179 = NULL,p_36 = NULL;
  v_179 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_179);
  t_179 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_179);
  p_36 = t;
  t = SSLsetAnnotations(p_36, t_179);
  return(t);
}
static ATerm x_27 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_27 (ATerm t)
{
  ATerm x_179 = NULL;
  x_179 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_179), term_r_87);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_179 = NULL,q_179 = NULL;
  ATerm s_87 = t;
  int t_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_179 = NULL,s_179 = NULL;
      t = term_u_83;
      r_179 = t;
      t = term_u_86;
      s_179 = t;
      t = term_v_86;
      t = o_15(r_179, s_179, t);
      LocalPopChoice(t_87);
    }
  else
    {
      t = s_87;
      t = fetch_1_0(w_27, t);
    }
  t = term_u_87;
  t = echo_0_0(t);
  t = term_d_86;
  p_179 = t;
  t = term_e_86;
  q_179 = t;
  t = term_v_87;
  t = o_15(p_179, q_179, t);
  t = reverse_acc_2_0(_id, x_27, t);
  t = map_1_0(y_27, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_125 (ATerm), ATerm t)
{
  static ATerm u_180 (ATerm t)
  {
    ATerm r_180 = NULL,s_180 = NULL,t_180 = NULL;
    r_180 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_180 = ATgetFirst((ATermList) t);
        t_180 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_87 = t;
      int z_87 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_79 = NULL,y_79 = NULL,s_36 = NULL;
          t = SSLgetAnnotations(r_180);
          v_79 = t;
          t = s_180;
          t = r_125(t);
          y_79 = t;
          t = (ATerm) ATinsert(CheckATermList(t_180), y_79);
          s_36 = t;
          t = SSLsetAnnotations(s_36, v_79);
          LocalPopChoice(z_87);
        }
      else
        {
          t = x_87;
          {
            ATerm z_80 = NULL,h_81 = NULL,t_36 = NULL;
            t = SSLgetAnnotations(r_180);
            z_80 = t;
            t = t_180;
            t = u_180(t);
            h_81 = t;
            t = (ATerm) ATinsert(CheckATermList(h_81), s_180);
            t_36 = t;
            t = SSLsetAnnotations(t_36, z_80);
          }
        }
    }
    return(t);
  }
  t = u_180(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_180 = NULL,z_180 = NULL,a_181 = NULL;
  y_180 = t;
  {
    ATerm a_88 = t;
    int b_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_180;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm c_88 = ATgetFirst((ATermList) t);
                ATerm d_88 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_180;
          }
        LocalPopChoice(b_88);
      }
    else
      {
        t = a_88;
        t = (ATerm) ATinsert(ATempty, y_180);
      }
  }
  z_180 = t;
  t = term_e_84;
  a_181 = t;
  t = SSL_printnl(a_181, z_180);
  t = y_180;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_181 = NULL,f_181 = NULL;
  t = term_u_83;
  e_181 = t;
  t = term_u_86;
  f_181 = t;
  t = term_v_86;
  t = o_15(e_181, f_181, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_15 (ATerm r_68, ATerm s_68, ATerm t)
{
  t = SSL_hashtable_get(s_68, r_68);
  return(t);
}
static ATerm o_15 (ATerm p_65, ATerm q_65, ATerm t)
{
  ATerm g_181 = NULL;
  t = lookup_table_0_1(p_65, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_15(q_65, g_181, t);
  return(t);
}
static ATerm z_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_28 (ATerm t)
{
  ATerm i_181 = NULL,j_181 = NULL;
  t = term_e_88;
  i_181 = t;
  t = term_f_85;
  j_181 = t;
  t = term_f_88;
  t = r_15(i_181, j_181, t);
  return(t);
}
static ATerm c_28 (ATerm t)
{
  t = term_g_88;
  return(t);
}
static ATerm e_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_28 (ATerm t)
{
  ATerm k_181 = NULL,l_181 = NULL,m_181 = NULL,n_181 = NULL;
  t = term_e_88;
  m_181 = t;
  t = term_f_85;
  n_181 = t;
  t = term_f_88;
  t = r_15(m_181, n_181, t);
  t = term_h_88;
  k_181 = t;
  t = term_f_85;
  l_181 = t;
  t = term_i_88;
  t = r_15(k_181, l_181, t);
  t = term_j_88;
  return(t);
}
static ATerm g_28 (ATerm t)
{
  t = term_k_88;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_88 = t;
  int m_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_27, a_28, c_28, t);
      LocalPopChoice(m_88);
    }
  else
    {
      t = l_88;
      t = Option_3_0(e_28, f_28, g_28, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_103 (ATerm), ATerm a_104 (ATerm), ATerm t)
{
  ATerm o_181 = NULL,p_181 = NULL,q_181 = NULL,r_181 = NULL,s_181 = NULL,t_181 = NULL,y_36 = NULL;
  t_181 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_181 = ATgetFirst((ATermList) t);
      q_181 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_181);
  o_181 = t;
  t = p_181;
  t = z_103(t);
  r_181 = t;
  t = q_181;
  t = a_104(t);
  s_181 = t;
  t = (ATerm) ATinsert(CheckATermList(s_181), r_181);
  y_36 = t;
  t = SSLsetAnnotations(y_36, o_181);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_146 (ATerm), ATerm t)
{
  ATerm y_181 = NULL,z_181 = NULL,a_182 = NULL,b_182 = NULL,d_182 = NULL,e_182 = NULL,c_37 = NULL;
  y_181 = t;
  {
    ATerm n_88 = t;
    int o_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_88;
        t = v_146(t);
        LocalPopChoice(o_88);
      }
    else
      {
        t = n_88;
      }
  }
  t = y_181;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_182 = ATgetFirst((ATermList) t);
      b_182 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_181);
  z_181 = t;
  t = term_u_86;
  e_182 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_86, a_182);
  t = r_15(e_182, a_182, t);
  t = b_182;
  {
    static ATerm o_182 (ATerm t)
    {
      ATerm q_88 = t;
      int r_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_88 = t;
          int t_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_182 = NULL;
              h_182 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_182;
              LocalPopChoice(t_88);
            }
          else
            {
              t = s_88;
              t = v_146(t);
              t = Cons_2_0(_id, o_182, t);
            }
          LocalPopChoice(r_88);
        }
      else
        {
          t = q_88;
          {
            ATerm k_182 = NULL,l_182 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_182 = ATgetFirst((ATermList) t);
                l_182 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_182), (ATerm) ATmakeAppl(sym_Undefined_1, k_182));
          }
        }
      return(t);
    }
    t = o_182(t);
  }
  d_182 = t;
  t = (ATerm) ATinsert(CheckATermList(d_182), (ATerm) ATmakeAppl(sym_Program_1, a_182));
  c_37 = t;
  t = SSLsetAnnotations(c_37, z_181);
  return(t);
}
static ATerm l_28 (ATerm t)
{
  ATerm b_183 = NULL;
  b_183 = t;
  if(match_string(t, "--help"))
    {
      t = b_183;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_183;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_183;
        }
    }
  return(t);
}
static ATerm n_28 (ATerm t)
{
  ATerm c_183 = NULL,d_183 = NULL;
  t = term_k_87;
  c_183 = t;
  t = term_f_85;
  d_183 = t;
  t = term_u_88;
  t = r_15(c_183, d_183, t);
  t = term_v_88;
  return(t);
}
static ATerm q_28 (ATerm t)
{
  t = term_x_88;
  return(t);
}
static ATerm w_28 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_146 (ATerm), ATerm t)
{
  ATerm t_182 = NULL,u_182 = NULL,v_182 = NULL,w_182 = NULL,x_182 = NULL,y_182 = NULL,z_182 = NULL,a_183 = NULL;
  v_182 = t;
  t = term_d_86;
  w_182 = t;
  t = term_y_88;
  t = lookup_table_0_1(w_182, t);
  a_183 = t;
  t = term_e_86;
  x_182 = t;
  t = (ATerm) ATempty;
  y_182 = t;
  t = a_183;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(x_182, y_182, z_182, t);
  t = v_182;
  {
    static ATerm j_28 (ATerm t)
    {
      ATerm a_89 = t;
      int b_89 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_146(t);
          LocalPopChoice(b_89);
        }
      else
        {
          t = a_89;
          {
            ATerm c_89 = t;
            int d_89 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_28, n_28, q_28, t);
                LocalPopChoice(d_89);
              }
            else
              {
                t = c_89;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_28, t);
  }
  {
    ATerm e_89 = t;
    int f_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_183 = NULL;
        o_183 = t;
        {
          ATerm g_89 = t;
          int h_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_81 = NULL;
              t = o_183;
              {
                ATerm i_89 = t;
                int j_89 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm p_81 = NULL,q_81 = NULL;
                    t = term_u_83;
                    p_81 = t;
                    t = term_k_87;
                    q_81 = t;
                    t = term_l_87;
                    t = o_15(p_81, q_81, t);
                    LocalPopChoice(j_89);
                  }
                else
                  {
                    t = i_89;
                    t = fetch_1_0(w_28, t);
                  }
              }
              t = o_183;
              t = default_system_usage_0_0(t);
              t = term_y_47;
              o_81 = t;
              t = SSL_exit(o_81);
              LocalPopChoice(h_89);
            }
          else
            {
              t = g_89;
              {
                ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL;
                t = term_u_83;
                v_81 = t;
                t = term_e_88;
                w_81 = t;
                t = term_k_89;
                t = o_15(v_81, w_81, t);
                t = o_183;
                t = default_system_about_0_0(t);
                t = term_y_47;
                u_81 = t;
                t = SSL_exit(u_81);
              }
            }
        }
        LocalPopChoice(f_89);
      }
    else
      {
        t = e_89;
        {
          ATerm l_89 = t;
          int m_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_183 = NULL,q_183 = NULL,r_183 = NULL;
              static ATerm x_28 (ATerm t)
              {
                ATerm s_183 = NULL,t_183 = NULL,u_183 = NULL,j_37 = NULL;
                u_183 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_183 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_183);
                s_183 = t;
                t = t_183;
                if(((t_182 != NULL) && (t_182 != t)))
                  _fail(t);
                else
                  t_182 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_183);
                j_37 = t;
                t = SSLsetAnnotations(j_37, s_183);
                return(t);
              }
              t = fetch_1_0(x_28, t);
              t = term_k_45;
              q_183 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_182)), term_n_89);
              r_183 = t;
              t = SSL_printnl(q_183, r_183);
              t = (ATerm) ATmakeAppl(sym__2, term_k_45, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_182)), term_n_89));
              t = default_system_usage_0_0(t);
              t = term_o_45;
              p_183 = t;
              t = SSL_exit(p_183);
              LocalPopChoice(m_89);
            }
          else
            {
              t = l_89;
            }
        }
      }
  }
  u_182 = t;
  t = term_d_86;
  t = table_destroy_0_0(t);
  t = u_182;
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_144 (ATerm), ATerm v_144 (ATerm), ATerm w_144 (ATerm), ATerm x_144 (ATerm), ATerm t)
{
  ATerm z_183 = NULL,a_184 = NULL,b_184 = NULL,c_184 = NULL,d_184 = NULL;
  t = parse_options_1_0(u_144, t);
  z_183 = t;
  t = term_o_89;
  t = table_create_0_0(t);
  t = term_o_89;
  a_184 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_o_89, term_p_89, z_183);
  t = lookup_table_0_1(a_184, t);
  d_184 = t;
  t = term_p_89;
  b_184 = t;
  t = d_184;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_184 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(b_184, z_183, c_184, t);
  t = z_183;
  t = w_144(t);
  {
    ATerm q_89 = t;
    int r_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_144, t);
        LocalPopChoice(r_89);
      }
    else
      {
        t = q_89;
        {
          ATerm s_89 = t;
          int t_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_144(t);
              t = report_success_0_0(t);
              LocalPopChoice(t_89);
            }
          else
            {
              t = s_89;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_28 (ATerm t)
{
  ATerm u_89 = t;
  int v_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(v_89);
    }
  else
    {
      t = u_89;
      {
        ATerm w_89 = t;
        int x_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
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
                  t = output_option_0_0(t);
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
                        t = Option_3_0(a_29, b_29, g_29, t);
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
                              t = verbose_option_0_0(t);
                              LocalPopChoice(d_90);
                            }
                          else
                            {
                              t = c_90;
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
static ATerm z_28 (ATerm t)
{
  t = input_1_0(r_29, t);
  return(t);
}
static ATerm a_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_29 (ATerm t)
{
  ATerm f_184 = NULL,g_184 = NULL;
  t = term_h_84;
  f_184 = t;
  t = term_f_85;
  g_184 = t;
  t = term_e_90;
  t = r_15(f_184, g_184, t);
  t = term_f_90;
  return(t);
}
static ATerm g_29 (ATerm t)
{
  t = term_g_90;
  return(t);
}
static ATerm r_29 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_28, default_usage_0_0, _id, z_28, t);
  return(t);
}

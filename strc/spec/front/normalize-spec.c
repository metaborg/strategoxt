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
ATerm term_d_90;
ATerm term_c_90;
ATerm term_b_90;
ATerm term_m_89;
ATerm term_i_89;
ATerm term_h_89;
ATerm term_c_89;
ATerm term_r_88;
ATerm term_q_88;
ATerm term_p_88;
ATerm term_o_88;
ATerm term_j_88;
ATerm term_e_88;
ATerm term_d_88;
ATerm term_c_88;
ATerm term_b_88;
ATerm term_a_88;
ATerm term_z_87;
ATerm term_y_87;
ATerm term_r_87;
ATerm term_p_87;
ATerm term_m_87;
ATerm term_l_87;
ATerm term_k_87;
ATerm term_h_87;
ATerm term_g_87;
ATerm term_c_87;
ATerm term_b_87;
ATerm term_a_87;
ATerm term_n_86;
ATerm term_m_86;
ATerm term_l_86;
ATerm term_k_86;
ATerm term_f_86;
ATerm term_e_86;
ATerm term_d_86;
ATerm term_c_86;
ATerm term_x_85;
ATerm term_w_85;
ATerm term_v_85;
ATerm term_u_85;
ATerm term_t_85;
ATerm term_s_85;
ATerm term_r_85;
ATerm term_q_85;
ATerm term_p_85;
ATerm term_o_85;
ATerm term_n_85;
ATerm term_m_85;
ATerm term_l_85;
ATerm term_i_85;
ATerm term_h_85;
ATerm term_f_85;
ATerm term_a_85;
ATerm term_x_84;
ATerm term_u_84;
ATerm term_a_84;
ATerm term_z_83;
ATerm term_w_83;
ATerm term_v_83;
ATerm term_u_83;
ATerm term_p_83;
ATerm term_o_83;
ATerm term_n_83;
ATerm term_m_83;
ATerm term_x_81;
ATerm term_w_81;
ATerm term_v_81;
ATerm term_l_80;
ATerm term_k_80;
ATerm term_i_80;
ATerm term_h_80;
ATerm term_g_80;
ATerm term_y_79;
ATerm term_l_73;
ATerm term_k_73;
ATerm term_j_73;
ATerm term_y_72;
ATerm term_c_72;
ATerm term_k_71;
ATerm term_b_71;
ATerm term_q_64;
ATerm term_k_64;
ATerm term_m_63;
ATerm term_l_63;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_d_57;
ATerm term_a_57;
ATerm term_n_56;
ATerm term_k_56;
ATerm term_x_55;
ATerm term_w_55;
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
ATerm term_j_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_b_45;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_r_44;
ATerm term_q_44;
ATerm term_m_44;
ATerm term_l_44;
ATerm term_k_44;
ATerm term_i_44;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_u_43;
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
ATerm term_y_33;
ATerm term_x_33;
ATerm term_w_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_z_32;
ATerm term_m_32;
ATerm term_l_32;
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
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_Op_2, term_l_32, (ATerm) ATempty);
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
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(sym_Op_2, term_x_33, (ATerm) ATempty);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_34);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_33);
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
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_43);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_43);
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
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_45);
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
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
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_54);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_55);
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
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scope", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_63);
  ATprotect(&(term_k_64));
  term_k_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_b_71));
  term_b_71 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] Your condition has been removed from the original dynamic rule: ", 0, ATtrue));
  ATprotect(&(term_k_71));
  term_k_71 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] rule undefining doesn't allow a condition strategy anymore", 0, ATtrue));
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(ATmakeSymbol("DROverrideLabelsNeeded", 0, ATtrue));
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(sym__2, term_c_72, (ATerm) ATempty);
  ATprotect(&(term_j_73));
  term_j_73 = (ATerm) ATmakeAppl(ATmakeSymbol("c_1", 0, ATtrue));
  ATprotect(&(term_k_73));
  term_k_73 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_73);
  ATprotect(&(term_l_73));
  term_l_73 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_k_73);
  ATprotect(&(term_y_79));
  term_y_79 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_g_80));
  term_g_80 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_i_80));
  term_i_80 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_80);
  ATprotect(&(term_k_80));
  term_k_80 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_l_80));
  term_l_80 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_80);
  ATprotect(&(term_v_81));
  term_v_81 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_w_81));
  term_w_81 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_x_81));
  term_x_81 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_m_83));
  term_m_83 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_o_83));
  term_o_83 = (ATerm) ATmakeAppl(sym__2, term_m_83, term_n_83);
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_83));
  term_u_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(sym__2, term_m_83, term_u_83);
  ATprotect(&(term_w_83));
  term_w_83 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_83));
  term_z_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_84));
  term_a_84 = (ATerm) ATmakeAppl(sym__2, term_m_83, term_z_83);
  ATprotect(&(term_u_84));
  term_u_84 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_84));
  term_x_84 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_a_85));
  term_a_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeAppl(sym__2, term_m_83, term_a_85);
  ATprotect(&(term_h_85));
  term_h_85 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_85));
  term_i_85 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_85));
  term_l_85 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_85));
  term_m_85 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_85));
  term_n_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_85));
  term_o_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_85));
  term_p_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_85));
  term_q_85 = (ATerm) ATmakeAppl(sym__2, term_p_85, term_y_47);
  ATprotect(&(term_r_85));
  term_r_85 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_47);
  ATprotect(&(term_s_85));
  term_s_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_85));
  term_t_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(sym__2, term_u_85, term_i_85);
  ATprotect(&(term_w_85));
  term_w_85 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_85));
  term_x_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_86));
  term_c_86 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_86));
  term_d_86 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_86));
  term_f_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_86));
  term_k_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_l_86));
  term_l_86 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_86));
  term_m_86 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_86));
  term_n_86 = (ATerm) ATmakeAppl(sym__2, term_m_83, term_m_86);
  ATprotect(&(term_a_87));
  term_a_87 = (ATerm) ATmakeAppl(sym__2, term_m_83, term_p_85);
  ATprotect(&(term_b_87));
  term_b_87 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_87));
  term_c_87 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_87));
  term_g_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_87));
  term_h_87 = (ATerm) ATmakeAppl(sym__2, term_m_83, term_g_87);
  ATprotect(&(term_k_87));
  term_k_87 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_l_87));
  term_l_87 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_m_87));
  term_m_87 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_87));
  term_p_87 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_87));
  term_r_87 = (ATerm) ATmakeAppl(sym__2, term_c_86, term_d_86);
  ATprotect(&(term_y_87));
  term_y_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_87));
  term_z_87 = (ATerm) ATmakeAppl(sym__2, term_y_87, term_i_85);
  ATprotect(&(term_a_88));
  term_a_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_88));
  term_b_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_88));
  term_c_88 = (ATerm) ATmakeAppl(sym__2, term_b_88, term_i_85);
  ATprotect(&(term_d_88));
  term_d_88 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_88));
  term_e_88 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_j_88));
  term_j_88 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_88));
  term_o_88 = (ATerm) ATmakeAppl(sym__2, term_g_87, term_i_85);
  ATprotect(&(term_p_88));
  term_p_88 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_88));
  term_q_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_88));
  term_r_88 = (ATerm) ATmakeAppl(sym__3, term_c_86, term_d_86, (ATerm) ATempty);
  ATprotect(&(term_c_89));
  term_c_89 = (ATerm) ATmakeAppl(sym__2, term_m_83, term_y_87);
  ATprotect(&(term_h_89));
  term_h_89 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_89));
  term_i_89 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_89));
  term_m_89 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_90));
  term_b_90 = (ATerm) ATmakeAppl(sym__2, term_z_83, term_i_85);
  ATprotect(&(term_c_90));
  term_c_90 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_90));
  term_d_90 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm r_117 (ATerm), ATerm t);
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
static ATerm i_13 (ATerm k_151 (ATerm), ATerm d_85, ATerm b_85, ATerm c_85, ATerm g_85, ATerm e_85, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm k_151 (ATerm), ATerm t);
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
ATerm pat_td_1_0 (ATerm t_149 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm k_13 (ATerm u_75, ATerm v_75, ATerm w_75, ATerm t);
static ATerm g_31 (ATerm o_30, ATerm t);
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
static ATerm l_13 (ATerm h_71, ATerm i_71, ATerm j_71, ATerm t);
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
static ATerm m_13 (ATerm j_151 (ATerm), ATerm k_84, ATerm h_84, ATerm i_84, ATerm r_84, ATerm v_84, ATerm w_84, ATerm t);
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
ATerm split_dynamic_rule_old_1_0 (ATerm l_151 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_13 (ATerm k_85, ATerm j_85, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm h_62 (ATerm v_61, ATerm t);
static ATerm i_62 (ATerm z_61, ATerm t);
static ATerm q_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm w_65 (ATerm a_65, ATerm t);
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
ATerm RenameVarTerm_2_0 (ATerm p_151 (ATerm), ATerm q_151 (ATerm), ATerm t);
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
ATerm SplitDynamicRule_1_0 (ATerm r_151 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm DesugarDynRuleDef_0_0 (ATerm t);
ATerm split_dynamic_rule_0_0 (ATerm t);
static ATerm m_11 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm s_151 (ATerm), ATerm t);
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
static ATerm b_14 (ATerm f_89, ATerm e_89, ATerm t);
ATerm repeat_2_0 (ATerm r_116 (ATerm), ATerm s_116 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm n_125 (ATerm), ATerm t);
static ATerm y_14 (ATerm t);
ATerm collect_om_2_0 (ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm t);
ATerm partition_1_0 (ATerm o_132 (ATerm), ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm v_118 (ATerm), ATerm t);
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
ATerm DRDef_LHS_1_0 (ATerm v_151 (ATerm), ATerm t);
static ATerm t_136 (ATerm i_135, ATerm j_135, ATerm k_135, ATerm l_135, ATerm t_135, ATerm u_135, ATerm v_135, ATerm t);
static ATerm p_17 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm s_123 (ATerm), ATerm t);
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
ATerm tboundin_3_0 (ATerm o_150 (ATerm), ATerm p_150 (ATerm), ATerm q_150 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm x_150 (ATerm), ATerm t);
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
static ATerm k_14 (ATerm o_128 (ATerm), ATerm k_31, ATerm j_31, ATerm t);
static ATerm l_14 (ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm o_31, ATerm n_31, ATerm t);
static ATerm m_14 (ATerm j_128 (ATerm), ATerm i_31, ATerm h_31, ATerm t);
ATerm genzip_4_0 (ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm t);
static ATerm n_20 (ATerm t);
static ATerm o_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm r_14 (ATerm z_705, ATerm e_706, ATerm h_70, ATerm t);
ATerm while_not_2_0 (ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm t);
ATerm for_3_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm t);
static ATerm q_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm x_158 (ATerm r_157, ATerm s_157, ATerm t_157, ATerm t);
static ATerm w_20 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm h_21 (ATerm t);
static ATerm i_21 (ATerm t);
static ATerm j_21 (ATerm t);
static ATerm l_21 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm g_22 (ATerm t);
ATerm free_vars_3_0 (ATerm b_148 (ATerm), ATerm c_148 (ATerm), ATerm d_148 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm s_117 (ATerm), ATerm t);
static ATerm v_14 (ATerm o_63, ATerm p_63, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm j_119 (ATerm), ATerm t);
static ATerm w_14 (ATerm n_137 (ATerm), ATerm m_45, ATerm k_45, ATerm t);
static ATerm i_22 (ATerm t);
static ATerm l_22 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm x_14 (ATerm i_63, ATerm j_63, ATerm t);
ATerm end_scope_1_0 (ATerm k_137 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm j_137 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm l_137 (ATerm), ATerm m_137 (ATerm), ATerm t);
static ATerm q_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm v_22 (ATerm t);
static ATerm w_22 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_132 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm u_124 (ATerm), ATerm t);
static ATerm f_165 (ATerm x_164, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm a_15 (ATerm o_22, ATerm k_22, ATerm t);
ATerm foldr_3_0 (ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm t);
static ATerm l_23 (ATerm t);
static ATerm m_23 (ATerm t);
static ATerm n_23 (ATerm t);
static ATerm o_23 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm s_24 (ATerm t);
static ATerm t_24 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm w_24 (ATerm t);
static ATerm z_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm b_25 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm b_15 (ATerm c_41, ATerm d_41, ATerm t);
static ATerm c_15 (ATerm g_25, ATerm h_25, ATerm t);
static ATerm e_15 (ATerm u_123 (ATerm), ATerm q_190, ATerm m_25, ATerm t);
static ATerm d_15 (ATerm c_25, ATerm d_25, ATerm t);
static ATerm e_25 (ATerm t);
static ATerm f_25 (ATerm t);
ATerm output_1_0 (ATerm v_143 (ATerm), ATerm t);
static ATerm p_170 (ATerm j_170, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm f_15 (ATerm i_25, ATerm t);
static ATerm g_15 (ATerm v_39, ATerm w_39, ATerm t);
static ATerm h_15 (ATerm e_41, ATerm f_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm a_172 (ATerm z_170, ATerm t);
static ATerm b_172 (ATerm d_171, ATerm e_171, ATerm f_171, ATerm t);
static ATerm c_172 (ATerm n_171, ATerm o_171, ATerm p_171, ATerm t);
static ATerm i_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm w_143 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm j_25 (ATerm t);
static ATerm k_25 (ATerm t);
static ATerm l_25 (ATerm t);
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
static ATerm r_15 (ATerm i_58, ATerm j_58, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm h_26 (ATerm t);
static ATerm j_26 (ATerm t);
static ATerm k_26 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm y_26 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm p_15 (ATerm d_63, ATerm e_63, ATerm c_63, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm z_26 (ATerm t);
static ATerm a_27 (ATerm t);
static ATerm b_27 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm j_15 (ATerm y_43, ATerm z_43, ATerm t);
ATerm foldr_2_0 (ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_27 (ATerm t);
static ATerm e_27 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_140 (ATerm), ATerm t);
static ATerm g_27 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm q_27 (ATerm t);
ATerm need_help_1_0 (ATerm m_143 (ATerm), ATerm t);
static ATerm s_15 (ATerm i_67, ATerm j_67, ATerm k_67, ATerm t);
ATerm lookup_table_0_1 (ATerm p_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_67, ATerm r_67, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm l_15 (ATerm n_67, ATerm o_67, ATerm t);
static ATerm m_15 (ATerm s_67, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm d_124 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm y_27 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_124 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm t_15 (ATerm l_67, ATerm m_67, ATerm t);
static ATerm o_15 (ATerm w_64, ATerm x_64, ATerm t);
static ATerm z_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_145 (ATerm), ATerm t);
static ATerm l_28 (ATerm t);
static ATerm n_28 (ATerm t);
static ATerm q_28 (ATerm t);
static ATerm w_28 (ATerm t);
ATerm parse_options_1_0 (ATerm o_145 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_143 (ATerm), ATerm p_143 (ATerm), ATerm q_143 (ATerm), ATerm r_143 (ATerm), ATerm t);
static ATerm y_28 (ATerm t);
static ATerm c_29 (ATerm t);
static ATerm d_29 (ATerm t);
static ATerm e_29 (ATerm t);
static ATerm j_29 (ATerm t);
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
ATerm topdown_1_0 (ATerm r_117 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(r_117, t);
    return(t);
  }
  t = r_117(t);
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
  int e_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_31);
    }
  else
    {
      t = b_31;
      {
        ATerm f_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_31);
          }
        else
          {
            t = f_31;
            {
              ATerm m_31 = t;
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
                  t = m_31;
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
    int k_32 = stack_ptr;
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
        LocalPopChoice(k_32);
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
    t = (ATerm) ATmakeAppl(sym__2, s_4, term_m_32);
    {
      ATerm n_32 = t;
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
          t = n_32;
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
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, m_2, (ATerm) ATmakeAppl(sym_Op_2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, term_m_32), i_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, b_9, c_9, e_9, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_2), i_9), term_m_32, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_d_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, b_9)))), l_2), term_m_32)), (ATerm) ATmakeAppl(sym_Seq_2, m_9, term_t_29)))));
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
static ATerm i_13 (ATerm k_151 (ATerm), ATerm d_85, ATerm b_85, ATerm c_85, ATerm g_85, ATerm e_85, ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,u_9 = NULL;
  t = new_0_0(t);
  s_9 = t;
  t = g_85;
  t = dummify_0_0(t);
  r_9 = t;
  {
    ATerm i_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_9;
        if((g_85 != t))
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
  t = d_85;
  t = k_151(t);
  u_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, u_9, r_9)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, d_85, b_85, c_85, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_9), g_85), term_m_32, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_85)))), t_9), term_p_33)), (ATerm) ATmakeAppl(sym_Seq_2, e_85, term_t_29))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm k_151 (ATerm), ATerm t)
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
  t = i_13(k_151, z_9, f_10, i_10, j_10, s_10, t);
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
  t = term_y_33;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,v_2 = NULL;
  f_14 = t;
  t = SSL_explode_term(f_14);
  if(match_cons(t, sym__2))
    {
      ATerm a_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_34 = ATgetArgument(t, 1);
        if(((ATgetType(c_34) == AT_LIST) && !(ATisEmpty(c_34))))
          {
            g_14 = ATgetFirst((ATermList) c_34);
            {
              ATerm e_34 = (ATerm) ATgetNext((ATermList) c_34);
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
  t = term_y_33;
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
ATerm pat_td_1_0 (ATerm t_149 (ATerm), ATerm t)
{
  ATerm e_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_149(t);
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
                  t = pat_td_1_0(t_149, t);
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
                      t = pat_td_1_0(t_149, t);
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
                        t = pat_td_1_0(t_149, t);
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
                          t = pat_td_1_0(t_149, t);
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
                              t = pat_td_1_0(t_149, t);
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
                        t = pat_td_1_0(t_149, t);
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
      ATerm i_29 = NULL,k_29 = NULL,l_29 = NULL,o_8 = NULL;
      l_29 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_29);
      i_29 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_29);
      o_8 = t;
      t = SSLsetAnnotations(o_8, i_29);
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
static ATerm k_13 (ATerm u_75, ATerm v_75, ATerm w_75, ATerm t)
{
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,g_29 = NULL,h_29 = NULL,q_8 = NULL;
  t = w_75;
  t = fetch_1_0(j_2, t);
  t = w_75;
  t = genzip_4_0(n_2, o_2, p_2, LiftPrimArg_0_0, t);
  h_29 = t;
  if(match_cons(t, sym__2))
    {
      z_28 = ATgetArgument(t, 0);
      a_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_29);
  v_28 = t;
  t = z_28;
  t = concat_0_0(t);
  b_29 = t;
  t = a_29;
  t = genzip_4_0(q_2, r_2, s_2, _id, t);
  g_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_29, g_29);
  q_8 = t;
  t = SSLsetAnnotations(q_8, v_28);
  if(match_cons(t, sym__2))
    {
      s_28 = ATgetArgument(t, 0);
      {
        ATerm g_38 = ATgetArgument(t, 1);
        if(match_cons(g_38, sym__2))
          {
            t_28 = ATgetArgument(g_38, 0);
            u_28 = ATgetArgument(g_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_28), (ATerm) ATmakeAppl(sym_CallT_3, u_75, v_75, u_28)));
  return(t);
}
static ATerm g_31 (ATerm o_30, ATerm t)
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
            t = g_31(z_30, t);
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
      t = g_31(z_30, t);
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
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      i_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_41;
  if(match_cons(t, sym_StratRule_3))
    {
      j_41 = ATgetArgument(t, 0);
      k_41 = ATgetArgument(t, 1);
      l_41 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, k_41), (ATerm) ATmakeAppl(sym_Where_1, l_41)), j_41));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          j_41 = ATgetArgument(t, 0);
          k_41 = ATgetArgument(t, 1);
          l_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_41;
      t = pureterm_0_0(t);
      t = k_41;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, k_41)), (ATerm) ATmakeAppl(sym_Where_1, l_41)), (ATerm) ATmakeAppl(sym_Match_1, j_41)));
    }
  return(t);
}
static ATerm l_13 (ATerm h_71, ATerm i_71, ATerm j_71, ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,g_42 = NULL;
  t = new_0_0(t);
  c_42 = t;
  t = h_71;
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
  t = i_71;
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
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_42), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_42, g_42, (ATerm) ATmakeAppl(sym_Seq_2, j_71, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(y_41), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_41), not_null(a_42), term_u_29))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_42)), (ATerm) ATmakeAppl(sym_Var_1, c_42))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm q_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_39 = t;
      int t_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL,d_43 = NULL;
          b_43 = t;
          if(match_cons(t, sym_SRule_1))
            {
              c_43 = ATgetArgument(t, 0);
              t = c_43;
              if(match_cons(t, sym_Rule_3))
                {
                  y_42 = ATgetArgument(t, 0);
                  z_42 = ATgetArgument(t, 1);
                  a_43 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = b_43;
              t = l_13(y_42, z_42, a_43, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm b_20 = NULL,m_20 = NULL,j_22 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  c_43 = ATgetArgument(t, 0);
                  d_43 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(b_43);
              b_20 = t;
              t = d_43;
              t = desugarRule_0_0(t);
              m_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, c_43, m_20);
              j_22 = t;
              t = SSLsetAnnotations(j_22, b_20);
            }
          LocalPopChoice(t_39);
        }
      else
        {
          t = s_39;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(r_39);
    }
  else
    {
      t = q_39;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm u_39 = t;
  int x_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(x_39);
    }
  else
    {
      t = u_39;
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
                                  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
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
                                          u_44 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, t_44, u_44);
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
        ATerm y_40 = t;
        int b_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_41);
          }
        else
          {
            t = y_40;
            {
              ATerm g_41 = t;
              int m_41 = stack_ptr;
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
                  LocalPopChoice(m_41);
                }
              else
                {
                  t = g_41;
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
static ATerm m_13 (ATerm j_151 (ATerm), ATerm k_84, ATerm h_84, ATerm i_84, ATerm r_84, ATerm v_84, ATerm w_84, ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,r_46 = NULL,s_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,d_47 = NULL,e_47 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_84, term_m_32);
  {
    ATerm e_43 = t;
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
        t = e_43;
      }
  }
  t = term_f_43;
  e_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_43, k_84);
  t = g_15(e_47, k_84, t);
  g_46 = t;
  t = term_g_43;
  d_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_43, k_84);
  t = g_15(d_47, k_84, t);
  h_46 = t;
  t = new_0_0(t);
  i_46 = t;
  t = h_84;
  t = map_1_0(x_3, t);
  j_46 = t;
  t = i_84;
  t = map_1_0(y_3, t);
  k_46 = t;
  t = new_0_0(t);
  l_46 = t;
  t = r_84;
  t = dummify_0_0(t);
  s_46 = t;
  {
    ATerm h_43 = t;
    int i_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_46;
        if((r_84 != t))
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
  t = (ATerm) ATmakeAppl(sym__2, v_84, w_84);
  t = free_vars_3_0(i_4, j_4, tboundin_3_0, t);
  t = filter_1_0(v_4, t);
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_46, y_46);
  t = diff_0_0(t);
  z_46 = t;
  t = new_0_0(t);
  a_47 = t;
  t = k_84;
  t = j_151(t);
  b_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, b_47, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_33, (ATerm) ATinsert(CheckATermList(z_46), (ATerm) ATmakeAppl(sym_Str_1, a_47)))), s_46)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, h_46, h_84, i_84, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_33, (ATerm) ATinsert(CheckATermList(z_46), (ATerm) ATmakeAppl(sym_Str_1, a_47)))), r_84)), v_84, (ATerm) ATmakeAppl(sym_Seq_2, term_p_43, w_84)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_46, h_84, i_84, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_46), r_84), (ATerm)ATmakeAppl(sym_Var_1, i_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_84)))), r_46), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_46), j_46, k_46), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_43), (ATerm) ATmakeAppl(sym_Var_1, l_46)))))), (ATerm) ATmakeAppl(sym_Var_1, i_46)))))), (ATerm) ATmakeAppl(sym_RDefT_4, k_84, h_84, i_84, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_46), r_84), v_84, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_84)))), r_46), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_b_33, (ATerm) ATinsert(CheckATermList(z_46), (ATerm) ATmakeAppl(sym_Str_1, a_47)))), term_j_43))), w_84)))));
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
  ATerm b_23 = NULL;
  b_23 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, b_23))));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm d_23 = NULL;
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_23))));
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
  ATerm e_23 = NULL,f_23 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_23 = ATgetFirst((ATermList) t);
      f_23 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_23, f_23);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_44 = ATgetArgument(t, 0);
      if(match_cons(a_44, sym__2))
        {
          g_23 = ATgetArgument(a_44, 0);
          h_23 = ATgetArgument(a_44, 1);
        }
      else
        _fail(t);
      {
        ATerm b_44 = ATgetArgument(t, 1);
        if(match_cons(b_44, sym__2))
          {
            i_23 = ATgetArgument(b_44, 0);
            j_23 = ATgetArgument(b_44, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_23), g_23), (ATerm) ATinsert(CheckATermList(j_23), h_23));
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm c_44 = t;
  int g_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_23 = NULL,x_23 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,x_24 = NULL,y_24 = NULL;
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
          x_24 = ATgetArgument(t, 1);
          y_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_23;
      t = m_13(h_5, x_23, c_24, d_24, f_24, x_24, y_24, t);
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
      ATerm v_44 = ATgetArgument(t, 0);
      if(match_cons(v_44, sym__2))
        {
          b_57 = ATgetArgument(v_44, 0);
          c_57 = ATgetArgument(v_44, 1);
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
  ATerm w_57 = NULL,z_57 = NULL,k_58 = NULL,v_58 = NULL;
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
            k_58 = ATgetArgument(a_45, 0);
            v_58 = ATgetArgument(a_45, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_58), w_57), (ATerm) ATinsert(CheckATermList(v_58), z_57));
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
            ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,u_22 = NULL;
            t = j_56;
            t = map_1_0(e_5, t);
            t = genzip_4_0(j_5, k_5, q_5, _id, t);
            v_23 = t;
            if(match_cons(t, sym__2))
              {
                s_23 = ATgetArgument(t, 0);
                t_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(v_23);
            r_23 = t;
            t = t_23;
            t = concat_0_0(t);
            u_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_23, u_23);
            u_22 = t;
            t = SSLsetAnnotations(u_22, r_23);
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
ATerm split_dynamic_rule_old_1_0 (ATerm l_151 (ATerm), ATerm t)
{
  static ATerm c_61 (ATerm t)
  {
    static ATerm g_6 (ATerm t)
    {
      ATerm d_45 = t;
      int e_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_151(t);
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
static ATerm o_13 (ATerm k_85, ATerm j_85, ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL;
  static ATerm o_6 (ATerm t)
  {
    t = k_85;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = k_85;
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
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_61)), not_null(f_61)), j_85);
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
      t = (ATerm) ATmakeAppl(sym_Call_2, term_h_45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, k_61, n_61)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, j_61))));
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
  t = term_i_45;
  c_62 = t;
  t = (ATerm) ATinsert(ATempty, term_j_45);
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
  ATerm z_62 = NULL,b_63 = NULL,f_63 = NULL,g_63 = NULL,n_63 = NULL,s_63 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      z_62 = ATgetArgument(t, 0);
      s_63 = ATgetArgument(t, 1);
      t = z_62;
      if(match_cons(t, sym_DynRuleId_1))
        {
          b_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_63;
      if(match_cons(t, sym_RDecT_3))
        {
          f_63 = ATgetArgument(t, 0);
          g_63 = ATgetArgument(t, 1);
          n_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, f_63, g_63, n_63, (ATerm) ATmakeAppl(sym_Rule_3, s_63, term_m_32, term_u_29));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          z_62 = ATgetArgument(t, 0);
          s_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_62;
      if(match_cons(t, sym_DynRuleId_1))
        {
          b_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_63;
      if(match_cons(t, sym_RDecT_3))
        {
          f_63 = ATgetArgument(t, 0);
          g_63 = ATgetArgument(t, 1);
          n_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, f_63, g_63, n_63, s_63);
    }
  return(t);
}
static ATerm w_65 (ATerm a_65, ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL;
  t = a_65;
  if(match_cons(t, sym_GenDynRules_1))
    {
      i_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_65;
  t = filter_1_0(r_6, t);
  j_65 = t;
  t = a_65;
  if(match_cons(t, sym_GenDynRules_1))
    {
      g_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_65;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  h_65 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, j_65), (ATerm) ATmakeAppl(sym_DynamicRules_1, h_65));
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm u_45 = ATgetArgument(t, 0);
      if(match_cons(u_45, sym_DynRuleId_1))
        {
          ATerm v_45 = ATgetArgument(u_45, 0);
          if(match_cons(v_45, sym_RDecT_3))
            {
              k_65 = ATgetArgument(v_45, 0);
              l_65 = ATgetArgument(v_45, 1);
              m_65 = ATgetArgument(v_45, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      n_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, k_65, l_65, m_65, n_65);
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
  ATerm o_65 = NULL,p_65 = NULL;
  p_65 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      o_65 = ATgetArgument(t, 0);
      {
        ATerm z_45 = t;
        int e_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_26 = NULL;
            t = o_65;
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
            t = o_65;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            b_26 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, b_26);
            LocalPopChoice(e_46);
          }
        else
          {
            t = z_45;
            t = w_65(p_65, t);
          }
      }
    }
  else
    {
      t = w_65(p_65, t);
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm m_46 = t;
  int n_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_66 = NULL;
      c_66 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm o_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_66;
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
            ATerm d_66 = NULL;
            d_66 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm u_46 = ATgetArgument(t, 0);
                ATerm v_46 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_66;
            LocalPopChoice(t_46);
            {
              ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  e_66 = ATgetArgument(t, 0);
                  f_66 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_66;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              g_66 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, g_66, f_66);
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
  ATerm e_67 = NULL,f_67 = NULL,u_67 = NULL,v_67 = NULL,x_22 = NULL;
  v_67 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_67);
  e_67 = t;
  t = f_67;
  t = topdown_1_0(z_6, t);
  t = listtd_1_0(a_7, t);
  u_67 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, u_67);
  x_22 = t;
  t = SSLsetAnnotations(x_22, e_67);
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
  ATerm y_67 = NULL,z_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_67 = ATgetFirst((ATermList) t);
      z_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_13(y_67, z_67, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL,u_66 = NULL,x_66 = NULL,y_66 = NULL,z_22 = NULL,y_22 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  y_66 = t;
  if(match_cons(t, sym_Specification_1))
    {
      q_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_66);
  p_66 = t;
  t = q_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_66 = ATgetFirst((ATermList) t);
      t_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_66);
  r_66 = t;
  t = t_66;
  t = Cons_2_0(_id, v_6, t);
  u_66 = t;
  t = (ATerm) ATinsert(CheckATermList(u_66), s_66);
  y_22 = t;
  t = SSLsetAnnotations(y_22, r_66);
  x_66 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_66);
  z_22 = t;
  t = SSLsetAnnotations(z_22, p_66);
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
      ATerm j_68 = NULL,k_68 = NULL,p_68 = NULL,q_68 = NULL,z_23 = NULL;
      q_68 = t;
      if(match_cons(t, sym__2))
        {
          k_68 = ATgetArgument(t, 0);
          p_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_68);
      j_68 = t;
      t = k_68;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = k_68;
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
          t = k_68;
        }
      t = (ATerm) ATmakeAppl(sym__2, k_68, p_68);
      z_23 = t;
      t = SSLsetAnnotations(z_23, j_68);
      LocalPopChoice(h_47);
      t = conc_0_0(t);
    }
  else
    {
      t = g_47;
      {
        ATerm u_68 = NULL,v_68 = NULL;
        if(match_cons(t, sym__2))
          {
            u_68 = ATgetArgument(t, 0);
            v_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(v_68), u_68);
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
      ATerm w_68 = NULL;
      w_68 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_68;
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
          t = w_68;
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
  ATerm f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,l_69 = NULL;
  f_69 = t;
  {
    ATerm u_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_69 = NULL,p_26 = NULL;
        t = term_t_47;
        p_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_47, f_69);
        t = v_14(p_26, f_69, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_47 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_47) != ATmakeSymbol("i_0", 0, ATtrue)))
              _fail(t);
            m_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_69;
        LocalPopChoice(v_47);
      }
    else
      {
        t = u_47;
        {
          ATerm n_69 = NULL;
          t = term_b_48;
          n_69 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_69, term_b_48);
          t = w_14(g_7, f_69, n_69, t);
          t = (ATerm) ATmakeAppl(sym__2, f_69, term_y_47);
        }
      }
  }
  i_69 = t;
  t = term_o_45;
  l_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_69, term_o_45);
  t = j_15(i_69, l_69, t);
  g_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_47, g_69);
  h_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_69, (ATerm) ATmakeAppl(sym_Defined_2, term_x_47, g_69));
  t = w_14(h_7, f_69, h_69, t);
  t = g_69;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_c_48;
  return(t);
}
ATerm NewNumberedVar_0_0 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,y_69 = NULL;
  q_69 = t;
  t = term_d_48;
  t = next_counter_0_0(t);
  p_69 = t;
  t = SSL_int_to_string(p_69);
  s_69 = t;
  t = term_e_48;
  y_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_48, s_69);
  t = g_15(y_69, s_69, t);
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_48, r_69);
  t_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_69, (ATerm) ATmakeAppl(sym_Defined_2, term_f_48, r_69));
  t = w_14(k_7, q_69, t_69, t);
  t = r_69;
  return(t);
}
ATerm RenameVarTerm_2_0 (ATerm p_151 (ATerm), ATerm q_151 (ATerm), ATerm t)
{
  ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL,f_87 = NULL,q_87 = NULL;
  s_86 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_87 = ATgetArgument(t, 0);
      {
        ATerm g_48 = t;
        int h_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_27 = NULL,f_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,g_24 = NULL,b_24 = NULL;
            t = SSLgetAnnotations(s_86);
            d_27 = t;
            t = f_87;
            if(match_cons(t, sym_ListVar_1))
              {
                h_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(f_87);
            f_27 = t;
            t = h_27;
            t = p_151(t);
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
              t = SSLgetAnnotations(s_86);
              b_28 = t;
              t = f_87;
              t = p_151(t);
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
          f_87 = ATgetArgument(t, 0);
          {
            ATerm m_28 = NULL,r_28 = NULL,i_24 = NULL;
            t = SSLgetAnnotations(s_86);
            m_28 = t;
            t = f_87;
            t = p_151(t);
            r_28 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, r_28);
            i_24 = t;
            t = SSLsetAnnotations(i_24, m_28);
          }
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              f_87 = ATgetArgument(t, 0);
              q_87 = ATgetArgument(t, 1);
              {
                ATerm f_29 = NULL,s_29 = NULL,j_24 = NULL;
                t = SSLgetAnnotations(s_86);
                f_29 = t;
                t = f_87;
                t = p_151(t);
                s_29 = t;
                t = (ATerm) ATmakeAppl(sym_VarDec_2, s_29, q_87);
                j_24 = t;
                t = SSLsetAnnotations(j_24, f_29);
              }
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  f_87 = ATgetArgument(t, 0);
                  {
                    ATerm c_30 = NULL,i_30 = NULL,k_24 = NULL;
                    t = SSLgetAnnotations(s_86);
                    c_30 = t;
                    t = f_87;
                    t = p_151(t);
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
                      f_87 = ATgetArgument(t, 0);
                      q_87 = ATgetArgument(t, 1);
                      {
                        ATerm v_30 = NULL,c_31 = NULL,d_31 = NULL,l_24 = NULL;
                        t = SSLgetAnnotations(s_86);
                        v_30 = t;
                        t = f_87;
                        t = p_151(t);
                        c_31 = t;
                        t = q_87;
                        t = q_151(t);
                        d_31 = t;
                        t = (ATerm) ATmakeAppl(sym_Rec_2, c_31, d_31);
                        l_24 = t;
                        t = SSLsetAnnotations(l_24, v_30);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefNoArgs_2))
                        {
                          f_87 = ATgetArgument(t, 0);
                          q_87 = ATgetArgument(t, 1);
                          {
                            ATerm s_31 = NULL,c_32 = NULL,d_32 = NULL,m_24 = NULL;
                            t = SSLgetAnnotations(s_86);
                            s_31 = t;
                            t = f_87;
                            t = p_151(t);
                            c_32 = t;
                            t = q_87;
                            t = q_151(t);
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
                              f_87 = ATgetArgument(t, 0);
                              q_87 = ATgetArgument(t, 1);
                              q_86 = ATgetArgument(t, 2);
                              {
                                ATerm a_33 = NULL,j_33 = NULL,l_33 = NULL,m_33 = NULL,n_24 = NULL;
                                t = SSLgetAnnotations(s_86);
                                a_33 = t;
                                t = f_87;
                                t = p_151(t);
                                j_33 = t;
                                t = q_87;
                                t = q_151(t);
                                l_33 = t;
                                t = q_86;
                                t = q_151(t);
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
                                  f_87 = ATgetArgument(t, 0);
                                  q_87 = ATgetArgument(t, 1);
                                  q_86 = ATgetArgument(t, 2);
                                  r_86 = ATgetArgument(t, 3);
                                  {
                                    ATerm p_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,a_35 = NULL,o_24 = NULL;
                                    t = SSLgetAnnotations(s_86);
                                    p_34 = t;
                                    t = f_87;
                                    t = p_151(t);
                                    w_34 = t;
                                    t = q_87;
                                    t = q_151(t);
                                    x_34 = t;
                                    t = q_86;
                                    t = q_151(t);
                                    y_34 = t;
                                    t = r_86;
                                    t = q_151(t);
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
                                      f_87 = ATgetArgument(t, 0);
                                      q_87 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(s_86);
                                  s_35 = t;
                                  t = f_87;
                                  t = map_1_0(p_151, t);
                                  w_35 = t;
                                  t = q_87;
                                  t = q_151(t);
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
      ATerm y_91 = NULL,w_36 = NULL,d_37 = NULL;
      y_91 = t;
      t = term_c_48;
      d_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_c_48, y_91);
      t = v_14(d_37, y_91, t);
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
    ATerm j_89 = NULL,k_89 = NULL,l_89 = NULL;
    static ATerm g_92 (ATerm t)
    {
      ATerm q_48 = t;
      int r_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RenameVarTerm_2_0(s_7, g_92, t);
          LocalPopChoice(r_48);
        }
      else
        {
          t = q_48;
          t = SRTS_all(g_92, t);
        }
      return(t);
    }
    j_89 = t;
    t = term_d_48;
    k_89 = t;
    t = term_b_48;
    l_89 = t;
    t = term_s_48;
    t = w_14(r_7, k_89, l_89, t);
    t = j_89;
    t = g_92(t);
    return(t);
  }
  t = scope_2_0(o_7, q_7, t);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm s_95 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_95);
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
                  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL,x_95 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_95 = ATgetArgument(t, 0);
                      v_95 = ATgetArgument(t, 1);
                      w_95 = ATgetArgument(t, 2);
                      x_95 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_95;
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
  ATerm e_96 = NULL;
  ATerm j_49 = t;
  int m_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_96 = ATgetArgument(t, 0);
          {
            ATerm n_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_49);
      t = e_96;
    }
  else
    {
      t = j_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_96;
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
  ATerm j_96 = NULL;
  ATerm o_49 = t;
  int q_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_96 = ATgetArgument(t, 0);
          {
            ATerm s_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_49);
      t = j_96;
    }
  else
    {
      t = o_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_96;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm m_96 = NULL;
  m_96 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, m_96);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm n_96 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_96);
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
                  ATerm p_96 = NULL,q_96 = NULL,r_96 = NULL,s_96 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_96 = ATgetArgument(t, 0);
                      q_96 = ATgetArgument(t, 1);
                      r_96 = ATgetArgument(t, 2);
                      s_96 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_96;
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
  ATerm z_96 = NULL;
  ATerm j_50 = t;
  int k_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_96 = ATgetArgument(t, 0);
          {
            ATerm m_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_50);
      t = z_96;
    }
  else
    {
      t = j_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_96;
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
  ATerm e_97 = NULL;
  ATerm n_50 = t;
  int o_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_97 = ATgetArgument(t, 0);
          {
            ATerm p_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_50);
      t = e_97;
    }
  else
    {
      t = n_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_97;
    }
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm h_97 = NULL;
  h_97 = t;
  {
    ATerm q_50 = t;
    int s_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_97 = NULL,l_37 = NULL,n_37 = NULL,c_26 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            n_97 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_97);
        l_37 = t;
        t = n_97;
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
  t = (ATerm) ATmakeAppl(sym_Var_1, h_97);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm o_97 = NULL,p_97 = NULL;
  if(match_cons(t, sym__2))
    {
      o_97 = ATgetArgument(t, 0);
      p_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_15(o_97, p_97, t);
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
  ATerm q_97 = NULL,r_97 = NULL;
  if(match_cons(t, sym__2))
    {
      q_97 = ATgetArgument(t, 0);
      r_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_15(q_97, r_97, t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  t = term_o_45;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm y_97 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_97);
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
                  ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_98 = ATgetArgument(t, 0);
                      b_98 = ATgetArgument(t, 1);
                      c_98 = ATgetArgument(t, 2);
                      d_98 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_98;
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
  ATerm k_98 = NULL;
  ATerm c_51 = t;
  int d_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_98 = ATgetArgument(t, 0);
          {
            ATerm e_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_51);
      t = k_98;
    }
  else
    {
      t = c_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_98;
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
  ATerm p_98 = NULL;
  ATerm g_51 = t;
  int h_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_98 = ATgetArgument(t, 0);
          {
            ATerm i_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_51);
      t = p_98;
    }
  else
    {
      t = g_51;
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
static ATerm d_9 (ATerm t)
{
  ATerm s_98 = NULL,t_98 = NULL,y_98 = NULL;
  y_98 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      t_98 = ATgetArgument(t, 0);
      t = t_98;
    }
  else
    {
      t = y_98;
    }
  s_98 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_98);
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
  ATerm c_99 = NULL,d_99 = NULL;
  if(match_cons(t, sym__2))
    {
      c_99 = ATgetArgument(t, 0);
      d_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_15(c_99, d_99, t);
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
  ATerm e_99 = NULL,f_99 = NULL;
  if(match_cons(t, sym__2))
    {
      e_99 = ATgetArgument(t, 0);
      f_99 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_15(e_99, f_99, t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_o_45;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm n_99 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_99 = ATgetArgument(t, 0);
      t = n_99;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_99 = ATgetArgument(t, 0);
          {
            ATerm m_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_99;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_99), (ATerm) ATempty);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm u_99 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_99 = ATgetArgument(t, 0);
      t = u_99;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_99 = ATgetArgument(t, 0);
          {
            ATerm o_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_99;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, u_99);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm c_100 = NULL;
  c_100 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_100);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  t = term_w_51;
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm r_151 (ATerm), ATerm t)
{
  ATerm b_94 = NULL,c_94 = NULL,e_94 = NULL,h_94 = NULL,i_94 = NULL,l_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,v_94 = NULL,w_94 = NULL,x_94 = NULL,a_95 = NULL,c_95 = NULL,d_95 = NULL,e_95 = NULL,f_95 = NULL,g_95 = NULL,h_95 = NULL,i_95 = NULL,j_95 = NULL,k_95 = NULL,l_95 = NULL,m_95 = NULL,n_95 = NULL,o_95 = NULL,q_95 = NULL,r_95 = NULL;
  e_94 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm x_51 = ATgetArgument(t, 0);
      if(match_cons(x_51, sym_DynRuleId_1))
        {
          ATerm z_51 = ATgetArgument(x_51, 0);
          if(match_cons(z_51, sym_RDecT_3))
            {
              g_95 = ATgetArgument(z_51, 0);
              v_94 = ATgetArgument(z_51, 1);
              w_94 = ATgetArgument(z_51, 2);
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
            f_95 = ATgetArgument(y_51, 0);
            l_94 = ATgetArgument(y_51, 1);
            r_94 = ATgetArgument(y_51, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_95;
  t = dummify_0_0(t);
  m_95 = t;
  t = free_vars_3_0(t_7, u_7, tboundin_3_0, t);
  t = map_1_0(z_7, t);
  c_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_94, r_94);
  t = free_vars_3_0(a_8, b_8, tboundin_3_0, t);
  t = filter_1_0(h_8, t);
  b_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_94, c_94);
  t = diff_0_0(t);
  i_94 = t;
  t = v_94;
  t = foldr_3_0(i_8, j_8, l_8, t);
  q_95 = t;
  t = w_94;
  t = foldr_3_0(m_8, p_8, r_8, t);
  r_95 = t;
  t = e_94;
  t = dr_rename_vars_0_0(t);
  t_94 = t;
  {
    ATerm a_52 = t;
    int b_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_97 = NULL,r_37 = NULL;
        t = term_j_51;
        r_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_j_51, t_94);
        t = v_14(r_37, t_94, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm c_52 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_52) != ATmakeSymbol("t_0", 0, ATtrue)))
              _fail(t);
            s_97 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_97;
        u_94 = t;
        t = t_94;
        LocalPopChoice(b_52);
        t = (ATerm) ATempty;
        s_94 = t;
        t = (ATerm) ATempty;
        l_95 = t;
      }
    else
      {
        t = a_52;
        {
          ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL;
          t = term_g_43;
          x_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_43, g_95);
          t = g_15(x_97, g_95, t);
          i_95 = t;
          t = new_0_0(t);
          u_94 = t;
          t = new_0_0(t);
          e_95 = t;
          t = f_95;
          t = free_vars_3_0(s_8, t_8, tboundin_3_0, t);
          a_95 = t;
          t = map_1_0(d_9, t);
          v_97 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_95))), v_97), w_94);
          t = concat_0_0(t);
          h_94 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, i_95, v_94, h_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(i_94), (ATerm) ATmakeAppl(sym_Str_1, u_94))), l_94, (ATerm) ATmakeAppl(sym_BA_2, r_94, (ATerm) ATmakeAppl(sym_Var_1, e_95)))));
          s_94 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_52, u_94);
          w_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_94, (ATerm) ATmakeAppl(sym_Defined_2, term_d_52, u_94));
          t = w_14(g_9, t_94, w_97, t);
          t = v_94;
          t = foldr_3_0(h_9, j_9, p_9, t);
          t_97 = t;
          t = w_94;
          t = foldr_3_0(q_9, v_9, w_9, t);
          u_97 = t;
          t = t_97;
          if((q_95 != t))
            {
              _fail(t);
            }
          t = u_97;
          if((r_95 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, g_95, (ATerm) ATmakeAppl(sym__2, t_97, u_97));
          {
            ATerm e_52 = t;
            int f_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_37 = NULL,w_37 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_95, (ATerm) ATmakeAppl(sym__2, t_97, u_97)), m_95);
                v_37 = t;
                t = term_w_51;
                w_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_51, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_95, (ATerm) ATmakeAppl(sym__2, t_97, u_97)), m_95));
                t = v_14(w_37, v_37, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm g_52 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) g_52) != ATmakeSymbol("w_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, g_95, (ATerm) ATmakeAppl(sym__2, t_97, u_97));
                LocalPopChoice(f_52);
                t = (ATerm) ATempty;
                l_95 = t;
              }
            else
              {
                t = e_52;
                {
                  ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL;
                  t = term_f_43;
                  k_99 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_f_43, g_95);
                  t = g_15(k_99, g_95, t);
                  c_95 = t;
                  t = term_h_52;
                  j_99 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_h_52, g_95);
                  t = g_15(j_99, g_95, t);
                  d_95 = t;
                  t = v_94;
                  t = map_1_0(x_9, t);
                  j_95 = t;
                  t = w_94;
                  t = map_1_0(y_9, t);
                  x_94 = t;
                  t = a_95;
                  t = map_1_0(b_10, t);
                  g_99 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, e_95))), g_99), x_94);
                  t = concat_0_0(t);
                  k_95 = t;
                  t = m_95;
                  {
                    ATerm i_52 = t;
                    int j_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = m_95;
                        if((f_95 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_95);
                        LocalPopChoice(j_52);
                      }
                    else
                      {
                        t = i_52;
                        t = m_95;
                      }
                  }
                  h_95 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, d_95, v_94, w_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_95), f_95), term_t_52, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_v_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_95), (ATerm) ATmakeAppl(sym_Str_1, g_95))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_52), term_x_52), term_n_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_53, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_95), j_95, k_95), term_d_53))), term_g_53), term_n_52), term_i_53), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, term_k_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_i_53), term_x_52)), term_z_52)))))), (ATerm) ATmakeAppl(sym_RDefT_4, c_95, v_94, w_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_95), f_95), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_95), j_95, k_95))), term_n_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_95), (ATerm) ATmakeAppl(sym_Str_1, g_95))), term_q_52), term_n_52)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_95, v_94, w_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_95), f_95), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_95), j_95, k_95))), term_n_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_95), (ATerm) ATmakeAppl(sym_Str_1, g_95))), term_n_52))));
                  l_95 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_95, (ATerm) ATmakeAppl(sym__2, t_97, u_97)), m_95);
                  h_99 = t;
                  t = term_m_53;
                  i_99 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_95, (ATerm) ATmakeAppl(sym__2, t_97, u_97)), m_95), term_m_53);
                  t = w_14(c_10, h_99, i_99, t);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, d_95, v_94, w_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_95), f_95), term_t_52, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_v_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_95), (ATerm) ATmakeAppl(sym_Str_1, g_95))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_52), term_x_52), term_n_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_c_53, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_95), j_95, k_95), term_d_53))), term_g_53), term_n_52), term_i_53), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, term_k_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_i_53), term_x_52)), term_z_52)))))), (ATerm) ATmakeAppl(sym_RDefT_4, c_95, v_94, w_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_95), f_95), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_95), j_95, k_95))), term_n_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_95), (ATerm) ATmakeAppl(sym_Str_1, g_95))), term_q_52), term_n_52)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_95, v_94, w_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_95), f_95), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_95), j_95, k_95))), term_n_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_p_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, h_95), (ATerm) ATmakeAppl(sym_Str_1, g_95))), term_n_52))));
                }
              }
          }
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, m_95, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(i_94), (ATerm) ATmakeAppl(sym_Str_1, u_94))));
  t = r_151(t);
  n_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_94, l_95);
  t = conc_0_0(t);
  o_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, n_95), o_95);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm c_101 = NULL,d_101 = NULL,e_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL,o_101 = NULL;
  j_101 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      k_101 = ATgetArgument(t, 0);
      o_101 = ATgetArgument(t, 1);
      t = k_101;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          d_101 = ATgetArgument(t, 0);
          c_101 = ATgetArgument(t, 1);
          {
            static ATerm d_10 (ATerm t)
            {
              ATerm x_101 = NULL,y_101 = NULL;
              x_101 = t;
              t = SSL_explode_term(x_101);
              if(match_cons(t, sym__2))
                {
                  ATerm n_53 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_53) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm o_53 = ATgetArgument(t, 1);
                    if(((ATgetType(o_53) == AT_LIST) && !(ATisEmpty(o_53))))
                      {
                        y_101 = ATgetFirst((ATermList) o_53);
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
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_101), c_101), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_101))));
              return(t);
            }
            t = d_101;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((e_101 != NULL) && (e_101 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_101 = ATgetArgument(t, 0);
                h_101 = ATgetArgument(t, 1);
                i_101 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_101, h_101, i_101)), (ATerm) ATmakeAppl(sym_Rule_3, o_101, term_s_53, term_u_29));
            t = SplitDynamicRule_1_0(d_10, t);
          }
        }
      else
        {
          static ATerm e_10 (ATerm t)
          {
            ATerm d_102 = NULL,e_102 = NULL;
            d_102 = t;
            t = SSL_explode_term(d_102);
            if(match_cons(t, sym__2))
              {
                ATerm v_53 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) v_53) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm w_53 = ATgetArgument(t, 1);
                  if(((ATgetType(w_53) == AT_LIST) && !(ATisEmpty(w_53))))
                    {
                      e_102 = ATgetFirst((ATermList) w_53);
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
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_102), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_101))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              d_101 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_101;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((e_101 != NULL) && (e_101 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_101 = ATgetArgument(t, 0);
              h_101 = ATgetArgument(t, 1);
              i_101 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_101, h_101, i_101)), (ATerm) ATmakeAppl(sym_Rule_3, o_101, term_s_53, term_u_29));
          t = SplitDynamicRule_1_0(e_10, t);
        }
    }
  else
    {
      if(match_cons(t, sym_SetDynRuleMatch_2))
        {
          k_101 = ATgetArgument(t, 0);
          o_101 = ATgetArgument(t, 1);
          t = k_101;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              d_101 = ATgetArgument(t, 0);
              c_101 = ATgetArgument(t, 1);
              {
                static ATerm g_10 (ATerm t)
                {
                  ATerm o_102 = NULL,p_102 = NULL,z_37 = NULL;
                  o_102 = t;
                  t = SSL_explode_term(o_102);
                  if(match_cons(t, sym__2))
                    {
                      ATerm y_53 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) y_53) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm z_53 = ATgetArgument(t, 1);
                        if(((ATgetType(z_53) == AT_LIST) && !(ATisEmpty(z_53))))
                          {
                            p_102 = ATgetFirst((ATermList) z_53);
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
                  t = SSL_explode_term(o_102);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_37), p_102), c_101), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_101))));
                  return(t);
                }
                t = d_101;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((e_101 != NULL) && (e_101 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      e_101 = ATgetArgument(t, 0);
                    h_101 = ATgetArgument(t, 1);
                    i_101 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_101, h_101, i_101)), (ATerm) ATmakeAppl(sym_Rule_3, o_101, o_101, term_u_29));
                t = SplitDynamicRule_1_0(g_10, t);
              }
            }
          else
            {
              static ATerm h_10 (ATerm t)
              {
                ATerm a_103 = NULL,f_103 = NULL,c_38 = NULL;
                a_103 = t;
                t = SSL_explode_term(a_103);
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
                t = SSL_explode_term(a_103);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_38), f_103), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_101))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  d_101 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = d_101;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((e_101 != NULL) && (e_101 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_101 = ATgetArgument(t, 0);
                  h_101 = ATgetArgument(t, 1);
                  i_101 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_101, h_101, i_101)), (ATerm) ATmakeAppl(sym_Rule_3, o_101, o_101, term_u_29));
              t = SplitDynamicRule_1_0(h_10, t);
            }
        }
      else
        {
          if(match_cons(t, sym_AddDynRule_2))
            {
              k_101 = ATgetArgument(t, 0);
              o_101 = ATgetArgument(t, 1);
              t = k_101;
              if(match_cons(t, sym_LabeledDynRuleId_2))
                {
                  d_101 = ATgetArgument(t, 0);
                  c_101 = ATgetArgument(t, 1);
                  {
                    static ATerm k_10 (ATerm t)
                    {
                      ATerm o_103 = NULL,p_103 = NULL,f_38 = NULL;
                      o_103 = t;
                      t = SSL_explode_term(o_103);
                      if(match_cons(t, sym__2))
                        {
                          ATerm t_54 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) t_54) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm u_54 = ATgetArgument(t, 1);
                            if(((ATgetType(u_54) == AT_LIST) && !(ATisEmpty(u_54))))
                              {
                                p_103 = ATgetFirst((ATermList) u_54);
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
                      t = SSL_explode_term(o_103);
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
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, f_38), p_103), c_101), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_101))));
                      return(t);
                    }
                    t = d_101;
                    if(match_cons(t, sym_RDecT_3))
                      {
                        if(((e_101 != NULL) && (e_101 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          e_101 = ATgetArgument(t, 0);
                        h_101 = ATgetArgument(t, 1);
                        i_101 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_101, h_101, i_101)), o_101);
                    t = SplitDynamicRule_1_0(k_10, t);
                  }
                }
              else
                {
                  static ATerm l_10 (ATerm t)
                  {
                    ATerm c_104 = NULL,d_104 = NULL,h_38 = NULL;
                    c_104 = t;
                    t = SSL_explode_term(c_104);
                    if(match_cons(t, sym__2))
                      {
                        ATerm b_55 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) b_55) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm c_55 = ATgetArgument(t, 1);
                          if(((ATgetType(c_55) == AT_LIST) && !(ATisEmpty(c_55))))
                            {
                              d_104 = ATgetFirst((ATermList) c_55);
                              {
                                ATerm d_55 = (ATerm) ATgetNext((ATermList) c_55);
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
                        ATerm e_55 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) e_55) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm f_55 = ATgetArgument(t, 1);
                          if(((ATgetType(f_55) == AT_LIST) && !(ATisEmpty(f_55))))
                            {
                              ATerm h_55 = ATgetFirst((ATermList) f_55);
                              ATerm j_55 = (ATerm) ATgetNext((ATermList) f_55);
                              if(((ATgetType(j_55) == AT_LIST) && !(ATisEmpty(j_55))))
                                {
                                  h_38 = ATgetFirst((ATermList) j_55);
                                  {
                                    ATerm k_55 = (ATerm) ATgetNext((ATermList) j_55);
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
                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_38), d_104), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_101))));
                    return(t);
                  }
                  if(match_cons(t, sym_DynRuleId_1))
                    {
                      d_101 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = d_101;
                  if(match_cons(t, sym_RDecT_3))
                    {
                      if(((e_101 != NULL) && (e_101 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_101 = ATgetArgument(t, 0);
                      h_101 = ATgetArgument(t, 1);
                      i_101 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_101, h_101, i_101)), o_101);
                  t = SplitDynamicRule_1_0(l_10, t);
                }
            }
          else
            {
              if(match_cons(t, sym_SetDynRule_2))
                {
                  k_101 = ATgetArgument(t, 0);
                  o_101 = ATgetArgument(t, 1);
                  t = k_101;
                  if(match_cons(t, sym_LabeledDynRuleId_2))
                    {
                      d_101 = ATgetArgument(t, 0);
                      c_101 = ATgetArgument(t, 1);
                      {
                        static ATerm m_10 (ATerm t)
                        {
                          ATerm p_104 = NULL,q_104 = NULL,k_38 = NULL;
                          p_104 = t;
                          t = SSL_explode_term(p_104);
                          if(match_cons(t, sym__2))
                            {
                              ATerm l_55 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) l_55) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm m_55 = ATgetArgument(t, 1);
                                if(((ATgetType(m_55) == AT_LIST) && !(ATisEmpty(m_55))))
                                  {
                                    q_104 = ATgetFirst((ATermList) m_55);
                                    {
                                      ATerm o_55 = (ATerm) ATgetNext((ATermList) m_55);
                                    }
                                  }
                                else
                                  _fail(t);
                              }
                            }
                          else
                            _fail(t);
                          t = SSL_explode_term(p_104);
                          if(match_cons(t, sym__2))
                            {
                              ATerm p_55 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) p_55) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              {
                                ATerm q_55 = ATgetArgument(t, 1);
                                if(((ATgetType(q_55) == AT_LIST) && !(ATisEmpty(q_55))))
                                  {
                                    ATerm r_55 = ATgetFirst((ATermList) q_55);
                                    ATerm s_55 = (ATerm) ATgetNext((ATermList) q_55);
                                    if(((ATgetType(s_55) == AT_LIST) && !(ATisEmpty(s_55))))
                                      {
                                        k_38 = ATgetFirst((ATermList) s_55);
                                        {
                                          ATerm v_55 = (ATerm) ATgetNext((ATermList) s_55);
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
                          t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, k_38), q_104), c_101), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_101))));
                          return(t);
                        }
                        t = d_101;
                        if(match_cons(t, sym_RDecT_3))
                          {
                            if(((e_101 != NULL) && (e_101 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              e_101 = ATgetArgument(t, 0);
                            h_101 = ATgetArgument(t, 1);
                            i_101 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_101, h_101, i_101)), o_101);
                        t = SplitDynamicRule_1_0(m_10, t);
                      }
                    }
                  else
                    {
                      static ATerm n_10 (ATerm t)
                      {
                        ATerm y_104 = NULL,z_104 = NULL,m_38 = NULL;
                        y_104 = t;
                        t = SSL_explode_term(y_104);
                        if(match_cons(t, sym__2))
                          {
                            ATerm y_55 = ATgetArgument(t, 0);
                            if((ATgetSymbol((ATermAppl) y_55) != ATmakeSymbol("", 0, ATtrue)))
                              _fail(t);
                            {
                              ATerm z_55 = ATgetArgument(t, 1);
                              if(((ATgetType(z_55) == AT_LIST) && !(ATisEmpty(z_55))))
                                {
                                  z_104 = ATgetFirst((ATermList) z_55);
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
                        t = SSL_explode_term(y_104);
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
                        t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_38), z_104), (ATerm) ATmakeAppl(sym_Str_1, not_null(e_101))));
                        return(t);
                      }
                      if(match_cons(t, sym_DynRuleId_1))
                        {
                          d_101 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = d_101;
                      if(match_cons(t, sym_RDecT_3))
                        {
                          if(((e_101 != NULL) && (e_101 != ATgetArgument(t, 0))))
                            _fail(ATgetArgument(t, 0));
                          else
                            e_101 = ATgetArgument(t, 0);
                          {
                            ATerm g_56 = ATgetArgument(t, 1);
                          }
                          {
                            ATerm h_56 = ATgetArgument(t, 2);
                          }
                        }
                      else
                        _fail(t);
                      t = j_101;
                      t = SplitDynamicRule_1_0(n_10, t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_AddScopeLabel_2))
                    {
                      k_101 = ATgetArgument(t, 0);
                      o_101 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, term_n_56, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, o_101), (ATerm) ATmakeAppl(sym_Str_1, k_101))), (ATerm) ATempty);
                }
            }
        }
    }
  return(t);
}
ATerm DesugarDynRuleDef_0_0 (ATerm t)
{
  ATerm s_105 = NULL,t_105 = NULL,u_105 = NULL,x_105 = NULL,y_105 = NULL,z_105 = NULL,a_106 = NULL;
  if(match_cons(t, sym_SetDynRuleMatch_2))
    {
      s_105 = ATgetArgument(t, 0);
      a_106 = ATgetArgument(t, 1);
      t = s_105;
      if(match_cons(t, sym_AddLabelDynRuleId_2))
        {
          t_105 = ATgetArgument(t, 0);
          z_105 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_105;
      if(match_cons(t, sym_RDecT_3))
        {
          u_105 = ATgetArgument(t, 0);
          x_105 = ATgetArgument(t, 1);
          y_105 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, u_105, z_105)), (ATerm) ATmakeAppl(sym_SetDynRuleMatch_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, u_105, x_105, y_105)), a_106));
    }
  else
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          s_105 = ATgetArgument(t, 0);
          a_106 = ATgetArgument(t, 1);
          t = s_105;
          if(match_cons(t, sym_AddLabelDynRuleId_2))
            {
              t_105 = ATgetArgument(t, 0);
              z_105 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_105;
          if(match_cons(t, sym_RDecT_3))
            {
              u_105 = ATgetArgument(t, 0);
              x_105 = ATgetArgument(t, 1);
              y_105 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, u_105, z_105)), (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, u_105, x_105, y_105)), a_106));
        }
      else
        {
          if(match_cons(t, sym_AddDynRule_2))
            {
              s_105 = ATgetArgument(t, 0);
              a_106 = ATgetArgument(t, 1);
              t = s_105;
              if(match_cons(t, sym_AddLabelDynRuleId_2))
                {
                  t_105 = ATgetArgument(t, 0);
                  z_105 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_105;
              if(match_cons(t, sym_RDecT_3))
                {
                  u_105 = ATgetArgument(t, 0);
                  x_105 = ATgetArgument(t, 1);
                  y_105 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, u_105, z_105)), (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, u_105, x_105, y_105)), a_106));
            }
          else
            {
              if(match_cons(t, sym_SetDynRule_2))
                {
                  s_105 = ATgetArgument(t, 0);
                  a_106 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_105;
              if(match_cons(t, sym_AddLabelDynRuleId_2))
                {
                  t_105 = ATgetArgument(t, 0);
                  z_105 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_105;
              if(match_cons(t, sym_RDecT_3))
                {
                  u_105 = ATgetArgument(t, 0);
                  x_105 = ATgetArgument(t, 1);
                  y_105 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, u_105, z_105)), (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, u_105, x_105, y_105)), a_106));
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
        ATerm v_106 = NULL;
        v_106 = t;
        t = (ATerm) ATinsert(ATempty, v_106);
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
ATerm split_dynamic_rule_1_0 (ATerm s_151 (ATerm), ATerm t)
{
  static ATerm e_107 (ATerm t)
  {
    static ATerm o_10 (ATerm t)
    {
      ATerm v_56 = t;
      int w_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_151(t);
          LocalPopChoice(w_56);
        }
      else
        {
          t = v_56;
          {
            ATerm z_106 = NULL,a_107 = NULL,d_107 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                z_106 = ATgetArgument(t, 0);
                a_107 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, z_106, a_107);
            {
              static ATerm n_11 (ATerm t)
              {
                t = z_106;
                t = DeclareContextVars_0_0(t);
                t = a_107;
                t = e_107(t);
                if(((d_107 != NULL) && (d_107 != t)))
                  _fail(t);
                else
                  d_107 = t;
                return(t);
              }
              t = scope_2_0(m_11, n_11, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, z_106, not_null(d_107));
          }
        }
      return(t);
    }
    t = oncetd_1_0(o_10, t);
    return(t);
  }
  t = e_107(t);
  return(t);
}
static ATerm w_11 (ATerm t)
{
  ATerm h_107 = NULL,j_107 = NULL,k_107 = NULL,l_107 = NULL;
  l_107 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      k_107 = ATgetArgument(t, 0);
      {
        ATerm x_56 = t;
        int y_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_107;
            h_107 = t;
            t = l_107;
            LocalPopChoice(y_56);
          }
        else
          {
            t = x_56;
            t = l_107;
            h_107 = t;
            t = l_107;
          }
      }
    }
  else
    {
      t = l_107;
      h_107 = t;
      t = l_107;
    }
  t = term_d_57;
  j_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_107, term_d_57);
  t = w_14(x_11, h_107, j_107, t);
  t = l_107;
  return(t);
}
static ATerm x_11 (ATerm t)
{
  t = term_b_45;
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm m_107 = NULL,s_107 = NULL,t_107 = NULL,u_107 = NULL;
  u_107 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      t_107 = ATgetArgument(t, 0);
      {
        ATerm g_57 = t;
        int h_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_107;
            m_107 = t;
            t = u_107;
            LocalPopChoice(h_57);
          }
        else
          {
            t = g_57;
            t = u_107;
            m_107 = t;
            t = u_107;
          }
      }
    }
  else
    {
      t = u_107;
      m_107 = t;
      t = u_107;
    }
  t = term_k_57;
  s_107 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_107, term_k_57);
  t = w_14(e_12, m_107, s_107, t);
  t = u_107;
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
  ATerm m_58 = t;
  int n_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_39 = ATgetArgument(t, 0);
          {
            ATerm o_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_58);
      t = p_39;
    }
  else
    {
      t = m_58;
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
            ATerm p_58 = ATgetArgument(t, 1);
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
            ATerm q_58 = ATgetArgument(t, 1);
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
  ATerm h_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_41);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  ATerm r_58 = t;
  int u_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_58);
    }
  else
    {
      t = r_58;
      {
        ATerm y_58 = t;
        int z_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm n_41 = NULL,q_41 = NULL,r_41 = NULL,t_41 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_41 = ATgetArgument(t, 0);
                      q_41 = ATgetArgument(t, 1);
                      r_41 = ATgetArgument(t, 2);
                      t_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_41;
                  t = map_1_0(w_13, t);
                  LocalPopChoice(b_59);
                }
              else
                {
                  t = a_59;
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
  ATerm v_43 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_43 = ATgetArgument(t, 0);
      t = v_43;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_43 = ATgetArgument(t, 0);
          {
            ATerm n_59 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_43;
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
  ATerm k_112 = NULL;
  k_112 = t;
  {
    ATerm q_59 = t;
    int u_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_38 = NULL,r_38 = NULL;
        t = k_112;
        t = free_vars_3_0(g_12, h_12, tboundin_3_0, t);
        q_38 = t;
        t = k_112;
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
          ATerm z_40 = NULL,a_41 = NULL;
          t = k_112;
          t = free_vars_3_0(s_13, t_13, tboundin_3_0, t);
          z_40 = t;
          t = k_112;
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
          a_41 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_40, a_41);
          t = k_14(n_14, z_40, a_41, t);
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
  ATerm y_112 = NULL,z_112 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_112 = ATgetFirst((ATermList) t);
      z_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_112, z_112);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm a_113 = NULL,b_113 = NULL,c_113 = NULL,d_113 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_61 = ATgetArgument(t, 0);
      if(match_cons(a_61, sym__2))
        {
          a_113 = ATgetArgument(a_61, 0);
          b_113 = ATgetArgument(a_61, 1);
        }
      else
        _fail(t);
      {
        ATerm g_61 = ATgetArgument(t, 1);
        if(match_cons(g_61, sym__2))
          {
            c_113 = ATgetArgument(g_61, 0);
            d_113 = ATgetArgument(g_61, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_113), a_113), (ATerm) ATinsert(CheckATermList(d_113), b_113));
  return(t);
}
static ATerm b_14 (ATerm f_89, ATerm e_89, ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL;
  static ATerm p_14 (ATerm t)
  {
    t = f_89;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = f_89;
    {
      static ATerm q_14 (ATerm t)
      {
        ATerm s_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL,w_112 = NULL,x_112 = NULL,g_26 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            s_112 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_112;
        t = map_1_0(split_dynamic_rule_0_0, t);
        t = flatten_list_0_0(t);
        t = genzip_4_0(s_14, t_14, u_14, _id, t);
        x_112 = t;
        if(match_cons(t, sym__2))
          {
            u_112 = ATgetArgument(t, 0);
            v_112 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_112);
        t_112 = t;
        t = v_112;
        t = concat_0_0(t);
        w_112 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_112, w_112);
        g_26 = t;
        t = SSLsetAnnotations(g_26, t_112);
        if(match_cons(t, sym__2))
          {
            if(((p_112 != NULL) && (p_112 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              p_112 = ATgetArgument(t, 0);
            if(((o_112 != NULL) && (o_112 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              o_112 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, p_112);
        return(t);
      }
      t = split_dynamic_rule_1_0(q_14, t);
    }
    if(((q_112 != NULL) && (q_112 != t)))
      _fail(t);
    else
      q_112 = t;
    return(t);
  }
  t = scope_2_0(o_14, p_14, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_112)), not_null(q_112)), e_89);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm r_116 (ATerm), ATerm s_116 (ATerm), ATerm t)
{
  static ATerm f_113 (ATerm t)
  {
    ATerm h_61 = t;
    int i_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_116(t);
        t = f_113(t);
        LocalPopChoice(i_61);
      }
    else
      {
        t = h_61;
        t = s_116(t);
      }
    return(t);
  }
  t = f_113(t);
  return(t);
}
ATerm listtd_1_0 (ATerm n_125 (ATerm), ATerm t)
{
  static ATerm t_113 (ATerm t)
  {
    ATerm q_113 = NULL,r_113 = NULL,s_113 = NULL;
    t = n_125(t);
    q_113 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_113;
      }
    else
      {
        ATerm c_45 = NULL,f_45 = NULL,i_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_113 = ATgetFirst((ATermList) t);
            s_113 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_113);
        c_45 = t;
        t = s_113;
        t = t_113(t);
        f_45 = t;
        t = (ATerm) ATinsert(CheckATermList(f_45), r_113);
        i_26 = t;
        t = SSLsetAnnotations(i_26, c_45);
      }
    return(t);
  }
  t = t_113(t);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm t)
{
  ATerm l_61 = t;
  int o_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_113 = NULL;
      t = w_129(t);
      v_113 = t;
      t = (ATerm) ATinsert(ATempty, v_113);
      LocalPopChoice(o_61);
    }
  else
    {
      t = l_61;
      {
        ATerm l_45 = NULL,n_45 = NULL;
        static ATerm u_15 (ATerm t)
        {
          t = collect_om_2_0(w_129, x_129, t);
          return(t);
        }
        n_45 = t;
        t = SSL_explode_term(n_45);
        if(match_cons(t, sym__2))
          {
            ATerm p_61 = ATgetArgument(t, 0);
            l_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_45;
        t = foldr_3_0(y_14, x_129, u_15, t);
      }
    }
  return(t);
}
ATerm partition_1_0 (ATerm o_132 (ATerm), ATerm t)
{
  static ATerm b_115 (ATerm t)
  {
    ATerm y_114 = NULL,z_114 = NULL,a_115 = NULL;
    y_114 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_y_37;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_114 = ATgetFirst((ATermList) t);
            a_115 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_61 = t;
          int r_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,q_46 = NULL,l_26 = NULL;
              t = SSLgetAnnotations(y_114);
              d_46 = t;
              t = z_114;
              t = o_132(t);
              y_45 = t;
              t = (ATerm) ATinsert(CheckATermList(a_115), y_45);
              l_26 = t;
              t = SSLsetAnnotations(l_26, d_46);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_61 = ATgetFirst((ATermList) t);
                  b_46 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_46;
              t = b_115(t);
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
                ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,m_47 = NULL,a_48 = NULL,m_26 = NULL;
                t = SSLgetAnnotations(y_114);
                m_47 = t;
                t = (ATerm) ATinsert(CheckATermList(a_115), z_114);
                m_26 = t;
                t = SSLsetAnnotations(m_26, m_47);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm p_62 = ATgetFirst((ATermList) t);
                    j_47 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = j_47;
                t = b_115(t);
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
                      ATerm u_62 = ATgetArgument(t, 1);
                      if(((ATgetType(u_62) == AT_LIST) && !(ATisEmpty(u_62))))
                        {
                          ATerm v_62 = ATgetFirst((ATermList) u_62);
                          ATerm w_62 = (ATerm) ATgetNext((ATermList) u_62);
                          if(((ATgetType(w_62) == AT_LIST) && !(ATisEmpty(w_62))))
                            {
                              a_48 = ATgetFirst((ATermList) w_62);
                              {
                                ATerm x_62 = (ATerm) ATgetNext((ATermList) w_62);
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
                t = (ATerm) ATmakeAppl(sym__2, k_47, (ATerm) ATinsert(CheckATermList(a_48), z_114));
              }
            }
        }
      }
    return(t);
  }
  t = b_115(t);
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
  ATerm j_118 = NULL,k_118 = NULL,l_118 = NULL,m_118 = NULL,n_118 = NULL,o_118 = NULL,p_118 = NULL;
  n_118 = t;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      o_118 = ATgetArgument(t, 0);
      p_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_118 = ATgetFirst((ATermList) t);
      m_118 = (ATerm) ATgetNext((ATermList) t);
      t = k_118;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          l_118 = ATgetArgument(t, 0);
          j_118 = ATgetArgument(t, 1);
          {
            ATerm t_48 = NULL,v_48 = NULL,z_48 = NULL,a_49 = NULL;
            t = m_118;
            {
              static ATerm x_15 (ATerm t)
              {
                ATerm d_49 = NULL,g_49 = NULL;
                d_49 = t;
                {
                  ATerm y_62 = t;
                  int h_63 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                        {
                          g_49 = ATgetArgument(t, 0);
                          {
                            ATerm k_63 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(h_63);
                      t = g_49;
                      if((l_118 != t))
                        {
                          _fail(t);
                        }
                      t = d_49;
                    }
                  else
                    {
                      t = y_62;
                      if(match_cons(t, sym_DynRuleScopeId_1))
                        {
                          g_49 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = g_49;
                      if((l_118 != t))
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
                    if((l_118 != ATgetArgument(t, 0)))
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
            t = (ATerm) ATinsert(CheckATermList(a_49), j_118);
            {
              static ATerm d_16 (ATerm t)
              {
                ATerm z_49 = NULL;
                z_49 = t;
                t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, l_118, z_49)));
                return(t);
              }
              t = map_1_0(d_16, t);
            }
            z_48 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_63, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_48), (ATerm) ATmakeAppl(sym_DynRuleScope_2, t_48, p_118))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, l_118)));
          }
        }
      else
        {
          ATerm k_51 = NULL,l_51 = NULL,n_51 = NULL;
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              l_118 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_118;
          {
            static ATerm e_16 (ATerm t)
            {
              ATerm p_51 = NULL,q_51 = NULL;
              p_51 = t;
              {
                ATerm t_63 = t;
                int u_63 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                      {
                        q_51 = ATgetArgument(t, 0);
                        {
                          ATerm x_63 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_63);
                    t = q_51;
                    if((l_118 != t))
                      {
                        _fail(t);
                      }
                    t = p_51;
                  }
                else
                  {
                    t = t_63;
                    if(match_cons(t, sym_DynRuleScopeId_1))
                      {
                        q_51 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = q_51;
                    if((l_118 != t))
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
                  if((l_118 != ATgetArgument(t, 0)))
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
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, l_118, v_51)));
              return(t);
            }
            t = map_1_0(i_16, t);
          }
          n_51 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_63, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_51), (ATerm) ATmakeAppl(sym_DynRuleScope_2, k_51, p_118))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, l_118)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_118;
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_118 (ATerm), ATerm t)
{
  static ATerm t_118 (ATerm t)
  {
    ATerm y_63 = t;
    int z_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_118(t);
        LocalPopChoice(z_63);
      }
    else
      {
        t = y_63;
        t = SRTS_one(t_118, t);
      }
    return(t);
  }
  t = t_118(t);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm l_119 = NULL;
  l_119 = t;
  {
    ATerm a_64 = t;
    int b_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_52 = NULL;
        t = term_b_45;
        r_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_45, l_119);
        t = v_14(r_52, l_119, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm c_64 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_64) != ATmakeSymbol("z_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = l_119;
        LocalPopChoice(b_64);
      }
    else
      {
        t = a_64;
        {
          ATerm a_53 = NULL;
          t = term_b_45;
          a_53 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_45, l_119);
          t = v_14(a_53, l_119, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm d_64 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_64) != ATmakeSymbol("n_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = l_119;
        }
      }
  }
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm n_122 = NULL,o_122 = NULL,p_122 = NULL,q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL,u_122 = NULL,v_122 = NULL,y_122 = NULL,z_122 = NULL;
  z_122 = t;
  if(match_cons(t, sym_Op_2))
    {
      n_122 = ATgetArgument(t, 0);
      o_122 = ATgetArgument(t, 1);
      t = o_122;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_122 = ATgetFirst((ATermList) t);
          s_122 = (ATerm) ATgetNext((ATermList) t);
          t = s_122;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_122 = ATgetFirst((ATermList) t);
              y_122 = (ATerm) ATgetNext((ATermList) t);
              t = y_122;
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
                                      t = n_122;
                                      if(match_string(t, "Cons"))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, r_122));
                                        }
                                      else
                                        {
                                          t = z_122;
                                        }
                                    }
                                  else
                                    {
                                      t = z_122;
                                    }
                                }
                              else
                                {
                                  t = z_122;
                                }
                            }
                          else
                            {
                              t = z_122;
                            }
                        }
                      else
                        {
                          t = z_122;
                        }
                    }
                  else
                    {
                      t = z_122;
                    }
                }
              else
                {
                  t = z_122;
                }
            }
          else
            {
              t = z_122;
            }
        }
      else
        {
          t = z_122;
        }
    }
  else
    {
      t = z_122;
    }
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm l_125 = NULL,m_125 = NULL,p_125 = NULL;
  l_125 = t;
  {
    ATerm e_64 = t;
    int f_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm g_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_64);
        t = l_125;
        {
          ATerm h_64 = t;
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
                ATerm i_64 = t;
                int j_64 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(j_64);
                  }
                else
                  {
                    t = i_64;
                    {
                      ATerm r_54 = NULL,g_55 = NULL,i_55 = NULL,q_26 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          r_54 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(u_53);
                      g_55 = t;
                      t = r_54;
                      t = ContextVar_0_0(t);
                      i_55 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, i_55);
                      q_26 = t;
                      t = SSLsetAnnotations(q_26, g_55);
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
              t = h_64;
            }
        }
        t = term_y_33;
      }
    else
      {
        t = e_64;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_y_33;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                m_125 = ATgetArgument(t, 0);
                {
                  ATerm v_125 = NULL;
                  t = m_125;
                  t = free_vars_3_0(l_16, m_16, tboundin_3_0, t);
                  t = map_1_0(q_16, t);
                  v_125 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_64, v_125);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    m_125 = ATgetArgument(t, 0);
                    p_125 = ATgetArgument(t, 1);
                    {
                      ATerm m_127 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, m_125, p_125);
                      t = free_vars_3_0(s_16, v_16, tboundin_3_0, t);
                      t = map_1_0(z_16, t);
                      m_127 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_k_64, m_127);
                    }
                  }
                else
                  {
                    ATerm n_55 = NULL,t_55 = NULL,u_55 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm l_64 = ATgetArgument(t, 0);
                        ATerm m_64 = ATgetArgument(t, 1);
                        ATerm n_64 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_i_45;
                    t_55 = t;
                    t = (ATerm) ATinsert(ATempty, term_q_64);
                    u_55 = t;
                    t = SSL_printnl(t_55, u_55);
                    t = term_o_45;
                    n_55 = t;
                    t = SSL_exit(n_55);
                    t = (ATerm) ATinsert(ATempty, term_q_64);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm x_125 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_125);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm r_64 = t;
  int u_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_64);
    }
  else
    {
      t = r_64;
      {
        ATerm v_64 = t;
        int y_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_64);
          }
        else
          {
            t = v_64;
            {
              ATerm z_64 = t;
              int b_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_125 = NULL,a_126 = NULL,b_126 = NULL,c_126 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_125 = ATgetArgument(t, 0);
                      a_126 = ATgetArgument(t, 1);
                      b_126 = ATgetArgument(t, 2);
                      c_126 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_126;
                  t = map_1_0(n_16, t);
                  LocalPopChoice(b_65);
                }
              else
                {
                  t = z_64;
                  {
                    ATerm c_65 = t;
                    int d_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_65);
                      }
                    else
                      {
                        t = c_65;
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
  ATerm r_126 = NULL;
  ATerm e_65 = t;
  int q_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_126 = ATgetArgument(t, 0);
          {
            ATerm r_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_65);
      t = r_126;
    }
  else
    {
      t = e_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_126;
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
  ATerm z_126 = NULL;
  ATerm u_65 = t;
  int v_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_126 = ATgetArgument(t, 0);
          {
            ATerm x_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_65);
      t = z_126;
    }
  else
    {
      t = u_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_126;
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm h_127 = NULL;
  h_127 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_127);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm n_127 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_127);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm y_65 = t;
  int z_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_65);
    }
  else
    {
      t = y_65;
      {
        ATerm a_66 = t;
        int b_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_66);
          }
        else
          {
            t = a_66;
            {
              ATerm h_66 = t;
              int i_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_127 = NULL,q_127 = NULL,r_127 = NULL,u_127 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_127 = ATgetArgument(t, 0);
                      q_127 = ATgetArgument(t, 1);
                      r_127 = ATgetArgument(t, 2);
                      u_127 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_127;
                  t = map_1_0(w_16, t);
                  LocalPopChoice(i_66);
                }
              else
                {
                  t = h_66;
                  {
                    ATerm k_66 = t;
                    int l_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_66);
                      }
                    else
                      {
                        t = k_66;
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
  ATerm f_128 = NULL;
  ATerm o_66 = t;
  int v_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_128 = ATgetArgument(t, 0);
          {
            ATerm w_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_66);
      t = f_128;
    }
  else
    {
      t = o_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_128;
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
  ATerm z_66 = t;
  int a_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_128 = ATgetArgument(t, 0);
          {
            ATerm b_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_67);
      t = t_128;
    }
  else
    {
      t = z_66;
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
  ATerm p_129 = NULL,s_129 = NULL,t_129 = NULL;
  p_129 = t;
  {
    ATerm c_67 = t;
    int g_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm p_67 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_67);
        t = p_129;
        {
          ATerm t_67 = t;
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
                ATerm w_67 = t;
                int x_67 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(x_67);
                  }
                else
                  {
                    t = w_67;
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
              t = t_67;
            }
        }
        t = term_y_33;
      }
    else
      {
        t = c_67;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_y_33;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                s_129 = ATgetArgument(t, 0);
                {
                  ATerm y_129 = NULL;
                  t = s_129;
                  t = free_vars_3_0(d_17, e_17, tboundin_3_0, t);
                  t = map_1_0(i_17, t);
                  y_129 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_64, y_129);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    s_129 = ATgetArgument(t, 0);
                    t_129 = ATgetArgument(t, 1);
                    {
                      ATerm m_131 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, s_129, t_129);
                      t = free_vars_3_0(j_17, k_17, tboundin_3_0, t);
                      t = map_1_0(o_17, t);
                      m_131 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_k_64, m_131);
                    }
                  }
                else
                  {
                    ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm a_68 = ATgetArgument(t, 0);
                        ATerm b_68 = ATgetArgument(t, 1);
                        ATerm c_68 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_i_45;
                    r_57 = t;
                    t = (ATerm) ATinsert(ATempty, term_q_64);
                    s_57 = t;
                    t = SSL_printnl(r_57, s_57);
                    t = term_o_45;
                    q_57 = t;
                    t = SSL_exit(q_57);
                    t = (ATerm) ATinsert(ATempty, term_q_64);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm z_129 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_129);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm d_68 = t;
  int f_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_68);
    }
  else
    {
      t = d_68;
      {
        ATerm h_68 = t;
        int i_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_68);
          }
        else
          {
            t = h_68;
            {
              ATerm l_68 = t;
              int m_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_130 = NULL,c_130 = NULL,d_130 = NULL,e_130 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_130 = ATgetArgument(t, 0);
                      c_130 = ATgetArgument(t, 1);
                      d_130 = ATgetArgument(t, 2);
                      e_130 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_130;
                  t = map_1_0(f_17, t);
                  LocalPopChoice(m_68);
                }
              else
                {
                  t = l_68;
                  {
                    ATerm n_68 = t;
                    int r_68 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(r_68);
                      }
                    else
                      {
                        t = n_68;
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
  ATerm m_130 = NULL;
  ATerm s_68 = t;
  int t_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_130 = ATgetArgument(t, 0);
          {
            ATerm x_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_68);
      t = m_130;
    }
  else
    {
      t = s_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_130;
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
  ATerm r_130 = NULL;
  ATerm y_68 = t;
  int z_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_130 = ATgetArgument(t, 0);
          {
            ATerm b_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_68);
      t = r_130;
    }
  else
    {
      t = y_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_130;
    }
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm h_131 = NULL;
  h_131 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, h_131);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm n_131 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_131);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm c_69 = t;
  int d_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_69);
    }
  else
    {
      t = c_69;
      {
        ATerm e_69 = t;
        int j_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_69);
          }
        else
          {
            t = e_69;
            {
              ATerm k_69 = t;
              int o_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_131 = NULL,q_131 = NULL,u_131 = NULL,v_131 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_131 = ATgetArgument(t, 0);
                      q_131 = ATgetArgument(t, 1);
                      u_131 = ATgetArgument(t, 2);
                      v_131 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_131;
                  t = map_1_0(l_17, t);
                  LocalPopChoice(o_69);
                }
              else
                {
                  t = k_69;
                  {
                    ATerm v_69 = t;
                    int x_69 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(x_69);
                      }
                    else
                      {
                        t = v_69;
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
  ATerm f_132 = NULL;
  ATerm z_69 = t;
  int a_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_132 = ATgetArgument(t, 0);
          {
            ATerm b_70 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_70);
      t = f_132;
    }
  else
    {
      t = z_69;
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
static ATerm m_17 (ATerm t)
{
  t = map_1_0(n_17, t);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm m_132 = NULL;
  ATerm c_70 = t;
  int e_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_132 = ATgetArgument(t, 0);
          {
            ATerm g_70 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_70);
      t = m_132;
    }
  else
    {
      t = c_70;
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
static ATerm o_17 (ATerm t)
{
  ATerm r_132 = NULL;
  r_132 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_132);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  ATerm i_70 = t;
  int j_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(j_16, t);
      t = alltd_1_0(k_16, t);
      LocalPopChoice(j_70);
    }
  else
    {
      t = i_70;
      t = alltd_1_0(c_17, t);
    }
  return(t);
}
ATerm DRDef_LHS_1_0 (ATerm v_151 (ATerm), ATerm t)
{
  ATerm f_133 = NULL,i_133 = NULL;
  ATerm k_70 = t;
  int l_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          ATerm m_70 = ATgetArgument(t, 0);
          f_133 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      LocalPopChoice(l_70);
      t = f_133;
      t = v_151(t);
    }
  else
    {
      t = k_70;
      {
        ATerm o_70 = t;
        int p_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                ATerm r_70 = ATgetArgument(t, 0);
                f_133 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(p_70);
            t = f_133;
            if(match_cons(t, sym_Rule_3))
              {
                i_133 = ATgetArgument(t, 0);
                {
                  ATerm s_70 = ATgetArgument(t, 1);
                }
                {
                  ATerm t_70 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = i_133;
            t = v_151(t);
          }
        else
          {
            t = o_70;
            if(match_cons(t, sym_AddDynRule_2))
              {
                ATerm u_70 = ATgetArgument(t, 0);
                f_133 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_133;
            if(match_cons(t, sym_Rule_3))
              {
                i_133 = ATgetArgument(t, 0);
                {
                  ATerm v_70 = ATgetArgument(t, 1);
                }
                {
                  ATerm w_70 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = i_133;
            t = v_151(t);
          }
      }
    }
  return(t);
}
static ATerm t_136 (ATerm i_135, ATerm j_135, ATerm k_135, ATerm l_135, ATerm t_135, ATerm u_135, ATerm v_135, ATerm t)
{
  t = v_135;
  {
    ATerm x_70 = t;
    if((PushChoice() == 0))
      {
        t = t_135;
        if(match_cons(t, sym_Op_2))
          {
            ATerm z_70 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_70) != ATmakeSymbol("Undefined", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_71 = ATgetArgument(t, 1);
              if(((ATgetType(a_71) != AT_LIST) || !(ATisEmpty(a_71))))
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
        t = x_70;
      }
  }
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, i_135, j_135, k_135)), (ATerm) ATmakeAppl(sym_Rule_3, l_135, t_135, u_135));
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_b_71;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm i_136 = NULL,j_136 = NULL,k_136 = NULL,l_136 = NULL,m_136 = NULL,n_136 = NULL,o_136 = NULL,p_136 = NULL,q_136 = NULL,r_136 = NULL;
  k_136 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      l_136 = ATgetArgument(t, 0);
      m_136 = ATgetArgument(t, 1);
      n_136 = ATgetArgument(t, 2);
      o_136 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = o_136;
  if(match_cons(t, sym_Rule_3))
    {
      p_136 = ATgetArgument(t, 0);
      q_136 = ATgetArgument(t, 1);
      r_136 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_136;
  if(match_cons(t, sym_Op_2))
    {
      i_136 = ATgetArgument(t, 0);
      j_136 = ATgetArgument(t, 1);
      t = j_136;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = i_136;
          if(match_string(t, "Undefined"))
            {
              ATerm c_71 = t;
              int e_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_136;
                  {
                    ATerm f_71 = t;
                    int g_71 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = r_136;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(g_71);
                      }
                    else
                      {
                        t = f_71;
                        {
                          ATerm h_58 = NULL,l_58 = NULL;
                          t = term_i_45;
                          h_58 = t;
                          t = (ATerm) ATinsert(ATempty, term_k_71);
                          l_58 = t;
                          t = SSL_printnl(h_58, l_58);
                          t = k_136;
                          t = debug_1_0(p_17, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, l_136, m_136, n_136)), p_136);
                  LocalPopChoice(e_71);
                }
              else
                {
                  t = c_71;
                  t = t_136(l_136, m_136, n_136, p_136, q_136, r_136, k_136, t);
                }
            }
          else
            {
              t = t_136(l_136, m_136, n_136, p_136, q_136, r_136, k_136, t);
            }
        }
      else
        {
          t = i_136;
          t = t_136(l_136, m_136, n_136, p_136, q_136, r_136, k_136, t);
        }
    }
  else
    {
      t = t_136(l_136, m_136, n_136, p_136, q_136, r_136, k_136, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm s_123 (ATerm), ATerm t)
{
  ATerm u_136 = NULL,v_136 = NULL,w_136 = NULL,x_136 = NULL;
  u_136 = t;
  t = s_123(t);
  v_136 = t;
  t = term_i_45;
  w_136 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_136), v_136);
  x_136 = t;
  t = SSL_printnl(w_136, x_136);
  t = u_136;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_b_71;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm y_136 = NULL,z_136 = NULL,a_137 = NULL,d_137 = NULL,e_137 = NULL,f_137 = NULL;
  f_137 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm l_71 = ATgetArgument(t, 0);
      if(match_cons(l_71, sym_DynRuleId_1))
        {
          ATerm p_71 = ATgetArgument(l_71, 0);
          if(match_cons(p_71, sym_RDecT_3))
            {
              y_136 = ATgetArgument(p_71, 0);
              z_136 = ATgetArgument(p_71, 1);
              a_137 = ATgetArgument(p_71, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm o_71 = ATgetArgument(t, 1);
        if(match_cons(o_71, sym_Rule_3))
          {
            d_137 = ATgetArgument(o_71, 0);
            {
              ATerm q_71 = ATgetArgument(o_71, 1);
              if(match_cons(q_71, sym_Op_2))
                {
                  ATerm t_71 = ATgetArgument(q_71, 0);
                  if((ATgetSymbol((ATermAppl) t_71) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm u_71 = ATgetArgument(q_71, 1);
                    if(((ATgetType(u_71) != AT_LIST) || !(ATisEmpty(u_71))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            e_137 = ATgetArgument(o_71, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm v_71 = t;
    int w_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_137;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(w_71);
      }
    else
      {
        t = v_71;
        {
          ATerm g_137 = NULL,h_137 = NULL;
          t = term_i_45;
          g_137 = t;
          t = (ATerm) ATinsert(ATempty, term_k_71);
          h_137 = t;
          t = SSL_printnl(g_137, h_137);
          t = f_137;
          t = debug_1_0(q_17, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, y_136, z_136, a_137)), d_137);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm y_137 = NULL;
  y_137 = t;
  {
    ATerm y_71 = t;
    int z_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_OverrideDynamicRules_1))
          {
            ATerm a_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(z_71);
        t = y_137;
      }
    else
      {
        t = y_71;
        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
          {
            ATerm b_72 = ATgetArgument(t, 0);
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
  t = term_c_72;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm d_72 = t;
  int f_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_138 = NULL;
      c_138 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm g_72 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_138;
      LocalPopChoice(f_72);
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
      t = d_72;
      {
        ATerm h_72 = t;
        int j_72 = stack_ptr;
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
            LocalPopChoice(j_72);
            {
              ATerm n_138 = NULL,o_138 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  n_138 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = n_138;
              t = map_1_0(x_17, t);
              o_138 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, o_138);
            }
          }
        else
          {
            t = h_72;
            {
              ATerm l_72 = t;
              int p_72 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_138 = NULL;
                  u_138 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm q_72 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = u_138;
                  LocalPopChoice(p_72);
                  {
                    ATerm v_138 = NULL,w_138 = NULL;
                    if(match_cons(t, sym_OverrideDynamicRules_1))
                      {
                        v_138 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_138;
                    t = map_1_0(z_17, t);
                    w_138 = t;
                    t = (ATerm) ATmakeAppl(sym_GenDynRules_1, w_138);
                  }
                }
              else
                {
                  t = l_72;
                  {
                    ATerm r_72 = t;
                    int s_72 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_139 = NULL;
                        i_139 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm t_72 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = i_139;
                        LocalPopChoice(s_72);
                        {
                          ATerm j_139 = NULL,k_139 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              j_139 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = j_139;
                          t = map_1_0(b_18, t);
                          k_139 = t;
                          t = (ATerm) ATmakeAppl(sym_GenDynRules_1, k_139);
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
  ATerm u_72 = t;
  int v_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UpgradeUndefine_0_0(t);
      LocalPopChoice(v_72);
    }
  else
    {
      t = u_72;
    }
  {
    ATerm w_72 = t;
    int x_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_138 = NULL,s_58 = NULL,t_58 = NULL;
        h_138 = t;
        t = (ATerm) ATempty;
        s_58 = t;
        t = term_c_72;
        t_58 = t;
        t = term_y_72;
        t = v_14(t_58, s_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm z_72 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_72) != ATmakeSymbol("c_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = h_138;
        LocalPopChoice(x_72);
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
        t = w_72;
      }
  }
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = RDefToDRDef_extend_0_0(t);
  {
    ATerm a_73 = t;
    int b_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_138 = NULL,w_58 = NULL,x_58 = NULL;
        p_138 = t;
        t = (ATerm) ATempty;
        w_58 = t;
        t = term_c_72;
        x_58 = t;
        t = term_y_72;
        t = v_14(x_58, w_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm d_73 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_73) != ATmakeSymbol("c_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = p_138;
        LocalPopChoice(b_73);
        {
          ATerm q_138 = NULL,r_138 = NULL;
          static ATerm y_17 (ATerm t)
          {
            ATerm s_138 = NULL;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_138 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_AddLabelDynRuleId_2, s_138, not_null(r_138));
            return(t);
          }
          q_138 = t;
          t = DRDef_LHS_1_0(dummify_0_0, t);
          if(((r_138 != NULL) && (r_138 != t)))
            _fail(t);
          else
            r_138 = t;
          t = q_138;
          t = oncetd_1_0(y_17, t);
        }
      }
    else
      {
        t = a_73;
      }
  }
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm x_138 = NULL,y_138 = NULL,z_138 = NULL,a_139 = NULL,b_139 = NULL,c_139 = NULL,d_139 = NULL,e_139 = NULL;
  static ATerm a_18 (ATerm t)
  {
    ATerm h_139 = NULL;
    if(match_cons(t, sym_DynRuleId_1))
      {
        h_139 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LabeledDynRuleId_2, h_139, not_null(y_138));
    return(t);
  }
  if(match_cons(t, sym_RDefT_4))
    {
      z_138 = ATgetArgument(t, 0);
      a_139 = ATgetArgument(t, 1);
      b_139 = ATgetArgument(t, 2);
      {
        ATerm e_73 = ATgetArgument(t, 3);
        if(match_cons(e_73, sym_Rule_3))
          {
            c_139 = ATgetArgument(e_73, 0);
            d_139 = ATgetArgument(e_73, 1);
            e_139 = ATgetArgument(e_73, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, z_138, a_139, b_139)), (ATerm) ATmakeAppl(sym_Rule_3, c_139, d_139, e_139));
  {
    ATerm f_73 = t;
    int g_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UpgradeUndefine_0_0(t);
        LocalPopChoice(g_73);
      }
    else
      {
        t = f_73;
      }
  }
  x_138 = t;
  t = DRDef_LHS_1_0(dummify_0_0, t);
  if(((y_138 != NULL) && (y_138 != t)))
    _fail(t);
  else
    y_138 = t;
  t = x_138;
  t = oncetd_1_0(a_18, t);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm l_139 = NULL,m_139 = NULL;
  static ATerm c_18 (ATerm t)
  {
    ATerm n_139 = NULL;
    if(match_cons(t, sym_DynRuleId_1))
      {
        n_139 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LabeledDynRuleId_2, n_139, not_null(m_139));
    return(t);
  }
  t = RDefToDRDef_extend_0_0(t);
  l_139 = t;
  t = DRDef_LHS_1_0(dummify_0_0, t);
  if(((m_139 != NULL) && (m_139 != t)))
    _fail(t);
  else
    m_139 = t;
  t = l_139;
  t = oncetd_1_0(c_18, t);
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  ATerm h_73 = t;
  int i_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_137 = NULL,w_137 = NULL,x_137 = NULL;
      t = oncetd_1_0(r_17, t);
      v_137 = t;
      t = (ATerm) ATempty;
      w_137 = t;
      t = term_k_73;
      x_137 = t;
      t = term_l_73;
      t = w_14(t_17, w_137, x_137, t);
      t = v_137;
      LocalPopChoice(i_73);
    }
  else
    {
      t = h_73;
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
  ATerm b_140 = NULL,c_140 = NULL,d_140 = NULL,e_140 = NULL,t_31 = NULL;
  e_140 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      c_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_140);
  b_140 = t;
  t = c_140;
  t = topdown_1_0(g_18, t);
  t = listtd_1_0(h_18, t);
  d_140 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, d_140);
  t_31 = t;
  t = SSLsetAnnotations(t_31, b_140);
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
  ATerm m_73 = t;
  int n_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynRuleScope_0_0(t);
      LocalPopChoice(n_73);
    }
  else
    {
      t = m_73;
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
  ATerm h_140 = NULL,i_140 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_140 = ATgetFirst((ATermList) t);
      i_140 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_14(h_140, i_140, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm s_139 = NULL,t_139 = NULL,u_139 = NULL,v_139 = NULL,w_139 = NULL,x_139 = NULL,y_139 = NULL,z_139 = NULL,v_31 = NULL,u_31 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  z_139 = t;
  if(match_cons(t, sym_Specification_1))
    {
      t_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_139);
  s_139 = t;
  t = t_139;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_139 = ATgetFirst((ATermList) t);
      w_139 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_139);
  u_139 = t;
  t = w_139;
  t = Cons_2_0(_id, d_18, t);
  x_139 = t;
  t = (ATerm) ATinsert(CheckATermList(x_139), v_139);
  u_31 = t;
  t = SSLsetAnnotations(u_31, u_139);
  y_139 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_139);
  v_31 = t;
  t = SSLsetAnnotations(v_31, s_139);
  return(t);
}
ATerm tboundin_3_0 (ATerm o_150 (ATerm), ATerm p_150 (ATerm), ATerm q_150 (ATerm), ATerm t)
{
  ATerm z_145 = NULL,a_146 = NULL,b_146 = NULL,c_146 = NULL,d_146 = NULL;
  c_146 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_146 = ATgetArgument(t, 0);
      b_146 = ATgetArgument(t, 1);
      {
        ATerm c_59 = NULL,f_59 = NULL,h_59 = NULL,b_32 = NULL;
        t = SSLgetAnnotations(c_146);
        c_59 = t;
        t = d_146;
        t = q_150(t);
        f_59 = t;
        t = b_146;
        t = o_150(t);
        h_59 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, f_59, h_59);
        b_32 = t;
        t = SSLsetAnnotations(b_32, c_59);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          d_146 = ATgetArgument(t, 0);
          {
            ATerm p_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,v_59 = NULL,w_59 = NULL,x_59 = NULL,y_59 = NULL,z_59 = NULL,h_32 = NULL,g_32 = NULL;
            t = SSLgetAnnotations(c_146);
            p_59 = t;
            t = d_146;
            if(match_cons(t, sym_Rule_3))
              {
                s_59 = ATgetArgument(t, 0);
                t_59 = ATgetArgument(t, 1);
                v_59 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_146);
            r_59 = t;
            t = s_59;
            t = o_150(t);
            w_59 = t;
            t = t_59;
            t = o_150(t);
            x_59 = t;
            t = v_59;
            t = o_150(t);
            y_59 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, w_59, x_59, y_59);
            g_32 = t;
            t = SSLsetAnnotations(g_32, r_59);
            z_59 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, z_59);
            h_32 = t;
            t = SSLsetAnnotations(h_32, p_59);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              d_146 = ATgetArgument(t, 0);
              b_146 = ATgetArgument(t, 1);
              z_145 = ATgetArgument(t, 2);
              {
                ATerm i_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,i_32 = NULL;
                t = SSLgetAnnotations(c_146);
                i_60 = t;
                t = d_146;
                t = q_150(t);
                n_60 = t;
                t = b_146;
                t = q_150(t);
                o_60 = t;
                t = z_145;
                t = q_150(t);
                p_60 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, n_60, o_60, p_60);
                i_32 = t;
                t = SSLsetAnnotations(i_32, i_60);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  d_146 = ATgetArgument(t, 0);
                  b_146 = ATgetArgument(t, 1);
                  z_145 = ATgetArgument(t, 2);
                  a_146 = ATgetArgument(t, 3);
                  {
                    ATerm s_61 = NULL,j_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL,j_32 = NULL;
                    t = SSLgetAnnotations(c_146);
                    s_61 = t;
                    t = d_146;
                    t = q_150(t);
                    j_62 = t;
                    t = b_146;
                    t = q_150(t);
                    k_62 = t;
                    t = z_145;
                    t = q_150(t);
                    l_62 = t;
                    t = a_146;
                    t = o_150(t);
                    m_62 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, j_62, k_62, l_62, m_62);
                    j_32 = t;
                    t = SSLsetAnnotations(j_32, s_61);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_146 = ATgetArgument(t, 0);
                      b_146 = ATgetArgument(t, 1);
                      z_145 = ATgetArgument(t, 2);
                      a_146 = ATgetArgument(t, 3);
                      {
                        ATerm a_63 = NULL,q_63 = NULL,r_63 = NULL,v_63 = NULL,w_63 = NULL,o_32 = NULL;
                        t = SSLgetAnnotations(c_146);
                        a_63 = t;
                        t = d_146;
                        t = q_150(t);
                        q_63 = t;
                        t = b_146;
                        t = q_150(t);
                        r_63 = t;
                        t = z_145;
                        t = q_150(t);
                        v_63 = t;
                        t = a_146;
                        t = o_150(t);
                        w_63 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_63, r_63, v_63, w_63);
                        o_32 = t;
                        t = SSLsetAnnotations(o_32, a_63);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          d_146 = ATgetArgument(t, 0);
                          b_146 = ATgetArgument(t, 1);
                          {
                            ATerm o_64 = NULL,s_64 = NULL,t_64 = NULL,p_32 = NULL;
                            t = SSLgetAnnotations(c_146);
                            o_64 = t;
                            t = d_146;
                            t = q_150(t);
                            s_64 = t;
                            t = b_146;
                            t = o_150(t);
                            t_64 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, s_64, t_64);
                            p_32 = t;
                            t = SSLsetAnnotations(p_32, o_64);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              d_146 = ATgetArgument(t, 0);
                              b_146 = ATgetArgument(t, 1);
                              {
                                ATerm f_65 = NULL,s_65 = NULL,t_65 = NULL,q_32 = NULL;
                                t = SSLgetAnnotations(c_146);
                                f_65 = t;
                                t = d_146;
                                t = q_150(t);
                                s_65 = t;
                                t = b_146;
                                t = o_150(t);
                                t_65 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, s_65, t_65);
                                q_32 = t;
                                t = SSLsetAnnotations(q_32, f_65);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  d_146 = ATgetArgument(t, 0);
                                  b_146 = ATgetArgument(t, 1);
                                  {
                                    ATerm j_66 = NULL,m_66 = NULL,n_66 = NULL,r_32 = NULL;
                                    t = SSLgetAnnotations(c_146);
                                    j_66 = t;
                                    t = d_146;
                                    t = q_150(t);
                                    m_66 = t;
                                    t = b_146;
                                    t = o_150(t);
                                    n_66 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, m_66, n_66);
                                    r_32 = t;
                                    t = SSLsetAnnotations(r_32, j_66);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      d_146 = ATgetArgument(t, 0);
                                      {
                                        ATerm d_67 = NULL,h_67 = NULL,s_32 = NULL;
                                        t = SSLgetAnnotations(c_146);
                                        d_67 = t;
                                        t = d_146;
                                        t = o_150(t);
                                        h_67 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, h_67);
                                        s_32 = t;
                                        t = SSLsetAnnotations(s_32, d_67);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          d_146 = ATgetArgument(t, 0);
                                          {
                                            ATerm e_68 = NULL,g_68 = NULL,u_32 = NULL;
                                            t = SSLgetAnnotations(c_146);
                                            e_68 = t;
                                            t = d_146;
                                            t = o_150(t);
                                            g_68 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, g_68);
                                            u_32 = t;
                                            t = SSLsetAnnotations(u_32, e_68);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              d_146 = ATgetArgument(t, 0);
                                              {
                                                ATerm o_68 = NULL,a_69 = NULL,v_32 = NULL;
                                                t = SSLgetAnnotations(c_146);
                                                o_68 = t;
                                                t = d_146;
                                                t = o_150(t);
                                                a_69 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, a_69);
                                                v_32 = t;
                                                t = SSLsetAnnotations(v_32, o_68);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  d_146 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm u_69 = NULL,w_69 = NULL,w_32 = NULL;
                                                    t = SSLgetAnnotations(c_146);
                                                    u_69 = t;
                                                    t = d_146;
                                                    t = o_150(t);
                                                    w_69 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, w_69);
                                                    w_32 = t;
                                                    t = SSLsetAnnotations(w_32, u_69);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm d_70 = NULL,f_70 = NULL,x_32 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      d_146 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(c_146);
                                                  d_70 = t;
                                                  t = d_146;
                                                  t = o_150(t);
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
ATerm dynrule_targs_1_0 (ATerm x_150 (ATerm), ATerm t)
{
  ATerm z_146 = NULL,a_147 = NULL,d_147 = NULL;
  ATerm o_73 = t;
  int q_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          z_146 = ATgetArgument(t, 0);
          {
            ATerm r_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_73);
      t = z_146;
      if(match_cons(t, sym_DynRuleId_1))
        {
          a_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_147;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm s_73 = ATgetArgument(t, 0);
          ATerm t_73 = ATgetArgument(t, 1);
          d_147 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_147;
    }
  else
    {
      t = o_73;
      {
        ATerm u_73 = t;
        int v_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                z_146 = ATgetArgument(t, 0);
                {
                  ATerm w_73 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(v_73);
            t = z_146;
            if(match_cons(t, sym_DynRuleId_1))
              {
                a_147 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_147;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm x_73 = ATgetArgument(t, 0);
                ATerm y_73 = ATgetArgument(t, 1);
                d_147 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_147;
          }
        else
          {
            t = u_73;
            if(match_cons(t, sym_AddDynRule_2))
              {
                z_146 = ATgetArgument(t, 0);
                {
                  ATerm z_73 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = z_146;
            if(match_cons(t, sym_DynRuleId_1))
              {
                a_147 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_147;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm a_74 = ATgetArgument(t, 0);
                ATerm b_74 = ATgetArgument(t, 1);
                d_147 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_147;
          }
      }
    }
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm t_147 = NULL;
  ATerm d_74 = t;
  int f_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_147 = ATgetArgument(t, 0);
          {
            ATerm g_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_74);
      t = t_147;
    }
  else
    {
      t = d_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_147;
    }
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm z_147 = NULL;
  ATerm h_74 = t;
  int i_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_147 = ATgetArgument(t, 0);
          {
            ATerm j_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_74);
      t = z_147;
    }
  else
    {
      t = h_74;
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
ATerm Bind8_0_0 (ATerm t)
{
  ATerm o_147 = NULL;
  ATerm k_74 = t;
  int l_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm m_74 = ATgetArgument(t, 0);
          ATerm n_74 = ATgetArgument(t, 1);
          o_147 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(l_74);
      t = o_147;
      t = map_1_0(j_18, t);
    }
  else
    {
      t = k_74;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm o_74 = ATgetArgument(t, 0);
          ATerm p_74 = ATgetArgument(t, 1);
          o_147 = ATgetArgument(t, 2);
          {
            ATerm r_74 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = o_147;
      t = map_1_0(k_18, t);
    }
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm z_148 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_148);
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm t_74 = t;
  int u_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_74);
    }
  else
    {
      t = t_74;
      {
        ATerm v_74 = t;
        int w_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_74);
          }
        else
          {
            t = v_74;
            {
              ATerm x_74 = t;
              int y_74 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_149 = NULL,c_149 = NULL,d_149 = NULL,e_149 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_149 = ATgetArgument(t, 0);
                      c_149 = ATgetArgument(t, 1);
                      d_149 = ATgetArgument(t, 2);
                      e_149 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_149;
                  t = map_1_0(n_18, t);
                  LocalPopChoice(y_74);
                }
              else
                {
                  t = x_74;
                  {
                    ATerm z_74 = t;
                    int a_75 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(a_75);
                      }
                    else
                      {
                        t = z_74;
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
  ATerm l_149 = NULL;
  ATerm b_75 = t;
  int c_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_149 = ATgetArgument(t, 0);
          {
            ATerm d_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_75);
      t = l_149;
    }
  else
    {
      t = b_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_149 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_149;
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
  ATerm q_149 = NULL;
  ATerm f_75 = t;
  int g_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_149 = ATgetArgument(t, 0);
          {
            ATerm j_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_75);
      t = q_149;
    }
  else
    {
      t = f_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_149 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_149;
    }
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm w_149 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_149);
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
              ATerm o_75 = t;
              int p_75 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_149 = NULL,z_149 = NULL,a_150 = NULL,b_150 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_149 = ATgetArgument(t, 0);
                      z_149 = ATgetArgument(t, 1);
                      a_150 = ATgetArgument(t, 2);
                      b_150 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_150;
                  t = map_1_0(s_18, t);
                  LocalPopChoice(p_75);
                }
              else
                {
                  t = o_75;
                  {
                    ATerm r_75 = t;
                    int s_75 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_75);
                      }
                    else
                      {
                        t = r_75;
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
  ATerm i_150 = NULL;
  ATerm x_75 = t;
  int y_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_150 = ATgetArgument(t, 0);
          {
            ATerm z_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_75);
      t = i_150;
    }
  else
    {
      t = x_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_150;
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
  ATerm n_150 = NULL;
  ATerm a_76 = t;
  int b_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_150 = ATgetArgument(t, 0);
          {
            ATerm c_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_76);
      t = n_150;
    }
  else
    {
      t = a_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_150;
    }
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm u_150 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_150);
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm d_76 = t;
  int e_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_76);
    }
  else
    {
      t = d_76;
      {
        ATerm f_76 = t;
        int g_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_76);
          }
        else
          {
            t = f_76;
            {
              ATerm h_76 = t;
              int i_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_150 = NULL,y_150 = NULL,z_150 = NULL,a_151 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_150 = ATgetArgument(t, 0);
                      y_150 = ATgetArgument(t, 1);
                      z_150 = ATgetArgument(t, 2);
                      a_151 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_150;
                  t = map_1_0(x_18, t);
                  LocalPopChoice(i_76);
                }
              else
                {
                  t = h_76;
                  {
                    ATerm l_76 = t;
                    int o_76 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_76);
                      }
                    else
                      {
                        t = l_76;
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
  ATerm h_151 = NULL;
  ATerm p_76 = t;
  int q_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_151 = ATgetArgument(t, 0);
          {
            ATerm t_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_76);
      t = h_151;
    }
  else
    {
      t = p_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_151;
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
  ATerm x_151 = NULL;
  ATerm u_76 = t;
  int v_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_151 = ATgetArgument(t, 0);
          {
            ATerm w_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_76);
      t = x_151;
    }
  else
    {
      t = u_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_151;
    }
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm c_152 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_152);
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm x_76 = t;
  int y_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_76);
    }
  else
    {
      t = x_76;
      {
        ATerm z_76 = t;
        int a_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_77);
          }
        else
          {
            t = z_76;
            {
              ATerm b_77 = t;
              int c_77 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_152 = NULL,f_152 = NULL,g_152 = NULL,h_152 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_152 = ATgetArgument(t, 0);
                      f_152 = ATgetArgument(t, 1);
                      g_152 = ATgetArgument(t, 2);
                      h_152 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_152;
                  t = map_1_0(c_19, t);
                  LocalPopChoice(c_77);
                }
              else
                {
                  t = b_77;
                  {
                    ATerm d_77 = t;
                    int e_77 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(e_77);
                      }
                    else
                      {
                        t = d_77;
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
  ATerm o_152 = NULL;
  ATerm f_77 = t;
  int g_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_152 = ATgetArgument(t, 0);
          {
            ATerm i_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_77);
      t = o_152;
    }
  else
    {
      t = f_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_152;
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
  ATerm t_152 = NULL;
  ATerm j_77 = t;
  int k_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_152 = ATgetArgument(t, 0);
          {
            ATerm l_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_77);
      t = t_152;
    }
  else
    {
      t = j_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_152;
    }
  return(t);
}
static ATerm h_19 (ATerm t)
{
  ATerm y_152 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_152);
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm m_77 = t;
  int n_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_77);
    }
  else
    {
      t = m_77;
      {
        ATerm o_77 = t;
        int p_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm a_153 = NULL,b_153 = NULL,c_153 = NULL,d_153 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_153 = ATgetArgument(t, 0);
                      b_153 = ATgetArgument(t, 1);
                      c_153 = ATgetArgument(t, 2);
                      d_153 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_153;
                  t = map_1_0(n_19, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_77);
                      }
                    else
                      {
                        t = s_77;
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
  ATerm l_153 = NULL;
  ATerm v_77 = t;
  int w_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_153 = ATgetArgument(t, 0);
          {
            ATerm x_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_77);
      t = l_153;
    }
  else
    {
      t = v_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_153;
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
  ATerm q_153 = NULL;
  ATerm y_77 = t;
  int z_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_153 = ATgetArgument(t, 0);
          {
            ATerm a_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_77);
      t = q_153;
    }
  else
    {
      t = y_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_153;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm x_148 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      x_148 = ATgetArgument(t, 0);
      t = x_148;
      t = free_vars_3_0(l_18, m_18, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          x_148 = ATgetArgument(t, 0);
          t = x_148;
          t = free_vars_3_0(q_18, r_18, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              x_148 = ATgetArgument(t, 0);
              t = x_148;
              t = free_vars_3_0(v_18, w_18, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  x_148 = ATgetArgument(t, 0);
                  t = x_148;
                  t = free_vars_3_0(a_19, b_19, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      x_148 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_148;
                  t = free_vars_3_0(h_19, j_19, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm t_19 (ATerm t)
{
  ATerm f_154 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_154);
  return(t);
}
static ATerm u_19 (ATerm t)
{
  ATerm b_78 = t;
  int c_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_78);
    }
  else
    {
      t = b_78;
      {
        ATerm d_78 = t;
        int e_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm h_154 = NULL,i_154 = NULL,j_154 = NULL,k_154 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_154 = ATgetArgument(t, 0);
                      i_154 = ATgetArgument(t, 1);
                      j_154 = ATgetArgument(t, 2);
                      k_154 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_154;
                  t = map_1_0(y_19, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(j_78);
                      }
                    else
                      {
                        t = i_78;
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
  ATerm r_154 = NULL;
  ATerm k_78 = t;
  int l_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_154 = ATgetArgument(t, 0);
          {
            ATerm m_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_78);
      t = r_154;
    }
  else
    {
      t = k_78;
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
static ATerm z_19 (ATerm t)
{
  t = map_1_0(a_20, t);
  return(t);
}
static ATerm a_20 (ATerm t)
{
  ATerm w_154 = NULL;
  ATerm n_78 = t;
  int o_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_154 = ATgetArgument(t, 0);
          {
            ATerm p_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_78);
      t = w_154;
    }
  else
    {
      t = n_78;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_154;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm y_153 = NULL,c_154 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      c_154 = ATgetArgument(t, 0);
      t = c_154;
      if(match_cons(t, sym_Rule_3))
        {
          y_153 = ATgetArgument(t, 0);
          {
            ATerm r_78 = ATgetArgument(t, 1);
          }
          {
            ATerm s_78 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = y_153;
      t = free_vars_3_0(t_19, u_19, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          c_154 = ATgetArgument(t, 0);
          {
            ATerm t_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_154;
    }
  return(t);
}
static ATerm k_14 (ATerm o_128 (ATerm), ATerm k_31, ATerm j_31, ATerm t)
{
  static ATerm p_155 (ATerm t)
  {
    ATerm k_155 = NULL,l_155 = NULL,m_155 = NULL;
    k_155 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_155 = ATgetFirst((ATermList) t);
            m_155 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm v_78 = t;
          int x_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_155;
              {
                static ATerm c_20 (ATerm t)
                {
                  t = j_31;
                  return(t);
                }
                t = l_14(o_128, c_20, l_155, m_155, t);
              }
              t = p_155(t);
              LocalPopChoice(x_78);
            }
          else
            {
              t = v_78;
              {
                ATerm n_70 = NULL,q_70 = NULL,z_33 = NULL;
                t = SSLgetAnnotations(k_155);
                n_70 = t;
                t = m_155;
                t = p_155(t);
                q_70 = t;
                t = (ATerm) ATinsert(CheckATermList(q_70), l_155);
                z_33 = t;
                t = SSLsetAnnotations(z_33, n_70);
              }
            }
        }
      }
    return(t);
  }
  t = k_31;
  t = p_155(t);
  return(t);
}
static ATerm l_14 (ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm o_31, ATerm n_31, ATerm t)
{
  t = s_128(t);
  {
    static ATerm f_20 (ATerm t)
    {
      ATerm t_155 = NULL;
      t_155 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_31, t_155);
      t = r_128(t);
      return(t);
    }
    t = fetch_1_0(f_20, t);
  }
  t = n_31;
  return(t);
}
static ATerm m_14 (ATerm j_128 (ATerm), ATerm i_31, ATerm h_31, ATerm t)
{
  static ATerm j_156 (ATerm t)
  {
    ATerm e_156 = NULL,f_156 = NULL,g_156 = NULL;
    e_156 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_156;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_156 = ATgetFirst((ATermList) t);
            g_156 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_78 = t;
          int z_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_156;
              {
                static ATerm l_20 (ATerm t)
                {
                  t = h_31;
                  return(t);
                }
                t = l_14(j_128, l_20, f_156, g_156, t);
              }
              t = j_156(t);
              LocalPopChoice(z_78);
            }
          else
            {
              t = y_78;
              {
                ATerm y_70 = NULL,d_71 = NULL,b_34 = NULL;
                t = SSLgetAnnotations(e_156);
                y_70 = t;
                t = g_156;
                t = j_156(t);
                d_71 = t;
                t = (ATerm) ATinsert(CheckATermList(d_71), f_156);
                b_34 = t;
                t = SSLsetAnnotations(b_34, y_70);
              }
            }
        }
      }
    return(t);
  }
  t = i_31;
  t = j_156(t);
  return(t);
}
ATerm genzip_4_0 (ATerm h_126 (ATerm), ATerm i_126 (ATerm), ATerm j_126 (ATerm), ATerm k_126 (ATerm), ATerm t)
{
  static ATerm r_156 (ATerm t)
  {
    ATerm a_79 = t;
    int b_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_126(t);
        LocalPopChoice(b_79);
      }
    else
      {
        t = a_79;
        {
          ATerm l_156 = NULL,m_156 = NULL,n_156 = NULL,o_156 = NULL,p_156 = NULL,q_156 = NULL,d_34 = NULL;
          t = i_126(t);
          q_156 = t;
          if(match_cons(t, sym__2))
            {
              m_156 = ATgetArgument(t, 0);
              n_156 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(q_156);
          l_156 = t;
          t = m_156;
          t = k_126(t);
          o_156 = t;
          t = n_156;
          t = r_156(t);
          p_156 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_156, p_156);
          d_34 = t;
          t = SSLsetAnnotations(d_34, l_156);
          t = j_126(t);
        }
      }
    return(t);
  }
  t = r_156(t);
  return(t);
}
static ATerm n_20 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_79 = ATgetArgument(t, 0);
      if(((ATgetType(c_79) != AT_LIST) || !(ATisEmpty(c_79))))
        _fail(t);
      {
        ATerm d_79 = ATgetArgument(t, 1);
        if(((ATgetType(d_79) != AT_LIST) || !(ATisEmpty(d_79))))
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
  ATerm y_156 = NULL,z_156 = NULL,a_157 = NULL,b_157 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_79 = ATgetArgument(t, 0);
      if(((ATgetType(e_79) == AT_LIST) && !(ATisEmpty(e_79))))
        {
          y_156 = ATgetFirst((ATermList) e_79);
          z_156 = (ATerm) ATgetNext((ATermList) e_79);
        }
      else
        _fail(t);
      {
        ATerm f_79 = ATgetArgument(t, 1);
        if(((ATgetType(f_79) == AT_LIST) && !(ATisEmpty(f_79))))
          {
            a_157 = ATgetFirst((ATermList) f_79);
            b_157 = (ATerm) ATgetNext((ATermList) f_79);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_156, a_157), (ATerm) ATmakeAppl(sym__2, z_156, b_157));
  return(t);
}
static ATerm p_20 (ATerm t)
{
  ATerm c_157 = NULL,d_157 = NULL;
  if(match_cons(t, sym__2))
    {
      c_157 = ATgetArgument(t, 0);
      d_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_157), c_157);
  return(t);
}
static ATerm r_14 (ATerm z_705, ATerm e_706, ATerm h_70, ATerm t)
{
  ATerm t_156 = NULL,u_156 = NULL,v_156 = NULL,w_156 = NULL;
  t = SSL_explode_term(e_706);
  if(match_cons(t, sym__2))
    {
      t_156 = ATgetArgument(t, 0);
      v_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(z_705);
  if(match_cons(t, sym__2))
    {
      if((t_156 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_156, v_156);
  t = genzip_4_0(n_20, o_20, p_20, _id, t);
  w_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_156, h_70);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_117 (ATerm), ATerm j_117 (ATerm), ATerm t)
{
  static ATerm f_157 (ATerm t)
  {
    ATerm g_79 = t;
    int h_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_117(t);
        LocalPopChoice(h_79);
      }
    else
      {
        t = g_79;
        t = j_117(t);
        t = f_157(t);
      }
    return(t);
  }
  t = f_157(t);
  return(t);
}
ATerm for_3_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm t)
{
  t = l_117(t);
  t = while_not_2_0(m_117, n_117, t);
  return(t);
}
static ATerm q_20 (ATerm t)
{
  ATerm m_157 = NULL;
  m_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, m_157);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm n_157 = NULL,o_157 = NULL,p_157 = NULL,q_157 = NULL,g_34 = NULL;
  q_157 = t;
  if(match_cons(t, sym__2))
    {
      o_157 = ATgetArgument(t, 0);
      p_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_157);
  n_157 = t;
  t = p_157;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_157, p_157);
  g_34 = t;
  t = SSLsetAnnotations(g_34, n_157);
  return(t);
}
static ATerm u_20 (ATerm t)
{
  ATerm j_158 = NULL,k_158 = NULL,l_158 = NULL,m_158 = NULL,n_158 = NULL;
  j_158 = t;
  if(match_cons(t, sym__2))
    {
      k_158 = ATgetArgument(t, 0);
      l_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_158;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_158 = ATgetFirst((ATermList) t);
      n_158 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_79 = t;
        int j_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_158(k_158, l_158, j_158, t);
            LocalPopChoice(j_79);
          }
        else
          {
            t = i_79;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_158), m_158), n_158);
          }
      }
    }
  else
    {
      t = x_158(k_158, l_158, j_158, t);
    }
  return(t);
}
static ATerm x_158 (ATerm r_157, ATerm s_157, ATerm t_157, ATerm t)
{
  ATerm u_157 = NULL,x_157 = NULL,l_34 = NULL,a_158 = NULL,b_158 = NULL,c_158 = NULL,d_158 = NULL;
  t = SSLgetAnnotations(t_157);
  u_157 = t;
  t = s_157;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_158 = ATgetFirst((ATermList) t);
      d_158 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_158;
  if(match_cons(t, sym__2))
    {
      b_158 = ATgetArgument(t, 0);
      c_158 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_79 = t;
    int l_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_158;
        if((b_158 != t))
          {
            _fail(t);
          }
        t = d_158;
        LocalPopChoice(l_79);
      }
    else
      {
        t = k_79;
        t = s_157;
        t = r_14(b_158, c_158, d_158, t);
      }
  }
  x_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_157, x_157);
  l_34 = t;
  t = SSLsetAnnotations(l_34, u_157);
  return(t);
}
static ATerm w_20 (ATerm t)
{
  ATerm w_158 = NULL;
  if(match_cons(t, sym__2))
    {
      w_158 = ATgetArgument(t, 0);
      if((w_158 != ATgetArgument(t, 1)))
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
  ATerm m_79 = t;
  int n_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(q_20, t_20, u_20, t);
      LocalPopChoice(n_79);
    }
  else
    {
      t = m_79;
      {
        ATerm r_158 = NULL,s_158 = NULL,t_158 = NULL;
        r_158 = t;
        if(match_cons(t, sym__2))
          {
            s_158 = ATgetArgument(t, 0);
            t_158 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_158;
        t = m_14(w_20, s_158, t_158, t);
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
  ATerm r_71 = NULL,s_71 = NULL;
  if(match_cons(t, sym__2))
    {
      r_71 = ATgetArgument(t, 0);
      s_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_14(j_21, r_71, s_71, t);
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm x_71 = NULL;
  if(match_cons(t, sym__2))
    {
      x_71 = ATgetArgument(t, 0);
      if((x_71 != ATgetArgument(t, 1)))
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
  ATerm m_72 = NULL,n_72 = NULL;
  if(match_cons(t, sym__2))
    {
      m_72 = ATgetArgument(t, 0);
      n_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_14(g_22, m_72, n_72, t);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  ATerm o_72 = NULL;
  if(match_cons(t, sym__2))
    {
      o_72 = ATgetArgument(t, 0);
      if((o_72 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm b_148 (ATerm), ATerm c_148 (ATerm), ATerm d_148 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm l_159 (ATerm t)
  {
    ATerm o_79 = t;
    int p_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_148(t);
        LocalPopChoice(p_79);
      }
    else
      {
        t = o_79;
        {
          ATerm r_79 = t;
          int s_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_158 = NULL,a_159 = NULL,m_71 = NULL,n_71 = NULL;
              z_158 = t;
              t = c_148(t);
              a_159 = t;
              t = z_158;
              {
                static ATerm b_21 (ATerm t)
                {
                  ATerm c_159 = NULL;
                  t = l_159(t);
                  c_159 = t;
                  t = (ATerm) ATmakeAppl(sym__2, c_159, a_159);
                  t = diff_0_0(t);
                  return(t);
                }
                t = d_148(b_21, l_159, d_21, t);
              }
              n_71 = t;
              t = SSL_explode_term(n_71);
              if(match_cons(t, sym__2))
                {
                  ATerm t_79 = ATgetArgument(t, 0);
                  m_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_71;
              t = foldr_3_0(h_21, i_21, _id, t);
              LocalPopChoice(s_79);
            }
          else
            {
              t = r_79;
              {
                ATerm e_72 = NULL,i_72 = NULL;
                i_72 = t;
                t = SSL_explode_term(i_72);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_79 = ATgetArgument(t, 0);
                    e_72 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = e_72;
                t = foldr_3_0(l_21, c_22, l_159, t);
              }
            }
        }
      }
    return(t);
  }
  t = l_159(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm s_117 (ATerm), ATerm t)
{
  static ATerm h_22 (ATerm t)
  {
    t = bottomup_1_0(s_117, t);
    return(t);
  }
  t = SRTS_all(h_22, t);
  t = s_117(t);
  return(t);
}
static ATerm v_14 (ATerm o_63, ATerm p_63, ATerm t)
{
  ATerm m_159 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_63, p_63);
  t = o_15(o_63, p_63, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_159 = ATgetFirst((ATermList) t);
      {
        ATerm v_79 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_159;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm a_160 = NULL,b_160 = NULL;
  a_160 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_79 = t;
    int x_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_73 = NULL;
        t = term_y_79;
        c_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_y_79, a_160);
        t = v_14(c_73, a_160, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm z_79 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_79) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, b_160, (ATerm) ATempty);
        LocalPopChoice(x_79);
      }
    else
      {
        t = w_79;
        {
          ATerm p_73 = NULL;
          t = term_y_79;
          p_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_y_79, a_160);
          t = v_14(p_73, a_160, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm a_80 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_80) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, b_160, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm j_119 (ATerm), ATerm t)
{
  static ATerm e_160 (ATerm t)
  {
    ATerm c_80 = t;
    int d_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_119(t);
        LocalPopChoice(d_80);
      }
    else
      {
        t = c_80;
        t = SRTS_all(e_160, t);
      }
    return(t);
  }
  t = e_160(t);
  return(t);
}
static ATerm w_14 (ATerm n_137 (ATerm), ATerm m_45, ATerm k_45, ATerm t)
{
  ATerm f_160 = NULL,g_160 = NULL,h_160 = NULL,i_160 = NULL,j_160 = NULL,k_160 = NULL,l_160 = NULL,m_160 = NULL;
  i_160 = t;
  t = n_137(t);
  f_160 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_160, m_45, k_45);
  t = p_15(f_160, m_45, k_45, t);
  {
    ATerm e_80 = t;
    int f_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_160 = NULL;
        t = term_g_80;
        n_160 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_160, term_g_80);
        t = o_15(f_160, n_160, t);
        LocalPopChoice(f_80);
      }
    else
      {
        t = e_80;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_160 = ATgetFirst((ATermList) t);
      h_160 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, f_160, term_g_80, (ATerm) ATinsert(CheckATermList(h_160), (ATerm) ATinsert(CheckATermList(g_160), m_45)));
  t = lookup_table_0_1(f_160, t);
  m_160 = t;
  t = term_g_80;
  j_160 = t;
  t = (ATerm) ATinsert(CheckATermList(h_160), (ATerm) ATinsert(CheckATermList(g_160), m_45));
  k_160 = t;
  t = m_160;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(j_160, k_160, l_160, t);
  t = i_160;
  return(t);
}
static ATerm i_22 (ATerm t)
{
  t = term_y_79;
  return(t);
}
static ATerm l_22 (ATerm t)
{
  t = term_y_79;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm r_160 = NULL,t_160 = NULL,u_160 = NULL,v_160 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      t_160 = ATgetArgument(t, 0);
      u_160 = ATgetArgument(t, 1);
      r_160 = ATgetArgument(t, 2);
      {
        ATerm y_160 = NULL,z_160 = NULL;
        t = u_160;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, t_160);
        y_160 = t;
        t = term_i_80;
        z_160 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_160), term_i_80);
        t = w_14(i_22, y_160, z_160, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, t_160, (ATerm)ATempty, r_160);
      }
    }
  else
    {
      ATerm c_161 = NULL,d_161 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          t_160 = ATgetArgument(t, 0);
          u_160 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_160;
      if(match_cons(t, sym_ConstType_1))
        {
          v_160 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, t_160);
      c_161 = t;
      t = term_l_80;
      d_161 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, t_160), term_l_80);
      t = w_14(l_22, c_161, d_161, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_160, (ATerm) ATmakeAppl(sym_ConstType_1, v_160));
    }
  return(t);
}
static ATerm x_14 (ATerm i_63, ATerm j_63, ATerm t)
{
  ATerm h_161 = NULL,i_161 = NULL;
  i_161 = t;
  {
    ATerm n_80 = t;
    int o_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_63, j_63);
        t = o_15(i_63, j_63, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_80 = ATgetFirst((ATermList) t);
            h_161 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_80);
        {
          ATerm j_161 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, i_63, j_63, h_161);
          t = lookup_table_0_1(i_63, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              j_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_15(j_63, h_161, j_161, t);
          t = (ATerm) ATmakeAppl(sym__3, i_63, j_63, h_161);
        }
      }
    else
      {
        t = n_80;
        {
          ATerm l_161 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, i_63, j_63);
          t = lookup_table_0_1(i_63, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              l_161 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_15(j_63, l_161, t);
          t = (ATerm) ATmakeAppl(sym__2, i_63, j_63);
        }
      }
  }
  t = i_161;
  return(t);
}
ATerm end_scope_1_0 (ATerm k_137 (ATerm), ATerm t)
{
  ATerm n_161 = NULL,o_161 = NULL,p_161 = NULL,q_161 = NULL,r_161 = NULL,s_161 = NULL,t_161 = NULL;
  q_161 = t;
  t = k_137(t);
  p_161 = t;
  {
    ATerm q_80 = t;
    int r_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_161 = NULL;
        t = term_g_80;
        u_161 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_161, term_g_80);
        t = o_15(p_161, u_161, t);
        LocalPopChoice(r_80);
      }
    else
      {
        t = q_80;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_161 = ATgetFirst((ATermList) t);
      n_161 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, p_161, term_g_80, n_161);
  t = lookup_table_0_1(p_161, t);
  t_161 = t;
  t = term_g_80;
  r_161 = t;
  t = t_161;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(r_161, n_161, s_161, t);
  t = o_161;
  {
    static ATerm m_22 (ATerm t)
    {
      ATerm v_161 = NULL;
      v_161 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_161, v_161);
      t = x_14(p_161, v_161, t);
      return(t);
    }
    t = map_1_0(m_22, t);
  }
  t = q_161;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm t)
{
  ATerm s_80 = t;
  int u_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_116(t);
      t = o_116(t);
      LocalPopChoice(u_80);
    }
  else
    {
      t = s_80;
      t = o_116(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm j_137 (ATerm), ATerm t)
{
  ATerm x_161 = NULL,y_161 = NULL,z_161 = NULL,a_162 = NULL,b_162 = NULL,c_162 = NULL,d_162 = NULL;
  y_161 = t;
  t = j_137(t);
  x_161 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_161, term_g_80);
  {
    ATerm v_80 = t;
    int w_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_162 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm x_80 = ATgetArgument(t, 0);
            ATerm y_80 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_g_80;
        h_162 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_161, term_g_80);
        t = o_15(x_161, h_162, t);
        LocalPopChoice(w_80);
      }
    else
      {
        t = v_80;
        t = (ATerm) ATempty;
      }
  }
  z_161 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_161, term_g_80, (ATerm) ATinsert(CheckATermList(z_161), (ATerm) ATempty));
  t = lookup_table_0_1(x_161, t);
  d_162 = t;
  t = term_g_80;
  a_162 = t;
  t = (ATerm) ATinsert(CheckATermList(z_161), (ATerm) ATempty);
  b_162 = t;
  t = d_162;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(a_162, b_162, c_162, t);
  t = y_161;
  return(t);
}
ATerm scope_2_0 (ATerm l_137 (ATerm), ATerm m_137 (ATerm), ATerm t)
{
  static ATerm n_22 (ATerm t)
  {
    t = end_scope_1_0(l_137, t);
    return(t);
  }
  t = begin_scope_1_0(l_137, t);
  t = restore_always_2_0(m_137, n_22, t);
  return(t);
}
static ATerm q_22 (ATerm t)
{
  t = term_y_79;
  return(t);
}
static ATerm r_22 (ATerm t)
{
  ATerm m_162 = NULL,n_162 = NULL,o_162 = NULL,p_162 = NULL,v_34 = NULL;
  p_162 = t;
  if(match_cons(t, sym_Specification_1))
    {
      n_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_162);
  m_162 = t;
  t = n_162;
  t = map_1_0(s_22, t);
  o_162 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_162);
  v_34 = t;
  t = SSLsetAnnotations(v_34, m_162);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm s_22 (ATerm t)
{
  ATerm c_163 = NULL,d_163 = NULL;
  d_163 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      c_163 = ATgetArgument(t, 0);
      {
        ATerm z_80 = t;
        int c_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_74 = NULL,e_74 = NULL,o_34 = NULL;
            t = SSLgetAnnotations(d_163);
            c_74 = t;
            t = c_163;
            t = map_1_0(v_22, t);
            e_74 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, e_74);
            o_34 = t;
            t = SSLsetAnnotations(o_34, c_74);
            LocalPopChoice(c_81);
          }
        else
          {
            t = z_80;
            t = d_163;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          c_163 = ATgetArgument(t, 0);
          {
            ATerm d_81 = t;
            int e_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_74 = NULL,s_74 = NULL,s_34 = NULL;
                t = SSLgetAnnotations(d_163);
                q_74 = t;
                t = c_163;
                t = map_1_0(w_22, t);
                s_74 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, s_74);
                s_34 = t;
                t = SSLsetAnnotations(s_34, q_74);
                LocalPopChoice(e_81);
              }
            else
              {
                t = d_81;
                t = d_163;
              }
          }
        }
      else
        {
          t = d_163;
        }
    }
  return(t);
}
static ATerm v_22 (ATerm t)
{
  ATerm i_81 = t;
  int j_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(j_81);
    }
  else
    {
      t = i_81;
    }
  return(t);
}
static ATerm w_22 (ATerm t)
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
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(q_22, r_22, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_163 = NULL,l_163 = NULL,m_163 = NULL;
  k_163 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_163;
    }
  else
    {
      static ATerm a_23 (ATerm t)
      {
        t = not_null(m_163);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_163 = ATgetFirst((ATermList) t);
          if(((m_163 != NULL) && (m_163 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_163 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_163;
      t = at_end_1_0(a_23, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm g_132 (ATerm), ATerm t)
{
  ATerm b_164 = NULL,c_164 = NULL,d_164 = NULL;
  b_164 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_164;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_164 = ATgetFirst((ATermList) t);
          d_164 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm m_81 = t;
        int n_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_75 = NULL,h_75 = NULL,i_75 = NULL,e_35 = NULL;
            t = SSLgetAnnotations(b_164);
            e_75 = t;
            t = c_164;
            t = g_132(t);
            h_75 = t;
            t = d_164;
            t = filter_1_0(g_132, t);
            i_75 = t;
            t = (ATerm) ATinsert(CheckATermList(i_75), h_75);
            e_35 = t;
            t = SSLsetAnnotations(e_35, e_75);
            LocalPopChoice(n_81);
          }
        else
          {
            t = m_81;
            t = d_164;
            t = filter_1_0(g_132, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_124 (ATerm), ATerm t)
{
  static ATerm t_164 (ATerm t)
  {
    ATerm q_164 = NULL,r_164 = NULL,s_164 = NULL;
    s_164 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_164 = ATgetFirst((ATermList) t);
        r_164 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_75 = NULL,t_75 = NULL,g_35 = NULL;
          t = SSLgetAnnotations(s_164);
          q_75 = t;
          t = r_164;
          t = t_164(t);
          t_75 = t;
          t = (ATerm) ATinsert(CheckATermList(t_75), q_164);
          g_35 = t;
          t = SSLsetAnnotations(g_35, q_75);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = s_164;
        t = u_124(t);
      }
    return(t);
  }
  t = t_164(t);
  return(t);
}
static ATerm f_165 (ATerm x_164, ATerm t)
{
  ATerm y_164 = NULL;
  t = SSL_explode_term(x_164);
  if(match_cons(t, sym__2))
    {
      ATerm o_81 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_81) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_164;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_165 = NULL,b_165 = NULL,c_165 = NULL;
  c_165 = t;
  if(match_cons(t, sym__2))
    {
      a_165 = ATgetArgument(t, 0);
      b_165 = ATgetArgument(t, 1);
      {
        ATerm p_81 = t;
        int q_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm c_23 (ATerm t)
            {
              t = b_165;
              return(t);
            }
            t = a_165;
            t = at_end_1_0(c_23, t);
            LocalPopChoice(q_81);
          }
        else
          {
            t = p_81;
            t = f_165(c_165, t);
          }
      }
    }
  else
    {
      t = f_165(c_165, t);
    }
  return(t);
}
static ATerm a_15 (ATerm o_22, ATerm k_22, ATerm t)
{
  ATerm g_165 = NULL,h_165 = NULL;
  static ATerm k_23 (ATerm t)
  {
    ATerm i_165 = NULL,j_165 = NULL,k_165 = NULL,l_165 = NULL;
    l_165 = t;
    t = SSL_explode_term(l_165);
    if(match_cons(t, sym__2))
      {
        if(((g_165 != NULL) && (g_165 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          g_165 = ATgetArgument(t, 0);
        {
          ATerm r_81 = ATgetArgument(t, 1);
          if(((ATgetType(r_81) == AT_LIST) && !(ATisEmpty(r_81))))
            {
              i_165 = ATgetFirst((ATermList) r_81);
              {
                ATerm s_81 = (ATerm) ATgetNext((ATermList) r_81);
                if(((ATgetType(s_81) != AT_LIST) || !(ATisEmpty(s_81))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, i_165, not_null(h_165));
    t = conc_0_0(t);
    j_165 = t;
    t = (ATerm) ATinsert(ATempty, j_165);
    k_165 = t;
    t = SSL_mkterm(g_165, k_165);
    return(t);
  }
  t = SSL_explode_term(o_22);
  if(match_cons(t, sym__2))
    {
      if(((g_165 != NULL) && (g_165 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_165 = ATgetArgument(t, 0);
      {
        ATerm t_81 = ATgetArgument(t, 1);
        if(((ATgetType(t_81) == AT_LIST) && !(ATisEmpty(t_81))))
          {
            if(((h_165 != NULL) && (h_165 != ATgetFirst((ATermList) t_81))))
              _fail(ATgetFirst((ATermList) t_81));
            else
              h_165 = ATgetFirst((ATermList) t_81);
            {
              ATerm u_81 = (ATerm) ATgetNext((ATermList) t_81);
              if(((ATgetType(u_81) != AT_LIST) || !(ATisEmpty(u_81))))
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
  t = fetch_1_0(k_23, t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_131 (ATerm), ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm t)
{
  ATerm n_165 = NULL,o_165 = NULL,p_165 = NULL;
  n_165 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_165;
      t = e_131(t);
    }
  else
    {
      ATerm s_165 = NULL,t_165 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_165 = ATgetFirst((ATermList) t);
          p_165 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_165;
      t = g_131(t);
      s_165 = t;
      t = p_165;
      t = foldr_3_0(e_131, f_131, g_131, t);
      t_165 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_165, t_165);
      t = f_131(t);
    }
  return(t);
}
static ATerm l_23 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_81), term_w_81), term_v_81);
  return(t);
}
static ATerm m_23 (ATerm t)
{
  ATerm a_166 = NULL,b_166 = NULL;
  if(match_cons(t, sym__2))
    {
      a_166 = ATgetArgument(t, 0);
      b_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_15(a_166, b_166, t);
  return(t);
}
static ATerm n_23 (ATerm t)
{
  ATerm c_166 = NULL,d_166 = NULL;
  d_166 = t;
  if(match_cons(t, sym_Signature_1))
    {
      c_166 = ATgetArgument(t, 0);
      {
        ATerm y_81 = t;
        int z_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_166 = NULL;
            t = c_166;
            t = filter_1_0(o_23, t);
            t = concat_0_0(t);
            f_166 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, f_166);
            LocalPopChoice(z_81);
          }
        else
          {
            t = y_81;
            t = d_166;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          c_166 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, c_166);
        }
      else
        {
          t = d_166;
        }
    }
  return(t);
}
static ATerm o_23 (ATerm t)
{
  ATerm g_166 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      g_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_166;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm w_165 = NULL,x_165 = NULL,y_165 = NULL,z_165 = NULL,p_35 = NULL;
  z_165 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_165);
  w_165 = t;
  t = x_165;
  t = foldr_3_0(l_23, m_23, n_23, t);
  y_165 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_165);
  p_35 = t;
  t = SSLsetAnnotations(p_35, w_165);
  return(t);
}
static ATerm p_23 (ATerm t)
{
  ATerm a_82 = t;
  int b_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(b_82);
    }
  else
    {
      t = a_82;
    }
  return(t);
}
static ATerm q_23 (ATerm t)
{
  ATerm c_167 = NULL,d_167 = NULL,e_167 = NULL,f_167 = NULL,g_167 = NULL;
  g_167 = t;
  if(match_cons(t, sym_LRule_1))
    {
      f_167 = ATgetArgument(t, 0);
      t = f_167;
      if(match_cons(t, sym_Rule_3))
        {
          c_167 = ATgetArgument(t, 0);
          d_167 = ATgetArgument(t, 1);
          e_167 = ATgetArgument(t, 2);
          {
            ATerm c_82 = t;
            int d_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_167 = NULL;
                t = c_167;
                t = free_vars_3_0(y_23, a_24, tboundin_3_0, t);
                k_167 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, k_167, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, c_167, d_167, e_167)));
                LocalPopChoice(d_82);
              }
            else
              {
                t = c_82;
                t = g_167;
              }
          }
        }
      else
        {
          t = g_167;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          f_167 = ATgetArgument(t, 0);
          {
            ATerm e_82 = t;
            int f_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_168 = NULL;
                t = f_167;
                t = free_vars_3_0(t_24, u_24, tboundin_3_0, t);
                i_168 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, i_168, f_167);
                LocalPopChoice(f_82);
              }
            else
              {
                t = e_82;
                t = g_167;
              }
          }
        }
      else
        {
          t = g_167;
        }
    }
  return(t);
}
static ATerm y_23 (ATerm t)
{
  ATerm l_167 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_167);
  return(t);
}
static ATerm a_24 (ATerm t)
{
  ATerm g_82 = t;
  int h_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_82);
    }
  else
    {
      t = g_82;
      {
        ATerm i_82 = t;
        int j_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_82);
          }
        else
          {
            t = i_82;
            {
              ATerm k_82 = t;
              int l_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_167 = NULL,o_167 = NULL,p_167 = NULL,q_167 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_167 = ATgetArgument(t, 0);
                      o_167 = ATgetArgument(t, 1);
                      p_167 = ATgetArgument(t, 2);
                      q_167 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_167;
                  t = map_1_0(q_24, t);
                  LocalPopChoice(l_82);
                }
              else
                {
                  t = k_82;
                  {
                    ATerm m_82 = t;
                    int n_82 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_82);
                      }
                    else
                      {
                        t = m_82;
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
  ATerm x_167 = NULL;
  ATerm o_82 = t;
  int p_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_167 = ATgetArgument(t, 0);
          {
            ATerm q_82 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_82);
      t = x_167;
    }
  else
    {
      t = o_82;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_167 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_167;
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
  ATerm c_168 = NULL;
  ATerm r_82 = t;
  int s_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_168 = ATgetArgument(t, 0);
          {
            ATerm t_82 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_82);
      t = c_168;
    }
  else
    {
      t = r_82;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_168 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_168;
    }
  return(t);
}
static ATerm t_24 (ATerm t)
{
  ATerm j_168 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_168 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_168);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  ATerm u_82 = t;
  int v_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(x_82);
          }
        else
          {
            t = w_82;
            {
              ATerm y_82 = t;
              int z_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_168 = NULL,m_168 = NULL,n_168 = NULL,o_168 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_168 = ATgetArgument(t, 0);
                      m_168 = ATgetArgument(t, 1);
                      n_168 = ATgetArgument(t, 2);
                      o_168 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_168;
                  t = map_1_0(v_24, t);
                  LocalPopChoice(z_82);
                }
              else
                {
                  t = y_82;
                  {
                    ATerm a_83 = t;
                    int b_83 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_83);
                      }
                    else
                      {
                        t = a_83;
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
  ATerm v_168 = NULL;
  ATerm c_83 = t;
  int d_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_168 = ATgetArgument(t, 0);
          {
            ATerm e_83 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_83);
      t = v_168;
    }
  else
    {
      t = c_83;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_168 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_168;
    }
  return(t);
}
static ATerm w_24 (ATerm t)
{
  t = map_1_0(z_24, t);
  return(t);
}
static ATerm z_24 (ATerm t)
{
  ATerm a_169 = NULL;
  ATerm f_83 = t;
  int g_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_169 = ATgetArgument(t, 0);
          {
            ATerm h_83 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_83);
      t = a_169;
    }
  else
    {
      t = f_83;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_169 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_169;
    }
  return(t);
}
static ATerm a_25 (ATerm t)
{
  ATerm i_83 = t;
  int j_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(j_83);
    }
  else
    {
      t = i_83;
    }
  return(t);
}
static ATerm b_25 (ATerm t)
{
  ATerm k_169 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      k_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, k_169)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm w_166 = NULL,x_166 = NULL,y_166 = NULL,z_166 = NULL,v_35 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(p_23, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(q_23, t);
  {
    ATerm k_83 = t;
    int l_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_169 = NULL,g_169 = NULL,h_169 = NULL;
        f_169 = t;
        t = term_m_83;
        g_169 = t;
        t = term_n_83;
        h_169 = t;
        t = term_o_83;
        t = o_15(g_169, h_169, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = f_169;
        LocalPopChoice(l_83);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = k_83;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(a_25, t);
  z_166 = t;
  if(match_cons(t, sym_Specification_1))
    {
      x_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_166);
  w_166 = t;
  t = x_166;
  t = fetch_1_0(b_25, t);
  y_166 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_166);
  v_35 = t;
  t = SSLsetAnnotations(v_35, w_166);
  return(t);
}
static ATerm b_15 (ATerm c_41, ATerm d_41, ATerm t)
{
  ATerm l_169 = NULL;
  t = SSL_fputc(c_41, d_41);
  l_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_169);
  return(t);
}
static ATerm c_15 (ATerm g_25, ATerm h_25, ATerm t)
{
  ATerm m_169 = NULL;
  t = SSL_write_term_to_stream_text(g_25, h_25);
  m_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_169);
  return(t);
}
static ATerm e_15 (ATerm u_123 (ATerm), ATerm q_190, ATerm m_25, ATerm t)
{
  ATerm n_169 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_190, term_p_83);
  t = i_15(t);
  n_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_169, m_25);
  t = u_123(t);
  t = fclose_0_0(t);
  t = m_25;
  return(t);
}
static ATerm d_15 (ATerm c_25, ATerm d_25, ATerm t)
{
  ATerm o_169 = NULL;
  t = SSL_write_term_to_stream_baf(c_25, d_25);
  o_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_169);
  return(t);
}
static ATerm e_25 (ATerm t)
{
  ATerm v_169 = NULL,w_169 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_83 = ATgetArgument(t, 0);
      if(match_cons(q_83, sym_Stream_1))
        {
          v_169 = ATgetArgument(q_83, 0);
        }
      else
        _fail(t);
      w_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_15(v_169, w_169, t);
  return(t);
}
static ATerm f_25 (ATerm t)
{
  ATerm x_169 = NULL,y_169 = NULL,z_169 = NULL,a_170 = NULL,b_170 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_83 = ATgetArgument(t, 0);
      if(match_cons(r_83, sym_Stream_1))
        {
          a_170 = ATgetArgument(r_83, 0);
        }
      else
        _fail(t);
      b_170 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_15(a_170, b_170, t);
  x_169 = t;
  t = term_d_35;
  y_169 = t;
  t = x_169;
  if(match_cons(t, sym_Stream_1))
    {
      z_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_35, x_169);
  t = b_15(y_169, z_169, t);
  return(t);
}
ATerm output_1_0 (ATerm v_143 (ATerm), ATerm t)
{
  ATerm p_169 = NULL,q_169 = NULL;
  t = v_143(t);
  q_169 = t;
  {
    ATerm s_83 = t;
    int t_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_169 = NULL,s_169 = NULL;
        t = term_m_83;
        r_169 = t;
        t = term_u_83;
        s_169 = t;
        t = term_v_83;
        t = o_15(r_169, s_169, t);
        LocalPopChoice(t_83);
      }
    else
      {
        t = s_83;
        t = term_w_83;
      }
  }
  p_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_169, q_169);
  {
    ATerm x_83 = t;
    int y_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_169 = NULL,u_169 = NULL;
        t = term_m_83;
        t_169 = t;
        t = term_z_83;
        u_169 = t;
        t = term_a_84;
        t = o_15(t_169, u_169, t);
        t = (ATerm) ATmakeAppl(sym__2, p_169, q_169);
        LocalPopChoice(y_83);
        if(match_cons(t, sym__2))
          {
            ATerm b_84 = ATgetArgument(t, 0);
            ATerm c_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_15(e_25, p_169, q_169, t);
      }
    else
      {
        t = x_83;
        if(match_cons(t, sym__2))
          {
            ATerm d_84 = ATgetArgument(t, 0);
            ATerm e_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_15(f_25, p_169, q_169, t);
      }
  }
  return(t);
}
static ATerm p_170 (ATerm j_170, ATerm t)
{
  t = SSL_fclose(j_170);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_170 = NULL,n_170 = NULL;
  n_170 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_170 = ATgetArgument(t, 0);
      {
        ATerm f_84 = t;
        int g_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_170);
            LocalPopChoice(g_84);
          }
        else
          {
            t = f_84;
            t = p_170(n_170, t);
          }
      }
    }
  else
    {
      t = p_170(n_170, t);
    }
  return(t);
}
static ATerm f_15 (ATerm i_25, ATerm t)
{
  t = SSL_read_term_from_stream(i_25);
  return(t);
}
static ATerm g_15 (ATerm v_39, ATerm w_39, ATerm t)
{
  t = SSL_strcat(v_39, w_39);
  return(t);
}
static ATerm h_15 (ATerm e_41, ATerm f_41, ATerm t)
{
  ATerm q_170 = NULL;
  t = SSL_fopen(e_41, f_41);
  q_170 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_170);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_170 = NULL;
  t = SSL_stdin_stream();
  r_170 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_170);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_170 = NULL;
  t = SSL_stdout_stream();
  s_170 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_170);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_170 = NULL;
  t = SSL_stderr_stream();
  t_170 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_170);
  return(t);
}
static ATerm a_172 (ATerm z_170, ATerm t)
{
  ATerm a_171 = NULL;
  t = SSL_explode_term(z_170);
  if(match_cons(t, sym__2))
    {
      ATerm j_84 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_84) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_84 = ATgetArgument(t, 1);
        if(((ATgetType(l_84) == AT_LIST) && !(ATisEmpty(l_84))))
          {
            a_171 = ATgetFirst((ATermList) l_84);
            {
              ATerm m_84 = (ATerm) ATgetNext((ATermList) l_84);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_171;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_171;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_171;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_171;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm b_172 (ATerm d_171, ATerm e_171, ATerm f_171, ATerm t)
{
  ATerm g_171 = NULL,h_171 = NULL,i_171 = NULL,l_171 = NULL,y_35 = NULL;
  t = SSLgetAnnotations(f_171);
  i_171 = t;
  t = d_171;
  if(match_cons(t, sym_Path_1))
    {
      l_171 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_171, e_171);
  y_35 = t;
  t = SSLsetAnnotations(y_35, i_171);
  if(match_cons(t, sym__2))
    {
      g_171 = ATgetArgument(t, 0);
      h_171 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_15(g_171, h_171, t);
  return(t);
}
static ATerm c_172 (ATerm n_171, ATerm o_171, ATerm p_171, ATerm t)
{
  ATerm q_171 = NULL,r_171 = NULL,s_171 = NULL,v_171 = NULL,z_35 = NULL;
  t = SSLgetAnnotations(p_171);
  s_171 = t;
  t = SSL_is_string(n_171);
  v_171 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_171, o_171);
  z_35 = t;
  t = SSLsetAnnotations(z_35, s_171);
  if(match_cons(t, sym__2))
    {
      q_171 = ATgetArgument(t, 0);
      r_171 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_15(q_171, r_171, t);
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm x_171 = NULL,y_171 = NULL,z_171 = NULL;
  x_171 = t;
  if(match_cons(t, sym__2))
    {
      y_171 = ATgetArgument(t, 0);
      z_171 = ATgetArgument(t, 1);
      {
        ATerm n_84 = t;
        int o_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_172(x_171, t);
            LocalPopChoice(o_84);
          }
        else
          {
            t = n_84;
            {
              ATerm p_84 = t;
              int q_84 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_172(y_171, z_171, x_171, t);
                  LocalPopChoice(q_84);
                }
              else
                {
                  t = p_84;
                  t = c_172(y_171, z_171, x_171, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_172(x_171, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_172 = NULL,f_172 = NULL,g_172 = NULL,l_172 = NULL;
  l_172 = t;
  {
    ATerm s_84 = t;
    int t_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_172, term_u_84);
        t = i_15(t);
        LocalPopChoice(t_84);
      }
    else
      {
        t = s_84;
        {
          ATerm j_76 = NULL,k_76 = NULL;
          t = term_x_84;
          k_76 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_x_84, l_172);
          t = g_15(k_76, l_172, t);
          j_76 = t;
          t = SSL_perror(j_76);
          _fail(t);
        }
      }
  }
  f_172 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_172 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_15(g_172, t);
  e_172 = t;
  t = f_172;
  t = fclose_0_0(t);
  t = e_172;
  return(t);
}
ATerm input_1_0 (ATerm w_143 (ATerm), ATerm t)
{
  ATerm y_84 = t;
  int z_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_172 = NULL,p_172 = NULL;
      t = term_m_83;
      o_172 = t;
      t = term_a_85;
      p_172 = t;
      t = term_f_85;
      t = o_15(o_172, p_172, t);
      LocalPopChoice(z_84);
    }
  else
    {
      t = y_84;
      t = term_h_85;
    }
  t = ReadFromFile_0_0(t);
  t = w_143(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm q_172 = NULL,r_172 = NULL,s_172 = NULL,t_172 = NULL,u_172 = NULL;
  q_172 = t;
  t = term_i_85;
  t = whoami_0_0(t);
  r_172 = t;
  t = term_i_45;
  t_172 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_85), r_172), term_l_85);
  u_172 = t;
  t = SSL_printnl(t_172, u_172);
  t = term_o_45;
  s_172 = t;
  t = SSL_exit(s_172);
  t = q_172;
  return(t);
}
static ATerm j_25 (ATerm t)
{
  ATerm w_172 = NULL;
  w_172 = t;
  if(match_string(t, "-k"))
    {
      t = w_172;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_172;
    }
  return(t);
}
static ATerm k_25 (ATerm t)
{
  ATerm x_172 = NULL,y_172 = NULL,z_172 = NULL;
  x_172 = t;
  t = SSL_string_to_int(x_172);
  y_172 = t;
  t = term_n_85;
  z_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_85, y_172);
  t = r_15(z_172, y_172, t);
  t = x_172;
  return(t);
}
static ATerm l_25 (ATerm t)
{
  t = term_o_85;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_25, k_25, l_25, t);
  return(t);
}
static ATerm n_25 (ATerm t)
{
  ATerm b_173 = NULL;
  b_173 = t;
  if(match_string(t, "-S"))
    {
      t = b_173;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_173;
    }
  return(t);
}
static ATerm w_25 (ATerm t)
{
  ATerm c_173 = NULL,d_173 = NULL;
  t = term_p_85;
  c_173 = t;
  t = term_y_47;
  d_173 = t;
  t = term_q_85;
  t = r_15(c_173, d_173, t);
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
  ATerm e_173 = NULL,f_173 = NULL,g_173 = NULL;
  e_173 = t;
  t = SSL_string_to_int(e_173);
  f_173 = t;
  t = term_p_85;
  g_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_85, f_173);
  t = r_15(g_173, f_173, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_173);
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
  ATerm h_173 = NULL,i_173 = NULL;
  t = term_u_85;
  h_173 = t;
  t = term_i_85;
  i_173 = t;
  t = term_v_85;
  t = r_15(h_173, i_173, t);
  t = term_w_85;
  return(t);
}
static ATerm f_26 (ATerm t)
{
  t = term_x_85;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_85 = t;
  int z_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_25, w_25, x_25, t);
      LocalPopChoice(z_85);
    }
  else
    {
      t = y_85;
      {
        ATerm a_86 = t;
        int b_86 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(y_25, z_25, a_26, t);
            LocalPopChoice(b_86);
          }
        else
          {
            t = a_86;
            t = Option_3_0(d_26, e_26, f_26, t);
          }
      }
    }
  return(t);
}
static ATerm r_15 (ATerm i_58, ATerm j_58, ATerm t)
{
  ATerm j_173 = NULL,k_173 = NULL;
  t = term_m_83;
  j_173 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_83, i_58, j_58);
  t = lookup_table_0_1(j_173, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(i_58, j_58, k_173, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_83, i_58, j_58);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm o_173 = NULL,p_173 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_173 = NULL,r_173 = NULL,s_173 = NULL;
      t = term_i_85;
      t = f_0(t);
      q_173 = t;
      t = term_c_86;
      r_173 = t;
      t = term_d_86;
      s_173 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_86, term_d_86, q_173);
      t = p_15(r_173, s_173, q_173, t);
      _fail(t);
    }
  else
    {
      ATerm v_173 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_173 = ATgetFirst((ATermList) t);
          p_173 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_173;
      t = b_0(t);
      t = term_i_85;
      t = d_0(t);
      v_173 = t;
      t = (ATerm) ATinsert(CheckATermList(p_173), v_173);
    }
  return(t);
}
static ATerm h_26 (ATerm t)
{
  ATerm x_173 = NULL;
  x_173 = t;
  if(match_string(t, "-o"))
    {
      t = x_173;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_173;
    }
  return(t);
}
static ATerm j_26 (ATerm t)
{
  ATerm y_173 = NULL,z_173 = NULL;
  y_173 = t;
  t = term_u_83;
  z_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_83, y_173);
  t = r_15(z_173, y_173, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_173);
  return(t);
}
static ATerm k_26 (ATerm t)
{
  t = term_e_86;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_26, j_26, k_26, t);
  return(t);
}
static ATerm n_26 (ATerm t)
{
  ATerm b_174 = NULL;
  b_174 = t;
  if(match_string(t, "-i"))
    {
      t = b_174;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = b_174;
    }
  return(t);
}
static ATerm o_26 (ATerm t)
{
  ATerm c_174 = NULL,d_174 = NULL;
  c_174 = t;
  t = term_a_85;
  d_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_85, c_174);
  t = r_15(d_174, c_174, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, c_174);
  return(t);
}
static ATerm y_26 (ATerm t)
{
  t = term_f_86;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_26, o_26, y_26, t);
  return(t);
}
static ATerm p_15 (ATerm d_63, ATerm e_63, ATerm c_63, ATerm t)
{
  ATerm f_174 = NULL,g_174 = NULL,h_174 = NULL,i_174 = NULL,j_174 = NULL;
  f_174 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_63, e_63);
  {
    ATerm g_86 = t;
    int h_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_86 = ATgetArgument(t, 0);
            ATerm j_86 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_63, e_63);
        t = o_15(d_63, e_63, t);
        LocalPopChoice(h_86);
      }
    else
      {
        t = g_86;
        t = (ATerm) ATempty;
      }
  }
  g_174 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_63, e_63, (ATerm) ATinsert(CheckATermList(g_174), c_63));
  t = lookup_table_0_1(d_63, t);
  j_174 = t;
  t = (ATerm) ATinsert(CheckATermList(g_174), c_63);
  h_174 = t;
  t = j_174;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(e_63, h_174, i_174, t);
  t = f_174;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm q_174 = NULL,r_174 = NULL,s_174 = NULL,t_174 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm u_174 = NULL,v_174 = NULL,w_174 = NULL;
      t = term_i_85;
      t = m_0(t);
      u_174 = t;
      t = term_c_86;
      v_174 = t;
      t = term_d_86;
      w_174 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_86, term_d_86, u_174);
      t = p_15(v_174, w_174, u_174, t);
      _fail(t);
    }
  else
    {
      ATerm a_175 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_174 = ATgetFirst((ATermList) t);
          r_174 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_174;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_174 = ATgetFirst((ATermList) t);
          t_174 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_174;
      t = j_0(t);
      t = s_174;
      t = l_0(t);
      a_175 = t;
      t = (ATerm) ATinsert(CheckATermList(t_174), a_175);
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
  ATerm c_175 = NULL,d_175 = NULL;
  c_175 = t;
  if(match_string(t, "old"))
    {
      t = c_175;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = c_175;
    }
  t = term_n_83;
  d_175 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_83, c_175);
  t = r_15(d_175, c_175, t);
  t = term_i_85;
  return(t);
}
static ATerm b_27 (ATerm t)
{
  t = term_k_86;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_26, a_27, b_27, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_175 = NULL,g_175 = NULL,h_175 = NULL,i_175 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_85;
  t = whoami_0_0(t);
  f_175 = t;
  t = term_i_45;
  h_175 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_86), f_175);
  i_175 = t;
  t = SSL_printnl(h_175, i_175);
  t = term_o_45;
  g_175 = t;
  t = SSL_exit(g_175);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm j_175 = NULL,k_175 = NULL;
  t = term_m_83;
  j_175 = t;
  t = term_m_86;
  k_175 = t;
  t = term_n_86;
  t = o_15(j_175, k_175, t);
  return(t);
}
static ATerm j_15 (ATerm y_43, ATerm z_43, ATerm t)
{
  ATerm o_86 = t;
  int p_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_43, z_43);
      LocalPopChoice(p_86);
    }
  else
    {
      t = o_86;
      t = SSL_addr(y_43, z_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm t)
{
  ATerm m_175 = NULL,n_175 = NULL,o_175 = NULL;
  m_175 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_175;
      t = c_131(t);
    }
  else
    {
      ATerm r_175 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_175 = ATgetFirst((ATermList) t);
          o_175 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_175;
      t = foldr_2_0(c_131, d_131, t);
      r_175 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_175, r_175);
      t = d_131(t);
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
  ATerm r_76 = NULL,s_76 = NULL;
  if(match_cons(t, sym__2))
    {
      r_76 = ATgetArgument(t, 0);
      s_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_15(r_76, s_76, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm u_175 = NULL,m_76 = NULL,n_76 = NULL;
  t = times_0_0(t);
  n_76 = t;
  t = SSL_explode_term(n_76);
  if(match_cons(t, sym__2))
    {
      ATerm t_86 = ATgetArgument(t, 0);
      m_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_76;
  t = foldr_2_0(c_27, e_27, t);
  u_175 = t;
  t = SSL_TicksToSeconds(u_175);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm f_176 = NULL,g_176 = NULL,h_176 = NULL;
  f_176 = t;
  if(match_cons(t, sym__2))
    {
      g_176 = ATgetArgument(t, 0);
      h_176 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_86 = t;
    int v_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_176;
        if((g_176 != t))
          {
            _fail(t);
          }
        t = f_176;
        LocalPopChoice(v_86);
      }
    else
      {
        t = u_86;
        t = (ATerm) ATmakeAppl(sym__2, g_176, h_176);
        {
          ATerm w_86 = t;
          int x_86 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(g_176, h_176);
              LocalPopChoice(x_86);
            }
          else
            {
              t = w_86;
              t = SSL_gtr(g_176, h_176);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, g_176, h_176);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_140 (ATerm), ATerm t)
{
  ATerm l_176 = NULL;
  l_176 = t;
  {
    ATerm y_86 = t;
    int z_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_176 = NULL,o_176 = NULL,p_176 = NULL;
        t = term_m_83;
        o_176 = t;
        t = term_p_85;
        p_176 = t;
        t = term_a_87;
        t = o_15(o_176, p_176, t);
        n_176 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_176, term_o_45);
        t = geq_0_0(t);
        t = l_176;
        t = w_140(t);
        LocalPopChoice(z_86);
      }
    else
      {
        t = y_86;
        t = l_176;
      }
  }
  return(t);
}
static ATerm g_27 (ATerm t)
{
  ATerm r_176 = NULL,s_176 = NULL,u_176 = NULL,v_176 = NULL;
  t = run_time_0_0(t);
  r_176 = t;
  t = term_i_85;
  t = whoami_0_0(t);
  s_176 = t;
  t = term_i_45;
  u_176 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_87), r_176), term_b_87), s_176);
  v_176 = t;
  t = SSL_printnl(u_176, v_176);
  t = (ATerm) ATmakeAppl(sym__2, term_i_45, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_87), r_176), term_b_87), s_176));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_27, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_176 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_47;
  w_176 = t;
  t = SSL_exit(w_176);
  return(t);
}
static ATerm q_27 (ATerm t)
{
  ATerm g_177 = NULL,h_177 = NULL;
  h_177 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_177;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_177 = ATgetArgument(t, 0);
          {
            ATerm h_77 = NULL,k_36 = NULL;
            t = SSLgetAnnotations(h_177);
            h_77 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_177);
            k_36 = t;
            t = SSLsetAnnotations(k_36, h_77);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_177;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_143 (ATerm), ATerm t)
{
  ATerm d_87 = t;
  int e_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_176 = NULL,a_177 = NULL;
      t = term_m_83;
      z_176 = t;
      t = term_g_87;
      a_177 = t;
      t = term_h_87;
      t = o_15(z_176, a_177, t);
      LocalPopChoice(e_87);
    }
  else
    {
      t = d_87;
      t = fetch_1_0(q_27, t);
    }
  t = m_143(t);
  return(t);
}
static ATerm s_15 (ATerm i_67, ATerm j_67, ATerm k_67, ATerm t)
{
  ATerm j_177 = NULL;
  t = SSL_hashtable_put(k_67, i_67, j_67);
  j_177 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_177);
  return(t);
}
ATerm lookup_table_0_1 (ATerm p_64, ATerm t)
{
  ATerm s_177 = NULL;
  t = table_hashtable_0_0(t);
  s_177 = t;
  {
    ATerm i_87 = t;
    int j_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_77 = NULL;
        t = s_177;
        if(match_cons(t, sym_Hashtable_1))
          {
            u_77 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = t_15(p_64, u_77, t);
        LocalPopChoice(j_87);
      }
    else
      {
        t = i_87;
        {
          ATerm g_78 = NULL;
          t = p_64;
          t = table_create_0_0(t);
          t = s_177;
          if(match_cons(t, sym_Hashtable_1))
            {
              g_78 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_15(p_64, g_78, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_67, ATerm r_67, ATerm t)
{
  ATerm v_177 = NULL;
  t = SSL_hashtable_create(q_67, r_67);
  v_177 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_177);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm w_177 = NULL,x_177 = NULL,y_177 = NULL,a_178 = NULL,c_178 = NULL;
  w_177 = t;
  t = term_k_87;
  a_178 = t;
  t = term_l_87;
  c_178 = t;
  t = w_177;
  t = new_hashtable_0_2(a_178, c_178, t);
  x_177 = t;
  t = w_177;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      y_177 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(w_177, x_177, y_177, t);
  t = w_177;
  return(t);
}
static ATerm l_15 (ATerm n_67, ATerm o_67, ATerm t)
{
  ATerm d_178 = NULL;
  t = SSL_hashtable_remove(o_67, n_67);
  d_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_178);
  return(t);
}
static ATerm m_15 (ATerm s_67, ATerm t)
{
  ATerm e_178 = NULL;
  t = SSL_hashtable_destroy(s_67);
  e_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_178);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_178 = NULL;
  t = SSL_table_hashtable();
  f_178 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_178);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_178 = NULL,h_178 = NULL,i_178 = NULL,j_178 = NULL;
  g_178 = t;
  t = table_hashtable_0_0(t);
  h_178 = t;
  t = lookup_table_0_1(g_178, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(j_178, t);
  t = h_178;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_178 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_15(g_178, i_178, t);
  t = g_178;
  return(t);
}
ATerm map_1_0 (ATerm d_124 (ATerm), ATerm t)
{
  static ATerm y_178 (ATerm t)
  {
    ATerm v_178 = NULL,w_178 = NULL,x_178 = NULL;
    v_178 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_178;
      }
    else
      {
        ATerm q_78 = NULL,u_78 = NULL,w_78 = NULL,n_36 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_178 = ATgetFirst((ATermList) t);
            x_178 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_178);
        q_78 = t;
        t = w_178;
        t = d_124(t);
        u_78 = t;
        t = x_178;
        t = y_178(t);
        w_78 = t;
        t = (ATerm) ATinsert(CheckATermList(w_78), u_78);
        n_36 = t;
        t = SSLsetAnnotations(n_36, q_78);
      }
    return(t);
  }
  t = y_178(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm b_179 = NULL,c_179 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_179 = ATgetFirst((ATermList) t);
      c_179 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_179 = NULL,h_179 = NULL;
        static ATerm u_27 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_179)), not_null(h_179));
          return(t);
        }
        t = c_179;
        t = h_0(t);
        if(((g_179 != NULL) && (g_179 != t)))
          _fail(t);
        else
          g_179 = t;
        t = b_179;
        t = g_0(t);
        if(((h_179 != NULL) && (h_179 != t)))
          _fail(t);
        else
          h_179 = t;
        t = c_179;
        t = reverse_acc_2_0(g_0, u_27, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_85;
      t = h_0(t);
    }
  return(t);
}
static ATerm w_27 (ATerm t)
{
  ATerm n_179 = NULL,o_179 = NULL,p_179 = NULL,p_36 = NULL;
  p_179 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_179);
  n_179 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_179);
  p_36 = t;
  t = SSLsetAnnotations(p_36, n_179);
  return(t);
}
static ATerm x_27 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_27 (ATerm t)
{
  ATerm r_179 = NULL;
  r_179 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_179), term_m_87);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_179 = NULL,k_179 = NULL;
  ATerm n_87 = t;
  int o_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_179 = NULL,m_179 = NULL;
      t = term_m_83;
      l_179 = t;
      t = term_m_86;
      m_179 = t;
      t = term_n_86;
      t = o_15(l_179, m_179, t);
      LocalPopChoice(o_87);
    }
  else
    {
      t = n_87;
      t = fetch_1_0(w_27, t);
    }
  t = term_p_87;
  t = echo_0_0(t);
  t = term_c_86;
  j_179 = t;
  t = term_d_86;
  k_179 = t;
  t = term_r_87;
  t = o_15(j_179, k_179, t);
  t = reverse_acc_2_0(_id, x_27, t);
  t = map_1_0(y_27, t);
  return(t);
}
ATerm fetch_1_0 (ATerm n_124 (ATerm), ATerm t)
{
  static ATerm o_180 (ATerm t)
  {
    ATerm l_180 = NULL,m_180 = NULL,n_180 = NULL;
    l_180 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_180 = ATgetFirst((ATermList) t);
        n_180 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_87 = t;
      int t_87 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_79 = NULL,b_80 = NULL,s_36 = NULL;
          t = SSLgetAnnotations(l_180);
          q_79 = t;
          t = m_180;
          t = n_124(t);
          b_80 = t;
          t = (ATerm) ATinsert(CheckATermList(n_180), b_80);
          s_36 = t;
          t = SSLsetAnnotations(s_36, q_79);
          LocalPopChoice(t_87);
        }
      else
        {
          t = s_87;
          {
            ATerm j_80 = NULL,m_80 = NULL,t_36 = NULL;
            t = SSLgetAnnotations(l_180);
            j_80 = t;
            t = n_180;
            t = o_180(t);
            m_80 = t;
            t = (ATerm) ATinsert(CheckATermList(m_80), m_180);
            t_36 = t;
            t = SSLsetAnnotations(t_36, j_80);
          }
        }
    }
    return(t);
  }
  t = o_180(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_180 = NULL,t_180 = NULL,u_180 = NULL;
  s_180 = t;
  {
    ATerm u_87 = t;
    int v_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_180;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_87 = ATgetFirst((ATermList) t);
                ATerm x_87 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_180;
          }
        LocalPopChoice(v_87);
      }
    else
      {
        t = u_87;
        t = (ATerm) ATinsert(ATempty, s_180);
      }
  }
  t_180 = t;
  t = term_w_83;
  u_180 = t;
  t = SSL_printnl(u_180, t_180);
  t = s_180;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_180 = NULL,z_180 = NULL;
  t = term_m_83;
  y_180 = t;
  t = term_m_86;
  z_180 = t;
  t = term_n_86;
  t = o_15(y_180, z_180, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm t_15 (ATerm l_67, ATerm m_67, ATerm t)
{
  t = SSL_hashtable_get(m_67, l_67);
  return(t);
}
static ATerm o_15 (ATerm w_64, ATerm x_64, ATerm t)
{
  ATerm a_181 = NULL;
  t = lookup_table_0_1(w_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_15(x_64, a_181, t);
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
  ATerm c_181 = NULL,d_181 = NULL;
  t = term_y_87;
  c_181 = t;
  t = term_i_85;
  d_181 = t;
  t = term_z_87;
  t = r_15(c_181, d_181, t);
  return(t);
}
static ATerm c_28 (ATerm t)
{
  t = term_a_88;
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
  ATerm e_181 = NULL,f_181 = NULL,g_181 = NULL,h_181 = NULL;
  t = term_y_87;
  g_181 = t;
  t = term_i_85;
  h_181 = t;
  t = term_z_87;
  t = r_15(g_181, h_181, t);
  t = term_b_88;
  e_181 = t;
  t = term_i_85;
  f_181 = t;
  t = term_c_88;
  t = r_15(e_181, f_181, t);
  t = term_d_88;
  return(t);
}
static ATerm g_28 (ATerm t)
{
  t = term_e_88;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_88 = t;
  int g_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_27, a_28, c_28, t);
      LocalPopChoice(g_88);
    }
  else
    {
      t = f_88;
      t = Option_3_0(e_28, f_28, g_28, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_102 (ATerm), ATerm s_102 (ATerm), ATerm t)
{
  ATerm i_181 = NULL,j_181 = NULL,k_181 = NULL,l_181 = NULL,m_181 = NULL,n_181 = NULL,y_36 = NULL;
  n_181 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_181 = ATgetFirst((ATermList) t);
      k_181 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_181);
  i_181 = t;
  t = j_181;
  t = r_102(t);
  l_181 = t;
  t = k_181;
  t = s_102(t);
  m_181 = t;
  t = (ATerm) ATinsert(CheckATermList(m_181), l_181);
  y_36 = t;
  t = SSLsetAnnotations(y_36, i_181);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_145 (ATerm), ATerm t)
{
  ATerm s_181 = NULL,t_181 = NULL,u_181 = NULL,v_181 = NULL,x_181 = NULL,y_181 = NULL,c_37 = NULL;
  s_181 = t;
  {
    ATerm h_88 = t;
    int i_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_j_88;
        t = p_145(t);
        LocalPopChoice(i_88);
      }
    else
      {
        t = h_88;
      }
  }
  t = s_181;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_181 = ATgetFirst((ATermList) t);
      v_181 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_181);
  t_181 = t;
  t = term_m_86;
  y_181 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_86, u_181);
  t = r_15(y_181, u_181, t);
  t = v_181;
  {
    static ATerm i_182 (ATerm t)
    {
      ATerm k_88 = t;
      int l_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_88 = t;
          int n_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_182 = NULL;
              b_182 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_182;
              LocalPopChoice(n_88);
            }
          else
            {
              t = m_88;
              t = p_145(t);
              t = Cons_2_0(_id, i_182, t);
            }
          LocalPopChoice(l_88);
        }
      else
        {
          t = k_88;
          {
            ATerm e_182 = NULL,f_182 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_182 = ATgetFirst((ATermList) t);
                f_182 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_182), (ATerm) ATmakeAppl(sym_Undefined_1, e_182));
          }
        }
      return(t);
    }
    t = i_182(t);
  }
  x_181 = t;
  t = (ATerm) ATinsert(CheckATermList(x_181), (ATerm) ATmakeAppl(sym_Program_1, u_181));
  c_37 = t;
  t = SSLsetAnnotations(c_37, t_181);
  return(t);
}
static ATerm l_28 (ATerm t)
{
  ATerm v_182 = NULL;
  v_182 = t;
  if(match_string(t, "--help"))
    {
      t = v_182;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_182;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_182;
        }
    }
  return(t);
}
static ATerm n_28 (ATerm t)
{
  ATerm w_182 = NULL,x_182 = NULL;
  t = term_g_87;
  w_182 = t;
  t = term_i_85;
  x_182 = t;
  t = term_o_88;
  t = r_15(w_182, x_182, t);
  t = term_p_88;
  return(t);
}
static ATerm q_28 (ATerm t)
{
  t = term_q_88;
  return(t);
}
static ATerm w_28 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_145 (ATerm), ATerm t)
{
  ATerm n_182 = NULL,o_182 = NULL,p_182 = NULL,q_182 = NULL,r_182 = NULL,s_182 = NULL,t_182 = NULL,u_182 = NULL;
  p_182 = t;
  t = term_c_86;
  q_182 = t;
  t = term_r_88;
  t = lookup_table_0_1(q_182, t);
  u_182 = t;
  t = term_d_86;
  r_182 = t;
  t = (ATerm) ATempty;
  s_182 = t;
  t = u_182;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(r_182, s_182, t_182, t);
  t = p_182;
  {
    static ATerm j_28 (ATerm t)
    {
      ATerm s_88 = t;
      int t_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_145(t);
          LocalPopChoice(t_88);
        }
      else
        {
          t = s_88;
          {
            ATerm u_88 = t;
            int v_88 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_28, n_28, q_28, t);
                LocalPopChoice(v_88);
              }
            else
              {
                t = u_88;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_28, t);
  }
  {
    ATerm w_88 = t;
    int x_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_183 = NULL;
        j_183 = t;
        {
          ATerm y_88 = t;
          int z_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_80 = NULL;
              t = j_183;
              {
                ATerm a_89 = t;
                int b_89 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_81 = NULL,b_81 = NULL;
                    t = term_m_83;
                    a_81 = t;
                    t = term_g_87;
                    b_81 = t;
                    t = term_h_87;
                    t = o_15(a_81, b_81, t);
                    LocalPopChoice(b_89);
                  }
                else
                  {
                    t = a_89;
                    t = fetch_1_0(w_28, t);
                  }
              }
              t = j_183;
              t = default_system_usage_0_0(t);
              t = term_y_47;
              t_80 = t;
              t = SSL_exit(t_80);
              LocalPopChoice(z_88);
            }
          else
            {
              t = y_88;
              {
                ATerm f_81 = NULL,g_81 = NULL,h_81 = NULL;
                t = term_m_83;
                g_81 = t;
                t = term_y_87;
                h_81 = t;
                t = term_c_89;
                t = o_15(g_81, h_81, t);
                t = j_183;
                t = default_system_about_0_0(t);
                t = term_y_47;
                f_81 = t;
                t = SSL_exit(f_81);
              }
            }
        }
        LocalPopChoice(x_88);
      }
    else
      {
        t = w_88;
        {
          ATerm d_89 = t;
          int g_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_183 = NULL,l_183 = NULL,m_183 = NULL;
              static ATerm x_28 (ATerm t)
              {
                ATerm n_183 = NULL,o_183 = NULL,p_183 = NULL,j_37 = NULL;
                p_183 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_183 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_183);
                n_183 = t;
                t = o_183;
                if(((n_182 != NULL) && (n_182 != t)))
                  _fail(t);
                else
                  n_182 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_183);
                j_37 = t;
                t = SSLsetAnnotations(j_37, n_183);
                return(t);
              }
              t = fetch_1_0(x_28, t);
              t = term_i_45;
              l_183 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_182)), term_h_89);
              m_183 = t;
              t = SSL_printnl(l_183, m_183);
              t = (ATerm) ATmakeAppl(sym__2, term_i_45, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_182)), term_h_89));
              t = default_system_usage_0_0(t);
              t = term_o_45;
              k_183 = t;
              t = SSL_exit(k_183);
              LocalPopChoice(g_89);
            }
          else
            {
              t = d_89;
            }
        }
      }
  }
  o_182 = t;
  t = term_c_86;
  t = table_destroy_0_0(t);
  t = o_182;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_143 (ATerm), ATerm p_143 (ATerm), ATerm q_143 (ATerm), ATerm r_143 (ATerm), ATerm t)
{
  ATerm u_183 = NULL,v_183 = NULL,w_183 = NULL,x_183 = NULL,y_183 = NULL;
  t = parse_options_1_0(o_143, t);
  u_183 = t;
  t = term_i_89;
  t = table_create_0_0(t);
  t = term_i_89;
  v_183 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_i_89, term_m_89, u_183);
  t = lookup_table_0_1(v_183, t);
  y_183 = t;
  t = term_m_89;
  w_183 = t;
  t = y_183;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_183 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_15(w_183, u_183, x_183, t);
  t = u_183;
  t = q_143(t);
  {
    ATerm n_89 = t;
    int o_89 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_143, t);
        LocalPopChoice(o_89);
      }
    else
      {
        t = n_89;
        {
          ATerm p_89 = t;
          int q_89 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_143(t);
              t = report_success_0_0(t);
              LocalPopChoice(q_89);
            }
          else
            {
              t = p_89;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm y_28 (ATerm t)
{
  ATerm r_89 = t;
  int s_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(s_89);
    }
  else
    {
      t = r_89;
      {
        ATerm t_89 = t;
        int u_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(u_89);
          }
        else
          {
            t = t_89;
            {
              ATerm v_89 = t;
              int w_89 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(w_89);
                }
              else
                {
                  t = v_89;
                  {
                    ATerm x_89 = t;
                    int y_89 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(d_29, e_29, j_29, t);
                        LocalPopChoice(y_89);
                      }
                    else
                      {
                        t = x_89;
                        {
                          ATerm z_89 = t;
                          int a_90 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(a_90);
                            }
                          else
                            {
                              t = z_89;
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
static ATerm c_29 (ATerm t)
{
  t = input_1_0(r_29, t);
  return(t);
}
static ATerm d_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_29 (ATerm t)
{
  ATerm a_184 = NULL,b_184 = NULL;
  t = term_z_83;
  a_184 = t;
  t = term_i_85;
  b_184 = t;
  t = term_b_90;
  t = r_15(a_184, b_184, t);
  t = term_c_90;
  return(t);
}
static ATerm j_29 (ATerm t)
{
  t = term_d_90;
  return(t);
}
static ATerm r_29 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(y_28, default_usage_0_0, _id, c_29, t);
  return(t);
}

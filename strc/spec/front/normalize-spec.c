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
ATerm term_n_89;
ATerm term_m_89;
ATerm term_l_89;
ATerm term_u_88;
ATerm term_t_88;
ATerm term_s_88;
ATerm term_p_88;
ATerm term_e_88;
ATerm term_d_88;
ATerm term_c_88;
ATerm term_a_88;
ATerm term_u_87;
ATerm term_m_87;
ATerm term_l_87;
ATerm term_k_87;
ATerm term_j_87;
ATerm term_i_87;
ATerm term_h_87;
ATerm term_g_87;
ATerm term_z_86;
ATerm term_y_86;
ATerm term_v_86;
ATerm term_u_86;
ATerm term_t_86;
ATerm term_q_86;
ATerm term_p_86;
ATerm term_m_86;
ATerm term_l_86;
ATerm term_k_86;
ATerm term_a_86;
ATerm term_z_85;
ATerm term_y_85;
ATerm term_x_85;
ATerm term_s_85;
ATerm term_r_85;
ATerm term_q_85;
ATerm term_p_85;
ATerm term_k_85;
ATerm term_j_85;
ATerm term_i_85;
ATerm term_h_85;
ATerm term_e_85;
ATerm term_d_85;
ATerm term_b_85;
ATerm term_w_84;
ATerm term_v_84;
ATerm term_u_84;
ATerm term_t_84;
ATerm term_q_84;
ATerm term_p_84;
ATerm term_o_84;
ATerm term_m_84;
ATerm term_l_84;
ATerm term_k_84;
ATerm term_h_84;
ATerm term_f_84;
ATerm term_n_83;
ATerm term_m_83;
ATerm term_j_83;
ATerm term_i_83;
ATerm term_h_83;
ATerm term_c_83;
ATerm term_b_83;
ATerm term_a_83;
ATerm term_z_82;
ATerm term_k_81;
ATerm term_j_81;
ATerm term_i_81;
ATerm term_x_79;
ATerm term_w_79;
ATerm term_v_79;
ATerm term_u_79;
ATerm term_t_79;
ATerm term_l_79;
ATerm term_y_72;
ATerm term_x_72;
ATerm term_w_72;
ATerm term_l_72;
ATerm term_q_71;
ATerm term_s_70;
ATerm term_n_70;
ATerm term_c_64;
ATerm term_t_63;
ATerm term_n_62;
ATerm term_m_62;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_i_56;
ATerm term_h_56;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_n_54;
ATerm term_m_54;
ATerm term_z_53;
ATerm term_y_53;
ATerm term_x_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_k_53;
ATerm term_j_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_c_53;
ATerm term_b_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_n_52;
ATerm term_k_52;
ATerm term_f_52;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_r_50;
ATerm term_t_48;
ATerm term_i_48;
ATerm term_e_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_t_47;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_c_45;
ATerm term_y_44;
ATerm term_x_44;
ATerm term_s_44;
ATerm term_p_44;
ATerm term_m_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_f_44;
ATerm term_z_43;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_t_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_l_43;
ATerm term_j_43;
ATerm term_i_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_c_38;
ATerm term_t_37;
ATerm term_a_37;
ATerm term_w_36;
ATerm term_t_36;
ATerm term_q_36;
ATerm term_o_36;
ATerm term_m_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_w_35;
ATerm term_f_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_a_35;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_o_34;
ATerm term_b_34;
ATerm term_z_33;
ATerm term_x_33;
ATerm term_q_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_t_32;
ATerm term_n_32;
ATerm term_v_29;
ATerm term_t_29;
ATerm term_q_29;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Op_2, term_n_32, (ATerm) ATempty);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_33);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_33);
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_x_33));
  term_x_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_29);
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(sym_Op_2, term_z_33, (ATerm) ATempty);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_34);
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_33);
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym_Call_2, term_q_34, (ATerm) ATempty);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_35);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_Call_2, term_b_36, (ATerm) ATempty);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_Call_2, term_x_33, (ATerm) ATempty);
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_36);
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_j_43));
  term_j_43 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_43);
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym_RootApp_1, term_t_29);
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
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_44);
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_44);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_s_44));
  term_s_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_44);
  ATprotect(&(term_x_44));
  term_x_44 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_44);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_45);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Counter", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(sym_Defined_2, term_x_47, term_y_47);
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("DRRenameVar", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("DRVarNumber", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_e_48));
  term_e_48 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(sym__2, term_c_48, term_z_47);
  ATprotect(&(term_r_50));
  term_r_50 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-Rule already generated: ", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("DRAuxRuleGenerated", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("callers already generated: ", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("DRCallersGenerated", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("freshly generating the DR callers: ", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("once-", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_52);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Var_1, term_q_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_52);
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym_Build_1, term_q_33);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("h", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("res", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym_Var_1, term_w_52);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule-pointer", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("key", 0, ATtrue));
  ATprotect(&(term_b_53));
  term_b_53 = (ATerm) ATmakeAppl(sym_Var_1, term_a_53);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("tbl", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym_Var_1, term_c_53);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("split-fetch", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_53);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(sym_Match_1, term_x_52);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(ATmakeSymbol("conc", 0, ATtrue));
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_53);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_k_53);
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("closures'", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_Var_1, term_m_53);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("hashtable-put", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_53);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(ATmakeSymbol("x_0", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_53);
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_53);
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATempty);
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_54);
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_55);
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-label-scope", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_55);
  ATprotect(&(term_h_56));
  term_h_56 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_56);
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_56);
  ATprotect(&(term_m_62));
  term_m_62 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scope", 0, ATtrue));
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_62);
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_n_70));
  term_n_70 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] Your condition has been removed from the original dynamic rule: ", 0, ATtrue));
  ATprotect(&(term_s_70));
  term_s_70 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] rule undefining doesn't allow a condition strategy anymore", 0, ATtrue));
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(ATmakeSymbol("DROverrideLabelsNeeded", 0, ATtrue));
  ATprotect(&(term_l_72));
  term_l_72 = (ATerm) ATmakeAppl(sym__2, term_q_71, (ATerm) ATempty);
  ATprotect(&(term_w_72));
  term_w_72 = (ATerm) ATmakeAppl(ATmakeSymbol("c_1", 0, ATtrue));
  ATprotect(&(term_x_72));
  term_x_72 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_72);
  ATprotect(&(term_y_72));
  term_y_72 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_x_72);
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_t_79));
  term_t_79 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_79);
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_x_79));
  term_x_79 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_79);
  ATprotect(&(term_i_81));
  term_i_81 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_k_81));
  term_k_81 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_z_82));
  term_z_82 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_83));
  term_a_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_b_83));
  term_b_83 = (ATerm) ATmakeAppl(sym__2, term_z_82, term_a_83);
  ATprotect(&(term_c_83));
  term_c_83 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_83));
  term_h_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_83));
  term_i_83 = (ATerm) ATmakeAppl(sym__2, term_z_82, term_h_83);
  ATprotect(&(term_j_83));
  term_j_83 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_83));
  term_m_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(sym__2, term_z_82, term_m_83);
  ATprotect(&(term_f_84));
  term_f_84 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeAppl(sym__2, term_z_82, term_k_84);
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_84));
  term_o_84 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_84));
  term_p_84 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_84));
  term_q_84 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_84));
  term_t_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_84));
  term_u_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_84));
  term_v_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_84));
  term_w_84 = (ATerm) ATmakeAppl(sym__2, term_v_84, term_y_47);
  ATprotect(&(term_b_85));
  term_b_85 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_47);
  ATprotect(&(term_d_85));
  term_d_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_85));
  term_h_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_85));
  term_i_85 = (ATerm) ATmakeAppl(sym__2, term_h_85, term_o_84);
  ATprotect(&(term_j_85));
  term_j_85 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_85));
  term_k_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_85));
  term_p_85 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_85));
  term_q_85 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_85));
  term_r_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_85));
  term_s_85 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_85));
  term_x_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_y_85));
  term_y_85 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_85));
  term_z_85 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_86));
  term_a_86 = (ATerm) ATmakeAppl(sym__2, term_z_82, term_z_85);
  ATprotect(&(term_k_86));
  term_k_86 = (ATerm) ATmakeAppl(sym__2, term_z_82, term_v_84);
  ATprotect(&(term_l_86));
  term_l_86 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_86));
  term_m_86 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_86));
  term_q_86 = (ATerm) ATmakeAppl(sym__2, term_z_82, term_p_86);
  ATprotect(&(term_t_86));
  term_t_86 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_u_86));
  term_u_86 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_v_86));
  term_v_86 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_86));
  term_y_86 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_86));
  term_z_86 = (ATerm) ATmakeAppl(sym__2, term_p_85, term_q_85);
  ATprotect(&(term_g_87));
  term_g_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_87));
  term_h_87 = (ATerm) ATmakeAppl(sym__2, term_g_87, term_o_84);
  ATprotect(&(term_i_87));
  term_i_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_87));
  term_j_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_87));
  term_k_87 = (ATerm) ATmakeAppl(sym__2, term_j_87, term_o_84);
  ATprotect(&(term_l_87));
  term_l_87 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_87));
  term_m_87 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_87));
  term_u_87 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_88));
  term_a_88 = (ATerm) ATmakeAppl(sym__2, term_p_86, term_o_84);
  ATprotect(&(term_c_88));
  term_c_88 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_88));
  term_d_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_88));
  term_e_88 = (ATerm) ATmakeAppl(sym__3, term_p_85, term_q_85, (ATerm) ATempty);
  ATprotect(&(term_p_88));
  term_p_88 = (ATerm) ATmakeAppl(sym__2, term_z_82, term_g_87);
  ATprotect(&(term_s_88));
  term_s_88 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_88));
  term_t_88 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_88));
  term_u_88 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_89));
  term_l_89 = (ATerm) ATmakeAppl(sym__2, term_m_83, term_o_84);
  ATprotect(&(term_m_89));
  term_m_89 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_89));
  term_n_89 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm v_116 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm c_13 (ATerm o_150 (ATerm), ATerm z_84, ATerm x_84, ATerm y_84, ATerm c_85, ATerm a_85, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm o_150 (ATerm), ATerm t);
static ATerm f_19 (ATerm u_11, ATerm v_11, ATerm t);
static ATerm g_19 (ATerm e_12, ATerm f_12, ATerm t);
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
ATerm pat_td_1_0 (ATerm x_148 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm e_13 (ATerm q_75, ATerm r_75, ATerm s_75, ATerm t);
static ATerm i_31 (ATerm m_30, ATerm t);
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
static ATerm f_13 (ATerm d_71, ATerm e_71, ATerm f_71, ATerm t);
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
static ATerm g_13 (ATerm n_150 (ATerm), ATerm g_84, ATerm d_84, ATerm e_84, ATerm n_84, ATerm r_84, ATerm s_84, ATerm t);
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
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm p_150 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm i_13 (ATerm g_85, ATerm f_85, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm s_62 (ATerm t_61, ATerm t);
static ATerm t_62 (ATerm v_61, ATerm t);
static ATerm q_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm a_66 (ATerm f_65, ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
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
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm next_counter_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm NewNumberedVar_0_0 (ATerm t);
ATerm RenameVarTerm_2_0 (ATerm t_150 (ATerm), ATerm u_150 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm dr_rename_vars_0_0 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm v_150 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm DesugarDynRuleDef_0_0 (ATerm t);
ATerm split_dynamic_rule_0_0 (ATerm t);
static ATerm t_11 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm w_150 (ATerm), ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm g_12 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm h_12 (ATerm t);
static ATerm i_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm n_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm o_14 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm v_13 (ATerm b_89, ATerm a_89, ATerm t);
ATerm repeat_2_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm r_124 (ATerm), ATerm t);
static ATerm v_15 (ATerm t);
ATerm collect_om_2_0 (ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm t);
ATerm partition_1_0 (ATerm s_131 (ATerm), ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm z_117 (ATerm), ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
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
static ATerm p_17 (ATerm t);
ATerm dummify_0_0 (ATerm t);
ATerm DRDef_LHS_1_0 (ATerm z_150 (ATerm), ATerm t);
static ATerm x_134 (ATerm a_133, ATerm b_133, ATerm c_133, ATerm d_133, ATerm e_133, ATerm g_133, ATerm h_133, ATerm t);
static ATerm q_17 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm w_122 (ATerm), ATerm t);
static ATerm r_17 (ATerm t);
ATerm UpgradeUndefine_0_0 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm c_18 (ATerm t);
ATerm upgrade_old_dr_constructs_0_0 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm i_18 (ATerm t);
static ATerm j_18 (ATerm t);
ATerm LiftDynamicRules_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm s_149 (ATerm), ATerm t_149 (ATerm), ATerm u_149 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm b_150 (ATerm), ATerm t);
static ATerm k_18 (ATerm t);
static ATerm l_18 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
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
static ATerm a_19 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm c_19 (ATerm t);
static ATerm d_19 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm l_19 (ATerm t);
static ATerm m_19 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm o_19 (ATerm t);
static ATerm p_19 (ATerm t);
static ATerm t_19 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm u_19 (ATerm t);
static ATerm v_19 (ATerm t);
static ATerm w_19 (ATerm t);
static ATerm a_20 (ATerm t);
static ATerm d_20 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm e_14 (ATerm s_127 (ATerm), ATerm g_31, ATerm f_31, ATerm t);
static ATerm f_14 (ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm k_31, ATerm j_31, ATerm t);
static ATerm g_14 (ATerm n_127 (ATerm), ATerm e_31, ATerm d_31, ATerm t);
ATerm genzip_4_0 (ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm t);
static ATerm o_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm q_20 (ATerm t);
static ATerm l_14 (ATerm h_705, ATerm m_705, ATerm d_70, ATerm t);
ATerm while_not_2_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t);
ATerm for_3_0 (ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t);
static ATerm r_20 (ATerm t);
static ATerm v_20 (ATerm t);
static ATerm a_21 (ATerm t);
static ATerm e_157 (ATerm y_155, ATerm z_155, ATerm a_156, ATerm t);
static ATerm c_21 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm e_21 (ATerm t);
static ATerm f_21 (ATerm t);
static ATerm j_21 (ATerm t);
static ATerm l_21 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm g_22 (ATerm t);
static ATerm h_22 (ATerm t);
ATerm free_vars_3_0 (ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm w_116 (ATerm), ATerm t);
static ATerm p_14 (ATerm k_63, ATerm l_63, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm n_118 (ATerm), ATerm t);
static ATerm q_14 (ATerm r_136 (ATerm), ATerm i_45, ATerm g_45, ATerm t);
static ATerm j_22 (ATerm t);
static ATerm l_22 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm r_14 (ATerm e_63, ATerm f_63, ATerm t);
ATerm end_scope_1_0 (ATerm o_136 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_136 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm p_136 (ATerm), ATerm q_136 (ATerm), ATerm t);
static ATerm t_22 (ATerm t);
static ATerm u_22 (ATerm t);
static ATerm v_22 (ATerm t);
static ATerm w_22 (ATerm t);
static ATerm x_22 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm k_131 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm y_123 (ATerm), ATerm t);
static ATerm m_163 (ATerm e_163, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm u_14 (ATerm o_22, ATerm k_22, ATerm t);
ATerm foldr_3_0 (ATerm i_130 (ATerm), ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm t);
static ATerm k_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm m_23 (ATerm t);
static ATerm u_23 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm v_23 (ATerm t);
static ATerm a_24 (ATerm t);
static ATerm c_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm p_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm v_24 (ATerm t);
static ATerm w_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm b_25 (ATerm t);
static ATerm f_25 (ATerm t);
static ATerm g_25 (ATerm t);
static ATerm h_25 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm v_14 (ATerm y_40, ATerm z_40, ATerm t);
static ATerm w_14 (ATerm c_25, ATerm d_25, ATerm t);
static ATerm y_14 (ATerm y_122 (ATerm), ATerm y_189, ATerm i_25, ATerm t);
static ATerm x_14 (ATerm y_24, ATerm z_24, ATerm t);
static ATerm j_25 (ATerm t);
static ATerm p_25 (ATerm t);
ATerm output_1_0 (ATerm z_142 (ATerm), ATerm t);
static ATerm w_168 (ATerm q_168, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_14 (ATerm e_25, ATerm t);
static ATerm a_15 (ATerm r_39, ATerm s_39, ATerm t);
static ATerm b_15 (ATerm a_41, ATerm b_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_170 (ATerm g_169, ATerm t);
static ATerm i_170 (ATerm k_169, ATerm l_169, ATerm m_169, ATerm t);
static ATerm j_170 (ATerm u_169, ATerm v_169, ATerm w_169, ATerm t);
static ATerm c_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm a_143 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm v_25 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm f_26 (ATerm t);
static ATerm h_26 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm l_15 (ATerm e_58, ATerm f_58, ATerm t);
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t);
static ATerm j_26 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm n_26 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_26 (ATerm t);
static ATerm x_26 (ATerm t);
static ATerm y_26 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm j_15 (ATerm z_62, ATerm a_63, ATerm y_62, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t);
static ATerm b_27 (ATerm t);
static ATerm c_27 (ATerm t);
static ATerm g_27 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm d_15 (ATerm u_43, ATerm v_43, ATerm t);
ATerm foldr_2_0 (ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm h_27 (ATerm t);
static ATerm i_27 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_140 (ATerm), ATerm t);
static ATerm o_27 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_27 (ATerm t);
ATerm need_help_1_0 (ATerm q_142 (ATerm), ATerm t);
static ATerm m_15 (ATerm e_67, ATerm f_67, ATerm g_67, ATerm t);
ATerm lookup_table_0_1 (ATerm l_64, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_67, ATerm n_67, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm f_15 (ATerm j_67, ATerm k_67, ATerm t);
static ATerm g_15 (ATerm o_67, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm h_123 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm u_27 (ATerm t);
static ATerm v_27 (ATerm t);
static ATerm w_27 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_123 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm n_15 (ATerm h_67, ATerm i_67, ATerm t);
static ATerm i_15 (ATerm s_64, ATerm t_64, ATerm t);
static ATerm y_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm d_28 (ATerm t);
static ATerm e_28 (ATerm t);
static ATerm f_28 (ATerm t);
static ATerm g_28 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_144 (ATerm), ATerm t);
static ATerm n_28 (ATerm t);
static ATerm o_28 (ATerm t);
static ATerm s_28 (ATerm t);
static ATerm y_28 (ATerm t);
ATerm parse_options_1_0 (ATerm s_144 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_142 (ATerm), ATerm t_142 (ATerm), ATerm u_142 (ATerm), ATerm v_142 (ATerm), ATerm t);
static ATerm a_29 (ATerm t);
static ATerm b_29 (ATerm t);
static ATerm f_29 (ATerm t);
static ATerm m_29 (ATerm t);
static ATerm n_29 (ATerm t);
static ATerm p_29 (ATerm t);
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
              t = term_q_29;
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
                  t = term_q_29;
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
                      t = term_t_29;
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
ATerm topdown_1_0 (ATerm v_116 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(v_116, t);
    return(t);
  }
  t = v_116(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm e_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_6);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm w_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_30);
    }
  else
    {
      t = w_29;
      {
        ATerm d_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_30);
          }
        else
          {
            t = d_30;
            {
              ATerm k_30 = t;
              int l_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_6 = NULL,j_6 = NULL,l_6 = NULL,m_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_6 = ATgetArgument(t, 0);
                      j_6 = ATgetArgument(t, 1);
                      l_6 = ATgetArgument(t, 2);
                      m_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_6;
                  t = map_1_0(w_0, t);
                  LocalPopChoice(l_30);
                }
              else
                {
                  t = k_30;
                  {
                    ATerm n_30 = t;
                    int o_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_30);
                      }
                    else
                      {
                        t = n_30;
                        t = dynrule_targs_1_0(z_0, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm w_6 = NULL;
  ATerm p_30 = t;
  int q_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_6 = ATgetArgument(t, 0);
          {
            ATerm s_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_30);
      t = w_6;
    }
  else
    {
      t = p_30;
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
static ATerm z_0 (ATerm t)
{
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  ATerm d_7 = NULL;
  ATerm w_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_7 = ATgetArgument(t, 0);
          {
            ATerm h_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_30);
      t = d_7;
    }
  else
    {
      t = w_30;
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
  ATerm g_7 = NULL;
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_7);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm h_7 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_7);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm l_31 = t;
  int m_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_31);
    }
  else
    {
      t = l_31;
      {
        ATerm n_31 = t;
        int o_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_31);
          }
        else
          {
            t = n_31;
            {
              ATerm p_31 = t;
              int q_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_7 = NULL,o_7 = NULL,u_7 = NULL,v_7 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_7 = ATgetArgument(t, 0);
                      o_7 = ATgetArgument(t, 1);
                      u_7 = ATgetArgument(t, 2);
                      v_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_7;
                  t = map_1_0(j_1, t);
                  LocalPopChoice(q_31);
                }
              else
                {
                  t = p_31;
                  {
                    ATerm r_31 = t;
                    int w_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_31);
                      }
                    else
                      {
                        t = r_31;
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
  ATerm d_8 = NULL;
  ATerm x_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_8 = ATgetArgument(t, 0);
          {
            ATerm b_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_32);
      t = d_8;
    }
  else
    {
      t = x_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_8;
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
  ATerm i_8 = NULL;
  ATerm c_32 = t;
  int g_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_8 = ATgetArgument(t, 0);
          {
            ATerm h_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_32);
      t = i_8;
    }
  else
    {
      t = c_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_8;
    }
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_8 = NULL,p_0 = NULL,s_0 = NULL,k_0 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            v_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_8);
        p_0 = t;
        t = v_8;
        t = ContextVar_0_0(t);
        s_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, s_0);
        k_0 = t;
        t = SSLsetAnnotations(k_0, p_0);
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, m_8);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  static ATerm m_9 (ATerm m_4, ATerm n_4, ATerm p_4, ATerm q_4, ATerm s_4, ATerm u_4, ATerm w_4, ATerm t)
  {
    ATerm d_5 = NULL,f_5 = NULL,g_5 = NULL,n_5 = NULL,p_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, s_4, term_t_32);
    {
      ATerm u_32 = t;
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
          t = u_32;
        }
    }
    t = new_0_0(t);
    d_5 = t;
    t = q_4;
    t = dummify_0_0(t);
    g_5 = t;
    {
      ATerm v_32 = t;
      int a_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_5;
          if((q_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, d_5);
          LocalPopChoice(a_33);
        }
      else
        {
          t = v_32;
          t = g_5;
        }
    }
    f_5 = t;
    t = g_5;
    t = free_vars_3_0(q_0, t_0, tboundin_3_0, t);
    t = map_1_0(g_1, t);
    p_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_4, u_4);
    t = free_vars_3_0(h_1, i_1, tboundin_3_0, t);
    t = filter_1_0(m_1, t);
    n_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_5, p_5);
    t = diff_0_0(t);
    r_5 = t;
    t = new_0_0(t);
    s_5 = t;
    t = m_4;
    t = o_0(t);
    t_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, t_5, (ATerm) ATmakeAppl(sym_Op_2, term_b_33, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_33, (ATerm) ATinsert(CheckATermList(r_5), (ATerm) ATmakeAppl(sym_Str_1, s_5)))), g_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, m_4, n_4, p_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, d_5), q_4), s_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_4)))), f_5), (ATerm) ATmakeAppl(sym_Op_2, term_c_33, (ATerm) ATinsert(CheckATermList(r_5), (ATerm) ATmakeAppl(sym_Str_1, s_5))))), u_4))));
    return(t);
  }
  ATerm w_8 = NULL,y_8 = NULL,z_8 = NULL,c_9 = NULL,e_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
  z_8 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      c_9 = ATgetArgument(t, 0);
      e_9 = ATgetArgument(t, 1);
      g_9 = ATgetArgument(t, 2);
      h_9 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = h_9;
  if(match_cons(t, sym_Rule_3))
    {
      i_9 = ATgetArgument(t, 0);
      j_9 = ATgetArgument(t, 1);
      k_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_9;
  if(match_cons(t, sym_Op_2))
    {
      w_8 = ATgetArgument(t, 0);
      y_8 = ATgetArgument(t, 1);
      t = y_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = w_8;
          if(match_string(t, "Undefined"))
            {
              ATerm f_33 = t;
              int j_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
                  t = z_8;
                  t = new_0_0(t);
                  k_2 = t;
                  t = i_9;
                  t = dummify_0_0(t);
                  i_2 = t;
                  {
                    ATerm k_33 = t;
                    int l_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_2;
                        if((i_9 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, k_2);
                        LocalPopChoice(l_33);
                      }
                    else
                      {
                        t = k_33;
                        t = i_2;
                      }
                  }
                  l_2 = t;
                  t = c_9;
                  t = o_0(t);
                  m_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, m_2, (ATerm) ATmakeAppl(sym_Op_2, term_b_33, (ATerm) ATinsert(ATinsert(ATempty, term_t_32), i_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, c_9, e_9, g_9, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_2), i_9), term_t_32, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_9)))), l_2), term_t_32)), (ATerm) ATmakeAppl(sym_Seq_2, k_9, term_q_29)))));
                  LocalPopChoice(j_33);
                }
              else
                {
                  t = f_33;
                  t = m_9(c_9, e_9, g_9, i_9, j_9, k_9, z_8, t);
                }
            }
          else
            {
              t = m_9(c_9, e_9, g_9, i_9, j_9, k_9, z_8, t);
            }
        }
      else
        {
          t = w_8;
          t = m_9(c_9, e_9, g_9, i_9, j_9, k_9, z_8, t);
        }
    }
  else
    {
      t = m_9(c_9, e_9, g_9, i_9, j_9, k_9, z_8, t);
    }
  return(t);
}
static ATerm c_13 (ATerm o_150 (ATerm), ATerm z_84, ATerm x_84, ATerm y_84, ATerm c_85, ATerm a_85, ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,t_9 = NULL;
  t = new_0_0(t);
  q_9 = t;
  t = c_85;
  t = dummify_0_0(t);
  p_9 = t;
  {
    ATerm m_33 = t;
    int n_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_9;
        if((c_85 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, q_9);
        LocalPopChoice(n_33);
      }
    else
      {
        t = m_33;
        t = p_9;
      }
  }
  r_9 = t;
  t = z_84;
  t = o_150(t);
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, t_9, p_9)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, z_84, x_84, y_84, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, q_9), c_85), term_t_32, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_84)))), r_9), term_q_33)), (ATerm) ATmakeAppl(sym_Seq_2, a_85, term_q_29))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm o_150 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,o_10 = NULL,p_10 = NULL,r_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      m_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
      p_10 = ATgetArgument(t, 2);
      {
        ATerm r_33 = ATgetArgument(t, 3);
        if(match_cons(r_33, sym_Rule_3))
          {
            r_10 = ATgetArgument(r_33, 0);
            {
              ATerm s_33 = ATgetArgument(r_33, 1);
              if(match_cons(s_33, sym_Op_2))
                {
                  ATerm t_33 = ATgetArgument(s_33, 0);
                  if((ATgetSymbol((ATermAppl) t_33) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm u_33 = ATgetArgument(s_33, 1);
                    if(((ATgetType(u_33) != AT_LIST) || !(ATisEmpty(u_33))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            s_10 = ATgetArgument(r_33, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_13(o_150, m_10, o_10, p_10, r_10, s_10, t);
  return(t);
}
static ATerm f_19 (ATerm u_11, ATerm v_11, ATerm t)
{
  t = u_11;
  {
    ATerm v_33 = t;
    if((PushChoice() == 0))
      {
        ATerm x_11 = NULL,z_11 = NULL,b_12 = NULL,c_12 = NULL,m_3 = NULL;
        c_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_11 = ATgetFirst((ATermList) t);
            b_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_12);
        x_11 = t;
        t = b_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(b_12), z_11);
        m_3 = t;
        t = SSLsetAnnotations(m_3, x_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_33;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_29, u_11);
  return(t);
}
static ATerm g_19 (ATerm e_12, ATerm f_12, ATerm t)
{
  t = e_12;
  {
    ATerm w_33 = t;
    if((PushChoice() == 0))
      {
        ATerm j_12 = NULL,k_12 = NULL,r_12 = NULL,s_12 = NULL,o_3 = NULL;
        s_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_12 = ATgetFirst((ATermList) t);
            r_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_12);
        j_12 = t;
        t = r_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(r_12), k_12);
        o_3 = t;
        t = SSLsetAnnotations(o_3, j_12);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_33;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_33, e_12);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm d_14 = NULL,h_14 = NULL,v_2 = NULL;
  d_14 = t;
  t = SSL_explode_term(d_14);
  if(match_cons(t, sym__2))
    {
      ATerm c_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_34 = ATgetArgument(t, 1);
        if(((ATgetType(d_34) == AT_LIST) && !(ATisEmpty(d_34))))
          {
            h_14 = ATgetFirst((ATermList) d_34);
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
  t = SSL_explode_term(d_14);
  if(match_cons(t, sym__2))
    {
      ATerm f_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_34 = ATgetArgument(t, 1);
        if(((ATgetType(h_34) == AT_LIST) && !(ATisEmpty(h_34))))
          {
            ATerm j_34 = ATgetFirst((ATermList) h_34);
            ATerm k_34 = (ATerm) ATgetNext((ATermList) h_34);
            if(((ATgetType(k_34) == AT_LIST) && !(ATisEmpty(k_34))))
              {
                v_2 = ATgetFirst((ATermList) k_34);
                {
                  ATerm n_34 = (ATerm) ATgetNext((ATermList) k_34);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_34, (ATerm) ATinsert(ATinsert(ATempty, v_2), h_14));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm t_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_34, (ATerm) ATinsert(ATinsert(ATempty, y_15), t_15));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_b_34;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_34, (ATerm) ATinsert(ATinsert(ATempty, b_16), a_16));
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      v_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_34, (ATerm) ATinsert(ATinsert(ATempty, w_16), v_16));
  return(t);
}
static ATerm v_1 (ATerm t)
{
  t = term_r_34;
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  if(match_cons(t, sym__2))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_34, (ATerm) ATinsert(ATinsert(ATempty, z_16), y_16));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm t_12 = NULL,u_12 = NULL,a_13 = NULL,l_13 = NULL,m_13 = NULL,q_13 = NULL,u_13 = NULL,y_13 = NULL;
  q_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      u_13 = ATgetArgument(t, 0);
      y_13 = ATgetArgument(t, 1);
      {
        ATerm b_14 = NULL;
        t = y_13;
        t = foldr_2_0(n_1, o_1, t);
        b_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, u_13, b_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          u_13 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, u_13, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              u_13 = ATgetArgument(t, 0);
              {
                ATerm a_3 = NULL;
                t = u_13;
                {
                  ATerm t_34 = t;
                  int z_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_a_35;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_c_35;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_d_35;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_e_35;
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
                      LocalPopChoice(z_34);
                    }
                  else
                    {
                      t = t_34;
                      {
                        ATerm c_3 = NULL;
                        t = SSL_explode_string(u_13);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm g_35 = ATgetFirst((ATermList) t);
                            if(((ATgetType(g_35) != AT_INT) || (ATgetInt((ATermInt) g_35) != 39)))
                              _fail(t);
                            {
                              ATerm h_35 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(h_35) == AT_LIST) && !(ATisEmpty(h_35))))
                                {
                                  c_3 = ATgetFirst((ATermList) h_35);
                                  {
                                    ATerm i_35 = (ATerm) ATgetNext((ATermList) h_35);
                                    if(((ATgetType(i_35) == AT_LIST) && !(ATisEmpty(i_35))))
                                      {
                                        ATerm k_35 = ATgetFirst((ATermList) i_35);
                                        if(((ATgetType(k_35) != AT_INT) || (ATgetInt((ATermInt) k_35) != 39)))
                                          _fail(t);
                                        {
                                          ATerm l_35 = (ATerm) ATgetNext((ATermList) i_35);
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
                      u_13 = ATgetArgument(t, 0);
                      {
                        ATerm q_35 = ATgetArgument(t, 1);
                      }
                      m_13 = ATgetArgument(t, 2);
                      t_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(n_35);
                  t = (ATerm) ATmakeAppl(sym_Con_3, u_13, m_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_12), (ATerm) ATempty));
                }
              else
                {
                  t = m_35;
                  {
                    ATerm r_35 = t;
                    int t_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            u_13 = ATgetArgument(t, 0);
                            {
                              ATerm v_35 = ATgetArgument(t, 1);
                            }
                            m_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(t_35);
                        t = (ATerm) ATmakeAppl(sym_Con_3, u_13, m_13, term_c_36);
                      }
                    else
                      {
                        t = r_35;
                        if(match_cons(t, sym_Con1_2))
                          {
                            u_13 = ATgetArgument(t, 0);
                            y_13 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, u_13, y_13, term_c_36);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                u_13 = ATgetArgument(t, 0);
                                y_13 = ATgetArgument(t, 1);
                                {
                                  static ATerm p_1 (ATerm t)
                                  {
                                    t = y_13;
                                    return(t);
                                  }
                                  t = u_13;
                                  t = foldr_2_0(p_1, q_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    u_13 = ATgetArgument(t, 0);
                                    t = u_13;
                                    t = foldr_2_0(r_1, s_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        u_13 = ATgetArgument(t, 0);
                                        t = u_13;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            u_12 = ATgetFirst((ATermList) t);
                                            a_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = a_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm d_36 = t;
                                                int e_36 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = f_19(u_13, q_13, t);
                                                    LocalPopChoice(e_36);
                                                  }
                                                else
                                                  {
                                                    t = d_36;
                                                    t = u_12;
                                                  }
                                              }
                                            else
                                              {
                                                t = f_19(u_13, q_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = f_19(u_13, q_13, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            u_13 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, u_13));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                u_13 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, u_13));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    u_13 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, u_13));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        u_13 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, u_13));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            u_13 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_13), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                u_13 = ATgetArgument(t, 0);
                                                                y_13 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_13), y_13);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    u_13 = ATgetArgument(t, 0);
                                                                    y_13 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm t_1 (ATerm t)
                                                                      {
                                                                        t = y_13;
                                                                        return(t);
                                                                      }
                                                                      t = u_13;
                                                                      t = foldr_2_0(t_1, u_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        u_13 = ATgetArgument(t, 0);
                                                                        t = u_13;
                                                                        t = foldr_2_0(v_1, w_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            u_13 = ATgetArgument(t, 0);
                                                                            y_13 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_x_33, (ATerm) ATinsert(CheckATermList(y_13), u_13));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                u_13 = ATgetArgument(t, 0);
                                                                                t = u_13;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    u_12 = ATgetFirst((ATermList) t);
                                                                                    a_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = a_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm f_36 = t;
                                                                                        int g_36 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = g_19(u_13, q_13, t);
                                                                                            LocalPopChoice(g_36);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = f_36;
                                                                                            t = u_12;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = g_19(u_13, q_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = g_19(u_13, q_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_m_36;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        u_13 = ATgetArgument(t, 0);
                                                                                        y_13 = ATgetArgument(t, 1);
                                                                                        t = y_13;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            l_13 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_q_36, (ATerm) ATinsert(ATinsert(ATempty, l_13), u_13));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            u_13 = ATgetArgument(t, 0);
                                                                                            t = u_13;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                u_13 = ATgetArgument(t, 0);
                                                                                                y_13 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, u_13, y_13, term_t_29);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    u_13 = ATgetArgument(t, 0);
                                                                                                    y_13 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, u_13, y_13, term_t_29);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        u_13 = ATgetArgument(t, 0);
                                                                                                        y_13 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, u_13, (ATerm)ATempty, y_13);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            u_13 = ATgetArgument(t, 0);
                                                                                                            y_13 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, y_13, u_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                u_13 = ATgetArgument(t, 0);
                                                                                                                y_13 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, u_13, y_13, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    u_13 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, u_13, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        u_13 = ATgetArgument(t, 0);
                                                                                                                        y_13 = ATgetArgument(t, 1);
                                                                                                                        m_13 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, u_13, y_13, (ATerm)ATempty, m_13);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            u_13 = ATgetArgument(t, 0);
                                                                                                                            y_13 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, u_13, (ATerm)ATempty, (ATerm)ATempty, y_13);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                u_13 = ATgetArgument(t, 0);
                                                                                                                                y_13 = ATgetArgument(t, 1);
                                                                                                                                m_13 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, u_13, y_13, (ATerm)ATempty, m_13);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    u_13 = ATgetArgument(t, 0);
                                                                                                                                    y_13 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, u_13, (ATerm)ATempty, (ATerm)ATempty, y_13);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        u_13 = ATgetArgument(t, 0);
                                                                                                                                        y_13 = ATgetArgument(t, 1);
                                                                                                                                        m_13 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, u_13, y_13, (ATerm)ATempty, m_13);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            u_13 = ATgetArgument(t, 0);
                                                                                                                                            y_13 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, u_13, (ATerm)ATempty, (ATerm)ATempty, y_13);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm r_36 = ATgetArgument(t, 0);
                                                                                                                                                y_13 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, y_13);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  j_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      k_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
      {
        ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,x_19 = NULL;
        t = j_19;
        t = new_0_0(t);
        q_19 = t;
        t = new_0_0(t);
        r_19 = t;
        t = new_0_0(t);
        s_19 = t;
        t = new_0_0(t);
        x_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_19), s_19), r_19), q_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, q_19), (ATerm) ATmakeAppl(sym_Var_1, s_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, k_19, (ATerm)ATmakeAppl(sym_Var_1, q_19), (ATerm) ATmakeAppl(sym_Var_1, r_19)), (ATerm) ATmakeAppl(sym_BAM_3, i_19, (ATerm)ATmakeAppl(sym_Var_1, s_19), (ATerm) ATmakeAppl(sym_Var_1, x_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_t_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_19)), (ATerm) ATmakeAppl(sym_Var_1, r_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          k_19 = ATgetArgument(t, 0);
          {
            ATerm y_19 = NULL,z_19 = NULL,b_20 = NULL,c_20 = NULL;
            t = j_19;
            t = new_0_0(t);
            b_20 = t;
            t = k_19;
            {
              static ATerm x_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((y_19 != NULL) && (y_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      y_19 = ATgetArgument(t, 0);
                    if(((z_19 != NULL) && (z_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      z_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, b_20);
                return(t);
              }
              t = oncetd_1_0(x_1, t);
            }
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_t_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_19)), not_null(y_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_20)), (ATerm) ATmakeAppl(sym_Build_1, c_20))));
          }
        }
      else
        {
          ATerm e_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              k_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_19;
          t = new_0_0(t);
          l_20 = t;
          t = new_0_0(t);
          m_20 = t;
          t = k_19;
          {
            static ATerm y_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_20 = ATgetArgument(t, 0);
                  if(((k_20 != NULL) && (k_20 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    k_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, l_20);
              return(t);
            }
            t = oncetd_1_0(y_1, t);
          }
          n_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_w_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_20))))), (ATerm)ATmakeAppl(sym_Var_1, l_20), (ATerm) ATmakeAppl(sym_Op_2, term_v_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_20)), not_null(e_20)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  t_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_36 = t;
    int y_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
        t = t_20;
        t = new_0_0(t);
        y_20 = t;
        t = u_20;
        {
          static ATerm z_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((w_20 != NULL) && (w_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_20 = ATgetArgument(t, 0);
                if(((x_20 != NULL) && (x_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, y_20), w_20);
            return(t);
          }
          t = pat_td_1_0(z_1, t);
        }
        z_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_37, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_20))))));
        LocalPopChoice(y_36);
      }
    else
      {
        t = x_36;
        {
          ATerm c_37 = t;
          int d_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
              t = t_20;
              t = new_0_0(t);
              h_21 = t;
              t = u_20;
              {
                static ATerm a_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((g_21 != NULL) && (g_21 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_21 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, h_21);
                  return(t);
                }
                t = pat_td_1_0(a_2, t);
              }
              i_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, h_21)), not_null(g_21))));
              LocalPopChoice(d_37);
            }
          else
            {
              t = c_37;
              {
                ATerm k_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
                t = t_20;
                t = new_0_0(t);
                q_21 = t;
                t = u_20;
                {
                  static ATerm b_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((p_21 != NULL) && (p_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          p_21 = ATgetArgument(t, 0);
                        if(((k_21 != NULL) && (k_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, q_21);
                    return(t);
                  }
                  t = pat_td_1_0(b_2, t);
                }
                r_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, q_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(k_21)), not_null(p_21)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm x_148 (ATerm), ATerm t)
{
  ATerm g_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_148(t);
      LocalPopChoice(k_37);
    }
  else
    {
      t = g_37;
      {
        ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
        r_26 = t;
        if(match_cons(t, sym_Op_2))
          {
            s_26 = ATgetArgument(t, 0);
            t_26 = ATgetArgument(t, 1);
            {
              ATerm i_3 = NULL,n_3 = NULL,s_3 = NULL;
              t = SSLgetAnnotations(r_26);
              i_3 = t;
              t = t_26;
              {
                static ATerm c_2 (ATerm t)
                {
                  t = pat_td_1_0(x_148, t);
                  return(t);
                }
                t = fetch_1_0(c_2, t);
              }
              n_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, s_26, n_3);
              s_3 = t;
              t = SSLsetAnnotations(s_3, i_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                s_26 = ATgetArgument(t, 0);
                t_26 = ATgetArgument(t, 1);
                {
                  ATerm n_37 = t;
                  int p_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_4 = NULL,r_4 = NULL,t_3 = NULL;
                      t = SSLgetAnnotations(r_26);
                      k_4 = t;
                      t = t_26;
                      t = pat_td_1_0(x_148, t);
                      r_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, s_26, r_4);
                      t_3 = t;
                      t = SSLsetAnnotations(t_3, k_4);
                      LocalPopChoice(p_37);
                    }
                  else
                    {
                      t = n_37;
                      {
                        ATerm l_5 = NULL,q_5 = NULL,v_3 = NULL;
                        t = SSLgetAnnotations(r_26);
                        l_5 = t;
                        t = s_26;
                        t = pat_td_1_0(x_148, t);
                        q_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, q_5, t_26);
                        v_3 = t;
                        t = SSLsetAnnotations(v_3, l_5);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    s_26 = ATgetArgument(t, 0);
                    t_26 = ATgetArgument(t, 1);
                    q_26 = ATgetArgument(t, 2);
                    {
                      ATerm h_6 = NULL,v_6 = NULL,z_3 = NULL;
                      t = SSLgetAnnotations(r_26);
                      h_6 = t;
                      t = q_26;
                      {
                        static ATerm d_2 (ATerm t)
                        {
                          t = pat_td_1_0(x_148, t);
                          return(t);
                        }
                        t = fetch_1_0(d_2, t);
                      }
                      v_6 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, s_26, t_26, v_6);
                      z_3 = t;
                      t = SSLsetAnnotations(z_3, h_6);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        s_26 = ATgetArgument(t, 0);
                        t_26 = ATgetArgument(t, 1);
                        q_26 = ATgetArgument(t, 2);
                        {
                          ATerm s_7 = NULL,o_8 = NULL,a_4 = NULL;
                          t = SSLgetAnnotations(r_26);
                          s_7 = t;
                          t = q_26;
                          {
                            static ATerm e_2 (ATerm t)
                            {
                              t = pat_td_1_0(x_148, t);
                              return(t);
                            }
                            t = fetch_1_0(e_2, t);
                          }
                          o_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, s_26, t_26, o_8);
                          a_4 = t;
                          t = SSLsetAnnotations(a_4, s_7);
                        }
                      }
                    else
                      {
                        ATerm s_9 = NULL,w_9 = NULL,b_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            s_26 = ATgetArgument(t, 0);
                            t_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(r_26);
                        s_9 = t;
                        t = t_26;
                        t = pat_td_1_0(x_148, t);
                        w_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, s_26, w_9);
                        b_4 = t;
                        t = SSLsetAnnotations(b_4, s_9);
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
  ATerm k_27 = NULL,l_27 = NULL;
  k_27 = t;
  if(match_cons(t, sym_Build_1))
    {
      l_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_27 = NULL,n_27 = NULL,p_27 = NULL,b_28 = NULL;
        t = k_27;
        t = new_0_0(t);
        p_27 = t;
        t = l_27;
        {
          static ATerm f_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((m_27 != NULL) && (m_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_27 = ATgetArgument(t, 0);
                if(((n_27 != NULL) && (n_27 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, p_27);
            return(t);
          }
          t = pat_td_1_0(f_2, t);
        }
        b_28 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_t_37, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_27)), not_null(m_27))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_27)))), (ATerm) ATmakeAppl(sym_Build_1, b_28)));
        LocalPopChoice(s_37);
      }
    else
      {
        t = q_37;
        {
          ATerm w_37 = t;
          int y_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_28 = NULL,h_28 = NULL,i_28 = NULL;
              t = k_27;
              t = new_0_0(t);
              h_28 = t;
              t = l_27;
              {
                static ATerm g_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((c_28 != NULL) && (c_28 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        c_28 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, h_28);
                  return(t);
                }
                t = pat_td_1_0(g_2, t);
              }
              i_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_28), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_28)))), (ATerm) ATmakeAppl(sym_Build_1, i_28)));
              LocalPopChoice(y_37);
            }
          else
            {
              t = w_37;
              {
                ATerm j_28 = NULL,k_28 = NULL,p_28 = NULL,q_28 = NULL;
                t = k_27;
                t = new_0_0(t);
                p_28 = t;
                t = l_27;
                {
                  static ATerm h_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((j_28 != NULL) && (j_28 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          j_28 = ATgetArgument(t, 0);
                        if(((k_28 != NULL) && (k_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_28);
                    return(t);
                  }
                  t = pat_td_1_0(h_2, t);
                }
                q_28 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_28), not_null(k_28), (ATerm) ATmakeAppl(sym_Var_1, p_28))), (ATerm) ATmakeAppl(sym_Build_1, q_28)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm a_38 = t;
  if((PushChoice() == 0))
    {
      ATerm h_29 = NULL,i_29 = NULL,j_29 = NULL,n_8 = NULL;
      j_29 = t;
      if(match_cons(t, sym_Var_1))
        {
          i_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_29);
      h_29 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, i_29);
      n_8 = t;
      t = SSLsetAnnotations(n_8, h_29);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_38;
    }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_38;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm k_29 = NULL,r_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_29 = ATgetFirst((ATermList) t);
      r_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_29, r_29);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm s_29 = NULL,u_29 = NULL,x_29 = NULL,y_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_38 = ATgetArgument(t, 0);
      if(match_cons(d_38, sym__2))
        {
          s_29 = ATgetArgument(d_38, 0);
          u_29 = ATgetArgument(d_38, 1);
        }
      else
        _fail(t);
      {
        ATerm f_38 = ATgetArgument(t, 1);
        if(match_cons(f_38, sym__2))
          {
            x_29 = ATgetArgument(f_38, 0);
            y_29 = ATgetArgument(f_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_29), s_29), (ATerm) ATinsert(CheckATermList(y_29), u_29));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_38;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_29 = ATgetFirst((ATermList) t);
      a_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_29, a_30);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_38 = ATgetArgument(t, 0);
      if(match_cons(g_38, sym__2))
        {
          f_30 = ATgetArgument(g_38, 0);
          g_30 = ATgetArgument(g_38, 1);
        }
      else
        _fail(t);
      {
        ATerm h_38 = ATgetArgument(t, 1);
        if(match_cons(h_38, sym__2))
          {
            h_30 = ATgetArgument(h_38, 0);
            i_30 = ATgetArgument(h_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_30), f_30), (ATerm) ATinsert(CheckATermList(i_30), g_30));
  return(t);
}
static ATerm e_13 (ATerm q_75, ATerm r_75, ATerm s_75, ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,g_29 = NULL,r_8 = NULL;
  t = s_75;
  t = fetch_1_0(j_2, t);
  t = s_75;
  t = genzip_4_0(n_2, o_2, p_2, LiftPrimArg_0_0, t);
  g_29 = t;
  if(match_cons(t, sym__2))
    {
      x_28 = ATgetArgument(t, 0);
      c_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_29);
  w_28 = t;
  t = x_28;
  t = concat_0_0(t);
  d_29 = t;
  t = c_29;
  t = genzip_4_0(q_2, r_2, s_2, _id, t);
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_29, e_29);
  r_8 = t;
  t = SSLsetAnnotations(r_8, w_28);
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      {
        ATerm k_38 = ATgetArgument(t, 1);
        if(match_cons(k_38, sym__2))
          {
            u_28 = ATgetArgument(k_38, 0);
            v_28 = ATgetArgument(k_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_28), (ATerm) ATmakeAppl(sym_CallT_3, q_75, r_75, v_28)));
  return(t);
}
static ATerm i_31 (ATerm m_30, ATerm t)
{
  ATerm t_30 = NULL;
  t = m_30;
  {
    ATerm m_38 = t;
    if((PushChoice() == 0))
      {
        ATerm u_30 = NULL,v_30 = NULL,a_31 = NULL,l_9 = NULL;
        a_31 = t;
        if(match_cons(t, sym_Var_1))
          {
            v_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_31);
        u_30 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, v_30);
        l_9 = t;
        t = SSLsetAnnotations(l_9, u_30);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_38;
      }
  }
  t = new_0_0(t);
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, t_30), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_30)))), (ATerm) ATmakeAppl(sym_Var_1, t_30)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL;
  b_31 = t;
  if(match_cons(t, sym_Var_1))
    {
      c_31 = ATgetArgument(t, 0);
      {
        ATerm n_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_31(b_31, t);
            LocalPopChoice(o_38);
          }
        else
          {
            t = n_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_t_29, (ATerm) ATmakeAppl(sym_Var_1, c_31)));
          }
      }
    }
  else
    {
      t = i_31(b_31, t);
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm t_38 = t;
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
      t = t_38;
    }
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_38;
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
  ATerm e_11 = NULL,f_11 = NULL,j_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      if(match_cons(u_38, sym__2))
        {
          e_11 = ATgetArgument(u_38, 0);
          f_11 = ATgetArgument(u_38, 1);
        }
      else
        _fail(t);
      {
        ATerm v_38 = ATgetArgument(t, 1);
        if(match_cons(v_38, sym__2))
          {
            j_11 = ATgetArgument(v_38, 0);
            k_11 = ATgetArgument(v_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_11), e_11), (ATerm) ATinsert(CheckATermList(k_11), f_11));
  return(t);
}
static ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_38;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_11 = ATgetFirst((ATermList) t);
      m_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_11, m_11);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if(match_cons(w_38, sym__2))
        {
          o_11 = ATgetArgument(w_38, 0);
          p_11 = ATgetArgument(w_38, 1);
        }
      else
        _fail(t);
      {
        ATerm x_38 = ATgetArgument(t, 1);
        if(match_cons(x_38, sym__2))
          {
            q_11 = ATgetArgument(x_38, 0);
            r_11 = ATgetArgument(x_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_11), o_11), (ATerm) ATinsert(CheckATermList(r_11), p_11));
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm y_38 = t;
  if((PushChoice() == 0))
    {
      ATerm j_13 = NULL,k_13 = NULL,o_13 = NULL,i_11 = NULL;
      o_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_13);
      j_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_13);
      i_11 = t;
      t = SSLsetAnnotations(i_11, j_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_38;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_38;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm p_13 = NULL,r_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_13 = ATgetFirst((ATermList) t);
      r_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_13, r_13);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,w_13 = NULL,x_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_38 = ATgetArgument(t, 0);
      if(match_cons(z_38, sym__2))
        {
          s_13 = ATgetArgument(z_38, 0);
          t_13 = ATgetArgument(z_38, 1);
        }
      else
        _fail(t);
      {
        ATerm a_39 = ATgetArgument(t, 1);
        if(match_cons(a_39, sym__2))
          {
            w_13 = ATgetArgument(a_39, 0);
            x_13 = ATgetArgument(a_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_13), s_13), (ATerm) ATinsert(CheckATermList(x_13), t_13));
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_38;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm h_15 = NULL,k_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_15 = ATgetFirst((ATermList) t);
      k_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_15, k_15);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL,r_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_39 = ATgetArgument(t, 0);
      if(match_cons(c_39, sym__2))
        {
          p_15 = ATgetArgument(c_39, 0);
          q_15 = ATgetArgument(c_39, 1);
        }
      else
        _fail(t);
      {
        ATerm d_39 = ATgetArgument(t, 1);
        if(match_cons(d_39, sym__2))
          {
            r_15 = ATgetArgument(d_39, 0);
            u_15 = ATgetArgument(d_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_15), p_15), (ATerm) ATinsert(CheckATermList(u_15), q_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL;
  i_36 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      j_36 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
      h_36 = ATgetArgument(t, 2);
      {
        ATerm l_10 = NULL,n_10 = NULL,q_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL,h_11 = NULL;
        t = h_36;
        t = fetch_1_0(t_2, t);
        t = h_36;
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
        h_11 = t;
        t = SSLsetAnnotations(h_11, t_10);
        if(match_cons(t, sym__2))
          {
            l_10 = ATgetArgument(t, 0);
            {
              ATerm e_39 = ATgetArgument(t, 1);
              if(match_cons(e_39, sym__2))
                {
                  n_10 = ATgetArgument(e_39, 0);
                  q_10 = ATgetArgument(e_39, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, l_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_10), (ATerm) ATmakeAppl(sym_PrimT_3, j_36, k_36, q_10)));
      }
    }
  else
    {
      ATerm q_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,b_13 = NULL,d_13 = NULL,h_13 = NULL,n_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          j_36 = ATgetArgument(t, 0);
          k_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_36;
      t = fetch_1_0(d_3, t);
      t = k_36;
      t = genzip_4_0(e_3, f_3, g_3, LiftPrimArg_0_0, t);
      h_13 = t;
      if(match_cons(t, sym__2))
        {
          y_12 = ATgetArgument(t, 0);
          z_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_13);
      x_12 = t;
      t = y_12;
      t = concat_0_0(t);
      b_13 = t;
      t = z_12;
      t = genzip_4_0(h_3, j_3, k_3, _id, t);
      d_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_13, d_13);
      n_11 = t;
      t = SSLsetAnnotations(n_11, x_12);
      if(match_cons(t, sym__2))
        {
          q_12 = ATgetArgument(t, 0);
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
      t = (ATerm) ATmakeAppl(sym_Scope_2, q_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_12), (ATerm) ATmakeAppl(sym_PrimT_3, j_36, (ATerm)ATempty, w_12)));
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,l_37 = NULL,m_37 = NULL;
  m_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      i_37 = ATgetArgument(t, 0);
      j_37 = ATgetArgument(t, 1);
      l_37 = ATgetArgument(t, 2);
      {
        ATerm p_16 = NULL,b_22 = NULL;
        t = SSLgetAnnotations(m_37);
        p_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, i_37, j_37, l_37);
        b_22 = t;
        t = SSLsetAnnotations(b_22, p_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = m_37;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm h_39 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(l_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_39;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm q_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
  s_40 = t;
  if(match_cons(t, sym_Con_3))
    {
      t_40 = ATgetArgument(t, 0);
      u_40 = ATgetArgument(t, 1);
      q_40 = ATgetArgument(t, 2);
      {
        ATerm u_17 = NULL,d_22 = NULL;
        t = SSLgetAnnotations(s_40);
        u_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, t_40, u_40, q_40);
        d_22 = t;
        t = SSLsetAnnotations(d_22, u_17);
      }
    }
  else
    {
      ATerm z_18 = NULL,e_22 = NULL;
      if(match_cons(t, sym_App_2))
        {
          t_40 = ATgetArgument(t, 0);
          u_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_40);
      z_18 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, t_40, u_40);
      e_22 = t;
      t = SSLsetAnnotations(e_22, z_18);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm i_39 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(p_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_39;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,m_41 = NULL,o_41 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      g_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_41;
  if(match_cons(t, sym_StratRule_3))
    {
      h_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
      o_41 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_41), (ATerm) ATmakeAppl(sym_Where_1, o_41)), h_41));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          h_41 = ATgetArgument(t, 0);
          m_41 = ATgetArgument(t, 1);
          o_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_41;
      t = pureterm_0_0(t);
      t = m_41;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, m_41)), (ATerm) ATmakeAppl(sym_Where_1, o_41)), (ATerm) ATmakeAppl(sym_Match_1, h_41)));
    }
  return(t);
}
static ATerm f_13 (ATerm d_71, ATerm e_71, ATerm f_71, ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,a_42 = NULL,c_42 = NULL,d_42 = NULL,g_42 = NULL,h_42 = NULL;
  t = new_0_0(t);
  d_42 = t;
  t = d_71;
  {
    static ATerm q_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm j_39 = ATgetArgument(t, 0);
          if(match_cons(j_39, sym_Var_1))
            {
              if(((c_42 != NULL) && (c_42 != ATgetArgument(j_39, 0))))
                _fail(ATgetArgument(j_39, 0));
              else
                c_42 = ATgetArgument(j_39, 0);
            }
          else
            _fail(t);
          if(((x_41 != NULL) && (x_41 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_41 = ATgetArgument(t, 1);
          {
            ATerm k_39 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_42);
      return(t);
    }
    t = oncetd_1_0(q_3, t);
  }
  g_42 = t;
  t = e_71;
  {
    static ATerm r_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm l_39 = ATgetArgument(t, 0);
          if(match_cons(l_39, sym_Var_1))
            {
              if(((c_42 != NULL) && (c_42 != ATgetArgument(l_39, 0))))
                _fail(ATgetArgument(l_39, 0));
              else
                c_42 = ATgetArgument(l_39, 0);
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
                if(((w_41 != NULL) && (w_41 != ATgetArgument(m_39, 0))))
                  _fail(ATgetArgument(m_39, 0));
                else
                  w_41 = ATgetArgument(m_39, 0);
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
      t = (ATerm) ATmakeAppl(sym_Var_1, d_42);
      return(t);
    }
    t = oncetd_1_0(r_3, t);
  }
  h_42 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_42), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, g_42, h_42, (ATerm) ATmakeAppl(sym_Seq_2, f_71, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(w_41), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_41), not_null(a_42), term_t_29))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_42)), (ATerm) ATmakeAppl(sym_Var_1, d_42))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_39 = t;
      int v_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,c_43 = NULL;
          z_42 = t;
          if(match_cons(t, sym_SRule_1))
            {
              a_43 = ATgetArgument(t, 0);
              t = a_43;
              if(match_cons(t, sym_Rule_3))
                {
                  w_42 = ATgetArgument(t, 0);
                  x_42 = ATgetArgument(t, 1);
                  y_42 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = z_42;
              t = f_13(w_42, x_42, y_42, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm f_20 = NULL,i_20 = NULL,m_22 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  a_43 = ATgetArgument(t, 0);
                  c_43 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_42);
              f_20 = t;
              t = c_43;
              t = desugarRule_0_0(t);
              i_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, a_43, i_20);
              m_22 = t;
              t = SSLsetAnnotations(m_22, f_20);
            }
          LocalPopChoice(v_39);
        }
      else
        {
          t = u_39;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(q_39);
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
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(y_39);
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
  ATerm z_39 = t;
  int a_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(a_40);
    }
  else
    {
      t = z_39;
      {
        ATerm b_40 = t;
        int c_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,l_44 = NULL;
            g_44 = t;
            if(match_cons(t, sym_CallT_3))
              {
                h_44 = ATgetArgument(t, 0);
                i_44 = ATgetArgument(t, 1);
                l_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = g_44;
            t = e_13(h_44, i_44, l_44, t);
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
                  t = HL_0_0(t);
                  LocalPopChoice(f_40);
                }
              else
                {
                  t = d_40;
                  {
                    ATerm g_40 = t;
                    int h_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(h_40);
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
                              int n_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_44 = NULL,r_44 = NULL,v_44 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      q_44 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = q_44;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      r_44 = ATgetArgument(t, 0);
                                      t = r_44;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          r_44 = ATgetArgument(t, 0);
                                          v_44 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, r_44, v_44);
                                    }
                                  LocalPopChoice(n_40);
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
            ATerm v_40 = ATgetArgument(t, 1);
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
  ATerm b_48 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_48 = ATgetArgument(t, 0);
      t = b_48;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_48 = ATgetArgument(t, 0);
          {
            ATerm w_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_48;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, b_48);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm h_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_48);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm x_40 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_41);
    }
  else
    {
      t = x_40;
      {
        ATerm f_41 = t;
        int l_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_41);
          }
        else
          {
            t = f_41;
            {
              ATerm n_41 = t;
              int p_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_48 = NULL,w_48 = NULL,y_48 = NULL,z_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_48 = ATgetArgument(t, 0);
                      w_48 = ATgetArgument(t, 1);
                      y_48 = ATgetArgument(t, 2);
                      z_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_48;
                  t = map_1_0(e_4, t);
                  LocalPopChoice(p_41);
                }
              else
                {
                  t = n_41;
                  {
                    ATerm q_41 = t;
                    int r_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(r_41);
                      }
                    else
                      {
                        t = q_41;
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
  ATerm s_41 = t;
  int t_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_49 = ATgetArgument(t, 0);
          {
            ATerm u_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_41);
      t = k_49;
    }
  else
    {
      t = s_41;
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
  ATerm q_49 = NULL;
  ATerm v_41 = t;
  int y_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_49 = ATgetArgument(t, 0);
          {
            ATerm z_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_41);
      t = q_49;
    }
  else
    {
      t = v_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_49;
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
  ATerm v_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_49);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm b_42 = t;
  int f_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_42);
    }
  else
    {
      t = b_42;
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
              ATerm k_42 = t;
              int m_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_49 = NULL,z_49 = NULL,a_50 = NULL,b_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_49 = ATgetArgument(t, 0);
                      z_49 = ATgetArgument(t, 1);
                      a_50 = ATgetArgument(t, 2);
                      b_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_50;
                  t = map_1_0(l_4, t);
                  LocalPopChoice(m_42);
                }
              else
                {
                  t = k_42;
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
  ATerm m_50 = NULL;
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_50 = ATgetArgument(t, 0);
          {
            ATerm r_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_42);
      t = m_50;
    }
  else
    {
      t = p_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_50;
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
  ATerm s_50 = NULL;
  ATerm s_42 = t;
  int t_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_50 = ATgetArgument(t, 0);
          {
            ATerm u_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_42);
      t = s_50;
    }
  else
    {
      t = s_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_50;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm c_51 = NULL;
  c_51 = t;
  {
    ATerm v_42 = t;
    int b_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_51 = NULL,s_20 = NULL,b_21 = NULL,p_22 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            p_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_51);
        s_20 = t;
        t = p_51;
        t = ContextVar_0_0(t);
        b_21 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, b_21);
        p_22 = t;
        t = SSLsetAnnotations(p_22, s_20);
        LocalPopChoice(b_43);
      }
    else
      {
        t = v_42;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, c_51);
  return(t);
}
static ATerm g_13 (ATerm n_150 (ATerm), ATerm g_84, ATerm d_84, ATerm e_84, ATerm n_84, ATerm r_84, ATerm s_84, ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,l_46 = NULL,m_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,f_47 = NULL,k_47 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_84, term_t_32);
  {
    ATerm d_43 = t;
    if((PushChoice() == 0))
      {
        ATerm l_47 = NULL;
        if(match_cons(t, sym__2))
          {
            l_47 = ATgetArgument(t, 0);
            if((l_47 != ATgetArgument(t, 1)))
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
        t = d_43;
      }
  }
  t = term_e_43;
  k_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_43, g_84);
  t = a_15(k_47, g_84, t);
  e_46 = t;
  t = term_f_43;
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_43, g_84);
  t = a_15(f_47, g_84, t);
  f_46 = t;
  t = new_0_0(t);
  l_46 = t;
  t = d_84;
  t = map_1_0(x_3, t);
  m_46 = t;
  t = e_84;
  t = map_1_0(y_3, t);
  r_46 = t;
  t = new_0_0(t);
  s_46 = t;
  t = n_84;
  t = dummify_0_0(t);
  u_46 = t;
  {
    ATerm g_43 = t;
    int h_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_46;
        if((n_84 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, s_46);
        LocalPopChoice(h_43);
      }
    else
      {
        t = g_43;
        t = u_46;
      }
  }
  t_46 = t;
  t = u_46;
  t = free_vars_3_0(c_4, d_4, tboundin_3_0, t);
  t = map_1_0(h_4, t);
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_84, s_84);
  t = free_vars_3_0(i_4, j_4, tboundin_3_0, t);
  t = filter_1_0(v_4, t);
  v_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_46, w_46);
  t = diff_0_0(t);
  x_46 = t;
  t = new_0_0(t);
  y_46 = t;
  t = g_84;
  t = n_150(t);
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, z_46, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_33, (ATerm) ATinsert(CheckATermList(x_46), (ATerm) ATmakeAppl(sym_Str_1, y_46)))), u_46)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, f_46, d_84, e_84, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_33, (ATerm) ATinsert(CheckATermList(x_46), (ATerm) ATmakeAppl(sym_Str_1, y_46)))), n_84)), r_84, (ATerm) ATmakeAppl(sym_Seq_2, term_p_43, s_84)))), (ATerm) ATmakeAppl(sym_RDefT_4, e_46, d_84, e_84, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_46), n_84), (ATerm)ATmakeAppl(sym_Var_1, l_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_84)))), t_46), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_46), m_46, r_46), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_m_43), (ATerm) ATmakeAppl(sym_Var_1, s_46)))))), (ATerm) ATmakeAppl(sym_Var_1, l_46)))))), (ATerm) ATmakeAppl(sym_RDefT_4, g_84, d_84, e_84, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_46), n_84), r_84, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_84)))), t_46), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_c_33, (ATerm) ATinsert(CheckATermList(x_46), (ATerm) ATmakeAppl(sym_Str_1, y_46)))), term_i_43))), s_84)))));
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
      t = g_13(y_4, v_21, w_21, x_21, z_21, a_22, f_22, t);
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
  ATerm z_22 = NULL;
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_22))));
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
  t = term_c_38;
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
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,r_24 = NULL,s_24 = NULL,t_24 = NULL,x_24 = NULL;
      w_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          x_23 = ATgetArgument(t, 0);
          y_23 = ATgetArgument(t, 1);
          z_23 = ATgetArgument(t, 2);
          r_24 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = r_24;
      if(match_cons(t, sym_Rule_3))
        {
          s_24 = ATgetArgument(t, 0);
          t_24 = ATgetArgument(t, 1);
          x_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_23;
      t = g_13(h_5, x_23, y_23, z_23, s_24, t_24, x_24, t);
      LocalPopChoice(d_44);
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
  ATerm k_25 = NULL;
  k_25 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_25))));
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, l_25))));
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_38;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_25 = ATgetFirst((ATermList) t);
      n_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_25, n_25);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm o_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_44 = ATgetArgument(t, 0);
      if(match_cons(n_44, sym__2))
        {
          o_25 = ATgetArgument(n_44, 0);
          q_25 = ATgetArgument(n_44, 1);
        }
      else
        _fail(t);
      {
        ATerm o_44 = ATgetArgument(t, 1);
        if(match_cons(o_44, sym__2))
          {
            r_25 = ATgetArgument(o_44, 0);
            s_25 = ATgetArgument(o_44, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_25), o_25), (ATerm) ATinsert(CheckATermList(s_25), q_25));
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(u_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm g_57 = NULL;
  g_57 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_57))));
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_38;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm j_57 = NULL,s_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_57 = ATgetFirst((ATermList) t);
      s_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_57, s_57);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm d_58 = NULL,q_58 = NULL,x_58 = NULL,e_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_44 = ATgetArgument(t, 0);
      if(match_cons(u_44, sym__2))
        {
          d_58 = ATgetArgument(u_44, 0);
          q_58 = ATgetArgument(u_44, 1);
        }
      else
        _fail(t);
      {
        ATerm w_44 = ATgetArgument(t, 1);
        if(match_cons(w_44, sym__2))
          {
            x_58 = ATgetArgument(w_44, 0);
            e_59 = ATgetArgument(w_44, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_58), d_58), (ATerm) ATinsert(CheckATermList(e_59), q_58));
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(a_6, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm v_59 = NULL;
  v_59 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, v_59))));
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_38;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm a_60 = NULL,f_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_60 = ATgetFirst((ATermList) t);
      f_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_60, f_60);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_44 = ATgetArgument(t, 0);
      if(match_cons(z_44, sym__2))
        {
          k_60 = ATgetArgument(z_44, 0);
          l_60 = ATgetArgument(z_44, 1);
        }
      else
        _fail(t);
      {
        ATerm b_45 = ATgetArgument(t, 1);
        if(match_cons(b_45, sym__2))
          {
            m_60 = ATgetArgument(b_45, 0);
            n_60 = ATgetArgument(b_45, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_60), k_60), (ATerm) ATinsert(CheckATermList(n_60), l_60));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm v_56 = NULL,w_56 = NULL;
  v_56 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      w_56 = ATgetArgument(t, 0);
      {
        ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,s_21 = NULL,t_21 = NULL,r_22 = NULL;
        t = w_56;
        t = map_1_0(x_4, t);
        t = genzip_4_0(a_5, b_5, c_5, _id, t);
        t_21 = t;
        if(match_cons(t, sym__2))
          {
            n_21 = ATgetArgument(t, 0);
            o_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_21);
        m_21 = t;
        t = o_21;
        t = concat_0_0(t);
        s_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_21, s_21);
        r_22 = t;
        t = SSLsetAnnotations(r_22, m_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          w_56 = ATgetArgument(t, 0);
          {
            ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_22 = NULL;
            t = w_56;
            t = map_1_0(e_5, t);
            t = genzip_4_0(j_5, k_5, m_5, _id, t);
            r_23 = t;
            if(match_cons(t, sym__2))
              {
                o_23 = ATgetArgument(t, 0);
                p_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_23);
            n_23 = t;
            t = p_23;
            t = concat_0_0(t);
            q_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_23, q_23);
            s_22 = t;
            t = SSLsetAnnotations(s_22, n_23);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              w_56 = ATgetArgument(t, 0);
              t = w_56;
              t = map_1_0(o_5, t);
              t = genzip_4_0(w_5, x_5, y_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  w_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = w_56;
              t = map_1_0(z_5, t);
              t = genzip_4_0(b_6, c_6, d_6, _id, t);
            }
        }
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_c_45;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm p_150 (ATerm), ATerm t)
{
  static ATerm y_60 (ATerm t)
  {
    static ATerm f_6 (ATerm t)
    {
      ATerm d_45 = t;
      int e_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_150(t);
          LocalPopChoice(e_45);
        }
      else
        {
          t = d_45;
          {
            ATerm t_60 = NULL,u_60 = NULL,x_60 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                t_60 = ATgetArgument(t, 0);
                u_60 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, t_60, u_60);
            {
              static ATerm k_6 (ATerm t)
              {
                t = t_60;
                t = DeclareContextVars_0_0(t);
                t = u_60;
                t = y_60(t);
                if(((x_60 != NULL) && (x_60 != t)))
                  _fail(t);
                else
                  x_60 = t;
                return(t);
              }
              t = scope_2_0(g_6, k_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, t_60, not_null(x_60));
          }
        }
      return(t);
    }
    t = oncetd_1_0(f_6, t);
    return(t);
  }
  t = y_60(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_c_45;
  return(t);
}
static ATerm i_13 (ATerm g_85, ATerm f_85, ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL;
  static ATerm o_6 (ATerm t)
  {
    t = g_85;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = g_85;
    {
      static ATerm p_6 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((a_61 != NULL) && (a_61 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              a_61 = ATgetArgument(t, 0);
            if(((z_60 != NULL) && (z_60 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              z_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, a_61);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(p_6, t);
    }
    if(((b_61 != NULL) && (b_61 != t)))
      _fail(t);
    else
      b_61 = t;
    return(t);
  }
  t = scope_2_0(n_6, o_6, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_60)), not_null(b_61)), f_85);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm f_61 = NULL,i_61 = NULL,k_61 = NULL,l_61 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      k_61 = ATgetArgument(t, 0);
      l_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_61 = ATgetFirst((ATermList) t);
      i_61 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_k_45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, i_61, l_61)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_61))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_61;
    }
  return(t);
}
static ATerm s_62 (ATerm t_61, ATerm t)
{
  t = SSL_is_string(t_61);
  return(t);
}
static ATerm t_62 (ATerm v_61, ATerm t)
{
  ATerm w_61 = NULL,b_62 = NULL,e_62 = NULL;
  t = term_l_45;
  b_62 = t;
  t = (ATerm) ATinsert(ATempty, term_m_45);
  e_62 = t;
  t = SSL_printnl(b_62, e_62);
  t = v_61;
  t = debug_1_0(q_6, t);
  t = term_n_45;
  w_61 = t;
  t = SSL_exit(w_61);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_o_45;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL;
  g_62 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      f_62 = ATgetArgument(t, 0);
      {
        ATerm p_45 = t;
        int q_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_62(g_62, t);
            LocalPopChoice(q_45);
          }
        else
          {
            t = p_45;
            t = f_62;
          }
      }
    }
  else
    {
      ATerm r_45 = t;
      int s_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_62(g_62, t);
          LocalPopChoice(s_45);
        }
      else
        {
          t = r_45;
          t = t_62(g_62, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL,u_63 = NULL,w_63 = NULL,z_63 = NULL,a_64 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      p_63 = ATgetArgument(t, 0);
      a_64 = ATgetArgument(t, 1);
      t = p_63;
      if(match_cons(t, sym_DynRuleId_1))
        {
          q_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_63;
      if(match_cons(t, sym_RDecT_3))
        {
          u_63 = ATgetArgument(t, 0);
          w_63 = ATgetArgument(t, 1);
          z_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, u_63, w_63, z_63, (ATerm) ATmakeAppl(sym_Rule_3, a_64, term_t_32, term_t_29));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          p_63 = ATgetArgument(t, 0);
          a_64 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_63;
      if(match_cons(t, sym_DynRuleId_1))
        {
          q_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_63;
      if(match_cons(t, sym_RDecT_3))
        {
          u_63 = ATgetArgument(t, 0);
          w_63 = ATgetArgument(t, 1);
          z_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, u_63, w_63, z_63, a_64);
    }
  return(t);
}
static ATerm a_66 (ATerm f_65, ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL;
  t = f_65;
  if(match_cons(t, sym_GenDynRules_1))
    {
      n_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_65;
  t = filter_1_0(r_6, t);
  o_65 = t;
  t = f_65;
  if(match_cons(t, sym_GenDynRules_1))
    {
      l_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_65;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  m_65 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, o_65), (ATerm) ATmakeAppl(sym_DynamicRules_1, m_65));
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm t_45 = ATgetArgument(t, 0);
      if(match_cons(t_45, sym_DynRuleId_1))
        {
          ATerm v_45 = ATgetArgument(t_45, 0);
          if(match_cons(v_45, sym_RDecT_3))
            {
              p_65 = ATgetArgument(v_45, 0);
              q_65 = ATgetArgument(v_45, 1);
              r_65 = ATgetArgument(v_45, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      s_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, p_65, q_65, r_65, s_65);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm a_46 = ATgetArgument(t, 0);
      ATerm b_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL;
  u_65 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      t_65 = ATgetArgument(t, 0);
      {
        ATerm c_46 = t;
        int d_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_25 = NULL;
            t = t_65;
            {
              ATerm g_46 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(s_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = g_46;
                }
            }
            t = t_65;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            y_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, y_25);
            LocalPopChoice(d_46);
          }
        else
          {
            t = c_46;
            t = a_66(u_65, t);
          }
      }
    }
  else
    {
      t = a_66(u_65, t);
    }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm h_46 = t;
  int j_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_66 = NULL;
      c_66 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm k_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_66;
      LocalPopChoice(j_46);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = h_46;
      {
        ATerm n_46 = t;
        int o_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_66 = NULL;
            d_66 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm p_46 = ATgetArgument(t, 0);
                ATerm a_47 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_66;
            LocalPopChoice(o_46);
            {
              ATerm e_66 = NULL,h_66 = NULL,i_66 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  e_66 = ATgetArgument(t, 0);
                  h_66 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_66;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              i_66 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, i_66, h_66);
            }
          }
        else
          {
            t = n_46;
          }
      }
    }
  return(t);
}
ATerm downgrade_new_dr_syntax_0_0 (ATerm t)
{
  t = topdown_1_0(t_6, t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  t = Cons_2_0(x_6, y_6, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL,z_67 = NULL,a_68 = NULL,y_22 = NULL;
  a_68 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      u_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_68);
  t_67 = t;
  t = u_67;
  t = topdown_1_0(z_6, t);
  t = listtd_1_0(a_7, t);
  z_67 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, z_67);
  y_22 = t;
  t = SSLsetAnnotations(y_22, t_67);
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
  ATerm e_47 = t;
  int g_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(g_47);
    }
  else
    {
      t = e_47;
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
  ATerm d_68 = NULL,e_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_68 = ATgetFirst((ATermList) t);
      e_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_13(d_68, e_68, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,t_23 = NULL,s_23 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  c_67 = t;
  if(match_cons(t, sym_Specification_1))
    {
      w_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_67);
  v_66 = t;
  t = w_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_66 = ATgetFirst((ATermList) t);
      z_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_66);
  x_66 = t;
  t = z_66;
  t = Cons_2_0(_id, u_6, t);
  a_67 = t;
  t = (ATerm) ATinsert(CheckATermList(a_67), y_66);
  s_23 = t;
  t = SSLsetAnnotations(s_23, x_66);
  b_67 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, b_67);
  t_23 = t;
  t = SSLsetAnnotations(t_23, v_66);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm h_47 = t;
  int i_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,b_24 = NULL;
      q_68 = t;
      if(match_cons(t, sym__2))
        {
          o_68 = ATgetArgument(t, 0);
          p_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_68);
      n_68 = t;
      t = o_68;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = o_68;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm j_47 = ATgetFirst((ATermList) t);
              ATerm m_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = o_68;
        }
      t = (ATerm) ATmakeAppl(sym__2, o_68, p_68);
      b_24 = t;
      t = SSLsetAnnotations(b_24, n_68);
      LocalPopChoice(i_47);
      t = conc_0_0(t);
    }
  else
    {
      t = h_47;
      {
        ATerm w_68 = NULL,x_68 = NULL;
        if(match_cons(t, sym__2))
          {
            w_68 = ATgetArgument(t, 0);
            x_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(x_68), w_68);
      }
    }
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm n_47 = t;
  int o_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_68 = NULL;
      z_68 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = z_68;
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
          t = z_68;
        }
      LocalPopChoice(o_47);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = n_47;
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
static ATerm i_7 (ATerm t)
{
  t = term_t_47;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_t_47;
  return(t);
}
ATerm next_counter_0_0 (ATerm t)
{
  ATerm i_69 = NULL,m_69 = NULL,n_69 = NULL,q_69 = NULL,r_69 = NULL;
  i_69 = t;
  {
    ATerm u_47 = t;
    int v_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_69 = NULL,v_26 = NULL;
        t = term_t_47;
        v_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_47, i_69);
        t = p_14(v_26, i_69, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm w_47 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_47) != ATmakeSymbol("i_0", 0, ATtrue)))
              _fail(t);
            s_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = s_69;
        LocalPopChoice(v_47);
      }
    else
      {
        t = u_47;
        {
          ATerm u_69 = NULL;
          t = term_z_47;
          u_69 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_69, term_z_47);
          t = q_14(i_7, i_69, u_69, t);
          t = (ATerm) ATmakeAppl(sym__2, i_69, term_y_47);
        }
      }
  }
  q_69 = t;
  t = term_n_45;
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_69, term_n_45);
  t = d_15(q_69, r_69, t);
  m_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_x_47, m_69);
  n_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_69, (ATerm) ATmakeAppl(sym_Defined_2, term_x_47, m_69));
  t = q_14(j_7, i_69, n_69, t);
  t = m_69;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_a_48;
  return(t);
}
ATerm NewNumberedVar_0_0 (ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL;
  f_70 = t;
  t = term_c_48;
  t = next_counter_0_0(t);
  e_70 = t;
  t = SSL_int_to_string(e_70);
  i_70 = t;
  t = term_d_48;
  k_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_48, i_70);
  t = a_15(k_70, i_70, t);
  h_70 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_48, h_70);
  j_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_70, (ATerm) ATmakeAppl(sym_Defined_2, term_e_48, h_70));
  t = q_14(k_7, f_70, j_70, t);
  t = h_70;
  return(t);
}
ATerm RenameVarTerm_2_0 (ATerm t_150 (ATerm), ATerm u_150 (ATerm), ATerm t)
{
  ATerm n_87 = NULL,p_87 = NULL,q_87 = NULL,z_87 = NULL,b_88 = NULL;
  q_87 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_87 = ATgetArgument(t, 0);
      {
        ATerm f_48 = t;
        int g_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_26 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,j_27 = NULL,q_27 = NULL,r_27 = NULL,e_24 = NULL,d_24 = NULL;
            t = SSLgetAnnotations(q_87);
            z_26 = t;
            t = z_87;
            if(match_cons(t, sym_ListVar_1))
              {
                e_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(z_87);
            d_27 = t;
            t = e_27;
            t = t_150(t);
            q_27 = t;
            t = term_i_48;
            r_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_27, term_i_48);
            t = a_15(q_27, r_27, t);
            f_27 = t;
            t = (ATerm) ATmakeAppl(sym_ListVar_1, f_27);
            d_24 = t;
            t = SSLsetAnnotations(d_24, d_27);
            j_27 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, j_27);
            e_24 = t;
            t = SSLsetAnnotations(e_24, z_26);
            LocalPopChoice(g_48);
          }
        else
          {
            t = f_48;
            {
              ATerm x_27 = NULL,z_27 = NULL,f_24 = NULL;
              t = SSLgetAnnotations(q_87);
              x_27 = t;
              t = z_87;
              t = t_150(t);
              z_27 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, z_27);
              f_24 = t;
              t = SSLsetAnnotations(f_24, x_27);
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_SVar_1))
        {
          z_87 = ATgetArgument(t, 0);
          {
            ATerm m_28 = NULL,r_28 = NULL,g_24 = NULL;
            t = SSLgetAnnotations(q_87);
            m_28 = t;
            t = z_87;
            t = t_150(t);
            r_28 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, r_28);
            g_24 = t;
            t = SSLsetAnnotations(g_24, m_28);
          }
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              z_87 = ATgetArgument(t, 0);
              b_88 = ATgetArgument(t, 1);
              {
                ATerm l_29 = NULL,o_29 = NULL,h_24 = NULL;
                t = SSLgetAnnotations(q_87);
                l_29 = t;
                t = z_87;
                t = t_150(t);
                o_29 = t;
                t = (ATerm) ATmakeAppl(sym_VarDec_2, o_29, b_88);
                h_24 = t;
                t = SSLsetAnnotations(h_24, l_29);
              }
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  z_87 = ATgetArgument(t, 0);
                  {
                    ATerm c_30 = NULL,e_30 = NULL,i_24 = NULL;
                    t = SSLgetAnnotations(q_87);
                    c_30 = t;
                    t = z_87;
                    t = t_150(t);
                    e_30 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_30);
                    i_24 = t;
                    t = SSLsetAnnotations(i_24, c_30);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      z_87 = ATgetArgument(t, 0);
                      b_88 = ATgetArgument(t, 1);
                      {
                        ATerm r_30 = NULL,y_30 = NULL,z_30 = NULL,j_24 = NULL;
                        t = SSLgetAnnotations(q_87);
                        r_30 = t;
                        t = z_87;
                        t = t_150(t);
                        y_30 = t;
                        t = b_88;
                        t = u_150(t);
                        z_30 = t;
                        t = (ATerm) ATmakeAppl(sym_Rec_2, y_30, z_30);
                        j_24 = t;
                        t = SSLsetAnnotations(j_24, r_30);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefNoArgs_2))
                        {
                          z_87 = ATgetArgument(t, 0);
                          b_88 = ATgetArgument(t, 1);
                          {
                            ATerm s_31 = NULL,y_31 = NULL,z_31 = NULL,k_24 = NULL;
                            t = SSLgetAnnotations(q_87);
                            s_31 = t;
                            t = z_87;
                            t = t_150(t);
                            y_31 = t;
                            t = b_88;
                            t = u_150(t);
                            z_31 = t;
                            t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, y_31, z_31);
                            k_24 = t;
                            t = SSLsetAnnotations(k_24, s_31);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              z_87 = ATgetArgument(t, 0);
                              b_88 = ATgetArgument(t, 1);
                              n_87 = ATgetArgument(t, 2);
                              {
                                ATerm y_32 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,l_24 = NULL;
                                t = SSLgetAnnotations(q_87);
                                y_32 = t;
                                t = z_87;
                                t = t_150(t);
                                g_33 = t;
                                t = b_88;
                                t = u_150(t);
                                h_33 = t;
                                t = n_87;
                                t = u_150(t);
                                i_33 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, g_33, h_33, i_33);
                                l_24 = t;
                                t = SSLsetAnnotations(l_24, y_32);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  z_87 = ATgetArgument(t, 0);
                                  b_88 = ATgetArgument(t, 1);
                                  n_87 = ATgetArgument(t, 2);
                                  p_87 = ATgetArgument(t, 3);
                                  {
                                    ATerm l_34 = NULL,s_34 = NULL,u_34 = NULL,v_34 = NULL,b_35 = NULL,m_24 = NULL;
                                    t = SSLgetAnnotations(q_87);
                                    l_34 = t;
                                    t = z_87;
                                    t = t_150(t);
                                    s_34 = t;
                                    t = b_88;
                                    t = u_150(t);
                                    u_34 = t;
                                    t = n_87;
                                    t = u_150(t);
                                    v_34 = t;
                                    t = p_87;
                                    t = u_150(t);
                                    b_35 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, s_34, u_34, v_34, b_35);
                                    m_24 = t;
                                    t = SSLsetAnnotations(m_24, l_34);
                                  }
                                }
                              else
                                {
                                  ATerm o_35 = NULL,x_35 = NULL,z_35 = NULL,n_24 = NULL;
                                  if(match_cons(t, sym_Scope_2))
                                    {
                                      z_87 = ATgetArgument(t, 0);
                                      b_88 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(q_87);
                                  o_35 = t;
                                  t = z_87;
                                  t = map_1_0(t_150, t);
                                  x_35 = t;
                                  t = b_88;
                                  t = u_150(t);
                                  z_35 = t;
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, x_35, z_35);
                                  n_24 = t;
                                  t = SSLsetAnnotations(n_24, o_35);
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
static ATerm l_7 (ATerm t)
{
  t = term_a_48;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_t_47;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm j_48 = t;
  int k_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_92 = NULL,u_36 = NULL,e_37 = NULL;
      g_92 = t;
      t = term_a_48;
      e_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_a_48, g_92);
      t = p_14(e_37, g_92, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm n_48 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) n_48) != ATmakeSymbol("r_0", 0, ATtrue)))
            _fail(t);
          u_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_36;
      LocalPopChoice(k_48);
    }
  else
    {
      t = j_48;
      t = NewNumberedVar_0_0(t);
    }
  return(t);
}
ATerm dr_rename_vars_0_0 (ATerm t)
{
  static ATerm n_7 (ATerm t)
  {
    ATerm e_90 = NULL,f_90 = NULL,f_91 = NULL;
    static ATerm i_92 (ATerm t)
    {
      ATerm o_48 = t;
      int p_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RenameVarTerm_2_0(q_7, i_92, t);
          LocalPopChoice(p_48);
        }
      else
        {
          t = o_48;
          t = SRTS_all(i_92, t);
        }
      return(t);
    }
    e_90 = t;
    t = term_c_48;
    f_90 = t;
    t = term_z_47;
    f_91 = t;
    t = term_t_48;
    t = q_14(p_7, f_90, f_91, t);
    t = e_90;
    t = i_92(t);
    return(t);
  }
  t = scope_2_0(l_7, n_7, t);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm y_94 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_94);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm c_49 = t;
  int d_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(g_49);
          }
        else
          {
            t = f_49;
            {
              ATerm h_49 = t;
              int i_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_95 = ATgetArgument(t, 0);
                      b_95 = ATgetArgument(t, 1);
                      c_95 = ATgetArgument(t, 2);
                      d_95 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_95;
                  t = map_1_0(w_7, t);
                  LocalPopChoice(i_49);
                }
              else
                {
                  t = h_49;
                  {
                    ATerm l_49 = t;
                    int m_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_49);
                      }
                    else
                      {
                        t = l_49;
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
static ATerm w_7 (ATerm t)
{
  ATerm k_95 = NULL;
  ATerm n_49 = t;
  int o_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_95 = ATgetArgument(t, 0);
          {
            ATerm p_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_49);
      t = k_95;
    }
  else
    {
      t = n_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_95;
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
  ATerm p_95 = NULL;
  ATerm r_49 = t;
  int s_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_95 = ATgetArgument(t, 0);
          {
            ATerm t_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_49);
      t = p_95;
    }
  else
    {
      t = r_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_95;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm s_95 = NULL;
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_95);
  return(t);
}
static ATerm a_8 (ATerm t)
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
static ATerm b_8 (ATerm t)
{
  ATerm w_49 = t;
  int y_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_49);
    }
  else
    {
      t = w_49;
      {
        ATerm c_50 = t;
        int d_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_50);
          }
        else
          {
            t = c_50;
            {
              ATerm e_50 = t;
              int f_50 = stack_ptr;
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
                  t = map_1_0(c_8, t);
                  LocalPopChoice(f_50);
                }
              else
                {
                  t = e_50;
                  {
                    ATerm g_50 = t;
                    int h_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_50);
                      }
                    else
                      {
                        t = g_50;
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
static ATerm c_8 (ATerm t)
{
  ATerm f_96 = NULL;
  ATerm i_50 = t;
  int j_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_96 = ATgetArgument(t, 0);
          {
            ATerm k_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_50);
      t = f_96;
    }
  else
    {
      t = i_50;
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
static ATerm e_8 (ATerm t)
{
  t = map_1_0(f_8, t);
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_96 = NULL;
  ATerm l_50 = t;
  int n_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_96 = ATgetArgument(t, 0);
          {
            ATerm o_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_50);
      t = k_96;
    }
  else
    {
      t = l_50;
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
static ATerm g_8 (ATerm t)
{
  ATerm n_96 = NULL;
  n_96 = t;
  {
    ATerm p_50 = t;
    int q_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_96 = NULL,h_37 = NULL,o_37 = NULL,e_26 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            t_96 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_96);
        h_37 = t;
        t = t_96;
        t = ContextVar_0_0(t);
        o_37 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, o_37);
        e_26 = t;
        t = SSLsetAnnotations(e_26, h_37);
        LocalPopChoice(q_50);
      }
    else
      {
        t = p_50;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, n_96);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm u_96 = NULL,v_96 = NULL;
  if(match_cons(t, sym__2))
    {
      u_96 = ATgetArgument(t, 0);
      v_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_15(u_96, v_96, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_n_45;
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm w_96 = NULL,x_96 = NULL;
  if(match_cons(t, sym__2))
    {
      w_96 = ATgetArgument(t, 0);
      x_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_15(w_96, x_96, t);
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_n_45;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  t = term_r_50;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm e_97 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_97);
  return(t);
}
static ATerm u_8 (ATerm t)
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
        ATerm v_50 = t;
        int w_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_50);
          }
        else
          {
            t = v_50;
            {
              ATerm x_50 = t;
              int a_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_97 = ATgetArgument(t, 0);
                      h_97 = ATgetArgument(t, 1);
                      i_97 = ATgetArgument(t, 2);
                      j_97 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_97;
                  t = map_1_0(x_8, t);
                  LocalPopChoice(a_51);
                }
              else
                {
                  t = x_50;
                  {
                    ATerm d_51 = t;
                    int g_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(g_51);
                      }
                    else
                      {
                        t = d_51;
                        t = dynrule_targs_1_0(a_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm u_97 = NULL;
  ATerm h_51 = t;
  int m_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_97 = ATgetArgument(t, 0);
          {
            ATerm n_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_51);
      t = u_97;
    }
  else
    {
      t = h_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_97;
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = map_1_0(b_9, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm z_97 = NULL;
  ATerm o_51 = t;
  int q_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_97 = ATgetArgument(t, 0);
          {
            ATerm s_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_51);
      t = z_97;
    }
  else
    {
      t = o_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_97;
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm c_98 = NULL,d_98 = NULL,e_98 = NULL;
  e_98 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      d_98 = ATgetArgument(t, 0);
      t = d_98;
    }
  else
    {
      t = e_98;
    }
  c_98 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_98);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_t_51;
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL;
  if(match_cons(t, sym__2))
    {
      j_98 = ATgetArgument(t, 0);
      k_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_15(j_98, k_98, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_n_45;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm o_98 = NULL,q_98 = NULL;
  if(match_cons(t, sym__2))
    {
      o_98 = ATgetArgument(t, 0);
      q_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_15(o_98, q_98, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_n_45;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_u_51;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm y_98 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_98 = ATgetArgument(t, 0);
      t = y_98;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_98 = ATgetArgument(t, 0);
          {
            ATerm v_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_98;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, y_98), (ATerm) ATempty);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm g_99 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      g_99 = ATgetArgument(t, 0);
      t = g_99;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_99 = ATgetArgument(t, 0);
          {
            ATerm w_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = g_99;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, g_99);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm n_99 = NULL;
  n_99 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_99);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_x_51;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_y_51;
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm v_150 (ATerm), ATerm t)
{
  ATerm s_93 = NULL,t_93 = NULL,w_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL,w_94 = NULL,x_94 = NULL;
  w_93 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm z_51 = ATgetArgument(t, 0);
      if(match_cons(z_51, sym_DynRuleId_1))
        {
          ATerm b_52 = ATgetArgument(z_51, 0);
          if(match_cons(b_52, sym_RDecT_3))
            {
              m_94 = ATgetArgument(b_52, 0);
              f_94 = ATgetArgument(b_52, 1);
              g_94 = ATgetArgument(b_52, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm a_52 = ATgetArgument(t, 1);
        if(match_cons(a_52, sym_Rule_3))
          {
            l_94 = ATgetArgument(a_52, 0);
            a_94 = ATgetArgument(a_52, 1);
            b_94 = ATgetArgument(a_52, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_94;
  t = dummify_0_0(t);
  s_94 = t;
  t = free_vars_3_0(r_7, t_7, tboundin_3_0, t);
  t = map_1_0(z_7, t);
  t_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_94, b_94);
  t = free_vars_3_0(a_8, b_8, tboundin_3_0, t);
  t = filter_1_0(g_8, t);
  s_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_93, t_93);
  t = diff_0_0(t);
  z_93 = t;
  t = f_94;
  t = foldr_3_0(h_8, j_8, k_8, t);
  w_94 = t;
  t = g_94;
  t = foldr_3_0(l_8, p_8, q_8, t);
  x_94 = t;
  t = w_93;
  t = dr_rename_vars_0_0(t);
  d_94 = t;
  {
    ATerm c_52 = t;
    int d_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_96 = NULL,r_37 = NULL;
        t = term_t_51;
        r_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_t_51, d_94);
        t = p_14(r_37, d_94, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm e_52 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_52) != ATmakeSymbol("u_0", 0, ATtrue)))
              _fail(t);
            y_96 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_96;
        e_94 = t;
        t = d_94;
        LocalPopChoice(d_52);
        t = (ATerm) ATempty;
        c_94 = t;
        t = (ATerm) ATempty;
        r_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_94, d_94);
        t = debug_1_0(s_8, t);
      }
    else
      {
        t = c_52;
        {
          ATerm z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL;
          t = term_f_43;
          d_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_43, m_94);
          t = a_15(d_97, m_94, t);
          o_94 = t;
          t = new_0_0(t);
          e_94 = t;
          t = new_0_0(t);
          k_94 = t;
          t = l_94;
          t = free_vars_3_0(t_8, u_8, tboundin_3_0, t);
          i_94 = t;
          t = map_1_0(d_9, t);
          b_97 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_94))), b_97), g_94);
          t = concat_0_0(t);
          y_93 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, o_94, f_94, y_93, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(z_93), (ATerm) ATmakeAppl(sym_Str_1, e_94))), a_94, (ATerm) ATmakeAppl(sym_BA_2, b_94, (ATerm) ATmakeAppl(sym_Var_1, k_94)))));
          c_94 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_f_52, e_94);
          c_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_94, (ATerm) ATmakeAppl(sym_Defined_2, term_f_52, e_94));
          t = q_14(f_9, d_94, c_97, t);
          t = f_94;
          t = foldr_3_0(n_9, o_9, u_9, t);
          z_96 = t;
          t = g_94;
          t = foldr_3_0(v_9, x_9, y_9, t);
          a_97 = t;
          t = z_96;
          if((w_94 != t))
            {
              _fail(t);
            }
          t = a_97;
          if((x_94 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, m_94, (ATerm) ATmakeAppl(sym__2, z_96, a_97));
          {
            ATerm g_52 = t;
            int i_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_37 = NULL,v_37 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_94, (ATerm) ATmakeAppl(sym__2, z_96, a_97)), s_94);
                u_37 = t;
                t = term_x_51;
                v_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_x_51, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_94, (ATerm) ATmakeAppl(sym__2, z_96, a_97)), s_94));
                t = p_14(v_37, u_37, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm j_52 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) j_52) != ATmakeSymbol("x_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, m_94, (ATerm) ATmakeAppl(sym__2, z_96, a_97));
                LocalPopChoice(i_52);
                t = (ATerm) ATempty;
                r_94 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_94, (ATerm) ATmakeAppl(sym__2, z_96, a_97)), s_94);
                t = debug_1_0(z_9, t);
              }
            else
              {
                t = g_52;
                {
                  ATerm r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL;
                  t = term_e_43;
                  v_98 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_e_43, m_94);
                  t = a_15(v_98, m_94, t);
                  j_94 = t;
                  t = term_k_52;
                  u_98 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_k_52, m_94);
                  t = a_15(u_98, m_94, t);
                  t = f_94;
                  t = map_1_0(a_10, t);
                  p_94 = t;
                  t = g_94;
                  t = map_1_0(b_10, t);
                  h_94 = t;
                  t = i_94;
                  t = map_1_0(c_10, t);
                  r_98 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_94))), r_98), h_94);
                  t = concat_0_0(t);
                  q_94 = t;
                  t = s_94;
                  {
                    ATerm l_52 = t;
                    int m_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = s_94;
                        if((l_94 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, k_94);
                        LocalPopChoice(m_52);
                      }
                    else
                      {
                        t = l_52;
                        t = s_94;
                      }
                  }
                  n_94 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, term_v_52, f_94, g_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_94), l_94), term_x_52, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_z_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, n_94), (ATerm) ATmakeAppl(sym_Str_1, m_94))), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_53), term_b_53), term_r_52))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_53, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_94), p_94, q_94), term_i_53))), term_l_53), term_r_52), term_n_53), (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, term_r_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, term_n_53), term_b_53)), term_f_53)))))), (ATerm) ATmakeAppl(sym_RDefT_4, j_94, f_94, g_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_94), l_94), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_l_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_94), p_94, q_94))), term_r_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_t_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, n_94), (ATerm) ATmakeAppl(sym_Str_1, m_94))), term_u_52), term_r_52)))), (ATerm) ATmakeAppl(sym_RDefT_4, m_94, f_94, g_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_94), l_94), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_p_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_94), p_94, q_94))), term_r_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_t_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, n_94), (ATerm) ATmakeAppl(sym_Str_1, m_94))), term_r_52))));
                  r_94 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_94, (ATerm) ATmakeAppl(sym__2, z_96, a_97)), s_94);
                  s_98 = t;
                  t = term_t_53;
                  t_98 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_94, (ATerm) ATmakeAppl(sym__2, z_96, a_97)), s_94), term_t_53);
                  t = q_14(d_10, s_98, t_98, t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_94, (ATerm) ATmakeAppl(sym__2, z_96, a_97)), s_94);
                  t = debug_1_0(e_10, t);
                }
              }
          }
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, s_94, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(z_93), (ATerm) ATmakeAppl(sym_Str_1, e_94))));
  t = v_150(t);
  t_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_94, r_94);
  t = conc_0_0(t);
  u_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, t_94), u_94);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL,q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL,v_100 = NULL;
  t_100 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      u_100 = ATgetArgument(t, 0);
      v_100 = ATgetArgument(t, 1);
      t = u_100;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          l_100 = ATgetArgument(t, 0);
          k_100 = ATgetArgument(t, 1);
          {
            static ATerm f_10 (ATerm t)
            {
              ATerm d_101 = NULL,e_101 = NULL;
              d_101 = t;
              t = SSL_explode_term(d_101);
              if(match_cons(t, sym__2))
                {
                  ATerm u_53 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_53) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm v_53 = ATgetArgument(t, 1);
                    if(((ATgetType(v_53) == AT_LIST) && !(ATisEmpty(v_53))))
                      {
                        e_101 = ATgetFirst((ATermList) v_53);
                        {
                          ATerm w_53 = (ATerm) ATgetNext((ATermList) v_53);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_101), k_100), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_100))));
              return(t);
            }
            t = l_100;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((q_100 != NULL) && (q_100 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_100 = ATgetArgument(t, 0);
                r_100 = ATgetArgument(t, 1);
                s_100 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, q_100, r_100, s_100)), (ATerm) ATmakeAppl(sym_Rule_3, v_100, term_z_53, term_t_29));
            t = SplitDynamicRule_1_0(f_10, t);
          }
        }
      else
        {
          static ATerm g_10 (ATerm t)
          {
            ATerm j_101 = NULL,k_101 = NULL;
            j_101 = t;
            t = SSL_explode_term(j_101);
            if(match_cons(t, sym__2))
              {
                ATerm a_54 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) a_54) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm c_54 = ATgetArgument(t, 1);
                  if(((ATgetType(c_54) == AT_LIST) && !(ATisEmpty(c_54))))
                    {
                      k_101 = ATgetFirst((ATermList) c_54);
                      {
                        ATerm d_54 = (ATerm) ATgetNext((ATermList) c_54);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, k_101), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_100))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              l_100 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_100;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((q_100 != NULL) && (q_100 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_100 = ATgetArgument(t, 0);
              r_100 = ATgetArgument(t, 1);
              s_100 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, q_100, r_100, s_100)), (ATerm) ATmakeAppl(sym_Rule_3, v_100, term_z_53, term_t_29));
          t = SplitDynamicRule_1_0(g_10, t);
        }
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          u_100 = ATgetArgument(t, 0);
          v_100 = ATgetArgument(t, 1);
          t = u_100;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              l_100 = ATgetArgument(t, 0);
              k_100 = ATgetArgument(t, 1);
              {
                static ATerm h_10 (ATerm t)
                {
                  ATerm a_102 = NULL,b_102 = NULL,x_37 = NULL;
                  a_102 = t;
                  t = SSL_explode_term(a_102);
                  if(match_cons(t, sym__2))
                    {
                      ATerm e_54 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) e_54) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm f_54 = ATgetArgument(t, 1);
                        if(((ATgetType(f_54) == AT_LIST) && !(ATisEmpty(f_54))))
                          {
                            b_102 = ATgetFirst((ATermList) f_54);
                            {
                              ATerm g_54 = (ATerm) ATgetNext((ATermList) f_54);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(a_102);
                  if(match_cons(t, sym__2))
                    {
                      ATerm h_54 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) h_54) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm i_54 = ATgetArgument(t, 1);
                        if(((ATgetType(i_54) == AT_LIST) && !(ATisEmpty(i_54))))
                          {
                            ATerm j_54 = ATgetFirst((ATermList) i_54);
                            ATerm k_54 = (ATerm) ATgetNext((ATermList) i_54);
                            if(((ATgetType(k_54) == AT_LIST) && !(ATisEmpty(k_54))))
                              {
                                x_37 = ATgetFirst((ATermList) k_54);
                                {
                                  ATerm l_54 = (ATerm) ATgetNext((ATermList) k_54);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_37), b_102), k_100), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_100))));
                  return(t);
                }
                t = l_100;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((q_100 != NULL) && (q_100 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      q_100 = ATgetArgument(t, 0);
                    r_100 = ATgetArgument(t, 1);
                    s_100 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, q_100, r_100, s_100)), v_100);
                t = SplitDynamicRule_1_0(h_10, t);
              }
            }
          else
            {
              static ATerm i_10 (ATerm t)
              {
                ATerm j_102 = NULL,k_102 = NULL,z_37 = NULL;
                j_102 = t;
                t = SSL_explode_term(j_102);
                if(match_cons(t, sym__2))
                  {
                    ATerm o_54 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) o_54) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm q_54 = ATgetArgument(t, 1);
                      if(((ATgetType(q_54) == AT_LIST) && !(ATisEmpty(q_54))))
                        {
                          k_102 = ATgetFirst((ATermList) q_54);
                          {
                            ATerm s_54 = (ATerm) ATgetNext((ATermList) q_54);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(j_102);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_54 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) t_54) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm u_54 = ATgetArgument(t, 1);
                      if(((ATgetType(u_54) == AT_LIST) && !(ATisEmpty(u_54))))
                        {
                          ATerm v_54 = ATgetFirst((ATermList) u_54);
                          ATerm w_54 = (ATerm) ATgetNext((ATermList) u_54);
                          if(((ATgetType(w_54) == AT_LIST) && !(ATisEmpty(w_54))))
                            {
                              z_37 = ATgetFirst((ATermList) w_54);
                              {
                                ATerm y_54 = (ATerm) ATgetNext((ATermList) w_54);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_37), k_102), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_100))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  l_100 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_100;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((q_100 != NULL) && (q_100 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    q_100 = ATgetArgument(t, 0);
                  r_100 = ATgetArgument(t, 1);
                  s_100 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, q_100, r_100, s_100)), v_100);
              t = SplitDynamicRule_1_0(i_10, t);
            }
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              u_100 = ATgetArgument(t, 0);
              v_100 = ATgetArgument(t, 1);
              t = u_100;
              if(match_cons(t, sym_LabeledDynRuleId_2))
                {
                  l_100 = ATgetArgument(t, 0);
                  k_100 = ATgetArgument(t, 1);
                  {
                    static ATerm j_10 (ATerm t)
                    {
                      ATerm y_102 = NULL,z_102 = NULL,b_38 = NULL;
                      y_102 = t;
                      t = SSL_explode_term(y_102);
                      if(match_cons(t, sym__2))
                        {
                          ATerm z_54 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) z_54) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm a_55 = ATgetArgument(t, 1);
                            if(((ATgetType(a_55) == AT_LIST) && !(ATisEmpty(a_55))))
                              {
                                z_102 = ATgetFirst((ATermList) a_55);
                                {
                                  ATerm b_55 = (ATerm) ATgetNext((ATermList) a_55);
                                }
                              }
                            else
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      t = SSL_explode_term(y_102);
                      if(match_cons(t, sym__2))
                        {
                          ATerm c_55 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) c_55) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm f_55 = ATgetArgument(t, 1);
                            if(((ATgetType(f_55) == AT_LIST) && !(ATisEmpty(f_55))))
                              {
                                ATerm g_55 = ATgetFirst((ATermList) f_55);
                                ATerm h_55 = (ATerm) ATgetNext((ATermList) f_55);
                                if(((ATgetType(h_55) == AT_LIST) && !(ATisEmpty(h_55))))
                                  {
                                    b_38 = ATgetFirst((ATermList) h_55);
                                    {
                                      ATerm i_55 = (ATerm) ATgetNext((ATermList) h_55);
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
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, b_38), z_102), k_100), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_100))));
                      return(t);
                    }
                    t = l_100;
                    if(match_cons(t, sym_RDecT_3))
                      {
                        if(((q_100 != NULL) && (q_100 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_100 = ATgetArgument(t, 0);
                        r_100 = ATgetArgument(t, 1);
                        s_100 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, q_100, r_100, s_100)), v_100);
                    t = SplitDynamicRule_1_0(j_10, t);
                  }
                }
              else
                {
                  static ATerm k_10 (ATerm t)
                  {
                    ATerm f_103 = NULL,g_103 = NULL,e_38 = NULL;
                    f_103 = t;
                    t = SSL_explode_term(f_103);
                    if(match_cons(t, sym__2))
                      {
                        ATerm l_55 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) l_55) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm m_55 = ATgetArgument(t, 1);
                          if(((ATgetType(m_55) == AT_LIST) && !(ATisEmpty(m_55))))
                            {
                              g_103 = ATgetFirst((ATermList) m_55);
                              {
                                ATerm n_55 = (ATerm) ATgetNext((ATermList) m_55);
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
                        ATerm o_55 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) o_55) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm p_55 = ATgetArgument(t, 1);
                          if(((ATgetType(p_55) == AT_LIST) && !(ATisEmpty(p_55))))
                            {
                              ATerm q_55 = ATgetFirst((ATermList) p_55);
                              ATerm r_55 = (ATerm) ATgetNext((ATermList) p_55);
                              if(((ATgetType(r_55) == AT_LIST) && !(ATisEmpty(r_55))))
                                {
                                  e_38 = ATgetFirst((ATermList) r_55);
                                  {
                                    ATerm s_55 = (ATerm) ATgetNext((ATermList) r_55);
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
                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_38), g_103), (ATerm) ATmakeAppl(sym_Str_1, not_null(q_100))));
                    return(t);
                  }
                  if(match_cons(t, sym_DynRuleId_1))
                    {
                      l_100 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_100;
                  if(match_cons(t, sym_RDecT_3))
                    {
                      if(((q_100 != NULL) && (q_100 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_100 = ATgetArgument(t, 0);
                      {
                        ATerm t_55 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm u_55 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = t_100;
                  t = SplitDynamicRule_1_0(k_10, t);
                }
            }
          else
            {
              if(match_cons(t, sym_AddScopeLabel_2))
                {
                  u_100 = ATgetArgument(t, 0);
                  v_100 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, term_w_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, v_100), (ATerm) ATmakeAppl(sym_Str_1, u_100))), (ATerm) ATempty);
            }
        }
    }
  return(t);
}
ATerm DesugarDynRuleDef_0_0 (ATerm t)
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL,f_104 = NULL,g_104 = NULL,j_104 = NULL,k_104 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      a_104 = ATgetArgument(t, 0);
      k_104 = ATgetArgument(t, 1);
      t = a_104;
      if(match_cons(t, sym_AddLabelDynRuleId_2))
        {
          b_104 = ATgetArgument(t, 0);
          j_104 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_104;
      if(match_cons(t, sym_RDecT_3))
        {
          c_104 = ATgetArgument(t, 0);
          f_104 = ATgetArgument(t, 1);
          g_104 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, c_104, j_104)), (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, c_104, f_104, g_104)), k_104));
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          a_104 = ATgetArgument(t, 0);
          k_104 = ATgetArgument(t, 1);
          t = a_104;
          if(match_cons(t, sym_AddLabelDynRuleId_2))
            {
              b_104 = ATgetArgument(t, 0);
              j_104 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_104;
          if(match_cons(t, sym_RDecT_3))
            {
              c_104 = ATgetArgument(t, 0);
              f_104 = ATgetArgument(t, 1);
              g_104 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, c_104, j_104)), (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, c_104, f_104, g_104)), k_104));
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              a_104 = ATgetArgument(t, 0);
              k_104 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_104;
          if(match_cons(t, sym_AddLabelDynRuleId_2))
            {
              b_104 = ATgetArgument(t, 0);
              j_104 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_104;
          if(match_cons(t, sym_RDecT_3))
            {
              c_104 = ATgetArgument(t, 0);
              f_104 = ATgetArgument(t, 1);
              g_104 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, c_104, j_104)), (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, c_104, f_104, g_104)), k_104));
        }
    }
  return(t);
}
ATerm split_dynamic_rule_0_0 (ATerm t)
{
  ATerm x_55 = t;
  int y_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarDynRuleDef_0_0(t);
      LocalPopChoice(y_55);
    }
  else
    {
      t = x_55;
      {
        ATerm c_105 = NULL;
        c_105 = t;
        t = (ATerm) ATinsert(ATempty, c_105);
      }
    }
  t = map_1_0(SplitDynamicRule_0_0, t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = term_c_45;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm w_150 (ATerm), ATerm t)
{
  static ATerm l_105 (ATerm t)
  {
    static ATerm s_11 (ATerm t)
    {
      ATerm d_56 = t;
      int e_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_150(t);
          LocalPopChoice(e_56);
        }
      else
        {
          t = d_56;
          {
            ATerm g_105 = NULL,h_105 = NULL,k_105 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                g_105 = ATgetArgument(t, 0);
                h_105 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, g_105, h_105);
            {
              static ATerm w_11 (ATerm t)
              {
                t = g_105;
                t = DeclareContextVars_0_0(t);
                t = h_105;
                t = l_105(t);
                if(((k_105 != NULL) && (k_105 != t)))
                  _fail(t);
                else
                  k_105 = t;
                return(t);
              }
              t = scope_2_0(t_11, w_11, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, g_105, not_null(k_105));
          }
        }
      return(t);
    }
    t = oncetd_1_0(s_11, t);
    return(t);
  }
  t = l_105(t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm o_105 = NULL,q_105 = NULL,r_105 = NULL,s_105 = NULL;
  s_105 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      r_105 = ATgetArgument(t, 0);
      {
        ATerm f_56 = t;
        int g_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_105;
            o_105 = t;
            t = s_105;
            LocalPopChoice(g_56);
          }
        else
          {
            t = f_56;
            t = s_105;
            o_105 = t;
            t = s_105;
          }
      }
    }
  else
    {
      t = s_105;
      o_105 = t;
      t = s_105;
    }
  t = term_i_56;
  q_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_105, term_i_56);
  t = q_14(a_12, o_105, q_105, t);
  t = s_105;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_c_45;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm t_105 = NULL,v_105 = NULL,w_105 = NULL,x_105 = NULL;
  x_105 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      w_105 = ATgetArgument(t, 0);
      {
        ATerm k_56 = t;
        int l_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_105;
            t_105 = t;
            t = x_105;
            LocalPopChoice(l_56);
          }
        else
          {
            t = k_56;
            t = x_105;
            t_105 = t;
            t = x_105;
          }
      }
    }
  else
    {
      t = x_105;
      t_105 = t;
      t = x_105;
    }
  t = term_n_56;
  v_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_105, term_n_56);
  t = q_14(g_12, t_105, v_105, t);
  t = x_105;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_c_45;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(y_11, t);
      LocalPopChoice(p_56);
    }
  else
    {
      t = o_56;
      t = map_1_0(d_12, t);
    }
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm l_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_38);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm q_56 = t;
  int r_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_56);
    }
  else
    {
      t = q_56;
      {
        ATerm t_56 = t;
        int u_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_56);
          }
        else
          {
            t = t_56;
            {
              ATerm x_56 = t;
              int z_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_38 = ATgetArgument(t, 0);
                      q_38 = ATgetArgument(t, 1);
                      r_38 = ATgetArgument(t, 2);
                      s_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_38;
                  t = map_1_0(l_12, t);
                  LocalPopChoice(z_56);
                }
              else
                {
                  t = x_56;
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
                        t = dynrule_targs_1_0(m_12, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm b_39 = NULL;
  ATerm f_57 = t;
  int h_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_39 = ATgetArgument(t, 0);
          {
            ATerm i_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_57);
      t = b_39;
    }
  else
    {
      t = f_57;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_39;
    }
  return(t);
}
static ATerm m_12 (ATerm t)
{
  t = map_1_0(n_12, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm g_39 = NULL;
  ATerm k_57 = t;
  int l_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_39 = ATgetArgument(t, 0);
          {
            ATerm m_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_57);
      t = g_39;
    }
  else
    {
      t = k_57;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_39;
    }
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm x_39 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_39 = ATgetArgument(t, 0);
      t = x_39;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_39 = ATgetArgument(t, 0);
          {
            ATerm n_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_39;
    }
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm e_40 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_40 = ATgetArgument(t, 0);
      t = e_40;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_40 = ATgetArgument(t, 0);
          {
            ATerm o_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_40;
    }
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm i_40 = NULL;
  if(match_cons(t, sym__2))
    {
      i_40 = ATgetArgument(t, 0);
      if((i_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm c_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_41);
  return(t);
}
static ATerm a_14 (ATerm t)
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
        ATerm u_57 = t;
        int v_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_57);
          }
        else
          {
            t = u_57;
            {
              ATerm w_57 = t;
              int x_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_41 = ATgetArgument(t, 0);
                      i_41 = ATgetArgument(t, 1);
                      j_41 = ATgetArgument(t, 2);
                      k_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_41;
                  t = map_1_0(c_14, t);
                  LocalPopChoice(x_57);
                }
              else
                {
                  t = w_57;
                  {
                    ATerm y_57 = t;
                    int z_57 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(z_57);
                      }
                    else
                      {
                        t = y_57;
                        t = dynrule_targs_1_0(i_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm e_42 = NULL;
  ATerm c_58 = t;
  int i_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_42 = ATgetArgument(t, 0);
          {
            ATerm j_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_58);
      t = e_42;
    }
  else
    {
      t = c_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_42;
    }
  return(t);
}
static ATerm i_14 (ATerm t)
{
  t = map_1_0(j_14, t);
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm l_42 = NULL;
  ATerm k_58 = t;
  int l_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_42 = ATgetArgument(t, 0);
          {
            ATerm n_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_58);
      t = l_42;
    }
  else
    {
      t = k_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_42;
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm q_43 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_43 = ATgetArgument(t, 0);
      t = q_43;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_43 = ATgetArgument(t, 0);
          {
            ATerm o_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = q_43;
    }
  return(t);
}
static ATerm m_14 (ATerm t)
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
            ATerm s_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_43;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm e_44 = NULL;
  if(match_cons(t, sym__2))
    {
      e_44 = ATgetArgument(t, 0);
      if((e_44 != ATgetArgument(t, 1)))
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
  ATerm r_110 = NULL;
  r_110 = t;
  {
    ATerm t_58 = t;
    int u_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_38 = NULL,j_38 = NULL;
        t = r_110;
        t = free_vars_3_0(h_12, i_12, tboundin_3_0, t);
        i_38 = t;
        t = r_110;
        {
          ATerm v_58 = t;
          int w_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_39 = NULL;
              ATerm y_58 = t;
              int a_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm k_59 = ATgetArgument(t, 0);
                      ATerm l_59 = ATgetArgument(t, 1);
                      t_39 = ATgetArgument(t, 2);
                      {
                        ATerm m_59 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_59);
                  t = t_39;
                  t = map_1_0(o_12, t);
                }
              else
                {
                  t = y_58;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm n_59 = ATgetArgument(t, 0);
                      ATerm o_59 = ATgetArgument(t, 1);
                      t_39 = ATgetArgument(t, 2);
                      {
                        ATerm p_59 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = t_39;
                  t = map_1_0(p_12, t);
                }
              LocalPopChoice(w_58);
            }
          else
            {
              t = v_58;
              t = (ATerm) ATempty;
            }
        }
        j_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_38, j_38);
        t = e_14(n_13, i_38, j_38, t);
        LocalPopChoice(u_58);
      }
    else
      {
        t = t_58;
        {
          ATerm m_40 = NULL,r_40 = NULL;
          t = r_110;
          t = free_vars_3_0(z_13, a_14, tboundin_3_0, t);
          m_40 = t;
          t = r_110;
          {
            ATerm q_59 = t;
            int r_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_43 = NULL;
                ATerm s_59 = t;
                int u_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm w_59 = ATgetArgument(t, 0);
                        ATerm x_59 = ATgetArgument(t, 1);
                        k_43 = ATgetArgument(t, 2);
                        {
                          ATerm c_60 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_59);
                    t = k_43;
                    t = map_1_0(k_14, t);
                  }
                else
                  {
                    t = s_59;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm d_60 = ATgetArgument(t, 0);
                        ATerm e_60 = ATgetArgument(t, 1);
                        k_43 = ATgetArgument(t, 2);
                        {
                          ATerm g_60 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = k_43;
                    t = map_1_0(m_14, t);
                  }
                LocalPopChoice(r_59);
              }
            else
              {
                t = q_59;
                t = (ATerm) ATempty;
              }
          }
          r_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_40, r_40);
          t = e_14(n_14, m_40, r_40, t);
        }
      }
  }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  t = term_c_45;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_c_38;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm f_111 = NULL,g_111 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_111 = ATgetFirst((ATermList) t);
      g_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_111, g_111);
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm h_111 = NULL,i_111 = NULL,j_111 = NULL,k_111 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_60 = ATgetArgument(t, 0);
      if(match_cons(h_60, sym__2))
        {
          h_111 = ATgetArgument(h_60, 0);
          i_111 = ATgetArgument(h_60, 1);
        }
      else
        _fail(t);
      {
        ATerm i_60 = ATgetArgument(t, 1);
        if(match_cons(i_60, sym__2))
          {
            j_111 = ATgetArgument(i_60, 0);
            k_111 = ATgetArgument(i_60, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_111), h_111), (ATerm) ATinsert(CheckATermList(k_111), i_111));
  return(t);
}
static ATerm v_13 (ATerm b_89, ATerm a_89, ATerm t)
{
  ATerm v_110 = NULL,w_110 = NULL,x_110 = NULL;
  static ATerm s_14 (ATerm t)
  {
    t = b_89;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = b_89;
    {
      static ATerm t_14 (ATerm t)
      {
        ATerm z_110 = NULL,a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL,g_26 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            z_110 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_110;
        t = map_1_0(split_dynamic_rule_0_0, t);
        t = flatten_list_0_0(t);
        t = genzip_4_0(e_15, o_15, s_15, _id, t);
        e_111 = t;
        if(match_cons(t, sym__2))
          {
            b_111 = ATgetArgument(t, 0);
            c_111 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_111);
        a_111 = t;
        t = c_111;
        t = concat_0_0(t);
        d_111 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_111, d_111);
        g_26 = t;
        t = SSLsetAnnotations(g_26, a_111);
        if(match_cons(t, sym__2))
          {
            if(((w_110 != NULL) && (w_110 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              w_110 = ATgetArgument(t, 0);
            if(((v_110 != NULL) && (v_110 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              v_110 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, w_110);
        return(t);
      }
      t = split_dynamic_rule_1_0(t_14, t);
    }
    if(((x_110 != NULL) && (x_110 != t)))
      _fail(t);
    else
      x_110 = t;
    return(t);
  }
  t = scope_2_0(o_14, s_14, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_110)), not_null(x_110)), a_89);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm v_115 (ATerm), ATerm w_115 (ATerm), ATerm t)
{
  static ATerm m_111 (ATerm t)
  {
    ATerm j_60 = t;
    int o_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_115(t);
        t = m_111(t);
        LocalPopChoice(o_60);
      }
    else
      {
        t = j_60;
        t = w_115(t);
      }
    return(t);
  }
  t = m_111(t);
  return(t);
}
ATerm listtd_1_0 (ATerm r_124 (ATerm), ATerm t)
{
  static ATerm a_112 (ATerm t)
  {
    ATerm x_111 = NULL,y_111 = NULL,z_111 = NULL;
    t = r_124(t);
    x_111 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_111;
      }
    else
      {
        ATerm t_44 = NULL,a_45 = NULL,i_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_111 = ATgetFirst((ATermList) t);
            z_111 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_111);
        t_44 = t;
        t = z_111;
        t = a_112(t);
        a_45 = t;
        t = (ATerm) ATinsert(CheckATermList(a_45), y_111);
        i_26 = t;
        t = SSLsetAnnotations(i_26, t_44);
      }
    return(t);
  }
  t = a_112(t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm a_129 (ATerm), ATerm b_129 (ATerm), ATerm t)
{
  ATerm p_60 = t;
  int q_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_112 = NULL;
      t = a_129(t);
      c_112 = t;
      t = (ATerm) ATinsert(ATempty, c_112);
      LocalPopChoice(q_60);
    }
  else
    {
      t = p_60;
      {
        ATerm f_45 = NULL,h_45 = NULL;
        static ATerm w_15 (ATerm t)
        {
          t = collect_om_2_0(a_129, b_129, t);
          return(t);
        }
        h_45 = t;
        t = SSL_explode_term(h_45);
        if(match_cons(t, sym__2))
          {
            ATerm r_60 = ATgetArgument(t, 0);
            f_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_45;
        t = foldr_3_0(v_15, b_129, w_15, t);
      }
    }
  return(t);
}
ATerm partition_1_0 (ATerm s_131 (ATerm), ATerm t)
{
  static ATerm i_113 (ATerm t)
  {
    ATerm f_113 = NULL,g_113 = NULL,h_113 = NULL;
    f_113 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_c_38;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_113 = ATgetFirst((ATermList) t);
            h_113 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_60 = t;
          int v_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,i_46 = NULL,k_26 = NULL;
              t = SSLgetAnnotations(f_113);
              z_45 = t;
              t = g_113;
              t = s_131(t);
              u_45 = t;
              t = (ATerm) ATinsert(CheckATermList(h_113), u_45);
              k_26 = t;
              t = SSLsetAnnotations(k_26, z_45);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm w_60 = ATgetFirst((ATermList) t);
                  x_45 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = x_45;
              t = i_113(t);
              w_45 = t;
              t = SSL_explode_term(w_45);
              if(match_cons(t, sym__2))
                {
                  ATerm c_61 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) c_61) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm d_61 = ATgetArgument(t, 1);
                    if(((ATgetType(d_61) == AT_LIST) && !(ATisEmpty(d_61))))
                      {
                        y_45 = ATgetFirst((ATermList) d_61);
                        {
                          ATerm e_61 = (ATerm) ATgetNext((ATermList) d_61);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(w_45);
              if(match_cons(t, sym__2))
                {
                  ATerm h_61 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) h_61) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm j_61 = ATgetArgument(t, 1);
                    if(((ATgetType(j_61) == AT_LIST) && !(ATisEmpty(j_61))))
                      {
                        ATerm m_61 = ATgetFirst((ATermList) j_61);
                        ATerm n_61 = (ATerm) ATgetNext((ATermList) j_61);
                        if(((ATgetType(n_61) == AT_LIST) && !(ATisEmpty(n_61))))
                          {
                            i_46 = ATgetFirst((ATermList) n_61);
                            {
                              ATerm o_61 = (ATerm) ATgetNext((ATermList) n_61);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_45), u_45), i_46);
              LocalPopChoice(v_60);
            }
          else
            {
              t = s_60;
              {
                ATerm q_46 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL,p_47 = NULL,l_26 = NULL;
                t = SSLgetAnnotations(f_113);
                d_47 = t;
                t = (ATerm) ATinsert(CheckATermList(h_113), g_113);
                l_26 = t;
                t = SSLsetAnnotations(l_26, d_47);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm p_61 = ATgetFirst((ATermList) t);
                    b_47 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = b_47;
                t = i_113(t);
                q_46 = t;
                t = SSL_explode_term(q_46);
                if(match_cons(t, sym__2))
                  {
                    ATerm q_61 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_61) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm r_61 = ATgetArgument(t, 1);
                      if(((ATgetType(r_61) == AT_LIST) && !(ATisEmpty(r_61))))
                        {
                          c_47 = ATgetFirst((ATermList) r_61);
                          {
                            ATerm s_61 = (ATerm) ATgetNext((ATermList) r_61);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(q_46);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_61 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) u_61) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm x_61 = ATgetArgument(t, 1);
                      if(((ATgetType(x_61) == AT_LIST) && !(ATisEmpty(x_61))))
                        {
                          ATerm d_62 = ATgetFirst((ATermList) x_61);
                          ATerm h_62 = (ATerm) ATgetNext((ATermList) x_61);
                          if(((ATgetType(h_62) == AT_LIST) && !(ATisEmpty(h_62))))
                            {
                              p_47 = ATgetFirst((ATermList) h_62);
                              {
                                ATerm i_62 = (ATerm) ATgetNext((ATermList) h_62);
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
                t = (ATerm) ATmakeAppl(sym__2, c_47, (ATerm) ATinsert(CheckATermList(p_47), g_113));
              }
            }
        }
      }
    return(t);
  }
  t = i_113(t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm a_49 = NULL,b_49 = NULL;
  if(match_cons(t, sym__2))
    {
      a_49 = ATgetArgument(t, 0);
      b_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_14(d_16, a_49, b_49, t);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm e_49 = NULL;
  if(match_cons(t, sym__2))
    {
      e_49 = ATgetArgument(t, 0);
      if((e_49 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm j_51 = NULL,k_51 = NULL;
  if(match_cons(t, sym__2))
    {
      j_51 = ATgetArgument(t, 0);
      k_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_14(i_16, j_51, k_51, t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm l_51 = NULL;
  if(match_cons(t, sym__2))
    {
      l_51 = ATgetArgument(t, 0);
      if((l_51 != ATgetArgument(t, 1)))
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
  ATerm z_115 = NULL,b_116 = NULL,c_116 = NULL,d_116 = NULL,e_116 = NULL,g_116 = NULL,j_116 = NULL;
  e_116 = t;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      g_116 = ATgetArgument(t, 0);
      j_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_116;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_116 = ATgetFirst((ATermList) t);
      d_116 = (ATerm) ATgetNext((ATermList) t);
      t = b_116;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          c_116 = ATgetArgument(t, 0);
          z_115 = ATgetArgument(t, 1);
          {
            ATerm l_48 = NULL,m_48 = NULL,r_48 = NULL,s_48 = NULL;
            t = d_116;
            {
              static ATerm x_15 (ATerm t)
              {
                ATerm u_48 = NULL,v_48 = NULL;
                u_48 = t;
                {
                  ATerm j_62 = t;
                  int k_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                        {
                          v_48 = ATgetArgument(t, 0);
                          {
                            ATerm l_62 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(k_62);
                      t = v_48;
                      if((c_116 != t))
                        {
                          _fail(t);
                        }
                      t = u_48;
                    }
                  else
                    {
                      t = j_62;
                      if(match_cons(t, sym_DynRuleScopeId_1))
                        {
                          v_48 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = v_48;
                      if((c_116 != t))
                        {
                          _fail(t);
                        }
                      t = u_48;
                    }
                }
                return(t);
              }
              t = partition_1_0(x_15, t);
            }
            if(match_cons(t, sym__2))
              {
                m_48 = ATgetArgument(t, 0);
                l_48 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = m_48;
            {
              static ATerm z_15 (ATerm t)
              {
                ATerm x_48 = NULL;
                if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                  {
                    if((c_116 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    x_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_48;
                return(t);
              }
              t = collect_om_2_0(z_15, c_16, t);
            }
            s_48 = t;
            t = (ATerm) ATinsert(CheckATermList(s_48), z_115);
            {
              static ATerm e_16 (ATerm t)
              {
                ATerm j_49 = NULL;
                j_49 = t;
                t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, c_116, j_49)));
                return(t);
              }
              t = map_1_0(e_16, t);
            }
            r_48 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_62, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_48), (ATerm) ATmakeAppl(sym_DynRuleScope_2, l_48, j_116))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, c_116)));
          }
        }
      else
        {
          ATerm y_50 = NULL,z_50 = NULL,b_51 = NULL;
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              c_116 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_116;
          {
            static ATerm f_16 (ATerm t)
            {
              ATerm e_51 = NULL,f_51 = NULL;
              e_51 = t;
              {
                ATerm o_62 = t;
                int p_62 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                      {
                        f_51 = ATgetArgument(t, 0);
                        {
                          ATerm q_62 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_62);
                    t = f_51;
                    if((c_116 != t))
                      {
                        _fail(t);
                      }
                    t = e_51;
                  }
                else
                  {
                    t = o_62;
                    if(match_cons(t, sym_DynRuleScopeId_1))
                      {
                        f_51 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = f_51;
                    if((c_116 != t))
                      {
                        _fail(t);
                      }
                    t = e_51;
                  }
              }
              return(t);
            }
            t = partition_1_0(f_16, t);
          }
          if(match_cons(t, sym__2))
            {
              z_50 = ATgetArgument(t, 0);
              y_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_50;
          {
            static ATerm g_16 (ATerm t)
            {
              ATerm i_51 = NULL;
              if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                {
                  if((c_116 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                  i_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_51;
              return(t);
            }
            t = collect_om_2_0(g_16, h_16, t);
          }
          {
            static ATerm j_16 (ATerm t)
            {
              ATerm r_51 = NULL;
              r_51 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, c_116, r_51)));
              return(t);
            }
            t = map_1_0(j_16, t);
          }
          b_51 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_62, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_51), (ATerm) ATmakeAppl(sym_DynRuleScope_2, y_50, j_116))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, c_116)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_116;
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_117 (ATerm), ATerm t)
{
  static ATerm u_116 (ATerm t)
  {
    ATerm r_62 = t;
    int v_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_117(t);
        LocalPopChoice(v_62);
      }
    else
      {
        t = r_62;
        t = SRTS_one(u_116, t);
      }
    return(t);
  }
  t = u_116(t);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm j_117 = NULL;
  j_117 = t;
  {
    ATerm w_62 = t;
    int x_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_52 = NULL;
        t = term_c_45;
        h_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_45, j_117);
        t = p_14(h_52, j_117, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm b_63 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_63) != ATmakeSymbol("a_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = j_117;
        LocalPopChoice(x_62);
      }
    else
      {
        t = w_62;
        {
          ATerm o_52 = NULL;
          t = term_c_45;
          o_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_45, j_117);
          t = p_14(o_52, j_117, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm i_63 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_63) != ATmakeSymbol("n_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = j_117;
        }
      }
  }
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm o_120 = NULL,p_120 = NULL,q_120 = NULL,t_120 = NULL,u_120 = NULL,x_120 = NULL,y_120 = NULL,b_121 = NULL,c_121 = NULL,d_121 = NULL,e_121 = NULL;
  e_121 = t;
  if(match_cons(t, sym_Op_2))
    {
      o_120 = ATgetArgument(t, 0);
      p_120 = ATgetArgument(t, 1);
      t = p_120;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_120 = ATgetFirst((ATermList) t);
          x_120 = (ATerm) ATgetNext((ATermList) t);
          t = x_120;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_120 = ATgetFirst((ATermList) t);
              d_121 = (ATerm) ATgetNext((ATermList) t);
              t = d_121;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = y_120;
                  if(match_cons(t, sym_Op_2))
                    {
                      b_121 = ATgetArgument(t, 0);
                      c_121 = ATgetArgument(t, 1);
                      t = c_121;
                      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                        {
                          t = b_121;
                          if(match_string(t, "Nil"))
                            {
                              t = q_120;
                              if(match_cons(t, sym_Var_1))
                                {
                                  t_120 = ATgetArgument(t, 0);
                                  t = t_120;
                                  if(match_cons(t, sym_ListVar_1))
                                    {
                                      u_120 = ATgetArgument(t, 0);
                                      t = o_120;
                                      if(match_string(t, "Cons"))
                                        {
                                          t = (ATerm) ATmakeAppl(sym_Var_1, (ATerm) ATmakeAppl(sym_ListVar_1, u_120));
                                        }
                                      else
                                        {
                                          t = e_121;
                                        }
                                    }
                                  else
                                    {
                                      t = e_121;
                                    }
                                }
                              else
                                {
                                  t = e_121;
                                }
                            }
                          else
                            {
                              t = e_121;
                            }
                        }
                      else
                        {
                          t = e_121;
                        }
                    }
                  else
                    {
                      t = e_121;
                    }
                }
              else
                {
                  t = e_121;
                }
            }
          else
            {
              t = e_121;
            }
        }
      else
        {
          t = e_121;
        }
    }
  else
    {
      t = e_121;
    }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm q_122 = NULL,t_122 = NULL,u_122 = NULL;
  q_122 = t;
  {
    ATerm j_63 = t;
    int m_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm n_63 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_63);
        t = q_122;
        {
          ATerm o_63 = t;
          if((PushChoice() == 0))
            {
              ATerm d_53 = NULL,e_53 = NULL,p_53 = NULL,q_53 = NULL,u_26 = NULL;
              q_53 = t;
              if(match_cons(t, sym_Var_1))
                {
                  e_53 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_53);
              d_53 = t;
              t = e_53;
              {
                ATerm r_63 = t;
                int s_63 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(s_63);
                  }
                else
                  {
                    t = r_63;
                    {
                      ATerm b_54 = NULL,p_54 = NULL,r_54 = NULL,p_26 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          b_54 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(e_53);
                      p_54 = t;
                      t = b_54;
                      t = ContextVar_0_0(t);
                      r_54 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, r_54);
                      p_26 = t;
                      t = SSLsetAnnotations(p_26, p_54);
                    }
                  }
              }
              p_53 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, p_53);
              u_26 = t;
              t = SSLsetAnnotations(u_26, d_53);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = o_63;
            }
        }
        t = term_b_34;
      }
    else
      {
        t = j_63;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_b_34;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                t_122 = ATgetArgument(t, 0);
                {
                  ATerm c_123 = NULL;
                  t = t_122;
                  t = free_vars_3_0(m_16, n_16, tboundin_3_0, t);
                  t = map_1_0(s_16, t);
                  c_123 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_63, c_123);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    t_122 = ATgetArgument(t, 0);
                    u_122 = ATgetArgument(t, 1);
                    {
                      ATerm d_125 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, t_122, u_122);
                      t = free_vars_3_0(t_16, u_16, tboundin_3_0, t);
                      t = map_1_0(c_17, t);
                      d_125 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_t_63, d_125);
                    }
                  }
                else
                  {
                    ATerm x_54 = NULL,d_55 = NULL,e_55 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm v_63 = ATgetArgument(t, 0);
                        ATerm x_63 = ATgetArgument(t, 1);
                        ATerm b_64 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_l_45;
                    d_55 = t;
                    t = (ATerm) ATinsert(ATempty, term_c_64);
                    e_55 = t;
                    t = SSL_printnl(d_55, e_55);
                    t = term_n_45;
                    x_54 = t;
                    t = SSL_exit(x_54);
                    t = (ATerm) ATinsert(ATempty, term_c_64);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm d_123 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_123);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm f_64 = t;
  int g_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_64);
    }
  else
    {
      t = f_64;
      {
        ATerm h_64 = t;
        int i_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_64);
          }
        else
          {
            t = h_64;
            {
              ATerm j_64 = t;
              int k_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_123 = NULL,o_123 = NULL,p_123 = NULL,u_123 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_123 = ATgetArgument(t, 0);
                      o_123 = ATgetArgument(t, 1);
                      p_123 = ATgetArgument(t, 2);
                      u_123 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_123;
                  t = map_1_0(o_16, t);
                  LocalPopChoice(k_64);
                }
              else
                {
                  t = j_64;
                  {
                    ATerm m_64 = t;
                    int n_64 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_64);
                      }
                    else
                      {
                        t = m_64;
                        t = dynrule_targs_1_0(q_16, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm l_124 = NULL;
  ATerm o_64 = t;
  int p_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_124 = ATgetArgument(t, 0);
          {
            ATerm q_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_64);
      t = l_124;
    }
  else
    {
      t = o_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_124;
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = map_1_0(r_16, t);
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm v_124 = NULL;
  ATerm r_64 = t;
  int u_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_124 = ATgetArgument(t, 0);
          {
            ATerm v_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_64);
      t = v_124;
    }
  else
    {
      t = r_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_124;
    }
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm y_124 = NULL;
  y_124 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_124);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm f_125 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_125);
  return(t);
}
static ATerm u_16 (ATerm t)
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
        ATerm y_64 = t;
        int a_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_65);
          }
        else
          {
            t = y_64;
            {
              ATerm b_65 = t;
              int e_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_125 = NULL,k_125 = NULL,q_125 = NULL,r_125 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_125 = ATgetArgument(t, 0);
                      k_125 = ATgetArgument(t, 1);
                      q_125 = ATgetArgument(t, 2);
                      r_125 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_125;
                  t = map_1_0(x_16, t);
                  LocalPopChoice(e_65);
                }
              else
                {
                  t = b_65;
                  {
                    ATerm g_65 = t;
                    int h_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_65);
                      }
                    else
                      {
                        t = g_65;
                        t = dynrule_targs_1_0(a_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm e_126 = NULL;
  ATerm i_65 = t;
  int j_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_126 = ATgetArgument(t, 0);
          {
            ATerm k_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_65);
      t = e_126;
    }
  else
    {
      t = i_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_126;
    }
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = map_1_0(b_17, t);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm l_126 = NULL;
  ATerm v_65 = t;
  int w_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_126 = ATgetArgument(t, 0);
          {
            ATerm y_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_65);
      t = l_126;
    }
  else
    {
      t = v_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_126;
    }
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm q_126 = NULL;
  q_126 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_126);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm m_127 = NULL,p_127 = NULL,q_127 = NULL;
  m_127 = t;
  {
    ATerm z_65 = t;
    int b_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm j_66 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_66);
        t = m_127;
        {
          ATerm k_66 = t;
          if((PushChoice() == 0))
            {
              ATerm z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,a_27 = NULL;
              c_56 = t;
              if(match_cons(t, sym_Var_1))
                {
                  a_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(c_56);
              z_55 = t;
              t = a_56;
              {
                ATerm l_66 = t;
                int m_66 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(m_66);
                  }
                else
                  {
                    t = l_66;
                    {
                      ATerm j_56 = NULL,s_56 = NULL,y_56 = NULL,w_26 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          j_56 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(a_56);
                      s_56 = t;
                      t = j_56;
                      t = ContextVar_0_0(t);
                      y_56 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, y_56);
                      w_26 = t;
                      t = SSLsetAnnotations(w_26, s_56);
                    }
                  }
              }
              b_56 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, b_56);
              a_27 = t;
              t = SSLsetAnnotations(a_27, z_55);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_66;
            }
        }
        t = term_b_34;
      }
    else
      {
        t = z_65;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_b_34;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                p_127 = ATgetArgument(t, 0);
                {
                  ATerm x_127 = NULL;
                  t = p_127;
                  t = free_vars_3_0(e_17, f_17, tboundin_3_0, t);
                  t = map_1_0(j_17, t);
                  x_127 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_63, x_127);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    p_127 = ATgetArgument(t, 0);
                    q_127 = ATgetArgument(t, 1);
                    {
                      ATerm d_129 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, p_127, q_127);
                      t = free_vars_3_0(k_17, l_17, tboundin_3_0, t);
                      t = map_1_0(p_17, t);
                      d_129 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_t_63, d_129);
                    }
                  }
                else
                  {
                    ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm n_66 = ATgetArgument(t, 0);
                        ATerm o_66 = ATgetArgument(t, 1);
                        ATerm p_66 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_l_45;
                    b_57 = t;
                    t = (ATerm) ATinsert(ATempty, term_c_64);
                    c_57 = t;
                    t = SSL_printnl(b_57, c_57);
                    t = term_n_45;
                    a_57 = t;
                    t = SSL_exit(a_57);
                    t = (ATerm) ATinsert(ATempty, term_c_64);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm z_127 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_127);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm r_66 = t;
  int t_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_66);
    }
  else
    {
      t = r_66;
      {
        ATerm u_66 = t;
        int d_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_67);
          }
        else
          {
            t = u_66;
            {
              ATerm l_67 = t;
              int p_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_128 = NULL,d_128 = NULL,e_128 = NULL,f_128 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_128 = ATgetArgument(t, 0);
                      d_128 = ATgetArgument(t, 1);
                      e_128 = ATgetArgument(t, 2);
                      f_128 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_128;
                  t = map_1_0(g_17, t);
                  LocalPopChoice(p_67);
                }
              else
                {
                  t = l_67;
                  {
                    ATerm q_67 = t;
                    int s_67 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_67);
                      }
                    else
                      {
                        t = q_67;
                        t = dynrule_targs_1_0(h_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm q_128 = NULL;
  ATerm w_67 = t;
  int x_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_128 = ATgetArgument(t, 0);
          {
            ATerm y_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_67);
      t = q_128;
    }
  else
    {
      t = w_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_128;
    }
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = map_1_0(i_17, t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm v_128 = NULL;
  ATerm b_68 = t;
  int c_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_128 = ATgetArgument(t, 0);
          {
            ATerm f_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_68);
      t = v_128;
    }
  else
    {
      t = b_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_128;
    }
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm y_128 = NULL;
  y_128 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_128);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm e_129 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_129);
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm g_68 = t;
  int h_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_68);
    }
  else
    {
      t = g_68;
      {
        ATerm j_68 = t;
        int l_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_68);
          }
        else
          {
            t = j_68;
            {
              ATerm m_68 = t;
              int r_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_129 = NULL,i_129 = NULL,j_129 = NULL,k_129 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_129 = ATgetArgument(t, 0);
                      i_129 = ATgetArgument(t, 1);
                      j_129 = ATgetArgument(t, 2);
                      k_129 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_129;
                  t = map_1_0(m_17, t);
                  LocalPopChoice(r_68);
                }
              else
                {
                  t = m_68;
                  {
                    ATerm s_68 = t;
                    int t_68 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_68);
                      }
                    else
                      {
                        t = s_68;
                        t = dynrule_targs_1_0(n_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm b_130 = NULL;
  ATerm u_68 = t;
  int v_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_130 = ATgetArgument(t, 0);
          {
            ATerm y_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_68);
      t = b_130;
    }
  else
    {
      t = u_68;
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
static ATerm n_17 (ATerm t)
{
  t = map_1_0(o_17, t);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm l_130 = NULL;
  ATerm a_69 = t;
  int b_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_130 = ATgetArgument(t, 0);
          {
            ATerm c_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_69);
      t = l_130;
    }
  else
    {
      t = a_69;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_130;
    }
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm r_130 = NULL;
  r_130 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_130);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  ATerm d_69 = t;
  int f_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(k_16, t);
      t = alltd_1_0(l_16, t);
      LocalPopChoice(f_69);
    }
  else
    {
      t = d_69;
      t = alltd_1_0(d_17, t);
    }
  return(t);
}
ATerm DRDef_LHS_1_0 (ATerm z_150 (ATerm), ATerm t)
{
  ATerm h_131 = NULL,i_131 = NULL;
  ATerm h_69 = t;
  int j_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          ATerm k_69 = ATgetArgument(t, 0);
          h_131 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      LocalPopChoice(j_69);
      t = h_131;
      t = z_150(t);
    }
  else
    {
      t = h_69;
      {
        ATerm l_69 = t;
        int o_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                ATerm t_69 = ATgetArgument(t, 0);
                h_131 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(o_69);
            t = h_131;
            if(match_cons(t, sym_Rule_3))
              {
                i_131 = ATgetArgument(t, 0);
                {
                  ATerm w_69 = ATgetArgument(t, 1);
                }
                {
                  ATerm x_69 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = i_131;
            t = z_150(t);
          }
        else
          {
            t = l_69;
            if(match_cons(t, sym_AddDynRule_2))
              {
                ATerm y_69 = ATgetArgument(t, 0);
                h_131 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_131;
            if(match_cons(t, sym_Rule_3))
              {
                i_131 = ATgetArgument(t, 0);
                {
                  ATerm z_69 = ATgetArgument(t, 1);
                }
                {
                  ATerm a_70 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = i_131;
            t = z_150(t);
          }
      }
    }
  return(t);
}
static ATerm x_134 (ATerm a_133, ATerm b_133, ATerm c_133, ATerm d_133, ATerm e_133, ATerm g_133, ATerm h_133, ATerm t)
{
  t = h_133;
  {
    ATerm b_70 = t;
    if((PushChoice() == 0))
      {
        t = e_133;
        if(match_cons(t, sym_Op_2))
          {
            ATerm g_70 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_70) != ATmakeSymbol("Undefined", 0, ATtrue)))
              _fail(t);
            {
              ATerm l_70 = ATgetArgument(t, 1);
              if(((ATgetType(l_70) != AT_LIST) || !(ATisEmpty(l_70))))
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
        t = b_70;
      }
  }
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, a_133, b_133, c_133)), (ATerm) ATmakeAppl(sym_Rule_3, d_133, e_133, g_133));
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_n_70;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm z_133 = NULL,a_134 = NULL,e_134 = NULL,f_134 = NULL,g_134 = NULL,h_134 = NULL,k_134 = NULL,l_134 = NULL,m_134 = NULL,p_134 = NULL;
  e_134 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      f_134 = ATgetArgument(t, 0);
      g_134 = ATgetArgument(t, 1);
      h_134 = ATgetArgument(t, 2);
      k_134 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = k_134;
  if(match_cons(t, sym_Rule_3))
    {
      l_134 = ATgetArgument(t, 0);
      m_134 = ATgetArgument(t, 1);
      p_134 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_134;
  if(match_cons(t, sym_Op_2))
    {
      z_133 = ATgetArgument(t, 0);
      a_134 = ATgetArgument(t, 1);
      t = a_134;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = z_133;
          if(match_string(t, "Undefined"))
            {
              ATerm o_70 = t;
              int p_70 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_134;
                  {
                    ATerm q_70 = t;
                    int r_70 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = p_134;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(r_70);
                      }
                    else
                      {
                        t = q_70;
                        {
                          ATerm r_57 = NULL,t_57 = NULL;
                          t = term_l_45;
                          r_57 = t;
                          t = (ATerm) ATinsert(ATempty, term_s_70);
                          t_57 = t;
                          t = SSL_printnl(r_57, t_57);
                          t = e_134;
                          t = debug_1_0(q_17, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, f_134, g_134, h_134)), l_134);
                  LocalPopChoice(p_70);
                }
              else
                {
                  t = o_70;
                  t = x_134(f_134, g_134, h_134, l_134, m_134, p_134, e_134, t);
                }
            }
          else
            {
              t = x_134(f_134, g_134, h_134, l_134, m_134, p_134, e_134, t);
            }
        }
      else
        {
          t = z_133;
          t = x_134(f_134, g_134, h_134, l_134, m_134, p_134, e_134, t);
        }
    }
  else
    {
      t = x_134(f_134, g_134, h_134, l_134, m_134, p_134, e_134, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm y_134 = NULL,a_135 = NULL,d_135 = NULL,e_135 = NULL;
  y_134 = t;
  t = w_122(t);
  a_135 = t;
  t = term_l_45;
  d_135 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_134), a_135);
  e_135 = t;
  t = SSL_printnl(d_135, e_135);
  t = y_134;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_n_70;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm f_135 = NULL,g_135 = NULL,h_135 = NULL,i_135 = NULL,j_135 = NULL,k_135 = NULL;
  k_135 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm t_70 = ATgetArgument(t, 0);
      if(match_cons(t_70, sym_DynRuleId_1))
        {
          ATerm w_70 = ATgetArgument(t_70, 0);
          if(match_cons(w_70, sym_RDecT_3))
            {
              f_135 = ATgetArgument(w_70, 0);
              g_135 = ATgetArgument(w_70, 1);
              h_135 = ATgetArgument(w_70, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm v_70 = ATgetArgument(t, 1);
        if(match_cons(v_70, sym_Rule_3))
          {
            i_135 = ATgetArgument(v_70, 0);
            {
              ATerm y_70 = ATgetArgument(v_70, 1);
              if(match_cons(y_70, sym_Op_2))
                {
                  ATerm z_70 = ATgetArgument(y_70, 0);
                  if((ATgetSymbol((ATermAppl) z_70) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm a_71 = ATgetArgument(y_70, 1);
                    if(((ATgetType(a_71) != AT_LIST) || !(ATisEmpty(a_71))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            j_135 = ATgetArgument(v_70, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm b_71 = t;
    int h_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_135;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(h_71);
      }
    else
      {
        t = b_71;
        {
          ATerm l_135 = NULL,m_135 = NULL;
          t = term_l_45;
          l_135 = t;
          t = (ATerm) ATinsert(ATempty, term_s_70);
          m_135 = t;
          t = SSL_printnl(l_135, m_135);
          t = k_135;
          t = debug_1_0(r_17, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, f_135, g_135, h_135)), i_135);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm z_135 = NULL;
  z_135 = t;
  {
    ATerm i_71 = t;
    int j_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_OverrideDynamicRules_1))
          {
            ATerm n_71 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(j_71);
        t = z_135;
      }
    else
      {
        t = i_71;
        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
          {
            ATerm p_71 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_135;
      }
  }
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_q_71;
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm r_71 = t;
  int t_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_136 = NULL;
      d_136 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm u_71 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_136;
      LocalPopChoice(t_71);
      {
        ATerm e_136 = NULL,f_136 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            e_136 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_136;
        t = map_1_0(w_17, t);
        f_136 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, f_136);
      }
    }
  else
    {
      t = r_71;
      {
        ATerm v_71 = t;
        int w_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_136 = NULL;
            s_136 = t;
            if(match_cons(t, sym_ExtendDynamicRules_1))
              {
                ATerm x_71 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_136;
            LocalPopChoice(w_71);
            {
              ATerm u_136 = NULL,v_136 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  u_136 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = u_136;
              t = map_1_0(y_17, t);
              v_136 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, v_136);
            }
          }
        else
          {
            t = v_71;
            {
              ATerm y_71 = t;
              int z_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_137 = NULL;
                  b_137 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm d_72 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = b_137;
                  LocalPopChoice(z_71);
                  {
                    ATerm c_137 = NULL,d_137 = NULL;
                    if(match_cons(t, sym_OverrideDynamicRules_1))
                      {
                        c_137 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = c_137;
                    t = map_1_0(a_18, t);
                    d_137 = t;
                    t = (ATerm) ATmakeAppl(sym_GenDynRules_1, d_137);
                  }
                }
              else
                {
                  t = y_71;
                  {
                    ATerm e_72 = t;
                    int f_72 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_137 = NULL;
                        p_137 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm g_72 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = p_137;
                        LocalPopChoice(f_72);
                        {
                          ATerm q_137 = NULL,r_137 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              q_137 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = q_137;
                          t = map_1_0(c_18, t);
                          r_137 = t;
                          t = (ATerm) ATmakeAppl(sym_GenDynRules_1, r_137);
                        }
                      }
                    else
                      {
                        t = e_72;
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm h_72 = t;
  int i_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UpgradeUndefine_0_0(t);
      LocalPopChoice(i_72);
    }
  else
    {
      t = h_72;
    }
  {
    ATerm j_72 = t;
    int k_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_136 = NULL,a_58 = NULL,b_58 = NULL;
        i_136 = t;
        t = (ATerm) ATempty;
        a_58 = t;
        t = term_q_71;
        b_58 = t;
        t = term_l_72;
        t = p_14(b_58, a_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm m_72 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_72) != ATmakeSymbol("c_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = i_136;
        LocalPopChoice(k_72);
        {
          ATerm j_136 = NULL,k_136 = NULL;
          static ATerm x_17 (ATerm t)
          {
            ATerm l_136 = NULL;
            if(match_cons(t, sym_DynRuleId_1))
              {
                l_136 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_AddLabelDynRuleId_2, l_136, not_null(k_136));
            return(t);
          }
          j_136 = t;
          t = DRDef_LHS_1_0(dummify_0_0, t);
          if(((k_136 != NULL) && (k_136 != t)))
            _fail(t);
          else
            k_136 = t;
          t = j_136;
          t = oncetd_1_0(x_17, t);
        }
      }
    else
      {
        t = j_72;
      }
  }
  return(t);
}
static ATerm y_17 (ATerm t)
{
  t = RDefToDRDef_extend_0_0(t);
  {
    ATerm n_72 = t;
    int o_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_136 = NULL,g_58 = NULL,h_58 = NULL;
        w_136 = t;
        t = (ATerm) ATempty;
        g_58 = t;
        t = term_q_71;
        h_58 = t;
        t = term_l_72;
        t = p_14(h_58, g_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm p_72 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_72) != ATmakeSymbol("c_1", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = w_136;
        LocalPopChoice(o_72);
        {
          ATerm x_136 = NULL,y_136 = NULL;
          static ATerm z_17 (ATerm t)
          {
            ATerm z_136 = NULL;
            if(match_cons(t, sym_DynRuleId_1))
              {
                z_136 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_AddLabelDynRuleId_2, z_136, not_null(y_136));
            return(t);
          }
          x_136 = t;
          t = DRDef_LHS_1_0(dummify_0_0, t);
          if(((y_136 != NULL) && (y_136 != t)))
            _fail(t);
          else
            y_136 = t;
          t = x_136;
          t = oncetd_1_0(z_17, t);
        }
      }
    else
      {
        t = n_72;
      }
  }
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm e_137 = NULL,f_137 = NULL,g_137 = NULL,h_137 = NULL,i_137 = NULL,j_137 = NULL,k_137 = NULL,l_137 = NULL;
  static ATerm b_18 (ATerm t)
  {
    ATerm o_137 = NULL;
    if(match_cons(t, sym_DynRuleId_1))
      {
        o_137 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LabeledDynRuleId_2, o_137, not_null(f_137));
    return(t);
  }
  if(match_cons(t, sym_RDefT_4))
    {
      g_137 = ATgetArgument(t, 0);
      h_137 = ATgetArgument(t, 1);
      i_137 = ATgetArgument(t, 2);
      {
        ATerm r_72 = ATgetArgument(t, 3);
        if(match_cons(r_72, sym_Rule_3))
          {
            j_137 = ATgetArgument(r_72, 0);
            k_137 = ATgetArgument(r_72, 1);
            l_137 = ATgetArgument(r_72, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, g_137, h_137, i_137)), (ATerm) ATmakeAppl(sym_Rule_3, j_137, k_137, l_137));
  {
    ATerm s_72 = t;
    int t_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UpgradeUndefine_0_0(t);
        LocalPopChoice(t_72);
      }
    else
      {
        t = s_72;
      }
  }
  e_137 = t;
  t = DRDef_LHS_1_0(dummify_0_0, t);
  if(((f_137 != NULL) && (f_137 != t)))
    _fail(t);
  else
    f_137 = t;
  t = e_137;
  t = oncetd_1_0(b_18, t);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm s_137 = NULL,t_137 = NULL;
  static ATerm d_18 (ATerm t)
  {
    ATerm u_137 = NULL;
    if(match_cons(t, sym_DynRuleId_1))
      {
        u_137 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LabeledDynRuleId_2, u_137, not_null(t_137));
    return(t);
  }
  t = RDefToDRDef_extend_0_0(t);
  s_137 = t;
  t = DRDef_LHS_1_0(dummify_0_0, t);
  if(((t_137 != NULL) && (t_137 != t)))
    _fail(t);
  else
    t_137 = t;
  t = s_137;
  t = oncetd_1_0(d_18, t);
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  ATerm u_72 = t;
  int v_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_135 = NULL,v_135 = NULL,w_135 = NULL;
      t = oncetd_1_0(s_17, t);
      u_135 = t;
      t = (ATerm) ATempty;
      v_135 = t;
      t = term_x_72;
      w_135 = t;
      t = term_y_72;
      t = q_14(t_17, v_135, w_135, t);
      t = u_135;
      LocalPopChoice(v_72);
    }
  else
    {
      t = u_72;
    }
  t = topdown_1_0(v_17, t);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = Cons_2_0(f_18, g_18, t);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm i_138 = NULL,j_138 = NULL,k_138 = NULL,l_138 = NULL,t_31 = NULL;
  l_138 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      j_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_138);
  i_138 = t;
  t = j_138;
  t = topdown_1_0(h_18, t);
  t = listtd_1_0(i_18, t);
  k_138 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, k_138);
  t_31 = t;
  t = SSLsetAnnotations(t_31, i_138);
  return(t);
}
static ATerm g_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm a_73 = t;
  int b_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynRuleScope_0_0(t);
      LocalPopChoice(b_73);
    }
  else
    {
      t = a_73;
    }
  return(t);
}
static ATerm i_18 (ATerm t)
{
  t = repeat_2_0(j_18, _id, t);
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm o_138 = NULL,p_138 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_138 = ATgetFirst((ATermList) t);
      p_138 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_13(o_138, p_138, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm z_137 = NULL,a_138 = NULL,b_138 = NULL,c_138 = NULL,d_138 = NULL,e_138 = NULL,f_138 = NULL,g_138 = NULL,v_31 = NULL,u_31 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  g_138 = t;
  if(match_cons(t, sym_Specification_1))
    {
      a_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_138);
  z_137 = t;
  t = a_138;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_138 = ATgetFirst((ATermList) t);
      d_138 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_138);
  b_138 = t;
  t = d_138;
  t = Cons_2_0(_id, e_18, t);
  e_138 = t;
  t = (ATerm) ATinsert(CheckATermList(e_138), c_138);
  u_31 = t;
  t = SSLsetAnnotations(u_31, b_138);
  f_138 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_138);
  v_31 = t;
  t = SSLsetAnnotations(v_31, z_137);
  return(t);
}
ATerm tboundin_3_0 (ATerm s_149 (ATerm), ATerm t_149 (ATerm), ATerm u_149 (ATerm), ATerm t)
{
  ATerm e_144 = NULL,f_144 = NULL,g_144 = NULL,h_144 = NULL,i_144 = NULL;
  h_144 = t;
  if(match_cons(t, sym_Scope_2))
    {
      i_144 = ATgetArgument(t, 0);
      g_144 = ATgetArgument(t, 1);
      {
        ATerm m_58 = NULL,p_58 = NULL,r_58 = NULL,d_32 = NULL;
        t = SSLgetAnnotations(h_144);
        m_58 = t;
        t = i_144;
        t = u_149(t);
        p_58 = t;
        t = g_144;
        t = s_149(t);
        r_58 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_58, r_58);
        d_32 = t;
        t = SSLsetAnnotations(d_32, m_58);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          i_144 = ATgetArgument(t, 0);
          {
            ATerm z_58 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,f_32 = NULL,e_32 = NULL;
            t = SSLgetAnnotations(h_144);
            z_58 = t;
            t = i_144;
            if(match_cons(t, sym_Rule_3))
              {
                c_59 = ATgetArgument(t, 0);
                d_59 = ATgetArgument(t, 1);
                f_59 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(i_144);
            b_59 = t;
            t = c_59;
            t = s_149(t);
            g_59 = t;
            t = d_59;
            t = s_149(t);
            h_59 = t;
            t = f_59;
            t = s_149(t);
            i_59 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, g_59, h_59, i_59);
            e_32 = t;
            t = SSLsetAnnotations(e_32, b_59);
            j_59 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, j_59);
            f_32 = t;
            t = SSLsetAnnotations(f_32, z_58);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              i_144 = ATgetArgument(t, 0);
              g_144 = ATgetArgument(t, 1);
              e_144 = ATgetArgument(t, 2);
              {
                ATerm t_59 = NULL,y_59 = NULL,z_59 = NULL,b_60 = NULL,k_32 = NULL;
                t = SSLgetAnnotations(h_144);
                t_59 = t;
                t = i_144;
                t = u_149(t);
                y_59 = t;
                t = g_144;
                t = u_149(t);
                z_59 = t;
                t = e_144;
                t = u_149(t);
                b_60 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, y_59, z_59, b_60);
                k_32 = t;
                t = SSLsetAnnotations(k_32, t_59);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  i_144 = ATgetArgument(t, 0);
                  g_144 = ATgetArgument(t, 1);
                  e_144 = ATgetArgument(t, 2);
                  f_144 = ATgetArgument(t, 3);
                  {
                    ATerm g_61 = NULL,y_61 = NULL,z_61 = NULL,a_62 = NULL,c_62 = NULL,l_32 = NULL;
                    t = SSLgetAnnotations(h_144);
                    g_61 = t;
                    t = i_144;
                    t = u_149(t);
                    y_61 = t;
                    t = g_144;
                    t = u_149(t);
                    z_61 = t;
                    t = e_144;
                    t = u_149(t);
                    a_62 = t;
                    t = f_144;
                    t = s_149(t);
                    c_62 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, y_61, z_61, a_62, c_62);
                    l_32 = t;
                    t = SSLsetAnnotations(l_32, g_61);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_144 = ATgetArgument(t, 0);
                      g_144 = ATgetArgument(t, 1);
                      e_144 = ATgetArgument(t, 2);
                      f_144 = ATgetArgument(t, 3);
                      {
                        ATerm u_62 = NULL,c_63 = NULL,d_63 = NULL,g_63 = NULL,h_63 = NULL,m_32 = NULL;
                        t = SSLgetAnnotations(h_144);
                        u_62 = t;
                        t = i_144;
                        t = u_149(t);
                        c_63 = t;
                        t = g_144;
                        t = u_149(t);
                        d_63 = t;
                        t = e_144;
                        t = u_149(t);
                        g_63 = t;
                        t = f_144;
                        t = s_149(t);
                        h_63 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, c_63, d_63, g_63, h_63);
                        m_32 = t;
                        t = SSLsetAnnotations(m_32, u_62);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          i_144 = ATgetArgument(t, 0);
                          g_144 = ATgetArgument(t, 1);
                          {
                            ATerm y_63 = NULL,d_64 = NULL,e_64 = NULL,o_32 = NULL;
                            t = SSLgetAnnotations(h_144);
                            y_63 = t;
                            t = i_144;
                            t = u_149(t);
                            d_64 = t;
                            t = g_144;
                            t = s_149(t);
                            e_64 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, d_64, e_64);
                            o_32 = t;
                            t = SSLsetAnnotations(o_32, y_63);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              i_144 = ATgetArgument(t, 0);
                              g_144 = ATgetArgument(t, 1);
                              {
                                ATerm z_64 = NULL,c_65 = NULL,d_65 = NULL,p_32 = NULL;
                                t = SSLgetAnnotations(h_144);
                                z_64 = t;
                                t = i_144;
                                t = u_149(t);
                                c_65 = t;
                                t = g_144;
                                t = s_149(t);
                                d_65 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, c_65, d_65);
                                p_32 = t;
                                t = SSLsetAnnotations(p_32, z_64);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  i_144 = ATgetArgument(t, 0);
                                  g_144 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_65 = NULL,f_66 = NULL,g_66 = NULL,q_32 = NULL;
                                    t = SSLgetAnnotations(h_144);
                                    x_65 = t;
                                    t = i_144;
                                    t = u_149(t);
                                    f_66 = t;
                                    t = g_144;
                                    t = s_149(t);
                                    g_66 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, f_66, g_66);
                                    q_32 = t;
                                    t = SSLsetAnnotations(q_32, x_65);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      i_144 = ATgetArgument(t, 0);
                                      {
                                        ATerm q_66 = NULL,s_66 = NULL,r_32 = NULL;
                                        t = SSLgetAnnotations(h_144);
                                        q_66 = t;
                                        t = i_144;
                                        t = s_149(t);
                                        s_66 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, s_66);
                                        r_32 = t;
                                        t = SSLsetAnnotations(r_32, q_66);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          i_144 = ATgetArgument(t, 0);
                                          {
                                            ATerm r_67 = NULL,v_67 = NULL,s_32 = NULL;
                                            t = SSLgetAnnotations(h_144);
                                            r_67 = t;
                                            t = i_144;
                                            t = s_149(t);
                                            v_67 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, v_67);
                                            s_32 = t;
                                            t = SSLsetAnnotations(s_32, r_67);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              i_144 = ATgetArgument(t, 0);
                                              {
                                                ATerm i_68 = NULL,k_68 = NULL,w_32 = NULL;
                                                t = SSLgetAnnotations(h_144);
                                                i_68 = t;
                                                t = i_144;
                                                t = s_149(t);
                                                k_68 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, k_68);
                                                w_32 = t;
                                                t = SSLsetAnnotations(w_32, i_68);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  i_144 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm e_69 = NULL,g_69 = NULL,x_32 = NULL;
                                                    t = SSLgetAnnotations(h_144);
                                                    e_69 = t;
                                                    t = i_144;
                                                    t = s_149(t);
                                                    g_69 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, g_69);
                                                    x_32 = t;
                                                    t = SSLsetAnnotations(x_32, e_69);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm p_69 = NULL,v_69 = NULL,z_32 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      i_144 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(h_144);
                                                  p_69 = t;
                                                  t = i_144;
                                                  t = s_149(t);
                                                  v_69 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, v_69);
                                                  z_32 = t;
                                                  t = SSLsetAnnotations(z_32, p_69);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm b_150 (ATerm), ATerm t)
{
  ATerm g_145 = NULL,h_145 = NULL,k_145 = NULL;
  ATerm c_73 = t;
  int d_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          g_145 = ATgetArgument(t, 0);
          {
            ATerm e_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_73);
      t = g_145;
      if(match_cons(t, sym_DynRuleId_1))
        {
          h_145 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_145;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm f_73 = ATgetArgument(t, 0);
          ATerm g_73 = ATgetArgument(t, 1);
          k_145 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_145;
    }
  else
    {
      t = c_73;
      {
        ATerm h_73 = t;
        int i_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                g_145 = ATgetArgument(t, 0);
                {
                  ATerm j_73 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(i_73);
            t = g_145;
            if(match_cons(t, sym_DynRuleId_1))
              {
                h_145 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = h_145;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm k_73 = ATgetArgument(t, 0);
                ATerm l_73 = ATgetArgument(t, 1);
                k_145 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = k_145;
          }
        else
          {
            t = h_73;
            if(match_cons(t, sym_AddDynRule_2))
              {
                g_145 = ATgetArgument(t, 0);
                {
                  ATerm m_73 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = g_145;
            if(match_cons(t, sym_DynRuleId_1))
              {
                h_145 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = h_145;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm n_73 = ATgetArgument(t, 0);
                ATerm o_73 = ATgetArgument(t, 1);
                k_145 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = k_145;
          }
      }
    }
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm a_146 = NULL;
  ATerm p_73 = t;
  int q_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_146 = ATgetArgument(t, 0);
          {
            ATerm r_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_73);
      t = a_146;
    }
  else
    {
      t = p_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_146;
    }
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm g_146 = NULL;
  ATerm t_73 = t;
  int v_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_146 = ATgetArgument(t, 0);
          {
            ATerm w_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_73);
      t = g_146;
    }
  else
    {
      t = t_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_146;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm v_145 = NULL;
  ATerm x_73 = t;
  int y_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm z_73 = ATgetArgument(t, 0);
          ATerm a_74 = ATgetArgument(t, 1);
          v_145 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(y_73);
      t = v_145;
      t = map_1_0(k_18, t);
    }
  else
    {
      t = x_73;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm b_74 = ATgetArgument(t, 0);
          ATerm c_74 = ATgetArgument(t, 1);
          v_145 = ATgetArgument(t, 2);
          {
            ATerm e_74 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_145;
      t = map_1_0(l_18, t);
    }
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm c_147 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_147 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_147);
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm g_74 = t;
  int h_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_74);
    }
  else
    {
      t = g_74;
      {
        ATerm i_74 = t;
        int j_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm e_147 = NULL,j_147 = NULL,k_147 = NULL,l_147 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_147 = ATgetArgument(t, 0);
                      j_147 = ATgetArgument(t, 1);
                      k_147 = ATgetArgument(t, 2);
                      l_147 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_147;
                  t = map_1_0(o_18, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_74);
                      }
                    else
                      {
                        t = m_74;
                        t = dynrule_targs_1_0(p_18, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_18 (ATerm t)
{
  ATerm s_147 = NULL;
  ATerm o_74 = t;
  int q_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_147 = ATgetArgument(t, 0);
          {
            ATerm r_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_74);
      t = s_147;
    }
  else
    {
      t = o_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_147;
    }
  return(t);
}
static ATerm p_18 (ATerm t)
{
  t = map_1_0(q_18, t);
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm x_147 = NULL;
  ATerm t_74 = t;
  int v_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_147 = ATgetArgument(t, 0);
          {
            ATerm w_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_74);
      t = x_147;
    }
  else
    {
      t = t_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_147;
    }
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm b_148 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_148);
  return(t);
}
static ATerm s_18 (ATerm t)
{
  ATerm x_74 = t;
  int y_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(a_75);
          }
        else
          {
            t = z_74;
            {
              ATerm b_75 = t;
              int c_75 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_148 = NULL,e_148 = NULL,f_148 = NULL,g_148 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_148 = ATgetArgument(t, 0);
                      e_148 = ATgetArgument(t, 1);
                      f_148 = ATgetArgument(t, 2);
                      g_148 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_148;
                  t = map_1_0(t_18, t);
                  LocalPopChoice(c_75);
                }
              else
                {
                  t = b_75;
                  {
                    ATerm e_75 = t;
                    int f_75 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_75);
                      }
                    else
                      {
                        t = e_75;
                        t = dynrule_targs_1_0(u_18, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm n_148 = NULL;
  ATerm h_75 = t;
  int i_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_148 = ATgetArgument(t, 0);
          {
            ATerm j_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_75);
      t = n_148;
    }
  else
    {
      t = h_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_148 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_148;
    }
  return(t);
}
static ATerm u_18 (ATerm t)
{
  t = map_1_0(v_18, t);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm s_148 = NULL;
  ATerm k_75 = t;
  int l_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_148 = ATgetArgument(t, 0);
          {
            ATerm m_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_75);
      t = s_148;
    }
  else
    {
      t = k_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_148 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_148;
    }
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm y_148 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_148);
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm n_75 = t;
  int o_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_75);
    }
  else
    {
      t = n_75;
      {
        ATerm p_75 = t;
        int t_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_75);
          }
        else
          {
            t = p_75;
            {
              ATerm u_75 = t;
              int v_75 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_149 = NULL,b_149 = NULL,c_149 = NULL,d_149 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_149 = ATgetArgument(t, 0);
                      b_149 = ATgetArgument(t, 1);
                      c_149 = ATgetArgument(t, 2);
                      d_149 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_149;
                  t = map_1_0(y_18, t);
                  LocalPopChoice(v_75);
                }
              else
                {
                  t = u_75;
                  {
                    ATerm y_75 = t;
                    int b_76 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_76);
                      }
                    else
                      {
                        t = y_75;
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
static ATerm y_18 (ATerm t)
{
  ATerm k_149 = NULL;
  ATerm c_76 = t;
  int f_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_149 = ATgetArgument(t, 0);
          {
            ATerm g_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_76);
      t = k_149;
    }
  else
    {
      t = c_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_149 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_149;
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
  ATerm p_149 = NULL;
  ATerm h_76 = t;
  int i_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_149 = ATgetArgument(t, 0);
          {
            ATerm j_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_76);
      t = p_149;
    }
  else
    {
      t = h_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_149 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_149;
    }
  return(t);
}
static ATerm c_19 (ATerm t)
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
static ATerm d_19 (ATerm t)
{
  ATerm k_76 = t;
  int l_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_76);
    }
  else
    {
      t = k_76;
      {
        ATerm m_76 = t;
        int n_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_76);
          }
        else
          {
            t = m_76;
            {
              ATerm o_76 = t;
              int p_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_149 = NULL,z_149 = NULL,a_150 = NULL,c_150 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_149 = ATgetArgument(t, 0);
                      z_149 = ATgetArgument(t, 1);
                      a_150 = ATgetArgument(t, 2);
                      c_150 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_150;
                  t = map_1_0(e_19, t);
                  LocalPopChoice(p_76);
                }
              else
                {
                  t = o_76;
                  {
                    ATerm q_76 = t;
                    int r_76 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(r_76);
                      }
                    else
                      {
                        t = q_76;
                        t = dynrule_targs_1_0(h_19, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_19 (ATerm t)
{
  ATerm j_150 = NULL;
  ATerm s_76 = t;
  int t_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_150 = ATgetArgument(t, 0);
          {
            ATerm u_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_76);
      t = j_150;
    }
  else
    {
      t = s_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_150;
    }
  return(t);
}
static ATerm h_19 (ATerm t)
{
  t = map_1_0(l_19, t);
  return(t);
}
static ATerm l_19 (ATerm t)
{
  ATerm y_150 = NULL;
  ATerm v_76 = t;
  int w_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_150 = ATgetArgument(t, 0);
          {
            ATerm x_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_76);
      t = y_150;
    }
  else
    {
      t = v_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_150;
    }
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm d_151 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_151);
  return(t);
}
static ATerm n_19 (ATerm t)
{
  ATerm y_76 = t;
  int a_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_77);
    }
  else
    {
      t = y_76;
      {
        ATerm b_77 = t;
        int c_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm f_151 = NULL,h_151 = NULL,i_151 = NULL,j_151 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_151 = ATgetArgument(t, 0);
                      h_151 = ATgetArgument(t, 1);
                      i_151 = ATgetArgument(t, 2);
                      j_151 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_151;
                  t = map_1_0(o_19, t);
                  LocalPopChoice(e_77);
                }
              else
                {
                  t = d_77;
                  {
                    ATerm g_77 = t;
                    int h_77 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_77);
                      }
                    else
                      {
                        t = g_77;
                        t = dynrule_targs_1_0(p_19, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_19 (ATerm t)
{
  ATerm q_151 = NULL;
  ATerm i_77 = t;
  int j_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_151 = ATgetArgument(t, 0);
          {
            ATerm k_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_77);
      t = q_151;
    }
  else
    {
      t = i_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_151;
    }
  return(t);
}
static ATerm p_19 (ATerm t)
{
  t = map_1_0(t_19, t);
  return(t);
}
static ATerm t_19 (ATerm t)
{
  ATerm v_151 = NULL;
  ATerm l_77 = t;
  int m_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_151 = ATgetArgument(t, 0);
          {
            ATerm n_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_77);
      t = v_151;
    }
  else
    {
      t = l_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_151;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm a_147 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      a_147 = ATgetArgument(t, 0);
      t = a_147;
      t = free_vars_3_0(m_18, n_18, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          a_147 = ATgetArgument(t, 0);
          t = a_147;
          t = free_vars_3_0(r_18, s_18, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              a_147 = ATgetArgument(t, 0);
              t = a_147;
              t = free_vars_3_0(w_18, x_18, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  a_147 = ATgetArgument(t, 0);
                  t = a_147;
                  t = free_vars_3_0(c_19, d_19, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      a_147 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_147;
                  t = free_vars_3_0(m_19, n_19, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm u_19 (ATerm t)
{
  ATerm l_152 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_152);
  return(t);
}
static ATerm v_19 (ATerm t)
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
        ATerm r_77 = t;
        int s_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_77);
          }
        else
          {
            t = r_77;
            {
              ATerm t_77 = t;
              int u_77 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_152 = NULL,o_152 = NULL,p_152 = NULL,q_152 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_152 = ATgetArgument(t, 0);
                      o_152 = ATgetArgument(t, 1);
                      p_152 = ATgetArgument(t, 2);
                      q_152 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_152;
                  t = map_1_0(w_19, t);
                  LocalPopChoice(u_77);
                }
              else
                {
                  t = t_77;
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
static ATerm w_19 (ATerm t)
{
  ATerm y_152 = NULL;
  ATerm x_77 = t;
  int y_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_152 = ATgetArgument(t, 0);
          {
            ATerm z_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_77);
      t = y_152;
    }
  else
    {
      t = x_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_152 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_152;
    }
  return(t);
}
static ATerm a_20 (ATerm t)
{
  t = map_1_0(d_20, t);
  return(t);
}
static ATerm d_20 (ATerm t)
{
  ATerm d_153 = NULL;
  ATerm a_78 = t;
  int b_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_153 = ATgetArgument(t, 0);
          {
            ATerm c_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_78);
      t = d_153;
    }
  else
    {
      t = a_78;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_153;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm e_152 = NULL,i_152 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      i_152 = ATgetArgument(t, 0);
      t = i_152;
      if(match_cons(t, sym_Rule_3))
        {
          e_152 = ATgetArgument(t, 0);
          {
            ATerm e_78 = ATgetArgument(t, 1);
          }
          {
            ATerm f_78 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_152;
      t = free_vars_3_0(u_19, v_19, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          i_152 = ATgetArgument(t, 0);
          {
            ATerm g_78 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = i_152;
    }
  return(t);
}
static ATerm e_14 (ATerm s_127 (ATerm), ATerm g_31, ATerm f_31, ATerm t)
{
  static ATerm w_153 (ATerm t)
  {
    ATerm r_153 = NULL,s_153 = NULL,t_153 = NULL;
    r_153 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_31;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_153 = ATgetFirst((ATermList) t);
            t_153 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_78 = t;
          int k_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_153;
              {
                static ATerm g_20 (ATerm t)
                {
                  t = f_31;
                  return(t);
                }
                t = f_14(s_127, g_20, s_153, t_153, t);
              }
              t = w_153(t);
              LocalPopChoice(k_78);
            }
          else
            {
              t = h_78;
              {
                ATerm c_70 = NULL,m_70 = NULL,y_33 = NULL;
                t = SSLgetAnnotations(r_153);
                c_70 = t;
                t = t_153;
                t = w_153(t);
                m_70 = t;
                t = (ATerm) ATinsert(CheckATermList(m_70), s_153);
                y_33 = t;
                t = SSLsetAnnotations(y_33, c_70);
              }
            }
        }
      }
    return(t);
  }
  t = g_31;
  t = w_153(t);
  return(t);
}
static ATerm f_14 (ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm k_31, ATerm j_31, ATerm t)
{
  t = w_127(t);
  {
    static ATerm h_20 (ATerm t)
    {
      ATerm a_154 = NULL;
      a_154 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_31, a_154);
      t = v_127(t);
      return(t);
    }
    t = fetch_1_0(h_20, t);
  }
  t = j_31;
  return(t);
}
static ATerm g_14 (ATerm n_127 (ATerm), ATerm e_31, ATerm d_31, ATerm t)
{
  static ATerm q_154 (ATerm t)
  {
    ATerm l_154 = NULL,m_154 = NULL,n_154 = NULL;
    l_154 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_154;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_154 = ATgetFirst((ATermList) t);
            n_154 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_78 = t;
          int m_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_154;
              {
                static ATerm j_20 (ATerm t)
                {
                  t = d_31;
                  return(t);
                }
                t = f_14(n_127, j_20, m_154, n_154, t);
              }
              t = q_154(t);
              LocalPopChoice(m_78);
            }
          else
            {
              t = l_78;
              {
                ATerm u_70 = NULL,x_70 = NULL,a_34 = NULL;
                t = SSLgetAnnotations(l_154);
                u_70 = t;
                t = n_154;
                t = q_154(t);
                x_70 = t;
                t = (ATerm) ATinsert(CheckATermList(x_70), m_154);
                a_34 = t;
                t = SSLsetAnnotations(a_34, u_70);
              }
            }
        }
      }
    return(t);
  }
  t = e_31;
  t = q_154(t);
  return(t);
}
ATerm genzip_4_0 (ATerm l_125 (ATerm), ATerm m_125 (ATerm), ATerm n_125 (ATerm), ATerm o_125 (ATerm), ATerm t)
{
  static ATerm y_154 (ATerm t)
  {
    ATerm n_78 = t;
    int o_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_125(t);
        LocalPopChoice(o_78);
      }
    else
      {
        t = n_78;
        {
          ATerm s_154 = NULL,t_154 = NULL,u_154 = NULL,v_154 = NULL,w_154 = NULL,x_154 = NULL,g_34 = NULL;
          t = m_125(t);
          x_154 = t;
          if(match_cons(t, sym__2))
            {
              t_154 = ATgetArgument(t, 0);
              u_154 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_154);
          s_154 = t;
          t = t_154;
          t = o_125(t);
          v_154 = t;
          t = u_154;
          t = y_154(t);
          w_154 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_154, w_154);
          g_34 = t;
          t = SSLsetAnnotations(g_34, s_154);
          t = n_125(t);
        }
      }
    return(t);
  }
  t = y_154(t);
  return(t);
}
static ATerm o_20 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_78 = ATgetArgument(t, 0);
      if(((ATgetType(p_78) != AT_LIST) || !(ATisEmpty(p_78))))
        _fail(t);
      {
        ATerm q_78 = ATgetArgument(t, 1);
        if(((ATgetType(q_78) != AT_LIST) || !(ATisEmpty(q_78))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_20 (ATerm t)
{
  ATerm f_155 = NULL,g_155 = NULL,h_155 = NULL,i_155 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_78 = ATgetArgument(t, 0);
      if(((ATgetType(r_78) == AT_LIST) && !(ATisEmpty(r_78))))
        {
          f_155 = ATgetFirst((ATermList) r_78);
          g_155 = (ATerm) ATgetNext((ATermList) r_78);
        }
      else
        _fail(t);
      {
        ATerm s_78 = ATgetArgument(t, 1);
        if(((ATgetType(s_78) == AT_LIST) && !(ATisEmpty(s_78))))
          {
            h_155 = ATgetFirst((ATermList) s_78);
            i_155 = (ATerm) ATgetNext((ATermList) s_78);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_155, h_155), (ATerm) ATmakeAppl(sym__2, g_155, i_155));
  return(t);
}
static ATerm q_20 (ATerm t)
{
  ATerm j_155 = NULL,k_155 = NULL;
  if(match_cons(t, sym__2))
    {
      j_155 = ATgetArgument(t, 0);
      k_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_155), j_155);
  return(t);
}
static ATerm l_14 (ATerm h_705, ATerm m_705, ATerm d_70, ATerm t)
{
  ATerm a_155 = NULL,b_155 = NULL,c_155 = NULL,d_155 = NULL;
  t = SSL_explode_term(m_705);
  if(match_cons(t, sym__2))
    {
      a_155 = ATgetArgument(t, 0);
      c_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_705);
  if(match_cons(t, sym__2))
    {
      if((a_155 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_155, c_155);
  t = genzip_4_0(o_20, p_20, q_20, _id, t);
  d_155 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_155, d_70);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm t)
{
  static ATerm m_155 (ATerm t)
  {
    ATerm u_78 = t;
    int v_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_116(t);
        LocalPopChoice(v_78);
      }
    else
      {
        t = u_78;
        t = n_116(t);
        t = m_155(t);
      }
    return(t);
  }
  t = m_155(t);
  return(t);
}
ATerm for_3_0 (ATerm p_116 (ATerm), ATerm q_116 (ATerm), ATerm r_116 (ATerm), ATerm t)
{
  t = p_116(t);
  t = while_not_2_0(q_116, r_116, t);
  return(t);
}
static ATerm r_20 (ATerm t)
{
  ATerm t_155 = NULL;
  t_155 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_155);
  return(t);
}
static ATerm v_20 (ATerm t)
{
  ATerm u_155 = NULL,v_155 = NULL,w_155 = NULL,x_155 = NULL,i_34 = NULL;
  x_155 = t;
  if(match_cons(t, sym__2))
    {
      v_155 = ATgetArgument(t, 0);
      w_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_155);
  u_155 = t;
  t = w_155;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_155, w_155);
  i_34 = t;
  t = SSLsetAnnotations(i_34, u_155);
  return(t);
}
static ATerm a_21 (ATerm t)
{
  ATerm q_156 = NULL,r_156 = NULL,s_156 = NULL,t_156 = NULL,u_156 = NULL;
  q_156 = t;
  if(match_cons(t, sym__2))
    {
      r_156 = ATgetArgument(t, 0);
      s_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_156;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_156 = ATgetFirst((ATermList) t);
      u_156 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_78 = t;
        int x_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_157(r_156, s_156, q_156, t);
            LocalPopChoice(x_78);
          }
        else
          {
            t = w_78;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_156), t_156), u_156);
          }
      }
    }
  else
    {
      t = e_157(r_156, s_156, q_156, t);
    }
  return(t);
}
static ATerm e_157 (ATerm y_155, ATerm z_155, ATerm a_156, ATerm t)
{
  ATerm b_156 = NULL,e_156 = NULL,m_34 = NULL,h_156 = NULL,i_156 = NULL,j_156 = NULL,k_156 = NULL;
  t = SSLgetAnnotations(a_156);
  b_156 = t;
  t = z_155;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_156 = ATgetFirst((ATermList) t);
      k_156 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_156;
  if(match_cons(t, sym__2))
    {
      i_156 = ATgetArgument(t, 0);
      j_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_78 = t;
    int z_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_156;
        if((i_156 != t))
          {
            _fail(t);
          }
        t = k_156;
        LocalPopChoice(z_78);
      }
    else
      {
        t = y_78;
        t = z_155;
        t = l_14(i_156, j_156, k_156, t);
      }
  }
  e_156 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_155, e_156);
  m_34 = t;
  t = SSLsetAnnotations(m_34, b_156);
  return(t);
}
static ATerm c_21 (ATerm t)
{
  ATerm d_157 = NULL;
  if(match_cons(t, sym__2))
    {
      d_157 = ATgetArgument(t, 0);
      if((d_157 != ATgetArgument(t, 1)))
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
  ATerm a_79 = t;
  int b_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(r_20, v_20, a_21, t);
      LocalPopChoice(b_79);
    }
  else
    {
      t = a_79;
      {
        ATerm y_156 = NULL,z_156 = NULL,a_157 = NULL;
        y_156 = t;
        if(match_cons(t, sym__2))
          {
            z_156 = ATgetArgument(t, 0);
            a_157 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_156;
        t = g_14(c_21, z_156, a_157, t);
      }
    }
  return(t);
}
static ATerm e_21 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_21 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL;
  if(match_cons(t, sym__2))
    {
      k_71 = ATgetArgument(t, 0);
      l_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_14(l_21, k_71, l_71, t);
  return(t);
}
static ATerm l_21 (ATerm t)
{
  ATerm m_71 = NULL;
  if(match_cons(t, sym__2))
    {
      m_71 = ATgetArgument(t, 0);
      if((m_71 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm c_22 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_22 (ATerm t)
{
  ATerm a_72 = NULL,b_72 = NULL;
  if(match_cons(t, sym__2))
    {
      a_72 = ATgetArgument(t, 0);
      b_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_14(h_22, a_72, b_72, t);
  return(t);
}
static ATerm h_22 (ATerm t)
{
  ATerm c_72 = NULL;
  if(match_cons(t, sym__2))
    {
      c_72 = ATgetArgument(t, 0);
      if((c_72 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_147 (ATerm), ATerm g_147 (ATerm), ATerm h_147 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm s_157 (ATerm t)
  {
    ATerm c_79 = t;
    int d_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_147(t);
        LocalPopChoice(d_79);
      }
    else
      {
        t = c_79;
        {
          ATerm e_79 = t;
          int f_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_157 = NULL,h_157 = NULL,c_71 = NULL,g_71 = NULL;
              g_157 = t;
              t = g_147(t);
              h_157 = t;
              t = g_157;
              {
                static ATerm d_21 (ATerm t)
                {
                  ATerm j_157 = NULL;
                  t = s_157(t);
                  j_157 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_157, h_157);
                  t = diff_0_0(t);
                  return(t);
                }
                t = h_147(d_21, s_157, e_21, t);
              }
              g_71 = t;
              t = SSL_explode_term(g_71);
              if(match_cons(t, sym__2))
                {
                  ATerm g_79 = ATgetArgument(t, 0);
                  c_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_71;
              t = foldr_3_0(f_21, j_21, _id, t);
              LocalPopChoice(f_79);
            }
          else
            {
              t = e_79;
              {
                ATerm o_71 = NULL,s_71 = NULL;
                s_71 = t;
                t = SSL_explode_term(s_71);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_79 = ATgetArgument(t, 0);
                    o_71 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = o_71;
                t = foldr_3_0(c_22, g_22, s_157, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_157(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm w_116 (ATerm), ATerm t)
{
  static ATerm i_22 (ATerm t)
  {
    t = bottomup_1_0(w_116, t);
    return(t);
  }
  t = SRTS_all(i_22, t);
  t = w_116(t);
  return(t);
}
static ATerm p_14 (ATerm k_63, ATerm l_63, ATerm t)
{
  ATerm t_157 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_63, l_63);
  t = i_15(k_63, l_63, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_157 = ATgetFirst((ATermList) t);
      {
        ATerm i_79 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_157;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm h_158 = NULL,i_158 = NULL;
  h_158 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_79 = t;
    int k_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_72 = NULL;
        t = term_l_79;
        q_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_l_79, h_158);
        t = p_14(q_72, h_158, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm m_79 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_79) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, i_158, (ATerm) ATempty);
        LocalPopChoice(k_79);
      }
    else
      {
        t = j_79;
        {
          ATerm z_72 = NULL;
          t = term_l_79;
          z_72 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_79, h_158);
          t = p_14(z_72, h_158, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm n_79 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_79) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, i_158, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm n_118 (ATerm), ATerm t)
{
  static ATerm l_158 (ATerm t)
  {
    ATerm o_79 = t;
    int p_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_118(t);
        LocalPopChoice(p_79);
      }
    else
      {
        t = o_79;
        t = SRTS_all(l_158, t);
      }
    return(t);
  }
  t = l_158(t);
  return(t);
}
static ATerm q_14 (ATerm r_136 (ATerm), ATerm i_45, ATerm g_45, ATerm t)
{
  ATerm m_158 = NULL,n_158 = NULL,o_158 = NULL,p_158 = NULL,q_158 = NULL,r_158 = NULL,s_158 = NULL,t_158 = NULL;
  p_158 = t;
  t = r_136(t);
  m_158 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_158, i_45, g_45);
  t = j_15(m_158, i_45, g_45, t);
  {
    ATerm r_79 = t;
    int s_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_158 = NULL;
        t = term_t_79;
        u_158 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_158, term_t_79);
        t = i_15(m_158, u_158, t);
        LocalPopChoice(s_79);
      }
    else
      {
        t = r_79;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_158 = ATgetFirst((ATermList) t);
      o_158 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_158, term_t_79, (ATerm) ATinsert(CheckATermList(o_158), (ATerm) ATinsert(CheckATermList(n_158), i_45)));
  t = lookup_table_0_1(m_158, t);
  t_158 = t;
  t = term_t_79;
  q_158 = t;
  t = (ATerm) ATinsert(CheckATermList(o_158), (ATerm) ATinsert(CheckATermList(n_158), i_45));
  r_158 = t;
  t = t_158;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(q_158, r_158, s_158, t);
  t = p_158;
  return(t);
}
static ATerm j_22 (ATerm t)
{
  t = term_l_79;
  return(t);
}
static ATerm l_22 (ATerm t)
{
  t = term_l_79;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm y_158 = NULL,a_159 = NULL,b_159 = NULL,c_159 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      a_159 = ATgetArgument(t, 0);
      b_159 = ATgetArgument(t, 1);
      y_158 = ATgetArgument(t, 2);
      {
        ATerm f_159 = NULL,g_159 = NULL;
        t = b_159;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, a_159);
        f_159 = t;
        t = term_v_79;
        g_159 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_159), term_v_79);
        t = q_14(j_22, f_159, g_159, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, a_159, (ATerm)ATempty, y_158);
      }
    }
  else
    {
      ATerm j_159 = NULL,k_159 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          a_159 = ATgetArgument(t, 0);
          b_159 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_159;
      if(match_cons(t, sym_ConstType_1))
        {
          c_159 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, a_159);
      j_159 = t;
      t = term_x_79;
      k_159 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_159), term_x_79);
      t = q_14(l_22, j_159, k_159, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, a_159, (ATerm) ATmakeAppl(sym_ConstType_1, c_159));
    }
  return(t);
}
static ATerm r_14 (ATerm e_63, ATerm f_63, ATerm t)
{
  ATerm o_159 = NULL,p_159 = NULL;
  p_159 = t;
  {
    ATerm y_79 = t;
    int z_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_63, f_63);
        t = i_15(e_63, f_63, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm a_80 = ATgetFirst((ATermList) t);
            o_159 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(z_79);
        {
          ATerm q_159 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, e_63, f_63, o_159);
          t = lookup_table_0_1(e_63, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_159 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_15(f_63, o_159, q_159, t);
          t = (ATerm) ATmakeAppl(sym__3, e_63, f_63, o_159);
        }
      }
    else
      {
        t = y_79;
        {
          ATerm s_159 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, e_63, f_63);
          t = lookup_table_0_1(e_63, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_159 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_15(f_63, s_159, t);
          t = (ATerm) ATmakeAppl(sym__2, e_63, f_63);
        }
      }
  }
  t = p_159;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_136 (ATerm), ATerm t)
{
  ATerm u_159 = NULL,v_159 = NULL,w_159 = NULL,x_159 = NULL,y_159 = NULL,z_159 = NULL,a_160 = NULL;
  x_159 = t;
  t = o_136(t);
  w_159 = t;
  {
    ATerm b_80 = t;
    int d_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_160 = NULL;
        t = term_t_79;
        b_160 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_159, term_t_79);
        t = i_15(w_159, b_160, t);
        LocalPopChoice(d_80);
      }
    else
      {
        t = b_80;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_159 = ATgetFirst((ATermList) t);
      u_159 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_159, term_t_79, u_159);
  t = lookup_table_0_1(w_159, t);
  a_160 = t;
  t = term_t_79;
  y_159 = t;
  t = a_160;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(y_159, u_159, z_159, t);
  t = v_159;
  {
    static ATerm n_22 (ATerm t)
    {
      ATerm c_160 = NULL;
      c_160 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_159, c_160);
      t = r_14(w_159, c_160, t);
      return(t);
    }
    t = map_1_0(n_22, t);
  }
  t = x_159;
  return(t);
}
ATerm restore_always_2_0 (ATerm r_115 (ATerm), ATerm s_115 (ATerm), ATerm t)
{
  ATerm e_80 = t;
  int g_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_115(t);
      t = s_115(t);
      LocalPopChoice(g_80);
    }
  else
    {
      t = e_80;
      t = s_115(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_136 (ATerm), ATerm t)
{
  ATerm e_160 = NULL,f_160 = NULL,g_160 = NULL,h_160 = NULL,i_160 = NULL,j_160 = NULL,k_160 = NULL;
  f_160 = t;
  t = n_136(t);
  e_160 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_160, term_t_79);
  {
    ATerm h_80 = t;
    int i_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_160 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm j_80 = ATgetArgument(t, 0);
            ATerm k_80 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_t_79;
        o_160 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_160, term_t_79);
        t = i_15(e_160, o_160, t);
        LocalPopChoice(i_80);
      }
    else
      {
        t = h_80;
        t = (ATerm) ATempty;
      }
  }
  g_160 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_160, term_t_79, (ATerm) ATinsert(CheckATermList(g_160), (ATerm) ATempty));
  t = lookup_table_0_1(e_160, t);
  k_160 = t;
  t = term_t_79;
  h_160 = t;
  t = (ATerm) ATinsert(CheckATermList(g_160), (ATerm) ATempty);
  i_160 = t;
  t = k_160;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(h_160, i_160, j_160, t);
  t = f_160;
  return(t);
}
ATerm scope_2_0 (ATerm p_136 (ATerm), ATerm q_136 (ATerm), ATerm t)
{
  static ATerm q_22 (ATerm t)
  {
    t = end_scope_1_0(p_136, t);
    return(t);
  }
  t = begin_scope_1_0(p_136, t);
  t = restore_always_2_0(q_136, q_22, t);
  return(t);
}
static ATerm t_22 (ATerm t)
{
  t = term_l_79;
  return(t);
}
static ATerm u_22 (ATerm t)
{
  ATerm t_160 = NULL,u_160 = NULL,v_160 = NULL,w_160 = NULL,y_34 = NULL;
  w_160 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_160);
  t_160 = t;
  t = u_160;
  t = map_1_0(v_22, t);
  v_160 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_160);
  y_34 = t;
  t = SSLsetAnnotations(y_34, t_160);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm v_22 (ATerm t)
{
  ATerm j_161 = NULL,k_161 = NULL;
  k_161 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      j_161 = ATgetArgument(t, 0);
      {
        ATerm l_80 = t;
        int p_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_73 = NULL,u_73 = NULL,w_34 = NULL;
            t = SSLgetAnnotations(k_161);
            s_73 = t;
            t = j_161;
            t = map_1_0(w_22, t);
            u_73 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, u_73);
            w_34 = t;
            t = SSLsetAnnotations(w_34, s_73);
            LocalPopChoice(p_80);
          }
        else
          {
            t = l_80;
            t = k_161;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          j_161 = ATgetArgument(t, 0);
          {
            ATerm q_80 = t;
            int r_80 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_74 = NULL,f_74 = NULL,x_34 = NULL;
                t = SSLgetAnnotations(k_161);
                d_74 = t;
                t = j_161;
                t = map_1_0(x_22, t);
                f_74 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, f_74);
                x_34 = t;
                t = SSLsetAnnotations(x_34, d_74);
                LocalPopChoice(r_80);
              }
            else
              {
                t = q_80;
                t = k_161;
              }
          }
        }
      else
        {
          t = k_161;
        }
    }
  return(t);
}
static ATerm w_22 (ATerm t)
{
  ATerm s_80 = t;
  int t_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(t_80);
    }
  else
    {
      t = s_80;
    }
  return(t);
}
static ATerm x_22 (ATerm t)
{
  ATerm u_80 = t;
  int v_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(v_80);
    }
  else
    {
      t = u_80;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(t_22, u_22, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_161 = NULL,s_161 = NULL,t_161 = NULL;
  r_161 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_161;
    }
  else
    {
      static ATerm h_23 (ATerm t)
      {
        t = not_null(t_161);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_161 = ATgetFirst((ATermList) t);
          if(((t_161 != NULL) && (t_161 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_161 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_161;
      t = at_end_1_0(h_23, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm k_131 (ATerm), ATerm t)
{
  ATerm i_162 = NULL,j_162 = NULL,k_162 = NULL;
  i_162 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_162;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_162 = ATgetFirst((ATermList) t);
          k_162 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm z_80 = t;
        int a_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_74 = NULL,s_74 = NULL,u_74 = NULL,j_35 = NULL;
            t = SSLgetAnnotations(i_162);
            p_74 = t;
            t = j_162;
            t = k_131(t);
            s_74 = t;
            t = k_162;
            t = filter_1_0(k_131, t);
            u_74 = t;
            t = (ATerm) ATinsert(CheckATermList(u_74), s_74);
            j_35 = t;
            t = SSLsetAnnotations(j_35, p_74);
            LocalPopChoice(a_81);
          }
        else
          {
            t = z_80;
            t = k_162;
            t = filter_1_0(k_131, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_123 (ATerm), ATerm t)
{
  static ATerm a_163 (ATerm t)
  {
    ATerm x_162 = NULL,y_162 = NULL,z_162 = NULL;
    z_162 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_162 = ATgetFirst((ATermList) t);
        y_162 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_75 = NULL,g_75 = NULL,p_35 = NULL;
          t = SSLgetAnnotations(z_162);
          d_75 = t;
          t = y_162;
          t = a_163(t);
          g_75 = t;
          t = (ATerm) ATinsert(CheckATermList(g_75), x_162);
          p_35 = t;
          t = SSLsetAnnotations(p_35, d_75);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_162;
        t = y_123(t);
      }
    return(t);
  }
  t = a_163(t);
  return(t);
}
static ATerm m_163 (ATerm e_163, ATerm t)
{
  ATerm f_163 = NULL;
  t = SSL_explode_term(e_163);
  if(match_cons(t, sym__2))
    {
      ATerm b_81 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_81) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_163 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_163;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_163 = NULL,i_163 = NULL,j_163 = NULL;
  j_163 = t;
  if(match_cons(t, sym__2))
    {
      h_163 = ATgetArgument(t, 0);
      i_163 = ATgetArgument(t, 1);
      {
        ATerm c_81 = t;
        int d_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm i_23 (ATerm t)
            {
              t = i_163;
              return(t);
            }
            t = h_163;
            t = at_end_1_0(i_23, t);
            LocalPopChoice(d_81);
          }
        else
          {
            t = c_81;
            t = m_163(j_163, t);
          }
      }
    }
  else
    {
      t = m_163(j_163, t);
    }
  return(t);
}
static ATerm u_14 (ATerm o_22, ATerm k_22, ATerm t)
{
  ATerm n_163 = NULL,o_163 = NULL;
  static ATerm j_23 (ATerm t)
  {
    ATerm p_163 = NULL,q_163 = NULL,r_163 = NULL,s_163 = NULL;
    s_163 = t;
    t = SSL_explode_term(s_163);
    if(match_cons(t, sym__2))
      {
        if(((n_163 != NULL) && (n_163 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          n_163 = ATgetArgument(t, 0);
        {
          ATerm e_81 = ATgetArgument(t, 1);
          if(((ATgetType(e_81) == AT_LIST) && !(ATisEmpty(e_81))))
            {
              p_163 = ATgetFirst((ATermList) e_81);
              {
                ATerm f_81 = (ATerm) ATgetNext((ATermList) e_81);
                if(((ATgetType(f_81) != AT_LIST) || !(ATisEmpty(f_81))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, p_163, not_null(o_163));
    t = conc_0_0(t);
    q_163 = t;
    t = (ATerm) ATinsert(ATempty, q_163);
    r_163 = t;
    t = SSL_mkterm(n_163, r_163);
    return(t);
  }
  t = SSL_explode_term(o_22);
  if(match_cons(t, sym__2))
    {
      if(((n_163 != NULL) && (n_163 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_163 = ATgetArgument(t, 0);
      {
        ATerm g_81 = ATgetArgument(t, 1);
        if(((ATgetType(g_81) == AT_LIST) && !(ATisEmpty(g_81))))
          {
            if(((o_163 != NULL) && (o_163 != ATgetFirst((ATermList) g_81))))
              _fail(ATgetFirst((ATermList) g_81));
            else
              o_163 = ATgetFirst((ATermList) g_81);
            {
              ATerm h_81 = (ATerm) ATgetNext((ATermList) g_81);
              if(((ATgetType(h_81) != AT_LIST) || !(ATisEmpty(h_81))))
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
  t = fetch_1_0(j_23, t);
  return(t);
}
ATerm foldr_3_0 (ATerm i_130 (ATerm), ATerm j_130 (ATerm), ATerm k_130 (ATerm), ATerm t)
{
  ATerm u_163 = NULL,v_163 = NULL,w_163 = NULL;
  u_163 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_163;
      t = i_130(t);
    }
  else
    {
      ATerm z_163 = NULL,a_164 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_163 = ATgetFirst((ATermList) t);
          w_163 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_163;
      t = k_130(t);
      z_163 = t;
      t = w_163;
      t = foldr_3_0(i_130, j_130, k_130, t);
      a_164 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_163, a_164);
      t = j_130(t);
    }
  return(t);
}
static ATerm k_23 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_81), term_j_81), term_i_81);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  ATerm h_164 = NULL,i_164 = NULL;
  if(match_cons(t, sym__2))
    {
      h_164 = ATgetArgument(t, 0);
      i_164 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_14(h_164, i_164, t);
  return(t);
}
static ATerm m_23 (ATerm t)
{
  ATerm j_164 = NULL,k_164 = NULL;
  k_164 = t;
  if(match_cons(t, sym_Signature_1))
    {
      j_164 = ATgetArgument(t, 0);
      {
        ATerm l_81 = t;
        int m_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_164 = NULL;
            t = j_164;
            t = filter_1_0(u_23, t);
            t = concat_0_0(t);
            m_164 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, m_164);
            LocalPopChoice(m_81);
          }
        else
          {
            t = l_81;
            t = k_164;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          j_164 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, j_164);
        }
      else
        {
          t = k_164;
        }
    }
  return(t);
}
static ATerm u_23 (ATerm t)
{
  ATerm n_164 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      n_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_164;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm d_164 = NULL,e_164 = NULL,f_164 = NULL,g_164 = NULL,s_35 = NULL;
  g_164 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_164);
  d_164 = t;
  t = e_164;
  t = foldr_3_0(k_23, l_23, m_23, t);
  f_164 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_164);
  s_35 = t;
  t = SSLsetAnnotations(s_35, d_164);
  return(t);
}
static ATerm v_23 (ATerm t)
{
  ATerm n_81 = t;
  int o_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(o_81);
    }
  else
    {
      t = n_81;
    }
  return(t);
}
static ATerm a_24 (ATerm t)
{
  ATerm j_165 = NULL,k_165 = NULL,l_165 = NULL,m_165 = NULL,n_165 = NULL;
  n_165 = t;
  if(match_cons(t, sym_LRule_1))
    {
      m_165 = ATgetArgument(t, 0);
      t = m_165;
      if(match_cons(t, sym_Rule_3))
        {
          j_165 = ATgetArgument(t, 0);
          k_165 = ATgetArgument(t, 1);
          l_165 = ATgetArgument(t, 2);
          {
            ATerm p_81 = t;
            int q_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_165 = NULL;
                t = j_165;
                t = free_vars_3_0(c_24, o_24, tboundin_3_0, t);
                r_165 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, r_165, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, j_165, k_165, l_165)));
                LocalPopChoice(q_81);
              }
            else
              {
                t = p_81;
                t = n_165;
              }
          }
        }
      else
        {
          t = n_165;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          m_165 = ATgetArgument(t, 0);
          {
            ATerm r_81 = t;
            int s_81 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_166 = NULL;
                t = m_165;
                t = free_vars_3_0(v_24, w_24, tboundin_3_0, t);
                p_166 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, p_166, m_165);
                LocalPopChoice(s_81);
              }
            else
              {
                t = r_81;
                t = n_165;
              }
          }
        }
      else
        {
          t = n_165;
        }
    }
  return(t);
}
static ATerm c_24 (ATerm t)
{
  ATerm s_165 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_165);
  return(t);
}
static ATerm o_24 (ATerm t)
{
  ATerm t_81 = t;
  int u_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_81);
    }
  else
    {
      t = t_81;
      {
        ATerm v_81 = t;
        int w_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_81);
          }
        else
          {
            t = v_81;
            {
              ATerm x_81 = t;
              int y_81 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_165 = NULL,v_165 = NULL,w_165 = NULL,x_165 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_165 = ATgetArgument(t, 0);
                      v_165 = ATgetArgument(t, 1);
                      w_165 = ATgetArgument(t, 2);
                      x_165 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_165;
                  t = map_1_0(p_24, t);
                  LocalPopChoice(y_81);
                }
              else
                {
                  t = x_81;
                  {
                    ATerm z_81 = t;
                    int a_82 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(a_82);
                      }
                    else
                      {
                        t = z_81;
                        t = dynrule_targs_1_0(q_24, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_24 (ATerm t)
{
  ATerm e_166 = NULL;
  ATerm b_82 = t;
  int c_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_166 = ATgetArgument(t, 0);
          {
            ATerm d_82 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_82);
      t = e_166;
    }
  else
    {
      t = b_82;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_166 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_166;
    }
  return(t);
}
static ATerm q_24 (ATerm t)
{
  t = map_1_0(u_24, t);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  ATerm j_166 = NULL;
  ATerm e_82 = t;
  int f_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_166 = ATgetArgument(t, 0);
          {
            ATerm g_82 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_82);
      t = j_166;
    }
  else
    {
      t = e_82;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_166 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_166;
    }
  return(t);
}
static ATerm v_24 (ATerm t)
{
  ATerm q_166 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_166);
  return(t);
}
static ATerm w_24 (ATerm t)
{
  ATerm h_82 = t;
  int i_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_82);
    }
  else
    {
      t = h_82;
      {
        ATerm j_82 = t;
        int k_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_82);
          }
        else
          {
            t = j_82;
            {
              ATerm l_82 = t;
              int m_82 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_166 = NULL,t_166 = NULL,u_166 = NULL,v_166 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_166 = ATgetArgument(t, 0);
                      t_166 = ATgetArgument(t, 1);
                      u_166 = ATgetArgument(t, 2);
                      v_166 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_166;
                  t = map_1_0(a_25, t);
                  LocalPopChoice(m_82);
                }
              else
                {
                  t = l_82;
                  {
                    ATerm n_82 = t;
                    int o_82 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_82);
                      }
                    else
                      {
                        t = n_82;
                        t = dynrule_targs_1_0(b_25, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_25 (ATerm t)
{
  ATerm c_167 = NULL;
  ATerm p_82 = t;
  int q_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_167 = ATgetArgument(t, 0);
          {
            ATerm r_82 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_82);
      t = c_167;
    }
  else
    {
      t = p_82;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_167 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_167;
    }
  return(t);
}
static ATerm b_25 (ATerm t)
{
  t = map_1_0(f_25, t);
  return(t);
}
static ATerm f_25 (ATerm t)
{
  ATerm h_167 = NULL;
  ATerm s_82 = t;
  int t_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_167 = ATgetArgument(t, 0);
          {
            ATerm u_82 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_82);
      t = h_167;
    }
  else
    {
      t = s_82;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_167 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_167;
    }
  return(t);
}
static ATerm g_25 (ATerm t)
{
  ATerm v_82 = t;
  int w_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(w_82);
    }
  else
    {
      t = v_82;
    }
  return(t);
}
static ATerm h_25 (ATerm t)
{
  ATerm r_167 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      r_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, r_167)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm d_165 = NULL,e_165 = NULL,f_165 = NULL,g_165 = NULL,u_35 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(v_23, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(a_24, t);
  {
    ATerm x_82 = t;
    int y_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_167 = NULL,n_167 = NULL,o_167 = NULL;
        m_167 = t;
        t = term_z_82;
        n_167 = t;
        t = term_a_83;
        o_167 = t;
        t = term_b_83;
        t = i_15(n_167, o_167, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = m_167;
        LocalPopChoice(y_82);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = x_82;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(g_25, t);
  g_165 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_165);
  d_165 = t;
  t = e_165;
  t = fetch_1_0(h_25, t);
  f_165 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_165);
  u_35 = t;
  t = SSLsetAnnotations(u_35, d_165);
  return(t);
}
static ATerm v_14 (ATerm y_40, ATerm z_40, ATerm t)
{
  ATerm s_167 = NULL;
  t = SSL_fputc(y_40, z_40);
  s_167 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_167);
  return(t);
}
static ATerm w_14 (ATerm c_25, ATerm d_25, ATerm t)
{
  ATerm t_167 = NULL;
  t = SSL_write_term_to_stream_text(c_25, d_25);
  t_167 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_167);
  return(t);
}
static ATerm y_14 (ATerm y_122 (ATerm), ATerm y_189, ATerm i_25, ATerm t)
{
  ATerm u_167 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, y_189, term_c_83);
  t = c_15(t);
  u_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_167, i_25);
  t = y_122(t);
  t = fclose_0_0(t);
  t = i_25;
  return(t);
}
static ATerm x_14 (ATerm y_24, ATerm z_24, ATerm t)
{
  ATerm v_167 = NULL;
  t = SSL_write_term_to_stream_baf(y_24, z_24);
  v_167 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_167);
  return(t);
}
static ATerm j_25 (ATerm t)
{
  ATerm c_168 = NULL,d_168 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_83 = ATgetArgument(t, 0);
      if(match_cons(d_83, sym_Stream_1))
        {
          c_168 = ATgetArgument(d_83, 0);
        }
      else
        _fail(t);
      d_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_14(c_168, d_168, t);
  return(t);
}
static ATerm p_25 (ATerm t)
{
  ATerm e_168 = NULL,f_168 = NULL,g_168 = NULL,h_168 = NULL,i_168 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_83 = ATgetArgument(t, 0);
      if(match_cons(e_83, sym_Stream_1))
        {
          h_168 = ATgetArgument(e_83, 0);
        }
      else
        _fail(t);
      i_168 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14(h_168, i_168, t);
  e_168 = t;
  t = term_e_35;
  f_168 = t;
  t = e_168;
  if(match_cons(t, sym_Stream_1))
    {
      g_168 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_35, e_168);
  t = v_14(f_168, g_168, t);
  return(t);
}
ATerm output_1_0 (ATerm z_142 (ATerm), ATerm t)
{
  ATerm w_167 = NULL,x_167 = NULL;
  t = z_142(t);
  x_167 = t;
  {
    ATerm f_83 = t;
    int g_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_167 = NULL,z_167 = NULL;
        t = term_z_82;
        y_167 = t;
        t = term_h_83;
        z_167 = t;
        t = term_i_83;
        t = i_15(y_167, z_167, t);
        LocalPopChoice(g_83);
      }
    else
      {
        t = f_83;
        t = term_j_83;
      }
  }
  w_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_167, x_167);
  {
    ATerm k_83 = t;
    int l_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_168 = NULL,b_168 = NULL;
        t = term_z_82;
        a_168 = t;
        t = term_m_83;
        b_168 = t;
        t = term_n_83;
        t = i_15(a_168, b_168, t);
        t = (ATerm) ATmakeAppl(sym__2, w_167, x_167);
        LocalPopChoice(l_83);
        if(match_cons(t, sym__2))
          {
            ATerm o_83 = ATgetArgument(t, 0);
            ATerm p_83 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_14(j_25, w_167, x_167, t);
      }
    else
      {
        t = k_83;
        if(match_cons(t, sym__2))
          {
            ATerm q_83 = ATgetArgument(t, 0);
            ATerm r_83 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_14(p_25, w_167, x_167, t);
      }
  }
  return(t);
}
static ATerm w_168 (ATerm q_168, ATerm t)
{
  t = SSL_fclose(q_168);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_168 = NULL,u_168 = NULL;
  u_168 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_168 = ATgetArgument(t, 0);
      {
        ATerm s_83 = t;
        int t_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_168);
            LocalPopChoice(t_83);
          }
        else
          {
            t = s_83;
            t = w_168(u_168, t);
          }
      }
    }
  else
    {
      t = w_168(u_168, t);
    }
  return(t);
}
static ATerm z_14 (ATerm e_25, ATerm t)
{
  t = SSL_read_term_from_stream(e_25);
  return(t);
}
static ATerm a_15 (ATerm r_39, ATerm s_39, ATerm t)
{
  t = SSL_strcat(r_39, s_39);
  return(t);
}
static ATerm b_15 (ATerm a_41, ATerm b_41, ATerm t)
{
  ATerm x_168 = NULL;
  t = SSL_fopen(a_41, b_41);
  x_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_168);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_168 = NULL;
  t = SSL_stdin_stream();
  y_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_168);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_168 = NULL;
  t = SSL_stdout_stream();
  z_168 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_168);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_169 = NULL;
  t = SSL_stderr_stream();
  a_169 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_169);
  return(t);
}
static ATerm h_170 (ATerm g_169, ATerm t)
{
  ATerm h_169 = NULL;
  t = SSL_explode_term(g_169);
  if(match_cons(t, sym__2))
    {
      ATerm u_83 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_83) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_83 = ATgetArgument(t, 1);
        if(((ATgetType(v_83) == AT_LIST) && !(ATisEmpty(v_83))))
          {
            h_169 = ATgetFirst((ATermList) v_83);
            {
              ATerm w_83 = (ATerm) ATgetNext((ATermList) v_83);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_169;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_169;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_169;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_169;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_170 (ATerm k_169, ATerm l_169, ATerm m_169, ATerm t)
{
  ATerm n_169 = NULL,o_169 = NULL,p_169 = NULL,s_169 = NULL,y_35 = NULL;
  t = SSLgetAnnotations(m_169);
  p_169 = t;
  t = k_169;
  if(match_cons(t, sym_Path_1))
    {
      s_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_169, l_169);
  y_35 = t;
  t = SSLsetAnnotations(y_35, p_169);
  if(match_cons(t, sym__2))
    {
      n_169 = ATgetArgument(t, 0);
      o_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_15(n_169, o_169, t);
  return(t);
}
static ATerm j_170 (ATerm u_169, ATerm v_169, ATerm w_169, ATerm t)
{
  ATerm x_169 = NULL,y_169 = NULL,z_169 = NULL,c_170 = NULL,a_36 = NULL;
  t = SSLgetAnnotations(w_169);
  z_169 = t;
  t = SSL_is_string(u_169);
  c_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_170, v_169);
  a_36 = t;
  t = SSLsetAnnotations(a_36, z_169);
  if(match_cons(t, sym__2))
    {
      x_169 = ATgetArgument(t, 0);
      y_169 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_15(x_169, y_169, t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm e_170 = NULL,f_170 = NULL,g_170 = NULL;
  e_170 = t;
  if(match_cons(t, sym__2))
    {
      f_170 = ATgetArgument(t, 0);
      g_170 = ATgetArgument(t, 1);
      {
        ATerm x_83 = t;
        int y_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_170(e_170, t);
            LocalPopChoice(y_83);
          }
        else
          {
            t = x_83;
            {
              ATerm z_83 = t;
              int a_84 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_170(f_170, g_170, e_170, t);
                  LocalPopChoice(a_84);
                }
              else
                {
                  t = z_83;
                  t = j_170(f_170, g_170, e_170, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_170(e_170, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_170 = NULL,m_170 = NULL,n_170 = NULL,s_170 = NULL;
  s_170 = t;
  {
    ATerm b_84 = t;
    int c_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_170, term_f_84);
        t = c_15(t);
        LocalPopChoice(c_84);
      }
    else
      {
        t = b_84;
        {
          ATerm w_75 = NULL,x_75 = NULL;
          t = term_h_84;
          x_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_84, s_170);
          t = a_15(x_75, s_170, t);
          w_75 = t;
          t = SSL_perror(w_75);
          _fail(t);
        }
      }
  }
  m_170 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_14(n_170, t);
  l_170 = t;
  t = m_170;
  t = fclose_0_0(t);
  t = l_170;
  return(t);
}
ATerm input_1_0 (ATerm a_143 (ATerm), ATerm t)
{
  ATerm i_84 = t;
  int j_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_170 = NULL,w_170 = NULL;
      t = term_z_82;
      v_170 = t;
      t = term_k_84;
      w_170 = t;
      t = term_l_84;
      t = i_15(v_170, w_170, t);
      LocalPopChoice(j_84);
    }
  else
    {
      t = i_84;
      t = term_m_84;
    }
  t = ReadFromFile_0_0(t);
  t = a_143(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_170 = NULL,y_170 = NULL,z_170 = NULL,a_171 = NULL,b_171 = NULL;
  x_170 = t;
  t = term_o_84;
  t = whoami_0_0(t);
  y_170 = t;
  t = term_l_45;
  a_171 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_84), y_170), term_p_84);
  b_171 = t;
  t = SSL_printnl(a_171, b_171);
  t = term_n_45;
  z_170 = t;
  t = SSL_exit(z_170);
  t = x_170;
  return(t);
}
static ATerm t_25 (ATerm t)
{
  ATerm d_171 = NULL;
  d_171 = t;
  if(match_string(t, "-k"))
    {
      t = d_171;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_171;
    }
  return(t);
}
static ATerm u_25 (ATerm t)
{
  ATerm e_171 = NULL,f_171 = NULL,g_171 = NULL;
  e_171 = t;
  t = SSL_string_to_int(e_171);
  f_171 = t;
  t = term_t_84;
  g_171 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_84, f_171);
  t = l_15(g_171, f_171, t);
  t = e_171;
  return(t);
}
static ATerm v_25 (ATerm t)
{
  t = term_u_84;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(t_25, u_25, v_25, t);
  return(t);
}
static ATerm w_25 (ATerm t)
{
  ATerm i_171 = NULL;
  i_171 = t;
  if(match_string(t, "-S"))
    {
      t = i_171;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_171;
    }
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm j_171 = NULL,k_171 = NULL;
  t = term_v_84;
  j_171 = t;
  t = term_y_47;
  k_171 = t;
  t = term_w_84;
  t = l_15(j_171, k_171, t);
  t = term_b_85;
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = term_d_85;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_26 (ATerm t)
{
  ATerm l_171 = NULL,m_171 = NULL,n_171 = NULL;
  l_171 = t;
  t = SSL_string_to_int(l_171);
  m_171 = t;
  t = term_v_84;
  n_171 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_84, m_171);
  t = l_15(n_171, m_171, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_171);
  return(t);
}
static ATerm c_26 (ATerm t)
{
  t = term_e_85;
  return(t);
}
static ATerm d_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_26 (ATerm t)
{
  ATerm o_171 = NULL,p_171 = NULL;
  t = term_h_85;
  o_171 = t;
  t = term_o_84;
  p_171 = t;
  t = term_i_85;
  t = l_15(o_171, p_171, t);
  t = term_j_85;
  return(t);
}
static ATerm h_26 (ATerm t)
{
  t = term_k_85;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_85 = t;
  int m_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_25, x_25, z_25, t);
      LocalPopChoice(m_85);
    }
  else
    {
      t = l_85;
      {
        ATerm n_85 = t;
        int o_85 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_26, b_26, c_26, t);
            LocalPopChoice(o_85);
          }
        else
          {
            t = n_85;
            t = Option_3_0(d_26, f_26, h_26, t);
          }
      }
    }
  return(t);
}
static ATerm l_15 (ATerm e_58, ATerm f_58, ATerm t)
{
  ATerm q_171 = NULL,r_171 = NULL;
  t = term_z_82;
  q_171 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_82, e_58, f_58);
  t = lookup_table_0_1(q_171, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_171 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(e_58, f_58, r_171, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_82, e_58, f_58);
  return(t);
}
ATerm Option_3_0 (ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm t)
{
  ATerm v_171 = NULL,w_171 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_171 = NULL,y_171 = NULL,z_171 = NULL;
      t = term_o_84;
      t = f_0(t);
      x_171 = t;
      t = term_p_85;
      y_171 = t;
      t = term_q_85;
      z_171 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_85, term_q_85, x_171);
      t = j_15(y_171, z_171, x_171, t);
      _fail(t);
    }
  else
    {
      ATerm c_172 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_171 = ATgetFirst((ATermList) t);
          w_171 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_171;
      t = b_0(t);
      t = term_o_84;
      t = d_0(t);
      c_172 = t;
      t = (ATerm) ATinsert(CheckATermList(w_171), c_172);
    }
  return(t);
}
static ATerm j_26 (ATerm t)
{
  ATerm e_172 = NULL;
  e_172 = t;
  if(match_string(t, "-o"))
    {
      t = e_172;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_172;
    }
  return(t);
}
static ATerm m_26 (ATerm t)
{
  ATerm f_172 = NULL,g_172 = NULL;
  f_172 = t;
  t = term_h_83;
  g_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_83, f_172);
  t = l_15(g_172, f_172, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_172);
  return(t);
}
static ATerm n_26 (ATerm t)
{
  t = term_r_85;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_26, m_26, n_26, t);
  return(t);
}
static ATerm o_26 (ATerm t)
{
  ATerm i_172 = NULL;
  i_172 = t;
  if(match_string(t, "-i"))
    {
      t = i_172;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_172;
    }
  return(t);
}
static ATerm x_26 (ATerm t)
{
  ATerm j_172 = NULL,k_172 = NULL;
  j_172 = t;
  t = term_k_84;
  k_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_84, j_172);
  t = l_15(k_172, j_172, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_172);
  return(t);
}
static ATerm y_26 (ATerm t)
{
  t = term_s_85;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_26, x_26, y_26, t);
  return(t);
}
static ATerm j_15 (ATerm z_62, ATerm a_63, ATerm y_62, ATerm t)
{
  ATerm m_172 = NULL,n_172 = NULL,o_172 = NULL,p_172 = NULL,q_172 = NULL;
  m_172 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_62, a_63);
  {
    ATerm t_85 = t;
    int u_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_85 = ATgetArgument(t, 0);
            ATerm w_85 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, z_62, a_63);
        t = i_15(z_62, a_63, t);
        LocalPopChoice(u_85);
      }
    else
      {
        t = t_85;
        t = (ATerm) ATempty;
      }
  }
  n_172 = t;
  t = (ATerm) ATmakeAppl(sym__3, z_62, a_63, (ATerm) ATinsert(CheckATermList(n_172), y_62));
  t = lookup_table_0_1(z_62, t);
  q_172 = t;
  t = (ATerm) ATinsert(CheckATermList(n_172), y_62);
  o_172 = t;
  t = q_172;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_172 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(a_63, o_172, p_172, t);
  t = m_172;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm x_172 = NULL,y_172 = NULL,z_172 = NULL,a_173 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_173 = NULL,c_173 = NULL,d_173 = NULL;
      t = term_o_84;
      t = m_0(t);
      b_173 = t;
      t = term_p_85;
      c_173 = t;
      t = term_q_85;
      d_173 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_85, term_q_85, b_173);
      t = j_15(c_173, d_173, b_173, t);
      _fail(t);
    }
  else
    {
      ATerm h_173 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_172 = ATgetFirst((ATermList) t);
          y_172 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_172;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_172 = ATgetFirst((ATermList) t);
          a_173 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_172;
      t = j_0(t);
      t = z_172;
      t = l_0(t);
      h_173 = t;
      t = (ATerm) ATinsert(CheckATermList(a_173), h_173);
    }
  return(t);
}
static ATerm b_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_27 (ATerm t)
{
  ATerm j_173 = NULL,k_173 = NULL;
  j_173 = t;
  if(match_string(t, "old"))
    {
      t = j_173;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = j_173;
    }
  t = term_a_83;
  k_173 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_83, j_173);
  t = l_15(k_173, j_173, t);
  t = term_o_84;
  return(t);
}
static ATerm g_27 (ATerm t)
{
  t = term_x_85;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_27, c_27, g_27, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_173 = NULL,n_173 = NULL,o_173 = NULL,p_173 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_84;
  t = whoami_0_0(t);
  m_173 = t;
  t = term_l_45;
  o_173 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_85), m_173);
  p_173 = t;
  t = SSL_printnl(o_173, p_173);
  t = term_n_45;
  n_173 = t;
  t = SSL_exit(n_173);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_173 = NULL,r_173 = NULL;
  t = term_z_82;
  q_173 = t;
  t = term_z_85;
  r_173 = t;
  t = term_a_86;
  t = i_15(q_173, r_173, t);
  return(t);
}
static ATerm d_15 (ATerm u_43, ATerm v_43, ATerm t)
{
  ATerm b_86 = t;
  int c_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(u_43, v_43);
      LocalPopChoice(c_86);
    }
  else
    {
      t = b_86;
      t = SSL_addr(u_43, v_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_130 (ATerm), ATerm h_130 (ATerm), ATerm t)
{
  ATerm t_173 = NULL,u_173 = NULL,v_173 = NULL;
  t_173 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_173;
      t = g_130(t);
    }
  else
    {
      ATerm y_173 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_173 = ATgetFirst((ATermList) t);
          v_173 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_173;
      t = foldr_2_0(g_130, h_130, t);
      y_173 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_173, y_173);
      t = h_130(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm h_27 (ATerm t)
{
  t = term_y_47;
  return(t);
}
static ATerm i_27 (ATerm t)
{
  ATerm d_76 = NULL,e_76 = NULL;
  if(match_cons(t, sym__2))
    {
      d_76 = ATgetArgument(t, 0);
      e_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_15(d_76, e_76, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_174 = NULL,z_75 = NULL,a_76 = NULL;
  t = times_0_0(t);
  a_76 = t;
  t = SSL_explode_term(a_76);
  if(match_cons(t, sym__2))
    {
      ATerm d_86 = ATgetArgument(t, 0);
      z_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_75;
  t = foldr_2_0(h_27, i_27, t);
  b_174 = t;
  t = SSL_TicksToSeconds(b_174);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_174 = NULL,n_174 = NULL,o_174 = NULL;
  m_174 = t;
  if(match_cons(t, sym__2))
    {
      n_174 = ATgetArgument(t, 0);
      o_174 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_86 = t;
    int f_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_174;
        if((n_174 != t))
          {
            _fail(t);
          }
        t = m_174;
        LocalPopChoice(f_86);
      }
    else
      {
        t = e_86;
        t = (ATerm) ATmakeAppl(sym__2, n_174, o_174);
        {
          ATerm g_86 = t;
          int h_86 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_174, o_174);
              LocalPopChoice(h_86);
            }
          else
            {
              t = g_86;
              t = SSL_gtr(n_174, o_174);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_174, o_174);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_140 (ATerm), ATerm t)
{
  ATerm s_174 = NULL;
  s_174 = t;
  {
    ATerm i_86 = t;
    int j_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_174 = NULL,v_174 = NULL,w_174 = NULL;
        t = term_z_82;
        v_174 = t;
        t = term_v_84;
        w_174 = t;
        t = term_k_86;
        t = i_15(v_174, w_174, t);
        u_174 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_174, term_n_45);
        t = geq_0_0(t);
        t = s_174;
        t = a_140(t);
        LocalPopChoice(j_86);
      }
    else
      {
        t = i_86;
        t = s_174;
      }
  }
  return(t);
}
static ATerm o_27 (ATerm t)
{
  ATerm y_174 = NULL,z_174 = NULL,b_175 = NULL,c_175 = NULL;
  t = run_time_0_0(t);
  y_174 = t;
  t = term_o_84;
  t = whoami_0_0(t);
  z_174 = t;
  t = term_l_45;
  b_175 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_86), y_174), term_l_86), z_174);
  c_175 = t;
  t = SSL_printnl(b_175, c_175);
  t = (ATerm) ATmakeAppl(sym__2, term_l_45, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_86), y_174), term_l_86), z_174));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_27, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_175 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_47;
  d_175 = t;
  t = SSL_exit(d_175);
  return(t);
}
static ATerm s_27 (ATerm t)
{
  ATerm n_175 = NULL,o_175 = NULL;
  o_175 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_175;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_175 = ATgetArgument(t, 0);
          {
            ATerm z_76 = NULL,l_36 = NULL;
            t = SSLgetAnnotations(o_175);
            z_76 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_175);
            l_36 = t;
            t = SSLsetAnnotations(l_36, z_76);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_175;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_142 (ATerm), ATerm t)
{
  ATerm n_86 = t;
  int o_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_175 = NULL,h_175 = NULL;
      t = term_z_82;
      g_175 = t;
      t = term_p_86;
      h_175 = t;
      t = term_q_86;
      t = i_15(g_175, h_175, t);
      LocalPopChoice(o_86);
    }
  else
    {
      t = n_86;
      t = fetch_1_0(s_27, t);
    }
  t = q_142(t);
  return(t);
}
static ATerm m_15 (ATerm e_67, ATerm f_67, ATerm g_67, ATerm t)
{
  ATerm q_175 = NULL;
  t = SSL_hashtable_put(g_67, e_67, f_67);
  q_175 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_175);
  return(t);
}
ATerm lookup_table_0_1 (ATerm l_64, ATerm t)
{
  ATerm z_175 = NULL;
  t = table_hashtable_0_0(t);
  z_175 = t;
  {
    ATerm r_86 = t;
    int s_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_77 = NULL;
        t = z_175;
        if(match_cons(t, sym_Hashtable_1))
          {
            f_77 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_15(l_64, f_77, t);
        LocalPopChoice(s_86);
      }
    else
      {
        t = r_86;
        {
          ATerm q_77 = NULL;
          t = l_64;
          t = table_create_0_0(t);
          t = z_175;
          if(match_cons(t, sym_Hashtable_1))
            {
              q_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_15(l_64, q_77, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_67, ATerm n_67, ATerm t)
{
  ATerm c_176 = NULL;
  t = SSL_hashtable_create(m_67, n_67);
  c_176 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_176);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_176 = NULL,e_176 = NULL,f_176 = NULL,h_176 = NULL,i_176 = NULL;
  d_176 = t;
  t = term_t_86;
  h_176 = t;
  t = term_u_86;
  i_176 = t;
  t = d_176;
  t = new_hashtable_0_2(h_176, i_176, t);
  e_176 = t;
  t = d_176;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_176 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(d_176, e_176, f_176, t);
  t = d_176;
  return(t);
}
static ATerm f_15 (ATerm j_67, ATerm k_67, ATerm t)
{
  ATerm j_176 = NULL;
  t = SSL_hashtable_remove(k_67, j_67);
  j_176 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_176);
  return(t);
}
static ATerm g_15 (ATerm o_67, ATerm t)
{
  ATerm k_176 = NULL;
  t = SSL_hashtable_destroy(o_67);
  k_176 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_176);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm l_176 = NULL;
  t = SSL_table_hashtable();
  l_176 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_176);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_176 = NULL,n_176 = NULL,o_176 = NULL,p_176 = NULL;
  m_176 = t;
  t = table_hashtable_0_0(t);
  n_176 = t;
  t = lookup_table_0_1(m_176, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_176 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(p_176, t);
  t = n_176;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_176 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_15(m_176, o_176, t);
  t = m_176;
  return(t);
}
ATerm map_1_0 (ATerm h_123 (ATerm), ATerm t)
{
  static ATerm e_177 (ATerm t)
  {
    ATerm b_177 = NULL,c_177 = NULL,d_177 = NULL;
    b_177 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_177;
      }
    else
      {
        ATerm d_78 = NULL,i_78 = NULL,j_78 = NULL,n_36 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_177 = ATgetFirst((ATermList) t);
            d_177 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_177);
        d_78 = t;
        t = c_177;
        t = h_123(t);
        i_78 = t;
        t = d_177;
        t = e_177(t);
        j_78 = t;
        t = (ATerm) ATinsert(CheckATermList(j_78), i_78);
        n_36 = t;
        t = SSLsetAnnotations(n_36, d_78);
      }
    return(t);
  }
  t = e_177(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm h_177 = NULL,i_177 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_177 = ATgetFirst((ATermList) t);
      i_177 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_177 = NULL,o_177 = NULL;
        static ATerm t_27 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_177)), not_null(o_177));
          return(t);
        }
        t = i_177;
        t = h_0(t);
        if(((n_177 != NULL) && (n_177 != t)))
          _fail(t);
        else
          n_177 = t;
        t = h_177;
        t = g_0(t);
        if(((o_177 != NULL) && (o_177 != t)))
          _fail(t);
        else
          o_177 = t;
        t = i_177;
        t = reverse_acc_2_0(g_0, t_27, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_84;
      t = h_0(t);
    }
  return(t);
}
static ATerm u_27 (ATerm t)
{
  ATerm u_177 = NULL,v_177 = NULL,w_177 = NULL,p_36 = NULL;
  w_177 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_177 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_177);
  u_177 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_177);
  p_36 = t;
  t = SSLsetAnnotations(p_36, u_177);
  return(t);
}
static ATerm v_27 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_27 (ATerm t)
{
  ATerm y_177 = NULL;
  y_177 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_177), term_v_86);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_177 = NULL,r_177 = NULL;
  ATerm w_86 = t;
  int x_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_177 = NULL,t_177 = NULL;
      t = term_z_82;
      s_177 = t;
      t = term_z_85;
      t_177 = t;
      t = term_a_86;
      t = i_15(s_177, t_177, t);
      LocalPopChoice(x_86);
    }
  else
    {
      t = w_86;
      t = fetch_1_0(u_27, t);
    }
  t = term_y_86;
  t = echo_0_0(t);
  t = term_p_85;
  q_177 = t;
  t = term_q_85;
  r_177 = t;
  t = term_z_86;
  t = i_15(q_177, r_177, t);
  t = reverse_acc_2_0(_id, v_27, t);
  t = map_1_0(w_27, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_123 (ATerm), ATerm t)
{
  static ATerm v_178 (ATerm t)
  {
    ATerm s_178 = NULL,t_178 = NULL,u_178 = NULL;
    s_178 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_178 = ATgetFirst((ATermList) t);
        u_178 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm a_87 = t;
      int b_87 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_78 = NULL,q_79 = NULL,s_36 = NULL;
          t = SSLgetAnnotations(s_178);
          t_78 = t;
          t = t_178;
          t = r_123(t);
          q_79 = t;
          t = (ATerm) ATinsert(CheckATermList(u_178), q_79);
          s_36 = t;
          t = SSLsetAnnotations(s_36, t_78);
          LocalPopChoice(b_87);
        }
      else
        {
          t = a_87;
          {
            ATerm c_80 = NULL,f_80 = NULL,v_36 = NULL;
            t = SSLgetAnnotations(s_178);
            c_80 = t;
            t = u_178;
            t = v_178(t);
            f_80 = t;
            t = (ATerm) ATinsert(CheckATermList(f_80), t_178);
            v_36 = t;
            t = SSLsetAnnotations(v_36, c_80);
          }
        }
    }
    return(t);
  }
  t = v_178(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_178 = NULL,a_179 = NULL,b_179 = NULL;
  z_178 = t;
  {
    ATerm c_87 = t;
    int d_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_178;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_87 = ATgetFirst((ATermList) t);
                ATerm f_87 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_178;
          }
        LocalPopChoice(d_87);
      }
    else
      {
        t = c_87;
        t = (ATerm) ATinsert(ATempty, z_178);
      }
  }
  a_179 = t;
  t = term_j_83;
  b_179 = t;
  t = SSL_printnl(b_179, a_179);
  t = z_178;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_179 = NULL,g_179 = NULL;
  t = term_z_82;
  f_179 = t;
  t = term_z_85;
  g_179 = t;
  t = term_a_86;
  t = i_15(f_179, g_179, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm n_15 (ATerm h_67, ATerm i_67, ATerm t)
{
  t = SSL_hashtable_get(i_67, h_67);
  return(t);
}
static ATerm i_15 (ATerm s_64, ATerm t_64, ATerm t)
{
  ATerm h_179 = NULL;
  t = lookup_table_0_1(s_64, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_15(t_64, h_179, t);
  return(t);
}
static ATerm y_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_28 (ATerm t)
{
  ATerm j_179 = NULL,k_179 = NULL;
  t = term_g_87;
  j_179 = t;
  t = term_o_84;
  k_179 = t;
  t = term_h_87;
  t = l_15(j_179, k_179, t);
  return(t);
}
static ATerm d_28 (ATerm t)
{
  t = term_i_87;
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
  ATerm l_179 = NULL,m_179 = NULL,n_179 = NULL,o_179 = NULL;
  t = term_g_87;
  n_179 = t;
  t = term_o_84;
  o_179 = t;
  t = term_h_87;
  t = l_15(n_179, o_179, t);
  t = term_j_87;
  l_179 = t;
  t = term_o_84;
  m_179 = t;
  t = term_k_87;
  t = l_15(l_179, m_179, t);
  t = term_l_87;
  return(t);
}
static ATerm g_28 (ATerm t)
{
  t = term_m_87;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_87 = t;
  int r_87 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_27, a_28, d_28, t);
      LocalPopChoice(r_87);
    }
  else
    {
      t = o_87;
      t = Option_3_0(e_28, f_28, g_28, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm x_101 (ATerm), ATerm y_101 (ATerm), ATerm t)
{
  ATerm p_179 = NULL,q_179 = NULL,r_179 = NULL,s_179 = NULL,t_179 = NULL,u_179 = NULL,z_36 = NULL;
  u_179 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_179 = ATgetFirst((ATermList) t);
      r_179 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_179);
  p_179 = t;
  t = q_179;
  t = x_101(t);
  s_179 = t;
  t = r_179;
  t = y_101(t);
  t_179 = t;
  t = (ATerm) ATinsert(CheckATermList(t_179), s_179);
  z_36 = t;
  t = SSLsetAnnotations(z_36, p_179);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_144 (ATerm), ATerm t)
{
  ATerm z_179 = NULL,a_180 = NULL,b_180 = NULL,c_180 = NULL,e_180 = NULL,f_180 = NULL,b_37 = NULL;
  z_179 = t;
  {
    ATerm s_87 = t;
    int t_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_87;
        t = t_144(t);
        LocalPopChoice(t_87);
      }
    else
      {
        t = s_87;
      }
  }
  t = z_179;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_180 = ATgetFirst((ATermList) t);
      c_180 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_179);
  a_180 = t;
  t = term_z_85;
  f_180 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_85, b_180);
  t = l_15(f_180, b_180, t);
  t = c_180;
  {
    static ATerm p_180 (ATerm t)
    {
      ATerm v_87 = t;
      int w_87 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_87 = t;
          int y_87 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_180 = NULL;
              i_180 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_180;
              LocalPopChoice(y_87);
            }
          else
            {
              t = x_87;
              t = t_144(t);
              t = Cons_2_0(_id, p_180, t);
            }
          LocalPopChoice(w_87);
        }
      else
        {
          t = v_87;
          {
            ATerm l_180 = NULL,m_180 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_180 = ATgetFirst((ATermList) t);
                m_180 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_180), (ATerm) ATmakeAppl(sym_Undefined_1, l_180));
          }
        }
      return(t);
    }
    t = p_180(t);
  }
  e_180 = t;
  t = (ATerm) ATinsert(CheckATermList(e_180), (ATerm) ATmakeAppl(sym_Program_1, b_180));
  b_37 = t;
  t = SSLsetAnnotations(b_37, a_180);
  return(t);
}
static ATerm n_28 (ATerm t)
{
  ATerm c_181 = NULL;
  c_181 = t;
  if(match_string(t, "--help"))
    {
      t = c_181;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_181;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_181;
        }
    }
  return(t);
}
static ATerm o_28 (ATerm t)
{
  ATerm d_181 = NULL,e_181 = NULL;
  t = term_p_86;
  d_181 = t;
  t = term_o_84;
  e_181 = t;
  t = term_a_88;
  t = l_15(d_181, e_181, t);
  t = term_c_88;
  return(t);
}
static ATerm s_28 (ATerm t)
{
  t = term_d_88;
  return(t);
}
static ATerm y_28 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_144 (ATerm), ATerm t)
{
  ATerm u_180 = NULL,v_180 = NULL,w_180 = NULL,x_180 = NULL,y_180 = NULL,z_180 = NULL,a_181 = NULL,b_181 = NULL;
  w_180 = t;
  t = term_p_85;
  x_180 = t;
  t = term_e_88;
  t = lookup_table_0_1(x_180, t);
  b_181 = t;
  t = term_q_85;
  y_180 = t;
  t = (ATerm) ATempty;
  z_180 = t;
  t = b_181;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_181 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(y_180, z_180, a_181, t);
  t = w_180;
  {
    static ATerm l_28 (ATerm t)
    {
      ATerm f_88 = t;
      int g_88 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_144(t);
          LocalPopChoice(g_88);
        }
      else
        {
          t = f_88;
          {
            ATerm h_88 = t;
            int i_88 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(n_28, o_28, s_28, t);
                LocalPopChoice(i_88);
              }
            else
              {
                t = h_88;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_28, t);
  }
  {
    ATerm j_88 = t;
    int k_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_181 = NULL;
        p_181 = t;
        {
          ATerm l_88 = t;
          int m_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_80 = NULL;
              t = p_181;
              {
                ATerm n_88 = t;
                int o_88 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_80 = NULL,o_80 = NULL;
                    t = term_z_82;
                    n_80 = t;
                    t = term_p_86;
                    o_80 = t;
                    t = term_q_86;
                    t = i_15(n_80, o_80, t);
                    LocalPopChoice(o_88);
                  }
                else
                  {
                    t = n_88;
                    t = fetch_1_0(y_28, t);
                  }
              }
              t = p_181;
              t = default_system_usage_0_0(t);
              t = term_y_47;
              m_80 = t;
              t = SSL_exit(m_80);
              LocalPopChoice(m_88);
            }
          else
            {
              t = l_88;
              {
                ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL;
                t = term_z_82;
                x_80 = t;
                t = term_g_87;
                y_80 = t;
                t = term_p_88;
                t = i_15(x_80, y_80, t);
                t = p_181;
                t = default_system_about_0_0(t);
                t = term_y_47;
                w_80 = t;
                t = SSL_exit(w_80);
              }
            }
        }
        LocalPopChoice(k_88);
      }
    else
      {
        t = j_88;
        {
          ATerm q_88 = t;
          int r_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_181 = NULL,r_181 = NULL,s_181 = NULL;
              static ATerm z_28 (ATerm t)
              {
                ATerm t_181 = NULL,u_181 = NULL,v_181 = NULL,f_37 = NULL;
                v_181 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_181 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_181);
                t_181 = t;
                t = u_181;
                if(((u_180 != NULL) && (u_180 != t)))
                  _fail(t);
                else
                  u_180 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_181);
                f_37 = t;
                t = SSLsetAnnotations(f_37, t_181);
                return(t);
              }
              t = fetch_1_0(z_28, t);
              t = term_l_45;
              r_181 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_180)), term_s_88);
              s_181 = t;
              t = SSL_printnl(r_181, s_181);
              t = (ATerm) ATmakeAppl(sym__2, term_l_45, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_180)), term_s_88));
              t = default_system_usage_0_0(t);
              t = term_n_45;
              q_181 = t;
              t = SSL_exit(q_181);
              LocalPopChoice(r_88);
            }
          else
            {
              t = q_88;
            }
        }
      }
  }
  v_180 = t;
  t = term_p_85;
  t = table_destroy_0_0(t);
  t = v_180;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_142 (ATerm), ATerm t_142 (ATerm), ATerm u_142 (ATerm), ATerm v_142 (ATerm), ATerm t)
{
  ATerm a_182 = NULL,b_182 = NULL,c_182 = NULL,d_182 = NULL,e_182 = NULL;
  t = parse_options_1_0(s_142, t);
  a_182 = t;
  t = term_t_88;
  t = table_create_0_0(t);
  t = term_t_88;
  b_182 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_88, term_u_88, a_182);
  t = lookup_table_0_1(b_182, t);
  e_182 = t;
  t = term_u_88;
  c_182 = t;
  t = e_182;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_182 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(c_182, a_182, d_182, t);
  t = a_182;
  t = u_142(t);
  {
    ATerm v_88 = t;
    int w_88 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_142, t);
        LocalPopChoice(w_88);
      }
    else
      {
        t = v_88;
        {
          ATerm x_88 = t;
          int y_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_142(t);
              t = report_success_0_0(t);
              LocalPopChoice(y_88);
            }
          else
            {
              t = x_88;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm a_29 (ATerm t)
{
  ATerm z_88 = t;
  int c_89 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(c_89);
    }
  else
    {
      t = z_88;
      {
        ATerm d_89 = t;
        int e_89 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(e_89);
          }
        else
          {
            t = d_89;
            {
              ATerm f_89 = t;
              int g_89 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(g_89);
                }
              else
                {
                  t = f_89;
                  {
                    ATerm h_89 = t;
                    int i_89 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(f_29, m_29, n_29, t);
                        LocalPopChoice(i_89);
                      }
                    else
                      {
                        t = h_89;
                        {
                          ATerm j_89 = t;
                          int k_89 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(k_89);
                            }
                          else
                            {
                              t = j_89;
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
static ATerm b_29 (ATerm t)
{
  t = input_1_0(p_29, t);
  return(t);
}
static ATerm f_29 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_29 (ATerm t)
{
  ATerm g_182 = NULL,i_182 = NULL;
  t = term_m_83;
  g_182 = t;
  t = term_o_84;
  i_182 = t;
  t = term_l_89;
  t = l_15(g_182, i_182, t);
  t = term_m_89;
  return(t);
}
static ATerm n_29 (ATerm t)
{
  t = term_n_89;
  return(t);
}
static ATerm p_29 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(a_29, default_usage_0_0, _id, b_29, t);
  return(t);
}

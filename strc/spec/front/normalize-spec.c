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
ATerm term_i_84;
ATerm term_h_84;
ATerm term_g_84;
ATerm term_r_83;
ATerm term_q_83;
ATerm term_p_83;
ATerm term_k_83;
ATerm term_r_82;
ATerm term_q_82;
ATerm term_p_82;
ATerm term_o_82;
ATerm term_g_82;
ATerm term_b_82;
ATerm term_a_82;
ATerm term_z_81;
ATerm term_y_81;
ATerm term_x_81;
ATerm term_w_81;
ATerm term_v_81;
ATerm term_o_81;
ATerm term_n_81;
ATerm term_k_81;
ATerm term_j_81;
ATerm term_i_81;
ATerm term_f_81;
ATerm term_e_81;
ATerm term_b_81;
ATerm term_a_81;
ATerm term_z_80;
ATerm term_p_80;
ATerm term_o_80;
ATerm term_n_80;
ATerm term_m_80;
ATerm term_h_80;
ATerm term_g_80;
ATerm term_f_80;
ATerm term_e_80;
ATerm term_z_79;
ATerm term_y_79;
ATerm term_x_79;
ATerm term_w_79;
ATerm term_v_79;
ATerm term_u_79;
ATerm term_t_79;
ATerm term_s_79;
ATerm term_r_79;
ATerm term_q_79;
ATerm term_p_79;
ATerm term_o_79;
ATerm term_n_79;
ATerm term_m_79;
ATerm term_l_79;
ATerm term_k_79;
ATerm term_j_79;
ATerm term_g_79;
ATerm term_f_79;
ATerm term_j_78;
ATerm term_i_78;
ATerm term_f_78;
ATerm term_e_78;
ATerm term_c_78;
ATerm term_w_77;
ATerm term_v_77;
ATerm term_u_77;
ATerm term_t_77;
ATerm term_a_76;
ATerm term_z_75;
ATerm term_y_75;
ATerm term_s_74;
ATerm term_q_74;
ATerm term_p_74;
ATerm term_o_74;
ATerm term_n_74;
ATerm term_g_74;
ATerm term_p_63;
ATerm term_c_63;
ATerm term_v_62;
ATerm term_u_62;
ATerm term_n_62;
ATerm term_l_62;
ATerm term_j_56;
ATerm term_i_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_h_55;
ATerm term_g_55;
ATerm term_p_54;
ATerm term_o_54;
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
ATerm term_w_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_g_52;
ATerm term_d_52;
ATerm term_k_51;
ATerm term_b_48;
ATerm term_w_47;
ATerm term_h_47;
ATerm term_r_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_d_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_z_45;
ATerm term_v_45;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_o_43;
ATerm term_l_43;
ATerm term_k_43;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_a_43;
ATerm term_t_42;
ATerm term_s_42;
ATerm term_r_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_c_42;
ATerm term_b_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_r_41;
ATerm term_p_41;
ATerm term_l_41;
ATerm term_i_41;
ATerm term_g_41;
ATerm term_g_36;
ATerm term_y_35;
ATerm term_h_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_r_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_o_32;
ATerm term_a_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_h_31;
ATerm term_f_31;
ATerm term_n_30;
ATerm term_l_30;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Op_2, term_l_30, (ATerm) ATempty);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_31);
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_31);
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_27);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Op_2, term_s_32, (ATerm) ATempty);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_33);
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_32);
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(sym_Call_2, term_f_33, (ATerm) ATempty);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_34);
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_Call_2, term_j_34, (ATerm) ATempty);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_Call_2, term_o_32, (ATerm) ATempty);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_34);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_p_41));
  term_p_41 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_41);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(sym_RootApp_1, term_m_27);
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_b_42));
  term_b_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_42);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_b_42);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_42);
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_42);
  ATprotect(&(term_r_42));
  term_r_42 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_42);
  ATprotect(&(term_t_42));
  term_t_42 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_42);
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_43);
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_l_43));
  term_l_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_43);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_43);
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Counter", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(sym_Defined_2, term_z_45, term_b_46);
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(ATmakeSymbol("DRRenameVar", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(ATmakeSymbol("DRVarNumber", 0, ATtrue));
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(sym__2, term_j_46, term_c_46);
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-Rule already generated: ", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("DRAuxRuleGenerated", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("callers already generated: ", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("DRCallersGenerated", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("freshly generating the DR callers: ", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_53);
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym_Var_1, term_g_53);
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule", 0, ATtrue));
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_53);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_Build_1, term_a_32);
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_53);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_53);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATempty);
  ATprotect(&(term_o_54));
  term_o_54 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_p_54));
  term_p_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_54);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_55);
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-label-scope", 0, ATtrue));
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_55);
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_56);
  ATprotect(&(term_i_56));
  term_i_56 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_56);
  ATprotect(&(term_l_62));
  term_l_62 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scope", 0, ATtrue));
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_62);
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `extend override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_v_62));
  term_v_62 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] Your condition has been removed from the original dynamic rule: ", 0, ATtrue));
  ATprotect(&(term_p_63));
  term_p_63 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] rule undefining doesn't allow a condition strategy anymore", 0, ATtrue));
  ATprotect(&(term_g_74));
  term_g_74 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_n_74));
  term_n_74 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_74));
  term_o_74 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_p_74));
  term_p_74 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_74);
  ATprotect(&(term_q_74));
  term_q_74 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_s_74));
  term_s_74 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_74);
  ATprotect(&(term_y_75));
  term_y_75 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_z_75));
  term_z_75 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_a_76));
  term_a_76 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_t_77));
  term_t_77 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_v_77));
  term_v_77 = (ATerm) ATmakeAppl(sym__2, term_t_77, term_u_77);
  ATprotect(&(term_w_77));
  term_w_77 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_78));
  term_c_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_78));
  term_e_78 = (ATerm) ATmakeAppl(sym__2, term_t_77, term_c_78);
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_78));
  term_i_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeAppl(sym__2, term_t_77, term_i_78);
  ATprotect(&(term_f_79));
  term_f_79 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_g_79));
  term_g_79 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_79));
  term_j_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_79));
  term_k_79 = (ATerm) ATmakeAppl(sym__2, term_t_77, term_j_79);
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_79));
  term_q_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_79));
  term_r_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_79));
  term_s_79 = (ATerm) ATmakeAppl(sym__2, term_r_79, term_b_46);
  ATprotect(&(term_t_79));
  term_t_79 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_46);
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_79));
  term_v_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_79));
  term_x_79 = (ATerm) ATmakeAppl(sym__2, term_w_79, term_m_79);
  ATprotect(&(term_y_79));
  term_y_79 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_79));
  term_z_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_80));
  term_e_80 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_80));
  term_f_80 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_80));
  term_g_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_80));
  term_m_80 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_n_80));
  term_n_80 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_80));
  term_p_80 = (ATerm) ATmakeAppl(sym__2, term_t_77, term_o_80);
  ATprotect(&(term_z_80));
  term_z_80 = (ATerm) ATmakeAppl(sym__2, term_t_77, term_r_79);
  ATprotect(&(term_a_81));
  term_a_81 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_81));
  term_b_81 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_81));
  term_e_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_81));
  term_f_81 = (ATerm) ATmakeAppl(sym__2, term_t_77, term_e_81);
  ATprotect(&(term_i_81));
  term_i_81 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_81));
  term_j_81 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_81));
  term_k_81 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_81));
  term_n_81 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_81));
  term_o_81 = (ATerm) ATmakeAppl(sym__2, term_e_80, term_f_80);
  ATprotect(&(term_v_81));
  term_v_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_81));
  term_w_81 = (ATerm) ATmakeAppl(sym__2, term_v_81, term_m_79);
  ATprotect(&(term_x_81));
  term_x_81 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_81));
  term_y_81 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_81));
  term_z_81 = (ATerm) ATmakeAppl(sym__2, term_y_81, term_m_79);
  ATprotect(&(term_a_82));
  term_a_82 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_82));
  term_b_82 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_82));
  term_g_82 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_82));
  term_o_82 = (ATerm) ATmakeAppl(sym__2, term_e_81, term_m_79);
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_82));
  term_q_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_82));
  term_r_82 = (ATerm) ATmakeAppl(sym__3, term_e_80, term_f_80, (ATerm) ATempty);
  ATprotect(&(term_k_83));
  term_k_83 = (ATerm) ATmakeAppl(sym__2, term_t_77, term_v_81);
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_83));
  term_q_83 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_83));
  term_r_83 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(sym__2, term_i_78, term_m_79);
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm p_113 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm x_0 (ATerm), ATerm t);
static ATerm o_12 (ATerm q_146 (ATerm), ATerm f_83, ATerm d_83, ATerm e_83, ATerm i_83, ATerm g_83, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm q_146 (ATerm), ATerm t);
static ATerm g_19 (ATerm n_11, ATerm o_11, ATerm t);
static ATerm h_19 (ATerm e_12, ATerm f_12, ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm z_144 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm q_12 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm t);
static ATerm i_31 (ATerm m_30, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm r_12 (ATerm j_69, ATerm k_69, ATerm l_69, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm s_12 (ATerm p_146 (ATerm), ATerm m_82, ATerm j_82, ATerm k_82, ATerm t_82, ATerm x_82, ATerm y_82, ATerm t);
static ATerm v_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm r_146 (ATerm), ATerm t);
static ATerm m_6 (ATerm t);
static ATerm u_12 (ATerm m_83, ATerm l_83, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm y_61 (ATerm y_60, ATerm t);
static ATerm z_61 (ATerm d_61, ATerm t);
static ATerm p_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm r_65 (ATerm t_64, ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm g_7 (ATerm t);
ATerm next_counter_0_0 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm NewNumberedVar_0_0 (ATerm t);
ATerm RenameVarTerm_2_0 (ATerm v_146 (ATerm), ATerm w_146 (ATerm), ATerm t);
static ATerm k_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
ATerm dr_rename_vars_0_0 (ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm c_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm dummify_0_0 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm g_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm j_11 (ATerm t);
static ATerm l_11 (ATerm t);
static ATerm r_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm c_12 (ATerm t);
static ATerm d_12 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm a_147 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm DesugarDynRuleDef_0_0 (ATerm t);
ATerm split_dynamic_rule_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm t_114 (ATerm), ATerm t);
static ATerm z_12 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm x_146 (ATerm), ATerm t);
static ATerm q_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm h_15 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm h_13 (ATerm s_85, ATerm r_85, ATerm t);
ATerm repeat_2_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm l_121 (ATerm), ATerm t);
static ATerm k_16 (ATerm t);
ATerm collect_om_2_0 (ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm t);
ATerm partition_1_0 (ATerm m_128 (ATerm), ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm z_16 (ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t);
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t);
static ATerm k_127 (ATerm h_126, ATerm i_126, ATerm j_126, ATerm k_126, ATerm l_126, ATerm m_126, ATerm n_126, ATerm t);
static ATerm b_17 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm q_119 (ATerm), ATerm t);
static ATerm c_17 (ATerm t);
ATerm UpgradeUndefine_0_0 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
ATerm upgrade_old_dr_constructs_0_0 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
ATerm LiftDynamicRules_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm u_145 (ATerm), ATerm v_145 (ATerm), ATerm w_145 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm d_146 (ATerm), ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm h_18 (ATerm t);
static ATerm i_18 (ATerm t);
static ATerm j_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm m_18 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm n_13 (ATerm m_124 (ATerm), ATerm u_30, ATerm t_30, ATerm t);
static ATerm o_13 (ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm y_30, ATerm x_30, ATerm t);
static ATerm p_13 (ATerm h_124 (ATerm), ATerm s_30, ATerm r_30, ATerm t);
ATerm genzip_4_0 (ATerm f_122 (ATerm), ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm i_122 (ATerm), ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm u_13 (ATerm d_687, ATerm i_687, ATerm j_68, ATerm t);
ATerm while_not_2_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t);
ATerm for_3_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm t);
static ATerm y_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm d_148 (ATerm m_146, ATerm n_146, ATerm o_146, ATerm t);
static ATerm c_19 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm e_19 (ATerm t);
static ATerm f_19 (ATerm t);
static ATerm i_19 (ATerm t);
static ATerm m_19 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm r_19 (ATerm t);
static ATerm s_19 (ATerm t);
ATerm free_vars_3_0 (ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm q_113 (ATerm), ATerm t);
static ATerm y_13 (ATerm q_61, ATerm r_61, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm h_115 (ATerm), ATerm t);
static ATerm z_13 (ATerm k_133 (ATerm), ATerm w_44, ATerm u_44, ATerm t);
static ATerm x_19 (ATerm t);
static ATerm y_19 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm a_14 (ATerm k_61, ATerm l_61, ATerm t);
ATerm end_scope_1_0 (ATerm h_133 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm g_133 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm i_133 (ATerm), ATerm j_133 (ATerm), ATerm t);
static ATerm j_20 (ATerm t);
static ATerm m_20 (ATerm t);
static ATerm o_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm t_20 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm e_128 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm s_120 (ATerm), ATerm t);
static ATerm n_154 (ATerm f_154, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm d_14 (ATerm e_35, ATerm r_34, ATerm t);
ATerm foldr_3_0 (ATerm c_127 (ATerm), ATerm d_127 (ATerm), ATerm e_127 (ATerm), ATerm t);
static ATerm b_21 (ATerm t);
static ATerm e_21 (ATerm t);
static ATerm h_21 (ATerm t);
static ATerm k_21 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm l_21 (ATerm t);
static ATerm m_21 (ATerm t);
static ATerm n_21 (ATerm t);
static ATerm x_21 (ATerm t);
static ATerm a_22 (ATerm t);
static ATerm f_22 (ATerm t);
static ATerm h_22 (ATerm t);
static ATerm k_22 (ATerm t);
static ATerm l_22 (ATerm t);
static ATerm m_22 (ATerm t);
static ATerm n_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm y_22 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm e_14 (ATerm m_40, ATerm n_40, ATerm t);
static ATerm f_14 (ATerm q_24, ATerm r_24, ATerm t);
static ATerm h_14 (ATerm s_119 (ATerm), ATerm k_186, ATerm w_24, ATerm t);
static ATerm g_14 (ATerm m_24, ATerm n_24, ATerm t);
static ATerm z_22 (ATerm t);
static ATerm a_23 (ATerm t);
ATerm output_1_0 (ATerm b_139 (ATerm), ATerm t);
static ATerm x_159 (ATerm r_159, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm i_14 (ATerm s_24, ATerm t);
static ATerm j_14 (ATerm f_39, ATerm g_39, ATerm t);
static ATerm k_14 (ATerm o_40, ATerm p_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_161 (ATerm h_160, ATerm t);
static ATerm j_161 (ATerm l_160, ATerm m_160, ATerm n_160, ATerm t);
static ATerm k_161 (ATerm v_160, ATerm w_160, ATerm x_160, ATerm t);
static ATerm l_14 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm c_139 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm d_23 (ATerm t);
static ATerm e_23 (ATerm t);
static ATerm f_23 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm l_23 (ATerm t);
static ATerm m_23 (ATerm t);
static ATerm o_23 (ATerm t);
static ATerm p_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm h_24 (ATerm t);
static ATerm i_24 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_14 (ATerm k_56, ATerm l_56, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm j_24 (ATerm t);
static ATerm o_24 (ATerm t);
static ATerm p_24 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_24 (ATerm t);
static ATerm i_25 (ATerm t);
static ATerm j_25 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm s_14 (ATerm f_61, ATerm g_61, ATerm e_61, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
static ATerm k_25 (ATerm t);
static ATerm m_25 (ATerm t);
static ATerm n_25 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_14 (ATerm i_43, ATerm j_43, ATerm t);
ATerm foldr_2_0 (ATerm a_127 (ATerm), ATerm b_127 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm p_25 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_136 (ATerm), ATerm t);
static ATerm q_25 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm r_25 (ATerm t);
ATerm need_help_1_0 (ATerm s_138 (ATerm), ATerm t);
static ATerm v_14 (ATerm k_65, ATerm l_65, ATerm m_65, ATerm t);
ATerm lookup_table_0_1 (ATerm r_62, ATerm t);
ATerm new_hashtable_0_2 (ATerm s_65, ATerm t_65, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm o_14 (ATerm p_65, ATerm q_65, ATerm t);
static ATerm p_14 (ATerm u_65, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm b_120 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm t_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm v_25 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm l_120 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_14 (ATerm n_65, ATerm o_65, ATerm t);
static ATerm r_14 (ATerm y_62, ATerm z_62, ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_140 (ATerm), ATerm t);
static ATerm h_26 (ATerm t);
static ATerm k_26 (ATerm t);
static ATerm l_26 (ATerm t);
static ATerm n_26 (ATerm t);
ATerm parse_options_1_0 (ATerm u_140 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm u_138 (ATerm), ATerm v_138 (ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm), ATerm t);
static ATerm v_26 (ATerm t);
static ATerm w_26 (ATerm t);
static ATerm y_26 (ATerm t);
static ATerm g_27 (ATerm t);
static ATerm j_27 (ATerm t);
static ATerm k_27 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm s_0 = NULL,z_0 = NULL,b_1 = NULL,d_1 = NULL,e_1 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_1, e_1);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_1 = ATgetArgument(t, 0);
          t = d_1;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_0 = ATgetFirst((ATermList) t);
              z_0 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, s_0, (ATerm) ATmakeAppl(sym_LChoices_1, z_0));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_l_27;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              d_1 = ATgetArgument(t, 0);
              t = d_1;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  s_0 = ATgetFirst((ATermList) t);
                  z_0 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, s_0, (ATerm) ATmakeAppl(sym_Choices_1, z_0));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_l_27;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  d_1 = ATgetArgument(t, 0);
                  t = d_1;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_0 = ATgetFirst((ATermList) t);
                      z_0 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_0, (ATerm) ATmakeAppl(sym_Seqs_1, z_0));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_m_27;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      d_1 = ATgetArgument(t, 0);
                      e_1 = ATgetArgument(t, 1);
                      b_1 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, e_1, (ATerm) ATmakeAppl(sym_Op_2, term_n_27, (ATerm) ATinsert(ATinsert(ATempty, b_1), d_1)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          d_1 = ATgetArgument(t, 0);
                          e_1 = ATgetArgument(t, 1);
                          b_1 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_1)), d_1), (ATerm) ATmakeAppl(sym_Build_1, e_1)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              d_1 = ATgetArgument(t, 0);
                              e_1 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, d_1, (ATerm) ATmakeAppl(sym_Match_1, e_1));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  d_1 = ATgetArgument(t, 0);
                                  e_1 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_1), e_1);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      d_1 = ATgetArgument(t, 0);
                                      e_1 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_1), d_1);
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
ATerm topdown_1_0 (ATerm p_113 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(p_113, t);
    return(t);
  }
  t = p_113(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm y_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_5);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm s_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_27);
    }
  else
    {
      t = s_27;
      {
        ATerm w_27 = t;
        int a_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_28);
          }
        else
          {
            t = w_27;
            {
              ATerm d_28 = t;
              int e_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL,g_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_6 = ATgetArgument(t, 0);
                      d_6 = ATgetArgument(t, 1);
                      e_6 = ATgetArgument(t, 2);
                      g_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_6;
                  t = map_1_0(u_0, t);
                  LocalPopChoice(e_28);
                }
              else
                {
                  t = d_28;
                  {
                    ATerm f_28 = t;
                    int h_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(h_28);
                      }
                    else
                      {
                        t = f_28;
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
static ATerm u_0 (ATerm t)
{
  ATerm u_6 = NULL;
  ATerm k_28 = t;
  int m_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_6 = ATgetArgument(t, 0);
          {
            ATerm o_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_28);
      t = u_6;
    }
  else
    {
      t = k_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_6;
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = map_1_0(c_1, t);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm f_7 = NULL;
  ATerm q_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_7 = ATgetArgument(t, 0);
          {
            ATerm v_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_28);
      t = f_7;
    }
  else
    {
      t = q_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_7;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm i_7 = NULL;
  i_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_7);
  return(t);
}
static ATerm g_1 (ATerm t)
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
static ATerm h_1 (ATerm t)
{
  ATerm w_28 = t;
  int z_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_28);
    }
  else
    {
      t = w_28;
      {
        ATerm b_29 = t;
        int c_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_29);
          }
        else
          {
            t = b_29;
            {
              ATerm i_29 = t;
              int j_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,o_7 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_7 = ATgetArgument(t, 0);
                      m_7 = ATgetArgument(t, 1);
                      n_7 = ATgetArgument(t, 2);
                      o_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_7;
                  t = map_1_0(i_1, t);
                  LocalPopChoice(j_29);
                }
              else
                {
                  t = i_29;
                  {
                    ATerm k_29 = t;
                    int t_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_29);
                      }
                    else
                      {
                        t = k_29;
                        t = dynrule_targs_1_0(j_1, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm w_7 = NULL;
  ATerm u_29 = t;
  int v_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_7 = ATgetArgument(t, 0);
          {
            ATerm x_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_29);
      t = w_7;
    }
  else
    {
      t = u_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_7;
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = map_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm d_8 = NULL;
  ATerm d_30 = t;
  int e_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_8 = ATgetArgument(t, 0);
          {
            ATerm f_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_30);
      t = d_8;
    }
  else
    {
      t = d_30;
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
static ATerm l_1 (ATerm t)
{
  ATerm g_8 = NULL;
  g_8 = t;
  {
    ATerm j_30 = t;
    int k_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_8 = NULL,b_0 = NULL,h_0 = NULL,k_0 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            q_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_8);
        b_0 = t;
        t = q_8;
        t = ContextVar_0_0(t);
        h_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, h_0);
        k_0 = t;
        t = SSLsetAnnotations(k_0, b_0);
        LocalPopChoice(k_30);
      }
    else
      {
        t = j_30;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, g_8);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  static ATerm f_9 (ATerm h_4, ATerm k_4, ATerm l_4, ATerm m_4, ATerm n_4, ATerm p_4, ATerm q_4, ATerm t)
  {
    ATerm y_4 = NULL,a_5 = NULL,b_5 = NULL,h_5 = NULL,i_5 = NULL,k_5 = NULL,l_5 = NULL,n_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, n_4, term_n_30);
    {
      ATerm p_30 = t;
      if((PushChoice() == 0))
        {
          ATerm o_5 = NULL;
          if(match_cons(t, sym__2))
            {
              o_5 = ATgetArgument(t, 0);
              if((o_5 != ATgetArgument(t, 1)))
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
          t = p_30;
        }
    }
    t = new_0_0(t);
    y_4 = t;
    t = m_4;
    t = dummify_0_0(t);
    b_5 = t;
    {
      ATerm z_30 = t;
      int c_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_5;
          if((m_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, y_4);
          LocalPopChoice(c_31);
        }
      else
        {
          t = z_30;
          t = b_5;
        }
    }
    a_5 = t;
    t = b_5;
    t = free_vars_3_0(f_0, m_0, tboundin_3_0, t);
    t = map_1_0(f_1, t);
    i_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_4, p_4);
    t = free_vars_3_0(g_1, h_1, tboundin_3_0, t);
    t = filter_1_0(l_1, t);
    h_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_5, i_5);
    t = diff_0_0(t);
    k_5 = t;
    t = new_0_0(t);
    l_5 = t;
    t = h_4;
    t = x_0(t);
    n_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, n_5, (ATerm) ATmakeAppl(sym_Op_2, term_f_31, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_h_31, (ATerm) ATinsert(CheckATermList(k_5), (ATerm) ATmakeAppl(sym_Str_1, l_5)))), b_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, h_4, k_4, l_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, y_4), m_4), n_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_4)))), a_5), (ATerm) ATmakeAppl(sym_Op_2, term_h_31, (ATerm) ATinsert(CheckATermList(k_5), (ATerm) ATmakeAppl(sym_Str_1, l_5))))), p_4))));
    return(t);
  }
  ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
  v_8 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      w_8 = ATgetArgument(t, 0);
      x_8 = ATgetArgument(t, 1);
      y_8 = ATgetArgument(t, 2);
      z_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = z_8;
  if(match_cons(t, sym_Rule_3))
    {
      a_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
      c_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_9;
  if(match_cons(t, sym_Op_2))
    {
      t_8 = ATgetArgument(t, 0);
      u_8 = ATgetArgument(t, 1);
      t = u_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = t_8;
          if(match_string(t, "Undefined"))
            {
              ATerm l_31 = t;
              int m_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
                  t = v_8;
                  t = new_0_0(t);
                  j_2 = t;
                  t = a_9;
                  t = dummify_0_0(t);
                  h_2 = t;
                  {
                    ATerm n_31 = t;
                    int o_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = h_2;
                        if((a_9 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, j_2);
                        LocalPopChoice(o_31);
                      }
                    else
                      {
                        t = n_31;
                        t = h_2;
                      }
                  }
                  k_2 = t;
                  t = w_8;
                  t = x_0(t);
                  l_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, l_2, (ATerm) ATmakeAppl(sym_Op_2, term_f_31, (ATerm) ATinsert(ATinsert(ATempty, term_n_30), h_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, w_8, x_8, y_8, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, j_2), a_9), term_n_30, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_8)))), k_2), term_n_30)), (ATerm) ATmakeAppl(sym_Seq_2, c_9, term_l_27)))));
                  LocalPopChoice(m_31);
                }
              else
                {
                  t = l_31;
                  t = f_9(w_8, x_8, y_8, a_9, b_9, c_9, v_8, t);
                }
            }
          else
            {
              t = f_9(w_8, x_8, y_8, a_9, b_9, c_9, v_8, t);
            }
        }
      else
        {
          t = t_8;
          t = f_9(w_8, x_8, y_8, a_9, b_9, c_9, v_8, t);
        }
    }
  else
    {
      t = f_9(w_8, x_8, y_8, a_9, b_9, c_9, v_8, t);
    }
  return(t);
}
static ATerm o_12 (ATerm q_146 (ATerm), ATerm f_83, ATerm d_83, ATerm e_83, ATerm i_83, ATerm g_83, ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,y_9 = NULL,a_10 = NULL;
  t = new_0_0(t);
  p_9 = t;
  t = i_83;
  t = dummify_0_0(t);
  o_9 = t;
  {
    ATerm p_31 = t;
    int q_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_9;
        if((i_83 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, p_9);
        LocalPopChoice(q_31);
      }
    else
      {
        t = p_31;
        t = o_9;
      }
  }
  y_9 = t;
  t = f_83;
  t = q_146(t);
  a_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, a_10, o_9)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, f_83, d_83, e_83, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, p_9), i_83), term_n_30, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_w_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_83)))), y_9), term_a_32)), (ATerm) ATmakeAppl(sym_Seq_2, g_83, term_l_27))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm q_146 (ATerm), ATerm t)
{
  ATerm f_10 = NULL,h_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      f_10 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
      j_10 = ATgetArgument(t, 2);
      {
        ATerm b_32 = ATgetArgument(t, 3);
        if(match_cons(b_32, sym_Rule_3))
          {
            k_10 = ATgetArgument(b_32, 0);
            {
              ATerm e_32 = ATgetArgument(b_32, 1);
              if(match_cons(e_32, sym_Op_2))
                {
                  ATerm g_32 = ATgetArgument(e_32, 0);
                  if((ATgetSymbol((ATermAppl) g_32) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm j_32 = ATgetArgument(e_32, 1);
                    if(((ATgetType(j_32) != AT_LIST) || !(ATisEmpty(j_32))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            l_10 = ATgetArgument(b_32, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_12(q_146, f_10, h_10, j_10, k_10, l_10, t);
  return(t);
}
static ATerm g_19 (ATerm n_11, ATerm o_11, ATerm t)
{
  t = n_11;
  {
    ATerm m_32 = t;
    if((PushChoice() == 0))
      {
        ATerm s_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,l_3 = NULL;
        w_11 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_11 = ATgetFirst((ATermList) t);
            v_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_11);
        s_11 = t;
        t = v_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(v_11), u_11);
        l_3 = t;
        t = SSLsetAnnotations(l_3, s_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_32;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_27, n_11);
  return(t);
}
static ATerm h_19 (ATerm e_12, ATerm f_12, ATerm t)
{
  t = e_12;
  {
    ATerm n_32 = t;
    if((PushChoice() == 0))
      {
        ATerm l_12 = NULL,w_12 = NULL,x_12 = NULL,b_13 = NULL,n_3 = NULL;
        b_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_12 = ATgetFirst((ATermList) t);
            x_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_13);
        l_12 = t;
        t = x_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(x_12), w_12);
        n_3 = t;
        t = SSLsetAnnotations(n_3, l_12);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_32;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_32, e_12);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_t_32;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm z_14 = NULL,b_15 = NULL,u_2 = NULL;
  z_14 = t;
  t = SSL_explode_term(z_14);
  if(match_cons(t, sym__2))
    {
      ATerm u_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_32 = ATgetArgument(t, 1);
        if(((ATgetType(w_32) == AT_LIST) && !(ATisEmpty(w_32))))
          {
            b_15 = ATgetFirst((ATermList) w_32);
            {
              ATerm x_32 = (ATerm) ATgetNext((ATermList) w_32);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_14);
  if(match_cons(t, sym__2))
    {
      ATerm y_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_32 = ATgetArgument(t, 1);
        if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
          {
            ATerm a_33 = ATgetFirst((ATermList) z_32);
            ATerm b_33 = (ATerm) ATgetNext((ATermList) z_32);
            if(((ATgetType(b_33) == AT_LIST) && !(ATisEmpty(b_33))))
              {
                u_2 = ATgetFirst((ATermList) b_33);
                {
                  ATerm c_33 = (ATerm) ATgetNext((ATermList) b_33);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_33, (ATerm) ATinsert(ATinsert(ATempty, u_2), b_15));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_33, (ATerm) ATinsert(ATinsert(ATempty, x_15), w_15));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_t_32;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      d_16 = ATgetArgument(t, 0);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_33, (ATerm) ATinsert(ATinsert(ATempty, e_16), d_16));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL;
  if(match_cons(t, sym__2))
    {
      t_16 = ATgetArgument(t, 0);
      u_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_33, (ATerm) ATinsert(ATinsert(ATempty, u_16), t_16));
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_g_33;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_33, (ATerm) ATinsert(ATinsert(ATempty, y_16), x_16));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm g_13 = NULL,i_13 = NULL,l_13 = NULL,s_13 = NULL,w_13 = NULL,x_13 = NULL,b_14 = NULL,c_14 = NULL;
  x_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      b_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
      {
        ATerm t_14 = NULL;
        t = c_14;
        t = foldr_2_0(m_1, n_1, t);
        t_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, b_14, t_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          b_14 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, b_14, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              b_14 = ATgetArgument(t, 0);
              {
                ATerm z_2 = NULL;
                t = b_14;
                {
                  ATerm k_33 = t;
                  int l_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_m_33;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_n_33;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_o_33;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_p_33;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_r_33;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(l_33);
                    }
                  else
                    {
                      t = k_33;
                      {
                        ATerm b_3 = NULL;
                        t = SSL_explode_string(b_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm t_33 = ATgetFirst((ATermList) t);
                            if(((ATgetType(t_33) != AT_INT) || (ATgetInt((ATermInt) t_33) != 39)))
                              _fail(t);
                            {
                              ATerm u_33 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(u_33) == AT_LIST) && !(ATisEmpty(u_33))))
                                {
                                  b_3 = ATgetFirst((ATermList) u_33);
                                  {
                                    ATerm v_33 = (ATerm) ATgetNext((ATermList) u_33);
                                    if(((ATgetType(v_33) == AT_LIST) && !(ATisEmpty(v_33))))
                                      {
                                        ATerm w_33 = ATgetFirst((ATermList) v_33);
                                        if(((ATgetType(w_33) != AT_INT) || (ATgetInt((ATermInt) w_33) != 39)))
                                          _fail(t);
                                        {
                                          ATerm y_33 = (ATerm) ATgetNext((ATermList) v_33);
                                          if(((ATgetType(y_33) != AT_LIST) || !(ATisEmpty(y_33))))
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
                        t = b_3;
                      }
                    }
                }
                z_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, z_2);
              }
            }
          else
            {
              ATerm a_34 = t;
              int b_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      b_14 = ATgetArgument(t, 0);
                      {
                        ATerm c_34 = ATgetArgument(t, 1);
                      }
                      w_13 = ATgetArgument(t, 2);
                      g_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_34);
                  t = (ATerm) ATmakeAppl(sym_Con_3, b_14, w_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, g_13), (ATerm) ATempty));
                }
              else
                {
                  t = a_34;
                  {
                    ATerm e_34 = t;
                    int g_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            b_14 = ATgetArgument(t, 0);
                            {
                              ATerm h_34 = ATgetArgument(t, 1);
                            }
                            w_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(g_34);
                        t = (ATerm) ATmakeAppl(sym_Con_3, b_14, w_13, term_k_34);
                      }
                    else
                      {
                        t = e_34;
                        if(match_cons(t, sym_Con1_2))
                          {
                            b_14 = ATgetArgument(t, 0);
                            c_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, b_14, c_14, term_k_34);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                b_14 = ATgetArgument(t, 0);
                                c_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm o_1 (ATerm t)
                                  {
                                    t = c_14;
                                    return(t);
                                  }
                                  t = b_14;
                                  t = foldr_2_0(o_1, p_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    b_14 = ATgetArgument(t, 0);
                                    t = b_14;
                                    t = foldr_2_0(q_1, r_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        b_14 = ATgetArgument(t, 0);
                                        t = b_14;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            i_13 = ATgetFirst((ATermList) t);
                                            l_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = l_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm l_34 = t;
                                                int q_34 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = g_19(b_14, x_13, t);
                                                    LocalPopChoice(q_34);
                                                  }
                                                else
                                                  {
                                                    t = l_34;
                                                    t = i_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = g_19(b_14, x_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = g_19(b_14, x_13, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            b_14 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, b_14));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                b_14 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, b_14));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    b_14 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, b_14));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        b_14 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, b_14));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            b_14 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_14), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                b_14 = ATgetArgument(t, 0);
                                                                c_14 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_14), c_14);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    b_14 = ATgetArgument(t, 0);
                                                                    c_14 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm s_1 (ATerm t)
                                                                      {
                                                                        t = c_14;
                                                                        return(t);
                                                                      }
                                                                      t = b_14;
                                                                      t = foldr_2_0(s_1, t_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        b_14 = ATgetArgument(t, 0);
                                                                        t = b_14;
                                                                        t = foldr_2_0(u_1, v_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            b_14 = ATgetArgument(t, 0);
                                                                            c_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_o_32, (ATerm) ATinsert(CheckATermList(c_14), b_14));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                b_14 = ATgetArgument(t, 0);
                                                                                t = b_14;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    i_13 = ATgetFirst((ATermList) t);
                                                                                    l_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = l_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm s_34 = t;
                                                                                        int w_34 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = h_19(b_14, x_13, t);
                                                                                            LocalPopChoice(w_34);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = s_34;
                                                                                            t = i_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = h_19(b_14, x_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = h_19(b_14, x_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_x_34;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        b_14 = ATgetArgument(t, 0);
                                                                                        c_14 = ATgetArgument(t, 1);
                                                                                        t = c_14;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            s_13 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_z_34, (ATerm) ATinsert(ATinsert(ATempty, s_13), b_14));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            b_14 = ATgetArgument(t, 0);
                                                                                            t = b_14;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                b_14 = ATgetArgument(t, 0);
                                                                                                c_14 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, b_14, c_14, term_m_27);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    b_14 = ATgetArgument(t, 0);
                                                                                                    c_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, b_14, c_14, term_m_27);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        b_14 = ATgetArgument(t, 0);
                                                                                                        c_14 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, b_14, (ATerm)ATempty, c_14);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            b_14 = ATgetArgument(t, 0);
                                                                                                            c_14 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, c_14, b_14);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                b_14 = ATgetArgument(t, 0);
                                                                                                                c_14 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, b_14, c_14, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    b_14 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, b_14, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        b_14 = ATgetArgument(t, 0);
                                                                                                                        c_14 = ATgetArgument(t, 1);
                                                                                                                        w_13 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, b_14, c_14, (ATerm)ATempty, w_13);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            b_14 = ATgetArgument(t, 0);
                                                                                                                            c_14 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, b_14, (ATerm)ATempty, (ATerm)ATempty, c_14);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                b_14 = ATgetArgument(t, 0);
                                                                                                                                c_14 = ATgetArgument(t, 1);
                                                                                                                                w_13 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, b_14, c_14, (ATerm)ATempty, w_13);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    b_14 = ATgetArgument(t, 0);
                                                                                                                                    c_14 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, b_14, (ATerm)ATempty, (ATerm)ATempty, c_14);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        b_14 = ATgetArgument(t, 0);
                                                                                                                                        c_14 = ATgetArgument(t, 1);
                                                                                                                                        w_13 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_14, c_14, (ATerm)ATempty, w_13);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            b_14 = ATgetArgument(t, 0);
                                                                                                                                            c_14 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, b_14, (ATerm)ATempty, (ATerm)ATempty, c_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm a_35 = ATgetArgument(t, 0);
                                                                                                                                                c_14 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, c_14);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL;
  k_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      l_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
      {
        ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,t_19 = NULL;
        t = k_19;
        t = new_0_0(t);
        o_19 = t;
        t = new_0_0(t);
        p_19 = t;
        t = new_0_0(t);
        q_19 = t;
        t = new_0_0(t);
        t_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_19), q_19), p_19), o_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, o_19), (ATerm) ATmakeAppl(sym_Var_1, q_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, l_19, (ATerm)ATmakeAppl(sym_Var_1, o_19), (ATerm) ATmakeAppl(sym_Var_1, p_19)), (ATerm) ATmakeAppl(sym_BAM_3, j_19, (ATerm)ATmakeAppl(sym_Var_1, q_19), (ATerm) ATmakeAppl(sym_Var_1, t_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_c_35, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_19)), (ATerm) ATmakeAppl(sym_Var_1, p_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          l_19 = ATgetArgument(t, 0);
          {
            ATerm u_19 = NULL,v_19 = NULL,b_20 = NULL,c_20 = NULL;
            t = k_19;
            t = new_0_0(t);
            b_20 = t;
            t = l_19;
            {
              static ATerm w_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((u_19 != NULL) && (u_19 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      u_19 = ATgetArgument(t, 0);
                    if(((v_19 != NULL) && (v_19 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      v_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, b_20);
                return(t);
              }
              t = oncetd_1_0(w_1, t);
            }
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_35, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_19)), not_null(u_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_20)), (ATerm) ATmakeAppl(sym_Build_1, c_20))));
          }
        }
      else
        {
          ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              l_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_19;
          t = new_0_0(t);
          g_20 = t;
          t = new_0_0(t);
          h_20 = t;
          t = l_19;
          {
            static ATerm x_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_20 = ATgetArgument(t, 0);
                  if(((f_20 != NULL) && (f_20 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    f_20 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, g_20);
              return(t);
            }
            t = oncetd_1_0(x_1, t);
          }
          i_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_35, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_20))))), (ATerm)ATmakeAppl(sym_Var_1, g_20), (ATerm) ATmakeAppl(sym_Op_2, term_n_27, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_20)), not_null(e_20)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm k_20 = NULL,l_20 = NULL;
  k_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      l_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,w_20 = NULL;
        t = k_20;
        t = new_0_0(t);
        r_20 = t;
        t = l_20;
        {
          static ATerm y_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((p_20 != NULL) && (p_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_20 = ATgetArgument(t, 0);
                if(((q_20 != NULL) && (q_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  q_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, r_20), p_20);
            return(t);
          }
          t = pat_td_1_0(y_1, t);
        }
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_35, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_20))))));
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
        {
          ATerm j_35 = t;
          int k_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
              t = k_20;
              t = new_0_0(t);
              z_20 = t;
              t = l_20;
              {
                static ATerm z_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((y_20 != NULL) && (y_20 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        y_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, z_20);
                  return(t);
                }
                t = pat_td_1_0(z_1, t);
              }
              a_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, z_20)), not_null(y_20))));
              LocalPopChoice(k_35);
            }
          else
            {
              t = j_35;
              {
                ATerm c_21 = NULL,d_21 = NULL,g_21 = NULL,j_21 = NULL;
                t = k_20;
                t = new_0_0(t);
                g_21 = t;
                t = l_20;
                {
                  static ATerm a_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((d_21 != NULL) && (d_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          d_21 = ATgetArgument(t, 0);
                        if(((c_21 != NULL) && (c_21 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          c_21 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, g_21);
                    return(t);
                  }
                  t = pat_td_1_0(a_2, t);
                }
                j_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, g_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(c_21)), not_null(d_21)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm z_144 (ATerm), ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_144(t);
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      {
        ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL;
        r_26 = t;
        if(match_cons(t, sym_Op_2))
          {
            s_26 = ATgetArgument(t, 0);
            t_26 = ATgetArgument(t, 1);
            {
              ATerm h_3 = NULL,m_3 = NULL,r_3 = NULL;
              t = SSLgetAnnotations(r_26);
              h_3 = t;
              t = t_26;
              {
                static ATerm b_2 (ATerm t)
                {
                  t = pat_td_1_0(z_144, t);
                  return(t);
                }
                t = fetch_1_0(b_2, t);
              }
              m_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, s_26, m_3);
              r_3 = t;
              t = SSLsetAnnotations(r_3, h_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                s_26 = ATgetArgument(t, 0);
                t_26 = ATgetArgument(t, 1);
                {
                  ATerm p_35 = t;
                  int r_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_4 = NULL,w_4 = NULL,s_3 = NULL;
                      t = SSLgetAnnotations(r_26);
                      o_4 = t;
                      t = t_26;
                      t = pat_td_1_0(z_144, t);
                      w_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, s_26, w_4);
                      s_3 = t;
                      t = SSLsetAnnotations(s_3, o_4);
                      LocalPopChoice(r_35);
                    }
                  else
                    {
                      t = p_35;
                      {
                        ATerm s_5 = NULL,v_5 = NULL,u_3 = NULL;
                        t = SSLgetAnnotations(r_26);
                        s_5 = t;
                        t = s_26;
                        t = pat_td_1_0(z_144, t);
                        v_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, v_5, t_26);
                        u_3 = t;
                        t = SSLsetAnnotations(u_3, s_5);
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
                      ATerm l_6 = NULL,v_6 = NULL,w_3 = NULL;
                      t = SSLgetAnnotations(r_26);
                      l_6 = t;
                      t = q_26;
                      {
                        static ATerm c_2 (ATerm t)
                        {
                          t = pat_td_1_0(z_144, t);
                          return(t);
                        }
                        t = fetch_1_0(c_2, t);
                      }
                      v_6 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, s_26, t_26, v_6);
                      w_3 = t;
                      t = SSLsetAnnotations(w_3, l_6);
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
                          ATerm m_8 = NULL,s_8 = NULL,x_3 = NULL;
                          t = SSLgetAnnotations(r_26);
                          m_8 = t;
                          t = q_26;
                          {
                            static ATerm d_2 (ATerm t)
                            {
                              t = pat_td_1_0(z_144, t);
                              return(t);
                            }
                            t = fetch_1_0(d_2, t);
                          }
                          s_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, s_26, t_26, s_8);
                          x_3 = t;
                          t = SSLsetAnnotations(x_3, m_8);
                        }
                      }
                    else
                      {
                        ATerm q_9 = NULL,t_9 = NULL,y_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            s_26 = ATgetArgument(t, 0);
                            t_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(r_26);
                        q_9 = t;
                        t = t_26;
                        t = pat_td_1_0(z_144, t);
                        t_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, s_26, t_9);
                        y_3 = t;
                        t = SSLsetAnnotations(y_3, q_9);
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
  ATerm o_27 = NULL,p_27 = NULL;
  o_27 = t;
  if(match_cons(t, sym_Build_1))
    {
      p_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_27 = NULL,v_27 = NULL,x_27 = NULL,y_27 = NULL;
        t = o_27;
        t = new_0_0(t);
        x_27 = t;
        t = p_27;
        {
          static ATerm e_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((q_27 != NULL) && (q_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  q_27 = ATgetArgument(t, 0);
                if(((v_27 != NULL) && (v_27 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  v_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, x_27);
            return(t);
          }
          t = pat_td_1_0(e_2, t);
        }
        y_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_35, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_27)), not_null(q_27))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_27)))), (ATerm) ATmakeAppl(sym_Build_1, y_27)));
        LocalPopChoice(v_35);
      }
    else
      {
        t = u_35;
        {
          ATerm b_36 = t;
          int c_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_27 = NULL,b_28 = NULL,c_28 = NULL;
              t = o_27;
              t = new_0_0(t);
              b_28 = t;
              t = p_27;
              {
                static ATerm f_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((z_27 != NULL) && (z_27 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        z_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, b_28);
                  return(t);
                }
                t = pat_td_1_0(f_2, t);
              }
              c_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_28)))), (ATerm) ATmakeAppl(sym_Build_1, c_28)));
              LocalPopChoice(c_36);
            }
          else
            {
              t = b_36;
              {
                ATerm g_28 = NULL,i_28 = NULL,n_28 = NULL,p_28 = NULL;
                t = o_27;
                t = new_0_0(t);
                n_28 = t;
                t = p_27;
                {
                  static ATerm g_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((g_28 != NULL) && (g_28 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          g_28 = ATgetArgument(t, 0);
                        if(((i_28 != NULL) && (i_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          i_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_28);
                    return(t);
                  }
                  t = pat_td_1_0(g_2, t);
                }
                p_28 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(g_28), not_null(i_28), (ATerm) ATmakeAppl(sym_Var_1, n_28))), (ATerm) ATmakeAppl(sym_Build_1, p_28)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm d_36 = t;
  if((PushChoice() == 0))
    {
      ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL,h_8 = NULL;
      n_29 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_29);
      l_29 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_29);
      h_8 = t;
      t = SSLsetAnnotations(h_8, l_29);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_36;
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_36;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_29 = ATgetFirst((ATermList) t);
      p_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_29, p_29);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,y_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_36 = ATgetArgument(t, 0);
      if(match_cons(k_36, sym__2))
        {
          q_29 = ATgetArgument(k_36, 0);
          r_29 = ATgetArgument(k_36, 1);
        }
      else
        _fail(t);
      {
        ATerm l_36 = ATgetArgument(t, 1);
        if(match_cons(l_36, sym__2))
          {
            s_29 = ATgetArgument(l_36, 0);
            y_29 = ATgetArgument(l_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_29), q_29), (ATerm) ATinsert(CheckATermList(y_29), r_29));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_36;
  return(t);
}
static ATerm q_2 (ATerm t)
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
static ATerm r_2 (ATerm t)
{
  ATerm b_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_36 = ATgetArgument(t, 0);
      if(match_cons(o_36, sym__2))
        {
          b_30 = ATgetArgument(o_36, 0);
          g_30 = ATgetArgument(o_36, 1);
        }
      else
        _fail(t);
      {
        ATerm p_36 = ATgetArgument(t, 1);
        if(match_cons(p_36, sym__2))
          {
            h_30 = ATgetArgument(p_36, 0);
            i_30 = ATgetArgument(p_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_30), b_30), (ATerm) ATinsert(CheckATermList(i_30), g_30));
  return(t);
}
static ATerm q_12 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,x_28 = NULL,y_28 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,i_8 = NULL;
  t = y_73;
  t = fetch_1_0(i_2, t);
  t = y_73;
  t = genzip_4_0(m_2, n_2, o_2, LiftPrimArg_0_0, t);
  g_29 = t;
  if(match_cons(t, sym__2))
    {
      y_28 = ATgetArgument(t, 0);
      d_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_29);
  x_28 = t;
  t = y_28;
  t = concat_0_0(t);
  e_29 = t;
  t = d_29;
  t = genzip_4_0(p_2, q_2, r_2, _id, t);
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_29, f_29);
  i_8 = t;
  t = SSLsetAnnotations(i_8, x_28);
  if(match_cons(t, sym__2))
    {
      r_28 = ATgetArgument(t, 0);
      {
        ATerm q_36 = ATgetArgument(t, 1);
        if(match_cons(q_36, sym__2))
          {
            s_28 = ATgetArgument(q_36, 0);
            t_28 = ATgetArgument(q_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, r_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_28), (ATerm) ATmakeAppl(sym_CallT_3, w_73, x_73, t_28)));
  return(t);
}
static ATerm i_31 (ATerm m_30, ATerm t)
{
  ATerm o_30 = NULL;
  t = m_30;
  {
    ATerm s_36 = t;
    if((PushChoice() == 0))
      {
        ATerm v_30 = NULL,w_30 = NULL,a_31 = NULL,d_9 = NULL;
        a_31 = t;
        if(match_cons(t, sym_Var_1))
          {
            w_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_31);
        v_30 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, w_30);
        d_9 = t;
        t = SSLsetAnnotations(d_9, v_30);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_36;
      }
  }
  t = new_0_0(t);
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, o_30), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_30)))), (ATerm) ATmakeAppl(sym_Var_1, o_30)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm b_31 = NULL,g_31 = NULL;
  b_31 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_31 = ATgetArgument(t, 0);
      {
        ATerm t_36 = t;
        int v_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_31(b_31, t);
            LocalPopChoice(v_36);
          }
        else
          {
            t = t_36;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_m_27, (ATerm) ATmakeAppl(sym_Var_1, g_31)));
          }
      }
    }
  else
    {
      t = i_31(b_31, t);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm x_36 = t;
  if((PushChoice() == 0))
    {
      ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,f_11 = NULL;
      a_11 = t;
      if(match_cons(t, sym_Var_1))
        {
          z_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_11);
      y_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, z_10);
      f_11 = t;
      t = SSLsetAnnotations(f_11, y_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_36;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_36;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_11 = ATgetFirst((ATermList) t);
      c_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_11, c_11);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,k_11 = NULL,m_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_36 = ATgetArgument(t, 0);
      if(match_cons(z_36, sym__2))
        {
          d_11 = ATgetArgument(z_36, 0);
          e_11 = ATgetArgument(z_36, 1);
        }
      else
        _fail(t);
      {
        ATerm b_37 = ATgetArgument(t, 1);
        if(match_cons(b_37, sym__2))
          {
            k_11 = ATgetArgument(b_37, 0);
            m_11 = ATgetArgument(b_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_11), d_11), (ATerm) ATinsert(CheckATermList(m_11), e_11));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_36;
  return(t);
}
static ATerm y_2 (ATerm t)
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
static ATerm a_3 (ATerm t)
{
  ATerm t_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_37 = ATgetArgument(t, 0);
      if(match_cons(c_37, sym__2))
        {
          t_11 = ATgetArgument(c_37, 0);
          x_11 = ATgetArgument(c_37, 1);
        }
      else
        _fail(t);
      {
        ATerm d_37 = ATgetArgument(t, 1);
        if(match_cons(d_37, sym__2))
          {
            y_11 = ATgetArgument(d_37, 0);
            z_11 = ATgetArgument(d_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_11), t_11), (ATerm) ATinsert(CheckATermList(z_11), x_11));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm e_37 = t;
  if((PushChoice() == 0))
    {
      ATerm j_13 = NULL,k_13 = NULL,m_13 = NULL,h_11 = NULL;
      m_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_13);
      j_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_13);
      h_11 = t;
      t = SSLsetAnnotations(h_11, j_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_37;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_36;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm q_13 = NULL,r_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_13 = ATgetFirst((ATermList) t);
      r_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_13, r_13);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm t_13 = NULL,v_13 = NULL,y_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_37 = ATgetArgument(t, 0);
      if(match_cons(f_37, sym__2))
        {
          t_13 = ATgetArgument(f_37, 0);
          v_13 = ATgetArgument(f_37, 1);
        }
      else
        _fail(t);
      {
        ATerm i_37 = ATgetArgument(t, 1);
        if(match_cons(i_37, sym__2))
          {
            y_14 = ATgetArgument(i_37, 0);
            a_15 = ATgetArgument(i_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_14), t_13), (ATerm) ATinsert(CheckATermList(a_15), v_13));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_36;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm d_15 = NULL,e_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_15 = ATgetFirst((ATermList) t);
      e_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_15, e_15);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_37 = ATgetArgument(t, 0);
      if(match_cons(j_37, sym__2))
        {
          f_15 = ATgetArgument(j_37, 0);
          g_15 = ATgetArgument(j_37, 1);
        }
      else
        _fail(t);
      {
        ATerm k_37 = ATgetArgument(t, 1);
        if(match_cons(k_37, sym__2))
          {
            r_15 = ATgetArgument(k_37, 0);
            s_15 = ATgetArgument(k_37, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_15), f_15), (ATerm) ATinsert(CheckATermList(s_15), g_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,h_36 = NULL,i_36 = NULL;
  f_36 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      h_36 = ATgetArgument(t, 0);
      i_36 = ATgetArgument(t, 1);
      e_36 = ATgetArgument(t, 2);
      {
        ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,g_11 = NULL;
        t = e_36;
        t = fetch_1_0(s_2, t);
        t = e_36;
        t = genzip_4_0(t_2, v_2, w_2, LiftPrimArg_0_0, t);
        x_10 = t;
        if(match_cons(t, sym__2))
          {
            t_10 = ATgetArgument(t, 0);
            u_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_10);
        s_10 = t;
        t = t_10;
        t = concat_0_0(t);
        v_10 = t;
        t = u_10;
        t = genzip_4_0(x_2, y_2, a_3, _id, t);
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_10, w_10);
        g_11 = t;
        t = SSLsetAnnotations(g_11, s_10);
        if(match_cons(t, sym__2))
          {
            p_10 = ATgetArgument(t, 0);
            {
              ATerm m_37 = ATgetArgument(t, 1);
              if(match_cons(m_37, sym__2))
                {
                  q_10 = ATgetArgument(m_37, 0);
                  r_10 = ATgetArgument(m_37, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_10), (ATerm) ATmakeAppl(sym_PrimT_3, h_36, i_36, r_10)));
      }
    }
  else
    {
      ATerm p_12 = NULL,t_12 = NULL,v_12 = NULL,y_12 = NULL,a_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,i_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          h_36 = ATgetArgument(t, 0);
          i_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_36;
      t = fetch_1_0(c_3, t);
      t = i_36;
      t = genzip_4_0(d_3, e_3, f_3, LiftPrimArg_0_0, t);
      f_13 = t;
      if(match_cons(t, sym__2))
        {
          a_13 = ATgetArgument(t, 0);
          c_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_13);
      y_12 = t;
      t = a_13;
      t = concat_0_0(t);
      d_13 = t;
      t = c_13;
      t = genzip_4_0(g_3, i_3, j_3, _id, t);
      e_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_13, e_13);
      i_11 = t;
      t = SSLsetAnnotations(i_11, y_12);
      if(match_cons(t, sym__2))
        {
          p_12 = ATgetArgument(t, 0);
          {
            ATerm n_37 = ATgetArgument(t, 1);
            if(match_cons(n_37, sym__2))
              {
                t_12 = ATgetArgument(n_37, 0);
                v_12 = ATgetArgument(n_37, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, p_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_12), (ATerm) ATmakeAppl(sym_PrimT_3, h_36, (ATerm)ATempty, v_12)));
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,l_37 = NULL,p_37 = NULL;
  p_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      g_37 = ATgetArgument(t, 0);
      h_37 = ATgetArgument(t, 1);
      l_37 = ATgetArgument(t, 2);
      {
        ATerm n_16 = NULL,w_21 = NULL;
        t = SSLgetAnnotations(p_37);
        n_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, g_37, h_37, l_37);
        w_21 = t;
        t = SSLsetAnnotations(w_21, n_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = p_37;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm o_37 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(k_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_37;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  if(match_cons(t, sym_Con_3))
    {
      g_40 = ATgetArgument(t, 0);
      h_40 = ATgetArgument(t, 1);
      e_40 = ATgetArgument(t, 2);
      {
        ATerm q_17 = NULL,y_21 = NULL;
        t = SSLgetAnnotations(f_40);
        q_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, g_40, h_40, e_40);
        y_21 = t;
        t = SSLsetAnnotations(y_21, q_17);
      }
    }
  else
    {
      ATerm b_19 = NULL,z_21 = NULL;
      if(match_cons(t, sym_App_2))
        {
          g_40 = ATgetArgument(t, 0);
          h_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_40);
      b_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, g_40, h_40);
      z_21 = t;
      t = SSLsetAnnotations(z_21, b_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm q_37 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(o_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_37;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      z_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_40;
  if(match_cons(t, sym_StratRule_3))
    {
      a_41 = ATgetArgument(t, 0);
      b_41 = ATgetArgument(t, 1);
      c_41 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_41), (ATerm) ATmakeAppl(sym_Where_1, c_41)), a_41));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          a_41 = ATgetArgument(t, 0);
          b_41 = ATgetArgument(t, 1);
          c_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = a_41;
      t = pureterm_0_0(t);
      t = b_41;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, b_41)), (ATerm) ATmakeAppl(sym_Where_1, c_41)), (ATerm) ATmakeAppl(sym_Match_1, a_41)));
    }
  return(t);
}
static ATerm r_12 (ATerm j_69, ATerm k_69, ATerm l_69, ATerm t)
{
  ATerm m_41 = NULL,t_41 = NULL,v_41 = NULL,x_41 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  t = new_0_0(t);
  e_42 = t;
  t = j_69;
  {
    static ATerm p_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm r_37 = ATgetArgument(t, 0);
          if(match_cons(r_37, sym_Var_1))
            {
              if(((x_41 != NULL) && (x_41 != ATgetArgument(r_37, 0))))
                _fail(ATgetArgument(r_37, 0));
              else
                x_41 = ATgetArgument(r_37, 0);
            }
          else
            _fail(t);
          if(((t_41 != NULL) && (t_41 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_41 = ATgetArgument(t, 1);
          {
            ATerm s_37 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, x_41);
      return(t);
    }
    t = oncetd_1_0(p_3, t);
  }
  f_42 = t;
  t = k_69;
  {
    static ATerm q_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm t_37 = ATgetArgument(t, 0);
          if(match_cons(t_37, sym_Var_1))
            {
              if(((x_41 != NULL) && (x_41 != ATgetArgument(t_37, 0))))
                _fail(ATgetArgument(t_37, 0));
              else
                x_41 = ATgetArgument(t_37, 0);
            }
          else
            _fail(t);
          if(((v_41 != NULL) && (v_41 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            v_41 = ATgetArgument(t, 1);
          {
            ATerm u_37 = ATgetArgument(t, 2);
            if(match_cons(u_37, sym_CallT_3))
              {
                if(((m_41 != NULL) && (m_41 != ATgetArgument(u_37, 0))))
                  _fail(ATgetArgument(u_37, 0));
                else
                  m_41 = ATgetArgument(u_37, 0);
                {
                  ATerm w_37 = ATgetArgument(u_37, 1);
                  if(((ATgetType(w_37) != AT_LIST) || !(ATisEmpty(w_37))))
                    _fail(t);
                }
                {
                  ATerm x_37 = ATgetArgument(u_37, 2);
                  if(((ATgetType(x_37) != AT_LIST) || !(ATisEmpty(x_37))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, e_42);
      return(t);
    }
    t = oncetd_1_0(q_3, t);
  }
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_42), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, f_42, g_42, (ATerm) ATmakeAppl(sym_Seq_2, l_69, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(m_41), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_41), not_null(v_41), term_m_27))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_41)), (ATerm) ATmakeAppl(sym_Var_1, e_42))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm y_37 = t;
  int z_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_38 = t;
      int b_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
          x_42 = t;
          if(match_cons(t, sym_SRule_1))
            {
              y_42 = ATgetArgument(t, 0);
              t = y_42;
              if(match_cons(t, sym_Rule_3))
                {
                  u_42 = ATgetArgument(t, 0);
                  v_42 = ATgetArgument(t, 1);
                  w_42 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = x_42;
              t = r_12(u_42, v_42, w_42, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm a_20 = NULL,n_20 = NULL,g_22 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  y_42 = ATgetArgument(t, 0);
                  z_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_42);
              a_20 = t;
              t = z_42;
              t = desugarRule_0_0(t);
              n_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, y_42, n_20);
              g_22 = t;
              t = SSLsetAnnotations(g_22, a_20);
            }
          LocalPopChoice(b_38);
        }
      else
        {
          t = a_38;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(z_37);
    }
  else
    {
      t = y_37;
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm d_38 = t;
  int e_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(e_38);
    }
  else
    {
      t = d_38;
    }
  t = repeat_2_0(v_3, _id, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm f_38 = t;
  int g_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(g_38);
    }
  else
    {
      t = f_38;
      {
        ATerm h_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_43 = NULL,a_44 = NULL,d_44 = NULL,e_44 = NULL;
            z_43 = t;
            if(match_cons(t, sym_CallT_3))
              {
                a_44 = ATgetArgument(t, 0);
                d_44 = ATgetArgument(t, 1);
                e_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = z_43;
            t = q_12(a_44, d_44, e_44, t);
            LocalPopChoice(i_38);
          }
        else
          {
            t = h_38;
            {
              ATerm j_38 = t;
              int k_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(k_38);
                }
              else
                {
                  t = j_38;
                  {
                    ATerm n_38 = t;
                    int q_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(q_38);
                      }
                    else
                      {
                        t = n_38;
                        {
                          ATerm r_38 = t;
                          int s_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_38 = t;
                              int u_38 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm m_44 = NULL,n_44 = NULL,z_44 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      m_44 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = m_44;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      n_44 = ATgetArgument(t, 0);
                                      t = n_44;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          n_44 = ATgetArgument(t, 0);
                                          z_44 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, n_44, z_44);
                                    }
                                  LocalPopChoice(u_38);
                                }
                              else
                                {
                                  t = t_38;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(s_38);
                            }
                          else
                            {
                              t = r_38;
                              {
                                ATerm v_38 = t;
                                int w_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(w_38);
                                  }
                                else
                                  {
                                    t = v_38;
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
  t = topdown_1_0(t_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm l_47 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_47 = ATgetArgument(t, 0);
      t = l_47;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_47 = ATgetArgument(t, 0);
          {
            ATerm x_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_47;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_47), (ATerm) ATempty);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm v_47 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_47 = ATgetArgument(t, 0);
      t = v_47;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_47 = ATgetArgument(t, 0);
          {
            ATerm y_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_47;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, v_47);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm f_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_48);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm a_39 = t;
  int b_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_39);
    }
  else
    {
      t = a_39;
      {
        ATerm c_39 = t;
        int d_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_39);
          }
        else
          {
            t = c_39;
            {
              ATerm h_39 = t;
              int j_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_48 = ATgetArgument(t, 0);
                      i_48 = ATgetArgument(t, 1);
                      j_48 = ATgetArgument(t, 2);
                      k_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_48;
                  t = map_1_0(d_4, t);
                  LocalPopChoice(j_39);
                }
              else
                {
                  t = h_39;
                  {
                    ATerm k_39 = t;
                    int o_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_39);
                      }
                    else
                      {
                        t = k_39;
                        t = dynrule_targs_1_0(e_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm a_49 = NULL;
  ATerm q_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_49 = ATgetArgument(t, 0);
          {
            ATerm t_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_39);
      t = a_49;
    }
  else
    {
      t = q_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_49;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = map_1_0(f_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm f_49 = NULL;
  ATerm u_39 = t;
  int w_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_49 = ATgetArgument(t, 0);
          {
            ATerm x_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_39);
      t = f_49;
    }
  else
    {
      t = u_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_49;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm q_49 = NULL;
  q_49 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_49);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm s_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_49);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm y_39 = t;
  int z_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(b_40);
          }
        else
          {
            t = a_40;
            {
              ATerm c_40 = t;
              int d_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_49 = NULL,x_49 = NULL,y_49 = NULL,d_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_49 = ATgetArgument(t, 0);
                      x_49 = ATgetArgument(t, 1);
                      y_49 = ATgetArgument(t, 2);
                      d_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_49;
                  t = map_1_0(r_4, t);
                  LocalPopChoice(d_40);
                }
              else
                {
                  t = c_40;
                  {
                    ATerm i_40 = t;
                    int j_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(j_40);
                      }
                    else
                      {
                        t = i_40;
                        t = dynrule_targs_1_0(s_4, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm k_50 = NULL;
  ATerm k_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_50 = ATgetArgument(t, 0);
          {
            ATerm t_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_40);
      t = k_50;
    }
  else
    {
      t = k_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_50;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = map_1_0(t_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm f_51 = NULL;
  ATerm v_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_51 = ATgetArgument(t, 0);
          {
            ATerm y_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_40);
      t = f_51;
    }
  else
    {
      t = v_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_51;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm j_51 = NULL;
  j_51 = t;
  {
    ATerm d_41 = t;
    int e_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_51 = NULL,f_21 = NULL,i_21 = NULL,i_22 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            q_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_51);
        f_21 = t;
        t = q_51;
        t = ContextVar_0_0(t);
        i_21 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, i_21);
        i_22 = t;
        t = SSLsetAnnotations(i_22, f_21);
        LocalPopChoice(e_41);
      }
    else
      {
        t = d_41;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, j_51);
  return(t);
}
static ATerm s_12 (ATerm p_146 (ATerm), ATerm m_82, ATerm j_82, ATerm k_82, ATerm t_82, ATerm x_82, ATerm y_82, ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,o_46 = NULL,p_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,a_47 = NULL,c_47 = NULL,d_47 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_82, term_n_30);
  {
    ATerm f_41 = t;
    if((PushChoice() == 0))
      {
        ATerm i_47 = NULL;
        if(match_cons(t, sym__2))
          {
            i_47 = ATgetArgument(t, 0);
            if((i_47 != ATgetArgument(t, 1)))
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
        t = f_41;
      }
  }
  t = term_g_41;
  d_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_41, m_82);
  t = j_14(d_47, m_82, t);
  f_46 = t;
  t = term_i_41;
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_41, m_82);
  t = j_14(c_47, m_82, t);
  g_46 = t;
  t = new_0_0(t);
  h_46 = t;
  t = j_82;
  t = map_1_0(z_3, t);
  i_46 = t;
  t = k_82;
  t = map_1_0(a_4, t);
  o_46 = t;
  t = new_0_0(t);
  p_46 = t;
  t = t_82;
  t = dummify_0_0(t);
  v_46 = t;
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_46;
        if((t_82 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, p_46);
        LocalPopChoice(k_41);
      }
    else
      {
        t = j_41;
        t = v_46;
      }
  }
  u_46 = t;
  t = v_46;
  t = free_vars_3_0(b_4, c_4, tboundin_3_0, t);
  t = map_1_0(g_4, t);
  x_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_82, y_82);
  t = free_vars_3_0(i_4, j_4, tboundin_3_0, t);
  t = filter_1_0(u_4, t);
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_46, x_46);
  t = diff_0_0(t);
  y_46 = t;
  t = new_0_0(t);
  z_46 = t;
  t = m_82;
  t = p_146(t);
  a_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, a_47, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_h_31, (ATerm) ATinsert(CheckATermList(y_46), (ATerm) ATmakeAppl(sym_Str_1, z_46)))), v_46)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, g_46, j_82, k_82, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_h_31, (ATerm) ATinsert(CheckATermList(y_46), (ATerm) ATmakeAppl(sym_Str_1, z_46)))), t_82)), x_82, (ATerm) ATmakeAppl(sym_Seq_2, term_c_42, y_82)))), (ATerm) ATmakeAppl(sym_RDefT_4, f_46, j_82, k_82, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, p_46), t_82), (ATerm)ATmakeAppl(sym_Var_1, h_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_w_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_82)))), u_46), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_r_41, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_46), i_46, o_46), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_z_41), (ATerm) ATmakeAppl(sym_Var_1, p_46)))))), (ATerm) ATmakeAppl(sym_Var_1, h_46)))))), (ATerm) ATmakeAppl(sym_RDefT_4, m_82, j_82, k_82, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, p_46), t_82), x_82, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_w_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_82)))), u_46), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_h_31, (ATerm) ATinsert(CheckATermList(y_46), (ATerm) ATmakeAppl(sym_Str_1, z_46)))), term_l_41))), y_82)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm d_42 = t;
  int h_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,j_22 = NULL;
      t_21 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          u_21 = ATgetArgument(t, 0);
          v_21 = ATgetArgument(t, 1);
          b_22 = ATgetArgument(t, 2);
          c_22 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = c_22;
      if(match_cons(t, sym_Rule_3))
        {
          d_22 = ATgetArgument(t, 0);
          e_22 = ATgetArgument(t, 1);
          j_22 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_21;
      t = s_12(x_4, u_21, v_21, b_22, d_22, e_22, j_22, t);
      LocalPopChoice(h_42);
    }
  else
    {
      t = d_42;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(z_4, t);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_22))));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_22))));
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_36;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_22 = ATgetFirst((ATermList) t);
      t_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_22, t_22);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_42 = ATgetArgument(t, 0);
      if(match_cons(n_42, sym__2))
        {
          u_22 = ATgetArgument(n_42, 0);
          v_22 = ATgetArgument(n_42, 1);
        }
      else
        _fail(t);
      {
        ATerm o_42 = ATgetArgument(t, 1);
        if(match_cons(o_42, sym__2))
          {
            w_22 = ATgetArgument(o_42, 0);
            x_22 = ATgetArgument(o_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_22), u_22), (ATerm) ATinsert(CheckATermList(x_22), v_22));
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
      x_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          y_23 = ATgetArgument(t, 0);
          z_23 = ATgetArgument(t, 1);
          a_24 = ATgetArgument(t, 2);
          b_24 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = b_24;
      if(match_cons(t, sym_Rule_3))
        {
          e_24 = ATgetArgument(t, 0);
          f_24 = ATgetArgument(t, 1);
          g_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_23;
      t = s_12(g_5, y_23, z_23, a_24, e_24, f_24, g_24, t);
      LocalPopChoice(q_42);
    }
  else
    {
      t = p_42;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(j_5, t);
    }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, v_24))));
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_a_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_24))));
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_36;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm c_25 = NULL,d_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_25 = ATgetFirst((ATermList) t);
      d_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_25, d_25);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL,h_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_43 = ATgetArgument(t, 0);
      if(match_cons(b_43, sym__2))
        {
          e_25 = ATgetArgument(b_43, 0);
          f_25 = ATgetArgument(b_43, 1);
        }
      else
        _fail(t);
      {
        ATerm c_43 = ATgetArgument(t, 1);
        if(match_cons(c_43, sym__2))
          {
            g_25 = ATgetArgument(c_43, 0);
            h_25 = ATgetArgument(c_43, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_25), e_25), (ATerm) ATinsert(CheckATermList(h_25), f_25));
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(t_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm e_57 = NULL;
  e_57 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, e_57))));
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_36;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_57 = ATgetFirst((ATermList) t);
      g_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_57, g_57);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm h_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_43 = ATgetArgument(t, 0);
      if(match_cons(g_43, sym__2))
        {
          h_57 = ATgetArgument(g_43, 0);
          l_57 = ATgetArgument(g_43, 1);
        }
      else
        _fail(t);
      {
        ATerm h_43 = ATgetArgument(t, 1);
        if(match_cons(h_43, sym__2))
          {
            m_57 = ATgetArgument(h_43, 0);
            n_57 = ATgetArgument(h_43, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_57), h_57), (ATerm) ATinsert(CheckATermList(n_57), l_57));
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(a_6, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm u_57 = NULL;
  u_57 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_l_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_57))));
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_36;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_57 = ATgetFirst((ATermList) t);
      w_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_57, w_57);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_43 = ATgetArgument(t, 0);
      if(match_cons(m_43, sym__2))
        {
          x_57 = ATgetArgument(m_43, 0);
          y_57 = ATgetArgument(m_43, 1);
        }
      else
        _fail(t);
      {
        ATerm n_43 = ATgetArgument(t, 1);
        if(match_cons(n_43, sym__2))
          {
            z_57 = ATgetArgument(n_43, 0);
            a_58 = ATgetArgument(n_43, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_57), x_57), (ATerm) ATinsert(CheckATermList(a_58), y_57));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL;
  y_56 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      z_56 = ATgetArgument(t, 0);
      {
        ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,b_23 = NULL;
        t = z_56;
        t = map_1_0(v_4, t);
        t = genzip_4_0(c_5, d_5, e_5, _id, t);
        s_21 = t;
        if(match_cons(t, sym__2))
          {
            p_21 = ATgetArgument(t, 0);
            q_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_21);
        o_21 = t;
        t = q_21;
        t = concat_0_0(t);
        r_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_21, r_21);
        b_23 = t;
        t = SSLsetAnnotations(b_23, o_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          z_56 = ATgetArgument(t, 0);
          {
            ATerm r_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,c_23 = NULL;
            t = z_56;
            t = map_1_0(f_5, t);
            t = genzip_4_0(m_5, p_5, q_5, _id, t);
            w_23 = t;
            if(match_cons(t, sym__2))
              {
                t_23 = ATgetArgument(t, 0);
                u_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_23);
            r_23 = t;
            t = u_23;
            t = concat_0_0(t);
            v_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_23, v_23);
            c_23 = t;
            t = SSLsetAnnotations(c_23, r_23);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              z_56 = ATgetArgument(t, 0);
              t = z_56;
              t = map_1_0(r_5, t);
              t = genzip_4_0(u_5, w_5, x_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  z_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_56;
              t = map_1_0(z_5, t);
              t = genzip_4_0(b_6, f_6, h_6, _id, t);
            }
        }
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_o_43;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm r_146 (ATerm), ATerm t)
{
  static ATerm r_59 (ATerm t)
  {
    static ATerm i_6 (ATerm t)
    {
      ATerm p_43 = t;
      int r_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_146(t);
          LocalPopChoice(r_43);
        }
      else
        {
          t = p_43;
          {
            ATerm y_58 = NULL,b_59 = NULL,f_59 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                y_58 = ATgetArgument(t, 0);
                b_59 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, y_58, b_59);
            {
              static ATerm k_6 (ATerm t)
              {
                t = y_58;
                t = DeclareContextVars_0_0(t);
                t = b_59;
                t = r_59(t);
                if(((f_59 != NULL) && (f_59 != t)))
                  _fail(t);
                else
                  f_59 = t;
                return(t);
              }
              t = scope_2_0(j_6, k_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, y_58, not_null(f_59));
          }
        }
      return(t);
    }
    t = oncetd_1_0(i_6, t);
    return(t);
  }
  t = r_59(t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = term_o_43;
  return(t);
}
static ATerm u_12 (ATerm m_83, ATerm l_83, ATerm t)
{
  ATerm t_59 = NULL,u_59 = NULL,v_59 = NULL;
  static ATerm n_6 (ATerm t)
  {
    t = m_83;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = m_83;
    {
      static ATerm o_6 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((u_59 != NULL) && (u_59 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              u_59 = ATgetArgument(t, 0);
            if(((t_59 != NULL) && (t_59 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              t_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, u_59);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(o_6, t);
    }
    if(((v_59 != NULL) && (v_59 != t)))
      _fail(t);
    else
      v_59 = t;
    return(t);
  }
  t = scope_2_0(m_6, n_6, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_59)), not_null(v_59)), l_83);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,g_60 = NULL,h_60 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      g_60 = ATgetArgument(t, 0);
      h_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_60 = ATgetFirst((ATermList) t);
      c_60 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_t_43, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, c_60, h_60)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, b_60))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_60;
    }
  return(t);
}
static ATerm y_61 (ATerm y_60, ATerm t)
{
  t = SSL_is_string(y_60);
  return(t);
}
static ATerm z_61 (ATerm d_61, ATerm t)
{
  ATerm h_61 = NULL,m_61 = NULL,p_61 = NULL;
  t = term_v_43;
  m_61 = t;
  t = (ATerm) ATinsert(ATempty, term_w_43);
  p_61 = t;
  t = SSL_printnl(m_61, p_61);
  t = d_61;
  t = debug_1_0(p_6, t);
  t = term_x_43;
  h_61 = t;
  t = SSL_exit(h_61);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  t = term_y_43;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm s_61 = NULL,t_61 = NULL;
  t_61 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      s_61 = ATgetArgument(t, 0);
      {
        ATerm b_44 = t;
        int c_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_61(t_61, t);
            LocalPopChoice(c_44);
          }
        else
          {
            t = b_44;
            t = s_61;
          }
      }
    }
  else
    {
      ATerm f_44 = t;
      int g_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_61(t_61, t);
          LocalPopChoice(g_44);
        }
      else
        {
          t = f_44;
          t = z_61(t_61, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_63 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      h_63 = ATgetArgument(t, 0);
      m_63 = ATgetArgument(t, 1);
      t = h_63;
      if(match_cons(t, sym_DynRuleId_1))
        {
          i_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_63;
      if(match_cons(t, sym_RDecT_3))
        {
          j_63 = ATgetArgument(t, 0);
          k_63 = ATgetArgument(t, 1);
          l_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, j_63, k_63, l_63, (ATerm) ATmakeAppl(sym_Rule_3, m_63, term_n_30, term_m_27));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          h_63 = ATgetArgument(t, 0);
          m_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_63;
      if(match_cons(t, sym_DynRuleId_1))
        {
          i_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_63;
      if(match_cons(t, sym_RDecT_3))
        {
          j_63 = ATgetArgument(t, 0);
          k_63 = ATgetArgument(t, 1);
          l_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, j_63, k_63, l_63, m_63);
    }
  return(t);
}
static ATerm r_65 (ATerm t_64, ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL;
  t = t_64;
  if(match_cons(t, sym_GenDynRules_1))
    {
      b_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_65;
  t = filter_1_0(q_6, t);
  c_65 = t;
  t = t_64;
  if(match_cons(t, sym_GenDynRules_1))
    {
      z_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_64;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  a_65 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, c_65), (ATerm) ATmakeAppl(sym_DynamicRules_1, a_65));
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm i_44 = ATgetArgument(t, 0);
      if(match_cons(i_44, sym_DynRuleId_1))
        {
          ATerm j_44 = ATgetArgument(i_44, 0);
          if(match_cons(j_44, sym_RDecT_3))
            {
              d_65 = ATgetArgument(j_44, 0);
              e_65 = ATgetArgument(j_44, 1);
              f_65 = ATgetArgument(j_44, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      g_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, d_65, e_65, f_65, g_65);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm k_44 = ATgetArgument(t, 0);
      ATerm l_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL;
  i_65 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      h_65 = ATgetArgument(t, 0);
      {
        ATerm o_44 = t;
        int p_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_25 = NULL;
            t = h_65;
            {
              ATerm r_44 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(r_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = r_44;
                }
            }
            t = h_65;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            w_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, w_25);
            LocalPopChoice(p_44);
          }
        else
          {
            t = o_44;
            t = r_65(i_65, t);
          }
      }
    }
  else
    {
      t = r_65(i_65, t);
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm s_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_65 = NULL;
      w_65 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm a_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_65;
      LocalPopChoice(x_44);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = s_44;
      {
        ATerm e_45 = t;
        int g_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_65 = NULL;
            x_65 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm h_45 = ATgetArgument(t, 0);
                ATerm i_45 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_65;
            LocalPopChoice(g_45);
            {
              ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  y_65 = ATgetArgument(t, 0);
                  z_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_65;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              a_66 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, a_66, z_65);
            }
          }
        else
          {
            t = e_45;
          }
      }
    }
  return(t);
}
ATerm downgrade_new_dr_syntax_0_0 (ATerm t)
{
  t = topdown_1_0(s_6, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = Cons_2_0(w_6, x_6, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm t_66 = NULL,x_66 = NULL,a_67 = NULL,b_67 = NULL,h_23 = NULL;
  b_67 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_67);
  t_66 = t;
  t = x_66;
  t = topdown_1_0(y_6, t);
  t = listtd_1_0(z_6, t);
  a_67 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_67);
  h_23 = t;
  t = SSLsetAnnotations(h_23, t_66);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm j_45 = t;
  int k_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(k_45);
    }
  else
    {
      t = j_45;
    }
  return(t);
}
static ATerm z_6 (ATerm t)
{
  t = repeat_2_0(a_7, _id, t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm k_67 = NULL,l_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_67 = ATgetFirst((ATermList) t);
      l_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_12(k_67, l_67, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,o_66 = NULL,r_66 = NULL,j_23 = NULL,i_23 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  r_66 = t;
  if(match_cons(t, sym_Specification_1))
    {
      g_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_66);
  f_66 = t;
  t = g_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_66 = ATgetFirst((ATermList) t);
      j_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_66);
  h_66 = t;
  t = j_66;
  t = Cons_2_0(_id, t_6, t);
  k_66 = t;
  t = (ATerm) ATinsert(CheckATermList(k_66), i_66);
  i_23 = t;
  t = SSLsetAnnotations(i_23, h_66);
  o_66 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, o_66);
  j_23 = t;
  t = SSLsetAnnotations(j_23, f_66);
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm l_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_67 = NULL,v_67 = NULL,a_68 = NULL,e_68 = NULL,n_23 = NULL;
      e_68 = t;
      if(match_cons(t, sym__2))
        {
          v_67 = ATgetArgument(t, 0);
          a_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_68);
      t_67 = t;
      t = v_67;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = v_67;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm n_45 = ATgetFirst((ATermList) t);
              ATerm o_45 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_67;
        }
      t = (ATerm) ATmakeAppl(sym__2, v_67, a_68);
      n_23 = t;
      t = SSLsetAnnotations(n_23, t_67);
      LocalPopChoice(m_45);
      t = conc_0_0(t);
    }
  else
    {
      t = l_45;
      {
        ATerm q_68 = NULL,v_68 = NULL;
        if(match_cons(t, sym__2))
          {
            q_68 = ATgetArgument(t, 0);
            v_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(v_68), q_68);
      }
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm q_45 = t;
  int r_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_69 = NULL;
      a_69 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = a_69;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm s_45 = ATgetFirst((ATermList) t);
              ATerm t_45 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_69;
        }
      LocalPopChoice(r_45);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = q_45;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(b_7, c_7, d_7, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_v_45;
  return(t);
}
ATerm next_counter_0_0 (ATerm t)
{
  ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL;
  v_69 = t;
  {
    ATerm w_45 = t;
    int x_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_70 = NULL,j_26 = NULL;
        t = term_v_45;
        j_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_45, v_69);
        t = y_13(j_26, v_69, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_45 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_45) != ATmakeSymbol("i_0", 0, ATtrue)))
              _fail(t);
            c_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_70;
        LocalPopChoice(x_45);
      }
    else
      {
        t = w_45;
        {
          ATerm d_70 = NULL;
          t = term_c_46;
          d_70 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_69, term_c_46);
          t = z_13(e_7, v_69, d_70, t);
          t = (ATerm) ATmakeAppl(sym__2, v_69, term_b_46);
        }
      }
  }
  y_69 = t;
  t = term_x_43;
  z_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_69, term_x_43);
  t = m_14(y_69, z_69, t);
  w_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_45, w_69);
  x_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_69, (ATerm) ATmakeAppl(sym_Defined_2, term_z_45, w_69));
  t = z_13(g_7, v_69, x_69, t);
  t = w_69;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_d_46;
  return(t);
}
ATerm NewNumberedVar_0_0 (ATerm t)
{
  ATerm e_70 = NULL,f_70 = NULL,j_70 = NULL,h_71 = NULL,m_71 = NULL,n_71 = NULL;
  f_70 = t;
  t = term_j_46;
  t = next_counter_0_0(t);
  e_70 = t;
  t = SSL_int_to_string(e_70);
  h_71 = t;
  t = term_k_46;
  n_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_46, h_71);
  t = j_14(n_71, h_71, t);
  j_70 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_46, j_70);
  m_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_70, (ATerm) ATmakeAppl(sym_Defined_2, term_l_46, j_70));
  t = z_13(h_7, f_70, m_71, t);
  t = j_70;
  return(t);
}
ATerm RenameVarTerm_2_0 (ATerm v_146 (ATerm), ATerm w_146 (ATerm), ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL,v_90 = NULL,w_90 = NULL,a_91 = NULL;
  v_90 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_90 = ATgetArgument(t, 0);
      {
        ATerm m_46 = t;
        int n_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_26 = NULL,z_26 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,c_24 = NULL,s_23 = NULL;
            t = SSLgetAnnotations(v_90);
            x_26 = t;
            t = w_90;
            if(match_cons(t, sym_ListVar_1))
              {
                b_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(w_90);
            z_26 = t;
            t = b_27;
            t = v_146(t);
            e_27 = t;
            t = term_r_46;
            f_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, e_27, term_r_46);
            t = j_14(e_27, f_27, t);
            c_27 = t;
            t = (ATerm) ATmakeAppl(sym_ListVar_1, c_27);
            s_23 = t;
            t = SSLsetAnnotations(s_23, z_26);
            d_27 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, d_27);
            c_24 = t;
            t = SSLsetAnnotations(c_24, x_26);
            LocalPopChoice(n_46);
          }
        else
          {
            t = m_46;
            {
              ATerm r_27 = NULL,t_27 = NULL,d_24 = NULL;
              t = SSLgetAnnotations(v_90);
              r_27 = t;
              t = w_90;
              t = v_146(t);
              t_27 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, t_27);
              d_24 = t;
              t = SSLsetAnnotations(d_24, r_27);
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_SVar_1))
        {
          w_90 = ATgetArgument(t, 0);
          {
            ATerm j_28 = NULL,l_28 = NULL,k_24 = NULL;
            t = SSLgetAnnotations(v_90);
            j_28 = t;
            t = w_90;
            t = v_146(t);
            l_28 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, l_28);
            k_24 = t;
            t = SSLsetAnnotations(k_24, j_28);
          }
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              w_90 = ATgetArgument(t, 0);
              a_91 = ATgetArgument(t, 1);
              {
                ATerm a_29 = NULL,h_29 = NULL,l_24 = NULL;
                t = SSLgetAnnotations(v_90);
                a_29 = t;
                t = w_90;
                t = v_146(t);
                h_29 = t;
                t = (ATerm) ATmakeAppl(sym_VarDec_2, h_29, a_91);
                l_24 = t;
                t = SSLsetAnnotations(l_24, a_29);
              }
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  w_90 = ATgetArgument(t, 0);
                  {
                    ATerm w_29 = NULL,c_30 = NULL,t_24 = NULL;
                    t = SSLgetAnnotations(v_90);
                    w_29 = t;
                    t = w_90;
                    t = v_146(t);
                    c_30 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_30);
                    t_24 = t;
                    t = SSLsetAnnotations(t_24, w_29);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      w_90 = ATgetArgument(t, 0);
                      a_91 = ATgetArgument(t, 1);
                      {
                        ATerm q_30 = NULL,d_31 = NULL,e_31 = NULL,x_24 = NULL;
                        t = SSLgetAnnotations(v_90);
                        q_30 = t;
                        t = w_90;
                        t = v_146(t);
                        d_31 = t;
                        t = a_91;
                        t = w_146(t);
                        e_31 = t;
                        t = (ATerm) ATmakeAppl(sym_Rec_2, d_31, e_31);
                        x_24 = t;
                        t = SSLsetAnnotations(x_24, q_30);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefNoArgs_2))
                        {
                          w_90 = ATgetArgument(t, 0);
                          a_91 = ATgetArgument(t, 1);
                          {
                            ATerm u_31 = NULL,x_31 = NULL,z_31 = NULL,y_24 = NULL;
                            t = SSLgetAnnotations(v_90);
                            u_31 = t;
                            t = w_90;
                            t = v_146(t);
                            x_31 = t;
                            t = a_91;
                            t = w_146(t);
                            z_31 = t;
                            t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, x_31, z_31);
                            y_24 = t;
                            t = SSLsetAnnotations(y_24, u_31);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              w_90 = ATgetArgument(t, 0);
                              a_91 = ATgetArgument(t, 1);
                              q_90 = ATgetArgument(t, 2);
                              {
                                ATerm v_32 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,a_25 = NULL;
                                t = SSLgetAnnotations(v_90);
                                v_32 = t;
                                t = w_90;
                                t = v_146(t);
                                h_33 = t;
                                t = a_91;
                                t = w_146(t);
                                i_33 = t;
                                t = q_90;
                                t = w_146(t);
                                j_33 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, h_33, i_33, j_33);
                                a_25 = t;
                                t = SSLsetAnnotations(a_25, v_32);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  w_90 = ATgetArgument(t, 0);
                                  a_91 = ATgetArgument(t, 1);
                                  q_90 = ATgetArgument(t, 2);
                                  r_90 = ATgetArgument(t, 3);
                                  {
                                    ATerm f_34 = NULL,m_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,b_25 = NULL;
                                    t = SSLgetAnnotations(v_90);
                                    f_34 = t;
                                    t = w_90;
                                    t = v_146(t);
                                    m_34 = t;
                                    t = a_91;
                                    t = w_146(t);
                                    t_34 = t;
                                    t = q_90;
                                    t = w_146(t);
                                    u_34 = t;
                                    t = r_90;
                                    t = w_146(t);
                                    v_34 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, m_34, t_34, u_34, v_34);
                                    b_25 = t;
                                    t = SSLsetAnnotations(b_25, f_34);
                                  }
                                }
                              else
                                {
                                  ATerm m_35 = NULL,x_35 = NULL,z_35 = NULL,l_25 = NULL;
                                  if(match_cons(t, sym_Scope_2))
                                    {
                                      w_90 = ATgetArgument(t, 0);
                                      a_91 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(v_90);
                                  m_35 = t;
                                  t = w_90;
                                  t = map_1_0(v_146, t);
                                  x_35 = t;
                                  t = a_91;
                                  t = w_146(t);
                                  z_35 = t;
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, x_35, z_35);
                                  l_25 = t;
                                  t = SSLsetAnnotations(l_25, m_35);
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
static ATerm k_7 (ATerm t)
{
  t = term_d_46;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_v_45;
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm s_46 = t;
  int t_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_92 = NULL,r_36 = NULL,a_37 = NULL;
      g_92 = t;
      t = term_d_46;
      a_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_d_46, g_92);
      t = y_13(a_37, g_92, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm b_47 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) b_47) != ATmakeSymbol("q_0", 0, ATtrue)))
            _fail(t);
          r_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_36;
      LocalPopChoice(t_46);
    }
  else
    {
      t = s_46;
      t = NewNumberedVar_0_0(t);
    }
  return(t);
}
ATerm dr_rename_vars_0_0 (ATerm t)
{
  static ATerm p_7 (ATerm t)
  {
    ATerm u_91 = NULL,v_91 = NULL,c_92 = NULL;
    static ATerm h_92 (ATerm t)
    {
      ATerm f_47 = t;
      int g_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RenameVarTerm_2_0(r_7, h_92, t);
          LocalPopChoice(g_47);
        }
      else
        {
          t = f_47;
          t = SRTS_all(h_92, t);
        }
      return(t);
    }
    u_91 = t;
    t = term_j_46;
    v_91 = t;
    t = term_c_46;
    c_92 = t;
    t = term_h_47;
    t = z_13(q_7, v_91, c_92, t);
    t = u_91;
    t = h_92(t);
    return(t);
  }
  t = scope_2_0(k_7, p_7, t);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm e_93 = NULL;
  e_93 = t;
  {
    ATerm j_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_37 = NULL;
        t = term_o_43;
        v_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_o_43, e_93);
        t = y_13(v_37, e_93, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm m_47 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) m_47) != ATmakeSymbol("t_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = e_93;
        LocalPopChoice(k_47);
      }
    else
      {
        t = j_47;
        {
          ATerm c_38 = NULL;
          t = term_o_43;
          c_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_o_43, e_93);
          t = y_13(c_38, e_93, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm n_47 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_47) != ATmakeSymbol("n_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = e_93;
        }
      }
  }
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm c_95 = NULL,d_95 = NULL,e_95 = NULL;
  c_95 = t;
  {
    ATerm o_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm r_47 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_47);
        t = c_95;
        {
          ATerm s_47 = t;
          if((PushChoice() == 0))
            {
              ATerm l_38 = NULL,m_38 = NULL,o_38 = NULL,p_38 = NULL,c_26 = NULL;
              p_38 = t;
              if(match_cons(t, sym_Var_1))
                {
                  m_38 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_38);
              l_38 = t;
              t = m_38;
              {
                ATerm t_47 = t;
                int u_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(u_47);
                  }
                else
                  {
                    t = t_47;
                    {
                      ATerm z_38 = NULL,e_39 = NULL,i_39 = NULL,b_26 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          z_38 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(m_38);
                      e_39 = t;
                      t = z_38;
                      t = ContextVar_0_0(t);
                      i_39 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, i_39);
                      b_26 = t;
                      t = SSLsetAnnotations(b_26, e_39);
                    }
                  }
              }
              o_38 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, o_38);
              c_26 = t;
              t = SSLsetAnnotations(c_26, l_38);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_47;
            }
        }
        t = term_t_32;
      }
    else
      {
        t = o_47;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_t_32;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                d_95 = ATgetArgument(t, 0);
                {
                  ATerm n_95 = NULL;
                  t = d_95;
                  t = free_vars_3_0(t_7, u_7, tboundin_3_0, t);
                  t = map_1_0(z_7, t);
                  n_95 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_47, n_95);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    d_95 = ATgetArgument(t, 0);
                    e_95 = ATgetArgument(t, 1);
                    {
                      ATerm w_96 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, d_95, e_95);
                      t = free_vars_3_0(a_8, b_8, tboundin_3_0, t);
                      t = map_1_0(j_8, t);
                      w_96 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_w_47, w_96);
                    }
                  }
                else
                  {
                    ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm y_47 = ATgetArgument(t, 0);
                        ATerm z_47 = ATgetArgument(t, 1);
                        ATerm a_48 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_v_43;
                    m_39 = t;
                    t = (ATerm) ATinsert(ATempty, term_b_48);
                    n_39 = t;
                    t = SSL_printnl(m_39, n_39);
                    t = term_x_43;
                    l_39 = t;
                    t = SSL_exit(l_39);
                    t = (ATerm) ATinsert(ATempty, term_b_48);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm o_95 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_95);
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm c_48 = t;
  int d_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_48);
    }
  else
    {
      t = c_48;
      {
        ATerm e_48 = t;
        int g_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_48);
          }
        else
          {
            t = e_48;
            {
              ATerm l_48 = t;
              int o_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL,t_95 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_95 = ATgetArgument(t, 0);
                      r_95 = ATgetArgument(t, 1);
                      s_95 = ATgetArgument(t, 2);
                      t_95 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_95;
                  t = map_1_0(v_7, t);
                  LocalPopChoice(o_48);
                }
              else
                {
                  t = l_48;
                  {
                    ATerm p_48 = t;
                    int q_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(q_48);
                      }
                    else
                      {
                        t = p_48;
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
  ATerm r_48 = t;
  int s_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_96 = ATgetArgument(t, 0);
          {
            ATerm t_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_48);
      t = f_96;
    }
  else
    {
      t = r_48;
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
  ATerm q_96 = NULL;
  ATerm u_48 = t;
  int v_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_96 = ATgetArgument(t, 0);
          {
            ATerm w_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_48);
      t = q_96;
    }
  else
    {
      t = u_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_96;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm t_96 = NULL;
  t_96 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_96);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm x_96 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_96);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm x_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(y_48);
    }
  else
    {
      t = x_48;
      {
        ATerm z_48 = t;
        int b_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_49);
          }
        else
          {
            t = z_48;
            {
              ATerm c_49 = t;
              int d_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_96 = ATgetArgument(t, 0);
                      a_97 = ATgetArgument(t, 1);
                      b_97 = ATgetArgument(t, 2);
                      c_97 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_97;
                  t = map_1_0(c_8, t);
                  LocalPopChoice(d_49);
                }
              else
                {
                  t = c_49;
                  {
                    ATerm e_49 = t;
                    int g_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(g_49);
                      }
                    else
                      {
                        t = e_49;
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
  ATerm j_97 = NULL;
  ATerm h_49 = t;
  int i_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_97 = ATgetArgument(t, 0);
          {
            ATerm j_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_49);
      t = j_97;
    }
  else
    {
      t = h_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_97;
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
  ATerm o_97 = NULL;
  ATerm k_49 = t;
  int m_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_97 = ATgetArgument(t, 0);
          {
            ATerm p_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_49);
      t = o_97;
    }
  else
    {
      t = k_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_97;
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm r_97 = NULL;
  r_97 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_97);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(s_7, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm q_99 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_99);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm t_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_49);
    }
  else
    {
      t = t_49;
      {
        ATerm z_49 = t;
        int a_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_50);
          }
        else
          {
            t = z_49;
            {
              ATerm b_50 = t;
              int c_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_99 = NULL,t_99 = NULL,u_99 = NULL,v_99 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_99 = ATgetArgument(t, 0);
                      t_99 = ATgetArgument(t, 1);
                      u_99 = ATgetArgument(t, 2);
                      v_99 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_99;
                  t = map_1_0(n_8, t);
                  LocalPopChoice(c_50);
                }
              else
                {
                  t = b_50;
                  {
                    ATerm e_50 = t;
                    int f_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_50);
                      }
                    else
                      {
                        t = e_50;
                        t = dynrule_targs_1_0(o_8, t);
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
  ATerm c_100 = NULL;
  ATerm g_50 = t;
  int h_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_100 = ATgetArgument(t, 0);
          {
            ATerm i_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_50);
      t = c_100;
    }
  else
    {
      t = g_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_100;
    }
  return(t);
}
static ATerm o_8 (ATerm t)
{
  t = map_1_0(p_8, t);
  return(t);
}
static ATerm p_8 (ATerm t)
{
  ATerm h_100 = NULL;
  ATerm j_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_100 = ATgetArgument(t, 0);
          {
            ATerm m_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_50);
      t = h_100;
    }
  else
    {
      t = j_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_100;
    }
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm k_100 = NULL;
  k_100 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_100);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm l_100 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_100);
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm n_50 = t;
  int p_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_50);
    }
  else
    {
      t = n_50;
      {
        ATerm q_50 = t;
        int r_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_50);
          }
        else
          {
            t = q_50;
            {
              ATerm s_50 = t;
              int t_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_100 = ATgetArgument(t, 0);
                      o_100 = ATgetArgument(t, 1);
                      p_100 = ATgetArgument(t, 2);
                      q_100 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_100;
                  t = map_1_0(h_9, t);
                  LocalPopChoice(t_50);
                }
              else
                {
                  t = s_50;
                  {
                    ATerm u_50 = t;
                    int z_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(z_50);
                      }
                    else
                      {
                        t = u_50;
                        t = dynrule_targs_1_0(i_9, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm x_100 = NULL;
  ATerm a_51 = t;
  int b_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_100 = ATgetArgument(t, 0);
          {
            ATerm c_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_51);
      t = x_100;
    }
  else
    {
      t = a_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_100;
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  t = map_1_0(j_9, t);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm c_101 = NULL;
  ATerm d_51 = t;
  int e_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_101 = ATgetArgument(t, 0);
          {
            ATerm g_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_51);
      t = c_101;
    }
  else
    {
      t = d_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_101;
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm f_101 = NULL;
  f_101 = t;
  {
    ATerm h_51 = t;
    int i_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_101 = NULL,p_39 = NULL,r_39 = NULL,f_26 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            l_101 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_101);
        p_39 = t;
        t = l_101;
        t = ContextVar_0_0(t);
        r_39 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, r_39);
        f_26 = t;
        t = SSLsetAnnotations(f_26, p_39);
        LocalPopChoice(i_51);
      }
    else
      {
        t = h_51;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, f_101);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm m_101 = NULL,n_101 = NULL;
  if(match_cons(t, sym__2))
    {
      m_101 = ATgetArgument(t, 0);
      n_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_14(m_101, n_101, t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  t = term_x_43;
  return(t);
}
static ATerm r_9 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm o_101 = NULL,p_101 = NULL;
  if(match_cons(t, sym__2))
    {
      o_101 = ATgetArgument(t, 0);
      p_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_14(o_101, p_101, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_x_43;
  return(t);
}
static ATerm v_9 (ATerm t)
{
  t = term_k_51;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm w_101 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_101);
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm l_51 = t;
  int n_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_51);
    }
  else
    {
      t = l_51;
      {
        ATerm o_51 = t;
        int p_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_51);
          }
        else
          {
            t = o_51;
            {
              ATerm r_51 = t;
              int s_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_101 = NULL,z_101 = NULL,a_102 = NULL,b_102 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_101 = ATgetArgument(t, 0);
                      z_101 = ATgetArgument(t, 1);
                      a_102 = ATgetArgument(t, 2);
                      b_102 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_102;
                  t = map_1_0(z_9, t);
                  LocalPopChoice(s_51);
                }
              else
                {
                  t = r_51;
                  {
                    ATerm t_51 = t;
                    int u_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_51);
                      }
                    else
                      {
                        t = t_51;
                        t = dynrule_targs_1_0(b_10, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm i_102 = NULL;
  ATerm v_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_102 = ATgetArgument(t, 0);
          {
            ATerm x_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_51);
      t = i_102;
    }
  else
    {
      t = v_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_102;
    }
  return(t);
}
static ATerm b_10 (ATerm t)
{
  t = map_1_0(c_10, t);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm o_102 = NULL;
  ATerm y_51 = t;
  int z_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_102 = ATgetArgument(t, 0);
          {
            ATerm c_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_51);
      t = o_102;
    }
  else
    {
      t = y_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_102;
    }
  return(t);
}
static ATerm d_10 (ATerm t)
{
  ATerm r_102 = NULL,s_102 = NULL,t_102 = NULL;
  t_102 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      s_102 = ATgetArgument(t, 0);
      t = s_102;
    }
  else
    {
      t = t_102;
    }
  r_102 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_102);
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_d_52;
  return(t);
}
static ATerm g_10 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm y_102 = NULL,z_102 = NULL;
  if(match_cons(t, sym__2))
    {
      y_102 = ATgetArgument(t, 0);
      z_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_14(y_102, z_102, t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_x_43;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm e_103 = NULL,h_103 = NULL;
  if(match_cons(t, sym__2))
    {
      e_103 = ATgetArgument(t, 0);
      h_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_14(e_103, h_103, t);
  return(t);
}
static ATerm j_11 (ATerm t)
{
  t = term_x_43;
  return(t);
}
static ATerm l_11 (ATerm t)
{
  t = term_g_52;
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm q_103 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_103 = ATgetArgument(t, 0);
      t = q_103;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_103 = ATgetArgument(t, 0);
          {
            ATerm h_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = q_103;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_103), (ATerm) ATempty);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm y_103 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_103 = ATgetArgument(t, 0);
      t = y_103;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_103 = ATgetArgument(t, 0);
          {
            ATerm i_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_103;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, y_103);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm c_104 = NULL;
  c_104 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_104);
  return(t);
}
static ATerm c_12 (ATerm t)
{
  t = term_j_52;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_k_52;
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm a_147 (ATerm), ATerm t)
{
  ATerm l_98 = NULL,m_98 = NULL,n_98 = NULL,o_98 = NULL,p_98 = NULL,q_98 = NULL,t_98 = NULL,u_98 = NULL,v_98 = NULL,w_98 = NULL,x_98 = NULL,y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL,k_99 = NULL,l_99 = NULL,m_99 = NULL,o_99 = NULL,p_99 = NULL;
  n_98 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm m_52 = ATgetArgument(t, 0);
      if(match_cons(m_52, sym_DynRuleId_1))
        {
          ATerm o_52 = ATgetArgument(m_52, 0);
          if(match_cons(o_52, sym_RDecT_3))
            {
              h_99 = ATgetArgument(o_52, 0);
              x_98 = ATgetArgument(o_52, 1);
              y_98 = ATgetArgument(o_52, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm n_52 = ATgetArgument(t, 1);
        if(match_cons(n_52, sym_Rule_3))
          {
            d_99 = ATgetArgument(n_52, 0);
            q_98 = ATgetArgument(n_52, 1);
            t_98 = ATgetArgument(n_52, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_99;
  t = dummify_0_0(t);
  k_99 = t;
  t = free_vars_3_0(k_8, l_8, tboundin_3_0, t);
  t = map_1_0(r_8, t);
  m_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_98, t_98);
  t = free_vars_3_0(e_9, g_9, tboundin_3_0, t);
  t = filter_1_0(k_9, t);
  l_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_98, m_98);
  t = diff_0_0(t);
  p_98 = t;
  t = x_98;
  t = foldr_3_0(l_9, m_9, n_9, t);
  o_99 = t;
  t = y_98;
  t = foldr_3_0(r_9, s_9, u_9, t);
  p_99 = t;
  t = n_98;
  t = dr_rename_vars_0_0(t);
  v_98 = t;
  {
    ATerm p_52 = t;
    int t_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_101 = NULL,v_39 = NULL;
        t = term_d_52;
        v_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_52, v_98);
        t = y_13(v_39, v_98, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm u_52 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_52) != ATmakeSymbol("w_0", 0, ATtrue)))
              _fail(t);
            q_101 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_101;
        w_98 = t;
        t = v_98;
        LocalPopChoice(t_52);
        t = (ATerm) ATempty;
        u_98 = t;
        t = (ATerm) ATempty;
        j_99 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_98, v_98);
        t = debug_1_0(v_9, t);
      }
    else
      {
        t = p_52;
        {
          ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL,u_101 = NULL,v_101 = NULL;
          t = term_i_41;
          v_101 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_41, h_99);
          t = j_14(v_101, h_99, t);
          e_99 = t;
          t = new_0_0(t);
          w_98 = t;
          t = new_0_0(t);
          c_99 = t;
          t = d_99;
          t = free_vars_3_0(w_9, x_9, tboundin_3_0, t);
          a_99 = t;
          t = map_1_0(d_10, t);
          t_101 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_99))), t_101), y_98);
          t = concat_0_0(t);
          o_98 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, e_99, x_98, o_98, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(p_98), (ATerm) ATmakeAppl(sym_Str_1, w_98))), q_98, (ATerm) ATmakeAppl(sym_BA_2, t_98, (ATerm) ATmakeAppl(sym_Var_1, c_99)))));
          u_98 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_52, w_98);
          u_101 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_98, (ATerm) ATmakeAppl(sym_Defined_2, term_w_52, w_98));
          t = z_13(e_10, v_98, u_101, t);
          t = x_98;
          t = foldr_3_0(g_10, i_10, m_10, t);
          r_101 = t;
          t = y_98;
          t = foldr_3_0(n_10, o_10, j_11, t);
          s_101 = t;
          t = r_101;
          if((o_99 != t))
            {
              _fail(t);
            }
          t = s_101;
          if((p_99 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, h_99, (ATerm) ATmakeAppl(sym__2, r_101, s_101));
          {
            ATerm x_52 = t;
            int y_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_40 = NULL,q_40 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_99, (ATerm) ATmakeAppl(sym__2, r_101, s_101)), k_99);
                l_40 = t;
                t = term_j_52;
                q_40 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_52, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_99, (ATerm) ATmakeAppl(sym__2, r_101, s_101)), k_99));
                t = y_13(q_40, l_40, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm z_52 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) z_52) != ATmakeSymbol("y_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, h_99, (ATerm) ATmakeAppl(sym__2, r_101, s_101));
                LocalPopChoice(y_52);
                t = (ATerm) ATempty;
                j_99 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_99, (ATerm) ATmakeAppl(sym__2, r_101, s_101)), k_99);
                t = debug_1_0(l_11, t);
              }
            else
              {
                t = x_52;
                {
                  ATerm k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL;
                  t = term_g_41;
                  n_103 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_g_41, h_99);
                  t = j_14(n_103, h_99, t);
                  b_99 = t;
                  t = x_98;
                  t = map_1_0(r_11, t);
                  f_99 = t;
                  t = y_98;
                  t = map_1_0(a_12, t);
                  z_98 = t;
                  t = a_99;
                  t = map_1_0(b_12, t);
                  k_103 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, c_99))), k_103), z_98);
                  t = concat_0_0(t);
                  g_99 = t;
                  t = k_99;
                  {
                    ATerm a_53 = t;
                    int d_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = k_99;
                        if((d_99 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, c_99);
                        LocalPopChoice(d_53);
                      }
                    else
                      {
                        t = a_53;
                        t = k_99;
                      }
                  }
                  i_99 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, b_99, x_98, y_98, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, c_99), d_99), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_r_41, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_99), f_99, g_99))), term_h_53), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_j_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_99), (ATerm) ATmakeAppl(sym_Str_1, h_99))), term_k_53), term_h_53)))), (ATerm) ATmakeAppl(sym_RDefT_4, h_99, x_98, y_98, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, c_99), d_99), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_f_53, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_99), f_99, g_99))), term_h_53), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_j_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_99), (ATerm) ATmakeAppl(sym_Str_1, h_99))), term_h_53))));
                  j_99 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_99, (ATerm) ATmakeAppl(sym__2, r_101, s_101)), k_99);
                  l_103 = t;
                  t = term_m_53;
                  m_103 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_99, (ATerm) ATmakeAppl(sym__2, r_101, s_101)), k_99), term_m_53);
                  t = z_13(c_12, l_103, m_103, t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_99, (ATerm) ATmakeAppl(sym__2, r_101, s_101)), k_99);
                  t = debug_1_0(d_12, t);
                }
              }
          }
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, k_99, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(p_98), (ATerm) ATmakeAppl(sym_Str_1, w_98))));
  t = a_147(t);
  l_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_98, j_99);
  t = conc_0_0(t);
  m_99 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, l_99), m_99);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm x_104 = NULL,c_105 = NULL,d_105 = NULL,e_105 = NULL,f_105 = NULL,g_105 = NULL,h_105 = NULL,i_105 = NULL;
  g_105 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      h_105 = ATgetArgument(t, 0);
      i_105 = ATgetArgument(t, 1);
      t = h_105;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          c_105 = ATgetArgument(t, 0);
          x_104 = ATgetArgument(t, 1);
          {
            static ATerm g_12 (ATerm t)
            {
              ATerm o_105 = NULL,p_105 = NULL;
              o_105 = t;
              t = SSL_explode_term(o_105);
              if(match_cons(t, sym__2))
                {
                  ATerm n_53 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) n_53) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm o_53 = ATgetArgument(t, 1);
                    if(((ATgetType(o_53) == AT_LIST) && !(ATisEmpty(o_53))))
                      {
                        p_105 = ATgetFirst((ATermList) o_53);
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
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, p_105), x_104), (ATerm) ATmakeAppl(sym_Str_1, not_null(d_105))));
              return(t);
            }
            t = c_105;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((d_105 != NULL) && (d_105 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_105 = ATgetArgument(t, 0);
                e_105 = ATgetArgument(t, 1);
                f_105 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, d_105, e_105, f_105)), (ATerm) ATmakeAppl(sym_Rule_3, i_105, term_s_53, term_m_27));
            t = SplitDynamicRule_1_0(g_12, t);
          }
        }
      else
        {
          static ATerm h_12 (ATerm t)
          {
            ATerm x_105 = NULL,z_105 = NULL;
            x_105 = t;
            t = SSL_explode_term(x_105);
            if(match_cons(t, sym__2))
              {
                ATerm t_53 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_53) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm u_53 = ATgetArgument(t, 1);
                  if(((ATgetType(u_53) == AT_LIST) && !(ATisEmpty(u_53))))
                    {
                      z_105 = ATgetFirst((ATermList) u_53);
                      {
                        ATerm v_53 = (ATerm) ATgetNext((ATermList) u_53);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, z_105), (ATerm) ATmakeAppl(sym_Str_1, not_null(d_105))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              c_105 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_105;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((d_105 != NULL) && (d_105 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_105 = ATgetArgument(t, 0);
              e_105 = ATgetArgument(t, 1);
              f_105 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, d_105, e_105, f_105)), (ATerm) ATmakeAppl(sym_Rule_3, i_105, term_s_53, term_m_27));
          t = SplitDynamicRule_1_0(h_12, t);
        }
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          h_105 = ATgetArgument(t, 0);
          i_105 = ATgetArgument(t, 1);
          t = h_105;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              c_105 = ATgetArgument(t, 0);
              x_104 = ATgetArgument(t, 1);
              {
                static ATerm i_12 (ATerm t)
                {
                  ATerm l_106 = NULL,m_106 = NULL,s_40 = NULL;
                  l_106 = t;
                  t = SSL_explode_term(l_106);
                  if(match_cons(t, sym__2))
                    {
                      ATerm w_53 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) w_53) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm x_53 = ATgetArgument(t, 1);
                        if(((ATgetType(x_53) == AT_LIST) && !(ATisEmpty(x_53))))
                          {
                            m_106 = ATgetFirst((ATermList) x_53);
                            {
                              ATerm y_53 = (ATerm) ATgetNext((ATermList) x_53);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(l_106);
                  if(match_cons(t, sym__2))
                    {
                      ATerm b_54 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) b_54) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm d_54 = ATgetArgument(t, 1);
                        if(((ATgetType(d_54) == AT_LIST) && !(ATisEmpty(d_54))))
                          {
                            ATerm e_54 = ATgetFirst((ATermList) d_54);
                            ATerm m_54 = (ATerm) ATgetNext((ATermList) d_54);
                            if(((ATgetType(m_54) == AT_LIST) && !(ATisEmpty(m_54))))
                              {
                                s_40 = ATgetFirst((ATermList) m_54);
                                {
                                  ATerm n_54 = (ATerm) ATgetNext((ATermList) m_54);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_p_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, s_40), m_106), x_104), (ATerm) ATmakeAppl(sym_Str_1, not_null(d_105))));
                  return(t);
                }
                t = c_105;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((d_105 != NULL) && (d_105 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      d_105 = ATgetArgument(t, 0);
                    e_105 = ATgetArgument(t, 1);
                    f_105 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, d_105, e_105, f_105)), i_105);
                t = SplitDynamicRule_1_0(i_12, t);
              }
            }
          else
            {
              static ATerm j_12 (ATerm t)
              {
                ATerm u_106 = NULL,z_106 = NULL,u_40 = NULL;
                u_106 = t;
                t = SSL_explode_term(u_106);
                if(match_cons(t, sym__2))
                  {
                    ATerm q_54 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) q_54) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm r_54 = ATgetArgument(t, 1);
                      if(((ATgetType(r_54) == AT_LIST) && !(ATisEmpty(r_54))))
                        {
                          z_106 = ATgetFirst((ATermList) r_54);
                          {
                            ATerm s_54 = (ATerm) ATgetNext((ATermList) r_54);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(u_106);
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
                              u_40 = ATgetFirst((ATermList) w_54);
                              {
                                ATerm x_54 = (ATerm) ATgetNext((ATermList) w_54);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_p_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, u_40), z_106), (ATerm) ATmakeAppl(sym_Str_1, not_null(d_105))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  c_105 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_105;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((d_105 != NULL) && (d_105 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    d_105 = ATgetArgument(t, 0);
                  e_105 = ATgetArgument(t, 1);
                  f_105 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, d_105, e_105, f_105)), i_105);
              t = SplitDynamicRule_1_0(j_12, t);
            }
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              h_105 = ATgetArgument(t, 0);
              i_105 = ATgetArgument(t, 1);
              t = h_105;
              if(match_cons(t, sym_LabeledDynRuleId_2))
                {
                  c_105 = ATgetArgument(t, 0);
                  x_104 = ATgetArgument(t, 1);
                  {
                    static ATerm k_12 (ATerm t)
                    {
                      ATerm i_107 = NULL,j_107 = NULL,x_40 = NULL;
                      i_107 = t;
                      t = SSL_explode_term(i_107);
                      if(match_cons(t, sym__2))
                        {
                          ATerm y_54 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) y_54) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm z_54 = ATgetArgument(t, 1);
                            if(((ATgetType(z_54) == AT_LIST) && !(ATisEmpty(z_54))))
                              {
                                j_107 = ATgetFirst((ATermList) z_54);
                                {
                                  ATerm a_55 = (ATerm) ATgetNext((ATermList) z_54);
                                }
                              }
                            else
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      t = SSL_explode_term(i_107);
                      if(match_cons(t, sym__2))
                        {
                          ATerm b_55 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) b_55) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm c_55 = ATgetArgument(t, 1);
                            if(((ATgetType(c_55) == AT_LIST) && !(ATisEmpty(c_55))))
                              {
                                ATerm d_55 = ATgetFirst((ATermList) c_55);
                                ATerm e_55 = (ATerm) ATgetNext((ATermList) c_55);
                                if(((ATgetType(e_55) == AT_LIST) && !(ATisEmpty(e_55))))
                                  {
                                    x_40 = ATgetFirst((ATermList) e_55);
                                    {
                                      ATerm f_55 = (ATerm) ATgetNext((ATermList) e_55);
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
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_40), j_107), x_104), (ATerm) ATmakeAppl(sym_Str_1, not_null(d_105))));
                      return(t);
                    }
                    t = c_105;
                    if(match_cons(t, sym_RDecT_3))
                      {
                        if(((d_105 != NULL) && (d_105 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          d_105 = ATgetArgument(t, 0);
                        e_105 = ATgetArgument(t, 1);
                        f_105 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, d_105, e_105, f_105)), i_105);
                    t = SplitDynamicRule_1_0(k_12, t);
                  }
                }
              else
                {
                  static ATerm m_12 (ATerm t)
                  {
                    ATerm r_107 = NULL,t_107 = NULL,h_41 = NULL;
                    r_107 = t;
                    t = SSL_explode_term(r_107);
                    if(match_cons(t, sym__2))
                      {
                        ATerm i_55 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) i_55) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm j_55 = ATgetArgument(t, 1);
                          if(((ATgetType(j_55) == AT_LIST) && !(ATisEmpty(j_55))))
                            {
                              t_107 = ATgetFirst((ATermList) j_55);
                              {
                                ATerm k_55 = (ATerm) ATgetNext((ATermList) j_55);
                              }
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(r_107);
                    if(match_cons(t, sym__2))
                      {
                        ATerm l_55 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) l_55) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm m_55 = ATgetArgument(t, 1);
                          if(((ATgetType(m_55) == AT_LIST) && !(ATisEmpty(m_55))))
                            {
                              ATerm n_55 = ATgetFirst((ATermList) m_55);
                              ATerm o_55 = (ATerm) ATgetNext((ATermList) m_55);
                              if(((ATgetType(o_55) == AT_LIST) && !(ATisEmpty(o_55))))
                                {
                                  h_41 = ATgetFirst((ATermList) o_55);
                                  {
                                    ATerm p_55 = (ATerm) ATgetNext((ATermList) o_55);
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
                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_41), t_107), (ATerm) ATmakeAppl(sym_Str_1, not_null(d_105))));
                    return(t);
                  }
                  if(match_cons(t, sym_DynRuleId_1))
                    {
                      c_105 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = c_105;
                  if(match_cons(t, sym_RDecT_3))
                    {
                      if(((d_105 != NULL) && (d_105 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        d_105 = ATgetArgument(t, 0);
                      {
                        ATerm q_55 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm r_55 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = g_105;
                  t = SplitDynamicRule_1_0(m_12, t);
                }
            }
          else
            {
              if(match_cons(t, sym_AddScopeLabel_2))
                {
                  h_105 = ATgetArgument(t, 0);
                  i_105 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, term_t_55, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, i_105), (ATerm) ATmakeAppl(sym_Str_1, h_105))), (ATerm) ATempty);
            }
        }
    }
  return(t);
}
ATerm DesugarDynRuleDef_0_0 (ATerm t)
{
  ATerm k_108 = NULL,n_108 = NULL,o_108 = NULL,r_108 = NULL,s_108 = NULL,v_108 = NULL,w_108 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      k_108 = ATgetArgument(t, 0);
      w_108 = ATgetArgument(t, 1);
      t = k_108;
      if(match_cons(t, sym_AddLabelDynRuleId_2))
        {
          n_108 = ATgetArgument(t, 0);
          v_108 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_108;
      if(match_cons(t, sym_RDecT_3))
        {
          o_108 = ATgetArgument(t, 0);
          r_108 = ATgetArgument(t, 1);
          s_108 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, o_108, v_108)), (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, o_108, r_108, s_108)), w_108));
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          k_108 = ATgetArgument(t, 0);
          w_108 = ATgetArgument(t, 1);
          t = k_108;
          if(match_cons(t, sym_AddLabelDynRuleId_2))
            {
              n_108 = ATgetArgument(t, 0);
              v_108 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_108;
          if(match_cons(t, sym_RDecT_3))
            {
              o_108 = ATgetArgument(t, 0);
              r_108 = ATgetArgument(t, 1);
              s_108 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, o_108, v_108)), (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, o_108, r_108, s_108)), w_108));
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              k_108 = ATgetArgument(t, 0);
              w_108 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_108;
          if(match_cons(t, sym_AddLabelDynRuleId_2))
            {
              n_108 = ATgetArgument(t, 0);
              v_108 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_108;
          if(match_cons(t, sym_RDecT_3))
            {
              o_108 = ATgetArgument(t, 0);
              r_108 = ATgetArgument(t, 1);
              s_108 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, o_108, v_108)), (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, o_108, r_108, s_108)), w_108));
        }
    }
  return(t);
}
ATerm split_dynamic_rule_0_0 (ATerm t)
{
  ATerm u_55 = t;
  int v_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarDynRuleDef_0_0(t);
      LocalPopChoice(v_55);
    }
  else
    {
      t = u_55;
      {
        ATerm o_109 = NULL;
        o_109 = t;
        t = (ATerm) ATinsert(ATempty, o_109);
      }
    }
  t = map_1_0(SplitDynamicRule_0_0, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm t_114 (ATerm), ATerm t)
{
  static ATerm s_109 (ATerm t)
  {
    ATerm x_55 = t;
    int y_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_114(t);
        LocalPopChoice(y_55);
      }
    else
      {
        t = x_55;
        t = SRTS_one(s_109, t);
      }
    return(t);
  }
  t = s_109(t);
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = term_o_43;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm x_146 (ATerm), ATerm t)
{
  static ATerm h_110 (ATerm t)
  {
    static ATerm n_12 (ATerm t)
    {
      ATerm z_55 = t;
      int b_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_146(t);
          LocalPopChoice(b_56);
        }
      else
        {
          t = z_55;
          {
            ATerm x_109 = NULL,y_109 = NULL,b_110 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                x_109 = ATgetArgument(t, 0);
                y_109 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, x_109, y_109);
            {
              static ATerm n_14 (ATerm t)
              {
                t = x_109;
                t = DeclareContextVars_0_0(t);
                t = y_109;
                t = h_110(t);
                if(((b_110 != NULL) && (b_110 != t)))
                  _fail(t);
                else
                  b_110 = t;
                return(t);
              }
              t = scope_2_0(z_12, n_14, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, x_109, not_null(b_110));
          }
        }
      return(t);
    }
    t = oncetd_1_0(n_12, t);
    return(t);
  }
  t = h_110(t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm m_110 = NULL,o_110 = NULL,p_110 = NULL,t_110 = NULL;
  t_110 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      p_110 = ATgetArgument(t, 0);
      {
        ATerm c_56 = t;
        int d_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_110;
            m_110 = t;
            t = t_110;
            LocalPopChoice(d_56);
          }
        else
          {
            t = c_56;
            t = t_110;
            m_110 = t;
            t = t_110;
          }
      }
    }
  else
    {
      t = t_110;
      m_110 = t;
      t = t_110;
    }
  t = term_f_56;
  o_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_110, term_f_56);
  t = z_13(x_14, m_110, o_110, t);
  t = t_110;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  t = term_o_43;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm u_110 = NULL,y_110 = NULL,z_110 = NULL,b_111 = NULL;
  b_111 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      z_110 = ATgetArgument(t, 0);
      {
        ATerm g_56 = t;
        int h_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_110;
            u_110 = t;
            t = b_111;
            LocalPopChoice(h_56);
          }
        else
          {
            t = g_56;
            t = b_111;
            u_110 = t;
            t = b_111;
          }
      }
    }
  else
    {
      t = b_111;
      u_110 = t;
      t = b_111;
    }
  t = term_j_56;
  y_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_110, term_j_56);
  t = z_13(h_15, u_110, y_110, t);
  t = b_111;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = term_o_43;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm m_56 = t;
  int n_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(q_14, t);
      LocalPopChoice(n_56);
    }
  else
    {
      t = m_56;
      t = map_1_0(c_15, t);
    }
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm q_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_41);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(r_56);
          }
        else
          {
            t = q_56;
            {
              ATerm s_56 = t;
              int t_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_41 = NULL,u_41 = NULL,w_41 = NULL,y_41 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_41 = ATgetArgument(t, 0);
                      u_41 = ATgetArgument(t, 1);
                      w_41 = ATgetArgument(t, 2);
                      y_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_41;
                  t = map_1_0(k_15, t);
                  LocalPopChoice(t_56);
                }
              else
                {
                  t = s_56;
                  {
                    ATerm u_56 = t;
                    int v_56 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(v_56);
                      }
                    else
                      {
                        t = u_56;
                        t = dynrule_targs_1_0(l_15, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm i_42 = NULL;
  ATerm w_56 = t;
  int x_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_42 = ATgetArgument(t, 0);
          {
            ATerm b_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_56);
      t = i_42;
    }
  else
    {
      t = w_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_42;
    }
  return(t);
}
static ATerm l_15 (ATerm t)
{
  t = map_1_0(m_15, t);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm d_43 = NULL;
  ATerm c_57 = t;
  int d_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_43 = ATgetArgument(t, 0);
          {
            ATerm k_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_57);
      t = d_43;
    }
  else
    {
      t = c_57;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_43;
    }
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm u_43 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_43 = ATgetArgument(t, 0);
      t = u_43;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_43 = ATgetArgument(t, 0);
          {
            ATerm o_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_43;
    }
  return(t);
}
static ATerm o_15 (ATerm t)
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
            ATerm p_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_44;
    }
  return(t);
}
static ATerm p_15 (ATerm t)
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
static ATerm q_15 (ATerm t)
{
  ATerm y_44 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_44);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm q_57 = t;
  int r_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(t_57);
          }
        else
          {
            t = s_57;
            {
              ATerm b_58 = t;
              int d_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,f_45 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_45 = ATgetArgument(t, 0);
                      c_45 = ATgetArgument(t, 1);
                      d_45 = ATgetArgument(t, 2);
                      f_45 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_45;
                  t = map_1_0(u_15, t);
                  LocalPopChoice(d_58);
                }
              else
                {
                  t = b_58;
                  {
                    ATerm i_58 = t;
                    int n_58 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_58);
                      }
                    else
                      {
                        t = i_58;
                        t = dynrule_targs_1_0(v_15, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm p_45 = NULL;
  ATerm o_58 = t;
  int p_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_45 = ATgetArgument(t, 0);
          {
            ATerm q_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_58);
      t = p_45;
    }
  else
    {
      t = o_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_45;
    }
  return(t);
}
static ATerm v_15 (ATerm t)
{
  t = map_1_0(y_15, t);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm u_45 = NULL;
  ATerm r_58 = t;
  int s_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_45 = ATgetArgument(t, 0);
          {
            ATerm t_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_58);
      t = u_45;
    }
  else
    {
      t = r_58;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_45;
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm e_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_46 = ATgetArgument(t, 0);
      t = e_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_46 = ATgetArgument(t, 0);
          {
            ATerm u_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_46;
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm q_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_46 = ATgetArgument(t, 0);
      t = q_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_46 = ATgetArgument(t, 0);
          {
            ATerm v_58 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = q_46;
    }
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm e_47 = NULL;
  if(match_cons(t, sym__2))
    {
      e_47 = ATgetArgument(t, 0);
      if((e_47 != ATgetArgument(t, 1)))
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
  ATerm q_117 = NULL;
  q_117 = t;
  {
    ATerm x_58 = t;
    int z_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_41 = NULL,o_41 = NULL;
        t = q_117;
        t = free_vars_3_0(i_15, j_15, tboundin_3_0, t);
        n_41 = t;
        t = q_117;
        {
          ATerm a_59 = t;
          int c_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_43 = NULL;
              ATerm d_59 = t;
              int e_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm j_59 = ATgetArgument(t, 0);
                      ATerm k_59 = ATgetArgument(t, 1);
                      q_43 = ATgetArgument(t, 2);
                      {
                        ATerm l_59 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_59);
                  t = q_43;
                  t = map_1_0(n_15, t);
                }
              else
                {
                  t = d_59;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm m_59 = ATgetArgument(t, 0);
                      ATerm n_59 = ATgetArgument(t, 1);
                      q_43 = ATgetArgument(t, 2);
                      {
                        ATerm o_59 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = q_43;
                  t = map_1_0(o_15, t);
                }
              LocalPopChoice(c_59);
            }
          else
            {
              t = a_59;
              t = (ATerm) ATempty;
            }
        }
        o_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
        t = n_13(p_15, n_41, o_41, t);
        LocalPopChoice(z_58);
      }
    else
      {
        t = x_58;
        {
          ATerm t_44 = NULL,v_44 = NULL;
          t = q_117;
          t = free_vars_3_0(q_15, t_15, tboundin_3_0, t);
          t_44 = t;
          t = q_117;
          {
            ATerm p_59 = t;
            int q_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_46 = NULL;
                ATerm s_59 = t;
                int w_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm x_59 = ATgetArgument(t, 0);
                        ATerm z_59 = ATgetArgument(t, 1);
                        a_46 = ATgetArgument(t, 2);
                        {
                          ATerm a_60 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_59);
                    t = a_46;
                    t = map_1_0(z_15, t);
                  }
                else
                  {
                    t = s_59;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm d_60 = ATgetArgument(t, 0);
                        ATerm e_60 = ATgetArgument(t, 1);
                        a_46 = ATgetArgument(t, 2);
                        {
                          ATerm f_60 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = a_46;
                    t = map_1_0(a_16, t);
                  }
                LocalPopChoice(q_59);
              }
            else
              {
                t = p_59;
                t = (ATerm) ATempty;
              }
          }
          v_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_44, v_44);
          t = n_13(b_16, t_44, v_44, t);
        }
      }
  }
  return(t);
}
static ATerm c_16 (ATerm t)
{
  t = term_o_43;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_g_36;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm k_118 = NULL,l_118 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_118 = ATgetFirst((ATermList) t);
      l_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_118, l_118);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm m_118 = NULL,n_118 = NULL,p_118 = NULL,q_118 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_60 = ATgetArgument(t, 0);
      if(match_cons(i_60, sym__2))
        {
          m_118 = ATgetArgument(i_60, 0);
          n_118 = ATgetArgument(i_60, 1);
        }
      else
        _fail(t);
      {
        ATerm j_60 = ATgetArgument(t, 1);
        if(match_cons(j_60, sym__2))
          {
            p_118 = ATgetArgument(j_60, 0);
            q_118 = ATgetArgument(j_60, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_118), m_118), (ATerm) ATinsert(CheckATermList(q_118), n_118));
  return(t);
}
static ATerm h_13 (ATerm s_85, ATerm r_85, ATerm t)
{
  ATerm u_117 = NULL,y_117 = NULL,z_117 = NULL;
  static ATerm f_16 (ATerm t)
  {
    t = s_85;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = s_85;
    {
      static ATerm g_16 (ATerm t)
      {
        ATerm b_118 = NULL,d_118 = NULL,e_118 = NULL,h_118 = NULL,i_118 = NULL,j_118 = NULL,i_26 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            b_118 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_118;
        t = map_1_0(split_dynamic_rule_0_0, t);
        t = flatten_list_0_0(t);
        t = genzip_4_0(h_16, i_16, j_16, _id, t);
        j_118 = t;
        if(match_cons(t, sym__2))
          {
            e_118 = ATgetArgument(t, 0);
            h_118 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_118);
        d_118 = t;
        t = h_118;
        t = concat_0_0(t);
        i_118 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_118, i_118);
        i_26 = t;
        t = SSLsetAnnotations(i_26, d_118);
        if(match_cons(t, sym__2))
          {
            if(((y_117 != NULL) && (y_117 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              y_117 = ATgetArgument(t, 0);
            if(((u_117 != NULL) && (u_117 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              u_117 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, y_117);
        return(t);
      }
      t = split_dynamic_rule_1_0(g_16, t);
    }
    if(((z_117 != NULL) && (z_117 != t)))
      _fail(t);
    else
      z_117 = t;
    return(t);
  }
  t = scope_2_0(c_16, f_16, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_117)), not_null(z_117)), r_85);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm t)
{
  static ATerm s_118 (ATerm t)
  {
    ATerm k_60 = t;
    int p_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_112(t);
        t = s_118(t);
        LocalPopChoice(p_60);
      }
    else
      {
        t = k_60;
        t = q_112(t);
      }
    return(t);
  }
  t = s_118(t);
  return(t);
}
ATerm listtd_1_0 (ATerm l_121 (ATerm), ATerm t)
{
  static ATerm m_119 (ATerm t)
  {
    ATerm f_119 = NULL,i_119 = NULL,l_119 = NULL;
    t = l_121(t);
    f_119 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_119;
      }
    else
      {
        ATerm p_47 = NULL,x_47 = NULL,m_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_119 = ATgetFirst((ATermList) t);
            l_119 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_119);
        p_47 = t;
        t = l_119;
        t = m_119(t);
        x_47 = t;
        t = (ATerm) ATinsert(CheckATermList(x_47), i_119);
        m_26 = t;
        t = SSLsetAnnotations(m_26, p_47);
      }
    return(t);
  }
  t = m_119(t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm u_125 (ATerm), ATerm v_125 (ATerm), ATerm t)
{
  ATerm q_60 = t;
  int r_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_119 = NULL;
      t = u_125(t);
      o_119 = t;
      t = (ATerm) ATinsert(ATempty, o_119);
      LocalPopChoice(r_60);
    }
  else
    {
      t = q_60;
      {
        ATerm m_48 = NULL,n_48 = NULL;
        static ATerm l_16 (ATerm t)
        {
          t = collect_om_2_0(u_125, v_125, t);
          return(t);
        }
        n_48 = t;
        t = SSL_explode_term(n_48);
        if(match_cons(t, sym__2))
          {
            ATerm s_60 = ATgetArgument(t, 0);
            m_48 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_48;
        t = foldr_3_0(k_16, v_125, l_16, t);
      }
    }
  return(t);
}
ATerm partition_1_0 (ATerm m_128 (ATerm), ATerm t)
{
  static ATerm k_122 (ATerm t)
  {
    ATerm a_122 = NULL,b_122 = NULL,e_122 = NULL;
    a_122 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_g_36;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_122 = ATgetFirst((ATermList) t);
            e_122 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm t_60 = t;
          int u_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_49 = NULL,n_49 = NULL,o_49 = NULL,r_49 = NULL,u_49 = NULL,o_50 = NULL,o_26 = NULL;
              t = SSLgetAnnotations(a_122);
              u_49 = t;
              t = b_122;
              t = m_128(t);
              l_49 = t;
              t = (ATerm) ATinsert(CheckATermList(e_122), l_49);
              o_26 = t;
              t = SSLsetAnnotations(o_26, u_49);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm v_60 = ATgetFirst((ATermList) t);
                  o_49 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_49;
              t = k_122(t);
              n_49 = t;
              t = SSL_explode_term(n_49);
              if(match_cons(t, sym__2))
                {
                  ATerm w_60 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_60) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm x_60 = ATgetArgument(t, 1);
                    if(((ATgetType(x_60) == AT_LIST) && !(ATisEmpty(x_60))))
                      {
                        r_49 = ATgetFirst((ATermList) x_60);
                        {
                          ATerm z_60 = (ATerm) ATgetNext((ATermList) x_60);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(n_49);
              if(match_cons(t, sym__2))
                {
                  ATerm a_61 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) a_61) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm b_61 = ATgetArgument(t, 1);
                    if(((ATgetType(b_61) == AT_LIST) && !(ATisEmpty(b_61))))
                      {
                        ATerm c_61 = ATgetFirst((ATermList) b_61);
                        ATerm i_61 = (ATerm) ATgetNext((ATermList) b_61);
                        if(((ATgetType(i_61) == AT_LIST) && !(ATisEmpty(i_61))))
                          {
                            o_50 = ATgetFirst((ATermList) i_61);
                            {
                              ATerm n_61 = (ATerm) ATgetNext((ATermList) i_61);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_49), l_49), o_50);
              LocalPopChoice(u_60);
            }
          else
            {
              t = t_60;
              {
                ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,m_51 = NULL,p_26 = NULL;
                t = SSLgetAnnotations(a_122);
                y_50 = t;
                t = (ATerm) ATinsert(CheckATermList(e_122), b_122);
                p_26 = t;
                t = SSLsetAnnotations(p_26, y_50);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm o_61 = ATgetFirst((ATermList) t);
                    w_50 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = w_50;
                t = k_122(t);
                v_50 = t;
                t = SSL_explode_term(v_50);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_61 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) u_61) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm v_61 = ATgetArgument(t, 1);
                      if(((ATgetType(v_61) == AT_LIST) && !(ATisEmpty(v_61))))
                        {
                          x_50 = ATgetFirst((ATermList) v_61);
                          {
                            ATerm w_61 = (ATerm) ATgetNext((ATermList) v_61);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(v_50);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_62 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) d_62) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm e_62 = ATgetArgument(t, 1);
                      if(((ATgetType(e_62) == AT_LIST) && !(ATisEmpty(e_62))))
                        {
                          ATerm f_62 = ATgetFirst((ATermList) e_62);
                          ATerm g_62 = (ATerm) ATgetNext((ATermList) e_62);
                          if(((ATgetType(g_62) == AT_LIST) && !(ATisEmpty(g_62))))
                            {
                              m_51 = ATgetFirst((ATermList) g_62);
                              {
                                ATerm h_62 = (ATerm) ATgetNext((ATermList) g_62);
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
                t = (ATerm) ATmakeAppl(sym__2, x_50, (ATerm) ATinsert(CheckATermList(m_51), b_122));
              }
            }
        }
      }
    return(t);
  }
  t = k_122(t);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm s_52 = NULL,v_52 = NULL;
  if(match_cons(t, sym__2))
    {
      s_52 = ATgetArgument(t, 0);
      v_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_13(q_16, s_52, v_52, t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm b_53 = NULL;
  if(match_cons(t, sym__2))
    {
      b_53 = ATgetArgument(t, 0);
      if((b_53 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL;
  if(match_cons(t, sym__2))
    {
      i_54 = ATgetArgument(t, 0);
      j_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_13(z_16, i_54, j_54, t);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm k_54 = NULL;
  if(match_cons(t, sym__2))
    {
      k_54 = ATgetArgument(t, 0);
      if((k_54 != ATgetArgument(t, 1)))
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
  ATerm t_124 = NULL,u_124 = NULL,v_124 = NULL,w_124 = NULL,x_124 = NULL,y_124 = NULL,z_124 = NULL;
  x_124 = t;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      y_124 = ATgetArgument(t, 0);
      z_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_124;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_124 = ATgetFirst((ATermList) t);
      w_124 = (ATerm) ATgetNext((ATermList) t);
      t = u_124;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          v_124 = ATgetArgument(t, 0);
          t_124 = ATgetArgument(t, 1);
          {
            ATerm a_52 = NULL,b_52 = NULL,e_52 = NULL,f_52 = NULL;
            t = w_124;
            {
              static ATerm m_16 (ATerm t)
              {
                ATerm l_52 = NULL,q_52 = NULL;
                l_52 = t;
                {
                  ATerm i_62 = t;
                  int j_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                        {
                          q_52 = ATgetArgument(t, 0);
                          {
                            ATerm k_62 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(j_62);
                      t = q_52;
                      if((v_124 != t))
                        {
                          _fail(t);
                        }
                      t = l_52;
                    }
                  else
                    {
                      t = i_62;
                      if(match_cons(t, sym_DynRuleScopeId_1))
                        {
                          q_52 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = q_52;
                      if((v_124 != t))
                        {
                          _fail(t);
                        }
                      t = l_52;
                    }
                }
                return(t);
              }
              t = partition_1_0(m_16, t);
            }
            if(match_cons(t, sym__2))
              {
                b_52 = ATgetArgument(t, 0);
                a_52 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_52;
            {
              static ATerm o_16 (ATerm t)
              {
                ATerm r_52 = NULL;
                if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                  {
                    if((v_124 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    r_52 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_52;
                return(t);
              }
              t = collect_om_2_0(o_16, p_16, t);
            }
            f_52 = t;
            t = (ATerm) ATinsert(CheckATermList(f_52), t_124);
            {
              static ATerm r_16 (ATerm t)
              {
                ATerm c_53 = NULL;
                c_53 = t;
                t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, v_124, c_53)));
                return(t);
              }
              t = map_1_0(r_16, t);
            }
            e_52 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_62, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, e_52), (ATerm) ATmakeAppl(sym_DynRuleScope_2, a_52, z_124))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, v_124)));
          }
        }
      else
        {
          ATerm z_53 = NULL,a_54 = NULL,c_54 = NULL;
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              v_124 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_124;
          {
            static ATerm s_16 (ATerm t)
            {
              ATerm f_54 = NULL,g_54 = NULL;
              f_54 = t;
              {
                ATerm o_62 = t;
                int s_62 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                      {
                        g_54 = ATgetArgument(t, 0);
                        {
                          ATerm t_62 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(s_62);
                    t = g_54;
                    if((v_124 != t))
                      {
                        _fail(t);
                      }
                    t = f_54;
                  }
                else
                  {
                    t = o_62;
                    if(match_cons(t, sym_DynRuleScopeId_1))
                      {
                        g_54 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = g_54;
                    if((v_124 != t))
                      {
                        _fail(t);
                      }
                    t = f_54;
                  }
              }
              return(t);
            }
            t = partition_1_0(s_16, t);
          }
          if(match_cons(t, sym__2))
            {
              a_54 = ATgetArgument(t, 0);
              z_53 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_54;
          {
            static ATerm v_16 (ATerm t)
            {
              ATerm h_54 = NULL;
              if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                {
                  if((v_124 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                  h_54 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_54;
              return(t);
            }
            t = collect_om_2_0(v_16, w_16, t);
          }
          {
            static ATerm a_17 (ATerm t)
            {
              ATerm l_54 = NULL;
              l_54 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, v_124, l_54)));
              return(t);
            }
            t = map_1_0(a_17, t);
          }
          c_54 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_62, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_54), (ATerm) ATmakeAppl(sym_DynRuleScope_2, z_53, z_124))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, v_124)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_124;
    }
  return(t);
}
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm d_125 = NULL,e_125 = NULL,f_125 = NULL;
  t = term_v_43;
  e_125 = t;
  t = (ATerm) ATinsert(ATempty, term_u_62);
  f_125 = t;
  t = SSL_printnl(e_125, f_125);
  t = term_x_43;
  d_125 = t;
  t = SSL_exit(d_125);
  return(t);
}
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm g_125 = NULL,h_125 = NULL,i_125 = NULL;
  t = term_v_43;
  h_125 = t;
  t = (ATerm) ATinsert(ATempty, term_v_62);
  i_125 = t;
  t = SSL_printnl(h_125, i_125);
  t = term_x_43;
  g_125 = t;
  t = SSL_exit(g_125);
  return(t);
}
static ATerm k_127 (ATerm h_126, ATerm i_126, ATerm j_126, ATerm k_126, ATerm l_126, ATerm m_126, ATerm n_126, ATerm t)
{
  t = n_126;
  {
    ATerm w_62 = t;
    if((PushChoice() == 0))
      {
        t = l_126;
        if(match_cons(t, sym_Op_2))
          {
            ATerm x_62 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) x_62) != ATmakeSymbol("Undefined", 0, ATtrue)))
              _fail(t);
            {
              ATerm a_63 = ATgetArgument(t, 1);
              if(((ATgetType(a_63) != AT_LIST) || !(ATisEmpty(a_63))))
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
        t = w_62;
      }
  }
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, h_126, i_126, j_126)), (ATerm) ATmakeAppl(sym_Rule_3, k_126, l_126, m_126));
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = term_c_63;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm u_126 = NULL,v_126 = NULL,w_126 = NULL,x_126 = NULL,y_126 = NULL,z_126 = NULL,f_127 = NULL,g_127 = NULL,h_127 = NULL,i_127 = NULL;
  w_126 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      x_126 = ATgetArgument(t, 0);
      y_126 = ATgetArgument(t, 1);
      z_126 = ATgetArgument(t, 2);
      f_127 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = f_127;
  if(match_cons(t, sym_Rule_3))
    {
      g_127 = ATgetArgument(t, 0);
      h_127 = ATgetArgument(t, 1);
      i_127 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_127;
  if(match_cons(t, sym_Op_2))
    {
      u_126 = ATgetArgument(t, 0);
      v_126 = ATgetArgument(t, 1);
      t = v_126;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = u_126;
          if(match_string(t, "Undefined"))
            {
              ATerm d_63 = t;
              int e_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_126;
                  {
                    ATerm n_63 = t;
                    int o_63 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = i_127;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(o_63);
                      }
                    else
                      {
                        t = n_63;
                        {
                          ATerm w_55 = NULL,a_56 = NULL;
                          t = term_v_43;
                          w_55 = t;
                          t = (ATerm) ATinsert(ATempty, term_p_63);
                          a_56 = t;
                          t = SSL_printnl(w_55, a_56);
                          t = w_126;
                          t = debug_1_0(b_17, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, x_126, y_126, z_126)), g_127);
                  LocalPopChoice(e_63);
                }
              else
                {
                  t = d_63;
                  t = k_127(x_126, y_126, z_126, g_127, h_127, i_127, w_126, t);
                }
            }
          else
            {
              t = k_127(x_126, y_126, z_126, g_127, h_127, i_127, w_126, t);
            }
        }
      else
        {
          t = u_126;
          t = k_127(x_126, y_126, z_126, g_127, h_127, i_127, w_126, t);
        }
    }
  else
    {
      t = k_127(x_126, y_126, z_126, g_127, h_127, i_127, w_126, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm q_119 (ATerm), ATerm t)
{
  ATerm l_127 = NULL,m_127 = NULL,n_127 = NULL,o_127 = NULL;
  l_127 = t;
  t = q_119(t);
  m_127 = t;
  t = term_v_43;
  n_127 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_127), m_127);
  o_127 = t;
  t = SSL_printnl(n_127, o_127);
  t = l_127;
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_c_63;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm p_127 = NULL,q_127 = NULL,r_127 = NULL,s_127 = NULL,t_127 = NULL,u_127 = NULL;
  u_127 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm q_63 = ATgetArgument(t, 0);
      if(match_cons(q_63, sym_DynRuleId_1))
        {
          ATerm s_63 = ATgetArgument(q_63, 0);
          if(match_cons(s_63, sym_RDecT_3))
            {
              p_127 = ATgetArgument(s_63, 0);
              q_127 = ATgetArgument(s_63, 1);
              r_127 = ATgetArgument(s_63, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm r_63 = ATgetArgument(t, 1);
        if(match_cons(r_63, sym_Rule_3))
          {
            s_127 = ATgetArgument(r_63, 0);
            {
              ATerm t_63 = ATgetArgument(r_63, 1);
              if(match_cons(t_63, sym_Op_2))
                {
                  ATerm u_63 = ATgetArgument(t_63, 0);
                  if((ATgetSymbol((ATermAppl) u_63) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm v_63 = ATgetArgument(t_63, 1);
                    if(((ATgetType(v_63) != AT_LIST) || !(ATisEmpty(v_63))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            t_127 = ATgetArgument(r_63, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm w_63 = t;
    int x_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_127;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(x_63);
      }
    else
      {
        t = w_63;
        {
          ATerm v_127 = NULL,w_127 = NULL;
          t = term_v_43;
          v_127 = t;
          t = (ATerm) ATinsert(ATempty, term_p_63);
          w_127 = t;
          t = SSL_printnl(v_127, w_127);
          t = u_127;
          t = debug_1_0(c_17, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, p_127, q_127, r_127)), s_127);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm y_63 = t;
  int a_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_127 = NULL;
      z_127 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm b_64 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_127;
      LocalPopChoice(a_64);
      {
        ATerm a_128 = NULL,b_128 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            a_128 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_128;
        t = map_1_0(e_17, t);
        b_128 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, b_128);
      }
    }
  else
    {
      t = y_63;
      {
        ATerm c_64 = t;
        int d_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_128 = NULL;
            f_128 = t;
            if(match_cons(t, sym_ExtendDynamicRules_1))
              {
                ATerm e_64 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = f_128;
            LocalPopChoice(d_64);
            {
              ATerm g_128 = NULL,h_128 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  g_128 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = g_128;
              t = map_1_0(RDefToDRDef_extend_0_0, t);
              h_128 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, h_128);
            }
          }
        else
          {
            t = c_64;
            {
              ATerm f_64 = t;
              int h_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_128 = NULL;
                  i_128 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm j_64 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_128;
                  LocalPopChoice(h_64);
                  t = UpgradeOverrideDynamicRules_0_0(t);
                }
              else
                {
                  t = f_64;
                  {
                    ATerm k_64 = t;
                    int l_64 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_128 = NULL;
                        j_128 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm m_64 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = j_128;
                        LocalPopChoice(l_64);
                        t = UpgradeExtendOverrideDynamicRules_0_0(t);
                      }
                    else
                      {
                        t = k_64;
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm n_64 = t;
  int o_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UpgradeUndefine_0_0(t);
      LocalPopChoice(o_64);
    }
  else
    {
      t = n_64;
    }
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  t = topdown_1_0(d_17, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = Cons_2_0(g_17, h_17, t);
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm z_128 = NULL,a_129 = NULL,b_129 = NULL,c_129 = NULL,a_27 = NULL;
  c_129 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      a_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_129);
  z_128 = t;
  t = a_129;
  t = topdown_1_0(i_17, t);
  t = listtd_1_0(j_17, t);
  b_129 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, b_129);
  a_27 = t;
  t = SSLsetAnnotations(a_27, z_128);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm q_64 = t;
  int s_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynRuleScope_0_0(t);
      LocalPopChoice(s_64);
    }
  else
    {
      t = q_64;
    }
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = repeat_2_0(k_17, _id, t);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm f_129 = NULL,g_129 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_129 = ATgetFirst((ATermList) t);
      g_129 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_13(f_129, g_129, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm q_128 = NULL,r_128 = NULL,s_128 = NULL,t_128 = NULL,u_128 = NULL,v_128 = NULL,w_128 = NULL,x_128 = NULL,i_27 = NULL,h_27 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  x_128 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_128);
  q_128 = t;
  t = r_128;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_128 = ATgetFirst((ATermList) t);
      u_128 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_128);
  s_128 = t;
  t = u_128;
  t = Cons_2_0(_id, f_17, t);
  v_128 = t;
  t = (ATerm) ATinsert(CheckATermList(v_128), t_128);
  h_27 = t;
  t = SSLsetAnnotations(h_27, s_128);
  w_128 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_128);
  i_27 = t;
  t = SSLsetAnnotations(i_27, q_128);
  return(t);
}
ATerm tboundin_3_0 (ATerm u_145 (ATerm), ATerm v_145 (ATerm), ATerm w_145 (ATerm), ATerm t)
{
  ATerm y_134 = NULL,z_134 = NULL,a_135 = NULL,b_135 = NULL,c_135 = NULL;
  b_135 = t;
  if(match_cons(t, sym_Scope_2))
    {
      c_135 = ATgetArgument(t, 0);
      a_135 = ATgetArgument(t, 1);
      {
        ATerm a_57 = NULL,i_57 = NULL,j_57 = NULL,r_31 = NULL;
        t = SSLgetAnnotations(b_135);
        a_57 = t;
        t = c_135;
        t = w_145(t);
        i_57 = t;
        t = a_135;
        t = u_145(t);
        j_57 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_57, j_57);
        r_31 = t;
        t = SSLsetAnnotations(r_31, a_57);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          c_135 = ATgetArgument(t, 0);
          {
            ATerm c_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,t_31 = NULL,s_31 = NULL;
            t = SSLgetAnnotations(b_135);
            c_58 = t;
            t = c_135;
            if(match_cons(t, sym_Rule_3))
              {
                f_58 = ATgetArgument(t, 0);
                g_58 = ATgetArgument(t, 1);
                h_58 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(c_135);
            e_58 = t;
            t = f_58;
            t = u_145(t);
            j_58 = t;
            t = g_58;
            t = u_145(t);
            k_58 = t;
            t = h_58;
            t = u_145(t);
            l_58 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, j_58, k_58, l_58);
            s_31 = t;
            t = SSLsetAnnotations(s_31, e_58);
            m_58 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, m_58);
            t_31 = t;
            t = SSLsetAnnotations(t_31, c_58);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              c_135 = ATgetArgument(t, 0);
              a_135 = ATgetArgument(t, 1);
              y_134 = ATgetArgument(t, 2);
              {
                ATerm w_58 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,y_31 = NULL;
                t = SSLgetAnnotations(b_135);
                w_58 = t;
                t = c_135;
                t = w_145(t);
                g_59 = t;
                t = a_135;
                t = w_145(t);
                h_59 = t;
                t = y_134;
                t = w_145(t);
                i_59 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, g_59, h_59, i_59);
                y_31 = t;
                t = SSLsetAnnotations(y_31, w_58);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  c_135 = ATgetArgument(t, 0);
                  a_135 = ATgetArgument(t, 1);
                  y_134 = ATgetArgument(t, 2);
                  z_134 = ATgetArgument(t, 3);
                  {
                    ATerm y_59 = NULL,l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,c_32 = NULL;
                    t = SSLgetAnnotations(b_135);
                    y_59 = t;
                    t = c_135;
                    t = w_145(t);
                    l_60 = t;
                    t = a_135;
                    t = w_145(t);
                    m_60 = t;
                    t = y_134;
                    t = w_145(t);
                    n_60 = t;
                    t = z_134;
                    t = u_145(t);
                    o_60 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_60, m_60, n_60, o_60);
                    c_32 = t;
                    t = SSLsetAnnotations(c_32, y_59);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      c_135 = ATgetArgument(t, 0);
                      a_135 = ATgetArgument(t, 1);
                      y_134 = ATgetArgument(t, 2);
                      z_134 = ATgetArgument(t, 3);
                      {
                        ATerm j_61 = NULL,x_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_32 = NULL;
                        t = SSLgetAnnotations(b_135);
                        j_61 = t;
                        t = c_135;
                        t = w_145(t);
                        x_61 = t;
                        t = a_135;
                        t = w_145(t);
                        a_62 = t;
                        t = y_134;
                        t = w_145(t);
                        b_62 = t;
                        t = z_134;
                        t = u_145(t);
                        c_62 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, x_61, a_62, b_62, c_62);
                        d_32 = t;
                        t = SSLsetAnnotations(d_32, j_61);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          c_135 = ATgetArgument(t, 0);
                          a_135 = ATgetArgument(t, 1);
                          {
                            ATerm m_62 = NULL,p_62 = NULL,q_62 = NULL,f_32 = NULL;
                            t = SSLgetAnnotations(b_135);
                            m_62 = t;
                            t = c_135;
                            t = w_145(t);
                            p_62 = t;
                            t = a_135;
                            t = u_145(t);
                            q_62 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, p_62, q_62);
                            f_32 = t;
                            t = SSLsetAnnotations(f_32, m_62);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              c_135 = ATgetArgument(t, 0);
                              a_135 = ATgetArgument(t, 1);
                              {
                                ATerm b_63 = NULL,f_63 = NULL,g_63 = NULL,h_32 = NULL;
                                t = SSLgetAnnotations(b_135);
                                b_63 = t;
                                t = c_135;
                                t = w_145(t);
                                f_63 = t;
                                t = a_135;
                                t = u_145(t);
                                g_63 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, f_63, g_63);
                                h_32 = t;
                                t = SSLsetAnnotations(h_32, b_63);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  c_135 = ATgetArgument(t, 0);
                                  a_135 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_63 = NULL,g_64 = NULL,i_64 = NULL,i_32 = NULL;
                                    t = SSLgetAnnotations(b_135);
                                    z_63 = t;
                                    t = c_135;
                                    t = w_145(t);
                                    g_64 = t;
                                    t = a_135;
                                    t = u_145(t);
                                    i_64 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, g_64, i_64);
                                    i_32 = t;
                                    t = SSLsetAnnotations(i_32, z_63);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      c_135 = ATgetArgument(t, 0);
                                      {
                                        ATerm p_64 = NULL,r_64 = NULL,k_32 = NULL;
                                        t = SSLgetAnnotations(b_135);
                                        p_64 = t;
                                        t = c_135;
                                        t = u_145(t);
                                        r_64 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, r_64);
                                        k_32 = t;
                                        t = SSLsetAnnotations(k_32, p_64);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          c_135 = ATgetArgument(t, 0);
                                          {
                                            ATerm v_65 = NULL,d_66 = NULL,l_32 = NULL;
                                            t = SSLgetAnnotations(b_135);
                                            v_65 = t;
                                            t = c_135;
                                            t = u_145(t);
                                            d_66 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, d_66);
                                            l_32 = t;
                                            t = SSLsetAnnotations(l_32, v_65);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              c_135 = ATgetArgument(t, 0);
                                              {
                                                ATerm q_66 = NULL,v_66 = NULL,p_32 = NULL;
                                                t = SSLgetAnnotations(b_135);
                                                q_66 = t;
                                                t = c_135;
                                                t = u_145(t);
                                                v_66 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, v_66);
                                                p_32 = t;
                                                t = SSLsetAnnotations(p_32, q_66);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  c_135 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm f_67 = NULL,h_67 = NULL,q_32 = NULL;
                                                    t = SSLgetAnnotations(b_135);
                                                    f_67 = t;
                                                    t = c_135;
                                                    t = u_145(t);
                                                    h_67 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, h_67);
                                                    q_32 = t;
                                                    t = SSLsetAnnotations(q_32, f_67);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm r_67 = NULL,u_67 = NULL,r_32 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      c_135 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(b_135);
                                                  r_67 = t;
                                                  t = c_135;
                                                  t = u_145(t);
                                                  u_67 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, u_67);
                                                  r_32 = t;
                                                  t = SSLsetAnnotations(r_32, r_67);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm d_146 (ATerm), ATerm t)
{
  ATerm y_135 = NULL,z_135 = NULL,d_136 = NULL;
  ATerm u_64 = t;
  int v_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          y_135 = ATgetArgument(t, 0);
          {
            ATerm w_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_64);
      t = y_135;
      if(match_cons(t, sym_DynRuleId_1))
        {
          z_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_135;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm x_64 = ATgetArgument(t, 0);
          ATerm y_64 = ATgetArgument(t, 1);
          d_136 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_136;
    }
  else
    {
      t = u_64;
      {
        ATerm j_65 = t;
        int b_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                y_135 = ATgetArgument(t, 0);
                {
                  ATerm c_66 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_66);
            t = y_135;
            if(match_cons(t, sym_DynRuleId_1))
              {
                z_135 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_135;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm e_66 = ATgetArgument(t, 0);
                ATerm l_66 = ATgetArgument(t, 1);
                d_136 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_136;
          }
        else
          {
            t = j_65;
            if(match_cons(t, sym_AddDynRule_2))
              {
                y_135 = ATgetArgument(t, 0);
                {
                  ATerm m_66 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = y_135;
            if(match_cons(t, sym_DynRuleId_1))
              {
                z_135 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = z_135;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm n_66 = ATgetArgument(t, 0);
                ATerm p_66 = ATgetArgument(t, 1);
                d_136 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_136;
          }
      }
    }
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm t_136 = NULL;
  ATerm s_66 = t;
  int u_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_136 = ATgetArgument(t, 0);
          {
            ATerm w_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_66);
      t = t_136;
    }
  else
    {
      t = s_66;
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
static ATerm m_17 (ATerm t)
{
  ATerm z_136 = NULL;
  ATerm y_66 = t;
  int z_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_136 = ATgetArgument(t, 0);
          {
            ATerm c_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_66);
      t = z_136;
    }
  else
    {
      t = y_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_136;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm o_136 = NULL;
  ATerm d_67 = t;
  int e_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm g_67 = ATgetArgument(t, 0);
          ATerm i_67 = ATgetArgument(t, 1);
          o_136 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(e_67);
      t = o_136;
      t = map_1_0(l_17, t);
    }
  else
    {
      t = d_67;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm j_67 = ATgetArgument(t, 0);
          ATerm m_67 = ATgetArgument(t, 1);
          o_136 = ATgetArgument(t, 2);
          {
            ATerm n_67 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = o_136;
      t = map_1_0(m_17, t);
    }
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm v_137 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_137);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm o_67 = t;
  int p_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_67);
    }
  else
    {
      t = o_67;
      {
        ATerm q_67 = t;
        int s_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_67);
          }
        else
          {
            t = q_67;
            {
              ATerm w_67 = t;
              int x_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_137 = NULL,y_137 = NULL,z_137 = NULL,a_138 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_137 = ATgetArgument(t, 0);
                      y_137 = ATgetArgument(t, 1);
                      z_137 = ATgetArgument(t, 2);
                      a_138 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_137;
                  t = map_1_0(p_17, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(z_67);
                      }
                    else
                      {
                        t = y_67;
                        t = dynrule_targs_1_0(r_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm h_138 = NULL;
  ATerm b_68 = t;
  int c_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_138 = ATgetArgument(t, 0);
          {
            ATerm f_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_68);
      t = h_138;
    }
  else
    {
      t = b_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_138 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_138;
    }
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = map_1_0(s_17, t);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm m_138 = NULL;
  ATerm g_68 = t;
  int h_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_138 = ATgetArgument(t, 0);
          {
            ATerm k_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_68);
      t = m_138;
    }
  else
    {
      t = g_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_138 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_138;
    }
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm q_138 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_138);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm l_68 = t;
  int m_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_68);
    }
  else
    {
      t = l_68;
      {
        ATerm n_68 = t;
        int o_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_68);
          }
        else
          {
            t = n_68;
            {
              ATerm p_68 = t;
              int r_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_138 = NULL,y_138 = NULL,z_138 = NULL,a_139 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_138 = ATgetArgument(t, 0);
                      y_138 = ATgetArgument(t, 1);
                      z_138 = ATgetArgument(t, 2);
                      a_139 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_138;
                  t = map_1_0(v_17, t);
                  LocalPopChoice(r_68);
                }
              else
                {
                  t = p_68;
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
                        t = dynrule_targs_1_0(w_17, t);
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
  ATerm j_139 = NULL;
  ATerm w_68 = t;
  int x_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_139 = ATgetArgument(t, 0);
          {
            ATerm z_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_68);
      t = j_139;
    }
  else
    {
      t = w_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_139 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_139;
    }
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = map_1_0(x_17, t);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  ATerm o_139 = NULL;
  ATerm b_69 = t;
  int c_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_139 = ATgetArgument(t, 0);
          {
            ATerm d_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_69);
      t = o_139;
    }
  else
    {
      t = b_69;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_139 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_139;
    }
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm s_139 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_139);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm e_69 = t;
  int f_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_69);
    }
  else
    {
      t = e_69;
      {
        ATerm i_69 = t;
        int m_69 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_69);
          }
        else
          {
            t = i_69;
            {
              ATerm n_69 = t;
              int o_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_139 = NULL,v_139 = NULL,w_139 = NULL,x_139 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_139 = ATgetArgument(t, 0);
                      v_139 = ATgetArgument(t, 1);
                      w_139 = ATgetArgument(t, 2);
                      x_139 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_139;
                  t = map_1_0(a_18, t);
                  LocalPopChoice(o_69);
                }
              else
                {
                  t = n_69;
                  {
                    ATerm s_69 = t;
                    int u_69 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(u_69);
                      }
                    else
                      {
                        t = s_69;
                        t = dynrule_targs_1_0(b_18, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm e_140 = NULL;
  ATerm b_70 = t;
  int g_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_140 = ATgetArgument(t, 0);
          {
            ATerm h_70 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_70);
      t = e_140;
    }
  else
    {
      t = b_70;
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
static ATerm b_18 (ATerm t)
{
  t = map_1_0(c_18, t);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm j_140 = NULL;
  ATerm m_70 = t;
  int n_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_140 = ATgetArgument(t, 0);
          {
            ATerm o_70 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_70);
      t = j_140;
    }
  else
    {
      t = m_70;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_140 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_140;
    }
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm n_140 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_140);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  ATerm p_70 = t;
  int q_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_70);
    }
  else
    {
      t = p_70;
      {
        ATerm r_70 = t;
        int s_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_70);
          }
        else
          {
            t = r_70;
            {
              ATerm t_70 = t;
              int u_70 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_140 = NULL,q_140 = NULL,r_140 = NULL,s_140 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_140 = ATgetArgument(t, 0);
                      q_140 = ATgetArgument(t, 1);
                      r_140 = ATgetArgument(t, 2);
                      s_140 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_140;
                  t = map_1_0(f_18, t);
                  LocalPopChoice(u_70);
                }
              else
                {
                  t = t_70;
                  {
                    ATerm v_70 = t;
                    int w_70 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_70);
                      }
                    else
                      {
                        t = v_70;
                        t = dynrule_targs_1_0(g_18, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm b_141 = NULL;
  ATerm x_70 = t;
  int y_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_141 = ATgetArgument(t, 0);
          {
            ATerm a_71 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_70);
      t = b_141;
    }
  else
    {
      t = x_70;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_141 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_141;
    }
  return(t);
}
static ATerm g_18 (ATerm t)
{
  t = map_1_0(h_18, t);
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm g_141 = NULL;
  ATerm b_71 = t;
  int c_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_141 = ATgetArgument(t, 0);
          {
            ATerm d_71 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_71);
      t = g_141;
    }
  else
    {
      t = b_71;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_141 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_141;
    }
  return(t);
}
static ATerm i_18 (ATerm t)
{
  ATerm k_141 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_141);
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm e_71 = t;
  int f_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(f_71);
    }
  else
    {
      t = e_71;
      {
        ATerm g_71 = t;
        int i_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_71);
          }
        else
          {
            t = g_71;
            {
              ATerm k_71 = t;
              int l_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_141 = NULL,n_141 = NULL,o_141 = NULL,p_141 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_141 = ATgetArgument(t, 0);
                      n_141 = ATgetArgument(t, 1);
                      o_141 = ATgetArgument(t, 2);
                      p_141 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_141;
                  t = map_1_0(k_18, t);
                  LocalPopChoice(l_71);
                }
              else
                {
                  t = k_71;
                  {
                    ATerm o_71 = t;
                    int p_71 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(p_71);
                      }
                    else
                      {
                        t = o_71;
                        t = dynrule_targs_1_0(l_18, t);
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
  ATerm w_141 = NULL;
  ATerm q_71 = t;
  int r_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_141 = ATgetArgument(t, 0);
          {
            ATerm s_71 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_71);
      t = w_141;
    }
  else
    {
      t = q_71;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_141 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_141;
    }
  return(t);
}
static ATerm l_18 (ATerm t)
{
  t = map_1_0(m_18, t);
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm b_142 = NULL;
  ATerm t_71 = t;
  int u_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_142 = ATgetArgument(t, 0);
          {
            ATerm w_71 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_71);
      t = b_142;
    }
  else
    {
      t = t_71;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_142 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_142;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm t_137 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      t_137 = ATgetArgument(t, 0);
      t = t_137;
      t = free_vars_3_0(n_17, o_17, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          t_137 = ATgetArgument(t, 0);
          t = t_137;
          t = free_vars_3_0(t_17, u_17, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              t_137 = ATgetArgument(t, 0);
              t = t_137;
              t = free_vars_3_0(y_17, z_17, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  t_137 = ATgetArgument(t, 0);
                  t = t_137;
                  t = free_vars_3_0(d_18, e_18, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      t_137 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = t_137;
                  t = free_vars_3_0(i_18, j_18, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm q_142 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_142);
  return(t);
}
static ATerm o_18 (ATerm t)
{
  ATerm y_71 = t;
  int z_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_71);
    }
  else
    {
      t = y_71;
      {
        ATerm a_72 = t;
        int b_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_72);
          }
        else
          {
            t = a_72;
            {
              ATerm c_72 = t;
              int d_72 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_142 = NULL,t_142 = NULL,u_142 = NULL,v_142 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_142 = ATgetArgument(t, 0);
                      t_142 = ATgetArgument(t, 1);
                      u_142 = ATgetArgument(t, 2);
                      v_142 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_142;
                  t = map_1_0(p_18, t);
                  LocalPopChoice(d_72);
                }
              else
                {
                  t = c_72;
                  {
                    ATerm e_72 = t;
                    int f_72 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_72);
                      }
                    else
                      {
                        t = e_72;
                        t = dynrule_targs_1_0(q_18, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm c_143 = NULL;
  ATerm h_72 = t;
  int j_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_143 = ATgetArgument(t, 0);
          {
            ATerm k_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_72);
      t = c_143;
    }
  else
    {
      t = h_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_143;
    }
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = map_1_0(r_18, t);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm l_143 = NULL;
  ATerm l_72 = t;
  int m_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_143 = ATgetArgument(t, 0);
          {
            ATerm n_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_72);
      t = l_143;
    }
  else
    {
      t = l_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_143;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm j_142 = NULL,n_142 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      n_142 = ATgetArgument(t, 0);
      t = n_142;
      if(match_cons(t, sym_Rule_3))
        {
          j_142 = ATgetArgument(t, 0);
          {
            ATerm o_72 = ATgetArgument(t, 1);
          }
          {
            ATerm p_72 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = j_142;
      t = free_vars_3_0(n_18, o_18, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          n_142 = ATgetArgument(t, 0);
          {
            ATerm q_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_142;
    }
  return(t);
}
static ATerm n_13 (ATerm m_124 (ATerm), ATerm u_30, ATerm t_30, ATerm t)
{
  static ATerm e_144 (ATerm t)
  {
    ATerm z_143 = NULL,a_144 = NULL,b_144 = NULL;
    z_143 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_144 = ATgetFirst((ATermList) t);
            b_144 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm r_72 = t;
          int t_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_143;
              {
                static ATerm s_18 (ATerm t)
                {
                  t = t_30;
                  return(t);
                }
                t = o_13(m_124, s_18, a_144, b_144, t);
              }
              t = e_144(t);
              LocalPopChoice(t_72);
            }
          else
            {
              t = r_72;
              {
                ATerm d_68 = NULL,i_68 = NULL,q_33 = NULL;
                t = SSLgetAnnotations(z_143);
                d_68 = t;
                t = b_144;
                t = e_144(t);
                i_68 = t;
                t = (ATerm) ATinsert(CheckATermList(i_68), a_144);
                q_33 = t;
                t = SSLsetAnnotations(q_33, d_68);
              }
            }
        }
      }
    return(t);
  }
  t = u_30;
  t = e_144(t);
  return(t);
}
static ATerm o_13 (ATerm p_124 (ATerm), ATerm q_124 (ATerm), ATerm y_30, ATerm x_30, ATerm t)
{
  t = q_124(t);
  {
    static ATerm t_18 (ATerm t)
    {
      ATerm i_144 = NULL;
      i_144 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_30, i_144);
      t = p_124(t);
      return(t);
    }
    t = fetch_1_0(t_18, t);
  }
  t = x_30;
  return(t);
}
static ATerm p_13 (ATerm h_124 (ATerm), ATerm s_30, ATerm r_30, ATerm t)
{
  static ATerm a_145 (ATerm t)
  {
    ATerm t_144 = NULL,u_144 = NULL,v_144 = NULL;
    t_144 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_144;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_144 = ATgetFirst((ATermList) t);
            v_144 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_72 = t;
          int x_72 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_144;
              {
                static ATerm u_18 (ATerm t)
                {
                  t = r_30;
                  return(t);
                }
                t = o_13(h_124, u_18, u_144, v_144, t);
              }
              t = a_145(t);
              LocalPopChoice(x_72);
            }
          else
            {
              t = u_72;
              {
                ATerm u_68 = NULL,y_68 = NULL,s_33 = NULL;
                t = SSLgetAnnotations(t_144);
                u_68 = t;
                t = v_144;
                t = a_145(t);
                y_68 = t;
                t = (ATerm) ATinsert(CheckATermList(y_68), u_144);
                s_33 = t;
                t = SSLsetAnnotations(s_33, u_68);
              }
            }
        }
      }
    return(t);
  }
  t = s_30;
  t = a_145(t);
  return(t);
}
ATerm genzip_4_0 (ATerm f_122 (ATerm), ATerm g_122 (ATerm), ATerm h_122 (ATerm), ATerm i_122 (ATerm), ATerm t)
{
  static ATerm i_145 (ATerm t)
  {
    ATerm y_72 = t;
    int z_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_122(t);
        LocalPopChoice(z_72);
      }
    else
      {
        t = y_72;
        {
          ATerm c_145 = NULL,d_145 = NULL,e_145 = NULL,f_145 = NULL,g_145 = NULL,h_145 = NULL,x_33 = NULL;
          t = g_122(t);
          h_145 = t;
          if(match_cons(t, sym__2))
            {
              d_145 = ATgetArgument(t, 0);
              e_145 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_145);
          c_145 = t;
          t = d_145;
          t = i_122(t);
          f_145 = t;
          t = e_145;
          t = i_145(t);
          g_145 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_145, g_145);
          x_33 = t;
          t = SSLsetAnnotations(x_33, c_145);
          t = h_122(t);
        }
      }
    return(t);
  }
  t = i_145(t);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_73 = ATgetArgument(t, 0);
      if(((ATgetType(a_73) != AT_LIST) || !(ATisEmpty(a_73))))
        _fail(t);
      {
        ATerm b_73 = ATgetArgument(t, 1);
        if(((ATgetType(b_73) != AT_LIST) || !(ATisEmpty(b_73))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm p_145 = NULL,q_145 = NULL,r_145 = NULL,s_145 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_73 = ATgetArgument(t, 0);
      if(((ATgetType(c_73) == AT_LIST) && !(ATisEmpty(c_73))))
        {
          p_145 = ATgetFirst((ATermList) c_73);
          q_145 = (ATerm) ATgetNext((ATermList) c_73);
        }
      else
        _fail(t);
      {
        ATerm d_73 = ATgetArgument(t, 1);
        if(((ATgetType(d_73) == AT_LIST) && !(ATisEmpty(d_73))))
          {
            r_145 = ATgetFirst((ATermList) d_73);
            s_145 = (ATerm) ATgetNext((ATermList) d_73);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_145, r_145), (ATerm) ATmakeAppl(sym__2, q_145, s_145));
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm t_145 = NULL,x_145 = NULL;
  if(match_cons(t, sym__2))
    {
      t_145 = ATgetArgument(t, 0);
      x_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_145), t_145);
  return(t);
}
static ATerm u_13 (ATerm d_687, ATerm i_687, ATerm j_68, ATerm t)
{
  ATerm k_145 = NULL,l_145 = NULL,m_145 = NULL,n_145 = NULL;
  t = SSL_explode_term(i_687);
  if(match_cons(t, sym__2))
    {
      k_145 = ATgetArgument(t, 0);
      m_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(d_687);
  if(match_cons(t, sym__2))
    {
      if((k_145 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_145, m_145);
  t = genzip_4_0(v_18, w_18, x_18, _id, t);
  n_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_145, j_68);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm g_113 (ATerm), ATerm h_113 (ATerm), ATerm t)
{
  static ATerm z_145 (ATerm t)
  {
    ATerm f_73 = t;
    int g_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_113(t);
        LocalPopChoice(g_73);
      }
    else
      {
        t = f_73;
        t = h_113(t);
        t = z_145(t);
      }
    return(t);
  }
  t = z_145(t);
  return(t);
}
ATerm for_3_0 (ATerm j_113 (ATerm), ATerm k_113 (ATerm), ATerm l_113 (ATerm), ATerm t)
{
  t = j_113(t);
  t = while_not_2_0(k_113, l_113, t);
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm h_146 = NULL;
  h_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, h_146);
  return(t);
}
static ATerm z_18 (ATerm t)
{
  ATerm i_146 = NULL,j_146 = NULL,k_146 = NULL,l_146 = NULL,z_33 = NULL;
  l_146 = t;
  if(match_cons(t, sym__2))
    {
      j_146 = ATgetArgument(t, 0);
      k_146 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_146);
  i_146 = t;
  t = k_146;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_146, k_146);
  z_33 = t;
  t = SSLsetAnnotations(z_33, i_146);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm o_147 = NULL,p_147 = NULL,q_147 = NULL,r_147 = NULL,t_147 = NULL;
  o_147 = t;
  if(match_cons(t, sym__2))
    {
      p_147 = ATgetArgument(t, 0);
      q_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_147;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_147 = ATgetFirst((ATermList) t);
      t_147 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_73 = t;
        int j_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_148(p_147, q_147, o_147, t);
            LocalPopChoice(j_73);
          }
        else
          {
            t = i_73;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_147), r_147), t_147);
          }
      }
    }
  else
    {
      t = d_148(p_147, q_147, o_147, t);
    }
  return(t);
}
static ATerm d_148 (ATerm m_146, ATerm n_146, ATerm o_146, ATerm t)
{
  ATerm t_146 = NULL,c_147 = NULL,d_34 = NULL,f_147 = NULL,g_147 = NULL,h_147 = NULL,i_147 = NULL;
  t = SSLgetAnnotations(o_146);
  t_146 = t;
  t = n_146;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_147 = ATgetFirst((ATermList) t);
      i_147 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_147;
  if(match_cons(t, sym__2))
    {
      g_147 = ATgetArgument(t, 0);
      h_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_73 = t;
    int l_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_147;
        if((g_147 != t))
          {
            _fail(t);
          }
        t = i_147;
        LocalPopChoice(l_73);
      }
    else
      {
        t = k_73;
        t = n_146;
        t = u_13(g_147, h_147, i_147, t);
      }
  }
  c_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_146, c_147);
  d_34 = t;
  t = SSLsetAnnotations(d_34, t_146);
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm c_148 = NULL;
  if(match_cons(t, sym__2))
    {
      c_148 = ATgetArgument(t, 0);
      if((c_148 != ATgetArgument(t, 1)))
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
  ATerm m_73 = t;
  int n_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(y_18, z_18, a_19, t);
      LocalPopChoice(n_73);
    }
  else
    {
      t = m_73;
      {
        ATerm x_147 = NULL,y_147 = NULL,z_147 = NULL;
        x_147 = t;
        if(match_cons(t, sym__2))
          {
            y_147 = ATgetArgument(t, 0);
            z_147 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_147;
        t = p_13(c_19, y_147, z_147, t);
      }
    }
  return(t);
}
static ATerm e_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_19 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL;
  if(match_cons(t, sym__2))
    {
      p_69 = ATgetArgument(t, 0);
      q_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_13(m_19, p_69, q_69, t);
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm r_69 = NULL;
  if(match_cons(t, sym__2))
    {
      r_69 = ATgetArgument(t, 0);
      if((r_69 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_19 (ATerm t)
{
  ATerm i_70 = NULL,k_70 = NULL;
  if(match_cons(t, sym__2))
    {
      i_70 = ATgetArgument(t, 0);
      k_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_13(s_19, i_70, k_70, t);
  return(t);
}
static ATerm s_19 (ATerm t)
{
  ATerm l_70 = NULL;
  if(match_cons(t, sym__2))
    {
      l_70 = ATgetArgument(t, 0);
      if((l_70 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm h_143 (ATerm), ATerm i_143 (ATerm), ATerm j_143 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm s_148 (ATerm t)
  {
    ATerm o_73 = t;
    int p_73 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_143(t);
        LocalPopChoice(p_73);
      }
    else
      {
        t = o_73;
        {
          ATerm q_73 = t;
          int r_73 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_148 = NULL,g_148 = NULL,g_69 = NULL,h_69 = NULL;
              f_148 = t;
              t = i_143(t);
              g_148 = t;
              t = f_148;
              {
                static ATerm d_19 (ATerm t)
                {
                  ATerm i_148 = NULL;
                  t = s_148(t);
                  i_148 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_148, g_148);
                  t = diff_0_0(t);
                  return(t);
                }
                t = j_143(d_19, s_148, e_19, t);
              }
              h_69 = t;
              t = SSL_explode_term(h_69);
              if(match_cons(t, sym__2))
                {
                  ATerm s_73 = ATgetArgument(t, 0);
                  g_69 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_69;
              t = foldr_3_0(f_19, i_19, _id, t);
              LocalPopChoice(r_73);
            }
          else
            {
              t = q_73;
              {
                ATerm t_69 = NULL,a_70 = NULL;
                a_70 = t;
                t = SSL_explode_term(a_70);
                if(match_cons(t, sym__2))
                  {
                    ATerm t_73 = ATgetArgument(t, 0);
                    t_69 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_69;
                t = foldr_3_0(n_19, r_19, s_148, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_148(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm q_113 (ATerm), ATerm t)
{
  static ATerm w_19 (ATerm t)
  {
    t = bottomup_1_0(q_113, t);
    return(t);
  }
  t = SRTS_all(w_19, t);
  t = q_113(t);
  return(t);
}
static ATerm y_13 (ATerm q_61, ATerm r_61, ATerm t)
{
  ATerm t_148 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_61, r_61);
  t = r_14(q_61, r_61, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_148 = ATgetFirst((ATermList) t);
      {
        ATerm z_73 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_148;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm i_149 = NULL,j_149 = NULL;
  i_149 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_74 = t;
    int d_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_70 = NULL;
        t = term_g_74;
        z_70 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_g_74, i_149);
        t = y_13(z_70, i_149, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm h_74 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_74) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, j_149, (ATerm) ATempty);
        LocalPopChoice(d_74);
      }
    else
      {
        t = c_74;
        {
          ATerm j_71 = NULL;
          t = term_g_74;
          j_71 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_74, i_149);
          t = y_13(j_71, i_149, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm i_74 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_74) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, j_149, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm h_115 (ATerm), ATerm t)
{
  static ATerm m_149 (ATerm t)
  {
    ATerm j_74 = t;
    int k_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_115(t);
        LocalPopChoice(k_74);
      }
    else
      {
        t = j_74;
        t = SRTS_all(m_149, t);
      }
    return(t);
  }
  t = m_149(t);
  return(t);
}
static ATerm z_13 (ATerm k_133 (ATerm), ATerm w_44, ATerm u_44, ATerm t)
{
  ATerm n_149 = NULL,o_149 = NULL,p_149 = NULL,q_149 = NULL,r_149 = NULL,s_149 = NULL,t_149 = NULL,u_149 = NULL;
  q_149 = t;
  t = k_133(t);
  n_149 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_149, w_44, u_44);
  t = s_14(n_149, w_44, u_44, t);
  {
    ATerm l_74 = t;
    int m_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_149 = NULL;
        t = term_n_74;
        v_149 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_149, term_n_74);
        t = r_14(n_149, v_149, t);
        LocalPopChoice(m_74);
      }
    else
      {
        t = l_74;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_149 = ATgetFirst((ATermList) t);
      p_149 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_149, term_n_74, (ATerm) ATinsert(CheckATermList(p_149), (ATerm) ATinsert(CheckATermList(o_149), w_44)));
  t = lookup_table_0_1(n_149, t);
  u_149 = t;
  t = term_n_74;
  r_149 = t;
  t = (ATerm) ATinsert(CheckATermList(p_149), (ATerm) ATinsert(CheckATermList(o_149), w_44));
  s_149 = t;
  t = u_149;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_14(r_149, s_149, t_149, t);
  t = q_149;
  return(t);
}
static ATerm x_19 (ATerm t)
{
  t = term_g_74;
  return(t);
}
static ATerm y_19 (ATerm t)
{
  t = term_g_74;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm z_149 = NULL,b_150 = NULL,c_150 = NULL,d_150 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      b_150 = ATgetArgument(t, 0);
      c_150 = ATgetArgument(t, 1);
      z_149 = ATgetArgument(t, 2);
      {
        ATerm g_150 = NULL,h_150 = NULL;
        t = c_150;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, b_150);
        g_150 = t;
        t = term_p_74;
        h_150 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_150), term_p_74);
        t = z_13(x_19, g_150, h_150, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, b_150, (ATerm)ATempty, z_149);
      }
    }
  else
    {
      ATerm k_150 = NULL,l_150 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          b_150 = ATgetArgument(t, 0);
          c_150 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_150;
      if(match_cons(t, sym_ConstType_1))
        {
          d_150 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, b_150);
      k_150 = t;
      t = term_s_74;
      l_150 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, b_150), term_s_74);
      t = z_13(y_19, k_150, l_150, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, b_150, (ATerm) ATmakeAppl(sym_ConstType_1, d_150));
    }
  return(t);
}
static ATerm a_14 (ATerm k_61, ATerm l_61, ATerm t)
{
  ATerm p_150 = NULL,q_150 = NULL;
  q_150 = t;
  {
    ATerm t_74 = t;
    int u_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_61, l_61);
        t = r_14(k_61, l_61, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_74 = ATgetFirst((ATermList) t);
            p_150 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(u_74);
        {
          ATerm r_150 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, k_61, l_61, p_150);
          t = lookup_table_0_1(k_61, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_150 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_14(l_61, p_150, r_150, t);
          t = (ATerm) ATmakeAppl(sym__3, k_61, l_61, p_150);
        }
      }
    else
      {
        t = t_74;
        {
          ATerm t_150 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, k_61, l_61);
          t = lookup_table_0_1(k_61, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              t_150 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_14(l_61, t_150, t);
          t = (ATerm) ATmakeAppl(sym__2, k_61, l_61);
        }
      }
  }
  t = q_150;
  return(t);
}
ATerm end_scope_1_0 (ATerm h_133 (ATerm), ATerm t)
{
  ATerm v_150 = NULL,w_150 = NULL,x_150 = NULL,y_150 = NULL,z_150 = NULL,a_151 = NULL,b_151 = NULL;
  y_150 = t;
  t = h_133(t);
  x_150 = t;
  {
    ATerm w_74 = t;
    int x_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_151 = NULL;
        t = term_n_74;
        c_151 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_150, term_n_74);
        t = r_14(x_150, c_151, t);
        LocalPopChoice(x_74);
      }
    else
      {
        t = w_74;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_150 = ATgetFirst((ATermList) t);
      v_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, x_150, term_n_74, v_150);
  t = lookup_table_0_1(x_150, t);
  b_151 = t;
  t = term_n_74;
  z_150 = t;
  t = b_151;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_14(z_150, v_150, a_151, t);
  t = w_150;
  {
    static ATerm z_19 (ATerm t)
    {
      ATerm d_151 = NULL;
      d_151 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_150, d_151);
      t = a_14(x_150, d_151, t);
      return(t);
    }
    t = map_1_0(z_19, t);
  }
  t = y_150;
  return(t);
}
ATerm restore_always_2_0 (ATerm l_112 (ATerm), ATerm m_112 (ATerm), ATerm t)
{
  ATerm y_74 = t;
  int z_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_112(t);
      t = m_112(t);
      LocalPopChoice(z_74);
    }
  else
    {
      t = y_74;
      t = m_112(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm g_133 (ATerm), ATerm t)
{
  ATerm f_151 = NULL,g_151 = NULL,h_151 = NULL,i_151 = NULL,j_151 = NULL,k_151 = NULL,l_151 = NULL;
  g_151 = t;
  t = g_133(t);
  f_151 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_151, term_n_74);
  {
    ATerm a_75 = t;
    int b_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_151 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm c_75 = ATgetArgument(t, 0);
            ATerm d_75 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_74;
        p_151 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_151, term_n_74);
        t = r_14(f_151, p_151, t);
        LocalPopChoice(b_75);
      }
    else
      {
        t = a_75;
        t = (ATerm) ATempty;
      }
  }
  h_151 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_151, term_n_74, (ATerm) ATinsert(CheckATermList(h_151), (ATerm) ATempty));
  t = lookup_table_0_1(f_151, t);
  l_151 = t;
  t = term_n_74;
  i_151 = t;
  t = (ATerm) ATinsert(CheckATermList(h_151), (ATerm) ATempty);
  j_151 = t;
  t = l_151;
  if(match_cons(t, sym_Hashtable_1))
    {
      k_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_14(i_151, j_151, k_151, t);
  t = g_151;
  return(t);
}
ATerm scope_2_0 (ATerm i_133 (ATerm), ATerm j_133 (ATerm), ATerm t)
{
  static ATerm d_20 (ATerm t)
  {
    t = end_scope_1_0(i_133, t);
    return(t);
  }
  t = begin_scope_1_0(i_133, t);
  t = restore_always_2_0(j_133, d_20, t);
  return(t);
}
static ATerm j_20 (ATerm t)
{
  t = term_g_74;
  return(t);
}
static ATerm m_20 (ATerm t)
{
  ATerm u_151 = NULL,v_151 = NULL,w_151 = NULL,x_151 = NULL,p_34 = NULL;
  x_151 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_151);
  u_151 = t;
  t = v_151;
  t = map_1_0(o_20, t);
  w_151 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_151);
  p_34 = t;
  t = SSLsetAnnotations(p_34, u_151);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm o_20 (ATerm t)
{
  ATerm k_152 = NULL,l_152 = NULL;
  l_152 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      k_152 = ATgetArgument(t, 0);
      {
        ATerm e_75 = t;
        int f_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_71 = NULL,x_71 = NULL,n_34 = NULL;
            t = SSLgetAnnotations(l_152);
            v_71 = t;
            t = k_152;
            t = map_1_0(s_20, t);
            x_71 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, x_71);
            n_34 = t;
            t = SSLsetAnnotations(n_34, v_71);
            LocalPopChoice(f_75);
          }
        else
          {
            t = e_75;
            t = l_152;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          k_152 = ATgetArgument(t, 0);
          {
            ATerm h_75 = t;
            int i_75 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_72 = NULL,i_72 = NULL,o_34 = NULL;
                t = SSLgetAnnotations(l_152);
                g_72 = t;
                t = k_152;
                t = map_1_0(t_20, t);
                i_72 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, i_72);
                o_34 = t;
                t = SSLsetAnnotations(o_34, g_72);
                LocalPopChoice(i_75);
              }
            else
              {
                t = h_75;
                t = l_152;
              }
          }
        }
      else
        {
          t = l_152;
        }
    }
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm j_75 = t;
  int k_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(k_75);
    }
  else
    {
      t = j_75;
    }
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm m_75 = t;
  int n_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(n_75);
    }
  else
    {
      t = m_75;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(j_20, m_20, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_152 = NULL,t_152 = NULL,u_152 = NULL;
  s_152 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_152;
    }
  else
    {
      static ATerm u_20 (ATerm t)
      {
        t = not_null(u_152);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_152 = ATgetFirst((ATermList) t);
          if(((u_152 != NULL) && (u_152 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            u_152 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_152;
      t = at_end_1_0(u_20, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm e_128 (ATerm), ATerm t)
{
  ATerm j_153 = NULL,k_153 = NULL,l_153 = NULL;
  j_153 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_153;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_153 = ATgetFirst((ATermList) t);
          l_153 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm o_75 = t;
        int p_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_72 = NULL,v_72 = NULL,w_72 = NULL,b_35 = NULL;
            t = SSLgetAnnotations(j_153);
            s_72 = t;
            t = k_153;
            t = e_128(t);
            v_72 = t;
            t = l_153;
            t = filter_1_0(e_128, t);
            w_72 = t;
            t = (ATerm) ATinsert(CheckATermList(w_72), v_72);
            b_35 = t;
            t = SSLsetAnnotations(b_35, s_72);
            LocalPopChoice(p_75);
          }
        else
          {
            t = o_75;
            t = l_153;
            t = filter_1_0(e_128, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm s_120 (ATerm), ATerm t)
{
  static ATerm b_154 (ATerm t)
  {
    ATerm y_153 = NULL,z_153 = NULL,a_154 = NULL;
    a_154 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_153 = ATgetFirst((ATermList) t);
        z_153 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_73 = NULL,h_73 = NULL,i_35 = NULL;
          t = SSLgetAnnotations(a_154);
          e_73 = t;
          t = z_153;
          t = b_154(t);
          h_73 = t;
          t = (ATerm) ATinsert(CheckATermList(h_73), y_153);
          i_35 = t;
          t = SSLsetAnnotations(i_35, e_73);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = a_154;
        t = s_120(t);
      }
    return(t);
  }
  t = b_154(t);
  return(t);
}
static ATerm n_154 (ATerm f_154, ATerm t)
{
  ATerm g_154 = NULL;
  t = SSL_explode_term(f_154);
  if(match_cons(t, sym__2))
    {
      ATerm q_75 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_75) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      g_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_154;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm i_154 = NULL,j_154 = NULL,k_154 = NULL;
  k_154 = t;
  if(match_cons(t, sym__2))
    {
      i_154 = ATgetArgument(t, 0);
      j_154 = ATgetArgument(t, 1);
      {
        ATerm r_75 = t;
        int t_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm v_20 (ATerm t)
            {
              t = j_154;
              return(t);
            }
            t = i_154;
            t = at_end_1_0(v_20, t);
            LocalPopChoice(t_75);
          }
        else
          {
            t = r_75;
            t = n_154(k_154, t);
          }
      }
    }
  else
    {
      t = n_154(k_154, t);
    }
  return(t);
}
static ATerm d_14 (ATerm e_35, ATerm r_34, ATerm t)
{
  ATerm o_154 = NULL,p_154 = NULL;
  static ATerm x_20 (ATerm t)
  {
    ATerm q_154 = NULL,r_154 = NULL,s_154 = NULL,t_154 = NULL;
    t_154 = t;
    t = SSL_explode_term(t_154);
    if(match_cons(t, sym__2))
      {
        if(((o_154 != NULL) && (o_154 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          o_154 = ATgetArgument(t, 0);
        {
          ATerm u_75 = ATgetArgument(t, 1);
          if(((ATgetType(u_75) == AT_LIST) && !(ATisEmpty(u_75))))
            {
              q_154 = ATgetFirst((ATermList) u_75);
              {
                ATerm v_75 = (ATerm) ATgetNext((ATermList) u_75);
                if(((ATgetType(v_75) != AT_LIST) || !(ATisEmpty(v_75))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, q_154, not_null(p_154));
    t = conc_0_0(t);
    r_154 = t;
    t = (ATerm) ATinsert(ATempty, r_154);
    s_154 = t;
    t = SSL_mkterm(o_154, s_154);
    return(t);
  }
  t = SSL_explode_term(e_35);
  if(match_cons(t, sym__2))
    {
      if(((o_154 != NULL) && (o_154 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_154 = ATgetArgument(t, 0);
      {
        ATerm w_75 = ATgetArgument(t, 1);
        if(((ATgetType(w_75) == AT_LIST) && !(ATisEmpty(w_75))))
          {
            if(((p_154 != NULL) && (p_154 != ATgetFirst((ATermList) w_75))))
              _fail(ATgetFirst((ATermList) w_75));
            else
              p_154 = ATgetFirst((ATermList) w_75);
            {
              ATerm x_75 = (ATerm) ATgetNext((ATermList) w_75);
              if(((ATgetType(x_75) != AT_LIST) || !(ATisEmpty(x_75))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_34;
  t = fetch_1_0(x_20, t);
  return(t);
}
ATerm foldr_3_0 (ATerm c_127 (ATerm), ATerm d_127 (ATerm), ATerm e_127 (ATerm), ATerm t)
{
  ATerm v_154 = NULL,w_154 = NULL,x_154 = NULL;
  v_154 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_154;
      t = c_127(t);
    }
  else
    {
      ATerm a_155 = NULL,b_155 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_154 = ATgetFirst((ATermList) t);
          x_154 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_154;
      t = e_127(t);
      a_155 = t;
      t = x_154;
      t = foldr_3_0(c_127, d_127, e_127, t);
      b_155 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_155, b_155);
      t = d_127(t);
    }
  return(t);
}
static ATerm b_21 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_76), term_z_75), term_y_75);
  return(t);
}
static ATerm e_21 (ATerm t)
{
  ATerm i_155 = NULL,j_155 = NULL;
  if(match_cons(t, sym__2))
    {
      i_155 = ATgetArgument(t, 0);
      j_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_14(i_155, j_155, t);
  return(t);
}
static ATerm h_21 (ATerm t)
{
  ATerm k_155 = NULL,l_155 = NULL;
  l_155 = t;
  if(match_cons(t, sym_Signature_1))
    {
      k_155 = ATgetArgument(t, 0);
      {
        ATerm d_76 = t;
        int e_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_155 = NULL;
            t = k_155;
            t = filter_1_0(k_21, t);
            t = concat_0_0(t);
            n_155 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, n_155);
            LocalPopChoice(e_76);
          }
        else
          {
            t = d_76;
            t = l_155;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          k_155 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, k_155);
        }
      else
        {
          t = l_155;
        }
    }
  return(t);
}
static ATerm k_21 (ATerm t)
{
  ATerm o_155 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      o_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_155;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm e_155 = NULL,f_155 = NULL,g_155 = NULL,h_155 = NULL,l_35 = NULL;
  h_155 = t;
  if(match_cons(t, sym_Specification_1))
    {
      f_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_155);
  e_155 = t;
  t = f_155;
  t = foldr_3_0(b_21, e_21, h_21, t);
  g_155 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, g_155);
  l_35 = t;
  t = SSLsetAnnotations(l_35, e_155);
  return(t);
}
static ATerm l_21 (ATerm t)
{
  ATerm f_76 = t;
  int g_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(g_76);
    }
  else
    {
      t = f_76;
    }
  return(t);
}
static ATerm m_21 (ATerm t)
{
  ATerm k_156 = NULL,l_156 = NULL,m_156 = NULL,n_156 = NULL,o_156 = NULL;
  o_156 = t;
  if(match_cons(t, sym_LRule_1))
    {
      n_156 = ATgetArgument(t, 0);
      t = n_156;
      if(match_cons(t, sym_Rule_3))
        {
          k_156 = ATgetArgument(t, 0);
          l_156 = ATgetArgument(t, 1);
          m_156 = ATgetArgument(t, 2);
          {
            ATerm h_76 = t;
            int i_76 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_156 = NULL;
                t = k_156;
                t = free_vars_3_0(n_21, x_21, tboundin_3_0, t);
                s_156 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, s_156, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, k_156, l_156, m_156)));
                LocalPopChoice(i_76);
              }
            else
              {
                t = h_76;
                t = o_156;
              }
          }
        }
      else
        {
          t = o_156;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          n_156 = ATgetArgument(t, 0);
          {
            ATerm j_76 = t;
            int k_76 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_157 = NULL;
                t = n_156;
                t = free_vars_3_0(k_22, l_22, tboundin_3_0, t);
                q_157 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, q_157, n_156);
                LocalPopChoice(k_76);
              }
            else
              {
                t = j_76;
                t = o_156;
              }
          }
        }
      else
        {
          t = o_156;
        }
    }
  return(t);
}
static ATerm n_21 (ATerm t)
{
  ATerm t_156 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_156);
  return(t);
}
static ATerm x_21 (ATerm t)
{
  ATerm l_76 = t;
  int m_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_76);
    }
  else
    {
      t = l_76;
      {
        ATerm n_76 = t;
        int o_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_76);
          }
        else
          {
            t = n_76;
            {
              ATerm p_76 = t;
              int q_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_156 = NULL,w_156 = NULL,x_156 = NULL,y_156 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_156 = ATgetArgument(t, 0);
                      w_156 = ATgetArgument(t, 1);
                      x_156 = ATgetArgument(t, 2);
                      y_156 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_156;
                  t = map_1_0(a_22, t);
                  LocalPopChoice(q_76);
                }
              else
                {
                  t = p_76;
                  {
                    ATerm r_76 = t;
                    int t_76 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_76);
                      }
                    else
                      {
                        t = r_76;
                        t = dynrule_targs_1_0(f_22, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_22 (ATerm t)
{
  ATerm f_157 = NULL;
  ATerm u_76 = t;
  int v_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_157 = ATgetArgument(t, 0);
          {
            ATerm x_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_76);
      t = f_157;
    }
  else
    {
      t = u_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_157 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_157;
    }
  return(t);
}
static ATerm f_22 (ATerm t)
{
  t = map_1_0(h_22, t);
  return(t);
}
static ATerm h_22 (ATerm t)
{
  ATerm k_157 = NULL;
  ATerm y_76 = t;
  int z_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_157 = ATgetArgument(t, 0);
          {
            ATerm a_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_76);
      t = k_157;
    }
  else
    {
      t = y_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_157 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_157;
    }
  return(t);
}
static ATerm k_22 (ATerm t)
{
  ATerm r_157 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_157);
  return(t);
}
static ATerm l_22 (ATerm t)
{
  ATerm b_77 = t;
  int c_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(e_77);
          }
        else
          {
            t = d_77;
            {
              ATerm f_77 = t;
              int g_77 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_157 = NULL,u_157 = NULL,v_157 = NULL,w_157 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_157 = ATgetArgument(t, 0);
                      u_157 = ATgetArgument(t, 1);
                      v_157 = ATgetArgument(t, 2);
                      w_157 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_157;
                  t = map_1_0(m_22, t);
                  LocalPopChoice(g_77);
                }
              else
                {
                  t = f_77;
                  {
                    ATerm h_77 = t;
                    int i_77 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(i_77);
                      }
                    else
                      {
                        t = h_77;
                        t = dynrule_targs_1_0(n_22, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_22 (ATerm t)
{
  ATerm d_158 = NULL;
  ATerm j_77 = t;
  int k_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_158 = ATgetArgument(t, 0);
          {
            ATerm l_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_77);
      t = d_158;
    }
  else
    {
      t = j_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_158 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_158;
    }
  return(t);
}
static ATerm n_22 (ATerm t)
{
  t = map_1_0(o_22, t);
  return(t);
}
static ATerm o_22 (ATerm t)
{
  ATerm i_158 = NULL;
  ATerm m_77 = t;
  int n_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_158 = ATgetArgument(t, 0);
          {
            ATerm o_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_77);
      t = i_158;
    }
  else
    {
      t = m_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_158 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_158;
    }
  return(t);
}
static ATerm p_22 (ATerm t)
{
  ATerm p_77 = t;
  int q_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(q_77);
    }
  else
    {
      t = p_77;
    }
  return(t);
}
static ATerm y_22 (ATerm t)
{
  ATerm s_158 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      s_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, s_158)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm e_156 = NULL,f_156 = NULL,g_156 = NULL,h_156 = NULL,q_35 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(l_21, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(m_21, t);
  {
    ATerm r_77 = t;
    int s_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_158 = NULL,o_158 = NULL,p_158 = NULL;
        n_158 = t;
        t = term_t_77;
        o_158 = t;
        t = term_u_77;
        p_158 = t;
        t = term_v_77;
        t = r_14(o_158, p_158, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = n_158;
        LocalPopChoice(s_77);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = r_77;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(p_22, t);
  h_156 = t;
  if(match_cons(t, sym_Specification_1))
    {
      f_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_156);
  e_156 = t;
  t = f_156;
  t = fetch_1_0(y_22, t);
  g_156 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, g_156);
  q_35 = t;
  t = SSLsetAnnotations(q_35, e_156);
  return(t);
}
static ATerm e_14 (ATerm m_40, ATerm n_40, ATerm t)
{
  ATerm t_158 = NULL;
  t = SSL_fputc(m_40, n_40);
  t_158 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_158);
  return(t);
}
static ATerm f_14 (ATerm q_24, ATerm r_24, ATerm t)
{
  ATerm u_158 = NULL;
  t = SSL_write_term_to_stream_text(q_24, r_24);
  u_158 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_158);
  return(t);
}
static ATerm h_14 (ATerm s_119 (ATerm), ATerm k_186, ATerm w_24, ATerm t)
{
  ATerm v_158 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, k_186, term_w_77);
  t = l_14(t);
  v_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_158, w_24);
  t = s_119(t);
  t = fclose_0_0(t);
  t = w_24;
  return(t);
}
static ATerm g_14 (ATerm m_24, ATerm n_24, ATerm t)
{
  ATerm w_158 = NULL;
  t = SSL_write_term_to_stream_baf(m_24, n_24);
  w_158 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_158);
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm d_159 = NULL,e_159 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_77 = ATgetArgument(t, 0);
      if(match_cons(x_77, sym_Stream_1))
        {
          d_159 = ATgetArgument(x_77, 0);
        }
      else
        _fail(t);
      e_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_14(d_159, e_159, t);
  return(t);
}
static ATerm a_23 (ATerm t)
{
  ATerm f_159 = NULL,g_159 = NULL,h_159 = NULL,i_159 = NULL,j_159 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_77 = ATgetArgument(t, 0);
      if(match_cons(z_77, sym_Stream_1))
        {
          i_159 = ATgetArgument(z_77, 0);
        }
      else
        _fail(t);
      j_159 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_14(i_159, j_159, t);
  f_159 = t;
  t = term_p_33;
  g_159 = t;
  t = f_159;
  if(match_cons(t, sym_Stream_1))
    {
      h_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_33, f_159);
  t = e_14(g_159, h_159, t);
  return(t);
}
ATerm output_1_0 (ATerm b_139 (ATerm), ATerm t)
{
  ATerm x_158 = NULL,y_158 = NULL;
  t = b_139(t);
  y_158 = t;
  {
    ATerm a_78 = t;
    int b_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_158 = NULL,a_159 = NULL;
        t = term_t_77;
        z_158 = t;
        t = term_c_78;
        a_159 = t;
        t = term_e_78;
        t = r_14(z_158, a_159, t);
        LocalPopChoice(b_78);
      }
    else
      {
        t = a_78;
        t = term_f_78;
      }
  }
  x_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_158, y_158);
  {
    ATerm g_78 = t;
    int h_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_159 = NULL,c_159 = NULL;
        t = term_t_77;
        b_159 = t;
        t = term_i_78;
        c_159 = t;
        t = term_j_78;
        t = r_14(b_159, c_159, t);
        t = (ATerm) ATmakeAppl(sym__2, x_158, y_158);
        LocalPopChoice(h_78);
        if(match_cons(t, sym__2))
          {
            ATerm n_78 = ATgetArgument(t, 0);
            ATerm o_78 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_14(z_22, x_158, y_158, t);
      }
    else
      {
        t = g_78;
        if(match_cons(t, sym__2))
          {
            ATerm p_78 = ATgetArgument(t, 0);
            ATerm t_78 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_14(a_23, x_158, y_158, t);
      }
  }
  return(t);
}
static ATerm x_159 (ATerm r_159, ATerm t)
{
  t = SSL_fclose(r_159);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_159 = NULL,v_159 = NULL;
  v_159 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_159 = ATgetArgument(t, 0);
      {
        ATerm u_78 = t;
        int v_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_159);
            LocalPopChoice(v_78);
          }
        else
          {
            t = u_78;
            t = x_159(v_159, t);
          }
      }
    }
  else
    {
      t = x_159(v_159, t);
    }
  return(t);
}
static ATerm i_14 (ATerm s_24, ATerm t)
{
  t = SSL_read_term_from_stream(s_24);
  return(t);
}
static ATerm j_14 (ATerm f_39, ATerm g_39, ATerm t)
{
  t = SSL_strcat(f_39, g_39);
  return(t);
}
static ATerm k_14 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm y_159 = NULL;
  t = SSL_fopen(o_40, p_40);
  y_159 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_159);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_159 = NULL;
  t = SSL_stdin_stream();
  z_159 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_159);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_160 = NULL;
  t = SSL_stdout_stream();
  a_160 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_160);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_160 = NULL;
  t = SSL_stderr_stream();
  b_160 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_160);
  return(t);
}
static ATerm i_161 (ATerm h_160, ATerm t)
{
  ATerm i_160 = NULL;
  t = SSL_explode_term(h_160);
  if(match_cons(t, sym__2))
    {
      ATerm w_78 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_78) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_78 = ATgetArgument(t, 1);
        if(((ATgetType(x_78) == AT_LIST) && !(ATisEmpty(x_78))))
          {
            i_160 = ATgetFirst((ATermList) x_78);
            {
              ATerm y_78 = (ATerm) ATgetNext((ATermList) x_78);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = i_160;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_160;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_160;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_160;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_161 (ATerm l_160, ATerm m_160, ATerm n_160, ATerm t)
{
  ATerm o_160 = NULL,p_160 = NULL,q_160 = NULL,t_160 = NULL,s_35 = NULL;
  t = SSLgetAnnotations(n_160);
  q_160 = t;
  t = l_160;
  if(match_cons(t, sym_Path_1))
    {
      t_160 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_160, m_160);
  s_35 = t;
  t = SSLsetAnnotations(s_35, q_160);
  if(match_cons(t, sym__2))
    {
      o_160 = ATgetArgument(t, 0);
      p_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_14(o_160, p_160, t);
  return(t);
}
static ATerm k_161 (ATerm v_160, ATerm w_160, ATerm x_160, ATerm t)
{
  ATerm y_160 = NULL,z_160 = NULL,a_161 = NULL,d_161 = NULL,t_35 = NULL;
  t = SSLgetAnnotations(x_160);
  a_161 = t;
  t = SSL_is_string(v_160);
  d_161 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_161, w_160);
  t_35 = t;
  t = SSLsetAnnotations(t_35, a_161);
  if(match_cons(t, sym__2))
    {
      y_160 = ATgetArgument(t, 0);
      z_160 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_14(y_160, z_160, t);
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm f_161 = NULL,g_161 = NULL,h_161 = NULL;
  f_161 = t;
  if(match_cons(t, sym__2))
    {
      g_161 = ATgetArgument(t, 0);
      h_161 = ATgetArgument(t, 1);
      {
        ATerm z_78 = t;
        int a_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_161(f_161, t);
            LocalPopChoice(a_79);
          }
        else
          {
            t = z_78;
            {
              ATerm b_79 = t;
              int c_79 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_161(g_161, h_161, f_161, t);
                  LocalPopChoice(c_79);
                }
              else
                {
                  t = b_79;
                  t = k_161(g_161, h_161, f_161, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_161(f_161, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_161 = NULL,n_161 = NULL,o_161 = NULL,t_161 = NULL;
  t_161 = t;
  {
    ATerm d_79 = t;
    int e_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_161, term_f_79);
        t = l_14(t);
        LocalPopChoice(e_79);
      }
    else
      {
        t = d_79;
        {
          ATerm u_73 = NULL,v_73 = NULL;
          t = term_g_79;
          v_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_g_79, t_161);
          t = j_14(v_73, t_161, t);
          u_73 = t;
          t = SSL_perror(u_73);
          _fail(t);
        }
      }
  }
  n_161 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_161 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_14(o_161, t);
  m_161 = t;
  t = n_161;
  t = fclose_0_0(t);
  t = m_161;
  return(t);
}
ATerm input_1_0 (ATerm c_139 (ATerm), ATerm t)
{
  ATerm h_79 = t;
  int i_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_161 = NULL,x_161 = NULL;
      t = term_t_77;
      w_161 = t;
      t = term_j_79;
      x_161 = t;
      t = term_k_79;
      t = r_14(w_161, x_161, t);
      LocalPopChoice(i_79);
    }
  else
    {
      t = h_79;
      t = term_l_79;
    }
  t = ReadFromFile_0_0(t);
  t = c_139(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm y_161 = NULL,z_161 = NULL,a_162 = NULL,b_162 = NULL,c_162 = NULL;
  y_161 = t;
  t = term_m_79;
  t = whoami_0_0(t);
  z_161 = t;
  t = term_v_43;
  b_162 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_79), z_161), term_n_79);
  c_162 = t;
  t = SSL_printnl(b_162, c_162);
  t = term_x_43;
  a_162 = t;
  t = SSL_exit(a_162);
  t = y_161;
  return(t);
}
static ATerm d_23 (ATerm t)
{
  ATerm e_162 = NULL;
  e_162 = t;
  if(match_string(t, "-k"))
    {
      t = e_162;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_162;
    }
  return(t);
}
static ATerm e_23 (ATerm t)
{
  ATerm f_162 = NULL,g_162 = NULL,h_162 = NULL;
  f_162 = t;
  t = SSL_string_to_int(f_162);
  g_162 = t;
  t = term_p_79;
  h_162 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_79, g_162);
  t = u_14(h_162, g_162, t);
  t = f_162;
  return(t);
}
static ATerm f_23 (ATerm t)
{
  t = term_q_79;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_23, e_23, f_23, t);
  return(t);
}
static ATerm g_23 (ATerm t)
{
  ATerm j_162 = NULL;
  j_162 = t;
  if(match_string(t, "-S"))
    {
      t = j_162;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_162;
    }
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm k_162 = NULL,l_162 = NULL;
  t = term_r_79;
  k_162 = t;
  t = term_b_46;
  l_162 = t;
  t = term_s_79;
  t = u_14(k_162, l_162, t);
  t = term_t_79;
  return(t);
}
static ATerm l_23 (ATerm t)
{
  t = term_u_79;
  return(t);
}
static ATerm m_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_23 (ATerm t)
{
  ATerm m_162 = NULL,n_162 = NULL,o_162 = NULL;
  m_162 = t;
  t = SSL_string_to_int(m_162);
  n_162 = t;
  t = term_r_79;
  o_162 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_79, n_162);
  t = u_14(o_162, n_162, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_162);
  return(t);
}
static ATerm p_23 (ATerm t)
{
  t = term_v_79;
  return(t);
}
static ATerm q_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_24 (ATerm t)
{
  ATerm p_162 = NULL,q_162 = NULL;
  t = term_w_79;
  p_162 = t;
  t = term_m_79;
  q_162 = t;
  t = term_x_79;
  t = u_14(p_162, q_162, t);
  t = term_y_79;
  return(t);
}
static ATerm i_24 (ATerm t)
{
  t = term_z_79;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_80 = t;
  int b_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_23, k_23, l_23, t);
      LocalPopChoice(b_80);
    }
  else
    {
      t = a_80;
      {
        ATerm c_80 = t;
        int d_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_23, o_23, p_23, t);
            LocalPopChoice(d_80);
          }
        else
          {
            t = c_80;
            t = Option_3_0(q_23, h_24, i_24, t);
          }
      }
    }
  return(t);
}
static ATerm u_14 (ATerm k_56, ATerm l_56, ATerm t)
{
  ATerm r_162 = NULL,s_162 = NULL;
  t = term_t_77;
  r_162 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_t_77, k_56, l_56);
  t = lookup_table_0_1(r_162, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_14(k_56, l_56, s_162, t);
  t = (ATerm) ATmakeAppl(sym__3, term_t_77, k_56, l_56);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm w_162 = NULL,x_162 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_162 = NULL,z_162 = NULL,a_163 = NULL;
      t = term_m_79;
      t = j_0(t);
      y_162 = t;
      t = term_e_80;
      z_162 = t;
      t = term_f_80;
      a_163 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_80, term_f_80, y_162);
      t = s_14(z_162, a_163, y_162, t);
      _fail(t);
    }
  else
    {
      ATerm d_163 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_162 = ATgetFirst((ATermList) t);
          x_162 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_162;
      t = d_0(t);
      t = term_m_79;
      t = g_0(t);
      d_163 = t;
      t = (ATerm) ATinsert(CheckATermList(x_162), d_163);
    }
  return(t);
}
static ATerm j_24 (ATerm t)
{
  ATerm f_163 = NULL;
  f_163 = t;
  if(match_string(t, "-o"))
    {
      t = f_163;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_163;
    }
  return(t);
}
static ATerm o_24 (ATerm t)
{
  ATerm g_163 = NULL,h_163 = NULL;
  g_163 = t;
  t = term_c_78;
  h_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_78, g_163);
  t = u_14(h_163, g_163, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_163);
  return(t);
}
static ATerm p_24 (ATerm t)
{
  t = term_g_80;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_24, o_24, p_24, t);
  return(t);
}
static ATerm u_24 (ATerm t)
{
  ATerm j_163 = NULL;
  j_163 = t;
  if(match_string(t, "-i"))
    {
      t = j_163;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_163;
    }
  return(t);
}
static ATerm i_25 (ATerm t)
{
  ATerm k_163 = NULL,l_163 = NULL;
  k_163 = t;
  t = term_j_79;
  l_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_79, k_163);
  t = u_14(l_163, k_163, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_163);
  return(t);
}
static ATerm j_25 (ATerm t)
{
  t = term_h_80;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_24, i_25, j_25, t);
  return(t);
}
static ATerm s_14 (ATerm f_61, ATerm g_61, ATerm e_61, ATerm t)
{
  ATerm n_163 = NULL,o_163 = NULL,p_163 = NULL,q_163 = NULL,r_163 = NULL;
  n_163 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_61, g_61);
  {
    ATerm i_80 = t;
    int j_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_80 = ATgetArgument(t, 0);
            ATerm l_80 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_61, g_61);
        t = r_14(f_61, g_61, t);
        LocalPopChoice(j_80);
      }
    else
      {
        t = i_80;
        t = (ATerm) ATempty;
      }
  }
  o_163 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_61, g_61, (ATerm) ATinsert(CheckATermList(o_163), e_61));
  t = lookup_table_0_1(f_61, t);
  r_163 = t;
  t = (ATerm) ATinsert(CheckATermList(o_163), e_61);
  p_163 = t;
  t = r_163;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_14(g_61, p_163, q_163, t);
  t = n_163;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm y_163 = NULL,z_163 = NULL,a_164 = NULL,b_164 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_164 = NULL,d_164 = NULL,e_164 = NULL;
      t = term_m_79;
      t = v_0(t);
      c_164 = t;
      t = term_e_80;
      d_164 = t;
      t = term_f_80;
      e_164 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_80, term_f_80, c_164);
      t = s_14(d_164, e_164, c_164, t);
      _fail(t);
    }
  else
    {
      ATerm i_164 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_163 = ATgetFirst((ATermList) t);
          z_163 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_163;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_164 = ATgetFirst((ATermList) t);
          b_164 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_163;
      t = p_0(t);
      t = a_164;
      t = r_0(t);
      i_164 = t;
      t = (ATerm) ATinsert(CheckATermList(b_164), i_164);
    }
  return(t);
}
static ATerm k_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_25 (ATerm t)
{
  ATerm k_164 = NULL,l_164 = NULL;
  k_164 = t;
  if(match_string(t, "old"))
    {
      t = k_164;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = k_164;
    }
  t = term_u_77;
  l_164 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_77, k_164);
  t = u_14(l_164, k_164, t);
  t = term_m_79;
  return(t);
}
static ATerm n_25 (ATerm t)
{
  t = term_m_80;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(k_25, m_25, n_25, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_164 = NULL,o_164 = NULL,p_164 = NULL,q_164 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_79;
  t = whoami_0_0(t);
  n_164 = t;
  t = term_v_43;
  p_164 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_n_80), n_164);
  q_164 = t;
  t = SSL_printnl(p_164, q_164);
  t = term_x_43;
  o_164 = t;
  t = SSL_exit(o_164);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm r_164 = NULL,s_164 = NULL;
  t = term_t_77;
  r_164 = t;
  t = term_o_80;
  s_164 = t;
  t = term_p_80;
  t = r_14(r_164, s_164, t);
  return(t);
}
static ATerm m_14 (ATerm i_43, ATerm j_43, ATerm t)
{
  ATerm q_80 = t;
  int r_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_43, j_43);
      LocalPopChoice(r_80);
    }
  else
    {
      t = q_80;
      t = SSL_addr(i_43, j_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_127 (ATerm), ATerm b_127 (ATerm), ATerm t)
{
  ATerm u_164 = NULL,v_164 = NULL,w_164 = NULL;
  u_164 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_164;
      t = a_127(t);
    }
  else
    {
      ATerm z_164 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_164 = ATgetFirst((ATermList) t);
          w_164 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_164;
      t = foldr_2_0(a_127, b_127, t);
      z_164 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_164, z_164);
      t = b_127(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm o_25 (ATerm t)
{
  t = term_b_46;
  return(t);
}
static ATerm p_25 (ATerm t)
{
  ATerm e_74 = NULL,f_74 = NULL;
  if(match_cons(t, sym__2))
    {
      e_74 = ATgetArgument(t, 0);
      f_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_14(e_74, f_74, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm c_165 = NULL,a_74 = NULL,b_74 = NULL;
  t = times_0_0(t);
  b_74 = t;
  t = SSL_explode_term(b_74);
  if(match_cons(t, sym__2))
    {
      ATerm s_80 = ATgetArgument(t, 0);
      a_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_74;
  t = foldr_2_0(o_25, p_25, t);
  c_165 = t;
  t = SSL_TicksToSeconds(c_165);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm n_165 = NULL,o_165 = NULL,p_165 = NULL;
  n_165 = t;
  if(match_cons(t, sym__2))
    {
      o_165 = ATgetArgument(t, 0);
      p_165 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_80 = t;
    int u_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_165;
        if((o_165 != t))
          {
            _fail(t);
          }
        t = n_165;
        LocalPopChoice(u_80);
      }
    else
      {
        t = t_80;
        t = (ATerm) ATmakeAppl(sym__2, o_165, p_165);
        {
          ATerm v_80 = t;
          int w_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(o_165, p_165);
              LocalPopChoice(w_80);
            }
          else
            {
              t = v_80;
              t = SSL_gtr(o_165, p_165);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, o_165, p_165);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_136 (ATerm), ATerm t)
{
  ATerm t_165 = NULL;
  t_165 = t;
  {
    ATerm x_80 = t;
    int y_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_165 = NULL,w_165 = NULL,x_165 = NULL;
        t = term_t_77;
        w_165 = t;
        t = term_r_79;
        x_165 = t;
        t = term_z_80;
        t = r_14(w_165, x_165, t);
        v_165 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_165, term_x_43);
        t = geq_0_0(t);
        t = t_165;
        t = c_136(t);
        LocalPopChoice(y_80);
      }
    else
      {
        t = x_80;
        t = t_165;
      }
  }
  return(t);
}
static ATerm q_25 (ATerm t)
{
  ATerm z_165 = NULL,a_166 = NULL,c_166 = NULL,d_166 = NULL;
  t = run_time_0_0(t);
  z_165 = t;
  t = term_m_79;
  t = whoami_0_0(t);
  a_166 = t;
  t = term_v_43;
  c_166 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_81), z_165), term_a_81), a_166);
  d_166 = t;
  t = SSL_printnl(c_166, d_166);
  t = (ATerm) ATmakeAppl(sym__2, term_v_43, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_81), z_165), term_a_81), a_166));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_25, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_166 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_46;
  e_166 = t;
  t = SSL_exit(e_166);
  return(t);
}
static ATerm r_25 (ATerm t)
{
  ATerm o_166 = NULL,p_166 = NULL;
  p_166 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = p_166;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          o_166 = ATgetArgument(t, 0);
          {
            ATerm r_74 = NULL,w_35 = NULL;
            t = SSLgetAnnotations(p_166);
            r_74 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, o_166);
            w_35 = t;
            t = SSLsetAnnotations(w_35, r_74);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = p_166;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_138 (ATerm), ATerm t)
{
  ATerm c_81 = t;
  int d_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_166 = NULL,i_166 = NULL;
      t = term_t_77;
      h_166 = t;
      t = term_e_81;
      i_166 = t;
      t = term_f_81;
      t = r_14(h_166, i_166, t);
      LocalPopChoice(d_81);
    }
  else
    {
      t = c_81;
      t = fetch_1_0(r_25, t);
    }
  t = s_138(t);
  return(t);
}
static ATerm v_14 (ATerm k_65, ATerm l_65, ATerm m_65, ATerm t)
{
  ATerm r_166 = NULL;
  t = SSL_hashtable_put(m_65, k_65, l_65);
  r_166 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_166);
  return(t);
}
ATerm lookup_table_0_1 (ATerm r_62, ATerm t)
{
  ATerm a_167 = NULL;
  t = table_hashtable_0_0(t);
  a_167 = t;
  {
    ATerm g_81 = t;
    int h_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_75 = NULL;
        t = a_167;
        if(match_cons(t, sym_Hashtable_1))
          {
            g_75 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_14(r_62, g_75, t);
        LocalPopChoice(h_81);
      }
    else
      {
        t = g_81;
        {
          ATerm l_75 = NULL;
          t = r_62;
          t = table_create_0_0(t);
          t = a_167;
          if(match_cons(t, sym_Hashtable_1))
            {
              l_75 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_14(r_62, l_75, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_65, ATerm t_65, ATerm t)
{
  ATerm d_167 = NULL;
  t = SSL_hashtable_create(s_65, t_65);
  d_167 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_167);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm e_167 = NULL,f_167 = NULL,g_167 = NULL,i_167 = NULL,j_167 = NULL;
  e_167 = t;
  t = term_i_81;
  i_167 = t;
  t = term_j_81;
  j_167 = t;
  t = e_167;
  t = new_hashtable_0_2(i_167, j_167, t);
  f_167 = t;
  t = e_167;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_14(e_167, f_167, g_167, t);
  t = e_167;
  return(t);
}
static ATerm o_14 (ATerm p_65, ATerm q_65, ATerm t)
{
  ATerm k_167 = NULL;
  t = SSL_hashtable_remove(q_65, p_65);
  k_167 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_167);
  return(t);
}
static ATerm p_14 (ATerm u_65, ATerm t)
{
  ATerm l_167 = NULL;
  t = SSL_hashtable_destroy(u_65);
  l_167 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_167);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm m_167 = NULL;
  t = SSL_table_hashtable();
  m_167 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_167);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm n_167 = NULL,o_167 = NULL,p_167 = NULL,q_167 = NULL;
  n_167 = t;
  t = table_hashtable_0_0(t);
  o_167 = t;
  t = lookup_table_0_1(n_167, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_14(q_167, t);
  t = o_167;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_14(n_167, p_167, t);
  t = n_167;
  return(t);
}
ATerm map_1_0 (ATerm b_120 (ATerm), ATerm t)
{
  static ATerm f_168 (ATerm t)
  {
    ATerm c_168 = NULL,d_168 = NULL,e_168 = NULL;
    c_168 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_168;
      }
    else
      {
        ATerm s_75 = NULL,b_76 = NULL,c_76 = NULL,a_36 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_168 = ATgetFirst((ATermList) t);
            e_168 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_168);
        s_75 = t;
        t = d_168;
        t = b_120(t);
        b_76 = t;
        t = e_168;
        t = f_168(t);
        c_76 = t;
        t = (ATerm) ATinsert(CheckATermList(c_76), b_76);
        a_36 = t;
        t = SSLsetAnnotations(a_36, s_75);
      }
    return(t);
  }
  t = f_168(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm i_168 = NULL,j_168 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_168 = ATgetFirst((ATermList) t);
      j_168 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_168 = NULL,o_168 = NULL;
        static ATerm s_25 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_168)), not_null(o_168));
          return(t);
        }
        t = j_168;
        t = o_0(t);
        if(((n_168 != NULL) && (n_168 != t)))
          _fail(t);
        else
          n_168 = t;
        t = i_168;
        t = l_0(t);
        if(((o_168 != NULL) && (o_168 != t)))
          _fail(t);
        else
          o_168 = t;
        t = j_168;
        t = reverse_acc_2_0(l_0, s_25, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_m_79;
      t = o_0(t);
    }
  return(t);
}
static ATerm t_25 (ATerm t)
{
  ATerm u_168 = NULL,v_168 = NULL,w_168 = NULL,j_36 = NULL;
  w_168 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_168 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_168);
  u_168 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_168);
  j_36 = t;
  t = SSLsetAnnotations(j_36, u_168);
  return(t);
}
static ATerm u_25 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_25 (ATerm t)
{
  ATerm y_168 = NULL;
  y_168 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_168), term_k_81);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_168 = NULL,r_168 = NULL;
  ATerm l_81 = t;
  int m_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_168 = NULL,t_168 = NULL;
      t = term_t_77;
      s_168 = t;
      t = term_o_80;
      t_168 = t;
      t = term_p_80;
      t = r_14(s_168, t_168, t);
      LocalPopChoice(m_81);
    }
  else
    {
      t = l_81;
      t = fetch_1_0(t_25, t);
    }
  t = term_n_81;
  t = echo_0_0(t);
  t = term_e_80;
  q_168 = t;
  t = term_f_80;
  r_168 = t;
  t = term_o_81;
  t = r_14(q_168, r_168, t);
  t = reverse_acc_2_0(_id, u_25, t);
  t = map_1_0(v_25, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_120 (ATerm), ATerm t)
{
  static ATerm v_169 (ATerm t)
  {
    ATerm s_169 = NULL,t_169 = NULL,u_169 = NULL;
    s_169 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_169 = ATgetFirst((ATermList) t);
        u_169 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_81 = t;
      int q_81 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_76 = NULL,w_76 = NULL,m_36 = NULL;
          t = SSLgetAnnotations(s_169);
          s_76 = t;
          t = t_169;
          t = l_120(t);
          w_76 = t;
          t = (ATerm) ATinsert(CheckATermList(u_169), w_76);
          m_36 = t;
          t = SSLsetAnnotations(m_36, s_76);
          LocalPopChoice(q_81);
        }
      else
        {
          t = p_81;
          {
            ATerm y_77 = NULL,d_78 = NULL,n_36 = NULL;
            t = SSLgetAnnotations(s_169);
            y_77 = t;
            t = u_169;
            t = v_169(t);
            d_78 = t;
            t = (ATerm) ATinsert(CheckATermList(d_78), t_169);
            n_36 = t;
            t = SSLsetAnnotations(n_36, y_77);
          }
        }
    }
    return(t);
  }
  t = v_169(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_169 = NULL,a_170 = NULL,b_170 = NULL;
  z_169 = t;
  {
    ATerm r_81 = t;
    int s_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_169;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_81 = ATgetFirst((ATermList) t);
                ATerm u_81 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_169;
          }
        LocalPopChoice(s_81);
      }
    else
      {
        t = r_81;
        t = (ATerm) ATinsert(ATempty, z_169);
      }
  }
  a_170 = t;
  t = term_f_78;
  b_170 = t;
  t = SSL_printnl(b_170, a_170);
  t = z_169;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_170 = NULL,g_170 = NULL;
  t = term_t_77;
  f_170 = t;
  t = term_o_80;
  g_170 = t;
  t = term_p_80;
  t = r_14(f_170, g_170, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_14 (ATerm n_65, ATerm o_65, ATerm t)
{
  t = SSL_hashtable_get(o_65, n_65);
  return(t);
}
static ATerm r_14 (ATerm y_62, ATerm z_62, ATerm t)
{
  ATerm h_170 = NULL;
  t = lookup_table_0_1(y_62, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_14(z_62, h_170, t);
  return(t);
}
static ATerm x_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  ATerm j_170 = NULL,k_170 = NULL;
  t = term_v_81;
  j_170 = t;
  t = term_m_79;
  k_170 = t;
  t = term_w_81;
  t = u_14(j_170, k_170, t);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = term_x_81;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_26 (ATerm t)
{
  ATerm l_170 = NULL,m_170 = NULL,n_170 = NULL,o_170 = NULL;
  t = term_v_81;
  n_170 = t;
  t = term_m_79;
  o_170 = t;
  t = term_w_81;
  t = u_14(n_170, o_170, t);
  t = term_y_81;
  l_170 = t;
  t = term_m_79;
  m_170 = t;
  t = term_z_81;
  t = u_14(l_170, m_170, t);
  t = term_a_82;
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = term_b_82;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm c_82 = t;
  int d_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_25, y_25, z_25, t);
      LocalPopChoice(d_82);
    }
  else
    {
      t = c_82;
      t = Option_3_0(a_26, d_26, e_26, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_98 (ATerm), ATerm s_98 (ATerm), ATerm t)
{
  ATerm p_170 = NULL,q_170 = NULL,r_170 = NULL,s_170 = NULL,t_170 = NULL,u_170 = NULL,u_36 = NULL;
  u_170 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_170 = ATgetFirst((ATermList) t);
      r_170 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_170);
  p_170 = t;
  t = q_170;
  t = r_98(t);
  s_170 = t;
  t = r_170;
  t = s_98(t);
  t_170 = t;
  t = (ATerm) ATinsert(CheckATermList(t_170), s_170);
  u_36 = t;
  t = SSLsetAnnotations(u_36, p_170);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_140 (ATerm), ATerm t)
{
  ATerm z_170 = NULL,a_171 = NULL,b_171 = NULL,c_171 = NULL,e_171 = NULL,f_171 = NULL,w_36 = NULL;
  z_170 = t;
  {
    ATerm e_82 = t;
    int f_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_82;
        t = v_140(t);
        LocalPopChoice(f_82);
      }
    else
      {
        t = e_82;
      }
  }
  t = z_170;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_171 = ATgetFirst((ATermList) t);
      c_171 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_170);
  a_171 = t;
  t = term_o_80;
  f_171 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_80, b_171);
  t = u_14(f_171, b_171, t);
  t = c_171;
  {
    static ATerm p_171 (ATerm t)
    {
      ATerm h_82 = t;
      int i_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_82 = t;
          int n_82 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_171 = NULL;
              i_171 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_171;
              LocalPopChoice(n_82);
            }
          else
            {
              t = l_82;
              t = v_140(t);
              t = Cons_2_0(_id, p_171, t);
            }
          LocalPopChoice(i_82);
        }
      else
        {
          t = h_82;
          {
            ATerm l_171 = NULL,m_171 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_171 = ATgetFirst((ATermList) t);
                m_171 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_171), (ATerm) ATmakeAppl(sym_Undefined_1, l_171));
          }
        }
      return(t);
    }
    t = p_171(t);
  }
  e_171 = t;
  t = (ATerm) ATinsert(CheckATermList(e_171), (ATerm) ATmakeAppl(sym_Program_1, b_171));
  w_36 = t;
  t = SSLsetAnnotations(w_36, a_171);
  return(t);
}
static ATerm h_26 (ATerm t)
{
  ATerm c_172 = NULL;
  c_172 = t;
  if(match_string(t, "--help"))
    {
      t = c_172;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_172;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_172;
        }
    }
  return(t);
}
static ATerm k_26 (ATerm t)
{
  ATerm d_172 = NULL,e_172 = NULL;
  t = term_e_81;
  d_172 = t;
  t = term_m_79;
  e_172 = t;
  t = term_o_82;
  t = u_14(d_172, e_172, t);
  t = term_p_82;
  return(t);
}
static ATerm l_26 (ATerm t)
{
  t = term_q_82;
  return(t);
}
static ATerm n_26 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_140 (ATerm), ATerm t)
{
  ATerm u_171 = NULL,v_171 = NULL,w_171 = NULL,x_171 = NULL,y_171 = NULL,z_171 = NULL,a_172 = NULL,b_172 = NULL;
  w_171 = t;
  t = term_e_80;
  x_171 = t;
  t = term_r_82;
  t = lookup_table_0_1(x_171, t);
  b_172 = t;
  t = term_f_80;
  y_171 = t;
  t = (ATerm) ATempty;
  z_171 = t;
  t = b_172;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_172 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_14(y_171, z_171, a_172, t);
  t = w_171;
  {
    static ATerm g_26 (ATerm t)
    {
      ATerm s_82 = t;
      int u_82 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_140(t);
          LocalPopChoice(u_82);
        }
      else
        {
          t = s_82;
          {
            ATerm v_82 = t;
            int w_82 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(h_26, k_26, l_26, t);
                LocalPopChoice(w_82);
              }
            else
              {
                t = v_82;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_26, t);
  }
  {
    ATerm z_82 = t;
    int a_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_172 = NULL;
        p_172 = t;
        {
          ATerm b_83 = t;
          int c_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_78 = NULL;
              t = p_172;
              {
                ATerm h_83 = t;
                int j_83 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm l_78 = NULL,m_78 = NULL;
                    t = term_t_77;
                    l_78 = t;
                    t = term_e_81;
                    m_78 = t;
                    t = term_f_81;
                    t = r_14(l_78, m_78, t);
                    LocalPopChoice(j_83);
                  }
                else
                  {
                    t = h_83;
                    t = fetch_1_0(n_26, t);
                  }
              }
              t = p_172;
              t = default_system_usage_0_0(t);
              t = term_b_46;
              k_78 = t;
              t = SSL_exit(k_78);
              LocalPopChoice(c_83);
            }
          else
            {
              t = b_83;
              {
                ATerm q_78 = NULL,r_78 = NULL,s_78 = NULL;
                t = term_t_77;
                r_78 = t;
                t = term_v_81;
                s_78 = t;
                t = term_k_83;
                t = r_14(r_78, s_78, t);
                t = p_172;
                t = default_system_about_0_0(t);
                t = term_b_46;
                q_78 = t;
                t = SSL_exit(q_78);
              }
            }
        }
        LocalPopChoice(a_83);
      }
    else
      {
        t = z_82;
        {
          ATerm n_83 = t;
          int o_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_172 = NULL,r_172 = NULL,s_172 = NULL;
              static ATerm u_26 (ATerm t)
              {
                ATerm t_172 = NULL,u_172 = NULL,v_172 = NULL,y_36 = NULL;
                v_172 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_172 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(v_172);
                t_172 = t;
                t = u_172;
                if(((u_171 != NULL) && (u_171 != t)))
                  _fail(t);
                else
                  u_171 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_172);
                y_36 = t;
                t = SSLsetAnnotations(y_36, t_172);
                return(t);
              }
              t = fetch_1_0(u_26, t);
              t = term_v_43;
              r_172 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_171)), term_p_83);
              s_172 = t;
              t = SSL_printnl(r_172, s_172);
              t = (ATerm) ATmakeAppl(sym__2, term_v_43, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_171)), term_p_83));
              t = default_system_usage_0_0(t);
              t = term_x_43;
              q_172 = t;
              t = SSL_exit(q_172);
              LocalPopChoice(o_83);
            }
          else
            {
              t = n_83;
            }
        }
      }
  }
  v_171 = t;
  t = term_e_80;
  t = table_destroy_0_0(t);
  t = v_171;
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_138 (ATerm), ATerm v_138 (ATerm), ATerm w_138 (ATerm), ATerm x_138 (ATerm), ATerm t)
{
  ATerm a_173 = NULL,b_173 = NULL,c_173 = NULL,d_173 = NULL,e_173 = NULL;
  t = parse_options_1_0(u_138, t);
  a_173 = t;
  t = term_q_83;
  t = table_create_0_0(t);
  t = term_q_83;
  b_173 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_q_83, term_r_83, a_173);
  t = lookup_table_0_1(b_173, t);
  e_173 = t;
  t = term_r_83;
  c_173 = t;
  t = e_173;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_173 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_14(c_173, a_173, d_173, t);
  t = a_173;
  t = w_138(t);
  {
    ATerm s_83 = t;
    int t_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_138, t);
        LocalPopChoice(t_83);
      }
    else
      {
        t = s_83;
        {
          ATerm u_83 = t;
          int v_83 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_138(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_83);
            }
          else
            {
              t = u_83;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_26 (ATerm t)
{
  ATerm w_83 = t;
  int x_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(x_83);
    }
  else
    {
      t = w_83;
      {
        ATerm y_83 = t;
        int z_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(z_83);
          }
        else
          {
            t = y_83;
            {
              ATerm a_84 = t;
              int b_84 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(b_84);
                }
              else
                {
                  t = a_84;
                  {
                    ATerm c_84 = t;
                    int d_84 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(y_26, g_27, j_27, t);
                        LocalPopChoice(d_84);
                      }
                    else
                      {
                        t = c_84;
                        {
                          ATerm e_84 = t;
                          int f_84 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(f_84);
                            }
                          else
                            {
                              t = e_84;
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
static ATerm w_26 (ATerm t)
{
  t = input_1_0(k_27, t);
  return(t);
}
static ATerm y_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_27 (ATerm t)
{
  ATerm g_173 = NULL,h_173 = NULL;
  t = term_i_78;
  g_173 = t;
  t = term_m_79;
  h_173 = t;
  t = term_g_84;
  t = u_14(g_173, h_173, t);
  t = term_h_84;
  return(t);
}
static ATerm j_27 (ATerm t)
{
  t = term_i_84;
  return(t);
}
static ATerm k_27 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_26, default_usage_0_0, _id, w_26, t);
  return(t);
}

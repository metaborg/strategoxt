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
ATerm term_n_88;
ATerm term_m_88;
ATerm term_l_88;
ATerm term_w_87;
ATerm term_v_87;
ATerm term_u_87;
ATerm term_r_87;
ATerm term_e_87;
ATerm term_d_87;
ATerm term_c_87;
ATerm term_b_87;
ATerm term_w_86;
ATerm term_r_86;
ATerm term_q_86;
ATerm term_p_86;
ATerm term_o_86;
ATerm term_n_86;
ATerm term_m_86;
ATerm term_l_86;
ATerm term_e_86;
ATerm term_d_86;
ATerm term_a_86;
ATerm term_z_85;
ATerm term_y_85;
ATerm term_v_85;
ATerm term_u_85;
ATerm term_r_85;
ATerm term_q_85;
ATerm term_p_85;
ATerm term_f_85;
ATerm term_e_85;
ATerm term_d_85;
ATerm term_c_85;
ATerm term_x_84;
ATerm term_w_84;
ATerm term_v_84;
ATerm term_u_84;
ATerm term_p_84;
ATerm term_o_84;
ATerm term_n_84;
ATerm term_m_84;
ATerm term_l_84;
ATerm term_k_84;
ATerm term_j_84;
ATerm term_i_84;
ATerm term_h_84;
ATerm term_g_84;
ATerm term_f_84;
ATerm term_e_84;
ATerm term_d_84;
ATerm term_c_84;
ATerm term_b_84;
ATerm term_a_84;
ATerm term_z_83;
ATerm term_w_83;
ATerm term_v_83;
ATerm term_w_82;
ATerm term_u_82;
ATerm term_r_82;
ATerm term_q_82;
ATerm term_p_82;
ATerm term_h_82;
ATerm term_g_82;
ATerm term_f_82;
ATerm term_e_82;
ATerm term_p_80;
ATerm term_o_80;
ATerm term_n_80;
ATerm term_d_79;
ATerm term_b_79;
ATerm term_a_79;
ATerm term_z_78;
ATerm term_y_78;
ATerm term_q_78;
ATerm term_c_72;
ATerm term_b_72;
ATerm term_a_72;
ATerm term_c_71;
ATerm term_a_70;
ATerm term_g_69;
ATerm term_x_68;
ATerm term_q_62;
ATerm term_l_62;
ATerm term_w_60;
ATerm term_v_60;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_z_54;
ATerm term_y_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_a_53;
ATerm term_z_52;
ATerm term_y_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_e_52;
ATerm term_x_51;
ATerm term_w_51;
ATerm term_t_51;
ATerm term_s_51;
ATerm term_q_50;
ATerm term_s_48;
ATerm term_g_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_w_47;
ATerm term_s_47;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_e_45;
ATerm term_v_44;
ATerm term_u_44;
ATerm term_q_44;
ATerm term_p_44;
ATerm term_k_44;
ATerm term_j_44;
ATerm term_f_44;
ATerm term_e_44;
ATerm term_y_43;
ATerm term_w_43;
ATerm term_v_43;
ATerm term_u_43;
ATerm term_q_43;
ATerm term_p_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_b_38;
ATerm term_s_37;
ATerm term_y_36;
ATerm term_s_36;
ATerm term_q_36;
ATerm term_o_36;
ATerm term_m_36;
ATerm term_g_36;
ATerm term_z_35;
ATerm term_y_35;
ATerm term_u_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_c_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_o_34;
ATerm term_m_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_w_33;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_l_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_v_32;
ATerm term_f_32;
ATerm term_e_32;
ATerm term_q_29;
ATerm term_n_29;
ATerm term_m_29;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_32));
  term_e_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_Op_2, term_e_32, (ATerm) ATempty);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_33);
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_33);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_29);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(sym_Op_2, term_v_33, (ATerm) ATempty);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_34);
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_33);
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(sym_Call_2, term_m_34, (ATerm) ATempty);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_u_35));
  term_u_35 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_35);
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(sym_Call_2, term_y_35, (ATerm) ATempty);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_Call_2, term_u_33, (ATerm) ATempty);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_43);
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym_RootApp_1, term_n_29);
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_43);
  ATprotect(&(term_q_43));
  term_q_43 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_p_43);
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_v_43));
  term_v_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_43);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_43);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_44);
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_k_44));
  term_k_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_44);
  ATprotect(&(term_p_44));
  term_p_44 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_q_44));
  term_q_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_44);
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_44);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_45);
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Counter", 0, ATtrue));
  ATprotect(&(term_w_47));
  term_w_47 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(sym_Defined_2, term_w_47, term_x_47);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("DRRenameVar", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("DRVarNumber", 0, ATtrue));
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(sym__2, term_a_48, term_y_47);
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-Rule already generated: ", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("DRAuxRuleGenerated", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(ATmakeSymbol("callers already generated: ", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("DRCallersGenerated", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("freshly generating the DR callers: ", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_52);
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(sym_Var_1, term_o_52);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_52);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym_Build_1, term_n_33);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_52);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule", 0, ATtrue));
  ATprotect(&(term_z_52));
  term_z_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATempty);
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_53);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_54);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-label-scope", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_54);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_55);
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_55);
  ATprotect(&(term_v_60));
  term_v_60 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scope", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_60);
  ATprotect(&(term_l_62));
  term_l_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_q_62));
  term_q_62 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_x_68));
  term_x_68 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] Your condition has been removed from the original dynamic rule: ", 0, ATtrue));
  ATprotect(&(term_g_69));
  term_g_69 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] rule undefining doesn't allow a condition strategy anymore", 0, ATtrue));
  ATprotect(&(term_a_70));
  term_a_70 = (ATerm) ATmakeAppl(ATmakeSymbol("DROverrideLabelsNeeded", 0, ATtrue));
  ATprotect(&(term_c_71));
  term_c_71 = (ATerm) ATmakeAppl(sym__2, term_a_70, (ATerm) ATempty);
  ATprotect(&(term_a_72));
  term_a_72 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_b_72));
  term_b_72 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_72);
  ATprotect(&(term_c_72));
  term_c_72 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, term_b_72);
  ATprotect(&(term_q_78));
  term_q_78 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_78);
  ATprotect(&(term_b_79));
  term_b_79 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_d_79));
  term_d_79 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_79);
  ATprotect(&(term_n_80));
  term_n_80 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_o_80));
  term_o_80 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_p_80));
  term_p_80 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_e_82));
  term_e_82 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_82));
  term_f_82 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_g_82));
  term_g_82 = (ATerm) ATmakeAppl(sym__2, term_e_82, term_f_82);
  ATprotect(&(term_h_82));
  term_h_82 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_82));
  term_p_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_82));
  term_q_82 = (ATerm) ATmakeAppl(sym__2, term_e_82, term_p_82);
  ATprotect(&(term_r_82));
  term_r_82 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_82));
  term_u_82 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_82));
  term_w_82 = (ATerm) ATmakeAppl(sym__2, term_e_82, term_u_82);
  ATprotect(&(term_v_83));
  term_v_83 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_w_83));
  term_w_83 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_z_83));
  term_z_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_84));
  term_a_84 = (ATerm) ATmakeAppl(sym__2, term_e_82, term_z_83);
  ATprotect(&(term_b_84));
  term_b_84 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_c_84));
  term_c_84 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_84));
  term_d_84 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_84));
  term_e_84 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_84));
  term_f_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeAppl(sym__2, term_h_84, term_x_47);
  ATprotect(&(term_j_84));
  term_j_84 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_47);
  ATprotect(&(term_k_84));
  term_k_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_84));
  term_l_84 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_84));
  term_m_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_84));
  term_n_84 = (ATerm) ATmakeAppl(sym__2, term_m_84, term_c_84);
  ATprotect(&(term_o_84));
  term_o_84 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_84));
  term_p_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_84));
  term_u_84 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_84));
  term_v_84 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_84));
  term_w_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_84));
  term_x_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_85));
  term_c_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_d_85));
  term_d_85 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_85));
  term_e_85 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_85));
  term_f_85 = (ATerm) ATmakeAppl(sym__2, term_e_82, term_e_85);
  ATprotect(&(term_p_85));
  term_p_85 = (ATerm) ATmakeAppl(sym__2, term_e_82, term_h_84);
  ATprotect(&(term_q_85));
  term_q_85 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_85));
  term_r_85 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_85));
  term_u_85 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_85));
  term_v_85 = (ATerm) ATmakeAppl(sym__2, term_e_82, term_u_85);
  ATprotect(&(term_y_85));
  term_y_85 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_z_85));
  term_z_85 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_a_86));
  term_a_86 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_86));
  term_d_86 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_86));
  term_e_86 = (ATerm) ATmakeAppl(sym__2, term_u_84, term_v_84);
  ATprotect(&(term_l_86));
  term_l_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_86));
  term_m_86 = (ATerm) ATmakeAppl(sym__2, term_l_86, term_c_84);
  ATprotect(&(term_n_86));
  term_n_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_86));
  term_o_86 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_86));
  term_p_86 = (ATerm) ATmakeAppl(sym__2, term_o_86, term_c_84);
  ATprotect(&(term_q_86));
  term_q_86 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_86));
  term_r_86 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_86));
  term_w_86 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_87));
  term_b_87 = (ATerm) ATmakeAppl(sym__2, term_u_85, term_c_84);
  ATprotect(&(term_c_87));
  term_c_87 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_87));
  term_d_87 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_87));
  term_e_87 = (ATerm) ATmakeAppl(sym__3, term_u_84, term_v_84, (ATerm) ATempty);
  ATprotect(&(term_r_87));
  term_r_87 = (ATerm) ATmakeAppl(sym__2, term_e_82, term_l_86);
  ATprotect(&(term_u_87));
  term_u_87 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_87));
  term_v_87 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_87));
  term_w_87 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_88));
  term_l_88 = (ATerm) ATmakeAppl(sym__2, term_u_82, term_c_84);
  ATprotect(&(term_m_88));
  term_m_88 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_88));
  term_n_88 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm r_114 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm p_0 (ATerm), ATerm t);
static ATerm c_13 (ATerm s_147 (ATerm), ATerm h_83, ATerm f_83, ATerm g_83, ATerm k_83, ATerm i_83, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm s_147 (ATerm), ATerm t);
static ATerm f_19 (ATerm u_11, ATerm v_11, ATerm t);
static ATerm g_19 (ATerm e_12, ATerm f_12, ATerm t);
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
ATerm pat_td_1_0 (ATerm b_146 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm e_13 (ATerm y_73, ATerm z_73, ATerm a_74, ATerm t);
static ATerm j_31 (ATerm p_30, ATerm t);
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
static ATerm k_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm f_13 (ATerm l_69, ATerm m_69, ATerm n_69, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm g_13 (ATerm r_147 (ATerm), ATerm o_82, ATerm l_82, ATerm m_82, ATerm v_82, ATerm z_82, ATerm a_83, ATerm t);
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
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm q_5 (ATerm t);
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
static ATerm h_6 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm t_147 (ATerm), ATerm t);
static ATerm n_6 (ATerm t);
static ATerm i_13 (ATerm o_83, ATerm n_83, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm g_63 (ATerm g_62, ATerm t);
static ATerm h_63 (ATerm i_62, ATerm t);
static ATerm q_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm i_66 (ATerm h_65, ATerm t);
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
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm next_counter_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm NewNumberedVar_0_0 (ATerm t);
ATerm RenameVarTerm_2_0 (ATerm x_147 (ATerm), ATerm y_147 (ATerm), ATerm t);
static ATerm l_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
ATerm dr_rename_vars_0_0 (ATerm t);
static ATerm s_7 (ATerm t);
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
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm b_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm b_10 (ATerm t);
static ATerm c_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm e_10 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm z_147 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm DesugarDynRuleDef_0_0 (ATerm t);
ATerm split_dynamic_rule_0_0 (ATerm t);
static ATerm t_11 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm a_148 (ATerm), ATerm t);
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
static ATerm n_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
static ATerm c_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm o_14 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm u_15 (ATerm t);
static ATerm v_13 (ATerm h_87, ATerm g_87, ATerm t);
ATerm repeat_2_0 (ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm n_122 (ATerm), ATerm t);
static ATerm v_15 (ATerm t);
ATerm collect_om_2_0 (ATerm w_126 (ATerm), ATerm x_126 (ATerm), ATerm t);
ATerm partition_1_0 (ATerm o_129 (ATerm), ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm v_115 (ATerm), ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
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
ATerm dummify_0_0 (ATerm t);
ATerm DRDef_LHS_1_0 (ATerm d_148 (ATerm), ATerm t);
static ATerm n_131 (ATerm g_130, ATerm h_130, ATerm i_130, ATerm j_130, ATerm k_130, ATerm l_130, ATerm p_130, ATerm t);
static ATerm p_17 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm s_120 (ATerm), ATerm t);
static ATerm q_17 (ATerm t);
ATerm UpgradeUndefine_0_0 (ATerm t);
static ATerm s_17 (ATerm t);
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
ATerm tboundin_3_0 (ATerm w_146 (ATerm), ATerm x_146 (ATerm), ATerm y_146 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm f_147 (ATerm), ATerm t);
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
static ATerm z_18 (ATerm t);
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
ATerm Bind4_0_0 (ATerm t);
static ATerm t_19 (ATerm t);
static ATerm u_19 (ATerm t);
static ATerm v_19 (ATerm t);
static ATerm a_20 (ATerm t);
static ATerm d_20 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm e_14 (ATerm o_125 (ATerm), ATerm w_30, ATerm v_30, ATerm t);
static ATerm f_14 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm a_31, ATerm z_30, ATerm t);
static ATerm g_14 (ATerm j_125 (ATerm), ATerm u_30, ATerm t_30, ATerm t);
ATerm genzip_4_0 (ATerm h_123 (ATerm), ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm k_123 (ATerm), ATerm t);
static ATerm j_20 (ATerm t);
static ATerm o_20 (ATerm t);
static ATerm p_20 (ATerm t);
static ATerm l_14 (ATerm f_688, ATerm k_688, ATerm l_68, ATerm t);
ATerm while_not_2_0 (ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm t);
ATerm for_3_0 (ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm t);
static ATerm q_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm v_20 (ATerm t);
static ATerm e_155 (ATerm y_153, ATerm z_153, ATerm a_154, ATerm t);
static ATerm b_21 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm e_21 (ATerm t);
static ATerm f_21 (ATerm t);
static ATerm j_21 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm d_22 (ATerm t);
static ATerm f_22 (ATerm t);
ATerm free_vars_3_0 (ATerm j_144 (ATerm), ATerm k_144 (ATerm), ATerm l_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm s_114 (ATerm), ATerm t);
static ATerm p_14 (ATerm s_61, ATerm t_61, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm j_116 (ATerm), ATerm t);
static ATerm q_14 (ATerm m_134 (ATerm), ATerm y_44, ATerm w_44, ATerm t);
static ATerm h_22 (ATerm t);
static ATerm i_22 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm r_14 (ATerm m_61, ATerm n_61, ATerm t);
ATerm end_scope_1_0 (ATerm j_134 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm i_134 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm k_134 (ATerm), ATerm l_134 (ATerm), ATerm t);
static ATerm n_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm y_22 (ATerm t);
static ATerm z_22 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm g_129 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm u_121 (ATerm), ATerm t);
static ATerm m_161 (ATerm e_161, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm u_14 (ATerm z_34, ATerm l_34, ATerm t);
ATerm foldr_3_0 (ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm g_128 (ATerm), ATerm t);
static ATerm e_23 (ATerm t);
static ATerm f_23 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm p_23 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm x_23 (ATerm t);
static ATerm y_23 (ATerm t);
static ATerm z_23 (ATerm t);
static ATerm b_24 (ATerm t);
static ATerm n_24 (ATerm t);
static ATerm q_24 (ATerm t);
static ATerm r_24 (ATerm t);
static ATerm z_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm b_25 (ATerm t);
static ATerm c_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm f_25 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm v_14 (ATerm o_40, ATerm p_40, ATerm t);
static ATerm w_14 (ATerm s_24, ATerm t_24, ATerm t);
static ATerm y_14 (ATerm u_120 (ATerm), ATerm m_187, ATerm y_24, ATerm t);
static ATerm x_14 (ATerm o_24, ATerm p_24, ATerm t);
static ATerm o_25 (ATerm t);
static ATerm p_25 (ATerm t);
ATerm output_1_0 (ATerm d_140 (ATerm), ATerm t);
static ATerm w_166 (ATerm q_166, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_14 (ATerm u_24, ATerm t);
static ATerm a_15 (ATerm h_39, ATerm i_39, ATerm t);
static ATerm b_15 (ATerm q_40, ATerm r_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_168 (ATerm g_167, ATerm t);
static ATerm i_168 (ATerm k_167, ATerm l_167, ATerm m_167, ATerm t);
static ATerm j_168 (ATerm u_167, ATerm v_167, ATerm w_167, ATerm t);
static ATerm c_15 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm e_140 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm q_25 (ATerm t);
static ATerm r_25 (ATerm t);
static ATerm s_25 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm t_25 (ATerm t);
static ATerm v_25 (ATerm t);
static ATerm w_25 (ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm b_26 (ATerm t);
static ATerm c_26 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm l_15 (ATerm m_56, ATerm n_56, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm e_26 (ATerm t);
static ATerm h_26 (ATerm t);
static ATerm j_26 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm m_26 (ATerm t);
static ATerm n_26 (ATerm t);
static ATerm t_26 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm j_15 (ATerm h_61, ATerm i_61, ATerm g_61, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm u_26 (ATerm t);
static ATerm w_26 (ATerm t);
static ATerm e_27 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm d_15 (ATerm k_43, ATerm l_43, ATerm t);
ATerm foldr_2_0 (ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm f_27 (ATerm t);
static ATerm g_27 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_137 (ATerm), ATerm t);
static ATerm m_27 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm o_27 (ATerm t);
ATerm need_help_1_0 (ATerm u_139 (ATerm), ATerm t);
static ATerm m_15 (ATerm m_65, ATerm n_65, ATerm o_65, ATerm t);
ATerm lookup_table_0_1 (ATerm t_62, ATerm t);
ATerm new_hashtable_0_2 (ATerm u_65, ATerm v_65, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm f_15 (ATerm r_65, ATerm s_65, ATerm t);
static ATerm g_15 (ATerm w_65, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm d_121 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm q_27 (ATerm t);
static ATerm r_27 (ATerm t);
static ATerm s_27 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_121 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm n_15 (ATerm p_65, ATerm q_65, ATerm t);
static ATerm i_15 (ATerm a_63, ATerm b_63, ATerm t);
static ATerm u_27 (ATerm t);
static ATerm w_27 (ATerm t);
static ATerm x_27 (ATerm t);
static ATerm a_28 (ATerm t);
static ATerm c_28 (ATerm t);
static ATerm d_28 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_141 (ATerm), ATerm t);
static ATerm j_28 (ATerm t);
static ATerm n_28 (ATerm t);
static ATerm p_28 (ATerm t);
static ATerm q_28 (ATerm t);
ATerm parse_options_1_0 (ATerm w_141 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm z_139 (ATerm), ATerm t);
static ATerm s_28 (ATerm t);
static ATerm v_28 (ATerm t);
static ATerm w_28 (ATerm t);
static ATerm i_29 (ATerm t);
static ATerm j_29 (ATerm t);
static ATerm l_29 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm x_0 = NULL,a_1 = NULL,c_1 = NULL,e_1 = NULL,f_1 = NULL;
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
              x_0 = ATgetFirst((ATermList) t);
              a_1 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, x_0, (ATerm) ATmakeAppl(sym_LChoices_1, a_1));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_m_29;
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
                  x_0 = ATgetFirst((ATermList) t);
                  a_1 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, x_0, (ATerm) ATmakeAppl(sym_Choices_1, a_1));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_m_29;
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
                      x_0 = ATgetFirst((ATermList) t);
                      a_1 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_0, (ATerm) ATmakeAppl(sym_Seqs_1, a_1));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_n_29;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      e_1 = ATgetArgument(t, 0);
                      f_1 = ATgetArgument(t, 1);
                      c_1 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, f_1, (ATerm) ATmakeAppl(sym_Op_2, term_q_29, (ATerm) ATinsert(ATinsert(ATempty, c_1), e_1)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          e_1 = ATgetArgument(t, 0);
                          f_1 = ATgetArgument(t, 1);
                          c_1 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, c_1)), e_1), (ATerm) ATmakeAppl(sym_Build_1, f_1)));
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
ATerm topdown_1_0 (ATerm r_114 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(r_114, t);
    return(t);
  }
  t = r_114(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm r_0 (ATerm t)
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
static ATerm u_0 (ATerm t)
{
  ATerm s_29 = t;
  int t_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_29);
    }
  else
    {
      t = s_29;
      {
        ATerm z_29 = t;
        int b_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_30);
          }
        else
          {
            t = z_29;
            {
              ATerm h_30 = t;
              int i_30 = stack_ptr;
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
                  LocalPopChoice(i_30);
                }
              else
                {
                  t = h_30;
                  {
                    ATerm j_30 = t;
                    int k_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_30);
                      }
                    else
                      {
                        t = j_30;
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
  ATerm l_30 = t;
  int m_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_6 = ATgetArgument(t, 0);
          {
            ATerm o_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_30);
      t = w_6;
    }
  else
    {
      t = l_30;
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
  t = map_1_0(b_1, t);
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm d_7 = NULL;
  ATerm q_30 = t;
  int x_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_7 = ATgetArgument(t, 0);
          {
            ATerm c_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_30);
      t = d_7;
    }
  else
    {
      t = q_30;
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
static ATerm d_1 (ATerm t)
{
  ATerm g_7 = NULL;
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_7);
  return(t);
}
static ATerm g_1 (ATerm t)
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
static ATerm h_1 (ATerm t)
{
  ATerm d_31 = t;
  int i_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_31);
    }
  else
    {
      t = d_31;
      {
        ATerm k_31 = t;
        int l_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_31);
          }
        else
          {
            t = k_31;
            {
              ATerm m_31 = t;
              int n_31 = stack_ptr;
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
                  t = map_1_0(i_1, t);
                  LocalPopChoice(n_31);
                }
              else
                {
                  t = m_31;
                  {
                    ATerm o_31 = t;
                    int q_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(q_31);
                      }
                    else
                      {
                        t = o_31;
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
  ATerm d_8 = NULL;
  ATerm r_31 = t;
  int t_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_8 = ATgetArgument(t, 0);
          {
            ATerm w_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_31);
      t = d_8;
    }
  else
    {
      t = r_31;
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
static ATerm j_1 (ATerm t)
{
  t = map_1_0(k_1, t);
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm i_8 = NULL;
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_8 = ATgetArgument(t, 0);
          {
            ATerm z_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_31);
      t = i_8;
    }
  else
    {
      t = x_31;
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
static ATerm l_1 (ATerm t)
{
  ATerm m_8 = NULL;
  m_8 = t;
  {
    ATerm a_32 = t;
    int d_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_8 = NULL,j_0 = NULL,t_0 = NULL,j_3 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            v_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_8);
        j_0 = t;
        t = v_8;
        t = ContextVar_0_0(t);
        t_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, t_0);
        j_3 = t;
        t = SSLsetAnnotations(j_3, j_0);
        LocalPopChoice(d_32);
      }
    else
      {
        t = a_32;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, m_8);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm p_0 (ATerm), ATerm t)
{
  static ATerm m_9 (ATerm m_4, ATerm n_4, ATerm p_4, ATerm q_4, ATerm s_4, ATerm u_4, ATerm w_4, ATerm t)
  {
    ATerm d_5 = NULL,f_5 = NULL,g_5 = NULL,n_5 = NULL,p_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, s_4, term_f_32);
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
      ATerm q_32 = t;
      int r_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_5;
          if((q_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, d_5);
          LocalPopChoice(r_32);
        }
      else
        {
          t = q_32;
          t = g_5;
        }
    }
    f_5 = t;
    t = g_5;
    t = free_vars_3_0(r_0, u_0, tboundin_3_0, t);
    t = map_1_0(d_1, t);
    p_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_4, u_4);
    t = free_vars_3_0(g_1, h_1, tboundin_3_0, t);
    t = filter_1_0(l_1, t);
    n_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_5, p_5);
    t = diff_0_0(t);
    r_5 = t;
    t = new_0_0(t);
    s_5 = t;
    t = m_4;
    t = p_0(t);
    t_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, t_5, (ATerm) ATmakeAppl(sym_Op_2, term_v_32, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_32, (ATerm) ATinsert(CheckATermList(r_5), (ATerm) ATmakeAppl(sym_Str_1, s_5)))), g_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, m_4, n_4, p_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, d_5), q_4), s_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_b_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_4)))), f_5), (ATerm) ATmakeAppl(sym_Op_2, term_x_32, (ATerm) ATinsert(CheckATermList(r_5), (ATerm) ATmakeAppl(sym_Str_1, s_5))))), u_4))));
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
              int g_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
                  t = z_8;
                  t = new_0_0(t);
                  j_2 = t;
                  t = i_9;
                  t = dummify_0_0(t);
                  h_2 = t;
                  {
                    ATerm h_33 = t;
                    int i_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = h_2;
                        if((i_9 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, j_2);
                        LocalPopChoice(i_33);
                      }
                    else
                      {
                        t = h_33;
                        t = h_2;
                      }
                  }
                  k_2 = t;
                  t = c_9;
                  t = p_0(t);
                  l_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, l_2, (ATerm) ATmakeAppl(sym_Op_2, term_v_32, (ATerm) ATinsert(ATinsert(ATempty, term_f_32), h_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, c_9, e_9, g_9, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, j_2), i_9), term_f_32, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_b_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_9)))), k_2), term_f_32)), (ATerm) ATmakeAppl(sym_Seq_2, k_9, term_m_29)))));
                  LocalPopChoice(g_33);
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
static ATerm c_13 (ATerm s_147 (ATerm), ATerm h_83, ATerm f_83, ATerm g_83, ATerm k_83, ATerm i_83, ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL,t_9 = NULL;
  t = new_0_0(t);
  q_9 = t;
  t = k_83;
  t = dummify_0_0(t);
  p_9 = t;
  {
    ATerm j_33 = t;
    int k_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_9;
        if((k_83 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, q_9);
        LocalPopChoice(k_33);
      }
    else
      {
        t = j_33;
        t = p_9;
      }
  }
  r_9 = t;
  t = h_83;
  t = s_147(t);
  t_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, t_9, p_9)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, h_83, f_83, g_83, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, q_9), k_83), term_f_32, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_m_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_83)))), r_9), term_n_33)), (ATerm) ATmakeAppl(sym_Seq_2, i_83, term_m_29))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm s_147 (ATerm), ATerm t)
{
  ATerm m_10 = NULL,o_10 = NULL,p_10 = NULL,r_10 = NULL,s_10 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      m_10 = ATgetArgument(t, 0);
      o_10 = ATgetArgument(t, 1);
      p_10 = ATgetArgument(t, 2);
      {
        ATerm o_33 = ATgetArgument(t, 3);
        if(match_cons(o_33, sym_Rule_3))
          {
            r_10 = ATgetArgument(o_33, 0);
            {
              ATerm p_33 = ATgetArgument(o_33, 1);
              if(match_cons(p_33, sym_Op_2))
                {
                  ATerm q_33 = ATgetArgument(p_33, 0);
                  if((ATgetSymbol((ATermAppl) q_33) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm r_33 = ATgetArgument(p_33, 1);
                    if(((ATgetType(r_33) != AT_LIST) || !(ATisEmpty(r_33))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            s_10 = ATgetArgument(o_33, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_13(s_147, m_10, o_10, p_10, r_10, s_10, t);
  return(t);
}
static ATerm f_19 (ATerm u_11, ATerm v_11, ATerm t)
{
  t = u_11;
  {
    ATerm s_33 = t;
    if((PushChoice() == 0))
      {
        ATerm x_11 = NULL,z_11 = NULL,b_12 = NULL,c_12 = NULL,o_3 = NULL;
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
        o_3 = t;
        t = SSLsetAnnotations(o_3, x_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_33;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_29, u_11);
  return(t);
}
static ATerm g_19 (ATerm e_12, ATerm f_12, ATerm t)
{
  t = e_12;
  {
    ATerm t_33 = t;
    if((PushChoice() == 0))
      {
        ATerm j_12 = NULL,k_12 = NULL,r_12 = NULL,s_12 = NULL,p_3 = NULL;
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
        p_3 = t;
        t = SSLsetAnnotations(p_3, j_12);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_33;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_33, e_12);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_w_33;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm d_14 = NULL,h_14 = NULL,u_2 = NULL;
  d_14 = t;
  t = SSL_explode_term(d_14);
  if(match_cons(t, sym__2))
    {
      ATerm y_33 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_33) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_33 = ATgetArgument(t, 1);
        if(((ATgetType(z_33) == AT_LIST) && !(ATisEmpty(z_33))))
          {
            h_14 = ATgetFirst((ATermList) z_33);
            {
              ATerm a_34 = (ATerm) ATgetNext((ATermList) z_33);
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
      ATerm b_34 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_34) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_34 = ATgetArgument(t, 1);
        if(((ATgetType(c_34) == AT_LIST) && !(ATisEmpty(c_34))))
          {
            ATerm e_34 = ATgetFirst((ATermList) c_34);
            ATerm g_34 = (ATerm) ATgetNext((ATermList) c_34);
            if(((ATgetType(g_34) == AT_LIST) && !(ATisEmpty(g_34))))
              {
                u_2 = ATgetFirst((ATermList) g_34);
                {
                  ATerm i_34 = (ATerm) ATgetNext((ATermList) g_34);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_34, (ATerm) ATinsert(ATinsert(ATempty, u_2), h_14));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm t_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_34, (ATerm) ATinsert(ATinsert(ATempty, y_15), t_15));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_w_33;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL;
  if(match_cons(t, sym__2))
    {
      a_16 = ATgetArgument(t, 0);
      b_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_34, (ATerm) ATinsert(ATinsert(ATempty, b_16), a_16));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL;
  if(match_cons(t, sym__2))
    {
      v_16 = ATgetArgument(t, 0);
      w_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_34, (ATerm) ATinsert(ATinsert(ATempty, w_16), v_16));
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_o_34;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm y_16 = NULL,z_16 = NULL;
  if(match_cons(t, sym__2))
    {
      y_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_34, (ATerm) ATinsert(ATinsert(ATempty, z_16), y_16));
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
        t = foldr_2_0(m_1, n_1, t);
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
                ATerm z_2 = NULL;
                t = u_13;
                {
                  ATerm u_34 = t;
                  int v_34 = stack_ptr;
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
                                      t = term_e_35;
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
                        ATerm b_3 = NULL;
                        t = SSL_explode_string(u_13);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm f_35 = ATgetFirst((ATermList) t);
                            if(((ATgetType(f_35) != AT_INT) || (ATgetInt((ATermInt) f_35) != 39)))
                              _fail(t);
                            {
                              ATerm g_35 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(g_35) == AT_LIST) && !(ATisEmpty(g_35))))
                                {
                                  b_3 = ATgetFirst((ATermList) g_35);
                                  {
                                    ATerm h_35 = (ATerm) ATgetNext((ATermList) g_35);
                                    if(((ATgetType(h_35) == AT_LIST) && !(ATisEmpty(h_35))))
                                      {
                                        ATerm i_35 = ATgetFirst((ATermList) h_35);
                                        if(((ATgetType(i_35) != AT_INT) || (ATgetInt((ATermInt) i_35) != 39)))
                                          _fail(t);
                                        {
                                          ATerm j_35 = (ATerm) ATgetNext((ATermList) h_35);
                                          if(((ATgetType(j_35) != AT_LIST) || !(ATisEmpty(j_35))))
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
              ATerm k_35 = t;
              int m_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      u_13 = ATgetArgument(t, 0);
                      {
                        ATerm o_35 = ATgetArgument(t, 1);
                      }
                      m_13 = ATgetArgument(t, 2);
                      t_12 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(m_35);
                  t = (ATerm) ATmakeAppl(sym_Con_3, u_13, m_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_12), (ATerm) ATempty));
                }
              else
                {
                  t = k_35;
                  {
                    ATerm p_35 = t;
                    int q_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            u_13 = ATgetArgument(t, 0);
                            {
                              ATerm s_35 = ATgetArgument(t, 1);
                            }
                            m_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(q_35);
                        t = (ATerm) ATmakeAppl(sym_Con_3, u_13, m_13, term_z_35);
                      }
                    else
                      {
                        t = p_35;
                        if(match_cons(t, sym_Con1_2))
                          {
                            u_13 = ATgetArgument(t, 0);
                            y_13 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, u_13, y_13, term_z_35);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                u_13 = ATgetArgument(t, 0);
                                y_13 = ATgetArgument(t, 1);
                                {
                                  static ATerm o_1 (ATerm t)
                                  {
                                    t = y_13;
                                    return(t);
                                  }
                                  t = u_13;
                                  t = foldr_2_0(o_1, p_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    u_13 = ATgetArgument(t, 0);
                                    t = u_13;
                                    t = foldr_2_0(q_1, r_1, t);
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
                                                ATerm c_36 = t;
                                                int d_36 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = f_19(u_13, q_13, t);
                                                    LocalPopChoice(d_36);
                                                  }
                                                else
                                                  {
                                                    t = c_36;
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
                                                                      static ATerm s_1 (ATerm t)
                                                                      {
                                                                        t = y_13;
                                                                        return(t);
                                                                      }
                                                                      t = u_13;
                                                                      t = foldr_2_0(s_1, t_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        u_13 = ATgetArgument(t, 0);
                                                                        t = u_13;
                                                                        t = foldr_2_0(u_1, v_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            u_13 = ATgetArgument(t, 0);
                                                                            y_13 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_u_33, (ATerm) ATinsert(CheckATermList(y_13), u_13));
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
                                                                                        ATerm e_36 = t;
                                                                                        int f_36 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = g_19(u_13, q_13, t);
                                                                                            LocalPopChoice(f_36);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = e_36;
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
                                                                                    t = term_g_36;
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
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_o_36, (ATerm) ATinsert(ATinsert(ATempty, l_13), u_13));
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
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, u_13, y_13, term_n_29);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    u_13 = ATgetArgument(t, 0);
                                                                                                    y_13 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, u_13, y_13, term_n_29);
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
                                                                                                                                                ATerm p_36 = ATgetArgument(t, 0);
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_19), s_19), r_19), q_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, q_19), (ATerm) ATmakeAppl(sym_Var_1, s_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, k_19, (ATerm)ATmakeAppl(sym_Var_1, q_19), (ATerm) ATmakeAppl(sym_Var_1, r_19)), (ATerm) ATmakeAppl(sym_BAM_3, i_19, (ATerm)ATmakeAppl(sym_Var_1, s_19), (ATerm) ATmakeAppl(sym_Var_1, x_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_q_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_19)), (ATerm) ATmakeAppl(sym_Var_1, r_19))))));
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
              static ATerm w_1 (ATerm t)
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
              t = oncetd_1_0(w_1, t);
            }
            c_20 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_q_36, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_19)), not_null(y_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_20)), (ATerm) ATmakeAppl(sym_Build_1, c_20))));
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
            static ATerm x_1 (ATerm t)
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
            t = oncetd_1_0(x_1, t);
          }
          n_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, m_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_s_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_20))))), (ATerm)ATmakeAppl(sym_Var_1, l_20), (ATerm) ATmakeAppl(sym_Op_2, term_q_29, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_20)), not_null(e_20)))))));
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
    ATerm u_36 = t;
    int x_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
        t = t_20;
        t = new_0_0(t);
        y_20 = t;
        t = u_20;
        {
          static ATerm y_1 (ATerm t)
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
          t = pat_td_1_0(y_1, t);
        }
        z_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_36, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(x_20))))));
        LocalPopChoice(x_36);
      }
    else
      {
        t = u_36;
        {
          ATerm z_36 = t;
          int b_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
              t = t_20;
              t = new_0_0(t);
              h_21 = t;
              t = u_20;
              {
                static ATerm z_1 (ATerm t)
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
                t = pat_td_1_0(z_1, t);
              }
              i_21 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, h_21)), not_null(g_21))));
              LocalPopChoice(b_37);
            }
          else
            {
              t = z_36;
              {
                ATerm k_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL;
                t = t_20;
                t = new_0_0(t);
                q_21 = t;
                t = u_20;
                {
                  static ATerm a_2 (ATerm t)
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
                  t = pat_td_1_0(a_2, t);
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
ATerm pat_td_1_0 (ATerm b_146 (ATerm), ATerm t)
{
  ATerm e_37 = t;
  int f_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_146(t);
      LocalPopChoice(f_37);
    }
  else
    {
      t = e_37;
      {
        ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL,r_26 = NULL;
        p_26 = t;
        if(match_cons(t, sym_Op_2))
          {
            q_26 = ATgetArgument(t, 0);
            r_26 = ATgetArgument(t, 1);
            {
              ATerm h_3 = NULL,l_3 = NULL,t_3 = NULL;
              t = SSLgetAnnotations(p_26);
              h_3 = t;
              t = r_26;
              {
                static ATerm b_2 (ATerm t)
                {
                  t = pat_td_1_0(b_146, t);
                  return(t);
                }
                t = fetch_1_0(b_2, t);
              }
              l_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, q_26, l_3);
              t_3 = t;
              t = SSLsetAnnotations(t_3, h_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                q_26 = ATgetArgument(t, 0);
                r_26 = ATgetArgument(t, 1);
                {
                  ATerm h_37 = t;
                  int o_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_4 = NULL,o_4 = NULL,v_3 = NULL;
                      t = SSLgetAnnotations(p_26);
                      j_4 = t;
                      t = r_26;
                      t = pat_td_1_0(b_146, t);
                      o_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, q_26, o_4);
                      v_3 = t;
                      t = SSLsetAnnotations(v_3, j_4);
                      LocalPopChoice(o_37);
                    }
                  else
                    {
                      t = h_37;
                      {
                        ATerm k_5 = NULL,o_5 = NULL,z_3 = NULL;
                        t = SSLgetAnnotations(p_26);
                        k_5 = t;
                        t = q_26;
                        t = pat_td_1_0(b_146, t);
                        o_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, o_5, r_26);
                        z_3 = t;
                        t = SSLsetAnnotations(z_3, k_5);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    q_26 = ATgetArgument(t, 0);
                    r_26 = ATgetArgument(t, 1);
                    o_26 = ATgetArgument(t, 2);
                    {
                      ATerm g_6 = NULL,t_6 = NULL,a_4 = NULL;
                      t = SSLgetAnnotations(p_26);
                      g_6 = t;
                      t = o_26;
                      {
                        static ATerm c_2 (ATerm t)
                        {
                          t = pat_td_1_0(b_146, t);
                          return(t);
                        }
                        t = fetch_1_0(c_2, t);
                      }
                      t_6 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, q_26, r_26, t_6);
                      a_4 = t;
                      t = SSLsetAnnotations(a_4, g_6);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        q_26 = ATgetArgument(t, 0);
                        r_26 = ATgetArgument(t, 1);
                        o_26 = ATgetArgument(t, 2);
                        {
                          ATerm r_7 = NULL,j_8 = NULL,b_4 = NULL;
                          t = SSLgetAnnotations(p_26);
                          r_7 = t;
                          t = o_26;
                          {
                            static ATerm d_2 (ATerm t)
                            {
                              t = pat_td_1_0(b_146, t);
                              return(t);
                            }
                            t = fetch_1_0(d_2, t);
                          }
                          j_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, q_26, r_26, j_8);
                          b_4 = t;
                          t = SSLsetAnnotations(b_4, r_7);
                        }
                      }
                    else
                      {
                        ATerm o_9 = NULL,v_9 = NULL,c_4 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            q_26 = ATgetArgument(t, 0);
                            r_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(p_26);
                        o_9 = t;
                        t = r_26;
                        t = pat_td_1_0(b_146, t);
                        v_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, q_26, v_9);
                        c_4 = t;
                        t = SSLsetAnnotations(c_4, o_9);
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
  ATerm i_27 = NULL,j_27 = NULL;
  i_27 = t;
  if(match_cons(t, sym_Build_1))
    {
      j_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_37 = t;
    int r_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_27 = NULL,l_27 = NULL,y_27 = NULL,z_27 = NULL;
        t = i_27;
        t = new_0_0(t);
        y_27 = t;
        t = j_27;
        {
          static ATerm e_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((k_27 != NULL) && (k_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_27 = ATgetArgument(t, 0);
                if(((l_27 != NULL) && (l_27 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  l_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, y_27);
            return(t);
          }
          t = pat_td_1_0(e_2, t);
        }
        z_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_37, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_27)), not_null(k_27))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_27)))), (ATerm) ATmakeAppl(sym_Build_1, z_27)));
        LocalPopChoice(r_37);
      }
    else
      {
        t = p_37;
        {
          ATerm v_37 = t;
          int x_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_28 = NULL,f_28 = NULL,g_28 = NULL;
              t = i_27;
              t = new_0_0(t);
              f_28 = t;
              t = j_27;
              {
                static ATerm f_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((b_28 != NULL) && (b_28 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_28 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, f_28);
                  return(t);
                }
                t = pat_td_1_0(f_2, t);
              }
              g_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_28), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_28)))), (ATerm) ATmakeAppl(sym_Build_1, g_28)));
              LocalPopChoice(x_37);
            }
          else
            {
              t = v_37;
              {
                ATerm h_28 = NULL,i_28 = NULL,k_28 = NULL,l_28 = NULL;
                t = i_27;
                t = new_0_0(t);
                k_28 = t;
                t = j_27;
                {
                  static ATerm g_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((h_28 != NULL) && (h_28 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          h_28 = ATgetArgument(t, 0);
                        if(((i_28 != NULL) && (i_28 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          i_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, k_28);
                    return(t);
                  }
                  t = pat_td_1_0(g_2, t);
                }
                l_28 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(h_28), not_null(i_28), (ATerm) ATmakeAppl(sym_Var_1, k_28))), (ATerm) ATmakeAppl(sym_Build_1, l_28)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm z_37 = t;
  if((PushChoice() == 0))
    {
      ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,r_8 = NULL;
      h_29 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_29);
      f_29 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_29);
      r_8 = t;
      t = SSLsetAnnotations(r_8, f_29);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_37;
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_38;
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
  ATerm r_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_38 = ATgetArgument(t, 0);
      if(match_cons(c_38, sym__2))
        {
          r_29 = ATgetArgument(c_38, 0);
          u_29 = ATgetArgument(c_38, 1);
        }
      else
        _fail(t);
      {
        ATerm e_38 = ATgetArgument(t, 1);
        if(match_cons(e_38, sym__2))
          {
            v_29 = ATgetArgument(e_38, 0);
            w_29 = ATgetArgument(e_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_29), r_29), (ATerm) ATinsert(CheckATermList(w_29), u_29));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_38;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm x_29 = NULL,c_30 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_29 = ATgetFirst((ATermList) t);
      c_30 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_29, c_30);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_38 = ATgetArgument(t, 0);
      if(match_cons(f_38, sym__2))
        {
          d_30 = ATgetArgument(f_38, 0);
          e_30 = ATgetArgument(f_38, 1);
        }
      else
        _fail(t);
      {
        ATerm h_38 = ATgetArgument(t, 1);
        if(match_cons(h_38, sym__2))
          {
            f_30 = ATgetArgument(h_38, 0);
            g_30 = ATgetArgument(h_38, 1);
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
static ATerm e_13 (ATerm y_73, ATerm z_73, ATerm a_74, ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,s_8 = NULL;
  t = a_74;
  t = fetch_1_0(i_2, t);
  t = a_74;
  t = genzip_4_0(m_2, n_2, o_2, LiftPrimArg_0_0, t);
  e_29 = t;
  if(match_cons(t, sym__2))
    {
      a_29 = ATgetArgument(t, 0);
      b_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_29);
  z_28 = t;
  t = a_29;
  t = concat_0_0(t);
  c_29 = t;
  t = b_29;
  t = genzip_4_0(p_2, q_2, r_2, _id, t);
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_29, d_29);
  s_8 = t;
  t = SSLsetAnnotations(s_8, z_28);
  if(match_cons(t, sym__2))
    {
      t_28 = ATgetArgument(t, 0);
      {
        ATerm j_38 = ATgetArgument(t, 1);
        if(match_cons(j_38, sym__2))
          {
            u_28 = ATgetArgument(j_38, 0);
            y_28 = ATgetArgument(j_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_28), (ATerm) ATmakeAppl(sym_CallT_3, y_73, z_73, y_28)));
  return(t);
}
static ATerm j_31 (ATerm p_30, ATerm t)
{
  ATerm r_30 = NULL;
  t = p_30;
  {
    ATerm l_38 = t;
    if((PushChoice() == 0))
      {
        ATerm s_30 = NULL,e_31 = NULL,f_31 = NULL,n_9 = NULL;
        f_31 = t;
        if(match_cons(t, sym_Var_1))
          {
            e_31 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_31);
        s_30 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, e_31);
        n_9 = t;
        t = SSLsetAnnotations(n_9, s_30);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_38;
      }
  }
  t = new_0_0(t);
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, r_30), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_30)))), (ATerm) ATmakeAppl(sym_Var_1, r_30)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL;
  g_31 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_31 = ATgetArgument(t, 0);
      {
        ATerm m_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_31(g_31, t);
            LocalPopChoice(o_38);
          }
        else
          {
            t = m_38;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_n_29, (ATerm) ATmakeAppl(sym_Var_1, h_31)));
          }
      }
    }
  else
    {
      t = j_31(g_31, t);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm s_38 = t;
  if((PushChoice() == 0))
    {
      ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,h_11 = NULL;
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
      h_11 = t;
      t = SSLsetAnnotations(h_11, y_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_38;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_38;
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
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,j_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_38 = ATgetArgument(t, 0);
      if(match_cons(t_38, sym__2))
        {
          d_11 = ATgetArgument(t_38, 0);
          e_11 = ATgetArgument(t_38, 1);
        }
      else
        _fail(t);
      {
        ATerm u_38 = ATgetArgument(t, 1);
        if(match_cons(u_38, sym__2))
          {
            f_11 = ATgetArgument(u_38, 0);
            j_11 = ATgetArgument(u_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_11), d_11), (ATerm) ATinsert(CheckATermList(j_11), e_11));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_38;
  return(t);
}
static ATerm y_2 (ATerm t)
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
static ATerm a_3 (ATerm t)
{
  ATerm m_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_38 = ATgetArgument(t, 0);
      if(match_cons(v_38, sym__2))
        {
          m_11 = ATgetArgument(v_38, 0);
          o_11 = ATgetArgument(v_38, 1);
        }
      else
        _fail(t);
      {
        ATerm w_38 = ATgetArgument(t, 1);
        if(match_cons(w_38, sym__2))
          {
            p_11 = ATgetArgument(w_38, 0);
            q_11 = ATgetArgument(w_38, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_11), m_11), (ATerm) ATinsert(CheckATermList(q_11), o_11));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm x_38 = t;
  if((PushChoice() == 0))
    {
      ATerm h_13 = NULL,j_13 = NULL,k_13 = NULL,n_11 = NULL;
      k_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          j_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_13);
      h_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, j_13);
      n_11 = t;
      t = SSLsetAnnotations(n_11, h_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_38;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_38;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_13 = ATgetFirst((ATermList) t);
      p_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_13, p_13);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL,w_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_38 = ATgetArgument(t, 0);
      if(match_cons(y_38, sym__2))
        {
          r_13 = ATgetArgument(y_38, 0);
          s_13 = ATgetArgument(y_38, 1);
        }
      else
        _fail(t);
      {
        ATerm a_39 = ATgetArgument(t, 1);
        if(match_cons(a_39, sym__2))
          {
            t_13 = ATgetArgument(a_39, 0);
            w_13 = ATgetArgument(a_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_13), r_13), (ATerm) ATinsert(CheckATermList(w_13), s_13));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_38;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm x_13 = NULL,h_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_13 = ATgetFirst((ATermList) t);
      h_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_13, h_15);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm k_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_39 = ATgetArgument(t, 0);
      if(match_cons(b_39, sym__2))
        {
          k_15 = ATgetArgument(b_39, 0);
          p_15 = ATgetArgument(b_39, 1);
        }
      else
        _fail(t);
      {
        ATerm c_39 = ATgetArgument(t, 1);
        if(match_cons(c_39, sym__2))
          {
            q_15 = ATgetArgument(c_39, 0);
            r_15 = ATgetArgument(c_39, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_15), k_15), (ATerm) ATinsert(CheckATermList(r_15), p_15));
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
        ATerm k_10 = NULL,l_10 = NULL,n_10 = NULL,q_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,i_11 = NULL;
        t = h_36;
        t = fetch_1_0(s_2, t);
        t = h_36;
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
        q_10 = t;
        t = t_10;
        t = concat_0_0(t);
        v_10 = t;
        t = u_10;
        t = genzip_4_0(x_2, y_2, a_3, _id, t);
        w_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_10, w_10);
        i_11 = t;
        t = SSLsetAnnotations(i_11, q_10);
        if(match_cons(t, sym__2))
          {
            k_10 = ATgetArgument(t, 0);
            {
              ATerm d_39 = ATgetArgument(t, 1);
              if(match_cons(d_39, sym__2))
                {
                  l_10 = ATgetArgument(d_39, 0);
                  n_10 = ATgetArgument(d_39, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_10), (ATerm) ATmakeAppl(sym_PrimT_3, j_36, k_36, n_10)));
      }
    }
  else
    {
      ATerm p_12 = NULL,q_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,b_13 = NULL,d_13 = NULL,s_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          j_36 = ATgetArgument(t, 0);
          k_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_36;
      t = fetch_1_0(c_3, t);
      t = k_36;
      t = genzip_4_0(d_3, e_3, f_3, LiftPrimArg_0_0, t);
      d_13 = t;
      if(match_cons(t, sym__2))
        {
          x_12 = ATgetArgument(t, 0);
          y_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_13);
      w_12 = t;
      t = x_12;
      t = concat_0_0(t);
      z_12 = t;
      t = y_12;
      t = genzip_4_0(g_3, i_3, k_3, _id, t);
      b_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_12, b_13);
      s_11 = t;
      t = SSLsetAnnotations(s_11, w_12);
      if(match_cons(t, sym__2))
        {
          p_12 = ATgetArgument(t, 0);
          {
            ATerm e_39 = ATgetArgument(t, 1);
            if(match_cons(e_39, sym__2))
              {
                q_12 = ATgetArgument(e_39, 0);
                v_12 = ATgetArgument(e_39, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, p_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_12), (ATerm) ATmakeAppl(sym_PrimT_3, j_36, (ATerm)ATempty, v_12)));
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,l_37 = NULL,m_37 = NULL;
  m_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      i_37 = ATgetArgument(t, 0);
      j_37 = ATgetArgument(t, 1);
      l_37 = ATgetArgument(t, 2);
      {
        ATerm m_16 = NULL,c_22 = NULL;
        t = SSLgetAnnotations(m_37);
        m_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, i_37, j_37, l_37);
        c_22 = t;
        t = SSLsetAnnotations(c_22, m_16);
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
  ATerm g_39 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(m_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_39;
    }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm w_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
  a_41 = t;
  if(match_cons(t, sym_Con_3))
    {
      b_41 = ATgetArgument(t, 0);
      c_41 = ATgetArgument(t, 1);
      w_40 = ATgetArgument(t, 2);
      {
        ATerm r_17 = NULL,e_22 = NULL;
        t = SSLgetAnnotations(a_41);
        r_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, b_41, c_41, w_40);
        e_22 = t;
        t = SSLsetAnnotations(e_22, r_17);
      }
    }
  else
    {
      ATerm y_18 = NULL,j_22 = NULL;
      if(match_cons(t, sym_App_2))
        {
          b_41 = ATgetArgument(t, 0);
          c_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_41);
      y_18 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, b_41, c_41);
      j_22 = t;
      t = SSLsetAnnotations(j_22, y_18);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm j_39 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(n_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_39;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,m_41 = NULL,o_41 = NULL;
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
      m_41 = ATgetArgument(t, 1);
      o_41 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, m_41), (ATerm) ATmakeAppl(sym_Where_1, o_41)), j_41));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          j_41 = ATgetArgument(t, 0);
          m_41 = ATgetArgument(t, 1);
          o_41 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = j_41;
      t = pureterm_0_0(t);
      t = m_41;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, m_41)), (ATerm) ATmakeAppl(sym_Where_1, o_41)), (ATerm) ATmakeAppl(sym_Match_1, j_41)));
    }
  return(t);
}
static ATerm f_13 (ATerm l_69, ATerm m_69, ATerm n_69, ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,a_42 = NULL,c_42 = NULL,d_42 = NULL,g_42 = NULL,h_42 = NULL;
  t = new_0_0(t);
  d_42 = t;
  t = l_69;
  {
    static ATerm q_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm k_39 = ATgetArgument(t, 0);
          if(match_cons(k_39, sym_Var_1))
            {
              if(((c_42 != NULL) && (c_42 != ATgetArgument(k_39, 0))))
                _fail(ATgetArgument(k_39, 0));
              else
                c_42 = ATgetArgument(k_39, 0);
            }
          else
            _fail(t);
          if(((x_41 != NULL) && (x_41 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            x_41 = ATgetArgument(t, 1);
          {
            ATerm l_39 = ATgetArgument(t, 2);
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
  t = m_69;
  {
    static ATerm r_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm m_39 = ATgetArgument(t, 0);
          if(match_cons(m_39, sym_Var_1))
            {
              if(((c_42 != NULL) && (c_42 != ATgetArgument(m_39, 0))))
                _fail(ATgetArgument(m_39, 0));
              else
                c_42 = ATgetArgument(m_39, 0);
            }
          else
            _fail(t);
          if(((a_42 != NULL) && (a_42 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_42 = ATgetArgument(t, 1);
          {
            ATerm n_39 = ATgetArgument(t, 2);
            if(match_cons(n_39, sym_CallT_3))
              {
                if(((w_41 != NULL) && (w_41 != ATgetArgument(n_39, 0))))
                  _fail(ATgetArgument(n_39, 0));
                else
                  w_41 = ATgetArgument(n_39, 0);
                {
                  ATerm p_39 = ATgetArgument(n_39, 1);
                  if(((ATgetType(p_39) != AT_LIST) || !(ATisEmpty(p_39))))
                    _fail(t);
                }
                {
                  ATerm q_39 = ATgetArgument(n_39, 2);
                  if(((ATgetType(q_39) != AT_LIST) || !(ATisEmpty(q_39))))
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
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_42), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, g_42, h_42, (ATerm) ATmakeAppl(sym_Seq_2, n_69, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(w_41), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_41), not_null(a_42), term_n_29))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(c_42)), (ATerm) ATmakeAppl(sym_Var_1, d_42))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_39 = t;
      int u_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
          a_43 = t;
          if(match_cons(t, sym_SRule_1))
            {
              b_43 = ATgetArgument(t, 0);
              t = b_43;
              if(match_cons(t, sym_Rule_3))
                {
                  x_42 = ATgetArgument(t, 0);
                  y_42 = ATgetArgument(t, 1);
                  z_42 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = a_43;
              t = f_13(x_42, y_42, z_42, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm w_19 = NULL,h_20 = NULL,m_22 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  b_43 = ATgetArgument(t, 0);
                  c_43 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_43);
              w_19 = t;
              t = c_43;
              t = desugarRule_0_0(t);
              h_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, b_43, h_20);
              m_22 = t;
              t = SSLsetAnnotations(m_22, w_19);
            }
          LocalPopChoice(u_39);
        }
      else
        {
          t = t_39;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(s_39);
    }
  else
    {
      t = r_39;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm v_39 = t;
  int x_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(x_39);
    }
  else
    {
      t = v_39;
    }
  t = repeat_2_0(u_3, _id, t);
  return(t);
}
static ATerm u_3 (ATerm t)
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
            ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,m_44 = NULL;
            g_44 = t;
            if(match_cons(t, sym_CallT_3))
              {
                h_44 = ATgetArgument(t, 0);
                i_44 = ATgetArgument(t, 1);
                m_44 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = g_44;
            t = e_13(h_44, i_44, m_44, t);
            LocalPopChoice(b_40);
          }
        else
          {
            t = a_40;
            {
              ATerm c_40 = t;
              int e_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(e_40);
                }
              else
                {
                  t = c_40;
                  {
                    ATerm f_40 = t;
                    int g_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(g_40);
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
                              int n_40 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_45 = NULL,d_45 = NULL,f_45 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      c_45 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = c_45;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      d_45 = ATgetArgument(t, 0);
                                      t = d_45;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          d_45 = ATgetArgument(t, 0);
                                          f_45 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, d_45, f_45);
                                    }
                                  LocalPopChoice(n_40);
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
                                ATerm s_40 = t;
                                int u_40 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(u_40);
                                  }
                                else
                                  {
                                    t = s_40;
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
  t = topdown_1_0(s_3, t);
  return(t);
}
static ATerm w_3 (ATerm t)
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
static ATerm x_3 (ATerm t)
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
            ATerm x_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_48;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, b_48);
  return(t);
}
static ATerm y_3 (ATerm t)
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
  ATerm d_41 = t;
  int e_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_41);
    }
  else
    {
      t = d_41;
      {
        ATerm h_41 = t;
        int k_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_41);
          }
        else
          {
            t = h_41;
            {
              ATerm l_41 = t;
              int n_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_48 = NULL,w_48 = NULL,x_48 = NULL,a_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_48 = ATgetArgument(t, 0);
                      w_48 = ATgetArgument(t, 1);
                      x_48 = ATgetArgument(t, 2);
                      a_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_48;
                  t = map_1_0(e_4, t);
                  LocalPopChoice(n_41);
                }
              else
                {
                  t = l_41;
                  {
                    ATerm p_41 = t;
                    int q_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(q_41);
                      }
                    else
                      {
                        t = p_41;
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
  ATerm j_49 = NULL;
  ATerm r_41 = t;
  int s_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_49 = ATgetArgument(t, 0);
          {
            ATerm t_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_41);
      t = j_49;
    }
  else
    {
      t = r_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_49;
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
  ATerm p_49 = NULL;
  ATerm u_41 = t;
  int v_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_49 = ATgetArgument(t, 0);
          {
            ATerm y_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_41);
      t = p_49;
    }
  else
    {
      t = u_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_49;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm t_49 = NULL;
  t_49 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, t_49);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm u_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_49);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm z_41 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_42);
    }
  else
    {
      t = z_41;
      {
        ATerm f_42 = t;
        int i_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_42);
          }
        else
          {
            t = f_42;
            {
              ATerm j_42 = t;
              int l_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_49 = ATgetArgument(t, 0);
                      y_49 = ATgetArgument(t, 1);
                      z_49 = ATgetArgument(t, 2);
                      a_50 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_49;
                  t = map_1_0(l_4, t);
                  LocalPopChoice(l_42);
                }
              else
                {
                  t = j_42;
                  {
                    ATerm m_42 = t;
                    int n_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(n_42);
                      }
                    else
                      {
                        t = m_42;
                        t = dynrule_targs_1_0(r_4, t);
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
  ATerm o_42 = t;
  int p_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_50 = ATgetArgument(t, 0);
          {
            ATerm q_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_42);
      t = m_50;
    }
  else
    {
      t = o_42;
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
static ATerm r_4 (ATerm t)
{
  t = map_1_0(t_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm u_50 = NULL;
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_50 = ATgetArgument(t, 0);
          {
            ATerm t_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_42);
      t = u_50;
    }
  else
    {
      t = r_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_50;
    }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm e_51 = NULL;
  e_51 = t;
  {
    ATerm u_42 = t;
    int v_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_51 = NULL,r_20 = NULL,a_21 = NULL,c_23 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            o_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_51);
        r_20 = t;
        t = o_51;
        t = ContextVar_0_0(t);
        a_21 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, a_21);
        c_23 = t;
        t = SSLsetAnnotations(c_23, r_20);
        LocalPopChoice(v_42);
      }
    else
      {
        t = u_42;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, e_51);
  return(t);
}
static ATerm g_13 (ATerm r_147 (ATerm), ATerm o_82, ATerm l_82, ATerm m_82, ATerm v_82, ATerm z_82, ATerm a_83, ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,l_46 = NULL,m_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL,f_47 = NULL,k_47 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_82, term_f_32);
  {
    ATerm w_42 = t;
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
        t = w_42;
      }
  }
  t = term_d_43;
  k_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_43, o_82);
  t = a_15(k_47, o_82, t);
  e_46 = t;
  t = term_e_43;
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_43, o_82);
  t = a_15(f_47, o_82, t);
  f_46 = t;
  t = new_0_0(t);
  l_46 = t;
  t = l_82;
  t = map_1_0(w_3, t);
  m_46 = t;
  t = m_82;
  t = map_1_0(x_3, t);
  r_46 = t;
  t = new_0_0(t);
  s_46 = t;
  t = v_82;
  t = dummify_0_0(t);
  u_46 = t;
  {
    ATerm f_43 = t;
    int g_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_46;
        if((v_82 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, s_46);
        LocalPopChoice(g_43);
      }
    else
      {
        t = f_43;
        t = u_46;
      }
  }
  t_46 = t;
  t = u_46;
  t = free_vars_3_0(y_3, d_4, tboundin_3_0, t);
  t = map_1_0(h_4, t);
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_82, a_83);
  t = free_vars_3_0(i_4, k_4, tboundin_3_0, t);
  t = filter_1_0(v_4, t);
  v_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_46, w_46);
  t = diff_0_0(t);
  x_46 = t;
  t = new_0_0(t);
  y_46 = t;
  t = o_82;
  t = r_147(t);
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, z_46, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_32, (ATerm) ATinsert(CheckATermList(x_46), (ATerm) ATmakeAppl(sym_Str_1, y_46)))), u_46)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, f_46, l_82, m_82, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_32, (ATerm) ATinsert(CheckATermList(x_46), (ATerm) ATmakeAppl(sym_Str_1, y_46)))), v_82)), z_82, (ATerm) ATmakeAppl(sym_Seq_2, term_q_43, a_83)))), (ATerm) ATmakeAppl(sym_RDefT_4, e_46, l_82, m_82, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_46), v_82), (ATerm)ATmakeAppl(sym_Var_1, l_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_m_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, o_82)))), t_46), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_m_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_46), m_46, r_46), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_n_43), (ATerm) ATmakeAppl(sym_Var_1, s_46)))))), (ATerm) ATmakeAppl(sym_Var_1, l_46)))))), (ATerm) ATmakeAppl(sym_RDefT_4, o_82, l_82, m_82, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_46), v_82), z_82, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_m_33, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, o_82)))), t_46), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_x_32, (ATerm) ATinsert(CheckATermList(x_46), (ATerm) ATmakeAppl(sym_Str_1, y_46)))), term_h_43))), a_83)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm s_43 = t;
  int t_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL,w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL;
      t_21 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          u_21 = ATgetArgument(t, 0);
          v_21 = ATgetArgument(t, 1);
          w_21 = ATgetArgument(t, 2);
          x_21 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = x_21;
      if(match_cons(t, sym_Rule_3))
        {
          y_21 = ATgetArgument(t, 0);
          z_21 = ATgetArgument(t, 1);
          a_22 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = t_21;
      t = g_13(y_4, u_21, v_21, w_21, y_21, z_21, a_22, t);
      LocalPopChoice(t_43);
    }
  else
    {
      t = s_43;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(z_4, t);
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm q_22 = NULL;
  q_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_22))));
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm r_22 = NULL;
  r_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_y_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_22))));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_38;
  return(t);
}
static ATerm b_5 (ATerm t)
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
static ATerm c_5 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_43 = ATgetArgument(t, 0);
      if(match_cons(z_43, sym__2))
        {
          u_22 = ATgetArgument(z_43, 0);
          v_22 = ATgetArgument(z_43, 1);
        }
      else
        _fail(t);
      {
        ATerm a_44 = ATgetArgument(t, 1);
        if(match_cons(a_44, sym__2))
          {
            w_22 = ATgetArgument(a_44, 0);
            x_22 = ATgetArgument(a_44, 1);
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
static ATerm e_5 (ATerm t)
{
  ATerm b_44 = t;
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,v_24 = NULL,w_24 = NULL,x_24 = NULL;
      o_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          t_23 = ATgetArgument(t, 0);
          u_23 = ATgetArgument(t, 1);
          v_23 = ATgetArgument(t, 2);
          w_23 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = w_23;
      if(match_cons(t, sym_Rule_3))
        {
          v_24 = ATgetArgument(t, 0);
          w_24 = ATgetArgument(t, 1);
          x_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = o_23;
      t = g_13(h_5, t_23, u_23, v_23, v_24, w_24, x_24, t);
      LocalPopChoice(d_44);
    }
  else
    {
      t = b_44;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(i_5, t);
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_25))));
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm h_25 = NULL;
  h_25 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, h_25))));
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_38;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_25 = ATgetFirst((ATermList) t);
      j_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_25, j_25);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_44 = ATgetArgument(t, 0);
      if(match_cons(n_44, sym__2))
        {
          k_25 = ATgetArgument(n_44, 0);
          l_25 = ATgetArgument(n_44, 1);
        }
      else
        _fail(t);
      {
        ATerm o_44 = ATgetArgument(t, 1);
        if(match_cons(o_44, sym__2))
          {
            m_25 = ATgetArgument(o_44, 0);
            n_25 = ATgetArgument(o_44, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_25), k_25), (ATerm) ATinsert(CheckATermList(n_25), l_25));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(u_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm j_57 = NULL;
  j_57 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, j_57))));
  return(t);
}
static ATerm w_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_38;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm s_57 = NULL,d_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_57 = ATgetFirst((ATermList) t);
      d_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_57, d_58);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm o_58 = NULL,v_58 = NULL,c_59 = NULL,j_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_44 = ATgetArgument(t, 0);
      if(match_cons(r_44, sym__2))
        {
          o_58 = ATgetArgument(r_44, 0);
          v_58 = ATgetArgument(r_44, 1);
        }
      else
        _fail(t);
      {
        ATerm t_44 = ATgetArgument(t, 1);
        if(match_cons(t_44, sym__2))
          {
            c_59 = ATgetArgument(t_44, 0);
            j_59 = ATgetArgument(t_44, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_59), o_58), (ATerm) ATinsert(CheckATermList(j_59), v_58));
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(a_6, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm y_59 = NULL;
  y_59 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_44, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_59))));
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_38;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm d_60 = NULL,i_60 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_60 = ATgetFirst((ATermList) t);
      i_60 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_60, i_60);
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL,m_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_44 = ATgetArgument(t, 0);
      if(match_cons(x_44, sym__2))
        {
          j_60 = ATgetArgument(x_44, 0);
          k_60 = ATgetArgument(x_44, 1);
        }
      else
        _fail(t);
      {
        ATerm b_45 = ATgetArgument(t, 1);
        if(match_cons(b_45, sym__2))
          {
            l_60 = ATgetArgument(b_45, 0);
            m_60 = ATgetArgument(b_45, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_60), j_60), (ATerm) ATinsert(CheckATermList(m_60), k_60));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL;
  w_56 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      x_56 = ATgetArgument(t, 0);
      {
        ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL,s_21 = NULL,h_23 = NULL;
        t = x_56;
        t = map_1_0(x_4, t);
        t = genzip_4_0(a_5, b_5, c_5, _id, t);
        s_21 = t;
        if(match_cons(t, sym__2))
          {
            m_21 = ATgetArgument(t, 0);
            n_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_21);
        l_21 = t;
        t = n_21;
        t = concat_0_0(t);
        o_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_21, o_21);
        h_23 = t;
        t = SSLsetAnnotations(h_23, l_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          x_56 = ATgetArgument(t, 0);
          {
            ATerm g_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,i_23 = NULL;
            t = x_56;
            t = map_1_0(e_5, t);
            t = genzip_4_0(j_5, l_5, m_5, _id, t);
            n_23 = t;
            if(match_cons(t, sym__2))
              {
                k_23 = ATgetArgument(t, 0);
                l_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(n_23);
            g_23 = t;
            t = l_23;
            t = concat_0_0(t);
            m_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, k_23, m_23);
            i_23 = t;
            t = SSLsetAnnotations(i_23, g_23);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              x_56 = ATgetArgument(t, 0);
              t = x_56;
              t = map_1_0(q_5, t);
              t = genzip_4_0(w_5, x_5, y_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  x_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = x_56;
              t = map_1_0(z_5, t);
              t = genzip_4_0(b_6, c_6, d_6, _id, t);
            }
        }
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_e_45;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm t_147 (ATerm), ATerm t)
{
  static ATerm c_61 (ATerm t)
  {
    static ATerm f_6 (ATerm t)
    {
      ATerm g_45 = t;
      int h_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_147(t);
          LocalPopChoice(h_45);
        }
      else
        {
          t = g_45;
          {
            ATerm x_60 = NULL,y_60 = NULL,b_61 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                x_60 = ATgetArgument(t, 0);
                y_60 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, x_60, y_60);
            {
              static ATerm k_6 (ATerm t)
              {
                t = x_60;
                t = DeclareContextVars_0_0(t);
                t = y_60;
                t = c_61(t);
                if(((b_61 != NULL) && (b_61 != t)))
                  _fail(t);
                else
                  b_61 = t;
                return(t);
              }
              t = scope_2_0(h_6, k_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, x_60, not_null(b_61));
          }
        }
      return(t);
    }
    t = oncetd_1_0(f_6, t);
    return(t);
  }
  t = c_61(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  t = term_e_45;
  return(t);
}
static ATerm i_13 (ATerm o_83, ATerm n_83, ATerm t)
{
  ATerm d_61 = NULL,f_61 = NULL,j_61 = NULL;
  static ATerm o_6 (ATerm t)
  {
    t = o_83;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = o_83;
    {
      static ATerm p_6 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((f_61 != NULL) && (f_61 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              f_61 = ATgetArgument(t, 0);
            if(((d_61 != NULL) && (d_61 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              d_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, f_61);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(p_6, t);
    }
    if(((j_61 != NULL) && (j_61 != t)))
      _fail(t);
    else
      j_61 = t;
    return(t);
  }
  t = scope_2_0(n_6, o_6, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_61)), not_null(j_61)), n_83);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm q_61 = NULL,r_61 = NULL,x_61 = NULL,y_61 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      x_61 = ATgetArgument(t, 0);
      y_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_61;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_61 = ATgetFirst((ATermList) t);
      r_61 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_j_45, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, r_61, y_61)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_61))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_61;
    }
  return(t);
}
static ATerm g_63 (ATerm g_62, ATerm t)
{
  t = SSL_is_string(g_62);
  return(t);
}
static ATerm h_63 (ATerm i_62, ATerm t)
{
  ATerm j_62 = NULL,o_62 = NULL,r_62 = NULL;
  t = term_k_45;
  o_62 = t;
  t = (ATerm) ATinsert(ATempty, term_l_45);
  r_62 = t;
  t = SSL_printnl(o_62, r_62);
  t = i_62;
  t = debug_1_0(q_6, t);
  t = term_m_45;
  j_62 = t;
  t = SSL_exit(j_62);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_n_45;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm s_62 = NULL,x_62 = NULL;
  x_62 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      s_62 = ATgetArgument(t, 0);
      {
        ATerm o_45 = t;
        int p_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_63(x_62, t);
            LocalPopChoice(p_45);
          }
        else
          {
            t = o_45;
            t = s_62;
          }
      }
    }
  else
    {
      ATerm q_45 = t;
      int r_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_63(x_62, t);
          LocalPopChoice(r_45);
        }
      else
        {
          t = q_45;
          t = h_63(x_62, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm u_63 = NULL,y_63 = NULL,z_63 = NULL,b_64 = NULL,g_64 = NULL,h_64 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      u_63 = ATgetArgument(t, 0);
      h_64 = ATgetArgument(t, 1);
      t = u_63;
      if(match_cons(t, sym_DynRuleId_1))
        {
          y_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_63;
      if(match_cons(t, sym_RDecT_3))
        {
          z_63 = ATgetArgument(t, 0);
          b_64 = ATgetArgument(t, 1);
          g_64 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, z_63, b_64, g_64, (ATerm) ATmakeAppl(sym_Rule_3, h_64, term_f_32, term_n_29));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          u_63 = ATgetArgument(t, 0);
          h_64 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_63;
      if(match_cons(t, sym_DynRuleId_1))
        {
          y_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_63;
      if(match_cons(t, sym_RDecT_3))
        {
          z_63 = ATgetArgument(t, 0);
          b_64 = ATgetArgument(t, 1);
          g_64 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, z_63, b_64, g_64, h_64);
    }
  return(t);
}
static ATerm i_66 (ATerm h_65, ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL,l_65 = NULL,t_65 = NULL;
  t = h_65;
  if(match_cons(t, sym_GenDynRules_1))
    {
      l_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_65;
  t = filter_1_0(r_6, t);
  t_65 = t;
  t = h_65;
  if(match_cons(t, sym_GenDynRules_1))
    {
      j_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_65;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  k_65 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, t_65), (ATerm) ATmakeAppl(sym_DynamicRules_1, k_65));
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm s_45 = ATgetArgument(t, 0);
      if(match_cons(s_45, sym_DynRuleId_1))
        {
          ATerm u_45 = ATgetArgument(s_45, 0);
          if(match_cons(u_45, sym_RDecT_3))
            {
              x_65 = ATgetArgument(u_45, 0);
              y_65 = ATgetArgument(u_45, 1);
              z_65 = ATgetArgument(u_45, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      a_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, x_65, y_65, z_65, a_66);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm z_45 = ATgetArgument(t, 0);
      ATerm a_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL;
  g_66 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      f_66 = ATgetArgument(t, 0);
      {
        ATerm b_46 = t;
        int c_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_25 = NULL;
            t = f_66;
            {
              ATerm d_46 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(s_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = d_46;
                }
            }
            t = f_66;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            u_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, u_25);
            LocalPopChoice(c_46);
          }
        else
          {
            t = b_46;
            t = i_66(g_66, t);
          }
      }
    }
  else
    {
      t = i_66(g_66, t);
    }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm g_46 = t;
  int i_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_66 = NULL;
      k_66 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm j_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_66;
      LocalPopChoice(i_46);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = g_46;
      {
        ATerm k_46 = t;
        int n_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_66 = NULL;
            n_66 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm o_46 = ATgetArgument(t, 0);
                ATerm a_47 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_66;
            LocalPopChoice(n_46);
            {
              ATerm o_66 = NULL,p_66 = NULL,r_66 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  o_66 = ATgetArgument(t, 0);
                  p_66 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_66;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              r_66 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, r_66, p_66);
            }
          }
        else
          {
            t = k_46;
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
  ATerm q_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,q_23 = NULL;
  x_67 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_67);
  q_67 = t;
  t = v_67;
  t = topdown_1_0(z_6, t);
  t = listtd_1_0(a_7, t);
  w_67 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, w_67);
  q_23 = t;
  t = SSLsetAnnotations(q_23, q_67);
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
  ATerm d_47 = t;
  int e_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(e_47);
    }
  else
    {
      t = d_47;
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
  ATerm a_68 = NULL,b_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_68 = ATgetFirst((ATermList) t);
      b_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_13(a_68, b_68, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL,j_67 = NULL,s_23 = NULL,r_23 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  j_67 = t;
  if(match_cons(t, sym_Specification_1))
    {
      d_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_67);
  c_67 = t;
  t = d_67;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_67 = ATgetFirst((ATermList) t);
      g_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_67);
  e_67 = t;
  t = g_67;
  t = Cons_2_0(_id, v_6, t);
  h_67 = t;
  t = (ATerm) ATinsert(CheckATermList(h_67), f_67);
  r_23 = t;
  t = SSLsetAnnotations(r_23, e_67);
  i_67 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_67);
  s_23 = t;
  t = SSLsetAnnotations(s_23, c_67);
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
      ATerm m_68 = NULL,n_68 = NULL,p_68 = NULL,u_68 = NULL,a_24 = NULL;
      u_68 = t;
      if(match_cons(t, sym__2))
        {
          n_68 = ATgetArgument(t, 0);
          p_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(u_68);
      m_68 = t;
      t = n_68;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = n_68;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm i_47 = ATgetFirst((ATermList) t);
              ATerm j_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_68;
        }
      t = (ATerm) ATmakeAppl(sym__2, n_68, p_68);
      a_24 = t;
      t = SSLsetAnnotations(a_24, m_68);
      LocalPopChoice(h_47);
      t = conc_0_0(t);
    }
  else
    {
      t = g_47;
      {
        ATerm y_68 = NULL,z_68 = NULL;
        if(match_cons(t, sym__2))
          {
            y_68 = ATgetArgument(t, 0);
            z_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(z_68), y_68);
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
      ATerm c_69 = NULL;
      c_69 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = c_69;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm p_47 = ATgetFirst((ATermList) t);
              ATerm r_47 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = c_69;
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
  t = term_s_47;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  t = term_s_47;
  return(t);
}
ATerm next_counter_0_0 (ATerm t)
{
  ATerm w_69 = NULL,b_70 = NULL,e_70 = NULL,f_70 = NULL,i_70 = NULL;
  w_69 = t;
  {
    ATerm t_47 = t;
    int u_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_70 = NULL,f_26 = NULL;
        t = term_s_47;
        f_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_47, w_69);
        t = p_14(f_26, w_69, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm v_47 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_47) != ATmakeSymbol("h_0", 0, ATtrue)))
              _fail(t);
            j_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_70;
        LocalPopChoice(u_47);
      }
    else
      {
        t = t_47;
        {
          ATerm k_70 = NULL;
          t = term_y_47;
          k_70 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_69, term_y_47);
          t = q_14(i_7, w_69, k_70, t);
          t = (ATerm) ATmakeAppl(sym__2, w_69, term_x_47);
        }
      }
  }
  f_70 = t;
  t = term_m_45;
  i_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_70, term_m_45);
  t = d_15(f_70, i_70, t);
  b_70 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_w_47, b_70);
  e_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_69, (ATerm) ATmakeAppl(sym_Defined_2, term_w_47, b_70));
  t = q_14(j_7, w_69, e_70, t);
  t = b_70;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_z_47;
  return(t);
}
ATerm NewNumberedVar_0_0 (ATerm t)
{
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,p_71 = NULL;
  l_71 = t;
  t = term_a_48;
  t = next_counter_0_0(t);
  k_71 = t;
  t = SSL_int_to_string(k_71);
  n_71 = t;
  t = term_c_48;
  p_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_48, n_71);
  t = a_15(p_71, n_71, t);
  m_71 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_48, m_71);
  o_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_71, (ATerm) ATmakeAppl(sym_Defined_2, term_d_48, m_71));
  t = q_14(k_7, l_71, o_71, t);
  t = m_71;
  return(t);
}
ATerm RenameVarTerm_2_0 (ATerm x_147 (ATerm), ATerm y_147 (ATerm), ATerm t)
{
  ATerm a_91 = NULL,b_91 = NULL,c_91 = NULL,d_91 = NULL,e_91 = NULL;
  c_91 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_91 = ATgetArgument(t, 0);
      {
        ATerm e_48 = t;
        int f_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,h_27 = NULL,n_27 = NULL,d_24 = NULL,c_24 = NULL;
            t = SSLgetAnnotations(c_91);
            v_26 = t;
            t = d_91;
            if(match_cons(t, sym_ListVar_1))
              {
                a_27 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(d_91);
            z_26 = t;
            t = a_27;
            t = x_147(t);
            h_27 = t;
            t = term_g_48;
            n_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_27, term_g_48);
            t = a_15(h_27, n_27, t);
            b_27 = t;
            t = (ATerm) ATmakeAppl(sym_ListVar_1, b_27);
            c_24 = t;
            t = SSLsetAnnotations(c_24, z_26);
            c_27 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, c_27);
            d_24 = t;
            t = SSLsetAnnotations(d_24, v_26);
            LocalPopChoice(f_48);
          }
        else
          {
            t = e_48;
            {
              ATerm t_27 = NULL,v_27 = NULL,e_24 = NULL;
              t = SSLgetAnnotations(c_91);
              t_27 = t;
              t = d_91;
              t = x_147(t);
              v_27 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, v_27);
              e_24 = t;
              t = SSLsetAnnotations(e_24, t_27);
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_SVar_1))
        {
          d_91 = ATgetArgument(t, 0);
          {
            ATerm m_28 = NULL,o_28 = NULL,f_24 = NULL;
            t = SSLgetAnnotations(c_91);
            m_28 = t;
            t = d_91;
            t = x_147(t);
            o_28 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, o_28);
            f_24 = t;
            t = SSLsetAnnotations(f_24, m_28);
          }
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              d_91 = ATgetArgument(t, 0);
              e_91 = ATgetArgument(t, 1);
              {
                ATerm x_28 = NULL,k_29 = NULL,g_24 = NULL;
                t = SSLgetAnnotations(c_91);
                x_28 = t;
                t = d_91;
                t = x_147(t);
                k_29 = t;
                t = (ATerm) ATmakeAppl(sym_VarDec_2, k_29, e_91);
                g_24 = t;
                t = SSLsetAnnotations(g_24, x_28);
              }
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  d_91 = ATgetArgument(t, 0);
                  {
                    ATerm y_29 = NULL,a_30 = NULL,h_24 = NULL;
                    t = SSLgetAnnotations(c_91);
                    y_29 = t;
                    t = d_91;
                    t = x_147(t);
                    a_30 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_30);
                    h_24 = t;
                    t = SSLsetAnnotations(h_24, y_29);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      d_91 = ATgetArgument(t, 0);
                      e_91 = ATgetArgument(t, 1);
                      {
                        ATerm n_30 = NULL,y_30 = NULL,b_31 = NULL,i_24 = NULL;
                        t = SSLgetAnnotations(c_91);
                        n_30 = t;
                        t = d_91;
                        t = x_147(t);
                        y_30 = t;
                        t = e_91;
                        t = y_147(t);
                        b_31 = t;
                        t = (ATerm) ATmakeAppl(sym_Rec_2, y_30, b_31);
                        i_24 = t;
                        t = SSLsetAnnotations(i_24, n_30);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefNoArgs_2))
                        {
                          d_91 = ATgetArgument(t, 0);
                          e_91 = ATgetArgument(t, 1);
                          {
                            ATerm p_31 = NULL,u_31 = NULL,v_31 = NULL,j_24 = NULL;
                            t = SSLgetAnnotations(c_91);
                            p_31 = t;
                            t = d_91;
                            t = x_147(t);
                            u_31 = t;
                            t = e_91;
                            t = y_147(t);
                            v_31 = t;
                            t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, u_31, v_31);
                            j_24 = t;
                            t = SSLsetAnnotations(j_24, p_31);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              d_91 = ATgetArgument(t, 0);
                              e_91 = ATgetArgument(t, 1);
                              a_91 = ATgetArgument(t, 2);
                              {
                                ATerm s_32 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,k_24 = NULL;
                                t = SSLgetAnnotations(c_91);
                                s_32 = t;
                                t = d_91;
                                t = x_147(t);
                                c_33 = t;
                                t = e_91;
                                t = y_147(t);
                                d_33 = t;
                                t = a_91;
                                t = y_147(t);
                                e_33 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, c_33, d_33, e_33);
                                k_24 = t;
                                t = SSLsetAnnotations(k_24, s_32);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  d_91 = ATgetArgument(t, 0);
                                  e_91 = ATgetArgument(t, 1);
                                  a_91 = ATgetArgument(t, 2);
                                  b_91 = ATgetArgument(t, 3);
                                  {
                                    ATerm h_34 = NULL,p_34 = NULL,q_34 = NULL,s_34 = NULL,t_34 = NULL,l_24 = NULL;
                                    t = SSLgetAnnotations(c_91);
                                    h_34 = t;
                                    t = d_91;
                                    t = x_147(t);
                                    p_34 = t;
                                    t = e_91;
                                    t = y_147(t);
                                    q_34 = t;
                                    t = a_91;
                                    t = y_147(t);
                                    s_34 = t;
                                    t = b_91;
                                    t = y_147(t);
                                    t_34 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, p_34, q_34, s_34, t_34);
                                    l_24 = t;
                                    t = SSLsetAnnotations(l_24, h_34);
                                  }
                                }
                              else
                                {
                                  ATerm n_35 = NULL,w_35 = NULL,x_35 = NULL,m_24 = NULL;
                                  if(match_cons(t, sym_Scope_2))
                                    {
                                      d_91 = ATgetArgument(t, 0);
                                      e_91 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(c_91);
                                  n_35 = t;
                                  t = d_91;
                                  t = map_1_0(x_147, t);
                                  w_35 = t;
                                  t = e_91;
                                  t = y_147(t);
                                  x_35 = t;
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, w_35, x_35);
                                  m_24 = t;
                                  t = SSLsetAnnotations(m_24, n_35);
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
  t = term_z_47;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  t = term_s_47;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm i_48 = t;
  int j_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_92 = NULL,t_36 = NULL,d_37 = NULL;
      j_92 = t;
      t = term_z_47;
      d_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_z_47, j_92);
      t = p_14(d_37, j_92, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm m_48 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) m_48) != ATmakeSymbol("o_0", 0, ATtrue)))
            _fail(t);
          t_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_36;
      LocalPopChoice(j_48);
    }
  else
    {
      t = i_48;
      t = NewNumberedVar_0_0(t);
    }
  return(t);
}
ATerm dr_rename_vars_0_0 (ATerm t)
{
  static ATerm n_7 (ATerm t)
  {
    ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL;
    static ATerm m_92 (ATerm t)
    {
      ATerm n_48 = t;
      int o_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RenameVarTerm_2_0(q_7, m_92, t);
          LocalPopChoice(o_48);
        }
      else
        {
          t = n_48;
          t = SRTS_all(m_92, t);
        }
      return(t);
    }
    x_91 = t;
    t = term_a_48;
    y_91 = t;
    t = term_y_47;
    z_91 = t;
    t = term_s_48;
    t = q_14(p_7, y_91, z_91, t);
    t = x_91;
    t = m_92(t);
    return(t);
  }
  t = scope_2_0(l_7, n_7, t);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm w_94 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_94);
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm b_49 = t;
  int d_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_49);
    }
  else
    {
      t = b_49;
      {
        ATerm e_49 = t;
        int f_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_49);
          }
        else
          {
            t = e_49;
            {
              ATerm g_49 = t;
              int i_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL,b_95 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_94 = ATgetArgument(t, 0);
                      z_94 = ATgetArgument(t, 1);
                      a_95 = ATgetArgument(t, 2);
                      b_95 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_95;
                  t = map_1_0(w_7, t);
                  LocalPopChoice(i_49);
                }
              else
                {
                  t = g_49;
                  {
                    ATerm k_49 = t;
                    int l_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_49);
                      }
                    else
                      {
                        t = k_49;
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
  ATerm i_95 = NULL;
  ATerm m_49 = t;
  int n_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_95 = ATgetArgument(t, 0);
          {
            ATerm o_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_49);
      t = i_95;
    }
  else
    {
      t = m_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_95;
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
  ATerm n_95 = NULL;
  ATerm q_49 = t;
  int r_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_95 = ATgetArgument(t, 0);
          {
            ATerm s_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_49);
      t = n_95;
    }
  else
    {
      t = q_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_95;
    }
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm q_95 = NULL;
  q_95 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_95);
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm r_95 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_95);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm v_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_49);
    }
  else
    {
      t = v_49;
      {
        ATerm b_50 = t;
        int c_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(c_50);
          }
        else
          {
            t = b_50;
            {
              ATerm d_50 = t;
              int e_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_95 = NULL,u_95 = NULL,v_95 = NULL,w_95 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_95 = ATgetArgument(t, 0);
                      u_95 = ATgetArgument(t, 1);
                      v_95 = ATgetArgument(t, 2);
                      w_95 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_95;
                  t = map_1_0(c_8, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(g_50);
                      }
                    else
                      {
                        t = f_50;
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
  ATerm d_96 = NULL;
  ATerm h_50 = t;
  int i_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_96 = ATgetArgument(t, 0);
          {
            ATerm j_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_50);
      t = d_96;
    }
  else
    {
      t = h_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_96;
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
  ATerm i_96 = NULL;
  ATerm k_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_96 = ATgetArgument(t, 0);
          {
            ATerm n_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_50);
      t = i_96;
    }
  else
    {
      t = k_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_96;
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  ATerm l_96 = NULL;
  l_96 = t;
  {
    ATerm o_50 = t;
    int p_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_96 = NULL,g_37 = NULL,k_37 = NULL,d_26 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            r_96 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_96);
        g_37 = t;
        t = r_96;
        t = ContextVar_0_0(t);
        k_37 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, k_37);
        d_26 = t;
        t = SSLsetAnnotations(d_26, g_37);
        LocalPopChoice(p_50);
      }
    else
      {
        t = o_50;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, l_96);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  t = term_x_47;
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm s_96 = NULL,t_96 = NULL;
  if(match_cons(t, sym__2))
    {
      s_96 = ATgetArgument(t, 0);
      t_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_15(s_96, t_96, t);
  return(t);
}
static ATerm l_8 (ATerm t)
{
  t = term_m_45;
  return(t);
}
static ATerm n_8 (ATerm t)
{
  t = term_x_47;
  return(t);
}
static ATerm o_8 (ATerm t)
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
static ATerm p_8 (ATerm t)
{
  t = term_m_45;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  t = term_q_50;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm c_97 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_97);
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm r_50 = t;
  int s_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_50);
    }
  else
    {
      t = r_50;
      {
        ATerm t_50 = t;
        int v_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_50);
          }
        else
          {
            t = t_50;
            {
              ATerm y_50 = t;
              int a_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_97 = ATgetArgument(t, 0);
                      f_97 = ATgetArgument(t, 1);
                      g_97 = ATgetArgument(t, 2);
                      h_97 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_97;
                  t = map_1_0(x_8, t);
                  LocalPopChoice(a_51);
                }
              else
                {
                  t = y_50;
                  {
                    ATerm b_51 = t;
                    int f_51 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_51);
                      }
                    else
                      {
                        t = b_51;
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
  ATerm o_97 = NULL;
  ATerm k_51 = t;
  int l_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_97 = ATgetArgument(t, 0);
          {
            ATerm m_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_51);
      t = o_97;
    }
  else
    {
      t = k_51;
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
static ATerm a_9 (ATerm t)
{
  t = map_1_0(b_9, t);
  return(t);
}
static ATerm b_9 (ATerm t)
{
  ATerm t_97 = NULL;
  ATerm n_51 = t;
  int p_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_97 = ATgetArgument(t, 0);
          {
            ATerm r_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_51);
      t = t_97;
    }
  else
    {
      t = n_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_97;
    }
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm a_98 = NULL,b_98 = NULL,c_98 = NULL;
  c_98 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      b_98 = ATgetArgument(t, 0);
      t = b_98;
    }
  else
    {
      t = c_98;
    }
  a_98 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_98);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  t = term_s_51;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  t = term_x_47;
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm g_98 = NULL,h_98 = NULL;
  if(match_cons(t, sym__2))
    {
      g_98 = ATgetArgument(t, 0);
      h_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_15(g_98, h_98, t);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_m_45;
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_x_47;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm i_98 = NULL,j_98 = NULL;
  if(match_cons(t, sym__2))
    {
      i_98 = ATgetArgument(t, 0);
      j_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_15(i_98, j_98, t);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  t = term_m_45;
  return(t);
}
static ATerm z_9 (ATerm t)
{
  t = term_t_51;
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm v_98 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_98 = ATgetArgument(t, 0);
      t = v_98;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_98 = ATgetArgument(t, 0);
          {
            ATerm u_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_98;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_98), (ATerm) ATempty);
  return(t);
}
static ATerm b_10 (ATerm t)
{
  ATerm b_99 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_99 = ATgetArgument(t, 0);
      t = b_99;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_99 = ATgetArgument(t, 0);
          {
            ATerm v_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_99;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, b_99);
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm f_99 = NULL;
  f_99 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_99);
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = term_w_51;
  return(t);
}
static ATerm e_10 (ATerm t)
{
  t = term_x_51;
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm z_147 (ATerm), ATerm t)
{
  ATerm s_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL,u_94 = NULL,v_94 = NULL;
  v_93 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm y_51 = ATgetArgument(t, 0);
      if(match_cons(y_51, sym_DynRuleId_1))
        {
          ATerm a_52 = ATgetArgument(y_51, 0);
          if(match_cons(a_52, sym_RDecT_3))
            {
              n_94 = ATgetArgument(a_52, 0);
              d_94 = ATgetArgument(a_52, 1);
              e_94 = ATgetArgument(a_52, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm z_51 = ATgetArgument(t, 1);
        if(match_cons(z_51, sym_Rule_3))
          {
            j_94 = ATgetArgument(z_51, 0);
            y_93 = ATgetArgument(z_51, 1);
            z_93 = ATgetArgument(z_51, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_94;
  t = dummify_0_0(t);
  q_94 = t;
  t = free_vars_3_0(s_7, t_7, tboundin_3_0, t);
  t = map_1_0(z_7, t);
  u_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_93, z_93);
  t = free_vars_3_0(a_8, b_8, tboundin_3_0, t);
  t = filter_1_0(g_8, t);
  s_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_93, u_93);
  t = diff_0_0(t);
  x_93 = t;
  t = d_94;
  t = foldr_3_0(h_8, k_8, l_8, t);
  u_94 = t;
  t = e_94;
  t = foldr_3_0(n_8, o_8, p_8, t);
  v_94 = t;
  t = v_93;
  t = dr_rename_vars_0_0(t);
  b_94 = t;
  {
    ATerm b_52 = t;
    int c_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_96 = NULL,q_37 = NULL;
        t = term_s_51;
        q_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_s_51, b_94);
        t = p_14(q_37, b_94, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm d_52 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_52) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            w_96 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_96;
        c_94 = t;
        t = b_94;
        LocalPopChoice(c_52);
        t = (ATerm) ATempty;
        a_94 = t;
        t = (ATerm) ATempty;
        p_94 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_94, b_94);
        t = debug_1_0(q_8, t);
      }
    else
      {
        t = b_52;
        {
          ATerm x_96 = NULL,y_96 = NULL,z_96 = NULL,a_97 = NULL,b_97 = NULL;
          t = term_e_43;
          b_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_43, n_94);
          t = a_15(b_97, n_94, t);
          k_94 = t;
          t = new_0_0(t);
          c_94 = t;
          t = new_0_0(t);
          i_94 = t;
          t = j_94;
          t = free_vars_3_0(t_8, u_8, tboundin_3_0, t);
          g_94 = t;
          t = map_1_0(d_9, t);
          z_96 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_94))), z_96), e_94);
          t = concat_0_0(t);
          w_93 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, k_94, d_94, w_93, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(x_93), (ATerm) ATmakeAppl(sym_Str_1, c_94))), y_93, (ATerm) ATmakeAppl(sym_BA_2, z_93, (ATerm) ATmakeAppl(sym_Var_1, i_94)))));
          a_94 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_52, c_94);
          a_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_94, (ATerm) ATmakeAppl(sym_Defined_2, term_e_52, c_94));
          t = q_14(f_9, b_94, a_97, t);
          t = d_94;
          t = foldr_3_0(l_9, s_9, u_9, t);
          x_96 = t;
          t = e_94;
          t = foldr_3_0(w_9, x_9, y_9, t);
          y_96 = t;
          t = x_96;
          if((u_94 != t))
            {
              _fail(t);
            }
          t = y_96;
          if((v_94 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, n_94, (ATerm) ATmakeAppl(sym__2, x_96, y_96));
          {
            ATerm f_52 = t;
            int h_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_37 = NULL,u_37 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_94, (ATerm) ATmakeAppl(sym__2, x_96, y_96)), q_94);
                t_37 = t;
                t = term_w_51;
                u_37 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_w_51, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_94, (ATerm) ATmakeAppl(sym__2, x_96, y_96)), q_94));
                t = p_14(u_37, t_37, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm i_52 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) i_52) != ATmakeSymbol("s_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, n_94, (ATerm) ATmakeAppl(sym__2, x_96, y_96));
                LocalPopChoice(h_52);
                t = (ATerm) ATempty;
                p_94 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_94, (ATerm) ATmakeAppl(sym__2, x_96, y_96)), q_94);
                t = debug_1_0(z_9, t);
              }
            else
              {
                t = f_52;
                {
                  ATerm k_98 = NULL,l_98 = NULL,m_98 = NULL,o_98 = NULL;
                  t = term_d_43;
                  o_98 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_d_43, n_94);
                  t = a_15(o_98, n_94, t);
                  h_94 = t;
                  t = d_94;
                  t = map_1_0(a_10, t);
                  l_94 = t;
                  t = e_94;
                  t = map_1_0(b_10, t);
                  f_94 = t;
                  t = g_94;
                  t = map_1_0(c_10, t);
                  k_98 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_94))), k_98), f_94);
                  t = concat_0_0(t);
                  m_94 = t;
                  t = q_94;
                  {
                    ATerm j_52 = t;
                    int k_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = q_94;
                        if((j_94 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, i_94);
                        LocalPopChoice(k_52);
                      }
                    else
                      {
                        t = j_52;
                        t = q_94;
                      }
                  }
                  o_94 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, h_94, d_94, e_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, i_94), j_94), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_m_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_94), l_94, m_94))), term_p_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_r_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, o_94), (ATerm) ATmakeAppl(sym_Str_1, n_94))), term_s_52), term_p_52)))), (ATerm) ATmakeAppl(sym_RDefT_4, n_94, d_94, e_94, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, i_94), j_94), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_m_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, k_94), l_94, m_94))), term_p_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_r_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, o_94), (ATerm) ATmakeAppl(sym_Str_1, n_94))), term_p_52))));
                  p_94 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_94, (ATerm) ATmakeAppl(sym__2, x_96, y_96)), q_94);
                  l_98 = t;
                  t = term_u_52;
                  m_98 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_94, (ATerm) ATmakeAppl(sym__2, x_96, y_96)), q_94), term_u_52);
                  t = q_14(d_10, l_98, m_98, t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_94, (ATerm) ATmakeAppl(sym__2, x_96, y_96)), q_94);
                  t = debug_1_0(e_10, t);
                }
              }
          }
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, q_94, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(x_93), (ATerm) ATmakeAppl(sym_Str_1, c_94))));
  t = z_147(t);
  r_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_94, p_94);
  t = conc_0_0(t);
  s_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, r_94), s_94);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm a_100 = NULL,f_100 = NULL,g_100 = NULL,h_100 = NULL,i_100 = NULL,j_100 = NULL,k_100 = NULL,n_100 = NULL;
  j_100 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      k_100 = ATgetArgument(t, 0);
      n_100 = ATgetArgument(t, 1);
      t = k_100;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          f_100 = ATgetArgument(t, 0);
          a_100 = ATgetArgument(t, 1);
          {
            static ATerm f_10 (ATerm t)
            {
              ATerm a_101 = NULL,b_101 = NULL;
              a_101 = t;
              t = SSL_explode_term(a_101);
              if(match_cons(t, sym__2))
                {
                  ATerm v_52 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) v_52) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm w_52 = ATgetArgument(t, 1);
                    if(((ATgetType(w_52) == AT_LIST) && !(ATisEmpty(w_52))))
                      {
                        b_101 = ATgetFirst((ATermList) w_52);
                        {
                          ATerm x_52 = (ATerm) ATgetNext((ATermList) w_52);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_101), a_100), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_100))));
              return(t);
            }
            t = f_100;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((g_100 != NULL) && (g_100 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_100 = ATgetArgument(t, 0);
                h_100 = ATgetArgument(t, 1);
                i_100 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, g_100, h_100, i_100)), (ATerm) ATmakeAppl(sym_Rule_3, n_100, term_a_53, term_n_29));
            t = SplitDynamicRule_1_0(f_10, t);
          }
        }
      else
        {
          static ATerm g_10 (ATerm t)
          {
            ATerm i_101 = NULL,j_101 = NULL;
            i_101 = t;
            t = SSL_explode_term(i_101);
            if(match_cons(t, sym__2))
              {
                ATerm d_53 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) d_53) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm e_53 = ATgetArgument(t, 1);
                  if(((ATgetType(e_53) == AT_LIST) && !(ATisEmpty(e_53))))
                    {
                      j_101 = ATgetFirst((ATermList) e_53);
                      {
                        ATerm f_53 = (ATerm) ATgetNext((ATermList) e_53);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, j_101), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_100))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              f_100 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_100;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((g_100 != NULL) && (g_100 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                g_100 = ATgetArgument(t, 0);
              h_100 = ATgetArgument(t, 1);
              i_100 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, g_100, h_100, i_100)), (ATerm) ATmakeAppl(sym_Rule_3, n_100, term_a_53, term_n_29));
          t = SplitDynamicRule_1_0(g_10, t);
        }
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          k_100 = ATgetArgument(t, 0);
          n_100 = ATgetArgument(t, 1);
          t = k_100;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              f_100 = ATgetArgument(t, 0);
              a_100 = ATgetArgument(t, 1);
              {
                static ATerm h_10 (ATerm t)
                {
                  ATerm x_101 = NULL,y_101 = NULL,w_37 = NULL;
                  x_101 = t;
                  t = SSL_explode_term(x_101);
                  if(match_cons(t, sym__2))
                    {
                      ATerm g_53 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) g_53) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm h_53 = ATgetArgument(t, 1);
                        if(((ATgetType(h_53) == AT_LIST) && !(ATisEmpty(h_53))))
                          {
                            y_101 = ATgetFirst((ATermList) h_53);
                            {
                              ATerm i_53 = (ATerm) ATgetNext((ATermList) h_53);
                            }
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = SSL_explode_term(x_101);
                  if(match_cons(t, sym__2))
                    {
                      ATerm j_53 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) j_53) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm k_53 = ATgetArgument(t, 1);
                        if(((ATgetType(k_53) == AT_LIST) && !(ATisEmpty(k_53))))
                          {
                            ATerm l_53 = ATgetFirst((ATermList) k_53);
                            ATerm m_53 = (ATerm) ATgetNext((ATermList) k_53);
                            if(((ATgetType(m_53) == AT_LIST) && !(ATisEmpty(m_53))))
                              {
                                w_37 = ATgetFirst((ATermList) m_53);
                                {
                                  ATerm n_53 = (ATerm) ATgetNext((ATermList) m_53);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, w_37), y_101), a_100), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_100))));
                  return(t);
                }
                t = f_100;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((g_100 != NULL) && (g_100 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      g_100 = ATgetArgument(t, 0);
                    h_100 = ATgetArgument(t, 1);
                    i_100 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, g_100, h_100, i_100)), n_100);
                t = SplitDynamicRule_1_0(h_10, t);
              }
            }
          else
            {
              static ATerm i_10 (ATerm t)
              {
                ATerm g_102 = NULL,k_102 = NULL,y_37 = NULL;
                g_102 = t;
                t = SSL_explode_term(g_102);
                if(match_cons(t, sym__2))
                  {
                    ATerm s_53 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) s_53) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm t_53 = ATgetArgument(t, 1);
                      if(((ATgetType(t_53) == AT_LIST) && !(ATisEmpty(t_53))))
                        {
                          k_102 = ATgetFirst((ATermList) t_53);
                          {
                            ATerm u_53 = (ATerm) ATgetNext((ATermList) t_53);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(g_102);
                if(match_cons(t, sym__2))
                  {
                    ATerm v_53 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) v_53) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm w_53 = ATgetArgument(t, 1);
                      if(((ATgetType(w_53) == AT_LIST) && !(ATisEmpty(w_53))))
                        {
                          ATerm x_53 = ATgetFirst((ATermList) w_53);
                          ATerm y_53 = (ATerm) ATgetNext((ATermList) w_53);
                          if(((ATgetType(y_53) == AT_LIST) && !(ATisEmpty(y_53))))
                            {
                              y_37 = ATgetFirst((ATermList) y_53);
                              {
                                ATerm z_53 = (ATerm) ATgetNext((ATermList) y_53);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_r_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_37), k_102), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_100))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  f_100 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = f_100;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((g_100 != NULL) && (g_100 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    g_100 = ATgetArgument(t, 0);
                  h_100 = ATgetArgument(t, 1);
                  i_100 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, g_100, h_100, i_100)), n_100);
              t = SplitDynamicRule_1_0(i_10, t);
            }
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              k_100 = ATgetArgument(t, 0);
              n_100 = ATgetArgument(t, 1);
              t = k_100;
              if(match_cons(t, sym_LabeledDynRuleId_2))
                {
                  f_100 = ATgetArgument(t, 0);
                  a_100 = ATgetArgument(t, 1);
                  {
                    static ATerm j_10 (ATerm t)
                    {
                      ATerm v_102 = NULL,y_102 = NULL,a_38 = NULL;
                      v_102 = t;
                      t = SSL_explode_term(v_102);
                      if(match_cons(t, sym__2))
                        {
                          ATerm b_54 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) b_54) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm c_54 = ATgetArgument(t, 1);
                            if(((ATgetType(c_54) == AT_LIST) && !(ATisEmpty(c_54))))
                              {
                                y_102 = ATgetFirst((ATermList) c_54);
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
                      t = SSL_explode_term(v_102);
                      if(match_cons(t, sym__2))
                        {
                          ATerm e_54 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) e_54) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm f_54 = ATgetArgument(t, 1);
                            if(((ATgetType(f_54) == AT_LIST) && !(ATisEmpty(f_54))))
                              {
                                ATerm g_54 = ATgetFirst((ATermList) f_54);
                                ATerm h_54 = (ATerm) ATgetNext((ATermList) f_54);
                                if(((ATgetType(h_54) == AT_LIST) && !(ATisEmpty(h_54))))
                                  {
                                    a_38 = ATgetFirst((ATermList) h_54);
                                    {
                                      ATerm i_54 = (ATerm) ATgetNext((ATermList) h_54);
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
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, a_38), y_102), a_100), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_100))));
                      return(t);
                    }
                    t = f_100;
                    if(match_cons(t, sym_RDecT_3))
                      {
                        if(((g_100 != NULL) && (g_100 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          g_100 = ATgetArgument(t, 0);
                        h_100 = ATgetArgument(t, 1);
                        i_100 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, g_100, h_100, i_100)), n_100);
                    t = SplitDynamicRule_1_0(j_10, t);
                  }
                }
              else
                {
                  static ATerm g_11 (ATerm t)
                  {
                    ATerm f_103 = NULL,g_103 = NULL,d_38 = NULL;
                    f_103 = t;
                    t = SSL_explode_term(f_103);
                    if(match_cons(t, sym__2))
                      {
                        ATerm l_54 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) l_54) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm m_54 = ATgetArgument(t, 1);
                          if(((ATgetType(m_54) == AT_LIST) && !(ATisEmpty(m_54))))
                            {
                              g_103 = ATgetFirst((ATermList) m_54);
                              {
                                ATerm n_54 = (ATerm) ATgetNext((ATermList) m_54);
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
                        ATerm p_54 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) p_54) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm r_54 = ATgetArgument(t, 1);
                          if(((ATgetType(r_54) == AT_LIST) && !(ATisEmpty(r_54))))
                            {
                              ATerm s_54 = ATgetFirst((ATermList) r_54);
                              ATerm t_54 = (ATerm) ATgetNext((ATermList) r_54);
                              if(((ATgetType(t_54) == AT_LIST) && !(ATisEmpty(t_54))))
                                {
                                  d_38 = ATgetFirst((ATermList) t_54);
                                  {
                                    ATerm u_54 = (ATerm) ATgetNext((ATermList) t_54);
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
                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, d_38), g_103), (ATerm) ATmakeAppl(sym_Str_1, not_null(g_100))));
                    return(t);
                  }
                  if(match_cons(t, sym_DynRuleId_1))
                    {
                      f_100 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = f_100;
                  if(match_cons(t, sym_RDecT_3))
                    {
                      if(((g_100 != NULL) && (g_100 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        g_100 = ATgetArgument(t, 0);
                      {
                        ATerm w_54 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm x_54 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = j_100;
                  t = SplitDynamicRule_1_0(g_11, t);
                }
            }
          else
            {
              if(match_cons(t, sym_AddScopeLabel_2))
                {
                  k_100 = ATgetArgument(t, 0);
                  n_100 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, term_z_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, n_100), (ATerm) ATmakeAppl(sym_Str_1, k_100))), (ATerm) ATempty);
            }
        }
    }
  return(t);
}
ATerm DesugarDynRuleDef_0_0 (ATerm t)
{
  ATerm z_103 = NULL,a_104 = NULL,d_104 = NULL,e_104 = NULL,f_104 = NULL,g_104 = NULL,h_104 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      z_103 = ATgetArgument(t, 0);
      h_104 = ATgetArgument(t, 1);
      t = z_103;
      if(match_cons(t, sym_AddLabelDynRuleId_2))
        {
          a_104 = ATgetArgument(t, 0);
          g_104 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_104;
      if(match_cons(t, sym_RDecT_3))
        {
          d_104 = ATgetArgument(t, 0);
          e_104 = ATgetArgument(t, 1);
          f_104 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, d_104, g_104)), (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, d_104, e_104, f_104)), h_104));
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          z_103 = ATgetArgument(t, 0);
          h_104 = ATgetArgument(t, 1);
          t = z_103;
          if(match_cons(t, sym_AddLabelDynRuleId_2))
            {
              a_104 = ATgetArgument(t, 0);
              g_104 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_104;
          if(match_cons(t, sym_RDecT_3))
            {
              d_104 = ATgetArgument(t, 0);
              e_104 = ATgetArgument(t, 1);
              f_104 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, d_104, g_104)), (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, d_104, e_104, f_104)), h_104));
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              z_103 = ATgetArgument(t, 0);
              h_104 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_103;
          if(match_cons(t, sym_AddLabelDynRuleId_2))
            {
              a_104 = ATgetArgument(t, 0);
              g_104 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_104;
          if(match_cons(t, sym_RDecT_3))
            {
              d_104 = ATgetArgument(t, 0);
              e_104 = ATgetArgument(t, 1);
              f_104 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, d_104, g_104)), (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, d_104, e_104, f_104)), h_104));
        }
    }
  return(t);
}
ATerm split_dynamic_rule_0_0 (ATerm t)
{
  ATerm a_55 = t;
  int d_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarDynRuleDef_0_0(t);
      LocalPopChoice(d_55);
    }
  else
    {
      t = a_55;
      {
        ATerm z_104 = NULL;
        z_104 = t;
        t = (ATerm) ATinsert(ATempty, z_104);
      }
    }
  t = map_1_0(SplitDynamicRule_0_0, t);
  return(t);
}
static ATerm t_11 (ATerm t)
{
  t = term_e_45;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm a_148 (ATerm), ATerm t)
{
  static ATerm i_105 (ATerm t)
  {
    static ATerm r_11 (ATerm t)
    {
      ATerm e_55 = t;
      int f_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_148(t);
          LocalPopChoice(f_55);
        }
      else
        {
          t = e_55;
          {
            ATerm d_105 = NULL,e_105 = NULL,h_105 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                d_105 = ATgetArgument(t, 0);
                e_105 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, d_105, e_105);
            {
              static ATerm w_11 (ATerm t)
              {
                t = d_105;
                t = DeclareContextVars_0_0(t);
                t = e_105;
                t = i_105(t);
                if(((h_105 != NULL) && (h_105 != t)))
                  _fail(t);
                else
                  h_105 = t;
                return(t);
              }
              t = scope_2_0(t_11, w_11, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, d_105, not_null(h_105));
          }
        }
      return(t);
    }
    t = oncetd_1_0(r_11, t);
    return(t);
  }
  t = i_105(t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm l_105 = NULL,n_105 = NULL,o_105 = NULL,p_105 = NULL;
  p_105 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      o_105 = ATgetArgument(t, 0);
      {
        ATerm g_55 = t;
        int h_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_105;
            l_105 = t;
            t = p_105;
            LocalPopChoice(h_55);
          }
        else
          {
            t = g_55;
            t = p_105;
            l_105 = t;
            t = p_105;
          }
      }
    }
  else
    {
      t = p_105;
      l_105 = t;
      t = p_105;
    }
  t = term_j_55;
  n_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_105, term_j_55);
  t = q_14(a_12, l_105, n_105, t);
  t = p_105;
  return(t);
}
static ATerm a_12 (ATerm t)
{
  t = term_e_45;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  ATerm q_105 = NULL,s_105 = NULL,t_105 = NULL,u_105 = NULL;
  u_105 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      t_105 = ATgetArgument(t, 0);
      {
        ATerm k_55 = t;
        int l_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_105;
            q_105 = t;
            t = u_105;
            LocalPopChoice(l_55);
          }
        else
          {
            t = k_55;
            t = u_105;
            q_105 = t;
            t = u_105;
          }
      }
    }
  else
    {
      t = u_105;
      q_105 = t;
      t = u_105;
    }
  t = term_n_55;
  s_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_105, term_n_55);
  t = q_14(g_12, q_105, s_105, t);
  t = u_105;
  return(t);
}
static ATerm g_12 (ATerm t)
{
  t = term_e_45;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm o_55 = t;
  int p_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(y_11, t);
      LocalPopChoice(p_55);
    }
  else
    {
      t = o_55;
      t = map_1_0(d_12, t);
    }
  return(t);
}
static ATerm h_12 (ATerm t)
{
  ATerm k_38 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_38);
  return(t);
}
static ATerm i_12 (ATerm t)
{
  ATerm q_55 = t;
  int r_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_55);
    }
  else
    {
      t = q_55;
      {
        ATerm s_55 = t;
        int t_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_55);
          }
        else
          {
            t = s_55;
            {
              ATerm u_55 = t;
              int v_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_38 = ATgetArgument(t, 0);
                      p_38 = ATgetArgument(t, 1);
                      q_38 = ATgetArgument(t, 2);
                      r_38 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_38;
                  t = map_1_0(l_12, t);
                  LocalPopChoice(v_55);
                }
              else
                {
                  t = u_55;
                  {
                    ATerm w_55 = t;
                    int b_56 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_56);
                      }
                    else
                      {
                        t = w_55;
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
  ATerm z_38 = NULL;
  ATerm c_56 = t;
  int d_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_38 = ATgetArgument(t, 0);
          {
            ATerm e_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_56);
      t = z_38;
    }
  else
    {
      t = c_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_38;
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
  ATerm f_39 = NULL;
  ATerm f_56 = t;
  int g_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_39 = ATgetArgument(t, 0);
          {
            ATerm i_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_56);
      t = f_39;
    }
  else
    {
      t = f_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_39 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_39;
    }
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm w_39 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_39 = ATgetArgument(t, 0);
      t = w_39;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_39 = ATgetArgument(t, 0);
          {
            ATerm j_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_39;
    }
  return(t);
}
static ATerm n_13 (ATerm t)
{
  ATerm d_40 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_40 = ATgetArgument(t, 0);
      t = d_40;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_40 = ATgetArgument(t, 0);
          {
            ATerm k_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_40;
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm h_40 = NULL;
  if(match_cons(t, sym__2))
    {
      h_40 = ATgetArgument(t, 0);
      if((h_40 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm t_40 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_40);
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm l_56 = t;
  int o_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_56);
    }
  else
    {
      t = l_56;
      {
        ATerm p_56 = t;
        int q_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_56);
          }
        else
          {
            t = p_56;
            {
              ATerm r_56 = t;
              int t_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_40 = NULL,z_40 = NULL,f_41 = NULL,g_41 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_40 = ATgetArgument(t, 0);
                      z_40 = ATgetArgument(t, 1);
                      f_41 = ATgetArgument(t, 2);
                      g_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_41;
                  t = map_1_0(i_14, t);
                  LocalPopChoice(t_56);
                }
              else
                {
                  t = r_56;
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
                        t = dynrule_targs_1_0(j_14, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm b_42 = NULL;
  ATerm z_56 = t;
  int d_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_42 = ATgetArgument(t, 0);
          {
            ATerm e_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_57);
      t = b_42;
    }
  else
    {
      t = z_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_42 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_42;
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  t = map_1_0(k_14, t);
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm k_42 = NULL;
  ATerm f_57 = t;
  int g_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_42 = ATgetArgument(t, 0);
          {
            ATerm h_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_57);
      t = k_42;
    }
  else
    {
      t = f_57;
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
static ATerm m_14 (ATerm t)
{
  ATerm r_43 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_43 = ATgetArgument(t, 0);
      t = r_43;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_43 = ATgetArgument(t, 0);
          {
            ATerm i_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_43;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
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
            ATerm k_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_43;
    }
  return(t);
}
static ATerm o_14 (ATerm t)
{
  ATerm c_44 = NULL;
  if(match_cons(t, sym__2))
    {
      c_44 = ATgetArgument(t, 0);
      if((c_44 != ATgetArgument(t, 1)))
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
  ATerm o_110 = NULL;
  o_110 = t;
  {
    ATerm l_57 = t;
    int m_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_38 = NULL,i_38 = NULL;
        t = o_110;
        t = free_vars_3_0(h_12, i_12, tboundin_3_0, t);
        g_38 = t;
        t = o_110;
        {
          ATerm n_57 = t;
          int o_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_39 = NULL;
              ATerm p_57 = t;
              int q_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm u_57 = ATgetArgument(t, 0);
                      ATerm v_57 = ATgetArgument(t, 1);
                      o_39 = ATgetArgument(t, 2);
                      {
                        ATerm w_57 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_57);
                  t = o_39;
                  t = map_1_0(o_12, t);
                }
              else
                {
                  t = p_57;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm x_57 = ATgetArgument(t, 0);
                      ATerm y_57 = ATgetArgument(t, 1);
                      o_39 = ATgetArgument(t, 2);
                      {
                        ATerm z_57 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = o_39;
                  t = map_1_0(n_13, t);
                }
              LocalPopChoice(o_57);
            }
          else
            {
              t = n_57;
              t = (ATerm) ATempty;
            }
        }
        i_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_38, i_38);
        t = e_14(z_13, g_38, i_38, t);
        LocalPopChoice(m_57);
      }
    else
      {
        t = l_57;
        {
          ATerm l_40 = NULL,m_40 = NULL;
          t = o_110;
          t = free_vars_3_0(a_14, c_14, tboundin_3_0, t);
          l_40 = t;
          t = o_110;
          {
            ATerm c_58 = t;
            int g_58 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_43 = NULL;
                ATerm h_58 = t;
                int i_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm j_58 = ATgetArgument(t, 0);
                        ATerm l_58 = ATgetArgument(t, 1);
                        j_43 = ATgetArgument(t, 2);
                        {
                          ATerm m_58 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(i_58);
                    t = j_43;
                    t = map_1_0(m_14, t);
                  }
                else
                  {
                    t = h_58;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm q_58 = ATgetArgument(t, 0);
                        ATerm r_58 = ATgetArgument(t, 1);
                        j_43 = ATgetArgument(t, 2);
                        {
                          ATerm s_58 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = j_43;
                    t = map_1_0(n_14, t);
                  }
                LocalPopChoice(g_58);
              }
            else
              {
                t = c_58;
                t = (ATerm) ATempty;
              }
          }
          m_40 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_40, m_40);
          t = e_14(o_14, l_40, m_40, t);
        }
      }
  }
  return(t);
}
static ATerm s_14 (ATerm t)
{
  t = term_e_45;
  return(t);
}
static ATerm o_15 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_38;
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm c_111 = NULL,d_111 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_111 = ATgetFirst((ATermList) t);
      d_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_111, d_111);
  return(t);
}
static ATerm u_15 (ATerm t)
{
  ATerm e_111 = NULL,f_111 = NULL,g_111 = NULL,h_111 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_58 = ATgetArgument(t, 0);
      if(match_cons(t_58, sym__2))
        {
          e_111 = ATgetArgument(t_58, 0);
          f_111 = ATgetArgument(t_58, 1);
        }
      else
        _fail(t);
      {
        ATerm u_58 = ATgetArgument(t, 1);
        if(match_cons(u_58, sym__2))
          {
            g_111 = ATgetArgument(u_58, 0);
            h_111 = ATgetArgument(u_58, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_111), e_111), (ATerm) ATinsert(CheckATermList(h_111), f_111));
  return(t);
}
static ATerm v_13 (ATerm h_87, ATerm g_87, ATerm t)
{
  ATerm s_110 = NULL,t_110 = NULL,u_110 = NULL;
  static ATerm t_14 (ATerm t)
  {
    t = h_87;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = h_87;
    {
      static ATerm e_15 (ATerm t)
      {
        ATerm w_110 = NULL,x_110 = NULL,y_110 = NULL,z_110 = NULL,a_111 = NULL,b_111 = NULL,g_26 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            w_110 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = w_110;
        t = map_1_0(split_dynamic_rule_0_0, t);
        t = flatten_list_0_0(t);
        t = genzip_4_0(o_15, s_15, u_15, _id, t);
        b_111 = t;
        if(match_cons(t, sym__2))
          {
            y_110 = ATgetArgument(t, 0);
            z_110 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_111);
        x_110 = t;
        t = z_110;
        t = concat_0_0(t);
        a_111 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_110, a_111);
        g_26 = t;
        t = SSLsetAnnotations(g_26, x_110);
        if(match_cons(t, sym__2))
          {
            if(((t_110 != NULL) && (t_110 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              t_110 = ATgetArgument(t, 0);
            if(((s_110 != NULL) && (s_110 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              s_110 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, t_110);
        return(t);
      }
      t = split_dynamic_rule_1_0(e_15, t);
    }
    if(((u_110 != NULL) && (u_110 != t)))
      _fail(t);
    else
      u_110 = t;
    return(t);
  }
  t = scope_2_0(s_14, t_14, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_110)), not_null(u_110)), g_87);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm r_113 (ATerm), ATerm s_113 (ATerm), ATerm t)
{
  static ATerm j_111 (ATerm t)
  {
    ATerm w_58 = t;
    int y_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_113(t);
        t = j_111(t);
        LocalPopChoice(y_58);
      }
    else
      {
        t = w_58;
        t = s_113(t);
      }
    return(t);
  }
  t = j_111(t);
  return(t);
}
ATerm listtd_1_0 (ATerm n_122 (ATerm), ATerm t)
{
  static ATerm x_111 (ATerm t)
  {
    ATerm u_111 = NULL,v_111 = NULL,w_111 = NULL;
    t = n_122(t);
    u_111 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_111;
      }
    else
      {
        ATerm l_44 = NULL,s_44 = NULL,i_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_111 = ATgetFirst((ATermList) t);
            w_111 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_111);
        l_44 = t;
        t = w_111;
        t = x_111(t);
        s_44 = t;
        t = (ATerm) ATinsert(CheckATermList(s_44), v_111);
        i_26 = t;
        t = SSLsetAnnotations(i_26, l_44);
      }
    return(t);
  }
  t = x_111(t);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm collect_om_2_0 (ATerm w_126 (ATerm), ATerm x_126 (ATerm), ATerm t)
{
  ATerm i_59 = t;
  int k_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_111 = NULL;
      t = w_126(t);
      z_111 = t;
      t = (ATerm) ATinsert(ATempty, z_111);
      LocalPopChoice(k_59);
    }
  else
    {
      t = i_59;
      {
        ATerm z_44 = NULL,a_45 = NULL;
        static ATerm w_15 (ATerm t)
        {
          t = collect_om_2_0(w_126, x_126, t);
          return(t);
        }
        a_45 = t;
        t = SSL_explode_term(a_45);
        if(match_cons(t, sym__2))
          {
            ATerm l_59 = ATgetArgument(t, 0);
            z_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_44;
        t = foldr_3_0(v_15, x_126, w_15, t);
      }
    }
  return(t);
}
ATerm partition_1_0 (ATerm o_129 (ATerm), ATerm t)
{
  static ATerm g_113 (ATerm t)
  {
    ATerm d_113 = NULL,e_113 = NULL,f_113 = NULL;
    d_113 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = term_b_38;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_113 = ATgetFirst((ATermList) t);
            f_113 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm m_59 = t;
          int n_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,h_46 = NULL,k_26 = NULL;
              t = SSLgetAnnotations(d_113);
              y_45 = t;
              t = e_113;
              t = o_129(t);
              t_45 = t;
              t = (ATerm) ATinsert(CheckATermList(f_113), t_45);
              k_26 = t;
              t = SSLsetAnnotations(k_26, y_45);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm o_59 = ATgetFirst((ATermList) t);
                  w_45 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = w_45;
              t = g_113(t);
              v_45 = t;
              t = SSL_explode_term(v_45);
              if(match_cons(t, sym__2))
                {
                  ATerm p_59 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_59) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm q_59 = ATgetArgument(t, 1);
                    if(((ATgetType(q_59) == AT_LIST) && !(ATisEmpty(q_59))))
                      {
                        x_45 = ATgetFirst((ATermList) q_59);
                        {
                          ATerm s_59 = (ATerm) ATgetNext((ATermList) q_59);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(v_45);
              if(match_cons(t, sym__2))
                {
                  ATerm t_59 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_59) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm u_59 = ATgetArgument(t, 1);
                    if(((ATgetType(u_59) == AT_LIST) && !(ATisEmpty(u_59))))
                      {
                        ATerm v_59 = ATgetFirst((ATermList) u_59);
                        ATerm a_60 = (ATerm) ATgetNext((ATermList) u_59);
                        if(((ATgetType(a_60) == AT_LIST) && !(ATisEmpty(a_60))))
                          {
                            h_46 = ATgetFirst((ATermList) a_60);
                            {
                              ATerm b_60 = (ATerm) ATgetNext((ATermList) a_60);
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
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_45), t_45), h_46);
              LocalPopChoice(n_59);
            }
          else
            {
              t = m_59;
              {
                ATerm p_46 = NULL,q_46 = NULL,b_47 = NULL,c_47 = NULL,m_47 = NULL,l_26 = NULL;
                t = SSLgetAnnotations(d_113);
                c_47 = t;
                t = (ATerm) ATinsert(CheckATermList(f_113), e_113);
                l_26 = t;
                t = SSLsetAnnotations(l_26, c_47);
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    ATerm c_60 = ATgetFirst((ATermList) t);
                    q_46 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_46;
                t = g_113(t);
                p_46 = t;
                t = SSL_explode_term(p_46);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_60 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) e_60) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm f_60 = ATgetArgument(t, 1);
                      if(((ATgetType(f_60) == AT_LIST) && !(ATisEmpty(f_60))))
                        {
                          b_47 = ATgetFirst((ATermList) f_60);
                          {
                            ATerm g_60 = (ATerm) ATgetNext((ATermList) f_60);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(p_46);
                if(match_cons(t, sym__2))
                  {
                    ATerm h_60 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) h_60) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm n_60 = ATgetArgument(t, 1);
                      if(((ATgetType(n_60) == AT_LIST) && !(ATisEmpty(n_60))))
                        {
                          ATerm o_60 = ATgetFirst((ATermList) n_60);
                          ATerm p_60 = (ATerm) ATgetNext((ATermList) n_60);
                          if(((ATgetType(p_60) == AT_LIST) && !(ATisEmpty(p_60))))
                            {
                              m_47 = ATgetFirst((ATermList) p_60);
                              {
                                ATerm q_60 = (ATerm) ATgetNext((ATermList) p_60);
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
                t = (ATerm) ATmakeAppl(sym__2, b_47, (ATerm) ATinsert(CheckATermList(m_47), e_113));
              }
            }
        }
      }
    return(t);
  }
  t = g_113(t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL;
  if(match_cons(t, sym__2))
    {
      y_48 = ATgetArgument(t, 0);
      z_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_14(d_16, y_48, z_48, t);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm c_49 = NULL;
  if(match_cons(t, sym__2))
    {
      c_49 = ATgetArgument(t, 0);
      if((c_49 != ATgetArgument(t, 1)))
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
  ATerm h_51 = NULL,i_51 = NULL;
  if(match_cons(t, sym__2))
    {
      h_51 = ATgetArgument(t, 0);
      i_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_14(i_16, h_51, i_51, t);
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm j_51 = NULL;
  if(match_cons(t, sym__2))
    {
      j_51 = ATgetArgument(t, 0);
      if((j_51 != ATgetArgument(t, 1)))
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
  ATerm h_116 = NULL,i_116 = NULL,m_116 = NULL,p_116 = NULL,q_116 = NULL,r_116 = NULL,s_116 = NULL;
  q_116 = t;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      r_116 = ATgetArgument(t, 0);
      s_116 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_116;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_116 = ATgetFirst((ATermList) t);
      p_116 = (ATerm) ATgetNext((ATermList) t);
      t = i_116;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          m_116 = ATgetArgument(t, 0);
          h_116 = ATgetArgument(t, 1);
          {
            ATerm k_48 = NULL,l_48 = NULL,p_48 = NULL,r_48 = NULL;
            t = p_116;
            {
              static ATerm x_15 (ATerm t)
              {
                ATerm t_48 = NULL,u_48 = NULL;
                t_48 = t;
                {
                  ATerm r_60 = t;
                  int t_60 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                        {
                          u_48 = ATgetArgument(t, 0);
                          {
                            ATerm u_60 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(t_60);
                      t = u_48;
                      if((m_116 != t))
                        {
                          _fail(t);
                        }
                      t = t_48;
                    }
                  else
                    {
                      t = r_60;
                      if(match_cons(t, sym_DynRuleScopeId_1))
                        {
                          u_48 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = u_48;
                      if((m_116 != t))
                        {
                          _fail(t);
                        }
                      t = t_48;
                    }
                }
                return(t);
              }
              t = partition_1_0(x_15, t);
            }
            if(match_cons(t, sym__2))
              {
                l_48 = ATgetArgument(t, 0);
                k_48 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_48;
            {
              static ATerm z_15 (ATerm t)
              {
                ATerm v_48 = NULL;
                if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                  {
                    if((m_116 != ATgetArgument(t, 0)))
                      {
                        _fail(ATgetArgument(t, 0));
                      }
                    v_48 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = v_48;
                return(t);
              }
              t = collect_om_2_0(z_15, c_16, t);
            }
            r_48 = t;
            t = (ATerm) ATinsert(CheckATermList(r_48), h_116);
            {
              static ATerm e_16 (ATerm t)
              {
                ATerm h_49 = NULL;
                h_49 = t;
                t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, m_116, h_49)));
                return(t);
              }
              t = map_1_0(e_16, t);
            }
            p_48 = t;
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_60, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_48), (ATerm) ATmakeAppl(sym_DynRuleScope_2, k_48, s_116))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, m_116)));
          }
        }
      else
        {
          ATerm w_50 = NULL,x_50 = NULL,z_50 = NULL;
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              m_116 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_116;
          {
            static ATerm f_16 (ATerm t)
            {
              ATerm c_51 = NULL,d_51 = NULL;
              c_51 = t;
              {
                ATerm z_60 = t;
                int a_61 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                      {
                        d_51 = ATgetArgument(t, 0);
                        {
                          ATerm e_61 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(a_61);
                    t = d_51;
                    if((m_116 != t))
                      {
                        _fail(t);
                      }
                    t = c_51;
                  }
                else
                  {
                    t = z_60;
                    if(match_cons(t, sym_DynRuleScopeId_1))
                      {
                        d_51 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = d_51;
                    if((m_116 != t))
                      {
                        _fail(t);
                      }
                    t = c_51;
                  }
              }
              return(t);
            }
            t = partition_1_0(f_16, t);
          }
          if(match_cons(t, sym__2))
            {
              x_50 = ATgetArgument(t, 0);
              w_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_50;
          {
            static ATerm g_16 (ATerm t)
            {
              ATerm g_51 = NULL;
              if(match_cons(t, sym_LabeledDynRuleScopeId_2))
                {
                  if((m_116 != ATgetArgument(t, 0)))
                    {
                      _fail(ATgetArgument(t, 0));
                    }
                  g_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_51;
              return(t);
            }
            t = collect_om_2_0(g_16, h_16, t);
          }
          {
            static ATerm j_16 (ATerm t)
            {
              ATerm q_51 = NULL;
              q_51 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, m_116, q_51)));
              return(t);
            }
            t = map_1_0(j_16, t);
          }
          z_50 = t;
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_60, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, z_50), (ATerm) ATmakeAppl(sym_DynRuleScope_2, w_50, s_116))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, m_116)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_116;
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_115 (ATerm), ATerm t)
{
  static ATerm x_116 (ATerm t)
  {
    ATerm k_61 = t;
    int l_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_115(t);
        LocalPopChoice(l_61);
      }
    else
      {
        t = k_61;
        t = SRTS_one(x_116, t);
      }
    return(t);
  }
  t = x_116(t);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm k_117 = NULL;
  k_117 = t;
  {
    ATerm u_61 = t;
    int z_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_52 = NULL;
        t = term_e_45;
        g_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_e_45, k_117);
        t = p_14(g_52, k_117, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm a_62 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_62) != ATmakeSymbol("v_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = k_117;
        LocalPopChoice(z_61);
      }
    else
      {
        t = u_61;
        {
          ATerm n_52 = NULL;
          t = term_e_45;
          n_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_e_45, k_117);
          t = p_14(n_52, k_117, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm b_62 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) b_62) != ATmakeSymbol("m_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = k_117;
        }
      }
  }
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm t_119 = NULL,u_119 = NULL,z_119 = NULL;
  t_119 = t;
  {
    ATerm c_62 = t;
    int d_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm e_62 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_62);
        t = t_119;
        {
          ATerm f_62 = t;
          if((PushChoice() == 0))
            {
              ATerm b_53 = NULL,c_53 = NULL,o_53 = NULL,p_53 = NULL,x_26 = NULL;
              p_53 = t;
              if(match_cons(t, sym_Var_1))
                {
                  c_53 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_53);
              b_53 = t;
              t = c_53;
              {
                ATerm h_62 = t;
                int k_62 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(k_62);
                  }
                else
                  {
                    t = h_62;
                    {
                      ATerm a_54 = NULL,o_54 = NULL,q_54 = NULL,s_26 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          a_54 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(c_53);
                      o_54 = t;
                      t = a_54;
                      t = ContextVar_0_0(t);
                      q_54 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, q_54);
                      s_26 = t;
                      t = SSLsetAnnotations(s_26, o_54);
                    }
                  }
              }
              o_53 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, o_53);
              x_26 = t;
              t = SSLsetAnnotations(x_26, b_53);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_62;
            }
        }
        t = term_w_33;
      }
    else
      {
        t = c_62;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_w_33;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                u_119 = ATgetArgument(t, 0);
                {
                  ATerm c_120 = NULL;
                  t = u_119;
                  t = free_vars_3_0(l_16, n_16, tboundin_3_0, t);
                  t = map_1_0(r_16, t);
                  c_120 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_62, c_120);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    u_119 = ATgetArgument(t, 0);
                    z_119 = ATgetArgument(t, 1);
                    {
                      ATerm p_121 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, u_119, z_119);
                      t = free_vars_3_0(s_16, t_16, tboundin_3_0, t);
                      t = map_1_0(b_17, t);
                      p_121 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_l_62, p_121);
                    }
                  }
                else
                  {
                    ATerm v_54 = NULL,b_55 = NULL,c_55 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm m_62 = ATgetArgument(t, 0);
                        ATerm n_62 = ATgetArgument(t, 1);
                        ATerm p_62 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_k_45;
                    b_55 = t;
                    t = (ATerm) ATinsert(ATempty, term_q_62);
                    c_55 = t;
                    t = SSL_printnl(b_55, c_55);
                    t = term_m_45;
                    v_54 = t;
                    t = SSL_exit(v_54);
                    t = (ATerm) ATinsert(ATempty, term_q_62);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm d_120 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_120);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm u_62 = t;
  int v_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_62);
    }
  else
    {
      t = u_62;
      {
        ATerm w_62 = t;
        int z_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_62);
          }
        else
          {
            t = w_62;
            {
              ATerm c_63 = t;
              int d_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_120 = ATgetArgument(t, 0);
                      i_120 = ATgetArgument(t, 1);
                      j_120 = ATgetArgument(t, 2);
                      k_120 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_120;
                  t = map_1_0(o_16, t);
                  LocalPopChoice(d_63);
                }
              else
                {
                  t = c_63;
                  {
                    ATerm e_63 = t;
                    int f_63 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_63);
                      }
                    else
                      {
                        t = e_63;
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
static ATerm o_16 (ATerm t)
{
  ATerm z_120 = NULL;
  ATerm m_63 = t;
  int n_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_120 = ATgetArgument(t, 0);
          {
            ATerm o_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_63);
      t = z_120;
    }
  else
    {
      t = m_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_120;
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
  ATerm h_121 = NULL;
  ATerm p_63 = t;
  int q_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_121 = ATgetArgument(t, 0);
          {
            ATerm r_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_63);
      t = h_121;
    }
  else
    {
      t = p_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_121;
    }
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm k_121 = NULL;
  k_121 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_121);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm q_121 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_121);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm s_63 = t;
  int t_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_63);
    }
  else
    {
      t = s_63;
      {
        ATerm v_63 = t;
        int w_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_63);
          }
        else
          {
            t = v_63;
            {
              ATerm a_64 = t;
              int c_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_121 = NULL,t_121 = NULL,y_121 = NULL,z_121 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_121 = ATgetArgument(t, 0);
                      t_121 = ATgetArgument(t, 1);
                      y_121 = ATgetArgument(t, 2);
                      z_121 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = y_121;
                  t = map_1_0(u_16, t);
                  LocalPopChoice(c_64);
                }
              else
                {
                  t = a_64;
                  {
                    ATerm f_64 = t;
                    int i_64 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(i_64);
                      }
                    else
                      {
                        t = f_64;
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
static ATerm u_16 (ATerm t)
{
  ATerm k_122 = NULL;
  ATerm j_64 = t;
  int k_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_122 = ATgetArgument(t, 0);
          {
            ATerm l_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_64);
      t = k_122;
    }
  else
    {
      t = j_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_122;
    }
  return(t);
}
static ATerm x_16 (ATerm t)
{
  t = map_1_0(a_17, t);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm y_122 = NULL;
  ATerm m_64 = t;
  int n_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_122 = ATgetArgument(t, 0);
          {
            ATerm o_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_64);
      t = y_122;
    }
  else
    {
      t = m_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_122;
    }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm b_123 = NULL;
  b_123 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_123);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm m_124 = NULL,o_124 = NULL,p_124 = NULL;
  m_124 = t;
  {
    ATerm p_64 = t;
    int q_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm r_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_64);
        t = m_124;
        {
          ATerm s_64 = t;
          if((PushChoice() == 0))
            {
              ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL,a_56 = NULL,d_27 = NULL;
              a_56 = t;
              if(match_cons(t, sym_Var_1))
                {
                  y_55 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_56);
              x_55 = t;
              t = y_55;
              {
                ATerm t_64 = t;
                int u_64 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(u_64);
                  }
                else
                  {
                    t = t_64;
                    {
                      ATerm h_56 = NULL,s_56 = NULL,y_56 = NULL,y_26 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          h_56 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(y_55);
                      s_56 = t;
                      t = h_56;
                      t = ContextVar_0_0(t);
                      y_56 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, y_56);
                      y_26 = t;
                      t = SSLsetAnnotations(y_26, s_56);
                    }
                  }
              }
              z_55 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, z_55);
              d_27 = t;
              t = SSLsetAnnotations(d_27, x_55);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = s_64;
            }
        }
        t = term_w_33;
      }
    else
      {
        t = p_64;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_w_33;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                o_124 = ATgetArgument(t, 0);
                {
                  ATerm v_124 = NULL;
                  t = o_124;
                  t = free_vars_3_0(d_17, e_17, tboundin_3_0, t);
                  t = map_1_0(i_17, t);
                  v_124 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_62, v_124);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    o_124 = ATgetArgument(t, 0);
                    p_124 = ATgetArgument(t, 1);
                    {
                      ATerm m_126 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, o_124, p_124);
                      t = free_vars_3_0(j_17, k_17, tboundin_3_0, t);
                      t = map_1_0(o_17, t);
                      m_126 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_l_62, m_126);
                    }
                  }
                else
                  {
                    ATerm a_57 = NULL,b_57 = NULL,c_57 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm v_64 = ATgetArgument(t, 0);
                        ATerm w_64 = ATgetArgument(t, 1);
                        ATerm x_64 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_k_45;
                    b_57 = t;
                    t = (ATerm) ATinsert(ATempty, term_q_62);
                    c_57 = t;
                    t = SSL_printnl(b_57, c_57);
                    t = term_m_45;
                    a_57 = t;
                    t = SSL_exit(a_57);
                    t = (ATerm) ATinsert(ATempty, term_q_62);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm w_124 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_124);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm z_64 = t;
  int a_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_65);
    }
  else
    {
      t = z_64;
      {
        ATerm d_65 = t;
        int e_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_65);
          }
        else
          {
            t = d_65;
            {
              ATerm f_65 = t;
              int g_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_124 = NULL,z_124 = NULL,c_125 = NULL,d_125 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_124 = ATgetArgument(t, 0);
                      z_124 = ATgetArgument(t, 1);
                      c_125 = ATgetArgument(t, 2);
                      d_125 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_125;
                  t = map_1_0(f_17, t);
                  LocalPopChoice(g_65);
                }
              else
                {
                  t = f_65;
                  {
                    ATerm i_65 = t;
                    int b_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_66);
                      }
                    else
                      {
                        t = i_65;
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
  ATerm u_125 = NULL;
  ATerm c_66 = t;
  int d_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_125 = ATgetArgument(t, 0);
          {
            ATerm h_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_66);
      t = u_125;
    }
  else
    {
      t = c_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_125 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_125;
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
  ATerm e_126 = NULL;
  ATerm j_66 = t;
  int l_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_126 = ATgetArgument(t, 0);
          {
            ATerm s_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_66);
      t = e_126;
    }
  else
    {
      t = j_66;
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
static ATerm i_17 (ATerm t)
{
  ATerm j_126 = NULL;
  j_126 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, j_126);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm n_126 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_126);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm t_66 = t;
  int u_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_66);
    }
  else
    {
      t = t_66;
      {
        ATerm v_66 = t;
        int w_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_66);
          }
        else
          {
            t = v_66;
            {
              ATerm x_66 = t;
              int y_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_126 = NULL,s_126 = NULL,u_126 = NULL,v_126 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_126 = ATgetArgument(t, 0);
                      s_126 = ATgetArgument(t, 1);
                      u_126 = ATgetArgument(t, 2);
                      v_126 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_126;
                  t = map_1_0(l_17, t);
                  LocalPopChoice(y_66);
                }
              else
                {
                  t = x_66;
                  {
                    ATerm a_67 = t;
                    int k_67 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_67);
                      }
                    else
                      {
                        t = a_67;
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
  ATerm i_127 = NULL;
  ATerm l_67 = t;
  int m_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_127 = ATgetArgument(t, 0);
          {
            ATerm n_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_67);
      t = i_127;
    }
  else
    {
      t = l_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_127;
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
  ATerm p_127 = NULL;
  ATerm o_67 = t;
  int p_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_127 = ATgetArgument(t, 0);
          {
            ATerm s_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_67);
      t = p_127;
    }
  else
    {
      t = o_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_127;
    }
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm s_127 = NULL;
  s_127 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, s_127);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  ATerm u_67 = t;
  int y_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = alltd_1_0(k_16, t);
      LocalPopChoice(y_67);
    }
  else
    {
      t = u_67;
      t = alltd_1_0(c_17, t);
    }
  return(t);
}
ATerm DRDef_LHS_1_0 (ATerm d_148 (ATerm), ATerm t)
{
  ATerm n_128 = NULL,o_128 = NULL;
  ATerm z_67 = t;
  int c_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          ATerm d_68 = ATgetArgument(t, 0);
          n_128 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      LocalPopChoice(c_68);
      t = n_128;
      t = d_148(t);
    }
  else
    {
      t = z_67;
      {
        ATerm e_68 = t;
        int f_68 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                ATerm g_68 = ATgetArgument(t, 0);
                n_128 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            LocalPopChoice(f_68);
            t = n_128;
            if(match_cons(t, sym_Rule_3))
              {
                o_128 = ATgetArgument(t, 0);
                {
                  ATerm i_68 = ATgetArgument(t, 1);
                }
                {
                  ATerm k_68 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = o_128;
            t = d_148(t);
          }
        else
          {
            t = e_68;
            if(match_cons(t, sym_AddDynRule_2))
              {
                ATerm o_68 = ATgetArgument(t, 0);
                n_128 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = n_128;
            if(match_cons(t, sym_Rule_3))
              {
                o_128 = ATgetArgument(t, 0);
                {
                  ATerm q_68 = ATgetArgument(t, 1);
                }
                {
                  ATerm r_68 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            t = o_128;
            t = d_148(t);
          }
      }
    }
  return(t);
}
static ATerm n_131 (ATerm g_130, ATerm h_130, ATerm i_130, ATerm j_130, ATerm k_130, ATerm l_130, ATerm p_130, ATerm t)
{
  t = p_130;
  {
    ATerm s_68 = t;
    if((PushChoice() == 0))
      {
        t = k_130;
        if(match_cons(t, sym_Op_2))
          {
            ATerm v_68 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_68) != ATmakeSymbol("Undefined", 0, ATtrue)))
              _fail(t);
            {
              ATerm w_68 = ATgetArgument(t, 1);
              if(((ATgetType(w_68) != AT_LIST) || !(ATisEmpty(w_68))))
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
        t = s_68;
      }
  }
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, g_130, h_130, i_130)), (ATerm) ATmakeAppl(sym_Rule_3, j_130, k_130, l_130));
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_x_68;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL,e_131 = NULL,g_131 = NULL,h_131 = NULL,i_131 = NULL,j_131 = NULL;
  b_131 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      c_131 = ATgetArgument(t, 0);
      d_131 = ATgetArgument(t, 1);
      e_131 = ATgetArgument(t, 2);
      g_131 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = g_131;
  if(match_cons(t, sym_Rule_3))
    {
      h_131 = ATgetArgument(t, 0);
      i_131 = ATgetArgument(t, 1);
      j_131 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_131;
  if(match_cons(t, sym_Op_2))
    {
      z_130 = ATgetArgument(t, 0);
      a_131 = ATgetArgument(t, 1);
      t = a_131;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = z_130;
          if(match_string(t, "Undefined"))
            {
              ATerm a_69 = t;
              int d_69 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_131;
                  {
                    ATerm e_69 = t;
                    int f_69 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = j_131;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(f_69);
                      }
                    else
                      {
                        t = e_69;
                        {
                          ATerm r_57 = NULL,t_57 = NULL;
                          t = term_k_45;
                          r_57 = t;
                          t = (ATerm) ATinsert(ATempty, term_g_69);
                          t_57 = t;
                          t = SSL_printnl(r_57, t_57);
                          t = b_131;
                          t = debug_1_0(p_17, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, c_131, d_131, e_131)), h_131);
                  LocalPopChoice(d_69);
                }
              else
                {
                  t = a_69;
                  t = n_131(c_131, d_131, e_131, h_131, i_131, j_131, b_131, t);
                }
            }
          else
            {
              t = n_131(c_131, d_131, e_131, h_131, i_131, j_131, b_131, t);
            }
        }
      else
        {
          t = z_130;
          t = n_131(c_131, d_131, e_131, h_131, i_131, j_131, b_131, t);
        }
    }
  else
    {
      t = n_131(c_131, d_131, e_131, h_131, i_131, j_131, b_131, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm s_120 (ATerm), ATerm t)
{
  ATerm o_131 = NULL,p_131 = NULL,q_131 = NULL,r_131 = NULL;
  o_131 = t;
  t = s_120(t);
  p_131 = t;
  t = term_k_45;
  q_131 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_131), p_131);
  r_131 = t;
  t = SSL_printnl(q_131, r_131);
  t = o_131;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_x_68;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm s_131 = NULL,t_131 = NULL,u_131 = NULL,v_131 = NULL,y_131 = NULL,b_132 = NULL;
  b_132 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm h_69 = ATgetArgument(t, 0);
      if(match_cons(h_69, sym_DynRuleId_1))
        {
          ATerm j_69 = ATgetArgument(h_69, 0);
          if(match_cons(j_69, sym_RDecT_3))
            {
              s_131 = ATgetArgument(j_69, 0);
              t_131 = ATgetArgument(j_69, 1);
              u_131 = ATgetArgument(j_69, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm i_69 = ATgetArgument(t, 1);
        if(match_cons(i_69, sym_Rule_3))
          {
            v_131 = ATgetArgument(i_69, 0);
            {
              ATerm k_69 = ATgetArgument(i_69, 1);
              if(match_cons(k_69, sym_Op_2))
                {
                  ATerm o_69 = ATgetArgument(k_69, 0);
                  if((ATgetSymbol((ATermAppl) o_69) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm q_69 = ATgetArgument(k_69, 1);
                    if(((ATgetType(q_69) != AT_LIST) || !(ATisEmpty(q_69))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            y_131 = ATgetArgument(i_69, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm s_69 = t;
    int t_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_131;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(t_69);
      }
    else
      {
        t = s_69;
        {
          ATerm c_132 = NULL,d_132 = NULL;
          t = term_k_45;
          c_132 = t;
          t = (ATerm) ATinsert(ATempty, term_g_69);
          d_132 = t;
          t = SSL_printnl(c_132, d_132);
          t = b_132;
          t = debug_1_0(q_17, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, s_131, t_131, u_131)), v_131);
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm a_133 = NULL;
  a_133 = t;
  {
    ATerm u_69 = t;
    int v_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_OverrideDynamicRules_1))
          {
            ATerm x_69 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(v_69);
        t = a_133;
      }
    else
      {
        t = u_69;
        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
          {
            ATerm y_69 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_133;
      }
  }
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_a_70;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm c_70 = t;
  int g_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_133 = NULL;
      f_133 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm h_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_133;
      LocalPopChoice(g_70);
      {
        ATerm g_133 = NULL,h_133 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            g_133 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_133;
        t = map_1_0(v_17, t);
        h_133 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, h_133);
      }
    }
  else
    {
      t = c_70;
      {
        ATerm l_70 = t;
        int m_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_134 = NULL;
            d_134 = t;
            if(match_cons(t, sym_ExtendDynamicRules_1))
              {
                ATerm n_70 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = d_134;
            LocalPopChoice(m_70);
            {
              ATerm e_134 = NULL,f_134 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  e_134 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_134;
              t = map_1_0(x_17, t);
              f_134 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, f_134);
            }
          }
        else
          {
            t = l_70;
            {
              ATerm o_70 = t;
              int p_70 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_134 = NULL;
                  w_134 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm r_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = w_134;
                  LocalPopChoice(p_70);
                  {
                    ATerm x_134 = NULL,y_134 = NULL;
                    if(match_cons(t, sym_OverrideDynamicRules_1))
                      {
                        x_134 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = x_134;
                    t = map_1_0(z_17, t);
                    y_134 = t;
                    t = (ATerm) ATmakeAppl(sym_GenDynRules_1, y_134);
                  }
                }
              else
                {
                  t = o_70;
                  {
                    ATerm s_70 = t;
                    int u_70 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_135 = NULL;
                        n_135 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm v_70 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = n_135;
                        LocalPopChoice(u_70);
                        {
                          ATerm o_135 = NULL,p_135 = NULL;
                          if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                            {
                              o_135 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = o_135;
                          t = map_1_0(b_18, t);
                          p_135 = t;
                          t = (ATerm) ATmakeAppl(sym_GenDynRules_1, p_135);
                        }
                      }
                    else
                      {
                        t = s_70;
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
  ATerm w_70 = t;
  int x_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UpgradeUndefine_0_0(t);
      LocalPopChoice(x_70);
    }
  else
    {
      t = w_70;
    }
  {
    ATerm a_71 = t;
    int b_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_133 = NULL,a_58 = NULL,b_58 = NULL;
        s_133 = t;
        t = (ATerm) ATempty;
        a_58 = t;
        t = term_a_70;
        b_58 = t;
        t = term_c_71;
        t = p_14(b_58, a_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm g_71 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_71) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = s_133;
        LocalPopChoice(b_71);
        {
          ATerm t_133 = NULL,w_133 = NULL;
          static ATerm w_17 (ATerm t)
          {
            ATerm y_133 = NULL;
            if(match_cons(t, sym_DynRuleId_1))
              {
                y_133 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_AddLabelDynRuleId_2, y_133, not_null(w_133));
            return(t);
          }
          t_133 = t;
          t = DRDef_LHS_1_0(dummify_0_0, t);
          if(((w_133 != NULL) && (w_133 != t)))
            _fail(t);
          else
            w_133 = t;
          t = t_133;
          t = oncetd_1_0(w_17, t);
        }
      }
    else
      {
        t = a_71;
      }
  }
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = RDefToDRDef_extend_0_0(t);
  {
    ATerm j_71 = t;
    int q_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_134 = NULL,e_58 = NULL,f_58 = NULL;
        g_134 = t;
        t = (ATerm) ATempty;
        e_58 = t;
        t = term_a_70;
        f_58 = t;
        t = term_c_71;
        t = p_14(f_58, e_58, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm r_71 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_71) != ATmakeSymbol("y_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = g_134;
        LocalPopChoice(q_71);
        {
          ATerm p_134 = NULL,q_134 = NULL;
          static ATerm y_17 (ATerm t)
          {
            ATerm r_134 = NULL;
            if(match_cons(t, sym_DynRuleId_1))
              {
                r_134 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_AddLabelDynRuleId_2, r_134, not_null(q_134));
            return(t);
          }
          p_134 = t;
          t = DRDef_LHS_1_0(dummify_0_0, t);
          if(((q_134 != NULL) && (q_134 != t)))
            _fail(t);
          else
            q_134 = t;
          t = p_134;
          t = oncetd_1_0(y_17, t);
        }
      }
    else
      {
        t = j_71;
      }
  }
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm a_135 = NULL,d_135 = NULL,e_135 = NULL,f_135 = NULL,g_135 = NULL,h_135 = NULL,i_135 = NULL,j_135 = NULL;
  static ATerm a_18 (ATerm t)
  {
    ATerm m_135 = NULL;
    if(match_cons(t, sym_DynRuleId_1))
      {
        m_135 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LabeledDynRuleId_2, m_135, not_null(d_135));
    return(t);
  }
  if(match_cons(t, sym_RDefT_4))
    {
      e_135 = ATgetArgument(t, 0);
      f_135 = ATgetArgument(t, 1);
      g_135 = ATgetArgument(t, 2);
      {
        ATerm v_71 = ATgetArgument(t, 3);
        if(match_cons(v_71, sym_Rule_3))
          {
            h_135 = ATgetArgument(v_71, 0);
            i_135 = ATgetArgument(v_71, 1);
            j_135 = ATgetArgument(v_71, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, e_135, f_135, g_135)), (ATerm) ATmakeAppl(sym_Rule_3, h_135, i_135, j_135));
  {
    ATerm w_71 = t;
    int x_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = UpgradeUndefine_0_0(t);
        LocalPopChoice(x_71);
      }
    else
      {
        t = w_71;
      }
  }
  a_135 = t;
  t = DRDef_LHS_1_0(dummify_0_0, t);
  if(((d_135 != NULL) && (d_135 != t)))
    _fail(t);
  else
    d_135 = t;
  t = a_135;
  t = oncetd_1_0(a_18, t);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm q_135 = NULL,r_135 = NULL;
  static ATerm c_18 (ATerm t)
  {
    ATerm s_135 = NULL;
    if(match_cons(t, sym_DynRuleId_1))
      {
        s_135 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LabeledDynRuleId_2, s_135, not_null(r_135));
    return(t);
  }
  t = RDefToDRDef_extend_0_0(t);
  q_135 = t;
  t = DRDef_LHS_1_0(dummify_0_0, t);
  if(((r_135 != NULL) && (r_135 != t)))
    _fail(t);
  else
    r_135 = t;
  t = q_135;
  t = oncetd_1_0(c_18, t);
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  ATerm y_71 = t;
  int z_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_132 = NULL,y_132 = NULL,z_132 = NULL;
      t = oncetd_1_0(s_17, t);
      w_132 = t;
      t = (ATerm) ATempty;
      y_132 = t;
      t = term_b_72;
      z_132 = t;
      t = term_c_72;
      t = q_14(t_17, y_132, z_132, t);
      t = w_132;
      LocalPopChoice(z_71);
    }
  else
    {
      t = y_71;
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
  ATerm i_136 = NULL,j_136 = NULL,k_136 = NULL,l_136 = NULL,s_31 = NULL;
  l_136 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      j_136 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_136);
  i_136 = t;
  t = j_136;
  t = topdown_1_0(g_18, t);
  t = listtd_1_0(h_18, t);
  k_136 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, k_136);
  s_31 = t;
  t = SSLsetAnnotations(s_31, i_136);
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
  ATerm d_72 = t;
  int e_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynRuleScope_0_0(t);
      LocalPopChoice(e_72);
    }
  else
    {
      t = d_72;
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
  ATerm o_136 = NULL,p_136 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_136 = ATgetFirst((ATermList) t);
      p_136 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_13(o_136, p_136, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm z_135 = NULL,a_136 = NULL,b_136 = NULL,c_136 = NULL,d_136 = NULL,e_136 = NULL,f_136 = NULL,g_136 = NULL,c_32 = NULL,b_32 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  g_136 = t;
  if(match_cons(t, sym_Specification_1))
    {
      a_136 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_136);
  z_135 = t;
  t = a_136;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_136 = ATgetFirst((ATermList) t);
      d_136 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_136);
  b_136 = t;
  t = d_136;
  t = Cons_2_0(_id, d_18, t);
  e_136 = t;
  t = (ATerm) ATinsert(CheckATermList(e_136), c_136);
  b_32 = t;
  t = SSLsetAnnotations(b_32, b_136);
  f_136 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_136);
  c_32 = t;
  t = SSLsetAnnotations(c_32, z_135);
  return(t);
}
ATerm tboundin_3_0 (ATerm w_146 (ATerm), ATerm x_146 (ATerm), ATerm y_146 (ATerm), ATerm t)
{
  ATerm g_142 = NULL,h_142 = NULL,i_142 = NULL,j_142 = NULL,k_142 = NULL;
  j_142 = t;
  if(match_cons(t, sym_Scope_2))
    {
      k_142 = ATgetArgument(t, 0);
      i_142 = ATgetArgument(t, 1);
      {
        ATerm k_58 = NULL,n_58 = NULL,p_58 = NULL,g_32 = NULL;
        t = SSLgetAnnotations(j_142);
        k_58 = t;
        t = k_142;
        t = y_146(t);
        n_58 = t;
        t = i_142;
        t = w_146(t);
        p_58 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_58, p_58);
        g_32 = t;
        t = SSLsetAnnotations(g_32, k_58);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          k_142 = ATgetArgument(t, 0);
          {
            ATerm x_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_32 = NULL,h_32 = NULL;
            t = SSLgetAnnotations(j_142);
            x_58 = t;
            t = k_142;
            if(match_cons(t, sym_Rule_3))
              {
                a_59 = ATgetArgument(t, 0);
                b_59 = ATgetArgument(t, 1);
                d_59 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(k_142);
            z_58 = t;
            t = a_59;
            t = w_146(t);
            e_59 = t;
            t = b_59;
            t = w_146(t);
            f_59 = t;
            t = d_59;
            t = w_146(t);
            g_59 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, e_59, f_59, g_59);
            h_32 = t;
            t = SSLsetAnnotations(h_32, z_58);
            h_59 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, h_59);
            i_32 = t;
            t = SSLsetAnnotations(i_32, x_58);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              k_142 = ATgetArgument(t, 0);
              i_142 = ATgetArgument(t, 1);
              g_142 = ATgetArgument(t, 2);
              {
                ATerm r_59 = NULL,w_59 = NULL,x_59 = NULL,z_59 = NULL,j_32 = NULL;
                t = SSLgetAnnotations(j_142);
                r_59 = t;
                t = k_142;
                t = y_146(t);
                w_59 = t;
                t = i_142;
                t = y_146(t);
                x_59 = t;
                t = g_142;
                t = y_146(t);
                z_59 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, w_59, x_59, z_59);
                j_32 = t;
                t = SSLsetAnnotations(j_32, r_59);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  k_142 = ATgetArgument(t, 0);
                  i_142 = ATgetArgument(t, 1);
                  g_142 = ATgetArgument(t, 2);
                  h_142 = ATgetArgument(t, 3);
                  {
                    ATerm s_60 = NULL,o_61 = NULL,p_61 = NULL,v_61 = NULL,w_61 = NULL,l_32 = NULL;
                    t = SSLgetAnnotations(j_142);
                    s_60 = t;
                    t = k_142;
                    t = y_146(t);
                    o_61 = t;
                    t = i_142;
                    t = y_146(t);
                    p_61 = t;
                    t = g_142;
                    t = y_146(t);
                    v_61 = t;
                    t = h_142;
                    t = w_146(t);
                    w_61 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, o_61, p_61, v_61, w_61);
                    l_32 = t;
                    t = SSLsetAnnotations(l_32, s_60);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_142 = ATgetArgument(t, 0);
                      i_142 = ATgetArgument(t, 1);
                      g_142 = ATgetArgument(t, 2);
                      h_142 = ATgetArgument(t, 3);
                      {
                        ATerm y_62 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL,l_63 = NULL,m_32 = NULL;
                        t = SSLgetAnnotations(j_142);
                        y_62 = t;
                        t = k_142;
                        t = y_146(t);
                        i_63 = t;
                        t = i_142;
                        t = y_146(t);
                        j_63 = t;
                        t = g_142;
                        t = y_146(t);
                        k_63 = t;
                        t = h_142;
                        t = w_146(t);
                        l_63 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, i_63, j_63, k_63, l_63);
                        m_32 = t;
                        t = SSLsetAnnotations(m_32, y_62);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          k_142 = ATgetArgument(t, 0);
                          i_142 = ATgetArgument(t, 1);
                          {
                            ATerm x_63 = NULL,d_64 = NULL,e_64 = NULL,n_32 = NULL;
                            t = SSLgetAnnotations(j_142);
                            x_63 = t;
                            t = k_142;
                            t = y_146(t);
                            d_64 = t;
                            t = i_142;
                            t = w_146(t);
                            e_64 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, d_64, e_64);
                            n_32 = t;
                            t = SSLsetAnnotations(n_32, x_63);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              k_142 = ATgetArgument(t, 0);
                              i_142 = ATgetArgument(t, 1);
                              {
                                ATerm y_64 = NULL,b_65 = NULL,c_65 = NULL,o_32 = NULL;
                                t = SSLgetAnnotations(j_142);
                                y_64 = t;
                                t = k_142;
                                t = y_146(t);
                                b_65 = t;
                                t = i_142;
                                t = w_146(t);
                                c_65 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, b_65, c_65);
                                o_32 = t;
                                t = SSLsetAnnotations(o_32, y_64);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  k_142 = ATgetArgument(t, 0);
                                  i_142 = ATgetArgument(t, 1);
                                  {
                                    ATerm e_66 = NULL,m_66 = NULL,q_66 = NULL,p_32 = NULL;
                                    t = SSLgetAnnotations(j_142);
                                    e_66 = t;
                                    t = k_142;
                                    t = y_146(t);
                                    m_66 = t;
                                    t = i_142;
                                    t = w_146(t);
                                    q_66 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, m_66, q_66);
                                    p_32 = t;
                                    t = SSLsetAnnotations(p_32, e_66);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      k_142 = ATgetArgument(t, 0);
                                      {
                                        ATerm z_66 = NULL,b_67 = NULL,t_32 = NULL;
                                        t = SSLgetAnnotations(j_142);
                                        z_66 = t;
                                        t = k_142;
                                        t = w_146(t);
                                        b_67 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, b_67);
                                        t_32 = t;
                                        t = SSLsetAnnotations(t_32, z_66);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          k_142 = ATgetArgument(t, 0);
                                          {
                                            ATerm r_67 = NULL,t_67 = NULL,u_32 = NULL;
                                            t = SSLgetAnnotations(j_142);
                                            r_67 = t;
                                            t = k_142;
                                            t = w_146(t);
                                            t_67 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, t_67);
                                            u_32 = t;
                                            t = SSLsetAnnotations(u_32, r_67);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              k_142 = ATgetArgument(t, 0);
                                              {
                                                ATerm h_68 = NULL,j_68 = NULL,w_32 = NULL;
                                                t = SSLgetAnnotations(j_142);
                                                h_68 = t;
                                                t = k_142;
                                                t = w_146(t);
                                                j_68 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, j_68);
                                                w_32 = t;
                                                t = SSLsetAnnotations(w_32, h_68);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  k_142 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm t_68 = NULL,b_69 = NULL,y_32 = NULL;
                                                    t = SSLgetAnnotations(j_142);
                                                    t_68 = t;
                                                    t = k_142;
                                                    t = w_146(t);
                                                    b_69 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, b_69);
                                                    y_32 = t;
                                                    t = SSLsetAnnotations(y_32, t_68);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm p_69 = NULL,r_69 = NULL,z_32 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      k_142 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(j_142);
                                                  p_69 = t;
                                                  t = k_142;
                                                  t = w_146(t);
                                                  r_69 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, r_69);
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
ATerm dynrule_targs_1_0 (ATerm f_147 (ATerm), ATerm t)
{
  ATerm g_143 = NULL,h_143 = NULL,k_143 = NULL;
  ATerm f_72 = t;
  int g_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          g_143 = ATgetArgument(t, 0);
          {
            ATerm h_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_72);
      t = g_143;
      if(match_cons(t, sym_DynRuleId_1))
        {
          h_143 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_143;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm j_72 = ATgetArgument(t, 0);
          ATerm k_72 = ATgetArgument(t, 1);
          k_143 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_143;
    }
  else
    {
      t = f_72;
      {
        ATerm l_72 = t;
        int m_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                g_143 = ATgetArgument(t, 0);
                {
                  ATerm n_72 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(m_72);
            t = g_143;
            if(match_cons(t, sym_DynRuleId_1))
              {
                h_143 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = h_143;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm o_72 = ATgetArgument(t, 0);
                ATerm p_72 = ATgetArgument(t, 1);
                k_143 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = k_143;
          }
        else
          {
            t = l_72;
            if(match_cons(t, sym_AddDynRule_2))
              {
                g_143 = ATgetArgument(t, 0);
                {
                  ATerm q_72 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = g_143;
            if(match_cons(t, sym_DynRuleId_1))
              {
                h_143 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = h_143;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm s_72 = ATgetArgument(t, 0);
                ATerm t_72 = ATgetArgument(t, 1);
                k_143 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = k_143;
          }
      }
    }
  return(t);
}
static ATerm j_18 (ATerm t)
{
  ATerm a_144 = NULL;
  ATerm u_72 = t;
  int v_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_144 = ATgetArgument(t, 0);
          {
            ATerm w_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_72);
      t = a_144;
    }
  else
    {
      t = u_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_144 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_144;
    }
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm g_144 = NULL;
  ATerm x_72 = t;
  int y_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_144 = ATgetArgument(t, 0);
          {
            ATerm z_72 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_72);
      t = g_144;
    }
  else
    {
      t = x_72;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_144 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_144;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm v_143 = NULL;
  ATerm a_73 = t;
  int c_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm e_73 = ATgetArgument(t, 0);
          ATerm f_73 = ATgetArgument(t, 1);
          v_143 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(c_73);
      t = v_143;
      t = map_1_0(j_18, t);
    }
  else
    {
      t = a_73;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm g_73 = ATgetArgument(t, 0);
          ATerm h_73 = ATgetArgument(t, 1);
          v_143 = ATgetArgument(t, 2);
          {
            ATerm i_73 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_143;
      t = map_1_0(k_18, t);
    }
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm g_145 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_145);
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm j_73 = t;
  int k_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_73);
    }
  else
    {
      t = j_73;
      {
        ATerm l_73 = t;
        int n_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_73);
          }
        else
          {
            t = l_73;
            {
              ATerm p_73 = t;
              int q_73 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_145 = NULL,j_145 = NULL,k_145 = NULL,l_145 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_145 = ATgetArgument(t, 0);
                      j_145 = ATgetArgument(t, 1);
                      k_145 = ATgetArgument(t, 2);
                      l_145 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_145;
                  t = map_1_0(n_18, t);
                  LocalPopChoice(q_73);
                }
              else
                {
                  t = p_73;
                  {
                    ATerm r_73 = t;
                    int s_73 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_73);
                      }
                    else
                      {
                        t = r_73;
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
  ATerm s_145 = NULL;
  ATerm t_73 = t;
  int u_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_145 = ATgetArgument(t, 0);
          {
            ATerm v_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_73);
      t = s_145;
    }
  else
    {
      t = t_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_145 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_145;
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
  ATerm x_145 = NULL;
  ATerm w_73 = t;
  int x_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_145 = ATgetArgument(t, 0);
          {
            ATerm c_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_73);
      t = x_145;
    }
  else
    {
      t = w_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_145 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_145;
    }
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm d_146 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_146);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm d_74 = t;
  int g_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_74);
    }
  else
    {
      t = d_74;
      {
        ATerm h_74 = t;
        int i_74 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm f_146 = NULL,g_146 = NULL,h_146 = NULL,i_146 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_146 = ATgetArgument(t, 0);
                      g_146 = ATgetArgument(t, 1);
                      h_146 = ATgetArgument(t, 2);
                      i_146 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_146;
                  t = map_1_0(s_18, t);
                  LocalPopChoice(k_74);
                }
              else
                {
                  t = j_74;
                  {
                    ATerm l_74 = t;
                    int m_74 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(m_74);
                      }
                    else
                      {
                        t = l_74;
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
  ATerm p_146 = NULL;
  ATerm o_74 = t;
  int p_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_146 = ATgetArgument(t, 0);
          {
            ATerm r_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_74);
      t = p_146;
    }
  else
    {
      t = o_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_146;
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
  ATerm u_146 = NULL;
  ATerm s_74 = t;
  int t_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_146 = ATgetArgument(t, 0);
          {
            ATerm u_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_74);
      t = u_146;
    }
  else
    {
      t = s_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_146 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_146;
    }
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm b_147 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_147 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_147);
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm v_74 = t;
  int w_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
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
                  ATerm d_147 = NULL,e_147 = NULL,g_147 = NULL,h_147 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_147 = ATgetArgument(t, 0);
                      e_147 = ATgetArgument(t, 1);
                      g_147 = ATgetArgument(t, 2);
                      h_147 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_147;
                  t = map_1_0(x_18, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(c_75);
                      }
                    else
                      {
                        t = b_75;
                        t = dynrule_targs_1_0(z_18, t);
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
  ATerm o_147 = NULL;
  ATerm d_75 = t;
  int e_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_147 = ATgetArgument(t, 0);
          {
            ATerm f_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_75);
      t = o_147;
    }
  else
    {
      t = d_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_147 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_147;
    }
  return(t);
}
static ATerm z_18 (ATerm t)
{
  t = map_1_0(a_19, t);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm e_148 = NULL;
  ATerm g_75 = t;
  int h_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_148 = ATgetArgument(t, 0);
          {
            ATerm i_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_75);
      t = e_148;
    }
  else
    {
      t = g_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_148 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_148;
    }
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm i_148 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_148 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_148);
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm l_75 = t;
  int o_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_75);
    }
  else
    {
      t = l_75;
      {
        ATerm p_75 = t;
        int q_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_75);
          }
        else
          {
            t = p_75;
            {
              ATerm r_75 = t;
              int s_75 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_148 = NULL,l_148 = NULL,m_148 = NULL,n_148 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_148 = ATgetArgument(t, 0);
                      l_148 = ATgetArgument(t, 1);
                      m_148 = ATgetArgument(t, 2);
                      n_148 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_148;
                  t = map_1_0(d_19, t);
                  LocalPopChoice(s_75);
                }
              else
                {
                  t = r_75;
                  {
                    ATerm v_75 = t;
                    int w_75 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_75);
                      }
                    else
                      {
                        t = v_75;
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
static ATerm d_19 (ATerm t)
{
  ATerm v_148 = NULL;
  ATerm x_75 = t;
  int y_75 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_148 = ATgetArgument(t, 0);
          {
            ATerm z_75 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_75);
      t = v_148;
    }
  else
    {
      t = x_75;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_148 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_148;
    }
  return(t);
}
static ATerm e_19 (ATerm t)
{
  t = map_1_0(h_19, t);
  return(t);
}
static ATerm h_19 (ATerm t)
{
  ATerm a_149 = NULL;
  ATerm a_76 = t;
  int b_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_149 = ATgetArgument(t, 0);
          {
            ATerm c_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_76);
      t = a_149;
    }
  else
    {
      t = a_76;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_149 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_149;
    }
  return(t);
}
static ATerm l_19 (ATerm t)
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
static ATerm m_19 (ATerm t)
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
                  t = map_1_0(n_19, t);
                  LocalPopChoice(i_76);
                }
              else
                {
                  t = h_76;
                  {
                    ATerm j_76 = t;
                    int k_76 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(k_76);
                      }
                    else
                      {
                        t = j_76;
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
  ATerm q_149 = NULL;
  ATerm l_76 = t;
  int m_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_149 = ATgetArgument(t, 0);
          {
            ATerm n_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_76);
      t = q_149;
    }
  else
    {
      t = l_76;
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
static ATerm o_19 (ATerm t)
{
  t = map_1_0(p_19, t);
  return(t);
}
static ATerm p_19 (ATerm t)
{
  ATerm w_149 = NULL;
  ATerm o_76 = t;
  int q_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_149 = ATgetArgument(t, 0);
          {
            ATerm r_76 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_76);
      t = w_149;
    }
  else
    {
      t = o_76;
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
ATerm Bind4_0_0 (ATerm t)
{
  ATerm e_145 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      e_145 = ATgetArgument(t, 0);
      t = e_145;
      t = free_vars_3_0(l_18, m_18, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          e_145 = ATgetArgument(t, 0);
          t = e_145;
          t = free_vars_3_0(q_18, r_18, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              e_145 = ATgetArgument(t, 0);
              t = e_145;
              t = free_vars_3_0(v_18, w_18, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  e_145 = ATgetArgument(t, 0);
                  t = e_145;
                  t = free_vars_3_0(b_19, c_19, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      e_145 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = e_145;
                  t = free_vars_3_0(l_19, m_19, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm t_19 (ATerm t)
{
  ATerm m_150 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_150 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_150);
  return(t);
}
static ATerm u_19 (ATerm t)
{
  ATerm s_76 = t;
  int t_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_76);
    }
  else
    {
      t = s_76;
      {
        ATerm u_76 = t;
        int v_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_76);
          }
        else
          {
            t = u_76;
            {
              ATerm x_76 = t;
              int y_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_150 = NULL,p_150 = NULL,q_150 = NULL,r_150 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_150 = ATgetArgument(t, 0);
                      p_150 = ATgetArgument(t, 1);
                      q_150 = ATgetArgument(t, 2);
                      r_150 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_150;
                  t = map_1_0(v_19, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(a_77);
                      }
                    else
                      {
                        t = z_76;
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
static ATerm v_19 (ATerm t)
{
  ATerm y_150 = NULL;
  ATerm b_77 = t;
  int c_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_150 = ATgetArgument(t, 0);
          {
            ATerm d_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_77);
      t = y_150;
    }
  else
    {
      t = b_77;
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
static ATerm a_20 (ATerm t)
{
  t = map_1_0(d_20, t);
  return(t);
}
static ATerm d_20 (ATerm t)
{
  ATerm d_151 = NULL;
  ATerm e_77 = t;
  int f_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_151 = ATgetArgument(t, 0);
          {
            ATerm g_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_77);
      t = d_151;
    }
  else
    {
      t = e_77;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_151 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_151;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm e_150 = NULL,j_150 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_150 = ATgetArgument(t, 0);
      t = j_150;
      if(match_cons(t, sym_Rule_3))
        {
          e_150 = ATgetArgument(t, 0);
          {
            ATerm h_77 = ATgetArgument(t, 1);
          }
          {
            ATerm i_77 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_150;
      t = free_vars_3_0(t_19, u_19, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_150 = ATgetArgument(t, 0);
          {
            ATerm k_77 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_150;
    }
  return(t);
}
static ATerm e_14 (ATerm o_125 (ATerm), ATerm w_30, ATerm v_30, ATerm t)
{
  static ATerm w_151 (ATerm t)
  {
    ATerm r_151 = NULL,s_151 = NULL,t_151 = NULL;
    r_151 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_151 = ATgetFirst((ATermList) t);
            t_151 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_77 = t;
          int m_77 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_151;
              {
                static ATerm f_20 (ATerm t)
                {
                  t = v_30;
                  return(t);
                }
                t = f_14(o_125, f_20, s_151, t_151, t);
              }
              t = w_151(t);
              LocalPopChoice(m_77);
            }
          else
            {
              t = l_77;
              {
                ATerm z_69 = NULL,d_70 = NULL,x_33 = NULL;
                t = SSLgetAnnotations(r_151);
                z_69 = t;
                t = t_151;
                t = w_151(t);
                d_70 = t;
                t = (ATerm) ATinsert(CheckATermList(d_70), s_151);
                x_33 = t;
                t = SSLsetAnnotations(x_33, z_69);
              }
            }
        }
      }
    return(t);
  }
  t = w_30;
  t = w_151(t);
  return(t);
}
static ATerm f_14 (ATerm r_125 (ATerm), ATerm s_125 (ATerm), ATerm a_31, ATerm z_30, ATerm t)
{
  t = s_125(t);
  {
    static ATerm g_20 (ATerm t)
    {
      ATerm a_152 = NULL;
      a_152 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_31, a_152);
      t = r_125(t);
      return(t);
    }
    t = fetch_1_0(g_20, t);
  }
  t = z_30;
  return(t);
}
static ATerm g_14 (ATerm j_125 (ATerm), ATerm u_30, ATerm t_30, ATerm t)
{
  static ATerm q_152 (ATerm t)
  {
    ATerm l_152 = NULL,m_152 = NULL,n_152 = NULL;
    l_152 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_152;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_152 = ATgetFirst((ATermList) t);
            n_152 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_77 = t;
          int o_77 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = l_152;
              {
                static ATerm i_20 (ATerm t)
                {
                  t = t_30;
                  return(t);
                }
                t = f_14(j_125, i_20, m_152, n_152, t);
              }
              t = q_152(t);
              LocalPopChoice(o_77);
            }
          else
            {
              t = n_77;
              {
                ATerm q_70 = NULL,t_70 = NULL,d_34 = NULL;
                t = SSLgetAnnotations(l_152);
                q_70 = t;
                t = n_152;
                t = q_152(t);
                t_70 = t;
                t = (ATerm) ATinsert(CheckATermList(t_70), m_152);
                d_34 = t;
                t = SSLsetAnnotations(d_34, q_70);
              }
            }
        }
      }
    return(t);
  }
  t = u_30;
  t = q_152(t);
  return(t);
}
ATerm genzip_4_0 (ATerm h_123 (ATerm), ATerm i_123 (ATerm), ATerm j_123 (ATerm), ATerm k_123 (ATerm), ATerm t)
{
  static ATerm y_152 (ATerm t)
  {
    ATerm p_77 = t;
    int q_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_123(t);
        LocalPopChoice(q_77);
      }
    else
      {
        t = p_77;
        {
          ATerm s_152 = NULL,t_152 = NULL,u_152 = NULL,v_152 = NULL,w_152 = NULL,x_152 = NULL,f_34 = NULL;
          t = i_123(t);
          x_152 = t;
          if(match_cons(t, sym__2))
            {
              t_152 = ATgetArgument(t, 0);
              u_152 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_152);
          s_152 = t;
          t = t_152;
          t = k_123(t);
          v_152 = t;
          t = u_152;
          t = y_152(t);
          w_152 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_152, w_152);
          f_34 = t;
          t = SSLsetAnnotations(f_34, s_152);
          t = j_123(t);
        }
      }
    return(t);
  }
  t = y_152(t);
  return(t);
}
static ATerm j_20 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_77 = ATgetArgument(t, 0);
      if(((ATgetType(r_77) != AT_LIST) || !(ATisEmpty(r_77))))
        _fail(t);
      {
        ATerm s_77 = ATgetArgument(t, 1);
        if(((ATgetType(s_77) != AT_LIST) || !(ATisEmpty(s_77))))
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
  ATerm f_153 = NULL,g_153 = NULL,h_153 = NULL,i_153 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_77 = ATgetArgument(t, 0);
      if(((ATgetType(t_77) == AT_LIST) && !(ATisEmpty(t_77))))
        {
          f_153 = ATgetFirst((ATermList) t_77);
          g_153 = (ATerm) ATgetNext((ATermList) t_77);
        }
      else
        _fail(t);
      {
        ATerm u_77 = ATgetArgument(t, 1);
        if(((ATgetType(u_77) == AT_LIST) && !(ATisEmpty(u_77))))
          {
            h_153 = ATgetFirst((ATermList) u_77);
            i_153 = (ATerm) ATgetNext((ATermList) u_77);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_153, h_153), (ATerm) ATmakeAppl(sym__2, g_153, i_153));
  return(t);
}
static ATerm p_20 (ATerm t)
{
  ATerm j_153 = NULL,k_153 = NULL;
  if(match_cons(t, sym__2))
    {
      j_153 = ATgetArgument(t, 0);
      k_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_153), j_153);
  return(t);
}
static ATerm l_14 (ATerm f_688, ATerm k_688, ATerm l_68, ATerm t)
{
  ATerm a_153 = NULL,b_153 = NULL,c_153 = NULL,d_153 = NULL;
  t = SSL_explode_term(k_688);
  if(match_cons(t, sym__2))
    {
      a_153 = ATgetArgument(t, 0);
      c_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_688);
  if(match_cons(t, sym__2))
    {
      if((a_153 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_153, c_153);
  t = genzip_4_0(j_20, o_20, p_20, _id, t);
  d_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_153, l_68);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm t)
{
  static ATerm m_153 (ATerm t)
  {
    ATerm v_77 = t;
    int w_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_114(t);
        LocalPopChoice(w_77);
      }
    else
      {
        t = v_77;
        t = j_114(t);
        t = m_153(t);
      }
    return(t);
  }
  t = m_153(t);
  return(t);
}
ATerm for_3_0 (ATerm l_114 (ATerm), ATerm m_114 (ATerm), ATerm n_114 (ATerm), ATerm t)
{
  t = l_114(t);
  t = while_not_2_0(m_114, n_114, t);
  return(t);
}
static ATerm q_20 (ATerm t)
{
  ATerm t_153 = NULL;
  t_153 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, t_153);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm u_153 = NULL,v_153 = NULL,w_153 = NULL,x_153 = NULL,n_34 = NULL;
  x_153 = t;
  if(match_cons(t, sym__2))
    {
      v_153 = ATgetArgument(t, 0);
      w_153 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_153);
  u_153 = t;
  t = w_153;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_153, w_153);
  n_34 = t;
  t = SSLsetAnnotations(n_34, u_153);
  return(t);
}
static ATerm v_20 (ATerm t)
{
  ATerm q_154 = NULL,r_154 = NULL,s_154 = NULL,t_154 = NULL,u_154 = NULL;
  q_154 = t;
  if(match_cons(t, sym__2))
    {
      r_154 = ATgetArgument(t, 0);
      s_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_154;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_154 = ATgetFirst((ATermList) t);
      u_154 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_77 = t;
        int z_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_155(r_154, s_154, q_154, t);
            LocalPopChoice(z_77);
          }
        else
          {
            t = x_77;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_154), t_154), u_154);
          }
      }
    }
  else
    {
      t = e_155(r_154, s_154, q_154, t);
    }
  return(t);
}
static ATerm e_155 (ATerm y_153, ATerm z_153, ATerm a_154, ATerm t)
{
  ATerm b_154 = NULL,e_154 = NULL,r_34 = NULL,h_154 = NULL,i_154 = NULL,j_154 = NULL,k_154 = NULL;
  t = SSLgetAnnotations(a_154);
  b_154 = t;
  t = z_153;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_154 = ATgetFirst((ATermList) t);
      k_154 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_154;
  if(match_cons(t, sym__2))
    {
      i_154 = ATgetArgument(t, 0);
      j_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_78 = t;
    int b_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_154;
        if((i_154 != t))
          {
            _fail(t);
          }
        t = k_154;
        LocalPopChoice(b_78);
      }
    else
      {
        t = a_78;
        t = z_153;
        t = l_14(i_154, j_154, k_154, t);
      }
  }
  e_154 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_153, e_154);
  r_34 = t;
  t = SSLsetAnnotations(r_34, b_154);
  return(t);
}
static ATerm b_21 (ATerm t)
{
  ATerm d_155 = NULL;
  if(match_cons(t, sym__2))
    {
      d_155 = ATgetArgument(t, 0);
      if((d_155 != ATgetArgument(t, 1)))
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
  ATerm c_78 = t;
  int d_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(q_20, s_20, v_20, t);
      LocalPopChoice(d_78);
    }
  else
    {
      t = c_78;
      {
        ATerm y_154 = NULL,z_154 = NULL,a_155 = NULL;
        y_154 = t;
        if(match_cons(t, sym__2))
          {
            z_154 = ATgetArgument(t, 0);
            a_155 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_154;
        t = g_14(b_21, z_154, a_155, t);
      }
    }
  return(t);
}
static ATerm d_21 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_21 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_21 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL;
  if(match_cons(t, sym__2))
    {
      d_71 = ATgetArgument(t, 0);
      e_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_14(j_21, d_71, e_71, t);
  return(t);
}
static ATerm j_21 (ATerm t)
{
  ATerm f_71 = NULL;
  if(match_cons(t, sym__2))
    {
      f_71 = ATgetArgument(t, 0);
      if((f_71 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_22 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_22 (ATerm t)
{
  ATerm s_71 = NULL,t_71 = NULL;
  if(match_cons(t, sym__2))
    {
      s_71 = ATgetArgument(t, 0);
      t_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_14(f_22, s_71, t_71, t);
  return(t);
}
static ATerm f_22 (ATerm t)
{
  ATerm u_71 = NULL;
  if(match_cons(t, sym__2))
    {
      u_71 = ATgetArgument(t, 0);
      if((u_71 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm j_144 (ATerm), ATerm k_144 (ATerm), ATerm l_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm s_155 (ATerm t)
  {
    ATerm e_78 = t;
    int h_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_144(t);
        LocalPopChoice(h_78);
      }
    else
      {
        t = e_78;
        {
          ATerm i_78 = t;
          int j_78 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_155 = NULL,h_155 = NULL,y_70 = NULL,z_70 = NULL;
              g_155 = t;
              t = k_144(t);
              h_155 = t;
              t = g_155;
              {
                static ATerm c_21 (ATerm t)
                {
                  ATerm j_155 = NULL;
                  t = s_155(t);
                  j_155 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_155, h_155);
                  t = diff_0_0(t);
                  return(t);
                }
                t = l_144(c_21, s_155, d_21, t);
              }
              z_70 = t;
              t = SSL_explode_term(z_70);
              if(match_cons(t, sym__2))
                {
                  ATerm k_78 = ATgetArgument(t, 0);
                  y_70 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_70;
              t = foldr_3_0(e_21, f_21, _id, t);
              LocalPopChoice(j_78);
            }
          else
            {
              t = i_78;
              {
                ATerm h_71 = NULL,i_71 = NULL;
                i_71 = t;
                t = SSL_explode_term(i_71);
                if(match_cons(t, sym__2))
                  {
                    ATerm l_78 = ATgetArgument(t, 0);
                    h_71 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_71;
                t = foldr_3_0(b_22, d_22, s_155, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_155(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm s_114 (ATerm), ATerm t)
{
  static ATerm g_22 (ATerm t)
  {
    t = bottomup_1_0(s_114, t);
    return(t);
  }
  t = SRTS_all(g_22, t);
  t = s_114(t);
  return(t);
}
static ATerm p_14 (ATerm s_61, ATerm t_61, ATerm t)
{
  ATerm t_155 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_61, t_61);
  t = i_15(s_61, t_61, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_155 = ATgetFirst((ATermList) t);
      {
        ATerm m_78 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_155;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm h_156 = NULL,i_156 = NULL;
  h_156 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_78 = t;
    int p_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_72 = NULL;
        t = term_q_78;
        i_72 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_q_78, h_156);
        t = p_14(i_72, h_156, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm s_78 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_78) != ATmakeSymbol("f_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, i_156, (ATerm) ATempty);
        LocalPopChoice(p_78);
      }
    else
      {
        t = n_78;
        {
          ATerm r_72 = NULL;
          t = term_q_78;
          r_72 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_78, h_156);
          t = p_14(r_72, h_156, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm t_78 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_78) != ATmakeSymbol("b_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, i_156, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm j_116 (ATerm), ATerm t)
{
  static ATerm l_156 (ATerm t)
  {
    ATerm u_78 = t;
    int v_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_116(t);
        LocalPopChoice(v_78);
      }
    else
      {
        t = u_78;
        t = SRTS_all(l_156, t);
      }
    return(t);
  }
  t = l_156(t);
  return(t);
}
static ATerm q_14 (ATerm m_134 (ATerm), ATerm y_44, ATerm w_44, ATerm t)
{
  ATerm m_156 = NULL,n_156 = NULL,o_156 = NULL,p_156 = NULL,q_156 = NULL,r_156 = NULL,s_156 = NULL,t_156 = NULL;
  p_156 = t;
  t = m_134(t);
  m_156 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_156, y_44, w_44);
  t = j_15(m_156, y_44, w_44, t);
  {
    ATerm w_78 = t;
    int x_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_156 = NULL;
        t = term_y_78;
        u_156 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_156, term_y_78);
        t = i_15(m_156, u_156, t);
        LocalPopChoice(x_78);
      }
    else
      {
        t = w_78;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_156 = ATgetFirst((ATermList) t);
      o_156 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_156, term_y_78, (ATerm) ATinsert(CheckATermList(o_156), (ATerm) ATinsert(CheckATermList(n_156), y_44)));
  t = lookup_table_0_1(m_156, t);
  t_156 = t;
  t = term_y_78;
  q_156 = t;
  t = (ATerm) ATinsert(CheckATermList(o_156), (ATerm) ATinsert(CheckATermList(n_156), y_44));
  r_156 = t;
  t = t_156;
  if(match_cons(t, sym_Hashtable_1))
    {
      s_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(q_156, r_156, s_156, t);
  t = p_156;
  return(t);
}
static ATerm h_22 (ATerm t)
{
  t = term_q_78;
  return(t);
}
static ATerm i_22 (ATerm t)
{
  t = term_q_78;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm y_156 = NULL,a_157 = NULL,b_157 = NULL,c_157 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      a_157 = ATgetArgument(t, 0);
      b_157 = ATgetArgument(t, 1);
      y_156 = ATgetArgument(t, 2);
      {
        ATerm f_157 = NULL,g_157 = NULL;
        t = b_157;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, a_157);
        f_157 = t;
        t = term_a_79;
        g_157 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_157), term_a_79);
        t = q_14(h_22, f_157, g_157, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, a_157, (ATerm)ATempty, y_156);
      }
    }
  else
    {
      ATerm j_157 = NULL,k_157 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          a_157 = ATgetArgument(t, 0);
          b_157 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_157;
      if(match_cons(t, sym_ConstType_1))
        {
          c_157 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, a_157);
      j_157 = t;
      t = term_d_79;
      k_157 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, a_157), term_d_79);
      t = q_14(i_22, j_157, k_157, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, a_157, (ATerm) ATmakeAppl(sym_ConstType_1, c_157));
    }
  return(t);
}
static ATerm r_14 (ATerm m_61, ATerm n_61, ATerm t)
{
  ATerm o_157 = NULL,p_157 = NULL;
  p_157 = t;
  {
    ATerm e_79 = t;
    int f_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, m_61, n_61);
        t = i_15(m_61, n_61, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_79 = ATgetFirst((ATermList) t);
            o_157 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(f_79);
        {
          ATerm q_157 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, m_61, n_61, o_157);
          t = lookup_table_0_1(m_61, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              q_157 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_15(n_61, o_157, q_157, t);
          t = (ATerm) ATmakeAppl(sym__3, m_61, n_61, o_157);
        }
      }
    else
      {
        t = e_79;
        {
          ATerm s_157 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, m_61, n_61);
          t = lookup_table_0_1(m_61, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              s_157 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_15(n_61, s_157, t);
          t = (ATerm) ATmakeAppl(sym__2, m_61, n_61);
        }
      }
  }
  t = p_157;
  return(t);
}
ATerm end_scope_1_0 (ATerm j_134 (ATerm), ATerm t)
{
  ATerm u_157 = NULL,v_157 = NULL,w_157 = NULL,x_157 = NULL,y_157 = NULL,z_157 = NULL,a_158 = NULL;
  x_157 = t;
  t = j_134(t);
  w_157 = t;
  {
    ATerm i_79 = t;
    int j_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_158 = NULL;
        t = term_y_78;
        b_158 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_157, term_y_78);
        t = i_15(w_157, b_158, t);
        LocalPopChoice(j_79);
      }
    else
      {
        t = i_79;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_157 = ATgetFirst((ATermList) t);
      u_157 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_157, term_y_78, u_157);
  t = lookup_table_0_1(w_157, t);
  a_158 = t;
  t = term_y_78;
  y_157 = t;
  t = a_158;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(y_157, u_157, z_157, t);
  t = v_157;
  {
    static ATerm k_22 (ATerm t)
    {
      ATerm c_158 = NULL;
      c_158 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_157, c_158);
      t = r_14(w_157, c_158, t);
      return(t);
    }
    t = map_1_0(k_22, t);
  }
  t = x_157;
  return(t);
}
ATerm restore_always_2_0 (ATerm n_113 (ATerm), ATerm o_113 (ATerm), ATerm t)
{
  ATerm k_79 = t;
  int l_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_113(t);
      t = o_113(t);
      LocalPopChoice(l_79);
    }
  else
    {
      t = k_79;
      t = o_113(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm i_134 (ATerm), ATerm t)
{
  ATerm e_158 = NULL,f_158 = NULL,g_158 = NULL,h_158 = NULL,i_158 = NULL,j_158 = NULL,k_158 = NULL;
  f_158 = t;
  t = i_134(t);
  e_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_158, term_y_78);
  {
    ATerm m_79 = t;
    int q_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_158 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_79 = ATgetArgument(t, 0);
            ATerm s_79 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_y_78;
        o_158 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_158, term_y_78);
        t = i_15(e_158, o_158, t);
        LocalPopChoice(q_79);
      }
    else
      {
        t = m_79;
        t = (ATerm) ATempty;
      }
  }
  g_158 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_158, term_y_78, (ATerm) ATinsert(CheckATermList(g_158), (ATerm) ATempty));
  t = lookup_table_0_1(e_158, t);
  k_158 = t;
  t = term_y_78;
  h_158 = t;
  t = (ATerm) ATinsert(CheckATermList(g_158), (ATerm) ATempty);
  i_158 = t;
  t = k_158;
  if(match_cons(t, sym_Hashtable_1))
    {
      j_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(h_158, i_158, j_158, t);
  t = f_158;
  return(t);
}
ATerm scope_2_0 (ATerm k_134 (ATerm), ATerm l_134 (ATerm), ATerm t)
{
  static ATerm l_22 (ATerm t)
  {
    t = end_scope_1_0(k_134, t);
    return(t);
  }
  t = begin_scope_1_0(k_134, t);
  t = restore_always_2_0(l_134, l_22, t);
  return(t);
}
static ATerm n_22 (ATerm t)
{
  t = term_q_78;
  return(t);
}
static ATerm o_22 (ATerm t)
{
  ATerm t_158 = NULL,u_158 = NULL,v_158 = NULL,w_158 = NULL,y_34 = NULL;
  w_158 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_158);
  t_158 = t;
  t = u_158;
  t = map_1_0(p_22, t);
  v_158 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_158);
  y_34 = t;
  t = SSLsetAnnotations(y_34, t_158);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm p_22 (ATerm t)
{
  ATerm j_159 = NULL,k_159 = NULL;
  k_159 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      j_159 = ATgetArgument(t, 0);
      {
        ATerm w_79 = t;
        int x_79 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_73 = NULL,d_73 = NULL,w_34 = NULL;
            t = SSLgetAnnotations(k_159);
            b_73 = t;
            t = j_159;
            t = map_1_0(y_22, t);
            d_73 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, d_73);
            w_34 = t;
            t = SSLsetAnnotations(w_34, b_73);
            LocalPopChoice(x_79);
          }
        else
          {
            t = w_79;
            t = k_159;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          j_159 = ATgetArgument(t, 0);
          {
            ATerm y_79 = t;
            int z_79 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_73 = NULL,o_73 = NULL,x_34 = NULL;
                t = SSLgetAnnotations(k_159);
                m_73 = t;
                t = j_159;
                t = map_1_0(z_22, t);
                o_73 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, o_73);
                x_34 = t;
                t = SSLsetAnnotations(x_34, m_73);
                LocalPopChoice(z_79);
              }
            else
              {
                t = y_79;
                t = k_159;
              }
          }
        }
      else
        {
          t = k_159;
        }
    }
  return(t);
}
static ATerm y_22 (ATerm t)
{
  ATerm a_80 = t;
  int b_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(b_80);
    }
  else
    {
      t = a_80;
    }
  return(t);
}
static ATerm z_22 (ATerm t)
{
  ATerm c_80 = t;
  int d_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(d_80);
    }
  else
    {
      t = c_80;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(n_22, o_22, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_159 = NULL,s_159 = NULL,t_159 = NULL;
  r_159 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_159;
    }
  else
    {
      static ATerm a_23 (ATerm t)
      {
        t = not_null(t_159);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_159 = ATgetFirst((ATermList) t);
          if(((t_159 != NULL) && (t_159 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_159 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_159;
      t = at_end_1_0(a_23, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm g_129 (ATerm), ATerm t)
{
  ATerm i_160 = NULL,j_160 = NULL,k_160 = NULL;
  i_160 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_160;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_160 = ATgetFirst((ATermList) t);
          k_160 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm e_80 = t;
        int f_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_74 = NULL,e_74 = NULL,f_74 = NULL,l_35 = NULL;
            t = SSLgetAnnotations(i_160);
            b_74 = t;
            t = j_160;
            t = g_129(t);
            e_74 = t;
            t = k_160;
            t = filter_1_0(g_129, t);
            f_74 = t;
            t = (ATerm) ATinsert(CheckATermList(f_74), e_74);
            l_35 = t;
            t = SSLsetAnnotations(l_35, b_74);
            LocalPopChoice(f_80);
          }
        else
          {
            t = e_80;
            t = k_160;
            t = filter_1_0(g_129, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm u_121 (ATerm), ATerm t)
{
  static ATerm a_161 (ATerm t)
  {
    ATerm x_160 = NULL,y_160 = NULL,z_160 = NULL;
    z_160 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_160 = ATgetFirst((ATermList) t);
        y_160 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm n_74 = NULL,q_74 = NULL,r_35 = NULL;
          t = SSLgetAnnotations(z_160);
          n_74 = t;
          t = y_160;
          t = a_161(t);
          q_74 = t;
          t = (ATerm) ATinsert(CheckATermList(q_74), x_160);
          r_35 = t;
          t = SSLsetAnnotations(r_35, n_74);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_160;
        t = u_121(t);
      }
    return(t);
  }
  t = a_161(t);
  return(t);
}
static ATerm m_161 (ATerm e_161, ATerm t)
{
  ATerm f_161 = NULL;
  t = SSL_explode_term(e_161);
  if(match_cons(t, sym__2))
    {
      ATerm g_80 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_80) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_161;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_161 = NULL,i_161 = NULL,j_161 = NULL;
  j_161 = t;
  if(match_cons(t, sym__2))
    {
      h_161 = ATgetArgument(t, 0);
      i_161 = ATgetArgument(t, 1);
      {
        ATerm h_80 = t;
        int i_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm b_23 (ATerm t)
            {
              t = i_161;
              return(t);
            }
            t = h_161;
            t = at_end_1_0(b_23, t);
            LocalPopChoice(i_80);
          }
        else
          {
            t = h_80;
            t = m_161(j_161, t);
          }
      }
    }
  else
    {
      t = m_161(j_161, t);
    }
  return(t);
}
static ATerm u_14 (ATerm z_34, ATerm l_34, ATerm t)
{
  ATerm n_161 = NULL,o_161 = NULL;
  static ATerm d_23 (ATerm t)
  {
    ATerm p_161 = NULL,q_161 = NULL,r_161 = NULL,s_161 = NULL;
    s_161 = t;
    t = SSL_explode_term(s_161);
    if(match_cons(t, sym__2))
      {
        if(((n_161 != NULL) && (n_161 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          n_161 = ATgetArgument(t, 0);
        {
          ATerm j_80 = ATgetArgument(t, 1);
          if(((ATgetType(j_80) == AT_LIST) && !(ATisEmpty(j_80))))
            {
              p_161 = ATgetFirst((ATermList) j_80);
              {
                ATerm k_80 = (ATerm) ATgetNext((ATermList) j_80);
                if(((ATgetType(k_80) != AT_LIST) || !(ATisEmpty(k_80))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, p_161, not_null(o_161));
    t = conc_0_0(t);
    q_161 = t;
    t = (ATerm) ATinsert(ATempty, q_161);
    r_161 = t;
    t = SSL_mkterm(n_161, r_161);
    return(t);
  }
  t = SSL_explode_term(z_34);
  if(match_cons(t, sym__2))
    {
      if(((n_161 != NULL) && (n_161 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_161 = ATgetArgument(t, 0);
      {
        ATerm l_80 = ATgetArgument(t, 1);
        if(((ATgetType(l_80) == AT_LIST) && !(ATisEmpty(l_80))))
          {
            if(((o_161 != NULL) && (o_161 != ATgetFirst((ATermList) l_80))))
              _fail(ATgetFirst((ATermList) l_80));
            else
              o_161 = ATgetFirst((ATermList) l_80);
            {
              ATerm m_80 = (ATerm) ATgetNext((ATermList) l_80);
              if(((ATgetType(m_80) != AT_LIST) || !(ATisEmpty(m_80))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_34;
  t = fetch_1_0(d_23, t);
  return(t);
}
ATerm foldr_3_0 (ATerm e_128 (ATerm), ATerm f_128 (ATerm), ATerm g_128 (ATerm), ATerm t)
{
  ATerm u_161 = NULL,v_161 = NULL,w_161 = NULL;
  u_161 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_161;
      t = e_128(t);
    }
  else
    {
      ATerm z_161 = NULL,a_162 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_161 = ATgetFirst((ATermList) t);
          w_161 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_161;
      t = g_128(t);
      z_161 = t;
      t = w_161;
      t = foldr_3_0(e_128, f_128, g_128, t);
      a_162 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_161, a_162);
      t = f_128(t);
    }
  return(t);
}
static ATerm e_23 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_80), term_o_80), term_n_80);
  return(t);
}
static ATerm f_23 (ATerm t)
{
  ATerm h_162 = NULL,i_162 = NULL;
  if(match_cons(t, sym__2))
    {
      h_162 = ATgetArgument(t, 0);
      i_162 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_14(h_162, i_162, t);
  return(t);
}
static ATerm j_23 (ATerm t)
{
  ATerm j_162 = NULL,k_162 = NULL;
  k_162 = t;
  if(match_cons(t, sym_Signature_1))
    {
      j_162 = ATgetArgument(t, 0);
      {
        ATerm q_80 = t;
        int r_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_162 = NULL;
            t = j_162;
            t = filter_1_0(p_23, t);
            t = concat_0_0(t);
            m_162 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, m_162);
            LocalPopChoice(r_80);
          }
        else
          {
            t = q_80;
            t = k_162;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          j_162 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, j_162);
        }
      else
        {
          t = k_162;
        }
    }
  return(t);
}
static ATerm p_23 (ATerm t)
{
  ATerm n_162 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      n_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_162;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm d_162 = NULL,e_162 = NULL,f_162 = NULL,g_162 = NULL,t_35 = NULL;
  g_162 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_162 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_162);
  d_162 = t;
  t = e_162;
  t = foldr_3_0(e_23, f_23, j_23, t);
  f_162 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_162);
  t_35 = t;
  t = SSLsetAnnotations(t_35, d_162);
  return(t);
}
static ATerm x_23 (ATerm t)
{
  ATerm s_80 = t;
  int t_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(t_80);
    }
  else
    {
      t = s_80;
    }
  return(t);
}
static ATerm y_23 (ATerm t)
{
  ATerm j_163 = NULL,k_163 = NULL,l_163 = NULL,m_163 = NULL,n_163 = NULL;
  n_163 = t;
  if(match_cons(t, sym_LRule_1))
    {
      m_163 = ATgetArgument(t, 0);
      t = m_163;
      if(match_cons(t, sym_Rule_3))
        {
          j_163 = ATgetArgument(t, 0);
          k_163 = ATgetArgument(t, 1);
          l_163 = ATgetArgument(t, 2);
          {
            ATerm u_80 = t;
            int v_80 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_163 = NULL;
                t = j_163;
                t = free_vars_3_0(z_23, b_24, tboundin_3_0, t);
                r_163 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, r_163, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, j_163, k_163, l_163)));
                LocalPopChoice(v_80);
              }
            else
              {
                t = u_80;
                t = n_163;
              }
          }
        }
      else
        {
          t = n_163;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          m_163 = ATgetArgument(t, 0);
          {
            ATerm w_80 = t;
            int x_80 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_164 = NULL;
                t = m_163;
                t = free_vars_3_0(z_24, a_25, tboundin_3_0, t);
                p_164 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, p_164, m_163);
                LocalPopChoice(x_80);
              }
            else
              {
                t = w_80;
                t = n_163;
              }
          }
        }
      else
        {
          t = n_163;
        }
    }
  return(t);
}
static ATerm z_23 (ATerm t)
{
  ATerm s_163 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_163);
  return(t);
}
static ATerm b_24 (ATerm t)
{
  ATerm y_80 = t;
  int z_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_80);
    }
  else
    {
      t = y_80;
      {
        ATerm a_81 = t;
        int b_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_81);
          }
        else
          {
            t = a_81;
            {
              ATerm c_81 = t;
              int d_81 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_163 = NULL,v_163 = NULL,w_163 = NULL,x_163 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_163 = ATgetArgument(t, 0);
                      v_163 = ATgetArgument(t, 1);
                      w_163 = ATgetArgument(t, 2);
                      x_163 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_163;
                  t = map_1_0(n_24, t);
                  LocalPopChoice(d_81);
                }
              else
                {
                  t = c_81;
                  {
                    ATerm e_81 = t;
                    int f_81 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(f_81);
                      }
                    else
                      {
                        t = e_81;
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
static ATerm n_24 (ATerm t)
{
  ATerm e_164 = NULL;
  ATerm g_81 = t;
  int h_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_164 = ATgetArgument(t, 0);
          {
            ATerm i_81 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_81);
      t = e_164;
    }
  else
    {
      t = g_81;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_164 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_164;
    }
  return(t);
}
static ATerm q_24 (ATerm t)
{
  t = map_1_0(r_24, t);
  return(t);
}
static ATerm r_24 (ATerm t)
{
  ATerm j_164 = NULL;
  ATerm j_81 = t;
  int k_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_164 = ATgetArgument(t, 0);
          {
            ATerm l_81 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_81);
      t = j_164;
    }
  else
    {
      t = j_81;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_164 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_164;
    }
  return(t);
}
static ATerm z_24 (ATerm t)
{
  ATerm q_164 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_164);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  ATerm m_81 = t;
  int n_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_81);
    }
  else
    {
      t = m_81;
      {
        ATerm o_81 = t;
        int p_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_81);
          }
        else
          {
            t = o_81;
            {
              ATerm q_81 = t;
              int r_81 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_164 = NULL,t_164 = NULL,u_164 = NULL,v_164 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_164 = ATgetArgument(t, 0);
                      t_164 = ATgetArgument(t, 1);
                      u_164 = ATgetArgument(t, 2);
                      v_164 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_164;
                  t = map_1_0(b_25, t);
                  LocalPopChoice(r_81);
                }
              else
                {
                  t = q_81;
                  {
                    ATerm s_81 = t;
                    int t_81 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_81);
                      }
                    else
                      {
                        t = s_81;
                        t = dynrule_targs_1_0(c_25, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_25 (ATerm t)
{
  ATerm c_165 = NULL;
  ATerm u_81 = t;
  int v_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_165 = ATgetArgument(t, 0);
          {
            ATerm w_81 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_81);
      t = c_165;
    }
  else
    {
      t = u_81;
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
static ATerm c_25 (ATerm t)
{
  t = map_1_0(d_25, t);
  return(t);
}
static ATerm d_25 (ATerm t)
{
  ATerm h_165 = NULL;
  ATerm x_81 = t;
  int y_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_165 = ATgetArgument(t, 0);
          {
            ATerm z_81 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_81);
      t = h_165;
    }
  else
    {
      t = x_81;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_165 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_165;
    }
  return(t);
}
static ATerm e_25 (ATerm t)
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
static ATerm f_25 (ATerm t)
{
  ATerm r_165 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      r_165 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, r_165)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm d_163 = NULL,e_163 = NULL,f_163 = NULL,g_163 = NULL,v_35 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(x_23, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(y_23, t);
  {
    ATerm c_82 = t;
    int d_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_165 = NULL,n_165 = NULL,o_165 = NULL;
        m_165 = t;
        t = term_e_82;
        n_165 = t;
        t = term_f_82;
        o_165 = t;
        t = term_g_82;
        t = i_15(n_165, o_165, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = m_165;
        LocalPopChoice(d_82);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = c_82;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(e_25, t);
  g_163 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_163);
  d_163 = t;
  t = e_163;
  t = fetch_1_0(f_25, t);
  f_163 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_163);
  v_35 = t;
  t = SSLsetAnnotations(v_35, d_163);
  return(t);
}
static ATerm v_14 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm s_165 = NULL;
  t = SSL_fputc(o_40, p_40);
  s_165 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_165);
  return(t);
}
static ATerm w_14 (ATerm s_24, ATerm t_24, ATerm t)
{
  ATerm t_165 = NULL;
  t = SSL_write_term_to_stream_text(s_24, t_24);
  t_165 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_165);
  return(t);
}
static ATerm y_14 (ATerm u_120 (ATerm), ATerm m_187, ATerm y_24, ATerm t)
{
  ATerm u_165 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_187, term_h_82);
  t = c_15(t);
  u_165 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_165, y_24);
  t = u_120(t);
  t = fclose_0_0(t);
  t = y_24;
  return(t);
}
static ATerm x_14 (ATerm o_24, ATerm p_24, ATerm t)
{
  ATerm v_165 = NULL;
  t = SSL_write_term_to_stream_baf(o_24, p_24);
  v_165 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_165);
  return(t);
}
static ATerm o_25 (ATerm t)
{
  ATerm c_166 = NULL,d_166 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_82 = ATgetArgument(t, 0);
      if(match_cons(i_82, sym_Stream_1))
        {
          c_166 = ATgetArgument(i_82, 0);
        }
      else
        _fail(t);
      d_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_14(c_166, d_166, t);
  return(t);
}
static ATerm p_25 (ATerm t)
{
  ATerm e_166 = NULL,f_166 = NULL,g_166 = NULL,h_166 = NULL,i_166 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_82 = ATgetArgument(t, 0);
      if(match_cons(j_82, sym_Stream_1))
        {
          h_166 = ATgetArgument(j_82, 0);
        }
      else
        _fail(t);
      i_166 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_14(h_166, i_166, t);
  e_166 = t;
  t = term_d_35;
  f_166 = t;
  t = e_166;
  if(match_cons(t, sym_Stream_1))
    {
      g_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_35, e_166);
  t = v_14(f_166, g_166, t);
  return(t);
}
ATerm output_1_0 (ATerm d_140 (ATerm), ATerm t)
{
  ATerm w_165 = NULL,x_165 = NULL;
  t = d_140(t);
  x_165 = t;
  {
    ATerm k_82 = t;
    int n_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_165 = NULL,z_165 = NULL;
        t = term_e_82;
        y_165 = t;
        t = term_p_82;
        z_165 = t;
        t = term_q_82;
        t = i_15(y_165, z_165, t);
        LocalPopChoice(n_82);
      }
    else
      {
        t = k_82;
        t = term_r_82;
      }
  }
  w_165 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_165, x_165);
  {
    ATerm s_82 = t;
    int t_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_166 = NULL,b_166 = NULL;
        t = term_e_82;
        a_166 = t;
        t = term_u_82;
        b_166 = t;
        t = term_w_82;
        t = i_15(a_166, b_166, t);
        t = (ATerm) ATmakeAppl(sym__2, w_165, x_165);
        LocalPopChoice(t_82);
        if(match_cons(t, sym__2))
          {
            ATerm x_82 = ATgetArgument(t, 0);
            ATerm y_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_14(o_25, w_165, x_165, t);
      }
    else
      {
        t = s_82;
        if(match_cons(t, sym__2))
          {
            ATerm b_83 = ATgetArgument(t, 0);
            ATerm c_83 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_14(p_25, w_165, x_165, t);
      }
  }
  return(t);
}
static ATerm w_166 (ATerm q_166, ATerm t)
{
  t = SSL_fclose(q_166);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_166 = NULL,u_166 = NULL;
  u_166 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_166 = ATgetArgument(t, 0);
      {
        ATerm d_83 = t;
        int e_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_166);
            LocalPopChoice(e_83);
          }
        else
          {
            t = d_83;
            t = w_166(u_166, t);
          }
      }
    }
  else
    {
      t = w_166(u_166, t);
    }
  return(t);
}
static ATerm z_14 (ATerm u_24, ATerm t)
{
  t = SSL_read_term_from_stream(u_24);
  return(t);
}
static ATerm a_15 (ATerm h_39, ATerm i_39, ATerm t)
{
  t = SSL_strcat(h_39, i_39);
  return(t);
}
static ATerm b_15 (ATerm q_40, ATerm r_40, ATerm t)
{
  ATerm x_166 = NULL;
  t = SSL_fopen(q_40, r_40);
  x_166 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_166);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_166 = NULL;
  t = SSL_stdin_stream();
  y_166 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_166);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_166 = NULL;
  t = SSL_stdout_stream();
  z_166 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_166);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_167 = NULL;
  t = SSL_stderr_stream();
  a_167 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_167);
  return(t);
}
static ATerm h_168 (ATerm g_167, ATerm t)
{
  ATerm h_167 = NULL;
  t = SSL_explode_term(g_167);
  if(match_cons(t, sym__2))
    {
      ATerm j_83 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_83) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_83 = ATgetArgument(t, 1);
        if(((ATgetType(l_83) == AT_LIST) && !(ATisEmpty(l_83))))
          {
            h_167 = ATgetFirst((ATermList) l_83);
            {
              ATerm m_83 = (ATerm) ATgetNext((ATermList) l_83);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_167;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_167;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_167;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_167;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_168 (ATerm k_167, ATerm l_167, ATerm m_167, ATerm t)
{
  ATerm n_167 = NULL,o_167 = NULL,p_167 = NULL,s_167 = NULL,a_36 = NULL;
  t = SSLgetAnnotations(m_167);
  p_167 = t;
  t = k_167;
  if(match_cons(t, sym_Path_1))
    {
      s_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_167, l_167);
  a_36 = t;
  t = SSLsetAnnotations(a_36, p_167);
  if(match_cons(t, sym__2))
    {
      n_167 = ATgetArgument(t, 0);
      o_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_15(n_167, o_167, t);
  return(t);
}
static ATerm j_168 (ATerm u_167, ATerm v_167, ATerm w_167, ATerm t)
{
  ATerm x_167 = NULL,y_167 = NULL,z_167 = NULL,c_168 = NULL,b_36 = NULL;
  t = SSLgetAnnotations(w_167);
  z_167 = t;
  t = SSL_is_string(u_167);
  c_168 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_168, v_167);
  b_36 = t;
  t = SSLsetAnnotations(b_36, z_167);
  if(match_cons(t, sym__2))
    {
      x_167 = ATgetArgument(t, 0);
      y_167 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_15(x_167, y_167, t);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm e_168 = NULL,f_168 = NULL,g_168 = NULL;
  e_168 = t;
  if(match_cons(t, sym__2))
    {
      f_168 = ATgetArgument(t, 0);
      g_168 = ATgetArgument(t, 1);
      {
        ATerm p_83 = t;
        int q_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_168(e_168, t);
            LocalPopChoice(q_83);
          }
        else
          {
            t = p_83;
            {
              ATerm r_83 = t;
              int s_83 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_168(f_168, g_168, e_168, t);
                  LocalPopChoice(s_83);
                }
              else
                {
                  t = r_83;
                  t = j_168(f_168, g_168, e_168, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_168(e_168, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_168 = NULL,m_168 = NULL,n_168 = NULL,s_168 = NULL;
  s_168 = t;
  {
    ATerm t_83 = t;
    int u_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_168, term_v_83);
        t = c_15(t);
        LocalPopChoice(u_83);
      }
    else
      {
        t = t_83;
        {
          ATerm j_75 = NULL,k_75 = NULL;
          t = term_w_83;
          k_75 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_w_83, s_168);
          t = a_15(k_75, s_168, t);
          j_75 = t;
          t = SSL_perror(j_75);
          _fail(t);
        }
      }
  }
  m_168 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_168 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_14(n_168, t);
  l_168 = t;
  t = m_168;
  t = fclose_0_0(t);
  t = l_168;
  return(t);
}
ATerm input_1_0 (ATerm e_140 (ATerm), ATerm t)
{
  ATerm x_83 = t;
  int y_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_168 = NULL,w_168 = NULL;
      t = term_e_82;
      v_168 = t;
      t = term_z_83;
      w_168 = t;
      t = term_a_84;
      t = i_15(v_168, w_168, t);
      LocalPopChoice(y_83);
    }
  else
    {
      t = x_83;
      t = term_b_84;
    }
  t = ReadFromFile_0_0(t);
  t = e_140(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_168 = NULL,y_168 = NULL,z_168 = NULL,a_169 = NULL,b_169 = NULL;
  x_168 = t;
  t = term_c_84;
  t = whoami_0_0(t);
  y_168 = t;
  t = term_k_45;
  a_169 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_84), y_168), term_d_84);
  b_169 = t;
  t = SSL_printnl(a_169, b_169);
  t = term_m_45;
  z_168 = t;
  t = SSL_exit(z_168);
  t = x_168;
  return(t);
}
static ATerm q_25 (ATerm t)
{
  ATerm d_169 = NULL;
  d_169 = t;
  if(match_string(t, "-k"))
    {
      t = d_169;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_169;
    }
  return(t);
}
static ATerm r_25 (ATerm t)
{
  ATerm e_169 = NULL,f_169 = NULL,g_169 = NULL;
  e_169 = t;
  t = SSL_string_to_int(e_169);
  f_169 = t;
  t = term_f_84;
  g_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_84, f_169);
  t = l_15(g_169, f_169, t);
  t = e_169;
  return(t);
}
static ATerm s_25 (ATerm t)
{
  t = term_g_84;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_25, r_25, s_25, t);
  return(t);
}
static ATerm t_25 (ATerm t)
{
  ATerm i_169 = NULL;
  i_169 = t;
  if(match_string(t, "-S"))
    {
      t = i_169;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_169;
    }
  return(t);
}
static ATerm v_25 (ATerm t)
{
  ATerm j_169 = NULL,k_169 = NULL;
  t = term_h_84;
  j_169 = t;
  t = term_x_47;
  k_169 = t;
  t = term_i_84;
  t = l_15(j_169, k_169, t);
  t = term_j_84;
  return(t);
}
static ATerm w_25 (ATerm t)
{
  t = term_k_84;
  return(t);
}
static ATerm x_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_25 (ATerm t)
{
  ATerm l_169 = NULL,m_169 = NULL,n_169 = NULL;
  l_169 = t;
  t = SSL_string_to_int(l_169);
  m_169 = t;
  t = term_h_84;
  n_169 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_84, m_169);
  t = l_15(n_169, m_169, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_169);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  t = term_l_84;
  return(t);
}
static ATerm a_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_26 (ATerm t)
{
  ATerm o_169 = NULL,p_169 = NULL;
  t = term_m_84;
  o_169 = t;
  t = term_c_84;
  p_169 = t;
  t = term_n_84;
  t = l_15(o_169, p_169, t);
  t = term_o_84;
  return(t);
}
static ATerm c_26 (ATerm t)
{
  t = term_p_84;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_84 = t;
  int r_84 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(t_25, v_25, w_25, t);
      LocalPopChoice(r_84);
    }
  else
    {
      t = q_84;
      {
        ATerm s_84 = t;
        int t_84 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_25, y_25, z_25, t);
            LocalPopChoice(t_84);
          }
        else
          {
            t = s_84;
            t = Option_3_0(a_26, b_26, c_26, t);
          }
      }
    }
  return(t);
}
static ATerm l_15 (ATerm m_56, ATerm n_56, ATerm t)
{
  ATerm q_169 = NULL,r_169 = NULL;
  t = term_e_82;
  q_169 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_82, m_56, n_56);
  t = lookup_table_0_1(q_169, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(m_56, n_56, r_169, t);
  t = (ATerm) ATmakeAppl(sym__3, term_e_82, m_56, n_56);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm v_169 = NULL,w_169 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_169 = NULL,y_169 = NULL,z_169 = NULL;
      t = term_c_84;
      t = e_0(t);
      x_169 = t;
      t = term_u_84;
      y_169 = t;
      t = term_v_84;
      z_169 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_84, term_v_84, x_169);
      t = j_15(y_169, z_169, x_169, t);
      _fail(t);
    }
  else
    {
      ATerm c_170 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_169 = ATgetFirst((ATermList) t);
          w_169 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_169;
      t = c_0(t);
      t = term_c_84;
      t = d_0(t);
      c_170 = t;
      t = (ATerm) ATinsert(CheckATermList(w_169), c_170);
    }
  return(t);
}
static ATerm e_26 (ATerm t)
{
  ATerm e_170 = NULL;
  e_170 = t;
  if(match_string(t, "-o"))
    {
      t = e_170;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_170;
    }
  return(t);
}
static ATerm h_26 (ATerm t)
{
  ATerm f_170 = NULL,g_170 = NULL;
  f_170 = t;
  t = term_p_82;
  g_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_82, f_170);
  t = l_15(g_170, f_170, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_170);
  return(t);
}
static ATerm j_26 (ATerm t)
{
  t = term_w_84;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_26, h_26, j_26, t);
  return(t);
}
static ATerm m_26 (ATerm t)
{
  ATerm i_170 = NULL;
  i_170 = t;
  if(match_string(t, "-i"))
    {
      t = i_170;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_170;
    }
  return(t);
}
static ATerm n_26 (ATerm t)
{
  ATerm j_170 = NULL,k_170 = NULL;
  j_170 = t;
  t = term_z_83;
  k_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_83, j_170);
  t = l_15(k_170, j_170, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_170);
  return(t);
}
static ATerm t_26 (ATerm t)
{
  t = term_x_84;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_26, n_26, t_26, t);
  return(t);
}
static ATerm j_15 (ATerm h_61, ATerm i_61, ATerm g_61, ATerm t)
{
  ATerm m_170 = NULL,n_170 = NULL,o_170 = NULL,p_170 = NULL,q_170 = NULL;
  m_170 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_61, i_61);
  {
    ATerm y_84 = t;
    int z_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_85 = ATgetArgument(t, 0);
            ATerm b_85 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_61, i_61);
        t = i_15(h_61, i_61, t);
        LocalPopChoice(z_84);
      }
    else
      {
        t = y_84;
        t = (ATerm) ATempty;
      }
  }
  n_170 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_61, i_61, (ATerm) ATinsert(CheckATermList(n_170), g_61));
  t = lookup_table_0_1(h_61, t);
  q_170 = t;
  t = (ATerm) ATinsert(CheckATermList(n_170), g_61);
  o_170 = t;
  t = q_170;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_170 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(i_61, o_170, p_170, t);
  t = m_170;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_170 = NULL,y_170 = NULL,z_170 = NULL,a_171 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_171 = NULL,c_171 = NULL,d_171 = NULL;
      t = term_c_84;
      t = n_0(t);
      b_171 = t;
      t = term_u_84;
      c_171 = t;
      t = term_v_84;
      d_171 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_84, term_v_84, b_171);
      t = j_15(c_171, d_171, b_171, t);
      _fail(t);
    }
  else
    {
      ATerm h_171 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_170 = ATgetFirst((ATermList) t);
          y_170 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_170;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_170 = ATgetFirst((ATermList) t);
          a_171 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_170;
      t = k_0(t);
      t = z_170;
      t = l_0(t);
      h_171 = t;
      t = (ATerm) ATinsert(CheckATermList(a_171), h_171);
    }
  return(t);
}
static ATerm u_26 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_26 (ATerm t)
{
  ATerm j_171 = NULL,k_171 = NULL;
  j_171 = t;
  if(match_string(t, "old"))
    {
      t = j_171;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = j_171;
    }
  t = term_f_82;
  k_171 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_82, j_171);
  t = l_15(k_171, j_171, t);
  t = term_c_84;
  return(t);
}
static ATerm e_27 (ATerm t)
{
  t = term_c_85;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_26, w_26, e_27, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_171 = NULL,n_171 = NULL,o_171 = NULL,p_171 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_84;
  t = whoami_0_0(t);
  m_171 = t;
  t = term_k_45;
  o_171 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_85), m_171);
  p_171 = t;
  t = SSL_printnl(o_171, p_171);
  t = term_m_45;
  n_171 = t;
  t = SSL_exit(n_171);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_171 = NULL,r_171 = NULL;
  t = term_e_82;
  q_171 = t;
  t = term_e_85;
  r_171 = t;
  t = term_f_85;
  t = i_15(q_171, r_171, t);
  return(t);
}
static ATerm d_15 (ATerm k_43, ATerm l_43, ATerm t)
{
  ATerm g_85 = t;
  int h_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_43, l_43);
      LocalPopChoice(h_85);
    }
  else
    {
      t = g_85;
      t = SSL_addr(k_43, l_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_128 (ATerm), ATerm d_128 (ATerm), ATerm t)
{
  ATerm t_171 = NULL,u_171 = NULL,v_171 = NULL;
  t_171 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_171;
      t = c_128(t);
    }
  else
    {
      ATerm y_171 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_171 = ATgetFirst((ATermList) t);
          v_171 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_171;
      t = foldr_2_0(c_128, d_128, t);
      y_171 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_171, y_171);
      t = d_128(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm f_27 (ATerm t)
{
  t = term_x_47;
  return(t);
}
static ATerm g_27 (ATerm t)
{
  ATerm t_75 = NULL,u_75 = NULL;
  if(match_cons(t, sym__2))
    {
      t_75 = ATgetArgument(t, 0);
      u_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_15(t_75, u_75, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_172 = NULL,m_75 = NULL,n_75 = NULL;
  t = times_0_0(t);
  n_75 = t;
  t = SSL_explode_term(n_75);
  if(match_cons(t, sym__2))
    {
      ATerm i_85 = ATgetArgument(t, 0);
      m_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_75;
  t = foldr_2_0(f_27, g_27, t);
  b_172 = t;
  t = SSL_TicksToSeconds(b_172);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_172 = NULL,n_172 = NULL,o_172 = NULL;
  m_172 = t;
  if(match_cons(t, sym__2))
    {
      n_172 = ATgetArgument(t, 0);
      o_172 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_85 = t;
    int k_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_172;
        if((n_172 != t))
          {
            _fail(t);
          }
        t = m_172;
        LocalPopChoice(k_85);
      }
    else
      {
        t = j_85;
        t = (ATerm) ATmakeAppl(sym__2, n_172, o_172);
        {
          ATerm l_85 = t;
          int m_85 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_172, o_172);
              LocalPopChoice(m_85);
            }
          else
            {
              t = l_85;
              t = SSL_gtr(n_172, o_172);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_172, o_172);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_137 (ATerm), ATerm t)
{
  ATerm s_172 = NULL;
  s_172 = t;
  {
    ATerm n_85 = t;
    int o_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_172 = NULL,v_172 = NULL,w_172 = NULL;
        t = term_e_82;
        v_172 = t;
        t = term_h_84;
        w_172 = t;
        t = term_p_85;
        t = i_15(v_172, w_172, t);
        u_172 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_172, term_m_45);
        t = geq_0_0(t);
        t = s_172;
        t = e_137(t);
        LocalPopChoice(o_85);
      }
    else
      {
        t = n_85;
        t = s_172;
      }
  }
  return(t);
}
static ATerm m_27 (ATerm t)
{
  ATerm y_172 = NULL,z_172 = NULL,b_173 = NULL,c_173 = NULL;
  t = run_time_0_0(t);
  y_172 = t;
  t = term_c_84;
  t = whoami_0_0(t);
  z_172 = t;
  t = term_k_45;
  b_173 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_85), y_172), term_q_85), z_172);
  c_173 = t;
  t = SSL_printnl(b_173, c_173);
  t = (ATerm) ATmakeAppl(sym__2, term_k_45, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_85), y_172), term_q_85), z_172));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_27, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_173 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_47;
  d_173 = t;
  t = SSL_exit(d_173);
  return(t);
}
static ATerm o_27 (ATerm t)
{
  ATerm n_173 = NULL,o_173 = NULL;
  o_173 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_173;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_173 = ATgetArgument(t, 0);
          {
            ATerm p_76 = NULL,l_36 = NULL;
            t = SSLgetAnnotations(o_173);
            p_76 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_173);
            l_36 = t;
            t = SSLsetAnnotations(l_36, p_76);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_173;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_139 (ATerm), ATerm t)
{
  ATerm s_85 = t;
  int t_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_173 = NULL,h_173 = NULL;
      t = term_e_82;
      g_173 = t;
      t = term_u_85;
      h_173 = t;
      t = term_v_85;
      t = i_15(g_173, h_173, t);
      LocalPopChoice(t_85);
    }
  else
    {
      t = s_85;
      t = fetch_1_0(o_27, t);
    }
  t = u_139(t);
  return(t);
}
static ATerm m_15 (ATerm m_65, ATerm n_65, ATerm o_65, ATerm t)
{
  ATerm q_173 = NULL;
  t = SSL_hashtable_put(o_65, m_65, n_65);
  q_173 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_173);
  return(t);
}
ATerm lookup_table_0_1 (ATerm t_62, ATerm t)
{
  ATerm z_173 = NULL;
  t = table_hashtable_0_0(t);
  z_173 = t;
  {
    ATerm w_85 = t;
    int x_85 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_76 = NULL;
        t = z_173;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_76 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_15(t_62, w_76, t);
        LocalPopChoice(x_85);
      }
    else
      {
        t = w_85;
        {
          ATerm j_77 = NULL;
          t = t_62;
          t = table_create_0_0(t);
          t = z_173;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_15(t_62, j_77, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm u_65, ATerm v_65, ATerm t)
{
  ATerm c_174 = NULL;
  t = SSL_hashtable_create(u_65, v_65);
  c_174 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_174);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_174 = NULL,e_174 = NULL,f_174 = NULL,h_174 = NULL,i_174 = NULL;
  d_174 = t;
  t = term_y_85;
  h_174 = t;
  t = term_z_85;
  i_174 = t;
  t = d_174;
  t = new_hashtable_0_2(h_174, i_174, t);
  e_174 = t;
  t = d_174;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(d_174, e_174, f_174, t);
  t = d_174;
  return(t);
}
static ATerm f_15 (ATerm r_65, ATerm s_65, ATerm t)
{
  ATerm j_174 = NULL;
  t = SSL_hashtable_remove(s_65, r_65);
  j_174 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_174);
  return(t);
}
static ATerm g_15 (ATerm w_65, ATerm t)
{
  ATerm k_174 = NULL;
  t = SSL_hashtable_destroy(w_65);
  k_174 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_174);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm l_174 = NULL;
  t = SSL_table_hashtable();
  l_174 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_174);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_174 = NULL,n_174 = NULL,o_174 = NULL,p_174 = NULL;
  m_174 = t;
  t = table_hashtable_0_0(t);
  n_174 = t;
  t = lookup_table_0_1(m_174, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_15(p_174, t);
  t = n_174;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_174 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_15(m_174, o_174, t);
  t = m_174;
  return(t);
}
ATerm map_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  static ATerm f_175 (ATerm t)
  {
    ATerm c_175 = NULL,d_175 = NULL,e_175 = NULL;
    c_175 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_175;
      }
    else
      {
        ATerm y_77 = NULL,f_78 = NULL,g_78 = NULL,n_36 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_175 = ATgetFirst((ATermList) t);
            e_175 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_175);
        y_77 = t;
        t = d_175;
        t = d_121(t);
        f_78 = t;
        t = e_175;
        t = f_175(t);
        g_78 = t;
        t = (ATerm) ATinsert(CheckATermList(g_78), f_78);
        n_36 = t;
        t = SSLsetAnnotations(n_36, y_77);
      }
    return(t);
  }
  t = f_175(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm i_175 = NULL,j_175 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_175 = ATgetFirst((ATermList) t);
      j_175 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_175 = NULL,o_175 = NULL;
        static ATerm p_27 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_175)), not_null(o_175));
          return(t);
        }
        t = j_175;
        t = i_0(t);
        if(((n_175 != NULL) && (n_175 != t)))
          _fail(t);
        else
          n_175 = t;
        t = i_175;
        t = g_0(t);
        if(((o_175 != NULL) && (o_175 != t)))
          _fail(t);
        else
          o_175 = t;
        t = j_175;
        t = reverse_acc_2_0(g_0, p_27, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_84;
      t = i_0(t);
    }
  return(t);
}
static ATerm q_27 (ATerm t)
{
  ATerm u_175 = NULL,v_175 = NULL,w_175 = NULL,r_36 = NULL;
  w_175 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_175 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_175);
  u_175 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_175);
  r_36 = t;
  t = SSLsetAnnotations(r_36, u_175);
  return(t);
}
static ATerm r_27 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_27 (ATerm t)
{
  ATerm y_175 = NULL;
  y_175 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_175), term_a_86);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_175 = NULL,r_175 = NULL;
  ATerm b_86 = t;
  int c_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_175 = NULL,t_175 = NULL;
      t = term_e_82;
      s_175 = t;
      t = term_e_85;
      t_175 = t;
      t = term_f_85;
      t = i_15(s_175, t_175, t);
      LocalPopChoice(c_86);
    }
  else
    {
      t = b_86;
      t = fetch_1_0(q_27, t);
    }
  t = term_d_86;
  t = echo_0_0(t);
  t = term_u_84;
  q_175 = t;
  t = term_v_84;
  r_175 = t;
  t = term_e_86;
  t = i_15(q_175, r_175, t);
  t = reverse_acc_2_0(_id, r_27, t);
  t = map_1_0(s_27, t);
  return(t);
}
ATerm fetch_1_0 (ATerm n_121 (ATerm), ATerm t)
{
  static ATerm v_176 (ATerm t)
  {
    ATerm s_176 = NULL,t_176 = NULL,u_176 = NULL;
    s_176 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_176 = ATgetFirst((ATermList) t);
        u_176 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_86 = t;
      int g_86 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_78 = NULL,r_78 = NULL,v_36 = NULL;
          t = SSLgetAnnotations(s_176);
          o_78 = t;
          t = t_176;
          t = n_121(t);
          r_78 = t;
          t = (ATerm) ATinsert(CheckATermList(u_176), r_78);
          v_36 = t;
          t = SSLsetAnnotations(v_36, o_78);
          LocalPopChoice(g_86);
        }
      else
        {
          t = f_86;
          {
            ATerm c_79 = NULL,g_79 = NULL,w_36 = NULL;
            t = SSLgetAnnotations(s_176);
            c_79 = t;
            t = u_176;
            t = v_176(t);
            g_79 = t;
            t = (ATerm) ATinsert(CheckATermList(g_79), t_176);
            w_36 = t;
            t = SSLsetAnnotations(w_36, c_79);
          }
        }
    }
    return(t);
  }
  t = v_176(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm z_176 = NULL,a_177 = NULL,b_177 = NULL;
  z_176 = t;
  {
    ATerm h_86 = t;
    int i_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = z_176;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_86 = ATgetFirst((ATermList) t);
                ATerm k_86 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = z_176;
          }
        LocalPopChoice(i_86);
      }
    else
      {
        t = h_86;
        t = (ATerm) ATinsert(ATempty, z_176);
      }
  }
  a_177 = t;
  t = term_r_82;
  b_177 = t;
  t = SSL_printnl(b_177, a_177);
  t = z_176;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_177 = NULL,g_177 = NULL;
  t = term_e_82;
  f_177 = t;
  t = term_e_85;
  g_177 = t;
  t = term_f_85;
  t = i_15(f_177, g_177, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm n_15 (ATerm p_65, ATerm q_65, ATerm t)
{
  t = SSL_hashtable_get(q_65, p_65);
  return(t);
}
static ATerm i_15 (ATerm a_63, ATerm b_63, ATerm t)
{
  ATerm h_177 = NULL;
  t = lookup_table_0_1(a_63, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_177 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_15(b_63, h_177, t);
  return(t);
}
static ATerm u_27 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_27 (ATerm t)
{
  ATerm j_177 = NULL,k_177 = NULL;
  t = term_l_86;
  j_177 = t;
  t = term_c_84;
  k_177 = t;
  t = term_m_86;
  t = l_15(j_177, k_177, t);
  return(t);
}
static ATerm x_27 (ATerm t)
{
  t = term_n_86;
  return(t);
}
static ATerm a_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_28 (ATerm t)
{
  ATerm l_177 = NULL,m_177 = NULL,n_177 = NULL,o_177 = NULL;
  t = term_l_86;
  n_177 = t;
  t = term_c_84;
  o_177 = t;
  t = term_m_86;
  t = l_15(n_177, o_177, t);
  t = term_o_86;
  l_177 = t;
  t = term_c_84;
  m_177 = t;
  t = term_p_86;
  t = l_15(l_177, m_177, t);
  t = term_q_86;
  return(t);
}
static ATerm d_28 (ATerm t)
{
  t = term_r_86;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_86 = t;
  int t_86 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_27, w_27, x_27, t);
      LocalPopChoice(t_86);
    }
  else
    {
      t = s_86;
      t = Option_3_0(a_28, c_28, d_28, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm t)
{
  ATerm p_177 = NULL,q_177 = NULL,r_177 = NULL,s_177 = NULL,t_177 = NULL,u_177 = NULL,a_37 = NULL;
  u_177 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_177 = ATgetFirst((ATermList) t);
      r_177 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_177);
  p_177 = t;
  t = q_177;
  t = t_99(t);
  s_177 = t;
  t = r_177;
  t = u_99(t);
  t_177 = t;
  t = (ATerm) ATinsert(CheckATermList(t_177), s_177);
  a_37 = t;
  t = SSLsetAnnotations(a_37, p_177);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_141 (ATerm), ATerm t)
{
  ATerm z_177 = NULL,a_178 = NULL,b_178 = NULL,c_178 = NULL,e_178 = NULL,f_178 = NULL,c_37 = NULL;
  z_177 = t;
  {
    ATerm u_86 = t;
    int v_86 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_86;
        t = x_141(t);
        LocalPopChoice(v_86);
      }
    else
      {
        t = u_86;
      }
  }
  t = z_177;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_178 = ATgetFirst((ATermList) t);
      c_178 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_177);
  a_178 = t;
  t = term_e_85;
  f_178 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_85, b_178);
  t = l_15(f_178, b_178, t);
  t = c_178;
  {
    static ATerm p_178 (ATerm t)
    {
      ATerm x_86 = t;
      int y_86 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_86 = t;
          int a_87 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_178 = NULL;
              i_178 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_178;
              LocalPopChoice(a_87);
            }
          else
            {
              t = z_86;
              t = x_141(t);
              t = Cons_2_0(_id, p_178, t);
            }
          LocalPopChoice(y_86);
        }
      else
        {
          t = x_86;
          {
            ATerm l_178 = NULL,m_178 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_178 = ATgetFirst((ATermList) t);
                m_178 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_178), (ATerm) ATmakeAppl(sym_Undefined_1, l_178));
          }
        }
      return(t);
    }
    t = p_178(t);
  }
  e_178 = t;
  t = (ATerm) ATinsert(CheckATermList(e_178), (ATerm) ATmakeAppl(sym_Program_1, b_178));
  c_37 = t;
  t = SSLsetAnnotations(c_37, a_178);
  return(t);
}
static ATerm j_28 (ATerm t)
{
  ATerm c_179 = NULL;
  c_179 = t;
  if(match_string(t, "--help"))
    {
      t = c_179;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_179;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_179;
        }
    }
  return(t);
}
static ATerm n_28 (ATerm t)
{
  ATerm d_179 = NULL,e_179 = NULL;
  t = term_u_85;
  d_179 = t;
  t = term_c_84;
  e_179 = t;
  t = term_b_87;
  t = l_15(d_179, e_179, t);
  t = term_c_87;
  return(t);
}
static ATerm p_28 (ATerm t)
{
  t = term_d_87;
  return(t);
}
static ATerm q_28 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_141 (ATerm), ATerm t)
{
  ATerm u_178 = NULL,v_178 = NULL,w_178 = NULL,x_178 = NULL,y_178 = NULL,z_178 = NULL,a_179 = NULL,b_179 = NULL;
  w_178 = t;
  t = term_u_84;
  x_178 = t;
  t = term_e_87;
  t = lookup_table_0_1(x_178, t);
  b_179 = t;
  t = term_v_84;
  y_178 = t;
  t = (ATerm) ATempty;
  z_178 = t;
  t = b_179;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_179 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(y_178, z_178, a_179, t);
  t = w_178;
  {
    static ATerm e_28 (ATerm t)
    {
      ATerm f_87 = t;
      int i_87 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_141(t);
          LocalPopChoice(i_87);
        }
      else
        {
          t = f_87;
          {
            ATerm j_87 = t;
            int k_87 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_28, n_28, p_28, t);
                LocalPopChoice(k_87);
              }
            else
              {
                t = j_87;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_28, t);
  }
  {
    ATerm l_87 = t;
    int m_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_179 = NULL;
        p_179 = t;
        {
          ATerm n_87 = t;
          int o_87 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_79 = NULL;
              t = p_179;
              {
                ATerm p_87 = t;
                int q_87 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_79 = NULL,p_79 = NULL;
                    t = term_e_82;
                    o_79 = t;
                    t = term_u_85;
                    p_79 = t;
                    t = term_v_85;
                    t = i_15(o_79, p_79, t);
                    LocalPopChoice(q_87);
                  }
                else
                  {
                    t = p_87;
                    t = fetch_1_0(q_28, t);
                  }
              }
              t = p_179;
              t = default_system_usage_0_0(t);
              t = term_x_47;
              n_79 = t;
              t = SSL_exit(n_79);
              LocalPopChoice(o_87);
            }
          else
            {
              t = n_87;
              {
                ATerm t_79 = NULL,u_79 = NULL,v_79 = NULL;
                t = term_e_82;
                u_79 = t;
                t = term_l_86;
                v_79 = t;
                t = term_r_87;
                t = i_15(u_79, v_79, t);
                t = p_179;
                t = default_system_about_0_0(t);
                t = term_x_47;
                t_79 = t;
                t = SSL_exit(t_79);
              }
            }
        }
        LocalPopChoice(m_87);
      }
    else
      {
        t = l_87;
        {
          ATerm s_87 = t;
          int t_87 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_179 = NULL,r_179 = NULL,s_179 = NULL;
              static ATerm r_28 (ATerm t)
              {
                ATerm t_179 = NULL,u_179 = NULL,w_179 = NULL,n_37 = NULL;
                w_179 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    u_179 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_179);
                t_179 = t;
                t = u_179;
                if(((u_178 != NULL) && (u_178 != t)))
                  _fail(t);
                else
                  u_178 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, u_179);
                n_37 = t;
                t = SSLsetAnnotations(n_37, t_179);
                return(t);
              }
              t = fetch_1_0(r_28, t);
              t = term_k_45;
              r_179 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_178)), term_u_87);
              s_179 = t;
              t = SSL_printnl(r_179, s_179);
              t = (ATerm) ATmakeAppl(sym__2, term_k_45, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_178)), term_u_87));
              t = default_system_usage_0_0(t);
              t = term_m_45;
              q_179 = t;
              t = SSL_exit(q_179);
              LocalPopChoice(t_87);
            }
          else
            {
              t = s_87;
            }
        }
      }
  }
  v_178 = t;
  t = term_u_84;
  t = table_destroy_0_0(t);
  t = v_178;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm z_139 (ATerm), ATerm t)
{
  ATerm b_180 = NULL,c_180 = NULL,d_180 = NULL,e_180 = NULL,f_180 = NULL;
  t = parse_options_1_0(w_139, t);
  b_180 = t;
  t = term_v_87;
  t = table_create_0_0(t);
  t = term_v_87;
  c_180 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_v_87, term_w_87, b_180);
  t = lookup_table_0_1(c_180, t);
  f_180 = t;
  t = term_w_87;
  d_180 = t;
  t = f_180;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_180 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_15(d_180, b_180, e_180, t);
  t = b_180;
  t = y_139(t);
  {
    ATerm x_87 = t;
    int y_87 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_139, t);
        LocalPopChoice(y_87);
      }
    else
      {
        t = x_87;
        {
          ATerm z_87 = t;
          int a_88 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_139(t);
              t = report_success_0_0(t);
              LocalPopChoice(a_88);
            }
          else
            {
              t = z_87;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_28 (ATerm t)
{
  ATerm b_88 = t;
  int c_88 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(c_88);
    }
  else
    {
      t = b_88;
      {
        ATerm d_88 = t;
        int e_88 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(e_88);
          }
        else
          {
            t = d_88;
            {
              ATerm f_88 = t;
              int g_88 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
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
                        t = Option_3_0(w_28, i_29, j_29, t);
                        LocalPopChoice(i_88);
                      }
                    else
                      {
                        t = h_88;
                        {
                          ATerm j_88 = t;
                          int k_88 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(k_88);
                            }
                          else
                            {
                              t = j_88;
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
static ATerm v_28 (ATerm t)
{
  t = input_1_0(l_29, t);
  return(t);
}
static ATerm w_28 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_29 (ATerm t)
{
  ATerm h_180 = NULL,i_180 = NULL;
  t = term_u_82;
  h_180 = t;
  t = term_c_84;
  i_180 = t;
  t = term_l_88;
  t = l_15(h_180, i_180, t);
  t = term_m_88;
  return(t);
}
static ATerm j_29 (ATerm t)
{
  t = term_n_88;
  return(t);
}
static ATerm l_29 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_28, default_usage_0_0, _id, v_28, t);
  return(t);
}

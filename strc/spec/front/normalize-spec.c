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
ATerm term_w_80;
ATerm term_v_80;
ATerm term_u_80;
ATerm term_f_80;
ATerm term_e_80;
ATerm term_d_80;
ATerm term_a_80;
ATerm term_p_79;
ATerm term_o_79;
ATerm term_n_79;
ATerm term_m_79;
ATerm term_h_79;
ATerm term_c_79;
ATerm term_b_79;
ATerm term_a_79;
ATerm term_z_78;
ATerm term_y_78;
ATerm term_x_78;
ATerm term_w_78;
ATerm term_p_78;
ATerm term_o_78;
ATerm term_l_78;
ATerm term_k_78;
ATerm term_j_78;
ATerm term_g_78;
ATerm term_f_78;
ATerm term_c_78;
ATerm term_b_78;
ATerm term_a_78;
ATerm term_q_77;
ATerm term_p_77;
ATerm term_o_77;
ATerm term_n_77;
ATerm term_i_77;
ATerm term_h_77;
ATerm term_g_77;
ATerm term_f_77;
ATerm term_a_77;
ATerm term_z_76;
ATerm term_y_76;
ATerm term_x_76;
ATerm term_w_76;
ATerm term_v_76;
ATerm term_u_76;
ATerm term_t_76;
ATerm term_s_76;
ATerm term_r_76;
ATerm term_q_76;
ATerm term_p_76;
ATerm term_o_76;
ATerm term_n_76;
ATerm term_m_76;
ATerm term_l_76;
ATerm term_k_76;
ATerm term_h_76;
ATerm term_g_76;
ATerm term_q_75;
ATerm term_p_75;
ATerm term_m_75;
ATerm term_l_75;
ATerm term_k_75;
ATerm term_f_75;
ATerm term_e_75;
ATerm term_d_75;
ATerm term_c_75;
ATerm term_e_73;
ATerm term_d_73;
ATerm term_c_73;
ATerm term_s_71;
ATerm term_r_71;
ATerm term_q_71;
ATerm term_o_71;
ATerm term_n_71;
ATerm term_c_71;
ATerm term_u_59;
ATerm term_k_59;
ATerm term_e_59;
ATerm term_d_59;
ATerm term_a_59;
ATerm term_z_58;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_z_54;
ATerm term_y_54;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_a_52;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_g_51;
ATerm term_f_51;
ATerm term_k_50;
ATerm term_k_47;
ATerm term_e_47;
ATerm term_b_46;
ATerm term_t_45;
ATerm term_q_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_m_45;
ATerm term_l_45;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_d_45;
ATerm term_f_43;
ATerm term_e_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_v_42;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_f_42;
ATerm term_e_42;
ATerm term_d_42;
ATerm term_c_42;
ATerm term_j_41;
ATerm term_i_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_b_41;
ATerm term_z_40;
ATerm term_y_40;
ATerm term_w_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_i_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_l_35;
ATerm term_f_35;
ATerm term_m_34;
ATerm term_j_34;
ATerm term_i_34;
ATerm term_f_34;
ATerm term_e_34;
ATerm term_a_34;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_r_33;
ATerm term_z_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_u_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_c_31;
ATerm term_i_30;
ATerm term_f_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_q_29;
ATerm term_l_29;
ATerm term_l_26;
ATerm term_i_26;
ATerm term_g_26;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Op_2, term_l_29, (ATerm) ATempty);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_30);
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_31);
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_26);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(sym_Op_2, term_w_31, (ATerm) ATempty);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_32);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_31);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_Call_2, term_q_32, (ATerm) ATempty);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_33);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(sym_Call_2, term_t_33, (ATerm) ATempty);
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(sym_Call_2, term_u_31, (ATerm) ATempty);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_34);
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_m_34));
  term_m_34 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_40);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(sym_RootApp_1, term_i_26);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_40);
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_z_40);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_41);
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_j_41));
  term_j_41 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_41);
  ATprotect(&(term_c_42));
  term_c_42 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_d_42));
  term_d_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_42);
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_42);
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_42);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_42);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_43);
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_e_43));
  term_e_43 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_43));
  term_f_43 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol("Counter", 0, ATtrue));
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("i_0", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_45));
  term_l_45 = (ATerm) ATmakeAppl(sym_Defined_2, term_j_45, term_k_45);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("DRRenameVar", 0, ATtrue));
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("DRVarNumber", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(ATmakeSymbol("v", 0, ATtrue));
  ATprotect(&(term_q_45));
  term_q_45 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym__2, term_n_45, term_l_45);
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-Rule already generated: ", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeAppl(ATmakeSymbol("DRAuxRuleGenerated", 0, ATtrue));
  ATprotect(&(term_g_51));
  term_g_51 = (ATerm) ATmakeAppl(ATmakeSymbol("callers already generated: ", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("DRCallersGenerated", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("freshly generating the DR callers: ", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("w_0", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_52);
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(sym_Var_1, term_l_52);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-lookup-rule", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_52);
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym_Build_1, term_f_31);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_52);
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-undefine-rule", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_52);
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATempty);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-add-rule", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_53);
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-set-rule", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_54);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-label-scope", 0, ATtrue));
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_54);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("t_0", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_55);
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("n_0", 0, ATtrue));
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_55);
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(ATmakeSymbol("dr-scope", 0, ATtrue));
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_58);
  ATprotect(&(term_d_59));
  term_d_59 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `extend override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] `override rules' not yet supported in conversion to new style.", 0, ATtrue));
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] Your condition has been removed from the original dynamic rule: ", 0, ATtrue));
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | warning] rule undefining doesn't allow a condition strategy anymore", 0, ATtrue));
  ATprotect(&(term_c_71));
  term_c_71 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_n_71));
  term_n_71 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_71));
  term_o_71 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_q_71));
  term_q_71 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_71);
  ATprotect(&(term_r_71));
  term_r_71 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_s_71));
  term_s_71 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_71);
  ATprotect(&(term_c_73));
  term_c_73 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_d_73));
  term_d_73 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_e_73));
  term_e_73 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_c_75));
  term_c_75 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_75));
  term_d_75 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_e_75));
  term_e_75 = (ATerm) ATmakeAppl(sym__2, term_c_75, term_d_75);
  ATprotect(&(term_f_75));
  term_f_75 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_75));
  term_l_75 = (ATerm) ATmakeAppl(sym__2, term_c_75, term_k_75);
  ATprotect(&(term_m_75));
  term_m_75 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_75));
  term_p_75 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(sym__2, term_c_75, term_p_75);
  ATprotect(&(term_g_76));
  term_g_76 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_76));
  term_h_76 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_k_76));
  term_k_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_76));
  term_l_76 = (ATerm) ATmakeAppl(sym__2, term_c_75, term_k_76);
  ATprotect(&(term_m_76));
  term_m_76 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_76));
  term_n_76 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_76));
  term_o_76 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_76));
  term_p_76 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_76));
  term_q_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_76));
  term_r_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_76));
  term_s_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_76));
  term_t_76 = (ATerm) ATmakeAppl(sym__2, term_s_76, term_k_45);
  ATprotect(&(term_u_76));
  term_u_76 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_45);
  ATprotect(&(term_v_76));
  term_v_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_w_76));
  term_w_76 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_x_76));
  term_x_76 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_76));
  term_y_76 = (ATerm) ATmakeAppl(sym__2, term_x_76, term_n_76);
  ATprotect(&(term_z_76));
  term_z_76 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_77));
  term_a_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_77));
  term_f_77 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_77));
  term_g_77 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_77));
  term_h_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_77));
  term_i_77 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_77));
  term_n_77 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_o_77));
  term_o_77 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_77));
  term_p_77 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_77));
  term_q_77 = (ATerm) ATmakeAppl(sym__2, term_c_75, term_p_77);
  ATprotect(&(term_a_78));
  term_a_78 = (ATerm) ATmakeAppl(sym__2, term_c_75, term_s_76);
  ATprotect(&(term_b_78));
  term_b_78 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_78));
  term_c_78 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_78));
  term_f_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_78));
  term_g_78 = (ATerm) ATmakeAppl(sym__2, term_c_75, term_f_78);
  ATprotect(&(term_j_78));
  term_j_78 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_k_78));
  term_k_78 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_l_78));
  term_l_78 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_78));
  term_o_78 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_78));
  term_p_78 = (ATerm) ATmakeAppl(sym__2, term_f_77, term_g_77);
  ATprotect(&(term_w_78));
  term_w_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_78));
  term_x_78 = (ATerm) ATmakeAppl(sym__2, term_w_78, term_n_76);
  ATprotect(&(term_y_78));
  term_y_78 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_78));
  term_z_78 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(sym__2, term_z_78, term_n_76);
  ATprotect(&(term_b_79));
  term_b_79 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_79));
  term_c_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_79));
  term_h_79 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(sym__2, term_f_78, term_n_76);
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_79));
  term_p_79 = (ATerm) ATmakeAppl(sym__3, term_f_77, term_g_77, (ATerm) ATempty);
  ATprotect(&(term_a_80));
  term_a_80 = (ATerm) ATmakeAppl(sym__2, term_c_75, term_w_78);
  ATprotect(&(term_d_80));
  term_d_80 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_80));
  term_e_80 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_80));
  term_f_80 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_80));
  term_u_80 = (ATerm) ATmakeAppl(sym__2, term_p_75, term_n_76);
  ATprotect(&(term_v_80));
  term_v_80 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_80));
  term_w_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm j_113 (ATerm), ATerm t);
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
static ATerm c_12 (ATerm k_146 (ATerm), ATerm f_83, ATerm d_83, ATerm e_83, ATerm i_83, ATerm g_83, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm k_146 (ATerm), ATerm t);
static ATerm z_18 (ATerm j_11, ATerm k_11, ATerm t);
static ATerm a_19 (ATerm l_12, ATerm p_12, ATerm t);
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
ATerm pat_td_1_0 (ATerm t_144 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm e_12 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm t);
static ATerm b_31 (ATerm h_30, ATerm t);
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
static ATerm l_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm f_12 (ATerm j_69, ATerm k_69, ATerm l_69, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm g_12 (ATerm j_146 (ATerm), ATerm m_82, ATerm j_82, ATerm k_82, ATerm t_82, ATerm x_82, ATerm y_82, ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm l_146 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm i_12 (ATerm m_83, ATerm l_83, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm v_62 (ATerm i_61, ATerm t);
static ATerm w_62 (ATerm v_61, ATerm t);
static ATerm o_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm a_65 (ATerm x_63, ATerm t);
static ATerm p_6 (ATerm t);
static ATerm r_6 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
static ATerm d_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
ATerm flatten_list_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
ATerm next_counter_0_0 (ATerm t);
static ATerm m_7 (ATerm t);
ATerm NewNumberedVar_0_0 (ATerm t);
ATerm RenameVarTerm_2_0 (ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm t);
static ATerm n_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm s_7 (ATerm t);
ATerm dr_rename_vars_0_0 (ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm a_8 (ATerm t);
static ATerm b_8 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm g_8 (ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
ATerm dummify_0_0 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm g_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm a_10 (ATerm t);
static ATerm d_10 (ATerm t);
static ATerm h_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm k_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm g_11 (ATerm t);
static ATerm i_11 (ATerm t);
static ATerm s_11 (ATerm t);
static ATerm y_11 (ATerm t);
static ATerm a_12 (ATerm t);
static ATerm b_12 (ATerm t);
static ATerm d_12 (ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm u_146 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm DesugarDynRuleDef_0_0 (ATerm t);
ATerm split_dynamic_rule_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm n_114 (ATerm), ATerm t);
static ATerm u_12 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm r_146 (ATerm), ATerm t);
static ATerm q_14 (ATerm t);
static ATerm w_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm k_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm v_12 (ATerm m_85, ATerm l_85, ATerm t);
ATerm repeat_2_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm f_121 (ATerm), ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t);
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t);
static ATerm a_123 (ATerm x_121, ATerm y_121, ATerm e_122, ATerm f_122, ATerm g_122, ATerm h_122, ATerm i_122, ATerm t);
static ATerm k_16 (ATerm t);
ATerm RDefToDRDef_extend_0_0 (ATerm t);
ATerm debug_1_0 (ATerm k_119 (ATerm), ATerm t);
static ATerm l_16 (ATerm t);
ATerm UpgradeUndefine_0_0 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm o_16 (ATerm t);
ATerm upgrade_old_dr_constructs_0_0 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm y_16 (ATerm t);
ATerm LiftDynamicRules_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm o_145 (ATerm), ATerm p_145 (ATerm), ATerm q_145 (ATerm), ATerm t);
ATerm dynrule_targs_1_0 (ATerm x_145 (ATerm), ATerm t);
static ATerm z_16 (ATerm t);
static ATerm a_17 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
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
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm y_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm b_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm b_13 (ATerm g_124 (ATerm), ATerm u_30, ATerm t_30, ATerm t);
static ATerm c_13 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm y_30, ATerm x_30, ATerm t);
static ATerm d_13 (ATerm b_124 (ATerm), ATerm s_30, ATerm r_30, ATerm t);
ATerm genzip_4_0 (ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm), ATerm c_122 (ATerm), ATerm t);
static ATerm j_18 (ATerm t);
static ATerm k_18 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm i_13 (ATerm x_686, ATerm c_687, ATerm j_68, ATerm t);
ATerm while_not_2_0 (ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm t);
ATerm for_3_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm t);
static ATerm m_18 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm l_143 (ATerm b_142, ATerm c_142, ATerm d_142, ATerm t);
static ATerm p_18 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm r_18 (ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
ATerm free_vars_3_0 (ATerm b_143 (ATerm), ATerm c_143 (ATerm), ATerm d_143 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm k_113 (ATerm), ATerm t);
static ATerm m_13 (ATerm q_61, ATerm r_61, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm b_115 (ATerm), ATerm t);
static ATerm n_13 (ATerm e_133 (ATerm), ATerm w_44, ATerm u_44, ATerm t);
static ATerm b_19 (ATerm t);
static ATerm e_19 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm o_13 (ATerm k_61, ATerm l_61, ATerm t);
ATerm end_scope_1_0 (ATerm b_133 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm a_133 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm t);
static ATerm i_19 (ATerm t);
static ATerm m_19 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm o_19 (ATerm t);
static ATerm t_19 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm y_127 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm m_120 (ATerm), ATerm t);
static ATerm m_150 (ATerm e_150, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm r_13 (ATerm e_35, ATerm r_34, ATerm t);
ATerm foldr_3_0 (ATerm w_126 (ATerm), ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm t);
static ATerm e_20 (ATerm t);
static ATerm g_20 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm i_20 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm l_20 (ATerm t);
static ATerm q_20 (ATerm t);
static ATerm s_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm v_20 (ATerm t);
static ATerm y_20 (ATerm t);
static ATerm a_21 (ATerm t);
static ATerm b_21 (ATerm t);
static ATerm c_21 (ATerm t);
static ATerm d_21 (ATerm t);
static ATerm i_21 (ATerm t);
static ATerm k_21 (ATerm t);
static ATerm l_21 (ATerm t);
static ATerm m_21 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm s_13 (ATerm m_40, ATerm n_40, ATerm t);
static ATerm t_13 (ATerm q_24, ATerm r_24, ATerm t);
static ATerm v_13 (ATerm m_119 (ATerm), ATerm e_186, ATerm w_24, ATerm t);
static ATerm u_13 (ATerm m_24, ATerm n_24, ATerm t);
static ATerm n_21 (ATerm t);
static ATerm u_21 (ATerm t);
ATerm output_1_0 (ATerm v_138 (ATerm), ATerm t);
static ATerm w_155 (ATerm q_155, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_13 (ATerm s_24, ATerm t);
static ATerm x_13 (ATerm f_39, ATerm g_39, ATerm t);
static ATerm y_13 (ATerm o_40, ATerm p_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_157 (ATerm g_156, ATerm t);
static ATerm i_157 (ATerm k_156, ATerm l_156, ATerm m_156, ATerm t);
static ATerm j_157 (ATerm u_156, ATerm v_156, ATerm w_156, ATerm t);
static ATerm z_13 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm w_138 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm b_22 (ATerm t);
static ATerm c_22 (ATerm t);
static ATerm e_22 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_22 (ATerm t);
static ATerm n_22 (ATerm t);
static ATerm o_22 (ATerm t);
static ATerm p_22 (ATerm t);
static ATerm q_22 (ATerm t);
static ATerm r_22 (ATerm t);
static ATerm s_22 (ATerm t);
static ATerm t_22 (ATerm t);
static ATerm z_22 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_14 (ATerm k_56, ATerm l_56, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
static ATerm g_23 (ATerm t);
static ATerm h_23 (ATerm t);
static ATerm i_23 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_23 (ATerm t);
static ATerm k_23 (ATerm t);
static ATerm l_23 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm g_14 (ATerm f_61, ATerm g_61, ATerm e_61, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm v_0 (ATerm), ATerm t);
static ATerm m_23 (ATerm t);
static ATerm q_23 (ATerm t);
static ATerm r_23 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_14 (ATerm i_43, ATerm j_43, ATerm t);
ATerm foldr_2_0 (ATerm u_126 (ATerm), ATerm v_126 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm c_24 (ATerm t);
static ATerm h_24 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_135 (ATerm), ATerm t);
static ATerm i_24 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_24 (ATerm t);
ATerm need_help_1_0 (ATerm m_138 (ATerm), ATerm t);
static ATerm j_14 (ATerm k_65, ATerm l_65, ATerm m_65, ATerm t);
ATerm lookup_table_0_1 (ATerm r_62, ATerm t);
ATerm new_hashtable_0_2 (ATerm s_65, ATerm t_65, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm c_14 (ATerm p_65, ATerm q_65, ATerm t);
static ATerm d_14 (ATerm u_65, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm v_119 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm v_24 (ATerm t);
static ATerm a_25 (ATerm t);
static ATerm b_25 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm f_120 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_14 (ATerm n_65, ATerm o_65, ATerm t);
static ATerm f_14 (ATerm y_62, ATerm z_62, ATerm t);
static ATerm c_25 (ATerm t);
static ATerm d_25 (ATerm t);
static ATerm e_25 (ATerm t);
static ATerm n_25 (ATerm t);
static ATerm o_25 (ATerm t);
static ATerm p_25 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm p_140 (ATerm), ATerm t);
static ATerm r_25 (ATerm t);
static ATerm s_25 (ATerm t);
static ATerm u_25 (ATerm t);
static ATerm v_25 (ATerm t);
ATerm parse_options_1_0 (ATerm o_140 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm o_138 (ATerm), ATerm p_138 (ATerm), ATerm q_138 (ATerm), ATerm r_138 (ATerm), ATerm t);
static ATerm x_25 (ATerm t);
static ATerm y_25 (ATerm t);
static ATerm z_25 (ATerm t);
static ATerm a_26 (ATerm t);
static ATerm d_26 (ATerm t);
static ATerm e_26 (ATerm t);
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
              t = term_g_26;
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
                  t = term_g_26;
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
                      t = term_i_26;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      d_1 = ATgetArgument(t, 0);
                      e_1 = ATgetArgument(t, 1);
                      b_1 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, e_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_26, (ATerm) ATinsert(ATinsert(ATempty, b_1), d_1)));
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
ATerm topdown_1_0 (ATerm j_113 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(j_113, t);
    return(t);
  }
  t = j_113(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm s_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_5);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm n_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_26);
    }
  else
    {
      t = n_26;
      {
        ATerm s_26 = t;
        int u_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_26);
          }
        else
          {
            t = s_26;
            {
              ATerm b_27 = t;
              int c_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_6 = NULL,d_6 = NULL,e_6 = NULL,f_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_6 = ATgetArgument(t, 0);
                      d_6 = ATgetArgument(t, 1);
                      e_6 = ATgetArgument(t, 2);
                      f_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_6;
                  t = map_1_0(u_0, t);
                  LocalPopChoice(c_27);
                }
              else
                {
                  t = b_27;
                  {
                    ATerm d_27 = t;
                    int i_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(i_27);
                      }
                    else
                      {
                        t = d_27;
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
  ATerm t_6 = NULL;
  ATerm k_27 = t;
  int p_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_6 = ATgetArgument(t, 0);
          {
            ATerm s_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_27);
      t = t_6;
    }
  else
    {
      t = k_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_6;
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
  ATerm y_6 = NULL;
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_6 = ATgetArgument(t, 0);
          {
            ATerm w_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_27);
      t = y_6;
    }
  else
    {
      t = t_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_6;
    }
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm b_7 = NULL;
  b_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_7);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm c_7 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_7);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(c_28);
          }
        else
          {
            t = b_28;
            {
              ATerm d_28 = t;
              int e_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_7 = ATgetArgument(t, 0);
                      f_7 = ATgetArgument(t, 1);
                      g_7 = ATgetArgument(t, 2);
                      h_7 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_7;
                  t = map_1_0(i_1, t);
                  LocalPopChoice(e_28);
                }
              else
                {
                  t = d_28;
                  {
                    ATerm i_28 = t;
                    int l_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(l_28);
                      }
                    else
                      {
                        t = i_28;
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
  ATerm r_7 = NULL;
  ATerm p_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_7 = ATgetArgument(t, 0);
          {
            ATerm v_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_28);
      t = r_7;
    }
  else
    {
      t = p_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_7;
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
  ATerm w_7 = NULL;
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_7 = ATgetArgument(t, 0);
          {
            ATerm y_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_28);
      t = w_7;
    }
  else
    {
      t = w_28;
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
static ATerm l_1 (ATerm t)
{
  ATerm c_8 = NULL;
  c_8 = t;
  {
    ATerm i_29 = t;
    int j_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_8 = NULL,b_0 = NULL,h_0 = NULL,k_0 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            l_8 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_8);
        b_0 = t;
        t = l_8;
        t = ContextVar_0_0(t);
        h_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, h_0);
        k_0 = t;
        t = SSLsetAnnotations(k_0, b_0);
        LocalPopChoice(j_29);
      }
    else
      {
        t = i_29;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, c_8);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm x_0 (ATerm), ATerm t)
{
  static ATerm m_9 (ATerm g_4, ATerm i_4, ATerm l_4, ATerm m_4, ATerm n_4, ATerm o_4, ATerm q_4, ATerm t)
  {
    ATerm y_4 = NULL,z_4 = NULL,b_5 = NULL,g_5 = NULL,i_5 = NULL,j_5 = NULL,l_5 = NULL,m_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, n_4, term_q_29);
    {
      ATerm r_29 = t;
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
          t = r_29;
        }
    }
    t = new_0_0(t);
    y_4 = t;
    t = m_4;
    t = dummify_0_0(t);
    b_5 = t;
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_5;
          if((m_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, y_4);
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          t = b_5;
        }
    }
    z_4 = t;
    t = b_5;
    t = free_vars_3_0(f_0, m_0, tboundin_3_0, t);
    t = map_1_0(f_1, t);
    i_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_4, o_4);
    t = free_vars_3_0(g_1, h_1, tboundin_3_0, t);
    t = filter_1_0(l_1, t);
    g_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_5, i_5);
    t = diff_0_0(t);
    j_5 = t;
    t = new_0_0(t);
    l_5 = t;
    t = g_4;
    t = x_0(t);
    m_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, m_5, (ATerm) ATmakeAppl(sym_Op_2, term_c_30, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_30, (ATerm) ATinsert(CheckATermList(j_5), (ATerm) ATmakeAppl(sym_Str_1, l_5)))), b_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_4, i_4, l_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, y_4), m_4), n_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_i_30, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_4)))), z_4), (ATerm) ATmakeAppl(sym_Op_2, term_d_30, (ATerm) ATinsert(CheckATermList(j_5), (ATerm) ATmakeAppl(sym_Str_1, l_5))))), o_4))));
    return(t);
  }
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,t_8 = NULL,x_8 = NULL,z_8 = NULL,c_9 = NULL;
  o_8 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      p_8 = ATgetArgument(t, 0);
      q_8 = ATgetArgument(t, 1);
      r_8 = ATgetArgument(t, 2);
      t_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = t_8;
  if(match_cons(t, sym_Rule_3))
    {
      x_8 = ATgetArgument(t, 0);
      z_8 = ATgetArgument(t, 1);
      c_9 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_8;
  if(match_cons(t, sym_Op_2))
    {
      m_8 = ATgetArgument(t, 0);
      n_8 = ATgetArgument(t, 1);
      t = n_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = m_8;
          if(match_string(t, "Undefined"))
            {
              ATerm j_30 = t;
              int k_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
                  t = o_8;
                  t = new_0_0(t);
                  j_2 = t;
                  t = x_8;
                  t = dummify_0_0(t);
                  h_2 = t;
                  {
                    ATerm l_30 = t;
                    int m_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = h_2;
                        if((x_8 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, j_2);
                        LocalPopChoice(m_30);
                      }
                    else
                      {
                        t = l_30;
                        t = h_2;
                      }
                  }
                  k_2 = t;
                  t = p_8;
                  t = x_0(t);
                  l_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, l_2, (ATerm) ATmakeAppl(sym_Op_2, term_c_30, (ATerm) ATinsert(ATinsert(ATempty, term_q_29), h_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, p_8, q_8, r_8, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, j_2), x_8), term_q_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_i_30, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, p_8)))), k_2), term_q_29)), (ATerm) ATmakeAppl(sym_Seq_2, c_9, term_g_26)))));
                  LocalPopChoice(k_30);
                }
              else
                {
                  t = j_30;
                  t = m_9(p_8, q_8, r_8, x_8, z_8, c_9, o_8, t);
                }
            }
          else
            {
              t = m_9(p_8, q_8, r_8, x_8, z_8, c_9, o_8, t);
            }
        }
      else
        {
          t = m_8;
          t = m_9(p_8, q_8, r_8, x_8, z_8, c_9, o_8, t);
        }
    }
  else
    {
      t = m_9(p_8, q_8, r_8, x_8, z_8, c_9, o_8, t);
    }
  return(t);
}
static ATerm c_12 (ATerm k_146 (ATerm), ATerm f_83, ATerm d_83, ATerm e_83, ATerm i_83, ATerm g_83, ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,v_9 = NULL;
  t = new_0_0(t);
  s_9 = t;
  t = i_83;
  t = dummify_0_0(t);
  r_9 = t;
  {
    ATerm z_30 = t;
    int a_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_9;
        if((i_83 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, s_9);
        LocalPopChoice(a_31);
      }
    else
      {
        t = z_30;
        t = r_9;
      }
  }
  t_9 = t;
  t = f_83;
  t = k_146(t);
  v_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, v_9, r_9)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, f_83, d_83, e_83, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_9), i_83), term_q_29, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_83)))), t_9), term_f_31)), (ATerm) ATmakeAppl(sym_Seq_2, g_83, term_g_26))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm k_146 (ATerm), ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      b_10 = ATgetArgument(t, 0);
      c_10 = ATgetArgument(t, 1);
      e_10 = ATgetArgument(t, 2);
      {
        ATerm j_31 = ATgetArgument(t, 3);
        if(match_cons(j_31, sym_Rule_3))
          {
            f_10 = ATgetArgument(j_31, 0);
            {
              ATerm k_31 = ATgetArgument(j_31, 1);
              if(match_cons(k_31, sym_Op_2))
                {
                  ATerm l_31 = ATgetArgument(k_31, 0);
                  if((ATgetSymbol((ATermAppl) l_31) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm o_31 = ATgetArgument(k_31, 1);
                    if(((ATgetType(o_31) != AT_LIST) || !(ATisEmpty(o_31))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            g_10 = ATgetArgument(j_31, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_12(k_146, b_10, c_10, e_10, f_10, g_10, t);
  return(t);
}
static ATerm z_18 (ATerm j_11, ATerm k_11, ATerm t)
{
  t = j_11;
  {
    ATerm q_31 = t;
    if((PushChoice() == 0))
      {
        ATerm t_11 = NULL,u_11 = NULL,z_11 = NULL,k_12 = NULL,j_3 = NULL;
        k_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_11 = ATgetFirst((ATermList) t);
            z_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_12);
        t_11 = t;
        t = z_11;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(z_11), u_11);
        j_3 = t;
        t = SSLsetAnnotations(j_3, t_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_31;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_26, j_11);
  return(t);
}
static ATerm a_19 (ATerm l_12, ATerm p_12, ATerm t)
{
  t = l_12;
  {
    ATerm t_31 = t;
    if((PushChoice() == 0))
      {
        ATerm w_12 = NULL,z_12 = NULL,g_13 = NULL,k_13 = NULL,m_3 = NULL;
        k_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_12 = ATgetFirst((ATermList) t);
            g_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_13);
        w_12 = t;
        t = g_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(g_13), z_12);
        m_3 = t;
        t = SSLsetAnnotations(m_3, w_12);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_31;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_u_31, l_12);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_x_31;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL,u_2 = NULL;
  x_14 = t;
  t = SSL_explode_term(x_14);
  if(match_cons(t, sym__2))
    {
      ATerm c_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_32 = ATgetArgument(t, 1);
        if(((ATgetType(h_32) == AT_LIST) && !(ATisEmpty(h_32))))
          {
            y_14 = ATgetFirst((ATermList) h_32);
            {
              ATerm i_32 = (ATerm) ATgetNext((ATermList) h_32);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(x_14);
  if(match_cons(t, sym__2))
    {
      ATerm j_32 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_32) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_32 = ATgetArgument(t, 1);
        if(((ATgetType(k_32) == AT_LIST) && !(ATisEmpty(k_32))))
          {
            ATerm l_32 = ATgetFirst((ATermList) k_32);
            ATerm m_32 = (ATerm) ATgetNext((ATermList) k_32);
            if(((ATgetType(m_32) == AT_LIST) && !(ATisEmpty(m_32))))
              {
                u_2 = ATgetFirst((ATermList) m_32);
                {
                  ATerm n_32 = (ATerm) ATgetNext((ATermList) m_32);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_32, (ATerm) ATinsert(ATinsert(ATempty, u_2), y_14));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      t_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_32, (ATerm) ATinsert(ATinsert(ATempty, u_15), t_15));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_x_31;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_o_32, (ATerm) ATinsert(ATinsert(ATempty, x_15), w_15));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm n_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym__2))
    {
      n_16 = ATgetArgument(t, 0);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_32, (ATerm) ATinsert(ATinsert(ATempty, p_16), n_16));
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_r_32;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL;
  if(match_cons(t, sym__2))
    {
      r_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_32, (ATerm) ATinsert(ATinsert(ATempty, s_16), r_16));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm l_13 = NULL,p_13 = NULL,q_13 = NULL,b_14 = NULL,e_14 = NULL,h_14 = NULL,l_14 = NULL,n_14 = NULL;
  h_14 = t;
  if(match_cons(t, sym_Anno_2))
    {
      l_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
      {
        ATerm v_14 = NULL;
        t = n_14;
        t = foldr_2_0(m_1, n_1, t);
        v_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, l_14, v_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          l_14 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, l_14, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              l_14 = ATgetArgument(t, 0);
              {
                ATerm z_2 = NULL;
                t = l_14;
                {
                  ATerm s_32 = t;
                  int t_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_u_32;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_v_32;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_w_32;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_x_32;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_z_32;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(t_32);
                    }
                  else
                    {
                      t = s_32;
                      {
                        ATerm b_3 = NULL;
                        t = SSL_explode_string(l_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm a_33 = ATgetFirst((ATermList) t);
                            if(((ATgetType(a_33) != AT_INT) || (ATgetInt((ATermInt) a_33) != 39)))
                              _fail(t);
                            {
                              ATerm b_33 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(b_33) == AT_LIST) && !(ATisEmpty(b_33))))
                                {
                                  b_3 = ATgetFirst((ATermList) b_33);
                                  {
                                    ATerm c_33 = (ATerm) ATgetNext((ATermList) b_33);
                                    if(((ATgetType(c_33) == AT_LIST) && !(ATisEmpty(c_33))))
                                      {
                                        ATerm d_33 = ATgetFirst((ATermList) c_33);
                                        if(((ATgetType(d_33) != AT_INT) || (ATgetInt((ATermInt) d_33) != 39)))
                                          _fail(t);
                                        {
                                          ATerm e_33 = (ATerm) ATgetNext((ATermList) c_33);
                                          if(((ATgetType(e_33) != AT_LIST) || !(ATisEmpty(e_33))))
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
              ATerm f_33 = t;
              int h_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      l_14 = ATgetArgument(t, 0);
                      {
                        ATerm m_33 = ATgetArgument(t, 1);
                      }
                      e_14 = ATgetArgument(t, 2);
                      l_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(h_33);
                  t = (ATerm) ATmakeAppl(sym_Con_3, l_14, e_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_13), (ATerm) ATempty));
                }
              else
                {
                  t = f_33;
                  {
                    ATerm o_33 = t;
                    int p_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            l_14 = ATgetArgument(t, 0);
                            {
                              ATerm q_33 = ATgetArgument(t, 1);
                            }
                            e_14 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(p_33);
                        t = (ATerm) ATmakeAppl(sym_Con_3, l_14, e_14, term_u_33);
                      }
                    else
                      {
                        t = o_33;
                        if(match_cons(t, sym_Con1_2))
                          {
                            l_14 = ATgetArgument(t, 0);
                            n_14 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, l_14, n_14, term_u_33);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                l_14 = ATgetArgument(t, 0);
                                n_14 = ATgetArgument(t, 1);
                                {
                                  static ATerm o_1 (ATerm t)
                                  {
                                    t = n_14;
                                    return(t);
                                  }
                                  t = l_14;
                                  t = foldr_2_0(o_1, p_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    l_14 = ATgetArgument(t, 0);
                                    t = l_14;
                                    t = foldr_2_0(q_1, r_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        l_14 = ATgetArgument(t, 0);
                                        t = l_14;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            p_13 = ATgetFirst((ATermList) t);
                                            q_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = q_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm v_33 = t;
                                                int x_33 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = z_18(l_14, h_14, t);
                                                    LocalPopChoice(x_33);
                                                  }
                                                else
                                                  {
                                                    t = v_33;
                                                    t = p_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = z_18(l_14, h_14, t);
                                              }
                                          }
                                        else
                                          {
                                            t = z_18(l_14, h_14, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            l_14 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, l_14));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                l_14 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, l_14));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    l_14 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, l_14));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        l_14 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, l_14));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            l_14 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_14), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                l_14 = ATgetArgument(t, 0);
                                                                n_14 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_14), n_14);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    l_14 = ATgetArgument(t, 0);
                                                                    n_14 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm s_1 (ATerm t)
                                                                      {
                                                                        t = n_14;
                                                                        return(t);
                                                                      }
                                                                      t = l_14;
                                                                      t = foldr_2_0(s_1, t_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        l_14 = ATgetArgument(t, 0);
                                                                        t = l_14;
                                                                        t = foldr_2_0(u_1, v_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            l_14 = ATgetArgument(t, 0);
                                                                            n_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_u_31, (ATerm) ATinsert(CheckATermList(n_14), l_14));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                l_14 = ATgetArgument(t, 0);
                                                                                t = l_14;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    p_13 = ATgetFirst((ATermList) t);
                                                                                    q_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = q_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm y_33 = t;
                                                                                        int z_33 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = a_19(l_14, h_14, t);
                                                                                            LocalPopChoice(z_33);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = y_33;
                                                                                            t = p_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = a_19(l_14, h_14, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = a_19(l_14, h_14, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_a_34;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        l_14 = ATgetArgument(t, 0);
                                                                                        n_14 = ATgetArgument(t, 1);
                                                                                        t = n_14;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            b_14 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_f_34, (ATerm) ATinsert(ATinsert(ATempty, b_14), l_14));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            l_14 = ATgetArgument(t, 0);
                                                                                            t = l_14;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                l_14 = ATgetArgument(t, 0);
                                                                                                n_14 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, l_14, n_14, term_i_26);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    l_14 = ATgetArgument(t, 0);
                                                                                                    n_14 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, l_14, n_14, term_i_26);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        l_14 = ATgetArgument(t, 0);
                                                                                                        n_14 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, l_14, (ATerm)ATempty, n_14);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            l_14 = ATgetArgument(t, 0);
                                                                                                            n_14 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, n_14, l_14);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                l_14 = ATgetArgument(t, 0);
                                                                                                                n_14 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, l_14, n_14, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    l_14 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, l_14, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        l_14 = ATgetArgument(t, 0);
                                                                                                                        n_14 = ATgetArgument(t, 1);
                                                                                                                        e_14 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, l_14, n_14, (ATerm)ATempty, e_14);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            l_14 = ATgetArgument(t, 0);
                                                                                                                            n_14 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, l_14, (ATerm)ATempty, (ATerm)ATempty, n_14);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                l_14 = ATgetArgument(t, 0);
                                                                                                                                n_14 = ATgetArgument(t, 1);
                                                                                                                                e_14 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, l_14, n_14, (ATerm)ATempty, e_14);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    l_14 = ATgetArgument(t, 0);
                                                                                                                                    n_14 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, l_14, (ATerm)ATempty, (ATerm)ATempty, n_14);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        l_14 = ATgetArgument(t, 0);
                                                                                                                                        n_14 = ATgetArgument(t, 1);
                                                                                                                                        e_14 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, l_14, n_14, (ATerm)ATempty, e_14);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            l_14 = ATgetArgument(t, 0);
                                                                                                                                            n_14 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, l_14, (ATerm)ATempty, (ATerm)ATempty, n_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm h_34 = ATgetArgument(t, 0);
                                                                                                                                                n_14 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, n_14);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm c_19 = NULL,d_19 = NULL,g_19 = NULL;
  d_19 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      g_19 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
      {
        ATerm j_19 = NULL,k_19 = NULL,p_19 = NULL,q_19 = NULL;
        t = d_19;
        t = new_0_0(t);
        j_19 = t;
        t = new_0_0(t);
        k_19 = t;
        t = new_0_0(t);
        p_19 = t;
        t = new_0_0(t);
        q_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_19), p_19), k_19), j_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, j_19), (ATerm) ATmakeAppl(sym_Var_1, p_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, g_19, (ATerm)ATmakeAppl(sym_Var_1, j_19), (ATerm) ATmakeAppl(sym_Var_1, k_19)), (ATerm) ATmakeAppl(sym_BAM_3, c_19, (ATerm)ATmakeAppl(sym_Var_1, p_19), (ATerm) ATmakeAppl(sym_Var_1, q_19)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_34, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_19)), (ATerm) ATmakeAppl(sym_Var_1, k_19))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          g_19 = ATgetArgument(t, 0);
          {
            ATerm r_19 = NULL,s_19 = NULL,u_19 = NULL,v_19 = NULL;
            t = d_19;
            t = new_0_0(t);
            u_19 = t;
            t = g_19;
            {
              static ATerm w_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
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
              t = oncetd_1_0(w_1, t);
            }
            v_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_34, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_19)), not_null(r_19))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_19)), (ATerm) ATmakeAppl(sym_Build_1, v_19))));
          }
        }
      else
        {
          ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL,c_20 = NULL,d_20 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              g_19 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_19;
          t = new_0_0(t);
          z_19 = t;
          t = new_0_0(t);
          c_20 = t;
          t = g_19;
          {
            static ATerm x_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((x_19 != NULL) && (x_19 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    x_19 = ATgetArgument(t, 0);
                  if(((y_19 != NULL) && (y_19 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    y_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, z_19);
              return(t);
            }
            t = oncetd_1_0(x_1, t);
          }
          d_20 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_20)), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_34, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, c_20))))), (ATerm)ATmakeAppl(sym_Var_1, z_19), (ATerm) ATmakeAppl(sym_Op_2, term_l_26, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_19)), not_null(x_19)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm f_20 = NULL,k_20 = NULL;
  f_20 = t;
  if(match_cons(t, sym_Match_1))
    {
      k_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
        t = f_20;
        t = new_0_0(t);
        o_20 = t;
        t = k_20;
        {
          static ATerm y_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((m_20 != NULL) && (m_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_20 = ATgetArgument(t, 0);
                if(((n_20 != NULL) && (n_20 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_20 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_20), m_20);
            return(t);
          }
          t = pat_td_1_0(y_1, t);
        }
        p_20 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_20), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_34, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_20))), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_20))))));
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        {
          ATerm q_34 = t;
          int u_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_20 = NULL,w_20 = NULL,x_20 = NULL;
              t = f_20;
              t = new_0_0(t);
              w_20 = t;
              t = k_20;
              {
                static ATerm z_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((r_20 != NULL) && (r_20 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_20 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, w_20);
                  return(t);
                }
                t = pat_td_1_0(z_1, t);
              }
              x_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_20)), not_null(r_20))));
              LocalPopChoice(u_34);
            }
          else
            {
              t = q_34;
              {
                ATerm z_20 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL;
                t = f_20;
                t = new_0_0(t);
                f_21 = t;
                t = k_20;
                {
                  static ATerm a_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((e_21 != NULL) && (e_21 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          e_21 = ATgetArgument(t, 0);
                        if(((z_20 != NULL) && (z_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          z_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, f_21);
                    return(t);
                  }
                  t = pat_td_1_0(a_2, t);
                }
                g_21 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_21), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, f_21)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(z_20)), not_null(e_21)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm t_144 (ATerm), ATerm t)
{
  ATerm v_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_144(t);
      LocalPopChoice(w_34);
    }
  else
    {
      t = v_34;
      {
        ATerm j_26 = NULL,o_26 = NULL,v_26 = NULL,w_26 = NULL;
        o_26 = t;
        if(match_cons(t, sym_Op_2))
          {
            v_26 = ATgetArgument(t, 0);
            w_26 = ATgetArgument(t, 1);
            {
              ATerm h_3 = NULL,n_3 = NULL,q_3 = NULL;
              t = SSLgetAnnotations(o_26);
              h_3 = t;
              t = w_26;
              {
                static ATerm b_2 (ATerm t)
                {
                  t = pat_td_1_0(t_144, t);
                  return(t);
                }
                t = fetch_1_0(b_2, t);
              }
              n_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, v_26, n_3);
              q_3 = t;
              t = SSLsetAnnotations(q_3, h_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                v_26 = ATgetArgument(t, 0);
                w_26 = ATgetArgument(t, 1);
                {
                  ATerm x_34 = t;
                  int y_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_4 = NULL,x_4 = NULL,s_3 = NULL;
                      t = SSLgetAnnotations(o_26);
                      p_4 = t;
                      t = w_26;
                      t = pat_td_1_0(t_144, t);
                      x_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, v_26, x_4);
                      s_3 = t;
                      t = SSLsetAnnotations(s_3, p_4);
                      LocalPopChoice(y_34);
                    }
                  else
                    {
                      t = x_34;
                      {
                        ATerm t_5 = NULL,w_5 = NULL,t_3 = NULL;
                        t = SSLgetAnnotations(o_26);
                        t_5 = t;
                        t = v_26;
                        t = pat_td_1_0(t_144, t);
                        w_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, w_5, w_26);
                        t_3 = t;
                        t = SSLsetAnnotations(t_3, t_5);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    v_26 = ATgetArgument(t, 0);
                    w_26 = ATgetArgument(t, 1);
                    j_26 = ATgetArgument(t, 2);
                    {
                      ATerm q_6 = NULL,p_7 = NULL,v_3 = NULL;
                      t = SSLgetAnnotations(o_26);
                      q_6 = t;
                      t = j_26;
                      {
                        static ATerm c_2 (ATerm t)
                        {
                          t = pat_td_1_0(t_144, t);
                          return(t);
                        }
                        t = fetch_1_0(c_2, t);
                      }
                      p_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, v_26, w_26, p_7);
                      v_3 = t;
                      t = SSLsetAnnotations(v_3, q_6);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        v_26 = ATgetArgument(t, 0);
                        w_26 = ATgetArgument(t, 1);
                        j_26 = ATgetArgument(t, 2);
                        {
                          ATerm v_8 = NULL,b_9 = NULL,x_3 = NULL;
                          t = SSLgetAnnotations(o_26);
                          v_8 = t;
                          t = j_26;
                          {
                            static ATerm d_2 (ATerm t)
                            {
                              t = pat_td_1_0(t_144, t);
                              return(t);
                            }
                            t = fetch_1_0(d_2, t);
                          }
                          b_9 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, v_26, w_26, b_9);
                          x_3 = t;
                          t = SSLsetAnnotations(x_3, v_8);
                        }
                      }
                    else
                      {
                        ATerm n_9 = NULL,u_9 = NULL,y_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            v_26 = ATgetArgument(t, 0);
                            w_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(o_26);
                        n_9 = t;
                        t = w_26;
                        t = pat_td_1_0(t_144, t);
                        u_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, v_26, u_9);
                        y_3 = t;
                        t = SSLsetAnnotations(y_3, n_9);
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
  ATerm l_27 = NULL,m_27 = NULL;
  l_27 = t;
  if(match_cons(t, sym_Build_1))
    {
      m_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_35 = t;
    int c_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_27 = NULL,o_27 = NULL,q_27 = NULL,r_27 = NULL;
        t = l_27;
        t = new_0_0(t);
        q_27 = t;
        t = m_27;
        {
          static ATerm e_2 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((n_27 != NULL) && (n_27 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_27 = ATgetArgument(t, 0);
                if(((o_27 != NULL) && (o_27 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  o_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, q_27);
            return(t);
          }
          t = pat_td_1_0(e_2, t);
        }
        r_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_35, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_27)), not_null(n_27))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_27)))), (ATerm) ATmakeAppl(sym_Build_1, r_27)));
        LocalPopChoice(c_35);
      }
    else
      {
        t = a_35;
        {
          ATerm i_35 = t;
          int j_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_28 = NULL,f_28 = NULL,g_28 = NULL;
              t = l_27;
              t = new_0_0(t);
              f_28 = t;
              t = m_27;
              {
                static ATerm f_2 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((a_28 != NULL) && (a_28 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        a_28 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, f_28);
                  return(t);
                }
                t = pat_td_1_0(f_2, t);
              }
              g_28 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(a_28), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_28)))), (ATerm) ATmakeAppl(sym_Build_1, g_28)));
              LocalPopChoice(j_35);
            }
          else
            {
              t = i_35;
              {
                ATerm j_28 = NULL,k_28 = NULL,n_28 = NULL,o_28 = NULL;
                t = l_27;
                t = new_0_0(t);
                n_28 = t;
                t = m_27;
                {
                  static ATerm g_2 (ATerm t)
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_28);
                    return(t);
                  }
                  t = pat_td_1_0(g_2, t);
                }
                o_28 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_28), not_null(k_28), (ATerm) ATmakeAppl(sym_Var_1, n_28))), (ATerm) ATmakeAppl(sym_Build_1, o_28)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm k_35 = t;
  if((PushChoice() == 0))
    {
      ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,e_8 = NULL;
      g_29 = t;
      if(match_cons(t, sym_Var_1))
        {
          f_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_29);
      e_29 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, f_29);
      e_8 = t;
      t = SSLsetAnnotations(e_8, e_29);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_35;
    }
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_35;
  return(t);
}
static ATerm n_2 (ATerm t)
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
static ATerm o_2 (ATerm t)
{
  ATerm o_29 = NULL,p_29 = NULL,u_29 = NULL,v_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_35 = ATgetArgument(t, 0);
      if(match_cons(n_35, sym__2))
        {
          o_29 = ATgetArgument(n_35, 0);
          p_29 = ATgetArgument(n_35, 1);
        }
      else
        _fail(t);
      {
        ATerm o_35 = ATgetArgument(t, 1);
        if(match_cons(o_35, sym__2))
          {
            u_29 = ATgetArgument(o_35, 0);
            v_29 = ATgetArgument(o_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_29), o_29), (ATerm) ATinsert(CheckATermList(v_29), p_29));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_35;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_29 = ATgetFirst((ATermList) t);
      x_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_29, x_29);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_35 = ATgetArgument(t, 0);
      if(match_cons(p_35, sym__2))
        {
          y_29 = ATgetArgument(p_35, 0);
          z_29 = ATgetArgument(p_35, 1);
        }
      else
        _fail(t);
      {
        ATerm r_35 = ATgetArgument(t, 1);
        if(match_cons(r_35, sym__2))
          {
            a_30 = ATgetArgument(r_35, 0);
            b_30 = ATgetArgument(r_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_30), y_29), (ATerm) ATinsert(CheckATermList(b_30), z_29));
  return(t);
}
static ATerm e_12 (ATerm w_73, ATerm x_73, ATerm y_73, ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,u_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,h_8 = NULL;
  t = y_73;
  t = fetch_1_0(i_2, t);
  t = y_73;
  t = genzip_4_0(m_2, n_2, o_2, LiftPrimArg_0_0, t);
  d_29 = t;
  if(match_cons(t, sym__2))
    {
      z_28 = ATgetArgument(t, 0);
      a_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_29);
  u_28 = t;
  t = z_28;
  t = concat_0_0(t);
  b_29 = t;
  t = a_29;
  t = genzip_4_0(p_2, q_2, r_2, _id, t);
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_29, c_29);
  h_8 = t;
  t = SSLsetAnnotations(h_8, u_28);
  if(match_cons(t, sym__2))
    {
      q_28 = ATgetArgument(t, 0);
      {
        ATerm s_35 = ATgetArgument(t, 1);
        if(match_cons(s_35, sym__2))
          {
            r_28 = ATgetArgument(s_35, 0);
            s_28 = ATgetArgument(s_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, q_28, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_28), (ATerm) ATmakeAppl(sym_CallT_3, w_73, x_73, s_28)));
  return(t);
}
static ATerm b_31 (ATerm h_30, ATerm t)
{
  ATerm n_30 = NULL;
  t = h_30;
  {
    ATerm u_35 = t;
    if((PushChoice() == 0))
      {
        ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,d_9 = NULL;
        q_30 = t;
        if(match_cons(t, sym_Var_1))
          {
            p_30 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_30);
        o_30 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, p_30);
        d_9 = t;
        t = SSLsetAnnotations(d_9, o_30);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_35;
      }
  }
  t = new_0_0(t);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, n_30), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_30)))), (ATerm) ATmakeAppl(sym_Var_1, n_30)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm v_30 = NULL,w_30 = NULL;
  v_30 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_30 = ATgetArgument(t, 0);
      {
        ATerm y_35 = t;
        int z_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_31(v_30, t);
            LocalPopChoice(z_35);
          }
        else
          {
            t = y_35;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_i_26, (ATerm) ATmakeAppl(sym_Var_1, w_30)));
          }
      }
    }
  else
    {
      t = b_31(v_30, t);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm d_36 = t;
  if((PushChoice() == 0))
    {
      ATerm y_10 = NULL,a_11 = NULL,d_11 = NULL,z_10 = NULL;
      d_11 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_11);
      y_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_11);
      z_10 = t;
      t = SSLsetAnnotations(z_10, y_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_36;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_35;
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm e_11 = NULL,h_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_11 = ATgetFirst((ATermList) t);
      h_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_11, h_11);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_36 = ATgetArgument(t, 0);
      if(match_cons(h_36, sym__2))
        {
          l_11 = ATgetArgument(h_36, 0);
          m_11 = ATgetArgument(h_36, 1);
        }
      else
        _fail(t);
      {
        ATerm i_36 = ATgetArgument(t, 1);
        if(match_cons(i_36, sym__2))
          {
            n_11 = ATgetArgument(i_36, 0);
            o_11 = ATgetArgument(i_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_11), l_11), (ATerm) ATinsert(CheckATermList(o_11), m_11));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_35;
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
  ATerm r_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_36 = ATgetArgument(t, 0);
      if(match_cons(j_36, sym__2))
        {
          r_11 = ATgetArgument(j_36, 0);
          v_11 = ATgetArgument(j_36, 1);
        }
      else
        _fail(t);
      {
        ATerm k_36 = ATgetArgument(t, 1);
        if(match_cons(k_36, sym__2))
          {
            w_11 = ATgetArgument(k_36, 0);
            x_11 = ATgetArgument(k_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_11), r_11), (ATerm) ATinsert(CheckATermList(x_11), v_11));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm l_36 = t;
  if((PushChoice() == 0))
    {
      ATerm m_14 = NULL,o_14 = NULL,r_14 = NULL,c_11 = NULL;
      r_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          o_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_14);
      m_14 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, o_14);
      c_11 = t;
      t = SSLsetAnnotations(c_11, m_14);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_36;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_35;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm s_14 = NULL,t_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_14 = ATgetFirst((ATermList) t);
      t_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_14, t_14);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm u_14 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_36 = ATgetArgument(t, 0);
      if(match_cons(n_36, sym__2))
        {
          u_14 = ATgetArgument(n_36, 0);
          f_15 = ATgetArgument(n_36, 1);
        }
      else
        _fail(t);
      {
        ATerm p_36 = ATgetArgument(t, 1);
        if(match_cons(p_36, sym__2))
          {
            g_15 = ATgetArgument(p_36, 0);
            h_15 = ATgetArgument(p_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_15), u_14), (ATerm) ATinsert(CheckATermList(h_15), f_15));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_35;
  return(t);
}
static ATerm i_3 (ATerm t)
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
static ATerm k_3 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,p_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_36 = ATgetArgument(t, 0);
      if(match_cons(r_36, sym__2))
        {
          m_15 = ATgetArgument(r_36, 0);
          n_15 = ATgetArgument(r_36, 1);
        }
      else
        _fail(t);
      {
        ATerm s_36 = ATgetArgument(t, 1);
        if(match_cons(s_36, sym__2))
          {
            o_15 = ATgetArgument(s_36, 0);
            p_15 = ATgetArgument(s_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_15), m_15), (ATerm) ATinsert(CheckATermList(p_15), n_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm c_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
  e_36 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      f_36 = ATgetArgument(t, 0);
      g_36 = ATgetArgument(t, 1);
      c_36 = ATgetArgument(t, 2);
      {
        ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,b_11 = NULL;
        t = c_36;
        t = fetch_1_0(s_2, t);
        t = c_36;
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
        b_11 = t;
        t = SSLsetAnnotations(b_11, s_10);
        if(match_cons(t, sym__2))
          {
            p_10 = ATgetArgument(t, 0);
            {
              ATerm t_36 = ATgetArgument(t, 1);
              if(match_cons(t_36, sym__2))
                {
                  q_10 = ATgetArgument(t_36, 0);
                  r_10 = ATgetArgument(t_36, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_10), (ATerm) ATmakeAppl(sym_PrimT_3, f_36, g_36, r_10)));
      }
    }
  else
    {
      ATerm s_12 = NULL,t_12 = NULL,x_12 = NULL,y_12 = NULL,a_13 = NULL,e_13 = NULL,f_13 = NULL,h_13 = NULL,j_13 = NULL,f_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          f_36 = ATgetArgument(t, 0);
          g_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_36;
      t = fetch_1_0(c_3, t);
      t = g_36;
      t = genzip_4_0(d_3, e_3, f_3, LiftPrimArg_0_0, t);
      j_13 = t;
      if(match_cons(t, sym__2))
        {
          a_13 = ATgetArgument(t, 0);
          e_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_13);
      y_12 = t;
      t = a_13;
      t = concat_0_0(t);
      f_13 = t;
      t = e_13;
      t = genzip_4_0(g_3, i_3, k_3, _id, t);
      h_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_13, h_13);
      f_11 = t;
      t = SSLsetAnnotations(f_11, y_12);
      if(match_cons(t, sym__2))
        {
          s_12 = ATgetArgument(t, 0);
          {
            ATerm u_36 = ATgetArgument(t, 1);
            if(match_cons(u_36, sym__2))
              {
                t_12 = ATgetArgument(u_36, 0);
                x_12 = ATgetArgument(u_36, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, s_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, t_12), (ATerm) ATmakeAppl(sym_PrimT_3, f_36, (ATerm)ATempty, x_12)));
    }
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm n_37 = NULL,s_37 = NULL,u_37 = NULL,z_37 = NULL;
  z_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      n_37 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
      u_37 = ATgetArgument(t, 2);
      {
        ATerm x_16 = NULL,t_21 = NULL;
        t = SSLgetAnnotations(z_37);
        x_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, n_37, s_37, u_37);
        t_21 = t;
        t = SSLsetAnnotations(t_21, x_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = z_37;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm v_36 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(l_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_36;
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm w_39 = NULL,z_39 = NULL,b_40 = NULL,d_40 = NULL;
  z_39 = t;
  if(match_cons(t, sym_Con_3))
    {
      b_40 = ATgetArgument(t, 0);
      d_40 = ATgetArgument(t, 1);
      w_39 = ATgetArgument(t, 2);
      {
        ATerm x_17 = NULL,v_21 = NULL;
        t = SSLgetAnnotations(z_39);
        x_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, b_40, d_40, w_39);
        v_21 = t;
        t = SSLsetAnnotations(v_21, x_17);
      }
    }
  else
    {
      ATerm l_19 = NULL,w_21 = NULL;
      if(match_cons(t, sym_App_2))
        {
          b_40 = ATgetArgument(t, 0);
          d_40 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_39);
      l_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, b_40, d_40);
      w_21 = t;
      t = SSLsetAnnotations(w_21, l_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm x_36 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(o_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_36;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,t_40 = NULL,v_40 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      j_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_40;
  if(match_cons(t, sym_StratRule_3))
    {
      k_40 = ATgetArgument(t, 0);
      t_40 = ATgetArgument(t, 1);
      v_40 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, t_40), (ATerm) ATmakeAppl(sym_Where_1, v_40)), k_40));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          k_40 = ATgetArgument(t, 0);
          t_40 = ATgetArgument(t, 1);
          v_40 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_40;
      t = pureterm_0_0(t);
      t = t_40;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, t_40)), (ATerm) ATmakeAppl(sym_Where_1, v_40)), (ATerm) ATmakeAppl(sym_Match_1, k_40)));
    }
  return(t);
}
static ATerm f_12 (ATerm j_69, ATerm k_69, ATerm l_69, ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
  t = new_0_0(t);
  w_41 = t;
  t = j_69;
  {
    static ATerm p_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm y_36 = ATgetArgument(t, 0);
          if(match_cons(y_36, sym_Var_1))
            {
              if(((v_41 != NULL) && (v_41 != ATgetArgument(y_36, 0))))
                _fail(ATgetArgument(y_36, 0));
              else
                v_41 = ATgetArgument(y_36, 0);
            }
          else
            _fail(t);
          if(((t_41 != NULL) && (t_41 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            t_41 = ATgetArgument(t, 1);
          {
            ATerm z_36 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, v_41);
      return(t);
    }
    t = oncetd_1_0(p_3, t);
  }
  x_41 = t;
  t = k_69;
  {
    static ATerm r_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm b_37 = ATgetArgument(t, 0);
          if(match_cons(b_37, sym_Var_1))
            {
              if(((v_41 != NULL) && (v_41 != ATgetArgument(b_37, 0))))
                _fail(ATgetArgument(b_37, 0));
              else
                v_41 = ATgetArgument(b_37, 0);
            }
          else
            _fail(t);
          if(((u_41 != NULL) && (u_41 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_41 = ATgetArgument(t, 1);
          {
            ATerm c_37 = ATgetArgument(t, 2);
            if(match_cons(c_37, sym_CallT_3))
              {
                if(((s_41 != NULL) && (s_41 != ATgetArgument(c_37, 0))))
                  _fail(ATgetArgument(c_37, 0));
                else
                  s_41 = ATgetArgument(c_37, 0);
                {
                  ATerm d_37 = ATgetArgument(c_37, 1);
                  if(((ATgetType(d_37) != AT_LIST) || !(ATisEmpty(d_37))))
                    _fail(t);
                }
                {
                  ATerm e_37 = ATgetArgument(c_37, 2);
                  if(((ATgetType(e_37) != AT_LIST) || !(ATisEmpty(e_37))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, w_41);
      return(t);
    }
    t = oncetd_1_0(r_3, t);
  }
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_41), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, x_41, y_41, (ATerm) ATmakeAppl(sym_Seq_2, l_69, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(s_41), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(t_41), not_null(u_41), term_i_26))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(v_41)), (ATerm) ATmakeAppl(sym_Var_1, w_41))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm f_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_37 = t;
      int i_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_42 = NULL,m_42 = NULL,r_42 = NULL,s_42 = NULL,x_42 = NULL,y_42 = NULL;
          s_42 = t;
          if(match_cons(t, sym_SRule_1))
            {
              x_42 = ATgetArgument(t, 0);
              t = x_42;
              if(match_cons(t, sym_Rule_3))
                {
                  l_42 = ATgetArgument(t, 0);
                  m_42 = ATgetArgument(t, 1);
                  r_42 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = s_42;
              t = f_12(l_42, m_42, r_42, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm j_20 = NULL,u_20 = NULL,d_22 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  x_42 = ATgetArgument(t, 0);
                  y_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_42);
              j_20 = t;
              t = y_42;
              t = desugarRule_0_0(t);
              u_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, x_42, u_20);
              d_22 = t;
              t = SSLsetAnnotations(d_22, j_20);
            }
          LocalPopChoice(i_37);
        }
      else
        {
          t = h_37;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(g_37);
    }
  else
    {
      t = f_37;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm j_37 = t;
  int k_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(k_37);
    }
  else
    {
      t = j_37;
    }
  t = repeat_2_0(w_3, _id, t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm l_37 = t;
  int m_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
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
            ATerm v_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL;
            v_43 = t;
            if(match_cons(t, sym_CallT_3))
              {
                x_43 = ATgetArgument(t, 0);
                y_43 = ATgetArgument(t, 1);
                z_43 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = v_43;
            t = e_12(x_43, y_43, z_43, t);
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            {
              ATerm q_37 = t;
              int t_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(t_37);
                }
              else
                {
                  t = q_37;
                  {
                    ATerm v_37 = t;
                    int w_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(w_37);
                      }
                    else
                      {
                        t = v_37;
                        {
                          ATerm x_37 = t;
                          int y_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_38 = t;
                              int c_38 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm j_44 = NULL,n_44 = NULL,b_45 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      j_44 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = j_44;
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
                                          b_45 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, n_44, b_45);
                                    }
                                  LocalPopChoice(c_38);
                                }
                              else
                                {
                                  t = a_38;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(y_37);
                            }
                          else
                            {
                              t = x_37;
                              {
                                ATerm d_38 = t;
                                int e_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(e_38);
                                  }
                                else
                                  {
                                    t = d_38;
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
static ATerm z_3 (ATerm t)
{
  ATerm h_47 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_47 = ATgetArgument(t, 0);
      t = h_47;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_47 = ATgetArgument(t, 0);
          {
            ATerm f_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_47;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_47), (ATerm) ATempty);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm r_47 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_47 = ATgetArgument(t, 0);
      t = r_47;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_47 = ATgetArgument(t, 0);
          {
            ATerm g_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = r_47;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, r_47);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm c_48 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_48);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm h_38 = t;
  int i_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_38);
    }
  else
    {
      t = h_38;
      {
        ATerm j_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_38);
          }
        else
          {
            t = j_38;
            {
              ATerm p_38 = t;
              int q_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_48 = NULL,j_48 = NULL,k_48 = NULL,l_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_48 = ATgetArgument(t, 0);
                      j_48 = ATgetArgument(t, 1);
                      k_48 = ATgetArgument(t, 2);
                      l_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_48;
                  t = map_1_0(d_4, t);
                  LocalPopChoice(q_38);
                }
              else
                {
                  t = p_38;
                  {
                    ATerm r_38 = t;
                    int s_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_38);
                      }
                    else
                      {
                        t = r_38;
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
  ATerm w_48 = NULL;
  ATerm t_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_48 = ATgetArgument(t, 0);
          {
            ATerm w_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_38);
      t = w_48;
    }
  else
    {
      t = t_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_48 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_48;
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
  ATerm h_49 = NULL;
  ATerm x_38 = t;
  int y_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_49 = ATgetArgument(t, 0);
          {
            ATerm a_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_38);
      t = h_49;
    }
  else
    {
      t = x_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_49 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_49;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm p_49 = NULL;
  p_49 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_49);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm q_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_49);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm c_39 = t;
  int d_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_39);
    }
  else
    {
      t = c_39;
      {
        ATerm e_39 = t;
        int h_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(h_39);
          }
        else
          {
            t = e_39;
            {
              ATerm j_39 = t;
              int l_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_49 = ATgetArgument(t, 0);
                      t_49 = ATgetArgument(t, 1);
                      u_49 = ATgetArgument(t, 2);
                      v_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_49;
                  t = map_1_0(r_4, t);
                  LocalPopChoice(l_39);
                }
              else
                {
                  t = j_39;
                  {
                    ATerm n_39 = t;
                    int o_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_39);
                      }
                    else
                      {
                        t = n_39;
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
  ATerm u_50 = NULL;
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_50 = ATgetArgument(t, 0);
          {
            ATerm r_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_39);
      t = u_50;
    }
  else
    {
      t = p_39;
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
static ATerm s_4 (ATerm t)
{
  t = map_1_0(t_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm a_51 = NULL;
  ATerm s_39 = t;
  int t_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_51 = ATgetArgument(t, 0);
          {
            ATerm u_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_39);
      t = a_51;
    }
  else
    {
      t = s_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_51 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_51;
    }
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm e_51 = NULL;
  e_51 = t;
  {
    ATerm v_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_51 = NULL,h_21 = NULL,j_21 = NULL,f_22 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            l_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_51);
        h_21 = t;
        t = l_51;
        t = ContextVar_0_0(t);
        j_21 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, j_21);
        f_22 = t;
        t = SSLsetAnnotations(f_22, h_21);
        LocalPopChoice(x_39);
      }
    else
      {
        t = v_39;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, e_51);
  return(t);
}
static ATerm g_12 (ATerm j_146 (ATerm), ATerm m_82, ATerm j_82, ATerm k_82, ATerm t_82, ATerm x_82, ATerm y_82, ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,y_46 = NULL,z_46 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_82, term_q_29);
  {
    ATerm a_40 = t;
    if((PushChoice() == 0))
      {
        ATerm c_47 = NULL;
        if(match_cons(t, sym__2))
          {
            c_47 = ATgetArgument(t, 0);
            if((c_47 != ATgetArgument(t, 1)))
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
        t = a_40;
      }
  }
  t = term_e_40;
  z_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_40, m_82);
  t = x_13(z_46, m_82, t);
  g_46 = t;
  t = term_f_40;
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_40, m_82);
  t = x_13(y_46, m_82, t);
  h_46 = t;
  t = new_0_0(t);
  i_46 = t;
  t = j_82;
  t = map_1_0(z_3, t);
  j_46 = t;
  t = k_82;
  t = map_1_0(a_4, t);
  k_46 = t;
  t = new_0_0(t);
  l_46 = t;
  t = t_82;
  t = dummify_0_0(t);
  n_46 = t;
  {
    ATerm g_40 = t;
    int h_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_46;
        if((t_82 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, l_46);
        LocalPopChoice(h_40);
      }
    else
      {
        t = g_40;
        t = n_46;
      }
  }
  m_46 = t;
  t = n_46;
  t = free_vars_3_0(b_4, c_4, tboundin_3_0, t);
  t = map_1_0(h_4, t);
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_82, y_82);
  t = free_vars_3_0(j_4, k_4, tboundin_3_0, t);
  t = filter_1_0(u_4, t);
  o_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_46, p_46);
  t = diff_0_0(t);
  u_46 = t;
  t = new_0_0(t);
  v_46 = t;
  t = m_82;
  t = j_146(t);
  w_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, w_46, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_30, (ATerm) ATinsert(CheckATermList(u_46), (ATerm) ATmakeAppl(sym_Str_1, v_46)))), n_46)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, h_46, j_82, k_82, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_30, (ATerm) ATinsert(CheckATermList(u_46), (ATerm) ATmakeAppl(sym_Str_1, v_46)))), t_82)), x_82, (ATerm) ATmakeAppl(sym_Seq_2, term_b_41, y_82)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_46, j_82, k_82, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_46), t_82), (ATerm)ATmakeAppl(sym_Var_1, i_46), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_82)))), m_46), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_r_40, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, h_46), j_46, k_46), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_w_40), (ATerm) ATmakeAppl(sym_Var_1, l_46)))))), (ATerm) ATmakeAppl(sym_Var_1, i_46)))))), (ATerm) ATmakeAppl(sym_RDefT_4, m_82, j_82, k_82, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, l_46), t_82), x_82, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_e_31, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_82)))), m_46), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_d_30, (ATerm) ATinsert(CheckATermList(u_46), (ATerm) ATmakeAppl(sym_Str_1, v_46)))), term_i_40))), y_82)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm d_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
      x_21 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          y_21 = ATgetArgument(t, 0);
          z_21 = ATgetArgument(t, 1);
          a_22 = ATgetArgument(t, 2);
          j_22 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = j_22;
      if(match_cons(t, sym_Rule_3))
        {
          k_22 = ATgetArgument(t, 0);
          l_22 = ATgetArgument(t, 1);
          m_22 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_21;
      t = g_12(w_4, y_21, z_21, a_22, k_22, l_22, m_22, t);
      LocalPopChoice(f_41);
    }
  else
    {
      t = d_41;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(a_5, t);
    }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_41, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_22))));
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm v_22 = NULL;
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_41, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, v_22))));
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_35;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_22 = ATgetFirst((ATermList) t);
      x_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_22, x_22);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm y_22 = NULL,c_23 = NULL,d_23 = NULL,f_23 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_41 = ATgetArgument(t, 0);
      if(match_cons(m_41, sym__2))
        {
          y_22 = ATgetArgument(m_41, 0);
          c_23 = ATgetArgument(m_41, 1);
        }
      else
        _fail(t);
      {
        ATerm o_41 = ATgetArgument(t, 1);
        if(match_cons(o_41, sym__2))
          {
            d_23 = ATgetArgument(o_41, 0);
            f_23 = ATgetArgument(o_41, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_23), y_22), (ATerm) ATinsert(CheckATermList(f_23), c_23));
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm q_41 = t;
  int r_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,b_24 = NULL,e_24 = NULL;
      u_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          v_23 = ATgetArgument(t, 0);
          w_23 = ATgetArgument(t, 1);
          x_23 = ATgetArgument(t, 2);
          y_23 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = y_23;
      if(match_cons(t, sym_Rule_3))
        {
          z_23 = ATgetArgument(t, 0);
          b_24 = ATgetArgument(t, 1);
          e_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = u_23;
      t = g_12(h_5, v_23, w_23, x_23, z_23, b_24, e_24, t);
      LocalPopChoice(r_41);
    }
  else
    {
      t = q_41;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(k_5, t);
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm f_25 = NULL;
  f_25 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_d_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_25))));
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm g_25 = NULL;
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_25))));
  return(t);
}
static ATerm n_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_35;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm h_25 = NULL,i_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_25 = ATgetFirst((ATermList) t);
      i_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_25, i_25);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_42 = ATgetArgument(t, 0);
      if(match_cons(g_42, sym__2))
        {
          j_25 = ATgetArgument(g_42, 0);
          k_25 = ATgetArgument(g_42, 1);
        }
      else
        _fail(t);
      {
        ATerm h_42 = ATgetArgument(t, 1);
        if(match_cons(h_42, sym__2))
          {
            l_25 = ATgetArgument(h_42, 0);
            m_25 = ATgetArgument(h_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_25), j_25), (ATerm) ATinsert(CheckATermList(m_25), k_25));
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(u_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm w_57 = NULL;
  w_57 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_57))));
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_35;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_57 = ATgetFirst((ATermList) t);
      y_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_57, y_57);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,b_58 = NULL,f_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_42 = ATgetArgument(t, 0);
      if(match_cons(k_42, sym__2))
        {
          z_57 = ATgetArgument(k_42, 0);
          a_58 = ATgetArgument(k_42, 1);
        }
      else
        _fail(t);
      {
        ATerm n_42 = ATgetArgument(t, 1);
        if(match_cons(n_42, sym__2))
          {
            b_58 = ATgetArgument(n_42, 0);
            f_58 = ATgetArgument(n_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_58), z_57), (ATerm) ATinsert(CheckATermList(f_58), a_58));
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(a_6, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm k_58 = NULL;
  k_58 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_58))));
  return(t);
}
static ATerm c_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_35;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm m_58 = NULL,n_58 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_58 = ATgetFirst((ATermList) t);
      n_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_58, n_58);
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm o_58 = NULL,p_58 = NULL,q_58 = NULL,t_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_42 = ATgetArgument(t, 0);
      if(match_cons(q_42, sym__2))
        {
          o_58 = ATgetArgument(q_42, 0);
          p_58 = ATgetArgument(q_42, 1);
        }
      else
        _fail(t);
      {
        ATerm t_42 = ATgetArgument(t, 1);
        if(match_cons(t_42, sym__2))
          {
            q_58 = ATgetArgument(t_42, 0);
            t_58 = ATgetArgument(t_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_58), o_58), (ATerm) ATinsert(CheckATermList(t_58), p_58));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm l_57 = NULL,m_57 = NULL;
  l_57 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      m_57 = ATgetArgument(t, 0);
      {
        ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,h_22 = NULL;
        t = m_57;
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
        h_22 = t;
        t = SSLsetAnnotations(h_22, o_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          m_57 = ATgetArgument(t, 0);
          {
            ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL,s_23 = NULL,t_23 = NULL,i_22 = NULL;
            t = m_57;
            t = map_1_0(f_5, t);
            t = genzip_4_0(n_5, p_5, q_5, _id, t);
            t_23 = t;
            if(match_cons(t, sym__2))
              {
                o_23 = ATgetArgument(t, 0);
                p_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(t_23);
            n_23 = t;
            t = p_23;
            t = concat_0_0(t);
            s_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_23, s_23);
            i_22 = t;
            t = SSLsetAnnotations(i_22, n_23);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              m_57 = ATgetArgument(t, 0);
              t = m_57;
              t = map_1_0(r_5, t);
              t = genzip_4_0(v_5, x_5, y_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  m_57 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_57;
              t = map_1_0(z_5, t);
              t = genzip_4_0(c_6, g_6, h_6, _id, t);
            }
        }
    }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_v_42;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm l_146 (ATerm), ATerm t)
{
  static ATerm i_59 (ATerm t)
  {
    static ATerm i_6 (ATerm t)
    {
      ATerm w_42 = t;
      int z_42 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_146(t);
          LocalPopChoice(z_42);
        }
      else
        {
          t = w_42;
          {
            ATerm b_59 = NULL,c_59 = NULL,h_59 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                b_59 = ATgetArgument(t, 0);
                c_59 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, b_59, c_59);
            {
              static ATerm k_6 (ATerm t)
              {
                t = b_59;
                t = DeclareContextVars_0_0(t);
                t = c_59;
                t = i_59(t);
                if(((h_59 != NULL) && (h_59 != t)))
                  _fail(t);
                else
                  h_59 = t;
                return(t);
              }
              t = scope_2_0(j_6, k_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, b_59, not_null(h_59));
          }
        }
      return(t);
    }
    t = oncetd_1_0(i_6, t);
    return(t);
  }
  t = i_59(t);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_v_42;
  return(t);
}
static ATerm i_12 (ATerm m_83, ATerm l_83, ATerm t)
{
  ATerm l_59 = NULL,n_59 = NULL,o_59 = NULL;
  static ATerm m_6 (ATerm t)
  {
    t = m_83;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = m_83;
    {
      static ATerm n_6 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((n_59 != NULL) && (n_59 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              n_59 = ATgetArgument(t, 0);
            if(((l_59 != NULL) && (l_59 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              l_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, n_59);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(n_6, t);
    }
    if(((o_59 != NULL) && (o_59 != t)))
      _fail(t);
    else
      o_59 = t;
    return(t);
  }
  t = scope_2_0(l_6, m_6, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_59)), not_null(o_59)), l_83);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm z_59 = NULL,g_60 = NULL,m_60 = NULL,s_60 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      m_60 = ATgetArgument(t, 0);
      s_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_60;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_59 = ATgetFirst((ATermList) t);
      g_60 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_b_43, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, g_60, s_60)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_59))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_60;
    }
  return(t);
}
static ATerm v_62 (ATerm i_61, ATerm t)
{
  t = SSL_is_string(i_61);
  return(t);
}
static ATerm w_62 (ATerm v_61, ATerm t)
{
  ATerm x_61 = NULL,a_62 = NULL,c_62 = NULL;
  t = term_c_43;
  a_62 = t;
  t = (ATerm) ATinsert(ATempty, term_d_43);
  c_62 = t;
  t = SSL_printnl(a_62, c_62);
  t = v_61;
  t = debug_1_0(o_6, t);
  t = term_e_43;
  x_61 = t;
  t = SSL_exit(x_61);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_f_43;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm d_62 = NULL,f_62 = NULL;
  f_62 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      d_62 = ATgetArgument(t, 0);
      {
        ATerm g_43 = t;
        int h_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_62(f_62, t);
            LocalPopChoice(h_43);
          }
        else
          {
            t = g_43;
            t = d_62;
          }
      }
    }
  else
    {
      ATerm l_43 = t;
      int m_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_62(f_62, t);
          LocalPopChoice(m_43);
        }
      else
        {
          t = l_43;
          t = w_62(f_62, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL,i_63 = NULL,j_63 = NULL,k_63 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      f_63 = ATgetArgument(t, 0);
      k_63 = ATgetArgument(t, 1);
      t = f_63;
      if(match_cons(t, sym_DynRuleId_1))
        {
          g_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_63;
      if(match_cons(t, sym_RDecT_3))
        {
          h_63 = ATgetArgument(t, 0);
          i_63 = ATgetArgument(t, 1);
          j_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, h_63, i_63, j_63, (ATerm) ATmakeAppl(sym_Rule_3, k_63, term_q_29, term_i_26));
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          f_63 = ATgetArgument(t, 0);
          k_63 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_63;
      if(match_cons(t, sym_DynRuleId_1))
        {
          g_63 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_63;
      if(match_cons(t, sym_RDecT_3))
        {
          h_63 = ATgetArgument(t, 0);
          i_63 = ATgetArgument(t, 1);
          j_63 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, h_63, i_63, j_63, k_63);
    }
  return(t);
}
static ATerm a_65 (ATerm x_63, ATerm t)
{
  ATerm z_63 = NULL,d_64 = NULL,g_64 = NULL,h_64 = NULL;
  t = x_63;
  if(match_cons(t, sym_GenDynRules_1))
    {
      g_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_64;
  t = filter_1_0(p_6, t);
  h_64 = t;
  t = x_63;
  if(match_cons(t, sym_GenDynRules_1))
    {
      z_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_63;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  d_64 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, h_64), (ATerm) ATmakeAppl(sym_DynamicRules_1, d_64));
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm i_64 = NULL,m_64 = NULL,p_64 = NULL,q_64 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm n_43 = ATgetArgument(t, 0);
      if(match_cons(n_43, sym_DynRuleId_1))
        {
          ATerm o_43 = ATgetArgument(n_43, 0);
          if(match_cons(o_43, sym_RDecT_3))
            {
              i_64 = ATgetArgument(o_43, 0);
              m_64 = ATgetArgument(o_43, 1);
              p_64 = ATgetArgument(o_43, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      q_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, i_64, m_64, p_64, q_64);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm p_43 = ATgetArgument(t, 0);
      ATerm r_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm r_64 = NULL,y_64 = NULL;
  y_64 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      r_64 = ATgetArgument(t, 0);
      {
        ATerm s_43 = t;
        int t_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_25 = NULL;
            t = r_64;
            {
              ATerm u_43 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(r_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = u_43;
                }
            }
            t = r_64;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            t_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, t_25);
            LocalPopChoice(t_43);
          }
        else
          {
            t = s_43;
            t = a_65(y_64, t);
          }
      }
    }
  else
    {
      t = a_65(y_64, t);
    }
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm w_43 = t;
  int a_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_65 = NULL;
      c_65 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm c_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_65;
      LocalPopChoice(a_44);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = w_43;
      {
        ATerm d_44 = t;
        int e_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_65 = NULL;
            d_65 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm f_44 = ATgetArgument(t, 0);
                ATerm g_44 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_65;
            LocalPopChoice(e_44);
            {
              ATerm h_65 = NULL,i_65 = NULL,r_65 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  h_65 = ATgetArgument(t, 0);
                  i_65 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_65;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              r_65 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, r_65, i_65);
            }
          }
        else
          {
            t = d_44;
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
static ATerm u_6 (ATerm t)
{
  t = Cons_2_0(v_6, w_6, t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL,m_67 = NULL,a_23 = NULL;
  m_67 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      i_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_67);
  h_67 = t;
  t = i_67;
  t = topdown_1_0(x_6, t);
  t = listtd_1_0(z_6, t);
  j_67 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, j_67);
  a_23 = t;
  t = SSLsetAnnotations(a_23, h_67);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm h_44 = t;
  int i_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(i_44);
    }
  else
    {
      t = h_44;
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
  ATerm p_67 = NULL,t_67 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_67 = ATgetFirst((ATermList) t);
      t_67 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_12(p_67, t_67, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm e_66 = NULL,j_66 = NULL,o_66 = NULL,t_66 = NULL,y_66 = NULL,z_66 = NULL,e_67 = NULL,f_67 = NULL,e_23 = NULL,b_23 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  f_67 = t;
  if(match_cons(t, sym_Specification_1))
    {
      j_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_67);
  e_66 = t;
  t = j_66;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_66 = ATgetFirst((ATermList) t);
      y_66 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_66);
  o_66 = t;
  t = y_66;
  t = Cons_2_0(_id, u_6, t);
  z_66 = t;
  t = (ATerm) ATinsert(CheckATermList(z_66), t_66);
  b_23 = t;
  t = SSLsetAnnotations(b_23, o_66);
  e_67 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, e_67);
  e_23 = t;
  t = SSLsetAnnotations(e_23, e_66);
  return(t);
}
static ATerm d_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm k_44 = t;
  int m_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_68 = NULL,f_68 = NULL,k_68 = NULL,l_68 = NULL,a_24 = NULL;
      l_68 = t;
      if(match_cons(t, sym__2))
        {
          f_68 = ATgetArgument(t, 0);
          k_68 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_68);
      e_68 = t;
      t = f_68;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = f_68;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm o_44 = ATgetFirst((ATermList) t);
              ATerm p_44 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = f_68;
        }
      t = (ATerm) ATmakeAppl(sym__2, f_68, k_68);
      a_24 = t;
      t = SSLsetAnnotations(a_24, e_68);
      LocalPopChoice(m_44);
      t = conc_0_0(t);
    }
  else
    {
      t = k_44;
      {
        ATerm s_68 = NULL,t_68 = NULL;
        if(match_cons(t, sym__2))
          {
            s_68 = ATgetArgument(t, 0);
            t_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(t_68), s_68);
      }
    }
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm r_44 = t;
  int s_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_68 = NULL;
      u_68 = t;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = u_68;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm x_44 = ATgetFirst((ATermList) t);
              ATerm z_44 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_68;
        }
      LocalPopChoice(s_44);
      t = flatten_list_0_0(t);
    }
  else
    {
      t = r_44;
    }
  return(t);
}
ATerm flatten_list_0_0 (ATerm t)
{
  t = foldr_3_0(d_7, i_7, j_7, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm k_7 (ATerm t)
{
  t = term_d_45;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_d_45;
  return(t);
}
ATerm next_counter_0_0 (ATerm t)
{
  ATerm i_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,y_69 = NULL;
  i_69 = t;
  {
    ATerm f_45 = t;
    int g_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_69 = NULL,p_26 = NULL;
        t = term_d_45;
        p_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_d_45, i_69);
        t = m_13(p_26, i_69, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm i_45 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_45) != ATmakeSymbol("i_0", 0, ATtrue)))
              _fail(t);
            z_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_69;
        LocalPopChoice(g_45);
      }
    else
      {
        t = f_45;
        {
          ATerm a_70 = NULL;
          t = term_l_45;
          a_70 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_69, term_l_45);
          t = n_13(k_7, i_69, a_70, t);
          t = (ATerm) ATmakeAppl(sym__2, i_69, term_k_45);
        }
      }
  }
  v_69 = t;
  t = term_e_43;
  y_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_69, term_e_43);
  t = a_14(v_69, y_69, t);
  t_69 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_j_45, t_69);
  u_69 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_69, (ATerm) ATmakeAppl(sym_Defined_2, term_j_45, t_69));
  t = n_13(l_7, i_69, u_69, t);
  t = t_69;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  t = term_m_45;
  return(t);
}
ATerm NewNumberedVar_0_0 (ATerm t)
{
  ATerm b_70 = NULL,f_70 = NULL,g_70 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL;
  f_70 = t;
  t = term_n_45;
  t = next_counter_0_0(t);
  b_70 = t;
  t = SSL_int_to_string(b_70);
  i_71 = t;
  t = term_o_45;
  k_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_45, i_71);
  t = x_13(k_71, i_71, t);
  g_70 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_q_45, g_70);
  j_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_70, (ATerm) ATmakeAppl(sym_Defined_2, term_q_45, g_70));
  t = n_13(m_7, f_70, j_71, t);
  t = g_70;
  return(t);
}
ATerm RenameVarTerm_2_0 (ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm t)
{
  ATerm v_90 = NULL,y_90 = NULL,z_90 = NULL,a_91 = NULL,b_91 = NULL;
  z_90 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_91 = ATgetArgument(t, 0);
      {
        ATerm r_45 = t;
        int s_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_26 = NULL,x_26 = NULL,z_26 = NULL,a_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,f_24 = NULL,d_24 = NULL;
            t = SSLgetAnnotations(z_90);
            t_26 = t;
            t = a_91;
            if(match_cons(t, sym_ListVar_1))
              {
                z_26 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_91);
            x_26 = t;
            t = z_26;
            t = p_146(t);
            g_27 = t;
            t = term_t_45;
            h_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_27, term_t_45);
            t = x_13(g_27, h_27, t);
            a_27 = t;
            t = (ATerm) ATmakeAppl(sym_ListVar_1, a_27);
            d_24 = t;
            t = SSLsetAnnotations(d_24, x_26);
            f_27 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, f_27);
            f_24 = t;
            t = SSLsetAnnotations(f_24, t_26);
            LocalPopChoice(s_45);
          }
        else
          {
            t = r_45;
            {
              ATerm v_27 = NULL,x_27 = NULL,g_24 = NULL;
              t = SSLgetAnnotations(z_90);
              v_27 = t;
              t = a_91;
              t = p_146(t);
              x_27 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, x_27);
              g_24 = t;
              t = SSLsetAnnotations(g_24, v_27);
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_SVar_1))
        {
          a_91 = ATgetArgument(t, 0);
          {
            ATerm h_28 = NULL,m_28 = NULL,k_24 = NULL;
            t = SSLgetAnnotations(z_90);
            h_28 = t;
            t = a_91;
            t = p_146(t);
            m_28 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, m_28);
            k_24 = t;
            t = SSLsetAnnotations(k_24, h_28);
          }
        }
      else
        {
          if(match_cons(t, sym_VarDec_2))
            {
              a_91 = ATgetArgument(t, 0);
              b_91 = ATgetArgument(t, 1);
              {
                ATerm h_29 = NULL,k_29 = NULL,l_24 = NULL;
                t = SSLgetAnnotations(z_90);
                h_29 = t;
                t = a_91;
                t = p_146(t);
                k_29 = t;
                t = (ATerm) ATmakeAppl(sym_VarDec_2, k_29, b_91);
                l_24 = t;
                t = SSLsetAnnotations(l_24, h_29);
              }
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  a_91 = ATgetArgument(t, 0);
                  {
                    ATerm e_30 = NULL,g_30 = NULL,p_24 = NULL;
                    t = SSLgetAnnotations(z_90);
                    e_30 = t;
                    t = a_91;
                    t = p_146(t);
                    g_30 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_30);
                    p_24 = t;
                    t = SSLsetAnnotations(p_24, e_30);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      a_91 = ATgetArgument(t, 0);
                      b_91 = ATgetArgument(t, 1);
                      {
                        ATerm d_31 = NULL,g_31 = NULL,h_31 = NULL,t_24 = NULL;
                        t = SSLgetAnnotations(z_90);
                        d_31 = t;
                        t = a_91;
                        t = p_146(t);
                        g_31 = t;
                        t = b_91;
                        t = q_146(t);
                        h_31 = t;
                        t = (ATerm) ATmakeAppl(sym_Rec_2, g_31, h_31);
                        t_24 = t;
                        t = SSLsetAnnotations(t_24, d_31);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefNoArgs_2))
                        {
                          a_91 = ATgetArgument(t, 0);
                          b_91 = ATgetArgument(t, 1);
                          {
                            ATerm v_31 = NULL,a_32 = NULL,b_32 = NULL,u_24 = NULL;
                            t = SSLgetAnnotations(z_90);
                            v_31 = t;
                            t = a_91;
                            t = p_146(t);
                            a_32 = t;
                            t = b_91;
                            t = q_146(t);
                            b_32 = t;
                            t = (ATerm) ATmakeAppl(sym_SDefNoArgs_2, a_32, b_32);
                            u_24 = t;
                            t = SSLsetAnnotations(u_24, v_31);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              a_91 = ATgetArgument(t, 0);
                              b_91 = ATgetArgument(t, 1);
                              v_90 = ATgetArgument(t, 2);
                              {
                                ATerm y_32 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,x_24 = NULL;
                                t = SSLgetAnnotations(z_90);
                                y_32 = t;
                                t = a_91;
                                t = p_146(t);
                                j_33 = t;
                                t = b_91;
                                t = q_146(t);
                                k_33 = t;
                                t = v_90;
                                t = q_146(t);
                                l_33 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, j_33, k_33, l_33);
                                x_24 = t;
                                t = SSLsetAnnotations(x_24, y_32);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  a_91 = ATgetArgument(t, 0);
                                  b_91 = ATgetArgument(t, 1);
                                  v_90 = ATgetArgument(t, 2);
                                  y_90 = ATgetArgument(t, 3);
                                  {
                                    ATerm g_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,s_34 = NULL,y_24 = NULL;
                                    t = SSLgetAnnotations(z_90);
                                    g_34 = t;
                                    t = a_91;
                                    t = p_146(t);
                                    n_34 = t;
                                    t = b_91;
                                    t = q_146(t);
                                    o_34 = t;
                                    t = v_90;
                                    t = q_146(t);
                                    p_34 = t;
                                    t = y_90;
                                    t = q_146(t);
                                    s_34 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, n_34, o_34, p_34, s_34);
                                    y_24 = t;
                                    t = SSLsetAnnotations(y_24, g_34);
                                  }
                                }
                              else
                                {
                                  ATerm x_35 = NULL,a_36 = NULL,b_36 = NULL,z_24 = NULL;
                                  if(match_cons(t, sym_Scope_2))
                                    {
                                      a_91 = ATgetArgument(t, 0);
                                      b_91 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(z_90);
                                  x_35 = t;
                                  t = a_91;
                                  t = map_1_0(p_146, t);
                                  a_36 = t;
                                  t = b_91;
                                  t = q_146(t);
                                  b_36 = t;
                                  t = (ATerm) ATmakeAppl(sym_Scope_2, a_36, b_36);
                                  z_24 = t;
                                  t = SSLsetAnnotations(z_24, x_35);
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
static ATerm n_7 (ATerm t)
{
  t = term_m_45;
  return(t);
}
static ATerm q_7 (ATerm t)
{
  t = term_d_45;
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_92 = NULL,w_36 = NULL,a_37 = NULL;
      i_92 = t;
      t = term_m_45;
      a_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_m_45, i_92);
      t = m_13(a_37, i_92, t);
      if(match_cons(t, sym_Defined_2))
        {
          ATerm x_45 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) x_45) != ATmakeSymbol("q_0", 0, ATtrue)))
            _fail(t);
          w_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = w_36;
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
      t = NewNumberedVar_0_0(t);
    }
  return(t);
}
ATerm dr_rename_vars_0_0 (ATerm t)
{
  static ATerm o_7 (ATerm t)
  {
    ATerm s_91 = NULL,y_91 = NULL,z_91 = NULL;
    static ATerm j_92 (ATerm t)
    {
      ATerm y_45 = t;
      int z_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = RenameVarTerm_2_0(s_7, j_92, t);
          LocalPopChoice(z_45);
        }
      else
        {
          t = y_45;
          t = SRTS_all(j_92, t);
        }
      return(t);
    }
    s_91 = t;
    t = term_n_45;
    y_91 = t;
    t = term_l_45;
    z_91 = t;
    t = term_b_46;
    t = n_13(q_7, y_91, z_91, t);
    t = s_91;
    t = j_92(t);
    return(t);
  }
  t = scope_2_0(n_7, o_7, t);
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm f_93 = NULL;
  f_93 = t;
  {
    ATerm c_46 = t;
    int d_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_37 = NULL;
        t = term_v_42;
        r_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_v_42, f_93);
        t = m_13(r_37, f_93, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm f_46 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_46) != ATmakeSymbol("t_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = f_93;
        LocalPopChoice(d_46);
      }
    else
      {
        t = c_46;
        {
          ATerm b_38 = NULL;
          t = term_v_42;
          b_38 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_v_42, f_93);
          t = m_13(b_38, f_93, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm q_46 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_46) != ATmakeSymbol("n_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = f_93;
        }
      }
  }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL;
  r_94 = t;
  {
    ATerm r_46 = t;
    int s_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm t_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_46);
        t = r_94;
        {
          ATerm x_46 = t;
          if((PushChoice() == 0))
            {
              ATerm k_38 = NULL,l_38 = NULL,n_38 = NULL,o_38 = NULL,c_26 = NULL;
              o_38 = t;
              if(match_cons(t, sym_Var_1))
                {
                  l_38 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_38);
              k_38 = t;
              t = l_38;
              {
                ATerm b_47 = t;
                int d_47 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(d_47);
                  }
                else
                  {
                    t = b_47;
                    {
                      ATerm v_38 = NULL,z_38 = NULL,b_39 = NULL,b_26 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          v_38 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(l_38);
                      z_38 = t;
                      t = v_38;
                      t = ContextVar_0_0(t);
                      b_39 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, b_39);
                      b_26 = t;
                      t = SSLsetAnnotations(b_26, z_38);
                    }
                  }
              }
              n_38 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, n_38);
              c_26 = t;
              t = SSLsetAnnotations(c_26, k_38);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_46;
            }
        }
        t = term_x_31;
      }
    else
      {
        t = r_46;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_x_31;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                s_94 = ATgetArgument(t, 0);
                {
                  ATerm w_94 = NULL;
                  t = s_94;
                  t = free_vars_3_0(u_7, v_7, tboundin_3_0, t);
                  t = map_1_0(a_8, t);
                  w_94 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_e_47, w_94);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    s_94 = ATgetArgument(t, 0);
                    t_94 = ATgetArgument(t, 1);
                    {
                      ATerm u_95 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, s_94, t_94);
                      t = free_vars_3_0(b_8, d_8, tboundin_3_0, t);
                      t = map_1_0(j_8, t);
                      u_95 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_e_47, u_95);
                    }
                  }
                else
                  {
                    ATerm i_39 = NULL,k_39 = NULL,m_39 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm f_47 = ATgetArgument(t, 0);
                        ATerm g_47 = ATgetArgument(t, 1);
                        ATerm i_47 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_c_43;
                    k_39 = t;
                    t = (ATerm) ATinsert(ATempty, term_k_47);
                    m_39 = t;
                    t = SSL_printnl(k_39, m_39);
                    t = term_e_43;
                    i_39 = t;
                    t = SSL_exit(i_39);
                    t = (ATerm) ATinsert(ATempty, term_k_47);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm u_7 (ATerm t)
{
  ATerm x_94 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_94);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm l_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_47);
    }
  else
    {
      t = l_47;
      {
        ATerm n_47 = t;
        int o_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_47);
          }
        else
          {
            t = n_47;
            {
              ATerm p_47 = t;
              int q_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_94 = ATgetArgument(t, 0);
                      a_95 = ATgetArgument(t, 1);
                      b_95 = ATgetArgument(t, 2);
                      c_95 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_95;
                  t = map_1_0(x_7, t);
                  LocalPopChoice(q_47);
                }
              else
                {
                  t = p_47;
                  {
                    ATerm s_47 = t;
                    int t_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_47);
                      }
                    else
                      {
                        t = s_47;
                        t = dynrule_targs_1_0(y_7, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm j_95 = NULL;
  ATerm u_47 = t;
  int v_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_95 = ATgetArgument(t, 0);
          {
            ATerm w_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_47);
      t = j_95;
    }
  else
    {
      t = u_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_95;
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  t = map_1_0(z_7, t);
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm o_95 = NULL;
  ATerm x_47 = t;
  int z_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_95 = ATgetArgument(t, 0);
          {
            ATerm a_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_47);
      t = o_95;
    }
  else
    {
      t = x_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_95;
    }
  return(t);
}
static ATerm a_8 (ATerm t)
{
  ATerm r_95 = NULL;
  r_95 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_95);
  return(t);
}
static ATerm b_8 (ATerm t)
{
  ATerm v_95 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_95);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm d_48 = t;
  int e_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_48);
    }
  else
    {
      t = d_48;
      {
        ATerm f_48 = t;
        int g_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_48);
          }
        else
          {
            t = f_48;
            {
              ATerm h_48 = t;
              int m_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_95 = NULL,y_95 = NULL,z_95 = NULL,a_96 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_95 = ATgetArgument(t, 0);
                      y_95 = ATgetArgument(t, 1);
                      z_95 = ATgetArgument(t, 2);
                      a_96 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_95;
                  t = map_1_0(f_8, t);
                  LocalPopChoice(m_48);
                }
              else
                {
                  t = h_48;
                  {
                    ATerm n_48 = t;
                    int o_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(o_48);
                      }
                    else
                      {
                        t = n_48;
                        t = dynrule_targs_1_0(g_8, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm h_96 = NULL;
  ATerm p_48 = t;
  int q_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_96 = ATgetArgument(t, 0);
          {
            ATerm r_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_48);
      t = h_96;
    }
  else
    {
      t = p_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_96;
    }
  return(t);
}
static ATerm g_8 (ATerm t)
{
  t = map_1_0(i_8, t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm m_96 = NULL;
  ATerm s_48 = t;
  int t_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_96 = ATgetArgument(t, 0);
          {
            ATerm u_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_48);
      t = m_96;
    }
  else
    {
      t = s_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_96;
    }
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm p_96 = NULL;
  p_96 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_96);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(t_7, t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  ATerm o_98 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_98);
  return(t);
}
static ATerm s_8 (ATerm t)
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
              ATerm a_49 = t;
              int b_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_98 = ATgetArgument(t, 0);
                      r_98 = ATgetArgument(t, 1);
                      s_98 = ATgetArgument(t, 2);
                      t_98 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_98;
                  t = map_1_0(u_8, t);
                  LocalPopChoice(b_49);
                }
              else
                {
                  t = a_49;
                  {
                    ATerm c_49 = t;
                    int d_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_49);
                      }
                    else
                      {
                        t = c_49;
                        t = dynrule_targs_1_0(w_8, t);
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
  ATerm a_99 = NULL;
  ATerm e_49 = t;
  int f_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_99 = ATgetArgument(t, 0);
          {
            ATerm g_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_49);
      t = a_99;
    }
  else
    {
      t = e_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_99;
    }
  return(t);
}
static ATerm w_8 (ATerm t)
{
  t = map_1_0(y_8, t);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm f_99 = NULL;
  ATerm i_49 = t;
  int j_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_99 = ATgetArgument(t, 0);
          {
            ATerm k_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_49);
      t = f_99;
    }
  else
    {
      t = i_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_99;
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm i_99 = NULL;
  i_99 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, i_99);
  return(t);
}
static ATerm e_9 (ATerm t)
{
  ATerm j_99 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_99);
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm l_49 = t;
  int o_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_49);
    }
  else
    {
      t = l_49;
      {
        ATerm r_49 = t;
        int w_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_49);
          }
        else
          {
            t = r_49;
            {
              ATerm x_49 = t;
              int y_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL,o_99 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_99 = ATgetArgument(t, 0);
                      m_99 = ATgetArgument(t, 1);
                      n_99 = ATgetArgument(t, 2);
                      o_99 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_99;
                  t = map_1_0(g_9, t);
                  LocalPopChoice(y_49);
                }
              else
                {
                  t = x_49;
                  {
                    ATerm z_49 = t;
                    int a_50 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(a_50);
                      }
                    else
                      {
                        t = z_49;
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
  ATerm v_99 = NULL;
  ATerm b_50 = t;
  int c_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_99 = ATgetArgument(t, 0);
          {
            ATerm d_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_50);
      t = v_99;
    }
  else
    {
      t = b_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_99;
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  t = map_1_0(i_9, t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm a_100 = NULL;
  ATerm e_50 = t;
  int f_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_100 = ATgetArgument(t, 0);
          {
            ATerm g_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_50);
      t = a_100;
    }
  else
    {
      t = e_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_100;
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm d_100 = NULL;
  d_100 = t;
  {
    ATerm h_50 = t;
    int j_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_100 = NULL,y_39 = NULL,c_40 = NULL,f_26 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            j_100 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_100);
        y_39 = t;
        t = j_100;
        t = ContextVar_0_0(t);
        c_40 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, c_40);
        f_26 = t;
        t = SSLsetAnnotations(f_26, y_39);
        LocalPopChoice(j_50);
      }
    else
      {
        t = h_50;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, d_100);
  return(t);
}
static ATerm k_9 (ATerm t)
{
  t = term_k_45;
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm k_100 = NULL,l_100 = NULL;
  if(match_cons(t, sym__2))
    {
      k_100 = ATgetArgument(t, 0);
      l_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_14(k_100, l_100, t);
  return(t);
}
static ATerm o_9 (ATerm t)
{
  t = term_e_43;
  return(t);
}
static ATerm p_9 (ATerm t)
{
  t = term_k_45;
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm n_100 = NULL,o_100 = NULL;
  if(match_cons(t, sym__2))
    {
      n_100 = ATgetArgument(t, 0);
      o_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_14(n_100, o_100, t);
  return(t);
}
static ATerm w_9 (ATerm t)
{
  t = term_e_43;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  t = term_k_50;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm w_100 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_100);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm n_50 = t;
  int o_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_50);
    }
  else
    {
      t = n_50;
      {
        ATerm p_50 = t;
        int q_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_50);
          }
        else
          {
            t = p_50;
            {
              ATerm r_50 = t;
              int s_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_100 = NULL,z_100 = NULL,e_101 = NULL,h_101 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_100 = ATgetArgument(t, 0);
                      z_100 = ATgetArgument(t, 1);
                      e_101 = ATgetArgument(t, 2);
                      h_101 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_101;
                  t = map_1_0(a_10, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(v_50);
                      }
                    else
                      {
                        t = t_50;
                        t = dynrule_targs_1_0(d_10, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_10 (ATerm t)
{
  ATerm q_101 = NULL;
  ATerm w_50 = t;
  int x_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_101 = ATgetArgument(t, 0);
          {
            ATerm y_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_50);
      t = q_101;
    }
  else
    {
      t = w_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_101;
    }
  return(t);
}
static ATerm d_10 (ATerm t)
{
  t = map_1_0(h_10, t);
  return(t);
}
static ATerm h_10 (ATerm t)
{
  ATerm v_101 = NULL;
  ATerm z_50 = t;
  int b_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_101 = ATgetArgument(t, 0);
          {
            ATerm c_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_51);
      t = v_101;
    }
  else
    {
      t = z_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_101;
    }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL;
  c_102 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      b_102 = ATgetArgument(t, 0);
      t = b_102;
    }
  else
    {
      t = c_102;
    }
  a_102 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_102);
  return(t);
}
static ATerm j_10 (ATerm t)
{
  t = term_f_51;
  return(t);
}
static ATerm k_10 (ATerm t)
{
  t = term_k_45;
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm j_102 = NULL,k_102 = NULL;
  if(match_cons(t, sym__2))
    {
      j_102 = ATgetArgument(t, 0);
      k_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_14(j_102, k_102, t);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  t = term_e_43;
  return(t);
}
static ATerm n_10 (ATerm t)
{
  t = term_k_45;
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm m_102 = NULL,p_102 = NULL;
  if(match_cons(t, sym__2))
    {
      m_102 = ATgetArgument(t, 0);
      p_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_14(m_102, p_102, t);
  return(t);
}
static ATerm g_11 (ATerm t)
{
  t = term_e_43;
  return(t);
}
static ATerm i_11 (ATerm t)
{
  t = term_g_51;
  return(t);
}
static ATerm s_11 (ATerm t)
{
  ATerm x_102 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_102 = ATgetArgument(t, 0);
      t = x_102;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_102 = ATgetArgument(t, 0);
          {
            ATerm h_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_102;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_102), (ATerm) ATempty);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  ATerm h_103 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_103 = ATgetArgument(t, 0);
      t = h_103;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_103 = ATgetArgument(t, 0);
          {
            ATerm i_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_103;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, h_103);
  return(t);
}
static ATerm a_12 (ATerm t)
{
  ATerm l_103 = NULL;
  l_103 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, l_103);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  t = term_j_51;
  return(t);
}
static ATerm d_12 (ATerm t)
{
  t = term_k_51;
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm u_146 (ATerm), ATerm t)
{
  ATerm j_97 = NULL,k_97 = NULL,l_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,q_97 = NULL,r_97 = NULL,s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,f_98 = NULL,g_98 = NULL,h_98 = NULL,i_98 = NULL,k_98 = NULL,n_98 = NULL;
  l_97 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm m_51 = ATgetArgument(t, 0);
      if(match_cons(m_51, sym_DynRuleId_1))
        {
          ATerm w_51 = ATgetArgument(m_51, 0);
          if(match_cons(w_51, sym_RDecT_3))
            {
              d_98 = ATgetArgument(w_51, 0);
              t_97 = ATgetArgument(w_51, 1);
              u_97 = ATgetArgument(w_51, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm v_51 = ATgetArgument(t, 1);
        if(match_cons(v_51, sym_Rule_3))
          {
            z_97 = ATgetArgument(v_51, 0);
            o_97 = ATgetArgument(v_51, 1);
            p_97 = ATgetArgument(v_51, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_97;
  t = dummify_0_0(t);
  g_98 = t;
  t = free_vars_3_0(k_8, s_8, tboundin_3_0, t);
  t = map_1_0(a_9, t);
  k_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_97, p_97);
  t = free_vars_3_0(e_9, f_9, tboundin_3_0, t);
  t = filter_1_0(j_9, t);
  j_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_97, k_97);
  t = diff_0_0(t);
  n_97 = t;
  t = t_97;
  t = foldr_3_0(k_9, l_9, o_9, t);
  k_98 = t;
  t = u_97;
  t = foldr_3_0(p_9, q_9, w_9, t);
  n_98 = t;
  t = l_97;
  t = dr_rename_vars_0_0(t);
  r_97 = t;
  {
    ATerm x_51 = t;
    int y_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_100 = NULL,l_40 = NULL;
        t = term_f_51;
        l_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_51, r_97);
        t = m_13(l_40, r_97, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm z_51 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_51) != ATmakeSymbol("w_0", 0, ATtrue)))
              _fail(t);
            p_100 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_100;
        s_97 = t;
        t = r_97;
        LocalPopChoice(y_51);
        t = (ATerm) ATempty;
        q_97 = t;
        t = (ATerm) ATempty;
        f_98 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_97, r_97);
        t = debug_1_0(x_9, t);
      }
    else
      {
        t = x_51;
        {
          ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL,t_100 = NULL,u_100 = NULL;
          t = term_f_40;
          u_100 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_40, d_98);
          t = x_13(u_100, d_98, t);
          a_98 = t;
          t = new_0_0(t);
          s_97 = t;
          t = new_0_0(t);
          y_97 = t;
          t = z_97;
          t = free_vars_3_0(y_9, z_9, tboundin_3_0, t);
          w_97 = t;
          t = map_1_0(i_10, t);
          s_100 = t;
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_97))), s_100), u_97);
          t = concat_0_0(t);
          m_97 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, a_98, t_97, m_97, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(n_97), (ATerm) ATmakeAppl(sym_Str_1, s_97))), o_97, (ATerm) ATmakeAppl(sym_BA_2, p_97, (ATerm) ATmakeAppl(sym_Var_1, y_97)))));
          q_97 = t;
          t = (ATerm) ATmakeAppl(sym_Defined_2, term_a_52, s_97);
          t_100 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_97, (ATerm) ATmakeAppl(sym_Defined_2, term_a_52, s_97));
          t = n_13(j_10, r_97, t_100, t);
          t = t_97;
          t = foldr_3_0(k_10, l_10, m_10, t);
          q_100 = t;
          t = u_97;
          t = foldr_3_0(n_10, o_10, g_11, t);
          r_100 = t;
          t = q_100;
          if((k_98 != t))
            {
              _fail(t);
            }
          t = r_100;
          if((n_98 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, d_98, (ATerm) ATmakeAppl(sym__2, q_100, r_100));
          {
            ATerm b_52 = t;
            int d_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_40 = NULL,u_40 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_98, (ATerm) ATmakeAppl(sym__2, q_100, r_100)), g_98);
                s_40 = t;
                t = term_j_51;
                u_40 = t;
                t = (ATerm) ATmakeAppl(sym__2, term_j_51, (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_98, (ATerm) ATmakeAppl(sym__2, q_100, r_100)), g_98));
                t = m_13(u_40, s_40, t);
                if(match_cons(t, sym_Defined_1))
                  {
                    ATerm e_52 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) e_52) != ATmakeSymbol("y_0", 0, ATtrue)))
                      _fail(t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, d_98, (ATerm) ATmakeAppl(sym__2, q_100, r_100));
                LocalPopChoice(d_52);
                t = (ATerm) ATempty;
                f_98 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_98, (ATerm) ATmakeAppl(sym__2, q_100, r_100)), g_98);
                t = debug_1_0(i_11, t);
              }
            else
              {
                t = b_52;
                {
                  ATerm q_102 = NULL,r_102 = NULL,s_102 = NULL,u_102 = NULL;
                  t = term_e_40;
                  u_102 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_e_40, d_98);
                  t = x_13(u_102, d_98, t);
                  x_97 = t;
                  t = t_97;
                  t = map_1_0(s_11, t);
                  b_98 = t;
                  t = u_97;
                  t = map_1_0(y_11, t);
                  v_97 = t;
                  t = w_97;
                  t = map_1_0(a_12, t);
                  q_102 = t;
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, y_97))), q_102), v_97);
                  t = concat_0_0(t);
                  c_98 = t;
                  t = g_98;
                  {
                    ATerm f_52 = t;
                    int i_52 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = g_98;
                        if((z_97 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, y_97);
                        LocalPopChoice(i_52);
                      }
                    else
                      {
                        t = f_52;
                        t = g_98;
                      }
                  }
                  e_98 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, x_97, t_97, u_97, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, y_97), z_97), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_r_40, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_98), b_98, c_98))), term_m_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_o_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_98), (ATerm) ATmakeAppl(sym_Str_1, d_98))), term_q_52), term_m_52)))), (ATerm) ATmakeAppl(sym_RDefT_4, d_98, t_97, u_97, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, y_97), z_97), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_52, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_98), b_98, c_98))), term_m_52), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_o_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, e_98), (ATerm) ATmakeAppl(sym_Str_1, d_98))), term_m_52))));
                  f_98 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_98, (ATerm) ATmakeAppl(sym__2, q_100, r_100)), g_98);
                  r_102 = t;
                  t = term_s_52;
                  s_102 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_98, (ATerm) ATmakeAppl(sym__2, q_100, r_100)), g_98), term_s_52);
                  t = n_13(b_12, r_102, s_102, t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_98, (ATerm) ATmakeAppl(sym__2, q_100, r_100)), g_98);
                  t = debug_1_0(d_12, t);
                }
              }
          }
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym__2, g_98, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(CheckATermList(n_97), (ATerm) ATmakeAppl(sym_Str_1, s_97))));
  t = u_146(t);
  h_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_97, f_98);
  t = conc_0_0(t);
  i_98 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, h_98), i_98);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm f_104 = NULL,g_104 = NULL,k_104 = NULL,l_104 = NULL,m_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL;
  o_104 = t;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      p_104 = ATgetArgument(t, 0);
      q_104 = ATgetArgument(t, 1);
      t = p_104;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          g_104 = ATgetArgument(t, 0);
          f_104 = ATgetArgument(t, 1);
          {
            static ATerm h_12 (ATerm t)
            {
              ATerm b_105 = NULL,c_105 = NULL;
              b_105 = t;
              t = SSL_explode_term(b_105);
              if(match_cons(t, sym__2))
                {
                  ATerm t_52 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) t_52) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm u_52 = ATgetArgument(t, 1);
                    if(((ATgetType(u_52) == AT_LIST) && !(ATisEmpty(u_52))))
                      {
                        c_105 = ATgetFirst((ATermList) u_52);
                        {
                          ATerm v_52 = (ATerm) ATgetNext((ATermList) u_52);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, c_105), f_104), (ATerm) ATmakeAppl(sym_Str_1, not_null(k_104))));
              return(t);
            }
            t = g_104;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((k_104 != NULL) && (k_104 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_104 = ATgetArgument(t, 0);
                l_104 = ATgetArgument(t, 1);
                m_104 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, k_104, l_104, m_104)), (ATerm) ATmakeAppl(sym_Rule_3, q_104, term_y_52, term_i_26));
            t = SplitDynamicRule_1_0(h_12, t);
          }
        }
      else
        {
          static ATerm j_12 (ATerm t)
          {
            ATerm j_105 = NULL,k_105 = NULL;
            j_105 = t;
            t = SSL_explode_term(j_105);
            if(match_cons(t, sym__2))
              {
                ATerm z_52 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_52) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm a_53 = ATgetArgument(t, 1);
                  if(((ATgetType(a_53) == AT_LIST) && !(ATisEmpty(a_53))))
                    {
                      k_105 = ATgetFirst((ATermList) a_53);
                      {
                        ATerm c_53 = (ATerm) ATgetNext((ATermList) a_53);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, k_105), (ATerm) ATmakeAppl(sym_Str_1, not_null(k_104))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              g_104 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_104;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((k_104 != NULL) && (k_104 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_104 = ATgetArgument(t, 0);
              l_104 = ATgetArgument(t, 1);
              m_104 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, k_104, l_104, m_104)), (ATerm) ATmakeAppl(sym_Rule_3, q_104, term_y_52, term_i_26));
          t = SplitDynamicRule_1_0(j_12, t);
        }
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          p_104 = ATgetArgument(t, 0);
          q_104 = ATgetArgument(t, 1);
          t = p_104;
          if(match_cons(t, sym_LabeledDynRuleId_2))
            {
              g_104 = ATgetArgument(t, 0);
              f_104 = ATgetArgument(t, 1);
              {
                static ATerm m_12 (ATerm t)
                {
                  ATerm a_106 = NULL,b_106 = NULL,x_40 = NULL;
                  a_106 = t;
                  t = SSL_explode_term(a_106);
                  if(match_cons(t, sym__2))
                    {
                      ATerm d_53 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) d_53) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm e_53 = ATgetArgument(t, 1);
                        if(((ATgetType(e_53) == AT_LIST) && !(ATisEmpty(e_53))))
                          {
                            b_106 = ATgetFirst((ATermList) e_53);
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
                  t = SSL_explode_term(a_106);
                  if(match_cons(t, sym__2))
                    {
                      ATerm g_53 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) g_53) != ATmakeSymbol("", 0, ATtrue)))
                        _fail(t);
                      {
                        ATerm h_53 = ATgetArgument(t, 1);
                        if(((ATgetType(h_53) == AT_LIST) && !(ATisEmpty(h_53))))
                          {
                            ATerm j_53 = ATgetFirst((ATermList) h_53);
                            ATerm n_53 = (ATerm) ATgetNext((ATermList) h_53);
                            if(((ATgetType(n_53) == AT_LIST) && !(ATisEmpty(n_53))))
                              {
                                x_40 = ATgetFirst((ATermList) n_53);
                                {
                                  ATerm o_53 = (ATerm) ATgetNext((ATermList) n_53);
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
                  t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_40), b_106), f_104), (ATerm) ATmakeAppl(sym_Str_1, not_null(k_104))));
                  return(t);
                }
                t = g_104;
                if(match_cons(t, sym_RDecT_3))
                  {
                    if(((k_104 != NULL) && (k_104 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      k_104 = ATgetArgument(t, 0);
                    l_104 = ATgetArgument(t, 1);
                    m_104 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, k_104, l_104, m_104)), q_104);
                t = SplitDynamicRule_1_0(m_12, t);
              }
            }
          else
            {
              static ATerm n_12 (ATerm t)
              {
                ATerm j_106 = NULL,k_106 = NULL,a_41 = NULL;
                j_106 = t;
                t = SSL_explode_term(j_106);
                if(match_cons(t, sym__2))
                  {
                    ATerm r_53 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) r_53) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm s_53 = ATgetArgument(t, 1);
                      if(((ATgetType(s_53) == AT_LIST) && !(ATisEmpty(s_53))))
                        {
                          k_106 = ATgetFirst((ATermList) s_53);
                          {
                            ATerm t_53 = (ATerm) ATgetNext((ATermList) s_53);
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = SSL_explode_term(j_106);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_53 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) u_53) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    {
                      ATerm v_53 = ATgetArgument(t, 1);
                      if(((ATgetType(v_53) == AT_LIST) && !(ATisEmpty(v_53))))
                        {
                          ATerm w_53 = ATgetFirst((ATermList) v_53);
                          ATerm x_53 = (ATerm) ATgetNext((ATermList) v_53);
                          if(((ATgetType(x_53) == AT_LIST) && !(ATisEmpty(x_53))))
                            {
                              a_41 = ATgetFirst((ATermList) x_53);
                              {
                                ATerm y_53 = (ATerm) ATgetNext((ATermList) x_53);
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
                t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_53, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_41), k_106), (ATerm) ATmakeAppl(sym_Str_1, not_null(k_104))));
                return(t);
              }
              if(match_cons(t, sym_DynRuleId_1))
                {
                  g_104 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = g_104;
              if(match_cons(t, sym_RDecT_3))
                {
                  if(((k_104 != NULL) && (k_104 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    k_104 = ATgetArgument(t, 0);
                  l_104 = ATgetArgument(t, 1);
                  m_104 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, k_104, l_104, m_104)), q_104);
              t = SplitDynamicRule_1_0(n_12, t);
            }
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              p_104 = ATgetArgument(t, 0);
              q_104 = ATgetArgument(t, 1);
              t = p_104;
              if(match_cons(t, sym_LabeledDynRuleId_2))
                {
                  g_104 = ATgetArgument(t, 0);
                  f_104 = ATgetArgument(t, 1);
                  {
                    static ATerm o_12 (ATerm t)
                    {
                      ATerm x_106 = NULL,y_106 = NULL,c_41 = NULL;
                      x_106 = t;
                      t = SSL_explode_term(x_106);
                      if(match_cons(t, sym__2))
                        {
                          ATerm a_54 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) a_54) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm b_54 = ATgetArgument(t, 1);
                            if(((ATgetType(b_54) == AT_LIST) && !(ATisEmpty(b_54))))
                              {
                                y_106 = ATgetFirst((ATermList) b_54);
                                {
                                  ATerm c_54 = (ATerm) ATgetNext((ATermList) b_54);
                                }
                              }
                            else
                              _fail(t);
                          }
                        }
                      else
                        _fail(t);
                      t = SSL_explode_term(x_106);
                      if(match_cons(t, sym__2))
                        {
                          ATerm d_54 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) d_54) != ATmakeSymbol("", 0, ATtrue)))
                            _fail(t);
                          {
                            ATerm e_54 = ATgetArgument(t, 1);
                            if(((ATgetType(e_54) == AT_LIST) && !(ATisEmpty(e_54))))
                              {
                                ATerm f_54 = ATgetFirst((ATermList) e_54);
                                ATerm g_54 = (ATerm) ATgetNext((ATermList) e_54);
                                if(((ATgetType(g_54) == AT_LIST) && !(ATisEmpty(g_54))))
                                  {
                                    c_41 = ATgetFirst((ATermList) g_54);
                                    {
                                      ATerm h_54 = (ATerm) ATgetNext((ATermList) g_54);
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
                      t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, c_41), y_106), f_104), (ATerm) ATmakeAppl(sym_Str_1, not_null(k_104))));
                      return(t);
                    }
                    t = g_104;
                    if(match_cons(t, sym_RDecT_3))
                      {
                        if(((k_104 != NULL) && (k_104 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          k_104 = ATgetArgument(t, 0);
                        l_104 = ATgetArgument(t, 1);
                        m_104 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, k_104, l_104, m_104)), q_104);
                    t = SplitDynamicRule_1_0(o_12, t);
                  }
                }
              else
                {
                  static ATerm q_12 (ATerm t)
                  {
                    ATerm c_107 = NULL,d_107 = NULL,e_41 = NULL;
                    c_107 = t;
                    t = SSL_explode_term(c_107);
                    if(match_cons(t, sym__2))
                      {
                        ATerm l_54 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) l_54) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm p_54 = ATgetArgument(t, 1);
                          if(((ATgetType(p_54) == AT_LIST) && !(ATisEmpty(p_54))))
                            {
                              d_107 = ATgetFirst((ATermList) p_54);
                              {
                                ATerm q_54 = (ATerm) ATgetNext((ATermList) p_54);
                              }
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = SSL_explode_term(c_107);
                    if(match_cons(t, sym__2))
                      {
                        ATerm r_54 = ATgetArgument(t, 0);
                        if((ATgetSymbol((ATermAppl) r_54) != ATmakeSymbol("", 0, ATtrue)))
                          _fail(t);
                        {
                          ATerm s_54 = ATgetArgument(t, 1);
                          if(((ATgetType(s_54) == AT_LIST) && !(ATisEmpty(s_54))))
                            {
                              ATerm t_54 = ATgetFirst((ATermList) s_54);
                              ATerm u_54 = (ATerm) ATgetNext((ATermList) s_54);
                              if(((ATgetType(u_54) == AT_LIST) && !(ATisEmpty(u_54))))
                                {
                                  e_41 = ATgetFirst((ATermList) u_54);
                                  {
                                    ATerm v_54 = (ATerm) ATgetNext((ATermList) u_54);
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
                    t = (ATerm) ATmakeAppl(sym_CallT_3, term_j_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_41), d_107), (ATerm) ATmakeAppl(sym_Str_1, not_null(k_104))));
                    return(t);
                  }
                  if(match_cons(t, sym_DynRuleId_1))
                    {
                      g_104 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = g_104;
                  if(match_cons(t, sym_RDecT_3))
                    {
                      if(((k_104 != NULL) && (k_104 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        k_104 = ATgetArgument(t, 0);
                      {
                        ATerm w_54 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm x_54 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = o_104;
                  t = SplitDynamicRule_1_0(q_12, t);
                }
            }
          else
            {
              if(match_cons(t, sym_AddScopeLabel_2))
                {
                  p_104 = ATgetArgument(t, 0);
                  q_104 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, term_z_54, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, q_104), (ATerm) ATmakeAppl(sym_Str_1, p_104))), (ATerm) ATempty);
            }
        }
    }
  return(t);
}
ATerm DesugarDynRuleDef_0_0 (ATerm t)
{
  ATerm s_107 = NULL,t_107 = NULL,w_107 = NULL,x_107 = NULL,y_107 = NULL,z_107 = NULL,a_108 = NULL;
  if(match_cons(t, sym_UndefineDynRule_2))
    {
      s_107 = ATgetArgument(t, 0);
      a_108 = ATgetArgument(t, 1);
      t = s_107;
      if(match_cons(t, sym_AddLabelDynRuleId_2))
        {
          t_107 = ATgetArgument(t, 0);
          z_107 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_107;
      if(match_cons(t, sym_RDecT_3))
        {
          w_107 = ATgetArgument(t, 0);
          x_107 = ATgetArgument(t, 1);
          y_107 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, w_107, z_107)), (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, w_107, x_107, y_107)), a_108));
    }
  else
    {
      if(match_cons(t, sym_AddDynRule_2))
        {
          s_107 = ATgetArgument(t, 0);
          a_108 = ATgetArgument(t, 1);
          t = s_107;
          if(match_cons(t, sym_AddLabelDynRuleId_2))
            {
              t_107 = ATgetArgument(t, 0);
              z_107 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_107;
          if(match_cons(t, sym_RDecT_3))
            {
              w_107 = ATgetArgument(t, 0);
              x_107 = ATgetArgument(t, 1);
              y_107 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, w_107, z_107)), (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, w_107, x_107, y_107)), a_108));
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              s_107 = ATgetArgument(t, 0);
              a_108 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_107;
          if(match_cons(t, sym_AddLabelDynRuleId_2))
            {
              t_107 = ATgetArgument(t, 0);
              z_107 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_107;
          if(match_cons(t, sym_RDecT_3))
            {
              w_107 = ATgetArgument(t, 0);
              x_107 = ATgetArgument(t, 1);
              y_107 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, w_107, z_107)), (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, w_107, x_107, y_107)), a_108));
        }
    }
  return(t);
}
ATerm split_dynamic_rule_0_0 (ATerm t)
{
  ATerm a_55 = t;
  int b_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DesugarDynRuleDef_0_0(t);
      LocalPopChoice(b_55);
    }
  else
    {
      t = a_55;
      {
        ATerm i_109 = NULL;
        i_109 = t;
        t = (ATerm) ATinsert(ATempty, i_109);
      }
    }
  t = map_1_0(SplitDynamicRule_0_0, t);
  return(t);
}
ATerm oncetd_1_0 (ATerm n_114 (ATerm), ATerm t)
{
  static ATerm n_109 (ATerm t)
  {
    ATerm c_55 = t;
    int d_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_114(t);
        LocalPopChoice(d_55);
      }
    else
      {
        t = c_55;
        t = SRTS_one(n_109, t);
      }
    return(t);
  }
  t = n_109(t);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  t = term_v_42;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm r_146 (ATerm), ATerm t)
{
  static ATerm c_110 (ATerm t)
  {
    static ATerm r_12 (ATerm t)
    {
      ATerm e_55 = t;
      int f_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_146(t);
          LocalPopChoice(f_55);
        }
      else
        {
          t = e_55;
          {
            ATerm t_109 = NULL,v_109 = NULL,b_110 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                t_109 = ATgetArgument(t, 0);
                v_109 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, t_109, v_109);
            {
              static ATerm p_14 (ATerm t)
              {
                t = t_109;
                t = DeclareContextVars_0_0(t);
                t = v_109;
                t = c_110(t);
                if(((b_110 != NULL) && (b_110 != t)))
                  _fail(t);
                else
                  b_110 = t;
                return(t);
              }
              t = scope_2_0(u_12, p_14, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, t_109, not_null(b_110));
          }
        }
      return(t);
    }
    t = oncetd_1_0(r_12, t);
    return(t);
  }
  t = c_110(t);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm f_110 = NULL,j_110 = NULL,k_110 = NULL,l_110 = NULL;
  l_110 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      k_110 = ATgetArgument(t, 0);
      {
        ATerm g_55 = t;
        int h_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_110;
            f_110 = t;
            t = l_110;
            LocalPopChoice(h_55);
          }
        else
          {
            t = g_55;
            t = l_110;
            f_110 = t;
            t = l_110;
          }
      }
    }
  else
    {
      t = l_110;
      f_110 = t;
      t = l_110;
    }
  t = term_j_55;
  j_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_110, term_j_55);
  t = n_13(w_14, f_110, j_110, t);
  t = l_110;
  return(t);
}
static ATerm w_14 (ATerm t)
{
  t = term_v_42;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm n_110 = NULL,r_110 = NULL,s_110 = NULL,t_110 = NULL;
  t_110 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      s_110 = ATgetArgument(t, 0);
      {
        ATerm k_55 = t;
        int l_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_110;
            n_110 = t;
            t = t_110;
            LocalPopChoice(l_55);
          }
        else
          {
            t = k_55;
            t = t_110;
            n_110 = t;
            t = t_110;
          }
      }
    }
  else
    {
      t = t_110;
      n_110 = t;
      t = t_110;
    }
  t = term_o_55;
  r_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_110, term_o_55);
  t = n_13(a_15, n_110, r_110, t);
  t = t_110;
  return(t);
}
static ATerm a_15 (ATerm t)
{
  t = term_v_42;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm p_55 = t;
  int q_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(q_14, t);
      LocalPopChoice(q_55);
    }
  else
    {
      t = p_55;
      t = map_1_0(z_14, t);
    }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm n_41 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_41);
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm t_55 = t;
  int u_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_55);
    }
  else
    {
      t = t_55;
      {
        ATerm v_55 = t;
        int w_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_55);
          }
        else
          {
            t = v_55;
            {
              ATerm x_55 = t;
              int y_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_41 = ATgetArgument(t, 0);
                      z_41 = ATgetArgument(t, 1);
                      a_42 = ATgetArgument(t, 2);
                      b_42 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_42;
                  t = map_1_0(d_15, t);
                  LocalPopChoice(y_55);
                }
              else
                {
                  t = x_55;
                  {
                    ATerm z_55 = t;
                    int a_56 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(a_56);
                      }
                    else
                      {
                        t = z_55;
                        t = dynrule_targs_1_0(e_15, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm u_42 = NULL;
  ATerm b_56 = t;
  int c_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_42 = ATgetArgument(t, 0);
          {
            ATerm d_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_56);
      t = u_42;
    }
  else
    {
      t = b_56;
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
static ATerm e_15 (ATerm t)
{
  t = map_1_0(k_15, t);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm k_43 = NULL;
  ATerm e_56 = t;
  int f_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_43 = ATgetArgument(t, 0);
          {
            ATerm g_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_56);
      t = k_43;
    }
  else
    {
      t = e_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_43 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_43;
    }
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm b_44 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_44 = ATgetArgument(t, 0);
      t = b_44;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_44 = ATgetArgument(t, 0);
          {
            ATerm h_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_44;
    }
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm l_44 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_44 = ATgetArgument(t, 0);
      t = l_44;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_44 = ATgetArgument(t, 0);
          {
            ATerm i_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_44;
    }
  return(t);
}
static ATerm r_15 (ATerm t)
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
static ATerm s_15 (ATerm t)
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
static ATerm v_15 (ATerm t)
{
  ATerm j_56 = t;
  int m_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_56);
    }
  else
    {
      t = j_56;
      {
        ATerm n_56 = t;
        int o_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_56);
          }
        else
          {
            t = n_56;
            {
              ATerm p_56 = t;
              int q_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_45 = NULL,c_45 = NULL,e_45 = NULL,h_45 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_45 = ATgetArgument(t, 0);
                      c_45 = ATgetArgument(t, 1);
                      e_45 = ATgetArgument(t, 2);
                      h_45 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_45;
                  t = map_1_0(y_15, t);
                  LocalPopChoice(q_56);
                }
              else
                {
                  t = p_56;
                  {
                    ATerm r_56 = t;
                    int s_56 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(s_56);
                      }
                    else
                      {
                        t = r_56;
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
static ATerm y_15 (ATerm t)
{
  ATerm p_45 = NULL;
  ATerm u_56 = t;
  int v_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_45 = ATgetArgument(t, 0);
          {
            ATerm w_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_56);
      t = p_45;
    }
  else
    {
      t = u_56;
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
static ATerm z_15 (ATerm t)
{
  t = map_1_0(a_16, t);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm u_45 = NULL;
  ATerm x_56 = t;
  int y_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_45 = ATgetArgument(t, 0);
          {
            ATerm z_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_56);
      t = u_45;
    }
  else
    {
      t = x_56;
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
static ATerm b_16 (ATerm t)
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
            ATerm c_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_46;
    }
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm a_47 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_47 = ATgetArgument(t, 0);
      t = a_47;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_47 = ATgetArgument(t, 0);
          {
            ATerm d_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_47;
    }
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm j_47 = NULL;
  if(match_cons(t, sym__2))
    {
      j_47 = ATgetArgument(t, 0);
      if((j_47 != ATgetArgument(t, 1)))
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
  ATerm x_116 = NULL;
  x_116 = t;
  {
    ATerm e_57 = t;
    int f_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_41 = NULL,l_41 = NULL;
        t = x_116;
        t = free_vars_3_0(b_15, c_15, tboundin_3_0, t);
        k_41 = t;
        t = x_116;
        {
          ATerm g_57 = t;
          int h_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_43 = NULL;
              ATerm i_57 = t;
              int j_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm k_57 = ATgetArgument(t, 0);
                      ATerm n_57 = ATgetArgument(t, 1);
                      q_43 = ATgetArgument(t, 2);
                      {
                        ATerm o_57 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_57);
                  t = q_43;
                  t = map_1_0(l_15, t);
                }
              else
                {
                  t = i_57;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm p_57 = ATgetArgument(t, 0);
                      ATerm q_57 = ATgetArgument(t, 1);
                      q_43 = ATgetArgument(t, 2);
                      {
                        ATerm s_57 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = q_43;
                  t = map_1_0(q_15, t);
                }
              LocalPopChoice(h_57);
            }
          else
            {
              t = g_57;
              t = (ATerm) ATempty;
            }
        }
        l_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_41, l_41);
        t = b_13(r_15, k_41, l_41, t);
        LocalPopChoice(f_57);
      }
    else
      {
        t = e_57;
        {
          ATerm t_44 = NULL,v_44 = NULL;
          t = x_116;
          t = free_vars_3_0(s_15, v_15, tboundin_3_0, t);
          t_44 = t;
          t = x_116;
          {
            ATerm t_57 = t;
            int v_57 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_46 = NULL;
                ATerm d_58 = t;
                int e_58 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm g_58 = ATgetArgument(t, 0);
                        ATerm h_58 = ATgetArgument(t, 1);
                        a_46 = ATgetArgument(t, 2);
                        {
                          ATerm i_58 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_58);
                    t = a_46;
                    t = map_1_0(b_16, t);
                  }
                else
                  {
                    t = d_58;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm j_58 = ATgetArgument(t, 0);
                        ATerm l_58 = ATgetArgument(t, 1);
                        a_46 = ATgetArgument(t, 2);
                        {
                          ATerm r_58 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = a_46;
                    t = map_1_0(c_16, t);
                  }
                LocalPopChoice(v_57);
              }
            else
              {
                t = t_57;
                t = (ATerm) ATempty;
              }
          }
          v_44 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_44, v_44);
          t = b_13(d_16, t_44, v_44, t);
        }
      }
  }
  return(t);
}
static ATerm e_16 (ATerm t)
{
  t = term_v_42;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_35;
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm r_117 = NULL,s_117 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_117 = ATgetFirst((ATermList) t);
      s_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_117, s_117);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm t_117 = NULL,w_117 = NULL,x_117 = NULL,a_118 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_58 = ATgetArgument(t, 0);
      if(match_cons(u_58, sym__2))
        {
          t_117 = ATgetArgument(u_58, 0);
          w_117 = ATgetArgument(u_58, 1);
        }
      else
        _fail(t);
      {
        ATerm v_58 = ATgetArgument(t, 1);
        if(match_cons(v_58, sym__2))
          {
            x_117 = ATgetArgument(v_58, 0);
            a_118 = ATgetArgument(v_58, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_117), t_117), (ATerm) ATinsert(CheckATermList(a_118), w_117));
  return(t);
}
static ATerm v_12 (ATerm m_85, ATerm l_85, ATerm t)
{
  ATerm b_117 = NULL,c_117 = NULL,d_117 = NULL;
  static ATerm f_16 (ATerm t)
  {
    t = m_85;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = m_85;
    {
      static ATerm g_16 (ATerm t)
      {
        ATerm h_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL,q_117 = NULL,h_26 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            h_117 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_117;
        t = map_1_0(split_dynamic_rule_0_0, t);
        t = flatten_list_0_0(t);
        t = genzip_4_0(h_16, i_16, j_16, _id, t);
        q_117 = t;
        if(match_cons(t, sym__2))
          {
            l_117 = ATgetArgument(t, 0);
            m_117 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_117);
        k_117 = t;
        t = m_117;
        t = concat_0_0(t);
        n_117 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_117, n_117);
        h_26 = t;
        t = SSLsetAnnotations(h_26, k_117);
        if(match_cons(t, sym__2))
          {
            if(((c_117 != NULL) && (c_117 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              c_117 = ATgetArgument(t, 0);
            if(((b_117 != NULL) && (b_117 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              b_117 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, c_117);
        return(t);
      }
      t = split_dynamic_rule_1_0(g_16, t);
    }
    if(((d_117 != NULL) && (d_117 != t)))
      _fail(t);
    else
      d_117 = t;
    return(t);
  }
  t = scope_2_0(e_16, f_16, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_117)), not_null(d_117)), l_85);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm j_112 (ATerm), ATerm k_112 (ATerm), ATerm t)
{
  static ATerm d_118 (ATerm t)
  {
    ATerm w_58 = t;
    int x_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_112(t);
        t = d_118(t);
        LocalPopChoice(x_58);
      }
    else
      {
        t = w_58;
        t = k_112(t);
      }
    return(t);
  }
  t = d_118(t);
  return(t);
}
ATerm listtd_1_0 (ATerm f_121 (ATerm), ATerm t)
{
  static ATerm d_119 (ATerm t)
  {
    ATerm x_118 = NULL,y_118 = NULL,b_119 = NULL;
    t = f_121(t);
    x_118 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_118;
      }
    else
      {
        ATerm y_47 = NULL,b_48 = NULL,k_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_118 = ATgetFirst((ATermList) t);
            b_119 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_118);
        y_47 = t;
        t = b_119;
        t = d_119(t);
        b_48 = t;
        t = (ATerm) ATinsert(CheckATermList(b_48), y_118);
        k_26 = t;
        t = SSLsetAnnotations(k_26, y_47);
      }
    return(t);
  }
  t = d_119(t);
  return(t);
}
ATerm DefDynRuleScope_0_0 (ATerm t)
{
  ATerm n_119 = NULL,q_119 = NULL,r_119 = NULL,s_119 = NULL,a_120 = NULL,b_120 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      a_120 = ATgetArgument(t, 0);
      b_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_120;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_119 = ATgetFirst((ATermList) t);
      s_119 = (ATerm) ATgetNext((ATermList) t);
      t = q_119;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          r_119 = ATgetArgument(t, 0);
          n_119 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_a_59, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_GenDynRules_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_AddScopeLabel_2, r_119, n_119))), (ATerm) ATmakeAppl(sym_DynRuleScope_2, s_119, b_120))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, r_119)));
        }
      else
        {
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              r_119 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_a_59, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, s_119, b_120)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, r_119)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_120;
    }
  return(t);
}
ATerm UpgradeExtendOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm r_120 = NULL,s_120 = NULL,t_120 = NULL;
  t = term_c_43;
  s_120 = t;
  t = (ATerm) ATinsert(ATempty, term_d_59);
  t_120 = t;
  t = SSL_printnl(s_120, t_120);
  t = term_e_43;
  r_120 = t;
  t = SSL_exit(r_120);
  return(t);
}
ATerm UpgradeOverrideDynamicRules_0_0 (ATerm t)
{
  ATerm u_120 = NULL,v_120 = NULL,w_120 = NULL;
  t = term_c_43;
  v_120 = t;
  t = (ATerm) ATinsert(ATempty, term_e_59);
  w_120 = t;
  t = SSL_printnl(v_120, w_120);
  t = term_e_43;
  u_120 = t;
  t = SSL_exit(u_120);
  return(t);
}
static ATerm a_123 (ATerm x_121, ATerm y_121, ATerm e_122, ATerm f_122, ATerm g_122, ATerm h_122, ATerm i_122, ATerm t)
{
  t = i_122;
  {
    ATerm f_59 = t;
    if((PushChoice() == 0))
      {
        t = g_122;
        if(match_cons(t, sym_Op_2))
          {
            ATerm g_59 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_59) != ATmakeSymbol("Undefined", 0, ATtrue)))
              _fail(t);
            {
              ATerm j_59 = ATgetArgument(t, 1);
              if(((ATgetType(j_59) != AT_LIST) || !(ATisEmpty(j_59))))
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
        t = f_59;
      }
  }
  t = (ATerm) ATmakeAppl(sym_AddDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, x_121, y_121, e_122)), (ATerm) ATmakeAppl(sym_Rule_3, f_122, g_122, h_122));
  return(t);
}
static ATerm k_16 (ATerm t)
{
  t = term_k_59;
  return(t);
}
ATerm RDefToDRDef_extend_0_0 (ATerm t)
{
  ATerm p_122 = NULL,q_122 = NULL,r_122 = NULL,s_122 = NULL,t_122 = NULL,u_122 = NULL,v_122 = NULL,w_122 = NULL,x_122 = NULL,y_122 = NULL;
  r_122 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      s_122 = ATgetArgument(t, 0);
      t_122 = ATgetArgument(t, 1);
      u_122 = ATgetArgument(t, 2);
      v_122 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = v_122;
  if(match_cons(t, sym_Rule_3))
    {
      w_122 = ATgetArgument(t, 0);
      x_122 = ATgetArgument(t, 1);
      y_122 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_122;
  if(match_cons(t, sym_Op_2))
    {
      p_122 = ATgetArgument(t, 0);
      q_122 = ATgetArgument(t, 1);
      t = q_122;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = p_122;
          if(match_string(t, "Undefined"))
            {
              ATerm p_59 = t;
              int r_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_122;
                  {
                    ATerm s_59 = t;
                    int t_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = y_122;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        LocalPopChoice(t_59);
                      }
                    else
                      {
                        t = s_59;
                        {
                          ATerm m_49 = NULL,n_49 = NULL;
                          t = term_c_43;
                          m_49 = t;
                          t = (ATerm) ATinsert(ATempty, term_u_59);
                          n_49 = t;
                          t = SSL_printnl(m_49, n_49);
                          t = r_122;
                          t = debug_1_0(k_16, t);
                        }
                      }
                  }
                  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, s_122, t_122, u_122)), w_122);
                  LocalPopChoice(r_59);
                }
              else
                {
                  t = p_59;
                  t = a_123(s_122, t_122, u_122, w_122, x_122, y_122, r_122, t);
                }
            }
          else
            {
              t = a_123(s_122, t_122, u_122, w_122, x_122, y_122, r_122, t);
            }
        }
      else
        {
          t = p_122;
          t = a_123(s_122, t_122, u_122, w_122, x_122, y_122, r_122, t);
        }
    }
  else
    {
      t = a_123(s_122, t_122, u_122, w_122, x_122, y_122, r_122, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm k_119 (ATerm), ATerm t)
{
  ATerm b_123 = NULL,c_123 = NULL,d_123 = NULL,e_123 = NULL;
  b_123 = t;
  t = k_119(t);
  c_123 = t;
  t = term_c_43;
  d_123 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_123), c_123);
  e_123 = t;
  t = SSL_printnl(d_123, e_123);
  t = b_123;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  t = term_k_59;
  return(t);
}
ATerm UpgradeUndefine_0_0 (ATerm t)
{
  ATerm f_123 = NULL,g_123 = NULL,h_123 = NULL,i_123 = NULL,j_123 = NULL,k_123 = NULL;
  k_123 = t;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm v_59 = ATgetArgument(t, 0);
      if(match_cons(v_59, sym_DynRuleId_1))
        {
          ATerm y_59 = ATgetArgument(v_59, 0);
          if(match_cons(y_59, sym_RDecT_3))
            {
              f_123 = ATgetArgument(y_59, 0);
              g_123 = ATgetArgument(y_59, 1);
              h_123 = ATgetArgument(y_59, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm w_59 = ATgetArgument(t, 1);
        if(match_cons(w_59, sym_Rule_3))
          {
            i_123 = ATgetArgument(w_59, 0);
            {
              ATerm b_60 = ATgetArgument(w_59, 1);
              if(match_cons(b_60, sym_Op_2))
                {
                  ATerm c_60 = ATgetArgument(b_60, 0);
                  if((ATgetSymbol((ATermAppl) c_60) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm d_60 = ATgetArgument(b_60, 1);
                    if(((ATgetType(d_60) != AT_LIST) || !(ATisEmpty(d_60))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            j_123 = ATgetArgument(w_59, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm e_60 = t;
    int f_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_123;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        LocalPopChoice(f_60);
      }
    else
      {
        t = e_60;
        {
          ATerm l_123 = NULL,m_123 = NULL;
          t = term_c_43;
          l_123 = t;
          t = (ATerm) ATinsert(ATempty, term_u_59);
          m_123 = t;
          t = SSL_printnl(l_123, m_123);
          t = k_123;
          t = debug_1_0(l_16, t);
        }
      }
  }
  t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, f_123, g_123, h_123)), i_123);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm i_60 = t;
  int k_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_123 = NULL;
      p_123 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm l_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_123;
      LocalPopChoice(k_60);
      {
        ATerm q_123 = NULL,r_123 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            q_123 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_123;
        t = map_1_0(o_16, t);
        r_123 = t;
        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, r_123);
      }
    }
  else
    {
      t = i_60;
      {
        ATerm n_60 = t;
        int o_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_123 = NULL;
            u_123 = t;
            if(match_cons(t, sym_ExtendDynamicRules_1))
              {
                ATerm p_60 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = u_123;
            LocalPopChoice(o_60);
            {
              ATerm v_123 = NULL,w_123 = NULL;
              if(match_cons(t, sym_ExtendDynamicRules_1))
                {
                  v_123 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = v_123;
              t = map_1_0(RDefToDRDef_extend_0_0, t);
              w_123 = t;
              t = (ATerm) ATmakeAppl(sym_GenDynRules_1, w_123);
            }
          }
        else
          {
            t = n_60;
            {
              ATerm q_60 = t;
              int t_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_123 = NULL;
                  x_123 = t;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      ATerm u_60 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_123;
                  LocalPopChoice(t_60);
                  t = UpgradeOverrideDynamicRules_0_0(t);
                }
              else
                {
                  t = q_60;
                  {
                    ATerm v_60 = t;
                    int w_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm y_123 = NULL;
                        y_123 = t;
                        if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                          {
                            ATerm x_60 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = y_123;
                        LocalPopChoice(w_60);
                        t = UpgradeExtendOverrideDynamicRules_0_0(t);
                      }
                    else
                      {
                        t = v_60;
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
  ATerm z_60 = t;
  int a_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UpgradeUndefine_0_0(t);
      LocalPopChoice(a_61);
    }
  else
    {
      t = z_60;
    }
  return(t);
}
ATerm upgrade_old_dr_constructs_0_0 (ATerm t)
{
  t = topdown_1_0(m_16, t);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = Cons_2_0(t_16, u_16, t);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm s_124 = NULL,t_124 = NULL,u_124 = NULL,v_124 = NULL,m_26 = NULL;
  v_124 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      t_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_124);
  s_124 = t;
  t = t_124;
  t = topdown_1_0(v_16, t);
  t = listtd_1_0(w_16, t);
  u_124 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, u_124);
  m_26 = t;
  t = SSLsetAnnotations(m_26, s_124);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm b_61 = t;
  int c_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynRuleScope_0_0(t);
      LocalPopChoice(c_61);
    }
  else
    {
      t = b_61;
    }
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = repeat_2_0(y_16, _id, t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm y_124 = NULL,z_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_124 = ATgetFirst((ATermList) t);
      z_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_12(y_124, z_124, t);
  return(t);
}
ATerm LiftDynamicRules_0_0 (ATerm t)
{
  ATerm f_124 = NULL,i_124 = NULL,l_124 = NULL,m_124 = NULL,n_124 = NULL,o_124 = NULL,p_124 = NULL,q_124 = NULL,y_26 = NULL,q_26 = NULL;
  t = upgrade_old_dr_constructs_0_0(t);
  q_124 = t;
  if(match_cons(t, sym_Specification_1))
    {
      i_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_124);
  f_124 = t;
  t = i_124;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_124 = ATgetFirst((ATermList) t);
      n_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_124);
  l_124 = t;
  t = n_124;
  t = Cons_2_0(_id, q_16, t);
  o_124 = t;
  t = (ATerm) ATinsert(CheckATermList(o_124), m_124);
  q_26 = t;
  t = SSLsetAnnotations(q_26, l_124);
  p_124 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, p_124);
  y_26 = t;
  t = SSLsetAnnotations(y_26, f_124);
  return(t);
}
ATerm tboundin_3_0 (ATerm o_145 (ATerm), ATerm p_145 (ATerm), ATerm q_145 (ATerm), ATerm t)
{
  ATerm m_130 = NULL,n_130 = NULL,o_130 = NULL,p_130 = NULL,q_130 = NULL;
  p_130 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_130 = ATgetArgument(t, 0);
      o_130 = ATgetArgument(t, 1);
      {
        ATerm i_50 = NULL,l_50 = NULL,m_50 = NULL,e_27 = NULL;
        t = SSLgetAnnotations(p_130);
        i_50 = t;
        t = q_130;
        t = q_145(t);
        l_50 = t;
        t = o_130;
        t = o_145(t);
        m_50 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, l_50, m_50);
        e_27 = t;
        t = SSLsetAnnotations(e_27, i_50);
      }
    }
  else
    {
      if(match_cons(t, sym_LRule_1))
        {
          q_130 = ATgetArgument(t, 0);
          {
            ATerm d_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,i_31 = NULL,j_27 = NULL;
            t = SSLgetAnnotations(p_130);
            d_51 = t;
            t = q_130;
            if(match_cons(t, sym_Rule_3))
              {
                o_51 = ATgetArgument(t, 0);
                p_51 = ATgetArgument(t, 1);
                q_51 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_130);
            n_51 = t;
            t = o_51;
            t = o_145(t);
            r_51 = t;
            t = p_51;
            t = o_145(t);
            s_51 = t;
            t = q_51;
            t = o_145(t);
            t_51 = t;
            t = (ATerm) ATmakeAppl(sym_Rule_3, r_51, s_51, t_51);
            j_27 = t;
            t = SSLsetAnnotations(j_27, n_51);
            u_51 = t;
            t = (ATerm) ATmakeAppl(sym_LRule_1, u_51);
            i_31 = t;
            t = SSLsetAnnotations(i_31, d_51);
          }
        }
      else
        {
          if(match_cons(t, sym_RDecT_3))
            {
              q_130 = ATgetArgument(t, 0);
              o_130 = ATgetArgument(t, 1);
              m_130 = ATgetArgument(t, 2);
              {
                ATerm c_52 = NULL,g_52 = NULL,h_52 = NULL,p_52 = NULL,m_31 = NULL;
                t = SSLgetAnnotations(p_130);
                c_52 = t;
                t = q_130;
                t = q_145(t);
                g_52 = t;
                t = o_130;
                t = q_145(t);
                h_52 = t;
                t = m_130;
                t = q_145(t);
                p_52 = t;
                t = (ATerm) ATmakeAppl(sym_RDecT_3, g_52, h_52, p_52);
                m_31 = t;
                t = SSLsetAnnotations(m_31, c_52);
              }
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  q_130 = ATgetArgument(t, 0);
                  o_130 = ATgetArgument(t, 1);
                  m_130 = ATgetArgument(t, 2);
                  n_130 = ATgetArgument(t, 3);
                  {
                    ATerm b_53 = NULL,i_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_31 = NULL;
                    t = SSLgetAnnotations(p_130);
                    b_53 = t;
                    t = q_130;
                    t = q_145(t);
                    i_53 = t;
                    t = o_130;
                    t = q_145(t);
                    k_53 = t;
                    t = m_130;
                    t = q_145(t);
                    l_53 = t;
                    t = n_130;
                    t = o_145(t);
                    m_53 = t;
                    t = (ATerm) ATmakeAppl(sym_SDefT_4, i_53, k_53, l_53, m_53);
                    n_31 = t;
                    t = SSLsetAnnotations(n_31, b_53);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_130 = ATgetArgument(t, 0);
                      o_130 = ATgetArgument(t, 1);
                      m_130 = ATgetArgument(t, 2);
                      n_130 = ATgetArgument(t, 3);
                      {
                        ATerm z_53 = NULL,k_54 = NULL,m_54 = NULL,n_54 = NULL,o_54 = NULL,p_31 = NULL;
                        t = SSLgetAnnotations(p_130);
                        z_53 = t;
                        t = q_130;
                        t = q_145(t);
                        k_54 = t;
                        t = o_130;
                        t = q_145(t);
                        m_54 = t;
                        t = m_130;
                        t = q_145(t);
                        n_54 = t;
                        t = n_130;
                        t = o_145(t);
                        o_54 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, k_54, m_54, n_54, o_54);
                        p_31 = t;
                        t = SSLsetAnnotations(p_31, z_53);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_UndefineDynRule_2))
                        {
                          q_130 = ATgetArgument(t, 0);
                          o_130 = ATgetArgument(t, 1);
                          {
                            ATerm m_55 = NULL,r_55 = NULL,s_55 = NULL,r_31 = NULL;
                            t = SSLgetAnnotations(p_130);
                            m_55 = t;
                            t = q_130;
                            t = q_145(t);
                            r_55 = t;
                            t = o_130;
                            t = o_145(t);
                            s_55 = t;
                            t = (ATerm) ATmakeAppl(sym_UndefineDynRule_2, r_55, s_55);
                            r_31 = t;
                            t = SSLsetAnnotations(r_31, m_55);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SetDynRule_2))
                            {
                              q_130 = ATgetArgument(t, 0);
                              o_130 = ATgetArgument(t, 1);
                              {
                                ATerm t_56 = NULL,a_57 = NULL,b_57 = NULL,s_31 = NULL;
                                t = SSLgetAnnotations(p_130);
                                t_56 = t;
                                t = q_130;
                                t = q_145(t);
                                a_57 = t;
                                t = o_130;
                                t = o_145(t);
                                b_57 = t;
                                t = (ATerm) ATmakeAppl(sym_SetDynRule_2, a_57, b_57);
                                s_31 = t;
                                t = SSLsetAnnotations(s_31, t_56);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_AddDynRule_2))
                                {
                                  q_130 = ATgetArgument(t, 0);
                                  o_130 = ATgetArgument(t, 1);
                                  {
                                    ATerm r_57 = NULL,u_57 = NULL,c_58 = NULL,y_31 = NULL;
                                    t = SSLgetAnnotations(p_130);
                                    r_57 = t;
                                    t = q_130;
                                    t = q_145(t);
                                    u_57 = t;
                                    t = o_130;
                                    t = o_145(t);
                                    c_58 = t;
                                    t = (ATerm) ATmakeAppl(sym_AddDynRule_2, u_57, c_58);
                                    y_31 = t;
                                    t = SSLsetAnnotations(y_31, r_57);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_GenDynRules_1))
                                    {
                                      q_130 = ATgetArgument(t, 0);
                                      {
                                        ATerm s_58 = NULL,y_58 = NULL,z_31 = NULL;
                                        t = SSLgetAnnotations(p_130);
                                        s_58 = t;
                                        t = q_130;
                                        t = o_145(t);
                                        y_58 = t;
                                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, y_58);
                                        z_31 = t;
                                        t = SSLsetAnnotations(z_31, s_58);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_DynamicRules_1))
                                        {
                                          q_130 = ATgetArgument(t, 0);
                                          {
                                            ATerm m_59 = NULL,q_59 = NULL,d_32 = NULL;
                                            t = SSLgetAnnotations(p_130);
                                            m_59 = t;
                                            t = q_130;
                                            t = o_145(t);
                                            q_59 = t;
                                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, q_59);
                                            d_32 = t;
                                            t = SSLsetAnnotations(d_32, m_59);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OverrideDynamicRules_1))
                                            {
                                              q_130 = ATgetArgument(t, 0);
                                              {
                                                ATerm x_59 = NULL,a_60 = NULL,e_32 = NULL;
                                                t = SSLgetAnnotations(p_130);
                                                x_59 = t;
                                                t = q_130;
                                                t = o_145(t);
                                                a_60 = t;
                                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, a_60);
                                                e_32 = t;
                                                t = SSLsetAnnotations(e_32, x_59);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                                {
                                                  q_130 = ATgetArgument(t, 0);
                                                  {
                                                    ATerm h_60 = NULL,j_60 = NULL,f_32 = NULL;
                                                    t = SSLgetAnnotations(p_130);
                                                    h_60 = t;
                                                    t = q_130;
                                                    t = o_145(t);
                                                    j_60 = t;
                                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, j_60);
                                                    f_32 = t;
                                                    t = SSLsetAnnotations(f_32, h_60);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm r_60 = NULL,y_60 = NULL,g_32 = NULL;
                                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                                    {
                                                      q_130 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(p_130);
                                                  r_60 = t;
                                                  t = q_130;
                                                  t = o_145(t);
                                                  y_60 = t;
                                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, y_60);
                                                  g_32 = t;
                                                  t = SSLsetAnnotations(g_32, r_60);
                                                }
                                            }
                                        }
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
ATerm dynrule_targs_1_0 (ATerm x_145 (ATerm), ATerm t)
{
  ATerm r_131 = NULL,s_131 = NULL,v_131 = NULL;
  ATerm d_61 = t;
  int h_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_UndefineDynRule_2))
        {
          r_131 = ATgetArgument(t, 0);
          {
            ATerm m_61 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_61);
      t = r_131;
      if(match_cons(t, sym_DynRuleId_1))
        {
          s_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_131;
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm n_61 = ATgetArgument(t, 0);
          ATerm o_61 = ATgetArgument(t, 1);
          v_131 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_131;
    }
  else
    {
      t = d_61;
      {
        ATerm s_61 = t;
        int t_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SetDynRule_2))
              {
                r_131 = ATgetArgument(t, 0);
                {
                  ATerm u_61 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(t_61);
            t = r_131;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_131 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_131;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm w_61 = ATgetArgument(t, 0);
                ATerm y_61 = ATgetArgument(t, 1);
                v_131 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = v_131;
          }
        else
          {
            t = s_61;
            if(match_cons(t, sym_AddDynRule_2))
              {
                r_131 = ATgetArgument(t, 0);
                {
                  ATerm z_61 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            t = r_131;
            if(match_cons(t, sym_DynRuleId_1))
              {
                s_131 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = s_131;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm b_62 = ATgetArgument(t, 0);
                ATerm e_62 = ATgetArgument(t, 1);
                v_131 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = v_131;
          }
      }
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm l_132 = NULL;
  ATerm h_62 = t;
  int i_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_132 = ATgetArgument(t, 0);
          {
            ATerm k_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_62);
      t = l_132;
    }
  else
    {
      t = h_62;
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
static ATerm a_17 (ATerm t)
{
  ATerm r_132 = NULL;
  ATerm l_62 = t;
  int m_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_132 = ATgetArgument(t, 0);
          {
            ATerm n_62 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_62);
      t = r_132;
    }
  else
    {
      t = l_62;
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
ATerm Bind8_0_0 (ATerm t)
{
  ATerm g_132 = NULL;
  ATerm o_62 = t;
  int s_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm t_62 = ATgetArgument(t, 0);
          ATerm u_62 = ATgetArgument(t, 1);
          g_132 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(s_62);
      t = g_132;
      t = map_1_0(z_16, t);
    }
  else
    {
      t = o_62;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm c_63 = ATgetArgument(t, 0);
          ATerm e_63 = ATgetArgument(t, 1);
          g_132 = ATgetArgument(t, 2);
          {
            ATerm l_63 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = g_132;
      t = map_1_0(a_17, t);
    }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm t_133 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_133);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm m_63 = t;
  int n_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_63);
    }
  else
    {
      t = m_63;
      {
        ATerm o_63 = t;
        int p_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_63);
          }
        else
          {
            t = o_63;
            {
              ATerm q_63 = t;
              int r_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_133 = NULL,w_133 = NULL,x_133 = NULL,y_133 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_133 = ATgetArgument(t, 0);
                      w_133 = ATgetArgument(t, 1);
                      x_133 = ATgetArgument(t, 2);
                      y_133 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_133;
                  t = map_1_0(d_17, t);
                  LocalPopChoice(r_63);
                }
              else
                {
                  t = q_63;
                  {
                    ATerm s_63 = t;
                    int t_63 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(t_63);
                      }
                    else
                      {
                        t = s_63;
                        t = dynrule_targs_1_0(e_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm f_134 = NULL;
  ATerm u_63 = t;
  int w_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_134 = ATgetArgument(t, 0);
          {
            ATerm y_63 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_63);
      t = f_134;
    }
  else
    {
      t = u_63;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_134;
    }
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = map_1_0(f_17, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm k_134 = NULL;
  ATerm a_64 = t;
  int b_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_134 = ATgetArgument(t, 0);
          {
            ATerm j_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_64);
      t = k_134;
    }
  else
    {
      t = a_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_134;
    }
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm o_134 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_134);
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm k_64 = t;
  int l_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_64);
    }
  else
    {
      t = k_64;
      {
        ATerm n_64 = t;
        int o_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(o_64);
          }
        else
          {
            t = n_64;
            {
              ATerm s_64 = t;
              int t_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_134 = NULL,r_134 = NULL,s_134 = NULL,t_134 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_134 = ATgetArgument(t, 0);
                      r_134 = ATgetArgument(t, 1);
                      s_134 = ATgetArgument(t, 2);
                      t_134 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_134;
                  t = map_1_0(i_17, t);
                  LocalPopChoice(t_64);
                }
              else
                {
                  t = s_64;
                  {
                    ATerm u_64 = t;
                    int v_64 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(v_64);
                      }
                    else
                      {
                        t = u_64;
                        t = dynrule_targs_1_0(j_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm a_135 = NULL;
  ATerm w_64 = t;
  int x_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_135 = ATgetArgument(t, 0);
          {
            ATerm z_64 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_64);
      t = a_135;
    }
  else
    {
      t = w_64;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_135;
    }
  return(t);
}
static ATerm j_17 (ATerm t)
{
  t = map_1_0(k_17, t);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm f_135 = NULL;
  ATerm b_65 = t;
  int e_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_135 = ATgetArgument(t, 0);
          {
            ATerm g_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_65);
      t = f_135;
    }
  else
    {
      t = b_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_135;
    }
  return(t);
}
static ATerm l_17 (ATerm t)
{
  ATerm j_135 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_135);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm j_65 = t;
  int v_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_65);
    }
  else
    {
      t = j_65;
      {
        ATerm w_65 = t;
        int x_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm l_135 = NULL,m_135 = NULL,n_135 = NULL,o_135 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_135 = ATgetArgument(t, 0);
                      m_135 = ATgetArgument(t, 1);
                      n_135 = ATgetArgument(t, 2);
                      o_135 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_135;
                  t = map_1_0(n_17, t);
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
                        t = Bind8_0_0(t);
                        LocalPopChoice(b_66);
                      }
                    else
                      {
                        t = a_66;
                        t = dynrule_targs_1_0(o_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm v_135 = NULL;
  ATerm d_66 = t;
  int f_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_135 = ATgetArgument(t, 0);
          {
            ATerm g_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_66);
      t = v_135;
    }
  else
    {
      t = d_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_135;
    }
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = map_1_0(p_17, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm b_136 = NULL;
  ATerm h_66 = t;
  int i_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_136 = ATgetArgument(t, 0);
          {
            ATerm k_66 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_66);
      t = b_136;
    }
  else
    {
      t = h_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_136;
    }
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm f_136 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_136 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_136);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm l_66 = t;
  int m_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_66);
    }
  else
    {
      t = l_66;
      {
        ATerm n_66 = t;
        int q_66 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_66);
          }
        else
          {
            t = n_66;
            {
              ATerm s_66 = t;
              int u_66 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_136 = NULL,i_136 = NULL,j_136 = NULL,k_136 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_136 = ATgetArgument(t, 0);
                      i_136 = ATgetArgument(t, 1);
                      j_136 = ATgetArgument(t, 2);
                      k_136 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_136;
                  t = map_1_0(s_17, t);
                  LocalPopChoice(u_66);
                }
              else
                {
                  t = s_66;
                  {
                    ATerm v_66 = t;
                    int w_66 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_66);
                      }
                    else
                      {
                        t = v_66;
                        t = dynrule_targs_1_0(t_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm r_136 = NULL;
  ATerm x_66 = t;
  int a_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_136 = ATgetArgument(t, 0);
          {
            ATerm b_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_67);
      t = r_136;
    }
  else
    {
      t = x_66;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_136;
    }
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = map_1_0(u_17, t);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm w_136 = NULL;
  ATerm c_67 = t;
  int g_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_136 = ATgetArgument(t, 0);
          {
            ATerm k_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_67);
      t = w_136;
    }
  else
    {
      t = c_67;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_136;
    }
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm a_137 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_137 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_137);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm n_67 = t;
  int o_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_67);
    }
  else
    {
      t = n_67;
      {
        ATerm q_67 = t;
        int r_67 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_67);
          }
        else
          {
            t = q_67;
            {
              ATerm s_67 = t;
              int u_67 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_137 = NULL,d_137 = NULL,e_137 = NULL,f_137 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_137 = ATgetArgument(t, 0);
                      d_137 = ATgetArgument(t, 1);
                      e_137 = ATgetArgument(t, 2);
                      f_137 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = e_137;
                  t = map_1_0(y_17, t);
                  LocalPopChoice(u_67);
                }
              else
                {
                  t = s_67;
                  {
                    ATerm v_67 = t;
                    int w_67 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(w_67);
                      }
                    else
                      {
                        t = v_67;
                        t = dynrule_targs_1_0(z_17, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm m_137 = NULL;
  ATerm x_67 = t;
  int y_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_137 = ATgetArgument(t, 0);
          {
            ATerm z_67 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_67);
      t = m_137;
    }
  else
    {
      t = x_67;
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
static ATerm z_17 (ATerm t)
{
  t = map_1_0(a_18, t);
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm r_137 = NULL;
  ATerm a_68 = t;
  int c_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_137 = ATgetArgument(t, 0);
          {
            ATerm d_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_68);
      t = r_137;
    }
  else
    {
      t = a_68;
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
ATerm Bind4_0_0 (ATerm t)
{
  ATerm r_133 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      r_133 = ATgetArgument(t, 0);
      t = r_133;
      t = free_vars_3_0(b_17, c_17, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          r_133 = ATgetArgument(t, 0);
          t = r_133;
          t = free_vars_3_0(g_17, h_17, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              r_133 = ATgetArgument(t, 0);
              t = r_133;
              t = free_vars_3_0(l_17, m_17, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  r_133 = ATgetArgument(t, 0);
                  t = r_133;
                  t = free_vars_3_0(q_17, r_17, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      r_133 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_133;
                  t = free_vars_3_0(v_17, w_17, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm g_138 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_138);
  return(t);
}
static ATerm c_18 (ATerm t)
{
  ATerm i_68 = t;
  int m_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_68);
    }
  else
    {
      t = i_68;
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
              int q_68 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_138 = NULL,j_138 = NULL,k_138 = NULL,l_138 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_138 = ATgetArgument(t, 0);
                      j_138 = ATgetArgument(t, 1);
                      k_138 = ATgetArgument(t, 2);
                      l_138 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_138;
                  t = map_1_0(d_18, t);
                  LocalPopChoice(q_68);
                }
              else
                {
                  t = p_68;
                  {
                    ATerm r_68 = t;
                    int v_68 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(v_68);
                      }
                    else
                      {
                        t = r_68;
                        t = dynrule_targs_1_0(e_18, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm z_138 = NULL;
  ATerm w_68 = t;
  int x_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_138 = ATgetArgument(t, 0);
          {
            ATerm y_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_68);
      t = z_138;
    }
  else
    {
      t = w_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_138 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_138;
    }
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = map_1_0(f_18, t);
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm e_139 = NULL;
  ATerm z_68 = t;
  int a_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_139 = ATgetArgument(t, 0);
          {
            ATerm c_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_69);
      t = e_139;
    }
  else
    {
      t = z_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_139 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_139;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm z_137 = NULL,d_138 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      d_138 = ATgetArgument(t, 0);
      t = d_138;
      if(match_cons(t, sym_Rule_3))
        {
          z_137 = ATgetArgument(t, 0);
          {
            ATerm d_69 = ATgetArgument(t, 1);
          }
          {
            ATerm f_69 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = z_137;
      t = free_vars_3_0(b_18, c_18, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          d_138 = ATgetArgument(t, 0);
          {
            ATerm g_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_138;
    }
  return(t);
}
static ATerm b_13 (ATerm g_124 (ATerm), ATerm u_30, ATerm t_30, ATerm t)
{
  static ATerm x_139 (ATerm t)
  {
    ATerm s_139 = NULL,t_139 = NULL,u_139 = NULL;
    s_139 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_139 = ATgetFirst((ATermList) t);
            u_139 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_69 = t;
          int m_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_139;
              {
                static ATerm g_18 (ATerm t)
                {
                  t = t_30;
                  return(t);
                }
                t = c_13(g_124, g_18, t_139, u_139, t);
              }
              t = x_139(t);
              LocalPopChoice(m_69);
            }
          else
            {
              t = h_69;
              {
                ATerm j_61 = NULL,p_61 = NULL,g_33 = NULL;
                t = SSLgetAnnotations(s_139);
                j_61 = t;
                t = u_139;
                t = x_139(t);
                p_61 = t;
                t = (ATerm) ATinsert(CheckATermList(p_61), t_139);
                g_33 = t;
                t = SSLsetAnnotations(g_33, j_61);
              }
            }
        }
      }
    return(t);
  }
  t = u_30;
  t = x_139(t);
  return(t);
}
static ATerm c_13 (ATerm j_124 (ATerm), ATerm k_124 (ATerm), ATerm y_30, ATerm x_30, ATerm t)
{
  t = k_124(t);
  {
    static ATerm h_18 (ATerm t)
    {
      ATerm b_140 = NULL;
      b_140 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_30, b_140);
      t = j_124(t);
      return(t);
    }
    t = fetch_1_0(h_18, t);
  }
  t = x_30;
  return(t);
}
static ATerm d_13 (ATerm b_124 (ATerm), ATerm s_30, ATerm r_30, ATerm t)
{
  static ATerm t_140 (ATerm t)
  {
    ATerm m_140 = NULL,n_140 = NULL,q_140 = NULL;
    m_140 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_140;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_140 = ATgetFirst((ATermList) t);
            q_140 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm n_69 = t;
          int o_69 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_140;
              {
                static ATerm i_18 (ATerm t)
                {
                  t = r_30;
                  return(t);
                }
                t = c_13(b_124, i_18, n_140, q_140, t);
              }
              t = t_140(t);
              LocalPopChoice(o_69);
            }
          else
            {
              t = n_69;
              {
                ATerm g_62 = NULL,j_62 = NULL,i_33 = NULL;
                t = SSLgetAnnotations(m_140);
                g_62 = t;
                t = q_140;
                t = t_140(t);
                j_62 = t;
                t = (ATerm) ATinsert(CheckATermList(j_62), n_140);
                i_33 = t;
                t = SSLsetAnnotations(i_33, g_62);
              }
            }
        }
      }
    return(t);
  }
  t = s_30;
  t = t_140(t);
  return(t);
}
ATerm genzip_4_0 (ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm), ATerm c_122 (ATerm), ATerm t)
{
  static ATerm b_141 (ATerm t)
  {
    ATerm p_69 = t;
    int q_69 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_121(t);
        LocalPopChoice(q_69);
      }
    else
      {
        t = p_69;
        {
          ATerm v_140 = NULL,w_140 = NULL,x_140 = NULL,y_140 = NULL,z_140 = NULL,a_141 = NULL,n_33 = NULL;
          t = a_122(t);
          a_141 = t;
          if(match_cons(t, sym__2))
            {
              w_140 = ATgetArgument(t, 0);
              x_140 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(a_141);
          v_140 = t;
          t = w_140;
          t = c_122(t);
          y_140 = t;
          t = x_140;
          t = b_141(t);
          z_140 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_140, z_140);
          n_33 = t;
          t = SSLsetAnnotations(n_33, v_140);
          t = b_122(t);
        }
      }
    return(t);
  }
  t = b_141(t);
  return(t);
}
static ATerm j_18 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_69 = ATgetArgument(t, 0);
      if(((ATgetType(r_69) != AT_LIST) || !(ATisEmpty(r_69))))
        _fail(t);
      {
        ATerm s_69 = ATgetArgument(t, 1);
        if(((ATgetType(s_69) != AT_LIST) || !(ATisEmpty(s_69))))
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
  ATerm i_141 = NULL,j_141 = NULL,k_141 = NULL,l_141 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_69 = ATgetArgument(t, 0);
      if(((ATgetType(w_69) == AT_LIST) && !(ATisEmpty(w_69))))
        {
          i_141 = ATgetFirst((ATermList) w_69);
          j_141 = (ATerm) ATgetNext((ATermList) w_69);
        }
      else
        _fail(t);
      {
        ATerm x_69 = ATgetArgument(t, 1);
        if(((ATgetType(x_69) == AT_LIST) && !(ATisEmpty(x_69))))
          {
            k_141 = ATgetFirst((ATermList) x_69);
            l_141 = (ATerm) ATgetNext((ATermList) x_69);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_141, k_141), (ATerm) ATmakeAppl(sym__2, j_141, l_141));
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm m_141 = NULL,n_141 = NULL;
  if(match_cons(t, sym__2))
    {
      m_141 = ATgetArgument(t, 0);
      n_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_141), m_141);
  return(t);
}
static ATerm i_13 (ATerm x_686, ATerm c_687, ATerm j_68, ATerm t)
{
  ATerm d_141 = NULL,e_141 = NULL,f_141 = NULL,g_141 = NULL;
  t = SSL_explode_term(c_687);
  if(match_cons(t, sym__2))
    {
      d_141 = ATgetArgument(t, 0);
      f_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(x_686);
  if(match_cons(t, sym__2))
    {
      if((d_141 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_141, f_141);
  t = genzip_4_0(j_18, k_18, l_18, _id, t);
  g_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_141, j_68);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm a_113 (ATerm), ATerm b_113 (ATerm), ATerm t)
{
  static ATerm p_141 (ATerm t)
  {
    ATerm c_70 = t;
    int d_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_113(t);
        LocalPopChoice(d_70);
      }
    else
      {
        t = c_70;
        t = b_113(t);
        t = p_141(t);
      }
    return(t);
  }
  t = p_141(t);
  return(t);
}
ATerm for_3_0 (ATerm d_113 (ATerm), ATerm e_113 (ATerm), ATerm f_113 (ATerm), ATerm t)
{
  t = d_113(t);
  t = while_not_2_0(e_113, f_113, t);
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm w_141 = NULL;
  w_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, w_141);
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm x_141 = NULL,y_141 = NULL,z_141 = NULL,a_142 = NULL,s_33 = NULL;
  a_142 = t;
  if(match_cons(t, sym__2))
    {
      y_141 = ATgetArgument(t, 0);
      z_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_142);
  x_141 = t;
  t = z_141;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_141, z_141);
  s_33 = t;
  t = SSLsetAnnotations(s_33, x_141);
  return(t);
}
static ATerm o_18 (ATerm t)
{
  ATerm t_142 = NULL,u_142 = NULL,v_142 = NULL,w_142 = NULL,x_142 = NULL;
  t_142 = t;
  if(match_cons(t, sym__2))
    {
      u_142 = ATgetArgument(t, 0);
      v_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_142;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_142 = ATgetFirst((ATermList) t);
      x_142 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_70 = t;
        int j_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_143(u_142, v_142, t_142, t);
            LocalPopChoice(j_70);
          }
        else
          {
            t = e_70;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_142), w_142), x_142);
          }
      }
    }
  else
    {
      t = l_143(u_142, v_142, t_142, t);
    }
  return(t);
}
static ATerm l_143 (ATerm b_142, ATerm c_142, ATerm d_142, ATerm t)
{
  ATerm e_142 = NULL,h_142 = NULL,w_33 = NULL,k_142 = NULL,l_142 = NULL,m_142 = NULL,n_142 = NULL;
  t = SSLgetAnnotations(d_142);
  e_142 = t;
  t = c_142;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_142 = ATgetFirst((ATermList) t);
      n_142 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_142;
  if(match_cons(t, sym__2))
    {
      l_142 = ATgetArgument(t, 0);
      m_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_70 = t;
    int n_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_142;
        if((l_142 != t))
          {
            _fail(t);
          }
        t = n_142;
        LocalPopChoice(n_70);
      }
    else
      {
        t = m_70;
        t = c_142;
        t = i_13(l_142, m_142, n_142, t);
      }
  }
  h_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_142, h_142);
  w_33 = t;
  t = SSLsetAnnotations(w_33, e_142);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm k_143 = NULL;
  if(match_cons(t, sym__2))
    {
      k_143 = ATgetArgument(t, 0);
      if((k_143 != ATgetArgument(t, 1)))
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
  ATerm q_70 = t;
  int r_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(m_18, n_18, o_18, t);
      LocalPopChoice(r_70);
    }
  else
    {
      t = q_70;
      {
        ATerm f_143 = NULL,g_143 = NULL,h_143 = NULL;
        f_143 = t;
        if(match_cons(t, sym__2))
          {
            g_143 = ATgetArgument(t, 0);
            h_143 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_143;
        t = d_13(p_18, g_143, h_143, t);
      }
    }
  return(t);
}
static ATerm r_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm x_62 = NULL,a_63 = NULL;
  if(match_cons(t, sym__2))
    {
      x_62 = ATgetArgument(t, 0);
      a_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13(u_18, x_62, a_63, t);
  return(t);
}
static ATerm u_18 (ATerm t)
{
  ATerm b_63 = NULL;
  if(match_cons(t, sym__2))
    {
      b_63 = ATgetArgument(t, 0);
      if((b_63 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm c_64 = NULL,e_64 = NULL;
  if(match_cons(t, sym__2))
    {
      c_64 = ATgetArgument(t, 0);
      e_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13(x_18, c_64, e_64, t);
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm f_64 = NULL;
  if(match_cons(t, sym__2))
    {
      f_64 = ATgetArgument(t, 0);
      if((f_64 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm b_143 (ATerm), ATerm c_143 (ATerm), ATerm d_143 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm z_143 (ATerm t)
  {
    ATerm s_70 = t;
    int t_70 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_143(t);
        LocalPopChoice(t_70);
      }
    else
      {
        t = s_70;
        {
          ATerm u_70 = t;
          int v_70 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_143 = NULL,o_143 = NULL,p_62 = NULL,q_62 = NULL;
              n_143 = t;
              t = c_143(t);
              o_143 = t;
              t = n_143;
              {
                static ATerm q_18 (ATerm t)
                {
                  ATerm q_143 = NULL;
                  t = z_143(t);
                  q_143 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_143, o_143);
                  t = diff_0_0(t);
                  return(t);
                }
                t = d_143(q_18, z_143, r_18, t);
              }
              q_62 = t;
              t = SSL_explode_term(q_62);
              if(match_cons(t, sym__2))
                {
                  ATerm w_70 = ATgetArgument(t, 0);
                  p_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_62;
              t = foldr_3_0(s_18, t_18, _id, t);
              LocalPopChoice(v_70);
            }
          else
            {
              t = u_70;
              {
                ATerm d_63 = NULL,v_63 = NULL;
                v_63 = t;
                t = SSL_explode_term(v_63);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_70 = ATgetArgument(t, 0);
                    d_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_63;
                t = foldr_3_0(v_18, w_18, z_143, t);
              }
            }
        }
      }
    return(t);
  }
  t = z_143(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm k_113 (ATerm), ATerm t)
{
  static ATerm y_18 (ATerm t)
  {
    t = bottomup_1_0(k_113, t);
    return(t);
  }
  t = SRTS_all(y_18, t);
  t = k_113(t);
  return(t);
}
static ATerm m_13 (ATerm q_61, ATerm r_61, ATerm t)
{
  ATerm a_144 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_61, r_61);
  t = f_14(q_61, r_61, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_144 = ATgetFirst((ATermList) t);
      {
        ATerm y_70 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_144;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm o_144 = NULL,p_144 = NULL;
  o_144 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_70 = t;
    int a_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_65 = NULL;
        t = term_c_71;
        f_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_c_71, o_144);
        t = m_13(f_65, o_144, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm d_71 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) d_71) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, p_144, (ATerm) ATempty);
        LocalPopChoice(a_71);
      }
    else
      {
        t = z_70;
        {
          ATerm c_66 = NULL;
          t = term_c_71;
          c_66 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_71, o_144);
          t = m_13(c_66, o_144, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm e_71 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_71) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, p_144, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm b_115 (ATerm), ATerm t)
{
  static ATerm u_144 (ATerm t)
  {
    ATerm f_71 = t;
    int g_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_115(t);
        LocalPopChoice(g_71);
      }
    else
      {
        t = f_71;
        t = SRTS_all(u_144, t);
      }
    return(t);
  }
  t = u_144(t);
  return(t);
}
static ATerm n_13 (ATerm e_133 (ATerm), ATerm w_44, ATerm u_44, ATerm t)
{
  ATerm v_144 = NULL,w_144 = NULL,x_144 = NULL,y_144 = NULL,z_144 = NULL,a_145 = NULL,b_145 = NULL,c_145 = NULL;
  y_144 = t;
  t = e_133(t);
  v_144 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_144, w_44, u_44);
  t = g_14(v_144, w_44, u_44, t);
  {
    ATerm l_71 = t;
    int m_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_145 = NULL;
        t = term_n_71;
        d_145 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_144, term_n_71);
        t = f_14(v_144, d_145, t);
        LocalPopChoice(m_71);
      }
    else
      {
        t = l_71;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_144 = ATgetFirst((ATermList) t);
      x_144 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_144, term_n_71, (ATerm) ATinsert(CheckATermList(x_144), (ATerm) ATinsert(CheckATermList(w_144), w_44)));
  t = lookup_table_0_1(v_144, t);
  c_145 = t;
  t = term_n_71;
  z_144 = t;
  t = (ATerm) ATinsert(CheckATermList(x_144), (ATerm) ATinsert(CheckATermList(w_144), w_44));
  a_145 = t;
  t = c_145;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_14(z_144, a_145, b_145, t);
  t = y_144;
  return(t);
}
static ATerm b_19 (ATerm t)
{
  t = term_c_71;
  return(t);
}
static ATerm e_19 (ATerm t)
{
  t = term_c_71;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm h_145 = NULL,j_145 = NULL,k_145 = NULL,l_145 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      j_145 = ATgetArgument(t, 0);
      k_145 = ATgetArgument(t, 1);
      h_145 = ATgetArgument(t, 2);
      {
        ATerm r_145 = NULL,s_145 = NULL;
        t = k_145;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, j_145);
        r_145 = t;
        t = term_q_71;
        s_145 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_145), term_q_71);
        t = n_13(b_19, r_145, s_145, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, j_145, (ATerm)ATempty, h_145);
      }
    }
  else
    {
      ATerm v_145 = NULL,w_145 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          j_145 = ATgetArgument(t, 0);
          k_145 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_145;
      if(match_cons(t, sym_ConstType_1))
        {
          l_145 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, j_145);
      v_145 = t;
      t = term_s_71;
      w_145 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, j_145), term_s_71);
      t = n_13(e_19, v_145, w_145, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, j_145, (ATerm) ATmakeAppl(sym_ConstType_1, l_145));
    }
  return(t);
}
static ATerm o_13 (ATerm k_61, ATerm l_61, ATerm t)
{
  ATerm b_146 = NULL,c_146 = NULL;
  c_146 = t;
  {
    ATerm t_71 = t;
    int v_71 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_61, l_61);
        t = f_14(k_61, l_61, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_71 = ATgetFirst((ATermList) t);
            b_146 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_71);
        {
          ATerm d_146 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, k_61, l_61, b_146);
          t = lookup_table_0_1(k_61, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              d_146 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_14(l_61, b_146, d_146, t);
          t = (ATerm) ATmakeAppl(sym__3, k_61, l_61, b_146);
        }
      }
    else
      {
        t = t_71;
        {
          ATerm f_146 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, k_61, l_61);
          t = lookup_table_0_1(k_61, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              f_146 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_14(l_61, f_146, t);
          t = (ATerm) ATmakeAppl(sym__2, k_61, l_61);
        }
      }
  }
  t = c_146;
  return(t);
}
ATerm end_scope_1_0 (ATerm b_133 (ATerm), ATerm t)
{
  ATerm h_146 = NULL,i_146 = NULL,n_146 = NULL,t_146 = NULL,v_146 = NULL,w_146 = NULL,x_146 = NULL;
  t_146 = t;
  t = b_133(t);
  n_146 = t;
  {
    ATerm z_71 = t;
    int a_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_146 = NULL;
        t = term_n_71;
        y_146 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_146, term_n_71);
        t = f_14(n_146, y_146, t);
        LocalPopChoice(a_72);
      }
    else
      {
        t = z_71;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_146 = ATgetFirst((ATermList) t);
      h_146 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_146, term_n_71, h_146);
  t = lookup_table_0_1(n_146, t);
  x_146 = t;
  t = term_n_71;
  v_146 = t;
  t = x_146;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_14(v_146, h_146, w_146, t);
  t = i_146;
  {
    static ATerm f_19 (ATerm t)
    {
      ATerm z_146 = NULL;
      z_146 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_146, z_146);
      t = o_13(n_146, z_146, t);
      return(t);
    }
    t = map_1_0(f_19, t);
  }
  t = t_146;
  return(t);
}
ATerm restore_always_2_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm t)
{
  ATerm b_72 = t;
  int c_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_112(t);
      t = g_112(t);
      LocalPopChoice(c_72);
    }
  else
    {
      t = b_72;
      t = g_112(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_133 (ATerm), ATerm t)
{
  ATerm b_147 = NULL,c_147 = NULL,d_147 = NULL,e_147 = NULL,f_147 = NULL,g_147 = NULL,h_147 = NULL;
  c_147 = t;
  t = a_133(t);
  b_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_147, term_n_71);
  {
    ATerm d_72 = t;
    int e_72 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_147 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_72 = ATgetArgument(t, 0);
            ATerm h_72 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_n_71;
        l_147 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_147, term_n_71);
        t = f_14(b_147, l_147, t);
        LocalPopChoice(e_72);
      }
    else
      {
        t = d_72;
        t = (ATerm) ATempty;
      }
  }
  d_147 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_147, term_n_71, (ATerm) ATinsert(CheckATermList(d_147), (ATerm) ATempty));
  t = lookup_table_0_1(b_147, t);
  h_147 = t;
  t = term_n_71;
  e_147 = t;
  t = (ATerm) ATinsert(CheckATermList(d_147), (ATerm) ATempty);
  f_147 = t;
  t = h_147;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_147 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_14(e_147, f_147, g_147, t);
  t = c_147;
  return(t);
}
ATerm scope_2_0 (ATerm c_133 (ATerm), ATerm d_133 (ATerm), ATerm t)
{
  static ATerm h_19 (ATerm t)
  {
    t = end_scope_1_0(c_133, t);
    return(t);
  }
  t = begin_scope_1_0(c_133, t);
  t = restore_always_2_0(d_133, h_19, t);
  return(t);
}
static ATerm i_19 (ATerm t)
{
  t = term_c_71;
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm r_147 = NULL,s_147 = NULL,t_147 = NULL,u_147 = NULL,d_34 = NULL;
  u_147 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_147 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_147);
  r_147 = t;
  t = s_147;
  t = map_1_0(n_19, t);
  t_147 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_147);
  d_34 = t;
  t = SSLsetAnnotations(d_34, r_147);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm n_19 (ATerm t)
{
  ATerm h_148 = NULL,i_148 = NULL;
  i_148 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      h_148 = ATgetArgument(t, 0);
      {
        ATerm i_72 = t;
        int k_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_66 = NULL,r_66 = NULL,b_34 = NULL;
            t = SSLgetAnnotations(i_148);
            p_66 = t;
            t = h_148;
            t = map_1_0(o_19, t);
            r_66 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, r_66);
            b_34 = t;
            t = SSLsetAnnotations(b_34, p_66);
            LocalPopChoice(k_72);
          }
        else
          {
            t = i_72;
            t = i_148;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          h_148 = ATgetArgument(t, 0);
          {
            ATerm l_72 = t;
            int m_72 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_67 = NULL,l_67 = NULL,c_34 = NULL;
                t = SSLgetAnnotations(i_148);
                d_67 = t;
                t = h_148;
                t = map_1_0(t_19, t);
                l_67 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, l_67);
                c_34 = t;
                t = SSLsetAnnotations(c_34, d_67);
                LocalPopChoice(m_72);
              }
            else
              {
                t = l_72;
                t = i_148;
              }
          }
        }
      else
        {
          t = i_148;
        }
    }
  return(t);
}
static ATerm o_19 (ATerm t)
{
  ATerm n_72 = t;
  int o_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(o_72);
    }
  else
    {
      t = n_72;
    }
  return(t);
}
static ATerm t_19 (ATerm t)
{
  ATerm p_72 = t;
  int q_72 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(q_72);
    }
  else
    {
      t = p_72;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(i_19, m_19, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_148 = NULL,r_148 = NULL,s_148 = NULL;
  q_148 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_148;
    }
  else
    {
      static ATerm w_19 (ATerm t)
      {
        t = not_null(s_148);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_148 = ATgetFirst((ATermList) t);
          if(((s_148 != NULL) && (s_148 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            s_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_148;
      t = at_end_1_0(w_19, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm y_127 (ATerm), ATerm t)
{
  ATerm i_149 = NULL,j_149 = NULL,k_149 = NULL;
  i_149 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_149;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_149 = ATgetFirst((ATermList) t);
          k_149 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_72 = t;
        int t_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_68 = NULL,g_68 = NULL,h_68 = NULL,t_34 = NULL;
            t = SSLgetAnnotations(i_149);
            b_68 = t;
            t = j_149;
            t = y_127(t);
            g_68 = t;
            t = k_149;
            t = filter_1_0(y_127, t);
            h_68 = t;
            t = (ATerm) ATinsert(CheckATermList(h_68), g_68);
            t_34 = t;
            t = SSLsetAnnotations(t_34, b_68);
            LocalPopChoice(t_72);
          }
        else
          {
            t = r_72;
            t = k_149;
            t = filter_1_0(y_127, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm m_120 (ATerm), ATerm t)
{
  static ATerm a_150 (ATerm t)
  {
    ATerm x_149 = NULL,y_149 = NULL,z_149 = NULL;
    z_149 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_149 = ATgetFirst((ATermList) t);
        y_149 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_69 = NULL,e_69 = NULL,z_34 = NULL;
          t = SSLgetAnnotations(z_149);
          b_69 = t;
          t = y_149;
          t = a_150(t);
          e_69 = t;
          t = (ATerm) ATinsert(CheckATermList(e_69), x_149);
          z_34 = t;
          t = SSLsetAnnotations(z_34, b_69);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_149;
        t = m_120(t);
      }
    return(t);
  }
  t = a_150(t);
  return(t);
}
static ATerm m_150 (ATerm e_150, ATerm t)
{
  ATerm f_150 = NULL;
  t = SSL_explode_term(e_150);
  if(match_cons(t, sym__2))
    {
      ATerm u_72 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_72) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_150;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_150 = NULL,i_150 = NULL,j_150 = NULL;
  j_150 = t;
  if(match_cons(t, sym__2))
    {
      h_150 = ATgetArgument(t, 0);
      i_150 = ATgetArgument(t, 1);
      {
        ATerm w_72 = t;
        int x_72 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm a_20 (ATerm t)
            {
              t = i_150;
              return(t);
            }
            t = h_150;
            t = at_end_1_0(a_20, t);
            LocalPopChoice(x_72);
          }
        else
          {
            t = w_72;
            t = m_150(j_150, t);
          }
      }
    }
  else
    {
      t = m_150(j_150, t);
    }
  return(t);
}
static ATerm r_13 (ATerm e_35, ATerm r_34, ATerm t)
{
  ATerm n_150 = NULL,o_150 = NULL;
  static ATerm b_20 (ATerm t)
  {
    ATerm p_150 = NULL,q_150 = NULL,r_150 = NULL,s_150 = NULL;
    s_150 = t;
    t = SSL_explode_term(s_150);
    if(match_cons(t, sym__2))
      {
        if(((n_150 != NULL) && (n_150 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          n_150 = ATgetArgument(t, 0);
        {
          ATerm y_72 = ATgetArgument(t, 1);
          if(((ATgetType(y_72) == AT_LIST) && !(ATisEmpty(y_72))))
            {
              p_150 = ATgetFirst((ATermList) y_72);
              {
                ATerm z_72 = (ATerm) ATgetNext((ATermList) y_72);
                if(((ATgetType(z_72) != AT_LIST) || !(ATisEmpty(z_72))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, p_150, not_null(o_150));
    t = conc_0_0(t);
    q_150 = t;
    t = (ATerm) ATinsert(ATempty, q_150);
    r_150 = t;
    t = SSL_mkterm(n_150, r_150);
    return(t);
  }
  t = SSL_explode_term(e_35);
  if(match_cons(t, sym__2))
    {
      if(((n_150 != NULL) && (n_150 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_150 = ATgetArgument(t, 0);
      {
        ATerm a_73 = ATgetArgument(t, 1);
        if(((ATgetType(a_73) == AT_LIST) && !(ATisEmpty(a_73))))
          {
            if(((o_150 != NULL) && (o_150 != ATgetFirst((ATermList) a_73))))
              _fail(ATgetFirst((ATermList) a_73));
            else
              o_150 = ATgetFirst((ATermList) a_73);
            {
              ATerm b_73 = (ATerm) ATgetNext((ATermList) a_73);
              if(((ATgetType(b_73) != AT_LIST) || !(ATisEmpty(b_73))))
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
  t = fetch_1_0(b_20, t);
  return(t);
}
ATerm foldr_3_0 (ATerm w_126 (ATerm), ATerm x_126 (ATerm), ATerm y_126 (ATerm), ATerm t)
{
  ATerm u_150 = NULL,v_150 = NULL,w_150 = NULL;
  u_150 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_150;
      t = w_126(t);
    }
  else
    {
      ATerm z_150 = NULL,a_151 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_150 = ATgetFirst((ATermList) t);
          w_150 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_150;
      t = y_126(t);
      z_150 = t;
      t = w_150;
      t = foldr_3_0(w_126, x_126, y_126, t);
      a_151 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_150, a_151);
      t = x_126(t);
    }
  return(t);
}
static ATerm e_20 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_73), term_d_73), term_c_73);
  return(t);
}
static ATerm g_20 (ATerm t)
{
  ATerm h_151 = NULL,i_151 = NULL;
  if(match_cons(t, sym__2))
    {
      h_151 = ATgetArgument(t, 0);
      i_151 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_13(h_151, i_151, t);
  return(t);
}
static ATerm h_20 (ATerm t)
{
  ATerm j_151 = NULL,k_151 = NULL;
  k_151 = t;
  if(match_cons(t, sym_Signature_1))
    {
      j_151 = ATgetArgument(t, 0);
      {
        ATerm i_73 = t;
        int j_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_151 = NULL;
            t = j_151;
            t = filter_1_0(i_20, t);
            t = concat_0_0(t);
            m_151 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, m_151);
            LocalPopChoice(j_73);
          }
        else
          {
            t = i_73;
            t = k_151;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          j_151 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, j_151);
        }
      else
        {
          t = k_151;
        }
    }
  return(t);
}
static ATerm i_20 (ATerm t)
{
  ATerm n_151 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      n_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_151;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm d_151 = NULL,e_151 = NULL,f_151 = NULL,g_151 = NULL,b_35 = NULL;
  g_151 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_151);
  d_151 = t;
  t = e_151;
  t = foldr_3_0(e_20, g_20, h_20, t);
  f_151 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_151);
  b_35 = t;
  t = SSLsetAnnotations(b_35, d_151);
  return(t);
}
static ATerm l_20 (ATerm t)
{
  ATerm k_73 = t;
  int o_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(o_73);
    }
  else
    {
      t = k_73;
    }
  return(t);
}
static ATerm q_20 (ATerm t)
{
  ATerm j_152 = NULL,k_152 = NULL,l_152 = NULL,m_152 = NULL,n_152 = NULL;
  n_152 = t;
  if(match_cons(t, sym_LRule_1))
    {
      m_152 = ATgetArgument(t, 0);
      t = m_152;
      if(match_cons(t, sym_Rule_3))
        {
          j_152 = ATgetArgument(t, 0);
          k_152 = ATgetArgument(t, 1);
          l_152 = ATgetArgument(t, 2);
          {
            ATerm p_73 = t;
            int q_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_152 = NULL;
                t = j_152;
                t = free_vars_3_0(s_20, t_20, tboundin_3_0, t);
                r_152 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, r_152, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, j_152, k_152, l_152)));
                LocalPopChoice(q_73);
              }
            else
              {
                t = p_73;
                t = n_152;
              }
          }
        }
      else
        {
          t = n_152;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          m_152 = ATgetArgument(t, 0);
          {
            ATerm r_73 = t;
            int s_73 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_153 = NULL;
                t = m_152;
                t = free_vars_3_0(b_21, c_21, tboundin_3_0, t);
                p_153 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, p_153, m_152);
                LocalPopChoice(s_73);
              }
            else
              {
                t = r_73;
                t = n_152;
              }
          }
        }
      else
        {
          t = n_152;
        }
    }
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm s_152 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_152);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm t_73 = t;
  int u_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_73);
    }
  else
    {
      t = t_73;
      {
        ATerm v_73 = t;
        int z_73 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(z_73);
          }
        else
          {
            t = v_73;
            {
              ATerm a_74 = t;
              int b_74 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_152 = NULL,v_152 = NULL,w_152 = NULL,x_152 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_152 = ATgetArgument(t, 0);
                      v_152 = ATgetArgument(t, 1);
                      w_152 = ATgetArgument(t, 2);
                      x_152 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_152;
                  t = map_1_0(v_20, t);
                  LocalPopChoice(b_74);
                }
              else
                {
                  t = a_74;
                  {
                    ATerm c_74 = t;
                    int d_74 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(d_74);
                      }
                    else
                      {
                        t = c_74;
                        t = dynrule_targs_1_0(y_20, t);
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
  ATerm e_153 = NULL;
  ATerm e_74 = t;
  int f_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_153 = ATgetArgument(t, 0);
          {
            ATerm g_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_74);
      t = e_153;
    }
  else
    {
      t = e_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_153;
    }
  return(t);
}
static ATerm y_20 (ATerm t)
{
  t = map_1_0(a_21, t);
  return(t);
}
static ATerm a_21 (ATerm t)
{
  ATerm j_153 = NULL;
  ATerm h_74 = t;
  int i_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_153 = ATgetArgument(t, 0);
          {
            ATerm j_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_74);
      t = j_153;
    }
  else
    {
      t = h_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_153 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_153;
    }
  return(t);
}
static ATerm b_21 (ATerm t)
{
  ATerm q_153 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_153);
  return(t);
}
static ATerm c_21 (ATerm t)
{
  ATerm k_74 = t;
  int l_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
            t = Bind4_0_0(t);
            LocalPopChoice(n_74);
          }
        else
          {
            t = m_74;
            {
              ATerm o_74 = t;
              int p_74 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_153 = NULL,t_153 = NULL,u_153 = NULL,v_153 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      s_153 = ATgetArgument(t, 0);
                      t_153 = ATgetArgument(t, 1);
                      u_153 = ATgetArgument(t, 2);
                      v_153 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_153;
                  t = map_1_0(d_21, t);
                  LocalPopChoice(p_74);
                }
              else
                {
                  t = o_74;
                  {
                    ATerm q_74 = t;
                    int r_74 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bind8_0_0(t);
                        LocalPopChoice(r_74);
                      }
                    else
                      {
                        t = q_74;
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
static ATerm d_21 (ATerm t)
{
  ATerm c_154 = NULL;
  ATerm s_74 = t;
  int t_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_154 = ATgetArgument(t, 0);
          {
            ATerm u_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_74);
      t = c_154;
    }
  else
    {
      t = s_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_154;
    }
  return(t);
}
static ATerm i_21 (ATerm t)
{
  t = map_1_0(k_21, t);
  return(t);
}
static ATerm k_21 (ATerm t)
{
  ATerm h_154 = NULL;
  ATerm v_74 = t;
  int w_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_154 = ATgetArgument(t, 0);
          {
            ATerm x_74 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_74);
      t = h_154;
    }
  else
    {
      t = v_74;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_154 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_154;
    }
  return(t);
}
static ATerm l_21 (ATerm t)
{
  ATerm y_74 = t;
  int z_74 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(z_74);
    }
  else
    {
      t = y_74;
    }
  return(t);
}
static ATerm m_21 (ATerm t)
{
  ATerm r_154 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      r_154 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, r_154)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm d_152 = NULL,e_152 = NULL,f_152 = NULL,g_152 = NULL,d_35 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(l_20, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(q_20, t);
  {
    ATerm a_75 = t;
    int b_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_154 = NULL,n_154 = NULL,o_154 = NULL;
        m_154 = t;
        t = term_c_75;
        n_154 = t;
        t = term_d_75;
        o_154 = t;
        t = term_e_75;
        t = f_14(n_154, o_154, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = m_154;
        LocalPopChoice(b_75);
        t = LiftDynamicRules_0_0(t);
      }
    else
      {
        t = a_75;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(l_21, t);
  g_152 = t;
  if(match_cons(t, sym_Specification_1))
    {
      e_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_152);
  d_152 = t;
  t = e_152;
  t = fetch_1_0(m_21, t);
  f_152 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, f_152);
  d_35 = t;
  t = SSLsetAnnotations(d_35, d_152);
  return(t);
}
static ATerm s_13 (ATerm m_40, ATerm n_40, ATerm t)
{
  ATerm s_154 = NULL;
  t = SSL_fputc(m_40, n_40);
  s_154 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_154);
  return(t);
}
static ATerm t_13 (ATerm q_24, ATerm r_24, ATerm t)
{
  ATerm t_154 = NULL;
  t = SSL_write_term_to_stream_text(q_24, r_24);
  t_154 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_154);
  return(t);
}
static ATerm v_13 (ATerm m_119 (ATerm), ATerm e_186, ATerm w_24, ATerm t)
{
  ATerm u_154 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, e_186, term_f_75);
  t = z_13(t);
  u_154 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_154, w_24);
  t = m_119(t);
  t = fclose_0_0(t);
  t = w_24;
  return(t);
}
static ATerm u_13 (ATerm m_24, ATerm n_24, ATerm t)
{
  ATerm v_154 = NULL;
  t = SSL_write_term_to_stream_baf(m_24, n_24);
  v_154 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_154);
  return(t);
}
static ATerm n_21 (ATerm t)
{
  ATerm c_155 = NULL,d_155 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_75 = ATgetArgument(t, 0);
      if(match_cons(g_75, sym_Stream_1))
        {
          c_155 = ATgetArgument(g_75, 0);
        }
      else
        _fail(t);
      d_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_13(c_155, d_155, t);
  return(t);
}
static ATerm u_21 (ATerm t)
{
  ATerm e_155 = NULL,f_155 = NULL,g_155 = NULL,h_155 = NULL,i_155 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_75 = ATgetArgument(t, 0);
      if(match_cons(h_75, sym_Stream_1))
        {
          h_155 = ATgetArgument(h_75, 0);
        }
      else
        _fail(t);
      i_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_13(h_155, i_155, t);
  e_155 = t;
  t = term_x_32;
  f_155 = t;
  t = e_155;
  if(match_cons(t, sym_Stream_1))
    {
      g_155 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_x_32, e_155);
  t = s_13(f_155, g_155, t);
  return(t);
}
ATerm output_1_0 (ATerm v_138 (ATerm), ATerm t)
{
  ATerm w_154 = NULL,x_154 = NULL;
  t = v_138(t);
  x_154 = t;
  {
    ATerm i_75 = t;
    int j_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_154 = NULL,z_154 = NULL;
        t = term_c_75;
        y_154 = t;
        t = term_k_75;
        z_154 = t;
        t = term_l_75;
        t = f_14(y_154, z_154, t);
        LocalPopChoice(j_75);
      }
    else
      {
        t = i_75;
        t = term_m_75;
      }
  }
  w_154 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_154, x_154);
  {
    ATerm n_75 = t;
    int o_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_155 = NULL,b_155 = NULL;
        t = term_c_75;
        a_155 = t;
        t = term_p_75;
        b_155 = t;
        t = term_q_75;
        t = f_14(a_155, b_155, t);
        t = (ATerm) ATmakeAppl(sym__2, w_154, x_154);
        LocalPopChoice(o_75);
        if(match_cons(t, sym__2))
          {
            ATerm r_75 = ATgetArgument(t, 0);
            ATerm s_75 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_13(n_21, w_154, x_154, t);
      }
    else
      {
        t = n_75;
        if(match_cons(t, sym__2))
          {
            ATerm t_75 = ATgetArgument(t, 0);
            ATerm u_75 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_13(u_21, w_154, x_154, t);
      }
  }
  return(t);
}
static ATerm w_155 (ATerm q_155, ATerm t)
{
  t = SSL_fclose(q_155);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_155 = NULL,u_155 = NULL;
  u_155 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_155 = ATgetArgument(t, 0);
      {
        ATerm v_75 = t;
        int w_75 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_155);
            LocalPopChoice(w_75);
          }
        else
          {
            t = v_75;
            t = w_155(u_155, t);
          }
      }
    }
  else
    {
      t = w_155(u_155, t);
    }
  return(t);
}
static ATerm w_13 (ATerm s_24, ATerm t)
{
  t = SSL_read_term_from_stream(s_24);
  return(t);
}
static ATerm x_13 (ATerm f_39, ATerm g_39, ATerm t)
{
  t = SSL_strcat(f_39, g_39);
  return(t);
}
static ATerm y_13 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm x_155 = NULL;
  t = SSL_fopen(o_40, p_40);
  x_155 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_155);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_155 = NULL;
  t = SSL_stdin_stream();
  y_155 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_155);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_155 = NULL;
  t = SSL_stdout_stream();
  z_155 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_155);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_156 = NULL;
  t = SSL_stderr_stream();
  a_156 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_156);
  return(t);
}
static ATerm h_157 (ATerm g_156, ATerm t)
{
  ATerm h_156 = NULL;
  t = SSL_explode_term(g_156);
  if(match_cons(t, sym__2))
    {
      ATerm x_75 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_75) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_75 = ATgetArgument(t, 1);
        if(((ATgetType(y_75) == AT_LIST) && !(ATisEmpty(y_75))))
          {
            h_156 = ATgetFirst((ATermList) y_75);
            {
              ATerm z_75 = (ATerm) ATgetNext((ATermList) y_75);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_156;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_156;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_156;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_156;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_157 (ATerm k_156, ATerm l_156, ATerm m_156, ATerm t)
{
  ATerm n_156 = NULL,o_156 = NULL,p_156 = NULL,s_156 = NULL,g_35 = NULL;
  t = SSLgetAnnotations(m_156);
  p_156 = t;
  t = k_156;
  if(match_cons(t, sym_Path_1))
    {
      s_156 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_156, l_156);
  g_35 = t;
  t = SSLsetAnnotations(g_35, p_156);
  if(match_cons(t, sym__2))
    {
      n_156 = ATgetArgument(t, 0);
      o_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_13(n_156, o_156, t);
  return(t);
}
static ATerm j_157 (ATerm u_156, ATerm v_156, ATerm w_156, ATerm t)
{
  ATerm x_156 = NULL,y_156 = NULL,z_156 = NULL,c_157 = NULL,h_35 = NULL;
  t = SSLgetAnnotations(w_156);
  z_156 = t;
  t = SSL_is_string(u_156);
  c_157 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_157, v_156);
  h_35 = t;
  t = SSLsetAnnotations(h_35, z_156);
  if(match_cons(t, sym__2))
    {
      x_156 = ATgetArgument(t, 0);
      y_156 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_13(x_156, y_156, t);
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm e_157 = NULL,f_157 = NULL,g_157 = NULL;
  e_157 = t;
  if(match_cons(t, sym__2))
    {
      f_157 = ATgetArgument(t, 0);
      g_157 = ATgetArgument(t, 1);
      {
        ATerm a_76 = t;
        int b_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_157(e_157, t);
            LocalPopChoice(b_76);
          }
        else
          {
            t = a_76;
            {
              ATerm c_76 = t;
              int d_76 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_157(f_157, g_157, e_157, t);
                  LocalPopChoice(d_76);
                }
              else
                {
                  t = c_76;
                  t = j_157(f_157, g_157, e_157, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_157(e_157, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_157 = NULL,m_157 = NULL,n_157 = NULL,s_157 = NULL;
  s_157 = t;
  {
    ATerm e_76 = t;
    int f_76 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_157, term_g_76);
        t = z_13(t);
        LocalPopChoice(f_76);
      }
    else
      {
        t = e_76;
        {
          ATerm h_70 = NULL,i_70 = NULL;
          t = term_h_76;
          i_70 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_76, s_157);
          t = x_13(i_70, s_157, t);
          h_70 = t;
          t = SSL_perror(h_70);
          _fail(t);
        }
      }
  }
  m_157 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_157 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_13(n_157, t);
  l_157 = t;
  t = m_157;
  t = fclose_0_0(t);
  t = l_157;
  return(t);
}
ATerm input_1_0 (ATerm w_138 (ATerm), ATerm t)
{
  ATerm i_76 = t;
  int j_76 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_157 = NULL,w_157 = NULL;
      t = term_c_75;
      v_157 = t;
      t = term_k_76;
      w_157 = t;
      t = term_l_76;
      t = f_14(v_157, w_157, t);
      LocalPopChoice(j_76);
    }
  else
    {
      t = i_76;
      t = term_m_76;
    }
  t = ReadFromFile_0_0(t);
  t = w_138(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm x_157 = NULL,y_157 = NULL,z_157 = NULL,a_158 = NULL,b_158 = NULL;
  x_157 = t;
  t = term_n_76;
  t = whoami_0_0(t);
  y_157 = t;
  t = term_c_43;
  a_158 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_76), y_157), term_o_76);
  b_158 = t;
  t = SSL_printnl(a_158, b_158);
  t = term_e_43;
  z_157 = t;
  t = SSL_exit(z_157);
  t = x_157;
  return(t);
}
static ATerm b_22 (ATerm t)
{
  ATerm d_158 = NULL;
  d_158 = t;
  if(match_string(t, "-k"))
    {
      t = d_158;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = d_158;
    }
  return(t);
}
static ATerm c_22 (ATerm t)
{
  ATerm e_158 = NULL,f_158 = NULL,g_158 = NULL;
  e_158 = t;
  t = SSL_string_to_int(e_158);
  f_158 = t;
  t = term_q_76;
  g_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_76, f_158);
  t = i_14(g_158, f_158, t);
  t = e_158;
  return(t);
}
static ATerm e_22 (ATerm t)
{
  t = term_r_76;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_22, c_22, e_22, t);
  return(t);
}
static ATerm g_22 (ATerm t)
{
  ATerm i_158 = NULL;
  i_158 = t;
  if(match_string(t, "-S"))
    {
      t = i_158;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = i_158;
    }
  return(t);
}
static ATerm n_22 (ATerm t)
{
  ATerm j_158 = NULL,k_158 = NULL;
  t = term_s_76;
  j_158 = t;
  t = term_k_45;
  k_158 = t;
  t = term_t_76;
  t = i_14(j_158, k_158, t);
  t = term_u_76;
  return(t);
}
static ATerm o_22 (ATerm t)
{
  t = term_v_76;
  return(t);
}
static ATerm p_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_22 (ATerm t)
{
  ATerm l_158 = NULL,m_158 = NULL,n_158 = NULL;
  l_158 = t;
  t = SSL_string_to_int(l_158);
  m_158 = t;
  t = term_s_76;
  n_158 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_76, m_158);
  t = i_14(n_158, m_158, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_158);
  return(t);
}
static ATerm r_22 (ATerm t)
{
  t = term_w_76;
  return(t);
}
static ATerm s_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_22 (ATerm t)
{
  ATerm o_158 = NULL,p_158 = NULL;
  t = term_x_76;
  o_158 = t;
  t = term_n_76;
  p_158 = t;
  t = term_y_76;
  t = i_14(o_158, p_158, t);
  t = term_z_76;
  return(t);
}
static ATerm z_22 (ATerm t)
{
  t = term_a_77;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_77 = t;
  int c_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_22, n_22, o_22, t);
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
            t = ArgOption_3_0(p_22, q_22, r_22, t);
            LocalPopChoice(e_77);
          }
        else
          {
            t = d_77;
            t = Option_3_0(s_22, t_22, z_22, t);
          }
      }
    }
  return(t);
}
static ATerm i_14 (ATerm k_56, ATerm l_56, ATerm t)
{
  ATerm q_158 = NULL,r_158 = NULL;
  t = term_c_75;
  q_158 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_75, k_56, l_56);
  t = lookup_table_0_1(q_158, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_158 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_14(k_56, l_56, r_158, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_75, k_56, l_56);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_158 = NULL,w_158 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_158 = NULL,y_158 = NULL,z_158 = NULL;
      t = term_n_76;
      t = j_0(t);
      x_158 = t;
      t = term_f_77;
      y_158 = t;
      t = term_g_77;
      z_158 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_77, term_g_77, x_158);
      t = g_14(y_158, z_158, x_158, t);
      _fail(t);
    }
  else
    {
      ATerm c_159 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_158 = ATgetFirst((ATermList) t);
          w_158 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_158;
      t = d_0(t);
      t = term_n_76;
      t = g_0(t);
      c_159 = t;
      t = (ATerm) ATinsert(CheckATermList(w_158), c_159);
    }
  return(t);
}
static ATerm g_23 (ATerm t)
{
  ATerm e_159 = NULL;
  e_159 = t;
  if(match_string(t, "-o"))
    {
      t = e_159;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_159;
    }
  return(t);
}
static ATerm h_23 (ATerm t)
{
  ATerm f_159 = NULL,g_159 = NULL;
  f_159 = t;
  t = term_k_75;
  g_159 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_75, f_159);
  t = i_14(g_159, f_159, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_159);
  return(t);
}
static ATerm i_23 (ATerm t)
{
  t = term_h_77;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_23, h_23, i_23, t);
  return(t);
}
static ATerm j_23 (ATerm t)
{
  ATerm i_159 = NULL;
  i_159 = t;
  if(match_string(t, "-i"))
    {
      t = i_159;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_159;
    }
  return(t);
}
static ATerm k_23 (ATerm t)
{
  ATerm j_159 = NULL,k_159 = NULL;
  j_159 = t;
  t = term_k_76;
  k_159 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_76, j_159);
  t = i_14(k_159, j_159, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_159);
  return(t);
}
static ATerm l_23 (ATerm t)
{
  t = term_i_77;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_23, k_23, l_23, t);
  return(t);
}
static ATerm g_14 (ATerm f_61, ATerm g_61, ATerm e_61, ATerm t)
{
  ATerm m_159 = NULL,n_159 = NULL,o_159 = NULL,p_159 = NULL,q_159 = NULL;
  m_159 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_61, g_61);
  {
    ATerm j_77 = t;
    int k_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_77 = ATgetArgument(t, 0);
            ATerm m_77 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, f_61, g_61);
        t = f_14(f_61, g_61, t);
        LocalPopChoice(k_77);
      }
    else
      {
        t = j_77;
        t = (ATerm) ATempty;
      }
  }
  n_159 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_61, g_61, (ATerm) ATinsert(CheckATermList(n_159), e_61));
  t = lookup_table_0_1(f_61, t);
  q_159 = t;
  t = (ATerm) ATinsert(CheckATermList(n_159), e_61);
  o_159 = t;
  t = q_159;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_159 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_14(g_61, o_159, p_159, t);
  t = m_159;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm v_0 (ATerm), ATerm t)
{
  ATerm x_159 = NULL,y_159 = NULL,z_159 = NULL,a_160 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_160 = NULL,c_160 = NULL,d_160 = NULL;
      t = term_n_76;
      t = v_0(t);
      b_160 = t;
      t = term_f_77;
      c_160 = t;
      t = term_g_77;
      d_160 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_77, term_g_77, b_160);
      t = g_14(c_160, d_160, b_160, t);
      _fail(t);
    }
  else
    {
      ATerm h_160 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_159 = ATgetFirst((ATermList) t);
          y_159 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_159;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_159 = ATgetFirst((ATermList) t);
          a_160 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_159;
      t = p_0(t);
      t = z_159;
      t = r_0(t);
      h_160 = t;
      t = (ATerm) ATinsert(CheckATermList(a_160), h_160);
    }
  return(t);
}
static ATerm m_23 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_23 (ATerm t)
{
  ATerm j_160 = NULL,k_160 = NULL;
  j_160 = t;
  if(match_string(t, "old"))
    {
      t = j_160;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = j_160;
    }
  t = term_d_75;
  k_160 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_75, j_160);
  t = i_14(k_160, j_160, t);
  t = term_n_76;
  return(t);
}
static ATerm r_23 (ATerm t)
{
  t = term_n_77;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_23, q_23, r_23, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_160 = NULL,n_160 = NULL,o_160 = NULL,p_160 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_76;
  t = whoami_0_0(t);
  m_160 = t;
  t = term_c_43;
  o_160 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_77), m_160);
  p_160 = t;
  t = SSL_printnl(o_160, p_160);
  t = term_e_43;
  n_160 = t;
  t = SSL_exit(n_160);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_160 = NULL,r_160 = NULL;
  t = term_c_75;
  q_160 = t;
  t = term_p_77;
  r_160 = t;
  t = term_q_77;
  t = f_14(q_160, r_160, t);
  return(t);
}
static ATerm a_14 (ATerm i_43, ATerm j_43, ATerm t)
{
  ATerm r_77 = t;
  int s_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(i_43, j_43);
      LocalPopChoice(s_77);
    }
  else
    {
      t = r_77;
      t = SSL_addr(i_43, j_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_126 (ATerm), ATerm v_126 (ATerm), ATerm t)
{
  ATerm t_160 = NULL,u_160 = NULL,v_160 = NULL;
  t_160 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_160;
      t = u_126(t);
    }
  else
    {
      ATerm y_160 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_160 = ATgetFirst((ATermList) t);
          v_160 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_160;
      t = foldr_2_0(u_126, v_126, t);
      y_160 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_160, y_160);
      t = v_126(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm c_24 (ATerm t)
{
  t = term_k_45;
  return(t);
}
static ATerm h_24 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL;
  if(match_cons(t, sym__2))
    {
      o_70 = ATgetArgument(t, 0);
      p_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_14(o_70, p_70, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_161 = NULL,k_70 = NULL,l_70 = NULL;
  t = times_0_0(t);
  l_70 = t;
  t = SSL_explode_term(l_70);
  if(match_cons(t, sym__2))
    {
      ATerm t_77 = ATgetArgument(t, 0);
      k_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_70;
  t = foldr_2_0(c_24, h_24, t);
  b_161 = t;
  t = SSL_TicksToSeconds(b_161);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_161 = NULL,n_161 = NULL,o_161 = NULL;
  m_161 = t;
  if(match_cons(t, sym__2))
    {
      n_161 = ATgetArgument(t, 0);
      o_161 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_77 = t;
    int v_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_161;
        if((n_161 != t))
          {
            _fail(t);
          }
        t = m_161;
        LocalPopChoice(v_77);
      }
    else
      {
        t = u_77;
        t = (ATerm) ATmakeAppl(sym__2, n_161, o_161);
        {
          ATerm w_77 = t;
          int x_77 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_161, o_161);
              LocalPopChoice(x_77);
            }
          else
            {
              t = w_77;
              t = SSL_gtr(n_161, o_161);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_161, o_161);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_135 (ATerm), ATerm t)
{
  ATerm s_161 = NULL;
  s_161 = t;
  {
    ATerm y_77 = t;
    int z_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_161 = NULL,v_161 = NULL,w_161 = NULL;
        t = term_c_75;
        v_161 = t;
        t = term_s_76;
        w_161 = t;
        t = term_a_78;
        t = f_14(v_161, w_161, t);
        u_161 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_161, term_e_43);
        t = geq_0_0(t);
        t = s_161;
        t = w_135(t);
        LocalPopChoice(z_77);
      }
    else
      {
        t = y_77;
        t = s_161;
      }
  }
  return(t);
}
static ATerm i_24 (ATerm t)
{
  ATerm y_161 = NULL,z_161 = NULL,b_162 = NULL,c_162 = NULL;
  t = run_time_0_0(t);
  y_161 = t;
  t = term_n_76;
  t = whoami_0_0(t);
  z_161 = t;
  t = term_c_43;
  b_162 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_78), y_161), term_b_78), z_161);
  c_162 = t;
  t = SSL_printnl(b_162, c_162);
  t = (ATerm) ATmakeAppl(sym__2, term_c_43, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_78), y_161), term_b_78), z_161));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_24, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_162 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_45;
  d_162 = t;
  t = SSL_exit(d_162);
  return(t);
}
static ATerm j_24 (ATerm t)
{
  ATerm n_162 = NULL,o_162 = NULL;
  o_162 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_162;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_162 = ATgetArgument(t, 0);
          {
            ATerm b_71 = NULL,m_35 = NULL;
            t = SSLgetAnnotations(o_162);
            b_71 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_162);
            m_35 = t;
            t = SSLsetAnnotations(m_35, b_71);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_162;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm m_138 (ATerm), ATerm t)
{
  ATerm d_78 = t;
  int e_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_162 = NULL,h_162 = NULL;
      t = term_c_75;
      g_162 = t;
      t = term_f_78;
      h_162 = t;
      t = term_g_78;
      t = f_14(g_162, h_162, t);
      LocalPopChoice(e_78);
    }
  else
    {
      t = d_78;
      t = fetch_1_0(j_24, t);
    }
  t = m_138(t);
  return(t);
}
static ATerm j_14 (ATerm k_65, ATerm l_65, ATerm m_65, ATerm t)
{
  ATerm q_162 = NULL;
  t = SSL_hashtable_put(m_65, k_65, l_65);
  q_162 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_162);
  return(t);
}
ATerm lookup_table_0_1 (ATerm r_62, ATerm t)
{
  ATerm z_162 = NULL;
  t = table_hashtable_0_0(t);
  z_162 = t;
  {
    ATerm h_78 = t;
    int i_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_71 = NULL;
        t = z_162;
        if(match_cons(t, sym_Hashtable_1))
          {
            h_71 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_14(r_62, h_71, t);
        LocalPopChoice(i_78);
      }
    else
      {
        t = h_78;
        {
          ATerm p_71 = NULL;
          t = r_62;
          t = table_create_0_0(t);
          t = z_162;
          if(match_cons(t, sym_Hashtable_1))
            {
              p_71 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_14(r_62, p_71, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_65, ATerm t_65, ATerm t)
{
  ATerm c_163 = NULL;
  t = SSL_hashtable_create(s_65, t_65);
  c_163 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_163);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm d_163 = NULL,e_163 = NULL,f_163 = NULL,h_163 = NULL,i_163 = NULL;
  d_163 = t;
  t = term_j_78;
  h_163 = t;
  t = term_k_78;
  i_163 = t;
  t = d_163;
  t = new_hashtable_0_2(h_163, i_163, t);
  e_163 = t;
  t = d_163;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_14(d_163, e_163, f_163, t);
  t = d_163;
  return(t);
}
static ATerm c_14 (ATerm p_65, ATerm q_65, ATerm t)
{
  ATerm j_163 = NULL;
  t = SSL_hashtable_remove(q_65, p_65);
  j_163 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_163);
  return(t);
}
static ATerm d_14 (ATerm u_65, ATerm t)
{
  ATerm k_163 = NULL;
  t = SSL_hashtable_destroy(u_65);
  k_163 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, k_163);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm l_163 = NULL;
  t = SSL_table_hashtable();
  l_163 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_163);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm m_163 = NULL,n_163 = NULL,o_163 = NULL,p_163 = NULL;
  m_163 = t;
  t = table_hashtable_0_0(t);
  n_163 = t;
  t = lookup_table_0_1(m_163, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_14(p_163, t);
  t = n_163;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_163 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_14(m_163, o_163, t);
  t = m_163;
  return(t);
}
ATerm map_1_0 (ATerm v_119 (ATerm), ATerm t)
{
  static ATerm e_164 (ATerm t)
  {
    ATerm b_164 = NULL,c_164 = NULL,d_164 = NULL;
    b_164 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_164;
      }
    else
      {
        ATerm u_71 = NULL,x_71 = NULL,y_71 = NULL,q_35 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_164 = ATgetFirst((ATermList) t);
            d_164 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_164);
        u_71 = t;
        t = c_164;
        t = v_119(t);
        x_71 = t;
        t = d_164;
        t = e_164(t);
        y_71 = t;
        t = (ATerm) ATinsert(CheckATermList(y_71), x_71);
        q_35 = t;
        t = SSLsetAnnotations(q_35, u_71);
      }
    return(t);
  }
  t = e_164(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm h_164 = NULL,i_164 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_164 = ATgetFirst((ATermList) t);
      i_164 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_164 = NULL,n_164 = NULL;
        static ATerm o_24 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_164)), not_null(n_164));
          return(t);
        }
        t = i_164;
        t = o_0(t);
        if(((m_164 != NULL) && (m_164 != t)))
          _fail(t);
        else
          m_164 = t;
        t = h_164;
        t = l_0(t);
        if(((n_164 != NULL) && (n_164 != t)))
          _fail(t);
        else
          n_164 = t;
        t = i_164;
        t = reverse_acc_2_0(l_0, o_24, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_76;
      t = o_0(t);
    }
  return(t);
}
static ATerm v_24 (ATerm t)
{
  ATerm t_164 = NULL,u_164 = NULL,v_164 = NULL,t_35 = NULL;
  v_164 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_164 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_164);
  t_164 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_164);
  t_35 = t;
  t = SSLsetAnnotations(t_35, t_164);
  return(t);
}
static ATerm a_25 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_25 (ATerm t)
{
  ATerm x_164 = NULL;
  x_164 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_164), term_l_78);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_164 = NULL,q_164 = NULL;
  ATerm m_78 = t;
  int n_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_164 = NULL,s_164 = NULL;
      t = term_c_75;
      r_164 = t;
      t = term_p_77;
      s_164 = t;
      t = term_q_77;
      t = f_14(r_164, s_164, t);
      LocalPopChoice(n_78);
    }
  else
    {
      t = m_78;
      t = fetch_1_0(v_24, t);
    }
  t = term_o_78;
  t = echo_0_0(t);
  t = term_f_77;
  p_164 = t;
  t = term_g_77;
  q_164 = t;
  t = term_p_78;
  t = f_14(p_164, q_164, t);
  t = reverse_acc_2_0(_id, a_25, t);
  t = map_1_0(b_25, t);
  return(t);
}
ATerm fetch_1_0 (ATerm f_120 (ATerm), ATerm t)
{
  static ATerm u_165 (ATerm t)
  {
    ATerm r_165 = NULL,s_165 = NULL,t_165 = NULL;
    r_165 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_165 = ATgetFirst((ATermList) t);
        t_165 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm q_78 = t;
      int r_78 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_72 = NULL,j_72 = NULL,v_35 = NULL;
          t = SSLgetAnnotations(r_165);
          g_72 = t;
          t = s_165;
          t = f_120(t);
          j_72 = t;
          t = (ATerm) ATinsert(CheckATermList(t_165), j_72);
          v_35 = t;
          t = SSLsetAnnotations(v_35, g_72);
          LocalPopChoice(r_78);
        }
      else
        {
          t = q_78;
          {
            ATerm s_72 = NULL,v_72 = NULL,w_35 = NULL;
            t = SSLgetAnnotations(r_165);
            s_72 = t;
            t = t_165;
            t = u_165(t);
            v_72 = t;
            t = (ATerm) ATinsert(CheckATermList(v_72), s_165);
            w_35 = t;
            t = SSLsetAnnotations(w_35, s_72);
          }
        }
    }
    return(t);
  }
  t = u_165(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_165 = NULL,z_165 = NULL,a_166 = NULL;
  y_165 = t;
  {
    ATerm s_78 = t;
    int t_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_165;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_78 = ATgetFirst((ATermList) t);
                ATerm v_78 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_165;
          }
        LocalPopChoice(t_78);
      }
    else
      {
        t = s_78;
        t = (ATerm) ATinsert(ATempty, y_165);
      }
  }
  z_165 = t;
  t = term_m_75;
  a_166 = t;
  t = SSL_printnl(a_166, z_165);
  t = y_165;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm e_166 = NULL,f_166 = NULL;
  t = term_c_75;
  e_166 = t;
  t = term_p_77;
  f_166 = t;
  t = term_q_77;
  t = f_14(e_166, f_166, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_14 (ATerm n_65, ATerm o_65, ATerm t)
{
  t = SSL_hashtable_get(o_65, n_65);
  return(t);
}
static ATerm f_14 (ATerm y_62, ATerm z_62, ATerm t)
{
  ATerm g_166 = NULL;
  t = lookup_table_0_1(y_62, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_166 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_14(z_62, g_166, t);
  return(t);
}
static ATerm c_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_25 (ATerm t)
{
  ATerm i_166 = NULL,j_166 = NULL;
  t = term_w_78;
  i_166 = t;
  t = term_n_76;
  j_166 = t;
  t = term_x_78;
  t = i_14(i_166, j_166, t);
  return(t);
}
static ATerm e_25 (ATerm t)
{
  t = term_y_78;
  return(t);
}
static ATerm n_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_25 (ATerm t)
{
  ATerm k_166 = NULL,l_166 = NULL,m_166 = NULL,n_166 = NULL;
  t = term_w_78;
  m_166 = t;
  t = term_n_76;
  n_166 = t;
  t = term_x_78;
  t = i_14(m_166, n_166, t);
  t = term_z_78;
  k_166 = t;
  t = term_n_76;
  l_166 = t;
  t = term_a_79;
  t = i_14(k_166, l_166, t);
  t = term_b_79;
  return(t);
}
static ATerm p_25 (ATerm t)
{
  t = term_c_79;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_79 = t;
  int e_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_25, d_25, e_25, t);
      LocalPopChoice(e_79);
    }
  else
    {
      t = d_79;
      t = Option_3_0(n_25, o_25, p_25, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t)
{
  ATerm o_166 = NULL,p_166 = NULL,q_166 = NULL,r_166 = NULL,s_166 = NULL,t_166 = NULL,m_36 = NULL;
  t_166 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_166 = ATgetFirst((ATermList) t);
      q_166 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_166);
  o_166 = t;
  t = p_166;
  t = l_98(t);
  r_166 = t;
  t = q_166;
  t = m_98(t);
  s_166 = t;
  t = (ATerm) ATinsert(CheckATermList(s_166), r_166);
  m_36 = t;
  t = SSLsetAnnotations(m_36, o_166);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_140 (ATerm), ATerm t)
{
  ATerm y_166 = NULL,z_166 = NULL,a_167 = NULL,b_167 = NULL,d_167 = NULL,e_167 = NULL,o_36 = NULL;
  y_166 = t;
  {
    ATerm f_79 = t;
    int g_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_79;
        t = p_140(t);
        LocalPopChoice(g_79);
      }
    else
      {
        t = f_79;
      }
  }
  t = y_166;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_167 = ATgetFirst((ATermList) t);
      b_167 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_166);
  z_166 = t;
  t = term_p_77;
  e_167 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_77, a_167);
  t = i_14(e_167, a_167, t);
  t = b_167;
  {
    static ATerm o_167 (ATerm t)
    {
      ATerm i_79 = t;
      int j_79 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_79 = t;
          int l_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_167 = NULL;
              h_167 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_167;
              LocalPopChoice(l_79);
            }
          else
            {
              t = k_79;
              t = p_140(t);
              t = Cons_2_0(_id, o_167, t);
            }
          LocalPopChoice(j_79);
        }
      else
        {
          t = i_79;
          {
            ATerm k_167 = NULL,l_167 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_167 = ATgetFirst((ATermList) t);
                l_167 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_167), (ATerm) ATmakeAppl(sym_Undefined_1, k_167));
          }
        }
      return(t);
    }
    t = o_167(t);
  }
  d_167 = t;
  t = (ATerm) ATinsert(CheckATermList(d_167), (ATerm) ATmakeAppl(sym_Program_1, a_167));
  o_36 = t;
  t = SSLsetAnnotations(o_36, z_166);
  return(t);
}
static ATerm r_25 (ATerm t)
{
  ATerm b_168 = NULL;
  b_168 = t;
  if(match_string(t, "--help"))
    {
      t = b_168;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_168;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_168;
        }
    }
  return(t);
}
static ATerm s_25 (ATerm t)
{
  ATerm c_168 = NULL,d_168 = NULL;
  t = term_f_78;
  c_168 = t;
  t = term_n_76;
  d_168 = t;
  t = term_m_79;
  t = i_14(c_168, d_168, t);
  t = term_n_79;
  return(t);
}
static ATerm u_25 (ATerm t)
{
  t = term_o_79;
  return(t);
}
static ATerm v_25 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm o_140 (ATerm), ATerm t)
{
  ATerm t_167 = NULL,u_167 = NULL,v_167 = NULL,w_167 = NULL,x_167 = NULL,y_167 = NULL,z_167 = NULL,a_168 = NULL;
  v_167 = t;
  t = term_f_77;
  w_167 = t;
  t = term_p_79;
  t = lookup_table_0_1(w_167, t);
  a_168 = t;
  t = term_g_77;
  x_167 = t;
  t = (ATerm) ATempty;
  y_167 = t;
  t = a_168;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_167 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_14(x_167, y_167, z_167, t);
  t = v_167;
  {
    static ATerm q_25 (ATerm t)
    {
      ATerm q_79 = t;
      int r_79 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_140(t);
          LocalPopChoice(r_79);
        }
      else
        {
          t = q_79;
          {
            ATerm s_79 = t;
            int t_79 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_25, s_25, u_25, t);
                LocalPopChoice(t_79);
              }
            else
              {
                t = s_79;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_25, t);
  }
  {
    ATerm u_79 = t;
    int v_79 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_168 = NULL;
        o_168 = t;
        {
          ATerm w_79 = t;
          int x_79 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_73 = NULL;
              t = o_168;
              {
                ATerm y_79 = t;
                int z_79 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm g_73 = NULL,h_73 = NULL;
                    t = term_c_75;
                    g_73 = t;
                    t = term_f_78;
                    h_73 = t;
                    t = term_g_78;
                    t = f_14(g_73, h_73, t);
                    LocalPopChoice(z_79);
                  }
                else
                  {
                    t = y_79;
                    t = fetch_1_0(v_25, t);
                  }
              }
              t = o_168;
              t = default_system_usage_0_0(t);
              t = term_k_45;
              f_73 = t;
              t = SSL_exit(f_73);
              LocalPopChoice(x_79);
            }
          else
            {
              t = w_79;
              {
                ATerm l_73 = NULL,m_73 = NULL,n_73 = NULL;
                t = term_c_75;
                m_73 = t;
                t = term_w_78;
                n_73 = t;
                t = term_a_80;
                t = f_14(m_73, n_73, t);
                t = o_168;
                t = default_system_about_0_0(t);
                t = term_k_45;
                l_73 = t;
                t = SSL_exit(l_73);
              }
            }
        }
        LocalPopChoice(v_79);
      }
    else
      {
        t = u_79;
        {
          ATerm b_80 = t;
          int c_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_168 = NULL,q_168 = NULL,r_168 = NULL;
              static ATerm w_25 (ATerm t)
              {
                ATerm s_168 = NULL,t_168 = NULL,u_168 = NULL,q_36 = NULL;
                u_168 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_168 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_168);
                s_168 = t;
                t = t_168;
                if(((t_167 != NULL) && (t_167 != t)))
                  _fail(t);
                else
                  t_167 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_168);
                q_36 = t;
                t = SSLsetAnnotations(q_36, s_168);
                return(t);
              }
              t = fetch_1_0(w_25, t);
              t = term_c_43;
              q_168 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_167)), term_d_80);
              r_168 = t;
              t = SSL_printnl(q_168, r_168);
              t = (ATerm) ATmakeAppl(sym__2, term_c_43, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_167)), term_d_80));
              t = default_system_usage_0_0(t);
              t = term_e_43;
              p_168 = t;
              t = SSL_exit(p_168);
              LocalPopChoice(c_80);
            }
          else
            {
              t = b_80;
            }
        }
      }
  }
  u_167 = t;
  t = term_f_77;
  t = table_destroy_0_0(t);
  t = u_167;
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_138 (ATerm), ATerm p_138 (ATerm), ATerm q_138 (ATerm), ATerm r_138 (ATerm), ATerm t)
{
  ATerm z_168 = NULL,a_169 = NULL,b_169 = NULL,c_169 = NULL,d_169 = NULL;
  t = parse_options_1_0(o_138, t);
  z_168 = t;
  t = term_e_80;
  t = table_create_0_0(t);
  t = term_e_80;
  a_169 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_80, term_f_80, z_168);
  t = lookup_table_0_1(a_169, t);
  d_169 = t;
  t = term_f_80;
  b_169 = t;
  t = d_169;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_169 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_14(b_169, z_168, c_169, t);
  t = z_168;
  t = q_138(t);
  {
    ATerm g_80 = t;
    int h_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_138, t);
        LocalPopChoice(h_80);
      }
    else
      {
        t = g_80;
        {
          ATerm i_80 = t;
          int j_80 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_138(t);
              t = report_success_0_0(t);
              LocalPopChoice(j_80);
            }
          else
            {
              t = i_80;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm x_25 (ATerm t)
{
  ATerm k_80 = t;
  int l_80 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(l_80);
    }
  else
    {
      t = k_80;
      {
        ATerm m_80 = t;
        int n_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(n_80);
          }
        else
          {
            t = m_80;
            {
              ATerm o_80 = t;
              int p_80 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(p_80);
                }
              else
                {
                  t = o_80;
                  {
                    ATerm q_80 = t;
                    int r_80 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(z_25, a_26, d_26, t);
                        LocalPopChoice(r_80);
                      }
                    else
                      {
                        t = q_80;
                        {
                          ATerm s_80 = t;
                          int t_80 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(t_80);
                            }
                          else
                            {
                              t = s_80;
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
static ATerm y_25 (ATerm t)
{
  t = input_1_0(e_26, t);
  return(t);
}
static ATerm z_25 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_26 (ATerm t)
{
  ATerm f_169 = NULL,g_169 = NULL;
  t = term_p_75;
  f_169 = t;
  t = term_n_76;
  g_169 = t;
  t = term_u_80;
  t = i_14(f_169, g_169, t);
  t = term_v_80;
  return(t);
}
static ATerm d_26 (ATerm t)
{
  t = term_w_80;
  return(t);
}
static ATerm e_26 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_25, default_usage_0_0, _id, y_25, t);
  return(t);
}

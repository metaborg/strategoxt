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
Symbol sym_UndefineDynRuleNoCond_2;
Symbol sym_UndefineDynRule_3;
Symbol sym_SetDynRule_2;
Symbol sym_AddDynRule_2;
Symbol sym_LabeledDynRuleId_2;
Symbol sym_DynRuleId_1;
Symbol sym_LabeledDynRuleScopeId_2;
Symbol sym_DynRuleScopeId_1;
Symbol sym_DynRuleScope_2;
Symbol sym_AddScopeLabel_2;
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
  sym_UndefineDynRuleNoCond_2 = ATmakeSymbol("UndefineDynRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_UndefineDynRuleNoCond_2);
  sym_UndefineDynRule_3 = ATmakeSymbol("UndefineDynRule", 3, ATfalse);
  ATprotectSymbol(sym_UndefineDynRule_3);
  sym_SetDynRule_2 = ATmakeSymbol("SetDynRule", 2, ATfalse);
  ATprotectSymbol(sym_SetDynRule_2);
  sym_AddDynRule_2 = ATmakeSymbol("AddDynRule", 2, ATfalse);
  ATprotectSymbol(sym_AddDynRule_2);
  sym_LabeledDynRuleId_2 = ATmakeSymbol("LabeledDynRuleId", 2, ATfalse);
  ATprotectSymbol(sym_LabeledDynRuleId_2);
  sym_DynRuleId_1 = ATmakeSymbol("DynRuleId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleId_1);
  sym_LabeledDynRuleScopeId_2 = ATmakeSymbol("LabeledDynRuleScopeId", 2, ATfalse);
  ATprotectSymbol(sym_LabeledDynRuleScopeId_2);
  sym_DynRuleScopeId_1 = ATmakeSymbol("DynRuleScopeId", 1, ATfalse);
  ATprotectSymbol(sym_DynRuleScopeId_1);
  sym_DynRuleScope_2 = ATmakeSymbol("DynRuleScope", 2, ATfalse);
  ATprotectSymbol(sym_DynRuleScope_2);
  sym_AddScopeLabel_2 = ATmakeSymbol("AddScopeLabel", 2, ATfalse);
  ATprotectSymbol(sym_AddScopeLabel_2);
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
ATerm term_b_66;
ATerm term_a_66;
ATerm term_z_65;
ATerm term_i_65;
ATerm term_h_65;
ATerm term_g_65;
ATerm term_d_65;
ATerm term_s_64;
ATerm term_r_64;
ATerm term_q_64;
ATerm term_j_64;
ATerm term_e_64;
ATerm term_z_63;
ATerm term_y_63;
ATerm term_x_63;
ATerm term_w_63;
ATerm term_v_63;
ATerm term_u_63;
ATerm term_t_63;
ATerm term_m_63;
ATerm term_l_63;
ATerm term_i_63;
ATerm term_h_63;
ATerm term_c_63;
ATerm term_z_62;
ATerm term_y_62;
ATerm term_u_62;
ATerm term_t_62;
ATerm term_s_62;
ATerm term_f_62;
ATerm term_e_62;
ATerm term_d_62;
ATerm term_c_62;
ATerm term_x_61;
ATerm term_w_61;
ATerm term_v_61;
ATerm term_u_61;
ATerm term_p_61;
ATerm term_o_61;
ATerm term_n_61;
ATerm term_m_61;
ATerm term_l_61;
ATerm term_k_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_g_61;
ATerm term_e_61;
ATerm term_d_61;
ATerm term_b_61;
ATerm term_a_61;
ATerm term_z_60;
ATerm term_y_60;
ATerm term_u_60;
ATerm term_s_60;
ATerm term_r_60;
ATerm term_n_60;
ATerm term_m_60;
ATerm term_g_59;
ATerm term_e_59;
ATerm term_b_59;
ATerm term_a_59;
ATerm term_y_58;
ATerm term_i_58;
ATerm term_f_58;
ATerm term_d_58;
ATerm term_c_58;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_t_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_h_53;
ATerm term_z_48;
ATerm term_y_48;
ATerm term_u_45;
ATerm term_t_45;
ATerm term_o_45;
ATerm term_n_45;
ATerm term_d_44;
ATerm term_c_44;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_s_39;
ATerm term_l_38;
ATerm term_h_38;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_k_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_c_36;
ATerm term_a_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_v_35;
ATerm term_t_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_k_35;
ATerm term_h_35;
ATerm term_b_35;
ATerm term_a_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_w_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_x_30;
ATerm term_n_30;
ATerm term_q_29;
ATerm term_j_29;
ATerm term_e_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_f_27;
ATerm term_b_27;
ATerm term_z_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_b_26;
ATerm term_y_25;
ATerm term_v_25;
ATerm term_q_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_j_23;
ATerm term_h_23;
ATerm term_f_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Op_2, term_f_22, (ATerm) ATempty);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_22);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_23);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_20);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Op_2, term_t_24, (ATerm) ATempty);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_25);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_24);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(sym_Call_2, term_o_25, (ATerm) ATempty);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_26);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Call_2, term_b_27, (ATerm) ATempty);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Call_2, term_s_24, (ATerm) ATempty);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_29);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_w_34));
  term_w_34 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_34);
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_RootApp_1, term_j_20);
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_b_35));
  term_b_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_35);
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_b_35);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_35);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_35);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_35);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_35);
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_36);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_36);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_l_38));
  term_l_38 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol("SplitDynamicRule/(1,0) input: ", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Closure", 0, ATtrue));
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("fetch-elem", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_41);
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeAppl(ATmakeSymbol("closures", 0, ATtrue));
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym_Var_1, term_f_42);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("lookup-rule", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_42);
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(sym_Build_1, term_j_23);
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-ruleset", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_43);
  ATprotect(&(term_c_44));
  term_c_44 = (ATerm) ATmakeAppl(ATmakeSymbol("add-to-ruleset", 0, ATtrue));
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_44);
  ATprotect(&(term_n_45));
  term_n_45 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_45);
  ATprotect(&(term_t_45));
  term_t_45 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_u_45));
  term_u_45 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_45);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("rule-scope", 0, ATtrue));
  ATprotect(&(term_z_48));
  term_z_48 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_48);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(sym_Defined_1, term_p_53);
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_53);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("label-scope", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_57);
  ATprotect(&(term_c_58));
  term_c_58 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_58));
  term_d_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(sym__2, term_c_58, term_d_58);
  ATprotect(&(term_i_58));
  term_i_58 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(sym__2, term_c_58, term_y_58);
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(sym__2, term_c_58, term_e_59);
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(sym__2, term_c_58, term_r_60);
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_60));
  term_y_60 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_z_60));
  term_z_60 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_61));
  term_b_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_61));
  term_d_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_e_61));
  term_e_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(sym__2, term_e_61, term_g_61);
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_61);
  ATprotect(&(term_k_61));
  term_k_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_61));
  term_l_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_61));
  term_m_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(sym__2, term_m_61, term_y_60);
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(sym__2, term_c_58, term_e_62);
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(sym__2, term_c_58, term_e_61);
  ATprotect(&(term_t_62));
  term_t_62 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(sym__2, term_c_58, term_y_62);
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_h_63));
  term_h_63 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_i_63));
  term_i_63 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(sym__2, term_u_61, term_v_61);
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_63));
  term_u_63 = (ATerm) ATmakeAppl(sym__2, term_t_63, term_y_60);
  ATprotect(&(term_v_63));
  term_v_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_63));
  term_w_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_63));
  term_x_63 = (ATerm) ATmakeAppl(sym__2, term_w_63, term_y_60);
  ATprotect(&(term_y_63));
  term_y_63 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_64));
  term_e_64 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_64));
  term_j_64 = (ATerm) ATmakeAppl(sym__2, term_y_62, term_y_60);
  ATprotect(&(term_q_64));
  term_q_64 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_64));
  term_r_64 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_64));
  term_s_64 = (ATerm) ATmakeAppl(sym__3, term_u_61, term_v_61, (ATerm) ATempty);
  ATprotect(&(term_d_65));
  term_d_65 = (ATerm) ATmakeAppl(sym__2, term_c_58, term_t_63);
  ATprotect(&(term_g_65));
  term_g_65 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_65));
  term_h_65 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_65));
  term_i_65 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_65));
  term_z_65 = (ATerm) ATmakeAppl(sym__2, term_e_59, term_y_60);
  ATprotect(&(term_a_66));
  term_a_66 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_66));
  term_b_66 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm z_103 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm g_10 (ATerm e_136 (ATerm), ATerm f_76, ATerm d_76, ATerm e_76, ATerm i_76, ATerm g_76, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm e_136 (ATerm), ATerm t);
static ATerm b_18 (ATerm g_12, ATerm j_12, ATerm t);
static ATerm c_18 (ATerm a_13, ATerm b_13, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm y_134 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm i_10 (ATerm w_66, ATerm x_66, ATerm y_66, ATerm t);
static ATerm r_29 (ATerm d_29, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm j_10 (ATerm j_62, ATerm k_62, ATerm l_62, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm k_10 (ATerm d_136 (ATerm), ATerm m_75, ATerm j_75, ATerm k_75, ATerm t_75, ATerm x_75, ATerm y_75, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm f_136 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm m_10 (ATerm m_76, ATerm l_76, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm x_59 (ATerm f_59, ATerm t);
static ATerm a_60 (ATerm o_59, ATerm t);
static ATerm b_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm n_65 (ATerm x_62, ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm dummify_0_0 (ATerm t);
ATerm debug_1_0 (ATerm a_110 (ATerm), ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm v_10 (ATerm l_136 (ATerm), ATerm v_79, ATerm s_79, ATerm t_79, ATerm f_80, ATerm j_80, ATerm k_80, ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm l_136 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm d_105 (ATerm), ATerm t);
static ATerm t_8 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm i_136 (ATerm), ATerm t);
static ATerm v_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm x_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm y_10 (ATerm n_78, ATerm m_78, ATerm t);
ATerm repeat_2_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm v_111 (ATerm), ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm t);
static ATerm p_10 (ATerm t);
static ATerm i_11 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm m_11 (ATerm t);
static ATerm d_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm p_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm v_12 (ATerm t);
static ATerm w_12 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm h_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm d_11 (ATerm w_114 (ATerm), ATerm m_30, ATerm l_30, ATerm t);
static ATerm e_11 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm q_30, ATerm p_30, ATerm t);
static ATerm f_11 (ATerm r_114 (ATerm), ATerm k_30, ATerm j_30, ATerm t);
ATerm genzip_4_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t);
static ATerm o_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm s_14 (ATerm t);
static ATerm k_11 (ATerm h_645, ATerm m_645, ATerm j_61, ATerm t);
ATerm while_not_2_0 (ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm t);
ATerm for_3_0 (ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm v_14 (ATerm t);
static ATerm v_113 (ATerm k_112, ATerm l_112, ATerm m_112, ATerm t);
static ATerm y_14 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm k_15 (ATerm t);
ATerm free_vars_3_0 (ATerm g_133 (ATerm), ATerm h_133 (ATerm), ATerm i_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm a_104 (ATerm), ATerm t);
static ATerm o_11 (ATerm d_55, ATerm e_55, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm r_105 (ATerm), ATerm t);
static ATerm p_11 (ATerm u_123 (ATerm), ATerm o_44, ATerm m_44, ATerm t);
static ATerm p_15 (ATerm t);
static ATerm w_15 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm q_11 (ATerm x_54, ATerm y_54, ATerm t);
ATerm end_scope_1_0 (ATerm r_123 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_123 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm s_123 (ATerm), ATerm t_123 (ATerm), ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm f_16 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_118 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm c_111 (ATerm), ATerm t);
static ATerm p_120 (ATerm h_120, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm t_11 (ATerm c_35, ATerm o_34, ATerm t);
ATerm foldr_3_0 (ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm u_11 (ATerm e_40, ATerm f_40, ATerm t);
static ATerm v_11 (ATerm i_24, ATerm j_24, ATerm t);
static ATerm x_11 (ATerm c_110 (ATerm), ATerm a_176, ATerm o_24, ATerm t);
static ATerm w_11 (ATerm e_24, ATerm f_24, ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
ATerm output_1_0 (ATerm a_129 (ATerm), ATerm t);
static ATerm a_127 (ATerm u_126, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_11 (ATerm k_24, ATerm t);
static ATerm z_11 (ATerm x_38, ATerm y_38, ATerm t);
static ATerm a_12 (ATerm g_40, ATerm h_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_128 (ATerm k_127, ATerm t);
static ATerm m_128 (ATerm o_127, ATerm p_127, ATerm q_127, ATerm t);
static ATerm n_128 (ATerm y_127, ATerm z_127, ATerm a_128, ATerm t);
static ATerm b_12 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm b_129 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_12 (ATerm x_49, ATerm y_49, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm i_12 (ATerm s_54, ATerm t_54, ATerm r_54, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm y_17 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_12 (ATerm a_43, ATerm b_43, ATerm t);
ATerm foldr_2_0 (ATerm k_117 (ATerm), ATerm l_117 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm f_18 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_126 (ATerm), ATerm t);
static ATerm g_18 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm h_18 (ATerm t);
ATerm need_help_1_0 (ATerm r_128 (ATerm), ATerm t);
static ATerm l_12 (ATerm k_58, ATerm l_58, ATerm m_58, ATerm t);
ATerm lookup_table_0_1 (ATerm e_56, ATerm t);
ATerm new_hashtable_0_2 (ATerm s_58, ATerm t_58, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm e_12 (ATerm p_58, ATerm q_58, ATerm t);
static ATerm f_12 (ATerm u_58, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_110 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm m_18 (ATerm t);
static ATerm r_18 (ATerm t);
static ATerm s_18 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_110 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm m_12 (ATerm n_58, ATerm o_58, ATerm t);
static ATerm h_12 (ATerm l_56, ATerm m_56, ATerm t);
static ATerm v_18 (ATerm t);
static ATerm x_18 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm c_19 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_89 (ATerm), ATerm f_89 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_130 (ATerm), ATerm t);
static ATerm l_19 (ATerm t);
static ATerm n_19 (ATerm t);
static ATerm s_19 (ATerm t);
static ATerm t_19 (ATerm t);
ATerm parse_options_1_0 (ATerm t_130 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm t);
static ATerm v_19 (ATerm t);
static ATerm w_19 (ATerm t);
static ATerm a_20 (ATerm t);
static ATerm f_20 (ATerm t);
static ATerm g_20 (ATerm t);
static ATerm h_20 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm q_0 = NULL,u_0 = NULL,x_0 = NULL,z_0 = NULL,a_1 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      z_0 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, z_0, a_1);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          z_0 = ATgetArgument(t, 0);
          t = z_0;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_0 = ATgetFirst((ATermList) t);
              u_0 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, q_0, (ATerm) ATmakeAppl(sym_LChoices_1, u_0));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_i_20;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              z_0 = ATgetArgument(t, 0);
              t = z_0;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_0 = ATgetFirst((ATermList) t);
                  u_0 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, q_0, (ATerm) ATmakeAppl(sym_Choices_1, u_0));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_i_20;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  z_0 = ATgetArgument(t, 0);
                  t = z_0;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_0 = ATgetFirst((ATermList) t);
                      u_0 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_0, (ATerm) ATmakeAppl(sym_Seqs_1, u_0));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_j_20;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      z_0 = ATgetArgument(t, 0);
                      a_1 = ATgetArgument(t, 1);
                      x_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, a_1, (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, x_0), z_0)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          z_0 = ATgetArgument(t, 0);
                          a_1 = ATgetArgument(t, 1);
                          x_0 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, x_0)), z_0), (ATerm) ATmakeAppl(sym_Build_1, a_1)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              z_0 = ATgetArgument(t, 0);
                              a_1 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_0, (ATerm) ATmakeAppl(sym_Match_1, a_1));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  z_0 = ATgetArgument(t, 0);
                                  a_1 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_0), a_1);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      z_0 = ATgetArgument(t, 0);
                                      a_1 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_1), z_0);
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
ATerm topdown_1_0 (ATerm z_103 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(z_103, t);
    return(t);
  }
  t = z_103(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm o_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_5);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm m_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_20);
    }
  else
    {
      t = m_20;
      {
        ATerm p_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_20);
          }
        else
          {
            t = p_20;
            {
              ATerm r_20 = t;
              int s_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL,u_5 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      q_5 = ATgetArgument(t, 0);
                      r_5 = ATgetArgument(t, 1);
                      s_5 = ATgetArgument(t, 2);
                      u_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_5;
                  t = map_1_0(m_0, t);
                  LocalPopChoice(s_20);
                }
              else
                {
                  t = r_20;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm c_6 = NULL;
  ATerm t_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_6 = ATgetArgument(t, 0);
          {
            ATerm x_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_20);
      t = c_6;
    }
  else
    {
      t = t_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_6;
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm g_6 = NULL;
  g_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, g_6);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm i_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_6);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm b_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_21);
          }
        else
          {
            t = b_21;
            {
              ATerm k_21 = t;
              int l_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_6 = ATgetArgument(t, 0);
                      n_6 = ATgetArgument(t, 1);
                      o_6 = ATgetArgument(t, 2);
                      p_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_6;
                  t = map_1_0(b_1, t);
                  LocalPopChoice(l_21);
                }
              else
                {
                  t = k_21;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm x_6 = NULL;
  ATerm r_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_6 = ATgetArgument(t, 0);
          {
            ATerm w_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_21);
      t = x_6;
    }
  else
    {
      t = r_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_6;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm h_7 = NULL;
  h_7 = t;
  {
    ATerm x_21 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_7 = NULL,b_0 = NULL,h_0 = NULL,c_3 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            x_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_7);
        b_0 = t;
        t = x_7;
        t = ContextVar_0_0(t);
        h_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, h_0);
        c_3 = t;
        t = SSLsetAnnotations(c_3, b_0);
        LocalPopChoice(e_22);
      }
    else
      {
        t = x_21;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, h_7);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  static ATerm m_8 (ATerm g_4, ATerm i_4, ATerm j_4, ATerm l_4, ATerm m_4, ATerm o_4, ATerm s_4, ATerm t)
  {
    ATerm z_4 = NULL,b_5 = NULL,c_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, m_4, term_g_22);
    {
      ATerm h_22 = t;
      if((PushChoice() == 0))
        {
          ATerm k_5 = NULL;
          if(match_cons(t, sym__2))
            {
              k_5 = ATgetArgument(t, 0);
              if((k_5 != ATgetArgument(t, 1)))
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
          t = h_22;
        }
    }
    t = new_0_0(t);
    z_4 = t;
    t = l_4;
    t = dummify_0_0(t);
    c_5 = t;
    {
      ATerm i_22 = t;
      int j_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_5;
          if((l_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, z_4);
          LocalPopChoice(j_22);
        }
      else
        {
          t = i_22;
          t = c_5;
        }
    }
    b_5 = t;
    t = c_5;
    t = free_vars_3_0(f_0, j_0, tboundin_3_0, t);
    t = map_1_0(s_0, t);
    g_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_4, o_4);
    t = free_vars_3_0(w_0, y_0, tboundin_3_0, t);
    t = filter_1_0(c_1, t);
    f_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_5, g_5);
    t = diff_0_0(t);
    h_5 = t;
    t = new_0_0(t);
    i_5 = t;
    t = g_4;
    t = v_0(t);
    j_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, j_5, (ATerm) ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(CheckATermList(h_5), (ATerm) ATmakeAppl(sym_Str_1, i_5)))), c_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_4, i_4, j_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, z_4), l_4), m_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_w_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_4)))), b_5), (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(CheckATermList(h_5), (ATerm) ATmakeAppl(sym_Str_1, i_5))))), o_4))));
    return(t);
  }
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,f_8 = NULL,g_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL;
  b_8 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      c_8 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
      f_8 = ATgetArgument(t, 2);
      g_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = g_8;
  if(match_cons(t, sym_Rule_3))
    {
      i_8 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
      k_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_8;
  if(match_cons(t, sym_Op_2))
    {
      z_7 = ATgetArgument(t, 0);
      a_8 = ATgetArgument(t, 1);
      t = a_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = z_7;
          if(match_string(t, "Undefined"))
            {
              ATerm x_22 = t;
              int y_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
                  t = b_8;
                  t = new_0_0(t);
                  e_2 = t;
                  t = i_8;
                  t = dummify_0_0(t);
                  c_2 = t;
                  {
                    ATerm z_22 = t;
                    int a_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_2;
                        if((i_8 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_2);
                        LocalPopChoice(a_23);
                      }
                    else
                      {
                        t = z_22;
                        t = c_2;
                      }
                  }
                  f_2 = t;
                  t = c_8;
                  t = v_0(t);
                  g_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, g_2, (ATerm) ATmakeAppl(sym_Op_2, term_s_22, (ATerm) ATinsert(ATinsert(ATempty, term_g_22), c_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, c_8, d_8, f_8, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_2), i_8), term_g_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_w_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_8)))), f_2), term_g_22)), (ATerm) ATmakeAppl(sym_Seq_2, k_8, term_i_20)))));
                  LocalPopChoice(y_22);
                }
              else
                {
                  t = x_22;
                  t = m_8(c_8, d_8, f_8, i_8, j_8, k_8, b_8, t);
                }
            }
          else
            {
              t = m_8(c_8, d_8, f_8, i_8, j_8, k_8, b_8, t);
            }
        }
      else
        {
          t = z_7;
          t = m_8(c_8, d_8, f_8, i_8, j_8, k_8, b_8, t);
        }
    }
  else
    {
      t = m_8(c_8, d_8, f_8, i_8, j_8, k_8, b_8, t);
    }
  return(t);
}
static ATerm g_10 (ATerm e_136 (ATerm), ATerm f_76, ATerm d_76, ATerm e_76, ATerm i_76, ATerm g_76, ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,w_8 = NULL,x_8 = NULL;
  t = new_0_0(t);
  s_8 = t;
  t = i_76;
  t = dummify_0_0(t);
  r_8 = t;
  {
    ATerm b_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_8;
        if((i_76 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, s_8);
        LocalPopChoice(e_23);
      }
    else
      {
        t = b_23;
        t = r_8;
      }
  }
  w_8 = t;
  t = f_76;
  t = e_136(t);
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, x_8, r_8)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, f_76, d_76, e_76, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, s_8), i_76), term_g_22, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_76)))), w_8), term_j_23)), (ATerm) ATmakeAppl(sym_Seq_2, g_76, term_i_20))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm e_136 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      b_9 = ATgetArgument(t, 0);
      d_9 = ATgetArgument(t, 1);
      e_9 = ATgetArgument(t, 2);
      {
        ATerm l_24 = ATgetArgument(t, 3);
        if(match_cons(l_24, sym_Rule_3))
          {
            f_9 = ATgetArgument(l_24, 0);
            {
              ATerm m_24 = ATgetArgument(l_24, 1);
              if(match_cons(m_24, sym_Op_2))
                {
                  ATerm n_24 = ATgetArgument(m_24, 0);
                  if((ATgetSymbol((ATermAppl) n_24) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm p_24 = ATgetArgument(m_24, 1);
                    if(((ATgetType(p_24) != AT_LIST) || !(ATisEmpty(p_24))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            g_9 = ATgetArgument(l_24, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_10(e_136, b_9, d_9, e_9, f_9, g_9, t);
  return(t);
}
static ATerm b_18 (ATerm g_12, ATerm j_12, ATerm t)
{
  t = g_12;
  {
    ATerm q_24 = t;
    if((PushChoice() == 0))
      {
        ATerm s_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,e_3 = NULL;
        z_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_12 = ATgetFirst((ATermList) t);
            y_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_12);
        s_12 = t;
        t = y_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(y_12), x_12);
        e_3 = t;
        t = SSLsetAnnotations(e_3, s_12);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_20, g_12);
  return(t);
}
static ATerm c_18 (ATerm a_13, ATerm b_13, ATerm t)
{
  t = a_13;
  {
    ATerm r_24 = t;
    if((PushChoice() == 0))
      {
        ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,f_3 = NULL;
        g_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_13 = ATgetFirst((ATermList) t);
            f_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_13);
        d_13 = t;
        t = f_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(f_13), e_13);
        f_3 = t;
        t = SSLsetAnnotations(f_3, d_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_24, a_13);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_u_24;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm c_14 = NULL,g_14 = NULL,p_2 = NULL;
  c_14 = t;
  t = SSL_explode_term(c_14);
  if(match_cons(t, sym__2))
    {
      ATerm v_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_24 = ATgetArgument(t, 1);
        if(((ATgetType(w_24) == AT_LIST) && !(ATisEmpty(w_24))))
          {
            g_14 = ATgetFirst((ATermList) w_24);
            {
              ATerm b_25 = (ATerm) ATgetNext((ATermList) w_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(c_14);
  if(match_cons(t, sym__2))
    {
      ATerm c_25 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_25) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_25 = ATgetArgument(t, 1);
        if(((ATgetType(d_25) == AT_LIST) && !(ATisEmpty(d_25))))
          {
            ATerm e_25 = ATgetFirst((ATermList) d_25);
            ATerm k_25 = (ATerm) ATgetNext((ATermList) d_25);
            if(((ATgetType(k_25) == AT_LIST) && !(ATisEmpty(k_25))))
              {
                p_2 = ATgetFirst((ATermList) k_25);
                {
                  ATerm l_25 = (ATerm) ATgetNext((ATermList) k_25);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_25, (ATerm) ATinsert(ATinsert(ATempty, p_2), g_14));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL;
  if(match_cons(t, sym__2))
    {
      w_14 = ATgetArgument(t, 0);
      x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_25, (ATerm) ATinsert(ATinsert(ATempty, x_14), w_14));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_u_24;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  if(match_cons(t, sym__2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_25, (ATerm) ATinsert(ATinsert(ATempty, a_15), z_14));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL;
  if(match_cons(t, sym__2))
    {
      q_15 = ATgetArgument(t, 0);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_25, (ATerm) ATinsert(ATinsert(ATempty, r_15), q_15));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_q_25;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym__2))
    {
      x_15 = ATgetArgument(t, 0);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_25, (ATerm) ATinsert(ATinsert(ATempty, y_15), x_15));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
  t_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      u_13 = ATgetArgument(t, 0);
      v_13 = ATgetArgument(t, 1);
      {
        ATerm y_13 = NULL;
        t = v_13;
        t = foldr_2_0(d_1, e_1, t);
        y_13 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, u_13, y_13);
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
                ATerm u_2 = NULL;
                t = u_13;
                {
                  ATerm r_25 = t;
                  int t_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_v_25;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_y_25;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_b_26;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_d_26;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_e_26;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(t_25);
                    }
                  else
                    {
                      t = r_25;
                      {
                        ATerm w_2 = NULL;
                        t = SSL_explode_string(u_13);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm j_26 = ATgetFirst((ATermList) t);
                            if(((ATgetType(j_26) != AT_INT) || (ATgetInt((ATermInt) j_26) != 39)))
                              _fail(t);
                            {
                              ATerm k_26 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(k_26) == AT_LIST) && !(ATisEmpty(k_26))))
                                {
                                  w_2 = ATgetFirst((ATermList) k_26);
                                  {
                                    ATerm l_26 = (ATerm) ATgetNext((ATermList) k_26);
                                    if(((ATgetType(l_26) == AT_LIST) && !(ATisEmpty(l_26))))
                                      {
                                        ATerm n_26 = ATgetFirst((ATermList) l_26);
                                        if(((ATgetType(n_26) != AT_INT) || (ATgetInt((ATermInt) n_26) != 39)))
                                          _fail(t);
                                        {
                                          ATerm o_26 = (ATerm) ATgetNext((ATermList) l_26);
                                          if(((ATgetType(o_26) != AT_LIST) || !(ATisEmpty(o_26))))
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
                        t = w_2;
                      }
                    }
                }
                u_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, u_2);
              }
            }
          else
            {
              ATerm p_26 = t;
              int r_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      u_13 = ATgetArgument(t, 0);
                      {
                        ATerm s_26 = ATgetArgument(t, 1);
                      }
                      s_13 = ATgetArgument(t, 2);
                      k_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_26);
                  t = (ATerm) ATmakeAppl(sym_Con_3, u_13, s_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_13), (ATerm) ATempty));
                }
              else
                {
                  t = p_26;
                  {
                    ATerm w_26 = t;
                    int x_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            u_13 = ATgetArgument(t, 0);
                            {
                              ATerm y_26 = ATgetArgument(t, 1);
                            }
                            s_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(x_26);
                        t = (ATerm) ATmakeAppl(sym_Con_3, u_13, s_13, term_f_27);
                      }
                    else
                      {
                        t = w_26;
                        if(match_cons(t, sym_Con1_2))
                          {
                            u_13 = ATgetArgument(t, 0);
                            v_13 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, u_13, v_13, term_f_27);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                u_13 = ATgetArgument(t, 0);
                                v_13 = ATgetArgument(t, 1);
                                {
                                  static ATerm f_1 (ATerm t)
                                  {
                                    t = v_13;
                                    return(t);
                                  }
                                  t = u_13;
                                  t = foldr_2_0(f_1, g_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    u_13 = ATgetArgument(t, 0);
                                    t = u_13;
                                    t = foldr_2_0(h_1, i_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        u_13 = ATgetArgument(t, 0);
                                        t = u_13;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            l_13 = ATgetFirst((ATermList) t);
                                            q_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = q_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm m_27 = t;
                                                int p_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = b_18(u_13, t_13, t);
                                                    LocalPopChoice(p_27);
                                                  }
                                                else
                                                  {
                                                    t = m_27;
                                                    t = l_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = b_18(u_13, t_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = b_18(u_13, t_13, t);
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
                                                                v_13 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_13), v_13);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    u_13 = ATgetArgument(t, 0);
                                                                    v_13 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm j_1 (ATerm t)
                                                                      {
                                                                        t = v_13;
                                                                        return(t);
                                                                      }
                                                                      t = u_13;
                                                                      t = foldr_2_0(j_1, k_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        u_13 = ATgetArgument(t, 0);
                                                                        t = u_13;
                                                                        t = foldr_2_0(l_1, m_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            u_13 = ATgetArgument(t, 0);
                                                                            v_13 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_s_24, (ATerm) ATinsert(CheckATermList(v_13), u_13));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                u_13 = ATgetArgument(t, 0);
                                                                                t = u_13;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    l_13 = ATgetFirst((ATermList) t);
                                                                                    q_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = q_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm r_27 = t;
                                                                                        int l_28 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = c_18(u_13, t_13, t);
                                                                                            LocalPopChoice(l_28);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = r_27;
                                                                                            t = l_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = c_18(u_13, t_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_18(u_13, t_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_z_28;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        u_13 = ATgetArgument(t, 0);
                                                                                        v_13 = ATgetArgument(t, 1);
                                                                                        t = v_13;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            r_13 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_b_29, (ATerm) ATinsert(ATinsert(ATempty, r_13), u_13));
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
                                                                                                v_13 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, u_13, v_13, term_j_20);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    u_13 = ATgetArgument(t, 0);
                                                                                                    v_13 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, u_13, v_13, term_j_20);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        u_13 = ATgetArgument(t, 0);
                                                                                                        v_13 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, u_13, (ATerm)ATempty, v_13);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            u_13 = ATgetArgument(t, 0);
                                                                                                            v_13 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, v_13, u_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                u_13 = ATgetArgument(t, 0);
                                                                                                                v_13 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, u_13, v_13, (ATerm) ATempty);
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
                                                                                                                        v_13 = ATgetArgument(t, 1);
                                                                                                                        s_13 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, u_13, v_13, (ATerm)ATempty, s_13);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            u_13 = ATgetArgument(t, 0);
                                                                                                                            v_13 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, u_13, (ATerm)ATempty, (ATerm)ATempty, v_13);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                u_13 = ATgetArgument(t, 0);
                                                                                                                                v_13 = ATgetArgument(t, 1);
                                                                                                                                s_13 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, u_13, v_13, (ATerm)ATempty, s_13);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    u_13 = ATgetArgument(t, 0);
                                                                                                                                    v_13 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, u_13, (ATerm)ATempty, (ATerm)ATempty, v_13);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        u_13 = ATgetArgument(t, 0);
                                                                                                                                        v_13 = ATgetArgument(t, 1);
                                                                                                                                        s_13 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, u_13, v_13, (ATerm)ATempty, s_13);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            u_13 = ATgetArgument(t, 0);
                                                                                                                                            v_13 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, u_13, (ATerm)ATempty, (ATerm)ATempty, v_13);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm c_29 = ATgetArgument(t, 0);
                                                                                                                                                v_13 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, v_13);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
  j_18 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      k_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
      {
        ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
        t = j_18;
        t = new_0_0(t);
        n_18 = t;
        t = new_0_0(t);
        o_18 = t;
        t = new_0_0(t);
        p_18 = t;
        t = new_0_0(t);
        q_18 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, q_18), p_18), o_18), n_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, n_18), (ATerm) ATmakeAppl(sym_Var_1, p_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, k_18, (ATerm)ATmakeAppl(sym_Var_1, n_18), (ATerm) ATmakeAppl(sym_Var_1, o_18)), (ATerm) ATmakeAppl(sym_BAM_3, i_18, (ATerm)ATmakeAppl(sym_Var_1, p_18), (ATerm) ATmakeAppl(sym_Var_1, q_18)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_e_29, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_18)), (ATerm) ATmakeAppl(sym_Var_1, o_18))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          k_18 = ATgetArgument(t, 0);
          {
            ATerm t_18 = NULL,u_18 = NULL,w_18 = NULL,b_19 = NULL;
            t = j_18;
            t = new_0_0(t);
            w_18 = t;
            t = k_18;
            {
              static ATerm n_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((t_18 != NULL) && (t_18 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      t_18 = ATgetArgument(t, 0);
                    if(((u_18 != NULL) && (u_18 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      u_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, w_18);
                return(t);
              }
              t = oncetd_1_0(n_1, t);
            }
            b_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_29, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_18)), not_null(t_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_18)), (ATerm) ATmakeAppl(sym_Build_1, b_19))));
          }
        }
      else
        {
          ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              k_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_18;
          t = new_0_0(t);
          f_19 = t;
          t = new_0_0(t);
          g_19 = t;
          t = k_18;
          {
            static ATerm o_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((d_19 != NULL) && (d_19 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    d_19 = ATgetArgument(t, 0);
                  if(((e_19 != NULL) && (e_19 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    e_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, f_19);
              return(t);
            }
            t = oncetd_1_0(o_1, t);
          }
          h_19 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_19))))), (ATerm)ATmakeAppl(sym_Var_1, f_19), (ATerm) ATmakeAppl(sym_Op_2, term_l_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_19)), not_null(d_19)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL;
  j_19 = t;
  if(match_cons(t, sym_Match_1))
    {
      k_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_29 = t;
    int l_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
        t = j_19;
        t = new_0_0(t);
        q_19 = t;
        t = k_19;
        {
          static ATerm p_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((m_19 != NULL) && (m_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_19 = ATgetArgument(t, 0);
                if(((p_19 != NULL) && (p_19 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  p_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, q_19), m_19);
            return(t);
          }
          t = pat_td_1_0(p_1, t);
        }
        r_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_q_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, q_19))), (ATerm) ATmakeAppl(sym_Match_1, not_null(p_19))))));
        LocalPopChoice(l_29);
      }
    else
      {
        t = k_29;
        {
          ATerm s_29 = t;
          int u_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_19 = NULL,y_19 = NULL,z_19 = NULL;
              t = j_19;
              t = new_0_0(t);
              y_19 = t;
              t = k_19;
              {
                static ATerm q_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((x_19 != NULL) && (x_19 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, y_19);
                  return(t);
                }
                t = pat_td_1_0(q_1, t);
              }
              z_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, y_19)), not_null(x_19))));
              LocalPopChoice(u_29);
            }
          else
            {
              t = s_29;
              {
                ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL,e_20 = NULL;
                t = j_19;
                t = new_0_0(t);
                d_20 = t;
                t = k_19;
                {
                  static ATerm r_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((c_20 != NULL) && (c_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          c_20 = ATgetArgument(t, 0);
                        if(((b_20 != NULL) && (b_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          b_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, d_20);
                    return(t);
                  }
                  t = pat_td_1_0(r_1, t);
                }
                e_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, d_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(b_20)), not_null(c_20)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm y_134 (ATerm), ATerm t)
{
  ATerm y_29 = t;
  int a_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_134(t);
      LocalPopChoice(a_30);
    }
  else
    {
      t = y_29;
      {
        ATerm z_25 = NULL,a_26 = NULL,f_26 = NULL,g_26 = NULL;
        a_26 = t;
        if(match_cons(t, sym_Op_2))
          {
            f_26 = ATgetArgument(t, 0);
            g_26 = ATgetArgument(t, 1);
            {
              ATerm i_3 = NULL,n_3 = NULL,k_3 = NULL;
              t = SSLgetAnnotations(a_26);
              i_3 = t;
              t = g_26;
              {
                static ATerm s_1 (ATerm t)
                {
                  t = pat_td_1_0(y_134, t);
                  return(t);
                }
                t = fetch_1_0(s_1, t);
              }
              n_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, f_26, n_3);
              k_3 = t;
              t = SSLsetAnnotations(k_3, i_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                f_26 = ATgetArgument(t, 0);
                g_26 = ATgetArgument(t, 1);
                {
                  ATerm c_30 = t;
                  int d_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_4 = NULL,k_4 = NULL,m_3 = NULL;
                      t = SSLgetAnnotations(a_26);
                      b_4 = t;
                      t = g_26;
                      t = pat_td_1_0(y_134, t);
                      k_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, f_26, k_4);
                      m_3 = t;
                      t = SSLsetAnnotations(m_3, b_4);
                      LocalPopChoice(d_30);
                    }
                  else
                    {
                      t = c_30;
                      {
                        ATerm n_5 = NULL,f_6 = NULL,o_3 = NULL;
                        t = SSLgetAnnotations(a_26);
                        n_5 = t;
                        t = f_26;
                        t = pat_td_1_0(y_134, t);
                        f_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, f_6, g_26);
                        o_3 = t;
                        t = SSLsetAnnotations(o_3, n_5);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    f_26 = ATgetArgument(t, 0);
                    g_26 = ATgetArgument(t, 1);
                    z_25 = ATgetArgument(t, 2);
                    {
                      ATerm c_7 = NULL,j_7 = NULL,p_3 = NULL;
                      t = SSLgetAnnotations(a_26);
                      c_7 = t;
                      t = z_25;
                      {
                        static ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1_0(y_134, t);
                          return(t);
                        }
                        t = fetch_1_0(t_1, t);
                      }
                      j_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, f_26, g_26, j_7);
                      p_3 = t;
                      t = SSLsetAnnotations(p_3, c_7);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        f_26 = ATgetArgument(t, 0);
                        g_26 = ATgetArgument(t, 1);
                        z_25 = ATgetArgument(t, 2);
                        {
                          ATerm e_8 = NULL,q_8 = NULL,q_3 = NULL;
                          t = SSLgetAnnotations(a_26);
                          e_8 = t;
                          t = z_25;
                          {
                            static ATerm u_1 (ATerm t)
                            {
                              t = pat_td_1_0(y_134, t);
                              return(t);
                            }
                            t = fetch_1_0(u_1, t);
                          }
                          q_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, f_26, g_26, q_8);
                          q_3 = t;
                          t = SSLsetAnnotations(q_3, e_8);
                        }
                      }
                    else
                      {
                        ATerm l_9 = NULL,o_9 = NULL,v_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            f_26 = ATgetArgument(t, 0);
                            g_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(a_26);
                        l_9 = t;
                        t = g_26;
                        t = pat_td_1_0(y_134, t);
                        o_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, f_26, o_9);
                        v_3 = t;
                        t = SSLsetAnnotations(v_3, l_9);
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
  ATerm t_26 = NULL,u_26 = NULL;
  t_26 = t;
  if(match_cons(t, sym_Build_1))
    {
      u_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_26 = NULL,a_27 = NULL,c_27 = NULL,d_27 = NULL;
        t = t_26;
        t = new_0_0(t);
        c_27 = t;
        t = u_26;
        {
          static ATerm v_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((v_26 != NULL) && (v_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_26 = ATgetArgument(t, 0);
                if(((a_27 != NULL) && (a_27 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  a_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, c_27);
            return(t);
          }
          t = pat_td_1_0(v_1, t);
        }
        d_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_n_30, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_27)), not_null(v_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_27)))), (ATerm) ATmakeAppl(sym_Build_1, d_27)));
        LocalPopChoice(i_30);
      }
    else
      {
        t = g_30;
        {
          ATerm s_30 = t;
          int t_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_27 = NULL,g_27 = NULL,h_27 = NULL;
              t = t_26;
              t = new_0_0(t);
              g_27 = t;
              t = u_26;
              {
                static ATerm w_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((e_27 != NULL) && (e_27 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, g_27);
                  return(t);
                }
                t = pat_td_1_0(w_1, t);
              }
              h_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_27)))), (ATerm) ATmakeAppl(sym_Build_1, h_27)));
              LocalPopChoice(t_30);
            }
          else
            {
              t = s_30;
              {
                ATerm i_27 = NULL,l_27 = NULL,n_27 = NULL,o_27 = NULL;
                t = t_26;
                t = new_0_0(t);
                n_27 = t;
                t = u_26;
                {
                  static ATerm x_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((i_27 != NULL) && (i_27 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          i_27 = ATgetArgument(t, 0);
                        if(((l_27 != NULL) && (l_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_27);
                    return(t);
                  }
                  t = pat_td_1_0(x_1, t);
                }
                o_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_27), not_null(l_27), (ATerm) ATmakeAppl(sym_Var_1, n_27))), (ATerm) ATmakeAppl(sym_Build_1, o_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm v_30 = t;
  if((PushChoice() == 0))
    {
      ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,s_7 = NULL;
      f_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          e_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_28);
      d_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, e_28);
      s_7 = t;
      t = SSLsetAnnotations(s_7, d_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_30;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_30;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm g_28 = NULL,h_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_28 = ATgetFirst((ATermList) t);
      h_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_28, h_28);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL,m_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_31 = ATgetArgument(t, 0);
      if(match_cons(a_31, sym__2))
        {
          i_28 = ATgetArgument(a_31, 0);
          j_28 = ATgetArgument(a_31, 1);
        }
      else
        _fail(t);
      {
        ATerm d_31 = ATgetArgument(t, 1);
        if(match_cons(d_31, sym__2))
          {
            k_28 = ATgetArgument(d_31, 0);
            m_28 = ATgetArgument(d_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_28), i_28), (ATerm) ATinsert(CheckATermList(m_28), j_28));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_30;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_28 = ATgetFirst((ATermList) t);
      r_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_28, r_28);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm s_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_31 = ATgetArgument(t, 0);
      if(match_cons(e_31, sym__2))
        {
          s_28 = ATgetArgument(e_31, 0);
          w_28 = ATgetArgument(e_31, 1);
        }
      else
        _fail(t);
      {
        ATerm f_31 = ATgetArgument(t, 1);
        if(match_cons(f_31, sym__2))
          {
            x_28 = ATgetArgument(f_31, 0);
            y_28 = ATgetArgument(f_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_28), s_28), (ATerm) ATinsert(CheckATermList(y_28), w_28));
  return(t);
}
static ATerm i_10 (ATerm w_66, ATerm x_66, ATerm y_66, ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,t_7 = NULL;
  t = y_66;
  t = fetch_1_0(y_1, t);
  t = y_66;
  t = genzip_4_0(z_1, a_2, b_2, LiftPrimArg_0_0, t);
  c_28 = t;
  if(match_cons(t, sym__2))
    {
      y_27 = ATgetArgument(t, 0);
      z_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_28);
  x_27 = t;
  t = y_27;
  t = concat_0_0(t);
  a_28 = t;
  t = z_27;
  t = genzip_4_0(d_2, h_2, i_2, _id, t);
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_28, b_28);
  t_7 = t;
  t = SSLsetAnnotations(t_7, x_27);
  if(match_cons(t, sym__2))
    {
      u_27 = ATgetArgument(t, 0);
      {
        ATerm g_31 = ATgetArgument(t, 1);
        if(match_cons(g_31, sym__2))
          {
            v_27 = ATgetArgument(g_31, 0);
            w_27 = ATgetArgument(g_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, u_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_27), (ATerm) ATmakeAppl(sym_CallT_3, w_66, x_66, w_27)));
  return(t);
}
static ATerm r_29 (ATerm d_29, ATerm t)
{
  ATerm f_29 = NULL;
  t = d_29;
  {
    ATerm k_31 = t;
    if((PushChoice() == 0))
      {
        ATerm g_29 = NULL,h_29 = NULL,m_29 = NULL,n_8 = NULL;
        m_29 = t;
        if(match_cons(t, sym_Var_1))
          {
            h_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_29);
        g_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, h_29);
        n_8 = t;
        t = SSLsetAnnotations(n_8, g_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_31;
      }
  }
  t = new_0_0(t);
  f_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, f_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_29)))), (ATerm) ATmakeAppl(sym_Var_1, f_29)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL;
  n_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_29 = ATgetArgument(t, 0);
      {
        ATerm l_31 = t;
        int n_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_29(n_29, t);
            LocalPopChoice(n_31);
          }
        else
          {
            t = l_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_j_20, (ATerm) ATmakeAppl(sym_Var_1, o_29)));
          }
      }
    }
  else
    {
      t = r_29(n_29, t);
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm r_31 = t;
  if((PushChoice() == 0))
    {
      ATerm o_10 = NULL,q_10 = NULL,s_10 = NULL,r_10 = NULL;
      s_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          q_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(s_10);
      o_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_10);
      r_10 = t;
      t = SSLsetAnnotations(r_10, o_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_31;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_30;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_10 = ATgetFirst((ATermList) t);
      u_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_10, u_10);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm x_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_31 = ATgetArgument(t, 0);
      if(match_cons(v_31, sym__2))
        {
          x_10 = ATgetArgument(v_31, 0);
          a_11 = ATgetArgument(v_31, 1);
        }
      else
        _fail(t);
      {
        ATerm w_31 = ATgetArgument(t, 1);
        if(match_cons(w_31, sym__2))
          {
            b_11 = ATgetArgument(w_31, 0);
            c_11 = ATgetArgument(w_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_11), x_10), (ATerm) ATinsert(CheckATermList(c_11), a_11));
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_30;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm g_11 = NULL,j_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_11 = ATgetFirst((ATermList) t);
      j_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_11, j_11);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm l_11 = NULL,n_11 = NULL,r_11 = NULL,s_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_31 = ATgetArgument(t, 0);
      if(match_cons(x_31, sym__2))
        {
          l_11 = ATgetArgument(x_31, 0);
          n_11 = ATgetArgument(x_31, 1);
        }
      else
        _fail(t);
      {
        ATerm y_31 = ATgetArgument(t, 1);
        if(match_cons(y_31, sym__2))
          {
            r_11 = ATgetArgument(y_31, 0);
            s_11 = ATgetArgument(y_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_11), l_11), (ATerm) ATinsert(CheckATermList(s_11), n_11));
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm z_31 = t;
  if((PushChoice() == 0))
    {
      ATerm e_14 = NULL,f_14 = NULL,h_14 = NULL,z_10 = NULL;
      h_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          f_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_14);
      e_14 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, f_14);
      z_10 = t;
      t = SSLsetAnnotations(z_10, e_14);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_31;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_30;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm m_14 = NULL,q_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_14 = ATgetFirst((ATermList) t);
      q_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_14, q_14);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm r_14 = NULL,i_15 = NULL,j_15 = NULL,l_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_32 = ATgetArgument(t, 0);
      if(match_cons(a_32, sym__2))
        {
          r_14 = ATgetArgument(a_32, 0);
          i_15 = ATgetArgument(a_32, 1);
        }
      else
        _fail(t);
      {
        ATerm b_32 = ATgetArgument(t, 1);
        if(match_cons(b_32, sym__2))
          {
            j_15 = ATgetArgument(b_32, 0);
            l_15 = ATgetArgument(b_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_15), r_14), (ATerm) ATinsert(CheckATermList(l_15), i_15));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_30;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_15 = ATgetFirst((ATermList) t);
      n_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_15, n_15);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_32 = ATgetArgument(t, 0);
      if(match_cons(c_32, sym__2))
        {
          s_15 = ATgetArgument(c_32, 0);
          t_15 = ATgetArgument(c_32, 1);
        }
      else
        _fail(t);
      {
        ATerm d_32 = ATgetArgument(t, 1);
        if(match_cons(d_32, sym__2))
          {
            u_15 = ATgetArgument(d_32, 0);
            v_15 = ATgetArgument(d_32, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_15), s_15), (ATerm) ATinsert(CheckATermList(v_15), t_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  e_35 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      f_35 = ATgetArgument(t, 0);
      g_35 = ATgetArgument(t, 1);
      d_35 = ATgetArgument(t, 2);
      {
        ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,h_10 = NULL,l_10 = NULL,n_10 = NULL,w_10 = NULL;
        t = d_35;
        t = fetch_1_0(j_2, t);
        t = d_35;
        t = genzip_4_0(k_2, l_2, m_2, LiftPrimArg_0_0, t);
        n_10 = t;
        if(match_cons(t, sym__2))
          {
            e_10 = ATgetArgument(t, 0);
            f_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_10);
        d_10 = t;
        t = e_10;
        t = concat_0_0(t);
        h_10 = t;
        t = f_10;
        t = genzip_4_0(n_2, o_2, q_2, _id, t);
        l_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_10, l_10);
        w_10 = t;
        t = SSLsetAnnotations(w_10, d_10);
        if(match_cons(t, sym__2))
          {
            a_10 = ATgetArgument(t, 0);
            {
              ATerm f_32 = ATgetArgument(t, 1);
              if(match_cons(f_32, sym__2))
                {
                  b_10 = ATgetArgument(f_32, 0);
                  c_10 = ATgetArgument(f_32, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_10), (ATerm) ATmakeAppl(sym_PrimT_3, f_35, g_35, c_10)));
      }
    }
  else
    {
      ATerm i_13 = NULL,j_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,a_14 = NULL,b_14 = NULL,d_14 = NULL,h_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          f_35 = ATgetArgument(t, 0);
          g_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_35;
      t = fetch_1_0(r_2, t);
      t = g_35;
      t = genzip_4_0(s_2, t_2, v_2, LiftPrimArg_0_0, t);
      d_14 = t;
      if(match_cons(t, sym__2))
        {
          o_13 = ATgetArgument(t, 0);
          p_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_14);
      n_13 = t;
      t = o_13;
      t = concat_0_0(t);
      a_14 = t;
      t = p_13;
      t = genzip_4_0(x_2, y_2, z_2, _id, t);
      b_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_14, b_14);
      h_11 = t;
      t = SSLsetAnnotations(h_11, n_13);
      if(match_cons(t, sym__2))
        {
          i_13 = ATgetArgument(t, 0);
          {
            ATerm g_32 = ATgetArgument(t, 1);
            if(match_cons(g_32, sym__2))
              {
                j_13 = ATgetArgument(g_32, 0);
                m_13 = ATgetArgument(g_32, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, i_13, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_13), (ATerm) ATmakeAppl(sym_PrimT_3, f_35, (ATerm)ATempty, m_13)));
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,j_37 = NULL,k_37 = NULL;
  k_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      d_37 = ATgetArgument(t, 0);
      e_37 = ATgetArgument(t, 1);
      j_37 = ATgetArgument(t, 2);
      {
        ATerm z_16 = NULL,a_21 = NULL;
        t = SSLgetAnnotations(k_37);
        z_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, d_37, e_37, j_37);
        a_21 = t;
        t = SSLsetAnnotations(a_21, z_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = k_37;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm h_32 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(a_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_32;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  p_38 = t;
  if(match_cons(t, sym_Con_3))
    {
      q_38 = ATgetArgument(t, 0);
      r_38 = ATgetArgument(t, 1);
      o_38 = ATgetArgument(t, 2);
      {
        ATerm e_18 = NULL,h_21 = NULL;
        t = SSLgetAnnotations(p_38);
        e_18 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, q_38, r_38, o_38);
        h_21 = t;
        t = SSLsetAnnotations(h_21, e_18);
      }
    }
  else
    {
      ATerm o_19 = NULL,i_21 = NULL;
      if(match_cons(t, sym_App_2))
        {
          q_38 = ATgetArgument(t, 0);
          r_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_38);
      o_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, q_38, r_38);
      i_21 = t;
      t = SSLsetAnnotations(i_21, o_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm i_32 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(b_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_32;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm e_39 = NULL,f_39 = NULL,i_39 = NULL,j_39 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      e_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_39;
  if(match_cons(t, sym_StratRule_3))
    {
      f_39 = ATgetArgument(t, 0);
      i_39 = ATgetArgument(t, 1);
      j_39 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, i_39), (ATerm) ATmakeAppl(sym_Where_1, j_39)), f_39));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          f_39 = ATgetArgument(t, 0);
          i_39 = ATgetArgument(t, 1);
          j_39 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_39;
      t = pureterm_0_0(t);
      t = i_39;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, i_39)), (ATerm) ATmakeAppl(sym_Where_1, j_39)), (ATerm) ATmakeAppl(sym_Match_1, f_39)));
    }
  return(t);
}
static ATerm j_10 (ATerm j_62, ATerm k_62, ATerm l_62, ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,k_40 = NULL;
  t = new_0_0(t);
  c_40 = t;
  t = j_62;
  {
    static ATerm d_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm j_32 = ATgetArgument(t, 0);
          if(match_cons(j_32, sym_Var_1))
            {
              if(((b_40 != NULL) && (b_40 != ATgetArgument(j_32, 0))))
                _fail(ATgetArgument(j_32, 0));
              else
                b_40 = ATgetArgument(j_32, 0);
            }
          else
            _fail(t);
          if(((z_39 != NULL) && (z_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_39 = ATgetArgument(t, 1);
          {
            ATerm k_32 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, b_40);
      return(t);
    }
    t = oncetd_1_0(d_3, t);
  }
  d_40 = t;
  t = k_62;
  {
    static ATerm g_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm l_32 = ATgetArgument(t, 0);
          if(match_cons(l_32, sym_Var_1))
            {
              if(((b_40 != NULL) && (b_40 != ATgetArgument(l_32, 0))))
                _fail(ATgetArgument(l_32, 0));
              else
                b_40 = ATgetArgument(l_32, 0);
            }
          else
            _fail(t);
          if(((a_40 != NULL) && (a_40 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_40 = ATgetArgument(t, 1);
          {
            ATerm m_32 = ATgetArgument(t, 2);
            if(match_cons(m_32, sym_CallT_3))
              {
                if(((y_39 != NULL) && (y_39 != ATgetArgument(m_32, 0))))
                  _fail(ATgetArgument(m_32, 0));
                else
                  y_39 = ATgetArgument(m_32, 0);
                {
                  ATerm n_32 = ATgetArgument(m_32, 1);
                  if(((ATgetType(n_32) != AT_LIST) || !(ATisEmpty(n_32))))
                    _fail(t);
                }
                {
                  ATerm o_32 = ATgetArgument(m_32, 2);
                  if(((ATgetType(o_32) != AT_LIST) || !(ATisEmpty(o_32))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_40);
      return(t);
    }
    t = oncetd_1_0(g_3, t);
  }
  k_40 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_40), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_40, k_40, (ATerm) ATmakeAppl(sym_Seq_2, l_62, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(y_39), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_39), not_null(a_40), term_j_20))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_40)), (ATerm) ATmakeAppl(sym_Var_1, c_40))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm p_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_32 = t;
      int t_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_41 = NULL,i_41 = NULL,m_41 = NULL,n_41 = NULL,s_41 = NULL,t_41 = NULL;
          n_41 = t;
          if(match_cons(t, sym_SRule_1))
            {
              s_41 = ATgetArgument(t, 0);
              t = s_41;
              if(match_cons(t, sym_Rule_3))
                {
                  h_41 = ATgetArgument(t, 0);
                  i_41 = ATgetArgument(t, 1);
                  m_41 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_41;
              t = j_10(h_41, i_41, m_41, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm k_20 = NULL,n_20 = NULL,q_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  s_41 = ATgetArgument(t, 0);
                  t_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_41);
              k_20 = t;
              t = t_41;
              t = desugarRule_0_0(t);
              n_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, s_41, n_20);
              q_21 = t;
              t = SSLsetAnnotations(q_21, k_20);
            }
          LocalPopChoice(t_32);
        }
      else
        {
          t = s_32;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(r_32);
    }
  else
    {
      t = p_32;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm u_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(w_32);
    }
  else
    {
      t = u_32;
    }
  t = repeat_2_0(j_3, _id, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm x_32 = t;
  int y_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(y_32);
    }
  else
    {
      t = x_32;
      {
        ATerm z_32 = t;
        int a_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,r_42 = NULL;
            n_42 = t;
            if(match_cons(t, sym_CallT_3))
              {
                o_42 = ATgetArgument(t, 0);
                p_42 = ATgetArgument(t, 1);
                r_42 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = n_42;
            t = i_10(o_42, p_42, r_42, t);
            LocalPopChoice(a_33);
          }
        else
          {
            t = z_32;
            {
              ATerm b_33 = t;
              int c_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(c_33);
                }
              else
                {
                  t = b_33;
                  {
                    ATerm d_33 = t;
                    int e_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(e_33);
                      }
                    else
                      {
                        t = d_33;
                        {
                          ATerm f_33 = t;
                          int g_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_33 = t;
                              int j_33 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_42 = NULL,z_42 = NULL,f_43 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      y_42 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = y_42;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      z_42 = ATgetArgument(t, 0);
                                      t = z_42;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          z_42 = ATgetArgument(t, 0);
                                          f_43 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, z_42, f_43);
                                    }
                                  LocalPopChoice(j_33);
                                }
                              else
                                {
                                  t = i_33;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(g_33);
                            }
                          else
                            {
                              t = f_33;
                              {
                                ATerm k_33 = t;
                                int l_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(l_33);
                                  }
                                else
                                  {
                                    t = k_33;
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
  t = topdown_1_0(h_3, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm c_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_46 = ATgetArgument(t, 0);
      t = c_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_46 = ATgetArgument(t, 0);
          {
            ATerm m_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = c_46;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_46), (ATerm) ATempty);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm n_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_46 = ATgetArgument(t, 0);
      t = n_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_46 = ATgetArgument(t, 0);
          {
            ATerm n_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_46;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, n_46);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm t_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_46);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm o_33 = t;
  int p_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_33);
    }
  else
    {
      t = o_33;
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            {
              ATerm s_33 = t;
              int t_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_46 = NULL,y_46 = NULL,c_47 = NULL,d_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_46 = ATgetArgument(t, 0);
                      y_46 = ATgetArgument(t, 1);
                      c_47 = ATgetArgument(t, 2);
                      d_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_47;
                  t = map_1_0(u_3, t);
                  LocalPopChoice(t_33);
                }
              else
                {
                  t = s_33;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm o_47 = NULL;
  ATerm u_33 = t;
  int w_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_47 = ATgetArgument(t, 0);
          {
            ATerm x_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_33);
      t = o_47;
    }
  else
    {
      t = u_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_47;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm r_47 = NULL;
  r_47 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, r_47);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm u_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_47);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      {
        ATerm a_34 = t;
        int b_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_34);
          }
        else
          {
            t = a_34;
            {
              ATerm c_34 = t;
              int d_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL,c_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      z_47 = ATgetArgument(t, 0);
                      a_48 = ATgetArgument(t, 1);
                      b_48 = ATgetArgument(t, 2);
                      c_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = b_48;
                  t = map_1_0(z_3, t);
                  LocalPopChoice(d_34);
                }
              else
                {
                  t = c_34;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm q_48 = NULL;
  ATerm g_34 = t;
  int i_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_48 = ATgetArgument(t, 0);
          {
            ATerm j_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_34);
      t = q_48;
    }
  else
    {
      t = g_34;
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
static ATerm a_4 (ATerm t)
{
  ATerm t_48 = NULL;
  t_48 = t;
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_49 = NULL,u_20 = NULL,w_20 = NULL,s_21 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            b_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_48);
        u_20 = t;
        t = b_49;
        t = ContextVar_0_0(t);
        w_20 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, w_20);
        s_21 = t;
        t = SSLsetAnnotations(s_21, u_20);
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, t_48);
  return(t);
}
static ATerm k_10 (ATerm d_136 (ATerm), ATerm m_75, ATerm j_75, ATerm k_75, ATerm t_75, ATerm x_75, ATerm y_75, ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,m_45 = NULL,q_45 = NULL,r_45 = NULL,v_45 = NULL,w_45 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_75, term_g_22);
  {
    ATerm n_34 = t;
    if((PushChoice() == 0))
      {
        ATerm x_45 = NULL;
        if(match_cons(t, sym__2))
          {
            x_45 = ATgetArgument(t, 0);
            if((x_45 != ATgetArgument(t, 1)))
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
        t = n_34;
      }
  }
  t = term_p_34;
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_34, m_75);
  t = z_11(w_45, m_75, t);
  z_44 = t;
  t = term_q_34;
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_34, m_75);
  t = z_11(v_45, m_75, t);
  a_45 = t;
  t = new_0_0(t);
  b_45 = t;
  t = j_75;
  t = map_1_0(l_3, t);
  c_45 = t;
  t = k_75;
  t = map_1_0(r_3, t);
  d_45 = t;
  t = new_0_0(t);
  e_45 = t;
  t = t_75;
  t = dummify_0_0(t);
  g_45 = t;
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_45;
        if((t_75 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, e_45);
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = g_45;
      }
  }
  f_45 = t;
  t = g_45;
  t = free_vars_3_0(s_3, t_3, tboundin_3_0, t);
  t = map_1_0(w_3, t);
  i_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_75, y_75);
  t = free_vars_3_0(x_3, y_3, tboundin_3_0, t);
  t = filter_1_0(a_4, t);
  h_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_45, i_45);
  t = diff_0_0(t);
  m_45 = t;
  t = new_0_0(t);
  q_45 = t;
  t = m_75;
  t = d_136(t);
  r_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, r_45, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(CheckATermList(m_45), (ATerm) ATmakeAppl(sym_Str_1, q_45)))), g_45)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, a_45, j_75, k_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(CheckATermList(m_45), (ATerm) ATmakeAppl(sym_Str_1, q_45)))), t_75)), x_75, (ATerm) ATmakeAppl(sym_Seq_2, term_h_35, y_75)))), (ATerm) ATmakeAppl(sym_RDefT_4, z_44, j_75, k_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_45), t_75), (ATerm)ATmakeAppl(sym_Var_1, b_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_75)))), f_45), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_y_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_45), c_45, d_45), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_z_34), (ATerm) ATmakeAppl(sym_Var_1, e_45)))))), (ATerm) ATmakeAppl(sym_Var_1, b_45)))))), (ATerm) ATmakeAppl(sym_RDefT_4, m_75, j_75, k_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_45), t_75), x_75, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_h_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_75)))), f_45), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_t_22, (ATerm) ATinsert(CheckATermList(m_45), (ATerm) ATmakeAppl(sym_Str_1, q_45)))), term_w_34))), y_75)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm i_35 = t;
  int j_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
      m_21 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          n_21 = ATgetArgument(t, 0);
          o_21 = ATgetArgument(t, 1);
          p_21 = ATgetArgument(t, 2);
          a_22 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = a_22;
      if(match_cons(t, sym_Rule_3))
        {
          b_22 = ATgetArgument(t, 0);
          c_22 = ATgetArgument(t, 1);
          d_22 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = m_21;
      t = k_10(d_4, n_21, o_21, p_21, b_22, c_22, d_22, t);
      LocalPopChoice(j_35);
    }
  else
    {
      t = i_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(e_4, t);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm k_22 = NULL;
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_22))));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, l_22))));
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_30;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm m_22 = NULL,n_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_22 = ATgetFirst((ATermList) t);
      n_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_22, n_22);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_35 = ATgetArgument(t, 0);
      if(match_cons(p_35, sym__2))
        {
          o_22 = ATgetArgument(p_35, 0);
          p_22 = ATgetArgument(p_35, 1);
        }
      else
        _fail(t);
      {
        ATerm q_35 = ATgetArgument(t, 1);
        if(match_cons(q_35, sym__2))
          {
            q_22 = ATgetArgument(q_35, 0);
            r_22 = ATgetArgument(q_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_22), o_22), (ATerm) ATinsert(CheckATermList(r_22), p_22));
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm r_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,c_24 = NULL;
      s_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          t_23 = ATgetArgument(t, 0);
          u_23 = ATgetArgument(t, 1);
          x_23 = ATgetArgument(t, 2);
          y_23 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = y_23;
      if(match_cons(t, sym_Rule_3))
        {
          z_23 = ATgetArgument(t, 0);
          a_24 = ATgetArgument(t, 1);
          c_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_23;
      t = k_10(q_4, t_23, u_23, x_23, z_23, a_24, c_24, t);
      LocalPopChoice(s_35);
    }
  else
    {
      t = r_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(r_4, t);
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm x_24 = NULL;
  x_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, x_24))));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_24))));
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_30;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm z_24 = NULL,a_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_24 = ATgetFirst((ATermList) t);
      a_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_24, a_25);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm f_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_35 = ATgetArgument(t, 0);
      if(match_cons(y_35, sym__2))
        {
          f_25 = ATgetArgument(y_35, 0);
          h_25 = ATgetArgument(y_35, 1);
        }
      else
        _fail(t);
      {
        ATerm z_35 = ATgetArgument(t, 1);
        if(match_cons(z_35, sym__2))
          {
            i_25 = ATgetArgument(z_35, 0);
            j_25 = ATgetArgument(z_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_25), f_25), (ATerm) ATinsert(CheckATermList(j_25), h_25));
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(x_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm w_55 = NULL;
  w_55 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_55))));
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_30;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_55 = ATgetFirst((ATermList) t);
      y_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_55, y_55);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm z_55 = NULL,b_56 = NULL,c_56 = NULL,i_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_36 = ATgetArgument(t, 0);
      if(match_cons(d_36, sym__2))
        {
          z_55 = ATgetArgument(d_36, 0);
          b_56 = ATgetArgument(d_36, 1);
        }
      else
        _fail(t);
      {
        ATerm e_36 = ATgetArgument(t, 1);
        if(match_cons(e_36, sym__2))
          {
            c_56 = ATgetArgument(e_36, 0);
            i_56 = ATgetArgument(e_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_56), z_55), (ATerm) ATinsert(CheckATermList(i_56), b_56));
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(l_5, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm n_56 = NULL;
  n_56 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_g_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, n_56))));
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_30;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_56 = ATgetFirst((ATermList) t);
      t_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_56, t_56);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_36 = ATgetArgument(t, 0);
      if(match_cons(h_36, sym__2))
        {
          u_56 = ATgetArgument(h_36, 0);
          v_56 = ATgetArgument(h_36, 1);
        }
      else
        _fail(t);
      {
        ATerm j_36 = ATgetArgument(t, 1);
        if(match_cons(j_36, sym__2))
          {
            w_56 = ATgetArgument(j_36, 0);
            x_56 = ATgetArgument(j_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_56), u_56), (ATerm) ATinsert(CheckATermList(x_56), v_56));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL;
  r_55 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      s_55 = ATgetArgument(t, 0);
      {
        ATerm c_21 = NULL,d_21 = NULL,f_21 = NULL,g_21 = NULL,j_21 = NULL,u_21 = NULL;
        t = s_55;
        t = map_1_0(c_4, t);
        t = genzip_4_0(f_4, h_4, n_4, _id, t);
        j_21 = t;
        if(match_cons(t, sym__2))
          {
            d_21 = ATgetArgument(t, 0);
            f_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_21);
        c_21 = t;
        t = f_21;
        t = concat_0_0(t);
        g_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_21, g_21);
        u_21 = t;
        t = SSLsetAnnotations(u_21, c_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          s_55 = ATgetArgument(t, 0);
          {
            ATerm m_23 = NULL,n_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,v_21 = NULL;
            t = s_55;
            t = map_1_0(p_4, t);
            t = genzip_4_0(t_4, u_4, v_4, _id, t);
            r_23 = t;
            if(match_cons(t, sym__2))
              {
                n_23 = ATgetArgument(t, 0);
                p_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(r_23);
            m_23 = t;
            t = p_23;
            t = concat_0_0(t);
            q_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_23, q_23);
            v_21 = t;
            t = SSLsetAnnotations(v_21, m_23);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              s_55 = ATgetArgument(t, 0);
              t = s_55;
              t = map_1_0(w_4, t);
              t = genzip_4_0(y_4, a_5, d_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  s_55 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = s_55;
              t = map_1_0(e_5, t);
              t = genzip_4_0(m_5, p_5, t_5, _id, t);
            }
        }
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm f_136 (ATerm), ATerm t)
{
  static ATerm p_57 (ATerm t)
  {
    static ATerm v_5 (ATerm t)
    {
      ATerm l_36 = t;
      int n_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_136(t);
          LocalPopChoice(n_36);
        }
      else
        {
          t = l_36;
          {
            ATerm g_57 = NULL,l_57 = NULL,o_57 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                g_57 = ATgetArgument(t, 0);
                l_57 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, g_57, l_57);
            {
              static ATerm x_5 (ATerm t)
              {
                t = g_57;
                t = DeclareContextVars_0_0(t);
                t = l_57;
                t = p_57(t);
                if(((o_57 != NULL) && (o_57 != t)))
                  _fail(t);
                else
                  o_57 = t;
                return(t);
              }
              t = scope_2_0(w_5, x_5, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, g_57, not_null(o_57));
          }
        }
      return(t);
    }
    t = oncetd_1_0(v_5, t);
    return(t);
  }
  t = p_57(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_k_36;
  return(t);
}
static ATerm m_10 (ATerm m_76, ATerm l_76, ATerm t)
{
  ATerm q_57 = NULL,t_57 = NULL,u_57 = NULL;
  static ATerm z_5 (ATerm t)
  {
    t = m_76;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = m_76;
    {
      static ATerm a_6 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((t_57 != NULL) && (t_57 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              t_57 = ATgetArgument(t, 0);
            if(((q_57 != NULL) && (q_57 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              q_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, t_57);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(a_6, t);
    }
    if(((u_57 != NULL) && (u_57 != t)))
      _fail(t);
    else
      u_57 = t;
    return(t);
  }
  t = scope_2_0(y_5, z_5, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_57)), not_null(u_57)), l_76);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm z_57 = NULL,e_58 = NULL,g_58 = NULL,h_58 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      g_58 = ATgetArgument(t, 0);
      h_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_58;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_57 = ATgetFirst((ATermList) t);
      e_58 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_p_36, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, e_58, h_58)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_57))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_58;
    }
  return(t);
}
static ATerm x_59 (ATerm f_59, ATerm t)
{
  t = SSL_is_string(f_59);
  return(t);
}
static ATerm a_60 (ATerm o_59, ATerm t)
{
  ATerm q_59 = NULL,s_59 = NULL,t_59 = NULL;
  t = term_q_36;
  s_59 = t;
  t = (ATerm) ATinsert(ATempty, term_r_36);
  t_59 = t;
  t = SSL_printnl(s_59, t_59);
  t = o_59;
  t = debug_1_0(b_6, t);
  t = term_t_36;
  q_59 = t;
  t = SSL_exit(q_59);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  t = term_u_36;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm u_59 = NULL,v_59 = NULL;
  v_59 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      u_59 = ATgetArgument(t, 0);
      {
        ATerm w_36 = t;
        int x_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_59(v_59, t);
            LocalPopChoice(x_36);
          }
        else
          {
            t = w_36;
            t = u_59;
          }
      }
    }
  else
    {
      ATerm y_36 = t;
      int z_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_59(v_59, t);
          LocalPopChoice(z_36);
        }
      else
        {
          t = y_36;
          t = a_60(v_59, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm p_60 = NULL,t_60 = NULL,v_60 = NULL,w_60 = NULL,x_60 = NULL,c_61 = NULL,f_61 = NULL;
  if(match_cons(t, sym_UndefineDynRule_3))
    {
      t_60 = ATgetArgument(t, 0);
      f_61 = ATgetArgument(t, 1);
      p_60 = ATgetArgument(t, 2);
      t = t_60;
      if(match_cons(t, sym_DynRuleId_1))
        {
          v_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_60;
      if(match_cons(t, sym_RDecT_3))
        {
          w_60 = ATgetArgument(t, 0);
          x_60 = ATgetArgument(t, 1);
          c_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, w_60, x_60, c_61, (ATerm) ATmakeAppl(sym_Rule_3, f_61, term_g_22, p_60));
    }
  else
    {
      if(match_cons(t, sym_UndefineDynRuleNoCond_2))
        {
          t_60 = ATgetArgument(t, 0);
          f_61 = ATgetArgument(t, 1);
          t = t_60;
          if(match_cons(t, sym_DynRuleId_1))
            {
              v_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_60;
          if(match_cons(t, sym_RDecT_3))
            {
              w_60 = ATgetArgument(t, 0);
              x_60 = ATgetArgument(t, 1);
              c_61 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, w_60, x_60, c_61, (ATerm) ATmakeAppl(sym_Rule_3, f_61, term_g_22, term_j_20));
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              t_60 = ATgetArgument(t, 0);
              f_61 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_60;
          if(match_cons(t, sym_DynRuleId_1))
            {
              v_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_60;
          if(match_cons(t, sym_RDecT_3))
            {
              w_60 = ATgetArgument(t, 0);
              x_60 = ATgetArgument(t, 1);
              c_61 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, w_60, x_60, c_61, f_61);
        }
    }
  return(t);
}
static ATerm n_65 (ATerm x_62, ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL,g_63 = NULL;
  t = x_62;
  if(match_cons(t, sym_GenDynRules_1))
    {
      f_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_63;
  t = filter_1_0(d_6, t);
  g_63 = t;
  t = x_62;
  if(match_cons(t, sym_GenDynRules_1))
    {
      d_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_63;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  e_63 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, g_63), (ATerm) ATmakeAppl(sym_DynamicRules_1, e_63));
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm a_37 = ATgetArgument(t, 0);
      if(match_cons(a_37, sym_DynRuleId_1))
        {
          ATerm b_37 = ATgetArgument(a_37, 0);
          if(match_cons(b_37, sym_RDecT_3))
            {
              k_64 = ATgetArgument(b_37, 0);
              l_64 = ATgetArgument(b_37, 1);
              m_64 = ATgetArgument(b_37, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      n_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, k_64, l_64, m_64, n_64);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm c_37 = ATgetArgument(t, 0);
      ATerm f_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm o_64 = NULL,p_64 = NULL;
  p_64 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      o_64 = ATgetArgument(t, 0);
      {
        ATerm h_37 = t;
        int i_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_25 = NULL;
            t = o_64;
            {
              ATerm l_37 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(e_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = l_37;
                }
            }
            t = o_64;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            p_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, p_25);
            LocalPopChoice(i_37);
          }
        else
          {
            t = h_37;
            t = n_65(p_64, t);
          }
      }
    }
  else
    {
      t = n_65(p_64, t);
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm o_37 = t;
  int p_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_65 = NULL;
      q_65 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm q_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_65;
      LocalPopChoice(p_37);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = o_37;
      {
        ATerm r_37 = t;
        int s_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_67 = NULL;
            r_67 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm t_37 = ATgetArgument(t, 0);
                ATerm u_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_67;
            LocalPopChoice(s_37);
            {
              ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  x_67 = ATgetArgument(t, 0);
                  y_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_67;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              z_67 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, z_67, y_67);
            }
          }
        else
          {
            t = r_37;
          }
      }
    }
  return(t);
}
ATerm downgrade_new_dr_syntax_0_0 (ATerm t)
{
  t = topdown_1_0(h_6, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = Cons_2_0(k_6, l_6, t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL,y_21 = NULL;
  b_69 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      z_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_69);
  y_68 = t;
  t = z_68;
  t = topdown_1_0(q_6, t);
  t = listtd_1_0(r_6, t);
  a_69 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_69);
  y_21 = t;
  t = SSLsetAnnotations(y_21, y_68);
  return(t);
}
static ATerm l_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm v_37 = t;
  int w_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(w_37);
    }
  else
    {
      t = v_37;
    }
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = repeat_2_0(s_6, _id, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm e_69 = NULL,g_69 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_69 = ATgetFirst((ATermList) t);
      g_69 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_10(e_69, g_69, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm o_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL,w_68 = NULL,u_22 = NULL,z_21 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  w_68 = t;
  if(match_cons(t, sym_Specification_1))
    {
      q_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_68);
  o_68 = t;
  t = q_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_68 = ATgetFirst((ATermList) t);
      t_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_68);
  r_68 = t;
  t = t_68;
  t = Cons_2_0(_id, j_6, t);
  u_68 = t;
  t = (ATerm) ATinsert(CheckATermList(u_68), s_68);
  z_21 = t;
  t = SSLsetAnnotations(z_21, r_68);
  v_68 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_68);
  u_22 = t;
  t = SSLsetAnnotations(u_22, o_68);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm y_69 = NULL;
  y_69 = t;
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_26 = NULL;
        t = term_k_36;
        q_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_36, y_69);
        t = o_11(q_26, y_69, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm z_37 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_37) != ATmakeSymbol("p_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = y_69;
        LocalPopChoice(y_37);
      }
    else
      {
        t = x_37;
        {
          ATerm j_27 = NULL;
          t = term_k_36;
          j_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_36, y_69);
          t = o_11(j_27, y_69, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm a_38 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_38) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = y_69;
        }
      }
  }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL;
  a_71 = t;
  {
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm d_38 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(c_38);
        t = a_71;
        {
          ATerm e_38 = t;
          if((PushChoice() == 0))
            {
              ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL,t_28 = NULL,d_23 = NULL;
              t_28 = t;
              if(match_cons(t, sym_Var_1))
                {
                  o_28 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(t_28);
              n_28 = t;
              t = o_28;
              {
                ATerm f_38 = t;
                int g_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(g_38);
                  }
                else
                  {
                    t = f_38;
                    {
                      ATerm i_29 = NULL,p_29 = NULL,t_29 = NULL,c_23 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          i_29 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(o_28);
                      p_29 = t;
                      t = i_29;
                      t = ContextVar_0_0(t);
                      t_29 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, t_29);
                      c_23 = t;
                      t = SSLsetAnnotations(c_23, p_29);
                    }
                  }
              }
              p_28 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, p_28);
              d_23 = t;
              t = SSLsetAnnotations(d_23, n_28);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_38;
            }
        }
        t = term_u_24;
      }
    else
      {
        t = b_38;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_u_24;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                b_71 = ATgetArgument(t, 0);
                {
                  ATerm y_71 = NULL;
                  t = b_71;
                  t = free_vars_3_0(u_6, v_6, tboundin_3_0, t);
                  t = map_1_0(y_6, t);
                  y_71 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_38, y_71);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    b_71 = ATgetArgument(t, 0);
                    c_71 = ATgetArgument(t, 1);
                    {
                      ATerm e_77 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, b_71, c_71);
                      t = free_vars_3_0(z_6, a_7, tboundin_3_0, t);
                      t = map_1_0(d_7, t);
                      e_77 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_h_38, e_77);
                    }
                  }
                else
                  {
                    ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm i_38 = ATgetArgument(t, 0);
                        ATerm j_38 = ATgetArgument(t, 1);
                        ATerm k_38 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_q_36;
                    w_29 = t;
                    t = (ATerm) ATinsert(ATempty, term_l_38);
                    x_29 = t;
                    t = SSL_printnl(w_29, x_29);
                    t = term_t_36;
                    v_29 = t;
                    t = SSL_exit(v_29);
                    t = (ATerm) ATinsert(ATempty, term_l_38);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm z_71 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_71);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm n_38 = t;
  int s_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_38);
    }
  else
    {
      t = n_38;
      {
        ATerm t_38 = t;
        int u_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(u_38);
          }
        else
          {
            t = t_38;
            {
              ATerm v_38 = t;
              int b_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_72 = NULL,o_73 = NULL,p_73 = NULL,q_73 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_72 = ATgetArgument(t, 0);
                      o_73 = ATgetArgument(t, 1);
                      p_73 = ATgetArgument(t, 2);
                      q_73 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = p_73;
                  t = map_1_0(w_6, t);
                  LocalPopChoice(b_39);
                }
              else
                {
                  t = v_38;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm k_74 = NULL;
  ATerm c_39 = t;
  int d_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_74 = ATgetArgument(t, 0);
          {
            ATerm g_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_39);
      t = k_74;
    }
  else
    {
      t = c_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_74 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_74;
    }
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm q_76 = NULL;
  q_76 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_76);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm f_77 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_77);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm h_39 = t;
  int k_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_39);
    }
  else
    {
      t = h_39;
      {
        ATerm l_39 = t;
        int m_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_39);
          }
        else
          {
            t = l_39;
            {
              ATerm n_39 = t;
              int o_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_77 = ATgetArgument(t, 0);
                      w_77 = ATgetArgument(t, 1);
                      x_77 = ATgetArgument(t, 2);
                      y_77 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_77;
                  t = map_1_0(b_7, t);
                  LocalPopChoice(o_39);
                }
              else
                {
                  t = n_39;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm s_78 = NULL;
  ATerm p_39 = t;
  int q_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_78 = ATgetArgument(t, 0);
          {
            ATerm r_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_39);
      t = s_78;
    }
  else
    {
      t = p_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_78;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm y_78 = NULL;
  y_78 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_78);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(t_6, t);
  return(t);
}
ATerm debug_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm y_79 = NULL,a_80 = NULL,b_80 = NULL,p_80 = NULL;
  y_79 = t;
  t = a_110(t);
  a_80 = t;
  t = term_q_36;
  b_80 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_79), a_80);
  p_80 = t;
  t = SSL_printnl(b_80, p_80);
  t = y_79;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_s_39;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm x_81 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_81 = ATgetArgument(t, 0);
      t = x_81;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_81 = ATgetArgument(t, 0);
          {
            ATerm t_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_81;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_81), (ATerm) ATempty);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm d_82 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_82 = ATgetArgument(t, 0);
      t = d_82;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_82 = ATgetArgument(t, 0);
          {
            ATerm u_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_82;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, d_82);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm h_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_82);
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm w_39 = t;
  int x_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_39);
    }
  else
    {
      t = w_39;
      {
        ATerm i_40 = t;
        int j_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_40);
          }
        else
          {
            t = i_40;
            {
              ATerm l_40 = t;
              int q_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      j_82 = ATgetArgument(t, 0);
                      k_82 = ATgetArgument(t, 1);
                      l_82 = ATgetArgument(t, 2);
                      m_82 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_82;
                  t = map_1_0(l_7, t);
                  LocalPopChoice(q_40);
                }
              else
                {
                  t = l_40;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm t_82 = NULL;
  ATerm r_40 = t;
  int s_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_82 = ATgetArgument(t, 0);
          {
            ATerm t_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_40);
      t = t_82;
    }
  else
    {
      t = r_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_82;
    }
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm w_82 = NULL;
  w_82 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, w_82);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm z_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_82);
  return(t);
}
static ATerm o_7 (ATerm t)
{
  ATerm u_40 = t;
  int v_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_40);
    }
  else
    {
      t = u_40;
      {
        ATerm w_40 = t;
        int x_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_40);
          }
        else
          {
            t = w_40;
            {
              ATerm y_40 = t;
              int z_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_83 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      b_83 = ATgetArgument(t, 0);
                      c_83 = ATgetArgument(t, 1);
                      d_83 = ATgetArgument(t, 2);
                      e_83 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = d_83;
                  t = map_1_0(p_7, t);
                  LocalPopChoice(z_40);
                }
              else
                {
                  t = y_40;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm m_83 = NULL;
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_83 = ATgetArgument(t, 0);
          {
            ATerm c_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_41);
      t = m_83;
    }
  else
    {
      t = a_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_83;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm q_83 = NULL;
  q_83 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_83);
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm r_83 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_83);
  return(t);
}
static ATerm u_7 (ATerm t)
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
        ATerm f_41 = t;
        int g_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_41);
          }
        else
          {
            t = f_41;
            {
              ATerm j_41 = t;
              int k_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      x_83 = ATgetArgument(t, 0);
                      y_83 = ATgetArgument(t, 1);
                      z_83 = ATgetArgument(t, 2);
                      a_84 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = z_83;
                  t = map_1_0(v_7, t);
                  LocalPopChoice(k_41);
                }
              else
                {
                  t = j_41;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm j_84 = NULL;
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_84 = ATgetArgument(t, 0);
          {
            ATerm q_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_41);
      t = j_84;
    }
  else
    {
      t = o_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_84;
    }
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm o_84 = NULL;
  o_84 = t;
  {
    ATerm r_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_84 = NULL,z_29 = NULL,b_30 = NULL,g_23 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            u_84 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_84);
        z_29 = t;
        t = u_84;
        t = ContextVar_0_0(t);
        b_30 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, b_30);
        g_23 = t;
        t = SSLsetAnnotations(g_23, z_29);
        LocalPopChoice(u_41);
      }
    else
      {
        t = r_41;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, o_84);
  return(t);
}
static ATerm v_10 (ATerm l_136 (ATerm), ATerm v_79, ATerm s_79, ATerm t_79, ATerm f_80, ATerm j_80, ATerm k_80, ATerm t)
{
  ATerm b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL,l_81 = NULL,m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL;
  t = debug_1_0(e_7, t);
  t = (ATerm) ATmakeAppl(sym__2, j_80, term_g_22);
  {
    ATerm v_41 = t;
    if((PushChoice() == 0))
      {
        ATerm u_81 = NULL;
        if(match_cons(t, sym__2))
          {
            u_81 = ATgetArgument(t, 0);
            if((u_81 != ATgetArgument(t, 1)))
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
        t = v_41;
      }
  }
  t = term_p_34;
  t_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_34, v_79);
  t = z_11(t_81, v_79, t);
  c_81 = t;
  t = term_q_34;
  s_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_34, v_79);
  t = z_11(s_81, v_79, t);
  d_81 = t;
  t = new_0_0(t);
  t = s_79;
  t = map_1_0(f_7, t);
  e_81 = t;
  t = t_79;
  t = map_1_0(g_7, t);
  f_81 = t;
  t = f_80;
  t = free_vars_3_0(i_7, k_7, tboundin_3_0, t);
  g_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_79, g_81);
  t = conc_0_0(t);
  b_81 = t;
  t = g_81;
  t = map_1_0(m_7, t);
  r_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_81, r_81);
  t = conc_0_0(t);
  h_81 = t;
  t = new_0_0(t);
  i_81 = t;
  t = f_80;
  t = dummify_0_0(t);
  k_81 = t;
  {
    ATerm w_41 = t;
    int x_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_81;
        if((f_80 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, i_81);
        LocalPopChoice(x_41);
      }
    else
      {
        t = w_41;
        t = k_81;
      }
  }
  j_81 = t;
  t = k_81;
  t = free_vars_3_0(n_7, o_7, tboundin_3_0, t);
  t = map_1_0(q_7, t);
  m_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_80, k_80);
  t = free_vars_3_0(r_7, u_7, tboundin_3_0, t);
  t = filter_1_0(w_7, t);
  l_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_81, m_81);
  t = diff_0_0(t);
  n_81 = t;
  t = new_0_0(t);
  o_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_81, (ATerm) ATmakeAppl(sym_Op_2, term_y_41, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, n_81)), (ATerm) ATmakeAppl(sym_Str_1, o_81))));
  t = l_136(t);
  p_81 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, p_81), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, c_81, s_79, t_79, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, i_81), f_80), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_y_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_81), e_81, h_81))), term_g_42), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_CallT_3, term_i_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, j_81), (ATerm) ATmakeAppl(sym_Str_1, v_79))), term_j_42), term_g_42)))), (ATerm) ATmakeAppl(sym_RDefT_4, v_79, s_79, t_79, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, i_81), f_80), (ATerm)ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_Call_2, term_a_42, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_81), e_81, h_81))), term_g_42), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_CallT_3, term_i_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, j_81), (ATerm) ATmakeAppl(sym_Str_1, v_79))), term_g_42)))), (ATerm) ATmakeAppl(sym_RDefT_4, d_81, s_79, b_81, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_y_41, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, n_81)), (ATerm) ATmakeAppl(sym_Str_1, o_81))), j_80, k_80))));
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm l_136 (ATerm), ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,c_85 = NULL,d_85 = NULL;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm k_42 = ATgetArgument(t, 0);
      if(match_cons(k_42, sym_DynRuleId_1))
        {
          ATerm m_42 = ATgetArgument(k_42, 0);
          if(match_cons(m_42, sym_RDecT_3))
            {
              w_84 = ATgetArgument(m_42, 0);
              x_84 = ATgetArgument(m_42, 1);
              y_84 = ATgetArgument(m_42, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm l_42 = ATgetArgument(t, 1);
        if(match_cons(l_42, sym_Rule_3))
          {
            z_84 = ATgetArgument(l_42, 0);
            c_85 = ATgetArgument(l_42, 1);
            d_85 = ATgetArgument(l_42, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_10(l_136, w_84, x_84, y_84, z_84, c_85, d_85, t);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm o_85 = NULL,q_85 = NULL,t_85 = NULL,u_85 = NULL,v_85 = NULL,w_85 = NULL,y_85 = NULL,z_85 = NULL;
  q_85 = t;
  if(match_cons(t, sym_AddDynRule_2))
    {
      t_85 = ATgetArgument(t, 0);
      z_85 = ATgetArgument(t, 1);
      t = t_85;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          u_85 = ATgetArgument(t, 0);
          o_85 = ATgetArgument(t, 1);
          {
            static ATerm y_7 (ATerm t)
            {
              ATerm h_86 = NULL,l_86 = NULL,h_30 = NULL;
              h_86 = t;
              t = SSL_explode_term(h_86);
              if(match_cons(t, sym__2))
                {
                  ATerm q_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) q_42) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm s_42 = ATgetArgument(t, 1);
                    if(((ATgetType(s_42) == AT_LIST) && !(ATisEmpty(s_42))))
                      {
                        l_86 = ATgetFirst((ATermList) s_42);
                        {
                          ATerm t_42 = (ATerm) ATgetNext((ATermList) s_42);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(h_86);
              if(match_cons(t, sym__2))
                {
                  ATerm u_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) u_42) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm v_42 = ATgetArgument(t, 1);
                    if(((ATgetType(v_42) == AT_LIST) && !(ATisEmpty(v_42))))
                      {
                        ATerm x_42 = ATgetFirst((ATermList) v_42);
                        ATerm c_43 = (ATerm) ATgetNext((ATermList) v_42);
                        if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
                          {
                            h_30 = ATgetFirst((ATermList) c_43);
                            {
                              ATerm e_43 = (ATerm) ATgetNext((ATermList) c_43);
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
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_43, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, h_30), l_86), o_85), (ATerm) ATmakeAppl(sym_Str_1, not_null(v_85))));
              return(t);
            }
            t = u_85;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((v_85 != NULL) && (v_85 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_85 = ATgetArgument(t, 0);
                w_85 = ATgetArgument(t, 1);
                y_85 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, v_85, w_85, y_85)), z_85);
            t = SplitDynamicRule_1_0(y_7, t);
          }
        }
      else
        {
          static ATerm h_8 (ATerm t)
          {
            ATerm r_86 = NULL,s_86 = NULL,r_30 = NULL;
            r_86 = t;
            t = SSL_explode_term(r_86);
            if(match_cons(t, sym__2))
              {
                ATerm i_43 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) i_43) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm j_43 = ATgetArgument(t, 1);
                  if(((ATgetType(j_43) == AT_LIST) && !(ATisEmpty(j_43))))
                    {
                      s_86 = ATgetFirst((ATermList) j_43);
                      {
                        ATerm k_43 = (ATerm) ATgetNext((ATermList) j_43);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_explode_term(r_86);
            if(match_cons(t, sym__2))
              {
                ATerm m_43 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) m_43) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm o_43 = ATgetArgument(t, 1);
                  if(((ATgetType(o_43) == AT_LIST) && !(ATisEmpty(o_43))))
                    {
                      ATerm p_43 = ATgetFirst((ATermList) o_43);
                      ATerm q_43 = (ATerm) ATgetNext((ATermList) o_43);
                      if(((ATgetType(q_43) == AT_LIST) && !(ATisEmpty(q_43))))
                        {
                          r_30 = ATgetFirst((ATermList) q_43);
                          {
                            ATerm r_43 = (ATerm) ATgetNext((ATermList) q_43);
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
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_43, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_30), s_86), (ATerm) ATmakeAppl(sym_Str_1, not_null(v_85))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              u_85 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_85;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((v_85 != NULL) && (v_85 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_85 = ATgetArgument(t, 0);
              w_85 = ATgetArgument(t, 1);
              y_85 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, v_85, w_85, y_85)), z_85);
          t = SplitDynamicRule_1_0(h_8, t);
        }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          t_85 = ATgetArgument(t, 0);
          z_85 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_85;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          u_85 = ATgetArgument(t, 0);
          o_85 = ATgetArgument(t, 1);
          {
            static ATerm l_8 (ATerm t)
            {
              ATerm z_86 = NULL,a_87 = NULL,z_30 = NULL;
              z_86 = t;
              t = SSL_explode_term(z_86);
              if(match_cons(t, sym__2))
                {
                  ATerm s_43 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_43) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm t_43 = ATgetArgument(t, 1);
                    if(((ATgetType(t_43) == AT_LIST) && !(ATisEmpty(t_43))))
                      {
                        a_87 = ATgetFirst((ATermList) t_43);
                        {
                          ATerm u_43 = (ATerm) ATgetNext((ATermList) t_43);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(z_86);
              if(match_cons(t, sym__2))
                {
                  ATerm w_43 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) w_43) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm y_43 = ATgetArgument(t, 1);
                    if(((ATgetType(y_43) == AT_LIST) && !(ATisEmpty(y_43))))
                      {
                        ATerm z_43 = ATgetFirst((ATermList) y_43);
                        ATerm a_44 = (ATerm) ATgetNext((ATermList) y_43);
                        if(((ATgetType(a_44) == AT_LIST) && !(ATisEmpty(a_44))))
                          {
                            z_30 = ATgetFirst((ATermList) a_44);
                            {
                              ATerm b_44 = (ATerm) ATgetNext((ATermList) a_44);
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
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, z_30), a_87), o_85), (ATerm) ATmakeAppl(sym_Str_1, not_null(v_85))));
              return(t);
            }
            t = u_85;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((v_85 != NULL) && (v_85 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_85 = ATgetArgument(t, 0);
                w_85 = ATgetArgument(t, 1);
                y_85 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, v_85, w_85, y_85)), z_85);
            t = SplitDynamicRule_1_0(l_8, t);
          }
        }
      else
        {
          static ATerm o_8 (ATerm t)
          {
            ATerm e_87 = NULL,h_87 = NULL,b_31 = NULL;
            e_87 = t;
            t = SSL_explode_term(e_87);
            if(match_cons(t, sym__2))
              {
                ATerm f_44 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) f_44) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm h_44 = ATgetArgument(t, 1);
                  if(((ATgetType(h_44) == AT_LIST) && !(ATisEmpty(h_44))))
                    {
                      h_87 = ATgetFirst((ATermList) h_44);
                      {
                        ATerm i_44 = (ATerm) ATgetNext((ATermList) h_44);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_explode_term(e_87);
            if(match_cons(t, sym__2))
              {
                ATerm j_44 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_44) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm k_44 = ATgetArgument(t, 1);
                  if(((ATgetType(k_44) == AT_LIST) && !(ATisEmpty(k_44))))
                    {
                      ATerm l_44 = ATgetFirst((ATermList) k_44);
                      ATerm p_44 = (ATerm) ATgetNext((ATermList) k_44);
                      if(((ATgetType(p_44) == AT_LIST) && !(ATisEmpty(p_44))))
                        {
                          b_31 = ATgetFirst((ATermList) p_44);
                          {
                            ATerm r_44 = (ATerm) ATgetNext((ATermList) p_44);
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
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_44, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_31), h_87), (ATerm) ATmakeAppl(sym_Str_1, not_null(v_85))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              u_85 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_85;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((v_85 != NULL) && (v_85 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                v_85 = ATgetArgument(t, 0);
              {
                ATerm s_44 = ATgetArgument(t, 1);
              }
              {
                ATerm t_44 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = q_85;
          t = SplitDynamicRule_1_0(o_8, t);
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  static ATerm j_87 (ATerm t)
  {
    ATerm u_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_105(t);
        LocalPopChoice(v_44);
      }
    else
      {
        t = u_44;
        t = SRTS_one(j_87, t);
      }
    return(t);
  }
  t = j_87(t);
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm i_136 (ATerm), ATerm t)
{
  static ATerm x_87 (ATerm t)
  {
    static ATerm p_8 (ATerm t)
    {
      ATerm w_44 = t;
      int y_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_136(t);
          LocalPopChoice(y_44);
        }
      else
        {
          t = w_44;
          {
            ATerm p_87 = NULL,q_87 = NULL,w_87 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                p_87 = ATgetArgument(t, 0);
                q_87 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, p_87, q_87);
            {
              static ATerm u_8 (ATerm t)
              {
                t = p_87;
                t = DeclareContextVars_0_0(t);
                t = q_87;
                t = x_87(t);
                if(((w_87 != NULL) && (w_87 != t)))
                  _fail(t);
                else
                  w_87 = t;
                return(t);
              }
              t = scope_2_0(t_8, u_8, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, p_87, not_null(w_87));
          }
        }
      return(t);
    }
    t = oncetd_1_0(p_8, t);
    return(t);
  }
  t = x_87(t);
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm b_88 = NULL,d_88 = NULL,f_88 = NULL,g_88 = NULL;
  g_88 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      f_88 = ATgetArgument(t, 0);
      {
        ATerm j_45 = t;
        int l_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_88;
            b_88 = t;
            t = g_88;
            LocalPopChoice(l_45);
          }
        else
          {
            t = j_45;
            t = g_88;
            b_88 = t;
            t = g_88;
          }
      }
    }
  else
    {
      t = g_88;
      b_88 = t;
      t = g_88;
    }
  t = term_o_45;
  d_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_88, term_o_45);
  t = p_11(y_8, b_88, d_88, t);
  t = g_88;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  t = term_k_36;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm l_88 = NULL,n_88 = NULL,o_88 = NULL,p_88 = NULL;
  p_88 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      o_88 = ATgetArgument(t, 0);
      {
        ATerm p_45 = t;
        int s_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_88;
            l_88 = t;
            t = p_88;
            LocalPopChoice(s_45);
          }
        else
          {
            t = p_45;
            t = p_88;
            l_88 = t;
            t = p_88;
          }
      }
    }
  else
    {
      t = p_88;
      l_88 = t;
      t = p_88;
    }
  t = term_u_45;
  n_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_88, term_u_45);
  t = p_11(a_9, l_88, n_88, t);
  t = p_88;
  return(t);
}
static ATerm a_9 (ATerm t)
{
  t = term_k_36;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(v_8, t);
      LocalPopChoice(z_45);
    }
  else
    {
      t = y_45;
      t = map_1_0(z_8, t);
    }
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm m_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_31);
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm a_46 = t;
  int d_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_46);
    }
  else
    {
      t = a_46;
      {
        ATerm e_46 = t;
        int f_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_46);
          }
        else
          {
            t = e_46;
            {
              ATerm g_46 = t;
              int i_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_31 = NULL,p_31 = NULL,t_31 = NULL,u_31 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_31 = ATgetArgument(t, 0);
                      p_31 = ATgetArgument(t, 1);
                      t_31 = ATgetArgument(t, 2);
                      u_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_31;
                  t = map_1_0(i_9, t);
                  LocalPopChoice(i_46);
                }
              else
                {
                  t = g_46;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm e_32 = NULL;
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_32 = ATgetArgument(t, 0);
          {
            ATerm l_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_46);
      t = e_32;
    }
  else
    {
      t = j_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_32;
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm v_32 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_32 = ATgetArgument(t, 0);
      t = v_32;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_32 = ATgetArgument(t, 0);
          {
            ATerm m_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_32;
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm h_33 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_33 = ATgetArgument(t, 0);
      t = h_33;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_33 = ATgetArgument(t, 0);
          {
            ATerm o_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_33;
    }
  return(t);
}
static ATerm m_9 (ATerm t)
{
  ATerm v_33 = NULL;
  if(match_cons(t, sym__2))
    {
      v_33 = ATgetArgument(t, 0);
      if((v_33 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm h_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_34);
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm p_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_46);
    }
  else
    {
      t = p_46;
      {
        ATerm r_46 = t;
        int s_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_46);
          }
        else
          {
            t = r_46;
            {
              ATerm u_46 = t;
              int v_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_34 = ATgetArgument(t, 0);
                      t_34 = ATgetArgument(t, 1);
                      u_34 = ATgetArgument(t, 2);
                      v_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = u_34;
                  t = map_1_0(q_9, t);
                  LocalPopChoice(v_46);
                }
              else
                {
                  t = u_46;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  ATerm l_35 = NULL;
  ATerm w_46 = t;
  int b_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_35 = ATgetArgument(t, 0);
          {
            ATerm e_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_47);
      t = l_35;
    }
  else
    {
      t = w_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_35;
    }
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm b_36 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_36 = ATgetArgument(t, 0);
      t = b_36;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_36 = ATgetArgument(t, 0);
          {
            ATerm f_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_36;
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm i_36 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_36 = ATgetArgument(t, 0);
      t = i_36;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_36 = ATgetArgument(t, 0);
          {
            ATerm i_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = i_36;
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm m_36 = NULL;
  if(match_cons(t, sym__2))
    {
      m_36 = ATgetArgument(t, 0);
      if((m_36 != ATgetArgument(t, 1)))
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
  ATerm y_93 = NULL;
  y_93 = t;
  {
    ATerm j_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_31 = NULL,j_31 = NULL;
        t = y_93;
        t = free_vars_3_0(c_9, h_9, tboundin_3_0, t);
        i_31 = t;
        t = y_93;
        {
          ATerm l_47 = t;
          int m_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_32 = NULL;
              ATerm n_47 = t;
              int p_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm q_47 = ATgetArgument(t, 0);
                      ATerm t_47 = ATgetArgument(t, 1);
                      q_32 = ATgetArgument(t, 2);
                      {
                        ATerm v_47 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_47);
                  t = q_32;
                  t = map_1_0(j_9, t);
                }
              else
                {
                  t = n_47;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm y_47 = ATgetArgument(t, 0);
                      ATerm d_48 = ATgetArgument(t, 1);
                      q_32 = ATgetArgument(t, 2);
                      {
                        ATerm e_48 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = q_32;
                  t = map_1_0(k_9, t);
                }
              LocalPopChoice(m_47);
            }
          else
            {
              t = l_47;
              t = (ATerm) ATempty;
            }
        }
        j_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_31, j_31);
        t = d_11(m_9, i_31, j_31, t);
        LocalPopChoice(k_47);
      }
    else
      {
        t = j_47;
        {
          ATerm e_34 = NULL,f_34 = NULL;
          t = y_93;
          t = free_vars_3_0(n_9, p_9, tboundin_3_0, t);
          e_34 = t;
          t = y_93;
          {
            ATerm g_48 = t;
            int h_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_35 = NULL;
                ATerm i_48 = t;
                int j_48 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm m_48 = ATgetArgument(t, 0);
                        ATerm n_48 = ATgetArgument(t, 1);
                        u_35 = ATgetArgument(t, 2);
                        {
                          ATerm o_48 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_48);
                    t = u_35;
                    t = map_1_0(r_9, t);
                  }
                else
                  {
                    t = i_48;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm p_48 = ATgetArgument(t, 0);
                        ATerm r_48 = ATgetArgument(t, 1);
                        u_35 = ATgetArgument(t, 2);
                        {
                          ATerm s_48 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = u_35;
                    t = map_1_0(s_9, t);
                  }
                LocalPopChoice(h_48);
              }
            else
              {
                t = g_48;
                t = (ATerm) ATempty;
              }
          }
          f_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_34, f_34);
          t = d_11(t_9, e_34, f_34, t);
        }
      }
  }
  return(t);
}
static ATerm u_9 (ATerm t)
{
  t = term_k_36;
  return(t);
}
static ATerm x_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_x_30;
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm m_94 = NULL,n_94 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_94 = ATgetFirst((ATermList) t);
      n_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_94, n_94);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm o_94 = NULL,q_94 = NULL,r_94 = NULL,u_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_48 = ATgetArgument(t, 0);
      if(match_cons(u_48, sym__2))
        {
          o_94 = ATgetArgument(u_48, 0);
          q_94 = ATgetArgument(u_48, 1);
        }
      else
        _fail(t);
      {
        ATerm v_48 = ATgetArgument(t, 1);
        if(match_cons(v_48, sym__2))
          {
            r_94 = ATgetArgument(v_48, 0);
            u_94 = ATgetArgument(v_48, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_94), o_94), (ATerm) ATinsert(CheckATermList(u_94), q_94));
  return(t);
}
static ATerm y_10 (ATerm n_78, ATerm m_78, ATerm t)
{
  ATerm f_94 = NULL,g_94 = NULL,h_94 = NULL;
  static ATerm v_9 (ATerm t)
  {
    t = n_78;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = n_78;
    {
      static ATerm w_9 (ATerm t)
      {
        ATerm j_94 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            j_94 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = j_94;
        t = map_1_0(SplitDynamicRule_0_0, t);
        t = genzip_4_0(x_9, y_9, z_9, _id, t);
        if(match_cons(t, sym__2))
          {
            if(((g_94 != NULL) && (g_94 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              g_94 = ATgetArgument(t, 0);
            if(((f_94 != NULL) && (f_94 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              f_94 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, g_94);
        return(t);
      }
      t = split_dynamic_rule_1_0(w_9, t);
    }
    if(((h_94 != NULL) && (h_94 != t)))
      _fail(t);
    else
      h_94 = t;
    return(t);
  }
  t = scope_2_0(u_9, v_9, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_94)), not_null(h_94)), m_78);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm t)
{
  static ATerm w_94 (ATerm t)
  {
    ATerm w_48 = t;
    int x_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_102(t);
        t = w_94(t);
        LocalPopChoice(x_48);
      }
    else
      {
        t = w_48;
        t = a_103(t);
      }
    return(t);
  }
  t = w_94(t);
  return(t);
}
ATerm listtd_1_0 (ATerm v_111 (ATerm), ATerm t)
{
  static ATerm u_95 (ATerm t)
  {
    ATerm p_95 = NULL,q_95 = NULL,r_95 = NULL;
    t = v_111(t);
    p_95 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_95;
      }
    else
      {
        ATerm s_36 = NULL,v_36 = NULL,i_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_95 = ATgetFirst((ATermList) t);
            r_95 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_95);
        s_36 = t;
        t = r_95;
        t = u_95(t);
        v_36 = t;
        t = (ATerm) ATinsert(CheckATermList(v_36), q_95);
        i_23 = t;
        t = SSLsetAnnotations(i_23, s_36);
      }
    return(t);
  }
  t = u_95(t);
  return(t);
}
ATerm DefDynRuleScope_0_0 (ATerm t)
{
  ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL,h_96 = NULL,l_96 = NULL,m_96 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      l_96 = ATgetArgument(t, 0);
      m_96 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_96;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_96 = ATgetFirst((ATermList) t);
      h_96 = (ATerm) ATgetNext((ATermList) t);
      t = e_96;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          f_96 = ATgetArgument(t, 0);
          d_96 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_48, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AddScopeLabel_2, f_96, d_96), (ATerm) ATmakeAppl(sym_DynRuleScope_2, h_96, m_96))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, f_96)));
        }
      else
        {
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              f_96 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_48, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, h_96, m_96)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, f_96)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_96;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm t_135 (ATerm), ATerm u_135 (ATerm), ATerm v_135 (ATerm), ATerm t)
{
  ATerm u_101 = NULL,y_101 = NULL,a_102 = NULL,d_102 = NULL,h_102 = NULL;
  d_102 = t;
  if(match_cons(t, sym_Scope_2))
    {
      h_102 = ATgetArgument(t, 0);
      u_101 = ATgetArgument(t, 1);
      {
        ATerm g_37 = NULL,m_37 = NULL,n_37 = NULL,k_23 = NULL;
        t = SSLgetAnnotations(d_102);
        g_37 = t;
        t = h_102;
        t = v_135(t);
        m_37 = t;
        t = u_101;
        t = t_135(t);
        n_37 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_37, n_37);
        k_23 = t;
        t = SSLsetAnnotations(k_23, g_37);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          h_102 = ATgetArgument(t, 0);
          u_101 = ATgetArgument(t, 1);
          y_101 = ATgetArgument(t, 2);
          {
            ATerm m_38 = NULL,w_38 = NULL,z_38 = NULL,a_39 = NULL,l_23 = NULL;
            t = SSLgetAnnotations(d_102);
            m_38 = t;
            t = h_102;
            t = v_135(t);
            w_38 = t;
            t = u_101;
            t = v_135(t);
            z_38 = t;
            t = y_101;
            t = v_135(t);
            a_39 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, w_38, z_38, a_39);
            l_23 = t;
            t = SSLsetAnnotations(l_23, m_38);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              h_102 = ATgetArgument(t, 0);
              u_101 = ATgetArgument(t, 1);
              y_101 = ATgetArgument(t, 2);
              a_102 = ATgetArgument(t, 3);
              {
                ATerm v_39 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,o_23 = NULL;
                t = SSLgetAnnotations(d_102);
                v_39 = t;
                t = h_102;
                t = v_135(t);
                m_40 = t;
                t = u_101;
                t = v_135(t);
                n_40 = t;
                t = y_101;
                t = v_135(t);
                o_40 = t;
                t = a_102;
                t = t_135(t);
                p_40 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, m_40, n_40, o_40, p_40);
                o_23 = t;
                t = SSLsetAnnotations(o_23, v_39);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  h_102 = ATgetArgument(t, 0);
                  u_101 = ATgetArgument(t, 1);
                  y_101 = ATgetArgument(t, 2);
                  a_102 = ATgetArgument(t, 3);
                  {
                    ATerm l_41 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,v_23 = NULL;
                    t = SSLgetAnnotations(d_102);
                    l_41 = t;
                    t = h_102;
                    t = v_135(t);
                    b_42 = t;
                    t = u_101;
                    t = v_135(t);
                    c_42 = t;
                    t = y_101;
                    t = v_135(t);
                    d_42 = t;
                    t = a_102;
                    t = t_135(t);
                    e_42 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, b_42, c_42, d_42, e_42);
                    v_23 = t;
                    t = SSLsetAnnotations(v_23, l_41);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      h_102 = ATgetArgument(t, 0);
                      {
                        ATerm w_42 = NULL,d_43 = NULL,w_23 = NULL;
                        t = SSLgetAnnotations(d_102);
                        w_42 = t;
                        t = h_102;
                        t = t_135(t);
                        d_43 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, d_43);
                        w_23 = t;
                        t = SSLsetAnnotations(w_23, w_42);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          h_102 = ATgetArgument(t, 0);
                          {
                            ATerm l_43 = NULL,n_43 = NULL,b_24 = NULL;
                            t = SSLgetAnnotations(d_102);
                            l_43 = t;
                            t = h_102;
                            t = t_135(t);
                            n_43 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, n_43);
                            b_24 = t;
                            t = SSLsetAnnotations(b_24, l_43);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              h_102 = ATgetArgument(t, 0);
                              {
                                ATerm v_43 = NULL,x_43 = NULL,d_24 = NULL;
                                t = SSLgetAnnotations(d_102);
                                v_43 = t;
                                t = h_102;
                                t = t_135(t);
                                x_43 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, x_43);
                                d_24 = t;
                                t = SSLsetAnnotations(d_24, v_43);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  h_102 = ATgetArgument(t, 0);
                                  {
                                    ATerm e_44 = NULL,g_44 = NULL,g_24 = NULL;
                                    t = SSLgetAnnotations(d_102);
                                    e_44 = t;
                                    t = h_102;
                                    t = t_135(t);
                                    g_44 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, g_44);
                                    g_24 = t;
                                    t = SSLsetAnnotations(g_24, e_44);
                                  }
                                }
                              else
                                {
                                  ATerm n_44 = NULL,q_44 = NULL,h_24 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      h_102 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(d_102);
                                  n_44 = t;
                                  t = h_102;
                                  t = t_135(t);
                                  q_44 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, q_44);
                                  h_24 = t;
                                  t = SSLsetAnnotations(h_24, n_44);
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
static ATerm p_10 (ATerm t)
{
  ATerm d_104 = NULL;
  ATerm a_49 = t;
  int c_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_104 = ATgetArgument(t, 0);
          {
            ATerm d_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_49);
      t = d_104;
    }
  else
    {
      t = a_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_104;
    }
  return(t);
}
static ATerm i_11 (ATerm t)
{
  ATerm j_104 = NULL;
  ATerm e_49 = t;
  int f_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_104 = ATgetArgument(t, 0);
          {
            ATerm g_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_49);
      t = j_104;
    }
  else
    {
      t = e_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_104;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm n_103 = NULL;
  ATerm h_49 = t;
  int i_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm j_49 = ATgetArgument(t, 0);
          ATerm k_49 = ATgetArgument(t, 1);
          n_103 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(i_49);
      t = n_103;
      t = map_1_0(p_10, t);
    }
  else
    {
      t = h_49;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm l_49 = ATgetArgument(t, 0);
          ATerm n_49 = ATgetArgument(t, 1);
          n_103 = ATgetArgument(t, 2);
          {
            ATerm o_49 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = n_103;
      t = map_1_0(i_11, t);
    }
  return(t);
}
static ATerm m_11 (ATerm t)
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
static ATerm d_12 (ATerm t)
{
  ATerm p_49 = t;
  int q_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_49);
    }
  else
    {
      t = p_49;
      {
        ATerm r_49 = t;
        int s_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(s_49);
          }
        else
          {
            t = r_49;
            {
              ATerm t_49 = t;
              int u_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL,j_105 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_105 = ATgetArgument(t, 0);
                      h_105 = ATgetArgument(t, 1);
                      i_105 = ATgetArgument(t, 2);
                      j_105 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_105;
                  t = map_1_0(n_12, t);
                  LocalPopChoice(u_49);
                }
              else
                {
                  t = t_49;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm q_105 = NULL;
  ATerm w_49 = t;
  int z_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_105 = ATgetArgument(t, 0);
          {
            ATerm a_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_49);
      t = q_105;
    }
  else
    {
      t = w_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_105 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_105;
    }
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm w_105 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_105);
  return(t);
}
static ATerm p_12 (ATerm t)
{
  ATerm b_50 = t;
  int c_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
                  ATerm y_105 = NULL,z_105 = NULL,a_106 = NULL,b_106 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_105 = ATgetArgument(t, 0);
                      z_105 = ATgetArgument(t, 1);
                      a_106 = ATgetArgument(t, 2);
                      b_106 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_106;
                  t = map_1_0(q_12, t);
                  LocalPopChoice(g_50);
                }
              else
                {
                  t = f_50;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm i_106 = NULL;
  ATerm h_50 = t;
  int i_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_106 = ATgetArgument(t, 0);
          {
            ATerm j_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_50);
      t = i_106;
    }
  else
    {
      t = h_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_106;
    }
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm m_106 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_106);
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm l_50 = t;
  int m_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_50);
    }
  else
    {
      t = l_50;
      {
        ATerm o_50 = t;
        int p_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_50);
          }
        else
          {
            t = o_50;
            {
              ATerm q_50 = t;
              int r_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_106 = NULL,p_106 = NULL,q_106 = NULL,r_106 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      o_106 = ATgetArgument(t, 0);
                      p_106 = ATgetArgument(t, 1);
                      q_106 = ATgetArgument(t, 2);
                      r_106 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_106;
                  t = map_1_0(u_12, t);
                  LocalPopChoice(r_50);
                }
              else
                {
                  t = q_50;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm y_106 = NULL;
  ATerm s_50 = t;
  int t_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_106 = ATgetArgument(t, 0);
          {
            ATerm u_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_50);
      t = y_106;
    }
  else
    {
      t = s_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_106;
    }
  return(t);
}
static ATerm v_12 (ATerm t)
{
  ATerm c_107 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_107);
  return(t);
}
static ATerm w_12 (ATerm t)
{
  ATerm v_50 = t;
  int w_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_50);
    }
  else
    {
      t = v_50;
      {
        ATerm x_50 = t;
        int y_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(y_50);
          }
        else
          {
            t = x_50;
            {
              ATerm z_50 = t;
              int a_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_107 = NULL,f_107 = NULL,g_107 = NULL,h_107 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_107 = ATgetArgument(t, 0);
                      f_107 = ATgetArgument(t, 1);
                      g_107 = ATgetArgument(t, 2);
                      h_107 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_107;
                  t = map_1_0(c_13, t);
                  LocalPopChoice(a_51);
                }
              else
                {
                  t = z_50;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm o_107 = NULL;
  ATerm b_51 = t;
  int c_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_107 = ATgetArgument(t, 0);
          {
            ATerm d_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_51);
      t = o_107;
    }
  else
    {
      t = b_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_107 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_107;
    }
  return(t);
}
static ATerm h_13 (ATerm t)
{
  ATerm s_107 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_107);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm f_51 = t;
  int h_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_51);
    }
  else
    {
      t = f_51;
      {
        ATerm i_51 = t;
        int j_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(j_51);
          }
        else
          {
            t = i_51;
            {
              ATerm k_51 = t;
              int l_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_107 = ATgetArgument(t, 0);
                      v_107 = ATgetArgument(t, 1);
                      w_107 = ATgetArgument(t, 2);
                      x_107 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_107;
                  t = map_1_0(x_13, t);
                  LocalPopChoice(l_51);
                }
              else
                {
                  t = k_51;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  ATerm e_108 = NULL;
  ATerm m_51 = t;
  int n_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_108 = ATgetArgument(t, 0);
          {
            ATerm o_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_51);
      t = e_108;
    }
  else
    {
      t = m_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_108;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm a_105 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      a_105 = ATgetArgument(t, 0);
      t = a_105;
      t = free_vars_3_0(m_11, d_12, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          a_105 = ATgetArgument(t, 0);
          t = a_105;
          t = free_vars_3_0(o_12, p_12, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              a_105 = ATgetArgument(t, 0);
              t = a_105;
              t = free_vars_3_0(r_12, t_12, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  a_105 = ATgetArgument(t, 0);
                  t = a_105;
                  t = free_vars_3_0(v_12, w_12, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      a_105 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_105;
                  t = free_vars_3_0(h_13, w_13, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm s_108 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_108);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm p_51 = t;
  int q_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_51);
    }
  else
    {
      t = p_51;
      {
        ATerm r_51 = t;
        int s_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm u_108 = NULL,v_108 = NULL,w_108 = NULL,x_108 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      u_108 = ATgetArgument(t, 0);
                      v_108 = ATgetArgument(t, 1);
                      w_108 = ATgetArgument(t, 2);
                      x_108 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = w_108;
                  t = map_1_0(j_14, t);
                  LocalPopChoice(u_51);
                }
              else
                {
                  t = t_51;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm e_109 = NULL;
  ATerm v_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_109 = ATgetArgument(t, 0);
          {
            ATerm y_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_51);
      t = e_109;
    }
  else
    {
      t = v_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_109 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_109;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm l_108 = NULL,p_108 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      p_108 = ATgetArgument(t, 0);
      t = p_108;
      if(match_cons(t, sym_Rule_3))
        {
          l_108 = ATgetArgument(t, 0);
          {
            ATerm z_51 = ATgetArgument(t, 1);
          }
          {
            ATerm a_52 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = l_108;
      t = free_vars_3_0(z_13, i_14, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          p_108 = ATgetArgument(t, 0);
          {
            ATerm b_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = p_108;
    }
  return(t);
}
static ATerm d_11 (ATerm w_114 (ATerm), ATerm m_30, ATerm l_30, ATerm t)
{
  static ATerm x_109 (ATerm t)
  {
    ATerm s_109 = NULL,t_109 = NULL,u_109 = NULL;
    s_109 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_109 = ATgetFirst((ATermList) t);
            u_109 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_52 = t;
          int f_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_109;
              {
                static ATerm k_14 (ATerm t)
                {
                  t = l_30;
                  return(t);
                }
                t = e_11(w_114, k_14, t_109, u_109, t);
              }
              t = x_109(t);
              LocalPopChoice(f_52);
            }
          else
            {
              t = c_52;
              {
                ATerm x_44 = NULL,k_45 = NULL,g_25 = NULL;
                t = SSLgetAnnotations(s_109);
                x_44 = t;
                t = u_109;
                t = x_109(t);
                k_45 = t;
                t = (ATerm) ATinsert(CheckATermList(k_45), t_109);
                g_25 = t;
                t = SSLsetAnnotations(g_25, x_44);
              }
            }
        }
      }
    return(t);
  }
  t = m_30;
  t = x_109(t);
  return(t);
}
static ATerm e_11 (ATerm z_114 (ATerm), ATerm a_115 (ATerm), ATerm q_30, ATerm p_30, ATerm t)
{
  t = a_115(t);
  {
    static ATerm l_14 (ATerm t)
    {
      ATerm d_110 = NULL;
      d_110 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_30, d_110);
      t = z_114(t);
      return(t);
    }
    t = fetch_1_0(l_14, t);
  }
  t = p_30;
  return(t);
}
static ATerm f_11 (ATerm r_114 (ATerm), ATerm k_30, ATerm j_30, ATerm t)
{
  static ATerm y_110 (ATerm t)
  {
    ATerm r_110 = NULL,s_110 = NULL,t_110 = NULL;
    r_110 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_110;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_110 = ATgetFirst((ATermList) t);
            t_110 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm g_52 = t;
          int h_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_110;
              {
                static ATerm n_14 (ATerm t)
                {
                  t = j_30;
                  return(t);
                }
                t = e_11(r_114, n_14, s_110, t_110, t);
              }
              t = y_110(t);
              LocalPopChoice(h_52);
            }
          else
            {
              t = g_52;
              {
                ATerm b_46 = NULL,h_46 = NULL,s_25 = NULL;
                t = SSLgetAnnotations(r_110);
                b_46 = t;
                t = t_110;
                t = y_110(t);
                h_46 = t;
                t = (ATerm) ATinsert(CheckATermList(h_46), s_110);
                s_25 = t;
                t = SSLsetAnnotations(s_25, b_46);
              }
            }
        }
      }
    return(t);
  }
  t = k_30;
  t = y_110(t);
  return(t);
}
ATerm genzip_4_0 (ATerm p_112 (ATerm), ATerm q_112 (ATerm), ATerm r_112 (ATerm), ATerm s_112 (ATerm), ATerm t)
{
  static ATerm i_111 (ATerm t)
  {
    ATerm i_52 = t;
    int j_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_112(t);
        LocalPopChoice(j_52);
      }
    else
      {
        t = i_52;
        {
          ATerm a_111 = NULL,b_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL,h_111 = NULL,u_25 = NULL;
          t = q_112(t);
          h_111 = t;
          if(match_cons(t, sym__2))
            {
              b_111 = ATgetArgument(t, 0);
              e_111 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_111);
          a_111 = t;
          t = b_111;
          t = s_112(t);
          f_111 = t;
          t = e_111;
          t = i_111(t);
          g_111 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_111, g_111);
          u_25 = t;
          t = SSLsetAnnotations(u_25, a_111);
          t = r_112(t);
        }
      }
    return(t);
  }
  t = i_111(t);
  return(t);
}
static ATerm o_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_52 = ATgetArgument(t, 0);
      if(((ATgetType(k_52) != AT_LIST) || !(ATisEmpty(k_52))))
        _fail(t);
      {
        ATerm l_52 = ATgetArgument(t, 1);
        if(((ATgetType(l_52) != AT_LIST) || !(ATisEmpty(l_52))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_52 = ATgetArgument(t, 0);
      if(((ATgetType(m_52) == AT_LIST) && !(ATisEmpty(m_52))))
        {
          p_111 = ATgetFirst((ATermList) m_52);
          q_111 = (ATerm) ATgetNext((ATermList) m_52);
        }
      else
        _fail(t);
      {
        ATerm n_52 = ATgetArgument(t, 1);
        if(((ATgetType(n_52) == AT_LIST) && !(ATisEmpty(n_52))))
          {
            r_111 = ATgetFirst((ATermList) n_52);
            s_111 = (ATerm) ATgetNext((ATermList) n_52);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_111, r_111), (ATerm) ATmakeAppl(sym__2, q_111, s_111));
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm t_111 = NULL,u_111 = NULL;
  if(match_cons(t, sym__2))
    {
      t_111 = ATgetArgument(t, 0);
      u_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_111), t_111);
  return(t);
}
static ATerm k_11 (ATerm h_645, ATerm m_645, ATerm j_61, ATerm t)
{
  ATerm k_111 = NULL,l_111 = NULL,m_111 = NULL,n_111 = NULL;
  t = SSL_explode_term(m_645);
  if(match_cons(t, sym__2))
    {
      k_111 = ATgetArgument(t, 0);
      m_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(h_645);
  if(match_cons(t, sym__2))
    {
      if((k_111 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_111, m_111);
  t = genzip_4_0(o_14, p_14, s_14, _id, t);
  n_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_111, j_61);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm t)
{
  static ATerm y_111 (ATerm t)
  {
    ATerm p_52 = t;
    int q_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_103(t);
        LocalPopChoice(q_52);
      }
    else
      {
        t = p_52;
        t = r_103(t);
        t = y_111(t);
      }
    return(t);
  }
  t = y_111(t);
  return(t);
}
ATerm for_3_0 (ATerm t_103 (ATerm), ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t)
{
  t = t_103(t);
  t = while_not_2_0(u_103, v_103, t);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm f_112 = NULL;
  f_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, f_112);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL,j_112 = NULL,w_25 = NULL;
  j_112 = t;
  if(match_cons(t, sym__2))
    {
      h_112 = ATgetArgument(t, 0);
      i_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_112);
  g_112 = t;
  t = i_112;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_112, i_112);
  w_25 = t;
  t = SSLsetAnnotations(w_25, g_112);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm h_113 = NULL,i_113 = NULL,j_113 = NULL,k_113 = NULL,l_113 = NULL;
  h_113 = t;
  if(match_cons(t, sym__2))
    {
      i_113 = ATgetArgument(t, 0);
      j_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_113;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_113 = ATgetFirst((ATermList) t);
      l_113 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_52 = t;
        int t_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_113(i_113, j_113, h_113, t);
            LocalPopChoice(t_52);
          }
        else
          {
            t = r_52;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_113), k_113), l_113);
          }
      }
    }
  else
    {
      t = v_113(i_113, j_113, h_113, t);
    }
  return(t);
}
static ATerm v_113 (ATerm k_112, ATerm l_112, ATerm m_112, ATerm t)
{
  ATerm n_112 = NULL,v_112 = NULL,x_25 = NULL,y_112 = NULL,z_112 = NULL,a_113 = NULL,b_113 = NULL;
  t = SSLgetAnnotations(m_112);
  n_112 = t;
  t = l_112;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_112 = ATgetFirst((ATermList) t);
      b_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_112;
  if(match_cons(t, sym__2))
    {
      z_112 = ATgetArgument(t, 0);
      a_113 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_52 = t;
    int v_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_113;
        if((z_112 != t))
          {
            _fail(t);
          }
        t = b_113;
        LocalPopChoice(v_52);
      }
    else
      {
        t = u_52;
        t = l_112;
        t = k_11(z_112, a_113, b_113, t);
      }
  }
  v_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_112, v_112);
  x_25 = t;
  t = SSLsetAnnotations(x_25, n_112);
  return(t);
}
static ATerm y_14 (ATerm t)
{
  ATerm u_113 = NULL;
  if(match_cons(t, sym__2))
    {
      u_113 = ATgetArgument(t, 0);
      if((u_113 != ATgetArgument(t, 1)))
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
  ATerm w_52 = t;
  int x_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(t_14, u_14, v_14, t);
      LocalPopChoice(x_52);
    }
  else
    {
      t = w_52;
      {
        ATerm p_113 = NULL,q_113 = NULL,r_113 = NULL;
        p_113 = t;
        if(match_cons(t, sym__2))
          {
            q_113 = ATgetArgument(t, 0);
            r_113 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_113;
        t = f_11(y_14, q_113, r_113, t);
      }
    }
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm g_47 = NULL,h_47 = NULL;
  if(match_cons(t, sym__2))
    {
      g_47 = ATgetArgument(t, 0);
      h_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(f_15, g_47, h_47, t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm s_47 = NULL;
  if(match_cons(t, sym__2))
    {
      s_47 = ATgetArgument(t, 0);
      if((s_47 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm g_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm f_48 = NULL,k_48 = NULL;
  if(match_cons(t, sym__2))
    {
      f_48 = ATgetArgument(t, 0);
      k_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_11(k_15, f_48, k_48, t);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm l_48 = NULL;
  if(match_cons(t, sym__2))
    {
      l_48 = ATgetArgument(t, 0);
      if((l_48 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm g_133 (ATerm), ATerm h_133 (ATerm), ATerm i_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm j_114 (ATerm t)
  {
    ATerm y_52 = t;
    int z_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_133(t);
        LocalPopChoice(z_52);
      }
    else
      {
        t = y_52;
        {
          ATerm a_53 = t;
          int b_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_113 = NULL,y_113 = NULL,z_46 = NULL,a_47 = NULL;
              x_113 = t;
              t = h_133(t);
              y_113 = t;
              t = x_113;
              {
                static ATerm b_15 (ATerm t)
                {
                  ATerm a_114 = NULL;
                  t = j_114(t);
                  a_114 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_114, y_113);
                  t = diff_0_0(t);
                  return(t);
                }
                t = i_133(b_15, j_114, c_15, t);
              }
              a_47 = t;
              t = SSL_explode_term(a_47);
              if(match_cons(t, sym__2))
                {
                  ATerm c_53 = ATgetArgument(t, 0);
                  z_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_46;
              t = foldr_3_0(d_15, e_15, _id, t);
              LocalPopChoice(b_53);
            }
          else
            {
              t = a_53;
              {
                ATerm w_47 = NULL,x_47 = NULL;
                x_47 = t;
                t = SSL_explode_term(x_47);
                if(match_cons(t, sym__2))
                  {
                    ATerm d_53 = ATgetArgument(t, 0);
                    w_47 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_47;
                t = foldr_3_0(g_15, h_15, j_114, t);
              }
            }
        }
      }
    return(t);
  }
  t = j_114(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm a_104 (ATerm), ATerm t)
{
  static ATerm o_15 (ATerm t)
  {
    t = bottomup_1_0(a_104, t);
    return(t);
  }
  t = SRTS_all(o_15, t);
  t = a_104(t);
  return(t);
}
static ATerm o_11 (ATerm d_55, ATerm e_55, ATerm t)
{
  ATerm k_114 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_55, e_55);
  t = h_12(d_55, e_55, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_114 = ATgetFirst((ATermList) t);
      {
        ATerm e_53 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_114;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm e_115 = NULL,f_115 = NULL;
  e_115 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_53 = t;
    int g_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_49 = NULL;
        t = term_h_53;
        m_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_h_53, e_115);
        t = o_11(m_49, e_115, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm i_53 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_53) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, f_115, (ATerm) ATempty);
        LocalPopChoice(g_53);
      }
    else
      {
        t = f_53;
        {
          ATerm v_49 = NULL;
          t = term_h_53;
          v_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_53, e_115);
          t = o_11(v_49, e_115, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm j_53 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_53) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, f_115, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  static ATerm i_115 (ATerm t)
  {
    ATerm k_53 = t;
    int l_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_105(t);
        LocalPopChoice(l_53);
      }
    else
      {
        t = k_53;
        t = SRTS_all(i_115, t);
      }
    return(t);
  }
  t = i_115(t);
  return(t);
}
static ATerm p_11 (ATerm u_123 (ATerm), ATerm o_44, ATerm m_44, ATerm t)
{
  ATerm j_115 = NULL,k_115 = NULL,l_115 = NULL,m_115 = NULL,n_115 = NULL,o_115 = NULL,p_115 = NULL,q_115 = NULL;
  m_115 = t;
  t = u_123(t);
  j_115 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_115, o_44, m_44);
  t = i_12(j_115, o_44, m_44, t);
  {
    ATerm m_53 = t;
    int n_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_115 = NULL;
        t = term_o_53;
        r_115 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_115, term_o_53);
        t = h_12(j_115, r_115, t);
        LocalPopChoice(n_53);
      }
    else
      {
        t = m_53;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_115 = ATgetFirst((ATermList) t);
      l_115 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, j_115, term_o_53, (ATerm) ATinsert(CheckATermList(l_115), (ATerm) ATinsert(CheckATermList(k_115), o_44)));
  t = lookup_table_0_1(j_115, t);
  q_115 = t;
  t = term_o_53;
  n_115 = t;
  t = (ATerm) ATinsert(CheckATermList(l_115), (ATerm) ATinsert(CheckATermList(k_115), o_44));
  o_115 = t;
  t = q_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_12(n_115, o_115, p_115, t);
  t = m_115;
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = term_h_53;
  return(t);
}
static ATerm w_15 (ATerm t)
{
  t = term_h_53;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm v_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      x_115 = ATgetArgument(t, 0);
      y_115 = ATgetArgument(t, 1);
      v_115 = ATgetArgument(t, 2);
      {
        ATerm c_116 = NULL,d_116 = NULL;
        t = y_115;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, x_115);
        c_116 = t;
        t = term_q_53;
        d_116 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_115), term_q_53);
        t = p_11(p_15, c_116, d_116, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, x_115, (ATerm)ATempty, v_115);
      }
    }
  else
    {
      ATerm g_116 = NULL,h_116 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          x_115 = ATgetArgument(t, 0);
          y_115 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_115;
      if(match_cons(t, sym_ConstType_1))
        {
          z_115 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, x_115);
      g_116 = t;
      t = term_t_53;
      h_116 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, x_115), term_t_53);
      t = p_11(w_15, g_116, h_116, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, x_115, (ATerm) ATmakeAppl(sym_ConstType_1, z_115));
    }
  return(t);
}
static ATerm q_11 (ATerm x_54, ATerm y_54, ATerm t)
{
  ATerm l_116 = NULL,m_116 = NULL;
  m_116 = t;
  {
    ATerm u_53 = t;
    int v_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_54, y_54);
        t = h_12(x_54, y_54, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm w_53 = ATgetFirst((ATermList) t);
            l_116 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(v_53);
        {
          ATerm n_116 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, x_54, y_54, l_116);
          t = lookup_table_0_1(x_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              n_116 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_12(y_54, l_116, n_116, t);
          t = (ATerm) ATmakeAppl(sym__3, x_54, y_54, l_116);
        }
      }
    else
      {
        t = u_53;
        {
          ATerm p_116 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, x_54, y_54);
          t = lookup_table_0_1(x_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_116 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_12(y_54, p_116, t);
          t = (ATerm) ATmakeAppl(sym__2, x_54, y_54);
        }
      }
  }
  t = m_116;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_123 (ATerm), ATerm t)
{
  ATerm r_116 = NULL,s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,w_116 = NULL,x_116 = NULL;
  u_116 = t;
  t = r_123(t);
  t_116 = t;
  {
    ATerm y_53 = t;
    int z_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_116 = NULL;
        t = term_o_53;
        y_116 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_116, term_o_53);
        t = h_12(t_116, y_116, t);
        LocalPopChoice(z_53);
      }
    else
      {
        t = y_53;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_116 = ATgetFirst((ATermList) t);
      r_116 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, t_116, term_o_53, r_116);
  t = lookup_table_0_1(t_116, t);
  x_116 = t;
  t = term_o_53;
  v_116 = t;
  t = x_116;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_12(v_116, r_116, w_116, t);
  t = s_116;
  {
    static ATerm z_15 (ATerm t)
    {
      ATerm z_116 = NULL;
      z_116 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_116, z_116);
      t = q_11(t_116, z_116, t);
      return(t);
    }
    t = map_1_0(z_15, t);
  }
  t = u_116;
  return(t);
}
ATerm restore_always_2_0 (ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm t)
{
  ATerm a_54 = t;
  int d_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_102(t);
      t = w_102(t);
      LocalPopChoice(d_54);
    }
  else
    {
      t = a_54;
      t = w_102(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_123 (ATerm), ATerm t)
{
  ATerm b_117 = NULL,c_117 = NULL,d_117 = NULL,e_117 = NULL,f_117 = NULL,g_117 = NULL,h_117 = NULL;
  c_117 = t;
  t = q_123(t);
  b_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_117, term_o_53);
  {
    ATerm e_54 = t;
    int h_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_117 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_54 = ATgetArgument(t, 0);
            ATerm j_54 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_53;
        q_117 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_117, term_o_53);
        t = h_12(b_117, q_117, t);
        LocalPopChoice(h_54);
      }
    else
      {
        t = e_54;
        t = (ATerm) ATempty;
      }
  }
  d_117 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_117, term_o_53, (ATerm) ATinsert(CheckATermList(d_117), (ATerm) ATempty));
  t = lookup_table_0_1(b_117, t);
  h_117 = t;
  t = term_o_53;
  e_117 = t;
  t = (ATerm) ATinsert(CheckATermList(d_117), (ATerm) ATempty);
  f_117 = t;
  t = h_117;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_12(e_117, f_117, g_117, t);
  t = c_117;
  return(t);
}
ATerm scope_2_0 (ATerm s_123 (ATerm), ATerm t_123 (ATerm), ATerm t)
{
  static ATerm a_16 (ATerm t)
  {
    t = end_scope_1_0(s_123, t);
    return(t);
  }
  t = begin_scope_1_0(s_123, t);
  t = restore_always_2_0(t_123, a_16, t);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  t = term_h_53;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm v_117 = NULL,w_117 = NULL,x_117 = NULL,y_117 = NULL,i_26 = NULL;
  y_117 = t;
  if(match_cons(t, sym_Specification_1))
    {
      w_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_117);
  v_117 = t;
  t = w_117;
  t = map_1_0(d_16, t);
  x_117 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, x_117);
  i_26 = t;
  t = SSLsetAnnotations(i_26, v_117);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm l_118 = NULL,m_118 = NULL;
  m_118 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      l_118 = ATgetArgument(t, 0);
      {
        ATerm k_54 = t;
        int l_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_50 = NULL,n_50 = NULL,c_26 = NULL;
            t = SSLgetAnnotations(m_118);
            k_50 = t;
            t = l_118;
            t = map_1_0(e_16, t);
            n_50 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, n_50);
            c_26 = t;
            t = SSLsetAnnotations(c_26, k_50);
            LocalPopChoice(l_54);
          }
        else
          {
            t = k_54;
            t = m_118;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          l_118 = ATgetArgument(t, 0);
          {
            ATerm m_54 = t;
            int n_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_51 = NULL,g_51 = NULL,h_26 = NULL;
                t = SSLgetAnnotations(m_118);
                e_51 = t;
                t = l_118;
                t = map_1_0(f_16, t);
                g_51 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, g_51);
                h_26 = t;
                t = SSLsetAnnotations(h_26, e_51);
                LocalPopChoice(n_54);
              }
            else
              {
                t = m_54;
                t = m_118;
              }
          }
        }
      else
        {
          t = m_118;
        }
    }
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm o_54 = t;
  int p_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(p_54);
    }
  else
    {
      t = o_54;
    }
  return(t);
}
static ATerm f_16 (ATerm t)
{
  ATerm q_54 = t;
  int u_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(u_54);
    }
  else
    {
      t = q_54;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(b_16, c_16, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL;
  u_118 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_118;
    }
  else
    {
      static ATerm g_16 (ATerm t)
      {
        t = not_null(w_118);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_118 = ATgetFirst((ATermList) t);
          if(((w_118 != NULL) && (w_118 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_118 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_118;
      t = at_end_1_0(g_16, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm o_118 (ATerm), ATerm t)
{
  ATerm l_119 = NULL,m_119 = NULL,n_119 = NULL;
  l_119 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_119;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_119 = ATgetFirst((ATermList) t);
          n_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm v_54 = t;
        int w_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_51 = NULL,d_52 = NULL,e_52 = NULL,m_26 = NULL;
            t = SSLgetAnnotations(l_119);
            x_51 = t;
            t = m_119;
            t = o_118(t);
            d_52 = t;
            t = n_119;
            t = filter_1_0(o_118, t);
            e_52 = t;
            t = (ATerm) ATinsert(CheckATermList(e_52), d_52);
            m_26 = t;
            t = SSLsetAnnotations(m_26, x_51);
            LocalPopChoice(w_54);
          }
        else
          {
            t = v_54;
            t = n_119;
            t = filter_1_0(o_118, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_111 (ATerm), ATerm t)
{
  static ATerm d_120 (ATerm t)
  {
    ATerm a_120 = NULL,b_120 = NULL,c_120 = NULL;
    c_120 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_120 = ATgetFirst((ATermList) t);
        b_120 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm o_52 = NULL,s_52 = NULL,k_27 = NULL;
          t = SSLgetAnnotations(c_120);
          o_52 = t;
          t = b_120;
          t = d_120(t);
          s_52 = t;
          t = (ATerm) ATinsert(CheckATermList(s_52), a_120);
          k_27 = t;
          t = SSLsetAnnotations(k_27, o_52);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_120;
        t = c_111(t);
      }
    return(t);
  }
  t = d_120(t);
  return(t);
}
static ATerm p_120 (ATerm h_120, ATerm t)
{
  ATerm i_120 = NULL;
  t = SSL_explode_term(h_120);
  if(match_cons(t, sym__2))
    {
      ATerm z_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_54) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_120;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_120 = NULL,l_120 = NULL,m_120 = NULL;
  m_120 = t;
  if(match_cons(t, sym__2))
    {
      k_120 = ATgetArgument(t, 0);
      l_120 = ATgetArgument(t, 1);
      {
        ATerm a_55 = t;
        int b_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm h_16 (ATerm t)
            {
              t = l_120;
              return(t);
            }
            t = k_120;
            t = at_end_1_0(h_16, t);
            LocalPopChoice(b_55);
          }
        else
          {
            t = a_55;
            t = p_120(m_120, t);
          }
      }
    }
  else
    {
      t = p_120(m_120, t);
    }
  return(t);
}
static ATerm t_11 (ATerm c_35, ATerm o_34, ATerm t)
{
  ATerm q_120 = NULL,r_120 = NULL;
  static ATerm i_16 (ATerm t)
  {
    ATerm s_120 = NULL,t_120 = NULL,u_120 = NULL,v_120 = NULL;
    v_120 = t;
    t = SSL_explode_term(v_120);
    if(match_cons(t, sym__2))
      {
        if(((q_120 != NULL) && (q_120 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          q_120 = ATgetArgument(t, 0);
        {
          ATerm c_55 = ATgetArgument(t, 1);
          if(((ATgetType(c_55) == AT_LIST) && !(ATisEmpty(c_55))))
            {
              s_120 = ATgetFirst((ATermList) c_55);
              {
                ATerm f_55 = (ATerm) ATgetNext((ATermList) c_55);
                if(((ATgetType(f_55) != AT_LIST) || !(ATisEmpty(f_55))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, s_120, not_null(r_120));
    t = conc_0_0(t);
    t_120 = t;
    t = (ATerm) ATinsert(ATempty, t_120);
    u_120 = t;
    t = SSL_mkterm(q_120, u_120);
    return(t);
  }
  t = SSL_explode_term(c_35);
  if(match_cons(t, sym__2))
    {
      if(((q_120 != NULL) && (q_120 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        q_120 = ATgetArgument(t, 0);
      {
        ATerm g_55 = ATgetArgument(t, 1);
        if(((ATgetType(g_55) == AT_LIST) && !(ATisEmpty(g_55))))
          {
            if(((r_120 != NULL) && (r_120 != ATgetFirst((ATermList) g_55))))
              _fail(ATgetFirst((ATermList) g_55));
            else
              r_120 = ATgetFirst((ATermList) g_55);
            {
              ATerm h_55 = (ATerm) ATgetNext((ATermList) g_55);
              if(((ATgetType(h_55) != AT_LIST) || !(ATisEmpty(h_55))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = o_34;
  t = fetch_1_0(i_16, t);
  return(t);
}
ATerm foldr_3_0 (ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm o_117 (ATerm), ATerm t)
{
  ATerm x_120 = NULL,y_120 = NULL,z_120 = NULL;
  x_120 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_120;
      t = m_117(t);
    }
  else
    {
      ATerm c_121 = NULL,d_121 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_120 = ATgetFirst((ATermList) t);
          z_120 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_120;
      t = o_117(t);
      c_121 = t;
      t = z_120;
      t = foldr_3_0(m_117, n_117, o_117, t);
      d_121 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_121, d_121);
      t = n_117(t);
    }
  return(t);
}
static ATerm j_16 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_55), term_j_55), term_i_55);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm k_121 = NULL,l_121 = NULL;
  if(match_cons(t, sym__2))
    {
      k_121 = ATgetArgument(t, 0);
      l_121 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_11(k_121, l_121, t);
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm m_121 = NULL,n_121 = NULL;
  n_121 = t;
  if(match_cons(t, sym_Signature_1))
    {
      m_121 = ATgetArgument(t, 0);
      {
        ATerm l_55 = t;
        int m_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_121 = NULL;
            t = m_121;
            t = filter_1_0(m_16, t);
            t = concat_0_0(t);
            p_121 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, p_121);
            LocalPopChoice(m_55);
          }
        else
          {
            t = l_55;
            t = n_121;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          m_121 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, m_121);
        }
      else
        {
          t = n_121;
        }
    }
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm q_121 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      q_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_121;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm g_121 = NULL,h_121 = NULL,i_121 = NULL,j_121 = NULL,q_27 = NULL;
  j_121 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_121);
  g_121 = t;
  t = h_121;
  t = foldr_3_0(j_16, k_16, l_16, t);
  i_121 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, i_121);
  q_27 = t;
  t = SSLsetAnnotations(q_27, g_121);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm n_55 = t;
  int o_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(o_55);
    }
  else
    {
      t = n_55;
    }
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm t_122 = NULL,u_122 = NULL,v_122 = NULL,w_122 = NULL,x_122 = NULL;
  x_122 = t;
  if(match_cons(t, sym_LRule_1))
    {
      w_122 = ATgetArgument(t, 0);
      t = w_122;
      if(match_cons(t, sym_Rule_3))
        {
          t_122 = ATgetArgument(t, 0);
          u_122 = ATgetArgument(t, 1);
          v_122 = ATgetArgument(t, 2);
          {
            ATerm p_55 = t;
            int q_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_123 = NULL;
                t = t_122;
                t = free_vars_3_0(p_16, q_16, tboundin_3_0, t);
                b_123 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, b_123, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, t_122, u_122, v_122)));
                LocalPopChoice(q_55);
              }
            else
              {
                t = p_55;
                t = x_122;
              }
          }
        }
      else
        {
          t = x_122;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          w_122 = ATgetArgument(t, 0);
          {
            ATerm t_55 = t;
            int v_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm a_124 = NULL;
                t = w_122;
                t = free_vars_3_0(s_16, t_16, tboundin_3_0, t);
                a_124 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, a_124, w_122);
                LocalPopChoice(v_55);
              }
            else
              {
                t = t_55;
                t = x_122;
              }
          }
        }
      else
        {
          t = x_122;
        }
    }
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm c_123 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_123);
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm a_56 = t;
  int d_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_56);
    }
  else
    {
      t = a_56;
      {
        ATerm f_56 = t;
        int g_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_56);
          }
        else
          {
            t = f_56;
            {
              ATerm j_56 = t;
              int k_56 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_123 = NULL,f_123 = NULL,g_123 = NULL,h_123 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_123 = ATgetArgument(t, 0);
                      f_123 = ATgetArgument(t, 1);
                      g_123 = ATgetArgument(t, 2);
                      h_123 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_123;
                  t = map_1_0(r_16, t);
                  LocalPopChoice(k_56);
                }
              else
                {
                  t = j_56;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_16 (ATerm t)
{
  ATerm o_123 = NULL;
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_123 = ATgetArgument(t, 0);
          {
            ATerm q_56 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_56);
      t = o_123;
    }
  else
    {
      t = o_56;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_123;
    }
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm b_124 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      b_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, b_124);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm r_56 = t;
  int z_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_56);
    }
  else
    {
      t = r_56;
      {
        ATerm a_57 = t;
        int b_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_57);
          }
        else
          {
            t = a_57;
            {
              ATerm c_57 = t;
              int d_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_124 = NULL,e_124 = NULL,f_124 = NULL,g_124 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_124 = ATgetArgument(t, 0);
                      e_124 = ATgetArgument(t, 1);
                      f_124 = ATgetArgument(t, 2);
                      g_124 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_124;
                  t = map_1_0(u_16, t);
                  LocalPopChoice(d_57);
                }
              else
                {
                  t = c_57;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm n_124 = NULL;
  ATerm e_57 = t;
  int f_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_124 = ATgetArgument(t, 0);
          {
            ATerm h_57 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_57);
      t = n_124;
    }
  else
    {
      t = e_57;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_124 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_124;
    }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  t = Cons_2_0(w_16, x_16, t);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm e_125 = NULL,f_125 = NULL,g_125 = NULL,h_125 = NULL,s_27 = NULL;
  h_125 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      f_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_125);
  e_125 = t;
  t = f_125;
  t = topdown_1_0(y_16, t);
  t = listtd_1_0(a_17, t);
  g_125 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_125);
  s_27 = t;
  t = SSLsetAnnotations(s_27, e_125);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm j_57 = t;
  int k_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_57 = t;
      int n_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefDynRuleScope_0_0(t);
          LocalPopChoice(n_57);
        }
      else
        {
          t = m_57;
          {
            ATerm j_125 = NULL,k_125 = NULL;
            if(match_cons(t, sym_AddScopeLabel_2))
              {
                j_125 = ATgetArgument(t, 0);
                k_125 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_57, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, k_125), (ATerm) ATmakeAppl(sym_Str_1, j_125)));
          }
        }
      LocalPopChoice(k_57);
    }
  else
    {
      t = j_57;
    }
  return(t);
}
static ATerm a_17 (ATerm t)
{
  t = repeat_2_0(b_17, _id, t);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm p_125 = NULL,q_125 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_125 = ATgetFirst((ATermList) t);
      q_125 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_10(p_125, q_125, t);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm x_57 = t;
  int y_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(y_57);
    }
  else
    {
      t = x_57;
    }
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm u_125 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      u_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, u_125)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm n_122 = NULL,o_122 = NULL,p_122 = NULL,q_122 = NULL,v_28 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(n_16, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(o_16, t);
  {
    ATerm a_58 = t;
    int b_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_124 = NULL,t_124 = NULL,u_124 = NULL;
        s_124 = t;
        t = term_c_58;
        t_124 = t;
        t = term_d_58;
        u_124 = t;
        t = term_f_58;
        t = h_12(t_124, u_124, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = s_124;
        LocalPopChoice(b_58);
        {
          ATerm v_124 = NULL,w_124 = NULL,x_124 = NULL,y_124 = NULL,z_124 = NULL,a_125 = NULL,b_125 = NULL,c_125 = NULL,u_28 = NULL,t_27 = NULL;
          c_125 = t;
          if(match_cons(t, sym_Specification_1))
            {
              w_124 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(c_125);
          v_124 = t;
          t = w_124;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_124 = ATgetFirst((ATermList) t);
              z_124 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_124);
          x_124 = t;
          t = z_124;
          t = Cons_2_0(_id, v_16, t);
          a_125 = t;
          t = (ATerm) ATinsert(CheckATermList(a_125), y_124);
          t_27 = t;
          t = SSLsetAnnotations(t_27, x_124);
          b_125 = t;
          t = (ATerm) ATmakeAppl(sym_Specification_1, b_125);
          u_28 = t;
          t = SSLsetAnnotations(u_28, v_124);
        }
      }
    else
      {
        t = a_58;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(c_17, t);
  q_122 = t;
  if(match_cons(t, sym_Specification_1))
    {
      o_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_122);
  n_122 = t;
  t = o_122;
  t = fetch_1_0(d_17, t);
  p_122 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, p_122);
  v_28 = t;
  t = SSLsetAnnotations(v_28, n_122);
  return(t);
}
static ATerm u_11 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm v_125 = NULL;
  t = SSL_fputc(e_40, f_40);
  v_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_125);
  return(t);
}
static ATerm v_11 (ATerm i_24, ATerm j_24, ATerm t)
{
  ATerm w_125 = NULL;
  t = SSL_write_term_to_stream_text(i_24, j_24);
  w_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_125);
  return(t);
}
static ATerm x_11 (ATerm c_110 (ATerm), ATerm a_176, ATerm o_24, ATerm t)
{
  ATerm x_125 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_176, term_i_58);
  t = b_12(t);
  x_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_125, o_24);
  t = c_110(t);
  t = fclose_0_0(t);
  t = o_24;
  return(t);
}
static ATerm w_11 (ATerm e_24, ATerm f_24, ATerm t)
{
  ATerm y_125 = NULL;
  t = SSL_write_term_to_stream_baf(e_24, f_24);
  y_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_125);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm g_126 = NULL,h_126 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_58 = ATgetArgument(t, 0);
      if(match_cons(j_58, sym_Stream_1))
        {
          g_126 = ATgetArgument(j_58, 0);
        }
      else
        _fail(t);
      h_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_11(g_126, h_126, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm i_126 = NULL,j_126 = NULL,k_126 = NULL,l_126 = NULL,m_126 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_58 = ATgetArgument(t, 0);
      if(match_cons(v_58, sym_Stream_1))
        {
          l_126 = ATgetArgument(v_58, 0);
        }
      else
        _fail(t);
      m_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_11(l_126, m_126, t);
  i_126 = t;
  t = term_d_26;
  j_126 = t;
  t = i_126;
  if(match_cons(t, sym_Stream_1))
    {
      k_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, i_126);
  t = u_11(j_126, k_126, t);
  return(t);
}
ATerm output_1_0 (ATerm a_129 (ATerm), ATerm t)
{
  ATerm z_125 = NULL,a_126 = NULL;
  t = a_129(t);
  a_126 = t;
  {
    ATerm w_58 = t;
    int x_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_126 = NULL,d_126 = NULL;
        t = term_c_58;
        c_126 = t;
        t = term_y_58;
        d_126 = t;
        t = term_a_59;
        t = h_12(c_126, d_126, t);
        LocalPopChoice(x_58);
      }
    else
      {
        t = w_58;
        t = term_b_59;
      }
  }
  z_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_125, a_126);
  {
    ATerm c_59 = t;
    int d_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_126 = NULL,f_126 = NULL;
        t = term_c_58;
        e_126 = t;
        t = term_e_59;
        f_126 = t;
        t = term_g_59;
        t = h_12(e_126, f_126, t);
        t = (ATerm) ATmakeAppl(sym__2, z_125, a_126);
        LocalPopChoice(d_59);
        if(match_cons(t, sym__2))
          {
            ATerm h_59 = ATgetArgument(t, 0);
            ATerm i_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_11(e_17, z_125, a_126, t);
      }
    else
      {
        t = c_59;
        if(match_cons(t, sym__2))
          {
            ATerm k_59 = ATgetArgument(t, 0);
            ATerm l_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_11(f_17, z_125, a_126, t);
      }
  }
  return(t);
}
static ATerm a_127 (ATerm u_126, ATerm t)
{
  t = SSL_fclose(u_126);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_126 = NULL,y_126 = NULL;
  y_126 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_126 = ATgetArgument(t, 0);
      {
        ATerm n_59 = t;
        int p_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_126);
            LocalPopChoice(p_59);
          }
        else
          {
            t = n_59;
            t = a_127(y_126, t);
          }
      }
    }
  else
    {
      t = a_127(y_126, t);
    }
  return(t);
}
static ATerm y_11 (ATerm k_24, ATerm t)
{
  t = SSL_read_term_from_stream(k_24);
  return(t);
}
static ATerm z_11 (ATerm x_38, ATerm y_38, ATerm t)
{
  t = SSL_strcat(x_38, y_38);
  return(t);
}
static ATerm a_12 (ATerm g_40, ATerm h_40, ATerm t)
{
  ATerm b_127 = NULL;
  t = SSL_fopen(g_40, h_40);
  b_127 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_127);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_127 = NULL;
  t = SSL_stdin_stream();
  c_127 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_127);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_127 = NULL;
  t = SSL_stdout_stream();
  d_127 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_127);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_127 = NULL;
  t = SSL_stderr_stream();
  e_127 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_127);
  return(t);
}
static ATerm l_128 (ATerm k_127, ATerm t)
{
  ATerm l_127 = NULL;
  t = SSL_explode_term(k_127);
  if(match_cons(t, sym__2))
    {
      ATerm r_59 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_59) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_59 = ATgetArgument(t, 1);
        if(((ATgetType(w_59) == AT_LIST) && !(ATisEmpty(w_59))))
          {
            l_127 = ATgetFirst((ATermList) w_59);
            {
              ATerm y_59 = (ATerm) ATgetNext((ATermList) w_59);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = l_127;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_127;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_127;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_127;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_128 (ATerm o_127, ATerm p_127, ATerm q_127, ATerm t)
{
  ATerm r_127 = NULL,s_127 = NULL,t_127 = NULL,w_127 = NULL,e_30 = NULL;
  t = SSLgetAnnotations(q_127);
  t_127 = t;
  t = o_127;
  if(match_cons(t, sym_Path_1))
    {
      w_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_127, p_127);
  e_30 = t;
  t = SSLsetAnnotations(e_30, t_127);
  if(match_cons(t, sym__2))
    {
      r_127 = ATgetArgument(t, 0);
      s_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(r_127, s_127, t);
  return(t);
}
static ATerm n_128 (ATerm y_127, ATerm z_127, ATerm a_128, ATerm t)
{
  ATerm b_128 = NULL,c_128 = NULL,d_128 = NULL,g_128 = NULL,f_30 = NULL;
  t = SSLgetAnnotations(a_128);
  d_128 = t;
  t = SSL_is_string(y_127);
  g_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_128, z_127);
  f_30 = t;
  t = SSLsetAnnotations(f_30, d_128);
  if(match_cons(t, sym__2))
    {
      b_128 = ATgetArgument(t, 0);
      c_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(b_128, c_128, t);
  return(t);
}
static ATerm b_12 (ATerm t)
{
  ATerm i_128 = NULL,j_128 = NULL,k_128 = NULL;
  i_128 = t;
  if(match_cons(t, sym__2))
    {
      j_128 = ATgetArgument(t, 0);
      k_128 = ATgetArgument(t, 1);
      {
        ATerm z_59 = t;
        int b_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_128(i_128, t);
            LocalPopChoice(b_60);
          }
        else
          {
            t = z_59;
            {
              ATerm c_60 = t;
              int g_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_128(j_128, k_128, i_128, t);
                  LocalPopChoice(g_60);
                }
              else
                {
                  t = c_60;
                  t = n_128(j_128, k_128, i_128, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_128(i_128, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_128 = NULL,q_128 = NULL,s_128 = NULL,d_129 = NULL;
  d_129 = t;
  {
    ATerm h_60 = t;
    int i_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_129, term_m_60);
        t = b_12(t);
        LocalPopChoice(i_60);
      }
    else
      {
        t = h_60;
        {
          ATerm s_53 = NULL,x_53 = NULL;
          t = term_n_60;
          x_53 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_60, d_129);
          t = z_11(x_53, d_129, t);
          s_53 = t;
          t = SSL_perror(s_53);
          _fail(t);
        }
      }
  }
  q_128 = t;
  if(match_cons(t, sym_Stream_1))
    {
      s_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_11(s_128, t);
  p_128 = t;
  t = q_128;
  t = fclose_0_0(t);
  t = p_128;
  return(t);
}
ATerm input_1_0 (ATerm b_129 (ATerm), ATerm t)
{
  ATerm o_60 = t;
  int q_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_129 = NULL,h_129 = NULL;
      t = term_c_58;
      g_129 = t;
      t = term_r_60;
      h_129 = t;
      t = term_s_60;
      t = h_12(g_129, h_129, t);
      LocalPopChoice(q_60);
    }
  else
    {
      t = o_60;
      t = term_u_60;
    }
  t = ReadFromFile_0_0(t);
  t = b_129(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm i_129 = NULL,j_129 = NULL,k_129 = NULL,l_129 = NULL,m_129 = NULL;
  i_129 = t;
  t = term_y_60;
  t = whoami_0_0(t);
  j_129 = t;
  t = term_q_36;
  l_129 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_61), j_129), term_z_60);
  m_129 = t;
  t = SSL_printnl(l_129, m_129);
  t = term_t_36;
  k_129 = t;
  t = SSL_exit(k_129);
  t = i_129;
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm o_129 = NULL;
  o_129 = t;
  if(match_string(t, "-k"))
    {
      t = o_129;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_129;
    }
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm p_129 = NULL,q_129 = NULL,r_129 = NULL;
  p_129 = t;
  t = SSL_string_to_int(p_129);
  q_129 = t;
  t = term_b_61;
  r_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_61, q_129);
  t = k_12(r_129, q_129, t);
  t = p_129;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_d_61;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_17, h_17, i_17, t);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm t_129 = NULL;
  t_129 = t;
  if(match_string(t, "-S"))
    {
      t = t_129;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_129;
    }
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm u_129 = NULL,v_129 = NULL;
  t = term_e_61;
  u_129 = t;
  t = term_g_61;
  v_129 = t;
  t = term_h_61;
  t = k_12(u_129, v_129, t);
  t = term_i_61;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_k_61;
  return(t);
}
static ATerm m_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm w_129 = NULL,x_129 = NULL,y_129 = NULL;
  w_129 = t;
  t = SSL_string_to_int(w_129);
  x_129 = t;
  t = term_e_61;
  y_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_61, x_129);
  t = k_12(y_129, x_129, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_129);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  t = term_l_61;
  return(t);
}
static ATerm p_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm z_129 = NULL,a_130 = NULL;
  t = term_m_61;
  z_129 = t;
  t = term_y_60;
  a_130 = t;
  t = term_n_61;
  t = k_12(z_129, a_130, t);
  t = term_o_61;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_p_61;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_61 = t;
  int r_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_17, k_17, l_17, t);
      LocalPopChoice(r_61);
    }
  else
    {
      t = q_61;
      {
        ATerm s_61 = t;
        int t_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_17, n_17, o_17, t);
            LocalPopChoice(t_61);
          }
        else
          {
            t = s_61;
            t = Option_3_0(p_17, q_17, r_17, t);
          }
      }
    }
  return(t);
}
static ATerm k_12 (ATerm x_49, ATerm y_49, ATerm t)
{
  ATerm b_130 = NULL,c_130 = NULL;
  t = term_c_58;
  b_130 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_c_58, x_49, y_49);
  t = lookup_table_0_1(b_130, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      c_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_12(x_49, y_49, c_130, t);
  t = (ATerm) ATmakeAppl(sym__3, term_c_58, x_49, y_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm g_130 = NULL,h_130 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_130 = NULL,j_130 = NULL,k_130 = NULL;
      t = term_y_60;
      t = i_0(t);
      i_130 = t;
      t = term_u_61;
      j_130 = t;
      t = term_v_61;
      k_130 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_61, term_v_61, i_130);
      t = i_12(j_130, k_130, i_130, t);
      _fail(t);
    }
  else
    {
      ATerm n_130 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_130 = ATgetFirst((ATermList) t);
          h_130 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_130;
      t = d_0(t);
      t = term_y_60;
      t = g_0(t);
      n_130 = t;
      t = (ATerm) ATinsert(CheckATermList(h_130), n_130);
    }
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm p_130 = NULL;
  p_130 = t;
  if(match_string(t, "-o"))
    {
      t = p_130;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_130;
    }
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm q_130 = NULL,r_130 = NULL;
  q_130 = t;
  t = term_y_58;
  r_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_58, q_130);
  t = k_12(r_130, q_130, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_130);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_w_61;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_17, t_17, u_17, t);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm v_130 = NULL;
  v_130 = t;
  if(match_string(t, "-i"))
    {
      t = v_130;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_130;
    }
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm w_130 = NULL,x_130 = NULL;
  w_130 = t;
  t = term_r_60;
  x_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_60, w_130);
  t = k_12(x_130, w_130, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_130);
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = term_x_61;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_17, w_17, x_17, t);
  return(t);
}
static ATerm i_12 (ATerm s_54, ATerm t_54, ATerm r_54, ATerm t)
{
  ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL;
  z_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_54, t_54);
  {
    ATerm y_61 = t;
    int z_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_62 = ATgetArgument(t, 0);
            ATerm b_62 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_54, t_54);
        t = h_12(s_54, t_54, t);
        LocalPopChoice(z_61);
      }
    else
      {
        t = y_61;
        t = (ATerm) ATempty;
      }
  }
  a_131 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_54, t_54, (ATerm) ATinsert(CheckATermList(a_131), r_54));
  t = lookup_table_0_1(s_54, t);
  d_131 = t;
  t = (ATerm) ATinsert(CheckATermList(a_131), r_54);
  b_131 = t;
  t = d_131;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_12(t_54, b_131, c_131, t);
  t = z_130;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm k_131 = NULL,l_131 = NULL,m_131 = NULL,n_131 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_131 = NULL,p_131 = NULL,q_131 = NULL;
      t = term_y_60;
      t = t_0(t);
      o_131 = t;
      t = term_u_61;
      p_131 = t;
      t = term_v_61;
      q_131 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_61, term_v_61, o_131);
      t = i_12(p_131, q_131, o_131, t);
      _fail(t);
    }
  else
    {
      ATerm u_131 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_131 = ATgetFirst((ATermList) t);
          l_131 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_131;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_131 = ATgetFirst((ATermList) t);
          n_131 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_131;
      t = o_0(t);
      t = m_131;
      t = r_0(t);
      u_131 = t;
      t = (ATerm) ATinsert(CheckATermList(n_131), u_131);
    }
  return(t);
}
static ATerm y_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm w_131 = NULL,x_131 = NULL;
  w_131 = t;
  if(match_string(t, "old"))
    {
      t = w_131;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = w_131;
    }
  t = term_d_58;
  x_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_58, w_131);
  t = k_12(x_131, w_131, t);
  t = term_y_60;
  return(t);
}
static ATerm a_18 (ATerm t)
{
  t = term_c_62;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_17, z_17, a_18, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_131 = NULL,a_132 = NULL,b_132 = NULL,c_132 = NULL;
  t = report_run_time_0_0(t);
  t = term_y_60;
  t = whoami_0_0(t);
  z_131 = t;
  t = term_q_36;
  b_132 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_62), z_131);
  c_132 = t;
  t = SSL_printnl(b_132, c_132);
  t = term_t_36;
  a_132 = t;
  t = SSL_exit(a_132);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_132 = NULL,e_132 = NULL;
  t = term_c_58;
  d_132 = t;
  t = term_e_62;
  e_132 = t;
  t = term_f_62;
  t = h_12(d_132, e_132, t);
  return(t);
}
static ATerm c_12 (ATerm a_43, ATerm b_43, ATerm t)
{
  ATerm g_62 = t;
  int h_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_43, b_43);
      LocalPopChoice(h_62);
    }
  else
    {
      t = g_62;
      t = SSL_addr(a_43, b_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_117 (ATerm), ATerm l_117 (ATerm), ATerm t)
{
  ATerm g_132 = NULL,h_132 = NULL,i_132 = NULL;
  g_132 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_132;
      t = k_117(t);
    }
  else
    {
      ATerm l_132 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_132 = ATgetFirst((ATermList) t);
          i_132 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_132;
      t = foldr_2_0(k_117, l_117, t);
      l_132 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_132, l_132);
      t = l_117(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_18 (ATerm t)
{
  t = term_g_61;
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm f_54 = NULL,g_54 = NULL;
  if(match_cons(t, sym__2))
    {
      f_54 = ATgetArgument(t, 0);
      g_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_12(f_54, g_54, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_132 = NULL,b_54 = NULL,c_54 = NULL;
  t = times_0_0(t);
  c_54 = t;
  t = SSL_explode_term(c_54);
  if(match_cons(t, sym__2))
    {
      ATerm i_62 = ATgetArgument(t, 0);
      b_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_54;
  t = foldr_2_0(d_18, f_18, t);
  o_132 = t;
  t = SSL_TicksToSeconds(o_132);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_132 = NULL,a_133 = NULL,b_133 = NULL;
  z_132 = t;
  if(match_cons(t, sym__2))
    {
      a_133 = ATgetArgument(t, 0);
      b_133 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_62 = t;
    int n_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_133;
        if((a_133 != t))
          {
            _fail(t);
          }
        t = z_132;
        LocalPopChoice(n_62);
      }
    else
      {
        t = m_62;
        t = (ATerm) ATmakeAppl(sym__2, a_133, b_133);
        {
          ATerm o_62 = t;
          int p_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_133, b_133);
              LocalPopChoice(p_62);
            }
          else
            {
              t = o_62;
              t = SSL_gtr(a_133, b_133);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_133, b_133);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_126 (ATerm), ATerm t)
{
  ATerm f_133 = NULL;
  f_133 = t;
  {
    ATerm q_62 = t;
    int r_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_133 = NULL,m_133 = NULL,n_133 = NULL;
        t = term_c_58;
        m_133 = t;
        t = term_e_61;
        n_133 = t;
        t = term_s_62;
        t = h_12(m_133, n_133, t);
        l_133 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_133, term_t_36);
        t = geq_0_0(t);
        t = f_133;
        t = b_126(t);
        LocalPopChoice(r_62);
      }
    else
      {
        t = q_62;
        t = f_133;
      }
  }
  return(t);
}
static ATerm g_18 (ATerm t)
{
  ATerm p_133 = NULL,q_133 = NULL,s_133 = NULL,t_133 = NULL;
  t = run_time_0_0(t);
  p_133 = t;
  t = term_y_60;
  t = whoami_0_0(t);
  q_133 = t;
  t = term_q_36;
  s_133 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_62), p_133), term_t_62), q_133);
  t_133 = t;
  t = SSL_printnl(s_133, t_133);
  t = (ATerm) ATmakeAppl(sym__2, term_q_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_62), p_133), term_t_62), q_133));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_18, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm u_133 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_61;
  u_133 = t;
  t = SSL_exit(u_133);
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm e_134 = NULL,f_134 = NULL;
  f_134 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_134;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_134 = ATgetArgument(t, 0);
          {
            ATerm u_55 = NULL,o_30 = NULL;
            t = SSLgetAnnotations(f_134);
            u_55 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_134);
            o_30 = t;
            t = SSLsetAnnotations(o_30, u_55);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_134;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_128 (ATerm), ATerm t)
{
  ATerm v_62 = t;
  int w_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_133 = NULL,y_133 = NULL;
      t = term_c_58;
      x_133 = t;
      t = term_y_62;
      y_133 = t;
      t = term_z_62;
      t = h_12(x_133, y_133, t);
      LocalPopChoice(w_62);
    }
  else
    {
      t = v_62;
      t = fetch_1_0(h_18, t);
    }
  t = r_128(t);
  return(t);
}
static ATerm l_12 (ATerm k_58, ATerm l_58, ATerm m_58, ATerm t)
{
  ATerm h_134 = NULL;
  t = SSL_hashtable_put(m_58, k_58, l_58);
  h_134 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_134);
  return(t);
}
ATerm lookup_table_0_1 (ATerm e_56, ATerm t)
{
  ATerm q_134 = NULL;
  t = table_hashtable_0_0(t);
  q_134 = t;
  {
    ATerm a_63 = t;
    int b_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_56 = NULL;
        t = q_134;
        if(match_cons(t, sym_Hashtable_1))
          {
            h_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_12(e_56, h_56, t);
        LocalPopChoice(b_63);
      }
    else
      {
        t = a_63;
        {
          ATerm y_56 = NULL;
          t = e_56;
          t = table_create_0_0(t);
          t = q_134;
          if(match_cons(t, sym_Hashtable_1))
            {
              y_56 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_12(e_56, y_56, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_58, ATerm t_58, ATerm t)
{
  ATerm t_134 = NULL;
  t = SSL_hashtable_create(s_58, t_58);
  t_134 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_134);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm u_134 = NULL,v_134 = NULL,w_134 = NULL,a_135 = NULL,b_135 = NULL;
  u_134 = t;
  t = term_c_63;
  a_135 = t;
  t = term_h_63;
  b_135 = t;
  t = u_134;
  t = new_hashtable_0_2(a_135, b_135, t);
  v_134 = t;
  t = u_134;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_12(u_134, v_134, w_134, t);
  t = u_134;
  return(t);
}
static ATerm e_12 (ATerm p_58, ATerm q_58, ATerm t)
{
  ATerm c_135 = NULL;
  t = SSL_hashtable_remove(q_58, p_58);
  c_135 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_135);
  return(t);
}
static ATerm f_12 (ATerm u_58, ATerm t)
{
  ATerm d_135 = NULL;
  t = SSL_hashtable_destroy(u_58);
  d_135 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_135);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm e_135 = NULL;
  t = SSL_table_hashtable();
  e_135 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_135);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm f_135 = NULL,g_135 = NULL,h_135 = NULL,i_135 = NULL;
  f_135 = t;
  t = table_hashtable_0_0(t);
  g_135 = t;
  t = lookup_table_0_1(f_135, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_12(i_135, t);
  t = g_135;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_12(f_135, h_135, t);
  t = f_135;
  return(t);
}
ATerm map_1_0 (ATerm l_110 (ATerm), ATerm t)
{
  static ATerm a_136 (ATerm t)
  {
    ATerm x_135 = NULL,y_135 = NULL,z_135 = NULL;
    x_135 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_135;
      }
    else
      {
        ATerm i_57 = NULL,r_57 = NULL,s_57 = NULL,u_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_135 = ATgetFirst((ATermList) t);
            z_135 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_135);
        i_57 = t;
        t = y_135;
        t = l_110(t);
        r_57 = t;
        t = z_135;
        t = a_136(t);
        s_57 = t;
        t = (ATerm) ATinsert(CheckATermList(s_57), r_57);
        u_30 = t;
        t = SSLsetAnnotations(u_30, i_57);
      }
    return(t);
  }
  t = a_136(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_136 = NULL,k_136 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_136 = ATgetFirst((ATermList) t);
      k_136 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_136 = NULL,q_136 = NULL;
        static ATerm l_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_136)), not_null(q_136));
          return(t);
        }
        t = k_136;
        t = n_0(t);
        if(((p_136 != NULL) && (p_136 != t)))
          _fail(t);
        else
          p_136 = t;
        t = h_136;
        t = k_0(t);
        if(((q_136 != NULL) && (q_136 != t)))
          _fail(t);
        else
          q_136 = t;
        t = k_136;
        t = reverse_acc_2_0(k_0, l_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_y_60;
      t = n_0(t);
    }
  return(t);
}
static ATerm m_18 (ATerm t)
{
  ATerm w_136 = NULL,x_136 = NULL,y_136 = NULL,w_30 = NULL;
  y_136 = t;
  if(match_cons(t, sym_Program_1))
    {
      x_136 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_136);
  w_136 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_136);
  w_30 = t;
  t = SSLsetAnnotations(w_30, w_136);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_18 (ATerm t)
{
  ATerm a_137 = NULL;
  a_137 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_137), term_i_63);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_136 = NULL,t_136 = NULL;
  ATerm j_63 = t;
  int k_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_136 = NULL,v_136 = NULL;
      t = term_c_58;
      u_136 = t;
      t = term_e_62;
      v_136 = t;
      t = term_f_62;
      t = h_12(u_136, v_136, t);
      LocalPopChoice(k_63);
    }
  else
    {
      t = j_63;
      t = fetch_1_0(m_18, t);
    }
  t = term_l_63;
  t = echo_0_0(t);
  t = term_u_61;
  s_136 = t;
  t = term_v_61;
  t_136 = t;
  t = term_m_63;
  t = h_12(s_136, t_136, t);
  t = reverse_acc_2_0(_id, r_18, t);
  t = map_1_0(s_18, t);
  return(t);
}
ATerm fetch_1_0 (ATerm v_110 (ATerm), ATerm t)
{
  static ATerm y_137 (ATerm t)
  {
    ATerm v_137 = NULL,w_137 = NULL,x_137 = NULL;
    v_137 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_137 = ATgetFirst((ATermList) t);
        x_137 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm n_63 = t;
      int o_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_58 = NULL,z_58 = NULL,y_30 = NULL;
          t = SSLgetAnnotations(v_137);
          r_58 = t;
          t = w_137;
          t = v_110(t);
          z_58 = t;
          t = (ATerm) ATinsert(CheckATermList(x_137), z_58);
          y_30 = t;
          t = SSLsetAnnotations(y_30, r_58);
          LocalPopChoice(o_63);
        }
      else
        {
          t = n_63;
          {
            ATerm j_59 = NULL,m_59 = NULL,c_31 = NULL;
            t = SSLgetAnnotations(v_137);
            j_59 = t;
            t = x_137;
            t = y_137(t);
            m_59 = t;
            t = (ATerm) ATinsert(CheckATermList(m_59), w_137);
            c_31 = t;
            t = SSLsetAnnotations(c_31, j_59);
          }
        }
    }
    return(t);
  }
  t = y_137(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_138 = NULL,d_138 = NULL,e_138 = NULL;
  c_138 = t;
  {
    ATerm p_63 = t;
    int q_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_138;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_63 = ATgetFirst((ATermList) t);
                ATerm s_63 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_138;
          }
        LocalPopChoice(q_63);
      }
    else
      {
        t = p_63;
        t = (ATerm) ATinsert(ATempty, c_138);
      }
  }
  d_138 = t;
  t = term_b_59;
  e_138 = t;
  t = SSL_printnl(e_138, d_138);
  t = c_138;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm j_138 = NULL,k_138 = NULL;
  t = term_c_58;
  j_138 = t;
  t = term_e_62;
  k_138 = t;
  t = term_f_62;
  t = h_12(j_138, k_138, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm m_12 (ATerm n_58, ATerm o_58, ATerm t)
{
  t = SSL_hashtable_get(o_58, n_58);
  return(t);
}
static ATerm h_12 (ATerm l_56, ATerm m_56, ATerm t)
{
  ATerm l_138 = NULL;
  t = lookup_table_0_1(l_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_12(m_56, l_138, t);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm n_138 = NULL,o_138 = NULL;
  t = term_t_63;
  n_138 = t;
  t = term_y_60;
  o_138 = t;
  t = term_u_63;
  t = k_12(n_138, o_138, t);
  return(t);
}
static ATerm y_18 (ATerm t)
{
  t = term_v_63;
  return(t);
}
static ATerm z_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm p_138 = NULL,q_138 = NULL,r_138 = NULL,s_138 = NULL;
  t = term_t_63;
  r_138 = t;
  t = term_y_60;
  s_138 = t;
  t = term_u_63;
  t = k_12(r_138, s_138, t);
  t = term_w_63;
  p_138 = t;
  t = term_y_60;
  q_138 = t;
  t = term_x_63;
  t = k_12(p_138, q_138, t);
  t = term_y_63;
  return(t);
}
static ATerm c_19 (ATerm t)
{
  t = term_z_63;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_64 = t;
  int b_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_18, x_18, y_18, t);
      LocalPopChoice(b_64);
    }
  else
    {
      t = a_64;
      t = Option_3_0(z_18, a_19, c_19, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_89 (ATerm), ATerm f_89 (ATerm), ATerm t)
{
  ATerm u_138 = NULL,v_138 = NULL,w_138 = NULL,x_138 = NULL,y_138 = NULL,z_138 = NULL,h_31 = NULL;
  z_138 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_138 = ATgetFirst((ATermList) t);
      w_138 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_138);
  u_138 = t;
  t = v_138;
  t = e_89(t);
  x_138 = t;
  t = w_138;
  t = f_89(t);
  y_138 = t;
  t = (ATerm) ATinsert(CheckATermList(y_138), x_138);
  h_31 = t;
  t = SSLsetAnnotations(h_31, u_138);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_130 (ATerm), ATerm t)
{
  ATerm e_139 = NULL,f_139 = NULL,g_139 = NULL,h_139 = NULL,j_139 = NULL,k_139 = NULL,q_31 = NULL;
  e_139 = t;
  {
    ATerm c_64 = t;
    int d_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_64;
        t = u_130(t);
        LocalPopChoice(d_64);
      }
    else
      {
        t = c_64;
      }
  }
  t = e_139;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_139 = ATgetFirst((ATermList) t);
      h_139 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_139);
  f_139 = t;
  t = term_e_62;
  k_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_62, g_139);
  t = k_12(k_139, g_139, t);
  t = h_139;
  {
    static ATerm u_139 (ATerm t)
    {
      ATerm f_64 = t;
      int g_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_64 = t;
          int i_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_139 = NULL;
              n_139 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_139;
              LocalPopChoice(i_64);
            }
          else
            {
              t = h_64;
              t = u_130(t);
              t = Cons_2_0(_id, u_139, t);
            }
          LocalPopChoice(g_64);
        }
      else
        {
          t = f_64;
          {
            ATerm q_139 = NULL,r_139 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_139 = ATgetFirst((ATermList) t);
                r_139 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_139), (ATerm) ATmakeAppl(sym_Undefined_1, q_139));
          }
        }
      return(t);
    }
    t = u_139(t);
  }
  j_139 = t;
  t = (ATerm) ATinsert(CheckATermList(j_139), (ATerm) ATmakeAppl(sym_Program_1, g_139));
  q_31 = t;
  t = SSLsetAnnotations(q_31, f_139);
  return(t);
}
static ATerm l_19 (ATerm t)
{
  ATerm h_140 = NULL;
  h_140 = t;
  if(match_string(t, "--help"))
    {
      t = h_140;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_140;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_140;
        }
    }
  return(t);
}
static ATerm n_19 (ATerm t)
{
  ATerm i_140 = NULL,j_140 = NULL;
  t = term_y_62;
  i_140 = t;
  t = term_y_60;
  j_140 = t;
  t = term_j_64;
  t = k_12(i_140, j_140, t);
  t = term_q_64;
  return(t);
}
static ATerm s_19 (ATerm t)
{
  t = term_r_64;
  return(t);
}
static ATerm t_19 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_130 (ATerm), ATerm t)
{
  ATerm z_139 = NULL,a_140 = NULL,b_140 = NULL,c_140 = NULL,d_140 = NULL,e_140 = NULL,f_140 = NULL,g_140 = NULL;
  b_140 = t;
  t = term_u_61;
  c_140 = t;
  t = term_s_64;
  t = lookup_table_0_1(c_140, t);
  g_140 = t;
  t = term_v_61;
  d_140 = t;
  t = (ATerm) ATempty;
  e_140 = t;
  t = g_140;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_12(d_140, e_140, f_140, t);
  t = b_140;
  {
    static ATerm i_19 (ATerm t)
    {
      ATerm t_64 = t;
      int u_64 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_130(t);
          LocalPopChoice(u_64);
        }
      else
        {
          t = t_64;
          {
            ATerm v_64 = t;
            int w_64 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_19, n_19, s_19, t);
                LocalPopChoice(w_64);
              }
            else
              {
                t = v_64;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_19, t);
  }
  {
    ATerm x_64 = t;
    int y_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_140 = NULL;
        u_140 = t;
        {
          ATerm z_64 = t;
          int a_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_60 = NULL;
              t = u_140;
              {
                ATerm b_65 = t;
                int c_65 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_60 = NULL,f_60 = NULL;
                    t = term_c_58;
                    e_60 = t;
                    t = term_y_62;
                    f_60 = t;
                    t = term_z_62;
                    t = h_12(e_60, f_60, t);
                    LocalPopChoice(c_65);
                  }
                else
                  {
                    t = b_65;
                    t = fetch_1_0(t_19, t);
                  }
              }
              t = u_140;
              t = default_system_usage_0_0(t);
              t = term_g_61;
              d_60 = t;
              t = SSL_exit(d_60);
              LocalPopChoice(a_65);
            }
          else
            {
              t = z_64;
              {
                ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL;
                t = term_c_58;
                k_60 = t;
                t = term_t_63;
                l_60 = t;
                t = term_d_65;
                t = h_12(k_60, l_60, t);
                t = u_140;
                t = default_system_about_0_0(t);
                t = term_g_61;
                j_60 = t;
                t = SSL_exit(j_60);
              }
            }
        }
        LocalPopChoice(y_64);
      }
    else
      {
        t = x_64;
        {
          ATerm e_65 = t;
          int f_65 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_140 = NULL,w_140 = NULL,x_140 = NULL;
              static ATerm u_19 (ATerm t)
              {
                ATerm y_140 = NULL,z_140 = NULL,a_141 = NULL,s_31 = NULL;
                a_141 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_140 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_141);
                y_140 = t;
                t = z_140;
                if(((z_139 != NULL) && (z_139 != t)))
                  _fail(t);
                else
                  z_139 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_140);
                s_31 = t;
                t = SSLsetAnnotations(s_31, y_140);
                return(t);
              }
              t = fetch_1_0(u_19, t);
              t = term_q_36;
              w_140 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_139)), term_g_65);
              x_140 = t;
              t = SSL_printnl(w_140, x_140);
              t = (ATerm) ATmakeAppl(sym__2, term_q_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_139)), term_g_65));
              t = default_system_usage_0_0(t);
              t = term_t_36;
              v_140 = t;
              t = SSL_exit(v_140);
              LocalPopChoice(f_65);
            }
          else
            {
              t = e_65;
            }
        }
      }
  }
  a_140 = t;
  t = term_u_61;
  t = table_destroy_0_0(t);
  t = a_140;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm v_128 (ATerm), ATerm w_128 (ATerm), ATerm t)
{
  ATerm f_141 = NULL,g_141 = NULL,h_141 = NULL,i_141 = NULL,j_141 = NULL;
  t = parse_options_1_0(t_128, t);
  f_141 = t;
  t = term_h_65;
  t = table_create_0_0(t);
  t = term_h_65;
  g_141 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_h_65, term_i_65, f_141);
  t = lookup_table_0_1(g_141, t);
  j_141 = t;
  t = term_i_65;
  h_141 = t;
  t = j_141;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_12(h_141, f_141, i_141, t);
  t = f_141;
  t = v_128(t);
  {
    ATerm j_65 = t;
    int k_65 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_128, t);
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
              t = w_128(t);
              t = report_success_0_0(t);
              LocalPopChoice(m_65);
            }
          else
            {
              t = l_65;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_19 (ATerm t)
{
  ATerm o_65 = t;
  int p_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(p_65);
    }
  else
    {
      t = o_65;
      {
        ATerm r_65 = t;
        int s_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(s_65);
          }
        else
          {
            t = r_65;
            {
              ATerm t_65 = t;
              int u_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(u_65);
                }
              else
                {
                  t = t_65;
                  {
                    ATerm v_65 = t;
                    int w_65 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(a_20, f_20, g_20, t);
                        LocalPopChoice(w_65);
                      }
                    else
                      {
                        t = v_65;
                        {
                          ATerm x_65 = t;
                          int y_65 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(y_65);
                            }
                          else
                            {
                              t = x_65;
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
static ATerm w_19 (ATerm t)
{
  t = input_1_0(h_20, t);
  return(t);
}
static ATerm a_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_20 (ATerm t)
{
  ATerm l_141 = NULL,m_141 = NULL;
  t = term_e_59;
  l_141 = t;
  t = term_y_60;
  m_141 = t;
  t = term_z_65;
  t = k_12(l_141, m_141, t);
  t = term_a_66;
  return(t);
}
static ATerm g_20 (ATerm t)
{
  t = term_b_66;
  return(t);
}
static ATerm h_20 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(v_19, default_usage_0_0, _id, w_19, t);
  return(t);
}

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
ATerm term_q_60;
ATerm term_p_60;
ATerm term_o_60;
ATerm term_z_59;
ATerm term_y_59;
ATerm term_x_59;
ATerm term_u_59;
ATerm term_j_59;
ATerm term_i_59;
ATerm term_h_59;
ATerm term_g_59;
ATerm term_b_59;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_p_58;
ATerm term_h_58;
ATerm term_g_58;
ATerm term_f_58;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_s_57;
ATerm term_r_57;
ATerm term_q_57;
ATerm term_k_57;
ATerm term_j_57;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_e_57;
ATerm term_r_56;
ATerm term_q_56;
ATerm term_o_56;
ATerm term_n_56;
ATerm term_g_56;
ATerm term_d_56;
ATerm term_b_56;
ATerm term_z_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_k_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_h_55;
ATerm term_f_55;
ATerm term_e_55;
ATerm term_d_55;
ATerm term_z_54;
ATerm term_y_54;
ATerm term_x_54;
ATerm term_u_54;
ATerm term_l_54;
ATerm term_j_54;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_k_53;
ATerm term_f_53;
ATerm term_d_53;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_k_52;
ATerm term_i_52;
ATerm term_h_50;
ATerm term_g_50;
ATerm term_e_50;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_k_48;
ATerm term_j_48;
ATerm term_b_48;
ATerm term_s_42;
ATerm term_q_42;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_i_39;
ATerm term_e_39;
ATerm term_f_37;
ATerm term_e_37;
ATerm term_d_37;
ATerm term_c_37;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_n_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_e_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_y_35;
ATerm term_v_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_n_35;
ATerm term_m_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_v_32;
ATerm term_k_32;
ATerm term_y_28;
ATerm term_u_28;
ATerm term_p_26;
ATerm term_j_26;
ATerm term_f_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_s_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_k_23;
ATerm term_i_23;
ATerm term_g_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_z_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_p_20;
ATerm term_n_20;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_w_18;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATempty);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_20);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_21);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_19);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Op_2, term_a_22, (ATerm) ATempty);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_22);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Call_2, term_a_23, (ATerm) ATempty);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_24);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Call_2, term_v_24, (ATerm) ATempty);
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(sym_Call_2, term_z_21, (ATerm) ATempty);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_25);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_m_35));
  term_m_35 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_35);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(sym_RootApp_1, term_c_19);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_35);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_r_35);
  ATprotect(&(term_y_35));
  term_y_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_35);
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_e_36));
  term_e_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_36);
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_36);
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_36);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_36);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_36);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_d_37));
  term_d_37 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_37);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_39);
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_39);
  ATprotect(&(term_q_42));
  term_q_42 = (ATerm) ATmakeAppl(ATmakeSymbol("rule-scope", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_42);
  ATprotect(&(term_b_48));
  term_b_48 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_j_48));
  term_j_48 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_48);
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_48);
  ATprotect(&(term_e_50));
  term_e_50 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("label-scope", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_52);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_s_52);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_d_53);
  ATprotect(&(term_k_53));
  term_k_53 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_o_53);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_u_54);
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_54));
  term_z_54 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_55));
  term_e_55 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_55));
  term_k_55 = (ATerm) ATmakeAppl(sym__2, term_i_55, term_j_55);
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_55);
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(sym__2, term_q_55, term_z_54);
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_55));
  term_z_55 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_56));
  term_g_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_o_56));
  term_o_56 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_56));
  term_r_56 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_q_56);
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_i_55);
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_57));
  term_k_57 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_j_57);
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(sym__2, term_z_55, term_b_56);
  ATprotect(&(term_f_58));
  term_f_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(sym__2, term_f_58, term_z_54);
  ATprotect(&(term_h_58));
  term_h_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_58));
  term_p_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(sym__2, term_p_58, term_z_54);
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(sym__2, term_j_57, term_z_54);
  ATprotect(&(term_h_59));
  term_h_59 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(sym__3, term_z_55, term_b_56, (ATerm) ATempty);
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(sym__2, term_r_52, term_f_58);
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_59));
  term_y_59 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(sym__2, term_o_53, term_z_54);
  ATprotect(&(term_p_60));
  term_p_60 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm z_102 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm x_9 (ATerm e_135 (ATerm), ATerm d_76, ATerm b_76, ATerm c_76, ATerm g_76, ATerm e_76, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm e_135 (ATerm), ATerm t);
static ATerm y_17 (ATerm p_12, ATerm q_12, ATerm t);
static ATerm z_17 (ATerm w_12, ATerm a_13, ATerm t);
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
ATerm pat_td_1_0 (ATerm y_133 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm z_9 (ATerm u_66, ATerm v_66, ATerm w_66, ATerm t);
static ATerm o_29 (ATerm b_29, ATerm t);
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
static ATerm a_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm a_10 (ATerm h_62, ATerm i_62, ATerm j_62, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
ATerm ContextVar_0_0 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm dummify_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm b_10 (ATerm d_135 (ATerm), ATerm k_75, ATerm h_75, ATerm i_75, ATerm r_75, ATerm v_75, ATerm w_75, ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm e_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm l_6 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm f_135 (ATerm), ATerm t);
static ATerm o_6 (ATerm t);
static ATerm d_10 (ATerm k_76, ATerm j_76, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
ATerm debug_1_0 (ATerm a_109 (ATerm), ATerm t);
static ATerm s_67 (ATerm o_65, ATerm t);
static ATerm t_67 (ATerm q_65, ATerm t);
static ATerm s_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm d_70 (ATerm k_69, ATerm t);
static ATerm t_6 (ATerm t);
static ATerm v_6 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm LiftDynamicRules_old_0_0 (ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm d_104 (ATerm), ATerm t);
static ATerm g_7 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm i_135 (ATerm), ATerm t);
static ATerm i_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm y_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm k_8 (ATerm t);
static ATerm l_8 (ATerm t);
static ATerm n_8 (ATerm t);
static ATerm s_8 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm w_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm o_10 (ATerm l_78, ATerm k_78, ATerm t);
ATerm repeat_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm v_110 (ATerm), ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm t_134 (ATerm), ATerm u_134 (ATerm), ATerm v_134 (ATerm), ATerm t);
static ATerm d_9 (ATerm t);
static ATerm g_9 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm l_9 (ATerm t);
static ATerm o_9 (ATerm t);
static ATerm p_9 (ATerm t);
static ATerm r_9 (ATerm t);
static ATerm s_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_9 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm c_10 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm g_10 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm t_10 (ATerm w_113 (ATerm), ATerm k_30, ATerm j_30, ATerm t);
static ATerm u_10 (ATerm z_113 (ATerm), ATerm a_114 (ATerm), ATerm o_30, ATerm n_30, ATerm t);
static ATerm v_10 (ATerm r_113 (ATerm), ATerm i_30, ATerm h_30, ATerm t);
ATerm genzip_4_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t);
static ATerm k_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm a_11 (ATerm j_644, ATerm o_644, ATerm h_61, ATerm t);
ATerm while_not_2_0 (ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm t);
ATerm for_3_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm d_106 (ATerm x_104, ATerm y_104, ATerm z_104, ATerm t);
static ATerm x_12 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm z_12 (ATerm t);
static ATerm b_13 (ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
ATerm free_vars_3_0 (ATerm g_132 (ATerm), ATerm h_132 (ATerm), ATerm i_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm a_103 (ATerm), ATerm t);
static ATerm e_11 (ATerm b_55, ATerm c_55, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm r_104 (ATerm), ATerm t);
static ATerm f_11 (ATerm u_122 (ATerm), ATerm m_44, ATerm k_44, ATerm t);
static ATerm b_14 (ATerm t);
static ATerm d_14 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm g_11 (ATerm v_54, ATerm w_54, ATerm t);
ATerm end_scope_1_0 (ATerm r_122 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm q_122 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm k_14 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm o_117 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm c_110 (ATerm), ATerm t);
static ATerm b_113 (ATerm t_112, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm j_11 (ATerm h_35, ATerm t_34, ATerm t);
ATerm foldr_3_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm t);
static ATerm b_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm g_15 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm n_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm t_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm k_11 (ATerm c_40, ATerm d_40, ATerm t);
static ATerm l_11 (ATerm g_24, ATerm h_24, ATerm t);
static ATerm n_11 (ATerm c_109 (ATerm), ATerm c_175, ATerm m_24, ATerm t);
static ATerm m_11 (ATerm c_24, ATerm d_24, ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
ATerm output_1_0 (ATerm a_128 (ATerm), ATerm t);
static ATerm m_119 (ATerm g_119, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_11 (ATerm i_24, ATerm t);
static ATerm p_11 (ATerm v_38, ATerm w_38, ATerm t);
static ATerm q_11 (ATerm e_40, ATerm f_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_121 (ATerm w_119, ATerm t);
static ATerm d_121 (ATerm a_120, ATerm b_120, ATerm c_120, ATerm t);
static ATerm e_121 (ATerm k_120, ATerm l_120, ATerm m_120, ATerm t);
static ATerm r_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm b_128 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm n_16 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm o_16 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm r_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm a_12 (ATerm v_49, ATerm w_49, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
static ATerm z_16 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
static ATerm c_17 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm y_11 (ATerm q_54, ATerm r_54, ATerm p_54, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_11 (ATerm y_42, ATerm z_42, ATerm t);
ATerm foldr_2_0 (ATerm k_116 (ATerm), ATerm l_116 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_125 (ATerm), ATerm t);
static ATerm i_17 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_17 (ATerm t);
ATerm need_help_1_0 (ATerm r_127 (ATerm), ATerm t);
static ATerm b_12 (ATerm i_58, ATerm j_58, ATerm k_58, ATerm t);
ATerm lookup_table_0_1 (ATerm c_56, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_58, ATerm r_58, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm u_11 (ATerm n_58, ATerm o_58, ATerm t);
static ATerm v_11 (ATerm s_58, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm l_109 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_109 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_12 (ATerm l_58, ATerm m_58, ATerm t);
static ATerm x_11 (ATerm j_56, ATerm k_56, ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
static ATerm u_17 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_129 (ATerm), ATerm t);
static ATerm w_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm f_18 (ATerm t);
ATerm parse_options_1_0 (ATerm t_129 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_127 (ATerm), ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm t);
static ATerm h_18 (ATerm t);
static ATerm i_18 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm t_18 (ATerm t);
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
              t = term_w_18;
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
                  t = term_w_18;
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
                      t = term_c_19;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      z_0 = ATgetArgument(t, 0);
                      a_1 = ATgetArgument(t, 1);
                      x_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, a_1, (ATerm) ATmakeAppl(sym_Op_2, term_d_19, (ATerm) ATinsert(ATinsert(ATempty, x_0), z_0)));
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
ATerm topdown_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(z_102, t);
    return(t);
  }
  t = z_102(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm h_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_5);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm e_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = e_19;
      {
        ATerm j_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(k_19);
          }
        else
          {
            t = j_19;
            {
              ATerm l_19 = t;
              int m_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL,o_5 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_5 = ATgetArgument(t, 0);
                      m_5 = ATgetArgument(t, 1);
                      n_5 = ATgetArgument(t, 2);
                      o_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_5;
                  t = map_1_0(m_0, t);
                  LocalPopChoice(m_19);
                }
              else
                {
                  t = l_19;
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
  ATerm x_5 = NULL;
  ATerm q_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_5 = ATgetArgument(t, 0);
          {
            ATerm y_19 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_19);
      t = x_5;
    }
  else
    {
      t = q_19;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_5 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_5;
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm c_6 = NULL;
  c_6 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_6);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm d_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_6);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm z_19 = t;
  int c_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_20);
    }
  else
    {
      t = z_19;
      {
        ATerm d_20 = t;
        int e_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_20);
          }
        else
          {
            t = d_20;
            {
              ATerm f_20 = t;
              int g_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_6 = ATgetArgument(t, 0);
                      g_6 = ATgetArgument(t, 1);
                      h_6 = ATgetArgument(t, 2);
                      i_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_6;
                  t = map_1_0(b_1, t);
                  LocalPopChoice(g_20);
                }
              else
                {
                  t = f_20;
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
  ATerm u_6 = NULL;
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_6 = ATgetArgument(t, 0);
          {
            ATerm j_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_20);
      t = u_6;
    }
  else
    {
      t = h_20;
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
static ATerm c_1 (ATerm t)
{
  ATerm d_7 = NULL;
  d_7 = t;
  {
    ATerm k_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_7 = NULL,b_0 = NULL,h_0 = NULL,z_2 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            o_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_7);
        b_0 = t;
        t = o_7;
        t = ContextVar_0_0(t);
        h_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, h_0);
        z_2 = t;
        t = SSLsetAnnotations(z_2, b_0);
        LocalPopChoice(m_20);
      }
    else
      {
        t = k_20;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, d_7);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  static ATerm g_8 (ATerm a_4, ATerm b_4, ATerm c_4, ATerm d_4, ATerm j_4, ATerm l_4, ATerm n_4, ATerm t)
  {
    ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL,b_5 = NULL,c_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, j_4, term_p_20);
    {
      ATerm q_20 = t;
      if((PushChoice() == 0))
        {
          ATerm d_5 = NULL;
          if(match_cons(t, sym__2))
            {
              d_5 = ATgetArgument(t, 0);
              if((d_5 != ATgetArgument(t, 1)))
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
          t = q_20;
        }
    }
    t = new_0_0(t);
    t_4 = t;
    t = d_4;
    t = dummify_0_0(t);
    v_4 = t;
    {
      ATerm r_20 = t;
      int s_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_4;
          if((d_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, t_4);
          LocalPopChoice(s_20);
        }
      else
        {
          t = r_20;
          t = v_4;
        }
    }
    u_4 = t;
    t = v_4;
    t = free_vars_3_0(f_0, j_0, tboundin_3_0, t);
    t = map_1_0(s_0, t);
    z_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_4, l_4);
    t = free_vars_3_0(w_0, y_0, tboundin_3_0, t);
    t = filter_1_0(c_1, t);
    y_4 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_4, z_4);
    t = diff_0_0(t);
    a_5 = t;
    t = new_0_0(t);
    b_5 = t;
    t = a_4;
    t = v_0(t);
    c_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, c_5, (ATerm) ATmakeAppl(sym_Op_2, term_t_20, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(CheckATermList(a_5), (ATerm) ATmakeAppl(sym_Str_1, b_5)))), v_4)))), (ATerm) ATmakeAppl(sym_RDefT_4, a_4, b_4, c_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, t_4), d_4), j_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_4)))), u_4), (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(CheckATermList(a_5), (ATerm) ATmakeAppl(sym_Str_1, b_5))))), l_4))));
    return(t);
  }
  ATerm q_7 = NULL,s_7 = NULL,t_7 = NULL,u_7 = NULL,w_7 = NULL,x_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  t_7 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      u_7 = ATgetArgument(t, 0);
      w_7 = ATgetArgument(t, 1);
      x_7 = ATgetArgument(t, 2);
      z_7 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = z_7;
  if(match_cons(t, sym_Rule_3))
    {
      a_8 = ATgetArgument(t, 0);
      b_8 = ATgetArgument(t, 1);
      c_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_8;
  if(match_cons(t, sym_Op_2))
    {
      q_7 = ATgetArgument(t, 0);
      s_7 = ATgetArgument(t, 1);
      t = s_7;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = q_7;
          if(match_string(t, "Undefined"))
            {
              ATerm a_21 = t;
              int b_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
                  t = t_7;
                  t = new_0_0(t);
                  e_2 = t;
                  t = a_8;
                  t = dummify_0_0(t);
                  c_2 = t;
                  {
                    ATerm c_21 = t;
                    int d_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_2;
                        if((a_8 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_2);
                        LocalPopChoice(d_21);
                      }
                    else
                      {
                        t = c_21;
                        t = c_2;
                      }
                  }
                  f_2 = t;
                  t = u_7;
                  t = v_0(t);
                  g_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, g_2, (ATerm) ATmakeAppl(sym_Op_2, term_t_20, (ATerm) ATinsert(ATinsert(ATempty, term_p_20), c_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, u_7, w_7, x_7, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_2), a_8), term_p_20, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_z_20, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, u_7)))), f_2), term_p_20)), (ATerm) ATmakeAppl(sym_Seq_2, c_8, term_w_18)))));
                  LocalPopChoice(b_21);
                }
              else
                {
                  t = a_21;
                  t = g_8(u_7, w_7, x_7, a_8, b_8, c_8, t_7, t);
                }
            }
          else
            {
              t = g_8(u_7, w_7, x_7, a_8, b_8, c_8, t_7, t);
            }
        }
      else
        {
          t = q_7;
          t = g_8(u_7, w_7, x_7, a_8, b_8, c_8, t_7, t);
        }
    }
  else
    {
      t = g_8(u_7, w_7, x_7, a_8, b_8, c_8, t_7, t);
    }
  return(t);
}
static ATerm x_9 (ATerm e_135 (ATerm), ATerm d_76, ATerm b_76, ATerm c_76, ATerm g_76, ATerm e_76, ATerm t)
{
  ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
  t = new_0_0(t);
  p_8 = t;
  t = g_76;
  t = dummify_0_0(t);
  o_8 = t;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_8;
        if((g_76 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, p_8);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = o_8;
      }
  }
  q_8 = t;
  t = d_76;
  t = e_135(t);
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, r_8, o_8)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, d_76, b_76, c_76, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, p_8), g_76), term_p_20, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, d_76)))), q_8), term_m_21)), (ATerm) ATmakeAppl(sym_Seq_2, e_76, term_w_18))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm e_135 (ATerm), ATerm t)
{
  ATerm x_8 = NULL,a_9 = NULL,b_9 = NULL,e_9 = NULL,f_9 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      x_8 = ATgetArgument(t, 0);
      a_9 = ATgetArgument(t, 1);
      b_9 = ATgetArgument(t, 2);
      {
        ATerm n_21 = ATgetArgument(t, 3);
        if(match_cons(n_21, sym_Rule_3))
          {
            e_9 = ATgetArgument(n_21, 0);
            {
              ATerm q_21 = ATgetArgument(n_21, 1);
              if(match_cons(q_21, sym_Op_2))
                {
                  ATerm r_21 = ATgetArgument(q_21, 0);
                  if((ATgetSymbol((ATermAppl) r_21) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm s_21 = ATgetArgument(q_21, 1);
                    if(((ATgetType(s_21) != AT_LIST) || !(ATisEmpty(s_21))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            f_9 = ATgetArgument(n_21, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_9(e_135, x_8, a_9, b_9, e_9, f_9, t);
  return(t);
}
static ATerm y_17 (ATerm p_12, ATerm q_12, ATerm t)
{
  t = p_12;
  {
    ATerm u_21 = t;
    if((PushChoice() == 0))
      {
        ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL,v_12 = NULL,c_3 = NULL;
        v_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_12 = ATgetFirst((ATermList) t);
            u_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_12);
        s_12 = t;
        t = u_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(u_12), t_12);
        c_3 = t;
        t = SSLsetAnnotations(c_3, s_12);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_19, p_12);
  return(t);
}
static ATerm z_17 (ATerm w_12, ATerm a_13, ATerm t)
{
  t = w_12;
  {
    ATerm v_21 = t;
    if((PushChoice() == 0))
      {
        ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,d_3 = NULL;
        j_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_13 = ATgetFirst((ATermList) t);
            i_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_13);
        g_13 = t;
        t = i_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(i_13), h_13);
        d_3 = t;
        t = SSLsetAnnotations(d_3, g_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_21;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_21, w_12);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_b_22;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm z_13 = NULL,a_14 = NULL,p_2 = NULL;
  z_13 = t;
  t = SSL_explode_term(z_13);
  if(match_cons(t, sym__2))
    {
      ATerm d_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_22 = ATgetArgument(t, 1);
        if(((ATgetType(k_22) == AT_LIST) && !(ATisEmpty(k_22))))
          {
            a_14 = ATgetFirst((ATermList) k_22);
            {
              ATerm s_22 = (ATerm) ATgetNext((ATermList) k_22);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(z_13);
  if(match_cons(t, sym__2))
    {
      ATerm t_22 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_22) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(((ATgetType(u_22) == AT_LIST) && !(ATisEmpty(u_22))))
          {
            ATerm v_22 = ATgetFirst((ATermList) u_22);
            ATerm w_22 = (ATerm) ATgetNext((ATermList) u_22);
            if(((ATgetType(w_22) == AT_LIST) && !(ATisEmpty(w_22))))
              {
                p_2 = ATgetFirst((ATermList) w_22);
                {
                  ATerm x_22 = (ATerm) ATgetNext((ATermList) w_22);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_y_22, (ATerm) ATinsert(ATinsert(ATempty, p_2), a_14));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm n_14 = NULL,o_14 = NULL;
  if(match_cons(t, sym__2))
    {
      n_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_y_22, (ATerm) ATinsert(ATinsert(ATempty, o_14), n_14));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_b_22;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm s_14 = NULL,u_14 = NULL;
  if(match_cons(t, sym__2))
    {
      s_14 = ATgetArgument(t, 0);
      u_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_y_22, (ATerm) ATinsert(ATinsert(ATempty, u_14), s_14));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym__2))
    {
      r_15 = ATgetArgument(t, 0);
      s_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_22, (ATerm) ATinsert(ATinsert(ATempty, s_15), r_15));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_b_23;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  if(match_cons(t, sym__2))
    {
      u_15 = ATgetArgument(t, 0);
      v_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_22, (ATerm) ATinsert(ATinsert(ATempty, v_15), u_15));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,s_13 = NULL,t_13 = NULL;
  p_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      s_13 = ATgetArgument(t, 0);
      t_13 = ATgetArgument(t, 1);
      {
        ATerm w_13 = NULL;
        t = t_13;
        t = foldr_2_0(d_1, e_1, t);
        w_13 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, s_13, w_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          s_13 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, s_13, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              s_13 = ATgetArgument(t, 0);
              {
                ATerm u_2 = NULL;
                t = s_13;
                {
                  ATerm e_23 = t;
                  int f_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_g_23;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_i_23;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_k_23;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_n_23;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_o_23;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(f_23);
                    }
                  else
                    {
                      t = e_23;
                      {
                        ATerm w_2 = NULL;
                        t = SSL_explode_string(s_13);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm r_23 = ATgetFirst((ATermList) t);
                            if(((ATgetType(r_23) != AT_INT) || (ATgetInt((ATermInt) r_23) != 39)))
                              _fail(t);
                            {
                              ATerm u_23 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(u_23) == AT_LIST) && !(ATisEmpty(u_23))))
                                {
                                  w_2 = ATgetFirst((ATermList) u_23);
                                  {
                                    ATerm v_23 = (ATerm) ATgetNext((ATermList) u_23);
                                    if(((ATgetType(v_23) == AT_LIST) && !(ATisEmpty(v_23))))
                                      {
                                        ATerm w_23 = ATgetFirst((ATermList) v_23);
                                        if(((ATgetType(w_23) != AT_INT) || (ATgetInt((ATermInt) w_23) != 39)))
                                          _fail(t);
                                        {
                                          ATerm z_23 = (ATerm) ATgetNext((ATermList) v_23);
                                          if(((ATgetType(z_23) != AT_LIST) || !(ATisEmpty(z_23))))
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
              ATerm e_24 = t;
              int j_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      s_13 = ATgetArgument(t, 0);
                      {
                        ATerm l_24 = ATgetArgument(t, 1);
                      }
                      o_13 = ATgetArgument(t, 2);
                      k_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_24);
                  t = (ATerm) ATmakeAppl(sym_Con_3, s_13, o_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_13), (ATerm) ATempty));
                }
              else
                {
                  t = e_24;
                  {
                    ATerm o_24 = t;
                    int r_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            s_13 = ATgetArgument(t, 0);
                            {
                              ATerm t_24 = ATgetArgument(t, 1);
                            }
                            o_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(r_24);
                        t = (ATerm) ATmakeAppl(sym_Con_3, s_13, o_13, term_w_24);
                      }
                    else
                      {
                        t = o_24;
                        if(match_cons(t, sym_Con1_2))
                          {
                            s_13 = ATgetArgument(t, 0);
                            t_13 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, s_13, t_13, term_w_24);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                s_13 = ATgetArgument(t, 0);
                                t_13 = ATgetArgument(t, 1);
                                {
                                  static ATerm f_1 (ATerm t)
                                  {
                                    t = t_13;
                                    return(t);
                                  }
                                  t = s_13;
                                  t = foldr_2_0(f_1, g_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    s_13 = ATgetArgument(t, 0);
                                    t = s_13;
                                    t = foldr_2_0(h_1, i_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        s_13 = ATgetArgument(t, 0);
                                        t = s_13;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            l_13 = ATgetFirst((ATermList) t);
                                            m_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = m_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm g_25 = t;
                                                int l_25 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = y_17(s_13, p_13, t);
                                                    LocalPopChoice(l_25);
                                                  }
                                                else
                                                  {
                                                    t = g_25;
                                                    t = l_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = y_17(s_13, p_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = y_17(s_13, p_13, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            s_13 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, s_13));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                s_13 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, s_13));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    s_13 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, s_13));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        s_13 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, s_13));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            s_13 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_13), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                s_13 = ATgetArgument(t, 0);
                                                                t_13 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_13), t_13);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    s_13 = ATgetArgument(t, 0);
                                                                    t_13 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm j_1 (ATerm t)
                                                                      {
                                                                        t = t_13;
                                                                        return(t);
                                                                      }
                                                                      t = s_13;
                                                                      t = foldr_2_0(j_1, k_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        s_13 = ATgetArgument(t, 0);
                                                                        t = s_13;
                                                                        t = foldr_2_0(l_1, m_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            s_13 = ATgetArgument(t, 0);
                                                                            t_13 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_z_21, (ATerm) ATinsert(CheckATermList(t_13), s_13));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                s_13 = ATgetArgument(t, 0);
                                                                                t = s_13;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    l_13 = ATgetFirst((ATermList) t);
                                                                                    m_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = m_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm m_25 = t;
                                                                                        int n_25 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = z_17(s_13, p_13, t);
                                                                                            LocalPopChoice(n_25);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = m_25;
                                                                                            t = l_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = z_17(s_13, p_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = z_17(s_13, p_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_s_25;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        s_13 = ATgetArgument(t, 0);
                                                                                        t_13 = ATgetArgument(t, 1);
                                                                                        t = t_13;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            n_13 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_a_26, (ATerm) ATinsert(ATinsert(ATempty, n_13), s_13));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            s_13 = ATgetArgument(t, 0);
                                                                                            t = s_13;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                s_13 = ATgetArgument(t, 0);
                                                                                                t_13 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, s_13, t_13, term_c_19);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    s_13 = ATgetArgument(t, 0);
                                                                                                    t_13 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, s_13, t_13, term_c_19);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        s_13 = ATgetArgument(t, 0);
                                                                                                        t_13 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, s_13, (ATerm)ATempty, t_13);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            s_13 = ATgetArgument(t, 0);
                                                                                                            t_13 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, t_13, s_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                s_13 = ATgetArgument(t, 0);
                                                                                                                t_13 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, s_13, t_13, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    s_13 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, s_13, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        s_13 = ATgetArgument(t, 0);
                                                                                                                        t_13 = ATgetArgument(t, 1);
                                                                                                                        o_13 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, s_13, t_13, (ATerm)ATempty, o_13);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            s_13 = ATgetArgument(t, 0);
                                                                                                                            t_13 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, s_13, (ATerm)ATempty, (ATerm)ATempty, t_13);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                s_13 = ATgetArgument(t, 0);
                                                                                                                                t_13 = ATgetArgument(t, 1);
                                                                                                                                o_13 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, s_13, t_13, (ATerm)ATempty, o_13);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    s_13 = ATgetArgument(t, 0);
                                                                                                                                    t_13 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, s_13, (ATerm)ATempty, (ATerm)ATempty, t_13);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        s_13 = ATgetArgument(t, 0);
                                                                                                                                        t_13 = ATgetArgument(t, 1);
                                                                                                                                        o_13 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, s_13, t_13, (ATerm)ATempty, o_13);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            s_13 = ATgetArgument(t, 0);
                                                                                                                                            t_13 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, s_13, (ATerm)ATempty, (ATerm)ATempty, t_13);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm b_26 = ATgetArgument(t, 0);
                                                                                                                                                t_13 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, t_13);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
  c_18 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      d_18 = ATgetArgument(t, 0);
      b_18 = ATgetArgument(t, 1);
      {
        ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
        t = c_18;
        t = new_0_0(t);
        j_18 = t;
        t = new_0_0(t);
        k_18 = t;
        t = new_0_0(t);
        l_18 = t;
        t = new_0_0(t);
        m_18 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_18), l_18), k_18), j_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, j_18), (ATerm) ATmakeAppl(sym_Var_1, l_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, d_18, (ATerm)ATmakeAppl(sym_Var_1, j_18), (ATerm) ATmakeAppl(sym_Var_1, k_18)), (ATerm) ATmakeAppl(sym_BAM_3, b_18, (ATerm)ATmakeAppl(sym_Var_1, l_18), (ATerm) ATmakeAppl(sym_Var_1, m_18)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_18)), (ATerm) ATmakeAppl(sym_Var_1, k_18))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          d_18 = ATgetArgument(t, 0);
          {
            ATerm r_18 = NULL,s_18 = NULL,u_18 = NULL,v_18 = NULL;
            t = c_18;
            t = new_0_0(t);
            u_18 = t;
            t = d_18;
            {
              static ATerm n_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((r_18 != NULL) && (r_18 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      r_18 = ATgetArgument(t, 0);
                    if(((s_18 != NULL) && (s_18 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      s_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, u_18);
                return(t);
              }
              t = oncetd_1_0(n_1, t);
            }
            v_18 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_26, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_18)), not_null(r_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_18)), (ATerm) ATmakeAppl(sym_Build_1, v_18))));
          }
        }
      else
        {
          ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              d_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_18;
          t = new_0_0(t);
          z_18 = t;
          t = new_0_0(t);
          a_19 = t;
          t = d_18;
          {
            static ATerm o_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((x_18 != NULL) && (x_18 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    x_18 = ATgetArgument(t, 0);
                  if(((y_18 != NULL) && (y_18 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    y_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, z_18);
              return(t);
            }
            t = oncetd_1_0(o_1, t);
          }
          b_19 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_26, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_19))))), (ATerm)ATmakeAppl(sym_Var_1, z_18), (ATerm) ATmakeAppl(sym_Op_2, term_d_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_18)), not_null(x_18)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  f_19 = t;
  if(match_cons(t, sym_Match_1))
    {
      g_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_26 = t;
    int n_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
        t = f_19;
        t = new_0_0(t);
        o_19 = t;
        t = g_19;
        {
          static ATerm p_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((i_19 != NULL) && (i_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_19 = ATgetArgument(t, 0);
                if(((n_19 != NULL) && (n_19 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, o_19), i_19);
            return(t);
          }
          t = pat_td_1_0(p_1, t);
        }
        p_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_26, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, o_19))), (ATerm) ATmakeAppl(sym_Match_1, not_null(n_19))))));
        LocalPopChoice(n_26);
      }
    else
      {
        t = m_26;
        {
          ATerm y_26 = t;
          int a_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
              t = f_19;
              t = new_0_0(t);
              s_19 = t;
              t = g_19;
              {
                static ATerm q_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((r_19 != NULL) && (r_19 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        r_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, s_19);
                  return(t);
                }
                t = pat_td_1_0(q_1, t);
              }
              t_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, s_19)), not_null(r_19))));
              LocalPopChoice(a_27);
            }
          else
            {
              t = y_26;
              {
                ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,a_20 = NULL;
                t = f_19;
                t = new_0_0(t);
                x_19 = t;
                t = g_19;
                {
                  static ATerm r_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_19 != NULL) && (w_19 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_19 = ATgetArgument(t, 0);
                        if(((v_19 != NULL) && (v_19 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_19 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, x_19);
                    return(t);
                  }
                  t = pat_td_1_0(r_1, t);
                }
                a_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_19)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_19)), not_null(w_19)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm y_133 (ATerm), ATerm t)
{
  ATerm d_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_133(t);
      LocalPopChoice(f_27);
    }
  else
    {
      t = d_27;
      {
        ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL;
        i_25 = t;
        if(match_cons(t, sym_Op_2))
          {
            j_25 = ATgetArgument(t, 0);
            k_25 = ATgetArgument(t, 1);
            {
              ATerm k_3 = NULL,p_3 = NULL,h_3 = NULL;
              t = SSLgetAnnotations(i_25);
              k_3 = t;
              t = k_25;
              {
                static ATerm s_1 (ATerm t)
                {
                  t = pat_td_1_0(y_133, t);
                  return(t);
                }
                t = fetch_1_0(s_1, t);
              }
              p_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, j_25, p_3);
              h_3 = t;
              t = SSLsetAnnotations(h_3, k_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                j_25 = ATgetArgument(t, 0);
                k_25 = ATgetArgument(t, 1);
                {
                  ATerm g_27 = t;
                  int h_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm i_4 = NULL,o_4 = NULL,i_3 = NULL;
                      t = SSLgetAnnotations(i_25);
                      i_4 = t;
                      t = k_25;
                      t = pat_td_1_0(y_133, t);
                      o_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, j_25, o_4);
                      i_3 = t;
                      t = SSLsetAnnotations(i_3, i_4);
                      LocalPopChoice(h_27);
                    }
                  else
                    {
                      t = g_27;
                      {
                        ATerm n_6 = NULL,r_6 = NULL,m_3 = NULL;
                        t = SSLgetAnnotations(i_25);
                        n_6 = t;
                        t = j_25;
                        t = pat_td_1_0(y_133, t);
                        r_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, r_6, k_25);
                        m_3 = t;
                        t = SSLsetAnnotations(m_3, n_6);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    j_25 = ATgetArgument(t, 0);
                    k_25 = ATgetArgument(t, 1);
                    h_25 = ATgetArgument(t, 2);
                    {
                      ATerm f_7 = NULL,p_7 = NULL,o_3 = NULL;
                      t = SSLgetAnnotations(i_25);
                      f_7 = t;
                      t = h_25;
                      {
                        static ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1_0(y_133, t);
                          return(t);
                        }
                        t = fetch_1_0(t_1, t);
                      }
                      p_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, j_25, k_25, p_7);
                      o_3 = t;
                      t = SSLsetAnnotations(o_3, f_7);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        j_25 = ATgetArgument(t, 0);
                        k_25 = ATgetArgument(t, 1);
                        h_25 = ATgetArgument(t, 2);
                        {
                          ATerm m_8 = NULL,y_8 = NULL,r_3 = NULL;
                          t = SSLgetAnnotations(i_25);
                          m_8 = t;
                          t = h_25;
                          {
                            static ATerm u_1 (ATerm t)
                            {
                              t = pat_td_1_0(y_133, t);
                              return(t);
                            }
                            t = fetch_1_0(u_1, t);
                          }
                          y_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, j_25, k_25, y_8);
                          r_3 = t;
                          t = SSLsetAnnotations(r_3, m_8);
                        }
                      }
                    else
                      {
                        ATerm m_9 = NULL,q_9 = NULL,t_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            j_25 = ATgetArgument(t, 0);
                            k_25 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(i_25);
                        m_9 = t;
                        t = k_25;
                        t = pat_td_1_0(y_133, t);
                        q_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, j_25, q_9);
                        t_3 = t;
                        t = SSLsetAnnotations(t_3, m_9);
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
  ATerm x_25 = NULL,c_26 = NULL;
  x_25 = t;
  if(match_cons(t, sym_Build_1))
    {
      c_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_27 = t;
    int q_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_26 = NULL,e_26 = NULL,g_26 = NULL,h_26 = NULL;
        t = x_25;
        t = new_0_0(t);
        g_26 = t;
        t = c_26;
        {
          static ATerm v_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((d_26 != NULL) && (d_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  d_26 = ATgetArgument(t, 0);
                if(((e_26 != NULL) && (e_26 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  e_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, g_26);
            return(t);
          }
          t = pat_td_1_0(v_1, t);
        }
        h_26 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_28, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_26)), not_null(d_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_26)))), (ATerm) ATmakeAppl(sym_Build_1, h_26)));
        LocalPopChoice(q_28);
      }
    else
      {
        t = i_27;
        {
          ATerm v_28 = t;
          int w_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_26 = NULL,k_26 = NULL,l_26 = NULL;
              t = x_25;
              t = new_0_0(t);
              k_26 = t;
              t = c_26;
              {
                static ATerm w_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((i_26 != NULL) && (i_26 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        i_26 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, k_26);
                  return(t);
                }
                t = pat_td_1_0(w_1, t);
              }
              l_26 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(i_26), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_26)))), (ATerm) ATmakeAppl(sym_Build_1, l_26)));
              LocalPopChoice(w_28);
            }
          else
            {
              t = v_28;
              {
                ATerm o_26 = NULL,w_26 = NULL,b_27 = NULL,c_27 = NULL;
                t = x_25;
                t = new_0_0(t);
                b_27 = t;
                t = c_26;
                {
                  static ATerm x_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((o_26 != NULL) && (o_26 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          o_26 = ATgetArgument(t, 0);
                        if(((w_26 != NULL) && (w_26 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          w_26 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, b_27);
                    return(t);
                  }
                  t = pat_td_1_0(x_1, t);
                }
                c_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(o_26), not_null(w_26), (ATerm) ATmakeAppl(sym_Var_1, b_27))), (ATerm) ATmakeAppl(sym_Build_1, c_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm x_28 = t;
  if((PushChoice() == 0))
    {
      ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,j_7 = NULL;
      t_27 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_27);
      r_27 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_27);
      j_7 = t;
      t = SSLsetAnnotations(j_7, r_27);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_28;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_28;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_27 = ATgetFirst((ATermList) t);
      v_27 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_27, v_27);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL,j_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_28 = ATgetArgument(t, 0);
      if(match_cons(z_28, sym__2))
        {
          f_28 = ATgetArgument(z_28, 0);
          g_28 = ATgetArgument(z_28, 1);
        }
      else
        _fail(t);
      {
        ATerm c_29 = ATgetArgument(t, 1);
        if(match_cons(c_29, sym__2))
          {
            h_28 = ATgetArgument(c_29, 0);
            j_28 = ATgetArgument(c_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_28), f_28), (ATerm) ATinsert(CheckATermList(j_28), g_28));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_28;
  return(t);
}
static ATerm h_2 (ATerm t)
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
static ATerm i_2 (ATerm t)
{
  ATerm o_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_29 = ATgetArgument(t, 0);
      if(match_cons(n_29, sym__2))
        {
          o_28 = ATgetArgument(n_29, 0);
          r_28 = ATgetArgument(n_29, 1);
        }
      else
        _fail(t);
      {
        ATerm s_29 = ATgetArgument(t, 1);
        if(match_cons(s_29, sym__2))
          {
            s_28 = ATgetArgument(s_29, 0);
            t_28 = ATgetArgument(s_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_28), o_28), (ATerm) ATinsert(CheckATermList(t_28), r_28));
  return(t);
}
static ATerm z_9 (ATerm u_66, ATerm v_66, ATerm w_66, ATerm t)
{
  ATerm e_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,k_7 = NULL;
  t = w_66;
  t = fetch_1_0(y_1, t);
  t = w_66;
  t = genzip_4_0(z_1, a_2, b_2, LiftPrimArg_0_0, t);
  q_27 = t;
  if(match_cons(t, sym__2))
    {
      m_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_27);
  l_27 = t;
  t = m_27;
  t = concat_0_0(t);
  o_27 = t;
  t = n_27;
  t = genzip_4_0(d_2, h_2, i_2, _id, t);
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_27, p_27);
  k_7 = t;
  t = SSLsetAnnotations(k_7, l_27);
  if(match_cons(t, sym__2))
    {
      e_27 = ATgetArgument(t, 0);
      {
        ATerm t_29 = ATgetArgument(t, 1);
        if(match_cons(t_29, sym__2))
          {
            j_27 = ATgetArgument(t_29, 0);
            k_27 = ATgetArgument(t_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, e_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_27), (ATerm) ATmakeAppl(sym_CallT_3, u_66, v_66, k_27)));
  return(t);
}
static ATerm o_29 (ATerm b_29, ATerm t)
{
  ATerm d_29 = NULL;
  t = b_29;
  {
    ATerm u_29 = t;
    if((PushChoice() == 0))
      {
        ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,i_8 = NULL;
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
        i_8 = t;
        t = SSLsetAnnotations(i_8, e_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_29;
      }
  }
  t = new_0_0(t);
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, d_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_29)))), (ATerm) ATmakeAppl(sym_Var_1, d_29)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm h_29 = NULL,m_29 = NULL;
  h_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_29 = ATgetArgument(t, 0);
      {
        ATerm v_29 = t;
        int x_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_29(h_29, t);
            LocalPopChoice(x_29);
          }
        else
          {
            t = v_29;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_c_19, (ATerm) ATmakeAppl(sym_Var_1, m_29)));
          }
      }
    }
  else
    {
      t = o_29(h_29, t);
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm y_29 = t;
  if((PushChoice() == 0))
    {
      ATerm s_10 = NULL,w_10 = NULL,x_10 = NULL,n_9 = NULL;
      x_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_10);
      s_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, w_10);
      n_9 = t;
      t = SSLsetAnnotations(n_9, s_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_29;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_28;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_10 = ATgetFirst((ATermList) t);
      z_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_10, z_10);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL,h_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_30 = ATgetArgument(t, 0);
      if(match_cons(a_30, sym__2))
        {
          b_11 = ATgetArgument(a_30, 0);
          c_11 = ATgetArgument(a_30, 1);
        }
      else
        _fail(t);
      {
        ATerm c_30 = ATgetArgument(t, 1);
        if(match_cons(c_30, sym__2))
          {
            d_11 = ATgetArgument(c_30, 0);
            h_11 = ATgetArgument(c_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_11), b_11), (ATerm) ATinsert(CheckATermList(h_11), c_11));
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_28;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm i_11 = NULL,t_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_11 = ATgetFirst((ATermList) t);
      t_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_11, t_11);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm z_11 = NULL,d_12 = NULL,e_12 = NULL,g_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_30 = ATgetArgument(t, 0);
      if(match_cons(d_30, sym__2))
        {
          z_11 = ATgetArgument(d_30, 0);
          d_12 = ATgetArgument(d_30, 1);
        }
      else
        _fail(t);
      {
        ATerm f_30 = ATgetArgument(t, 1);
        if(match_cons(f_30, sym__2))
          {
            e_12 = ATgetArgument(f_30, 0);
            g_12 = ATgetArgument(f_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_12), z_11), (ATerm) ATinsert(CheckATermList(g_12), d_12));
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm l_30 = t;
  if((PushChoice() == 0))
    {
      ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,w_11 = NULL;
      y_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          x_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_14);
      w_14 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, x_14);
      w_11 = t;
      t = SSLsetAnnotations(w_11, w_14);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_30;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_28;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm z_14 = NULL,a_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_14 = ATgetFirst((ATermList) t);
      a_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_14, a_15);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm c_15 = NULL,d_15 = NULL,i_15 = NULL,j_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_30 = ATgetArgument(t, 0);
      if(match_cons(q_30, sym__2))
        {
          c_15 = ATgetArgument(q_30, 0);
          d_15 = ATgetArgument(q_30, 1);
        }
      else
        _fail(t);
      {
        ATerm s_30 = ATgetArgument(t, 1);
        if(match_cons(s_30, sym__2))
          {
            i_15 = ATgetArgument(s_30, 0);
            j_15 = ATgetArgument(s_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_15), c_15), (ATerm) ATinsert(CheckATermList(j_15), d_15));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_28;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_15 = ATgetFirst((ATermList) t);
      l_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_15, l_15);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_30 = ATgetArgument(t, 0);
      if(match_cons(v_30, sym__2))
        {
          x_15 = ATgetArgument(v_30, 0);
          y_15 = ATgetArgument(v_30, 1);
        }
      else
        _fail(t);
      {
        ATerm w_30 = ATgetArgument(t, 1);
        if(match_cons(w_30, sym__2))
          {
            d_16 = ATgetArgument(w_30, 0);
            e_16 = ATgetArgument(w_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_16), x_15), (ATerm) ATinsert(CheckATermList(e_16), y_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  m_34 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      n_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
      l_34 = ATgetArgument(t, 2);
      {
        ATerm h_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,i_10 = NULL;
        t = l_34;
        t = fetch_1_0(j_2, t);
        t = l_34;
        t = genzip_4_0(k_2, l_2, m_2, LiftPrimArg_0_0, t);
        r_10 = t;
        if(match_cons(t, sym__2))
          {
            m_10 = ATgetArgument(t, 0);
            n_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_10);
        l_10 = t;
        t = m_10;
        t = concat_0_0(t);
        p_10 = t;
        t = n_10;
        t = genzip_4_0(n_2, o_2, q_2, _id, t);
        q_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_10, q_10);
        i_10 = t;
        t = SSLsetAnnotations(i_10, l_10);
        if(match_cons(t, sym__2))
          {
            h_10 = ATgetArgument(t, 0);
            {
              ATerm y_30 = ATgetArgument(t, 1);
              if(match_cons(y_30, sym__2))
                {
                  j_10 = ATgetArgument(y_30, 0);
                  k_10 = ATgetArgument(y_30, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, h_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_10), (ATerm) ATmakeAppl(sym_PrimT_3, n_34, o_34, k_10)));
      }
    }
  else
    {
      ATerm f_13 = NULL,q_13 = NULL,r_13 = NULL,x_13 = NULL,c_14 = NULL,q_14 = NULL,r_14 = NULL,t_14 = NULL,v_14 = NULL,f_12 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          n_34 = ATgetArgument(t, 0);
          o_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_34;
      t = fetch_1_0(r_2, t);
      t = o_34;
      t = genzip_4_0(s_2, t_2, v_2, LiftPrimArg_0_0, t);
      v_14 = t;
      if(match_cons(t, sym__2))
        {
          c_14 = ATgetArgument(t, 0);
          q_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(v_14);
      x_13 = t;
      t = c_14;
      t = concat_0_0(t);
      r_14 = t;
      t = q_14;
      t = genzip_4_0(x_2, y_2, a_3, _id, t);
      t_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_14, t_14);
      f_12 = t;
      t = SSLsetAnnotations(f_12, x_13);
      if(match_cons(t, sym__2))
        {
          f_13 = ATgetArgument(t, 0);
          {
            ATerm a_31 = ATgetArgument(t, 1);
            if(match_cons(a_31, sym__2))
              {
                q_13 = ATgetArgument(a_31, 0);
                r_13 = ATgetArgument(a_31, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, f_13, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_13), (ATerm) ATmakeAppl(sym_PrimT_3, n_34, (ATerm)ATempty, r_13)));
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,z_35 = NULL,a_36 = NULL;
  a_36 = t;
  if(match_cons(t, sym_Con_3))
    {
      t_35 = ATgetArgument(t, 0);
      u_35 = ATgetArgument(t, 1);
      z_35 = ATgetArgument(t, 2);
      {
        ATerm l_17 = NULL,x_17 = NULL;
        t = SSLgetAnnotations(a_36);
        l_17 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, t_35, u_35, z_35);
        x_17 = t;
        t = SSLsetAnnotations(x_17, l_17);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = a_36;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm c_31 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(b_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_31;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm f_38 = NULL,q_38 = NULL,x_38 = NULL,b_39 = NULL;
  q_38 = t;
  if(match_cons(t, sym_Con_3))
    {
      x_38 = ATgetArgument(t, 0);
      b_39 = ATgetArgument(t, 1);
      f_38 = ATgetArgument(t, 2);
      {
        ATerm o_18 = NULL,u_20 = NULL;
        t = SSLgetAnnotations(q_38);
        o_18 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, x_38, b_39, f_38);
        u_20 = t;
        t = SSLsetAnnotations(u_20, o_18);
      }
    }
  else
    {
      ATerm b_20 = NULL,v_20 = NULL;
      if(match_cons(t, sym_App_2))
        {
          x_38 = ATgetArgument(t, 0);
          b_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_38);
      b_20 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, x_38, b_39);
      v_20 = t;
      t = SSLsetAnnotations(v_20, b_20);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm d_31 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(e_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_31;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm q_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      q_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_39;
  if(match_cons(t, sym_StratRule_3))
    {
      v_39 = ATgetArgument(t, 0);
      w_39 = ATgetArgument(t, 1);
      x_39 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, w_39), (ATerm) ATmakeAppl(sym_Where_1, x_39)), v_39));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          v_39 = ATgetArgument(t, 0);
          w_39 = ATgetArgument(t, 1);
          x_39 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = v_39;
      t = pureterm_0_0(t);
      t = w_39;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, w_39)), (ATerm) ATmakeAppl(sym_Where_1, x_39)), (ATerm) ATmakeAppl(sym_Match_1, v_39)));
    }
  return(t);
}
static ATerm a_10 (ATerm h_62, ATerm i_62, ATerm j_62, ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL;
  t = new_0_0(t);
  q_40 = t;
  t = h_62;
  {
    static ATerm f_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm f_31 = ATgetArgument(t, 0);
          if(match_cons(f_31, sym_Var_1))
            {
              if(((p_40 != NULL) && (p_40 != ATgetArgument(f_31, 0))))
                _fail(ATgetArgument(f_31, 0));
              else
                p_40 = ATgetArgument(f_31, 0);
            }
          else
            _fail(t);
          if(((l_40 != NULL) && (l_40 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            l_40 = ATgetArgument(t, 1);
          {
            ATerm g_31 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_40);
      return(t);
    }
    t = oncetd_1_0(f_3, t);
  }
  r_40 = t;
  t = i_62;
  {
    static ATerm g_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm h_31 = ATgetArgument(t, 0);
          if(match_cons(h_31, sym_Var_1))
            {
              if(((p_40 != NULL) && (p_40 != ATgetArgument(h_31, 0))))
                _fail(ATgetArgument(h_31, 0));
              else
                p_40 = ATgetArgument(h_31, 0);
            }
          else
            _fail(t);
          if(((o_40 != NULL) && (o_40 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_40 = ATgetArgument(t, 1);
          {
            ATerm i_31 = ATgetArgument(t, 2);
            if(match_cons(i_31, sym_CallT_3))
              {
                if(((k_40 != NULL) && (k_40 != ATgetArgument(i_31, 0))))
                  _fail(ATgetArgument(i_31, 0));
                else
                  k_40 = ATgetArgument(i_31, 0);
                {
                  ATerm l_31 = ATgetArgument(i_31, 1);
                  if(((ATgetType(l_31) != AT_LIST) || !(ATisEmpty(l_31))))
                    _fail(t);
                }
                {
                  ATerm m_31 = ATgetArgument(i_31, 2);
                  if(((ATgetType(m_31) != AT_LIST) || !(ATisEmpty(m_31))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, q_40);
      return(t);
    }
    t = oncetd_1_0(g_3, t);
  }
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_40), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, r_40, s_40, (ATerm) ATmakeAppl(sym_Seq_2, j_62, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(k_40), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_40), not_null(o_40), term_c_19))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_40)), (ATerm) ATmakeAppl(sym_Var_1, q_40))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm n_31 = t;
  int o_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_31 = t;
      int q_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_41 = NULL,v_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,c_42 = NULL;
          y_41 = t;
          if(match_cons(t, sym_SRule_1))
            {
              z_41 = ATgetArgument(t, 0);
              t = z_41;
              if(match_cons(t, sym_Rule_3))
                {
                  t_41 = ATgetArgument(t, 0);
                  v_41 = ATgetArgument(t, 1);
                  x_41 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_41;
              t = a_10(t_41, v_41, x_41, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm l_20 = NULL,o_20 = NULL,y_20 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  z_41 = ATgetArgument(t, 0);
                  c_42 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(y_41);
              l_20 = t;
              t = c_42;
              t = desugarRule_0_0(t);
              o_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, z_41, o_20);
              y_20 = t;
              t = SSLsetAnnotations(y_20, l_20);
            }
          LocalPopChoice(q_31);
        }
      else
        {
          t = p_31;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(o_31);
    }
  else
    {
      t = n_31;
    }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(s_31);
    }
  else
    {
      t = r_31;
    }
  t = repeat_2_0(l_3, _id, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
      {
        ATerm v_31 = t;
        int w_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_43 = NULL,g_43 = NULL,h_43 = NULL,m_43 = NULL;
            d_43 = t;
            if(match_cons(t, sym_CallT_3))
              {
                g_43 = ATgetArgument(t, 0);
                h_43 = ATgetArgument(t, 1);
                m_43 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = d_43;
            t = z_9(g_43, h_43, m_43, t);
            LocalPopChoice(w_31);
          }
        else
          {
            t = v_31;
            {
              ATerm y_31 = t;
              int z_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(z_31);
                }
              else
                {
                  t = y_31;
                  {
                    ATerm a_32 = t;
                    int b_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(b_32);
                      }
                    else
                      {
                        t = a_32;
                        {
                          ATerm c_32 = t;
                          int d_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_32 = t;
                              int f_32 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      r_43 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = r_43;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      s_43 = ATgetArgument(t, 0);
                                      t = s_43;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          s_43 = ATgetArgument(t, 0);
                                          t_43 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, s_43, t_43);
                                    }
                                  LocalPopChoice(f_32);
                                }
                              else
                                {
                                  t = e_32;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(d_32);
                            }
                          else
                            {
                              t = c_32;
                              {
                                ATerm g_32 = t;
                                int h_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(h_32);
                                  }
                                else
                                  {
                                    t = g_32;
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
  t = topdown_1_0(j_3, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm z_44 = NULL;
  z_44 = t;
  {
    ATerm i_32 = t;
    int j_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_21 = NULL;
        t = term_k_32;
        e_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_k_32, z_44);
        t = e_11(e_21, z_44, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm l_32 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_32) != ATmakeSymbol("p_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = z_44;
        LocalPopChoice(j_32);
      }
    else
      {
        t = i_32;
        {
          ATerm t_21 = NULL;
          t = term_k_32;
          t_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_32, z_44);
          t = e_11(t_21, z_44, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm n_32 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) n_32) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = z_44;
        }
      }
  }
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
  y_46 = t;
  {
    ATerm o_32 = t;
    int p_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm q_32 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_32);
        t = y_46;
        {
          ATerm r_32 = t;
          if((PushChoice() == 0))
            {
              ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,i_21 = NULL;
              o_22 = t;
              if(match_cons(t, sym_Var_1))
                {
                  m_22 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(o_22);
              l_22 = t;
              t = m_22;
              {
                ATerm t_32 = t;
                int u_32 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(u_32);
                  }
                else
                  {
                    t = t_32;
                    {
                      ATerm c_23 = NULL,q_23 = NULL,y_23 = NULL,h_21 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          c_23 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(m_22);
                      q_23 = t;
                      t = c_23;
                      t = ContextVar_0_0(t);
                      y_23 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, y_23);
                      h_21 = t;
                      t = SSLsetAnnotations(h_21, q_23);
                    }
                  }
              }
              n_22 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, n_22);
              i_21 = t;
              t = SSLsetAnnotations(i_21, l_22);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_32;
            }
        }
        t = term_b_22;
      }
    else
      {
        t = o_32;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_b_22;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                z_46 = ATgetArgument(t, 0);
                {
                  ATerm j_47 = NULL;
                  t = z_46;
                  t = free_vars_3_0(q_3, s_3, tboundin_3_0, t);
                  t = map_1_0(v_3, t);
                  j_47 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_32, j_47);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    z_46 = ATgetArgument(t, 0);
                    a_47 = ATgetArgument(t, 1);
                    {
                      ATerm f_49 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, z_46, a_47);
                      t = free_vars_3_0(w_3, x_3, tboundin_3_0, t);
                      t = map_1_0(z_3, t);
                      f_49 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_v_32, f_49);
                    }
                  }
                else
                  {
                    ATerm a_24 = NULL,b_24 = NULL,k_24 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm w_32 = ATgetArgument(t, 0);
                        ATerm x_32 = ATgetArgument(t, 1);
                        ATerm y_32 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_z_32;
                    b_24 = t;
                    t = (ATerm) ATinsert(ATempty, term_a_33);
                    k_24 = t;
                    t = SSL_printnl(b_24, k_24);
                    t = term_b_33;
                    a_24 = t;
                    t = SSL_exit(a_24);
                    t = (ATerm) ATinsert(ATempty, term_a_33);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm k_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_47);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm c_33 = t;
  int d_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(d_33);
    }
  else
    {
      t = c_33;
      {
        ATerm e_33 = t;
        int g_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_33);
          }
        else
          {
            t = e_33;
            {
              ATerm h_33 = t;
              int i_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_47 = ATgetArgument(t, 0);
                      s_47 = ATgetArgument(t, 1);
                      t_47 = ATgetArgument(t, 2);
                      u_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_47;
                  t = map_1_0(u_3, t);
                  LocalPopChoice(i_33);
                }
              else
                {
                  t = h_33;
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
  ATerm q_48 = NULL;
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_48 = ATgetArgument(t, 0);
          {
            ATerm l_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_33);
      t = q_48;
    }
  else
    {
      t = j_33;
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
static ATerm v_3 (ATerm t)
{
  ATerm y_48 = NULL;
  y_48 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_48);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm g_49 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_49);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm m_33 = t;
  int n_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_33);
    }
  else
    {
      t = m_33;
      {
        ATerm o_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_33);
          }
        else
          {
            t = o_33;
            {
              ATerm q_33 = t;
              int s_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_49 = NULL,j_49 = NULL,n_49 = NULL,o_49 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_49 = ATgetArgument(t, 0);
                      j_49 = ATgetArgument(t, 1);
                      n_49 = ATgetArgument(t, 2);
                      o_49 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_49;
                  t = map_1_0(y_3, t);
                  LocalPopChoice(s_33);
                }
              else
                {
                  t = q_33;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm f_50 = NULL;
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_50 = ATgetArgument(t, 0);
          {
            ATerm v_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_33);
      t = f_50;
    }
  else
    {
      t = t_33;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_50 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_50;
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm k_50 = NULL;
  k_50 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, k_50);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(n_3, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm l_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_52 = ATgetArgument(t, 0);
      t = l_52;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_52 = ATgetArgument(t, 0);
          {
            ATerm w_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_52;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_52), (ATerm) ATempty);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm t_52 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_52 = ATgetArgument(t, 0);
      t = t_52;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_52 = ATgetArgument(t, 0);
          {
            ATerm x_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_52;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, t_52);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm e_53 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_53);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_34);
    }
  else
    {
      t = a_34;
      {
        ATerm d_34 = t;
        int e_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_34);
          }
        else
          {
            t = d_34;
            {
              ATerm h_34 = t;
              int k_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,l_53 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      g_53 = ATgetArgument(t, 0);
                      h_53 = ATgetArgument(t, 1);
                      i_53 = ATgetArgument(t, 2);
                      l_53 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_53;
                  t = map_1_0(k_4, t);
                  LocalPopChoice(k_34);
                }
              else
                {
                  t = h_34;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm x_53 = NULL;
  ATerm p_34 = t;
  int q_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_53 = ATgetArgument(t, 0);
          {
            ATerm r_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_34);
      t = x_53;
    }
  else
    {
      t = p_34;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_53 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_53;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm f_54 = NULL;
  f_54 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, f_54);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm g_54 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_54);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm s_34 = t;
  int u_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_34);
    }
  else
    {
      t = s_34;
      {
        ATerm v_34 = t;
        int w_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(w_34);
          }
        else
          {
            t = v_34;
            {
              ATerm y_34 = t;
              int z_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_54 = NULL,m_54 = NULL,o_54 = NULL,s_54 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_54 = ATgetArgument(t, 0);
                      m_54 = ATgetArgument(t, 1);
                      o_54 = ATgetArgument(t, 2);
                      s_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_54;
                  t = map_1_0(r_4, t);
                  LocalPopChoice(z_34);
                }
              else
                {
                  t = y_34;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm g_55 = NULL;
  ATerm a_35 = t;
  int b_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_55 = ATgetArgument(t, 0);
          {
            ATerm c_35 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_35);
      t = g_55;
    }
  else
    {
      t = a_35;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_55 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_55;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm o_55 = NULL;
  o_55 = t;
  {
    ATerm d_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_56 = NULL,n_24 = NULL,q_24 = NULL,l_21 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            a_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_55);
        n_24 = t;
        t = a_56;
        t = ContextVar_0_0(t);
        q_24 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, q_24);
        l_21 = t;
        t = SSLsetAnnotations(l_21, n_24);
        LocalPopChoice(f_35);
      }
    else
      {
        t = d_35;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, o_55);
  return(t);
}
static ATerm b_10 (ATerm d_135 (ATerm), ATerm k_75, ATerm h_75, ATerm i_75, ATerm r_75, ATerm v_75, ATerm w_75, ATerm t)
{
  ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,j_51 = NULL,k_51 = NULL,q_51 = NULL,r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,z_51 = NULL,b_52 = NULL,c_52 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_75, term_p_20);
  {
    ATerm g_35 = t;
    if((PushChoice() == 0))
      {
        ATerm e_52 = NULL;
        if(match_cons(t, sym__2))
          {
            e_52 = ATgetArgument(t, 0);
            if((e_52 != ATgetArgument(t, 1)))
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
        t = g_35;
      }
  }
  t = term_i_35;
  c_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_35, k_75);
  t = p_11(c_52, k_75, t);
  f_51 = t;
  t = term_j_35;
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_35, k_75);
  t = p_11(b_52, k_75, t);
  g_51 = t;
  t = new_0_0(t);
  h_51 = t;
  t = h_75;
  t = map_1_0(e_4, t);
  j_51 = t;
  t = i_75;
  t = map_1_0(f_4, t);
  k_51 = t;
  t = new_0_0(t);
  q_51 = t;
  t = r_75;
  t = dummify_0_0(t);
  s_51 = t;
  {
    ATerm k_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_51;
        if((r_75 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, q_51);
        LocalPopChoice(l_35);
      }
    else
      {
        t = k_35;
        t = s_51;
      }
  }
  r_51 = t;
  t = s_51;
  t = free_vars_3_0(g_4, h_4, tboundin_3_0, t);
  t = map_1_0(m_4, t);
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_75, w_75);
  t = free_vars_3_0(p_4, q_4, tboundin_3_0, t);
  t = filter_1_0(s_4, t);
  t_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_51, u_51);
  t = diff_0_0(t);
  v_51 = t;
  t = new_0_0(t);
  w_51 = t;
  t = k_75;
  t = d_135(t);
  z_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, z_51, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(CheckATermList(v_51), (ATerm) ATmakeAppl(sym_Str_1, w_51)))), s_51)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, g_51, h_75, i_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(CheckATermList(v_51), (ATerm) ATmakeAppl(sym_Str_1, w_51)))), r_75)), v_75, (ATerm) ATmakeAppl(sym_Seq_2, term_v_35, w_75)))), (ATerm) ATmakeAppl(sym_RDefT_4, f_51, h_75, i_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, q_51), r_75), (ATerm)ATmakeAppl(sym_Var_1, h_51), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_75)))), r_51), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_o_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_51), j_51, k_51), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_p_35), (ATerm) ATmakeAppl(sym_Var_1, q_51)))))), (ATerm) ATmakeAppl(sym_Var_1, h_51)))))), (ATerm) ATmakeAppl(sym_RDefT_4, k_75, h_75, i_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, q_51), r_75), v_75, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_21, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_75)))), r_51), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_w_20, (ATerm) ATinsert(CheckATermList(v_51), (ATerm) ATmakeAppl(sym_Str_1, w_51)))), term_m_35))), w_75)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm w_35 = t;
  int x_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_25 = NULL,p_25 = NULL,q_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL,w_25 = NULL,y_25 = NULL;
      e_25 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          p_25 = ATgetArgument(t, 0);
          q_25 = ATgetArgument(t, 1);
          t_25 = ATgetArgument(t, 2);
          u_25 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = u_25;
      if(match_cons(t, sym_Rule_3))
        {
          v_25 = ATgetArgument(t, 0);
          w_25 = ATgetArgument(t, 1);
          y_25 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = e_25;
      t = b_10(x_4, p_25, q_25, t_25, v_25, w_25, y_25, t);
      LocalPopChoice(x_35);
    }
  else
    {
      t = w_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(e_5, t);
    }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm q_26 = NULL;
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_26))));
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm r_26 = NULL;
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, r_26))));
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_28;
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_26 = ATgetFirst((ATermList) t);
      t_26 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_26, t_26);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm u_26 = NULL,v_26 = NULL,x_26 = NULL,z_26 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_36 = ATgetArgument(t, 0);
      if(match_cons(f_36, sym__2))
        {
          u_26 = ATgetArgument(f_36, 0);
          v_26 = ATgetArgument(f_36, 1);
        }
      else
        _fail(t);
      {
        ATerm g_36 = ATgetArgument(t, 1);
        if(match_cons(g_36, sym__2))
          {
            x_26 = ATgetArgument(g_36, 0);
            z_26 = ATgetArgument(g_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_26), u_26), (ATerm) ATinsert(CheckATermList(z_26), v_26));
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,i_28 = NULL,k_28 = NULL,n_28 = NULL,p_28 = NULL;
      b_28 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          c_28 = ATgetArgument(t, 0);
          d_28 = ATgetArgument(t, 1);
          e_28 = ATgetArgument(t, 2);
          i_28 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = i_28;
      if(match_cons(t, sym_Rule_3))
        {
          k_28 = ATgetArgument(t, 0);
          n_28 = ATgetArgument(t, 1);
          p_28 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = b_28;
      t = b_10(k_5, c_28, d_28, e_28, k_28, n_28, p_28, t);
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(p_5, t);
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm a_29 = NULL;
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, a_29))));
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm i_29 = NULL;
  i_29 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, i_29))));
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_28;
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm j_29 = NULL,k_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_29 = ATgetFirst((ATermList) t);
      k_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_29, k_29);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm l_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_36 = ATgetArgument(t, 0);
      if(match_cons(o_36, sym__2))
        {
          l_29 = ATgetArgument(o_36, 0);
          p_29 = ATgetArgument(o_36, 1);
        }
      else
        _fail(t);
      {
        ATerm p_36 = ATgetArgument(t, 1);
        if(match_cons(p_36, sym__2))
          {
            q_29 = ATgetArgument(p_36, 0);
            r_29 = ATgetArgument(p_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_29), l_29), (ATerm) ATinsert(CheckATermList(r_29), p_29));
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(u_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm w_61 = NULL;
  w_61 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, w_61))));
  return(t);
}
static ATerm v_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_28;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm x_61 = NULL,y_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_61 = ATgetFirst((ATermList) t);
      y_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_61, y_61);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_36 = ATgetArgument(t, 0);
      if(match_cons(s_36, sym__2))
        {
          z_61 = ATgetArgument(s_36, 0);
          a_62 = ATgetArgument(s_36, 1);
        }
      else
        _fail(t);
      {
        ATerm t_36 = ATgetArgument(t, 1);
        if(match_cons(t_36, sym__2))
          {
            b_62 = ATgetArgument(t_36, 0);
            c_62 = ATgetArgument(t_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_62), z_61), (ATerm) ATinsert(CheckATermList(c_62), a_62));
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(a_6, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  ATerm f_62 = NULL;
  f_62 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_62))));
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_28;
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm g_62 = NULL,r_62 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_62 = ATgetFirst((ATermList) t);
      r_62 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_62, r_62);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm s_62 = NULL,t_62 = NULL,u_62 = NULL,v_62 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_36 = ATgetArgument(t, 0);
      if(match_cons(x_36, sym__2))
        {
          s_62 = ATgetArgument(x_36, 0);
          t_62 = ATgetArgument(x_36, 1);
        }
      else
        _fail(t);
      {
        ATerm y_36 = ATgetArgument(t, 1);
        if(match_cons(y_36, sym__2))
          {
            u_62 = ATgetArgument(y_36, 0);
            v_62 = ATgetArgument(y_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_62), s_62), (ATerm) ATinsert(CheckATermList(v_62), t_62));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL;
  t_61 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      u_61 = ATgetArgument(t, 0);
      {
        ATerm x_24 = NULL,y_24 = NULL,b_25 = NULL,c_25 = NULL,d_25 = NULL,o_21 = NULL;
        t = u_61;
        t = map_1_0(w_4, t);
        t = genzip_4_0(f_5, g_5, i_5, _id, t);
        d_25 = t;
        if(match_cons(t, sym__2))
          {
            y_24 = ATgetArgument(t, 0);
            b_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_25);
        x_24 = t;
        t = b_25;
        t = concat_0_0(t);
        c_25 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_24, c_25);
        o_21 = t;
        t = SSLsetAnnotations(o_21, x_24);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          u_61 = ATgetArgument(t, 0);
          {
            ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,p_21 = NULL;
            t = u_61;
            t = map_1_0(j_5, t);
            t = genzip_4_0(q_5, r_5, s_5, _id, t);
            a_28 = t;
            if(match_cons(t, sym__2))
              {
                x_27 = ATgetArgument(t, 0);
                y_27 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(a_28);
            w_27 = t;
            t = y_27;
            t = concat_0_0(t);
            z_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_27, z_27);
            p_21 = t;
            t = SSLsetAnnotations(p_21, w_27);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              u_61 = ATgetArgument(t, 0);
              t = u_61;
              t = map_1_0(t_5, t);
              t = genzip_4_0(v_5, w_5, y_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  u_61 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = u_61;
              t = map_1_0(z_5, t);
              t = genzip_4_0(b_6, e_6, j_6, _id, t);
            }
        }
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm f_135 (ATerm), ATerm t)
{
  static ATerm g_63 (ATerm t)
  {
    static ATerm k_6 (ATerm t)
    {
      ATerm z_36 = t;
      int b_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_135(t);
          LocalPopChoice(b_37);
        }
      else
        {
          t = z_36;
          {
            ATerm b_63 = NULL,c_63 = NULL,f_63 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                b_63 = ATgetArgument(t, 0);
                c_63 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, b_63, c_63);
            {
              static ATerm m_6 (ATerm t)
              {
                t = b_63;
                t = DeclareContextVars_0_0(t);
                t = c_63;
                t = g_63(t);
                if(((f_63 != NULL) && (f_63 != t)))
                  _fail(t);
                else
                  f_63 = t;
                return(t);
              }
              t = scope_2_0(l_6, m_6, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, b_63, not_null(f_63));
          }
        }
      return(t);
    }
    t = oncetd_1_0(k_6, t);
    return(t);
  }
  t = g_63(t);
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm d_10 (ATerm k_76, ATerm j_76, ATerm t)
{
  ATerm h_63 = NULL,f_64 = NULL,g_64 = NULL;
  static ATerm p_6 (ATerm t)
  {
    t = k_76;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = k_76;
    {
      static ATerm q_6 (ATerm t)
      {
        t = split_dynamic_rules_old_0_0(t);
        if(match_cons(t, sym__2))
          {
            if(((f_64 != NULL) && (f_64 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              f_64 = ATgetArgument(t, 0);
            if(((h_63 != NULL) && (h_63 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              h_63 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, f_64);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(q_6, t);
    }
    if(((g_64 != NULL) && (g_64 != t)))
      _fail(t);
    else
      g_64 = t;
    return(t);
  }
  t = scope_2_0(o_6, p_6, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_63)), not_null(g_64)), j_76);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,n_64 = NULL,o_64 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      n_64 = ATgetArgument(t, 0);
      o_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_64;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_64 = ATgetFirst((ATermList) t);
      l_64 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_d_37, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, l_64, o_64)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, k_64))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_64;
    }
  return(t);
}
ATerm debug_1_0 (ATerm a_109 (ATerm), ATerm t)
{
  ATerm t_64 = NULL,u_64 = NULL,v_64 = NULL,b_65 = NULL;
  t_64 = t;
  t = a_109(t);
  u_64 = t;
  t = term_z_32;
  v_64 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_64), u_64);
  b_65 = t;
  t = SSL_printnl(v_64, b_65);
  t = t_64;
  return(t);
}
static ATerm s_67 (ATerm o_65, ATerm t)
{
  t = SSL_is_string(o_65);
  return(t);
}
static ATerm t_67 (ATerm q_65, ATerm t)
{
  ATerm w_65 = NULL,y_65 = NULL,z_65 = NULL;
  t = term_z_32;
  y_65 = t;
  t = (ATerm) ATinsert(ATempty, term_e_37);
  z_65 = t;
  t = SSL_printnl(y_65, z_65);
  t = q_65;
  t = debug_1_0(s_6, t);
  t = term_b_33;
  w_65 = t;
  t = SSL_exit(w_65);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  t = term_f_37;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL;
  q_67 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      p_67 = ATgetArgument(t, 0);
      {
        ATerm g_37 = t;
        int h_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_67(q_67, t);
            LocalPopChoice(h_37);
          }
        else
          {
            t = g_37;
            t = p_67;
          }
      }
    }
  else
    {
      ATerm i_37 = t;
      int j_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_67(q_67, t);
          LocalPopChoice(j_37);
        }
      else
        {
          t = i_37;
          t = t_67(q_67, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm b_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL;
  if(match_cons(t, sym_UndefineDynRule_3))
    {
      l_68 = ATgetArgument(t, 0);
      q_68 = ATgetArgument(t, 1);
      b_68 = ATgetArgument(t, 2);
      t = l_68;
      if(match_cons(t, sym_DynRuleId_1))
        {
          m_68 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_68;
      if(match_cons(t, sym_RDecT_3))
        {
          n_68 = ATgetArgument(t, 0);
          o_68 = ATgetArgument(t, 1);
          p_68 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, n_68, o_68, p_68, (ATerm) ATmakeAppl(sym_Rule_3, q_68, term_p_20, b_68));
    }
  else
    {
      if(match_cons(t, sym_UndefineDynRuleNoCond_2))
        {
          l_68 = ATgetArgument(t, 0);
          q_68 = ATgetArgument(t, 1);
          t = l_68;
          if(match_cons(t, sym_DynRuleId_1))
            {
              m_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_68;
          if(match_cons(t, sym_RDecT_3))
            {
              n_68 = ATgetArgument(t, 0);
              o_68 = ATgetArgument(t, 1);
              p_68 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, n_68, o_68, p_68, (ATerm) ATmakeAppl(sym_Rule_3, q_68, term_p_20, term_c_19));
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              l_68 = ATgetArgument(t, 0);
              q_68 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_68;
          if(match_cons(t, sym_DynRuleId_1))
            {
              m_68 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_68;
          if(match_cons(t, sym_RDecT_3))
            {
              n_68 = ATgetArgument(t, 0);
              o_68 = ATgetArgument(t, 1);
              p_68 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, n_68, o_68, p_68, q_68);
        }
    }
  return(t);
}
static ATerm d_70 (ATerm k_69, ATerm t)
{
  ATerm m_69 = NULL,n_69 = NULL,t_69 = NULL,u_69 = NULL;
  t = k_69;
  if(match_cons(t, sym_GenDynRules_1))
    {
      t_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_69;
  t = filter_1_0(t_6, t);
  u_69 = t;
  t = k_69;
  if(match_cons(t, sym_GenDynRules_1))
    {
      m_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_69;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  n_69 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, u_69), (ATerm) ATmakeAppl(sym_DynamicRules_1, n_69));
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm k_37 = ATgetArgument(t, 0);
      if(match_cons(k_37, sym_DynRuleId_1))
        {
          ATerm l_37 = ATgetArgument(k_37, 0);
          if(match_cons(l_37, sym_RDecT_3))
            {
              v_69 = ATgetArgument(l_37, 0);
              w_69 = ATgetArgument(l_37, 1);
              x_69 = ATgetArgument(l_37, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      y_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_RDefT_4, v_69, w_69, x_69, y_69);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm n_37 = ATgetArgument(t, 0);
      ATerm o_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm z_69 = NULL,a_70 = NULL;
  a_70 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      z_69 = ATgetArgument(t, 0);
      {
        ATerm r_37 = t;
        int s_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_29 = NULL;
            t = z_69;
            {
              ATerm t_37 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(v_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = t_37;
                }
            }
            t = z_69;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            w_29 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, w_29);
            LocalPopChoice(s_37);
          }
        else
          {
            t = r_37;
            t = d_70(a_70, t);
          }
      }
    }
  else
    {
      t = d_70(a_70, t);
    }
  return(t);
}
static ATerm w_6 (ATerm t)
{
  ATerm u_37 = t;
  int v_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_70 = NULL;
      f_70 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm w_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_70;
      LocalPopChoice(v_37);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = u_37;
      {
        ATerm x_37 = t;
        int y_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_70 = NULL;
            g_70 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm z_37 = ATgetArgument(t, 0);
                ATerm b_38 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_70;
            LocalPopChoice(y_37);
            {
              ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  h_70 = ATgetArgument(t, 0);
                  i_70 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_70;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              j_70 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, j_70, i_70);
            }
          }
        else
          {
            t = x_37;
          }
      }
    }
  return(t);
}
ATerm downgrade_new_dr_syntax_0_0 (ATerm t)
{
  t = topdown_1_0(w_6, t);
  return(t);
}
static ATerm x_6 (ATerm t)
{
  t = Cons_2_0(y_6, z_6, t);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL,z_73 = NULL,a_74 = NULL,w_21 = NULL;
  a_74 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      o_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_74);
  n_73 = t;
  t = o_73;
  t = topdown_1_0(a_7, t);
  t = listtd_1_0(b_7, t);
  z_73 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, z_73);
  w_21 = t;
  t = SSLsetAnnotations(w_21, n_73);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm c_38 = t;
  int d_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(d_38);
    }
  else
    {
      t = c_38;
    }
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = repeat_2_0(c_7, _id, t);
  return(t);
}
static ATerm c_7 (ATerm t)
{
  ATerm d_74 = NULL,h_74 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_74 = ATgetFirst((ATermList) t);
      h_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_10(d_74, h_74, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,a_71 = NULL,v_71 = NULL,y_21 = NULL,x_21 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  v_71 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_71);
  q_70 = t;
  t = r_70;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_70 = ATgetFirst((ATermList) t);
      v_70 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_70);
  t_70 = t;
  t = v_70;
  t = Cons_2_0(_id, x_6, t);
  w_70 = t;
  t = (ATerm) ATinsert(CheckATermList(w_70), u_70);
  x_21 = t;
  t = SSLsetAnnotations(x_21, t_70);
  a_71 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, a_71);
  y_21 = t;
  t = SSLsetAnnotations(y_21, q_70);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm t_77 = NULL,u_77 = NULL,v_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL;
  t_77 = t;
  if(match_cons(t, sym_AddDynRule_2))
    {
      u_77 = ATgetArgument(t, 0);
      z_77 = ATgetArgument(t, 1);
      t = u_77;
      {
        ATerm i_38 = t;
        int j_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_LabeledDynRuleId_2))
              {
                v_77 = ATgetArgument(t, 0);
                {
                  ATerm k_38 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_38);
            t = v_77;
            if(match_cons(t, sym_RDecT_3))
              {
                w_77 = ATgetArgument(t, 0);
                x_77 = ATgetArgument(t, 1);
                y_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, w_77, x_77, y_77)), z_77);
          }
        else
          {
            t = i_38;
            if(match_cons(t, sym_DynRuleId_1))
              {
                v_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_77;
            if(match_cons(t, sym_RDecT_3))
              {
                w_77 = ATgetArgument(t, 0);
                x_77 = ATgetArgument(t, 1);
                y_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, w_77, x_77, y_77)), z_77);
          }
      }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          u_77 = ATgetArgument(t, 0);
          z_77 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_77;
      {
        ATerm l_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_LabeledDynRuleId_2))
              {
                v_77 = ATgetArgument(t, 0);
                {
                  ATerm n_38 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(m_38);
            t = v_77;
            if(match_cons(t, sym_RDecT_3))
              {
                w_77 = ATgetArgument(t, 0);
                x_77 = ATgetArgument(t, 1);
                y_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, w_77, x_77, y_77)), z_77);
          }
        else
          {
            t = l_38;
            if(match_cons(t, sym_DynRuleId_1))
              {
                v_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_77;
            if(match_cons(t, sym_RDecT_3))
              {
                ATerm o_38 = ATgetArgument(t, 0);
                ATerm p_38 = ATgetArgument(t, 1);
                ATerm r_38 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = t_77;
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm d_104 (ATerm), ATerm t)
{
  static ATerm q_79 (ATerm t)
  {
    ATerm s_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_104(t);
        LocalPopChoice(u_38);
      }
    else
      {
        t = s_38;
        t = SRTS_one(q_79, t);
      }
    return(t);
  }
  t = q_79(t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm i_135 (ATerm), ATerm t)
{
  static ATerm y_79 (ATerm t)
  {
    static ATerm e_7 (ATerm t)
    {
      ATerm y_38 = t;
      int z_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_135(t);
          LocalPopChoice(z_38);
        }
      else
        {
          t = y_38;
          {
            ATerm t_79 = NULL,u_79 = NULL,x_79 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                t_79 = ATgetArgument(t, 0);
                u_79 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, t_79, u_79);
            {
              static ATerm h_7 (ATerm t)
              {
                t = t_79;
                t = DeclareContextVars_0_0(t);
                t = u_79;
                t = y_79(t);
                if(((x_79 != NULL) && (x_79 != t)))
                  _fail(t);
                else
                  x_79 = t;
                return(t);
              }
              t = scope_2_0(g_7, h_7, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, t_79, not_null(x_79));
          }
        }
      return(t);
    }
    t = oncetd_1_0(e_7, t);
    return(t);
  }
  t = y_79(t);
  return(t);
}
static ATerm i_7 (ATerm t)
{
  ATerm d_80 = NULL,f_80 = NULL,i_80 = NULL,k_80 = NULL;
  k_80 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      i_80 = ATgetArgument(t, 0);
      {
        ATerm a_39 = t;
        int d_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_80;
            d_80 = t;
            t = k_80;
            LocalPopChoice(d_39);
          }
        else
          {
            t = a_39;
            t = k_80;
            d_80 = t;
            t = k_80;
          }
      }
    }
  else
    {
      t = k_80;
      d_80 = t;
      t = k_80;
    }
  t = term_i_39;
  f_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_80, term_i_39);
  t = f_11(l_7, d_80, f_80, t);
  t = k_80;
  return(t);
}
static ATerm l_7 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm l_80 = NULL,n_80 = NULL,p_80 = NULL,q_80 = NULL;
  q_80 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      p_80 = ATgetArgument(t, 0);
      {
        ATerm j_39 = t;
        int k_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_80;
            l_80 = t;
            t = q_80;
            LocalPopChoice(k_39);
          }
        else
          {
            t = j_39;
            t = q_80;
            l_80 = t;
            t = q_80;
          }
      }
    }
  else
    {
      t = q_80;
      l_80 = t;
      t = q_80;
    }
  t = term_m_39;
  n_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_80, term_m_39);
  t = f_11(n_7, l_80, n_80, t);
  t = q_80;
  return(t);
}
static ATerm n_7 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm n_39 = t;
  int o_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(i_7, t);
      LocalPopChoice(o_39);
    }
  else
    {
      t = n_39;
      t = map_1_0(m_7, t);
    }
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm r_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_30);
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm p_39 = t;
  int r_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_39);
    }
  else
    {
      t = p_39;
      {
        ATerm s_39 = t;
        int t_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_39);
          }
        else
          {
            t = s_39;
            {
              ATerm u_39 = t;
              int y_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_30 = NULL,e_31 = NULL,j_31 = NULL,k_31 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      t_30 = ATgetArgument(t, 0);
                      e_31 = ATgetArgument(t, 1);
                      j_31 = ATgetArgument(t, 2);
                      k_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_31;
                  t = map_1_0(y_7, t);
                  LocalPopChoice(y_39);
                }
              else
                {
                  t = u_39;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm x_31 = NULL;
  ATerm z_39 = t;
  int a_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_31 = ATgetArgument(t, 0);
          {
            ATerm b_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_40);
      t = x_31;
    }
  else
    {
      t = z_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_31;
    }
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm s_32 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_32 = ATgetArgument(t, 0);
      t = s_32;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_32 = ATgetArgument(t, 0);
          {
            ATerm h_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = s_32;
    }
  return(t);
}
static ATerm e_8 (ATerm t)
{
  ATerm f_33 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      f_33 = ATgetArgument(t, 0);
      t = f_33;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_33 = ATgetArgument(t, 0);
          {
            ATerm i_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = f_33;
    }
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm r_33 = NULL;
  if(match_cons(t, sym__2))
    {
      r_33 = ATgetArgument(t, 0);
      if((r_33 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm c_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_34);
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm j_40 = t;
  int m_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_40);
    }
  else
    {
      t = j_40;
      {
        ATerm n_40 = t;
        int t_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_40);
          }
        else
          {
            t = n_40;
            {
              ATerm y_40 = t;
              int z_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_34 = NULL,g_34 = NULL,i_34 = NULL,j_34 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_34 = ATgetArgument(t, 0);
                      g_34 = ATgetArgument(t, 1);
                      i_34 = ATgetArgument(t, 2);
                      j_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = i_34;
                  t = map_1_0(k_8, t);
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
static ATerm k_8 (ATerm t)
{
  ATerm x_34 = NULL;
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_34 = ATgetArgument(t, 0);
          {
            ATerm c_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_41);
      t = x_34;
    }
  else
    {
      t = a_41;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_34;
    }
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm s_35 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      s_35 = ATgetArgument(t, 0);
      t = s_35;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_35 = ATgetArgument(t, 0);
          {
            ATerm d_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = s_35;
    }
  return(t);
}
static ATerm n_8 (ATerm t)
{
  ATerm d_36 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_36 = ATgetArgument(t, 0);
      t = d_36;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_36 = ATgetArgument(t, 0);
          {
            ATerm e_41 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = d_36;
    }
  return(t);
}
static ATerm s_8 (ATerm t)
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
  ATerm e_85 = NULL;
  e_85 = t;
  {
    ATerm f_41 = t;
    int g_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_30 = NULL,p_30 = NULL;
        t = e_85;
        t = free_vars_3_0(r_7, v_7, tboundin_3_0, t);
        e_30 = t;
        t = e_85;
        {
          ATerm h_41 = t;
          int i_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_32 = NULL;
              ATerm j_41 = t;
              int l_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm m_41 = ATgetArgument(t, 0);
                      ATerm n_41 = ATgetArgument(t, 1);
                      m_32 = ATgetArgument(t, 2);
                      {
                        ATerm o_41 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_41);
                  t = m_32;
                  t = map_1_0(d_8, t);
                }
              else
                {
                  t = j_41;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm q_41 = ATgetArgument(t, 0);
                      ATerm r_41 = ATgetArgument(t, 1);
                      m_32 = ATgetArgument(t, 2);
                      {
                        ATerm s_41 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = m_32;
                  t = map_1_0(e_8, t);
                }
              LocalPopChoice(i_41);
            }
          else
            {
              t = h_41;
              t = (ATerm) ATempty;
            }
        }
        p_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_30, p_30);
        t = t_10(f_8, e_30, p_30, t);
        LocalPopChoice(g_41);
      }
    else
      {
        t = f_41;
        {
          ATerm y_33 = NULL,z_33 = NULL;
          t = e_85;
          t = free_vars_3_0(h_8, j_8, tboundin_3_0, t);
          y_33 = t;
          t = e_85;
          {
            ATerm u_41 = t;
            int w_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_35 = NULL;
                ATerm a_42 = t;
                int d_42 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm f_42 = ATgetArgument(t, 0);
                        ATerm g_42 = ATgetArgument(t, 1);
                        e_35 = ATgetArgument(t, 2);
                        {
                          ATerm h_42 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(d_42);
                    t = e_35;
                    t = map_1_0(l_8, t);
                  }
                else
                  {
                    t = a_42;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm i_42 = ATgetArgument(t, 0);
                        ATerm j_42 = ATgetArgument(t, 1);
                        e_35 = ATgetArgument(t, 2);
                        {
                          ATerm k_42 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = e_35;
                    t = map_1_0(n_8, t);
                  }
                LocalPopChoice(w_41);
              }
            else
              {
                t = u_41;
                t = (ATerm) ATempty;
              }
          }
          z_33 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_33, z_33);
          t = t_10(s_8, y_33, z_33, t);
        }
      }
  }
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_k_32;
  return(t);
}
static ATerm w_8 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_28;
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm q_85 = NULL,r_85 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_85 = ATgetFirst((ATermList) t);
      r_85 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_85, r_85);
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL,w_85 = NULL,x_85 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_42 = ATgetArgument(t, 0);
      if(match_cons(l_42, sym__2))
        {
          u_85 = ATgetArgument(l_42, 0);
          v_85 = ATgetArgument(l_42, 1);
        }
      else
        _fail(t);
      {
        ATerm m_42 = ATgetArgument(t, 1);
        if(match_cons(m_42, sym__2))
          {
            w_85 = ATgetArgument(m_42, 0);
            x_85 = ATgetArgument(m_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_85), u_85), (ATerm) ATinsert(CheckATermList(x_85), v_85));
  return(t);
}
static ATerm o_10 (ATerm l_78, ATerm k_78, ATerm t)
{
  ATerm i_85 = NULL,j_85 = NULL,m_85 = NULL;
  static ATerm u_8 (ATerm t)
  {
    t = l_78;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = l_78;
    {
      static ATerm v_8 (ATerm t)
      {
        ATerm p_85 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            ATerm n_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = not_null(p_85);
        t = map_1_0(SplitDynamicRule_0_0, t);
        t = genzip_4_0(w_8, z_8, c_9, _id, t);
        if(match_cons(t, sym__2))
          {
            if(((j_85 != NULL) && (j_85 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              j_85 = ATgetArgument(t, 0);
            if(((i_85 != NULL) && (i_85 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              i_85 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, j_85);
        return(t);
      }
      t = split_dynamic_rule_1_0(v_8, t);
    }
    if(((m_85 != NULL) && (m_85 != t)))
      _fail(t);
    else
      m_85 = t;
    return(t);
  }
  t = scope_2_0(t_8, u_8, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_85)), not_null(m_85)), k_78);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm t)
{
  static ATerm b_86 (ATerm t)
  {
    ATerm o_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_101(t);
        t = b_86(t);
        LocalPopChoice(p_42);
      }
    else
      {
        t = o_42;
        t = a_102(t);
      }
    return(t);
  }
  t = b_86(t);
  return(t);
}
ATerm listtd_1_0 (ATerm v_110 (ATerm), ATerm t)
{
  static ATerm t_86 (ATerm t)
  {
    ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL;
    t = v_110(t);
    q_86 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_86;
      }
    else
      {
        ATerm w_36 = NULL,a_37 = NULL,c_22 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_86 = ATgetFirst((ATermList) t);
            s_86 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_86);
        w_36 = t;
        t = s_86;
        t = t_86(t);
        a_37 = t;
        t = (ATerm) ATinsert(CheckATermList(a_37), r_86);
        c_22 = t;
        t = SSLsetAnnotations(c_22, w_36);
      }
    return(t);
  }
  t = t_86(t);
  return(t);
}
ATerm DefDynRuleScope_0_0 (ATerm t)
{
  ATerm y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,d_87 = NULL,e_87 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      d_87 = ATgetArgument(t, 0);
      e_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_87;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_86 = ATgetFirst((ATermList) t);
      b_87 = (ATerm) ATgetNext((ATermList) t);
      t = z_86;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          a_87 = ATgetArgument(t, 0);
          y_86 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_s_42, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AddScopeLabel_2, a_87, y_86), (ATerm) ATmakeAppl(sym_DynRuleScope_2, b_87, e_87))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_87)));
        }
      else
        {
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              a_87 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_s_42, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, b_87, e_87)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_87)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = e_87;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm t_134 (ATerm), ATerm u_134 (ATerm), ATerm v_134 (ATerm), ATerm t)
{
  ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL;
  p_93 = t;
  if(match_cons(t, sym_Scope_2))
    {
      q_93 = ATgetArgument(t, 0);
      m_93 = ATgetArgument(t, 1);
      {
        ATerm m_37 = NULL,p_37 = NULL,q_37 = NULL,e_22 = NULL;
        t = SSLgetAnnotations(p_93);
        m_37 = t;
        t = q_93;
        t = v_134(t);
        p_37 = t;
        t = m_93;
        t = t_134(t);
        q_37 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, p_37, q_37);
        e_22 = t;
        t = SSLsetAnnotations(e_22, m_37);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          q_93 = ATgetArgument(t, 0);
          m_93 = ATgetArgument(t, 1);
          n_93 = ATgetArgument(t, 2);
          {
            ATerm a_38 = NULL,e_38 = NULL,g_38 = NULL,h_38 = NULL,f_22 = NULL;
            t = SSLgetAnnotations(p_93);
            a_38 = t;
            t = q_93;
            t = v_134(t);
            e_38 = t;
            t = m_93;
            t = v_134(t);
            g_38 = t;
            t = n_93;
            t = v_134(t);
            h_38 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, e_38, g_38, h_38);
            f_22 = t;
            t = SSLsetAnnotations(f_22, a_38);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              q_93 = ATgetArgument(t, 0);
              m_93 = ATgetArgument(t, 1);
              n_93 = ATgetArgument(t, 2);
              o_93 = ATgetArgument(t, 3);
              {
                ATerm t_38 = NULL,c_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,g_22 = NULL;
                t = SSLgetAnnotations(p_93);
                t_38 = t;
                t = q_93;
                t = v_134(t);
                c_39 = t;
                t = m_93;
                t = v_134(t);
                f_39 = t;
                t = n_93;
                t = v_134(t);
                g_39 = t;
                t = o_93;
                t = t_134(t);
                h_39 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, c_39, f_39, g_39, h_39);
                g_22 = t;
                t = SSLsetAnnotations(g_22, t_38);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  q_93 = ATgetArgument(t, 0);
                  m_93 = ATgetArgument(t, 1);
                  n_93 = ATgetArgument(t, 2);
                  o_93 = ATgetArgument(t, 3);
                  {
                    ATerm g_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,h_22 = NULL;
                    t = SSLgetAnnotations(p_93);
                    g_40 = t;
                    t = q_93;
                    t = v_134(t);
                    u_40 = t;
                    t = m_93;
                    t = v_134(t);
                    v_40 = t;
                    t = n_93;
                    t = v_134(t);
                    w_40 = t;
                    t = o_93;
                    t = t_134(t);
                    x_40 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, u_40, v_40, w_40, x_40);
                    h_22 = t;
                    t = SSLsetAnnotations(h_22, g_40);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      q_93 = ATgetArgument(t, 0);
                      {
                        ATerm k_41 = NULL,p_41 = NULL,i_22 = NULL;
                        t = SSLgetAnnotations(p_93);
                        k_41 = t;
                        t = q_93;
                        t = t_134(t);
                        p_41 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, p_41);
                        i_22 = t;
                        t = SSLsetAnnotations(i_22, k_41);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          q_93 = ATgetArgument(t, 0);
                          {
                            ATerm b_42 = NULL,e_42 = NULL,j_22 = NULL;
                            t = SSLgetAnnotations(p_93);
                            b_42 = t;
                            t = q_93;
                            t = t_134(t);
                            e_42 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, e_42);
                            j_22 = t;
                            t = SSLsetAnnotations(j_22, b_42);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              q_93 = ATgetArgument(t, 0);
                              {
                                ATerm r_42 = NULL,t_42 = NULL,p_22 = NULL;
                                t = SSLgetAnnotations(p_93);
                                r_42 = t;
                                t = q_93;
                                t = t_134(t);
                                t_42 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, t_42);
                                p_22 = t;
                                t = SSLsetAnnotations(p_22, r_42);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  q_93 = ATgetArgument(t, 0);
                                  {
                                    ATerm e_43 = NULL,i_43 = NULL,q_22 = NULL;
                                    t = SSLgetAnnotations(p_93);
                                    e_43 = t;
                                    t = q_93;
                                    t = t_134(t);
                                    i_43 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, i_43);
                                    q_22 = t;
                                    t = SSLsetAnnotations(q_22, e_43);
                                  }
                                }
                              else
                                {
                                  ATerm a_44 = NULL,d_44 = NULL,r_22 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      q_93 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(p_93);
                                  a_44 = t;
                                  t = q_93;
                                  t = t_134(t);
                                  d_44 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, d_44);
                                  r_22 = t;
                                  t = SSLsetAnnotations(r_22, a_44);
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
static ATerm d_9 (ATerm t)
{
  ATerm w_94 = NULL;
  ATerm u_42 = t;
  int v_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_94 = ATgetArgument(t, 0);
          {
            ATerm w_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_42);
      t = w_94;
    }
  else
    {
      t = u_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_94;
    }
  return(t);
}
static ATerm g_9 (ATerm t)
{
  ATerm f_95 = NULL;
  ATerm x_42 = t;
  int a_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_95 = ATgetArgument(t, 0);
          {
            ATerm b_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_43);
      t = f_95;
    }
  else
    {
      t = x_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_95;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm j_94 = NULL;
  ATerm c_43 = t;
  int f_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm j_43 = ATgetArgument(t, 0);
          ATerm k_43 = ATgetArgument(t, 1);
          j_94 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(f_43);
      t = j_94;
      t = map_1_0(d_9, t);
    }
  else
    {
      t = c_43;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm l_43 = ATgetArgument(t, 0);
          ATerm n_43 = ATgetArgument(t, 1);
          j_94 = ATgetArgument(t, 2);
          {
            ATerm o_43 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = j_94;
      t = map_1_0(g_9, t);
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm c_96 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_96);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm p_43 = t;
  int q_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_43);
    }
  else
    {
      t = p_43;
      {
        ATerm u_43 = t;
        int v_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_43);
          }
        else
          {
            t = u_43;
            {
              ATerm w_43 = t;
              int x_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_96 = NULL,f_96 = NULL,g_96 = NULL,h_96 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      e_96 = ATgetArgument(t, 0);
                      f_96 = ATgetArgument(t, 1);
                      g_96 = ATgetArgument(t, 2);
                      h_96 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_96;
                  t = map_1_0(j_9, t);
                  LocalPopChoice(x_43);
                }
              else
                {
                  t = w_43;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm s_96 = NULL;
  ATerm y_43 = t;
  int z_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_96 = ATgetArgument(t, 0);
          {
            ATerm b_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_43);
      t = s_96;
    }
  else
    {
      t = y_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_96;
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm y_96 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_96);
  return(t);
}
static ATerm l_9 (ATerm t)
{
  ATerm c_44 = t;
  int e_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(e_44);
    }
  else
    {
      t = c_44;
      {
        ATerm f_44 = t;
        int g_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(g_44);
          }
        else
          {
            t = f_44;
            {
              ATerm h_44 = t;
              int i_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_97 = NULL,f_97 = NULL,h_97 = NULL,i_97 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      c_97 = ATgetArgument(t, 0);
                      f_97 = ATgetArgument(t, 1);
                      h_97 = ATgetArgument(t, 2);
                      i_97 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_97;
                  t = map_1_0(o_9, t);
                  LocalPopChoice(i_44);
                }
              else
                {
                  t = h_44;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_9 (ATerm t)
{
  ATerm q_97 = NULL;
  ATerm j_44 = t;
  int n_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_97 = ATgetArgument(t, 0);
          {
            ATerm o_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_44);
      t = q_97;
    }
  else
    {
      t = j_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_97;
    }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm c_98 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_98);
  return(t);
}
static ATerm r_9 (ATerm t)
{
  ATerm q_44 = t;
  int r_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_44);
    }
  else
    {
      t = q_44;
      {
        ATerm s_44 = t;
        int t_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_44);
          }
        else
          {
            t = s_44;
            {
              ATerm u_44 = t;
              int v_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_98 = NULL,i_98 = NULL,m_98 = NULL,n_98 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      h_98 = ATgetArgument(t, 0);
                      i_98 = ATgetArgument(t, 1);
                      m_98 = ATgetArgument(t, 2);
                      n_98 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_98;
                  t = map_1_0(s_9, t);
                  LocalPopChoice(v_44);
                }
              else
                {
                  t = u_44;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_9 (ATerm t)
{
  ATerm z_98 = NULL;
  ATerm w_44 = t;
  int x_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_98 = ATgetArgument(t, 0);
          {
            ATerm y_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_44);
      t = z_98;
    }
  else
    {
      t = w_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_98 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_98;
    }
  return(t);
}
static ATerm t_9 (ATerm t)
{
  ATerm g_99 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_99);
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm a_45 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(b_45);
    }
  else
    {
      t = a_45;
      {
        ATerm c_45 = t;
        int d_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(d_45);
          }
        else
          {
            t = c_45;
            {
              ATerm e_45 = t;
              int g_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_99 = NULL,j_99 = NULL,k_99 = NULL,l_99 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_99 = ATgetArgument(t, 0);
                      j_99 = ATgetArgument(t, 1);
                      k_99 = ATgetArgument(t, 2);
                      l_99 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_99;
                  t = map_1_0(v_9, t);
                  LocalPopChoice(g_45);
                }
              else
                {
                  t = e_45;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm s_99 = NULL;
  ATerm h_45 = t;
  int j_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_99 = ATgetArgument(t, 0);
          {
            ATerm k_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_45);
      t = s_99;
    }
  else
    {
      t = h_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_99 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_99;
    }
  return(t);
}
static ATerm w_9 (ATerm t)
{
  ATerm w_99 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_99);
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm l_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_45);
    }
  else
    {
      t = l_45;
      {
        ATerm p_45 = t;
        int q_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(q_45);
          }
        else
          {
            t = p_45;
            {
              ATerm r_45 = t;
              int s_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_99 = NULL,z_99 = NULL,c_100 = NULL,d_100 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_99 = ATgetArgument(t, 0);
                      z_99 = ATgetArgument(t, 1);
                      c_100 = ATgetArgument(t, 2);
                      d_100 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_100;
                  t = map_1_0(c_10, t);
                  LocalPopChoice(s_45);
                }
              else
                {
                  t = r_45;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm c_10 (ATerm t)
{
  ATerm k_100 = NULL;
  ATerm t_45 = t;
  int u_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_100 = ATgetArgument(t, 0);
          {
            ATerm w_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_45);
      t = k_100;
    }
  else
    {
      t = t_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_100 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_100;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm y_95 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      y_95 = ATgetArgument(t, 0);
      t = y_95;
      t = free_vars_3_0(h_9, i_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          y_95 = ATgetArgument(t, 0);
          t = y_95;
          t = free_vars_3_0(k_9, l_9, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              y_95 = ATgetArgument(t, 0);
              t = y_95;
              t = free_vars_3_0(p_9, r_9, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  y_95 = ATgetArgument(t, 0);
                  t = y_95;
                  t = free_vars_3_0(t_9, u_9, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      y_95 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = y_95;
                  t = free_vars_3_0(w_9, y_9, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm y_100 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_100);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm z_45 = t;
  int a_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(a_46);
    }
  else
    {
      t = z_45;
      {
        ATerm d_46 = t;
        int e_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(e_46);
          }
        else
          {
            t = d_46;
            {
              ATerm f_46 = t;
              int g_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_101 = NULL,b_101 = NULL,c_101 = NULL,d_101 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_101 = ATgetArgument(t, 0);
                      b_101 = ATgetArgument(t, 1);
                      c_101 = ATgetArgument(t, 2);
                      d_101 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_101;
                  t = map_1_0(g_10, t);
                  LocalPopChoice(g_46);
                }
              else
                {
                  t = f_46;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm g_10 (ATerm t)
{
  ATerm l_101 = NULL;
  ATerm h_46 = t;
  int i_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_101 = ATgetArgument(t, 0);
          {
            ATerm j_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_46);
      t = l_101;
    }
  else
    {
      t = h_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_101;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm r_100 = NULL,v_100 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      v_100 = ATgetArgument(t, 0);
      t = v_100;
      if(match_cons(t, sym_Rule_3))
        {
          r_100 = ATgetArgument(t, 0);
          {
            ATerm k_46 = ATgetArgument(t, 1);
          }
          {
            ATerm m_46 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = r_100;
      t = free_vars_3_0(e_10, f_10, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          v_100 = ATgetArgument(t, 0);
          {
            ATerm p_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_100;
    }
  return(t);
}
static ATerm t_10 (ATerm w_113 (ATerm), ATerm k_30, ATerm j_30, ATerm t)
{
  static ATerm j_102 (ATerm t)
  {
    ATerm e_102 = NULL,f_102 = NULL,g_102 = NULL;
    e_102 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_102 = ATgetFirst((ATermList) t);
            g_102 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm q_46 = t;
          int r_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_102;
              {
                static ATerm h_12 (ATerm t)
                {
                  t = j_30;
                  return(t);
                }
                t = u_10(w_113, h_12, f_102, g_102, t);
              }
              t = j_102(t);
              LocalPopChoice(r_46);
            }
          else
            {
              t = q_46;
              {
                ATerm l_44 = NULL,p_44 = NULL,d_23 = NULL;
                t = SSLgetAnnotations(e_102);
                l_44 = t;
                t = g_102;
                t = j_102(t);
                p_44 = t;
                t = (ATerm) ATinsert(CheckATermList(p_44), f_102);
                d_23 = t;
                t = SSLsetAnnotations(d_23, l_44);
              }
            }
        }
      }
    return(t);
  }
  t = k_30;
  t = j_102(t);
  return(t);
}
static ATerm u_10 (ATerm z_113 (ATerm), ATerm a_114 (ATerm), ATerm o_30, ATerm n_30, ATerm t)
{
  t = a_114(t);
  {
    static ATerm i_12 (ATerm t)
    {
      ATerm n_102 = NULL;
      n_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_30, n_102);
      t = z_113(t);
      return(t);
    }
    t = fetch_1_0(i_12, t);
  }
  t = n_30;
  return(t);
}
static ATerm v_10 (ATerm r_113 (ATerm), ATerm i_30, ATerm h_30, ATerm t)
{
  static ATerm l_103 (ATerm t)
  {
    ATerm g_103 = NULL,h_103 = NULL,i_103 = NULL;
    g_103 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = g_103;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_103 = ATgetFirst((ATermList) t);
            i_103 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm s_46 = t;
          int t_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_103;
              {
                static ATerm j_12 (ATerm t)
                {
                  t = h_30;
                  return(t);
                }
                t = u_10(r_113, j_12, h_103, i_103, t);
              }
              t = l_103(t);
              LocalPopChoice(t_46);
            }
          else
            {
              t = s_46;
              {
                ATerm f_45 = NULL,i_45 = NULL,h_23 = NULL;
                t = SSLgetAnnotations(g_103);
                f_45 = t;
                t = i_103;
                t = l_103(t);
                i_45 = t;
                t = (ATerm) ATinsert(CheckATermList(i_45), h_103);
                h_23 = t;
                t = SSLsetAnnotations(h_23, f_45);
              }
            }
        }
      }
    return(t);
  }
  t = i_30;
  t = l_103(t);
  return(t);
}
ATerm genzip_4_0 (ATerm p_111 (ATerm), ATerm q_111 (ATerm), ATerm r_111 (ATerm), ATerm s_111 (ATerm), ATerm t)
{
  static ATerm t_103 (ATerm t)
  {
    ATerm u_46 = t;
    int v_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_111(t);
        LocalPopChoice(v_46);
      }
    else
      {
        t = u_46;
        {
          ATerm n_103 = NULL,o_103 = NULL,p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL,j_23 = NULL;
          t = q_111(t);
          s_103 = t;
          if(match_cons(t, sym__2))
            {
              o_103 = ATgetArgument(t, 0);
              p_103 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(s_103);
          n_103 = t;
          t = o_103;
          t = s_111(t);
          q_103 = t;
          t = p_103;
          t = t_103(t);
          r_103 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_103, r_103);
          j_23 = t;
          t = SSLsetAnnotations(j_23, n_103);
          t = r_111(t);
        }
      }
    return(t);
  }
  t = t_103(t);
  return(t);
}
static ATerm k_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_46 = ATgetArgument(t, 0);
      if(((ATgetType(w_46) != AT_LIST) || !(ATisEmpty(w_46))))
        _fail(t);
      {
        ATerm x_46 = ATgetArgument(t, 1);
        if(((ATgetType(x_46) != AT_LIST) || !(ATisEmpty(x_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm a_104 = NULL,b_104 = NULL,c_104 = NULL,f_104 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_47 = ATgetArgument(t, 0);
      if(((ATgetType(b_47) == AT_LIST) && !(ATisEmpty(b_47))))
        {
          a_104 = ATgetFirst((ATermList) b_47);
          b_104 = (ATerm) ATgetNext((ATermList) b_47);
        }
      else
        _fail(t);
      {
        ATerm c_47 = ATgetArgument(t, 1);
        if(((ATgetType(c_47) == AT_LIST) && !(ATisEmpty(c_47))))
          {
            c_104 = ATgetFirst((ATermList) c_47);
            f_104 = (ATerm) ATgetNext((ATermList) c_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_104, c_104), (ATerm) ATmakeAppl(sym__2, b_104, f_104));
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm g_104 = NULL,h_104 = NULL;
  if(match_cons(t, sym__2))
    {
      g_104 = ATgetArgument(t, 0);
      h_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_104), g_104);
  return(t);
}
static ATerm a_11 (ATerm j_644, ATerm o_644, ATerm h_61, ATerm t)
{
  ATerm v_103 = NULL,w_103 = NULL,x_103 = NULL,y_103 = NULL;
  t = SSL_explode_term(o_644);
  if(match_cons(t, sym__2))
    {
      v_103 = ATgetArgument(t, 0);
      x_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_644);
  if(match_cons(t, sym__2))
    {
      if((v_103 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_103, x_103);
  t = genzip_4_0(k_12, l_12, m_12, _id, t);
  y_103 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_103, h_61);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm q_102 (ATerm), ATerm r_102 (ATerm), ATerm t)
{
  static ATerm j_104 (ATerm t)
  {
    ATerm d_47 = t;
    int e_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_102(t);
        LocalPopChoice(e_47);
      }
    else
      {
        t = d_47;
        t = r_102(t);
        t = j_104(t);
      }
    return(t);
  }
  t = j_104(t);
  return(t);
}
ATerm for_3_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm t)
{
  t = t_102(t);
  t = while_not_2_0(u_102, v_102, t);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm q_104 = NULL;
  q_104 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, q_104);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL,w_104 = NULL,l_23 = NULL;
  w_104 = t;
  if(match_cons(t, sym__2))
    {
      u_104 = ATgetArgument(t, 0);
      v_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_104);
  t_104 = t;
  t = v_104;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_104, v_104);
  l_23 = t;
  t = SSLsetAnnotations(l_23, t_104);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm p_105 = NULL,q_105 = NULL,r_105 = NULL,s_105 = NULL,t_105 = NULL;
  p_105 = t;
  if(match_cons(t, sym__2))
    {
      q_105 = ATgetArgument(t, 0);
      r_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_105;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_105 = ATgetFirst((ATermList) t);
      t_105 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_47 = t;
        int g_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = d_106(q_105, r_105, p_105, t);
            LocalPopChoice(g_47);
          }
        else
          {
            t = f_47;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_105), s_105), t_105);
          }
      }
    }
  else
    {
      t = d_106(q_105, r_105, p_105, t);
    }
  return(t);
}
static ATerm d_106 (ATerm x_104, ATerm y_104, ATerm z_104, ATerm t)
{
  ATerm a_105 = NULL,d_105 = NULL,m_23 = NULL,g_105 = NULL,h_105 = NULL,i_105 = NULL,j_105 = NULL;
  t = SSLgetAnnotations(z_104);
  a_105 = t;
  t = y_104;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_105 = ATgetFirst((ATermList) t);
      j_105 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_105;
  if(match_cons(t, sym__2))
    {
      h_105 = ATgetArgument(t, 0);
      i_105 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_47 = t;
    int i_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_105;
        if((h_105 != t))
          {
            _fail(t);
          }
        t = j_105;
        LocalPopChoice(i_47);
      }
    else
      {
        t = h_47;
        t = y_104;
        t = a_11(h_105, i_105, j_105, t);
      }
  }
  d_105 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_104, d_105);
  m_23 = t;
  t = SSLsetAnnotations(m_23, a_105);
  return(t);
}
static ATerm x_12 (ATerm t)
{
  ATerm c_106 = NULL;
  if(match_cons(t, sym__2))
    {
      c_106 = ATgetArgument(t, 0);
      if((c_106 != ATgetArgument(t, 1)))
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
  ATerm l_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(n_12, o_12, r_12, t);
      LocalPopChoice(m_47);
    }
  else
    {
      t = l_47;
      {
        ATerm x_105 = NULL,y_105 = NULL,z_105 = NULL;
        x_105 = t;
        if(match_cons(t, sym__2))
          {
            y_105 = ATgetArgument(t, 0);
            z_105 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_105;
        t = v_10(x_12, y_105, z_105, t);
      }
    }
  return(t);
}
static ATerm z_12 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_13 (ATerm t)
{
  ATerm v_45 = NULL,x_45 = NULL;
  if(match_cons(t, sym__2))
    {
      v_45 = ATgetArgument(t, 0);
      x_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(d_13, v_45, x_45, t);
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm y_45 = NULL;
  if(match_cons(t, sym__2))
    {
      y_45 = ATgetArgument(t, 0);
      if((y_45 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm e_13 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm l_46 = NULL,n_46 = NULL;
  if(match_cons(t, sym__2))
    {
      l_46 = ATgetArgument(t, 0);
      n_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_10(v_13, l_46, n_46, t);
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm o_46 = NULL;
  if(match_cons(t, sym__2))
    {
      o_46 = ATgetArgument(t, 0);
      if((o_46 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm g_132 (ATerm), ATerm h_132 (ATerm), ATerm i_132 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm r_106 (ATerm t)
  {
    ATerm o_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_132(t);
        LocalPopChoice(q_47);
      }
    else
      {
        t = o_47;
        {
          ATerm r_47 = t;
          int v_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_106 = NULL,g_106 = NULL,n_45 = NULL,o_45 = NULL;
              f_106 = t;
              t = h_132(t);
              g_106 = t;
              t = f_106;
              {
                static ATerm y_12 (ATerm t)
                {
                  ATerm i_106 = NULL;
                  t = r_106(t);
                  i_106 = t;
                  t = (ATerm) ATmakeAppl(sym__2, i_106, g_106);
                  t = diff_0_0(t);
                  return(t);
                }
                t = i_132(y_12, r_106, z_12, t);
              }
              o_45 = t;
              t = SSL_explode_term(o_45);
              if(match_cons(t, sym__2))
                {
                  ATerm w_47 = ATgetArgument(t, 0);
                  n_45 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_45;
              t = foldr_3_0(b_13, c_13, _id, t);
              LocalPopChoice(v_47);
            }
          else
            {
              t = r_47;
              {
                ATerm b_46 = NULL,c_46 = NULL;
                c_46 = t;
                t = SSL_explode_term(c_46);
                if(match_cons(t, sym__2))
                  {
                    ATerm x_47 = ATgetArgument(t, 0);
                    b_46 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = b_46;
                t = foldr_3_0(e_13, u_13, r_106, t);
              }
            }
        }
      }
    return(t);
  }
  t = r_106(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm a_103 (ATerm), ATerm t)
{
  static ATerm y_13 (ATerm t)
  {
    t = bottomup_1_0(a_103, t);
    return(t);
  }
  t = SRTS_all(y_13, t);
  t = a_103(t);
  return(t);
}
static ATerm e_11 (ATerm b_55, ATerm c_55, ATerm t)
{
  ATerm s_106 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, b_55, c_55);
  t = x_11(b_55, c_55, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_106 = ATgetFirst((ATermList) t);
      {
        ATerm y_47 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = s_106;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm g_107 = NULL,h_107 = NULL;
  g_107 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm z_47 = t;
    int a_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_47 = NULL;
        t = term_b_48;
        n_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_b_48, g_107);
        t = e_11(n_47, g_107, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm c_48 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_48) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, h_107, (ATerm) ATempty);
        LocalPopChoice(a_48);
      }
    else
      {
        t = z_47;
        {
          ATerm d_48 = NULL;
          t = term_b_48;
          d_48 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_b_48, g_107);
          t = e_11(d_48, g_107, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm e_48 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_48) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, h_107, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  static ATerm k_107 (ATerm t)
  {
    ATerm f_48 = t;
    int g_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_104(t);
        LocalPopChoice(g_48);
      }
    else
      {
        t = f_48;
        t = SRTS_all(k_107, t);
      }
    return(t);
  }
  t = k_107(t);
  return(t);
}
static ATerm f_11 (ATerm u_122 (ATerm), ATerm m_44, ATerm k_44, ATerm t)
{
  ATerm l_107 = NULL,m_107 = NULL,n_107 = NULL,o_107 = NULL,p_107 = NULL,q_107 = NULL,r_107 = NULL,s_107 = NULL;
  o_107 = t;
  t = u_122(t);
  l_107 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_107, m_44, k_44);
  t = y_11(l_107, m_44, k_44, t);
  {
    ATerm h_48 = t;
    int i_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_107 = NULL;
        t = term_j_48;
        t_107 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_107, term_j_48);
        t = x_11(l_107, t_107, t);
        LocalPopChoice(i_48);
      }
    else
      {
        t = h_48;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_107 = ATgetFirst((ATermList) t);
      n_107 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, l_107, term_j_48, (ATerm) ATinsert(CheckATermList(n_107), (ATerm) ATinsert(CheckATermList(m_107), m_44)));
  t = lookup_table_0_1(l_107, t);
  s_107 = t;
  t = term_j_48;
  p_107 = t;
  t = (ATerm) ATinsert(CheckATermList(n_107), (ATerm) ATinsert(CheckATermList(m_107), m_44));
  q_107 = t;
  t = s_107;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(p_107, q_107, r_107, t);
  t = o_107;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  t = term_b_48;
  return(t);
}
static ATerm d_14 (ATerm t)
{
  t = term_b_48;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm x_107 = NULL,z_107 = NULL,a_108 = NULL,b_108 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      z_107 = ATgetArgument(t, 0);
      a_108 = ATgetArgument(t, 1);
      x_107 = ATgetArgument(t, 2);
      {
        ATerm e_108 = NULL,f_108 = NULL;
        t = a_108;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, z_107);
        e_108 = t;
        t = term_l_48;
        f_108 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_107), term_l_48);
        t = f_11(b_14, e_108, f_108, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, z_107, (ATerm)ATempty, x_107);
      }
    }
  else
    {
      ATerm i_108 = NULL,j_108 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          z_107 = ATgetArgument(t, 0);
          a_108 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = a_108;
      if(match_cons(t, sym_ConstType_1))
        {
          b_108 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, z_107);
      i_108 = t;
      t = term_n_48;
      j_108 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, z_107), term_n_48);
      t = f_11(d_14, i_108, j_108, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_107, (ATerm) ATmakeAppl(sym_ConstType_1, b_108));
    }
  return(t);
}
static ATerm g_11 (ATerm v_54, ATerm w_54, ATerm t)
{
  ATerm n_108 = NULL,o_108 = NULL;
  o_108 = t;
  {
    ATerm o_48 = t;
    int p_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_54, w_54);
        t = x_11(v_54, w_54, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_48 = ATgetFirst((ATermList) t);
            n_108 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(p_48);
        {
          ATerm p_108 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, v_54, w_54, n_108);
          t = lookup_table_0_1(v_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              p_108 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_12(w_54, n_108, p_108, t);
          t = (ATerm) ATmakeAppl(sym__3, v_54, w_54, n_108);
        }
      }
    else
      {
        t = o_48;
        {
          ATerm r_108 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, v_54, w_54);
          t = lookup_table_0_1(v_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              r_108 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_11(w_54, r_108, t);
          t = (ATerm) ATmakeAppl(sym__2, v_54, w_54);
        }
      }
  }
  t = o_108;
  return(t);
}
ATerm end_scope_1_0 (ATerm r_122 (ATerm), ATerm t)
{
  ATerm t_108 = NULL,u_108 = NULL,v_108 = NULL,w_108 = NULL,x_108 = NULL,y_108 = NULL,z_108 = NULL;
  w_108 = t;
  t = r_122(t);
  v_108 = t;
  {
    ATerm t_48 = t;
    int v_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_109 = NULL;
        t = term_j_48;
        b_109 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_108, term_j_48);
        t = x_11(v_108, b_109, t);
        LocalPopChoice(v_48);
      }
    else
      {
        t = t_48;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_108 = ATgetFirst((ATermList) t);
      t_108 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, v_108, term_j_48, t_108);
  t = lookup_table_0_1(v_108, t);
  z_108 = t;
  t = term_j_48;
  x_108 = t;
  t = z_108;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_108 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(x_108, t_108, y_108, t);
  t = u_108;
  {
    static ATerm e_14 (ATerm t)
    {
      ATerm d_109 = NULL;
      d_109 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_108, d_109);
      t = g_11(v_108, d_109, t);
      return(t);
    }
    t = map_1_0(e_14, t);
  }
  t = w_108;
  return(t);
}
ATerm restore_always_2_0 (ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm t)
{
  ATerm w_48 = t;
  int x_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_101(t);
      t = w_101(t);
      LocalPopChoice(x_48);
    }
  else
    {
      t = w_48;
      t = w_101(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_122 (ATerm), ATerm t)
{
  ATerm f_109 = NULL,g_109 = NULL,h_109 = NULL,i_109 = NULL,k_109 = NULL,n_109 = NULL,o_109 = NULL;
  g_109 = t;
  t = q_122(t);
  f_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_109, term_j_48);
  {
    ATerm z_48 = t;
    int a_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_109 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_49 = ATgetArgument(t, 0);
            ATerm c_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_j_48;
        s_109 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_109, term_j_48);
        t = x_11(f_109, s_109, t);
        LocalPopChoice(a_49);
      }
    else
      {
        t = z_48;
        t = (ATerm) ATempty;
      }
  }
  h_109 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_109, term_j_48, (ATerm) ATinsert(CheckATermList(h_109), (ATerm) ATempty));
  t = lookup_table_0_1(f_109, t);
  o_109 = t;
  t = term_j_48;
  i_109 = t;
  t = (ATerm) ATinsert(CheckATermList(h_109), (ATerm) ATempty);
  k_109 = t;
  t = o_109;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(i_109, k_109, n_109, t);
  t = g_109;
  return(t);
}
ATerm scope_2_0 (ATerm s_122 (ATerm), ATerm t_122 (ATerm), ATerm t)
{
  static ATerm f_14 (ATerm t)
  {
    t = end_scope_1_0(s_122, t);
    return(t);
  }
  t = begin_scope_1_0(s_122, t);
  t = restore_always_2_0(t_122, f_14, t);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  t = term_b_48;
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm z_109 = NULL,a_110 = NULL,b_110 = NULL,e_110 = NULL,t_23 = NULL;
  e_110 = t;
  if(match_cons(t, sym_Specification_1))
    {
      a_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_110);
  z_109 = t;
  t = a_110;
  t = map_1_0(i_14, t);
  b_110 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, b_110);
  t_23 = t;
  t = SSLsetAnnotations(t_23, z_109);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  ATerm r_110 = NULL,s_110 = NULL;
  s_110 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      r_110 = ATgetArgument(t, 0);
      {
        ATerm d_49 = t;
        int e_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_48 = NULL,u_48 = NULL,p_23 = NULL;
            t = SSLgetAnnotations(s_110);
            r_48 = t;
            t = r_110;
            t = map_1_0(j_14, t);
            u_48 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, u_48);
            p_23 = t;
            t = SSLsetAnnotations(p_23, r_48);
            LocalPopChoice(e_49);
          }
        else
          {
            t = d_49;
            t = s_110;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          r_110 = ATgetArgument(t, 0);
          {
            ATerm h_49 = t;
            int k_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_49 = NULL,r_49 = NULL,s_23 = NULL;
                t = SSLgetAnnotations(s_110);
                m_49 = t;
                t = r_110;
                t = map_1_0(k_14, t);
                r_49 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, r_49);
                s_23 = t;
                t = SSLsetAnnotations(s_23, m_49);
                LocalPopChoice(k_49);
              }
            else
              {
                t = h_49;
                t = s_110;
              }
          }
        }
      else
        {
          t = s_110;
        }
    }
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm l_49 = t;
  int p_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(p_49);
    }
  else
    {
      t = l_49;
    }
  return(t);
}
static ATerm k_14 (ATerm t)
{
  ATerm q_49 = t;
  int s_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(s_49);
    }
  else
    {
      t = q_49;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(g_14, h_14, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_111 = NULL,c_111 = NULL,d_111 = NULL;
  b_111 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_111;
    }
  else
    {
      static ATerm l_14 (ATerm t)
      {
        t = not_null(d_111);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_111 = ATgetFirst((ATermList) t);
          if(((d_111 != NULL) && (d_111 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            d_111 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_111;
      t = at_end_1_0(l_14, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm o_117 (ATerm), ATerm t)
{
  ATerm x_111 = NULL,y_111 = NULL,z_111 = NULL;
  x_111 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_111;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_111 = ATgetFirst((ATermList) t);
          z_111 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm t_49 = t;
        int u_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_50 = NULL,s_50 = NULL,t_50 = NULL,x_23 = NULL;
            t = SSLgetAnnotations(x_111);
            p_50 = t;
            t = y_111;
            t = o_117(t);
            s_50 = t;
            t = z_111;
            t = filter_1_0(o_117, t);
            t_50 = t;
            t = (ATerm) ATinsert(CheckATermList(t_50), s_50);
            x_23 = t;
            t = SSLsetAnnotations(x_23, p_50);
            LocalPopChoice(u_49);
          }
        else
          {
            t = t_49;
            t = z_111;
            t = filter_1_0(o_117, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm c_110 (ATerm), ATerm t)
{
  static ATerm p_112 (ATerm t)
  {
    ATerm m_112 = NULL,n_112 = NULL,o_112 = NULL;
    o_112 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_112 = ATgetFirst((ATermList) t);
        n_112 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm b_51 = NULL,e_51 = NULL,f_24 = NULL;
          t = SSLgetAnnotations(o_112);
          b_51 = t;
          t = n_112;
          t = p_112(t);
          e_51 = t;
          t = (ATerm) ATinsert(CheckATermList(e_51), m_112);
          f_24 = t;
          t = SSLsetAnnotations(f_24, b_51);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_112;
        t = c_110(t);
      }
    return(t);
  }
  t = p_112(t);
  return(t);
}
static ATerm b_113 (ATerm t_112, ATerm t)
{
  ATerm u_112 = NULL;
  t = SSL_explode_term(t_112);
  if(match_cons(t, sym__2))
    {
      ATerm x_49 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_49) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      u_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_112;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm w_112 = NULL,x_112 = NULL,y_112 = NULL;
  y_112 = t;
  if(match_cons(t, sym__2))
    {
      w_112 = ATgetArgument(t, 0);
      x_112 = ATgetArgument(t, 1);
      {
        ATerm y_49 = t;
        int z_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_14 (ATerm t)
            {
              t = x_112;
              return(t);
            }
            t = w_112;
            t = at_end_1_0(m_14, t);
            LocalPopChoice(z_49);
          }
        else
          {
            t = y_49;
            t = b_113(y_112, t);
          }
      }
    }
  else
    {
      t = b_113(y_112, t);
    }
  return(t);
}
static ATerm j_11 (ATerm h_35, ATerm t_34, ATerm t)
{
  ATerm c_113 = NULL,d_113 = NULL;
  static ATerm p_14 (ATerm t)
  {
    ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL,h_113 = NULL;
    h_113 = t;
    t = SSL_explode_term(h_113);
    if(match_cons(t, sym__2))
      {
        if(((c_113 != NULL) && (c_113 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          c_113 = ATgetArgument(t, 0);
        {
          ATerm a_50 = ATgetArgument(t, 1);
          if(((ATgetType(a_50) == AT_LIST) && !(ATisEmpty(a_50))))
            {
              e_113 = ATgetFirst((ATermList) a_50);
              {
                ATerm b_50 = (ATerm) ATgetNext((ATermList) a_50);
                if(((ATgetType(b_50) != AT_LIST) || !(ATisEmpty(b_50))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, e_113, not_null(d_113));
    t = conc_0_0(t);
    f_113 = t;
    t = (ATerm) ATinsert(ATempty, f_113);
    g_113 = t;
    t = SSL_mkterm(c_113, g_113);
    return(t);
  }
  t = SSL_explode_term(h_35);
  if(match_cons(t, sym__2))
    {
      if(((c_113 != NULL) && (c_113 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_113 = ATgetArgument(t, 0);
      {
        ATerm c_50 = ATgetArgument(t, 1);
        if(((ATgetType(c_50) == AT_LIST) && !(ATisEmpty(c_50))))
          {
            if(((d_113 != NULL) && (d_113 != ATgetFirst((ATermList) c_50))))
              _fail(ATgetFirst((ATermList) c_50));
            else
              d_113 = ATgetFirst((ATermList) c_50);
            {
              ATerm d_50 = (ATerm) ATgetNext((ATermList) c_50);
              if(((ATgetType(d_50) != AT_LIST) || !(ATisEmpty(d_50))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_34;
  t = fetch_1_0(p_14, t);
  return(t);
}
ATerm foldr_3_0 (ATerm m_116 (ATerm), ATerm n_116 (ATerm), ATerm o_116 (ATerm), ATerm t)
{
  ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL;
  j_113 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_113;
      t = m_116(t);
    }
  else
    {
      ATerm o_113 = NULL,p_113 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_113 = ATgetFirst((ATermList) t);
          l_113 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_113;
      t = o_116(t);
      o_113 = t;
      t = l_113;
      t = foldr_3_0(m_116, n_116, o_116, t);
      p_113 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_113, p_113);
      t = n_116(t);
    }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_50), term_g_50), term_e_50);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm c_114 = NULL,d_114 = NULL;
  if(match_cons(t, sym__2))
    {
      c_114 = ATgetArgument(t, 0);
      d_114 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(c_114, d_114, t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm e_114 = NULL,f_114 = NULL;
  f_114 = t;
  if(match_cons(t, sym_Signature_1))
    {
      e_114 = ATgetArgument(t, 0);
      {
        ATerm i_50 = t;
        int j_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_114 = NULL;
            t = e_114;
            t = filter_1_0(g_15, t);
            t = concat_0_0(t);
            h_114 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, h_114);
            LocalPopChoice(j_50);
          }
        else
          {
            t = i_50;
            t = f_114;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          e_114 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, e_114);
        }
      else
        {
          t = f_114;
        }
    }
  return(t);
}
static ATerm g_15 (ATerm t)
{
  ATerm i_114 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      i_114 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_114;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm u_113 = NULL,v_113 = NULL,y_113 = NULL,b_114 = NULL,p_24 = NULL;
  b_114 = t;
  if(match_cons(t, sym_Specification_1))
    {
      v_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_114);
  u_113 = t;
  t = v_113;
  t = foldr_3_0(b_15, e_15, f_15, t);
  y_113 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, y_113);
  p_24 = t;
  t = SSLsetAnnotations(p_24, u_113);
  return(t);
}
static ATerm h_15 (ATerm t)
{
  ATerm l_50 = t;
  int m_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(m_50);
    }
  else
    {
      t = l_50;
    }
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm g_115 = NULL,h_115 = NULL,i_115 = NULL,j_115 = NULL,k_115 = NULL;
  k_115 = t;
  if(match_cons(t, sym_LRule_1))
    {
      j_115 = ATgetArgument(t, 0);
      t = j_115;
      if(match_cons(t, sym_Rule_3))
        {
          g_115 = ATgetArgument(t, 0);
          h_115 = ATgetArgument(t, 1);
          i_115 = ATgetArgument(t, 2);
          {
            ATerm n_50 = t;
            int o_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_115 = NULL;
                t = g_115;
                t = free_vars_3_0(n_15, o_15, tboundin_3_0, t);
                o_115 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, o_115, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, g_115, h_115, i_115)));
                LocalPopChoice(o_50);
              }
            else
              {
                t = n_50;
                t = k_115;
              }
          }
        }
      else
        {
          t = k_115;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          j_115 = ATgetArgument(t, 0);
          {
            ATerm q_50 = t;
            int r_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_116 = NULL;
                t = j_115;
                t = free_vars_3_0(q_15, t_15, tboundin_3_0, t);
                h_116 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, h_116, j_115);
                LocalPopChoice(r_50);
              }
            else
              {
                t = q_50;
                t = k_115;
              }
          }
        }
      else
        {
          t = k_115;
        }
    }
  return(t);
}
static ATerm n_15 (ATerm t)
{
  ATerm p_115 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_115);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm u_50 = t;
  int v_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(v_50);
    }
  else
    {
      t = u_50;
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
                  ATerm r_115 = NULL,s_115 = NULL,t_115 = NULL,u_115 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_115 = ATgetArgument(t, 0);
                      s_115 = ATgetArgument(t, 1);
                      t_115 = ATgetArgument(t, 2);
                      u_115 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_115;
                  t = map_1_0(p_15, t);
                  LocalPopChoice(z_50);
                }
              else
                {
                  t = y_50;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm b_116 = NULL;
  ATerm a_51 = t;
  int c_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_116 = ATgetArgument(t, 0);
          {
            ATerm d_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_51);
      t = b_116;
    }
  else
    {
      t = a_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_116 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_116;
    }
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm i_116 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_116);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm i_51 = t;
  int l_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_51);
    }
  else
    {
      t = i_51;
      {
        ATerm m_51 = t;
        int n_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_51);
          }
        else
          {
            t = m_51;
            {
              ATerm o_51 = t;
              int p_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_116 = NULL,q_116 = NULL,r_116 = NULL,s_116 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_116 = ATgetArgument(t, 0);
                      q_116 = ATgetArgument(t, 1);
                      r_116 = ATgetArgument(t, 2);
                      s_116 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_116;
                  t = map_1_0(w_15, t);
                  LocalPopChoice(p_51);
                }
              else
                {
                  t = o_51;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm z_116 = NULL;
  ATerm x_51 = t;
  int y_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_116 = ATgetArgument(t, 0);
          {
            ATerm a_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_51);
      t = z_116;
    }
  else
    {
      t = x_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_116 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_116;
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  t = Cons_2_0(a_16, b_16, t);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm r_117 = NULL,s_117 = NULL,t_117 = NULL,u_117 = NULL,s_24 = NULL;
  u_117 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      s_117 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_117);
  r_117 = t;
  t = s_117;
  t = topdown_1_0(c_16, t);
  t = listtd_1_0(f_16, t);
  t_117 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, t_117);
  s_24 = t;
  t = SSLsetAnnotations(s_24, r_117);
  return(t);
}
static ATerm b_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm d_52 = t;
  int f_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_52 = t;
      int h_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefDynRuleScope_0_0(t);
          LocalPopChoice(h_52);
        }
      else
        {
          t = g_52;
          {
            ATerm w_117 = NULL,x_117 = NULL;
            if(match_cons(t, sym_AddScopeLabel_2))
              {
                w_117 = ATgetArgument(t, 0);
                x_117 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_k_52, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, x_117), (ATerm) ATmakeAppl(sym_Var_1, w_117)));
          }
        }
      LocalPopChoice(f_52);
    }
  else
    {
      t = d_52;
    }
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = repeat_2_0(g_16, _id, t);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm c_118 = NULL,d_118 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_118 = ATgetFirst((ATermList) t);
      d_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_10(c_118, d_118, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm m_52 = t;
  int n_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(n_52);
    }
  else
    {
      t = m_52;
    }
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm h_118 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      h_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, h_118)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm a_115 = NULL,b_115 = NULL,c_115 = NULL,d_115 = NULL,f_25 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(h_15, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(m_15, t);
  {
    ATerm o_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_117 = NULL,f_117 = NULL,g_117 = NULL;
        e_117 = t;
        t = term_r_52;
        f_117 = t;
        t = term_s_52;
        g_117 = t;
        t = term_u_52;
        t = x_11(f_117, g_117, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = e_117;
        LocalPopChoice(p_52);
        {
          ATerm h_117 = NULL,i_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL,p_117 = NULL,a_25 = NULL,z_24 = NULL;
          p_117 = t;
          if(match_cons(t, sym_Specification_1))
            {
              i_117 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_117);
          h_117 = t;
          t = i_117;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_117 = ATgetFirst((ATermList) t);
              l_117 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_117);
          j_117 = t;
          t = l_117;
          t = Cons_2_0(_id, z_15, t);
          m_117 = t;
          t = (ATerm) ATinsert(CheckATermList(m_117), k_117);
          z_24 = t;
          t = SSLsetAnnotations(z_24, j_117);
          n_117 = t;
          t = (ATerm) ATmakeAppl(sym_Specification_1, n_117);
          a_25 = t;
          t = SSLsetAnnotations(a_25, h_117);
        }
      }
    else
      {
        t = o_52;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(h_16, t);
  d_115 = t;
  if(match_cons(t, sym_Specification_1))
    {
      b_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_115);
  a_115 = t;
  t = b_115;
  t = fetch_1_0(i_16, t);
  c_115 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, c_115);
  f_25 = t;
  t = SSLsetAnnotations(f_25, a_115);
  return(t);
}
static ATerm k_11 (ATerm c_40, ATerm d_40, ATerm t)
{
  ATerm i_118 = NULL;
  t = SSL_fputc(c_40, d_40);
  i_118 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_118);
  return(t);
}
static ATerm l_11 (ATerm g_24, ATerm h_24, ATerm t)
{
  ATerm j_118 = NULL;
  t = SSL_write_term_to_stream_text(g_24, h_24);
  j_118 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_118);
  return(t);
}
static ATerm n_11 (ATerm c_109 (ATerm), ATerm c_175, ATerm m_24, ATerm t)
{
  ATerm k_118 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_175, term_v_52);
  t = r_11(t);
  k_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_118, m_24);
  t = c_109(t);
  t = fclose_0_0(t);
  t = m_24;
  return(t);
}
static ATerm m_11 (ATerm c_24, ATerm d_24, ATerm t)
{
  ATerm l_118 = NULL;
  t = SSL_write_term_to_stream_baf(c_24, d_24);
  l_118 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_118);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm s_118 = NULL,t_118 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_52 = ATgetArgument(t, 0);
      if(match_cons(x_52, sym_Stream_1))
        {
          s_118 = ATgetArgument(x_52, 0);
        }
      else
        _fail(t);
      t_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_11(s_118, t_118, t);
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm u_118 = NULL,v_118 = NULL,w_118 = NULL,x_118 = NULL,y_118 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_52 = ATgetArgument(t, 0);
      if(match_cons(y_52, sym_Stream_1))
        {
          x_118 = ATgetArgument(y_52, 0);
        }
      else
        _fail(t);
      y_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(x_118, y_118, t);
  u_118 = t;
  t = term_n_23;
  v_118 = t;
  t = u_118;
  if(match_cons(t, sym_Stream_1))
    {
      w_118 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_n_23, u_118);
  t = k_11(v_118, w_118, t);
  return(t);
}
ATerm output_1_0 (ATerm a_128 (ATerm), ATerm t)
{
  ATerm m_118 = NULL,n_118 = NULL;
  t = a_128(t);
  n_118 = t;
  {
    ATerm a_53 = t;
    int b_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_118 = NULL,p_118 = NULL;
        t = term_r_52;
        o_118 = t;
        t = term_d_53;
        p_118 = t;
        t = term_f_53;
        t = x_11(o_118, p_118, t);
        LocalPopChoice(b_53);
      }
    else
      {
        t = a_53;
        t = term_k_53;
      }
  }
  m_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_118, n_118);
  {
    ATerm m_53 = t;
    int n_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_118 = NULL,r_118 = NULL;
        t = term_r_52;
        q_118 = t;
        t = term_o_53;
        r_118 = t;
        t = term_p_53;
        t = x_11(q_118, r_118, t);
        t = (ATerm) ATmakeAppl(sym__2, m_118, n_118);
        LocalPopChoice(n_53);
        if(match_cons(t, sym__2))
          {
            ATerm q_53 = ATgetArgument(t, 0);
            ATerm r_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_11(j_16, m_118, n_118, t);
      }
    else
      {
        t = m_53;
        if(match_cons(t, sym__2))
          {
            ATerm s_53 = ATgetArgument(t, 0);
            ATerm t_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_11(k_16, m_118, n_118, t);
      }
  }
  return(t);
}
static ATerm m_119 (ATerm g_119, ATerm t)
{
  t = SSL_fclose(g_119);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_119 = NULL,k_119 = NULL;
  k_119 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_119 = ATgetArgument(t, 0);
      {
        ATerm u_53 = t;
        int v_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_119);
            LocalPopChoice(v_53);
          }
        else
          {
            t = u_53;
            t = m_119(k_119, t);
          }
      }
    }
  else
    {
      t = m_119(k_119, t);
    }
  return(t);
}
static ATerm o_11 (ATerm i_24, ATerm t)
{
  t = SSL_read_term_from_stream(i_24);
  return(t);
}
static ATerm p_11 (ATerm v_38, ATerm w_38, ATerm t)
{
  t = SSL_strcat(v_38, w_38);
  return(t);
}
static ATerm q_11 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm n_119 = NULL;
  t = SSL_fopen(e_40, f_40);
  n_119 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_119);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_119 = NULL;
  t = SSL_stdin_stream();
  o_119 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_119);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_119 = NULL;
  t = SSL_stdout_stream();
  p_119 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_119);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_119 = NULL;
  t = SSL_stderr_stream();
  q_119 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_119);
  return(t);
}
static ATerm c_121 (ATerm w_119, ATerm t)
{
  ATerm x_119 = NULL;
  t = SSL_explode_term(w_119);
  if(match_cons(t, sym__2))
    {
      ATerm w_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_53) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_53 = ATgetArgument(t, 1);
        if(((ATgetType(y_53) == AT_LIST) && !(ATisEmpty(y_53))))
          {
            x_119 = ATgetFirst((ATermList) y_53);
            {
              ATerm z_53 = (ATerm) ATgetNext((ATermList) y_53);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = x_119;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_119;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_119;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_119;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_121 (ATerm a_120, ATerm b_120, ATerm c_120, ATerm t)
{
  ATerm d_120 = NULL,e_120 = NULL,f_120 = NULL,i_120 = NULL,o_25 = NULL;
  t = SSLgetAnnotations(c_120);
  f_120 = t;
  t = a_120;
  if(match_cons(t, sym_Path_1))
    {
      i_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_120, b_120);
  o_25 = t;
  t = SSLsetAnnotations(o_25, f_120);
  if(match_cons(t, sym__2))
    {
      d_120 = ATgetArgument(t, 0);
      e_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(d_120, e_120, t);
  return(t);
}
static ATerm e_121 (ATerm k_120, ATerm l_120, ATerm m_120, ATerm t)
{
  ATerm n_120 = NULL,o_120 = NULL,p_120 = NULL,s_120 = NULL,r_25 = NULL;
  t = SSLgetAnnotations(m_120);
  p_120 = t;
  t = SSL_is_string(k_120);
  s_120 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_120, l_120);
  r_25 = t;
  t = SSLsetAnnotations(r_25, p_120);
  if(match_cons(t, sym__2))
    {
      n_120 = ATgetArgument(t, 0);
      o_120 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_11(n_120, o_120, t);
  return(t);
}
static ATerm r_11 (ATerm t)
{
  ATerm z_120 = NULL,a_121 = NULL,b_121 = NULL;
  z_120 = t;
  if(match_cons(t, sym__2))
    {
      a_121 = ATgetArgument(t, 0);
      b_121 = ATgetArgument(t, 1);
      {
        ATerm a_54 = t;
        int b_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_121(z_120, t);
            LocalPopChoice(b_54);
          }
        else
          {
            t = a_54;
            {
              ATerm c_54 = t;
              int d_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_121(a_121, b_121, z_120, t);
                  LocalPopChoice(d_54);
                }
              else
                {
                  t = c_54;
                  t = e_121(a_121, b_121, z_120, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_121(z_120, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm g_121 = NULL,h_121 = NULL,i_121 = NULL,n_121 = NULL;
  n_121 = t;
  {
    ATerm e_54 = t;
    int i_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_121, term_j_54);
        t = r_11(t);
        LocalPopChoice(i_54);
      }
    else
      {
        t = e_54;
        {
          ATerm j_52 = NULL,q_52 = NULL;
          t = term_l_54;
          q_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_l_54, n_121);
          t = p_11(q_52, n_121, t);
          j_52 = t;
          t = SSL_perror(j_52);
          _fail(t);
        }
      }
  }
  h_121 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_11(i_121, t);
  g_121 = t;
  t = h_121;
  t = fclose_0_0(t);
  t = g_121;
  return(t);
}
ATerm input_1_0 (ATerm b_128 (ATerm), ATerm t)
{
  ATerm n_54 = t;
  int t_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_121 = NULL,r_121 = NULL;
      t = term_r_52;
      q_121 = t;
      t = term_u_54;
      r_121 = t;
      t = term_x_54;
      t = x_11(q_121, r_121, t);
      LocalPopChoice(t_54);
    }
  else
    {
      t = n_54;
      t = term_y_54;
    }
  t = ReadFromFile_0_0(t);
  t = b_128(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_121 = NULL,t_121 = NULL,u_121 = NULL,v_121 = NULL,w_121 = NULL;
  s_121 = t;
  t = term_z_54;
  t = whoami_0_0(t);
  t_121 = t;
  t = term_z_32;
  v_121 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_55), t_121), term_d_55);
  w_121 = t;
  t = SSL_printnl(v_121, w_121);
  t = term_b_33;
  u_121 = t;
  t = SSL_exit(u_121);
  t = s_121;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm y_121 = NULL;
  y_121 = t;
  if(match_string(t, "-k"))
    {
      t = y_121;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_121;
    }
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm z_121 = NULL,a_122 = NULL,b_122 = NULL;
  z_121 = t;
  t = SSL_string_to_int(z_121);
  a_122 = t;
  t = term_f_55;
  b_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_55, a_122);
  t = a_12(b_122, a_122, t);
  t = z_121;
  return(t);
}
static ATerm n_16 (ATerm t)
{
  t = term_h_55;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_16, m_16, n_16, t);
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm d_122 = NULL;
  d_122 = t;
  if(match_string(t, "-S"))
    {
      t = d_122;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_122;
    }
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm e_122 = NULL,f_122 = NULL;
  t = term_i_55;
  e_122 = t;
  t = term_j_55;
  f_122 = t;
  t = term_k_55;
  t = a_12(e_122, f_122, t);
  t = term_l_55;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = term_m_55;
  return(t);
}
static ATerm r_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm g_122 = NULL,h_122 = NULL,i_122 = NULL;
  g_122 = t;
  t = SSL_string_to_int(g_122);
  h_122 = t;
  t = term_i_55;
  i_122 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_55, h_122);
  t = a_12(i_122, h_122, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_122);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  t = term_p_55;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm j_122 = NULL,k_122 = NULL;
  t = term_q_55;
  j_122 = t;
  t = term_z_54;
  k_122 = t;
  t = term_r_55;
  t = a_12(j_122, k_122, t);
  t = term_s_55;
  return(t);
}
static ATerm w_16 (ATerm t)
{
  t = term_t_55;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_55 = t;
  int w_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_16, p_16, q_16, t);
      LocalPopChoice(w_55);
    }
  else
    {
      t = u_55;
      {
        ATerm x_55 = t;
        int y_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_16, s_16, t_16, t);
            LocalPopChoice(y_55);
          }
        else
          {
            t = x_55;
            t = Option_3_0(u_16, v_16, w_16, t);
          }
      }
    }
  return(t);
}
static ATerm a_12 (ATerm v_49, ATerm w_49, ATerm t)
{
  ATerm l_122 = NULL,m_122 = NULL;
  t = term_r_52;
  l_122 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_r_52, v_49, w_49);
  t = lookup_table_0_1(l_122, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(v_49, w_49, m_122, t);
  t = (ATerm) ATmakeAppl(sym__3, term_r_52, v_49, w_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_122 = NULL,x_122 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_122 = NULL,z_122 = NULL,a_123 = NULL;
      t = term_z_54;
      t = i_0(t);
      y_122 = t;
      t = term_z_55;
      z_122 = t;
      t = term_b_56;
      a_123 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_55, term_b_56, y_122);
      t = y_11(z_122, a_123, y_122, t);
      _fail(t);
    }
  else
    {
      ATerm d_123 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_122 = ATgetFirst((ATermList) t);
          x_122 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_122;
      t = d_0(t);
      t = term_z_54;
      t = g_0(t);
      d_123 = t;
      t = (ATerm) ATinsert(CheckATermList(x_122), d_123);
    }
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm f_123 = NULL;
  f_123 = t;
  if(match_string(t, "-o"))
    {
      t = f_123;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_123;
    }
  return(t);
}
static ATerm y_16 (ATerm t)
{
  ATerm g_123 = NULL,h_123 = NULL;
  g_123 = t;
  t = term_d_53;
  h_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_53, g_123);
  t = a_12(h_123, g_123, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_123);
  return(t);
}
static ATerm z_16 (ATerm t)
{
  t = term_d_56;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_16, y_16, z_16, t);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm j_123 = NULL;
  j_123 = t;
  if(match_string(t, "-i"))
    {
      t = j_123;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_123;
    }
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm k_123 = NULL,l_123 = NULL;
  k_123 = t;
  t = term_u_54;
  l_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_54, k_123);
  t = a_12(l_123, k_123, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_123);
  return(t);
}
static ATerm c_17 (ATerm t)
{
  t = term_g_56;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_17, b_17, c_17, t);
  return(t);
}
static ATerm y_11 (ATerm q_54, ATerm r_54, ATerm p_54, ATerm t)
{
  ATerm n_123 = NULL,o_123 = NULL,p_123 = NULL,q_123 = NULL,r_123 = NULL;
  n_123 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_54, r_54);
  {
    ATerm h_56 = t;
    int i_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_56 = ATgetArgument(t, 0);
            ATerm m_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, q_54, r_54);
        t = x_11(q_54, r_54, t);
        LocalPopChoice(i_56);
      }
    else
      {
        t = h_56;
        t = (ATerm) ATempty;
      }
  }
  o_123 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_54, r_54, (ATerm) ATinsert(CheckATermList(o_123), p_54));
  t = lookup_table_0_1(q_54, t);
  r_123 = t;
  t = (ATerm) ATinsert(CheckATermList(o_123), p_54);
  p_123 = t;
  t = r_123;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(r_54, p_123, q_123, t);
  t = n_123;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm y_123 = NULL,z_123 = NULL,a_124 = NULL,b_124 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_124 = NULL,d_124 = NULL,e_124 = NULL;
      t = term_z_54;
      t = t_0(t);
      c_124 = t;
      t = term_z_55;
      d_124 = t;
      t = term_b_56;
      e_124 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_55, term_b_56, c_124);
      t = y_11(d_124, e_124, c_124, t);
      _fail(t);
    }
  else
    {
      ATerm i_124 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_123 = ATgetFirst((ATermList) t);
          z_123 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_123;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_124 = ATgetFirst((ATermList) t);
          b_124 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_123;
      t = o_0(t);
      t = a_124;
      t = r_0(t);
      i_124 = t;
      t = (ATerm) ATinsert(CheckATermList(b_124), i_124);
    }
  return(t);
}
static ATerm d_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm k_124 = NULL,l_124 = NULL;
  k_124 = t;
  if(match_string(t, "old"))
    {
      t = k_124;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = k_124;
    }
  t = term_s_52;
  l_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_52, k_124);
  t = a_12(l_124, k_124, t);
  t = term_z_54;
  return(t);
}
static ATerm f_17 (ATerm t)
{
  t = term_n_56;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_17, e_17, f_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm n_124 = NULL,o_124 = NULL,p_124 = NULL,q_124 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_54;
  t = whoami_0_0(t);
  n_124 = t;
  t = term_z_32;
  p_124 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_56), n_124);
  q_124 = t;
  t = SSL_printnl(p_124, q_124);
  t = term_b_33;
  o_124 = t;
  t = SSL_exit(o_124);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm r_124 = NULL,s_124 = NULL;
  t = term_r_52;
  r_124 = t;
  t = term_q_56;
  s_124 = t;
  t = term_r_56;
  t = x_11(r_124, s_124, t);
  return(t);
}
static ATerm s_11 (ATerm y_42, ATerm z_42, ATerm t)
{
  ATerm t_56 = t;
  int u_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(y_42, z_42);
      LocalPopChoice(u_56);
    }
  else
    {
      t = t_56;
      t = SSL_addr(y_42, z_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm k_116 (ATerm), ATerm l_116 (ATerm), ATerm t)
{
  ATerm u_124 = NULL,v_124 = NULL,w_124 = NULL;
  u_124 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_124;
      t = k_116(t);
    }
  else
    {
      ATerm z_124 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_124 = ATgetFirst((ATermList) t);
          w_124 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_124;
      t = foldr_2_0(k_116, l_116, t);
      z_124 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_124, z_124);
      t = l_116(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = term_j_55;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm c_53 = NULL,j_53 = NULL;
  if(match_cons(t, sym__2))
    {
      c_53 = ATgetArgument(t, 0);
      j_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_11(c_53, j_53, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_125 = NULL,w_52 = NULL,z_52 = NULL;
  t = times_0_0(t);
  z_52 = t;
  t = SSL_explode_term(z_52);
  if(match_cons(t, sym__2))
    {
      ATerm v_56 = ATgetArgument(t, 0);
      w_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_52;
  t = foldr_2_0(g_17, h_17, t);
  d_125 = t;
  t = SSL_TicksToSeconds(d_125);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_125 = NULL,p_125 = NULL,q_125 = NULL;
  o_125 = t;
  if(match_cons(t, sym__2))
    {
      p_125 = ATgetArgument(t, 0);
      q_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_56 = t;
    int x_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_125;
        if((p_125 != t))
          {
            _fail(t);
          }
        t = o_125;
        LocalPopChoice(x_56);
      }
    else
      {
        t = w_56;
        t = (ATerm) ATmakeAppl(sym__2, p_125, q_125);
        {
          ATerm y_56 = t;
          int z_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_125, q_125);
              LocalPopChoice(z_56);
            }
          else
            {
              t = y_56;
              t = SSL_gtr(p_125, q_125);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_125, q_125);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_125 (ATerm), ATerm t)
{
  ATerm u_125 = NULL;
  u_125 = t;
  {
    ATerm b_57 = t;
    int c_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_125 = NULL,x_125 = NULL,y_125 = NULL;
        t = term_r_52;
        x_125 = t;
        t = term_i_55;
        y_125 = t;
        t = term_e_57;
        t = x_11(x_125, y_125, t);
        w_125 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_125, term_b_33);
        t = geq_0_0(t);
        t = u_125;
        t = b_125(t);
        LocalPopChoice(c_57);
      }
    else
      {
        t = b_57;
        t = u_125;
      }
  }
  return(t);
}
static ATerm i_17 (ATerm t)
{
  ATerm a_126 = NULL,b_126 = NULL,d_126 = NULL,e_126 = NULL;
  t = run_time_0_0(t);
  a_126 = t;
  t = term_z_54;
  t = whoami_0_0(t);
  b_126 = t;
  t = term_z_32;
  d_126 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_57), a_126), term_f_57), b_126);
  e_126 = t;
  t = SSL_printnl(d_126, e_126);
  t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_57), a_126), term_f_57), b_126));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_126 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_55;
  f_126 = t;
  t = SSL_exit(f_126);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm p_126 = NULL,q_126 = NULL;
  q_126 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_126;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_126 = ATgetArgument(t, 0);
          {
            ATerm h_54 = NULL,z_29 = NULL;
            t = SSLgetAnnotations(q_126);
            h_54 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_126);
            z_29 = t;
            t = SSLsetAnnotations(z_29, h_54);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_126;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_127 (ATerm), ATerm t)
{
  ATerm h_57 = t;
  int i_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_126 = NULL,j_126 = NULL;
      t = term_r_52;
      i_126 = t;
      t = term_j_57;
      j_126 = t;
      t = term_k_57;
      t = x_11(i_126, j_126, t);
      LocalPopChoice(i_57);
    }
  else
    {
      t = h_57;
      t = fetch_1_0(j_17, t);
    }
  t = r_127(t);
  return(t);
}
static ATerm b_12 (ATerm i_58, ATerm j_58, ATerm k_58, ATerm t)
{
  ATerm s_126 = NULL;
  t = SSL_hashtable_put(k_58, i_58, j_58);
  s_126 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_126);
  return(t);
}
ATerm lookup_table_0_1 (ATerm c_56, ATerm t)
{
  ATerm b_127 = NULL;
  t = table_hashtable_0_0(t);
  b_127 = t;
  {
    ATerm l_57 = t;
    int o_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_55 = NULL;
        t = b_127;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_55 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_12(c_56, a_55, t);
        LocalPopChoice(o_57);
      }
    else
      {
        t = l_57;
        {
          ATerm n_55 = NULL;
          t = c_56;
          t = table_create_0_0(t);
          t = b_127;
          if(match_cons(t, sym_Hashtable_1))
            {
              n_55 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_12(c_56, n_55, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_58, ATerm r_58, ATerm t)
{
  ATerm e_127 = NULL;
  t = SSL_hashtable_create(q_58, r_58);
  e_127 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_127);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm f_127 = NULL,g_127 = NULL,h_127 = NULL,j_127 = NULL,k_127 = NULL;
  f_127 = t;
  t = term_q_57;
  j_127 = t;
  t = term_r_57;
  k_127 = t;
  t = f_127;
  t = new_hashtable_0_2(j_127, k_127, t);
  g_127 = t;
  t = f_127;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(f_127, g_127, h_127, t);
  t = f_127;
  return(t);
}
static ATerm u_11 (ATerm n_58, ATerm o_58, ATerm t)
{
  ATerm l_127 = NULL;
  t = SSL_hashtable_remove(o_58, n_58);
  l_127 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_127);
  return(t);
}
static ATerm v_11 (ATerm s_58, ATerm t)
{
  ATerm m_127 = NULL;
  t = SSL_hashtable_destroy(s_58);
  m_127 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_127);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm n_127 = NULL;
  t = SSL_table_hashtable();
  n_127 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_127);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_127 = NULL,p_127 = NULL,q_127 = NULL,s_127 = NULL;
  o_127 = t;
  t = table_hashtable_0_0(t);
  p_127 = t;
  t = lookup_table_0_1(o_127, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_11(s_127, t);
  t = p_127;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_11(o_127, q_127, t);
  t = o_127;
  return(t);
}
ATerm map_1_0 (ATerm l_109 (ATerm), ATerm t)
{
  static ATerm n_128 (ATerm t)
  {
    ATerm k_128 = NULL,l_128 = NULL,m_128 = NULL;
    k_128 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_128;
      }
    else
      {
        ATerm v_55 = NULL,e_56 = NULL,f_56 = NULL,b_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_128 = ATgetFirst((ATermList) t);
            m_128 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_128);
        v_55 = t;
        t = l_128;
        t = l_109(t);
        e_56 = t;
        t = m_128;
        t = n_128(t);
        f_56 = t;
        t = (ATerm) ATinsert(CheckATermList(f_56), e_56);
        b_30 = t;
        t = SSLsetAnnotations(b_30, v_55);
      }
    return(t);
  }
  t = n_128(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm q_128 = NULL,r_128 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_128 = ATgetFirst((ATermList) t);
      r_128 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_128 = NULL,w_128 = NULL;
        static ATerm k_17 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_128)), not_null(w_128));
          return(t);
        }
        t = r_128;
        t = n_0(t);
        if(((v_128 != NULL) && (v_128 != t)))
          _fail(t);
        else
          v_128 = t;
        t = q_128;
        t = k_0(t);
        if(((w_128 != NULL) && (w_128 != t)))
          _fail(t);
        else
          w_128 = t;
        t = r_128;
        t = reverse_acc_2_0(k_0, k_17, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_54;
      t = n_0(t);
    }
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm c_129 = NULL,d_129 = NULL,e_129 = NULL,g_30 = NULL;
  e_129 = t;
  if(match_cons(t, sym_Program_1))
    {
      d_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_129);
  c_129 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_129);
  g_30 = t;
  t = SSLsetAnnotations(g_30, c_129);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm g_129 = NULL;
  g_129 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_129), term_s_57);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_128 = NULL,z_128 = NULL;
  ATerm t_57 = t;
  int u_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_129 = NULL,b_129 = NULL;
      t = term_r_52;
      a_129 = t;
      t = term_q_56;
      b_129 = t;
      t = term_r_56;
      t = x_11(a_129, b_129, t);
      LocalPopChoice(u_57);
    }
  else
    {
      t = t_57;
      t = fetch_1_0(m_17, t);
    }
  t = term_v_57;
  t = echo_0_0(t);
  t = term_z_55;
  y_128 = t;
  t = term_b_56;
  z_128 = t;
  t = term_w_57;
  t = x_11(y_128, z_128, t);
  t = reverse_acc_2_0(_id, n_17, t);
  t = map_1_0(o_17, t);
  return(t);
}
ATerm fetch_1_0 (ATerm v_109 (ATerm), ATerm t)
{
  static ATerm f_130 (ATerm t)
  {
    ATerm c_130 = NULL,d_130 = NULL,e_130 = NULL;
    c_130 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_130 = ATgetFirst((ATermList) t);
        e_130 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_57 = t;
      int y_57 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_56 = NULL,s_56 = NULL,m_30 = NULL;
          t = SSLgetAnnotations(c_130);
          p_56 = t;
          t = d_130;
          t = v_109(t);
          s_56 = t;
          t = (ATerm) ATinsert(CheckATermList(e_130), s_56);
          m_30 = t;
          t = SSLsetAnnotations(m_30, p_56);
          LocalPopChoice(y_57);
        }
      else
        {
          t = x_57;
          {
            ATerm a_57 = NULL,d_57 = NULL,u_30 = NULL;
            t = SSLgetAnnotations(c_130);
            a_57 = t;
            t = e_130;
            t = f_130(t);
            d_57 = t;
            t = (ATerm) ATinsert(CheckATermList(d_57), d_130);
            u_30 = t;
            t = SSLsetAnnotations(u_30, a_57);
          }
        }
    }
    return(t);
  }
  t = f_130(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_130 = NULL,k_130 = NULL,l_130 = NULL;
  j_130 = t;
  {
    ATerm z_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_130;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_58 = ATgetFirst((ATermList) t);
                ATerm e_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_130;
          }
        LocalPopChoice(a_58);
      }
    else
      {
        t = z_57;
        t = (ATerm) ATinsert(ATempty, j_130);
      }
  }
  k_130 = t;
  t = term_k_53;
  l_130 = t;
  t = SSL_printnl(l_130, k_130);
  t = j_130;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm p_130 = NULL,q_130 = NULL;
  t = term_r_52;
  p_130 = t;
  t = term_q_56;
  q_130 = t;
  t = term_r_56;
  t = x_11(p_130, q_130, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_12 (ATerm l_58, ATerm m_58, ATerm t)
{
  t = SSL_hashtable_get(m_58, l_58);
  return(t);
}
static ATerm x_11 (ATerm j_56, ATerm k_56, ATerm t)
{
  ATerm r_130 = NULL;
  t = lookup_table_0_1(j_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_12(k_56, r_130, t);
  return(t);
}
static ATerm p_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm t_130 = NULL,u_130 = NULL;
  t = term_f_58;
  t_130 = t;
  t = term_z_54;
  u_130 = t;
  t = term_g_58;
  t = a_12(t_130, u_130, t);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_h_58;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  ATerm v_130 = NULL,w_130 = NULL,x_130 = NULL,y_130 = NULL;
  t = term_f_58;
  x_130 = t;
  t = term_z_54;
  y_130 = t;
  t = term_g_58;
  t = a_12(x_130, y_130, t);
  t = term_p_58;
  v_130 = t;
  t = term_z_54;
  w_130 = t;
  t = term_u_58;
  t = a_12(v_130, w_130, t);
  t = term_v_58;
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_w_58;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm x_58 = t;
  int y_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(p_17, q_17, r_17, t);
      LocalPopChoice(y_58);
    }
  else
    {
      t = x_58;
      t = Option_3_0(s_17, t_17, u_17, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm g_88 (ATerm), ATerm h_88 (ATerm), ATerm t)
{
  ATerm z_130 = NULL,a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL,e_131 = NULL,x_30 = NULL;
  e_131 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_131 = ATgetFirst((ATermList) t);
      b_131 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_131);
  z_130 = t;
  t = a_131;
  t = g_88(t);
  c_131 = t;
  t = b_131;
  t = h_88(t);
  d_131 = t;
  t = (ATerm) ATinsert(CheckATermList(d_131), c_131);
  x_30 = t;
  t = SSLsetAnnotations(x_30, z_130);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_129 (ATerm), ATerm t)
{
  ATerm j_131 = NULL,k_131 = NULL,l_131 = NULL,m_131 = NULL,o_131 = NULL,p_131 = NULL,z_30 = NULL;
  j_131 = t;
  {
    ATerm z_58 = t;
    int a_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_59;
        t = u_129(t);
        LocalPopChoice(a_59);
      }
    else
      {
        t = z_58;
      }
  }
  t = j_131;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_131 = ATgetFirst((ATermList) t);
      m_131 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_131);
  k_131 = t;
  t = term_q_56;
  p_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_56, l_131);
  t = a_12(p_131, l_131, t);
  t = m_131;
  {
    static ATerm z_131 (ATerm t)
    {
      ATerm c_59 = t;
      int d_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_59 = t;
          int f_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_131 = NULL;
              s_131 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_131;
              LocalPopChoice(f_59);
            }
          else
            {
              t = e_59;
              t = u_129(t);
              t = Cons_2_0(_id, z_131, t);
            }
          LocalPopChoice(d_59);
        }
      else
        {
          t = c_59;
          {
            ATerm v_131 = NULL,w_131 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_131 = ATgetFirst((ATermList) t);
                w_131 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_131), (ATerm) ATmakeAppl(sym_Undefined_1, v_131));
          }
        }
      return(t);
    }
    t = z_131(t);
  }
  o_131 = t;
  t = (ATerm) ATinsert(CheckATermList(o_131), (ATerm) ATmakeAppl(sym_Program_1, l_131));
  z_30 = t;
  t = SSLsetAnnotations(z_30, k_131);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm q_132 = NULL;
  q_132 = t;
  if(match_string(t, "--help"))
    {
      t = q_132;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_132;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_132;
        }
    }
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm r_132 = NULL,s_132 = NULL;
  t = term_j_57;
  r_132 = t;
  t = term_z_54;
  s_132 = t;
  t = term_g_59;
  t = a_12(r_132, s_132, t);
  t = term_h_59;
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = term_i_59;
  return(t);
}
static ATerm f_18 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm t_129 (ATerm), ATerm t)
{
  ATerm e_132 = NULL,f_132 = NULL,k_132 = NULL,l_132 = NULL,m_132 = NULL,n_132 = NULL,o_132 = NULL,p_132 = NULL;
  k_132 = t;
  t = term_z_55;
  l_132 = t;
  t = term_j_59;
  t = lookup_table_0_1(l_132, t);
  p_132 = t;
  t = term_b_56;
  m_132 = t;
  t = (ATerm) ATempty;
  n_132 = t;
  t = p_132;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_132 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(m_132, n_132, o_132, t);
  t = k_132;
  {
    static ATerm v_17 (ATerm t)
    {
      ATerm k_59 = t;
      int l_59 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_129(t);
          LocalPopChoice(l_59);
        }
      else
        {
          t = k_59;
          {
            ATerm m_59 = t;
            int n_59 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(w_17, a_18, e_18, t);
                LocalPopChoice(n_59);
              }
            else
              {
                t = m_59;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_17, t);
  }
  {
    ATerm o_59 = t;
    int p_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_133 = NULL;
        d_133 = t;
        {
          ATerm q_59 = t;
          int r_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_57 = NULL;
              t = d_133;
              {
                ATerm s_59 = t;
                int t_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_57 = NULL,p_57 = NULL;
                    t = term_r_52;
                    n_57 = t;
                    t = term_j_57;
                    p_57 = t;
                    t = term_k_57;
                    t = x_11(n_57, p_57, t);
                    LocalPopChoice(t_59);
                  }
                else
                  {
                    t = s_59;
                    t = fetch_1_0(f_18, t);
                  }
              }
              t = d_133;
              t = default_system_usage_0_0(t);
              t = term_j_55;
              m_57 = t;
              t = SSL_exit(m_57);
              LocalPopChoice(r_59);
            }
          else
            {
              t = q_59;
              {
                ATerm b_58 = NULL,c_58 = NULL,t_58 = NULL;
                t = term_r_52;
                c_58 = t;
                t = term_f_58;
                t_58 = t;
                t = term_u_59;
                t = x_11(c_58, t_58, t);
                t = d_133;
                t = default_system_about_0_0(t);
                t = term_j_55;
                b_58 = t;
                t = SSL_exit(b_58);
              }
            }
        }
        LocalPopChoice(p_59);
      }
    else
      {
        t = o_59;
        {
          ATerm v_59 = t;
          int w_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_133 = NULL,f_133 = NULL,g_133 = NULL;
              static ATerm g_18 (ATerm t)
              {
                ATerm h_133 = NULL,i_133 = NULL,j_133 = NULL,b_31 = NULL;
                j_133 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_133 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_133);
                h_133 = t;
                t = i_133;
                if(((e_132 != NULL) && (e_132 != t)))
                  _fail(t);
                else
                  e_132 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_133);
                b_31 = t;
                t = SSLsetAnnotations(b_31, h_133);
                return(t);
              }
              t = fetch_1_0(g_18, t);
              t = term_z_32;
              f_133 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_132)), term_x_59);
              g_133 = t;
              t = SSL_printnl(f_133, g_133);
              t = (ATerm) ATmakeAppl(sym__2, term_z_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_132)), term_x_59));
              t = default_system_usage_0_0(t);
              t = term_b_33;
              e_133 = t;
              t = SSL_exit(e_133);
              LocalPopChoice(w_59);
            }
          else
            {
              t = v_59;
            }
        }
      }
  }
  f_132 = t;
  t = term_z_55;
  t = table_destroy_0_0(t);
  t = f_132;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_127 (ATerm), ATerm u_127 (ATerm), ATerm v_127 (ATerm), ATerm w_127 (ATerm), ATerm t)
{
  ATerm o_133 = NULL,p_133 = NULL,q_133 = NULL,r_133 = NULL,s_133 = NULL;
  t = parse_options_1_0(t_127, t);
  o_133 = t;
  t = term_y_59;
  t = table_create_0_0(t);
  t = term_y_59;
  p_133 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_59, term_z_59, o_133);
  t = lookup_table_0_1(p_133, t);
  s_133 = t;
  t = term_z_59;
  q_133 = t;
  t = s_133;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_12(q_133, o_133, r_133, t);
  t = o_133;
  t = v_127(t);
  {
    ATerm a_60 = t;
    int b_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_127, t);
        LocalPopChoice(b_60);
      }
    else
      {
        t = a_60;
        {
          ATerm c_60 = t;
          int d_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_127(t);
              t = report_success_0_0(t);
              LocalPopChoice(d_60);
            }
          else
            {
              t = c_60;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm h_18 (ATerm t)
{
  ATerm e_60 = t;
  int f_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(f_60);
    }
  else
    {
      t = e_60;
      {
        ATerm g_60 = t;
        int h_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(h_60);
          }
        else
          {
            t = g_60;
            {
              ATerm i_60 = t;
              int j_60 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(j_60);
                }
              else
                {
                  t = i_60;
                  {
                    ATerm k_60 = t;
                    int l_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(n_18, p_18, q_18, t);
                        LocalPopChoice(l_60);
                      }
                    else
                      {
                        t = k_60;
                        {
                          ATerm m_60 = t;
                          int n_60 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(n_60);
                            }
                          else
                            {
                              t = m_60;
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
static ATerm i_18 (ATerm t)
{
  t = input_1_0(t_18, t);
  return(t);
}
static ATerm n_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm u_133 = NULL,v_133 = NULL;
  t = term_o_53;
  u_133 = t;
  t = term_z_54;
  v_133 = t;
  t = term_o_60;
  t = a_12(u_133, v_133, t);
  t = term_p_60;
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = term_q_60;
  return(t);
}
static ATerm t_18 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(h_18, default_usage_0_0, _id, i_18, t);
  return(t);
}

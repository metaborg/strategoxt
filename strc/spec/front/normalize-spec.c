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
ATerm term_b_65;
ATerm term_a_65;
ATerm term_z_64;
ATerm term_e_64;
ATerm term_d_64;
ATerm term_c_64;
ATerm term_z_63;
ATerm term_o_63;
ATerm term_n_63;
ATerm term_m_63;
ATerm term_l_63;
ATerm term_g_63;
ATerm term_a_63;
ATerm term_z_62;
ATerm term_y_62;
ATerm term_x_62;
ATerm term_w_62;
ATerm term_v_62;
ATerm term_u_62;
ATerm term_n_62;
ATerm term_m_62;
ATerm term_g_62;
ATerm term_f_62;
ATerm term_e_62;
ATerm term_b_62;
ATerm term_a_62;
ATerm term_x_61;
ATerm term_w_61;
ATerm term_v_61;
ATerm term_i_61;
ATerm term_h_61;
ATerm term_g_61;
ATerm term_f_61;
ATerm term_x_60;
ATerm term_w_60;
ATerm term_u_60;
ATerm term_s_60;
ATerm term_n_60;
ATerm term_m_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_g_60;
ATerm term_a_60;
ATerm term_z_59;
ATerm term_x_59;
ATerm term_w_59;
ATerm term_s_59;
ATerm term_p_59;
ATerm term_o_59;
ATerm term_n_59;
ATerm term_l_59;
ATerm term_k_59;
ATerm term_j_59;
ATerm term_g_59;
ATerm term_f_59;
ATerm term_c_59;
ATerm term_b_59;
ATerm term_u_57;
ATerm term_p_57;
ATerm term_i_57;
ATerm term_g_57;
ATerm term_f_57;
ATerm term_a_57;
ATerm term_z_56;
ATerm term_w_56;
ATerm term_p_56;
ATerm term_f_56;
ATerm term_d_56;
ATerm term_j_54;
ATerm term_i_54;
ATerm term_h_54;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_n_52;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_h_44;
ATerm term_f_44;
ATerm term_b_44;
ATerm term_a_44;
ATerm term_w_42;
ATerm term_v_42;
ATerm term_y_41;
ATerm term_x_41;
ATerm term_e_41;
ATerm term_o_39;
ATerm term_h_38;
ATerm term_d_38;
ATerm term_p_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_m_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_f_36;
ATerm term_c_36;
ATerm term_b_36;
ATerm term_x_35;
ATerm term_w_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_q_35;
ATerm term_p_35;
ATerm term_j_35;
ATerm term_i_35;
ATerm term_h_35;
ATerm term_g_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_n_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_o_30;
ATerm term_c_30;
ATerm term_g_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_q_27;
ATerm term_o_27;
ATerm term_l_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_v_25;
ATerm term_t_25;
ATerm term_r_25;
ATerm term_q_25;
ATerm term_p_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_e_25;
ATerm term_c_25;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_n_24;
ATerm term_d_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_v_21;
ATerm term_s_21;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Undefined", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym_Op_2, term_s_21, (ATerm) ATempty);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Pair", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("Defined", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewrite", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_22);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-rewrite", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_22);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_List_1, (ATerm) ATempty);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_20);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Op_2, term_p_24, (ATerm) ATempty);
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_24);
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym_Call_2, term_j_25, (ATerm) ATempty);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_26);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym_Call_2, term_v_26, (ATerm) ATempty);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATempty);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_27);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bagof-", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("aux-", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("filter", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_34);
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_RootApp_1, term_f_20);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("Fst", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_34);
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(sym_CallNoArgs_1, term_x_34);
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key", 0, ATtrue));
  ATprotect(&(term_h_35));
  term_h_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_35);
  ATprotect(&(term_i_35));
  term_i_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-override-key-undefined", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_35);
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert", 0, ATtrue));
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_35);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-assert-undefined", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_35);
  ATprotect(&(term_w_35));
  term_w_35 = (ATerm) ATmakeAppl(ATmakeSymbol("override-key", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_35);
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("assert", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_36);
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ContextVar", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(ATmakeSymbol("scope", 0, ATtrue));
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_36);
  ATprotect(&(term_m_36));
  term_m_36 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error] Labeled dynamic rule scope not supported by old style dynamic rules", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_36));
  term_p_36 = (ATerm) ATmakeAppl(ATmakeSymbol("[normalize-spec | fatal error]    ", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Keys", 0, ATtrue));
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("context in left-hand side of dynamic rule", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("SplitDynamicRule/(1,0) input: ", 0, ATtrue));
  ATprotect(&(term_e_41));
  term_e_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Closure", 0, ATtrue));
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("extend-ruleset", 0, ATtrue));
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_41);
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("add-to-ruleset", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_42);
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_b_44));
  term_b_44 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_44);
  ATprotect(&(term_f_44));
  term_f_44 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_44);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("rule-scope", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_47);
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("VarToConst", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_52);
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_52);
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(sym_Constructors_1, (ATerm) ATempty);
  ATprotect(&(term_i_54));
  term_i_54 = (ATerm) ATmakeAppl(sym_Overlays_1, (ATerm) ATempty);
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym_Strategies_1, (ATerm) ATempty);
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("label-scope", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_56);
  ATprotect(&(term_p_56));
  term_p_56 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_56));
  term_w_56 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr", 0, ATtrue));
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(sym__2, term_p_56, term_w_56);
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_57));
  term_f_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_57));
  term_g_57 = (ATerm) ATmakeAppl(sym__2, term_p_56, term_f_57);
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(sym__2, term_p_56, term_p_57);
  ATprotect(&(term_b_59));
  term_b_59 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_59));
  term_c_59 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(sym__2, term_p_56, term_f_59);
  ATprotect(&(term_j_59));
  term_j_59 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_59));
  term_k_59 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_59));
  term_l_59 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_59));
  term_n_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_59));
  term_o_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_59));
  term_p_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_59));
  term_s_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_59));
  term_x_59 = (ATerm) ATmakeAppl(sym__2, term_s_59, term_w_59);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_59);
  ATprotect(&(term_a_60));
  term_a_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(sym__2, term_h_60, term_k_59);
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_60));
  term_s_60 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_60));
  term_u_60 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--dr (old|new)   Use old/new dynamic rule semantics (default: old)", 0, ATtrue));
  ATprotect(&(term_g_61));
  term_g_61 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_61));
  term_h_61 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_61));
  term_i_61 = (ATerm) ATmakeAppl(sym__2, term_p_56, term_h_61);
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(sym__2, term_p_56, term_s_59);
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_61));
  term_x_61 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(sym__2, term_p_56, term_a_62);
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_g_62));
  term_g_62 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_62));
  term_m_62 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_62));
  term_n_62 = (ATerm) ATmakeAppl(sym__2, term_s_60, term_u_60);
  ATprotect(&(term_u_62));
  term_u_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_62));
  term_v_62 = (ATerm) ATmakeAppl(sym__2, term_u_62, term_k_59);
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_x_62));
  term_x_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_y_62));
  term_y_62 = (ATerm) ATmakeAppl(sym__2, term_x_62, term_k_59);
  ATprotect(&(term_z_62));
  term_z_62 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_63));
  term_a_63 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_g_63));
  term_g_63 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_63));
  term_l_63 = (ATerm) ATmakeAppl(sym__2, term_a_62, term_k_59);
  ATprotect(&(term_m_63));
  term_m_63 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_63));
  term_n_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_63));
  term_o_63 = (ATerm) ATmakeAppl(sym__3, term_s_60, term_u_60, (ATerm) ATempty);
  ATprotect(&(term_z_63));
  term_z_63 = (ATerm) ATmakeAppl(sym__2, term_p_56, term_u_62);
  ATprotect(&(term_c_64));
  term_c_64 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_64));
  term_d_64 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_64));
  term_e_64 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_64));
  term_z_64 = (ATerm) ATmakeAppl(sym__2, term_p_57, term_k_59);
  ATprotect(&(term_a_65));
  term_a_65 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_65));
  term_b_65 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm HL_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm w_103 (ATerm), ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm SplitDynamicRule_old_1_0 (ATerm v_0 (ATerm), ATerm t);
static ATerm e_10 (ATerm b_136 (ATerm), ATerm f_76, ATerm d_76, ATerm e_76, ATerm i_76, ATerm g_76, ATerm t);
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm b_136 (ATerm), ATerm t);
static ATerm a_18 (ATerm h_12, ATerm p_12, ATerm t);
static ATerm f_18 (ATerm z_12, ATerm a_13, ATerm t);
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
ATerm pat_td_1_0 (ATerm v_134 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm g_10 (ATerm w_66, ATerm x_66, ATerm y_66, ATerm t);
static ATerm q_29 (ATerm c_29, ATerm t);
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
static ATerm h_10 (ATerm j_62, ATerm k_62, ATerm l_62, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm i_10 (ATerm a_136 (ATerm), ATerm m_75, ATerm j_75, ATerm k_75, ATerm t_75, ATerm x_75, ATerm y_75, ATerm t);
static ATerm b_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm y_4 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm u_5 (ATerm t);
ATerm split_dynamic_rules_old_0_0 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm split_dynamic_rule_old_1_0 (ATerm c_136 (ATerm), ATerm t);
static ATerm y_5 (ATerm t);
static ATerm k_10 (ATerm m_76, ATerm l_76, ATerm t);
ATerm DefDynamicRuleScope_0_0 (ATerm t);
static ATerm b_60 (ATerm i_59, ATerm t);
static ATerm c_60 (ATerm q_59, ATerm t);
static ATerm c_6 (ATerm t);
ATerm Downgrade_ScopeId_0_0 (ATerm t);
ATerm Downgrade_DynRuleDef_0_0 (ATerm t);
static ATerm z_65 (ATerm e_63, ATerm t);
static ATerm d_6 (ATerm t);
static ATerm e_6 (ATerm t);
ATerm Downgrade_Generator_0_0 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm downgrade_new_dr_syntax_0_0 (ATerm t);
static ATerm i_6 (ATerm t);
static ATerm k_6 (ATerm t);
static ATerm p_6 (ATerm t);
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
static ATerm x_6 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm z_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm d_7 (ATerm t);
ATerm dummify_0_0 (ATerm t);
ATerm debug_1_0 (ATerm x_109 (ATerm), ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm j_7 (ATerm t);
static ATerm k_7 (ATerm t);
static ATerm l_7 (ATerm t);
static ATerm m_7 (ATerm t);
static ATerm n_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm q_7 (ATerm t);
static ATerm t_10 (ATerm i_136 (ATerm), ATerm u_79, ATerm r_79, ATerm s_79, ATerm a_80, ATerm g_80, ATerm h_80, ATerm t);
ATerm SplitDynamicRule_1_0 (ATerm i_136 (ATerm), ATerm t);
ATerm SplitDynamicRule_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm a_105 (ATerm), ATerm t);
static ATerm k_8 (ATerm t);
ATerm split_dynamic_rule_1_0 (ATerm f_136 (ATerm), ATerm t);
static ATerm o_8 (ATerm t);
static ATerm p_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm t_8 (ATerm t);
ATerm DeclareContextVars_0_0 (ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm z_8 (ATerm t);
static ATerm a_9 (ATerm t);
static ATerm f_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm i_9 (ATerm t);
static ATerm j_9 (ATerm t);
static ATerm k_9 (ATerm t);
static ATerm m_9 (ATerm t);
static ATerm n_9 (ATerm t);
static ATerm p_9 (ATerm t);
ATerm def_tvars_0_0 (ATerm t);
static ATerm q_9 (ATerm t);
static ATerm t_9 (ATerm t);
static ATerm u_9 (ATerm t);
static ATerm v_9 (ATerm t);
static ATerm w_10 (ATerm n_78, ATerm m_78, ATerm t);
ATerm repeat_2_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm t);
ATerm listtd_1_0 (ATerm s_111 (ATerm), ATerm t);
ATerm DefDynRuleScope_0_0 (ATerm t);
ATerm tboundin_3_0 (ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t);
static ATerm w_9 (ATerm t);
static ATerm x_9 (ATerm t);
ATerm Bind8_0_0 (ATerm t);
static ATerm y_9 (ATerm t);
static ATerm z_9 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm k_11 (ATerm t);
static ATerm e_12 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm n_12 (ATerm t);
static ATerm o_12 (ATerm t);
static ATerm q_12 (ATerm t);
static ATerm r_12 (ATerm t);
static ATerm s_12 (ATerm t);
static ATerm t_12 (ATerm t);
static ATerm u_12 (ATerm t);
static ATerm b_13 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm f_13 (ATerm t);
static ATerm g_13 (ATerm t);
static ATerm v_13 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
static ATerm b_11 (ATerm t_114 (ATerm), ATerm m_30, ATerm l_30, ATerm t);
static ATerm c_11 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm q_30, ATerm p_30, ATerm t);
static ATerm d_11 (ATerm o_114 (ATerm), ATerm k_30, ATerm j_30, ATerm t);
ATerm genzip_4_0 (ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm t);
static ATerm i_14 (ATerm t);
static ATerm j_14 (ATerm t);
static ATerm l_14 (ATerm t);
static ATerm i_11 (ATerm e_645, ATerm j_645, ATerm j_61, ATerm t);
ATerm while_not_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t);
ATerm for_3_0 (ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm b_112 (ATerm p_110, ATerm q_110, ATerm r_110, ATerm t);
static ATerm r_14 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm x_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
ATerm free_vars_3_0 (ATerm d_133 (ATerm), ATerm e_133 (ATerm), ATerm f_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm x_103 (ATerm), ATerm t);
static ATerm m_11 (ATerm d_55, ATerm e_55, ATerm t);
ATerm VarToConst_0_0 (ATerm t);
ATerm alltd_1_0 (ATerm o_105 (ATerm), ATerm t);
static ATerm n_11 (ATerm r_123 (ATerm), ATerm o_44, ATerm m_44, ATerm t);
static ATerm f_15 (ATerm t);
static ATerm i_15 (ATerm t);
ATerm DeclareVarToConst_0_0 (ATerm t);
static ATerm o_11 (ATerm x_54, ATerm y_54, ATerm t);
ATerm end_scope_1_0 (ATerm o_123 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm n_123 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm t);
static ATerm o_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm z_15 (ATerm t);
static ATerm a_16 (ATerm t);
ATerm vars_to_consts_0_0 (ATerm t);
ATerm concat_0_0 (ATerm t);
ATerm filter_1_0 (ATerm l_118 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm z_110 (ATerm), ATerm t);
static ATerm a_119 (ATerm s_118, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm r_11 (ATerm c_35, ATerm o_34, ATerm t);
ATerm foldr_3_0 (ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm l_117 (ATerm), ATerm t);
static ATerm f_16 (ATerm t);
static ATerm g_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
ATerm CombineSections_0_0 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
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
static ATerm z_16 (ATerm t);
ATerm normalize_spec_0_0 (ATerm t);
static ATerm s_11 (ATerm e_40, ATerm f_40, ATerm t);
static ATerm t_11 (ATerm i_24, ATerm j_24, ATerm t);
static ATerm v_11 (ATerm z_109 (ATerm), ATerm x_175, ATerm o_24, ATerm t);
static ATerm u_11 (ATerm e_24, ATerm f_24, ATerm t);
static ATerm a_17 (ATerm t);
static ATerm b_17 (ATerm t);
ATerm output_1_0 (ATerm x_128 (ATerm), ATerm t);
static ATerm k_125 (ATerm e_125, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_11 (ATerm k_24, ATerm t);
static ATerm x_11 (ATerm x_38, ATerm y_38, ATerm t);
static ATerm y_11 (ATerm g_40, ATerm h_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_126 (ATerm u_125, ATerm t);
static ATerm x_126 (ATerm z_125, ATerm a_126, ATerm b_126, ATerm t);
static ATerm y_126 (ATerm j_126, ATerm k_126, ATerm l_126, ATerm t);
static ATerm z_11 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm y_128 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm c_17 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm f_17 (ATerm t);
static ATerm g_17 (ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
static ATerm m_17 (ATerm t);
static ATerm n_17 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm i_12 (ATerm x_49, ATerm y_49, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm o_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm q_17 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm t_17 (ATerm t);
ATerm input_option_0_0 (ATerm t);
static ATerm g_12 (ATerm s_54, ATerm t_54, ATerm r_54, ATerm t);
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm u_17 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
ATerm normalize_spec_options_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm a_12 (ATerm a_43, ATerm b_43, ATerm t);
ATerm foldr_2_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm x_17 (ATerm t);
static ATerm y_17 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm y_125 (ATerm), ATerm t);
static ATerm z_17 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm b_18 (ATerm t);
ATerm need_help_1_0 (ATerm o_128 (ATerm), ATerm t);
static ATerm j_12 (ATerm k_58, ATerm l_58, ATerm m_58, ATerm t);
ATerm lookup_table_0_1 (ATerm e_56, ATerm t);
ATerm new_hashtable_0_2 (ATerm s_58, ATerm t_58, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm c_12 (ATerm p_58, ATerm q_58, ATerm t);
static ATerm d_12 (ATerm u_58, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm i_110 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm e_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm k_18 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_110 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm k_12 (ATerm n_58, ATerm o_58, ATerm t);
static ATerm f_12 (ATerm l_56, ATerm m_56, ATerm t);
static ATerm l_18 (ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm u_18 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm b_89 (ATerm), ATerm c_89 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm r_130 (ATerm), ATerm t);
static ATerm y_18 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm k_19 (ATerm t);
ATerm parse_options_1_0 (ATerm q_130 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm t);
static ATerm m_19 (ATerm t);
static ATerm s_19 (ATerm t);
static ATerm t_19 (ATerm t);
static ATerm u_19 (ATerm t);
static ATerm v_19 (ATerm t);
static ATerm z_19 (ATerm t);
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
              t = term_e_20;
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
                  t = term_e_20;
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
                      t = term_f_20;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      z_0 = ATgetArgument(t, 0);
                      a_1 = ATgetArgument(t, 1);
                      x_0 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, a_1, (ATerm) ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, x_0), z_0)));
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
ATerm topdown_1_0 (ATerm w_103 (ATerm), ATerm t)
{
  static ATerm a_0 (ATerm t)
  {
    t = topdown_1_0(w_103, t);
    return(t);
  }
  t = w_103(t);
  t = SRTS_all(a_0, t);
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm n_5 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_5);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm j_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_20);
          }
        else
          {
            t = j_20;
            {
              ATerm m_20 = t;
              int o_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_5 = NULL,q_5 = NULL,s_5 = NULL,t_5 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_5 = ATgetArgument(t, 0);
                      q_5 = ATgetArgument(t, 1);
                      s_5 = ATgetArgument(t, 2);
                      t_5 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_5;
                  t = map_1_0(m_0, t);
                  LocalPopChoice(o_20);
                }
              else
                {
                  t = m_20;
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
  ATerm b_6 = NULL;
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_6 = ATgetArgument(t, 0);
          {
            ATerm r_20 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_20);
      t = b_6;
    }
  else
    {
      t = p_20;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_6 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_6;
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
  ATerm j_6 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_6);
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm s_20 = t;
  int u_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_20);
    }
  else
    {
      t = s_20;
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            {
              ATerm y_20 = t;
              int z_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL,o_6 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      l_6 = ATgetArgument(t, 0);
                      m_6 = ATgetArgument(t, 1);
                      n_6 = ATgetArgument(t, 2);
                      o_6 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = n_6;
                  t = map_1_0(b_1, t);
                  LocalPopChoice(z_20);
                }
              else
                {
                  t = y_20;
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
  ATerm b_7 = NULL;
  ATerm a_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_7 = ATgetArgument(t, 0);
          {
            ATerm j_21 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_21);
      t = b_7;
    }
  else
    {
      t = a_21;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_7 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_7;
    }
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm o_7 = NULL;
  o_7 = t;
  {
    ATerm o_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_7 = NULL,b_0 = NULL,h_0 = NULL,c_3 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            x_7 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_7);
        b_0 = t;
        t = x_7;
        t = ContextVar_0_0(t);
        h_0 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, h_0);
        c_3 = t;
        t = SSLsetAnnotations(c_3, b_0);
        LocalPopChoice(q_21);
      }
    else
      {
        t = o_21;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, o_7);
  return(t);
}
ATerm SplitDynamicRule_old_1_0 (ATerm v_0 (ATerm), ATerm t)
{
  static ATerm l_8 (ATerm g_4, ATerm h_4, ATerm j_4, ATerm k_4, ATerm m_4, ATerm q_4, ATerm s_4, ATerm t)
  {
    ATerm z_4 = NULL,a_5 = NULL,b_5 = NULL,e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, m_4, term_v_21);
    {
      ATerm w_21 = t;
      if((PushChoice() == 0))
        {
          ATerm j_5 = NULL;
          if(match_cons(t, sym__2))
            {
              j_5 = ATgetArgument(t, 0);
              if((j_5 != ATgetArgument(t, 1)))
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
          t = w_21;
        }
    }
    t = new_0_0(t);
    z_4 = t;
    t = k_4;
    t = dummify_0_0(t);
    b_5 = t;
    {
      ATerm f_22 = t;
      int g_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_5;
          if((k_4 != t))
            {
              _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym_Var_1, z_4);
          LocalPopChoice(g_22);
        }
      else
        {
          t = f_22;
          t = b_5;
        }
    }
    a_5 = t;
    t = b_5;
    t = free_vars_3_0(f_0, j_0, tboundin_3_0, t);
    t = map_1_0(s_0, t);
    f_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_4, q_4);
    t = free_vars_3_0(w_0, y_0, tboundin_3_0, t);
    t = filter_1_0(c_1, t);
    e_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_5, f_5);
    t = diff_0_0(t);
    g_5 = t;
    t = new_0_0(t);
    h_5 = t;
    t = g_4;
    t = v_0(t);
    i_5 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, i_5, (ATerm) ATmakeAppl(sym_Op_2, term_h_22, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_22, (ATerm) ATinsert(CheckATermList(g_5), (ATerm) ATmakeAppl(sym_Str_1, h_5)))), b_5)))), (ATerm) ATmakeAppl(sym_RDefT_4, g_4, h_4, j_4, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, z_4), k_4), m_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, g_4)))), a_5), (ATerm) ATmakeAppl(sym_Op_2, term_i_22, (ATerm) ATinsert(CheckATermList(g_5), (ATerm) ATmakeAppl(sym_Str_1, h_5))))), q_4))));
    return(t);
  }
  ATerm y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,d_8 = NULL,e_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL;
  a_8 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      b_8 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
      e_8 = ATgetArgument(t, 2);
      g_8 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = g_8;
  if(match_cons(t, sym_Rule_3))
    {
      h_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
      j_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_8;
  if(match_cons(t, sym_Op_2))
    {
      y_7 = ATgetArgument(t, 0);
      z_7 = ATgetArgument(t, 1);
      t = z_7;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = y_7;
          if(match_string(t, "Undefined"))
            {
              ATerm t_22 = t;
              int u_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
                  t = a_8;
                  t = new_0_0(t);
                  e_2 = t;
                  t = h_8;
                  t = dummify_0_0(t);
                  c_2 = t;
                  {
                    ATerm v_22 = t;
                    int w_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = c_2;
                        if((h_8 != t))
                          {
                            _fail(t);
                          }
                        t = (ATerm) ATmakeAppl(sym_Var_1, e_2);
                        LocalPopChoice(w_22);
                      }
                    else
                      {
                        t = v_22;
                        t = c_2;
                      }
                  }
                  f_2 = t;
                  t = b_8;
                  t = v_0(t);
                  g_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, g_2, (ATerm) ATmakeAppl(sym_Op_2, term_h_22, (ATerm) ATinsert(ATinsert(ATempty, term_v_21), c_2)))), (ATerm) ATmakeAppl(sym_RDefT_4, b_8, d_8, e_8, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, e_2), h_8), term_v_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_k_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, b_8)))), f_2), term_v_21)), (ATerm) ATmakeAppl(sym_Seq_2, j_8, term_e_20)))));
                  LocalPopChoice(u_22);
                }
              else
                {
                  t = t_22;
                  t = l_8(b_8, d_8, e_8, h_8, i_8, j_8, a_8, t);
                }
            }
          else
            {
              t = l_8(b_8, d_8, e_8, h_8, i_8, j_8, a_8, t);
            }
        }
      else
        {
          t = y_7;
          t = l_8(b_8, d_8, e_8, h_8, i_8, j_8, a_8, t);
        }
    }
  else
    {
      t = l_8(b_8, d_8, e_8, h_8, i_8, j_8, a_8, t);
    }
  return(t);
}
static ATerm e_10 (ATerm b_136 (ATerm), ATerm f_76, ATerm d_76, ATerm e_76, ATerm i_76, ATerm g_76, ATerm t)
{
  ATerm q_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
  t = new_0_0(t);
  u_8 = t;
  t = i_76;
  t = dummify_0_0(t);
  q_8 = t;
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_8;
        if((i_76 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, u_8);
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        t = q_8;
      }
  }
  v_8 = t;
  t = f_76;
  t = b_136(t);
  w_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, w_8, q_8)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, f_76, d_76, e_76, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, u_8), i_76), term_v_21, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_a_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, f_76)))), v_8), term_d_23)), (ATerm) ATmakeAppl(sym_Seq_2, g_76, term_e_20))))));
  return(t);
}
ATerm ExtendSplitDynamicRuleUndefined_old_1_0 (ATerm b_136 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,g_9 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      b_9 = ATgetArgument(t, 0);
      c_9 = ATgetArgument(t, 1);
      d_9 = ATgetArgument(t, 2);
      {
        ATerm e_23 = ATgetArgument(t, 3);
        if(match_cons(e_23, sym_Rule_3))
          {
            e_9 = ATgetArgument(e_23, 0);
            {
              ATerm g_23 = ATgetArgument(e_23, 1);
              if(match_cons(g_23, sym_Op_2))
                {
                  ATerm i_23 = ATgetArgument(g_23, 0);
                  if((ATgetSymbol((ATermAppl) i_23) != ATmakeSymbol("Undefined", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm k_23 = ATgetArgument(g_23, 1);
                    if(((ATgetType(k_23) != AT_LIST) || !(ATisEmpty(k_23))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
            g_9 = ATgetArgument(e_23, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_10(b_136, b_9, c_9, d_9, e_9, g_9, t);
  return(t);
}
static ATerm a_18 (ATerm h_12, ATerm p_12, ATerm t)
{
  t = h_12;
  {
    ATerm l_24 = t;
    if((PushChoice() == 0))
      {
        ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,e_3 = NULL;
        y_12 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_12 = ATgetFirst((ATermList) t);
            x_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_12);
        v_12 = t;
        t = x_12;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(x_12), w_12);
        e_3 = t;
        t = SSLsetAnnotations(e_3, v_12);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_20, h_12);
  return(t);
}
static ATerm f_18 (ATerm z_12, ATerm a_13, ATerm t)
{
  t = z_12;
  {
    ATerm m_24 = t;
    if((PushChoice() == 0))
      {
        ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,i_13 = NULL,f_3 = NULL;
        i_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_13 = ATgetFirst((ATermList) t);
            e_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_13);
        c_13 = t;
        t = e_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_13), d_13);
        f_3 = t;
        t = SSLsetAnnotations(f_3, c_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_24;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_24, z_12);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_q_24;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm e_14 = NULL,g_14 = NULL,p_2 = NULL;
  e_14 = t;
  t = SSL_explode_term(e_14);
  if(match_cons(t, sym__2))
    {
      ATerm r_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_24 = ATgetArgument(t, 1);
        if(((ATgetType(s_24) == AT_LIST) && !(ATisEmpty(s_24))))
          {
            g_14 = ATgetFirst((ATermList) s_24);
            {
              ATerm t_24 = (ATerm) ATgetNext((ATermList) s_24);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(e_14);
  if(match_cons(t, sym__2))
    {
      ATerm u_24 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_24) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_24 = ATgetArgument(t, 1);
        if(((ATgetType(v_24) == AT_LIST) && !(ATisEmpty(v_24))))
          {
            ATerm w_24 = ATgetFirst((ATermList) v_24);
            ATerm x_24 = (ATerm) ATgetNext((ATermList) v_24);
            if(((ATgetType(x_24) == AT_LIST) && !(ATisEmpty(x_24))))
              {
                p_2 = ATgetFirst((ATermList) x_24);
                {
                  ATerm b_25 = (ATerm) ATgetNext((ATermList) x_24);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, p_2), g_14));
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm v_14 = NULL,w_14 = NULL;
  if(match_cons(t, sym__2))
    {
      v_14 = ATgetArgument(t, 0);
      w_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, w_14), v_14));
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = term_q_24;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL;
  if(match_cons(t, sym__2))
    {
      y_14 = ATgetArgument(t, 0);
      z_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_c_25, (ATerm) ATinsert(ATinsert(ATempty, z_14), y_14));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm p_15 = NULL,u_15 = NULL;
  if(match_cons(t, sym__2))
    {
      p_15 = ATgetArgument(t, 0);
      u_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, u_15), p_15));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = term_k_25;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL;
  if(match_cons(t, sym__2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_25, (ATerm) ATinsert(ATinsert(ATempty, x_15), w_15));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm j_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
  s_13 = t;
  if(match_cons(t, sym_Anno_2))
    {
      t_13 = ATgetArgument(t, 0);
      u_13 = ATgetArgument(t, 1);
      {
        ATerm x_13 = NULL;
        t = u_13;
        t = foldr_2_0(d_1, e_1, t);
        x_13 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, t_13, x_13);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          t_13 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, t_13, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              t_13 = ATgetArgument(t, 0);
              {
                ATerm u_2 = NULL;
                t = t_13;
                {
                  ATerm l_25 = t;
                  int n_25 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_p_25;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_q_25;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_r_25;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_t_25;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_v_25;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(n_25);
                    }
                  else
                    {
                      t = l_25;
                      {
                        ATerm w_2 = NULL;
                        t = SSL_explode_string(t_13);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm z_25 = ATgetFirst((ATermList) t);
                            if(((ATgetType(z_25) != AT_INT) || (ATgetInt((ATermInt) z_25) != 39)))
                              _fail(t);
                            {
                              ATerm a_26 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(a_26) == AT_LIST) && !(ATisEmpty(a_26))))
                                {
                                  w_2 = ATgetFirst((ATermList) a_26);
                                  {
                                    ATerm c_26 = (ATerm) ATgetNext((ATermList) a_26);
                                    if(((ATgetType(c_26) == AT_LIST) && !(ATisEmpty(c_26))))
                                      {
                                        ATerm i_26 = ATgetFirst((ATermList) c_26);
                                        if(((ATgetType(i_26) != AT_INT) || (ATgetInt((ATermInt) i_26) != 39)))
                                          _fail(t);
                                        {
                                          ATerm j_26 = (ATerm) ATgetNext((ATermList) c_26);
                                          if(((ATgetType(j_26) != AT_LIST) || !(ATisEmpty(j_26))))
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
              ATerm k_26 = t;
              int l_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      t_13 = ATgetArgument(t, 0);
                      {
                        ATerm m_26 = ATgetArgument(t, 1);
                      }
                      r_13 = ATgetArgument(t, 2);
                      j_13 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(l_26);
                  t = (ATerm) ATmakeAppl(sym_Con_3, t_13, r_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_13), (ATerm) ATempty));
                }
              else
                {
                  t = k_26;
                  {
                    ATerm n_26 = t;
                    int o_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            t_13 = ATgetArgument(t, 0);
                            {
                              ATerm r_26 = ATgetArgument(t, 1);
                            }
                            r_13 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(o_26);
                        t = (ATerm) ATmakeAppl(sym_Con_3, t_13, r_13, term_w_26);
                      }
                    else
                      {
                        t = n_26;
                        if(match_cons(t, sym_Con1_2))
                          {
                            t_13 = ATgetArgument(t, 0);
                            u_13 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, t_13, u_13, term_w_26);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                t_13 = ATgetArgument(t, 0);
                                u_13 = ATgetArgument(t, 1);
                                {
                                  static ATerm f_1 (ATerm t)
                                  {
                                    t = u_13;
                                    return(t);
                                  }
                                  t = t_13;
                                  t = foldr_2_0(f_1, g_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    t_13 = ATgetArgument(t, 0);
                                    t = t_13;
                                    t = foldr_2_0(h_1, i_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        t_13 = ATgetArgument(t, 0);
                                        t = t_13;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            o_13 = ATgetFirst((ATermList) t);
                                            p_13 = (ATerm) ATgetNext((ATermList) t);
                                            t = p_13;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm x_26 = t;
                                                int a_27 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = a_18(t_13, s_13, t);
                                                    LocalPopChoice(a_27);
                                                  }
                                                else
                                                  {
                                                    t = x_26;
                                                    t = o_13;
                                                  }
                                              }
                                            else
                                              {
                                                t = a_18(t_13, s_13, t);
                                              }
                                          }
                                        else
                                          {
                                            t = a_18(t_13, s_13, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            t_13 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, t_13));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                t_13 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, t_13));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    t_13 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, t_13));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        t_13 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, t_13));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            t_13 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_13), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                t_13 = ATgetArgument(t, 0);
                                                                u_13 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_13), u_13);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    t_13 = ATgetArgument(t, 0);
                                                                    u_13 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm j_1 (ATerm t)
                                                                      {
                                                                        t = u_13;
                                                                        return(t);
                                                                      }
                                                                      t = t_13;
                                                                      t = foldr_2_0(j_1, k_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        t_13 = ATgetArgument(t, 0);
                                                                        t = t_13;
                                                                        t = foldr_2_0(l_1, m_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            t_13 = ATgetArgument(t, 0);
                                                                            u_13 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_n_24, (ATerm) ATinsert(CheckATermList(u_13), t_13));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                t_13 = ATgetArgument(t, 0);
                                                                                t = t_13;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    o_13 = ATgetFirst((ATermList) t);
                                                                                    p_13 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = p_13;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm e_27 = t;
                                                                                        int h_27 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = f_18(t_13, s_13, t);
                                                                                            LocalPopChoice(h_27);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = e_27;
                                                                                            t = o_13;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = f_18(t_13, s_13, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = f_18(t_13, s_13, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_l_27;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        t_13 = ATgetArgument(t, 0);
                                                                                        u_13 = ATgetArgument(t, 1);
                                                                                        t = u_13;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            q_13 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_q_27, (ATerm) ATinsert(ATinsert(ATempty, q_13), t_13));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            t_13 = ATgetArgument(t, 0);
                                                                                            t = t_13;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                t_13 = ATgetArgument(t, 0);
                                                                                                u_13 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, t_13, u_13, term_f_20);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    t_13 = ATgetArgument(t, 0);
                                                                                                    u_13 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, t_13, u_13, term_f_20);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        t_13 = ATgetArgument(t, 0);
                                                                                                        u_13 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, t_13, (ATerm)ATempty, u_13);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            t_13 = ATgetArgument(t, 0);
                                                                                                            u_13 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, u_13, t_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                t_13 = ATgetArgument(t, 0);
                                                                                                                u_13 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, t_13, u_13, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    t_13 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, t_13, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        t_13 = ATgetArgument(t, 0);
                                                                                                                        u_13 = ATgetArgument(t, 1);
                                                                                                                        r_13 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, t_13, u_13, (ATerm)ATempty, r_13);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            t_13 = ATgetArgument(t, 0);
                                                                                                                            u_13 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, t_13, (ATerm)ATempty, (ATerm)ATempty, u_13);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                t_13 = ATgetArgument(t, 0);
                                                                                                                                u_13 = ATgetArgument(t, 1);
                                                                                                                                r_13 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, t_13, u_13, (ATerm)ATempty, r_13);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    t_13 = ATgetArgument(t, 0);
                                                                                                                                    u_13 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, t_13, (ATerm)ATempty, (ATerm)ATempty, u_13);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        t_13 = ATgetArgument(t, 0);
                                                                                                                                        u_13 = ATgetArgument(t, 1);
                                                                                                                                        r_13 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, t_13, u_13, (ATerm)ATempty, r_13);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            t_13 = ATgetArgument(t, 0);
                                                                                                                                            u_13 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, t_13, (ATerm)ATempty, (ATerm)ATempty, u_13);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm l_28 = ATgetArgument(t, 0);
                                                                                                                                                u_13 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, u_13);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL;
  i_18 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      j_18 = ATgetArgument(t, 0);
      h_18 = ATgetArgument(t, 1);
      {
        ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL,r_18 = NULL;
        t = i_18;
        t = new_0_0(t);
        m_18 = t;
        t = new_0_0(t);
        n_18 = t;
        t = new_0_0(t);
        o_18 = t;
        t = new_0_0(t);
        r_18 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, r_18), o_18), n_18), m_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, m_18), (ATerm) ATmakeAppl(sym_Var_1, o_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, j_18, (ATerm)ATmakeAppl(sym_Var_1, m_18), (ATerm) ATmakeAppl(sym_Var_1, n_18)), (ATerm) ATmakeAppl(sym_BAM_3, h_18, (ATerm)ATmakeAppl(sym_Var_1, o_18), (ATerm) ATmakeAppl(sym_Var_1, r_18)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_z_28, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_18)), (ATerm) ATmakeAppl(sym_Var_1, n_18))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          j_18 = ATgetArgument(t, 0);
          {
            ATerm s_18 = NULL,t_18 = NULL,z_18 = NULL,a_19 = NULL;
            t = i_18;
            t = new_0_0(t);
            z_18 = t;
            t = j_18;
            {
              static ATerm n_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((s_18 != NULL) && (s_18 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      s_18 = ATgetArgument(t, 0);
                    if(((t_18 != NULL) && (t_18 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      t_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, z_18);
                return(t);
              }
              t = oncetd_1_0(n_1, t);
            }
            a_19 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_18), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_28, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_18)), not_null(s_18))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_18)), (ATerm) ATmakeAppl(sym_Build_1, a_19))));
          }
        }
      else
        {
          ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              j_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_18;
          t = new_0_0(t);
          e_19 = t;
          t = new_0_0(t);
          f_19 = t;
          t = j_18;
          {
            static ATerm o_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((c_19 != NULL) && (c_19 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    c_19 = ATgetArgument(t, 0);
                  if(((d_19 != NULL) && (d_19 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    d_19 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, e_19);
              return(t);
            }
            t = oncetd_1_0(o_1, t);
          }
          g_19 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_19)), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_19))))), (ATerm)ATmakeAppl(sym_Var_1, e_19), (ATerm) ATmakeAppl(sym_Op_2, term_g_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_19)), not_null(c_19)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  i_19 = t;
  if(match_cons(t, sym_Match_1))
    {
      j_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm b_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL;
        t = i_19;
        t = new_0_0(t);
        p_19 = t;
        t = j_19;
        {
          static ATerm p_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((n_19 != NULL) && (n_19 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  n_19 = ATgetArgument(t, 0);
                if(((o_19 != NULL) && (o_19 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  o_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, p_19), n_19);
            return(t);
          }
          t = pat_td_1_0(p_1, t);
        }
        q_19 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_19), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_g_29, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_19))), (ATerm) ATmakeAppl(sym_Match_1, not_null(o_19))))));
        LocalPopChoice(d_29);
      }
    else
      {
        t = b_29;
        {
          ATerm i_29 = t;
          int j_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
              t = i_19;
              t = new_0_0(t);
              x_19 = t;
              t = j_19;
              {
                static ATerm q_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((w_19 != NULL) && (w_19 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        w_19 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, x_19);
                  return(t);
                }
                t = pat_td_1_0(q_1, t);
              }
              y_19 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_19), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, x_19)), not_null(w_19))));
              LocalPopChoice(j_29);
            }
          else
            {
              t = i_29;
              {
                ATerm a_20 = NULL,b_20 = NULL,c_20 = NULL,d_20 = NULL;
                t = i_19;
                t = new_0_0(t);
                c_20 = t;
                t = j_19;
                {
                  static ATerm r_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((b_20 != NULL) && (b_20 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          b_20 = ATgetArgument(t, 0);
                        if(((a_20 != NULL) && (a_20 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          a_20 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, c_20);
                    return(t);
                  }
                  t = pat_td_1_0(r_1, t);
                }
                d_20 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_20), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, c_20)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(a_20)), not_null(b_20)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm v_134 (ATerm), ATerm t)
{
  ATerm n_29 = t;
  int p_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_134(t);
      LocalPopChoice(p_29);
    }
  else
    {
      t = n_29;
      {
        ATerm y_25 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
        d_26 = t;
        if(match_cons(t, sym_Op_2))
          {
            e_26 = ATgetArgument(t, 0);
            f_26 = ATgetArgument(t, 1);
            {
              ATerm i_3 = NULL,n_3 = NULL,k_3 = NULL;
              t = SSLgetAnnotations(d_26);
              i_3 = t;
              t = f_26;
              {
                static ATerm s_1 (ATerm t)
                {
                  t = pat_td_1_0(v_134, t);
                  return(t);
                }
                t = fetch_1_0(s_1, t);
              }
              n_3 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, e_26, n_3);
              k_3 = t;
              t = SSLsetAnnotations(k_3, i_3);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                e_26 = ATgetArgument(t, 0);
                f_26 = ATgetArgument(t, 1);
                {
                  ATerm s_29 = t;
                  int u_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_4 = NULL,l_4 = NULL,m_3 = NULL;
                      t = SSLgetAnnotations(d_26);
                      c_4 = t;
                      t = f_26;
                      t = pat_td_1_0(v_134, t);
                      l_4 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, e_26, l_4);
                      m_3 = t;
                      t = SSLsetAnnotations(m_3, c_4);
                      LocalPopChoice(u_29);
                    }
                  else
                    {
                      t = s_29;
                      {
                        ATerm r_5 = NULL,f_6 = NULL,o_3 = NULL;
                        t = SSLgetAnnotations(d_26);
                        r_5 = t;
                        t = e_26;
                        t = pat_td_1_0(v_134, t);
                        f_6 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, f_6, f_26);
                        o_3 = t;
                        t = SSLsetAnnotations(o_3, r_5);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    e_26 = ATgetArgument(t, 0);
                    f_26 = ATgetArgument(t, 1);
                    y_25 = ATgetArgument(t, 2);
                    {
                      ATerm c_7 = NULL,i_7 = NULL,p_3 = NULL;
                      t = SSLgetAnnotations(d_26);
                      c_7 = t;
                      t = y_25;
                      {
                        static ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1_0(v_134, t);
                          return(t);
                        }
                        t = fetch_1_0(t_1, t);
                      }
                      i_7 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, e_26, f_26, i_7);
                      p_3 = t;
                      t = SSLsetAnnotations(p_3, c_7);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        e_26 = ATgetArgument(t, 0);
                        f_26 = ATgetArgument(t, 1);
                        y_25 = ATgetArgument(t, 2);
                        {
                          ATerm f_8 = NULL,r_8 = NULL,q_3 = NULL;
                          t = SSLgetAnnotations(d_26);
                          f_8 = t;
                          t = y_25;
                          {
                            static ATerm u_1 (ATerm t)
                            {
                              t = pat_td_1_0(v_134, t);
                              return(t);
                            }
                            t = fetch_1_0(u_1, t);
                          }
                          r_8 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, e_26, f_26, r_8);
                          q_3 = t;
                          t = SSLsetAnnotations(q_3, f_8);
                        }
                      }
                    else
                      {
                        ATerm l_9 = NULL,o_9 = NULL,w_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            e_26 = ATgetArgument(t, 0);
                            f_26 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(d_26);
                        l_9 = t;
                        t = f_26;
                        t = pat_td_1_0(v_134, t);
                        o_9 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, e_26, o_9);
                        w_3 = t;
                        t = SSLsetAnnotations(w_3, l_9);
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
  ATerm s_26 = NULL,t_26 = NULL;
  s_26 = t;
  if(match_cons(t, sym_Build_1))
    {
      t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_29 = t;
    int a_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_26 = NULL,z_26 = NULL,b_27 = NULL,c_27 = NULL;
        t = s_26;
        t = new_0_0(t);
        b_27 = t;
        t = t_26;
        {
          static ATerm v_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((y_26 != NULL) && (y_26 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_26 = ATgetArgument(t, 0);
                if(((z_26 != NULL) && (z_26 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  z_26 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, b_27);
            return(t);
          }
          t = pat_td_1_0(v_1, t);
        }
        c_27 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_30, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_26)), not_null(y_26))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_27)))), (ATerm) ATmakeAppl(sym_Build_1, c_27)));
        LocalPopChoice(a_30);
      }
    else
      {
        t = y_29;
        {
          ATerm f_30 = t;
          int h_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_27 = NULL,f_27 = NULL,g_27 = NULL;
              t = s_26;
              t = new_0_0(t);
              f_27 = t;
              t = t_26;
              {
                static ATerm w_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((d_27 != NULL) && (d_27 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        d_27 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, f_27);
                  return(t);
                }
                t = pat_td_1_0(w_1, t);
              }
              g_27 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_27), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_27)))), (ATerm) ATmakeAppl(sym_Build_1, g_27)));
              LocalPopChoice(h_30);
            }
          else
            {
              t = f_30;
              {
                ATerm j_27 = NULL,k_27 = NULL,m_27 = NULL,r_27 = NULL;
                t = s_26;
                t = new_0_0(t);
                m_27 = t;
                t = t_26;
                {
                  static ATerm x_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((j_27 != NULL) && (j_27 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          j_27 = ATgetArgument(t, 0);
                        if(((k_27 != NULL) && (k_27 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_27 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, m_27);
                    return(t);
                  }
                  t = pat_td_1_0(x_1, t);
                }
                r_27 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_27), not_null(k_27), (ATerm) ATmakeAppl(sym_Var_1, m_27))), (ATerm) ATmakeAppl(sym_Build_1, r_27)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm i_30 = t;
  if((PushChoice() == 0))
    {
      ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,r_7 = NULL;
      e_28 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_28);
      c_28 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_28);
      r_7 = t;
      t = SSLsetAnnotations(r_7, c_28);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_30;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_30;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_28 = ATgetFirst((ATermList) t);
      g_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_28, g_28);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,o_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_30 = ATgetArgument(t, 0);
      if(match_cons(s_30, sym__2))
        {
          h_28 = ATgetArgument(s_30, 0);
          i_28 = ATgetArgument(s_30, 1);
        }
      else
        _fail(t);
      {
        ATerm u_30 = ATgetArgument(t, 1);
        if(match_cons(u_30, sym__2))
          {
            j_28 = ATgetArgument(u_30, 0);
            o_28 = ATgetArgument(u_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_28), h_28), (ATerm) ATinsert(CheckATermList(o_28), i_28));
  return(t);
}
static ATerm d_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_30;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_28 = ATgetFirst((ATermList) t);
      q_28 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_28, q_28);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,y_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_30 = ATgetArgument(t, 0);
      if(match_cons(w_30, sym__2))
        {
          u_28 = ATgetArgument(w_30, 0);
          v_28 = ATgetArgument(w_30, 1);
        }
      else
        _fail(t);
      {
        ATerm x_30 = ATgetArgument(t, 1);
        if(match_cons(x_30, sym__2))
          {
            w_28 = ATgetArgument(x_30, 0);
            y_28 = ATgetArgument(x_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_28), u_28), (ATerm) ATinsert(CheckATermList(y_28), v_28));
  return(t);
}
static ATerm g_10 (ATerm w_66, ATerm x_66, ATerm y_66, ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,t_7 = NULL;
  t = y_66;
  t = fetch_1_0(y_1, t);
  t = y_66;
  t = genzip_4_0(z_1, a_2, b_2, LiftPrimArg_0_0, t);
  b_28 = t;
  if(match_cons(t, sym__2))
    {
      x_27 = ATgetArgument(t, 0);
      y_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_28);
  w_27 = t;
  t = x_27;
  t = concat_0_0(t);
  z_27 = t;
  t = y_27;
  t = genzip_4_0(d_2, h_2, i_2, _id, t);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_27, a_28);
  t_7 = t;
  t = SSLsetAnnotations(t_7, w_27);
  if(match_cons(t, sym__2))
    {
      t_27 = ATgetArgument(t, 0);
      {
        ATerm z_30 = ATgetArgument(t, 1);
        if(match_cons(z_30, sym__2))
          {
            u_27 = ATgetArgument(z_30, 0);
            v_27 = ATgetArgument(z_30, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_27, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_27), (ATerm) ATmakeAppl(sym_CallT_3, w_66, x_66, v_27)));
  return(t);
}
static ATerm q_29 (ATerm c_29, ATerm t)
{
  ATerm e_29 = NULL;
  t = c_29;
  {
    ATerm c_31 = t;
    if((PushChoice() == 0))
      {
        ATerm f_29 = NULL,k_29 = NULL,l_29 = NULL,n_8 = NULL;
        l_29 = t;
        if(match_cons(t, sym_Var_1))
          {
            k_29 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_29);
        f_29 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, k_29);
        n_8 = t;
        t = SSLsetAnnotations(n_8, f_29);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_31;
      }
  }
  t = new_0_0(t);
  e_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, e_29), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_29), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_29)))), (ATerm) ATmakeAppl(sym_Var_1, e_29)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm m_29 = NULL,o_29 = NULL;
  m_29 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_29 = ATgetArgument(t, 0);
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_29(m_29, t);
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_f_20, (ATerm) ATmakeAppl(sym_Var_1, o_29)));
          }
      }
    }
  else
    {
      t = q_29(m_29, t);
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm g_31 = t;
  if((PushChoice() == 0))
    {
      ATerm o_10 = NULL,q_10 = NULL,r_10 = NULL,u_10 = NULL;
      r_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          q_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_10);
      o_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, q_10);
      u_10 = t;
      t = SSLsetAnnotations(u_10, o_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_31;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_30;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm s_10 = NULL,v_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_10 = ATgetFirst((ATermList) t);
      v_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_10, v_10);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,e_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      if(match_cons(k_31, sym__2))
        {
          y_10 = ATgetArgument(k_31, 0);
          z_10 = ATgetArgument(k_31, 1);
        }
      else
        _fail(t);
      {
        ATerm m_31 = ATgetArgument(t, 1);
        if(match_cons(m_31, sym__2))
          {
            a_11 = ATgetArgument(m_31, 0);
            e_11 = ATgetArgument(m_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_11), y_10), (ATerm) ATinsert(CheckATermList(e_11), z_10));
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_30;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm h_11 = NULL,j_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_11 = ATgetFirst((ATermList) t);
      j_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_11, j_11);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm l_11 = NULL,p_11 = NULL,q_11 = NULL,b_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_31 = ATgetArgument(t, 0);
      if(match_cons(o_31, sym__2))
        {
          l_11 = ATgetArgument(o_31, 0);
          p_11 = ATgetArgument(o_31, 1);
        }
      else
        _fail(t);
      {
        ATerm q_31 = ATgetArgument(t, 1);
        if(match_cons(q_31, sym__2))
          {
            q_11 = ATgetArgument(q_31, 0);
            b_12 = ATgetArgument(q_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_11), l_11), (ATerm) ATinsert(CheckATermList(b_12), p_11));
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm v_31 = t;
  if((PushChoice() == 0))
    {
      ATerm d_14 = NULL,f_14 = NULL,k_14 = NULL,f_11 = NULL;
      k_14 = t;
      if(match_cons(t, sym_Var_1))
        {
          f_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_14);
      d_14 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, f_14);
      f_11 = t;
      t = SSLsetAnnotations(f_11, d_14);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_31;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_30;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_14 = ATgetFirst((ATermList) t);
      p_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_14, p_14);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,j_15 = NULL,k_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_31 = ATgetArgument(t, 0);
      if(match_cons(w_31, sym__2))
        {
          g_15 = ATgetArgument(w_31, 0);
          h_15 = ATgetArgument(w_31, 1);
        }
      else
        _fail(t);
      {
        ATerm x_31 = ATgetArgument(t, 1);
        if(match_cons(x_31, sym__2))
          {
            j_15 = ATgetArgument(x_31, 0);
            k_15 = ATgetArgument(x_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_15), g_15), (ATerm) ATinsert(CheckATermList(k_15), h_15));
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_30;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm l_15 = NULL,q_15 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_15 = ATgetFirst((ATermList) t);
      q_15 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_15, q_15);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL,d_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_31 = ATgetArgument(t, 0);
      if(match_cons(y_31, sym__2))
        {
          r_15 = ATgetArgument(y_31, 0);
          s_15 = ATgetArgument(y_31, 1);
        }
      else
        _fail(t);
      {
        ATerm z_31 = ATgetArgument(t, 1);
        if(match_cons(z_31, sym__2))
          {
            t_15 = ATgetArgument(z_31, 0);
            d_16 = ATgetArgument(z_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_15), r_15), (ATerm) ATinsert(CheckATermList(d_16), s_15));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm b_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  d_35 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      e_35 = ATgetArgument(t, 0);
      f_35 = ATgetArgument(t, 1);
      b_35 = ATgetArgument(t, 2);
      {
        ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,f_10 = NULL,j_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,x_10 = NULL;
        t = b_35;
        t = fetch_1_0(j_2, t);
        t = b_35;
        t = genzip_4_0(k_2, l_2, m_2, LiftPrimArg_0_0, t);
        n_10 = t;
        if(match_cons(t, sym__2))
          {
            f_10 = ATgetArgument(t, 0);
            j_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_10);
        d_10 = t;
        t = f_10;
        t = concat_0_0(t);
        l_10 = t;
        t = j_10;
        t = genzip_4_0(n_2, o_2, q_2, _id, t);
        m_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_10, m_10);
        x_10 = t;
        t = SSLsetAnnotations(x_10, d_10);
        if(match_cons(t, sym__2))
          {
            a_10 = ATgetArgument(t, 0);
            {
              ATerm a_32 = ATgetArgument(t, 1);
              if(match_cons(a_32, sym__2))
                {
                  b_10 = ATgetArgument(a_32, 0);
                  c_10 = ATgetArgument(a_32, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_10), (ATerm) ATmakeAppl(sym_PrimT_3, e_35, f_35, c_10)));
      }
    }
  else
    {
      ATerm h_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,y_13 = NULL,z_13 = NULL,b_14 = NULL,c_14 = NULL,g_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          e_35 = ATgetArgument(t, 0);
          f_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = f_35;
      t = fetch_1_0(r_2, t);
      t = f_35;
      t = genzip_4_0(s_2, t_2, v_2, LiftPrimArg_0_0, t);
      c_14 = t;
      if(match_cons(t, sym__2))
        {
          n_13 = ATgetArgument(t, 0);
          y_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_14);
      m_13 = t;
      t = n_13;
      t = concat_0_0(t);
      z_13 = t;
      t = y_13;
      t = genzip_4_0(x_2, y_2, z_2, _id, t);
      b_14 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_13, b_14);
      g_11 = t;
      t = SSLsetAnnotations(g_11, m_13);
      if(match_cons(t, sym__2))
        {
          h_13 = ATgetArgument(t, 0);
          {
            ATerm b_32 = ATgetArgument(t, 1);
            if(match_cons(b_32, sym__2))
              {
                k_13 = ATgetArgument(b_32, 0);
                l_13 = ATgetArgument(b_32, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, h_13, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_13), (ATerm) ATmakeAppl(sym_PrimT_3, e_35, (ATerm)ATempty, l_13)));
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm c_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL;
  j_37 = t;
  if(match_cons(t, sym_Con_3))
    {
      c_37 = ATgetArgument(t, 0);
      h_37 = ATgetArgument(t, 1);
      i_37 = ATgetArgument(t, 2);
      {
        ATerm y_16 = NULL,c_21 = NULL;
        t = SSLgetAnnotations(j_37);
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, c_37, h_37, i_37);
        c_21 = t;
        t = SSLsetAnnotations(c_21, y_16);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = j_37;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm c_32 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(a_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_32;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL;
  o_38 = t;
  if(match_cons(t, sym_Con_3))
    {
      p_38 = ATgetArgument(t, 0);
      q_38 = ATgetArgument(t, 1);
      n_38 = ATgetArgument(t, 2);
      {
        ATerm d_18 = NULL,g_21 = NULL;
        t = SSLgetAnnotations(o_38);
        d_18 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, p_38, q_38, n_38);
        g_21 = t;
        t = SSLsetAnnotations(g_21, d_18);
      }
    }
  else
    {
      ATerm r_19 = NULL,i_21 = NULL;
      if(match_cons(t, sym_App_2))
        {
          p_38 = ATgetArgument(t, 0);
          q_38 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_38);
      r_19 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, p_38, q_38);
      i_21 = t;
      t = SSLsetAnnotations(i_21, r_19);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm e_32 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(b_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_32;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm d_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      d_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_39;
  if(match_cons(t, sym_StratRule_3))
    {
      g_39 = ATgetArgument(t, 0);
      h_39 = ATgetArgument(t, 1);
      i_39 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, h_39), (ATerm) ATmakeAppl(sym_Where_1, i_39)), g_39));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          g_39 = ATgetArgument(t, 0);
          h_39 = ATgetArgument(t, 1);
          i_39 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = g_39;
      t = pureterm_0_0(t);
      t = h_39;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, h_39)), (ATerm) ATmakeAppl(sym_Where_1, i_39)), (ATerm) ATmakeAppl(sym_Match_1, g_39)));
    }
  return(t);
}
static ATerm h_10 (ATerm j_62, ATerm k_62, ATerm l_62, ATerm t)
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
          ATerm f_32 = ATgetArgument(t, 0);
          if(match_cons(f_32, sym_Var_1))
            {
              if(((b_40 != NULL) && (b_40 != ATgetArgument(f_32, 0))))
                _fail(ATgetArgument(f_32, 0));
              else
                b_40 = ATgetArgument(f_32, 0);
            }
          else
            _fail(t);
          if(((z_39 != NULL) && (z_39 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            z_39 = ATgetArgument(t, 1);
          {
            ATerm g_32 = ATgetArgument(t, 2);
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
          ATerm h_32 = ATgetArgument(t, 0);
          if(match_cons(h_32, sym_Var_1))
            {
              if(((b_40 != NULL) && (b_40 != ATgetArgument(h_32, 0))))
                _fail(ATgetArgument(h_32, 0));
              else
                b_40 = ATgetArgument(h_32, 0);
            }
          else
            _fail(t);
          if(((a_40 != NULL) && (a_40 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            a_40 = ATgetArgument(t, 1);
          {
            ATerm i_32 = ATgetArgument(t, 2);
            if(match_cons(i_32, sym_CallT_3))
              {
                if(((y_39 != NULL) && (y_39 != ATgetArgument(i_32, 0))))
                  _fail(ATgetArgument(i_32, 0));
                else
                  y_39 = ATgetArgument(i_32, 0);
                {
                  ATerm j_32 = ATgetArgument(i_32, 1);
                  if(((ATgetType(j_32) != AT_LIST) || !(ATisEmpty(j_32))))
                    _fail(t);
                }
                {
                  ATerm k_32 = ATgetArgument(i_32, 2);
                  if(((ATgetType(k_32) != AT_LIST) || !(ATisEmpty(k_32))))
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
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_40), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, d_40, k_40, (ATerm) ATmakeAppl(sym_Seq_2, l_62, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(y_39), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(z_39), not_null(a_40), term_f_20))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(b_40)), (ATerm) ATmakeAppl(sym_Var_1, c_40))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm l_32 = t;
  int m_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_32 = t;
      int o_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_41 = NULL,k_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
          n_41 = t;
          if(match_cons(t, sym_SRule_1))
            {
              o_41 = ATgetArgument(t, 0);
              t = o_41;
              if(match_cons(t, sym_Rule_3))
                {
                  g_41 = ATgetArgument(t, 0);
                  k_41 = ATgetArgument(t, 1);
                  m_41 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = n_41;
              t = h_10(g_41, k_41, m_41, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm k_20 = NULL,n_20 = NULL,p_21 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  o_41 = ATgetArgument(t, 0);
                  p_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_41);
              k_20 = t;
              t = p_41;
              t = desugarRule_0_0(t);
              n_20 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, o_41, n_20);
              p_21 = t;
              t = SSLsetAnnotations(p_21, k_20);
            }
          LocalPopChoice(o_32);
        }
      else
        {
          t = n_32;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(m_32);
    }
  else
    {
      t = l_32;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm q_32 = t;
  int r_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(r_32);
    }
  else
    {
      t = q_32;
    }
  t = repeat_2_0(j_3, _id, t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm s_32 = t;
  int t_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(t_32);
    }
  else
    {
      t = s_32;
      {
        ATerm u_32 = t;
        int v_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_42 = NULL,e_43 = NULL,j_43 = NULL,k_43 = NULL;
            x_42 = t;
            if(match_cons(t, sym_CallT_3))
              {
                e_43 = ATgetArgument(t, 0);
                j_43 = ATgetArgument(t, 1);
                k_43 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = x_42;
            t = g_10(e_43, j_43, k_43, t);
            LocalPopChoice(v_32);
          }
        else
          {
            t = u_32;
            {
              ATerm x_32 = t;
              int y_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
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
                        t = Bapp_0_0(t);
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
                              ATerm d_33 = t;
                              int e_33 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      p_43 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = p_43;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      q_43 = ATgetArgument(t, 0);
                                      t = q_43;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          q_43 = ATgetArgument(t, 0);
                                          r_43 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, q_43, r_43);
                                    }
                                  LocalPopChoice(e_33);
                                }
                              else
                                {
                                  t = d_33;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(c_33);
                            }
                          else
                            {
                              t = b_33;
                              {
                                ATerm f_33 = t;
                                int g_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(g_33);
                                  }
                                else
                                  {
                                    t = f_33;
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
  ATerm b_46 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_46 = ATgetArgument(t, 0);
      t = b_46;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_46 = ATgetArgument(t, 0);
          {
            ATerm h_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = b_46;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_46), (ATerm) ATempty);
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
            ATerm i_33 = ATgetArgument(t, 1);
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
  ATerm u_46 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      u_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, u_46);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm j_33 = t;
  int k_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_33);
    }
  else
    {
      t = j_33;
      {
        ATerm l_33 = t;
        int m_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_33);
          }
        else
          {
            t = l_33;
            {
              ATerm o_33 = t;
              int p_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_46 = NULL,z_46 = NULL,a_47 = NULL,e_47 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      w_46 = ATgetArgument(t, 0);
                      z_46 = ATgetArgument(t, 1);
                      a_47 = ATgetArgument(t, 2);
                      e_47 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_47;
                  t = map_1_0(u_3, t);
                  LocalPopChoice(p_33);
                }
              else
                {
                  t = o_33;
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
  ATerm q_33 = t;
  int r_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_47 = ATgetArgument(t, 0);
          {
            ATerm s_33 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_33);
      t = o_47;
    }
  else
    {
      t = q_33;
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
static ATerm v_3 (ATerm t)
{
  ATerm v_47 = NULL;
  v_47 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, v_47);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm w_47 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_47);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm t_33 = t;
  int u_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(u_33);
    }
  else
    {
      t = t_33;
      {
        ATerm v_33 = t;
        int x_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(x_33);
          }
        else
          {
            t = v_33;
            {
              ATerm y_33 = t;
              int z_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL,b_48 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      y_47 = ATgetArgument(t, 0);
                      z_47 = ATgetArgument(t, 1);
                      a_48 = ATgetArgument(t, 2);
                      b_48 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_48;
                  t = map_1_0(z_3, t);
                  LocalPopChoice(z_33);
                }
              else
                {
                  t = y_33;
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
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_48 = ATgetArgument(t, 0);
          {
            ATerm c_34 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_34);
      t = q_48;
    }
  else
    {
      t = a_34;
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
  ATerm w_48 = NULL;
  w_48 = t;
  {
    ATerm f_34 = t;
    int h_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_49 = NULL,t_20 = NULL,v_20 = NULL,r_21 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            i_49 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_48);
        t_20 = t;
        t = i_49;
        t = ContextVar_0_0(t);
        v_20 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, v_20);
        r_21 = t;
        t = SSLsetAnnotations(r_21, t_20);
        LocalPopChoice(h_34);
      }
    else
      {
        t = f_34;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, w_48);
  return(t);
}
static ATerm i_10 (ATerm a_136 (ATerm), ATerm m_75, ATerm j_75, ATerm k_75, ATerm t_75, ATerm x_75, ATerm y_75, ATerm t)
{
  ATerm y_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL,e_45 = NULL,f_45 = NULL,h_45 = NULL,j_45 = NULL,k_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,u_45 = NULL,v_45 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_75, term_v_21);
  {
    ATerm i_34 = t;
    if((PushChoice() == 0))
      {
        ATerm w_45 = NULL;
        if(match_cons(t, sym__2))
          {
            w_45 = ATgetArgument(t, 0);
            if((w_45 != ATgetArgument(t, 1)))
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
        t = i_34;
      }
  }
  t = term_j_34;
  v_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_34, m_75);
  t = x_11(v_45, m_75, t);
  y_44 = t;
  t = term_k_34;
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_34, m_75);
  t = x_11(u_45, m_75, t);
  a_45 = t;
  t = new_0_0(t);
  b_45 = t;
  t = j_75;
  t = map_1_0(l_3, t);
  c_45 = t;
  t = k_75;
  t = map_1_0(r_3, t);
  e_45 = t;
  t = new_0_0(t);
  f_45 = t;
  t = t_75;
  t = dummify_0_0(t);
  j_45 = t;
  {
    ATerm l_34 = t;
    int m_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_45;
        if((t_75 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, f_45);
        LocalPopChoice(m_34);
      }
    else
      {
        t = l_34;
        t = j_45;
      }
  }
  h_45 = t;
  t = j_45;
  t = free_vars_3_0(s_3, t_3, tboundin_3_0, t);
  t = map_1_0(v_3, t);
  p_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_75, y_75);
  t = free_vars_3_0(x_3, y_3, tboundin_3_0, t);
  t = filter_1_0(a_4, t);
  k_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_45, p_45);
  t = diff_0_0(t);
  q_45 = t;
  t = new_0_0(t);
  r_45 = t;
  t = m_75;
  t = a_136(t);
  s_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BA_2, s_45, (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_22, (ATerm) ATinsert(CheckATermList(q_45), (ATerm) ATmakeAppl(sym_Str_1, r_45)))), j_45)))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_RDefT_4, a_45, j_75, k_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_22, (ATerm) ATinsert(CheckATermList(q_45), (ATerm) ATmakeAppl(sym_Str_1, r_45)))), t_75)), x_75, (ATerm) ATmakeAppl(sym_Seq_2, term_y_34, y_75)))), (ATerm) ATmakeAppl(sym_RDefT_4, y_44, j_75, k_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_45), t_75), (ATerm)ATmakeAppl(sym_Var_1, b_45), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_a_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_75)))), h_45), (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_Call_2, term_q_34, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_45), c_45, e_45), (ATerm) ATmakeAppl(sym_Tuple_1, (ATerm) ATinsert(ATinsert(ATempty, term_u_34), (ATerm) ATmakeAppl(sym_Var_1, f_45)))))), (ATerm) ATmakeAppl(sym_Var_1, b_45)))))), (ATerm) ATmakeAppl(sym_RDefT_4, m_75, j_75, k_75, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_45), t_75), x_75, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_AM_2, (ATerm)ATmakeAppl(sym_BA_2, (ATerm)ATmakeAppl(sym_Call_2, term_a_23, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_75)))), h_45), (ATerm) ATmakeAppl(sym_ListTail_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Op_2, term_i_22, (ATerm) ATinsert(CheckATermList(q_45), (ATerm) ATmakeAppl(sym_Str_1, r_45)))), term_n_34))), y_75)))));
  t = desugar_0_0(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm z_34 = t;
  int a_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,d_22 = NULL,e_22 = NULL;
      l_21 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          m_21 = ATgetArgument(t, 0);
          n_21 = ATgetArgument(t, 1);
          y_21 = ATgetArgument(t, 2);
          z_21 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = z_21;
      if(match_cons(t, sym_Rule_3))
        {
          a_22 = ATgetArgument(t, 0);
          d_22 = ATgetArgument(t, 1);
          e_22 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = l_21;
      t = i_10(d_4, m_21, n_21, y_21, a_22, d_22, e_22, t);
      LocalPopChoice(a_35);
    }
  else
    {
      t = z_34;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(e_4, t);
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm l_22 = NULL;
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, l_22))));
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm m_22 = NULL;
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, m_22))));
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_30;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_22 = ATgetFirst((ATermList) t);
      o_22 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_22, o_22);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_35 = ATgetArgument(t, 0);
      if(match_cons(k_35, sym__2))
        {
          p_22 = ATgetArgument(k_35, 0);
          q_22 = ATgetArgument(k_35, 1);
        }
      else
        _fail(t);
      {
        ATerm m_35 = ATgetArgument(t, 1);
        if(match_cons(m_35, sym__2))
          {
            r_22 = ATgetArgument(m_35, 0);
            s_22 = ATgetArgument(m_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_22), p_22), (ATerm) ATinsert(CheckATermList(s_22), q_22));
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm n_35 = t;
  int o_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_23 = NULL,s_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL,y_23 = NULL,c_24 = NULL,h_24 = NULL;
      r_23 = t;
      if(match_cons(t, sym_RDefT_4))
        {
          s_23 = ATgetArgument(t, 0);
          v_23 = ATgetArgument(t, 1);
          w_23 = ATgetArgument(t, 2);
          x_23 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = x_23;
      if(match_cons(t, sym_Rule_3))
        {
          y_23 = ATgetArgument(t, 0);
          c_24 = ATgetArgument(t, 1);
          h_24 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = r_23;
      t = i_10(p_4, s_23, v_23, w_23, y_23, c_24, h_24, t);
      LocalPopChoice(o_35);
    }
  else
    {
      t = n_35;
      t = ExtendSplitDynamicRuleUndefined_old_1_0(r_4, t);
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm y_24 = NULL;
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, y_24))));
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, z_24))));
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_30;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm a_25 = NULL,d_25 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_25 = ATgetFirst((ATermList) t);
      d_25 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_25, d_25);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_35 = ATgetArgument(t, 0);
      if(match_cons(u_35, sym__2))
        {
          f_25 = ATgetArgument(u_35, 0);
          g_25 = ATgetArgument(u_35, 1);
        }
      else
        _fail(t);
      {
        ATerm v_35 = ATgetArgument(t, 1);
        if(match_cons(v_35, sym__2))
          {
            h_25 = ATgetArgument(v_35, 0);
            i_25 = ATgetArgument(v_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_25), f_25), (ATerm) ATinsert(CheckATermList(i_25), g_25));
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(x_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm v_55 = NULL;
  v_55 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_35, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, v_55))));
  return(t);
}
static ATerm y_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_30;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm w_55 = NULL,x_55 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_55 = ATgetFirst((ATermList) t);
      x_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_55, x_55);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm z_55 = NULL,a_56 = NULL,i_56 = NULL,j_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_35 = ATgetArgument(t, 0);
      if(match_cons(y_35, sym__2))
        {
          z_55 = ATgetArgument(y_35, 0);
          a_56 = ATgetArgument(y_35, 1);
        }
      else
        _fail(t);
      {
        ATerm z_35 = ATgetArgument(t, 1);
        if(match_cons(z_35, sym__2))
          {
            i_56 = ATgetArgument(z_35, 0);
            j_56 = ATgetArgument(z_35, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_56), z_55), (ATerm) ATinsert(CheckATermList(j_56), a_56));
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = SplitDynamicRule_old_1_0(l_5, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm q_56 = NULL;
  q_56 = t;
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_36, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, q_56))));
  return(t);
}
static ATerm m_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_30;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_56 = ATgetFirst((ATermList) t);
      s_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_56, s_56);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,y_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_36 = ATgetArgument(t, 0);
      if(match_cons(d_36, sym__2))
        {
          t_56 = ATgetArgument(d_36, 0);
          u_56 = ATgetArgument(d_36, 1);
        }
      else
        _fail(t);
      {
        ATerm e_36 = ATgetArgument(t, 1);
        if(match_cons(e_36, sym__2))
          {
            v_56 = ATgetArgument(e_36, 0);
            y_56 = ATgetArgument(e_36, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_56), t_56), (ATerm) ATinsert(CheckATermList(y_56), u_56));
  return(t);
}
ATerm split_dynamic_rules_old_0_0 (ATerm t)
{
  ATerm q_55 = NULL,r_55 = NULL;
  q_55 = t;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      r_55 = ATgetArgument(t, 0);
      {
        ATerm b_21 = NULL,d_21 = NULL,f_21 = NULL,h_21 = NULL,k_21 = NULL,t_21 = NULL;
        t = r_55;
        t = map_1_0(b_4, t);
        t = genzip_4_0(f_4, i_4, n_4, _id, t);
        k_21 = t;
        if(match_cons(t, sym__2))
          {
            d_21 = ATgetArgument(t, 0);
            f_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_21);
        b_21 = t;
        t = f_21;
        t = concat_0_0(t);
        h_21 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_21, h_21);
        t_21 = t;
        t = SSLsetAnnotations(t_21, b_21);
      }
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          r_55 = ATgetArgument(t, 0);
          {
            ATerm l_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL,u_21 = NULL;
            t = r_55;
            t = map_1_0(o_4, t);
            t = genzip_4_0(t_4, u_4, v_4, _id, t);
            q_23 = t;
            if(match_cons(t, sym__2))
              {
                n_23 = ATgetArgument(t, 0);
                o_23 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = SSLgetAnnotations(q_23);
            l_23 = t;
            t = o_23;
            t = concat_0_0(t);
            p_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, n_23, p_23);
            u_21 = t;
            t = SSLsetAnnotations(u_21, l_23);
          }
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              r_55 = ATgetArgument(t, 0);
              t = r_55;
              t = map_1_0(w_4, t);
              t = genzip_4_0(y_4, c_5, d_5, _id, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  r_55 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_55;
              t = map_1_0(k_5, t);
              t = genzip_4_0(m_5, o_5, u_5, _id, t);
            }
        }
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_f_36;
  return(t);
}
ATerm split_dynamic_rule_old_1_0 (ATerm c_136 (ATerm), ATerm t)
{
  static ATerm o_57 (ATerm t)
  {
    static ATerm v_5 (ATerm t)
    {
      ATerm g_36 = t;
      int i_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_136(t);
          LocalPopChoice(i_36);
        }
      else
        {
          t = g_36;
          {
            ATerm j_57 = NULL,k_57 = NULL,n_57 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                j_57 = ATgetArgument(t, 0);
                k_57 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, j_57, k_57);
            {
              static ATerm x_5 (ATerm t)
              {
                t = j_57;
                t = DeclareContextVars_0_0(t);
                t = k_57;
                t = o_57(t);
                if(((n_57 != NULL) && (n_57 != t)))
                  _fail(t);
                else
                  n_57 = t;
                return(t);
              }
              t = scope_2_0(w_5, x_5, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, j_57, not_null(n_57));
          }
        }
      return(t);
    }
    t = oncetd_1_0(v_5, t);
    return(t);
  }
  t = o_57(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = term_f_36;
  return(t);
}
static ATerm k_10 (ATerm m_76, ATerm l_76, ATerm t)
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
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
            if(((s_57 != NULL) && (s_57 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              s_57 = ATgetArgument(t, 0);
            if(((r_57 != NULL) && (r_57 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              r_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, s_57);
        return(t);
      }
      t = split_dynamic_rule_old_1_0(a_6, t);
    }
    if(((t_57 != NULL) && (t_57 != t)))
      _fail(t);
    else
      t_57 = t;
    return(t);
  }
  t = scope_2_0(y_5, z_5, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(r_57)), not_null(t_57)), l_76);
  t = conc_0_0(t);
  return(t);
}
ATerm DefDynamicRuleScope_0_0 (ATerm t)
{
  ATerm c_58 = NULL,j_58 = NULL,w_58 = NULL,x_58 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      w_58 = ATgetArgument(t, 0);
      x_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_58;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_58 = ATgetFirst((ATermList) t);
      j_58 = (ATerm) ATgetNext((ATermList) t);
      t = (ATerm) ATmakeAppl(sym_Call_2, term_k_36, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, j_58, x_58)), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Str_1, c_58))));
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_58;
    }
  return(t);
}
static ATerm b_60 (ATerm i_59, ATerm t)
{
  t = SSL_is_string(i_59);
  return(t);
}
static ATerm c_60 (ATerm q_59, ATerm t)
{
  ATerm r_59 = NULL,t_59 = NULL,u_59 = NULL;
  t = term_m_36;
  t_59 = t;
  t = (ATerm) ATinsert(ATempty, term_n_36);
  u_59 = t;
  t = SSL_printnl(t_59, u_59);
  t = q_59;
  t = debug_1_0(c_6, t);
  t = term_o_36;
  r_59 = t;
  t = SSL_exit(r_59);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_p_36;
  return(t);
}
ATerm Downgrade_ScopeId_0_0 (ATerm t)
{
  ATerm v_59 = NULL,y_59 = NULL;
  y_59 = t;
  if(match_cons(t, sym_DynRuleScopeId_1))
    {
      v_59 = ATgetArgument(t, 0);
      {
        ATerm q_36 = t;
        int s_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_60(y_59, t);
            LocalPopChoice(s_36);
          }
        else
          {
            t = q_36;
            t = v_59;
          }
      }
    }
  else
    {
      ATerm t_36 = t;
      int v_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_60(y_59, t);
          LocalPopChoice(v_36);
        }
      else
        {
          t = t_36;
          t = c_60(y_59, t);
        }
    }
  return(t);
}
ATerm Downgrade_DynRuleDef_0_0 (ATerm t)
{
  ATerm t_60 = NULL,v_60 = NULL,y_60 = NULL,z_60 = NULL,e_61 = NULL,k_61 = NULL,l_61 = NULL;
  if(match_cons(t, sym_UndefineDynRule_3))
    {
      v_60 = ATgetArgument(t, 0);
      l_61 = ATgetArgument(t, 1);
      t_60 = ATgetArgument(t, 2);
      t = v_60;
      if(match_cons(t, sym_DynRuleId_1))
        {
          y_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_60;
      if(match_cons(t, sym_RDecT_3))
        {
          z_60 = ATgetArgument(t, 0);
          e_61 = ATgetArgument(t, 1);
          k_61 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_RDefT_4, z_60, e_61, k_61, (ATerm) ATmakeAppl(sym_Rule_3, l_61, term_v_21, t_60));
    }
  else
    {
      if(match_cons(t, sym_UndefineDynRuleNoCond_2))
        {
          v_60 = ATgetArgument(t, 0);
          l_61 = ATgetArgument(t, 1);
          t = v_60;
          if(match_cons(t, sym_DynRuleId_1))
            {
              y_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_60;
          if(match_cons(t, sym_RDecT_3))
            {
              z_60 = ATgetArgument(t, 0);
              e_61 = ATgetArgument(t, 1);
              k_61 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, z_60, e_61, k_61, (ATerm) ATmakeAppl(sym_Rule_3, l_61, term_v_21, term_f_20));
        }
      else
        {
          if(match_cons(t, sym_SetDynRule_2))
            {
              v_60 = ATgetArgument(t, 0);
              l_61 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_60;
          if(match_cons(t, sym_DynRuleId_1))
            {
              y_60 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_60;
          if(match_cons(t, sym_RDecT_3))
            {
              z_60 = ATgetArgument(t, 0);
              e_61 = ATgetArgument(t, 1);
              k_61 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_RDefT_4, z_60, e_61, k_61, l_61);
        }
    }
  return(t);
}
static ATerm z_65 (ATerm e_63, ATerm t)
{
  ATerm n_64 = NULL,o_64 = NULL,u_64 = NULL,v_64 = NULL;
  t = e_63;
  if(match_cons(t, sym_GenDynRules_1))
    {
      u_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_64;
  t = filter_1_0(d_6, t);
  v_64 = t;
  t = e_63;
  if(match_cons(t, sym_GenDynRules_1))
    {
      n_64 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_64;
  t = filter_1_0(Downgrade_DynRuleDef_0_0, t);
  o_64 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_ExtendDynamicRules_1, v_64), (ATerm) ATmakeAppl(sym_DynamicRules_1, o_64));
  return(t);
}
static ATerm d_6 (ATerm t)
{
  ATerm w_64 = NULL,x_64 = NULL,d_65 = NULL,n_65 = NULL;
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm w_36 = ATgetArgument(t, 0);
      if(match_cons(w_36, sym_DynRuleId_1))
        {
          ATerm x_36 = ATgetArgument(w_36, 0);
          if(match_cons(x_36, sym_RDecT_3))
            {
              w_64 = ATgetArgument(x_36, 0);
              x_64 = ATgetArgument(x_36, 1);
              d_65 = ATgetArgument(x_36, 2);
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
  t = (ATerm) ATmakeAppl(sym_RDefT_4, w_64, x_64, d_65, n_65);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  if(match_cons(t, sym_AddDynRule_2))
    {
      ATerm y_36 = ATgetArgument(t, 0);
      ATerm z_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  return(t);
}
ATerm Downgrade_Generator_0_0 (ATerm t)
{
  ATerm o_65 = NULL,r_65 = NULL;
  r_65 = t;
  if(match_cons(t, sym_GenDynRules_1))
    {
      o_65 = ATgetArgument(t, 0);
      {
        ATerm a_37 = t;
        int b_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_25 = NULL;
            t = o_65;
            {
              ATerm d_37 = t;
              if((PushChoice() == 0))
                {
                  t = fetch_1_0(e_6, t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = d_37;
                }
            }
            t = o_65;
            t = map_1_0(Downgrade_DynRuleDef_0_0, t);
            o_25 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, o_25);
            LocalPopChoice(b_37);
          }
        else
          {
            t = a_37;
            t = z_65(r_65, t);
          }
      }
    }
  else
    {
      t = z_65(r_65, t);
    }
  return(t);
}
static ATerm h_6 (ATerm t)
{
  ATerm e_37 = t;
  int g_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_66 = NULL;
      b_66 = t;
      if(match_cons(t, sym_GenDynRules_1))
        {
          ATerm k_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_66;
      LocalPopChoice(g_37);
      t = Downgrade_Generator_0_0(t);
    }
  else
    {
      t = e_37;
      {
        ATerm l_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_67 = NULL;
            r_67 = t;
            if(match_cons(t, sym_DynRuleScope_2))
              {
                ATerm p_37 = ATgetArgument(t, 0);
                ATerm q_37 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_67;
            LocalPopChoice(o_37);
            {
              ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL;
              if(match_cons(t, sym_DynRuleScope_2))
                {
                  s_67 = ATgetArgument(t, 0);
                  t_67 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_67;
              t = map_1_0(Downgrade_ScopeId_0_0, t);
              u_67 = t;
              t = (ATerm) ATmakeAppl(sym_DynRuleScope_2, u_67, t_67);
            }
          }
        else
          {
            t = l_37;
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
static ATerm i_6 (ATerm t)
{
  t = Cons_2_0(k_6, p_6, t);
  return(t);
}
static ATerm k_6 (ATerm t)
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL,x_21 = NULL;
  t_68 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      r_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_68);
  q_68 = t;
  t = r_68;
  t = topdown_1_0(q_6, t);
  t = listtd_1_0(r_6, t);
  s_68 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, s_68);
  x_21 = t;
  t = SSLsetAnnotations(x_21, q_68);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm r_37 = t;
  int s_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DefDynamicRuleScope_0_0(t);
      LocalPopChoice(s_37);
    }
  else
    {
      t = r_37;
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
  ATerm w_68 = NULL,x_68 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_68 = ATgetFirst((ATermList) t);
      x_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_10(w_68, x_68, t);
  return(t);
}
ATerm LiftDynamicRules_old_0_0 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL,m_68 = NULL,n_68 = NULL,o_68 = NULL,c_22 = NULL,b_22 = NULL;
  t = downgrade_new_dr_syntax_0_0(t);
  o_68 = t;
  if(match_cons(t, sym_Specification_1))
    {
      a_68 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_68);
  z_67 = t;
  t = a_68;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_68 = ATgetFirst((ATermList) t);
      d_68 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_68);
  b_68 = t;
  t = d_68;
  t = Cons_2_0(_id, i_6, t);
  m_68 = t;
  t = (ATerm) ATinsert(CheckATermList(m_68), c_68);
  b_22 = t;
  t = SSLsetAnnotations(b_22, b_68);
  n_68 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, n_68);
  c_22 = t;
  t = SSLsetAnnotations(c_22, z_67);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm ContextVar_0_0 (ATerm t)
{
  ATerm l_69 = NULL;
  l_69 = t;
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_26 = NULL;
        t = term_f_36;
        p_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_f_36, l_69);
        t = m_11(p_26, l_69, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm v_37 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) v_37) != ATmakeSymbol("p_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = l_69;
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
        {
          ATerm i_27 = NULL;
          t = term_f_36;
          i_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_f_36, l_69);
          t = m_11(i_27, l_69, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm w_37 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_37) != ATmakeSymbol("l_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = l_69;
        }
      }
  }
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL;
  s_70 = t;
  {
    ATerm x_37 = t;
    int y_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Var_1))
          {
            ATerm z_37 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_37);
        t = s_70;
        {
          ATerm a_38 = t;
          if((PushChoice() == 0))
            {
              ATerm m_28 = NULL,n_28 = NULL,r_28 = NULL,s_28 = NULL,c_23 = NULL;
              s_28 = t;
              if(match_cons(t, sym_Var_1))
                {
                  n_28 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(s_28);
              m_28 = t;
              t = n_28;
              {
                ATerm b_38 = t;
                int c_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = ContextVar_0_0(t);
                    LocalPopChoice(c_38);
                  }
                else
                  {
                    t = b_38;
                    {
                      ATerm h_29 = NULL,r_29 = NULL,t_29 = NULL,b_23 = NULL;
                      if(match_cons(t, sym_ListVar_1))
                        {
                          h_29 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = SSLgetAnnotations(n_28);
                      r_29 = t;
                      t = h_29;
                      t = ContextVar_0_0(t);
                      t_29 = t;
                      t = (ATerm) ATmakeAppl(sym_ListVar_1, t_29);
                      b_23 = t;
                      t = SSLsetAnnotations(b_23, r_29);
                    }
                  }
              }
              r_28 = t;
              t = (ATerm) ATmakeAppl(sym_Var_1, r_28);
              c_23 = t;
              t = SSLsetAnnotations(c_23, m_28);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = a_38;
            }
        }
        t = term_q_24;
      }
    else
      {
        t = x_37;
        if(match_cons(t, sym_Wld_0))
          {
            t = term_q_24;
          }
        else
          {
            if(match_cons(t, sym_RootApp_1))
              {
                t_70 = ATgetArgument(t, 0);
                {
                  ATerm x_70 = NULL;
                  t = t_70;
                  t = free_vars_3_0(u_6, v_6, tboundin_3_0, t);
                  t = map_1_0(x_6, t);
                  x_70 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_38, x_70);
                }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    t_70 = ATgetArgument(t, 0);
                    u_70 = ATgetArgument(t, 1);
                    {
                      ATerm f_74 = NULL;
                      t = (ATerm) ATmakeAppl(sym__2, t_70, u_70);
                      t = free_vars_3_0(y_6, z_6, tboundin_3_0, t);
                      t = map_1_0(d_7, t);
                      f_74 = t;
                      t = (ATerm) ATmakeAppl(sym_Op_2, term_d_38, f_74);
                    }
                  }
                else
                  {
                    ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
                    if(match_cons(t, sym_Con_3))
                      {
                        ATerm e_38 = ATgetArgument(t, 0);
                        ATerm f_38 = ATgetArgument(t, 1);
                        ATerm g_38 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = term_m_36;
                    w_29 = t;
                    t = (ATerm) ATinsert(ATempty, term_h_38);
                    x_29 = t;
                    t = SSL_printnl(w_29, x_29);
                    t = term_o_36;
                    v_29 = t;
                    t = SSL_exit(v_29);
                    t = (ATerm) ATinsert(ATempty, term_h_38);
                  }
              }
          }
      }
  }
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm y_70 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_70);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_38);
    }
  else
    {
      t = i_38;
      {
        ATerm k_38 = t;
        int m_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(m_38);
          }
        else
          {
            t = k_38;
            {
              ATerm r_38 = t;
              int s_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_71 = NULL,b_71 = NULL,c_71 = NULL,w_71 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      a_71 = ATgetArgument(t, 0);
                      b_71 = ATgetArgument(t, 1);
                      c_71 = ATgetArgument(t, 2);
                      w_71 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = c_71;
                  t = map_1_0(w_6, t);
                  LocalPopChoice(s_38);
                }
              else
                {
                  t = r_38;
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
  ATerm p_73 = NULL;
  ATerm t_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_73 = ATgetArgument(t, 0);
          {
            ATerm v_38 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_38);
      t = p_73;
    }
  else
    {
      t = t_38;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_73 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_73;
    }
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm c_74 = NULL;
  c_74 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_74);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm j_74 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_74);
  return(t);
}
static ATerm z_6 (ATerm t)
{
  ATerm b_39 = t;
  int c_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_39);
    }
  else
    {
      t = b_39;
      {
        ATerm e_39 = t;
        int f_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(f_39);
          }
        else
          {
            t = e_39;
            {
              ATerm j_39 = t;
              int k_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_75 = NULL,r_75 = NULL,q_76 = NULL,r_76 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_75 = ATgetArgument(t, 0);
                      r_75 = ATgetArgument(t, 1);
                      q_76 = ATgetArgument(t, 2);
                      r_76 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_76;
                  t = map_1_0(a_7, t);
                  LocalPopChoice(k_39);
                }
              else
                {
                  t = j_39;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm x_77 = NULL;
  ATerm l_39 = t;
  int m_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_77 = ATgetArgument(t, 0);
          {
            ATerm n_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_39);
      t = x_77;
    }
  else
    {
      t = l_39;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_77;
    }
  return(t);
}
static ATerm d_7 (ATerm t)
{
  ATerm a_78 = NULL;
  a_78 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, a_78);
  return(t);
}
ATerm dummify_0_0 (ATerm t)
{
  t = alltd_1_0(t_6, t);
  return(t);
}
ATerm debug_1_0 (ATerm x_109 (ATerm), ATerm t)
{
  ATerm r_78 = NULL,s_78 = NULL,t_78 = NULL,x_78 = NULL;
  r_78 = t;
  t = x_109(t);
  s_78 = t;
  t = term_m_36;
  t_78 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_78), s_78);
  x_78 = t;
  t = SSL_printnl(t_78, x_78);
  t = r_78;
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_o_39;
  return(t);
}
static ATerm f_7 (ATerm t)
{
  ATerm y_80 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_80 = ATgetArgument(t, 0);
      t = y_80;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_80 = ATgetArgument(t, 0);
          {
            ATerm p_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = y_80;
    }
  t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, y_80), (ATerm) ATempty);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  ATerm e_81 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      e_81 = ATgetArgument(t, 0);
      t = e_81;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_81 = ATgetArgument(t, 0);
          {
            ATerm q_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_81;
    }
  t = (ATerm) ATmakeAppl(sym_Var_1, e_81);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm k_81 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_81);
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm r_39 = t;
  int s_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_39);
    }
  else
    {
      t = r_39;
      {
        ATerm t_39 = t;
        int v_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_39);
          }
        else
          {
            t = t_39;
            {
              ATerm w_39 = t;
              int x_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_81 = NULL,n_81 = NULL,o_81 = NULL,p_81 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      m_81 = ATgetArgument(t, 0);
                      n_81 = ATgetArgument(t, 1);
                      o_81 = ATgetArgument(t, 2);
                      p_81 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = o_81;
                  t = map_1_0(k_7, t);
                  LocalPopChoice(x_39);
                }
              else
                {
                  t = w_39;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm w_81 = NULL;
  ATerm i_40 = t;
  int j_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_81 = ATgetArgument(t, 0);
          {
            ATerm l_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_40);
      t = w_81;
    }
  else
    {
      t = i_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_81;
    }
  return(t);
}
static ATerm l_7 (ATerm t)
{
  ATerm z_81 = NULL;
  z_81 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, z_81);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm a_82 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_82);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(r_40);
    }
  else
    {
      t = q_40;
      {
        ATerm s_40 = t;
        int t_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(t_40);
          }
        else
          {
            t = s_40;
            {
              ATerm u_40 = t;
              int v_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      d_82 = ATgetArgument(t, 0);
                      e_82 = ATgetArgument(t, 1);
                      f_82 = ATgetArgument(t, 2);
                      g_82 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = f_82;
                  t = map_1_0(p_7, t);
                  LocalPopChoice(v_40);
                }
              else
                {
                  t = u_40;
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
  ATerm n_82 = NULL;
  ATerm w_40 = t;
  int x_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_82 = ATgetArgument(t, 0);
          {
            ATerm y_40 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_40);
      t = n_82;
    }
  else
    {
      t = w_40;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_82;
    }
  return(t);
}
static ATerm q_7 (ATerm t)
{
  ATerm r_82 = NULL;
  r_82 = t;
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_83 = NULL,z_29 = NULL,b_30 = NULL,f_23 = NULL;
        if(match_cons(t, sym_ListVar_1))
          {
            f_83 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_82);
        z_29 = t;
        t = f_83;
        t = ContextVar_0_0(t);
        b_30 = t;
        t = (ATerm) ATmakeAppl(sym_ListVar_1, b_30);
        f_23 = t;
        t = SSLsetAnnotations(f_23, z_29);
        LocalPopChoice(a_41);
      }
    else
      {
        t = z_40;
        t = ContextVar_0_0(t);
      }
  }
  t = (ATerm) ATmakeAppl(sym_Var_1, r_82);
  return(t);
}
static ATerm t_10 (ATerm i_136 (ATerm), ATerm u_79, ATerm r_79, ATerm s_79, ATerm a_80, ATerm g_80, ATerm h_80, ATerm t)
{
  ATerm c_80 = NULL,f_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL,r_80 = NULL,t_80 = NULL,u_80 = NULL;
  t = debug_1_0(e_7, t);
  t = (ATerm) ATmakeAppl(sym__2, g_80, term_v_21);
  {
    ATerm b_41 = t;
    if((PushChoice() == 0))
      {
        ATerm v_80 = NULL;
        if(match_cons(t, sym__2))
          {
            v_80 = ATgetArgument(t, 0);
            if((v_80 != ATgetArgument(t, 1)))
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
        t = b_41;
      }
  }
  t = term_j_34;
  u_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_34, u_79);
  t = x_11(u_80, u_79, t);
  t = term_k_34;
  t_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_34, u_79);
  t = x_11(t_80, u_79, t);
  t = new_0_0(t);
  t = r_79;
  t = map_1_0(f_7, t);
  t = s_79;
  t = map_1_0(g_7, t);
  m_80 = t;
  t = new_0_0(t);
  c_80 = t;
  t = a_80;
  t = dummify_0_0(t);
  f_80 = t;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_80;
        if((a_80 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym_Var_1, c_80);
        LocalPopChoice(d_41);
      }
    else
      {
        t = c_41;
        t = f_80;
      }
  }
  t = f_80;
  t = free_vars_3_0(h_7, j_7, tboundin_3_0, t);
  t = map_1_0(l_7, t);
  o_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_80, o_80);
  t = conc_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, g_80, h_80);
  t = free_vars_3_0(m_7, n_7, tboundin_3_0, t);
  t = filter_1_0(q_7, t);
  n_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_80, o_80);
  t = diff_0_0(t);
  p_80 = t;
  t = new_0_0(t);
  q_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_80, (ATerm) ATmakeAppl(sym_Op_2, term_e_41, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_List_1, p_80)), (ATerm) ATmakeAppl(sym_Str_1, q_80))));
  t = i_136(t);
  r_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, r_80), (ATerm) ATempty);
  return(t);
}
ATerm SplitDynamicRule_1_0 (ATerm i_136 (ATerm), ATerm t)
{
  ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,m_83 = NULL;
  if(match_cons(t, sym_SetDynRule_2))
    {
      ATerm f_41 = ATgetArgument(t, 0);
      if(match_cons(f_41, sym_DynRuleId_1))
        {
          ATerm i_41 = ATgetArgument(f_41, 0);
          if(match_cons(i_41, sym_RDecT_3))
            {
              h_83 = ATgetArgument(i_41, 0);
              i_83 = ATgetArgument(i_41, 1);
              j_83 = ATgetArgument(i_41, 2);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm h_41 = ATgetArgument(t, 1);
        if(match_cons(h_41, sym_Rule_3))
          {
            k_83 = ATgetArgument(h_41, 0);
            l_83 = ATgetArgument(h_41, 1);
            m_83 = ATgetArgument(h_41, 2);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_10(i_136, h_83, i_83, j_83, k_83, l_83, m_83, t);
  return(t);
}
ATerm SplitDynamicRule_0_0 (ATerm t)
{
  ATerm w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL,a_84 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL;
  x_83 = t;
  if(match_cons(t, sym_AddDynRule_2))
    {
      y_83 = ATgetArgument(t, 0);
      d_84 = ATgetArgument(t, 1);
      t = y_83;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          z_83 = ATgetArgument(t, 0);
          w_83 = ATgetArgument(t, 1);
          {
            static ATerm s_7 (ATerm t)
            {
              ATerm n_84 = NULL,o_84 = NULL,g_30 = NULL;
              n_84 = t;
              t = SSL_explode_term(n_84);
              if(match_cons(t, sym__2))
                {
                  ATerm j_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) j_41) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm q_41 = ATgetArgument(t, 1);
                    if(((ATgetType(q_41) == AT_LIST) && !(ATisEmpty(q_41))))
                      {
                        o_84 = ATgetFirst((ATermList) q_41);
                        {
                          ATerm r_41 = (ATerm) ATgetNext((ATermList) q_41);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(n_84);
              if(match_cons(t, sym__2))
                {
                  ATerm s_41 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) s_41) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm t_41 = ATgetArgument(t, 1);
                    if(((ATgetType(t_41) == AT_LIST) && !(ATisEmpty(t_41))))
                      {
                        ATerm u_41 = ATgetFirst((ATermList) t_41);
                        ATerm v_41 = (ATerm) ATgetNext((ATermList) t_41);
                        if(((ATgetType(v_41) == AT_LIST) && !(ATisEmpty(v_41))))
                          {
                            g_30 = ATgetFirst((ATermList) v_41);
                            {
                              ATerm w_41 = (ATerm) ATgetNext((ATermList) v_41);
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
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_41, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_30), o_84), w_83), (ATerm) ATmakeAppl(sym_Str_1, not_null(a_84))));
              return(t);
            }
            t = z_83;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((a_84 != NULL) && (a_84 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_84 = ATgetArgument(t, 0);
                b_84 = ATgetArgument(t, 1);
                c_84 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, a_84, b_84, c_84)), d_84);
            t = SplitDynamicRule_1_0(s_7, t);
          }
        }
      else
        {
          static ATerm u_7 (ATerm t)
          {
            ATerm x_84 = NULL,y_84 = NULL,r_30 = NULL;
            x_84 = t;
            t = SSL_explode_term(x_84);
            if(match_cons(t, sym__2))
              {
                ATerm z_41 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_41) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm a_42 = ATgetArgument(t, 1);
                  if(((ATgetType(a_42) == AT_LIST) && !(ATisEmpty(a_42))))
                    {
                      y_84 = ATgetFirst((ATermList) a_42);
                      {
                        ATerm f_42 = (ATerm) ATgetNext((ATermList) a_42);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_explode_term(x_84);
            if(match_cons(t, sym__2))
              {
                ATerm g_42 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) g_42) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm h_42 = ATgetArgument(t, 1);
                  if(((ATgetType(h_42) == AT_LIST) && !(ATisEmpty(h_42))))
                    {
                      ATerm i_42 = ATgetFirst((ATermList) h_42);
                      ATerm j_42 = (ATerm) ATgetNext((ATermList) h_42);
                      if(((ATgetType(j_42) == AT_LIST) && !(ATisEmpty(j_42))))
                        {
                          r_30 = ATgetFirst((ATermList) j_42);
                          {
                            ATerm k_42 = (ATerm) ATgetNext((ATermList) j_42);
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
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_41, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_30), y_84), (ATerm) ATmakeAppl(sym_Str_1, not_null(a_84))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              z_83 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_83;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((a_84 != NULL) && (a_84 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_84 = ATgetArgument(t, 0);
              b_84 = ATgetArgument(t, 1);
              c_84 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, a_84, b_84, c_84)), d_84);
          t = SplitDynamicRule_1_0(u_7, t);
        }
    }
  else
    {
      if(match_cons(t, sym_SetDynRule_2))
        {
          y_83 = ATgetArgument(t, 0);
          d_84 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_83;
      if(match_cons(t, sym_LabeledDynRuleId_2))
        {
          z_83 = ATgetArgument(t, 0);
          w_83 = ATgetArgument(t, 1);
          {
            static ATerm v_7 (ATerm t)
            {
              ATerm k_85 = NULL,l_85 = NULL,y_30 = NULL;
              k_85 = t;
              t = SSL_explode_term(k_85);
              if(match_cons(t, sym__2))
                {
                  ATerm l_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) l_42) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm m_42 = ATgetArgument(t, 1);
                    if(((ATgetType(m_42) == AT_LIST) && !(ATisEmpty(m_42))))
                      {
                        l_85 = ATgetFirst((ATermList) m_42);
                        {
                          ATerm n_42 = (ATerm) ATgetNext((ATermList) m_42);
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = SSL_explode_term(k_85);
              if(match_cons(t, sym__2))
                {
                  ATerm p_42 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) p_42) != ATmakeSymbol("", 0, ATtrue)))
                    _fail(t);
                  {
                    ATerm r_42 = ATgetArgument(t, 1);
                    if(((ATgetType(r_42) == AT_LIST) && !(ATisEmpty(r_42))))
                      {
                        ATerm s_42 = ATgetFirst((ATermList) r_42);
                        ATerm t_42 = (ATerm) ATgetNext((ATermList) r_42);
                        if(((ATgetType(t_42) == AT_LIST) && !(ATisEmpty(t_42))))
                          {
                            y_30 = ATgetFirst((ATermList) t_42);
                            {
                              ATerm u_42 = (ATerm) ATgetNext((ATermList) t_42);
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
              t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, y_30), l_85), w_83), (ATerm) ATmakeAppl(sym_Str_1, not_null(a_84))));
              return(t);
            }
            t = z_83;
            if(match_cons(t, sym_RDecT_3))
              {
                if(((a_84 != NULL) && (a_84 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  a_84 = ATgetArgument(t, 0);
                b_84 = ATgetArgument(t, 1);
                c_84 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_SetDynRule_2, (ATerm)ATmakeAppl(sym_DynRuleId_1, (ATerm) ATmakeAppl(sym_RDecT_3, a_84, b_84, c_84)), d_84);
            t = SplitDynamicRule_1_0(v_7, t);
          }
        }
      else
        {
          static ATerm w_7 (ATerm t)
          {
            ATerm p_85 = NULL,q_85 = NULL,b_31 = NULL;
            p_85 = t;
            t = SSL_explode_term(p_85);
            if(match_cons(t, sym__2))
              {
                ATerm z_42 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_42) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm d_43 = ATgetArgument(t, 1);
                  if(((ATgetType(d_43) == AT_LIST) && !(ATisEmpty(d_43))))
                    {
                      q_85 = ATgetFirst((ATermList) d_43);
                      {
                        ATerm f_43 = (ATerm) ATgetNext((ATermList) d_43);
                      }
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = SSL_explode_term(p_85);
            if(match_cons(t, sym__2))
              {
                ATerm g_43 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) g_43) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm h_43 = ATgetArgument(t, 1);
                  if(((ATgetType(h_43) == AT_LIST) && !(ATisEmpty(h_43))))
                    {
                      ATerm i_43 = ATgetFirst((ATermList) h_43);
                      ATerm l_43 = (ATerm) ATgetNext((ATermList) h_43);
                      if(((ATgetType(l_43) == AT_LIST) && !(ATisEmpty(l_43))))
                        {
                          b_31 = ATgetFirst((ATermList) l_43);
                          {
                            ATerm m_43 = (ATerm) ATgetNext((ATermList) l_43);
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
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_w_42, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, b_31), q_85), (ATerm) ATmakeAppl(sym_Str_1, not_null(a_84))));
            return(t);
          }
          if(match_cons(t, sym_DynRuleId_1))
            {
              z_83 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_83;
          if(match_cons(t, sym_RDecT_3))
            {
              if(((a_84 != NULL) && (a_84 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_84 = ATgetArgument(t, 0);
              {
                ATerm n_43 = ATgetArgument(t, 1);
              }
              {
                ATerm o_43 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          t = x_83;
          t = SplitDynamicRule_1_0(w_7, t);
        }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm a_105 (ATerm), ATerm t)
{
  static ATerm r_85 (ATerm t)
  {
    ATerm s_43 = t;
    int t_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_105(t);
        LocalPopChoice(t_43);
      }
    else
      {
        t = s_43;
        t = SRTS_one(r_85, t);
      }
    return(t);
  }
  t = r_85(t);
  return(t);
}
static ATerm k_8 (ATerm t)
{
  t = term_f_36;
  return(t);
}
ATerm split_dynamic_rule_1_0 (ATerm f_136 (ATerm), ATerm t)
{
  static ATerm z_85 (ATerm t)
  {
    static ATerm c_8 (ATerm t)
    {
      ATerm u_43 = t;
      int v_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_136(t);
          LocalPopChoice(v_43);
        }
      else
        {
          t = u_43;
          {
            ATerm u_85 = NULL,v_85 = NULL,y_85 = NULL;
            if(match_cons(t, sym_Scope_2))
              {
                u_85 = ATgetArgument(t, 0);
                v_85 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, u_85, v_85);
            {
              static ATerm m_8 (ATerm t)
              {
                t = u_85;
                t = DeclareContextVars_0_0(t);
                t = v_85;
                t = z_85(t);
                if(((y_85 != NULL) && (y_85 != t)))
                  _fail(t);
                else
                  y_85 = t;
                return(t);
              }
              t = scope_2_0(k_8, m_8, t);
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, u_85, not_null(y_85));
          }
        }
      return(t);
    }
    t = oncetd_1_0(c_8, t);
    return(t);
  }
  t = z_85(t);
  return(t);
}
static ATerm o_8 (ATerm t)
{
  ATerm d_86 = NULL,g_86 = NULL,i_86 = NULL,k_86 = NULL;
  k_86 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      i_86 = ATgetArgument(t, 0);
      {
        ATerm x_43 = t;
        int z_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_86;
            d_86 = t;
            t = k_86;
            LocalPopChoice(z_43);
          }
        else
          {
            t = x_43;
            t = k_86;
            d_86 = t;
            t = k_86;
          }
      }
    }
  else
    {
      t = k_86;
      d_86 = t;
      t = k_86;
    }
  t = term_b_44;
  g_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_86, term_b_44);
  t = n_11(p_8, d_86, g_86, t);
  t = k_86;
  return(t);
}
static ATerm p_8 (ATerm t)
{
  t = term_f_36;
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm m_86 = NULL,p_86 = NULL,q_86 = NULL,r_86 = NULL;
  r_86 = t;
  if(match_cons(t, sym_ListVar_1))
    {
      q_86 = ATgetArgument(t, 0);
      {
        ATerm c_44 = t;
        int d_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_86;
            m_86 = t;
            t = r_86;
            LocalPopChoice(d_44);
          }
        else
          {
            t = c_44;
            t = r_86;
            m_86 = t;
            t = r_86;
          }
      }
    }
  else
    {
      t = r_86;
      m_86 = t;
      t = r_86;
    }
  t = term_h_44;
  p_86 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_86, term_h_44);
  t = n_11(t_8, m_86, p_86, t);
  t = r_86;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  t = term_f_36;
  return(t);
}
ATerm DeclareContextVars_0_0 (ATerm t)
{
  ATerm i_44 = t;
  int j_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = map_1_0(o_8, t);
      LocalPopChoice(j_44);
    }
  else
    {
      t = i_44;
      t = map_1_0(s_8, t);
    }
  return(t);
}
static ATerm x_8 (ATerm t)
{
  ATerm n_31 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_31);
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_44);
    }
  else
    {
      t = k_44;
      {
        ATerm p_44 = t;
        int r_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_44);
          }
        else
          {
            t = p_44;
            {
              ATerm s_44 = t;
              int t_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      p_31 = ATgetArgument(t, 0);
                      r_31 = ATgetArgument(t, 1);
                      s_31 = ATgetArgument(t, 2);
                      t_31 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_31;
                  t = map_1_0(z_8, t);
                  LocalPopChoice(t_44);
                }
              else
                {
                  t = s_44;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm z_8 (ATerm t)
{
  ATerm d_32 = NULL;
  ATerm u_44 = t;
  int v_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_32 = ATgetArgument(t, 0);
          {
            ATerm w_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_44);
      t = d_32;
    }
  else
    {
      t = u_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_32;
    }
  return(t);
}
static ATerm a_9 (ATerm t)
{
  ATerm w_32 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      w_32 = ATgetArgument(t, 0);
      t = w_32;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_32 = ATgetArgument(t, 0);
          {
            ATerm z_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_32;
    }
  return(t);
}
static ATerm f_9 (ATerm t)
{
  ATerm n_33 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_33 = ATgetArgument(t, 0);
      t = n_33;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_33 = ATgetArgument(t, 0);
          {
            ATerm d_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = n_33;
    }
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm w_33 = NULL;
  if(match_cons(t, sym__2))
    {
      w_33 = ATgetArgument(t, 0);
      if((w_33 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm i_9 (ATerm t)
{
  ATerm g_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_34);
  return(t);
}
static ATerm j_9 (ATerm t)
{
  ATerm i_45 = t;
  int l_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_45);
    }
  else
    {
      t = i_45;
      {
        ATerm m_45 = t;
        int n_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_45);
          }
        else
          {
            t = m_45;
            {
              ATerm o_45 = t;
              int t_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_34 = NULL,s_34 = NULL,t_34 = NULL,w_34 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      r_34 = ATgetArgument(t, 0);
                      s_34 = ATgetArgument(t, 1);
                      t_34 = ATgetArgument(t, 2);
                      w_34 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_34;
                  t = map_1_0(k_9, t);
                  LocalPopChoice(t_45);
                }
              else
                {
                  t = o_45;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_9 (ATerm t)
{
  ATerm l_35 = NULL;
  ATerm x_45 = t;
  int y_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_35 = ATgetArgument(t, 0);
          {
            ATerm z_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_45);
      t = l_35;
    }
  else
    {
      t = x_45;
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
static ATerm m_9 (ATerm t)
{
  ATerm a_36 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      a_36 = ATgetArgument(t, 0);
      t = a_36;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_36 = ATgetArgument(t, 0);
          {
            ATerm a_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_36;
    }
  return(t);
}
static ATerm n_9 (ATerm t)
{
  ATerm h_36 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_36 = ATgetArgument(t, 0);
      t = h_36;
    }
  else
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_36 = ATgetArgument(t, 0);
          {
            ATerm c_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_36;
    }
  return(t);
}
static ATerm p_9 (ATerm t)
{
  ATerm l_36 = NULL;
  if(match_cons(t, sym__2))
    {
      l_36 = ATgetArgument(t, 0);
      if((l_36 != ATgetArgument(t, 1)))
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
  ATerm r_91 = NULL;
  r_91 = t;
  {
    ATerm d_46 = t;
    int f_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_31 = NULL,i_31 = NULL;
        t = r_91;
        t = free_vars_3_0(x_8, y_8, tboundin_3_0, t);
        h_31 = t;
        t = r_91;
        {
          ATerm g_46 = t;
          int h_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_32 = NULL;
              ATerm i_46 = t;
              int k_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm l_46 = ATgetArgument(t, 0);
                      ATerm m_46 = ATgetArgument(t, 1);
                      p_32 = ATgetArgument(t, 2);
                      {
                        ATerm o_46 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_46);
                  t = p_32;
                  t = map_1_0(a_9, t);
                }
              else
                {
                  t = i_46;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm p_46 = ATgetArgument(t, 0);
                      ATerm q_46 = ATgetArgument(t, 1);
                      p_32 = ATgetArgument(t, 2);
                      {
                        ATerm r_46 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = p_32;
                  t = map_1_0(f_9, t);
                }
              LocalPopChoice(h_46);
            }
          else
            {
              t = g_46;
              t = (ATerm) ATempty;
            }
        }
        i_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_31, i_31);
        t = b_11(h_9, h_31, i_31, t);
        LocalPopChoice(f_46);
      }
    else
      {
        t = d_46;
        {
          ATerm d_34 = NULL,e_34 = NULL;
          t = r_91;
          t = free_vars_3_0(i_9, j_9, tboundin_3_0, t);
          d_34 = t;
          t = r_91;
          {
            ATerm s_46 = t;
            int t_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_35 = NULL;
                ATerm v_46 = t;
                int x_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm c_47 = ATgetArgument(t, 0);
                        ATerm d_47 = ATgetArgument(t, 1);
                        t_35 = ATgetArgument(t, 2);
                        {
                          ATerm f_47 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_46);
                    t = t_35;
                    t = map_1_0(m_9, t);
                  }
                else
                  {
                    t = v_46;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm g_47 = ATgetArgument(t, 0);
                        ATerm h_47 = ATgetArgument(t, 1);
                        t_35 = ATgetArgument(t, 2);
                        {
                          ATerm i_47 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = t_35;
                    t = map_1_0(n_9, t);
                  }
                LocalPopChoice(t_46);
              }
            else
              {
                t = s_46;
                t = (ATerm) ATempty;
              }
          }
          e_34 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_34, e_34);
          t = b_11(p_9, d_34, e_34, t);
        }
      }
  }
  return(t);
}
static ATerm q_9 (ATerm t)
{
  t = term_f_36;
  return(t);
}
static ATerm t_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_30;
  return(t);
}
static ATerm u_9 (ATerm t)
{
  ATerm i_92 = NULL,l_92 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_92 = ATgetFirst((ATermList) t);
      l_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_92, l_92);
  return(t);
}
static ATerm v_9 (ATerm t)
{
  ATerm n_92 = NULL,q_92 = NULL,s_92 = NULL,w_92 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_47 = ATgetArgument(t, 0);
      if(match_cons(l_47, sym__2))
        {
          n_92 = ATgetArgument(l_47, 0);
          q_92 = ATgetArgument(l_47, 1);
        }
      else
        _fail(t);
      {
        ATerm m_47 = ATgetArgument(t, 1);
        if(match_cons(m_47, sym__2))
          {
            s_92 = ATgetArgument(m_47, 0);
            w_92 = ATgetArgument(m_47, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_92), n_92), (ATerm) ATinsert(CheckATermList(w_92), q_92));
  return(t);
}
static ATerm w_10 (ATerm n_78, ATerm m_78, ATerm t)
{
  ATerm y_91 = NULL,z_91 = NULL,a_92 = NULL;
  static ATerm r_9 (ATerm t)
  {
    t = n_78;
    t = def_tvars_0_0(t);
    t = DeclareContextVars_0_0(t);
    t = n_78;
    {
      static ATerm s_9 (ATerm t)
      {
        ATerm h_92 = NULL;
        if(match_cons(t, sym_GenDynRules_1))
          {
            h_92 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = h_92;
        t = map_1_0(SplitDynamicRule_0_0, t);
        t = genzip_4_0(t_9, u_9, v_9, _id, t);
        if(match_cons(t, sym__2))
          {
            if(((z_91 != NULL) && (z_91 != ATgetArgument(t, 0))))
              _fail(ATgetArgument(t, 0));
            else
              z_91 = ATgetArgument(t, 0);
            if(((y_91 != NULL) && (y_91 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              y_91 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seqs_1, z_91);
        return(t);
      }
      t = split_dynamic_rule_1_0(s_9, t);
    }
    if(((a_92 != NULL) && (a_92 != t)))
      _fail(t);
    else
      a_92 = t;
    return(t);
  }
  t = scope_2_0(q_9, r_9, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(y_91)), not_null(a_92)), m_78);
  t = conc_0_0(t);
  return(t);
}
ATerm repeat_2_0 (ATerm w_102 (ATerm), ATerm x_102 (ATerm), ATerm t)
{
  static ATerm y_92 (ATerm t)
  {
    ATerm n_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_102(t);
        t = y_92(t);
        LocalPopChoice(q_47);
      }
    else
      {
        t = n_47;
        t = x_102(t);
      }
    return(t);
  }
  t = y_92(t);
  return(t);
}
ATerm listtd_1_0 (ATerm s_111 (ATerm), ATerm t)
{
  static ATerm t_93 (ATerm t)
  {
    ATerm p_93 = NULL,q_93 = NULL,s_93 = NULL;
    t = s_111(t);
    p_93 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = p_93;
      }
    else
      {
        ATerm r_36 = NULL,u_36 = NULL,h_23 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            q_93 = ATgetFirst((ATermList) t);
            s_93 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_93);
        r_36 = t;
        t = s_93;
        t = t_93(t);
        u_36 = t;
        t = (ATerm) ATinsert(CheckATermList(u_36), q_93);
        h_23 = t;
        t = SSLsetAnnotations(h_23, r_36);
      }
    return(t);
  }
  t = t_93(t);
  return(t);
}
ATerm DefDynRuleScope_0_0 (ATerm t)
{
  ATerm b_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,l_94 = NULL,o_94 = NULL;
  if(match_cons(t, sym_DynRuleScope_2))
    {
      l_94 = ATgetArgument(t, 0);
      o_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_94;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_94 = ATgetFirst((ATermList) t);
      j_94 = (ATerm) ATgetNext((ATermList) t);
      t = h_94;
      if(match_cons(t, sym_LabeledDynRuleScopeId_2))
        {
          i_94 = ATgetArgument(t, 0);
          b_94 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_47, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_AddScopeLabel_2, i_94, b_94), (ATerm) ATmakeAppl(sym_DynRuleScope_2, j_94, o_94))), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, i_94)));
        }
      else
        {
          if(match_cons(t, sym_DynRuleScopeId_1))
            {
              i_94 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_47, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_DynRuleScope_2, j_94, o_94)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Str_1, i_94)));
        }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_94;
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm q_135 (ATerm), ATerm r_135 (ATerm), ATerm s_135 (ATerm), ATerm t)
{
  ATerm z_99 = NULL,a_100 = NULL,b_100 = NULL,c_100 = NULL,f_100 = NULL;
  c_100 = t;
  if(match_cons(t, sym_Scope_2))
    {
      f_100 = ATgetArgument(t, 0);
      z_99 = ATgetArgument(t, 1);
      {
        ATerm f_37 = NULL,m_37 = NULL,n_37 = NULL,j_23 = NULL;
        t = SSLgetAnnotations(c_100);
        f_37 = t;
        t = f_100;
        t = s_135(t);
        m_37 = t;
        t = z_99;
        t = q_135(t);
        n_37 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, m_37, n_37);
        j_23 = t;
        t = SSLsetAnnotations(j_23, f_37);
      }
    }
  else
    {
      if(match_cons(t, sym_RDecT_3))
        {
          f_100 = ATgetArgument(t, 0);
          z_99 = ATgetArgument(t, 1);
          a_100 = ATgetArgument(t, 2);
          {
            ATerm l_38 = NULL,w_38 = NULL,z_38 = NULL,a_39 = NULL,m_23 = NULL;
            t = SSLgetAnnotations(c_100);
            l_38 = t;
            t = f_100;
            t = s_135(t);
            w_38 = t;
            t = z_99;
            t = s_135(t);
            z_38 = t;
            t = a_100;
            t = s_135(t);
            a_39 = t;
            t = (ATerm) ATmakeAppl(sym_RDecT_3, w_38, z_38, a_39);
            m_23 = t;
            t = SSLsetAnnotations(m_23, l_38);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_100 = ATgetArgument(t, 0);
              z_99 = ATgetArgument(t, 1);
              a_100 = ATgetArgument(t, 2);
              b_100 = ATgetArgument(t, 3);
              {
                ATerm u_39 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,t_23 = NULL;
                t = SSLgetAnnotations(c_100);
                u_39 = t;
                t = f_100;
                t = s_135(t);
                m_40 = t;
                t = z_99;
                t = s_135(t);
                n_40 = t;
                t = a_100;
                t = s_135(t);
                o_40 = t;
                t = b_100;
                t = q_135(t);
                p_40 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, m_40, n_40, o_40, p_40);
                t_23 = t;
                t = SSLsetAnnotations(t_23, u_39);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  f_100 = ATgetArgument(t, 0);
                  z_99 = ATgetArgument(t, 1);
                  a_100 = ATgetArgument(t, 2);
                  b_100 = ATgetArgument(t, 3);
                  {
                    ATerm l_41 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,u_23 = NULL;
                    t = SSLgetAnnotations(c_100);
                    l_41 = t;
                    t = f_100;
                    t = s_135(t);
                    b_42 = t;
                    t = z_99;
                    t = s_135(t);
                    c_42 = t;
                    t = a_100;
                    t = s_135(t);
                    d_42 = t;
                    t = b_100;
                    t = q_135(t);
                    e_42 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, b_42, c_42, d_42, e_42);
                    u_23 = t;
                    t = SSLsetAnnotations(u_23, l_41);
                  }
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      f_100 = ATgetArgument(t, 0);
                      {
                        ATerm o_42 = NULL,q_42 = NULL,z_23 = NULL;
                        t = SSLgetAnnotations(c_100);
                        o_42 = t;
                        t = f_100;
                        t = q_135(t);
                        q_42 = t;
                        t = (ATerm) ATmakeAppl(sym_GenDynRules_1, q_42);
                        z_23 = t;
                        t = SSLsetAnnotations(z_23, o_42);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          f_100 = ATgetArgument(t, 0);
                          {
                            ATerm y_42 = NULL,c_43 = NULL,a_24 = NULL;
                            t = SSLgetAnnotations(c_100);
                            y_42 = t;
                            t = f_100;
                            t = q_135(t);
                            c_43 = t;
                            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, c_43);
                            a_24 = t;
                            t = SSLsetAnnotations(a_24, y_42);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_OverrideDynamicRules_1))
                            {
                              f_100 = ATgetArgument(t, 0);
                              {
                                ATerm w_43 = NULL,y_43 = NULL,b_24 = NULL;
                                t = SSLgetAnnotations(c_100);
                                w_43 = t;
                                t = f_100;
                                t = q_135(t);
                                y_43 = t;
                                t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, y_43);
                                b_24 = t;
                                t = SSLsetAnnotations(b_24, w_43);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_ExtendDynamicRules_1))
                                {
                                  f_100 = ATgetArgument(t, 0);
                                  {
                                    ATerm e_44 = NULL,g_44 = NULL,d_24 = NULL;
                                    t = SSLgetAnnotations(c_100);
                                    e_44 = t;
                                    t = f_100;
                                    t = q_135(t);
                                    g_44 = t;
                                    t = (ATerm) ATmakeAppl(sym_ExtendDynamicRules_1, g_44);
                                    d_24 = t;
                                    t = SSLsetAnnotations(d_24, e_44);
                                  }
                                }
                              else
                                {
                                  ATerm n_44 = NULL,q_44 = NULL,g_24 = NULL;
                                  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
                                    {
                                      f_100 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = SSLgetAnnotations(c_100);
                                  n_44 = t;
                                  t = f_100;
                                  t = q_135(t);
                                  q_44 = t;
                                  t = (ATerm) ATmakeAppl(sym_ExtendOverrideDynamicRules_1, q_44);
                                  g_24 = t;
                                  t = SSLsetAnnotations(g_24, n_44);
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
static ATerm w_9 (ATerm t)
{
  ATerm s_101 = NULL;
  ATerm x_47 = t;
  int c_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_101 = ATgetArgument(t, 0);
          {
            ATerm d_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_48);
      t = s_101;
    }
  else
    {
      t = x_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_101 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_101;
    }
  return(t);
}
static ATerm x_9 (ATerm t)
{
  ATerm a_102 = NULL;
  ATerm e_48 = t;
  int f_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_102 = ATgetArgument(t, 0);
          {
            ATerm g_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_48);
      t = a_102;
    }
  else
    {
      t = e_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_102 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_102;
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm h_101 = NULL;
  ATerm h_48 = t;
  int l_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_RDecT_3))
        {
          ATerm m_48 = ATgetArgument(t, 0);
          ATerm n_48 = ATgetArgument(t, 1);
          h_101 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      LocalPopChoice(l_48);
      t = h_101;
      t = map_1_0(w_9, t);
    }
  else
    {
      t = h_48;
      if(match_cons(t, sym_RDefT_4))
        {
          ATerm o_48 = ATgetArgument(t, 0);
          ATerm p_48 = ATgetArgument(t, 1);
          h_101 = ATgetArgument(t, 2);
          {
            ATerm r_48 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = h_101;
      t = map_1_0(x_9, t);
    }
  return(t);
}
static ATerm y_9 (ATerm t)
{
  ATerm d_103 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_103);
  return(t);
}
static ATerm z_9 (ATerm t)
{
  ATerm s_48 = t;
  int t_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(t_48);
    }
  else
    {
      t = s_48;
      {
        ATerm u_48 = t;
        int v_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(v_48);
          }
        else
          {
            t = u_48;
            {
              ATerm x_48 = t;
              int y_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_103 = NULL,g_103 = NULL,h_103 = NULL,i_103 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_103 = ATgetArgument(t, 0);
                      g_103 = ATgetArgument(t, 1);
                      h_103 = ATgetArgument(t, 2);
                      i_103 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_103;
                  t = map_1_0(p_10, t);
                  LocalPopChoice(y_48);
                }
              else
                {
                  t = x_48;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm z_103 = NULL;
  ATerm z_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_103 = ATgetArgument(t, 0);
          {
            ATerm b_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_49);
      t = z_103;
    }
  else
    {
      t = z_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_103 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_103;
    }
  return(t);
}
static ATerm k_11 (ATerm t)
{
  ATerm d_104 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_104);
  return(t);
}
static ATerm e_12 (ATerm t)
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
              int h_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL,i_104 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_104 = ATgetArgument(t, 0);
                      g_104 = ATgetArgument(t, 1);
                      h_104 = ATgetArgument(t, 2);
                      i_104 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_104;
                  t = map_1_0(l_12, t);
                  LocalPopChoice(h_49);
                }
              else
                {
                  t = g_49;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm p_104 = NULL;
  ATerm j_49 = t;
  int k_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_104 = ATgetArgument(t, 0);
          {
            ATerm l_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_49);
      t = p_104;
    }
  else
    {
      t = j_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_104 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_104;
    }
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm t_104 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_104 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_104);
  return(t);
}
static ATerm n_12 (ATerm t)
{
  ATerm n_49 = t;
  int o_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(o_49);
    }
  else
    {
      t = n_49;
      {
        ATerm p_49 = t;
        int q_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
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
                  ATerm v_104 = NULL,w_104 = NULL,x_104 = NULL,y_104 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      v_104 = ATgetArgument(t, 0);
                      w_104 = ATgetArgument(t, 1);
                      x_104 = ATgetArgument(t, 2);
                      y_104 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = x_104;
                  t = map_1_0(o_12, t);
                  LocalPopChoice(s_49);
                }
              else
                {
                  t = r_49;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm h_105 = NULL;
  ATerm t_49 = t;
  int u_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_105 = ATgetArgument(t, 0);
          {
            ATerm w_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_49);
      t = h_105;
    }
  else
    {
      t = t_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_105 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_105;
    }
  return(t);
}
static ATerm q_12 (ATerm t)
{
  ATerm l_105 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_105 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_105);
  return(t);
}
static ATerm r_12 (ATerm t)
{
  ATerm z_49 = t;
  int a_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
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
                  ATerm n_105 = NULL,q_105 = NULL,r_105 = NULL,s_105 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      n_105 = ATgetArgument(t, 0);
                      q_105 = ATgetArgument(t, 1);
                      r_105 = ATgetArgument(t, 2);
                      s_105 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = r_105;
                  t = map_1_0(s_12, t);
                  LocalPopChoice(e_50);
                }
              else
                {
                  t = d_50;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm s_12 (ATerm t)
{
  ATerm z_105 = NULL;
  ATerm f_50 = t;
  int g_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_105 = ATgetArgument(t, 0);
          {
            ATerm i_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_50);
      t = z_105;
    }
  else
    {
      t = f_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_105 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_105;
    }
  return(t);
}
static ATerm t_12 (ATerm t)
{
  ATerm d_106 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_106 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_106);
  return(t);
}
static ATerm u_12 (ATerm t)
{
  ATerm k_50 = t;
  int l_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(l_50);
    }
  else
    {
      t = k_50;
      {
        ATerm m_50 = t;
        int n_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_50);
          }
        else
          {
            t = m_50;
            {
              ATerm o_50 = t;
              int p_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL,i_106 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_106 = ATgetArgument(t, 0);
                      g_106 = ATgetArgument(t, 1);
                      h_106 = ATgetArgument(t, 2);
                      i_106 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_106;
                  t = map_1_0(b_13, t);
                  LocalPopChoice(p_50);
                }
              else
                {
                  t = o_50;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm b_13 (ATerm t)
{
  ATerm p_106 = NULL;
  ATerm q_50 = t;
  int r_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_106 = ATgetArgument(t, 0);
          {
            ATerm s_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_50);
      t = p_106;
    }
  else
    {
      t = q_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_106 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_106;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm b_103 = NULL;
  if(match_cons(t, sym_ExtendOverrideDynamicRules_1))
    {
      b_103 = ATgetArgument(t, 0);
      t = b_103;
      t = free_vars_3_0(y_9, z_9, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_ExtendDynamicRules_1))
        {
          b_103 = ATgetArgument(t, 0);
          t = b_103;
          t = free_vars_3_0(k_11, e_12, tboundin_3_0, t);
        }
      else
        {
          if(match_cons(t, sym_OverrideDynamicRules_1))
            {
              b_103 = ATgetArgument(t, 0);
              t = b_103;
              t = free_vars_3_0(m_12, n_12, tboundin_3_0, t);
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  b_103 = ATgetArgument(t, 0);
                  t = b_103;
                  t = free_vars_3_0(q_12, r_12, tboundin_3_0, t);
                }
              else
                {
                  if(match_cons(t, sym_GenDynRules_1))
                    {
                      b_103 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = b_103;
                  t = free_vars_3_0(t_12, u_12, tboundin_3_0, t);
                }
            }
        }
    }
  return(t);
}
static ATerm f_13 (ATerm t)
{
  ATerm d_107 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_107 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_107);
  return(t);
}
static ATerm g_13 (ATerm t)
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
                  ATerm f_107 = NULL,g_107 = NULL,h_107 = NULL,i_107 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      f_107 = ATgetArgument(t, 0);
                      g_107 = ATgetArgument(t, 1);
                      h_107 = ATgetArgument(t, 2);
                      i_107 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_107;
                  t = map_1_0(v_13, t);
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
static ATerm v_13 (ATerm t)
{
  ATerm p_107 = NULL;
  ATerm b_51 = t;
  int c_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_107 = ATgetArgument(t, 0);
          {
            ATerm d_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_51);
      t = p_107;
    }
  else
    {
      t = b_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_107 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_107;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_106 = NULL,a_107 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_107 = ATgetArgument(t, 0);
      t = a_107;
      if(match_cons(t, sym_Rule_3))
        {
          w_106 = ATgetArgument(t, 0);
          {
            ATerm e_51 = ATgetArgument(t, 1);
          }
          {
            ATerm f_51 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_106;
      t = free_vars_3_0(f_13, g_13, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          a_107 = ATgetArgument(t, 0);
          {
            ATerm g_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_107;
    }
  return(t);
}
static ATerm b_11 (ATerm t_114 (ATerm), ATerm m_30, ATerm l_30, ATerm t)
{
  static ATerm i_108 (ATerm t)
  {
    ATerm d_108 = NULL,e_108 = NULL,f_108 = NULL;
    d_108 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_108 = ATgetFirst((ATermList) t);
            f_108 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm h_51 = t;
          int i_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_108;
              {
                static ATerm w_13 (ATerm t)
                {
                  t = l_30;
                  return(t);
                }
                t = c_11(t_114, w_13, e_108, f_108, t);
              }
              t = i_108(t);
              LocalPopChoice(i_51);
            }
          else
            {
              t = h_51;
              {
                ATerm x_44 = NULL,g_45 = NULL,m_25 = NULL;
                t = SSLgetAnnotations(d_108);
                x_44 = t;
                t = f_108;
                t = i_108(t);
                g_45 = t;
                t = (ATerm) ATinsert(CheckATermList(g_45), e_108);
                m_25 = t;
                t = SSLsetAnnotations(m_25, x_44);
              }
            }
        }
      }
    return(t);
  }
  t = m_30;
  t = i_108(t);
  return(t);
}
static ATerm c_11 (ATerm w_114 (ATerm), ATerm x_114 (ATerm), ATerm q_30, ATerm p_30, ATerm t)
{
  t = x_114(t);
  {
    static ATerm a_14 (ATerm t)
    {
      ATerm m_108 = NULL;
      m_108 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_30, m_108);
      t = w_114(t);
      return(t);
    }
    t = fetch_1_0(a_14, t);
  }
  t = p_30;
  return(t);
}
static ATerm d_11 (ATerm o_114 (ATerm), ATerm k_30, ATerm j_30, ATerm t)
{
  static ATerm c_109 (ATerm t)
  {
    ATerm x_108 = NULL,y_108 = NULL,z_108 = NULL;
    x_108 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_108;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_108 = ATgetFirst((ATermList) t);
            z_108 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_51 = t;
          int k_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_108;
              {
                static ATerm h_14 (ATerm t)
                {
                  t = j_30;
                  return(t);
                }
                t = c_11(o_114, h_14, y_108, z_108, t);
              }
              t = c_109(t);
              LocalPopChoice(k_51);
            }
          else
            {
              t = j_51;
              {
                ATerm e_46 = NULL,j_46 = NULL,s_25 = NULL;
                t = SSLgetAnnotations(x_108);
                e_46 = t;
                t = z_108;
                t = c_109(t);
                j_46 = t;
                t = (ATerm) ATinsert(CheckATermList(j_46), y_108);
                s_25 = t;
                t = SSLsetAnnotations(s_25, e_46);
              }
            }
        }
      }
    return(t);
  }
  t = k_30;
  t = c_109(t);
  return(t);
}
ATerm genzip_4_0 (ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm t)
{
  static ATerm k_109 (ATerm t)
  {
    ATerm l_51 = t;
    int m_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_112(t);
        LocalPopChoice(m_51);
      }
    else
      {
        t = l_51;
        {
          ATerm e_109 = NULL,f_109 = NULL,g_109 = NULL,h_109 = NULL,i_109 = NULL,j_109 = NULL,u_25 = NULL;
          t = n_112(t);
          j_109 = t;
          if(match_cons(t, sym__2))
            {
              f_109 = ATgetArgument(t, 0);
              g_109 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_109);
          e_109 = t;
          t = f_109;
          t = p_112(t);
          h_109 = t;
          t = g_109;
          t = k_109(t);
          i_109 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_109, i_109);
          u_25 = t;
          t = SSLsetAnnotations(u_25, e_109);
          t = o_112(t);
        }
      }
    return(t);
  }
  t = k_109(t);
  return(t);
}
static ATerm i_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_51 = ATgetArgument(t, 0);
      if(((ATgetType(n_51) != AT_LIST) || !(ATisEmpty(n_51))))
        _fail(t);
      {
        ATerm p_51 = ATgetArgument(t, 1);
        if(((ATgetType(p_51) != AT_LIST) || !(ATisEmpty(p_51))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_14 (ATerm t)
{
  ATerm r_109 = NULL,s_109 = NULL,t_109 = NULL,u_109 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_51 = ATgetArgument(t, 0);
      if(((ATgetType(q_51) == AT_LIST) && !(ATisEmpty(q_51))))
        {
          r_109 = ATgetFirst((ATermList) q_51);
          s_109 = (ATerm) ATgetNext((ATermList) q_51);
        }
      else
        _fail(t);
      {
        ATerm r_51 = ATgetArgument(t, 1);
        if(((ATgetType(r_51) == AT_LIST) && !(ATisEmpty(r_51))))
          {
            t_109 = ATgetFirst((ATermList) r_51);
            u_109 = (ATerm) ATgetNext((ATermList) r_51);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_109, t_109), (ATerm) ATmakeAppl(sym__2, s_109, u_109));
  return(t);
}
static ATerm l_14 (ATerm t)
{
  ATerm v_109 = NULL,w_109 = NULL;
  if(match_cons(t, sym__2))
    {
      v_109 = ATgetArgument(t, 0);
      w_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_109), v_109);
  return(t);
}
static ATerm i_11 (ATerm e_645, ATerm j_645, ATerm j_61, ATerm t)
{
  ATerm m_109 = NULL,n_109 = NULL,o_109 = NULL,p_109 = NULL;
  t = SSL_explode_term(j_645);
  if(match_cons(t, sym__2))
    {
      m_109 = ATgetArgument(t, 0);
      o_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(e_645);
  if(match_cons(t, sym__2))
    {
      if((m_109 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      n_109 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_109, o_109);
  t = genzip_4_0(i_14, j_14, l_14, _id, t);
  p_109 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_109, j_61);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t)
{
  static ATerm a_110 (ATerm t)
  {
    ATerm u_51 = t;
    int v_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_103(t);
        LocalPopChoice(v_51);
      }
    else
      {
        t = u_51;
        t = o_103(t);
        t = a_110(t);
      }
    return(t);
  }
  t = a_110(t);
  return(t);
}
ATerm for_3_0 (ATerm q_103 (ATerm), ATerm r_103 (ATerm), ATerm s_103 (ATerm), ATerm t)
{
  t = q_103(t);
  t = while_not_2_0(r_103, s_103, t);
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm k_110 = NULL;
  k_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_110);
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm l_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL,w_25 = NULL;
  o_110 = t;
  if(match_cons(t, sym__2))
    {
      m_110 = ATgetArgument(t, 0);
      n_110 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_110);
  l_110 = t;
  t = n_110;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_110, n_110);
  w_25 = t;
  t = SSLsetAnnotations(w_25, l_110);
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm l_111 = NULL,m_111 = NULL,n_111 = NULL,o_111 = NULL,p_111 = NULL;
  l_111 = t;
  if(match_cons(t, sym__2))
    {
      m_111 = ATgetArgument(t, 0);
      n_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_111;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_111 = ATgetFirst((ATermList) t);
      p_111 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_51 = t;
        int x_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_112(m_111, n_111, l_111, t);
            LocalPopChoice(x_51);
          }
        else
          {
            t = w_51;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_111), o_111), p_111);
          }
      }
    }
  else
    {
      t = b_112(m_111, n_111, l_111, t);
    }
  return(t);
}
static ATerm b_112 (ATerm p_110, ATerm q_110, ATerm r_110, ATerm t)
{
  ATerm u_110 = NULL,x_110 = NULL,x_25 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL;
  t = SSLgetAnnotations(r_110);
  u_110 = t;
  t = q_110;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_111 = ATgetFirst((ATermList) t);
      f_111 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_111;
  if(match_cons(t, sym__2))
    {
      d_111 = ATgetArgument(t, 0);
      e_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_51 = t;
    int z_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_111;
        if((d_111 != t))
          {
            _fail(t);
          }
        t = f_111;
        LocalPopChoice(z_51);
      }
    else
      {
        t = y_51;
        t = q_110;
        t = i_11(d_111, e_111, f_111, t);
      }
  }
  x_110 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_110, x_110);
  x_25 = t;
  t = SSLsetAnnotations(x_25, u_110);
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm a_112 = NULL;
  if(match_cons(t, sym__2))
    {
      a_112 = ATgetArgument(t, 0);
      if((a_112 != ATgetArgument(t, 1)))
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
  ATerm a_52 = t;
  int b_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(m_14, n_14, q_14, t);
      LocalPopChoice(b_52);
    }
  else
    {
      t = a_52;
      {
        ATerm v_111 = NULL,w_111 = NULL,x_111 = NULL;
        v_111 = t;
        if(match_cons(t, sym__2))
          {
            w_111 = ATgetArgument(t, 0);
            x_111 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_111;
        t = d_11(r_14, w_111, x_111, t);
      }
    }
  return(t);
}
static ATerm t_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_14 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL;
  if(match_cons(t, sym__2))
    {
      j_47 = ATgetArgument(t, 0);
      k_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11(a_15, j_47, k_47, t);
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm p_47 = NULL;
  if(match_cons(t, sym__2))
    {
      p_47 = ATgetArgument(t, 0);
      if((p_47 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  ATerm i_48 = NULL,j_48 = NULL;
  if(match_cons(t, sym__2))
    {
      i_48 = ATgetArgument(t, 0);
      j_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_11(d_15, i_48, j_48, t);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm k_48 = NULL;
  if(match_cons(t, sym__2))
    {
      k_48 = ATgetArgument(t, 0);
      if((k_48 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm d_133 (ATerm), ATerm e_133 (ATerm), ATerm f_133 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm u_112 (ATerm t)
  {
    ATerm c_52 = t;
    int d_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_133(t);
        LocalPopChoice(d_52);
      }
    else
      {
        t = c_52;
        {
          ATerm f_52 = t;
          int g_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_112 = NULL,e_112 = NULL,y_46 = NULL,b_47 = NULL;
              d_112 = t;
              t = e_133(t);
              e_112 = t;
              t = d_112;
              {
                static ATerm s_14 (ATerm t)
                {
                  ATerm g_112 = NULL;
                  t = u_112(t);
                  g_112 = t;
                  t = (ATerm) ATmakeAppl(sym__2, g_112, e_112);
                  t = diff_0_0(t);
                  return(t);
                }
                t = f_133(s_14, u_112, t_14, t);
              }
              b_47 = t;
              t = SSL_explode_term(b_47);
              if(match_cons(t, sym__2))
                {
                  ATerm h_52 = ATgetArgument(t, 0);
                  y_46 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_46;
              t = foldr_3_0(u_14, x_14, _id, t);
              LocalPopChoice(g_52);
            }
          else
            {
              t = f_52;
              {
                ATerm r_47 = NULL,s_47 = NULL;
                s_47 = t;
                t = SSL_explode_term(s_47);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_52 = ATgetArgument(t, 0);
                    r_47 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_47;
                t = foldr_3_0(b_15, c_15, u_112, t);
              }
            }
        }
      }
    return(t);
  }
  t = u_112(t);
  return(t);
}
ATerm bottomup_1_0 (ATerm x_103 (ATerm), ATerm t)
{
  static ATerm e_15 (ATerm t)
  {
    t = bottomup_1_0(x_103, t);
    return(t);
  }
  t = SRTS_all(e_15, t);
  t = x_103(t);
  return(t);
}
static ATerm m_11 (ATerm d_55, ATerm e_55, ATerm t)
{
  ATerm v_112 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_55, e_55);
  t = f_12(d_55, e_55, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_112 = ATgetFirst((ATermList) t);
      {
        ATerm j_52 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_112;
  return(t);
}
ATerm VarToConst_0_0 (ATerm t)
{
  ATerm j_113 = NULL,k_113 = NULL;
  j_113 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_52 = t;
    int l_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_49 = NULL;
        t = term_n_52;
        m_49 = t;
        t = (ATerm) ATmakeAppl(sym__2, term_n_52, j_113);
        t = m_11(m_49, j_113, t);
        if(match_cons(t, sym_Defined_1))
          {
            ATerm o_52 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_52) != ATmakeSymbol("e_0", 0, ATtrue)))
              _fail(t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Op_2, k_113, (ATerm) ATempty);
        LocalPopChoice(l_52);
      }
    else
      {
        t = k_52;
        {
          ATerm v_49 = NULL;
          t = term_n_52;
          v_49 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_n_52, j_113);
          t = m_11(v_49, j_113, t);
          if(match_cons(t, sym_Defined_1))
            {
              ATerm p_52 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) p_52) != ATmakeSymbol("c_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Op_2, k_113, (ATerm) ATempty);
        }
      }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  static ATerm n_113 (ATerm t)
  {
    ATerm q_52 = t;
    int r_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_105(t);
        LocalPopChoice(r_52);
      }
    else
      {
        t = q_52;
        t = SRTS_all(n_113, t);
      }
    return(t);
  }
  t = n_113(t);
  return(t);
}
static ATerm n_11 (ATerm r_123 (ATerm), ATerm o_44, ATerm m_44, ATerm t)
{
  ATerm o_113 = NULL,p_113 = NULL,q_113 = NULL,r_113 = NULL,s_113 = NULL,t_113 = NULL,u_113 = NULL,v_113 = NULL;
  r_113 = t;
  t = r_123(t);
  o_113 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_113, o_44, m_44);
  t = g_12(o_113, o_44, m_44, t);
  {
    ATerm s_52 = t;
    int t_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_113 = NULL;
        t = term_u_52;
        w_113 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_113, term_u_52);
        t = f_12(o_113, w_113, t);
        LocalPopChoice(t_52);
      }
    else
      {
        t = s_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_113 = ATgetFirst((ATermList) t);
      q_113 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, o_113, term_u_52, (ATerm) ATinsert(CheckATermList(q_113), (ATerm) ATinsert(CheckATermList(p_113), o_44)));
  t = lookup_table_0_1(o_113, t);
  v_113 = t;
  t = term_u_52;
  s_113 = t;
  t = (ATerm) ATinsert(CheckATermList(q_113), (ATerm) ATinsert(CheckATermList(p_113), o_44));
  t_113 = t;
  t = v_113;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_113 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12(s_113, t_113, u_113, t);
  t = r_113;
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = term_n_52;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  t = term_n_52;
  return(t);
}
ATerm DeclareVarToConst_0_0 (ATerm t)
{
  ATerm a_114 = NULL,c_114 = NULL,d_114 = NULL,e_114 = NULL;
  if(match_cons(t, sym_Overlay_3))
    {
      c_114 = ATgetArgument(t, 0);
      d_114 = ATgetArgument(t, 1);
      a_114 = ATgetArgument(t, 2);
      {
        ATerm h_114 = NULL,i_114 = NULL;
        t = d_114;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, c_114);
        h_114 = t;
        t = term_w_52;
        i_114 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_114), term_w_52);
        t = n_11(f_15, h_114, i_114, t);
        t = (ATerm) ATmakeAppl(sym_Overlay_3, c_114, (ATerm)ATempty, a_114);
      }
    }
  else
    {
      ATerm l_114 = NULL,m_114 = NULL;
      if(match_cons(t, sym_OpDecl_2))
        {
          c_114 = ATgetArgument(t, 0);
          d_114 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_114;
      if(match_cons(t, sym_ConstType_1))
        {
          e_114 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, c_114);
      l_114 = t;
      t = term_y_52;
      m_114 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Var_1, c_114), term_y_52);
      t = n_11(i_15, l_114, m_114, t);
      t = (ATerm) ATmakeAppl(sym_OpDecl_2, c_114, (ATerm) ATmakeAppl(sym_ConstType_1, e_114));
    }
  return(t);
}
static ATerm o_11 (ATerm x_54, ATerm y_54, ATerm t)
{
  ATerm s_114 = NULL,v_114 = NULL;
  v_114 = t;
  {
    ATerm z_52 = t;
    int a_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, x_54, y_54);
        t = f_12(x_54, y_54, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm b_53 = ATgetFirst((ATermList) t);
            s_114 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(a_53);
        {
          ATerm y_114 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, x_54, y_54, s_114);
          t = lookup_table_0_1(x_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              y_114 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_12(y_54, s_114, y_114, t);
          t = (ATerm) ATmakeAppl(sym__3, x_54, y_54, s_114);
        }
      }
    else
      {
        t = z_52;
        {
          ATerm a_115 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, x_54, y_54);
          t = lookup_table_0_1(x_54, t);
          if(match_cons(t, sym_Hashtable_1))
            {
              a_115 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_12(y_54, a_115, t);
          t = (ATerm) ATmakeAppl(sym__2, x_54, y_54);
        }
      }
  }
  t = v_114;
  return(t);
}
ATerm end_scope_1_0 (ATerm o_123 (ATerm), ATerm t)
{
  ATerm c_115 = NULL,d_115 = NULL,e_115 = NULL,f_115 = NULL,g_115 = NULL,h_115 = NULL,i_115 = NULL;
  f_115 = t;
  t = o_123(t);
  e_115 = t;
  {
    ATerm c_53 = t;
    int d_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_115 = NULL;
        t = term_u_52;
        j_115 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_115, term_u_52);
        t = f_12(e_115, j_115, t);
        LocalPopChoice(d_53);
      }
    else
      {
        t = c_53;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_115 = ATgetFirst((ATermList) t);
      c_115 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_115, term_u_52, c_115);
  t = lookup_table_0_1(e_115, t);
  i_115 = t;
  t = term_u_52;
  g_115 = t;
  t = i_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      h_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12(g_115, c_115, h_115, t);
  t = d_115;
  {
    static ATerm m_15 (ATerm t)
    {
      ATerm k_115 = NULL;
      k_115 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_115, k_115);
      t = o_11(e_115, k_115, t);
      return(t);
    }
    t = map_1_0(m_15, t);
  }
  t = f_115;
  return(t);
}
ATerm restore_always_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm t)
{
  ATerm e_53 = t;
  int f_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_102(t);
      t = t_102(t);
      LocalPopChoice(f_53);
    }
  else
    {
      t = e_53;
      t = t_102(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm n_123 (ATerm), ATerm t)
{
  ATerm m_115 = NULL,n_115 = NULL,o_115 = NULL,p_115 = NULL,q_115 = NULL,r_115 = NULL,s_115 = NULL;
  n_115 = t;
  t = n_123(t);
  m_115 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_115, term_u_52);
  {
    ATerm g_53 = t;
    int h_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_115 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm i_53 = ATgetArgument(t, 0);
            ATerm j_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_52;
        w_115 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_115, term_u_52);
        t = f_12(m_115, w_115, t);
        LocalPopChoice(h_53);
      }
    else
      {
        t = g_53;
        t = (ATerm) ATempty;
      }
  }
  o_115 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_115, term_u_52, (ATerm) ATinsert(CheckATermList(o_115), (ATerm) ATempty));
  t = lookup_table_0_1(m_115, t);
  s_115 = t;
  t = term_u_52;
  p_115 = t;
  t = (ATerm) ATinsert(CheckATermList(o_115), (ATerm) ATempty);
  q_115 = t;
  t = s_115;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_115 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12(p_115, q_115, r_115, t);
  t = n_115;
  return(t);
}
ATerm scope_2_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm t)
{
  static ATerm n_15 (ATerm t)
  {
    t = end_scope_1_0(p_123, t);
    return(t);
  }
  t = begin_scope_1_0(p_123, t);
  t = restore_always_2_0(q_123, n_15, t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  t = term_n_52;
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm b_116 = NULL,c_116 = NULL,d_116 = NULL,e_116 = NULL,h_26 = NULL;
  e_116 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_116);
  b_116 = t;
  t = c_116;
  t = map_1_0(y_15, t);
  d_116 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, d_116);
  h_26 = t;
  t = SSLsetAnnotations(h_26, b_116);
  t = alltd_1_0(VarToConst_0_0, t);
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm r_116 = NULL,s_116 = NULL;
  s_116 = t;
  if(match_cons(t, sym_Constructors_1))
    {
      r_116 = ATgetArgument(t, 0);
      {
        ATerm k_53 = t;
        int l_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_50 = NULL,j_50 = NULL,b_26 = NULL;
            t = SSLgetAnnotations(s_116);
            h_50 = t;
            t = r_116;
            t = map_1_0(z_15, t);
            j_50 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, j_50);
            b_26 = t;
            t = SSLsetAnnotations(b_26, h_50);
            LocalPopChoice(l_53);
          }
        else
          {
            t = k_53;
            t = s_116;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Overlays_1))
        {
          r_116 = ATgetArgument(t, 0);
          {
            ATerm m_53 = t;
            int n_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_50 = NULL,a_51 = NULL,g_26 = NULL;
                t = SSLgetAnnotations(s_116);
                v_50 = t;
                t = r_116;
                t = map_1_0(a_16, t);
                a_51 = t;
                t = (ATerm) ATmakeAppl(sym_Overlays_1, a_51);
                g_26 = t;
                t = SSLsetAnnotations(g_26, v_50);
                LocalPopChoice(n_53);
              }
            else
              {
                t = m_53;
                t = s_116;
              }
          }
        }
      else
        {
          t = s_116;
        }
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm o_53 = t;
  int p_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(p_53);
    }
  else
    {
      t = o_53;
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm q_53 = t;
  int r_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = DeclareVarToConst_0_0(t);
      LocalPopChoice(r_53);
    }
  else
    {
      t = q_53;
    }
  return(t);
}
ATerm vars_to_consts_0_0 (ATerm t)
{
  t = scope_2_0(o_15, v_15, t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_116 = NULL,a_117 = NULL,b_117 = NULL;
  z_116 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_116;
    }
  else
    {
      static ATerm b_16 (ATerm t)
      {
        t = not_null(b_117);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_117 = ATgetFirst((ATermList) t);
          if(((b_117 != NULL) && (b_117 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_117 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_117;
      t = at_end_1_0(b_16, t);
    }
  return(t);
}
ATerm filter_1_0 (ATerm l_118 (ATerm), ATerm t)
{
  ATerm v_117 = NULL,w_117 = NULL,x_117 = NULL;
  v_117 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_117;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_117 = ATgetFirst((ATermList) t);
          x_117 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm s_53 = t;
        int t_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_51 = NULL,s_51 = NULL,t_51 = NULL,q_26 = NULL;
            t = SSLgetAnnotations(v_117);
            o_51 = t;
            t = w_117;
            t = l_118(t);
            s_51 = t;
            t = x_117;
            t = filter_1_0(l_118, t);
            t_51 = t;
            t = (ATerm) ATinsert(CheckATermList(t_51), s_51);
            q_26 = t;
            t = SSLsetAnnotations(q_26, o_51);
            LocalPopChoice(t_53);
          }
        else
          {
            t = s_53;
            t = x_117;
            t = filter_1_0(l_118, t);
          }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm z_110 (ATerm), ATerm t)
{
  static ATerm o_118 (ATerm t)
  {
    ATerm k_118 = NULL,m_118 = NULL,n_118 = NULL;
    n_118 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_118 = ATgetFirst((ATermList) t);
        m_118 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_52 = NULL,m_52 = NULL,n_27 = NULL;
          t = SSLgetAnnotations(n_118);
          e_52 = t;
          t = m_118;
          t = o_118(t);
          m_52 = t;
          t = (ATerm) ATinsert(CheckATermList(m_52), k_118);
          n_27 = t;
          t = SSLsetAnnotations(n_27, e_52);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_118;
        t = z_110(t);
      }
    return(t);
  }
  t = o_118(t);
  return(t);
}
static ATerm a_119 (ATerm s_118, ATerm t)
{
  ATerm t_118 = NULL;
  t = SSL_explode_term(s_118);
  if(match_cons(t, sym__2))
    {
      ATerm u_53 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_53) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_118;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_118 = NULL,w_118 = NULL,x_118 = NULL;
  x_118 = t;
  if(match_cons(t, sym__2))
    {
      v_118 = ATgetArgument(t, 0);
      w_118 = ATgetArgument(t, 1);
      {
        ATerm w_53 = t;
        int x_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm c_16 (ATerm t)
            {
              t = w_118;
              return(t);
            }
            t = v_118;
            t = at_end_1_0(c_16, t);
            LocalPopChoice(x_53);
          }
        else
          {
            t = w_53;
            t = a_119(x_118, t);
          }
      }
    }
  else
    {
      t = a_119(x_118, t);
    }
  return(t);
}
static ATerm r_11 (ATerm c_35, ATerm o_34, ATerm t)
{
  ATerm b_119 = NULL,c_119 = NULL;
  static ATerm e_16 (ATerm t)
  {
    ATerm d_119 = NULL,e_119 = NULL,f_119 = NULL,g_119 = NULL;
    g_119 = t;
    t = SSL_explode_term(g_119);
    if(match_cons(t, sym__2))
      {
        if(((b_119 != NULL) && (b_119 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          b_119 = ATgetArgument(t, 0);
        {
          ATerm z_53 = ATgetArgument(t, 1);
          if(((ATgetType(z_53) == AT_LIST) && !(ATisEmpty(z_53))))
            {
              d_119 = ATgetFirst((ATermList) z_53);
              {
                ATerm c_54 = (ATerm) ATgetNext((ATermList) z_53);
                if(((ATgetType(c_54) != AT_LIST) || !(ATisEmpty(c_54))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, d_119, not_null(c_119));
    t = conc_0_0(t);
    e_119 = t;
    t = (ATerm) ATinsert(ATempty, e_119);
    f_119 = t;
    t = SSL_mkterm(b_119, f_119);
    return(t);
  }
  t = SSL_explode_term(c_35);
  if(match_cons(t, sym__2))
    {
      if(((b_119 != NULL) && (b_119 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        b_119 = ATgetArgument(t, 0);
      {
        ATerm d_54 = ATgetArgument(t, 1);
        if(((ATgetType(d_54) == AT_LIST) && !(ATisEmpty(d_54))))
          {
            if(((c_119 != NULL) && (c_119 != ATgetFirst((ATermList) d_54))))
              _fail(ATgetFirst((ATermList) d_54));
            else
              c_119 = ATgetFirst((ATermList) d_54);
            {
              ATerm g_54 = (ATerm) ATgetNext((ATermList) d_54);
              if(((ATgetType(g_54) != AT_LIST) || !(ATisEmpty(g_54))))
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
  t = fetch_1_0(e_16, t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm l_117 (ATerm), ATerm t)
{
  ATerm i_119 = NULL,j_119 = NULL,k_119 = NULL;
  i_119 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_119;
      t = j_117(t);
    }
  else
    {
      ATerm n_119 = NULL,o_119 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_119 = ATgetFirst((ATermList) t);
          k_119 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_119;
      t = l_117(t);
      n_119 = t;
      t = k_119;
      t = foldr_3_0(j_117, k_117, l_117, t);
      o_119 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_119, o_119);
      t = k_117(t);
    }
  return(t);
}
static ATerm f_16 (ATerm t)
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_54), term_i_54), term_h_54);
  return(t);
}
static ATerm g_16 (ATerm t)
{
  ATerm v_119 = NULL,w_119 = NULL;
  if(match_cons(t, sym__2))
    {
      v_119 = ATgetArgument(t, 0);
      w_119 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_11(v_119, w_119, t);
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm x_119 = NULL,y_119 = NULL;
  y_119 = t;
  if(match_cons(t, sym_Signature_1))
    {
      x_119 = ATgetArgument(t, 0);
      {
        ATerm k_54 = t;
        int l_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_120 = NULL;
            t = x_119;
            t = filter_1_0(i_16, t);
            t = concat_0_0(t);
            a_120 = t;
            t = (ATerm) ATmakeAppl(sym_Constructors_1, a_120);
            LocalPopChoice(l_54);
          }
        else
          {
            t = k_54;
            t = y_119;
          }
      }
    }
  else
    {
      if(match_cons(t, sym_Rules_1))
        {
          x_119 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Strategies_1, x_119);
        }
      else
        {
          t = y_119;
        }
    }
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm b_120 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      b_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_120;
  return(t);
}
ATerm CombineSections_0_0 (ATerm t)
{
  ATerm r_119 = NULL,s_119 = NULL,t_119 = NULL,u_119 = NULL,p_27 = NULL;
  u_119 = t;
  if(match_cons(t, sym_Specification_1))
    {
      s_119 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_119);
  r_119 = t;
  t = s_119;
  t = foldr_3_0(f_16, g_16, h_16, t);
  t_119 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, t_119);
  p_27 = t;
  t = SSLsetAnnotations(p_27, r_119);
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm m_54 = t;
  int n_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(n_54);
    }
  else
    {
      t = m_54;
    }
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm z_120 = NULL,a_121 = NULL,b_121 = NULL,c_121 = NULL,d_121 = NULL;
  d_121 = t;
  if(match_cons(t, sym_LRule_1))
    {
      c_121 = ATgetArgument(t, 0);
      t = c_121;
      if(match_cons(t, sym_Rule_3))
        {
          z_120 = ATgetArgument(t, 0);
          a_121 = ATgetArgument(t, 1);
          b_121 = ATgetArgument(t, 2);
          {
            ATerm o_54 = t;
            int p_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_121 = NULL;
                t = z_120;
                t = free_vars_3_0(l_16, m_16, tboundin_3_0, t);
                h_121 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, h_121, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, z_120, a_121, b_121)));
                LocalPopChoice(p_54);
              }
            else
              {
                t = o_54;
                t = d_121;
              }
          }
        }
      else
        {
          t = d_121;
        }
    }
  else
    {
      if(match_cons(t, sym_ScopeDefault_1))
        {
          c_121 = ATgetArgument(t, 0);
          {
            ATerm q_54 = t;
            int u_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_122 = NULL;
                t = c_121;
                t = free_vars_3_0(o_16, p_16, tboundin_3_0, t);
                f_122 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, f_122, c_121);
                LocalPopChoice(u_54);
              }
            else
              {
                t = q_54;
                t = d_121;
              }
          }
        }
      else
        {
          t = d_121;
        }
    }
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm i_121 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      i_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, i_121);
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm v_54 = t;
  int w_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(w_54);
    }
  else
    {
      t = v_54;
      {
        ATerm z_54 = t;
        int a_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(a_55);
          }
        else
          {
            t = z_54;
            {
              ATerm b_55 = t;
              int c_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_121 = NULL,l_121 = NULL,m_121 = NULL,n_121 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      k_121 = ATgetArgument(t, 0);
                      l_121 = ATgetArgument(t, 1);
                      m_121 = ATgetArgument(t, 2);
                      n_121 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = m_121;
                  t = map_1_0(n_16, t);
                  LocalPopChoice(c_55);
                }
              else
                {
                  t = b_55;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm z_121 = NULL;
  ATerm f_55 = t;
  int g_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_121 = ATgetArgument(t, 0);
          {
            ATerm h_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_55);
      t = z_121;
    }
  else
    {
      t = f_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_121;
    }
  return(t);
}
static ATerm o_16 (ATerm t)
{
  ATerm g_122 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_122);
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm i_55 = t;
  int j_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(j_55);
    }
  else
    {
      t = i_55;
      {
        ATerm k_55 = t;
        int l_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(l_55);
          }
        else
          {
            t = k_55;
            {
              ATerm m_55 = t;
              int n_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      i_122 = ATgetArgument(t, 0);
                      j_122 = ATgetArgument(t, 1);
                      k_122 = ATgetArgument(t, 2);
                      l_122 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_122;
                  t = map_1_0(q_16, t);
                  LocalPopChoice(n_55);
                }
              else
                {
                  t = m_55;
                  t = Bind8_0_0(t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_16 (ATerm t)
{
  ATerm s_122 = NULL;
  ATerm o_55 = t;
  int p_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_122 = ATgetArgument(t, 0);
          {
            ATerm s_55 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_55);
      t = s_122;
    }
  else
    {
      t = o_55;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_122;
    }
  return(t);
}
static ATerm r_16 (ATerm t)
{
  t = Cons_2_0(s_16, t_16, t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  ATerm j_123 = NULL,k_123 = NULL,l_123 = NULL,m_123 = NULL,s_27 = NULL;
  m_123 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_123 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_123);
  j_123 = t;
  t = k_123;
  t = topdown_1_0(u_16, t);
  t = listtd_1_0(v_16, t);
  l_123 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_123);
  s_27 = t;
  t = SSLsetAnnotations(s_27, j_123);
  return(t);
}
static ATerm t_16 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm u_16 (ATerm t)
{
  ATerm u_55 = t;
  int y_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_56 = t;
      int c_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = DefDynRuleScope_0_0(t);
          LocalPopChoice(c_56);
        }
      else
        {
          t = b_56;
          {
            ATerm u_123 = NULL,v_123 = NULL;
            if(match_cons(t, sym_AddScopeLabel_2))
              {
                u_123 = ATgetArgument(t, 0);
                v_123 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_56, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, v_123), (ATerm) ATmakeAppl(sym_Str_1, u_123)));
          }
        }
      LocalPopChoice(y_55);
    }
  else
    {
      t = u_55;
    }
  return(t);
}
static ATerm v_16 (ATerm t)
{
  t = repeat_2_0(w_16, _id, t);
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm a_124 = NULL,b_124 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_124 = ATgetFirst((ATermList) t);
      b_124 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_10(a_124, b_124, t);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm h_56 = t;
  int k_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = HL_0_0(t);
      LocalPopChoice(k_56);
    }
  else
    {
      t = h_56;
    }
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm f_124 = NULL;
  if(match_cons(t, sym_Constructors_1))
    {
      f_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Signature_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Constructors_1, f_124)));
  return(t);
}
ATerm normalize_spec_0_0 (ATerm t)
{
  ATerm t_120 = NULL,u_120 = NULL,v_120 = NULL,w_120 = NULL,x_28 = NULL;
  t = CombineSections_0_0(t);
  t = topdown_1_0(j_16, t);
  t = vars_to_consts_0_0(t);
  t = bottomup_1_0(k_16, t);
  {
    ATerm n_56 = t;
    int o_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_122 = NULL,y_122 = NULL,z_122 = NULL;
        x_122 = t;
        t = term_p_56;
        y_122 = t;
        t = term_w_56;
        z_122 = t;
        t = term_z_56;
        t = f_12(y_122, z_122, t);
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
          _fail(t);
        t = x_122;
        LocalPopChoice(o_56);
        {
          ATerm a_123 = NULL,b_123 = NULL,c_123 = NULL,d_123 = NULL,e_123 = NULL,f_123 = NULL,g_123 = NULL,h_123 = NULL,t_28 = NULL,k_28 = NULL;
          h_123 = t;
          if(match_cons(t, sym_Specification_1))
            {
              b_123 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(h_123);
          a_123 = t;
          t = b_123;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_123 = ATgetFirst((ATermList) t);
              e_123 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(b_123);
          c_123 = t;
          t = e_123;
          t = Cons_2_0(_id, r_16, t);
          f_123 = t;
          t = (ATerm) ATinsert(CheckATermList(f_123), d_123);
          k_28 = t;
          t = SSLsetAnnotations(k_28, c_123);
          g_123 = t;
          t = (ATerm) ATmakeAppl(sym_Specification_1, g_123);
          t_28 = t;
          t = SSLsetAnnotations(t_28, a_123);
        }
      }
    else
      {
        t = n_56;
        t = LiftDynamicRules_old_0_0(t);
      }
  }
  t = topdown_1_0(x_16, t);
  w_120 = t;
  if(match_cons(t, sym_Specification_1))
    {
      u_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_120);
  t_120 = t;
  t = u_120;
  t = fetch_1_0(z_16, t);
  v_120 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, v_120);
  x_28 = t;
  t = SSLsetAnnotations(x_28, t_120);
  return(t);
}
static ATerm s_11 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm g_124 = NULL;
  t = SSL_fputc(e_40, f_40);
  g_124 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_124);
  return(t);
}
static ATerm t_11 (ATerm i_24, ATerm j_24, ATerm t)
{
  ATerm h_124 = NULL;
  t = SSL_write_term_to_stream_text(i_24, j_24);
  h_124 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_124);
  return(t);
}
static ATerm v_11 (ATerm z_109 (ATerm), ATerm x_175, ATerm o_24, ATerm t)
{
  ATerm i_124 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_175, term_a_57);
  t = z_11(t);
  i_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_124, o_24);
  t = z_109(t);
  t = fclose_0_0(t);
  t = o_24;
  return(t);
}
static ATerm u_11 (ATerm e_24, ATerm f_24, ATerm t)
{
  ATerm j_124 = NULL;
  t = SSL_write_term_to_stream_baf(e_24, f_24);
  j_124 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_124);
  return(t);
}
static ATerm a_17 (ATerm t)
{
  ATerm q_124 = NULL,r_124 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_57 = ATgetArgument(t, 0);
      if(match_cons(b_57, sym_Stream_1))
        {
          q_124 = ATgetArgument(b_57, 0);
        }
      else
        _fail(t);
      r_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11(q_124, r_124, t);
  return(t);
}
static ATerm b_17 (ATerm t)
{
  ATerm s_124 = NULL,t_124 = NULL,u_124 = NULL,v_124 = NULL,w_124 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_57 = ATgetArgument(t, 0);
      if(match_cons(c_57, sym_Stream_1))
        {
          v_124 = ATgetArgument(c_57, 0);
        }
      else
        _fail(t);
      w_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_11(v_124, w_124, t);
  s_124 = t;
  t = term_t_25;
  t_124 = t;
  t = s_124;
  if(match_cons(t, sym_Stream_1))
    {
      u_124 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_25, s_124);
  t = s_11(t_124, u_124, t);
  return(t);
}
ATerm output_1_0 (ATerm x_128 (ATerm), ATerm t)
{
  ATerm k_124 = NULL,l_124 = NULL;
  t = x_128(t);
  l_124 = t;
  {
    ATerm d_57 = t;
    int e_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_124 = NULL,n_124 = NULL;
        t = term_p_56;
        m_124 = t;
        t = term_f_57;
        n_124 = t;
        t = term_g_57;
        t = f_12(m_124, n_124, t);
        LocalPopChoice(e_57);
      }
    else
      {
        t = d_57;
        t = term_i_57;
      }
  }
  k_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_124, l_124);
  {
    ATerm l_57 = t;
    int m_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_124 = NULL,p_124 = NULL;
        t = term_p_56;
        o_124 = t;
        t = term_p_57;
        p_124 = t;
        t = term_u_57;
        t = f_12(o_124, p_124, t);
        t = (ATerm) ATmakeAppl(sym__2, k_124, l_124);
        LocalPopChoice(m_57);
        if(match_cons(t, sym__2))
          {
            ATerm w_57 = ATgetArgument(t, 0);
            ATerm x_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_11(a_17, k_124, l_124, t);
      }
    else
      {
        t = l_57;
        if(match_cons(t, sym__2))
          {
            ATerm y_57 = ATgetArgument(t, 0);
            ATerm z_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_11(b_17, k_124, l_124, t);
      }
  }
  return(t);
}
static ATerm k_125 (ATerm e_125, ATerm t)
{
  t = SSL_fclose(e_125);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_125 = NULL,i_125 = NULL;
  i_125 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_125 = ATgetArgument(t, 0);
      {
        ATerm a_58 = t;
        int b_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_125);
            LocalPopChoice(b_58);
          }
        else
          {
            t = a_58;
            t = k_125(i_125, t);
          }
      }
    }
  else
    {
      t = k_125(i_125, t);
    }
  return(t);
}
static ATerm w_11 (ATerm k_24, ATerm t)
{
  t = SSL_read_term_from_stream(k_24);
  return(t);
}
static ATerm x_11 (ATerm x_38, ATerm y_38, ATerm t)
{
  t = SSL_strcat(x_38, y_38);
  return(t);
}
static ATerm y_11 (ATerm g_40, ATerm h_40, ATerm t)
{
  ATerm l_125 = NULL;
  t = SSL_fopen(g_40, h_40);
  l_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_125);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_125 = NULL;
  t = SSL_stdin_stream();
  m_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_125);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_125 = NULL;
  t = SSL_stdout_stream();
  n_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_125);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_125 = NULL;
  t = SSL_stderr_stream();
  o_125 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_125);
  return(t);
}
static ATerm w_126 (ATerm u_125, ATerm t)
{
  ATerm v_125 = NULL;
  t = SSL_explode_term(u_125);
  if(match_cons(t, sym__2))
    {
      ATerm d_58 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_58) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm f_58 = ATgetArgument(t, 1);
        if(((ATgetType(f_58) == AT_LIST) && !(ATisEmpty(f_58))))
          {
            v_125 = ATgetFirst((ATermList) f_58);
            {
              ATerm g_58 = (ATerm) ATgetNext((ATermList) f_58);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_125;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_125;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_125;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_125;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_126 (ATerm z_125, ATerm a_126, ATerm b_126, ATerm t)
{
  ATerm c_126 = NULL,d_126 = NULL,e_126 = NULL,h_126 = NULL,d_30 = NULL;
  t = SSLgetAnnotations(b_126);
  e_126 = t;
  t = z_125;
  if(match_cons(t, sym_Path_1))
    {
      h_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_126, a_126);
  d_30 = t;
  t = SSLsetAnnotations(d_30, e_126);
  if(match_cons(t, sym__2))
    {
      c_126 = ATgetArgument(t, 0);
      d_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_11(c_126, d_126, t);
  return(t);
}
static ATerm y_126 (ATerm j_126, ATerm k_126, ATerm l_126, ATerm t)
{
  ATerm m_126 = NULL,n_126 = NULL,o_126 = NULL,r_126 = NULL,e_30 = NULL;
  t = SSLgetAnnotations(l_126);
  o_126 = t;
  t = SSL_is_string(j_126);
  r_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_126, k_126);
  e_30 = t;
  t = SSLsetAnnotations(e_30, o_126);
  if(match_cons(t, sym__2))
    {
      m_126 = ATgetArgument(t, 0);
      n_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_11(m_126, n_126, t);
  return(t);
}
static ATerm z_11 (ATerm t)
{
  ATerm t_126 = NULL,u_126 = NULL,v_126 = NULL;
  t_126 = t;
  if(match_cons(t, sym__2))
    {
      u_126 = ATgetArgument(t, 0);
      v_126 = ATgetArgument(t, 1);
      {
        ATerm i_58 = t;
        int r_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_126(t_126, t);
            LocalPopChoice(r_58);
          }
        else
          {
            t = i_58;
            {
              ATerm v_58 = t;
              int y_58 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_126(u_126, v_126, t_126, t);
                  LocalPopChoice(y_58);
                }
              else
                {
                  t = v_58;
                  t = y_126(u_126, v_126, t_126, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_126(t_126, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_127 = NULL,b_127 = NULL,c_127 = NULL,h_127 = NULL;
  h_127 = t;
  {
    ATerm z_58 = t;
    int a_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_127, term_b_59);
        t = z_11(t);
        LocalPopChoice(a_59);
      }
    else
      {
        t = z_58;
        {
          ATerm v_53 = NULL,y_53 = NULL;
          t = term_c_59;
          y_53 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_59, h_127);
          t = x_11(y_53, h_127, t);
          v_53 = t;
          t = SSL_perror(v_53);
          _fail(t);
        }
      }
  }
  b_127 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_127 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_11(c_127, t);
  a_127 = t;
  t = b_127;
  t = fclose_0_0(t);
  t = a_127;
  return(t);
}
ATerm input_1_0 (ATerm y_128 (ATerm), ATerm t)
{
  ATerm d_59 = t;
  int e_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_127 = NULL,l_127 = NULL;
      t = term_p_56;
      k_127 = t;
      t = term_f_59;
      l_127 = t;
      t = term_g_59;
      t = f_12(k_127, l_127, t);
      LocalPopChoice(e_59);
    }
  else
    {
      t = d_59;
      t = term_j_59;
    }
  t = ReadFromFile_0_0(t);
  t = y_128(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm m_127 = NULL,n_127 = NULL,o_127 = NULL,p_127 = NULL,q_127 = NULL;
  m_127 = t;
  t = term_k_59;
  t = whoami_0_0(t);
  n_127 = t;
  t = term_m_36;
  p_127 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_59), n_127), term_l_59);
  q_127 = t;
  t = SSL_printnl(p_127, q_127);
  t = term_o_36;
  o_127 = t;
  t = SSL_exit(o_127);
  t = m_127;
  return(t);
}
static ATerm c_17 (ATerm t)
{
  ATerm s_127 = NULL;
  s_127 = t;
  if(match_string(t, "-k"))
    {
      t = s_127;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_127;
    }
  return(t);
}
static ATerm d_17 (ATerm t)
{
  ATerm t_127 = NULL,u_127 = NULL,v_127 = NULL;
  t_127 = t;
  t = SSL_string_to_int(t_127);
  u_127 = t;
  t = term_o_59;
  v_127 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_59, u_127);
  t = i_12(v_127, u_127, t);
  t = t_127;
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = term_p_59;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_17, d_17, e_17, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm x_127 = NULL;
  x_127 = t;
  if(match_string(t, "-S"))
    {
      t = x_127;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_127;
    }
  return(t);
}
static ATerm g_17 (ATerm t)
{
  ATerm y_127 = NULL,z_127 = NULL;
  t = term_s_59;
  y_127 = t;
  t = term_w_59;
  z_127 = t;
  t = term_x_59;
  t = i_12(y_127, z_127, t);
  t = term_z_59;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_a_60;
  return(t);
}
static ATerm i_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm a_128 = NULL,b_128 = NULL,c_128 = NULL;
  a_128 = t;
  t = SSL_string_to_int(a_128);
  b_128 = t;
  t = term_s_59;
  c_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_59, b_128);
  t = i_12(c_128, b_128, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_128);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  t = term_g_60;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_17 (ATerm t)
{
  ATerm d_128 = NULL,e_128 = NULL;
  t = term_h_60;
  d_128 = t;
  t = term_k_59;
  e_128 = t;
  t = term_i_60;
  t = i_12(d_128, e_128, t);
  t = term_m_60;
  return(t);
}
static ATerm n_17 (ATerm t)
{
  t = term_n_60;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_60 = t;
  int p_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_17, g_17, h_17, t);
      LocalPopChoice(p_60);
    }
  else
    {
      t = o_60;
      {
        ATerm q_60 = t;
        int r_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_17, j_17, k_17, t);
            LocalPopChoice(r_60);
          }
        else
          {
            t = q_60;
            t = Option_3_0(l_17, m_17, n_17, t);
          }
      }
    }
  return(t);
}
static ATerm i_12 (ATerm x_49, ATerm y_49, ATerm t)
{
  ATerm f_128 = NULL,g_128 = NULL;
  t = term_p_56;
  f_128 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_56, x_49, y_49);
  t = lookup_table_0_1(f_128, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12(x_49, y_49, g_128, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_56, x_49, y_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm k_128 = NULL,l_128 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_128 = NULL,n_128 = NULL,p_128 = NULL;
      t = term_k_59;
      t = i_0(t);
      m_128 = t;
      t = term_s_60;
      n_128 = t;
      t = term_u_60;
      p_128 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_60, term_u_60, m_128);
      t = g_12(n_128, p_128, m_128, t);
      _fail(t);
    }
  else
    {
      ATerm w_128 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_128 = ATgetFirst((ATermList) t);
          l_128 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_128;
      t = d_0(t);
      t = term_k_59;
      t = g_0(t);
      w_128 = t;
      t = (ATerm) ATinsert(CheckATermList(l_128), w_128);
    }
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm a_129 = NULL;
  a_129 = t;
  if(match_string(t, "-o"))
    {
      t = a_129;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_129;
    }
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm b_129 = NULL,c_129 = NULL;
  b_129 = t;
  t = term_f_57;
  c_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_57, b_129);
  t = i_12(c_129, b_129, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_129);
  return(t);
}
static ATerm q_17 (ATerm t)
{
  t = term_w_60;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_17, p_17, q_17, t);
  return(t);
}
static ATerm r_17 (ATerm t)
{
  ATerm e_129 = NULL;
  e_129 = t;
  if(match_string(t, "-i"))
    {
      t = e_129;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_129;
    }
  return(t);
}
static ATerm s_17 (ATerm t)
{
  ATerm f_129 = NULL,g_129 = NULL;
  f_129 = t;
  t = term_f_59;
  g_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_59, f_129);
  t = i_12(g_129, f_129, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, f_129);
  return(t);
}
static ATerm t_17 (ATerm t)
{
  t = term_x_60;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_17, s_17, t_17, t);
  return(t);
}
static ATerm g_12 (ATerm s_54, ATerm t_54, ATerm r_54, ATerm t)
{
  ATerm i_129 = NULL,j_129 = NULL,k_129 = NULL,l_129 = NULL,m_129 = NULL;
  i_129 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_54, t_54);
  {
    ATerm a_61 = t;
    int b_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_61 = ATgetArgument(t, 0);
            ATerm d_61 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, s_54, t_54);
        t = f_12(s_54, t_54, t);
        LocalPopChoice(b_61);
      }
    else
      {
        t = a_61;
        t = (ATerm) ATempty;
      }
  }
  j_129 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_54, t_54, (ATerm) ATinsert(CheckATermList(j_129), r_54));
  t = lookup_table_0_1(s_54, t);
  m_129 = t;
  t = (ATerm) ATinsert(CheckATermList(j_129), r_54);
  k_129 = t;
  t = m_129;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12(t_54, k_129, l_129, t);
  t = i_129;
  return(t);
}
ATerm ArgOption_3_0 (ATerm o_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm t_129 = NULL,u_129 = NULL,v_129 = NULL,w_129 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_129 = NULL,y_129 = NULL,z_129 = NULL;
      t = term_k_59;
      t = t_0(t);
      x_129 = t;
      t = term_s_60;
      y_129 = t;
      t = term_u_60;
      z_129 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_60, term_u_60, x_129);
      t = g_12(y_129, z_129, x_129, t);
      _fail(t);
    }
  else
    {
      ATerm d_130 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_129 = ATgetFirst((ATermList) t);
          u_129 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_129;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_129 = ATgetFirst((ATermList) t);
          w_129 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_129;
      t = o_0(t);
      t = v_129;
      t = r_0(t);
      d_130 = t;
      t = (ATerm) ATinsert(CheckATermList(w_129), d_130);
    }
  return(t);
}
static ATerm u_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--dr", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm f_130 = NULL,g_130 = NULL;
  f_130 = t;
  if(match_string(t, "old"))
    {
      t = f_130;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("new", 0, ATtrue)))
        _fail(t);
      t = f_130;
    }
  t = term_w_56;
  g_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_56, f_130);
  t = i_12(g_130, f_130, t);
  t = term_k_59;
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_f_61;
  return(t);
}
ATerm normalize_spec_options_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_17, v_17, w_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_130 = NULL,j_130 = NULL,k_130 = NULL,l_130 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_59;
  t = whoami_0_0(t);
  i_130 = t;
  t = term_m_36;
  k_130 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_61), i_130);
  l_130 = t;
  t = SSL_printnl(k_130, l_130);
  t = term_o_36;
  j_130 = t;
  t = SSL_exit(j_130);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_130 = NULL,n_130 = NULL;
  t = term_p_56;
  m_130 = t;
  t = term_h_61;
  n_130 = t;
  t = term_i_61;
  t = f_12(m_130, n_130, t);
  return(t);
}
static ATerm a_12 (ATerm a_43, ATerm b_43, ATerm t)
{
  ATerm m_61 = t;
  int n_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_43, b_43);
      LocalPopChoice(n_61);
    }
  else
    {
      t = m_61;
      t = SSL_addr(a_43, b_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_117 (ATerm), ATerm i_117 (ATerm), ATerm t)
{
  ATerm p_130 = NULL,s_130 = NULL,t_130 = NULL;
  p_130 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_130;
      t = h_117(t);
    }
  else
    {
      ATerm w_130 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_130 = ATgetFirst((ATermList) t);
          t_130 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_130;
      t = foldr_2_0(h_117, i_117, t);
      w_130 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_130, w_130);
      t = i_117(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = term_w_59;
  return(t);
}
static ATerm y_17 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL;
  if(match_cons(t, sym__2))
    {
      e_54 = ATgetArgument(t, 0);
      f_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(e_54, f_54, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_130 = NULL,a_54 = NULL,b_54 = NULL;
  t = times_0_0(t);
  b_54 = t;
  t = SSL_explode_term(b_54);
  if(match_cons(t, sym__2))
    {
      ATerm o_61 = ATgetArgument(t, 0);
      a_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_54;
  t = foldr_2_0(x_17, y_17, t);
  z_130 = t;
  t = SSL_TicksToSeconds(z_130);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_131 = NULL,l_131 = NULL,m_131 = NULL;
  k_131 = t;
  if(match_cons(t, sym__2))
    {
      l_131 = ATgetArgument(t, 0);
      m_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_61 = t;
    int q_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_131;
        if((l_131 != t))
          {
            _fail(t);
          }
        t = k_131;
        LocalPopChoice(q_61);
      }
    else
      {
        t = p_61;
        t = (ATerm) ATmakeAppl(sym__2, l_131, m_131);
        {
          ATerm r_61 = t;
          int s_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_131, m_131);
              LocalPopChoice(s_61);
            }
          else
            {
              t = r_61;
              t = SSL_gtr(l_131, m_131);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_131, m_131);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_125 (ATerm), ATerm t)
{
  ATerm q_131 = NULL;
  q_131 = t;
  {
    ATerm t_61 = t;
    int u_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_131 = NULL,t_131 = NULL,u_131 = NULL;
        t = term_p_56;
        t_131 = t;
        t = term_s_59;
        u_131 = t;
        t = term_v_61;
        t = f_12(t_131, u_131, t);
        s_131 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_131, term_o_36);
        t = geq_0_0(t);
        t = q_131;
        t = y_125(t);
        LocalPopChoice(u_61);
      }
    else
      {
        t = t_61;
        t = q_131;
      }
  }
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm w_131 = NULL,x_131 = NULL,z_131 = NULL,a_132 = NULL;
  t = run_time_0_0(t);
  w_131 = t;
  t = term_k_59;
  t = whoami_0_0(t);
  x_131 = t;
  t = term_m_36;
  z_131 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_61), w_131), term_w_61), x_131);
  a_132 = t;
  t = SSL_printnl(z_131, a_132);
  t = (ATerm) ATmakeAppl(sym__2, term_m_36, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_61), w_131), term_w_61), x_131));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(z_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_132 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_59;
  b_132 = t;
  t = SSL_exit(b_132);
  return(t);
}
static ATerm b_18 (ATerm t)
{
  ATerm l_132 = NULL,m_132 = NULL;
  m_132 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = m_132;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          l_132 = ATgetArgument(t, 0);
          {
            ATerm t_55 = NULL,n_30 = NULL;
            t = SSLgetAnnotations(m_132);
            t_55 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, l_132);
            n_30 = t;
            t = SSLsetAnnotations(n_30, t_55);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = m_132;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_128 (ATerm), ATerm t)
{
  ATerm y_61 = t;
  int z_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_132 = NULL,f_132 = NULL;
      t = term_p_56;
      e_132 = t;
      t = term_a_62;
      f_132 = t;
      t = term_b_62;
      t = f_12(e_132, f_132, t);
      LocalPopChoice(z_61);
    }
  else
    {
      t = y_61;
      t = fetch_1_0(b_18, t);
    }
  t = o_128(t);
  return(t);
}
static ATerm j_12 (ATerm k_58, ATerm l_58, ATerm m_58, ATerm t)
{
  ATerm o_132 = NULL;
  t = SSL_hashtable_put(m_58, k_58, l_58);
  o_132 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_132);
  return(t);
}
ATerm lookup_table_0_1 (ATerm e_56, ATerm t)
{
  ATerm x_132 = NULL;
  t = table_hashtable_0_0(t);
  x_132 = t;
  {
    ATerm c_62 = t;
    int d_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_56 = NULL;
        t = x_132;
        if(match_cons(t, sym_Hashtable_1))
          {
            g_56 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_12(e_56, g_56, t);
        LocalPopChoice(d_62);
      }
    else
      {
        t = c_62;
        {
          ATerm x_56 = NULL;
          t = e_56;
          t = table_create_0_0(t);
          t = x_132;
          if(match_cons(t, sym_Hashtable_1))
            {
              x_56 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_12(e_56, x_56, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm s_58, ATerm t_58, ATerm t)
{
  ATerm a_133 = NULL;
  t = SSL_hashtable_create(s_58, t_58);
  a_133 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_133);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm b_133 = NULL,c_133 = NULL,h_133 = NULL,j_133 = NULL,k_133 = NULL;
  b_133 = t;
  t = term_e_62;
  j_133 = t;
  t = term_f_62;
  k_133 = t;
  t = b_133;
  t = new_hashtable_0_2(j_133, k_133, t);
  c_133 = t;
  t = b_133;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12(b_133, c_133, h_133, t);
  t = b_133;
  return(t);
}
static ATerm c_12 (ATerm p_58, ATerm q_58, ATerm t)
{
  ATerm l_133 = NULL;
  t = SSL_hashtable_remove(q_58, p_58);
  l_133 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, l_133);
  return(t);
}
static ATerm d_12 (ATerm u_58, ATerm t)
{
  ATerm m_133 = NULL;
  t = SSL_hashtable_destroy(u_58);
  m_133 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_133);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm n_133 = NULL;
  t = SSL_table_hashtable();
  n_133 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_133);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm o_133 = NULL,p_133 = NULL,q_133 = NULL,r_133 = NULL;
  o_133 = t;
  t = table_hashtable_0_0(t);
  p_133 = t;
  t = lookup_table_0_1(o_133, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_12(r_133, t);
  t = p_133;
  if(match_cons(t, sym_Hashtable_1))
    {
      q_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_12(o_133, q_133, t);
  t = o_133;
  return(t);
}
ATerm map_1_0 (ATerm i_110 (ATerm), ATerm t)
{
  static ATerm g_134 (ATerm t)
  {
    ATerm d_134 = NULL,e_134 = NULL,f_134 = NULL;
    d_134 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = d_134;
      }
    else
      {
        ATerm h_57 = NULL,q_57 = NULL,v_57 = NULL,t_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_134 = ATgetFirst((ATermList) t);
            f_134 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_134);
        h_57 = t;
        t = e_134;
        t = i_110(t);
        q_57 = t;
        t = f_134;
        t = g_134(t);
        v_57 = t;
        t = (ATerm) ATinsert(CheckATermList(v_57), q_57);
        t_30 = t;
        t = SSLsetAnnotations(t_30, h_57);
      }
    return(t);
  }
  t = g_134(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm j_134 = NULL,k_134 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_134 = ATgetFirst((ATermList) t);
      k_134 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_134 = NULL,p_134 = NULL;
        static ATerm c_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_134)), not_null(p_134));
          return(t);
        }
        t = k_134;
        t = n_0(t);
        if(((o_134 != NULL) && (o_134 != t)))
          _fail(t);
        else
          o_134 = t;
        t = j_134;
        t = k_0(t);
        if(((p_134 != NULL) && (p_134 != t)))
          _fail(t);
        else
          p_134 = t;
        t = k_134;
        t = reverse_acc_2_0(k_0, c_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_59;
      t = n_0(t);
    }
  return(t);
}
static ATerm e_18 (ATerm t)
{
  ATerm x_134 = NULL,y_134 = NULL,z_134 = NULL,v_30 = NULL;
  z_134 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_134);
  x_134 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, y_134);
  v_30 = t;
  t = SSLsetAnnotations(v_30, x_134);
  return(t);
}
static ATerm g_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_18 (ATerm t)
{
  ATerm b_135 = NULL;
  b_135 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_135), term_g_62);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_134 = NULL,s_134 = NULL;
  ATerm h_62 = t;
  int i_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_134 = NULL,w_134 = NULL;
      t = term_p_56;
      t_134 = t;
      t = term_h_61;
      w_134 = t;
      t = term_i_61;
      t = f_12(t_134, w_134, t);
      LocalPopChoice(i_62);
    }
  else
    {
      t = h_62;
      t = fetch_1_0(e_18, t);
    }
  t = term_m_62;
  t = echo_0_0(t);
  t = term_s_60;
  r_134 = t;
  t = term_u_60;
  s_134 = t;
  t = term_n_62;
  t = f_12(r_134, s_134, t);
  t = reverse_acc_2_0(_id, g_18, t);
  t = map_1_0(k_18, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_110 (ATerm), ATerm t)
{
  static ATerm h_136 (ATerm t)
  {
    ATerm y_135 = NULL,z_135 = NULL,e_136 = NULL;
    y_135 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_135 = ATgetFirst((ATermList) t);
        e_136 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_62 = t;
      int p_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_58 = NULL,h_58 = NULL,a_31 = NULL;
          t = SSLgetAnnotations(y_135);
          e_58 = t;
          t = z_135;
          t = s_110(t);
          h_58 = t;
          t = (ATerm) ATinsert(CheckATermList(e_136), h_58);
          a_31 = t;
          t = SSLsetAnnotations(a_31, e_58);
          LocalPopChoice(p_62);
        }
      else
        {
          t = o_62;
          {
            ATerm h_59 = NULL,m_59 = NULL,d_31 = NULL;
            t = SSLgetAnnotations(y_135);
            h_59 = t;
            t = e_136;
            t = h_136(t);
            m_59 = t;
            t = (ATerm) ATinsert(CheckATermList(m_59), z_135);
            d_31 = t;
            t = SSLsetAnnotations(d_31, h_59);
          }
        }
    }
    return(t);
  }
  t = h_136(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_136 = NULL,n_136 = NULL,o_136 = NULL;
  m_136 = t;
  {
    ATerm q_62 = t;
    int r_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_136;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_62 = ATgetFirst((ATermList) t);
                ATerm t_62 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_136;
          }
        LocalPopChoice(r_62);
      }
    else
      {
        t = q_62;
        t = (ATerm) ATinsert(ATempty, m_136);
      }
  }
  n_136 = t;
  t = term_i_57;
  o_136 = t;
  t = SSL_printnl(o_136, n_136);
  t = m_136;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm s_136 = NULL,t_136 = NULL;
  t = term_p_56;
  s_136 = t;
  t = term_h_61;
  t_136 = t;
  t = term_i_61;
  t = f_12(s_136, t_136, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm k_12 (ATerm n_58, ATerm o_58, ATerm t)
{
  t = SSL_hashtable_get(o_58, n_58);
  return(t);
}
static ATerm f_12 (ATerm l_56, ATerm m_56, ATerm t)
{
  ATerm u_136 = NULL;
  t = lookup_table_0_1(l_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_136 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_12(m_56, u_136, t);
  return(t);
}
static ATerm l_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm w_136 = NULL,x_136 = NULL;
  t = term_u_62;
  w_136 = t;
  t = term_k_59;
  x_136 = t;
  t = term_v_62;
  t = i_12(w_136, x_136, t);
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = term_w_62;
  return(t);
}
static ATerm u_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm y_136 = NULL,z_136 = NULL,a_137 = NULL,b_137 = NULL;
  t = term_u_62;
  a_137 = t;
  t = term_k_59;
  b_137 = t;
  t = term_v_62;
  t = i_12(a_137, b_137, t);
  t = term_x_62;
  y_136 = t;
  t = term_k_59;
  z_136 = t;
  t = term_y_62;
  t = i_12(y_136, z_136, t);
  t = term_z_62;
  return(t);
}
static ATerm w_18 (ATerm t)
{
  t = term_a_63;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm b_63 = t;
  int c_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_18, p_18, q_18, t);
      LocalPopChoice(c_63);
    }
  else
    {
      t = b_63;
      t = Option_3_0(u_18, v_18, w_18, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_89 (ATerm), ATerm c_89 (ATerm), ATerm t)
{
  ATerm c_137 = NULL,d_137 = NULL,e_137 = NULL,g_137 = NULL,h_137 = NULL,i_137 = NULL,j_31 = NULL;
  i_137 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_137 = ATgetFirst((ATermList) t);
      e_137 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_137);
  c_137 = t;
  t = d_137;
  t = b_89(t);
  g_137 = t;
  t = e_137;
  t = c_89(t);
  h_137 = t;
  t = (ATerm) ATinsert(CheckATermList(h_137), g_137);
  j_31 = t;
  t = SSLsetAnnotations(j_31, c_137);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_130 (ATerm), ATerm t)
{
  ATerm n_137 = NULL,o_137 = NULL,p_137 = NULL,q_137 = NULL,s_137 = NULL,t_137 = NULL,l_31 = NULL;
  n_137 = t;
  {
    ATerm d_63 = t;
    int f_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_g_63;
        t = r_130(t);
        LocalPopChoice(f_63);
      }
    else
      {
        t = d_63;
      }
  }
  t = n_137;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_137 = ATgetFirst((ATermList) t);
      q_137 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_137);
  o_137 = t;
  t = term_h_61;
  t_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_61, p_137);
  t = i_12(t_137, p_137, t);
  t = q_137;
  {
    static ATerm e_138 (ATerm t)
    {
      ATerm h_63 = t;
      int i_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_63 = t;
          int k_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_137 = NULL;
              w_137 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_137;
              LocalPopChoice(k_63);
            }
          else
            {
              t = j_63;
              t = r_130(t);
              t = Cons_2_0(_id, e_138, t);
            }
          LocalPopChoice(i_63);
        }
      else
        {
          t = h_63;
          {
            ATerm z_137 = NULL,a_138 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_137 = ATgetFirst((ATermList) t);
                a_138 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_138), (ATerm) ATmakeAppl(sym_Undefined_1, z_137));
          }
        }
      return(t);
    }
    t = e_138(t);
  }
  s_137 = t;
  t = (ATerm) ATinsert(CheckATermList(s_137), (ATerm) ATmakeAppl(sym_Program_1, p_137));
  l_31 = t;
  t = SSLsetAnnotations(l_31, o_137);
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm s_138 = NULL;
  s_138 = t;
  if(match_string(t, "--help"))
    {
      t = s_138;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_138;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_138;
        }
    }
  return(t);
}
static ATerm b_19 (ATerm t)
{
  ATerm t_138 = NULL,u_138 = NULL;
  t = term_a_62;
  t_138 = t;
  t = term_k_59;
  u_138 = t;
  t = term_l_63;
  t = i_12(t_138, u_138, t);
  t = term_m_63;
  return(t);
}
static ATerm h_19 (ATerm t)
{
  t = term_n_63;
  return(t);
}
static ATerm k_19 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_130 (ATerm), ATerm t)
{
  ATerm j_138 = NULL,k_138 = NULL,l_138 = NULL,m_138 = NULL,n_138 = NULL,o_138 = NULL,p_138 = NULL,r_138 = NULL;
  l_138 = t;
  t = term_s_60;
  m_138 = t;
  t = term_o_63;
  t = lookup_table_0_1(m_138, t);
  r_138 = t;
  t = term_u_60;
  n_138 = t;
  t = (ATerm) ATempty;
  o_138 = t;
  t = r_138;
  if(match_cons(t, sym_Hashtable_1))
    {
      p_138 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12(n_138, o_138, p_138, t);
  t = l_138;
  {
    static ATerm x_18 (ATerm t)
    {
      ATerm p_63 = t;
      int q_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_130(t);
          LocalPopChoice(q_63);
        }
      else
        {
          t = p_63;
          {
            ATerm r_63 = t;
            int s_63 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_18, b_19, h_19, t);
                LocalPopChoice(s_63);
              }
            else
              {
                t = r_63;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_18, t);
  }
  {
    ATerm t_63 = t;
    int u_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_139 = NULL;
        f_139 = t;
        {
          ATerm v_63 = t;
          int w_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_60 = NULL;
              t = f_139;
              {
                ATerm x_63 = t;
                int y_63 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_60 = NULL,f_60 = NULL;
                    t = term_p_56;
                    e_60 = t;
                    t = term_a_62;
                    f_60 = t;
                    t = term_b_62;
                    t = f_12(e_60, f_60, t);
                    LocalPopChoice(y_63);
                  }
                else
                  {
                    t = x_63;
                    t = fetch_1_0(k_19, t);
                  }
              }
              t = f_139;
              t = default_system_usage_0_0(t);
              t = term_w_59;
              d_60 = t;
              t = SSL_exit(d_60);
              LocalPopChoice(w_63);
            }
          else
            {
              t = v_63;
              {
                ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL;
                t = term_p_56;
                k_60 = t;
                t = term_u_62;
                l_60 = t;
                t = term_z_63;
                t = f_12(k_60, l_60, t);
                t = f_139;
                t = default_system_about_0_0(t);
                t = term_w_59;
                j_60 = t;
                t = SSL_exit(j_60);
              }
            }
        }
        LocalPopChoice(u_63);
      }
    else
      {
        t = t_63;
        {
          ATerm a_64 = t;
          int b_64 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_139 = NULL,h_139 = NULL,i_139 = NULL;
              static ATerm l_19 (ATerm t)
              {
                ATerm j_139 = NULL,k_139 = NULL,l_139 = NULL,u_31 = NULL;
                l_139 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    k_139 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(l_139);
                j_139 = t;
                t = k_139;
                if(((j_138 != NULL) && (j_138 != t)))
                  _fail(t);
                else
                  j_138 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, k_139);
                u_31 = t;
                t = SSLsetAnnotations(u_31, j_139);
                return(t);
              }
              t = fetch_1_0(l_19, t);
              t = term_m_36;
              h_139 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_138)), term_c_64);
              i_139 = t;
              t = SSL_printnl(h_139, i_139);
              t = (ATerm) ATmakeAppl(sym__2, term_m_36, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_138)), term_c_64));
              t = default_system_usage_0_0(t);
              t = term_o_36;
              g_139 = t;
              t = SSL_exit(g_139);
              LocalPopChoice(b_64);
            }
          else
            {
              t = a_64;
            }
        }
      }
  }
  k_138 = t;
  t = term_s_60;
  t = table_destroy_0_0(t);
  t = k_138;
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm t)
{
  ATerm q_139 = NULL,r_139 = NULL,s_139 = NULL,t_139 = NULL,u_139 = NULL;
  t = parse_options_1_0(q_128, t);
  q_139 = t;
  t = term_d_64;
  t = table_create_0_0(t);
  t = term_d_64;
  r_139 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_64, term_e_64, q_139);
  t = lookup_table_0_1(r_139, t);
  u_139 = t;
  t = term_e_64;
  s_139 = t;
  t = u_139;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_12(s_139, q_139, t_139, t);
  t = q_139;
  t = s_128(t);
  {
    ATerm f_64 = t;
    int g_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_128, t);
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
              t = t_128(t);
              t = report_success_0_0(t);
              LocalPopChoice(i_64);
            }
          else
            {
              t = h_64;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm m_19 (ATerm t)
{
  ATerm j_64 = t;
  int k_64 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = normalize_spec_options_0_0(t);
      LocalPopChoice(k_64);
    }
  else
    {
      t = j_64;
      {
        ATerm l_64 = t;
        int m_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = input_option_0_0(t);
            LocalPopChoice(m_64);
          }
        else
          {
            t = l_64;
            {
              ATerm p_64 = t;
              int q_64 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = output_option_0_0(t);
                  LocalPopChoice(q_64);
                }
              else
                {
                  t = p_64;
                  {
                    ATerm r_64 = t;
                    int s_64 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Option_3_0(t_19, u_19, v_19, t);
                        LocalPopChoice(s_64);
                      }
                    else
                      {
                        t = r_64;
                        {
                          ATerm t_64 = t;
                          int y_64 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = verbose_option_0_0(t);
                              LocalPopChoice(y_64);
                            }
                          else
                            {
                              t = t_64;
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
static ATerm s_19 (ATerm t)
{
  t = input_1_0(z_19, t);
  return(t);
}
static ATerm t_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_19 (ATerm t)
{
  ATerm w_139 = NULL,x_139 = NULL;
  t = term_p_57;
  w_139 = t;
  t = term_k_59;
  x_139 = t;
  t = term_z_64;
  t = i_12(w_139, x_139, t);
  t = term_a_65;
  return(t);
}
static ATerm v_19 (ATerm t)
{
  t = term_b_65;
  return(t);
}
static ATerm z_19 (ATerm t)
{
  t = output_1_0(normalize_spec_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(m_19, default_usage_0_0, _id, s_19, t);
  return(t);
}
